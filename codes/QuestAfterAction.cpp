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

  if ( (byte_4B416BE & 1) == 0 )
  {
    sub_1BDB878(&BlankEarthQuestAfterAction_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__, v4);
    sub_1BDB878(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo, v5);
    sub_1BDB878(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo, v6);
    sub_1BDB878(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__, v7);
    sub_1BDB878(&QuestAfterAction_TitleInfoControlCallback_TypeInfo, v8);
    byte_4B416BE = 1;
  }
  v9 = (Il2CppObject *)sub_1BDBAC4(QuestAfterAction_TitleInfoControlCallback_TypeInfo);
  System_Object___ctor(v9, 0LL);
  this->fields._TitleInfoCtrlCallback_k__BackingField = (struct QuestAfterAction_TitleInfoControlCallback_o *)v9;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField, (int32_t)v9, v10, v11);
  v12 = (BlankEarthQuestAfterAction_o *)sub_1BDBAC4(BlankEarthQuestAfterAction_TypeInfo);
  BlankEarthQuestAfterAction___ctor(v12, 0LL);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = v12;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField,
    (int32_t)v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v15,
    (const MethodInfo_336C63C *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v15;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandTypeIds, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v18,
    (const MethodInfo_333A94C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v18;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtVoices, (int32_t)v18, v19, v20);
  this->fields.MapMoveBeforeFocusSpotId = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39166A0 *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
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
  sub_1BDB81C(p_endAct, 0, v2, v3);
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

  if ( (byte_4B416A4 & 1) == 0 )
  {
    sub_1BDB878(&QuestAfterAction_Command___TypeInfo, method);
    sub_1BDB878(&QuestAfterAction_Command_TypeInfo, v3);
    sub_1BDB878(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_1BDB878(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_1BDB878(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v7);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_1194/*"1"*/, v10);
    byte_4B416A4 = 1;
  }
  entity = 0LL;
  if ( this->fields.BlankEarthTargetWarId > 0 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B416C8 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v12);
    byte_4B416C8 = 1;
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
                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B3EFD0 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v12);
      byte_4B3EFD0 = 1;
    }
    v14 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v16 = *(_DWORD *)(*(_QWORD *)(v14 + 184) + 20LL);
    if ( !byte_4B3EFCF )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v12);
      v14 = (__int64)TerminalPramsManager_TypeInfo;
      byte_4B3EFCF = 1;
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
            (const MethodInfo_303395C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B3EFD0 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v12);
      byte_4B3EFD0 = 1;
    }
    v14 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v19 = *(_DWORD *)(*(_QWORD *)(v14 + 184) + 20LL);
    if ( !byte_4B3EFCF )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v12);
      v14 = (__int64)TerminalPramsManager_TypeInfo;
      byte_4B3EFCF = 1;
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
  if ( !byte_4B416CB )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v12);
    byte_4B416CB = 1;
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
  if ( !byte_4B3EFD0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v12);
    byte_4B3EFD0 = 1;
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
                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0) )
  {
LABEL_76:
    sub_1BDBAD4(v14, v12);
  }
  v14 = DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v14,
          &entity,
          v21,
          (const MethodInfo_32E1E88 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
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
  v14 = sub_1BDB920(QuestAfterAction_Command___TypeInfo, (unsigned int)v22 >> 1);
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
    v28 = sub_1BDBAC4(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v28, 0LL);
    if ( (unsigned int)(i - 1) >= *((_DWORD *)p_image + 6) )
      goto LABEL_75;
    v14 = System_Int32__Parse((System_String_o *)p_image[i + 3], 0LL);
    if ( !v28 )
      goto LABEL_76;
    *(_DWORD *)(v28 + 16) = v14;
    if ( (unsigned int)i >= *((_DWORD *)p_image + 6) )
LABEL_75:
      sub_1BDBADC(v14, v12, v29);
    v31 = p_image[i + 4];
    *(_QWORD *)(v28 + 24) = v31;
    sub_1BDB81C((CGThumbnailListItem_o *)(v28 + 24), v31, v29, v30);
    if ( *(_DWORD *)(v28 + 16) == 701
      && System_String__op_Equality(*(System_String_o **)(v28 + 24), (System_String_o *)StringLiteral_1194/*"1"*/, 0LL) )
    {
      break;
    }
    v14 = sub_1BDB9B4(v28, *(_QWORD *)(*(_QWORD *)v23 + 64LL));
    if ( !v14 )
    {
      v33 = sub_1BDBAF8();
      sub_1BDB9A0(v33, 0LL);
    }
    if ( v25 >= v23[6] )
      goto LABEL_75;
    *(_QWORD *)(v26 + 8 * v25) = v28;
    sub_1BDB81C((CGThumbnailListItem_o *)(v26 + v24), v28, v29, v32);
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
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandBuf, 0, v3, v4);
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
  const MethodInfo *v59; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v60; // x23
  int32_t v61; // w24
  int32_t v62; // w24
  System_String_o *lookup; // x24
  bool v64; // w24
  bool v65; // w23
  Il2CppObject *v66; // x23
  WarEntity_o *QuestId; // x0
  WarEntity_o *v68; // x23
  BalanceConfig_c *v69; // x0
  bool v70; // w0
  __int64 v71; // x1
  uint32_t cctor_finished; // w9
  TerminalPramsManager_c *v73; // x0
  TerminalPramsManager_c *v74; // x0
  int32_t id; // w19
  __int64 v76; // x1
  bool v77; // w23
  TerminalPramsManager_c *v78; // x0
  Il2CppObject *Master_object; // x23
  WarReleaseEntity_o *OpenEntity; // x24
  __int64 *v81; // x19
  Il2CppObject *v82; // x23
  bool QuestEntity; // w0
  __int64 v84; // x1
  TerminalPramsManager_c *v85; // x0
  Il2CppObject *v86; // x23
  int32_t items_high; // w24
  Il2CppObject *v88; // x22
  int32_t v89; // w23
  TerminalPramsManager_c *v90; // x0
  Il2CppObject *v91; // x22
  int32_t v92; // w24
  bool IsOverwriteCommandNone; // w0
  __int64 v94; // x8
  __int64 v95; // x0
  unsigned int **p_commandBuf; // x28
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  int *commandBuf; // x8
  unsigned __int64 v100; // x22
  il2cpp_array_size_t v101; // w29
  __int64 v102; // x24
  const MethodInfo *v103; // x3
  __int64 v104; // x8
  System_String_o *v105; // x1
  System_String_o **v106; // x25
  int v107; // w8
  bool v108; // w8
  unsigned int **v109; // x23
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
  System_String_array *v159; // [xsp+10h] [xbp-90h]
  int32_t svtId; // [xsp+1Ch] [xbp-84h] BYREF
  Il2CppObject *v161; // [xsp+20h] [xbp-80h] BYREF
  QuestEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *v163; // [xsp+30h] [xbp-70h] BYREF
  QuestEntity_o *v164; // [xsp+38h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4B416A3 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, isBeforeAction);
    sub_1BDB878(&bool_TypeInfo, v5);
    sub_1BDB878(&QuestAfterAction_Command___TypeInfo, v6);
    sub_1BDB878(&QuestAfterAction_Command_TypeInfo, v7);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventMissionMaster___, v8);
    sub_1BDB878(&Method_DataManager_GetMasterData_QuestMaster___, v9);
    sub_1BDB878(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v10);
    sub_1BDB878(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v11);
    sub_1BDB878(&Method_DataManager_GetMasterData_WarMaster___, v12);
    sub_1BDB878(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v13);
    sub_1BDB878(&Method_DataManager_GetMaster_QuestBehaviorMaster___, v14);
    sub_1BDB878(&Method_DataManager_GetMaster_QuestMaster___, v15);
    sub_1BDB878(&Method_DataManager_GetMaster_ShopMaster___, v16);
    sub_1BDB878(&Method_DataManager_GetMaster_WarMaster___, v17);
    sub_1BDB878(&Method_DataManager_GetMaster_WarReleaseMaster___, v18);
    sub_1BDB878(&DataManager_TypeInfo, v19);
    sub_1BDB878(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v20);
    sub_1BDB878(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v21);
    sub_1BDB878(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v22);
    sub_1BDB878(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v23);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__, v24);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v25);
    sub_1BDB878(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____, v26);
    sub_1BDB878(&Method_System_Linq_Enumerable_Contains_int___, v27);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v28);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v30);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v31);
    sub_1BDB878(&QuestAfterAction_VoiceInfo_TypeInfo, v32);
    sub_1BDB878(&StringLiteral_16697/*"afterActionBk"*/, v33);
    this = (QuestAfterAction_o *)sub_1BDB878(&StringLiteral_820/*","*/, v34);
    byte_4B416A3 = 1;
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
           (const MethodInfo_303E8F8 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v4, v35);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B3EFD0 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v35);
      byte_4B3EFD0 = 1;
    }
    v37 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v37 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v37->static_fields->_QuestId_k__BackingField;
    if ( !byte_4B3EFCF )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v35);
      v37 = TerminalPramsManager_TypeInfo;
      byte_4B3EFCF = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B3EEEF )
  {
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v40);
    byte_4B3EEEF = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  klass = MasterData_object[2].fields.list->klass;
  if ( !klass )
    goto LABEL_337;
  if ( !klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr )
    goto LABEL_80;
  if ( !LODWORD(MasterData_object[3].monitor) )
    j_il2cpp_runtime_class_init_0(MasterData_object);
  if ( !byte_4B3EEEF )
  {
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v40);
    byte_4B3EEEF = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v44 = MasterData_object[2].fields.list->klass;
  if ( !v44 )
    goto LABEL_337;
  methodPtr = v44->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr;
  if ( !methodPtr )
    goto LABEL_337;
  v46 = *((_DWORD *)methodPtr + 5);
  if ( !byte_4B3EEEF )
  {
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v40);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    byte_4B3EEEF = 1;
  }
  if ( !LODWORD(MasterData_object[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(MasterData_object);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v47 = MasterData_object[2].fields.list->klass;
  if ( !v47 )
    goto LABEL_337;
  v48 = v47->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr;
  if ( !v48 )
    goto LABEL_337;
  v49 = *((_DWORD *)v48 + 4);
  if ( v49 >= 1 )
  {
    if ( !LODWORD(MasterData_object[3].monitor) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4B3EEEF )
    {
      sub_1BDB878(&TerminalSceneComponent_TypeInfo, v40);
      byte_4B3EEEF = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v50 = MasterData_object[2].fields.list->klass;
    if ( !v50 )
      goto LABEL_337;
    v51 = v50->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr;
    if ( !v51 )
      goto LABEL_337;
    if ( !Instance )
      goto LABEL_337;
    afterActionVals = (System_String_array *)*((_QWORD *)v51 + 4);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !MasterData_object )
      goto LABEL_337;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        MasterData_object,
                                                                        v49,
                                                                        (const MethodInfo_32E1E3C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( !MasterData_object )
      goto LABEL_337;
    MasterName_k__BackingField_high = HIDWORD(MasterData_object->fields._MasterName_k__BackingField);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !MasterData_object )
      goto LABEL_337;
    goto LABEL_67;
  }
  if ( v46 >= 1 )
  {
    if ( !LODWORD(MasterData_object[3].monitor) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4B3EEEF )
    {
      sub_1BDB878(&TerminalSceneComponent_TypeInfo, v40);
      byte_4B3EEEF = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v53 = MasterData_object[2].fields.list->klass;
    if ( !v53 )
      goto LABEL_337;
    v54 = v53->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr;
    if ( !v54 )
      goto LABEL_337;
    afterActionVals = (System_String_array *)*((_QWORD *)v54 + 4);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !MasterData_object )
      goto LABEL_337;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        MasterData_object,
                                                                        v46,
                                                                        (const MethodInfo_32E1E3C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    if ( !MasterData_object )
      goto LABEL_337;
    MasterName_k__BackingField_high = (int32_t)MasterData_object->fields._MasterName_k__BackingField;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !MasterData_object )
      goto LABEL_337;
LABEL_67:
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WarMaster__getByEventId(
                                                                        (WarMaster_o *)MasterData_object,
                                                                        MasterName_k__BackingField_high,
                                                                        0LL);
    if ( !MasterData_object )
      goto LABEL_337;
    MasterKind_k__BackingField = MasterData_object->fields._MasterKind_k__BackingField;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B4142B )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
      byte_4B4142B = 1;
    }
    v56 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v56 = TerminalPramsManager_TypeInfo;
    }
    v56->static_fields->_WarId_k__BackingField = MasterKind_k__BackingField;
    if ( !byte_4B3EEEF )
    {
      sub_1BDB878(&TerminalSceneComponent_TypeInfo, v40);
      byte_4B3EEEF = 1;
    }
    v57 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v57 = TerminalSceneComponent_TypeInfo;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v57->static_fields->mInstance;
    if ( !MasterData_object )
      goto LABEL_337;
    TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)MasterData_object, 0, 0LL);
    if ( afterActionVals )
      goto LABEL_232;
  }
LABEL_80:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B416C8 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
    byte_4B416C8 = 1;
  }
  v58 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v58 = TerminalPramsManager_TypeInfo;
  }
  if ( !v58->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16697/*"afterActionBk"*/, 0LL) )
  {
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_PlayerPrefs__GetString_70242896(
                                                                        (System_String_o *)StringLiteral_16697/*"afterActionBk"*/,
                                                                        0LL);
    if ( !MasterData_object )
      goto LABEL_337;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split(
                                                                        (System_String_o *)MasterData_object,
                                                                        0x2Cu,
                                                                        0,
                                                                        0LL);
    if ( !MasterData_object )
      goto LABEL_337;
    v60 = MasterData_object;
    if ( !LODWORD(MasterData_object->fields._MasterName_k__BackingField) )
      goto LABEL_477;
    v61 = System_Int32__Parse(*(System_String_o **)&MasterData_object->fields.revision, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B41425 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
      byte_4B41425 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    HIDWORD(MasterData_object[2].fields.list->fields.items) = v61;
    if ( LODWORD(v60->fields._MasterName_k__BackingField) <= 1 )
      goto LABEL_477;
    v62 = System_Int32__Parse((System_String_o *)v60->fields.list, 0LL);
    if ( !byte_4B41429 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
      byte_4B41429 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    LODWORD(MasterData_object[2].fields.list->fields._monitor) = v62;
    if ( LODWORD(v60->fields._MasterName_k__BackingField) <= 2 )
      goto LABEL_477;
    lookup = (System_String_o *)v60->fields._lookup;
    if ( !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v64 = System_Boolean__Parse(lookup, 0LL);
    if ( !byte_4B416C9 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
      byte_4B416C9 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE5(MasterData_object[2].fields.list[1].fields.CollectionChanged) = v64;
    if ( LODWORD(v60->fields._MasterName_k__BackingField) <= 3 )
      goto LABEL_477;
    v65 = System_Boolean__Parse((System_String_o *)v60->fields.seriazlier, 0LL);
    if ( !byte_4B416CA )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
      byte_4B416CA = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE6(MasterData_object[2].fields.list[1].fields.CollectionChanged) = v65;
    if ( !byte_4B416CB )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      byte_4B416CB = 1;
    }
    if ( !LODWORD(MasterData_object[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(MasterData_object);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE5(MasterData_object[2].fields.list[1].fields.CollectionChanged) )
    {
      if ( !Instance )
        goto LABEL_337;
      v66 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B3EFD0 )
      {
        sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
        byte_4B3EFD0 = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v66 )
        goto LABEL_337;
      QuestId = WarMaster__getByLastQuestId(
                  (WarMaster_o *)v66,
                  HIDWORD(MasterData_object[2].fields.list->fields.items),
                  0LL);
      if ( QuestId )
      {
        v68 = QuestId;
        v69 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v69 = BalanceConfig_TypeInfo;
        }
        v70 = System_Linq_Enumerable__Contains_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v69->static_fields->MainInterludeMapReturnWarIds,
                v68->fields.id,
                (const MethodInfo_304CA50 *)Method_System_Linq_Enumerable_Contains_int___);
        cctor_finished = TerminalPramsManager_TypeInfo->_2.cctor_finished;
        if ( v70 )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4B416CC )
          {
            sub_1BDB878(&TerminalPramsManager_TypeInfo, v71);
            byte_4B416CC = 1;
          }
          v73 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v73 = TerminalPramsManager_TypeInfo;
          }
          v73->static_fields->_IsWarClear_k__BackingField = 0;
        }
        else
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4B416CC )
          {
            sub_1BDB878(&TerminalPramsManager_TypeInfo, v71);
            byte_4B416CC = 1;
          }
          v74 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v74 = TerminalPramsManager_TypeInfo;
          }
          v74->static_fields->_IsWarClear_k__BackingField = 1;
          id = v68->fields.id;
          if ( !byte_4B4142B )
          {
            sub_1BDB878(&TerminalPramsManager_TypeInfo, v71);
            v74 = TerminalPramsManager_TypeInfo;
            byte_4B4142B = 1;
          }
          if ( !v74->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v74);
            v74 = TerminalPramsManager_TypeInfo;
          }
          v74->static_fields->_WarId_k__BackingField = id;
          v77 = TerminalPramsManager__CheckIsOrdealCallWarClear(v68, 0LL);
          if ( !byte_4B416CD )
          {
            sub_1BDB878(&TerminalPramsManager_TypeInfo, v76);
            byte_4B416CD = 1;
          }
          v78 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v78 = TerminalPramsManager_TypeInfo;
          }
          v78->static_fields->_IsOrdealCallWarClear_k__BackingField = v77;
        }
      }
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3F84F )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
    byte_4B3F84F = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_337;
  OpenEntity = WarReleaseMaster__GetOpenEntity(
                 (WarReleaseMaster_o *)Master_object,
                 HIDWORD(MasterData_object[2].fields.list->klass),
                 0LL);
  if ( !byte_4B416CE )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
    byte_4B416CE = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  v81 = &qword_4B3E000;
  if ( HIBYTE(MasterData_object[2].fields.list[1].fields._blockReentrancyCount) )
  {
    if ( !LODWORD(MasterData_object[3].monitor) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4B412E1 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
      byte_4B412E1 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    v81 = &qword_4B3E000;
    if ( !*((_BYTE *)&MasterData_object[2].fields.list[1].fields._blockReentrancyCount + 4) )
      goto LABEL_231;
  }
  if ( !Instance )
    goto LABEL_337;
  v82 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !*((_BYTE *)v81 + 4048) )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
    *((_BYTE *)v81 + 4048) = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v82 )
    goto LABEL_337;
  QuestEntity = QuestMaster__TryGetQuestEntity(
                  (QuestMaster_o *)v82,
                  &entity,
                  HIDWORD(MasterData_object[2].fields.list->fields.items),
                  0LL);
  afterActionVals = 0LL;
  if ( !QuestEntity )
    goto LABEL_232;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_337;
  if ( QuestEntity__IsOpenByTime(entity, 0, 0LL) )
  {
LABEL_187:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B416C8 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v84);
      byte_4B416C8 = 1;
    }
    v85 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v85 = TerminalPramsManager_TypeInfo;
    }
    if ( v85->static_fields->_IsPhaseClear_k__BackingField )
    {
      v86 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !*((_BYTE *)v81 + 4048) )
      {
        sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
        *((_BYTE *)v81 + 4048) = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      items_high = HIDWORD(MasterData_object[2].fields.list->fields.items);
      if ( !byte_4B3EFCF )
      {
        sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
        byte_4B3EFCF = 1;
      }
      if ( !LODWORD(MasterData_object[3].monitor) )
      {
        j_il2cpp_runtime_class_init_0(MasterData_object);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v86 )
        goto LABEL_337;
      afterActionVals = QuestPhaseDetailAddMaster__GetAfterAction(
                          (QuestPhaseDetailAddMaster_o *)v86,
                          items_high,
                          LODWORD(MasterData_object[2].fields.list->fields._monitor) + 1,
                          0LL);
      if ( afterActionVals )
        goto LABEL_232;
      v88 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !*((_BYTE *)v81 + 4048) )
      {
        sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
        *((_BYTE *)v81 + 4048) = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      v89 = HIDWORD(MasterData_object[2].fields.list->fields.items);
      if ( !byte_4B3EFCF )
      {
        sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
        byte_4B3EFCF = 1;
      }
      if ( !LODWORD(MasterData_object[3].monitor) )
      {
        j_il2cpp_runtime_class_init_0(MasterData_object);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v88 )
        goto LABEL_337;
      afterActionVals = QuestPhaseDetailMaster__GetAfterAction(
                          (QuestPhaseDetailMaster_o *)v88,
                          v89,
                          LODWORD(MasterData_object[2].fields.list->fields._monitor) + 1,
                          0LL);
      if ( afterActionVals )
        goto LABEL_232;
      v85 = TerminalPramsManager_TypeInfo;
    }
    if ( !v85->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v85);
    if ( !byte_4B416CB )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v84);
      byte_4B416CB = 1;
    }
    v90 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v90 = TerminalPramsManager_TypeInfo;
    }
    if ( v90->static_fields->_IsQuestClear_k__BackingField )
    {
      if ( !v90->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v90);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
      afterActionVals = 0LL;
      if ( ((unsigned __int8)MasterData_object & 1) == 0 )
      {
        if ( !entity )
          goto LABEL_337;
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
  v91 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3EFD0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
    byte_4B3EFD0 = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  v92 = HIDWORD(MasterData_object[2].fields.list->fields.items);
  if ( !byte_4B3EFCF )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    byte_4B3EFCF = 1;
  }
  if ( !LODWORD(MasterData_object[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(MasterData_object);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v91 )
    goto LABEL_337;
  if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond(
         (QuestBehaviorMaster_o *)v91,
         v92,
         LODWORD(MasterData_object[2].fields.list->fields._monitor) + 1,
         7,
         0LL)
    || (IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(afterActionVals, (const MethodInfo *)v40),
        !afterActionVals)
    || IsOverwriteCommandNone
    || (v94 = *(_QWORD *)&afterActionVals->max_length, (int)v94 < 2)
    || (v94 & 1) != 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B416CF )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
      byte_4B416CF = 1;
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
      if ( !byte_4B3F3B7 )
      {
        sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
        byte_4B3F3B7 = 1;
      }
      v140 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v140 = TerminalPramsManager_TypeInfo;
      }
      v140->static_fields->_IsAutoResume_k__BackingField = 1;
      if ( !byte_4B41427 )
      {
        sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
        v140 = TerminalPramsManager_TypeInfo;
        byte_4B41427 = 1;
      }
      if ( !v140->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v140);
        v140 = TerminalPramsManager_TypeInfo;
      }
      v140->static_fields->_DispState_k__BackingField = 2;
      if ( !byte_4B416CF )
      {
        sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
        v140 = TerminalPramsManager_TypeInfo;
        byte_4B416CF = 1;
      }
      if ( !v140->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v140);
        v140 = TerminalPramsManager_TypeInfo;
      }
      BeforeQuestStartWarId_k__BackingField = v140->static_fields->_BeforeQuestStartWarId_k__BackingField;
      if ( !byte_4B4142B )
      {
        sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
        v140 = TerminalPramsManager_TypeInfo;
        byte_4B4142B = 1;
      }
      if ( !v140->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v140);
        v140 = TerminalPramsManager_TypeInfo;
      }
      v140->static_fields->_WarId_k__BackingField = BeforeQuestStartWarId_k__BackingField;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4B3EEEF )
      {
        sub_1BDB878(&TerminalSceneComponent_TypeInfo, v40);
        byte_4B3EEEF = 1;
      }
      v142 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v142 = TerminalSceneComponent_TypeInfo;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v142->static_fields->mInstance;
      if ( !MasterData_object )
        goto LABEL_337;
      TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)MasterData_object, 0, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v143 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !byte_4B3F84F )
      {
        sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
        byte_4B3F84F = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v143 )
        goto LABEL_337;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v143,
             &v161,
             HIDWORD(MasterData_object[2].fields.list->klass),
             (const MethodInfo_32E1E88 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v161;
        if ( !v161 )
          goto LABEL_337;
        v4->fields.ActionMapTargetId = WarEntity__GetBaseMap((WarEntity_o *)v161, 0LL);
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B416D0 )
      {
        sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
        byte_4B416D0 = 1;
      }
      v144 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v144 = TerminalPramsManager_TypeInfo;
      }
      v144->static_fields->_BeforeQuestStartWarId_k__BackingField = 0;
    }
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16697/*"afterActionBk"*/, 0LL);
    return;
  }
  v95 = sub_1BDB920(QuestAfterAction_Command___TypeInfo, (unsigned int)v94 >> 1);
  v4->fields.commandBuf = (struct QuestAfterAction_Command_array *)v95;
  p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
  sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields.commandBuf, v95, v97, v98);
  commandBuf = (int *)v4->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_337;
  v158 = 0;
  v100 = 0LL;
  v101 = 0;
  v159 = afterActionVals;
  while ( (__int64)v100 < commandBuf[6] )
  {
    v102 = sub_1BDBAC4(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v102, 0LL);
    if ( v101 >= afterActionVals->max_length )
      goto LABEL_477;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                        afterActionVals->m_Items[v101],
                                                                        0LL);
    if ( !v102 )
      goto LABEL_337;
    *(_DWORD *)(v102 + 16) = (_DWORD)MasterData_object;
    v104 = (int)v101 | 1LL;
    if ( (unsigned int)v104 >= afterActionVals->max_length )
      goto LABEL_477;
    v105 = afterActionVals->m_Items[v104];
    *(_QWORD *)(v102 + 24) = v105;
    v106 = (System_String_o **)(v102 + 24);
    sub_1BDB81C((CGThumbnailListItem_o *)(v102 + 24), (int32_t)v105, (int32_t)v59, v103);
    if ( !v101 && !v4->fields.isRequestedStopBgm && *(_DWORD *)(v102 + 16) == 850 )
      v4->fields.isRequestedStopBgm = 1;
    if ( (v4->fields.MapMoveBeforeFocusSpotId & 0x80000000) != 0 && *(_DWORD *)(v102 + 16) == 350 )
    {
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v106;
      if ( !*v106 )
        goto LABEL_337;
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split(
                                                                          (System_String_o *)MasterData_object,
                                                                          0x2Cu,
                                                                          0,
                                                                          0LL);
      if ( !MasterData_object )
        goto LABEL_337;
      if ( SLODWORD(MasterData_object->fields._MasterName_k__BackingField) >= 4 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                            (System_String_o *)MasterData_object->fields.seriazlier,
                                                                            0LL);
        v4->fields.MapMoveBeforeFocusSpotId = (int)MasterData_object;
      }
    }
    v107 = *(_DWORD *)(v102 + 16);
    if ( v4->fields.IsMoveToEventRewardShop || v107 != 700 )
    {
      if ( v107 == 703 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v106;
        if ( !*v106 )
          goto LABEL_337;
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split_62624272(
                                                                            (System_String_o *)MasterData_object,
                                                                            (System_String_o *)StringLiteral_820/*","*/,
                                                                            0,
                                                                            0LL);
        if ( !MasterData_object )
          goto LABEL_337;
        if ( SLODWORD(MasterData_object->fields._MasterName_k__BackingField) >= 3 )
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                              (System_String_o *)MasterData_object->fields._lookup,
                                                                              0LL);
          v108 = (int)MasterData_object > 0;
        }
        else
        {
          v108 = 0;
        }
        v4->fields.IsMoveBeforeFadeIn = v108;
        v4->fields.IsMoveToClassScore = 1;
        v107 = *(_DWORD *)(v102 + 16);
      }
      if ( v107 == 800 )
      {
        v109 = p_commandBuf;
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction_Command__GetAvailableRandomVoice(
                                                                            (QuestAfterAction_Command_o *)v102,
                                                                            &svtId,
                                                                            v59);
        if ( MasterData_object )
        {
          svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.svtVoices;
          v111 = svtId;
          v112 = MasterData_object;
          v113 = sub_1BDBAC4(QuestAfterAction_VoiceInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v113, 0LL);
          *(_DWORD *)(v113 + 16) = v111;
          *(_QWORD *)(v113 + 24) = v112;
          sub_1BDB81C((CGThumbnailListItem_o *)(v113 + 24), (int32_t)v112, v114, v115);
          if ( !svtVoices )
            goto LABEL_337;
          System_Collections_Generic_Dictionary_int__object___Add(
            svtVoices,
            v100,
            (Il2CppObject *)v113,
            (const MethodInfo_333B320 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
        }
        v107 = *(_DWORD *)(v102 + 16);
        p_commandBuf = v109;
        afterActionVals = v159;
      }
      if ( v107 == 702 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v106;
        if ( !*v106 )
          goto LABEL_337;
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split_62624272(
                                                                            (System_String_o *)MasterData_object,
                                                                            (System_String_o *)StringLiteral_820/*","*/,
                                                                            0,
                                                                            0LL);
        if ( !MasterData_object )
          goto LABEL_337;
        MasterName_k__BackingField = (System_String_c *)MasterData_object->fields._MasterName_k__BackingField;
        v117 = MasterData_object;
        if ( MasterName_k__BackingField )
        {
          if ( !(_DWORD)MasterName_k__BackingField )
            goto LABEL_477;
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
            if ( !byte_4B3F84F )
            {
              sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
              byte_4B3F84F = 1;
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
    v121 = *(_DWORD *)(v102 + 16);
    if ( v121 <= 205 )
    {
      if ( (unsigned int)(v121 - 100) < 0xF && ((0x7C1Fu >> (v121 - 100)) & 1) != 0 )
      {
        v40 = 0LL;
      }
      else
      {
        if ( (unsigned int)(v121 - 200) > 5 )
          goto LABEL_320;
        v40 = 1LL;
      }
    }
    else if ( v121 <= 550 )
    {
      if ( (unsigned int)(v121 - 400) < 0xD )
      {
        v40 = 2LL;
      }
      else
      {
        if ( v121 != 550 )
          goto LABEL_320;
        v40 = 3LL;
      }
    }
    else
    {
      v122 = v121 - 1000;
      if ( v122 >= 0xD || ((0x1C07u >> v122) & 1) == 0 )
        goto LABEL_320;
      v40 = 4LL;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.commandTypeIds;
    if ( !MasterData_object )
      goto LABEL_337;
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)MasterData_object,
                                                       v40,
                                                       (const MethodInfo_336CF70 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction__ExtractCommandTargetId(
                                                                        (QuestAfterAction_Command_o *)v102,
                                                                        v124);
    if ( !Item )
      goto LABEL_337;
    items = Item->fields._items;
    v126 = Method_System_Collections_Generic_List_int__Add__;
    ++Item->fields._version;
    if ( !items )
      goto LABEL_337;
    size = Item->fields._size;
    v40 = (unsigned int)MasterData_object;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        Item,
        (int32_t)MasterData_object,
        *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
    }
    else
    {
      Item->fields._size = size + 1;
      items->m_Items[size + 1] = (int)MasterData_object;
    }
LABEL_320:
    if ( v4->fields.ActionMapTargetId <= 0 )
      QuestAfterAction__SetActionMap(v4, (QuestAfterAction_Command_o *)v102, v59);
    if ( *(_DWORD *)(v102 + 16) == 102 )
    {
      v128 = (QuestAfterAction_o *)System_Int32__Parse(*v106, 0LL);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction__GetMapGimmickId(
                                                                          v128,
                                                                          (int32_t)v128,
                                                                          v129);
      if ( !MasterData_object )
        goto LABEL_337;
      v130 = (System_String_c *)MasterData_object->fields._MasterName_k__BackingField;
      v131 = MasterData_object;
      if ( (int)v130 >= 1 )
      {
        v132 = 0LL;
        while ( v132 < (unsigned int)v130 )
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.invalidMapGimmickIdList;
          if ( !MasterData_object )
            goto LABEL_337;
          v40 = *((unsigned int *)&v131->fields.revision + v132);
          v133 = *(System_String_Fields *)&MasterData_object->fields._MasterKind_k__BackingField;
          v134 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(MasterData_object->fields._MasterName_k__BackingField);
          if ( !*(_QWORD *)&v133 )
            goto LABEL_337;
          MasterName_k__BackingField_low = SLODWORD(MasterData_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(*(_QWORD *)&v133 + 24LL) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)MasterData_object,
              v40,
              *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(MasterData_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
            *(_DWORD *)(*(_QWORD *)&v133 + 4 * MasterName_k__BackingField_low + 32) = v40;
          }
          LODWORD(v130) = v131->fields._MasterName_k__BackingField;
          if ( (__int64)++v132 >= (int)v130 )
            goto LABEL_333;
        }
LABEL_477:
        sub_1BDBADC(MasterData_object, v40, v59);
      }
    }
LABEL_333:
    v136 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_337;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1BDB9B4(
                                                                        v102,
                                                                        *(_QWORD *)(*(_QWORD *)v136 + 64LL));
    if ( !MasterData_object )
    {
      v157 = sub_1BDBAF8();
      sub_1BDB9A0(v157, 0LL);
    }
    if ( v100 >= v136[6] )
      goto LABEL_477;
    v138 = &v136[2 * v100];
    *((_QWORD *)v138 + 4) = v102;
    sub_1BDB81C((CGThumbnailListItem_o *)(v138 + 8), v102, (int32_t)v59, v137);
    commandBuf = (int *)*p_commandBuf;
    v101 += 2;
    ++v100;
    if ( !*p_commandBuf )
      goto LABEL_337;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B416C8 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
    byte_4B416C8 = 1;
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
    v146 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B3EFD0 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
      byte_4B3EFD0 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v146 )
      goto LABEL_337;
    if ( QuestMaster__TryGetQuestEntity(
           (QuestMaster_o *)v146,
           &v164,
           HIDWORD(MasterData_object[2].fields.list->fields.items),
           0LL) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B3F84F )
      {
        sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
        byte_4B3F84F = 1;
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
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( v164 && MasterData_object )
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                              MasterData_object,
                                                                              &v163,
                                                                              v164->fields.spotId,
                                                                              (const MethodInfo_32E1E88 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)MasterData_object & 1) == 0 )
            goto LABEL_427;
          if ( v163 )
          {
            v150 = (int32_t)v163[1].klass;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4B416D1 )
            {
              sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
              byte_4B416D1 = 1;
            }
            v151 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v151 = TerminalPramsManager_TypeInfo;
            }
            v151->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = v150;
            goto LABEL_427;
          }
        }
LABEL_337:
        sub_1BDBAD4(MasterData_object, v40);
      }
    }
  }
LABEL_427:
  v152 = TerminalPramsManager_TypeInfo;
  if ( (v158 & 1) == 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B3F3B7 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
      byte_4B3F3B7 = 1;
    }
    v153 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v153 = TerminalPramsManager_TypeInfo;
    }
    v153->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_4B41427 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
      v153 = TerminalPramsManager_TypeInfo;
      byte_4B41427 = 1;
    }
    if ( !v153->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v153);
      v153 = TerminalPramsManager_TypeInfo;
    }
    v153->static_fields->_DispState_k__BackingField = 2;
    if ( !byte_4B3F84F )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
      v153 = TerminalPramsManager_TypeInfo;
      byte_4B3F84F = 1;
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
      goto LABEL_481;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B412E1 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
      byte_4B412E1 = 1;
    }
    v152 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v152 = TerminalPramsManager_TypeInfo;
    }
    if ( v152->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
LABEL_481:
      if ( !v152->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v152);
      if ( !byte_4B412E2 )
      {
        sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
        byte_4B412E2 = 1;
      }
      v152 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v152 = TerminalPramsManager_TypeInfo;
      }
      v152->static_fields->_BlankEarthSpotId_k__BackingField = 0;
      if ( !byte_4B412E1 )
      {
        sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
        v152 = TerminalPramsManager_TypeInfo;
        byte_4B412E1 = 1;
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
        if ( !byte_4B41427 )
        {
          sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
          byte_4B41427 = 1;
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
  if ( !byte_4B4142A )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v40);
    byte_4B4142A = 1;
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

  if ( (byte_4B416A1 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_16697/*"afterActionBk"*/, v1);
    byte_4B416A1 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16697/*"afterActionBk"*/, 0LL);
}


int32_t __fastcall QuestAfterAction__ExtractCommandTargetId(
        QuestAfterAction_Command_o *command,
        const MethodInfo *method)
{
  QuestAfterAction_Command_o *v2; // x19
  QuestAfterAction_Command_c *param; // x8
  __int64 v4; // x2

  v2 = command;
  if ( (byte_4B416A5 & 1) == 0 )
  {
    command = (QuestAfterAction_Command_o *)sub_1BDB878(&StringLiteral_820/*","*/, method);
    byte_4B416A5 = 1;
  }
  if ( !v2 )
    goto LABEL_11;
  command = (QuestAfterAction_Command_o *)v2->fields.param;
  if ( !command )
    goto LABEL_11;
  command = (QuestAfterAction_Command_o *)System_String__Contains(
                                            (System_String_o *)command,
                                            (System_String_o *)StringLiteral_820/*","*/,
                                            0LL);
  param = (QuestAfterAction_Command_c *)v2->fields.param;
  if ( ((unsigned __int8)command & 1) == 0 )
    return System_Int32__Parse((System_String_o *)param, 0LL);
  if ( !param || (command = (QuestAfterAction_Command_o *)System_String__Split(v2->fields.param, 0x2Cu, 0, 0LL)) == 0LL )
LABEL_11:
    sub_1BDBAD4(command, method);
  if ( !LODWORD(command->fields.param) )
    sub_1BDBADC(command, method, v4);
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

  if ( (byte_4B416B2 & 1) == 0 )
  {
    sub_1BDB878(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86_TypeInfo, commandEnumerable);
    byte_4B416B2 = 1;
  }
  v5 = sub_1BDBAC4(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86_TypeInfo);
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86___ctor(
    (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_1BDBAD4(v6, v7);
  *(_QWORD *)(v5 + 56) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v5 + 56), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 48) = commandEnumerable;
  sub_1BDB81C((CGThumbnailListItem_o *)(v5 + 48), (int32_t)commandEnumerable, v10, v11);
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

  if ( (byte_4B416A6 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_Empty_QuestAfterAction_Command___, method);
    sub_1BDB878(&QuestAfterAction_Command___TypeInfo, v3);
    sub_1BDB878(&QuestAfterAction_Command_TypeInfo, v4);
    byte_4B416A6 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v8 = Method_System_Array_Empty_QuestAfterAction_Command___;
    v9 = *((_QWORD *)Method_System_Array_Empty_QuestAfterAction_Command___ + 7);
    if ( !v9 )
    {
      sub_1C2BF64(Method_System_Array_Empty_QuestAfterAction_Command___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C2BF08(inited);
    if ( !*(_DWORD *)(v10 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v10);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C2BF08(inited);
    return **(QuestAfterAction_Command_array ***)(v11 + 184);
  }
  else
  {
    if ( !actionVals
      || (IsNullOrEmpty = sub_1BDB920(
                            QuestAfterAction_Command___TypeInfo,
                            (unsigned int)((signed int)actionVals->max_length / 2))) == 0 )
    {
LABEL_25:
      sub_1BDBAD4(IsNullOrEmpty, v6);
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
        v17 = sub_1BDBAC4(QuestAfterAction_Command_TypeInfo);
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
        sub_1BDB81C((CGThumbnailListItem_o *)(v17 + 24), (int32_t)v20, v18, v19);
        IsNullOrEmpty = sub_1BDB9B4(v17, v12->obj.klass->_1.element_class);
        if ( !IsNullOrEmpty )
        {
          v23 = sub_1BDBAF8();
          sub_1BDB9A0(v23, 0LL);
        }
        if ( v14 >= v12->max_length )
LABEL_24:
          sub_1BDBADC(IsNullOrEmpty, v6, v18);
        *(_QWORD *)(v15 + 8 * v14) = v17;
        sub_1BDB81C((CGThumbnailListItem_o *)(v15 + v13), v17, v18, v21);
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

  if ( (byte_4B416BD & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase);
    sub_1BDB878(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_1BDB878(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_1BDB878(&Method_System_Linq_Enumerable_Any_string___, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v10);
    byte_4B416BD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3EFD0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v12);
    byte_4B3EFD0 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v14 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4B3EFCF )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v12);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4B3EFCF = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_33;
  result = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  v19 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3EFD0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v12);
    byte_4B3EFD0 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v19 )
LABEL_33:
    sub_1BDBAD4(Instance, v12);
  result = (System_String_array *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                                    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                                    (const MethodInfo_32E1E3C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v20 = result;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[8],
           (const MethodInfo_303F5F0 *)Method_System_Linq_Enumerable_Any_string___) )
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

  if ( (byte_4B416BC & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase);
    sub_1BDB878(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_1BDB878(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_1BDB878(&Method_System_Linq_Enumerable_Any_string___, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v10);
    byte_4B416BC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3EFD0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v12);
    byte_4B3EFD0 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v14 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4B3EFCF )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v12);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4B3EFCF = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_33;
  result = QuestPhaseDetailMaster__GetBeforeAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  v19 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3EFD0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v12);
    byte_4B3EFD0 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v19 )
LABEL_33:
    sub_1BDBAD4(Instance, v12);
  result = (System_String_array *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                                    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                                    (const MethodInfo_32E1E3C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v20 = result;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[7],
           (const MethodInfo_303F5F0 *)Method_System_Linq_Enumerable_Any_string___) )
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
        return dword_C2407C[commandId - 1000];
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
        const MethodInfo_30CA348 *method)
{
  UnityEngine_Object_o *MapGameObject; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( !method->rgctx_data )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
    if ( !method->rgctx_data )
      sub_1C2BF64();
  }
  MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(this, comType, id, state, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL);
  if ( v11 )
    return 0LL;
  if ( !MapGameObject )
    sub_1BDBAD4(v11, v12);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)MapGameObject,
           (const MethodInfo_3088520 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
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
  if ( (byte_4B416B8 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
    this = (QuestAfterAction_o *)sub_1BDB878(&SrcSpotBasePrefab_TypeInfo, v9);
    byte_4B416B8 = 1;
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
        sub_1BDBAD4(this, *(_QWORD *)&comType);
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

  if ( (byte_4B416A7 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_MapGimmickMaster___, *(_QWORD *)&spotId);
    sub_1BDB878(&Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B416A7 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (System_Object_array *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_303395C *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataMasterBase_object__object__int___getEntitys(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               (const MethodInfo_32E10C0 *)Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys__);
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
        sub_1BDBADC(Instance, name_low, v13);
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
            *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
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
    sub_1BDBAD4(Instance, name_low);
  }
LABEL_17:
  if ( !v10 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4B416B6 & 1) == 0 )
  {
    sub_1BDB878(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_4B416B6 = 1;
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

  if ( (byte_4B416A2 & 1) == 0 )
  {
    sub_1BDB878(&Method_CStateManager_QuestAfterAction___ctor__, method);
    sub_1BDB878(&Method_CStateManager_QuestAfterAction__add__, v4);
    sub_1BDB878(&CStateManager_QuestAfterAction__TypeInfo, v5);
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      v6);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__, v8);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Clear__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1BDB878(&QuestAfterAction_StateAdditional_TypeInfo, v13);
    sub_1BDB878(&QuestAfterAction_StateInstant_TypeInfo, v14);
    sub_1BDB878(&QuestAfterAction_StateMain_TypeInfo, v15);
    sub_1BDB878(&QuestAfterAction_StateNone_TypeInfo, v16);
    byte_4B416A2 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v18 = (CStateManager_T__o *)sub_1BDBAC4(CStateManager_QuestAfterAction__TypeInfo);
    CStateManager_object____ctor(
      v18,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_3270084 *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v18;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.fsm, (int32_t)v18, v19, v20);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v22 = (Il2CppObject *)sub_1BDBAC4(QuestAfterAction_StateNone_TypeInfo);
    System_Object___ctor(v22, 0LL);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v22,
      (const MethodInfo_327012C *)Method_CStateManager_QuestAfterAction__add__);
    v25 = (CStateManager_T__o *)*p_fsm;
    v26 = (Il2CppObject *)sub_1BDBAC4(QuestAfterAction_StateMain_TypeInfo);
    System_Object___ctor(v26, 0LL);
    if ( !v25 )
      goto LABEL_21;
    CStateManager_object___add(
      v25,
      1,
      (IState_T__o *)v26,
      (const MethodInfo_327012C *)Method_CStateManager_QuestAfterAction__add__);
    v27 = (CStateManager_T__o *)*p_fsm;
    v28 = (QuestAfterAction_StateAdditional_o *)sub_1BDBAC4(QuestAfterAction_StateAdditional_TypeInfo);
    QuestAfterAction_StateAdditional___ctor(v28, 0LL);
    if ( !v27 )
      goto LABEL_21;
    CStateManager_object___add(
      v27,
      2,
      (IState_T__o *)v28,
      (const MethodInfo_327012C *)Method_CStateManager_QuestAfterAction__add__);
    v29 = (CStateManager_T__o *)*p_fsm;
    v30 = (QuestAfterAction_StateInstant_o *)sub_1BDBAC4(QuestAfterAction_StateInstant_TypeInfo);
    QuestAfterAction_StateInstant___ctor(v30, 0LL);
    if ( !v29 )
      goto LABEL_21;
    CStateManager_object___add(
      v29,
      3,
      (IState_T__o *)v30,
      (const MethodInfo_327012C *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandBuf, 0, v31, v32);
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
                                                                                (const MethodInfo_336D204 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v34 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( ((unsigned __int8)commandTypeIds & 1) != 0 )
    {
      if ( !v34 )
        goto LABEL_21;
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds,
                                                                                  v33,
                                                                                  (const MethodInfo_336CF70 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !commandTypeIds )
        goto LABEL_21;
      v35 = HIDWORD(commandTypeIds->fields._entries) + 1;
      LODWORD(commandTypeIds->fields._entries) = 0;
      HIDWORD(commandTypeIds->fields._entries) = v35;
    }
    else
    {
      v36 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v36,
        (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v34 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        v34,
        v33,
        (Il2CppObject *)v36,
        (const MethodInfo_336CFFC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
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
                             (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.screenCollider, (int32_t)Component_object, v38, v39),
        (commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.screenCollider) == 0LL) )
  {
LABEL_21:
    sub_1BDBAD4(commandTypeIds, v24);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)commandTypeIds, 0, 0LL);
  this->fields.lastDispSpot = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.lastDispSpot, 0, v40, v41);
  v42 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.invalidMapGimmickIdList = v42;
  p_invalidMapGimmickIdList = &this->fields.invalidMapGimmickIdList;
  sub_1BDB81C((CGThumbnailListItem_o *)p_invalidMapGimmickIdList, (int32_t)v42, v44, v45);
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

  if ( (byte_4B416AA & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      *(_QWORD *)&commandType);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Contains__, v8);
    byte_4B416AA = 1;
  }
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         commandTypeIds,
         commandType,
         (const MethodInfo_336D204 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( commandTypeIds )
    {
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  commandTypeIds,
                                                                                  commandType,
                                                                                  (const MethodInfo_336CF70 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( commandTypeIds )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)commandTypeIds,
                 commandTypeId,
                 (const MethodInfo_36B9118 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_1BDBAD4(commandTypeIds, *(_QWORD *)&commandType);
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
      sub_1BDBADC(this, *(_QWORD *)&spotId, method);
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
    sub_1BDBAD4(this, *(_QWORD *)&spotId);
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
        sub_1BDBADC(this, method, v2);
      v7 = m_Items[v5];
      if ( !v7 )
        sub_1BDBAD4(this, method);
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

  if ( (byte_4B416BB & 1) == 0 )
  {
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, method);
    byte_4B416BB = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B3EEEF )
  {
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, method);
    byte_4B3EEEF = 1;
  }
  v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v2->fields.subRootGimmickP->klass;
  if ( !klass || (v2 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1BDBAD4(v2, method);
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
  __int64 v2; // x2
  __int64 v3; // x8

  if ( actionCommand )
  {
    v3 = *(_QWORD *)&actionCommand->max_length;
    if ( v3 )
    {
      if ( !(_DWORD)v3 )
        sub_1BDBADC(actionCommand, method, v2);
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

  if ( (byte_4B416B6 & 1) == 0 )
  {
    sub_1BDB878(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_4B416B6 = 1;
  }
  fsm = this->fields.fsm;
  return fsm && fsm->fields.m_state == 1;
}


bool __fastcall QuestAfterAction__IsPlayingAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4B416B6 & 1) == 0 )
  {
    sub_1BDB878(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_4B416B6 = 1;
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
      sub_1BDBADC(1LL, method, v2);
    if ( !*(_QWORD *)v7 )
      sub_1BDBAD4(1LL, method);
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

  if ( (byte_4B416AE & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, v2);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v3);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventMissionMaster___, v4);
    sub_1BDB878(&Method_DataManager_GetMaster_EventMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMaster_ShopActionMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMaster_ShopMaster___, v7);
    sub_1BDB878(&DataManager_TypeInfo, v8);
    sub_1BDB878(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v9);
    sub_1BDB878(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_1BDB878(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__, v14);
    sub_1BDB878(&EventMissionActionInfo_TypeInfo, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__, v16);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v18);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v19);
    byte_4B416AE = 1;
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
  if ( !byte_4B3EEEF )
  {
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v21);
    byte_4B3EEEF = 1;
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
      Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 v22->fields.shopId,
                 (const MethodInfo_32E1E3C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v30 = Entity;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_object )
          goto LABEL_67;
        v31 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                (int32_t)v30[1].monitor,
                (const MethodInfo_32E1E3C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v31 || !EventEntity__IsEventPeriod((EventEntity_o *)v31, 0LL, 0LL) )
          goto LABEL_66;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ShopActionMaster___);
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
          (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v55 = v54;
        while ( 1 )
        {
          v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v55,
                  (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
          if ( !v32 )
            break;
          current = v55.fields._current;
          if ( !v55.fields._current )
            sub_1BDBAD4(v32, v33);
          if ( LODWORD(v55.fields._current[1].monitor) == 4 )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4B416D2 )
            {
              sub_1BDB878(&TerminalPramsManager_TypeInfo, v33);
              byte_4B416D2 = 1;
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
              sub_1BDBAD4(0LL, v36);
            klass = current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_1BDB81C(
              (CGThumbnailListItem_o *)&TransitionInfo_k__BackingField->fields.afterActionVals,
              (int32_t)klass,
              v37,
              v38);
            v43 = v24->fields._TransitionInfo_k__BackingField;
            if ( !v43 )
              sub_1BDBAD4(v41, v42);
            v43->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v55,
          (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
      }
    }
  }
  else
  {
    Master_object = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_67;
    v25 = (DataManager_o *)Master_object;
    Master_object = (char *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Master_object,
                              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
      v28 = (EventMissionActionInfo_o *)sub_1BDBAC4(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_43827660(v28, v27, 0LL);
    }
    else
    {
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v25,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
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
      v28 = (EventMissionActionInfo_o *)sub_1BDBAC4(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v28, v45, 0LL);
    }
    Master_object = (char *)DataManager__GetMasterData_object_(
                              v25,
                              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Master_object )
      goto LABEL_67;
    v46 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            v22->fields.missionId,
            (const MethodInfo_32E1E3C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v46 )
    {
      v47 = v46;
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v25,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Master_object = (char *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                HIDWORD(v47[1].monitor),
                                (const MethodInfo_32E1E3C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_67;
      if ( EventEntity__IsEventPeriod((EventEntity_o *)Master_object, 0LL, 0LL) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4B416D2 )
        {
          sub_1BDB878(&TerminalPramsManager_TypeInfo, v48);
          byte_4B416D2 = 1;
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
            sub_1BDB81C((CGThumbnailListItem_o *)(Master_object + 32), (int32_t)vals, v50, v51);
            v53 = v24->fields._TransitionInfo_k__BackingField;
            if ( v53 )
            {
              v53->fields.optionId = v28->fields.optionId;
              return;
            }
          }
        }
LABEL_67:
        sub_1BDBAD4(Master_object, v21);
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

  if ( (byte_4B416AB & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, endAct);
    sub_1BDB878(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v5);
    sub_1BDB878(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v6);
    byte_4B416AB = 1;
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
      sub_1BDBAD4(0LL, endAct);
    Values = System_Collections_Generic_Dictionary_int__object___get_Values(
               (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
               (const MethodInfo_333B130 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    v9 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_57497272(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (const MethodInfo_36D56B8 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    QuestAfterAction__LoadVoice_35321704(
      this,
      (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v9,
      endAct,
      v10);
  }
}


void __fastcall QuestAfterAction__LoadVoice_35321704(
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
  System_String_o *VoiceAssetName_41738660; // x19
  Il2CppObject *v26; // x20
  System_Action_o *v27; // x22

  v5 = svtVInfos;
  while ( 1 )
  {
    if ( (byte_4B416AC & 1) == 0 )
    {
      sub_1BDB878(&System_Action_TypeInfo, svtVInfos);
      sub_1BDB878(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___, v7);
      sub_1BDB878(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, v8);
      sub_1BDB878(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__, v9);
      sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
      sub_1BDB878(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v11);
      sub_1BDB878(&Method_QuestAfterAction___c__DisplayClass79_0__LoadVoice_b__0__, v12);
      sub_1BDB878(&QuestAfterAction___c__DisplayClass79_0_TypeInfo, v13);
      byte_4B416AC = 1;
    }
    v14 = sub_1BDBAC4(QuestAfterAction___c__DisplayClass79_0_TypeInfo);
    QuestAfterAction___c__DisplayClass79_0___ctor((QuestAfterAction___c__DisplayClass79_0_o *)v14, 0LL);
    if ( !v14 )
      goto LABEL_18;
    *(_QWORD *)(v14 + 16) = v5;
    v19 = (CommonUI_o **)(v14 + 16);
    sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 16), (int32_t)v5, v17, v18);
    *(_QWORD *)(v14 + 24) = this;
    sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 24), (int32_t)this, v20, v21);
    *(_QWORD *)(v14 + 32) = endAct;
    v22 = (System_Action_o **)(v14 + 32);
    sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 32), (int32_t)endAct, v23, v24);
    if ( !System_Linq_Enumerable__Any_object_(
            *(System_Collections_Generic_IEnumerable_TSource__o **)(v14 + 16),
            (const MethodInfo_303F5F0 *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 0, 0LL);
        ActionExtensions__Call(*v22, 0LL);
        return;
      }
LABEL_18:
      sub_1BDBAD4(Instance, v16);
    }
    Instance = *v19;
    if ( !*v19 )
      goto LABEL_18;
    Instance = (CommonUI_o *)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)Instance,
                               0,
                               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
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
      (const MethodInfo_36D7598 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    v5 = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)*v19;
    endAct = *v22;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  Instance = *v19;
  if ( !*v19 )
    goto LABEL_18;
  Instance = (CommonUI_o *)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)Instance,
                             0,
                             (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
  if ( !Instance )
    goto LABEL_18;
  VoiceAssetName_41738660 = ServantVoiceEntity__getVoiceAssetName_41738660(Instance->fields.m_CachedPtr, 0LL);
  v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v27 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)v14, Method_QuestAfterAction___c__DisplayClass79_0__LoadVoice_b__0__, 0LL);
  if ( !v26 )
    goto LABEL_18;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)v26, VoiceAssetName_41738660, v27, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v6; // x1

  if ( (byte_4B416BA & 1) == 0 )
  {
    sub_1BDB878(&SrcSpotBasePrefab_TypeInfo, *(_QWORD *)&comType);
    sub_1BDB878(&StringLiteral_1/*""*/, v6);
    byte_4B416BA = 1;
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

  if ( (byte_4B416B4 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Clear__, method);
    byte_4B416B4 = 1;
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
    sub_1BDBAD4(screenCollider, v4);
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

  if ( (byte_4B416B0 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, endAct);
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    sub_1BDB878(&Method_QuestAfterAction___c__DisplayClass83_0__Play_b__0__, v6);
    sub_1BDB878(&QuestAfterAction___c__DisplayClass83_0_TypeInfo, v7);
    byte_4B416B0 = 1;
  }
  v8 = sub_1BDBAC4(QuestAfterAction___c__DisplayClass83_0_TypeInfo);
  QuestAfterAction___c__DisplayClass83_0___ctor((QuestAfterAction___c__DisplayClass83_0_o *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = endAct,
        sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)endAct, v11, v12),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
    sub_1BDBAD4(Instance, v10);
  }
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v13 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v8, Method_QuestAfterAction___c__DisplayClass83_0__Play_b__0__, 0LL);
  this->fields.endAct = v13;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.endAct, (int32_t)v13, v14, v15);
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

  if ( (byte_4B416B1 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, actionVals);
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_1BDB878(&Method_QuestAfterAction___c__DisplayClass84_0__PlaySpecifiedAction_b__0__, v8);
    sub_1BDB878(&Method_QuestAfterAction___c__DisplayClass84_0__PlaySpecifiedAction_b__1__, v9);
    sub_1BDB878(&QuestAfterAction___c__DisplayClass84_0_TypeInfo, v10);
    byte_4B416B1 = 1;
  }
  v11 = sub_1BDBAC4(QuestAfterAction___c__DisplayClass84_0_TypeInfo);
  QuestAfterAction___c__DisplayClass84_0___ctor((QuestAfterAction___c__DisplayClass84_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = finishCallback;
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)finishCallback, v16, v17);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v11 + 24), 0LL);
    return;
  }
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v18);
  this->fields.temporaryCommandBuf = CommandBuf;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.temporaryCommandBuf, (int32_t)CommandBuf, v20, v21);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_8:
    sub_1BDBAD4(Instance, v13);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v22 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v11,
    Method_QuestAfterAction___c__DisplayClass84_0__PlaySpecifiedAction_b__0__,
    0LL);
  this->fields.endAct = v22;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.endAct, (int32_t)v22, v23, v24);
  v25 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v11,
    Method_QuestAfterAction___c__DisplayClass84_0__PlaySpecifiedAction_b__1__,
    0LL);
  v27 = QuestAfterAction__WaitWhileMainStateFinished(this, v25, v26);
  UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, v27, 0LL);
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

  if ( (byte_4B416B3 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, commandArray);
    sub_1BDB878(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__87_0__, v5);
    byte_4B416B3 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)commandArray, 0LL) )
  {
    this->fields.temporaryCommandBuf = commandArray;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.temporaryCommandBuf, (int32_t)commandArray, v6, v7);
    v8 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__87_0__, 0LL);
    this->fields.endAct = v8;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.endAct, (int32_t)v8, v9, v10);
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

  if ( (byte_4B416B9 & 1) == 0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, *(_QWORD *)&cType);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v7);
    byte_4B416B9 = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3F3B7 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v8);
    byte_4B3F3B7 = 1;
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
  if ( !byte_4B3EEEF )
  {
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v8);
    byte_4B3EEEF = 1;
  }
  v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v10->fields.subRootGimmickP->klass;
  if ( !klass || (v10 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1BDBAD4(v10, v8);
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
  if ( (byte_4B416A9 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_QuestMaster___, com);
    sub_1BDB878(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5);
    this = (QuestAfterAction_o *)sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B416A9 = 1;
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
                sub_1BDBADC(this, com, v11);
              TitleInfoCtrlCallback_k__BackingField = (System_String_o *)this->fields.invalidMapGimmickIdList;
              goto LABEL_29;
            }
          }
LABEL_42:
          sub_1BDBAD4(this, com);
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
          this = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_303395C *)Method_DataManager_GetMasterData_QuestMaster___);
            param = com->fields.param;
            v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
            this = (QuestAfterAction_o *)System_Int32__Parse(param, 0LL);
            if ( v17 )
            {
              this = (QuestAfterAction_o *)DataMasterBase_object__object__int___GetEntity(
                                             v17,
                                             (int32_t)this,
                                             (const MethodInfo_32E1E3C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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

  if ( (byte_4B416B7 & 1) == 0 )
  {
    sub_1BDB878(&Method_CStateManager_QuestAfterAction__setState__, *(_QWORD *)&state);
    byte_4B416B7 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1BDBAD4(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_32701B8 *)Method_CStateManager_QuestAfterAction__setState__);
}


void __fastcall QuestAfterAction__SkipToNextAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  this->fields.isSkippedNext = 1;
}


void __fastcall QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4B416AF & 1) == 0 )
  {
    sub_1BDB878(&Method_CStateManager_QuestAfterAction__update__, method);
    byte_4B416AF = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_3270194 *)Method_CStateManager_QuestAfterAction__update__);
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

  if ( (byte_4B416B5 & 1) == 0 )
  {
    sub_1BDB878(&QuestAfterAction__WaitWhileMainStateFinished_d__90_TypeInfo, action);
    byte_4B416B5 = 1;
  }
  v5 = sub_1BDBAC4(QuestAfterAction__WaitWhileMainStateFinished_d__90_TypeInfo);
  QuestAfterAction__WaitWhileMainStateFinished_d__90___ctor(
    (QuestAfterAction__WaitWhileMainStateFinished_d__90_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1BDBAD4(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = action;
  sub_1BDB81C((CGThumbnailListItem_o *)(v5 + 40), (int32_t)action, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall QuestAfterAction___PlaySpecifiedActionInstantly_b__87_0(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  this->fields.endAct = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.endAct, 0, v2, v3);
  this->fields.temporaryCommandBuf = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.temporaryCommandBuf, 0, v5, v6);
  QuestAfterAction__SetState(this, 0, v7);
}


System_Int32_array *__fastcall QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_4B416A8 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, method);
    byte_4B416A8 = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_1BDBAD4(0LL, method);
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_String_o *VoiceAssetName_41738660; // x20
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B416AD & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__, method);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v9);
    sub_1BDB878(&SoundManager_TypeInfo, v10);
    byte_4B416AD = 1;
  }
  memset(&v17, 0, sizeof(v17));
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_14;
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
             (const MethodInfo_333B130 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_57497272(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_36D56B8 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  if ( !v13 )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    v13,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    if ( !v14 )
      break;
    if ( !v17.fields._current )
      sub_1BDBAD4(v14, v15);
    VoiceAssetName_41738660 = ServantVoiceEntity__getVoiceAssetName_41738660((int32_t)v17.fields._current[1].klass, 0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_41738660, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
LABEL_14:
    sub_1BDBAD4(svtVoices, method);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
    (const MethodInfo_333B4A8 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
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

  if ( (byte_4B416BF & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, svtId);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__RemoveAt__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_string___ctor___77036400, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1BDB878(&System_Collections_Generic_List_string__TypeInfo, v9);
    sub_1BDB878(&System_Random_TypeInfo, v10);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v12);
    sub_1BDB878(&StringLiteral_16088/*"_"*/, v13);
    byte_4B416BF = 1;
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
    param = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( param )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)param,
                            (const MethodInfo_303395C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      v17 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor_57497272(
        v17,
        v15,
        (const MethodInfo_36D56B8 *)Method_System_Collections_Generic_List_string___ctor___77036400);
      result = 0;
      v18 = (System_Random_o *)sub_1BDBAC4(System_Random_TypeInfo);
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
                      (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_string__get_Item__);
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
              param = System_String__Concat_62610508(
                        *((System_String_o **)v22 + 5),
                        (System_String_o *)StringLiteral_16088/*"_"*/,
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
                       (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_string__get_Item__);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4B3EEEF )
              {
                sub_1BDB878(&TerminalSceneComponent_TypeInfo, svtId);
                byte_4B3EEEF = 1;
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
              (const MethodInfo_36D7598 *)Method_System_Collections_Generic_List_string__RemoveAt__);
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
    sub_1BDBAD4(param, svtId);
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
    sub_1BDBADC(v27, v28, v29);
  return System_String__Concat_62610508(
           *((System_String_o **)v31 + 5),
           (System_String_o *)StringLiteral_16088/*"_"*/,
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

  if ( (byte_4B416C1 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B416C1 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_303395C *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !Instance )
        goto LABEL_12;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   result,
                                   (const MethodInfo_32E1E88 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( entity )
          return (System_String_o *)entity[1].monitor;
LABEL_12:
        sub_1BDBAD4(Instance, v8);
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
    sub_1BDBAD4(v3, str);
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
  if ( (byte_4B416C0 & 1) == 0 )
  {
    this = (QuestAfterAction_Command_o *)sub_1BDB878(&StringLiteral_16088/*"_"*/, str);
    byte_4B416C0 = 1;
  }
  if ( v4->fields.id == 800 )
  {
    if ( !v3 || (this = (QuestAfterAction_Command_o *)System_String__Split(v3, 0x5Fu, 0, 0LL)) == 0LL )
      sub_1BDBAD4(this, str);
    param = (int)this->fields.param;
    if ( param == 2 )
      return v3;
    if ( param == 3 )
      return System_String__Concat_62610508(
               (System_String_o *)this[1].monitor,
               (System_String_o *)StringLiteral_16088/*"_"*/,
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
    sub_1BDBAD4(this, method);
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
    sub_1BDBAD4(screenCollider, v5);
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
    sub_1BDBAD4(this, 0LL);
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
    sub_1BDBAD4(0LL, v7);
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
    sub_1BDBAD4(0LL, v7);
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
  if ( (byte_4B416C6 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Remove__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v4);
    sub_1BDB878(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v5);
    this = (QuestAfterAction_StateMain_o *)sub_1BDB878(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    byte_4B416C6 = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)that->fields.invalidMapGimmickIdList;
  if ( !this )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
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
        sub_1BDBADC(this, method, v8);
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
        (const MethodInfo_36BA29C *)Method_System_Collections_Generic_List_int__Remove__);
      this = (QuestAfterAction_StateMain_o *)v2->fields.that;
      if ( !this )
        break;
      MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                              (QuestAfterAction_o *)this,
                              2,
                              v13,
                              v2,
                              (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (QuestAfterAction_StateMain_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)MapComponent_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (QuestAfterAction_StateMain_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_object || !this )
          break;
        this = (QuestAfterAction_StateMain_o *)QuestTree__CheckMapGimmickCond_35631196(
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
          MapGimmickComponent__SetDispAnim_35277616((MapGimmickComponent_o *)MapComponent_object, 1, AnimTime, 1, v17);
        }
      }
      LODWORD(v9) = *(_DWORD *)&v10->fields.IsAnimDoing;
      if ( (__int64)++v11 >= (int)v9 )
        return;
    }
LABEL_22:
    sub_1BDBAD4(this, method);
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
  __int64 v96; // x22
  __int64 updated; // x0
  const MethodInfo *v98; // x1
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  QuestAfterAction_o **v101; // x20
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v105; // x21
  const MethodInfo_37F9FB0 *v106; // x2
  QuestAfterAction_Command_o *v107; // x21
  QuestAfterAction_o *v108; // x23
  BlankEarthQuestAfterAction_o *BlankEarthQuestAfterAction_k__BackingField; // x24
  System_Action_o *v110; // x25
  int id; // w8
  float v112; // s0
  __int64 v113; // x1
  float DEFAULT_FADE_TIME; // s8
  AvalonSceneManager_c *v115; // x0
  TerminalSceneComponent_c *v116; // x0
  TerminalSceneComponent_o *mInstance; // x19
  System_Action_o *v118; // x20
  TerminalSceneComponent_o *v119; // x0
  float v120; // s0
  System_Action_o *v121; // x1
  System_String_o *v122; // x19
  System_String_o *v123; // x20
  System_String_o *v124; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v126; // x23
  __int64 v127; // x8
  __int64 v128; // x23
  float v129; // s0
  __int64 v130; // x21
  int32_t v131; // w20
  int32_t v132; // w22
  __int64 v133; // x20
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  __int64 v136; // x23
  __int64 v137; // x8
  __int64 v138; // x22
  int32_t v139; // w21
  bool v140; // w24
  bool v141; // w25
  __int64 v142; // x23
  int32_t v143; // w21
  int32_t v144; // w22
  int32_t v145; // w23
  __int64 v146; // x20
  int32_t v147; // w2
  const MethodInfo *v148; // x3
  __int64 v149; // x8
  QuestAfterAction_o *v150; // x22
  Il2CppObject *v151; // x0
  int32_t v152; // w2
  const MethodInfo *v153; // x3
  UnityEngine_Object_o *v154; // x19
  SrcSpotBasePrefab_o *v155; // x19
  System_Action_o *v156; // x21
  int32_t v157; // w1
  __int64 v158; // x23
  float v159; // s0
  float v160; // s9
  float v161; // s0
  float v162; // s10
  float v163; // s0
  float v164; // s11
  float v165; // s0
  float v166; // s8
  int32_t v167; // w19
  __int64 v168; // x8
  float v169; // s8
  const MethodInfo_37F9FB0 *v170; // x2
  float v171; // s0
  float v172; // s1
  float v173; // s2
  float v174; // s10
  float v175; // s9
  float v176; // s11
  MapCamera_o *mMapCamera; // x20
  System_Action_o *v178; // x21
  MapCamera_o *v179; // x0
  float v180; // s0
  float v181; // s1
  float v182; // s2
  float v183; // s3
  int32_t v184; // w1
  __int64 v185; // x20
  int32_t v186; // w2
  const MethodInfo *v187; // x3
  __int64 v188; // x8
  QuestAfterAction_o *v189; // x22
  Il2CppObject *v190; // x0
  int32_t v191; // w2
  const MethodInfo *v192; // x3
  UnityEngine_Object_o *v193; // x19
  ModelLineComponent_o *v194; // x19
  System_Action_o *v195; // x21
  const MethodInfo *v196; // x3
  int32_t v197; // w1
  System_String_o *param; // x21
  _QWORD *v199; // x0
  System_Reflection_MethodBase_o *v200; // x0
  __int64 v201; // x8
  __int64 v202; // x22
  _BOOL4 v203; // w23
  __int64 v204; // x20
  int32_t v205; // w2
  const MethodInfo *v206; // x3
  __int64 v207; // x23
  int32_t v208; // w21
  Il2CppObject *v209; // x0
  __int64 *v210; // x24
  int32_t v211; // w2
  const MethodInfo *v212; // x3
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v214; // x22
  int32_t v215; // w2
  const MethodInfo *v216; // x3
  const MethodInfo *v217; // x2
  int v218; // w21
  __int64 v219; // x8
  NetworkManager_ResultCallbackFunc_o *v220; // x21
  Il2CppObject *Request_object; // x20
  int32_t v222; // w21
  TerminalSceneComponent_c *v223; // x0
  TerminalSceneComponent_o *v224; // x22
  __int64 v225; // x8
  PlayMakerFSM_o *v226; // x20
  System_String_o *ActiveStateName; // x0
  __int64 v228; // x8
  __int64 v229; // x8
  QuestBoardListViewManager_o *v230; // x21
  System_Action_o *v231; // x22
  Il2CppObject *v232; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v234; // w2
  const MethodInfo *v235; // x3
  TerminalSceneComponent_c *v236; // x0
  __int64 v237; // x22
  int v238; // w23
  float v239; // s8
  int32_t v240; // w21
  TerminalPramsManager_c *v241; // x0
  __int64 v242; // x8
  __int64 v243; // x1
  const MethodInfo *v244; // x2
  TerminalPramsManager_c *v245; // x0
  __int64 v246; // x1
  TerminalPramsManager_c *v247; // x0
  __int64 v248; // x8
  __int64 v249; // x21
  int32_t v250; // w20
  __int64 v251; // x8
  __int64 v252; // x21
  int32_t v253; // w0
  int32_t v254; // w20
  System_String_o *v255; // x21
  QuestAfterAction_o *v256; // x8
  __int64 v257; // x8
  __int64 v258; // x8
  __int64 v259; // x8
  System_String_o *v260; // x20
  System_String_o *v261; // x21
  SeManager_c *v262; // x0
  float DEFAULT_VOLUME; // s8
  System_String_o *v264; // x23
  const MethodInfo *v265; // x3
  System_String_array *v266; // x20
  int32_t v267; // w1
  int v268; // w8
  System_String_o *v269; // x19
  System_String_o *v270; // x20
  System_String_o *v271; // x19
  System_String_o *v272; // x20
  System_String_o *v273; // x20
  Il2CppObject *v274; // x21
  System_Action_o *v275; // x23
  char *v276; // x10
  System_String_o *v277; // x23
  const MethodInfo *v278; // x3
  System_String_array *v279; // x20
  int32_t v280; // w1
  int v281; // w8
  System_String_o *v282; // x19
  System_String_o *v283; // x20
  System_String_o *v284; // x20
  Il2CppObject *v285; // x21
  System_Action_o *v286; // x23
  Il2CppObject *MapComponent_object; // x22
  Il2CppObject *v288; // x20
  __int64 v289; // x8
  ScrTerminalMap_o *v290; // x23
  __int64 v291; // x8
  ScrTerminalMap_o *v292; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v294; // x23
  __int64 v295; // x8
  float v296; // s0
  __int64 v297; // x8
  float v298; // s0
  __int64 v299; // x23
  float v300; // s0
  float v301; // s8
  int32_t v302; // w22
  __int64 v303; // x8
  ScrTerminalMap_o *v304; // x24
  float v305; // s0
  float v306; // s9
  float v307; // s0
  const MethodInfo_37F9FB0 *v308; // x2
  int v309; // w8
  float v310; // s10
  float v311; // s9
  float v312; // s11
  MapCamera_o *v313; // x20
  __int64 v314; // x21
  int32_t v315; // w0
  int32_t v316; // w20
  float v317; // s8
  int32_t v318; // w19
  __int64 v319; // x20
  int32_t v320; // w2
  const MethodInfo *v321; // x3
  __int64 v322; // x8
  QuestAfterAction_o *v323; // x22
  Il2CppObject *v324; // x0
  int32_t v325; // w2
  const MethodInfo *v326; // x3
  UnityEngine_Object_o *v327; // x19
  __int64 v328; // x23
  int32_t v329; // w2
  const MethodInfo *v330; // x3
  __int64 v331; // x20
  QuestAfterAction_o *v332; // x22
  Il2CppObject *v333; // x0
  __int64 *v334; // x19
  int32_t v335; // w2
  const MethodInfo *v336; // x3
  UnityEngine_Object_o *v337; // x21
  SrcSpotBasePrefab_o *v338; // x21
  System_Action_o *v339; // x22
  int32_t v340; // w2
  const MethodInfo *v341; // x3
  __int64 v342; // x1
  CGThumbnailListItem_o *v343; // x0
  __int64 v344; // x22
  QuestAfterAction_o *v345; // x21
  Il2CppObject *v346; // x21
  System_Action_o *v347; // x22
  QuestAfterAction_o *v348; // x22
  Il2CppObject *v349; // x21
  _DWORD *monitor; // x8
  SrcSpotBasePrefab_o *v351; // x0
  int32_t v352; // w1
  QuestAfterAction_o *v353; // x22
  Il2CppObject *v354; // x21
  _DWORD *v355; // x8
  QuestAfterAction_o *v356; // x22
  _DWORD *v357; // x8
  __int64 v358; // x21
  QuestAfterAction_o *v359; // x22
  Il2CppObject *v360; // x22
  int32_t v361; // w1
  Il2CppObject *v362; // x3
  SceneJumpInfo_o *v363; // x21
  __int64 v364; // x1
  TerminalPramsManager_c *v365; // x0
  TerminalPramsManager_c *v366; // x0
  __int64 v367; // x1
  int32_t v368; // w21
  TerminalPramsManager_c *v369; // x0
  QuestAfterAction_o *v370; // x20
  Il2CppObject *v371; // x20
  __int64 v372; // x1
  TerminalPramsManager_c *v373; // x0
  MapCamera_o *v374; // x20
  float v375; // s0
  System_Action_o *v376; // x21
  MapCamera_o *v377; // x0
  float v378; // s0
  int32_t v379; // w4
  int v380; // w23
  __int64 v381; // x21
  float v382; // s0
  float v383; // s8
  float v384; // s0
  MapCamera_o *v385; // x19
  float v386; // s0
  float v387; // s9
  int32_t v388; // w20
  __int64 v389; // x20
  int32_t v390; // w2
  const MethodInfo *v391; // x3
  __int64 v392; // x8
  QuestAfterAction_o *v393; // x22
  Il2CppObject *v394; // x0
  int32_t v395; // w2
  const MethodInfo *v396; // x3
  UnityEngine_Object_o *v397; // x19
  __int64 v398; // x20
  int32_t v399; // w2
  const MethodInfo *v400; // x3
  __int64 v401; // x8
  QuestAfterAction_o *v402; // x22
  Il2CppObject *v403; // x0
  int32_t v404; // w2
  const MethodInfo *v405; // x3
  UnityEngine_Object_o *v406; // x19
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v408; // x22
  UnityEngine_Object_o *v409; // x21
  const MethodInfo *v410; // x2
  _DWORD *v411; // x8
  _BOOL4 v412; // w23
  QuestAfterAction_o *v413; // x22
  UnityEngine_Object_o *v414; // x21
  const MethodInfo *v415; // x2
  const MethodInfo *v416; // x2
  _DWORD *v417; // x8
  _BOOL4 v418; // w23
  QuestAfterAction_o *v419; // x22
  UnityEngine_Object_o *v420; // x21
  const MethodInfo *v421; // x2
  const MethodInfo *v422; // x2
  __int64 v423; // x21
  const MethodInfo *v424; // x3
  QuestAfterAction_o *v425; // x8
  QuestAfterAction_TitleInfoControlCallback_o *TitleInfoCtrlCallback_k__BackingField; // x22
  System_Action_o *v427; // x20
  const MethodInfo *v428; // x3
  Il2CppObject *v429; // x21
  System_Action_o *v430; // x23
  float v431; // s0
  float v432; // s0
  float v433; // s0
  QuestAfterAction_o *v434; // x24
  const MethodInfo *v435; // x4
  UnityEngine_Object_o *v436; // x24
  float v437; // s10
  float v438; // s8
  float v439; // s9
  __int64 v440; // x8
  System_String_o *v441; // x24
  QuestAfterAction_o *v442; // x24
  const MethodInfo *v443; // x4
  UnityEngine_Object_o *v444; // x24
  float v445; // s8
  float v446; // s9
  float v447; // s10
  __int64 v448; // x8
  float v449; // s0
  float v450; // s1
  float v451; // s2
  QuestAfterAction_o *v452; // x24
  const MethodInfo *v453; // x4
  UnityEngine_Object_o *v454; // x24
  __int64 v455; // x8
  int v456; // w8
  QuestAfterAction_o *v457; // x8
  MapCamera_o *v458; // x20
  MapCamera_o *v459; // x0
  float v460; // s0
  float v461; // s1
  float v462; // s2
  __int64 v463; // x23
  int32_t v464; // w2
  const MethodInfo *v465; // x3
  __int64 v466; // x20
  __int64 v467; // x8
  __int64 v468; // x21
  int32_t v469; // w22
  bool v470; // w25
  bool v471; // w27
  __int64 v472; // x8
  __int64 v473; // x22
  int32_t v474; // w21
  bool v475; // w22
  __int64 v476; // x8
  __int64 v477; // x22
  int32_t v478; // w21
  bool v479; // w22
  __int64 v480; // x21
  float v481; // s0
  QuestAfterAction_o *v482; // x20
  float v483; // s8
  Il2CppObject *v484; // x20
  _BOOL4 v485; // w23
  __int64 v486; // x20
  int32_t v487; // w2
  const MethodInfo *v488; // x3
  __int64 v489; // x8
  QuestAfterAction_o *v490; // x22
  Il2CppObject *v491; // x0
  int32_t v492; // w2
  const MethodInfo *v493; // x3
  UnityEngine_Object_o *v494; // x19
  MapGimmickComponent_o *v495; // x19
  System_Action_o *v496; // x21
  const MethodInfo *v497; // x3
  TerminalSceneComponent_o *v498; // x19
  __int64 v499; // x20
  int32_t v500; // w2
  const MethodInfo *v501; // x3
  System_String_array *v502; // x0
  __int64 *v503; // x21
  int32_t v504; // w2
  const MethodInfo *v505; // x3
  __int64 v506; // x8
  __int64 v507; // x9
  QuestAfterAction_o *v508; // x21
  Il2CppObject *v509; // x0
  int32_t v510; // w2
  const MethodInfo *v511; // x3
  UnityEngine_Object_o *v512; // x19
  MapGimmickComponent_o *v513; // x19
  System_Action_o *v514; // x0
  __int64 *v515; // x8
  System_Action_o *v516; // x21
  __int64 v517; // x21
  QuestAfterAction_o *v518; // x20
  Il2CppObject *v519; // x20
  UIWidget_o *v520; // x20
  int32_t v521; // w2
  const MethodInfo *v522; // x3
  __int64 v523; // x8
  QuestAfterAction_o *v524; // x22
  Il2CppObject *v525; // x0
  __int64 v526; // x19
  int32_t v527; // w2
  const MethodInfo *v528; // x3
  UnityEngine_Object_o *v529; // x21
  bool v530; // w0
  bool v531; // w22
  const MethodInfo *v532; // x3
  int32_t v533; // w1
  __int64 v534; // x8
  __int64 v535; // x22
  int32_t v536; // w21
  bool v537; // w22
  __int64 v538; // x21
  QuestAfterAction_o *v539; // x22
  Il2CppObject *v540; // x22
  QuestAfterAction_o *v541; // x23
  const MethodInfo *v542; // x4
  int32_t v543; // w2
  QuestAfterAction_o *v544; // x0
  int32_t v545; // w1
  QuestAfterAction_o *v546; // x22
  QuestAfterAction_o *v547; // x23
  const MethodInfo *v548; // x4
  UnityEngine_Object_o *MapGameObject; // x23
  float v550; // s0
  float v551; // s1
  float v552; // s2
  float x; // s9
  float y; // s8
  float z; // s10
  QuestAfterAction_o *v556; // x22
  QuestAfterAction_o *v557; // x23
  UnityEngine_Object_o *v558; // x23
  __int64 v559; // x8
  float v560; // s0
  float v561; // s11
  int32_t v562; // w23
  const MethodInfo *v563; // x3
  int32_t v564; // w0
  int32_t v565; // w23
  SceneJumpInfo_o *v566; // x22
  System_String_o *v567; // x20
  __int64 v568; // x20
  int32_t v569; // w2
  const MethodInfo *v570; // x3
  __int64 v571; // x8
  QuestAfterAction_o *v572; // x22
  Il2CppObject *v573; // x0
  int32_t v574; // w2
  const MethodInfo *v575; // x3
  UnityEngine_Object_o *v576; // x19
  srcLineSprite_o *v577; // x19
  System_Action_o *v578; // x21
  int32_t v579; // w1
  __int64 v580; // x20
  int32_t v581; // w2
  const MethodInfo *v582; // x3
  __int64 v583; // x8
  QuestAfterAction_o *v584; // x22
  Il2CppObject *v585; // x0
  int32_t v586; // w2
  const MethodInfo *v587; // x3
  UnityEngine_Object_o *v588; // x19
  __int64 v589; // x20
  int32_t v590; // w2
  const MethodInfo *v591; // x3
  __int64 v592; // x8
  QuestAfterAction_o *v593; // x22
  Il2CppObject *v594; // x0
  int32_t v595; // w2
  const MethodInfo *v596; // x3
  UnityEngine_Object_o *v597; // x19
  UnityEngine_Object_o *v598; // x21
  UnityEngine_Object_o *v599; // x21
  int v600; // w9
  UnityEngine_Object_o *v601; // x21
  System_Action_o *v602; // x21
  float v603; // s10
  float v604; // s9
  float v605; // s8
  System_String_o *v606; // x24
  Il2CppObject *v607; // x0
  int32_t v608; // w2
  const MethodInfo *v609; // x3
  UnityEngine_Object_o *v610; // x22
  MapGimmickComponent_o *v611; // x21
  System_Action_o *v612; // x0
  System_Action_o *v613; // x22
  MapGimmickComponent_o *v614; // x0
  System_Action_o *v615; // x2
  Il2CppObject *v616; // x0
  MapGimmickComponent_o **v617; // x22
  int32_t v618; // w2
  const MethodInfo *v619; // x3
  UnityEngine_Object_o *v620; // x24
  MapGimmickComponent_o *v621; // x24
  const MethodInfo *v622; // x3
  System_Action_o *v623; // x0
  Il2CppObject *v624; // x21
  const MethodInfo *v625; // x3
  Il2CppObject *v626; // x21
  const MethodInfo *v627; // x3
  Il2CppClass *v628; // x8
  Il2CppObject *v629; // x21
  float AnimTime; // s0
  const MethodInfo *v631; // x3
  Il2CppClass *v632; // x8
  QuestAfterAction_StateMain_c *v633; // x8
  int v634; // w0
  __int64 v635; // x8
  ScrTerminalMap_o *v636; // x21
  System_Action_o *v637; // x23
  MapCamera_o *v638; // x20
  MapCamera_o *v639; // x20
  int v640; // w8
  MapCamera_o *v641; // x20
  float v642; // s0
  float v643; // s1
  float v644; // s2
  float v645; // s0
  float v646; // s1
  float v647; // s2
  QuestAfterAction_o *v648; // x8
  float v649; // s3
  System_Action_o *v650; // x20
  const MethodInfo *v651; // x3
  MapGimmickComponent_o *v652; // x0
  float v653; // s0
  float v654; // s1
  float v655; // s2
  float v656; // s3
  int32_t v657; // w1
  System_Action_o *v658; // x2
  const MethodInfo *v659; // x3
  __int64 v660; // x8
  const MethodInfo *v661; // x3
  QuestAfterAction_o *v662; // x8
  float v663; // s0
  float v664; // s0
  MapCamera_o *v665; // x0
  float v666; // s0
  __int64 v667; // x8
  ScrTerminalMap_o *v668; // x22
  float v669; // s0
  float v670; // s9
  float v671; // s0
  float v672; // s0
  float v673; // s1
  float v674; // s2
  float v675; // s10
  float v676; // s9
  float v677; // s11
  float v678; // s8
  const MethodInfo *v679; // x3
  int32_t v680; // w21
  System_Action_o *v681; // x22
  float v682; // s0
  float v683; // s0
  int32_t onClickOkSeKind; // [xsp+10h] [xbp-E0h]
  float sec; // [xsp+3Ch] [xbp-B4h]
  System_Nullable_float__o size; // [xsp+40h] [xbp-B0h] BYREF
  System_Nullable_Vector3__o v687; // [xsp+48h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-98h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-90h] BYREF
  UnityEngine_Color_o color; // [xsp+68h] [xbp-88h] BYREF
  bool isQuickUpdate; // [xsp+7Ch] [xbp-74h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v693; // 0:x0.8
  System_Nullable_float__o v694; // 0:x0.8
  System_Nullable_float__o v695; // 0:x0.8
  System_Nullable_float__o v696; // 0:x0.8
  System_Nullable_float__o v697; // 0:x3.8
  System_Nullable_float__o v698; // 0:x3.8
  System_Nullable_Vector3__o v699; // 0:x0.16
  System_Nullable_Vector3__o v700; // 0:x0.16
  System_Nullable_Vector3__o v701; // 0:x0.16
  System_Nullable_Vector3__o v702; // 0:x0.16
  System_Nullable_Vector3__o v703; // 0:x0.16
  System_Nullable_Vector3__o v704; // 0:x1.16
  System_Nullable_Vector3__o v705; // 0:x1.16
  UnityEngine_Vector3_o v706; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v707; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v708; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v709; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v710; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v712; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v713; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v714; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v715; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v717; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v718; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v719; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v720; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v721; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v722; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B416C4 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, that);
    sub_1BDB878(&AvalonSceneManager_TypeInfo, v5);
    sub_1BDB878(&Method_DataManager_GetMasterData_QuestMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMaster_QuestMaster___, v7);
    sub_1BDB878(&DataManager_TypeInfo, v8);
    sub_1BDB878(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v9);
    sub_1BDB878(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__, v11);
    sub_1BDB878(&FSUtility_TypeInfo, v12);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v13);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___, v14);
    sub_1BDB878(&LocalizationManager_TypeInfo, v15);
    sub_1BDB878(&Method_NetworkManager_getRequest_BattleSetupScenarioRequest___, v16);
    sub_1BDB878(&NetworkManager_TypeInfo, v17);
    sub_1BDB878(&Method_System_Nullable_Vector3___ctor__, v18);
    sub_1BDB878(&Method_System_Nullable_float___ctor__, v19);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v20);
    sub_1BDB878(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v21);
    sub_1BDB878(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___, v22);
    sub_1BDB878(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___, v23);
    sub_1BDB878(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___, v24);
    sub_1BDB878(&NetworkManager_ResultCallbackFunc_TypeInfo, v25);
    sub_1BDB878(&SceneJumpInfo_TypeInfo, v26);
    sub_1BDB878(&SeManager_TypeInfo, v27);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v28);
    sub_1BDB878(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v29);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v30);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v32);
    sub_1BDB878(&Method_SingletonTemplate_QuestTree__get_Instance__, v33);
    sub_1BDB878(&SoundManager_TypeInfo, v34);
    sub_1BDB878(&Method_QuestAfterAction_StateMain_UpdateAnim__, v35);
    sub_1BDB878(&string___TypeInfo, v36);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v37);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v38);
    sub_1BDB878(&QuestAfterAction_TitleInfoControlParam_TypeInfo, v39);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__, v40);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__, v41);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__, v42);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__, v43);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__, v44);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__, v45);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__, v46);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__, v47);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__, v48);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__, v49);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__, v50);
    sub_1BDB878(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo, v51);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__, v52);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__, v53);
    sub_1BDB878(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo, v54);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__, v55);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__, v56);
    sub_1BDB878(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo, v57);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__, v58);
    sub_1BDB878(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo, v59);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__, v60);
    sub_1BDB878(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo, v61);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__, v62);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__, v63);
    sub_1BDB878(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo, v64);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__, v65);
    sub_1BDB878(&QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo, v66);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__, v67);
    sub_1BDB878(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo, v68);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__, v69);
    sub_1BDB878(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo, v70);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__, v71);
    sub_1BDB878(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo, v72);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__, v73);
    sub_1BDB878(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo, v74);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__, v75);
    sub_1BDB878(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo, v76);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__, v77);
    sub_1BDB878(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo, v78);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__, v79);
    sub_1BDB878(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo, v80);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__, v81);
    sub_1BDB878(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo, v82);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__, v83);
    sub_1BDB878(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo, v84);
    sub_1BDB878(&QuestAfterAction_StateMain___c_TypeInfo, v85);
    sub_1BDB878(&StringLiteral_89/*"\r\n"*/, v86);
    sub_1BDB878(&StringLiteral_1403/*"30101"*/, v87);
    sub_1BDB878(&StringLiteral_10817/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v88);
    sub_1BDB878(&StringLiteral_1404/*"30102"*/, v89);
    sub_1BDB878(&StringLiteral_1329/*"10703"*/, v90);
    sub_1BDB878(&StringLiteral_820/*","*/, v91);
    sub_1BDB878(&StringLiteral_3334/*"CAPTER WAIT"*/, v92);
    sub_1BDB878(&StringLiteral_1/*""*/, v93);
    sub_1BDB878(&StringLiteral_19874/*"gevINFOBAR_BACK"*/, v94);
    sub_1BDB878(&StringLiteral_1142/*"0"*/, v95);
    byte_4B416C4 = 1;
  }
  isQuickUpdate = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  value = 0LL;
  entity = 0LL;
  v96 = sub_1BDBAC4(QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
  QuestAfterAction_StateMain___c__DisplayClass16_0___ctor(
    (QuestAfterAction_StateMain___c__DisplayClass16_0_o *)v96,
    0LL);
  if ( !v96 )
    goto LABEL_1035;
  *(_QWORD *)(v96 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v96 + 16), (int32_t)this, v99, v100);
  *(_QWORD *)(v96 + 24) = that;
  v101 = (QuestAfterAction_o **)(v96 + 24);
  sub_1BDB81C((CGThumbnailListItem_o *)(v96 + 24), (int32_t)that, v102, v103);
  if ( this->fields.IsAnimDoing )
    return;
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._10_get_CommandBuf.method)(
              this,
              this->klass->vtable._11_get_CommandIndex.methodPtr);
  if ( !updated )
    return;
  if ( !*v101 )
    goto LABEL_1035;
  if ( (*v101)->fields.isSkippedNext )
  {
    updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                this,
                this->klass->vtable._15_onEnd.methodPtr);
    if ( *v101 )
    {
      (*v101)->fields.isSkippedNext = 0;
      return;
    }
LABEL_1035:
    sub_1BDBAD4(updated, v98);
  }
  klass = this->klass;
  this->fields.IsAnimDoing = 1;
  v105 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))klass->vtable._10_get_CommandBuf.method)(
           this,
           klass->vtable._11_get_CommandIndex.methodPtr);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._11_get_CommandIndex.method)(
              this,
              this->klass->vtable._12_set_CommandIndex.methodPtr);
  if ( !v105 )
    goto LABEL_1035;
  if ( (unsigned int)updated >= *(_DWORD *)(v105 + 24) )
    goto LABEL_1036;
  v107 = *(QuestAfterAction_Command_o **)(v105 + 8LL * (int)updated + 32);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_Command_o *, Il2CppMethodPointer))this->klass->vtable._9_IsUsableCommand.method)(
              this,
              v107,
              this->klass->vtable._10_get_CommandBuf.methodPtr);
  if ( (updated & 1) == 0 )
  {
LABEL_814:
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
      this,
      this->klass->vtable._15_onEnd.methodPtr);
    return;
  }
  v108 = *v101;
  if ( !*v101 )
    goto LABEL_1035;
  BlankEarthQuestAfterAction_k__BackingField = v108->fields._BlankEarthQuestAfterAction_k__BackingField;
  v110 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v110, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
  if ( !BlankEarthQuestAfterAction_k__BackingField )
    goto LABEL_1035;
  updated = BlankEarthQuestAfterAction__UpdateAnim(
              BlankEarthQuestAfterAction_k__BackingField,
              v108,
              v107,
              v110,
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
        *v101,
        this->klass->vtable._14_EndAnim.methodPtr);
      return;
    }
    return;
  }
  if ( !v107 )
    goto LABEL_1035;
  id = v107->fields.id;
  if ( id <= 520 )
  {
    if ( id > 350 )
    {
      if ( id > 500 )
      {
        if ( id != 501 )
        {
          if ( id != 510 )
          {
            if ( id == 520 )
            {
              DEFAULT_FADE_TIME = System_Single__Parse(v107->fields.param, 0LL);
              if ( DEFAULT_FADE_TIME <= 0.0 )
              {
                v115 = AvalonSceneManager_TypeInfo;
                if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                  v115 = AvalonSceneManager_TypeInfo;
                }
                DEFAULT_FADE_TIME = v115->static_fields->DEFAULT_FADE_TIME;
              }
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4B3EEEF )
              {
                sub_1BDB878(&TerminalSceneComponent_TypeInfo, v113);
                byte_4B3EEEF = 1;
              }
              v116 = TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v116 = TerminalSceneComponent_TypeInfo;
              }
              mInstance = v116->static_fields->mInstance;
              v118 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
              System_Action___ctor(
                v118,
                (Il2CppObject *)v96,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__,
                0LL);
              if ( !mInstance )
                goto LABEL_1035;
              v119 = mInstance;
              v120 = DEFAULT_FADE_TIME;
              v121 = v118;
LABEL_46:
              TerminalSceneComponent__Fadein_MapDisp(v119, v120, v121, 0LL);
            }
            return;
          }
          updated = (__int64)v107->fields.param;
          if ( !updated )
            goto LABEL_1035;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1035;
          v237 = updated;
          if ( *(_DWORD *)(updated + 24) )
          {
            v238 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            v239 = 0.5;
            if ( *(int *)(v237 + 24) >= 2 )
            {
              v240 = System_Int32__Parse(*(System_String_o **)(v237 + 40), 0LL);
              if ( *(int *)(v237 + 24) >= 3 )
                v239 = System_Single__Parse(*(System_String_o **)(v237 + 48), 0LL);
            }
            else
            {
              v240 = v238;
              v238 = -1;
            }
            updated = (__int64)*v101;
            if ( !*v101 )
              goto LABEL_1035;
            MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                                    (QuestAfterAction_o *)updated,
                                    0,
                                    v240,
                                    this,
                                    (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)MapComponent_object, 0LL, 0LL) )
            {
              if ( v238 >= 1 )
              {
                updated = (__int64)*v101;
                if ( !*v101 )
                  goto LABEL_1035;
                v288 = QuestAfterAction__GetMapComponent_object_(
                         (QuestAfterAction_o *)updated,
                         0,
                         v238,
                         this,
                         (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v288, 0LL, 0LL) )
                {
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  if ( !byte_4B3EEEF )
                  {
                    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v98);
                    byte_4B3EEEF = 1;
                  }
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    updated = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v289 = **(_QWORD **)(updated + 184);
                  if ( !v289 )
                    goto LABEL_1035;
                  if ( !v288 )
                    goto LABEL_1035;
                  v290 = *(ScrTerminalMap_o **)(v289 + 264);
                  updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v288, 0LL);
                  if ( !v290 )
                    goto LABEL_1035;
                  ScrTerminalMap__SetPlayerIcon(v290, (UnityEngine_GameObject_o *)updated, 0LL);
                }
              }
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4B3EEEF )
              {
                sub_1BDB878(&TerminalSceneComponent_TypeInfo, v98);
                byte_4B3EEEF = 1;
              }
              updated = (__int64)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                updated = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v291 = **(_QWORD **)(updated + 184);
              if ( !v291 )
                goto LABEL_1035;
              if ( !MapComponent_object )
                goto LABEL_1035;
              v292 = *(ScrTerminalMap_o **)(v291 + 264);
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MapComponent_object, 0LL);
              v294 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
              System_Action___ctor(v294, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
              if ( !v292 )
                goto LABEL_1035;
              ScrTerminalMap__MovePlayerIcon(v292, gameObject, v240, v294, v239, 0LL);
            }
            return;
          }
          goto LABEL_1036;
        }
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4B3EEEF )
        {
          sub_1BDB878(&TerminalSceneComponent_TypeInfo, v98);
          byte_4B3EEEF = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v225 = **(_QWORD **)(updated + 184);
        if ( !v225 )
          goto LABEL_1035;
        updated = *(_QWORD *)(v225 + 256);
        if ( !updated )
          goto LABEL_1035;
        updated = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)updated, 0LL);
        if ( !updated )
          goto LABEL_1035;
        v226 = (PlayMakerFSM_o *)updated;
        ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)updated, 0LL);
        if ( System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3334/*"CAPTER WAIT"*/, 0LL) )
        {
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4B3EEEF )
          {
            sub_1BDB878(&TerminalSceneComponent_TypeInfo, v98);
            byte_4B3EEEF = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v228 = **(_QWORD **)(updated + 184);
          if ( !v228 )
            goto LABEL_1035;
          v229 = *(_QWORD *)(v228 + 256);
          if ( !v229 )
            goto LABEL_1035;
          v230 = *(QuestBoardListViewManager_o **)(v229 + 296);
          updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
          if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
            updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
          }
          v231 = *(System_Action_o **)(*(_QWORD *)(updated + 184) + 8LL);
          if ( !v231 )
          {
            if ( !*(_DWORD *)(updated + 224) )
            {
              j_il2cpp_runtime_class_init_0(updated);
              updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
            }
            v232 = **(Il2CppObject ***)(updated + 184);
            v231 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
            System_Action___ctor(v231, v232, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__, 0LL);
            static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
            static_fields->__9__16_22 = v231;
            sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__16_22, (int32_t)v231, v234, v235);
          }
          if ( !v230 )
            goto LABEL_1035;
          QuestBoardListViewManager__SetMode(v230, 4, v231, 0, 0, 0, 0LL);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4B3EEEF )
          {
            sub_1BDB878(&TerminalSceneComponent_TypeInfo, v98);
            byte_4B3EEEF = 1;
          }
          v236 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v236 = TerminalSceneComponent_TypeInfo;
          }
          updated = (__int64)v236->static_fields->mInstance;
          if ( !updated )
            goto LABEL_1035;
          TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)updated, 0LL);
          PlayMakerFSM__SendEvent(v226, (System_String_o *)StringLiteral_19874/*"gevINFOBAR_BACK"*/, 0LL);
        }
        goto LABEL_814;
      }
      if ( (unsigned int)(id - 351) >= 2 )
      {
        switch ( id )
        {
          case 400:
            v133 = sub_1BDBAC4(QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_10___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_10_o *)v133,
              0LL);
            if ( !v133 )
              goto LABEL_1035;
            *(_QWORD *)(v133 + 24) = v96;
            v136 = v133 + 24;
            sub_1BDB81C((CGThumbnailListItem_o *)(v133 + 24), v96, v134, v135);
            updated = (__int64)v107->fields.param;
            if ( !updated )
              goto LABEL_1035;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1035;
            v137 = *(_QWORD *)(updated + 24);
            v138 = updated;
            if ( v137 )
            {
              if ( !(_DWORD)v137 )
                goto LABEL_1036;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v139 = updated;
              if ( *(int *)(v138 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v138 + 40), 0LL);
                v140 = (int)updated < 1;
                if ( *(int *)(v138 + 24) < 3 )
                {
                  v141 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v138 + 48), 0LL);
                  v141 = (int)updated > 0;
                }
                goto LABEL_875;
              }
            }
            else
            {
              v139 = 0;
            }
            v141 = 0;
            v140 = 1;
LABEL_875:
            if ( !*(_QWORD *)v136 )
              goto LABEL_1035;
            updated = *(_QWORD *)(*(_QWORD *)v136 + 24LL);
            if ( !updated )
              goto LABEL_1035;
            v607 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v139,
                     this,
                     (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v133 + 16) = v607;
            sub_1BDB81C((CGThumbnailListItem_o *)(v133 + 16), (int32_t)v607, v608, v609);
            v610 = *(UnityEngine_Object_o **)(v133 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v610, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            v611 = *(MapGimmickComponent_o **)(v133 + 16);
            if ( !v611 )
              goto LABEL_1035;
            v611->fields.isForceNotActive = v141;
            v612 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
            v613 = v612;
            if ( v140 )
            {
              System_Action___ctor(
                v612,
                (Il2CppObject *)v133,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__,
                0LL);
              v533 = 2;
              v614 = v611;
              v615 = v613;
LABEL_984:
              MapGimmickComponent__SetState(v614, v533, v615, v532);
              return;
            }
            System_Action___ctor(
              v612,
              (Il2CppObject *)v133,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__,
              0LL);
            MapGimmickComponent__SetState(v611, 2, v613, v659);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                        this,
                        this->klass->vtable._15_onEnd.methodPtr);
            v660 = *(_QWORD *)(v133 + 24);
            if ( !v660 )
              goto LABEL_1035;
            goto LABEL_989;
          case 401:
            v463 = sub_1BDBAC4(QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_11___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_11_o *)v463,
              0LL);
            if ( !v463 )
              goto LABEL_1035;
            *(_QWORD *)(v463 + 24) = v96;
            v466 = v463 + 24;
            sub_1BDB81C((CGThumbnailListItem_o *)(v463 + 24), v96, v464, v465);
            updated = (__int64)v107->fields.param;
            if ( !updated )
              goto LABEL_1035;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1035;
            v467 = *(_QWORD *)(updated + 24);
            v468 = updated;
            if ( v467 )
            {
              if ( !(_DWORD)v467 )
                goto LABEL_1036;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v469 = updated;
              if ( *(int *)(v468 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v468 + 40), 0LL);
                v470 = (int)updated < 1;
                if ( *(int *)(v468 + 24) < 3 )
                {
                  v471 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v468 + 48), 0LL);
                  v471 = (int)updated > 0;
                }
                goto LABEL_885;
              }
            }
            else
            {
              v469 = 0;
            }
            v471 = 0;
            v470 = 1;
LABEL_885:
            if ( !*(_QWORD *)v466 )
              goto LABEL_1035;
            updated = *(_QWORD *)(*(_QWORD *)v466 + 24LL);
            if ( !updated )
              goto LABEL_1035;
            v616 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v469,
                     this,
                     (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v463 + 16) = v616;
            v617 = (MapGimmickComponent_o **)(v463 + 16);
            sub_1BDB81C((CGThumbnailListItem_o *)(v463 + 16), (int32_t)v616, v618, v619);
            v620 = *(UnityEngine_Object_o **)(v463 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v620, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            v621 = *v617;
            if ( !*v617 )
              goto LABEL_1035;
            v621->fields.isForceLoop = v471;
            v621->fields.isForceNotActive = 0;
            if ( *(int *)(v468 + 24) >= 4 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v468 + 56), 0LL);
              if ( !*v617 )
                goto LABEL_1035;
              MapGimmickComponent__SetUseAnimNum(*v617, updated, 1, v622);
              v621 = *v617;
            }
            v623 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
            v516 = v623;
            if ( v470 )
            {
              System_Action___ctor(
                v623,
                (Il2CppObject *)v463,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__,
                0LL);
              if ( !v621 )
                goto LABEL_1035;
              v533 = 3;
              v614 = v621;
LABEL_983:
              v615 = v516;
              goto LABEL_984;
            }
            System_Action___ctor(
              v623,
              (Il2CppObject *)v463,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__,
              0LL);
            if ( !v621 )
              goto LABEL_1035;
            MapGimmickComponent__SetState(v621, 3, v516, v661);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                        this,
                        this->klass->vtable._15_onEnd.methodPtr);
            v660 = *(_QWORD *)v466;
            if ( !*(_QWORD *)v466 )
              goto LABEL_1035;
LABEL_989:
            ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
              this,
              *(_QWORD *)(v660 + 24),
              this->klass->vtable._14_EndAnim.methodPtr);
            return;
          case 402:
            updated = (__int64)v107->fields.param;
            if ( !updated )
              goto LABEL_1035;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1035;
            v472 = *(_QWORD *)(updated + 24);
            v473 = updated;
            if ( v472 )
            {
              if ( !(_DWORD)v472 )
                goto LABEL_1036;
              v474 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v473 + 24) >= 2 )
              {
                v475 = System_Int32__Parse(*(System_String_o **)(v473 + 40), 0LL) > 0;
                goto LABEL_899;
              }
            }
            else
            {
              v474 = 0;
            }
            v475 = 0;
LABEL_899:
            updated = (__int64)*v101;
            if ( !*v101 )
              goto LABEL_1035;
            v624 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v474,
                     this,
                     (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v624, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v624 )
                goto LABEL_1035;
              BYTE1(v624[6].monitor) = v475;
              MapGimmickComponent__SetDispAnim_35277616((MapGimmickComponent_o *)v624, 0, 0.0, 0, v625);
              v411 = v624[7].klass;
              if ( !v411 )
                goto LABEL_1035;
LABEL_905:
              v411[4] = 0;
              goto LABEL_18;
            }
            return;
          case 403:
            updated = (__int64)v107->fields.param;
            if ( !updated )
              goto LABEL_1035;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1035;
            v476 = *(_QWORD *)(updated + 24);
            v477 = updated;
            if ( v476 )
            {
              if ( !(_DWORD)v476 )
                goto LABEL_1036;
              v478 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v477 + 24) >= 2 )
              {
                v479 = System_Int32__Parse(*(System_String_o **)(v477 + 40), 0LL) > 0;
                goto LABEL_908;
              }
            }
            else
            {
              v478 = 0;
            }
            v479 = 0;
LABEL_908:
            updated = (__int64)*v101;
            if ( !*v101 )
              goto LABEL_1035;
            v626 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v478,
                     this,
                     (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v626, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v626 )
                goto LABEL_1035;
              LOBYTE(v626[6].monitor) = v479;
              BYTE1(v626[6].monitor) = 0;
              MapGimmickComponent__SetDispAnim_35277616((MapGimmickComponent_o *)v626, 1, 0.0, 0, v627);
              v628 = v626[7].klass;
              if ( !v628 )
                goto LABEL_1035;
              LODWORD(v628->_1.name) = 1;
              goto LABEL_18;
            }
            return;
          case 404:
            updated = (__int64)v107->fields.param;
            if ( !updated )
              goto LABEL_1035;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1035;
            v480 = updated;
            if ( *(int *)(updated + 24) <= 4 )
              goto LABEL_814;
            v481 = System_Single__Parse(*(System_String_o **)(updated + 56), 0LL);
            if ( !*(_DWORD *)(v480 + 24) )
              goto LABEL_1036;
            v482 = *v101;
            v483 = v481;
            updated = System_Int32__Parse(*(System_String_o **)(v480 + 32), 0LL);
            if ( !v482 )
              goto LABEL_1035;
            v484 = QuestAfterAction__GetMapComponent_object_(
                     v482,
                     2,
                     updated,
                     this,
                     (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v484, 0LL, 0LL) )
              return;
            v485 = *(int *)(v480 + 24) >= 6 && System_Int32__Parse(*(System_String_o **)(v480 + 72), 0LL) > 0;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4B3EEEF )
            {
              sub_1BDB878(&TerminalSceneComponent_TypeInfo, v98);
              byte_4B3EEEF = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v667 = **(_QWORD **)(updated + 184);
            if ( !v667 )
              goto LABEL_1035;
            if ( *(_DWORD *)(v480 + 24) <= 1u )
              goto LABEL_1036;
            v668 = *(ScrTerminalMap_o **)(v667 + 264);
            v669 = System_Single__Parse(*(System_String_o **)(v480 + 40), 0LL);
            if ( *(_DWORD *)(v480 + 24) <= 2u )
              goto LABEL_1036;
            v670 = v669;
            v671 = System_Single__Parse(*(System_String_o **)(v480 + 48), 0LL);
            if ( !v668 )
              goto LABEL_1035;
            *(UnityEngine_Vector3_o *)&v672 = ScrTerminalMap__LocalPosFromCoord(v668, v670, v671, 0.0, 0.0, 0LL);
            if ( *(_DWORD *)(v480 + 24) <= 4u )
              goto LABEL_1036;
            v675 = v672;
            v676 = v673;
            v677 = v674;
            v678 = v483 * 0.001;
            updated = System_Int32__Parse(*(System_String_o **)(v480 + 64), 0LL);
            v680 = updated;
            if ( v485 )
            {
              if ( !v484 )
                goto LABEL_1035;
              v720.fields.x = v675;
              v720.fields.y = v676;
              v720.fields.z = v677;
              MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v484, v720, v678, updated, 0LL, v679);
              goto LABEL_814;
            }
            v681 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
            System_Action___ctor(v681, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v484 )
              goto LABEL_1035;
            v652 = (MapGimmickComponent_o *)v484;
            v653 = v675;
            v654 = v676;
            v655 = v677;
            v656 = v678;
            v657 = v680;
            v658 = v681;
LABEL_1026:
            MapGimmickComponent__SetMoveAnim(v652, *(UnityEngine_Vector3_o *)&v653, v656, v657, v658, v651);
            return;
          case 405:
            v486 = sub_1BDBAC4(QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_12___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_12_o *)v486,
              0LL);
            if ( !v486 )
              goto LABEL_1035;
            *(_QWORD *)(v486 + 24) = v96;
            sub_1BDB81C((CGThumbnailListItem_o *)(v486 + 24), v96, v487, v488);
            v489 = *(_QWORD *)(v486 + 24);
            if ( !v489 )
              goto LABEL_1035;
            v490 = *(QuestAfterAction_o **)(v489 + 24);
            updated = System_Int32__Parse(v107->fields.param, 0LL);
            if ( !v490 )
              goto LABEL_1035;
            v491 = QuestAfterAction__GetMapComponent_object_(
                     v490,
                     2,
                     updated,
                     this,
                     (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v486 + 16) = v491;
            sub_1BDB81C((CGThumbnailListItem_o *)(v486 + 16), (int32_t)v491, v492, v493);
            v494 = *(UnityEngine_Object_o **)(v486 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v494, 0LL, 0LL) )
              return;
            v495 = *(MapGimmickComponent_o **)(v486 + 16);
            v496 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
            System_Action___ctor(
              v496,
              (Il2CppObject *)v486,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__,
              0LL);
            if ( !v495 )
              goto LABEL_1035;
            MapGimmickComponent__SetState(v495, 3, v496, v497);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4B3EEEF )
            {
              sub_1BDB878(&TerminalSceneComponent_TypeInfo, v98);
              byte_4B3EEEF = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v498 = **(TerminalSceneComponent_o ***)(updated + 184);
            if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            if ( !v498 )
              goto LABEL_1035;
            v119 = v498;
            v121 = 0LL;
            v120 = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
            goto LABEL_46;
          case 406:
            v499 = sub_1BDBAC4(QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_13___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_13_o *)v499,
              0LL);
            if ( !v499 )
              goto LABEL_1035;
            *(_QWORD *)(v499 + 32) = v96;
            sub_1BDB81C((CGThumbnailListItem_o *)(v499 + 32), v96, v500, v501);
            updated = (__int64)v107->fields.param;
            if ( !updated )
              goto LABEL_1035;
            v502 = System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            *(_QWORD *)(v499 + 24) = v502;
            v503 = (__int64 *)(v499 + 24);
            sub_1BDB81C((CGThumbnailListItem_o *)(v499 + 24), (int32_t)v502, v504, v505);
            v506 = *(_QWORD *)(v499 + 32);
            if ( !v506 )
              goto LABEL_1035;
            v507 = *v503;
            if ( !*v503 )
              goto LABEL_1035;
            if ( !*(_DWORD *)(v507 + 24) )
              goto LABEL_1036;
            v508 = *(QuestAfterAction_o **)(v506 + 24);
            updated = System_Int32__Parse(*(System_String_o **)(v507 + 32), 0LL);
            if ( !v508 )
              goto LABEL_1035;
            v509 = QuestAfterAction__GetMapComponent_object_(
                     v508,
                     2,
                     updated,
                     this,
                     (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v499 + 16) = v509;
            sub_1BDB81C((CGThumbnailListItem_o *)(v499 + 16), (int32_t)v509, v510, v511);
            v512 = *(UnityEngine_Object_o **)(v499 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v512, 0LL, 0LL) )
              return;
            v513 = *(MapGimmickComponent_o **)(v499 + 16);
            v514 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
            v515 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__;
            v516 = v514;
            goto LABEL_744;
          case 407:
            updated = (__int64)v107->fields.param;
            if ( !updated )
              goto LABEL_1035;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1035;
            v517 = updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_1036;
            v518 = *v101;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v518 )
              goto LABEL_1035;
            v519 = QuestAfterAction__GetMapComponent_object_(
                     v518,
                     2,
                     updated,
                     this,
                     (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v519, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( !v519 )
              goto LABEL_1035;
            updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v519, 0LL);
            if ( !updated )
              goto LABEL_1035;
            updated = (__int64)UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)updated,
                                 (const MethodInfo_3088784 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
            if ( *(_DWORD *)(v517 + 24) <= 1u )
              goto LABEL_1036;
            v520 = (UIWidget_o *)updated;
            updated = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v517 + 40), &color, 0LL);
            if ( !v520 )
              goto LABEL_1035;
            UIWidget__set_color(v520, color, 0LL);
            goto LABEL_814;
          case 408:
            v499 = sub_1BDBAC4(QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_15___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)v499,
              0LL);
            if ( !v499 )
              goto LABEL_1035;
            *(_QWORD *)(v499 + 24) = v96;
            sub_1BDB81C((CGThumbnailListItem_o *)(v499 + 24), v96, v521, v522);
            v523 = *(_QWORD *)(v499 + 24);
            if ( !v523 )
              goto LABEL_1035;
            v524 = *(QuestAfterAction_o **)(v523 + 24);
            updated = System_Int32__Parse(v107->fields.param, 0LL);
            if ( !v524 )
              goto LABEL_1035;
            v525 = QuestAfterAction__GetMapComponent_object_(
                     v524,
                     2,
                     updated,
                     this,
                     (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v499 + 16) = v525;
            v526 = v499 + 16;
            sub_1BDB81C((CGThumbnailListItem_o *)(v499 + 16), (int32_t)v525, v527, v528);
            v529 = *(UnityEngine_Object_o **)(v499 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v529, 0LL, 0LL) )
              return;
            updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !*(_QWORD *)v526 || !updated )
              goto LABEL_1035;
            v530 = QuestTree__CheckMapGimmickCond_35631196(
                     (QuestTree_o *)updated,
                     *(MapControl_MapGimmickInfo_o **)(*(_QWORD *)v526 + 112LL),
                     0LL);
            v513 = *(MapGimmickComponent_o **)v526;
            v531 = v530;
            v514 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
            v516 = v514;
            if ( v531 )
            {
              v515 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__;
LABEL_744:
              System_Action___ctor(v514, (Il2CppObject *)v499, *v515, 0LL);
              if ( !v513 )
                goto LABEL_1035;
              v533 = 3;
            }
            else
            {
              System_Action___ctor(
                v514,
                (Il2CppObject *)v499,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__,
                0LL);
              if ( !v513 )
                goto LABEL_1035;
              v533 = 2;
            }
            v614 = v513;
            goto LABEL_983;
          case 409:
            updated = (__int64)v107->fields.param;
            if ( !updated )
              goto LABEL_1035;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1035;
            v534 = *(_QWORD *)(updated + 24);
            v535 = updated;
            if ( v534 )
            {
              if ( !(_DWORD)v534 )
                goto LABEL_1036;
              v536 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v535 + 24) >= 2 )
              {
                v537 = System_Int32__Parse(*(System_String_o **)(v535 + 40), 0LL) > 0;
                goto LABEL_917;
              }
            }
            else
            {
              v536 = 0;
            }
            v537 = 0;
LABEL_917:
            updated = (__int64)*v101;
            if ( !*v101 )
              goto LABEL_1035;
            v629 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v536,
                     this,
                     (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v629, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v629 )
                goto LABEL_1035;
              LOBYTE(v629[6].monitor) = v537;
              BYTE1(v629[6].monitor) = 0;
              AnimTime = MapGimmickComponent__GetAnimTime((MapGimmickComponent_o *)v629, v98);
              MapGimmickComponent__SetDispAnim_35277616((MapGimmickComponent_o *)v629, 1, AnimTime, 1, v631);
              v632 = v629[7].klass;
              if ( !v632 )
                goto LABEL_1035;
              LODWORD(v632->_1.name) = 1;
              v633 = this->klass;
              this->fields.IsAnimDoing = 0;
              v634 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))v633->vtable._11_get_CommandIndex.method)(
                       this,
                       v633->vtable._12_set_CommandIndex.methodPtr);
              ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
                this,
                (unsigned int)(v634 + 1),
                this->klass->vtable._13_UpdateAnim.methodPtr);
              goto LABEL_19;
            }
            return;
          case 410:
            updated = (__int64)v107->fields.param;
            if ( !updated )
              goto LABEL_1035;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1035;
            v538 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_814;
            v539 = *v101;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v539 )
              goto LABEL_1035;
            v540 = QuestAfterAction__GetMapComponent_object_(
                     v539,
                     2,
                     updated,
                     this,
                     (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v540, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v538 + 24) <= 1u )
              goto LABEL_1036;
            v541 = *v101;
            updated = System_Int32__Parse(*(System_String_o **)(v538 + 40), 0LL);
            if ( !v541 )
              goto LABEL_1035;
            v543 = updated;
            v544 = v541;
            v545 = 0;
            goto LABEL_786;
          case 411:
            updated = (__int64)v107->fields.param;
            if ( !updated )
              goto LABEL_1035;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1035;
            v538 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_814;
            v546 = *v101;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v546 )
              goto LABEL_1035;
            v540 = QuestAfterAction__GetMapComponent_object_(
                     v546,
                     2,
                     updated,
                     this,
                     (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v540, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v538 + 24) <= 1u )
              goto LABEL_1036;
            v547 = *v101;
            updated = System_Int32__Parse(*(System_String_o **)(v538 + 40), 0LL);
            if ( !v547 )
              goto LABEL_1035;
            MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v547, 2, updated, this, v548);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL) )
              return;
            *(UnityEngine_Vector3_o *)&v550 = GameObjectExtensions__GetLocalPosition(
                                                (UnityEngine_GameObject_o *)MapGameObject,
                                                0LL);
            if ( *(_DWORD *)(v538 + 24) <= 2u )
              goto LABEL_1036;
            x = v550;
            y = v551;
            z = v552;
            goto LABEL_800;
          case 412:
            updated = (__int64)v107->fields.param;
            if ( !updated )
              goto LABEL_1035;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1035;
            v538 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_814;
            v556 = *v101;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v556 )
              goto LABEL_1035;
            v540 = QuestAfterAction__GetMapComponent_object_(
                     v556,
                     2,
                     updated,
                     this,
                     (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v540, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v538 + 24) <= 1u )
              goto LABEL_1036;
            v557 = *v101;
            updated = System_Int32__Parse(*(System_String_o **)(v538 + 40), 0LL);
            if ( !v557 )
              goto LABEL_1035;
            v543 = updated;
            v545 = 1;
            v544 = v557;
LABEL_786:
            v558 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v544, v545, v543, this, v542);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v558, 0LL, 0LL) )
              return;
            LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v558, 0LL);
            x = LocalPosition.fields.x;
            y = LocalPosition.fields.y;
            z = LocalPosition.fields.z;
            if ( !this->fields.IsMapModel )
              goto LABEL_799;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4B3EEEF )
            {
              sub_1BDB878(&TerminalSceneComponent_TypeInfo, v98);
              byte_4B3EEEF = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v559 = **(_QWORD **)(updated + 184);
            if ( !v559 )
              goto LABEL_1035;
            updated = *(_QWORD *)(v559 + 264);
            if ( !updated )
              goto LABEL_1035;
            v717.fields.x = x;
            v717.fields.y = y;
            v717.fields.z = z;
            v718 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v717, 0LL);
            x = v718.fields.x;
            y = v718.fields.y;
            z = v718.fields.z;
LABEL_799:
            if ( *(_DWORD *)(v538 + 24) <= 2u )
              goto LABEL_1036;
LABEL_800:
            v560 = System_Single__Parse(*(System_String_o **)(v538 + 48), 0LL) * 0.001;
            if ( v560 >= 0.0 )
              v561 = v560;
            else
              v561 = 0.5;
            if ( *(_DWORD *)(v538 + 24) <= 3u )
              goto LABEL_1036;
            v562 = System_Int32__Parse(*(System_String_o **)(v538 + 56), 0LL);
            if ( *(int *)(v538 + 24) >= 5 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v538 + 64), 0LL);
              if ( (int)updated >= 1 )
              {
                if ( !v540 )
                  goto LABEL_1035;
                v719.fields.x = x;
                v719.fields.y = y;
                v719.fields.z = z;
                MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v540, v719, v561, v562, 0LL, v563);
                goto LABEL_18;
              }
            }
            v650 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
            System_Action___ctor(v650, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v540 )
              goto LABEL_1035;
            v652 = (MapGimmickComponent_o *)v540;
            v653 = x;
            v654 = y;
            v655 = z;
            v656 = v561;
            v657 = v562;
            v658 = v650;
            goto LABEL_1026;
          default:
            if ( id != 500 )
              return;
            v368 = System_Int32__Parse(v107->fields.param, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4B416D4 )
            {
              sub_1BDB878(&TerminalPramsManager_TypeInfo, v367);
              byte_4B416D4 = 1;
            }
            v369 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v369 = TerminalPramsManager_TypeInfo;
            }
            v369->static_fields->_AfterActionFocusQuestId_k__BackingField = v368;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            updated = (__int64)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestMaster___);
            if ( !updated )
              goto LABEL_1035;
            if ( !DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                    &entity,
                    v368,
                    (const MethodInfo_32E1E88 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
              goto LABEL_814;
            updated = (__int64)entity;
            if ( !entity )
              goto LABEL_1035;
            v370 = *v101;
            updated = QuestEntity__getSpotId((QuestEntity_o *)entity, 0LL);
            if ( !v370 )
              goto LABEL_1035;
            v371 = QuestAfterAction__GetMapComponent_object_(
                     v370,
                     0,
                     updated,
                     this,
                     (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v371, 0LL, 0LL);
            if ( (updated & 1) == 0 )
              goto LABEL_814;
            if ( !v371 )
              goto LABEL_1035;
            SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v371, 0, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4B416D5 )
            {
              sub_1BDB878(&TerminalPramsManager_TypeInfo, v372);
              byte_4B416D5 = 1;
            }
            v373 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v373 = TerminalPramsManager_TypeInfo;
            }
            v373->static_fields->_IsBackQuestBoardDisable_k__BackingField = 1;
            goto LABEL_814;
        }
      }
      updated = (__int64)v107->fields.param;
      if ( !updated )
        goto LABEL_1035;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
      if ( !updated )
        goto LABEL_1035;
      v158 = updated;
      if ( *(int *)(updated + 24) <= 4 )
        goto LABEL_814;
      v159 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
      if ( *(_DWORD *)(v158 + 24) <= 1u )
        goto LABEL_1036;
      v160 = v159;
      v161 = System_Single__Parse(*(System_String_o **)(v158 + 40), 0LL);
      if ( *(_DWORD *)(v158 + 24) <= 2u )
        goto LABEL_1036;
      v162 = v161;
      v163 = System_Single__Parse(*(System_String_o **)(v158 + 48), 0LL);
      if ( *(_DWORD *)(v158 + 24) <= 3u )
        goto LABEL_1036;
      v164 = v163;
      v165 = System_Single__Parse(*(System_String_o **)(v158 + 56), 0LL);
      if ( *(_DWORD *)(v158 + 24) <= 4u )
        goto LABEL_1036;
      v166 = v165;
      v167 = System_Int32__Parse(*(System_String_o **)(v158 + 64), 0LL);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4B3EEEF )
      {
        sub_1BDB878(&TerminalSceneComponent_TypeInfo, v98);
        byte_4B3EEEF = 1;
      }
      updated = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        updated = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v168 = **(_QWORD **)(updated + 184);
      if ( !v168 )
        goto LABEL_1035;
      updated = *(_QWORD *)(v168 + 264);
      if ( !updated )
        goto LABEL_1035;
      v706.fields.y = v162;
      v706.fields.z = v164;
      v169 = v166 * 0.001;
      v706.fields.x = v160;
      *(UnityEngine_Vector3_o *)&v171 = ScrTerminalMap__ConvertLocalToScreenPosition(
                                          (ScrTerminalMap_o *)updated,
                                          v706,
                                          0LL);
      v174 = v171;
      v175 = v172;
      v176 = v173;
      if ( v107->fields.id != 352 || *(int *)(v158 + 24) < 6 )
      {
        if ( !*v101 )
          goto LABEL_1035;
        mMapCamera = (*v101)->fields.mMapCamera;
        v178 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        System_Action___ctor(
          v178,
          (Il2CppObject *)v96,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
          0LL);
        if ( !mMapCamera )
          goto LABEL_1035;
        v179 = mMapCamera;
        v180 = v174;
        v181 = v175;
        v182 = v176;
        v183 = v169;
        v184 = v167;
        goto LABEL_967;
      }
      if ( !*v101 )
        goto LABEL_1035;
      v374 = (*v101)->fields.mMapCamera;
      *(_QWORD *)&v699.fields.hasValue = &v687;
      *(_QWORD *)&v699.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
      *(_QWORD *)&v687.fields.hasValue = 0LL;
      *(_QWORD *)&v687.fields.value.fields.y = 0LL;
      System_Nullable_Vector3____ctor(v699, *(UnityEngine_Vector3_o *)&v171, v170);
      if ( *(_DWORD *)(v158 + 24) <= 5u )
        goto LABEL_1036;
      v375 = System_Single__Parse(*(System_String_o **)(v158 + 72), 0LL);
      p_size = (System_Nullable_float__o)&size;
      size = 0LL;
      System_Nullable_float____ctor(p_size, v375, (const MethodInfo_37F7AEC *)Method_System_Nullable_float___ctor__);
      v376 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(
        v376,
        (Il2CppObject *)v96,
        Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__,
        0LL);
      if ( !v374 )
        goto LABEL_1035;
      v704 = v687;
      v697 = size;
      v377 = v374;
      v378 = v169;
      v379 = v167;
LABEL_1008:
      MapCamera__StartAutoWork(v377, v378, v704, v697, v379, v376, 0LL);
      return;
    }
    if ( id <= 113 )
    {
      switch ( id )
      {
        case 'd':
          v146 = sub_1BDBAC4(QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_1___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_1_o *)v146,
            0LL);
          if ( !v146 )
            goto LABEL_1035;
          *(_QWORD *)(v146 + 24) = v96;
          sub_1BDB81C((CGThumbnailListItem_o *)(v146 + 24), v96, v147, v148);
          v149 = *(_QWORD *)(v146 + 24);
          if ( !v149 )
            goto LABEL_1035;
          v150 = *(QuestAfterAction_o **)(v149 + 24);
          updated = System_Int32__Parse(v107->fields.param, 0LL);
          if ( !v150 )
            goto LABEL_1035;
          v151 = QuestAfterAction__GetMapComponent_object_(
                   v150,
                   0,
                   updated,
                   this,
                   (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v146 + 16) = v151;
          sub_1BDB81C((CGThumbnailListItem_o *)(v146 + 16), (int32_t)v151, v152, v153);
          v154 = *(UnityEngine_Object_o **)(v146 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v154, 0LL, 0LL) )
            return;
          v155 = *(SrcSpotBasePrefab_o **)(v146 + 16);
          v156 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(
            v156,
            (Il2CppObject *)v146,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__,
            0LL);
          if ( !v155 )
            goto LABEL_1035;
          v157 = 2;
          goto LABEL_410;
        case 'e':
          v319 = sub_1BDBAC4(QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_2___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_2_o *)v319,
            0LL);
          if ( !v319 )
            goto LABEL_1035;
          *(_QWORD *)(v319 + 24) = v96;
          sub_1BDB81C((CGThumbnailListItem_o *)(v319 + 24), v96, v320, v321);
          v322 = *(_QWORD *)(v319 + 24);
          if ( !v322 )
            goto LABEL_1035;
          v323 = *(QuestAfterAction_o **)(v322 + 24);
          updated = System_Int32__Parse(v107->fields.param, 0LL);
          if ( !v323 )
            goto LABEL_1035;
          v324 = QuestAfterAction__GetMapComponent_object_(
                   v323,
                   0,
                   updated,
                   this,
                   (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v319 + 16) = v324;
          sub_1BDB81C((CGThumbnailListItem_o *)(v319 + 16), (int32_t)v324, v325, v326);
          v327 = *(UnityEngine_Object_o **)(v319 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v327, 0LL, 0LL) )
            return;
          v155 = *(SrcSpotBasePrefab_o **)(v319 + 16);
          v156 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(
            v156,
            (Il2CppObject *)v319,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
            0LL);
          if ( !v155 )
            goto LABEL_1035;
          v157 = 3;
LABEL_410:
          SrcSpotBasePrefab__SetState(v155, v157, v156, 0LL);
          return;
        case 'f':
          v328 = sub_1BDBAC4(QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_3___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_3_o *)v328,
            0LL);
          if ( !v328 )
            goto LABEL_1035;
          *(_QWORD *)(v328 + 24) = v96;
          v331 = v328 + 24;
          sub_1BDB81C((CGThumbnailListItem_o *)(v328 + 24), v96, v329, v330);
          if ( !*(_QWORD *)(v328 + 24) )
            goto LABEL_1035;
          v332 = *(QuestAfterAction_o **)(*(_QWORD *)(v328 + 24) + 24LL);
          updated = System_Int32__Parse(v107->fields.param, 0LL);
          if ( !v332 )
            goto LABEL_1035;
          v333 = QuestAfterAction__GetMapComponent_object_(
                   v332,
                   0,
                   updated,
                   this,
                   (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v328 + 16) = v333;
          v334 = (__int64 *)(v328 + 16);
          sub_1BDB81C((CGThumbnailListItem_o *)(v328 + 16), (int32_t)v333, v335, v336);
          v337 = *(UnityEngine_Object_o **)(v328 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v337, 0LL, 0LL) )
            return;
          v338 = *(SrcSpotBasePrefab_o **)(v328 + 16);
          v339 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(
            v339,
            (Il2CppObject *)v328,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
            0LL);
          if ( !v338 )
            goto LABEL_1035;
          SrcSpotBasePrefab__SetState(v338, 4, v339, 0LL);
          if ( !*(_QWORD *)v331 )
            goto LABEL_1035;
          updated = *(_QWORD *)(*(_QWORD *)v331 + 24LL);
          if ( !updated )
            goto LABEL_1035;
          v342 = *v334;
          *(_QWORD *)(updated + 184) = *v334;
          v343 = (CGThumbnailListItem_o *)(updated + 184);
          goto LABEL_432;
        case 'g':
          updated = (__int64)v107->fields.param;
          if ( !updated )
            goto LABEL_1035;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1035;
          v344 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_814;
          v345 = *v101;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v345 )
            goto LABEL_1035;
          v346 = QuestAfterAction__GetMapComponent_object_(
                   v345,
                   0,
                   updated,
                   this,
                   (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v346, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v344 + 24) <= 1u )
            goto LABEL_1036;
          updated = System_Int32__Parse(*(System_String_o **)(v344 + 40), 0LL);
          if ( !v346 )
            goto LABEL_1035;
          LODWORD(v346[14].klass) = updated;
          v347 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(v347, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v346, 5, v347, 0LL);
          updated = (__int64)*v101;
          if ( !*v101 )
            goto LABEL_1035;
          *(_QWORD *)(updated + 184) = v346;
          v343 = (CGThumbnailListItem_o *)(updated + 184);
          LODWORD(v342) = (_DWORD)v346;
LABEL_432:
          sub_1BDB81C(v343, v342, v340, v341);
          return;
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
          return;
        case 'n':
          v348 = *v101;
          updated = System_Int32__Parse(v107->fields.param, 0LL);
          if ( !v348 )
            goto LABEL_1035;
          v349 = QuestAfterAction__GetMapComponent_object_(
                   v348,
                   0,
                   updated,
                   this,
                   (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v349, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v349 )
            goto LABEL_1035;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v349, 0, 0LL);
          monitor = v349[14].monitor;
          if ( !monitor )
            goto LABEL_1035;
          monitor[5] = 0;
          v351 = (SrcSpotBasePrefab_o *)v349;
          v352 = 0;
          goto LABEL_455;
        case 'o':
          v353 = *v101;
          updated = System_Int32__Parse(v107->fields.param, 0LL);
          if ( !v353 )
            goto LABEL_1035;
          v354 = QuestAfterAction__GetMapComponent_object_(
                   v353,
                   0,
                   updated,
                   this,
                   (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v354, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v354 )
            goto LABEL_1035;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v354, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v354, 0, 0LL);
          v355 = v354[14].monitor;
          if ( !v355 )
            goto LABEL_1035;
          v355[5] = 2;
          goto LABEL_454;
        case 'p':
          v356 = *v101;
          updated = System_Int32__Parse(v107->fields.param, 0LL);
          if ( !v356 )
            goto LABEL_1035;
          v354 = QuestAfterAction__GetMapComponent_object_(
                   v356,
                   0,
                   updated,
                   this,
                   (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v354, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v354 )
            goto LABEL_1035;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v354, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v354, 1, 0LL);
          v357 = v354[14].monitor;
          if ( !v357 )
            goto LABEL_1035;
          v357[5] = 1;
LABEL_454:
          v352 = 1;
          v351 = (SrcSpotBasePrefab_o *)v354;
LABEL_455:
          SrcSpotBasePrefab__SetTouchType(v351, v352, 0LL);
          goto LABEL_18;
        case 'q':
          updated = (__int64)v107->fields.param;
          if ( !updated )
            goto LABEL_1035;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1035;
          v358 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_814;
          v359 = *v101;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v359 )
            goto LABEL_1035;
          v360 = QuestAfterAction__GetMapComponent_object_(
                   v359,
                   0,
                   updated,
                   this,
                   (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v360, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v358 + 24) <= 1u )
            goto LABEL_1036;
          updated = System_Int32__Parse(*(System_String_o **)(v358 + 40), 0LL);
          if ( !v360 )
            goto LABEL_1035;
          LODWORD(v360[14].klass) = updated;
          SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v360, 1, 0LL);
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
        updated = (__int64)v107->fields.param;
        if ( !updated )
          goto LABEL_1035;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1035;
        v127 = *(_QWORD *)(updated + 24);
        v128 = updated;
        if ( (int)v127 <= 0 )
          goto LABEL_814;
        if ( (int)v127 > 2 )
        {
          v431 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v127 = *(_QWORD *)(v128 + 24);
          v129 = v431 * 0.001;
        }
        else
        {
          v129 = 0.5;
        }
        sec = v129;
        if ( (int)v127 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v128 + 40), 0LL);
          v127 = *(_QWORD *)(v128 + 24);
          v302 = updated;
        }
        else
        {
          v302 = 15;
        }
        if ( !(_DWORD)v127 )
          goto LABEL_1036;
        v434 = *v101;
        updated = System_Int32__Parse(*(System_String_o **)(v128 + 32), 0LL);
        if ( !v434 )
          goto LABEL_1035;
        v436 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v434, 0, updated, this, v435);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v436, 0LL, 0LL) )
          return;
        v708 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v436, 0LL);
        v437 = v708.fields.x;
        v438 = v708.fields.y;
        v439 = v708.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_619;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4B3EEEF )
        {
          sub_1BDB878(&TerminalSceneComponent_TypeInfo, v98);
          byte_4B3EEEF = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v440 = **(_QWORD **)(updated + 184);
        if ( !v440 )
          goto LABEL_1035;
        updated = *(_QWORD *)(v440 + 264);
        if ( !updated )
          goto LABEL_1035;
        v709.fields.x = v437;
        v709.fields.y = v438;
        v709.fields.z = v439;
        v710 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v709, 0LL);
        v437 = v710.fields.x;
        v438 = v710.fields.y;
        v439 = v710.fields.z;
LABEL_619:
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_942;
        if ( !*(_DWORD *)(v128 + 24) )
          goto LABEL_1036;
        v441 = *(System_String_o **)(v128 + 32);
        updated = System_String__op_Equality(v441, (System_String_o *)StringLiteral_1329/*"10703"*/, 0LL);
        if ( (updated & 1) != 0 )
        {
          v438 = v438 + -50.0;
        }
        else
        {
          updated = System_String__op_Equality(v441, (System_String_o *)StringLiteral_1403/*"30101"*/, 0LL);
          if ( (updated & 1) != 0 )
            v438 = v438 + -50.0;
        }
LABEL_942:
        v456 = *(_DWORD *)(v128 + 24);
        if ( v107->fields.id == 305 )
        {
LABEL_943:
          if ( v456 < 4 )
            goto LABEL_944;
          if ( v456 == 4 )
          {
            if ( !*v101 )
              goto LABEL_1035;
            v639 = (*v101)->fields.mMapCamera;
          }
          else
          {
            updated = System_Int32__Parse(*(System_String_o **)(v128 + 64), 0LL);
            if ( !*v101 )
              goto LABEL_1035;
            v639 = (*v101)->fields.mMapCamera;
            if ( (int)updated >= 1 )
            {
              *(_QWORD *)&v700.fields.hasValue = &v687;
              v642 = v437;
              v643 = v438;
              *(_QWORD *)&v700.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
              v644 = v439;
              v687 = (System_Nullable_Vector3__o)0LL;
LABEL_999:
              System_Nullable_Vector3____ctor(v700, *(UnityEngine_Vector3_o *)&v642, v106);
              if ( *(_DWORD *)(v128 + 24) <= 3u )
                goto LABEL_1036;
              v663 = System_Single__Parse(*(System_String_o **)(v128 + 56), 0LL);
              v693 = (System_Nullable_float__o)&size;
              size = 0LL;
              System_Nullable_float____ctor(
                v693,
                v663,
                (const MethodInfo_37F7AEC *)Method_System_Nullable_float___ctor__);
              if ( !v639 )
                goto LABEL_1035;
              v705 = v687;
              v698 = size;
              v664 = sec;
              v665 = v639;
LABEL_1002:
              MapCamera__StartAutoWork(v665, v664, v705, v698, v302, 0LL, 0LL);
              goto LABEL_814;
            }
          }
          *(_QWORD *)&v701.fields.hasValue = &v687;
          v645 = v437;
          v646 = v438;
          *(_QWORD *)&v701.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          v647 = v439;
          v687 = (System_Nullable_Vector3__o)0LL;
LABEL_1004:
          System_Nullable_Vector3____ctor(v701, *(UnityEngine_Vector3_o *)&v645, v106);
          if ( *(_DWORD *)(v128 + 24) <= 3u )
            goto LABEL_1036;
          v666 = System_Single__Parse(*(System_String_o **)(v128 + 56), 0LL);
          v694 = (System_Nullable_float__o)&size;
          size = 0LL;
          System_Nullable_float____ctor(v694, v666, (const MethodInfo_37F7AEC *)Method_System_Nullable_float___ctor__);
          v376 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(v376, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v639 )
            goto LABEL_1035;
          v704 = v687;
          v697 = size;
          v378 = sec;
          v377 = v639;
          goto LABEL_1007;
        }
LABEL_660:
        if ( v456 < 4 )
        {
LABEL_944:
          if ( !*v101 )
            goto LABEL_1035;
          v458 = (*v101)->fields.mMapCamera;
          goto LABEL_946;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v128 + 56), 0LL);
        v457 = *v101;
        if ( !*v101 )
          goto LABEL_1035;
        v458 = v457->fields.mMapCamera;
        if ( (int)updated < 1 )
        {
LABEL_946:
          v178 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(v178, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v458 )
            goto LABEL_1035;
          v179 = v458;
          v180 = v437;
          v181 = v438;
          v182 = v439;
LABEL_965:
          v183 = sec;
LABEL_966:
          v184 = v302;
LABEL_967:
          MapCamera__StartAutoMove(v179, *(UnityEngine_Vector3_o *)&v180, v183, v184, v178, 0LL);
          return;
        }
        if ( !v458 )
          goto LABEL_1035;
        v459 = v457->fields.mMapCamera;
        v460 = v437;
        v461 = v438;
        v462 = v439;
        goto LABEL_976;
      case 301:
      case 306:
        updated = (__int64)v107->fields.param;
        if ( !updated )
          goto LABEL_1035;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1035;
        v295 = *(_QWORD *)(updated + 24);
        v128 = updated;
        if ( (int)v295 <= 0 )
          goto LABEL_814;
        if ( (int)v295 > 2 )
        {
          v432 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v295 = *(_QWORD *)(v128 + 24);
          v296 = v432 * 0.001;
        }
        else
        {
          v296 = 0.5;
        }
        sec = v296;
        if ( (int)v295 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v128 + 40), 0LL);
          v295 = *(_QWORD *)(v128 + 24);
          v302 = updated;
        }
        else
        {
          v302 = 15;
        }
        if ( !(_DWORD)v295 )
          goto LABEL_1036;
        v442 = *v101;
        updated = System_Int32__Parse(*(System_String_o **)(v128 + 32), 0LL);
        if ( !v442 )
          goto LABEL_1035;
        v444 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v442, 1, updated, this, v443);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        updated = UnityEngine_Object__op_Equality(v444, 0LL, 0LL);
        if ( (updated & 1) != 0 )
          return;
        if ( this->fields.IsMapModel )
        {
          if ( !v444 )
            goto LABEL_1035;
          updated = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v444,
                               (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
          if ( !updated )
            goto LABEL_1035;
          Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)*(_QWORD *)(updated + 32), 0LL);
          v445 = Position.fields.x;
          v446 = Position.fields.y;
          v447 = Position.fields.z;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4B3EEEF )
          {
            sub_1BDB878(&TerminalSceneComponent_TypeInfo, v98);
            byte_4B3EEEF = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v448 = **(_QWORD **)(updated + 184);
          if ( !v448 )
            goto LABEL_1035;
          updated = *(_QWORD *)(v448 + 264);
          if ( !updated )
            goto LABEL_1035;
          v712.fields.x = v445;
          v712.fields.y = v446;
          v712.fields.z = v447;
          *(UnityEngine_Vector3_o *)&v449 = ScrTerminalMap__ConvertWorldToScreenPosition(
                                              (ScrTerminalMap_o *)updated,
                                              v712,
                                              0LL);
        }
        else
        {
          *(UnityEngine_Vector3_o *)&v449 = GameObjectExtensions__GetLocalPosition(
                                              (UnityEngine_GameObject_o *)v444,
                                              0LL);
        }
        v603 = v449;
        v604 = v450;
        v605 = v451;
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_954;
        if ( !*(_DWORD *)(v128 + 24) )
          goto LABEL_1036;
        v606 = *(System_String_o **)(v128 + 32);
        updated = System_String__op_Equality(v606, (System_String_o *)StringLiteral_1329/*"10703"*/, 0LL);
        if ( (updated & 1) != 0 )
        {
          v604 = v604 + -95.0;
        }
        else
        {
          updated = System_String__op_Equality(v606, (System_String_o *)StringLiteral_1404/*"30102"*/, 0LL);
          if ( (updated & 1) != 0 )
            v604 = v604 + 45.0;
        }
LABEL_954:
        v640 = *(_DWORD *)(v128 + 24);
        if ( v107->fields.id == 306 )
        {
          if ( v640 >= 4 )
          {
            if ( v640 == 4 )
            {
              if ( !*v101 )
                goto LABEL_1035;
              v639 = (*v101)->fields.mMapCamera;
            }
            else
            {
              updated = System_Int32__Parse(*(System_String_o **)(v128 + 64), 0LL);
              if ( !*v101 )
                goto LABEL_1035;
              v639 = (*v101)->fields.mMapCamera;
              if ( (int)updated >= 1 )
              {
                v687 = (System_Nullable_Vector3__o)0LL;
                *(_QWORD *)&v700.fields.hasValue = &v687;
                v642 = v603;
                *(_QWORD *)&v700.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                v643 = v604;
                v644 = v605;
                goto LABEL_999;
              }
            }
            v687 = (System_Nullable_Vector3__o)0LL;
            *(_QWORD *)&v701.fields.hasValue = &v687;
            v645 = v603;
            *(_QWORD *)&v701.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v646 = v604;
            v647 = v605;
            goto LABEL_1004;
          }
          goto LABEL_961;
        }
        if ( v640 < 4 )
        {
LABEL_961:
          if ( !*v101 )
            goto LABEL_1035;
          v641 = (*v101)->fields.mMapCamera;
LABEL_963:
          v178 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(v178, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v641 )
            goto LABEL_1035;
          v179 = v641;
          v180 = v603;
          v181 = v604;
          v182 = v605;
          goto LABEL_965;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v128 + 56), 0LL);
        v648 = *v101;
        if ( !*v101 )
          goto LABEL_1035;
        v641 = v648->fields.mMapCamera;
        if ( (int)updated < 1 )
          goto LABEL_963;
        if ( !v641 )
          goto LABEL_1035;
        v459 = v648->fields.mMapCamera;
        v460 = v603;
        v461 = v604;
        v462 = v605;
LABEL_976:
        v649 = sec;
        goto LABEL_977;
      case 302:
      case 307:
        updated = (__int64)v107->fields.param;
        if ( !updated )
          goto LABEL_1035;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1035;
        v297 = *(_QWORD *)(updated + 24);
        v128 = updated;
        if ( (int)v297 <= 0 )
          goto LABEL_814;
        if ( (int)v297 > 2 )
        {
          v433 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v297 = *(_QWORD *)(v128 + 24);
          v298 = v433 * 0.001;
        }
        else
        {
          v298 = 0.5;
        }
        sec = v298;
        if ( (int)v297 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v128 + 40), 0LL);
          v297 = *(_QWORD *)(v128 + 24);
          v302 = updated;
        }
        else
        {
          v302 = 15;
        }
        if ( !(_DWORD)v297 )
          goto LABEL_1036;
        v452 = *v101;
        updated = System_Int32__Parse(*(System_String_o **)(v128 + 32), 0LL);
        if ( !v452 )
          goto LABEL_1035;
        v454 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v452, 2, updated, this, v453);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v454, 0LL, 0LL) )
          return;
        v713 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v454, 0LL);
        v437 = v713.fields.x;
        v438 = v713.fields.y;
        v439 = v713.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_659;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4B3EEEF )
        {
          sub_1BDB878(&TerminalSceneComponent_TypeInfo, v98);
          byte_4B3EEEF = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v455 = **(_QWORD **)(updated + 184);
        if ( !v455 )
          goto LABEL_1035;
        updated = *(_QWORD *)(v455 + 264);
        if ( !updated )
          goto LABEL_1035;
        v714.fields.x = v437;
        v714.fields.y = v438;
        v714.fields.z = v439;
        v715 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v714, 0LL);
        v437 = v715.fields.x;
        v438 = v715.fields.y;
        v439 = v715.fields.z;
LABEL_659:
        v456 = *(_DWORD *)(v128 + 24);
        if ( v107->fields.id != 307 )
          goto LABEL_660;
        goto LABEL_943;
      case 303:
      case 308:
        updated = (__int64)v107->fields.param;
        if ( !updated )
          goto LABEL_1035;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1035;
        v299 = updated;
        if ( *(int *)(updated + 24) < 4 )
          goto LABEL_814;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4B416D3 )
        {
          sub_1BDB878(&TerminalPramsManager_TypeInfo, v98);
          byte_4B416D3 = 1;
        }
        updated = (__int64)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          updated = (__int64)TerminalPramsManager_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)(updated + 184) + 105LL) )
          goto LABEL_814;
        if ( *(_DWORD *)(v299 + 24) <= 2u )
          goto LABEL_1036;
        v300 = System_Single__Parse(*(System_String_o **)(v299 + 48), 0LL) * 0.001;
        v301 = v300 >= 0.0 ? v300 : 0.5;
        if ( *(_DWORD *)(v299 + 24) <= 3u )
          goto LABEL_1036;
        v302 = System_Int32__Parse(*(System_String_o **)(v299 + 56), 0LL);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4B3EEEF )
        {
          sub_1BDB878(&TerminalSceneComponent_TypeInfo, v98);
          byte_4B3EEEF = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v303 = **(_QWORD **)(updated + 184);
        if ( !v303 )
          goto LABEL_1035;
        if ( !*(_DWORD *)(v299 + 24) )
          goto LABEL_1036;
        v304 = *(ScrTerminalMap_o **)(v303 + 264);
        v305 = System_Single__Parse(*(System_String_o **)(v299 + 32), 0LL);
        if ( *(_DWORD *)(v299 + 24) <= 1u )
          goto LABEL_1036;
        v306 = v305;
        v307 = System_Single__Parse(*(System_String_o **)(v299 + 40), 0LL);
        if ( !v304 )
          goto LABEL_1035;
        v707 = ScrTerminalMap__LocalPosFromCoord(v304, v306, v307, 0.0, 0.0, 0LL);
        v309 = *(_DWORD *)(v299 + 24);
        v310 = v707.fields.x;
        v311 = v707.fields.y;
        v312 = v707.fields.z;
        if ( v107->fields.id == 308 )
        {
          if ( v309 >= 5 )
          {
            if ( v309 == 5 )
            {
              if ( !*v101 )
                goto LABEL_1035;
              v313 = (*v101)->fields.mMapCamera;
            }
            else
            {
              updated = System_Int32__Parse(*(System_String_o **)(v299 + 72), 0LL);
              if ( !*v101 )
                goto LABEL_1035;
              v313 = (*v101)->fields.mMapCamera;
              if ( (int)updated >= 1 )
              {
                *(_QWORD *)&v702.fields.hasValue = &v687;
                v721.fields.x = v310;
                v721.fields.y = v311;
                *(_QWORD *)&v702.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                v721.fields.z = v312;
                v687 = (System_Nullable_Vector3__o)0LL;
                System_Nullable_Vector3____ctor(v702, v721, v308);
                if ( *(_DWORD *)(v299 + 24) <= 4u )
                  goto LABEL_1036;
                v682 = System_Single__Parse(*(System_String_o **)(v299 + 64), 0LL);
                v695 = (System_Nullable_float__o)&size;
                size = 0LL;
                System_Nullable_float____ctor(
                  v695,
                  v682,
                  (const MethodInfo_37F7AEC *)Method_System_Nullable_float___ctor__);
                if ( !v313 )
                  goto LABEL_1035;
                v705 = v687;
                v698 = size;
                v665 = v313;
                v664 = v301;
                goto LABEL_1002;
              }
            }
            *(_QWORD *)&v703.fields.hasValue = &v687;
            v722.fields.x = v310;
            v722.fields.y = v311;
            *(_QWORD *)&v703.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v722.fields.z = v312;
            v687 = (System_Nullable_Vector3__o)0LL;
            System_Nullable_Vector3____ctor(v703, v722, v308);
            if ( *(_DWORD *)(v299 + 24) <= 4u )
              goto LABEL_1036;
            v683 = System_Single__Parse(*(System_String_o **)(v299 + 64), 0LL);
            v696 = (System_Nullable_float__o)&size;
            size = 0LL;
            System_Nullable_float____ctor(v696, v683, (const MethodInfo_37F7AEC *)Method_System_Nullable_float___ctor__);
            v376 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
            System_Action___ctor(v376, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v313 )
              goto LABEL_1035;
            v704 = v687;
            v697 = size;
            v377 = v313;
            v378 = v301;
LABEL_1007:
            v379 = v302;
            goto LABEL_1008;
          }
        }
        else if ( v309 >= 5 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v299 + 64), 0LL);
          v662 = *v101;
          if ( !*v101 )
            goto LABEL_1035;
          v638 = v662->fields.mMapCamera;
          if ( (int)updated >= 1 )
          {
            if ( !v638 )
              goto LABEL_1035;
            v459 = v662->fields.mMapCamera;
            v460 = v310;
            v461 = v311;
            v462 = v312;
            v649 = v301;
LABEL_977:
            MapCamera__StartAutoMove(v459, *(UnityEngine_Vector3_o *)&v460, v649, v302, 0LL, 0LL);
            goto LABEL_814;
          }
LABEL_938:
          v178 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(v178, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v638 )
            goto LABEL_1035;
          v179 = v638;
          v180 = v310;
          v181 = v311;
          v182 = v312;
          v183 = v301;
          goto LABEL_966;
        }
        if ( !*v101 )
          goto LABEL_1035;
        v638 = (*v101)->fields.mMapCamera;
        goto LABEL_938;
      case 304:
        updated = (__int64)v107->fields.param;
        if ( !updated )
          goto LABEL_1035;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1035;
        v380 = *(_DWORD *)(updated + 24);
        v381 = updated;
        if ( v380 <= 1 )
          goto LABEL_814;
        v382 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(_DWORD *)(v381 + 24) <= 1u )
          goto LABEL_1036;
        v383 = v382;
        v384 = System_Single__Parse(*(System_String_o **)(v381 + 40), 0LL);
        if ( !*v101 )
          goto LABEL_1035;
        v385 = (*v101)->fields.mMapCamera;
        v386 = v384 * 0.001;
        if ( v386 >= 0.0 )
          v387 = v386;
        else
          v387 = 0.5;
        if ( v380 < 3 )
        {
          v388 = 5;
        }
        else
        {
          if ( *(_DWORD *)(v381 + 24) <= 2u )
            goto LABEL_1036;
          v388 = System_Int32__Parse(*(System_String_o **)(v381 + 48), 0LL);
        }
        v602 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        System_Action___ctor(
          v602,
          (Il2CppObject *)v96,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__,
          0LL);
        if ( !v385 )
          goto LABEL_1035;
        MapCamera__StartAutoZoom(v385, v383, v387, v388, v602, 0LL);
        return;
      default:
        switch ( id )
        {
          case 200:
            if ( this->fields.IsMapModel )
            {
              v185 = sub_1BDBAC4(QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_4___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_4_o *)v185,
                0LL);
              if ( !v185 )
                goto LABEL_1035;
              *(_QWORD *)(v185 + 24) = v96;
              sub_1BDB81C((CGThumbnailListItem_o *)(v185 + 24), v96, v186, v187);
              v188 = *(_QWORD *)(v185 + 24);
              if ( !v188 )
                goto LABEL_1035;
              v189 = *(QuestAfterAction_o **)(v188 + 24);
              updated = System_Int32__Parse(v107->fields.param, 0LL);
              if ( !v189 )
                goto LABEL_1035;
              v190 = QuestAfterAction__GetMapComponent_object_(
                       v189,
                       1,
                       updated,
                       this,
                       (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v185 + 16) = v190;
              sub_1BDB81C((CGThumbnailListItem_o *)(v185 + 16), (int32_t)v190, v191, v192);
              v193 = *(UnityEngine_Object_o **)(v185 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v193, 0LL, 0LL) )
              {
                v194 = *(ModelLineComponent_o **)(v185 + 16);
                v195 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                System_Action___ctor(
                  v195,
                  (Il2CppObject *)v185,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
                  0LL);
                if ( !v194 )
                  goto LABEL_1035;
                v197 = 2;
                goto LABEL_545;
              }
            }
            else
            {
              v568 = sub_1BDBAC4(QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_5___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_5_o *)v568,
                0LL);
              if ( !v568 )
                goto LABEL_1035;
              *(_QWORD *)(v568 + 24) = v96;
              sub_1BDB81C((CGThumbnailListItem_o *)(v568 + 24), v96, v569, v570);
              v571 = *(_QWORD *)(v568 + 24);
              if ( !v571 )
                goto LABEL_1035;
              v572 = *(QuestAfterAction_o **)(v571 + 24);
              updated = System_Int32__Parse(v107->fields.param, 0LL);
              if ( !v572 )
                goto LABEL_1035;
              v573 = QuestAfterAction__GetMapComponent_object_(
                       v572,
                       1,
                       updated,
                       this,
                       (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v568 + 16) = v573;
              sub_1BDB81C((CGThumbnailListItem_o *)(v568 + 16), (int32_t)v573, v574, v575);
              v576 = *(UnityEngine_Object_o **)(v568 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v576, 0LL, 0LL) )
              {
                v577 = *(srcLineSprite_o **)(v568 + 16);
                v578 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                System_Action___ctor(
                  v578,
                  (Il2CppObject *)v568,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
                  0LL);
                if ( !v577 )
                  goto LABEL_1035;
                v579 = 2;
                goto LABEL_843;
              }
            }
            return;
          case 201:
            if ( this->fields.IsMapModel )
            {
              v389 = sub_1BDBAC4(QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_6___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_6_o *)v389,
                0LL);
              if ( !v389 )
                goto LABEL_1035;
              *(_QWORD *)(v389 + 24) = v96;
              sub_1BDB81C((CGThumbnailListItem_o *)(v389 + 24), v96, v390, v391);
              v392 = *(_QWORD *)(v389 + 24);
              if ( !v392 )
                goto LABEL_1035;
              v393 = *(QuestAfterAction_o **)(v392 + 24);
              updated = System_Int32__Parse(v107->fields.param, 0LL);
              if ( !v393 )
                goto LABEL_1035;
              v394 = QuestAfterAction__GetMapComponent_object_(
                       v393,
                       1,
                       updated,
                       this,
                       (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v389 + 16) = v394;
              sub_1BDB81C((CGThumbnailListItem_o *)(v389 + 16), (int32_t)v394, v395, v396);
              v397 = *(UnityEngine_Object_o **)(v389 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v397, 0LL, 0LL) )
              {
                v194 = *(ModelLineComponent_o **)(v389 + 16);
                v195 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                System_Action___ctor(
                  v195,
                  (Il2CppObject *)v389,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__,
                  0LL);
                if ( !v194 )
                  goto LABEL_1035;
                v197 = 3;
                goto LABEL_545;
              }
            }
            else
            {
              v580 = sub_1BDBAC4(QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_7___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_7_o *)v580,
                0LL);
              if ( !v580 )
                goto LABEL_1035;
              *(_QWORD *)(v580 + 24) = v96;
              sub_1BDB81C((CGThumbnailListItem_o *)(v580 + 24), v96, v581, v582);
              v583 = *(_QWORD *)(v580 + 24);
              if ( !v583 )
                goto LABEL_1035;
              v584 = *(QuestAfterAction_o **)(v583 + 24);
              updated = System_Int32__Parse(v107->fields.param, 0LL);
              if ( !v584 )
                goto LABEL_1035;
              v585 = QuestAfterAction__GetMapComponent_object_(
                       v584,
                       1,
                       updated,
                       this,
                       (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v580 + 16) = v585;
              sub_1BDB81C((CGThumbnailListItem_o *)(v580 + 16), (int32_t)v585, v586, v587);
              v588 = *(UnityEngine_Object_o **)(v580 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v588, 0LL, 0LL) )
              {
                v577 = *(srcLineSprite_o **)(v580 + 16);
                v578 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                System_Action___ctor(
                  v578,
                  (Il2CppObject *)v580,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
                  0LL);
                if ( !v577 )
                  goto LABEL_1035;
                v579 = 3;
                goto LABEL_843;
              }
            }
            return;
          case 202:
            if ( this->fields.IsMapModel )
            {
              v398 = sub_1BDBAC4(QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_8___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_8_o *)v398,
                0LL);
              if ( !v398 )
                goto LABEL_1035;
              *(_QWORD *)(v398 + 24) = v96;
              sub_1BDB81C((CGThumbnailListItem_o *)(v398 + 24), v96, v399, v400);
              v401 = *(_QWORD *)(v398 + 24);
              if ( !v401 )
                goto LABEL_1035;
              v402 = *(QuestAfterAction_o **)(v401 + 24);
              updated = System_Int32__Parse(v107->fields.param, 0LL);
              if ( !v402 )
                goto LABEL_1035;
              v403 = QuestAfterAction__GetMapComponent_object_(
                       v402,
                       1,
                       updated,
                       this,
                       (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v398 + 16) = v403;
              sub_1BDB81C((CGThumbnailListItem_o *)(v398 + 16), (int32_t)v403, v404, v405);
              v406 = *(UnityEngine_Object_o **)(v398 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v406, 0LL, 0LL) )
              {
                v194 = *(ModelLineComponent_o **)(v398 + 16);
                v195 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                System_Action___ctor(
                  v195,
                  (Il2CppObject *)v398,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
                  0LL);
                if ( !v194 )
                  goto LABEL_1035;
                v197 = 4;
LABEL_545:
                ModelLineComponent__SetState(v194, v197, v195, v196);
              }
            }
            else
            {
              v589 = sub_1BDBAC4(QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_9___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_9_o *)v589,
                0LL);
              if ( !v589 )
                goto LABEL_1035;
              *(_QWORD *)(v589 + 24) = v96;
              sub_1BDB81C((CGThumbnailListItem_o *)(v589 + 24), v96, v590, v591);
              v592 = *(_QWORD *)(v589 + 24);
              if ( !v592 )
                goto LABEL_1035;
              v593 = *(QuestAfterAction_o **)(v592 + 24);
              updated = System_Int32__Parse(v107->fields.param, 0LL);
              if ( !v593 )
                goto LABEL_1035;
              v594 = QuestAfterAction__GetMapComponent_object_(
                       v593,
                       1,
                       updated,
                       this,
                       (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v589 + 16) = v594;
              sub_1BDB81C((CGThumbnailListItem_o *)(v589 + 16), (int32_t)v594, v595, v596);
              v597 = *(UnityEngine_Object_o **)(v589 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v597, 0LL, 0LL) )
              {
                v577 = *(srcLineSprite_o **)(v589 + 16);
                v578 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                System_Action___ctor(
                  v578,
                  (Il2CppObject *)v589,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
                  0LL);
                if ( !v577 )
                  goto LABEL_1035;
                v579 = 4;
LABEL_843:
                srcLineSprite__SetState(v577, v579, v578, 0LL);
              }
            }
            return;
          case 203:
            IsMapModel = this->fields.IsMapModel;
            v408 = *v101;
            updated = System_Int32__Parse(v107->fields.param, 0LL);
            if ( !v408 )
              goto LABEL_1035;
            if ( IsMapModel )
            {
              v409 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v408,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v409, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v409 )
                goto LABEL_1035;
              ModelLineComponent__SetQuestAfterActionScaleAnim_35302328((ModelLineComponent_o *)v409, 0, 0.0, v410);
              v411 = v409[3].klass;
              if ( !v411 )
                goto LABEL_1035;
            }
            else
            {
              v598 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v408,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v598, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v598 )
                goto LABEL_1035;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v598, 0, 0LL);
              v411 = v598[5].monitor;
              if ( !v411 )
                goto LABEL_1035;
            }
            goto LABEL_905;
          case 204:
            v412 = this->fields.IsMapModel;
            v413 = *v101;
            updated = System_Int32__Parse(v107->fields.param, 0LL);
            if ( !v413 )
              goto LABEL_1035;
            if ( v412 )
            {
              v414 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v413,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v414, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v414 )
                goto LABEL_1035;
              ModelLineComponent__SetQuestAfterActionScaleAnim_35302328((ModelLineComponent_o *)v414, 1, 0.0, v415);
              ModelLineComponent__SetQuestAfterActionColorAnim_35302804((ModelLineComponent_o *)v414, 0, 0.0, v416);
              v417 = v414[3].klass;
              if ( !v417 )
                goto LABEL_1035;
            }
            else
            {
              v599 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v413,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v599, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v599 )
                goto LABEL_1035;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v599, 1, 0LL);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v599, 0, 0LL);
              v417 = v599[5].monitor;
              if ( !v417 )
                goto LABEL_1035;
            }
            v600 = 2;
            goto LABEL_862;
          case 205:
            v418 = this->fields.IsMapModel;
            v419 = *v101;
            updated = System_Int32__Parse(v107->fields.param, 0LL);
            if ( !v419 )
              goto LABEL_1035;
            if ( v418 )
            {
              v420 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v419,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v420, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v420 )
                goto LABEL_1035;
              ModelLineComponent__SetQuestAfterActionScaleAnim_35302328((ModelLineComponent_o *)v420, 1, 0.0, v421);
              ModelLineComponent__SetQuestAfterActionColorAnim_35302804((ModelLineComponent_o *)v420, 1, 0.0, v422);
              v417 = v420[3].klass;
              if ( !v417 )
                goto LABEL_1035;
            }
            else
            {
              v601 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v419,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_30CA348 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v601, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v601 )
                goto LABEL_1035;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v601, 1, 0LL);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v601, 1, 0LL);
              v417 = v601[5].monitor;
              if ( !v417 )
                goto LABEL_1035;
            }
            v600 = 1;
LABEL_862:
            v417[4] = v600;
            goto LABEL_18;
          default:
            if ( id != 350 )
              return;
            updated = (__int64)v107->fields.param;
            if ( !updated )
              goto LABEL_1035;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1035;
            v314 = updated;
            if ( *(int *)(updated + 24) <= 0 )
              goto LABEL_814;
            v315 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( v315 < 1 )
              goto LABEL_814;
            v316 = v315;
            v317 = 0.5;
            if ( *(int *)(v314 + 24) > 1 )
            {
              v318 = System_Int32__Parse(*(System_String_o **)(v314 + 40), 0LL);
              if ( *(int *)(v314 + 24) >= 3 )
                v317 = System_Single__Parse(*(System_String_o **)(v314 + 48), 0LL) * 0.001;
            }
            else
            {
              v318 = 15;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4B3EEEF )
            {
              sub_1BDB878(&TerminalSceneComponent_TypeInfo, v98);
              byte_4B3EEEF = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v635 = **(_QWORD **)(updated + 184);
            if ( !v635 )
              goto LABEL_1035;
            v636 = *(ScrTerminalMap_o **)(v635 + 264);
            v637 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
            System_Action___ctor(
              v637,
              (Il2CppObject *)v96,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__,
              0LL);
            if ( !v636 )
              goto LABEL_1035;
            ScrTerminalMap__RequestMapMove_36016100(v636, v316, v317, v318, v637, 0LL);
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
          v122 = (System_String_o *)StringLiteral_1/*""*/;
          v123 = System_String__Concat_62572260((System_String_o *)StringLiteral_10817/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v107->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v124 = LocalizationManager__Get(v123, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v126 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(
            v126,
            (Il2CppObject *)v96,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__,
            0LL);
          if ( !Instance )
            goto LABEL_1035;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            v122,
            v124,
            v126,
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
          v264 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_1BDB920(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1035;
          v266 = (System_String_array *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            break;
          v267 = StringLiteral_89/*"\r\n"*/;
          *(_QWORD *)(updated + 32) = StringLiteral_89/*"\r\n"*/;
          sub_1BDB81C((CGThumbnailListItem_o *)(updated + 32), v267, (int32_t)v106, v265);
          updated = (__int64)v107->fields.param;
          if ( !updated )
            goto LABEL_1035;
          updated = (__int64)System_String__Split_62625412((System_String_o *)updated, v266, 0, 0LL);
          if ( !updated )
            goto LABEL_1035;
          v268 = *(_DWORD *)(updated + 24);
          if ( v268 <= 0 )
            goto LABEL_814;
          v269 = *(System_String_o **)(updated + 32);
          if ( v268 == 1 )
          {
            v270 = *(System_String_o **)(updated + 32);
            v269 = v264;
          }
          else
          {
            v270 = *(System_String_o **)(updated + 40);
          }
          v429 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v430 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(
            v430,
            (Il2CppObject *)v96,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__,
            0LL);
          if ( !v429 )
            goto LABEL_1035;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)v429,
            v269,
            v270,
            v430,
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
          v271 = (System_String_o *)StringLiteral_1/*""*/;
          v272 = System_String__Concat_62572260((System_String_o *)StringLiteral_10817/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v107->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v273 = LocalizationManager__Get(v272, 0LL);
          v274 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v275 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(
            v275,
            (Il2CppObject *)v96,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__,
            0LL);
          if ( !v274 )
            goto LABEL_1035;
          v276 = "UnityEngine.Yoga.Native::YGConfigSetPointScaleFactor(System.IntPtr,System.Single)" + 60;
          onClickOkSeKind = 0;
          goto LABEL_593;
        case 603:
          v277 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_1BDB920(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1035;
          v279 = (System_String_array *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            break;
          v280 = StringLiteral_89/*"\r\n"*/;
          *(_QWORD *)(updated + 32) = StringLiteral_89/*"\r\n"*/;
          sub_1BDB81C((CGThumbnailListItem_o *)(updated + 32), v280, (int32_t)v106, v278);
          updated = (__int64)v107->fields.param;
          if ( !updated )
            goto LABEL_1035;
          updated = (__int64)System_String__Split_62625412((System_String_o *)updated, v279, 0, 0LL);
          if ( !updated )
            goto LABEL_1035;
          v281 = *(_DWORD *)(updated + 24);
          if ( v281 <= 0 )
            goto LABEL_814;
          v271 = *(System_String_o **)(updated + 32);
          if ( v281 == 1 )
          {
            v273 = *(System_String_o **)(updated + 32);
            v271 = v277;
          }
          else
          {
            v273 = *(System_String_o **)(updated + 40);
          }
          v274 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v275 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(
            v275,
            (Il2CppObject *)v96,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
            0LL);
          if ( !v274 )
            goto LABEL_1035;
          v276 = "IntPtr,System.Single)";
          onClickOkSeKind = 1;
LABEL_593:
          CommonUI__OpenNotificationDialog_30834564(
            (CommonUI_o *)v274,
            v271,
            v273,
            v275,
            40.0,
            *((float *)v276 + 767),
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
          v282 = (System_String_o *)StringLiteral_1/*""*/;
          v283 = System_String__Concat_62572260((System_String_o *)StringLiteral_10817/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v107->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v284 = LocalizationManager__Get(v283, 0LL);
          v285 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v286 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(
            v286,
            (Il2CppObject *)v96,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__,
            0LL);
          if ( !v285 )
            goto LABEL_1035;
          CommonUI__OpenNotificationDialog_30834564(
            (CommonUI_o *)v285,
            v282,
            v284,
            v286,
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
          updated = (__int64)v107->fields.param;
          if ( !updated )
            goto LABEL_1035;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1035;
          v201 = *(_QWORD *)(updated + 24);
          v202 = updated;
          if ( v201 )
          {
            if ( !(_DWORD)v201 )
              break;
            v203 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL) > 0;
          }
          else
          {
            v203 = 0;
          }
          v423 = sub_1BDBAC4(QuestAfterAction_TitleInfoControlParam_TypeInfo);
          System_Object___ctor((Il2CppObject *)v423, 0LL);
          if ( *(int *)(v202 + 24) < 2 )
            goto LABEL_576;
          updated = System_Int32__Parse(*(System_String_o **)(v202 + 40), 0LL);
          if ( (int)updated < 1 )
            goto LABEL_576;
          if ( *(_DWORD *)(v202 + 24) > 1u )
          {
            updated = System_Int32__Parse(*(System_String_o **)(v202 + 40), 0LL);
            if ( !v423 )
              goto LABEL_1035;
            *(_DWORD *)(v423 + 16) = updated;
LABEL_576:
            if ( *(int *)(v202 + 24) <= 2
              || (updated = System_Int32__Parse(*(System_String_o **)(v202 + 48), 0LL), (int)updated < 1) )
            {
LABEL_581:
              v425 = *v101;
              if ( !*v101 )
                goto LABEL_1035;
              TitleInfoCtrlCallback_k__BackingField = v425->fields._TitleInfoCtrlCallback_k__BackingField;
              if ( v203 )
              {
                if ( !TitleInfoCtrlCallback_k__BackingField )
                  goto LABEL_1035;
                QuestAfterAction_TitleInfoControlCallback__Start(
                  v425->fields._TitleInfoCtrlCallback_k__BackingField,
                  (QuestAfterAction_TitleInfoControlParam_o *)v423,
                  0LL,
                  v424);
                goto LABEL_18;
              }
              v427 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
              System_Action___ctor(v427, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
              if ( !TitleInfoCtrlCallback_k__BackingField )
                goto LABEL_1035;
              QuestAfterAction_TitleInfoControlCallback__Start(
                TitleInfoCtrlCallback_k__BackingField,
                (QuestAfterAction_TitleInfoControlParam_o *)v423,
                v427,
                v428);
              return;
            }
            if ( *(_DWORD *)(v202 + 24) > 2u )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v202 + 48), 0LL);
              if ( !v423 )
                goto LABEL_1035;
              *(_DWORD *)(v423 + 20) = updated;
              goto LABEL_581;
            }
          }
          break;
      }
LABEL_1036:
      sub_1BDBADC(updated, v98, v106);
    }
    if ( id == 530 )
    {
      v204 = sub_1BDBAC4(QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo);
      QuestAfterAction_StateMain___c__DisplayClass16_16___ctor(
        (QuestAfterAction_StateMain___c__DisplayClass16_16_o *)v204,
        0LL);
      if ( !v204 )
        goto LABEL_1035;
      *(_QWORD *)(v204 + 32) = v96;
      v207 = v204 + 32;
      sub_1BDB81C((CGThumbnailListItem_o *)(v204 + 32), v96, v205, v206);
      v208 = System_Int32__Parse(v107->fields.param, 0LL);
      updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !updated )
        goto LABEL_1035;
      updated = (__int64)DataManager__GetMasterData_object_(
                           (DataManager_o *)updated,
                           (const MethodInfo_303395C *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !updated )
        goto LABEL_1035;
      v209 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
               v208,
               (const MethodInfo_32E1E3C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      *(_QWORD *)(v204 + 16) = v209;
      v210 = (__int64 *)(v204 + 16);
      sub_1BDB81C((CGThumbnailListItem_o *)(v204 + 16), (int32_t)v209, v211, v212);
      updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !updated )
        goto LABEL_1035;
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)updated, v208, 0LL);
      *(_QWORD *)(v204 + 24) = QuestInfo;
      v214 = v204 + 24;
      sub_1BDB81C((CGThumbnailListItem_o *)(v204 + 24), (int32_t)QuestInfo, v215, v216);
      if ( !*(_QWORD *)(v204 + 24) )
        goto LABEL_1035;
      if ( *(_DWORD *)(*(_QWORD *)(v204 + 24) + 32LL) == 1 )
      {
        updated = *v210;
        if ( !*v210 )
          goto LABEL_1035;
        if ( QuestEntity__HasFlag((QuestEntity_o *)updated, 2LL, 0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4B41425 )
          {
            sub_1BDB878(&TerminalPramsManager_TypeInfo, v98);
            byte_4B41425 = 1;
          }
          updated = (__int64)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL) = v208;
          if ( !*(_QWORD *)v214 )
            goto LABEL_1035;
          v218 = *(_DWORD *)(*(_QWORD *)v214 + 44LL);
          if ( !byte_4B41429 )
          {
            sub_1BDB878(&TerminalPramsManager_TypeInfo, v98);
            updated = (__int64)TerminalPramsManager_TypeInfo;
            byte_4B41429 = 1;
          }
          if ( !*(_DWORD *)(updated + 224) )
          {
            j_il2cpp_runtime_class_init_0(updated);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) = v218;
          if ( !*(_QWORD *)v207 )
            goto LABEL_1035;
          v219 = *(_QWORD *)(*(_QWORD *)v207 + 24LL);
          if ( !v219 )
            goto LABEL_1035;
          *(_BYTE *)(v219 + 196) = 1;
          v220 = (NetworkManager_ResultCallbackFunc_o *)sub_1BDBAC4(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v220,
            (Il2CppObject *)v204,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__,
            0LL);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Request_object = NetworkManager__getRequest_object_(
                             v220,
                             (const MethodInfo_30BC7D4 *)Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
          if ( !byte_4B3EFD0 )
          {
            sub_1BDB878(&TerminalPramsManager_TypeInfo, v98);
            byte_4B3EFD0 = 1;
          }
          updated = (__int64)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          v222 = *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL);
          if ( !byte_4B3EFCF )
          {
            sub_1BDB878(&TerminalPramsManager_TypeInfo, v98);
            updated = (__int64)TerminalPramsManager_TypeInfo;
            byte_4B3EFCF = 1;
          }
          if ( !*(_DWORD *)(updated + 224) )
          {
            j_il2cpp_runtime_class_init_0(updated);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          if ( !Request_object )
            goto LABEL_1035;
          BattleSetupScenarioRequest__beginRequest(
            (BattleSetupScenarioRequest_o *)Request_object,
            v222,
            *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) + 1,
            0LL);
        }
      }
      else
      {
        QuestAfterAction_StateMain__ForceEndAnim(this, 1, v217);
      }
      return;
    }
    if ( id != 540 )
      return;
    updated = (__int64)v107->fields.param;
    if ( !updated )
      goto LABEL_1035;
    updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
    if ( !updated )
      goto LABEL_1035;
    v142 = updated;
    if ( !*(_DWORD *)(updated + 24) )
      goto LABEL_1036;
    v143 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
    if ( *(int *)(v142 + 24) < 2 )
    {
      v144 = -1;
    }
    else
    {
      v144 = System_Int32__Parse(*(System_String_o **)(v142 + 40), 0LL);
      if ( *(int *)(v142 + 24) >= 3 )
      {
        v145 = System_Int32__Parse(*(System_String_o **)(v142 + 48), 0LL);
LABEL_221:
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4B3F3B7 )
        {
          sub_1BDB878(&TerminalPramsManager_TypeInfo, v98);
          byte_4B3F3B7 = 1;
        }
        v241 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v241 = TerminalPramsManager_TypeInfo;
        }
        v241->static_fields->_IsAutoResume_k__BackingField = 1;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4B3EEEF )
        {
          sub_1BDB878(&TerminalSceneComponent_TypeInfo, v98);
          byte_4B3EEEF = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v242 = **(_QWORD **)(updated + 184);
        if ( !v242 )
          goto LABEL_1035;
        updated = *(_QWORD *)(v242 + 264);
        if ( !updated )
          goto LABEL_1035;
        if ( !ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)updated, v143, v144, v145, 0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4B3F3B7 )
          {
            sub_1BDB878(&TerminalPramsManager_TypeInfo, v243);
            byte_4B3F3B7 = 1;
          }
          v245 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v245 = TerminalPramsManager_TypeInfo;
          }
          v245->static_fields->_IsAutoResume_k__BackingField = 0;
          goto LABEL_18;
        }
        ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
          this,
          this->klass->vtable._15_onEnd.methodPtr);
        updated = (__int64)*v101;
        if ( !*v101 )
          goto LABEL_1035;
        QuestAfterAction__SetState((QuestAfterAction_o *)updated, 0, v244);
        return;
      }
    }
    v145 = -1;
    goto LABEL_221;
  }
  if ( id <= 801 )
  {
    switch ( id )
    {
      case 700:
        updated = (__int64)v107->fields.param;
        if ( !updated )
          goto LABEL_1035;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1035;
        v130 = updated;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1036;
        v131 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(int *)(v130 + 24) >= 2 )
          v132 = System_Int32__Parse(*(System_String_o **)(v130 + 40), 0LL) + 1;
        else
          v132 = 0;
        v363 = (SceneJumpInfo_o *)sub_1BDBAC4(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_40482356(v363, (System_String_o *)StringLiteral_1/*""*/, v131, v132, 0LL);
        updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !updated )
          goto LABEL_1035;
        v361 = 72;
        v362 = (Il2CppObject *)v363;
        goto LABEL_813;
      case 701:
        if ( !System_String__op_Equality(v107->fields.param, (System_String_o *)StringLiteral_1142/*"0"*/, 0LL) )
          goto LABEL_18;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4B416D6 )
        {
          sub_1BDB878(&TerminalPramsManager_TypeInfo, v246);
          byte_4B416D6 = 1;
        }
        v247 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v247 = TerminalPramsManager_TypeInfo;
        }
        v247->static_fields->_IsTransOrdealCall_k__BackingField = 1;
        goto LABEL_486;
      case 702:
        updated = (__int64)v107->fields.param;
        if ( !updated )
          goto LABEL_1035;
        updated = (__int64)System_String__Split_62624272(
                             (System_String_o *)updated,
                             (System_String_o *)StringLiteral_820/*","*/,
                             0,
                             0LL);
        if ( !updated )
          goto LABEL_1035;
        v248 = *(_QWORD *)(updated + 24);
        v249 = updated;
        if ( !v248 )
          goto LABEL_471;
        if ( !(_DWORD)v248 )
          goto LABEL_1036;
        if ( System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL) > 0 )
          goto LABEL_18;
        if ( *(int *)(v249 + 24) < 2 )
LABEL_471:
          v250 = 0;
        else
          v250 = System_Int32__Parse(*(System_String_o **)(v249 + 40), 0LL);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        TerminalPramsManager__SetAutoResumeForFolder(v250, 0LL);
        if ( !byte_4B41618 )
        {
          sub_1BDB878(&TerminalPramsManager_TypeInfo, v364);
          byte_4B41618 = 1;
        }
        v365 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v365 = TerminalPramsManager_TypeInfo;
        }
        if ( v365->static_fields->_DispState_k__BackingField == 3 )
        {
          if ( !v365->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v365);
          if ( !byte_4B416D7 )
          {
            sub_1BDB878(&TerminalPramsManager_TypeInfo, v364);
            byte_4B416D7 = 1;
          }
          v366 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v366 = TerminalPramsManager_TypeInfo;
          }
          v366->static_fields->_IsMoveFolderByQuestAfterAction_k__BackingField = 1;
        }
LABEL_486:
        updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !updated )
          goto LABEL_1035;
        AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)updated, 34, 1, 0LL, 0, 0LL);
        goto LABEL_814;
      case 703:
        updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !updated )
          goto LABEL_1035;
        *(_BYTE *)(updated + 195) = 0;
        updated = (__int64)v107->fields.param;
        if ( !updated )
          goto LABEL_1035;
        updated = (__int64)System_String__Split_62624272(
                             (System_String_o *)updated,
                             (System_String_o *)StringLiteral_820/*","*/,
                             0,
                             0LL);
        if ( !updated )
          goto LABEL_1035;
        v251 = *(_QWORD *)(updated + 24);
        v252 = updated;
        if ( !v251 )
          goto LABEL_466;
        if ( !(_DWORD)v251 )
          goto LABEL_1036;
        v253 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( v253 < 1 )
        {
LABEL_466:
          updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !updated )
            goto LABEL_1035;
          v361 = 91;
          v362 = 0LL;
          goto LABEL_813;
        }
        v254 = v253;
        if ( *(int *)(v252 + 24) > 1 )
        {
          v564 = System_Int32__Parse(*(System_String_o **)(v252 + 40), 0LL);
          v255 = (System_String_o *)StringLiteral_1/*""*/;
          if ( v564 >= 1 )
          {
            v565 = 1;
            goto LABEL_811;
          }
        }
        else
        {
          v255 = (System_String_o *)StringLiteral_1/*""*/;
        }
        v565 = 0;
LABEL_811:
        v566 = (SceneJumpInfo_o *)sub_1BDBAC4(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_40482356(v566, v255, v254, v565, 0LL);
        updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !updated )
          goto LABEL_1035;
        v361 = 91;
        v362 = (Il2CppObject *)v566;
LABEL_813:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)updated, v361, 1, v362, 0LL);
        goto LABEL_814;
      default:
        if ( id == 800 )
        {
          v256 = *v101;
          if ( !*v101 )
            goto LABEL_1035;
          updated = (__int64)v256->fields.svtVoices;
          if ( !updated )
            goto LABEL_1035;
          if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
                 (System_Collections_Generic_Dictionary_int__object__o *)updated,
                 v256->fields.commandIdx,
                 &value,
                 (const MethodInfo_333CAAC *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__) )
          {
            updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
            if ( !updated )
              goto LABEL_1035;
            AutomatedAction__TerminateMissionAction((AutomatedAction_o *)updated, 0LL);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4B3EEEF )
            {
              sub_1BDB878(&TerminalSceneComponent_TypeInfo, v98);
              byte_4B3EEEF = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v257 = **(_QWORD **)(updated + 184);
            if ( !v257 )
              goto LABEL_1035;
            if ( !*(_QWORD *)(v257 + 464) )
              goto LABEL_292;
            if ( !*(_DWORD *)(updated + 224) )
              j_il2cpp_runtime_class_init_0(updated);
            if ( !byte_4B3EEEF )
            {
              sub_1BDB878(&TerminalSceneComponent_TypeInfo, v98);
              byte_4B3EEEF = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v258 = **(_QWORD **)(updated + 184);
            if ( !v258 )
              goto LABEL_1035;
            v259 = *(_QWORD *)(v258 + 464);
            if ( !v259 )
              goto LABEL_1035;
            updated = *(unsigned int *)(v259 + 48);
            if ( !(_DWORD)updated )
            {
LABEL_292:
              if ( !value )
                goto LABEL_1035;
              updated = LODWORD(value[1].klass);
            }
            if ( (int)updated < 1 )
            {
              if ( !value )
                goto LABEL_1035;
              v567 = (System_String_o *)value[1].monitor;
              if ( !SoundManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              SoundManager__playVoice(v567, 0, 0LL);
            }
            else
            {
              updated = (__int64)ServantVoiceEntity__getVoiceAssetName_41738660(updated, 0LL);
              if ( !value )
                goto LABEL_1035;
              v260 = (System_String_o *)updated;
              v261 = (System_String_o *)value[1].monitor;
              v262 = SeManager_TypeInfo;
              if ( !SeManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
                v262 = SeManager_TypeInfo;
              }
              DEFAULT_VOLUME = v262->static_fields->DEFAULT_VOLUME;
              if ( !SoundManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              SoundManager__playVoice_40520012(v260, v261, DEFAULT_VOLUME, 0LL, 0, 0LL);
            }
          }
          goto LABEL_814;
        }
        if ( id != 801 )
          return;
        param = v107->fields.param;
        v199 = Method_QuestAfterAction_StateMain_UpdateAnim__;
        if ( (*((_BYTE *)Method_QuestAfterAction_StateMain_UpdateAnim__ + 83) & 2) != 0 )
          v199 = (_QWORD *)sub_1BDB890(Method_QuestAfterAction_StateMain_UpdateAnim__);
        v200 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v199, v199[4]);
        OverwriteAssetSoundName__PlaySe(v200, param, 0, 0LL);
        break;
    }
    goto LABEL_18;
  }
  switch ( id )
  {
    case 850:
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__stopBgm(0LL);
      if ( !*v101 )
        goto LABEL_1035;
      (*v101)->fields.isRequestedStopBgm = 1;
      goto LABEL_18;
    case 851:
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4B3EEEF )
      {
        sub_1BDB878(&TerminalSceneComponent_TypeInfo, v98);
        byte_4B3EEEF = 1;
      }
      v223 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v223 = TerminalSceneComponent_TypeInfo;
      }
      v224 = v223->static_fields->mInstance;
      updated = (__int64)QuestAfterAction_Command__GetBgmName(v107, v98);
      if ( !v224 )
        goto LABEL_1035;
      TerminalSceneComponent__playBgm(v224, (System_String_o *)updated, 0LL, 0LL);
      if ( !*v101 )
        goto LABEL_1035;
      (*v101)->fields.isRequestedStopBgm = 0;
      goto LABEL_18;
    case 900:
      v112 = (float)System_Int32__Parse(v107->fields.param, 0LL) / 1000.0;
      if ( v112 <= 0.0 )
        goto LABEL_18;
      this->fields.waitTime = v112;
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

  if ( (byte_4B416C3 & 1) == 0 )
  {
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, that);
    byte_4B416C3 = 1;
  }
  this->fields.that = that;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)that, (int32_t)method, v3);
  v8 = this->fields.that;
  if ( !v8 )
    goto LABEL_14;
  screenCollider = (TerminalSceneComponent_c *)v8->fields.screenCollider;
  if ( !screenCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 1, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B3EEEF )
  {
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v7);
    byte_4B3EEEF = 1;
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
    sub_1BDBAD4(screenCollider, v7);
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
    sub_1BDBAD4(this, method);
  return that->fields.commandBuf;
}


int32_t __fastcall QuestAfterAction_StateMain__get_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1BDBAD4(this, method);
  return that->fields.commandIdx;
}


UnityEngine_GameObject_o *__fastcall QuestAfterAction_StateMain__get_SubGimmickRoot(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_4B416C2 & 1) == 0 )
  {
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, method);
    byte_4B416C2 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B3EEEF )
  {
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, method);
    byte_4B3EEEF = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL )
    sub_1BDBAD4(v2, method);
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

  if ( (byte_4B416C5 & 1) == 0 )
  {
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, deleteKey);
    sub_1BDB878(&StringLiteral_16697/*"afterActionBk"*/, v5);
    byte_4B416C5 = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16697/*"afterActionBk"*/, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B3EEEF )
  {
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, deleteKey);
    byte_4B3EEEF = 1;
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
    sub_1BDBAD4(mInstance, deleteKey);
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
    sub_1BDBAD4(this, value);
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

  if ( (byte_4B4172B & 1) == 0 )
  {
    sub_1BDB878(&QuestAfterAction_StateMain___c_TypeInfo, v1);
    byte_4B4172B = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(QuestAfterAction_StateMain___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestAfterAction_StateMain___c_TypeInfo->static_fields->__9 = (struct QuestAfterAction_StateMain___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)QuestAfterAction_StateMain___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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

  if ( (byte_4B4172C & 1) == 0 )
  {
    sub_1BDB878(&ScriptManager_CallbackFunc_TypeInfo, method);
    sub_1BDB878(&ScriptManager_TypeInfo, v2);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v3);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__, v4);
    sub_1BDB878(&QuestAfterAction_StateMain___c_TypeInfo, v5);
    byte_4B4172C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3F84F )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    byte_4B3F84F = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v6->static_fields->_WarId_k__BackingField;
  if ( !byte_4B3EFD0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4B3EFD0 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  if ( !byte_4B3EFCF )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4B3EFCF = 1;
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
    _9__16_27 = (ScriptManager_CallbackFunc_o *)sub_1BDBAC4(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(_9__16_27, v12, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__, 0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_27 = _9__16_27;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__16_27, (int32_t)_9__16_27, v14, v15);
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

  if ( (byte_4B4172D & 1) == 0 )
  {
    sub_1BDB878(&Method_NetworkManager_getRequest_BattleScenarioRequest___, isExit);
    sub_1BDB878(&NetworkManager_TypeInfo, v3);
    sub_1BDB878(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1BDB878(&ScriptManager_TypeInfo, v5);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v6);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__, v7);
    sub_1BDB878(&QuestAfterAction_StateMain___c_TypeInfo, v8);
    byte_4B4172D = 1;
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
    _9__16_28 = (NetworkManager_ResultCallbackFunc_o *)sub_1BDBAC4(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_28,
      v11,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__,
      0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_28 = _9__16_28;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__16_28, (int32_t)_9__16_28, v13, v14);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__16_28,
                     (const MethodInfo_30BC7D4 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3EFD0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v15);
    byte_4B3EFD0 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v17->static_fields->_QuestId_k__BackingField;
  if ( !byte_4B3EFCF )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v15);
    v17 = TerminalPramsManager_TypeInfo;
    byte_4B3EFCF = 1;
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
    sub_1BDBAD4(SelectRouteArray, v21);
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

  if ( (byte_4B4172E & 1) == 0 )
  {
    sub_1BDB878(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___, jsonstr);
    sub_1BDB878(&JsonManager_TypeInfo, v4);
    sub_1BDB878(&ScriptManager_TypeInfo, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v7);
    sub_1BDB878(&StringLiteral_16697/*"afterActionBk"*/, v8);
    sub_1BDB878(&StringLiteral_15782/*"["*/, v9);
    sub_1BDB878(&StringLiteral_16038/*"]"*/, v10);
    sub_1BDB878(&StringLiteral_13686/*"TerminalTransitionInfoMissionId"*/, v11);
    byte_4B4172E = 1;
  }
  v12 = (Il2CppObject *)System_String__Concat_62610508(
                          (System_String_o *)StringLiteral_15782/*"["*/,
                          jsonstr,
                          (System_String_o *)StringLiteral_16038/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v13 = JsonManager__DeserializeArray_object_(
          v12,
          (const MethodInfo_30A04A4 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16697/*"afterActionBk"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13686/*"TerminalTransitionInfoMissionId"*/, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v13, 1, 0LL);
  if ( !byte_4B3F3B7 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v14);
    byte_4B3F3B7 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v17);
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
    sub_1BDBAD4(0LL, method);
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
    sub_1BDBAD4(0LL, method);
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
    sub_1BDBAD4(0LL, method);
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
    sub_1BDBAD4(_4__this, method);
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
    sub_1BDBAD4(0LL, method);
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
    sub_1BDBAD4(0LL, method);
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
    sub_1BDBAD4(0LL, method);
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
    sub_1BDBAD4(0LL, method);
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
    sub_1BDBAD4(0LL, method);
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
    sub_1BDBAD4(0LL, method);
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
    sub_1BDBAD4(spot, method);
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
    sub_1BDBAD4(this, method);
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
    sub_1BDBAD4(this, method);
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
    sub_1BDBAD4(this, method);
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
    sub_1BDBAD4(this, method);
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
    sub_1BDBAD4(this, method);
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

  if ( (byte_4B4172F & 1) == 0 )
  {
    sub_1BDB878(&EventDelegate_Callback_TypeInfo, method);
    sub_1BDB878(&Method_UnityEngine_GameObject_AddComponent_TweenColor___, v3);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v4);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__, v5);
    sub_1BDB878(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo, v6);
    byte_4B4172F = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  v7 = sub_1BDBAC4(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 24) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v10, v11);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                            (UnityEngine_GameObject_o *)mapGimmick,
                                            (const MethodInfo_3088784 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !mapGimmick )
    goto LABEL_18;
  v12 = mapGimmick;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  v13 = UnityEngine_GameObject__AddComponent_object_(
          (UnityEngine_GameObject_o *)mapGimmick,
          (const MethodInfo_3088438 *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  *(_QWORD *)(v7 + 16) = v13;
  v14 = (UnityEngine_Color_o **)(v7 + 16);
  sub_1BDB81C((CGThumbnailListItem_o *)(v7 + 16), (int32_t)v13, v15, v16);
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
    sub_1BDBAD4(mapGimmick, v9);
  }
  if ( v19->max_length <= 2 )
LABEL_19:
    sub_1BDBADC(mapGimmick, v9, v17);
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
  v23 = (EventDelegate_Callback_o *)sub_1BDBAC4(EventDelegate_Callback_TypeInfo);
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

  if ( (byte_4B41730 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B41730 = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70284200(tween, 0LL);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0LL
    || (_4__this = CS___8__locals13->fields.__4__this) == 0LL )
  {
    sub_1BDBAD4(_4__this, v5);
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
    sub_1BDBAD4(this, method);
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
    sub_1BDBAD4(this, method);
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

  if ( (byte_4B41731 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, result);
    sub_1BDB878(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v4);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v5);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v6);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__, v7);
    sub_1BDB878(&Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__25__, v8);
    sub_1BDB878(&QuestAfterAction_StateMain___c_TypeInfo, v9);
    byte_4B41731 = 1;
  }
  questEntity = this->fields.questEntity;
  if ( !questEntity )
    goto LABEL_34;
  if ( QuestEntity__HasFlag(questEntity, 0x800000000000LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4B3EEEF )
    {
      sub_1BDB878(&TerminalSceneComponent_TypeInfo, result);
      byte_4B3EEEF = 1;
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
      if ( !byte_4B3EFD0 )
      {
        sub_1BDB878(&TerminalPramsManager_TypeInfo, result);
        byte_4B3EFD0 = 1;
      }
      questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      name_high = HIDWORD(questEntity[1].klass->_1.name);
      if ( !byte_4B3EFCF )
      {
        sub_1BDB878(&TerminalPramsManager_TypeInfo, result);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
        byte_4B3EFCF = 1;
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
        _9__25 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        System_Action___ctor(
          _9__25,
          (Il2CppObject *)this,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__25__,
          0LL);
        this->fields.__9__25 = _9__25;
        sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__9__25, (int32_t)_9__25, v16, v17);
      }
      if ( v12 )
      {
        ScrTerminalListTop__StartWindowMessage_35943932(v12, name_high, namespaze + 1, 2, _9__25, 1, 0LL);
        return;
      }
    }
LABEL_34:
    sub_1BDBAD4(questEntity, result);
  }
  questEntity = (QuestEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
    _9__16_26 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(_9__16_26, v21, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__, 0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_26 = _9__16_26;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__16_26, (int32_t)_9__16_26, v23, v24);
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

  if ( (byte_4B41732 & 1) == 0 )
  {
    sub_1BDB878(&MyRoomParamsManager_TypeInfo, method);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v3);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v4);
    sub_1BDB878(&StringLiteral_16697/*"afterActionBk"*/, v5);
    sub_1BDB878(&StringLiteral_13686/*"TerminalTransitionInfoMissionId"*/, v6);
    byte_4B41732 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B3EEEF )
  {
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, method);
    byte_4B3EEEF = 1;
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
  if ( !byte_4B3EEEF )
  {
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, method);
    byte_4B3EEEF = 1;
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
    sub_1BDBAD4(_4__this, method);
  ScrTerminalMap__AllMaskEnd(_4__this, 0LL);
LABEL_21:
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B3EEEF )
  {
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, method);
    byte_4B3EEEF = 1;
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
  if ( !byte_4B3EFD0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v11);
    byte_4B3EFD0 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v12->static_fields->_QuestId_k__BackingField;
  if ( !byte_4B417DA )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v11);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4B417DA = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_LastPlayedQuestId_k__BackingField = QuestId_k__BackingField;
  if ( !byte_4B3EFD0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v11);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4B3EFD0 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__CheckClearSelectedStoryQuestId(v12->static_fields->_QuestId_k__BackingField, 0LL);
  if ( !byte_4B3EFD0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v14);
    byte_4B3EFD0 = 1;
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
    if ( !byte_4B3EFD0 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v17);
      byte_4B3EFD0 = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    SpotId = QuestMaster__GetSpotId(v19->static_fields->_QuestId_k__BackingField, 0LL);
    if ( !byte_4B417DB )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v20);
      byte_4B417DB = 1;
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
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16697/*"afterActionBk"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13686/*"TerminalTransitionInfoMissionId"*/, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B3EEEF )
  {
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, method);
    byte_4B3EEEF = 1;
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
  if ( !byte_4B417DC )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    byte_4B417DC = 1;
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
  if ( !byte_4B3F84F )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    byte_4B3F84F = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v27->static_fields->_WarId_k__BackingField;
  if ( !byte_4B416D0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    v27 = TerminalPramsManager_TypeInfo;
    byte_4B416D0 = 1;
  }
  if ( !v27->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v27);
    v27 = TerminalPramsManager_TypeInfo;
  }
  v27->static_fields->_BeforeQuestStartWarId_k__BackingField = WarId_k__BackingField;
  if ( !byte_4B3EEEF )
  {
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, method);
    byte_4B3EEEF = 1;
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
  if ( !byte_4B3EFD0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    byte_4B3EFD0 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  v31 = *((_DWORD *)&_4__this->fields.subRootGimmickP->fields + 1);
  if ( !byte_4B3EFCF )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
    byte_4B3EFCF = 1;
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
    sub_1BDBAD4(spot, method);
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
    sub_1BDBAD4(spot, method);
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
    sub_1BDBAD4(this, method);
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
    sub_1BDBAD4(this, method);
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
    sub_1BDBAD4(this, method);
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
    sub_1BDBAD4(this, method);
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
    sub_1BDBAD4(this, method);
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
    sub_1BDBAD4(this, method);
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
  sub_1BDB81C(p_end, 0, v2, v3);
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
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)startCallback, (int32_t)method, v3);
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
  sub_1BDB81C((CGThumbnailListItem_o *)p_end, (int32_t)endCallback, (int32_t)endCallback, method);
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
  sub_1BDB81C((CGThumbnailListItem_o *)v6, (int32_t)vName, v7, v8);
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86___ctor(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86__MoveNext(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86_o *this,
        const MethodInfo *method)
{
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86_o *v2; // x21
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
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86_o *v36; // [xsp+18h] [xbp-38h]

  v2 = this;
  v36 = this;
  if ( (byte_4B41736 & 1) == 0 )
  {
    sub_1BDB878(&System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo, method);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo, v3);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86_o *)sub_1BDB878(
                                                                                    &System_Collections_IEnumerator_TypeInfo,
                                                                                    v4);
    byte_4B41736 = 1;
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
      sub_1BDBAD4(this, method);
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
      p_method = sub_1C2C00C(
                   commandEnumerable,
                   System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo,
                   0LL);
    }
    v12 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *, _QWORD))p_method)(
            commandEnumerable,
            *(_QWORD *)(p_method + 8));
    v36->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v12;
    sub_1BDB81C((CGThumbnailListItem_o *)&v36->fields.__7__wrap1, v12, v13, v14);
    v2 = v36;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
LABEL_32:
    sub_1BDBAD4(this, method);
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
      v19 = sub_1C2C00C(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v19)(
            _7__wrap1,
            *(_QWORD *)(v19 + 8)) & 1) == 0 )
    {
      QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86____m__Finally1(v36, v20);
      v36->fields.__7__wrap1 = 0LL;
      sub_1BDB81C((CGThumbnailListItem_o *)&v36->fields.__7__wrap1, 0, v33, v34);
      return 0;
    }
    v21 = v36->fields.__7__wrap1;
    if ( !v21 )
      sub_1BDBAD4(v36, v20);
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
      v25 = sub_1C2C00C(
              v36->fields.__7__wrap1,
              System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo,
              0LL);
    }
    v26 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v25)(
            v21,
            *(_QWORD *)(v25 + 8));
    v28 = (QuestAfterAction_Command_o *)v26;
    if ( !v26 )
      sub_1BDBAD4(0LL, v27);
    if ( !_4__this )
      sub_1BDBAD4(v26, v27);
    CommandType = QuestAfterAction__GetCommandType(_4__this, *(_DWORD *)(v26 + 16), 0LL);
    CommandTargetId = QuestAfterAction__ExtractCommandTargetId(v28, 0LL);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86_o *)QuestAfterAction__IsExistCommand(
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
  sub_1BDB81C((CGThumbnailListItem_o *)&v36->fields.__2__current, (int32_t)v28, v31, v32);
  result = 1;
  v36->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86__System_Collections_Generic_IEnumerable_QuestAfterAction_Command__GetEnumerator(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86_o *v6; // x20
  struct QuestAfterAction_o *_4__this; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *_3__commandEnumerable; // x1

  if ( (byte_4B41738 & 1) == 0 )
  {
    sub_1BDB878(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86_TypeInfo, method);
    byte_4B41738 = 1;
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
    v6 = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86_o *)sub_1BDBAC4(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1BDB81C((CGThumbnailListItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__commandEnumerable = this->fields.__3__commandEnumerable;
  v6->fields.commandEnumerable = _3__commandEnumerable;
  sub_1BDB81C((CGThumbnailListItem_o *)&v6->fields.commandEnumerable, (int32_t)_3__commandEnumerable, v4, v5);
  return (System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v6;
}


QuestAfterAction_Command_o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86__System_Collections_Generic_IEnumerator_QuestAfterAction_Command__get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86__System_Collections_IEnumerator_Reset(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86__System_IDisposable_Dispose(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86____m__Finally1(this, method);
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86____m__Finally1(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__86_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B41737 & 1) == 0 )
  {
    sub_1BDB878(&System_IDisposable_TypeInfo, method);
    byte_4B41737 = 1;
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
      p_method = sub_1C2C00C(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))p_method)(
      _7__wrap1,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__90___ctor(
        QuestAfterAction__WaitWhileMainStateFinished_d__90_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__90__MoveNext(
        QuestAfterAction__WaitWhileMainStateFinished_d__90_o *this,
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
      sub_1BDBAD4(this, method);
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    ActionExtensions__Call(this->fields.action, 0LL);
  }
  return 0;
}


Il2CppObject *__fastcall QuestAfterAction__WaitWhileMainStateFinished_d__90__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__90_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestAfterAction__WaitWhileMainStateFinished_d__90__System_Collections_IEnumerator_Reset(
        QuestAfterAction__WaitWhileMainStateFinished_d__90_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_QuestAfterAction__WaitWhileMainStateFinished_d__90_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall QuestAfterAction__WaitWhileMainStateFinished_d__90__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__90_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__90__System_IDisposable_Dispose(
        QuestAfterAction__WaitWhileMainStateFinished_d__90_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestAfterAction___c__DisplayClass79_0___ctor(
        QuestAfterAction___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass79_0___LoadVoice_b__0(
        QuestAfterAction___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *svtVInfos; // x0

  if ( (byte_4B41733 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, method);
    byte_4B41733 = 1;
  }
  svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.svtVInfos;
  if ( !svtVInfos
    || (System_Collections_Generic_List_object___RemoveAt(
          svtVInfos,
          0,
          (const MethodInfo_36D7598 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BDBAD4(svtVInfos, method);
  }
  QuestAfterAction__LoadVoice_35321704(
    (QuestAfterAction_o *)svtVInfos,
    this->fields.svtVInfos,
    this->fields.endAct,
    0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass83_0___ctor(
        QuestAfterAction___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass83_0___Play_b__0(
        QuestAfterAction___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B41734 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4B41734 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass84_0___ctor(
        QuestAfterAction___c__DisplayClass84_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass84_0___PlaySpecifiedAction_b__0(
        QuestAfterAction___c__DisplayClass84_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  char *_4__this; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B41735 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4B41735 = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  *((_QWORD *)_4__this + 22) = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)(_4__this + 176), 0, v2, v3);
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this
    || (*((_QWORD *)_4__this + 9) = 0LL,
        sub_1BDB81C((CGThumbnailListItem_o *)(_4__this + 72), 0, v6, v7),
        (_4__this = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL)
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0LL),
        (_4__this = (char *)this->fields.__4__this) == 0LL) )
  {
LABEL_8:
    sub_1BDBAD4(_4__this, method);
  }
  QuestAfterAction__SetState((QuestAfterAction_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass84_0___PlaySpecifiedAction_b__1(
        QuestAfterAction___c__DisplayClass84_0_o *this,
        const MethodInfo *method)
{
  QuestAfterAction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(0LL, method);
  QuestAfterAction__SetState(_4__this, 2, 0LL);
}