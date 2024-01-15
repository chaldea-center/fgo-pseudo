void __fastcall ServantStatusVoiceListViewManager___ctor(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(
        ServantStatusVoiceListViewManager_o *this,
        int32_t *firstPriority,
        ServantVoiceRelationEntity_array *relationList,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WebViewManager_o *Instance; // x0
  VoiceMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  signed int max_length; // w8
  VoiceMaster_o *v16; // x21
  unsigned int v17; // w23
  char v18; // w19
  ServantVoiceRelationEntity_o *v19; // x22
  __int64 v20; // x24
  __int64 v21; // x25
  int32_t v22; // w0
  VoiceMaster_o *v23; // x24
  unsigned __int64 v24; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x25
  int32_t size; // w26
  __int64 v27; // x27
  __int64 v28; // x28
  __int64 v29; // x3
  __int64 v30; // x4
  VoiceInfo_o *v31; // x28
  int32_t v32; // w27
  int32_t v33; // w20
  ServantStatusVoiceListViewItem_o *v34; // x23
  const MethodInfo *v35; // [xsp+8h] [xbp-88h]
  VoiceMaster_o *v36; // [xsp+10h] [xbp-80h]
  ServantVoiceRelationEntity_array *v37; // [xsp+18h] [xbp-78h]
  int32_t ascendOrder; // [xsp+20h] [xbp-70h]
  unsigned int v39; // [xsp+24h] [xbp-6Ch]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_40FCAA6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_VoiceMaster___, firstPriority);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&ServantStatusVoiceListViewItem_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FCAA6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = (VoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !relationList )
    goto LABEL_27;
  max_length = relationList->max_length;
  if ( max_length >= 1 )
  {
    v16 = MasterData_WarQuestSelectionMaster;
    v17 = 0;
    v18 = 1;
    ascendOrder = 0;
    v36 = MasterData_WarQuestSelectionMaster;
    v37 = relationList;
    while ( 1 )
    {
      if ( v17 >= max_length )
      {
LABEL_28:
        sub_B17100(MasterData_WarQuestSelectionMaster, v13, v14);
        sub_B170A0();
      }
      v19 = relationList->m_Items[v17];
      if ( !v19 )
        goto LABEL_27;
      v21 = *(_QWORD *)&v19->fields.relationSvtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&v19->fields.relationSvtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v43.fields.currentCryptoKey = v21;
      *(_QWORD *)&v43.fields.fakeValue = v20;
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v43, 0LL);
      if ( !v16 )
        goto LABEL_27;
      MasterData_WarQuestSelectionMaster = (VoiceMaster_o *)VoiceMaster__getEnableInfo(
                                                              v16,
                                                              svtId,
                                                              v22,
                                                              0,
                                                              0LL,
                                                              0,
                                                              0,
                                                              0LL);
      v23 = MasterData_WarQuestSelectionMaster;
      if ( (v18 & 1) == 0 && ascendOrder != v19->fields.ascendOrder )
        ++*firstPriority;
      v39 = v17;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_27;
      ascendOrder = v19->fields.ascendOrder;
      if ( SLODWORD(MasterData_WarQuestSelectionMaster->fields._MasterName_k__BackingField) >= 1 )
        break;
LABEL_25:
      v16 = v36;
      relationList = v37;
      v18 = 0;
      max_length = v37->max_length;
      v17 = v39 + 1;
      if ( (int)(v39 + 1) >= max_length )
        return;
    }
    v24 = 0LL;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      v28 = *(_QWORD *)&v19->fields.relationSvtId.fields.currentCryptoKey;
      v27 = *(_QWORD *)&v19->fields.relationSvtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v44.fields.currentCryptoKey = v28;
      *(_QWORD *)&v44.fields.fakeValue = v27;
      MasterData_WarQuestSelectionMaster = (VoiceMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                              v44,
                                                              0LL);
      if ( v24 >= LODWORD(v23->fields._MasterName_k__BackingField) )
        goto LABEL_28;
      v31 = (VoiceInfo_o *)*((_QWORD *)&v23->fields.list + v24);
      v32 = (int)MasterData_WarQuestSelectionMaster;
      v33 = *firstPriority;
      v34 = (ServantStatusVoiceListViewItem_o *)sub_B170CC(ServantStatusVoiceListViewItem_TypeInfo, v13, v14, v29, v30);
      ServantStatusVoiceListViewItem___ctor(v34, size, svtId, v32, 0, v31, v33, 0, 0, v35);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (__int64)++v24 >= SLODWORD(v23->fields._MasterName_k__BackingField) )
        goto LABEL_25;
    }
LABEL_27:
    sub_B170D4();
  }
}


void __fastcall ServantStatusVoiceListViewManager__CreateList(
        ServantStatusVoiceListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        System_Int32_array *changeSvtVoiceIdList,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *v4; // x27
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
  __int64 v44; // x22
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  int64_t v47; // x19
  int32_t v48; // w0
  VoiceMaster_o *v49; // x24
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  System_Collections_Generic_List_VoiceCondType_Type__o *v54; // x19
  void *EnableInfo; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  System_Int32_array *v60; // x9
  __int64 v61; // x8
  unsigned __int64 v62; // x10
  WebViewManager_o *Instance; // x0
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x19
  int32_t maxLimitCount; // w20
  System_Int32_array *CostumeList; // x0
  System_Int32_array *VoiceLimitCountList; // x20
  WebViewManager_o *v68; // x0
  ServantVoiceRelationMaster_o *v69; // x0
  const MethodInfo *v70; // x5
  ServantVoiceRelationEntity_array *v71; // x19
  int32_t v72; // w0
  const MethodInfo *v73; // x4
  ServantVoiceRelationEntity_array *v74; // x19
  int32_t v75; // w0
  const MethodInfo *v76; // x4
  __int64 v77; // x8
  int32_t v78; // w19
  unsigned __int64 v79; // x9
  int32_t v80; // w0
  BalanceConfig_c *v81; // x8
  int32_t v82; // w19
  _QWORD *v83; // x23
  unsigned __int64 v84; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v85; // x20
  int32_t v86; // w24
  __int64 v87; // x3
  __int64 v88; // x4
  int32_t v89; // w19
  VoiceInfo_o *v90; // x26
  int32_t ServantIdMashu3; // w27
  ServantStatusVoiceListViewItem_o *v92; // x28
  int32_t v93; // w28
  int32_t v94; // w22
  int32_t v95; // w0
  const MethodInfo *v96; // x4
  int v97; // w8
  _DWORD *v98; // x26
  unsigned int i; // w25
  char *v100; // x23
  VoiceInfo_o *v101; // x3
  VoiceInfo_o **v102; // x23
  VoiceInfo_o *v103; // t1
  struct VoiceEntity_o *voiceEntity; // x24
  int32_t condType; // w9
  int v106; // w28
  _BOOL4 v107; // w8
  const MethodInfo *v108; // x3
  const MethodInfo *v109; // x3
  char v110; // w22
  struct System_Collections_Generic_List_ListViewItem__o *v111; // x0
  const MethodInfo *v112; // x1
  Il2CppObject *v113; // x27
  __int64 v114; // x10
  Il2CppClass *v115; // x8
  __int64 v116; // x0
  __int64 v117; // x1
  __int64 v118; // x2
  struct VoiceEntity_o *v119; // x8
  int32_t v120; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x19
  System_String_o *v122; // x2
  __int64 v123; // x0
  __int64 v124; // x2
  int32_t v125; // w5
  const MethodInfo *v126; // x6
  struct VoiceEntity_o *v127; // x8
  int32_t v128; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v129; // x19
  System_String_o *v130; // x2
  bool isVoiceCond; // w0
  int32_t v132; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v133; // x20
  bool v134; // w28
  bool v135; // w21
  int32_t size; // w24
  bool v137; // w19
  __int64 v138; // x3
  __int64 v139; // x4
  VoiceInfo_o *v140; // x23
  int32_t v141; // w27
  bool v142; // w19
  ServantStatusVoiceListViewItem_o *v143; // x28
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  const MethodInfo *v145; // x1
  Il2CppObject *current; // x27
  __int64 v147; // x10
  Il2CppClass *klass; // x8
  __int64 v149; // x0
  __int64 v150; // x2
  int32_t v151; // w5
  const MethodInfo *v152; // x6
  int32_t v153; // w19
  BalanceConfig_c *v154; // x8
  WarGroupEntity_o *v155; // x27
  WebViewManager_o *v156; // x0
  UserServantCollectionMaster_o *v157; // x19
  int64_t v158; // x20
  int32_t v159; // w0
  UserServantCollectionEntity_o *v160; // x0
  int32_t v161; // w0
  BalanceConfig_c *v162; // x8
  int32_t v163; // w19
  unsigned int *v164; // x27
  unsigned __int64 v165; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v166; // x20
  int32_t v167; // w24
  ServantStatusVoiceListViewManager_o *v168; // x25
  __int64 v169; // x3
  __int64 v170; // x4
  int32_t v171; // w19
  int32_t v172; // w21
  VoiceInfo_o *v173; // x23
  int32_t ServantIdHyde; // w28
  ServantStatusVoiceListViewItem_o *v175; // x0
  int32_t v176; // w3
  EventMissionProgressRequest_Argument_ProgressData_o *v177; // x26
  BalanceConfig_c *v178; // x8
  int v179; // w19
  int32_t v180; // w0
  BalanceConfig_c *v181; // x8
  int32_t v182; // w19
  VoiceInfo_array *v183; // x0
  VoiceInfo_array *v184; // x27
  unsigned __int64 v185; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v186; // x20
  int32_t v187; // w24
  __int64 v188; // x3
  __int64 v189; // x4
  int32_t v190; // w19
  VoiceInfo_o *v191; // x23
  int32_t ServantIdMashu2; // w26
  ServantStatusVoiceListViewItem_o *v193; // x28
  int64_t v194; // x0
  BalanceConfig_c *v195; // x8
  int64_t v196; // x20
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t MashuTdGradeUpQuestId; // w19
  int32_t MashuTdGradeUpQuestPhase; // w23
  int32_t svtVoiceId; // w19
  ServantVoiceRelationEntity_array *v201; // x19
  int32_t v202; // w0
  const MethodInfo *v203; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v204; // x8
  signed __int64 v205; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v206; // x20
  const MethodInfo *v207; // x1
  int v208; // w8
  unsigned __int64 v209; // x24
  signed __int64 v210; // x22
  __int64 v211; // x25
  struct System_Collections_Generic_List_ListViewItem__o *v212; // x19
  ServantStatusVoiceListViewItem_o *v213; // x21
  __int64 v214; // x10
  const MethodInfo *v215; // x2
  __int64 v216; // x26
  struct System_Collections_Generic_List_ListViewItem__o *v217; // x19
  ServantStatusVoiceListViewItem_o *v218; // x22
  __int64 v219; // x10
  System_String_o *OpenName; // x19
  const MethodInfo *v221; // x1
  System_String_o *v222; // x0
  int32_t v223; // w21
  const MethodInfo *v224; // x2
  __int64 v225; // x11
  __int64 v226; // x11
  Il2CppObject *v227; // x0
  UILabel_o *explanationLabel; // x19
  System_String_o *v229; // x0
  UILabel_o *emptyMessageLabel; // x19
  System_String_o *v231; // x0
  bool voiceLabelSpec; // [xsp+0h] [xbp-170h]
  const MethodInfo *v233; // [xsp+8h] [xbp-168h]
  System_String_o *v234; // [xsp+10h] [xbp-160h]
  UserServantCollectionEntity_o *EntityDefinitely; // [xsp+18h] [xbp-158h]
  unsigned __int64 v237; // [xsp+28h] [xbp-148h]
  ServantLimitAddMaster_o *v238; // [xsp+30h] [xbp-140h]
  System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList; // [xsp+38h] [xbp-138h]
  System_Int32_array *v240; // [xsp+40h] [xbp-130h]
  VoiceMaster_o *v241; // [xsp+48h] [xbp-128h]
  unsigned __int64 v242; // [xsp+50h] [xbp-120h]
  char *v243; // [xsp+58h] [xbp-118h]
  VoicePlayCondMaster_o *v244; // [xsp+60h] [xbp-110h]
  int32_t v245; // [xsp+6Ch] [xbp-104h]
  ServantStatusVoiceListViewManager_o *v246; // [xsp+70h] [xbp-100h]
  int32_t limitCount; // [xsp+7Ch] [xbp-F4h]
  ServantStatusListViewItem_o *v248; // [xsp+80h] [xbp-F0h]
  int32_t svtId; // [xsp+88h] [xbp-E8h]
  signed __int64 svtIda; // [xsp+88h] [xbp-E8h]
  _BYTE v251[44]; // [xsp+90h] [xbp-E0h] BYREF
  int v252; // [xsp+BCh] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_T__o v253; // [xsp+C0h] [xbp-B0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+D8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v255; // [xsp+E0h] [xbp-90h] BYREF
  ServantVoiceRelationEntity_array *afterRelationList; // [xsp+F8h] [xbp-78h] BYREF
  ServantVoiceRelationEntity_array *sameRelationList; // [xsp+100h] [xbp-70h] BYREF
  ServantVoiceRelationEntity_array *beforeRelationList; // [xsp+108h] [xbp-68h] BYREF
  int32_t firstPriority[3]; // [xsp+114h] [xbp-5Ch] BYREF

  v4 = mainInfo;
  if ( (byte_40FCAA7 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, mainInfo);
    sub_B16FFC(&CondType_TypeInfo, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_VoiceMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMaster_VoicePlayCondMaster___, v13);
    sub_B16FFC(&DataManager_TypeInfo, v14);
    sub_B16FFC(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string__GetEntity__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__get_Current__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_CondType_Kind__Add__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v28);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v30);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__get_Count__, v31);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v32);
    sub_B16FFC(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v33);
    sub_B16FFC(&System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo, v34);
    sub_B16FFC(&LocalizationManager_TypeInfo, v35);
    sub_B16FFC(&NetworkManager_TypeInfo, v36);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v37);
    sub_B16FFC(&ServantStatusVoiceListViewItem_TypeInfo, v38);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39);
    sub_B16FFC(&TutorialFlag_TypeInfo, v40);
    sub_B16FFC(&StringLiteral_2221/*"B050"*/, v41);
    sub_B16FFC(&StringLiteral_15057/*"VOICE_EMPTY_MESSAGE"*/, v42);
    sub_B16FFC(&StringLiteral_11998/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, v43);
    byte_40FCAA7 = 1;
  }
  firstPriority[0] = 0;
  sameRelationList = 0LL;
  beforeRelationList = 0LL;
  afterRelationList = 0LL;
  memset(&v255, 0, sizeof(v255));
  entity = 0LL;
  v44 = StringLiteral_15057/*"VOICE_EMPTY_MESSAGE"*/;
  memset(&v253, 0, sizeof(v253));
  v252 = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.execObjectExtraFlag = 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v4 )
    goto LABEL_257;
  v47 = UserId;
  v48 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_257;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(Master_WarQuestSelectionMaster, v47, v48, 0LL);
  v49 = (VoiceMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_VoiceMaster___);
  v244 = (VoicePlayCondMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v238 = (ServantLimitAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  firstPriority[0] = 0;
  v54 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_CondType_Kind__TypeInfo,
                                                                   v50,
                                                                   v51,
                                                                   v52,
                                                                   v53);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v54,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v54 )
    goto LABEL_257;
  disableCondTypeList = (System_Collections_Generic_List_CondType_Kind__o *)v54;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v54,
    81,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_CondType_Kind__Add__);
  v60 = changeSvtVoiceIdList;
  if ( !changeSvtVoiceIdList )
    goto LABEL_257;
  v61 = *(_QWORD *)&changeSvtVoiceIdList->max_length;
  v234 = (System_String_o *)v44;
  v246 = this;
  if ( (int)v61 >= 1 )
  {
    v62 = 0LL;
    v248 = v4;
    v241 = v49;
    while ( 1 )
    {
      if ( v62 >= (unsigned int)v61 )
        goto LABEL_253;
      v237 = v62;
      svtId = v60->m_Items[v62 + 1];
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_257;
      MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      if ( !EntityDefinitely )
        goto LABEL_257;
      maxLimitCount = EntityDefinitely->fields.maxLimitCount;
      CostumeList = UserServantCollectionEntity__getCostumeList(EntityDefinitely, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_257;
      VoiceLimitCountList = ServantLimitAddMaster__getVoiceLimitCountList(
                              MasterData_WarQuestSelectionMaster,
                              svtId,
                              maxLimitCount,
                              CostumeList,
                              0LL);
      v68 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v68 )
        goto LABEL_257;
      v69 = (ServantVoiceRelationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)v68,
                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !v69 )
        goto LABEL_257;
      ServantVoiceRelationMaster__GetRelationList_30012460(
        v69,
        &beforeRelationList,
        &sameRelationList,
        &afterRelationList,
        svtId,
        v70);
      v71 = beforeRelationList;
      v72 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, firstPriority, v71, v72, v73);
      v74 = sameRelationList;
      ++firstPriority[0];
      v75 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, firstPriority, v74, v75, v76);
      if ( !VoiceLimitCountList )
        goto LABEL_257;
      v77 = *(_QWORD *)&VoiceLimitCountList->max_length;
      v78 = firstPriority[0];
      if ( (int)v77 >= 1 )
        break;
      v93 = firstPriority[0];
LABEL_203:
      v201 = afterRelationList;
      firstPriority[0] = v93;
      v202 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, firstPriority, v201, v202, v203);
      v60 = changeSvtVoiceIdList;
      LODWORD(v61) = changeSvtVoiceIdList->max_length;
      v62 = v237 + 1;
      if ( (__int64)(v237 + 1) >= (int)v61 )
        goto LABEL_204;
    }
    v79 = 0LL;
    v240 = VoiceLimitCountList;
    while ( 1 )
    {
      if ( v79 >= (unsigned int)v77 )
      {
        firstPriority[0] = v78;
        goto LABEL_253;
      }
      v94 = VoiceLimitCountList->m_Items[v79 + 1];
      v242 = v79;
      v95 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
      if ( !v49 )
      {
        firstPriority[0] = v78;
        sub_B170D4();
      }
      v245 = v78;
      EnableInfo = VoiceMaster__getEnableInfo(v49, v95, svtId, v94, disableCondTypeList, 0, 0, 0LL);
      if ( !EnableInfo )
        goto LABEL_251;
      v97 = *((_DWORD *)EnableInfo + 6);
      v98 = EnableInfo;
      limitCount = v94;
      if ( v97 >= 1 )
      {
        for ( i = 0; (int)i < v97; ++i )
        {
          if ( i >= v97 )
          {
LABEL_252:
            firstPriority[0] = v245;
            goto LABEL_253;
          }
          v100 = (char *)&v98[2 * i];
          v103 = (VoiceInfo_o *)*((_QWORD *)v100 + 4);
          v102 = (VoiceInfo_o **)(v100 + 32);
          v101 = v103;
          if ( !v103 )
            goto LABEL_251;
          voiceEntity = v101->fields.voiceEntity;
          if ( v94 > 10 )
            goto LABEL_88;
          if ( !voiceEntity )
            goto LABEL_251;
          if ( voiceEntity->fields.svtVoiceType != 2 )
            goto LABEL_88;
          condType = voiceEntity->fields.condType;
          if ( condType == 7 )
          {
            if ( voiceEntity->fields.condValue == 2 )
            {
              v106 = 1;
            }
            else
            {
              EnableInfo = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                     (ServantStatusVoiceListViewManager_o *)EnableInfo,
                                     svtId,
                                     v94,
                                     v101,
                                     v96);
              if ( ((unsigned __int8)EnableInfo & 1) != 0 )
              {
                if ( i >= v98[6] )
                  goto LABEL_252;
                EnableInfo = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                                       (ServantStatusVoiceListViewManager_o *)EnableInfo,
                                       svtId,
                                       *v102,
                                       v109);
                if ( ((unsigned __int8)EnableInfo & 1) == 0 )
                  goto LABEL_100;
                goto LABEL_62;
              }
              itemList = this->fields.itemList;
              if ( !itemList )
                goto LABEL_251;
              System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)v251,
                (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
                (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
              v255 = *(System_Collections_Generic_List_Enumerator_T__o *)v251;
              do
              {
                if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                        &v255,
                        (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
                {
                  v106 = 1;
                  goto LABEL_116;
                }
                current = v255.fields.current;
                if ( !v255.fields.current
                  || (v147 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
                      *(&v255.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v147)
                  || (ServantStatusVoiceListViewItem_c *)v255.fields.current->klass->_2.typeHierarchy[v147 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                {
                  sub_B170D4();
                }
                klass = v255.fields.current[10].klass;
                if ( !klass )
                  sub_B170D4();
              }
              while ( HIDWORD(klass->_1.namespaze) != 2
                   || LODWORD(klass->_1.this_arg.data) != 7
                   || HIDWORD(klass->_1.this_arg.data) != voiceEntity->fields.condValue
                   || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                        (ServantStatusVoiceListViewItem_o *)v255.fields.current,
                        v145) != svtId );
              v149 = ServantStatusListViewItem__get_SvtId(v248, 0LL);
              if ( i >= v98[6] )
              {
                sub_B17100(v149, (unsigned int)v149, v150);
                sub_B170A0();
              }
              ServantStatusVoiceListViewItem__SetLimitCount(
                (ServantStatusVoiceListViewItem_o *)current,
                v149,
                svtId,
                v94,
                *v102,
                v151,
                v152);
              v106 = 0;
LABEL_116:
              v4 = v248;
              *(_DWORD *)&v251[4 * v252++ + 24] = 701;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                &v255,
                (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
              if ( v252 && *(_DWORD *)&v251[4 * v252 + 20] == 701 )
              {
                --v252;
                if ( !v106 )
                  goto LABEL_100;
                goto LABEL_88;
              }
            }
            condType = voiceEntity->fields.condType;
          }
          else
          {
            v106 = 1;
          }
          v107 = v106 != 0;
          if ( condType != 18 )
            goto LABEL_87;
          if ( i >= v98[6] )
            goto LABEL_252;
          EnableInfo = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                 (ServantStatusVoiceListViewManager_o *)EnableInfo,
                                 svtId,
                                 v94,
                                 *v102,
                                 v96);
          if ( ((unsigned __int8)EnableInfo & 1) == 0 )
          {
            v111 = this->fields.itemList;
            if ( !v111 )
              goto LABEL_251;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v251,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v111,
              (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v255 = *(System_Collections_Generic_List_Enumerator_T__o *)v251;
            while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v255,
                      (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
            {
              v113 = v255.fields.current;
              if ( !v255.fields.current
                || (v114 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
                    *(&v255.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v114)
                || (ServantStatusVoiceListViewItem_c *)v255.fields.current->klass->_2.typeHierarchy[v114 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                sub_B170D4();
              }
              v115 = v255.fields.current[10].klass;
              if ( !v115 )
                sub_B170D4();
              if ( HIDWORD(v115->_1.namespaze) == 2
                && LODWORD(v115->_1.this_arg.data) == 18
                && ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                     (ServantStatusVoiceListViewItem_o *)v255.fields.current,
                     v112) == svtId )
              {
                v116 = ServantStatusListViewItem__get_SvtId(v248, 0LL);
                if ( i >= v98[6] )
                {
                  sub_B17100(v116, v117, v118);
                  sub_B170A0();
                }
                if ( !*v102 )
                  sub_B170D4();
                v119 = (*v102)->fields.voiceEntity;
                if ( !v119 )
                  sub_B170D4();
                v120 = v116;
                id = v119->fields.id;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                }
                v122 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(id, 0LL);
                if ( !v244 )
                  sub_B170D4();
                if ( !VoicePlayCondMaster__isVoiceCond(v244, v120, v122, 81, 0LL) )
                {
                  v123 = ServantStatusListViewItem__get_SvtId(v248, 0LL);
                  if ( i >= v98[6] )
                  {
                    sub_B17100(v123, (unsigned int)v123, v124);
                    sub_B170A0();
                  }
                  ServantStatusVoiceListViewItem__SetLimitCount(
                    (ServantStatusVoiceListViewItem_o *)v113,
                    v123,
                    svtId,
                    v94,
                    *v102,
                    v125,
                    v126);
                  v106 = 0;
                }
                break;
              }
            }
            v4 = v248;
            *(_DWORD *)&v251[4 * v252++ + 24] = 701;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v255,
              (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
            v107 = v106 != 0;
            if ( v252 && *(_DWORD *)&v251[4 * v252 + 20] == 701 )
            {
              --v252;
              if ( !v106 )
                goto LABEL_100;
            }
            else
            {
LABEL_87:
              if ( !v107 )
                goto LABEL_100;
            }
LABEL_88:
            v110 = 0;
            goto LABEL_89;
          }
          if ( i >= v98[6] )
            goto LABEL_252;
          EnableInfo = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                                 (ServantStatusVoiceListViewManager_o *)EnableInfo,
                                 svtId,
                                 *v102,
                                 v108);
          if ( !v106 || ((unsigned __int8)EnableInfo & 1) == 0 )
            goto LABEL_100;
LABEL_62:
          v110 = 1;
LABEL_89:
          EnableInfo = (void *)ServantStatusListViewItem__get_SvtId(v4, 0LL);
          if ( i >= v98[6] )
            goto LABEL_252;
          if ( !*v102 )
            goto LABEL_251;
          v127 = (*v102)->fields.voiceEntity;
          if ( !v127 )
            goto LABEL_251;
          v128 = (int)EnableInfo;
          v129 = v127->fields.id;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v130 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(v129, 0LL);
          if ( !v244 )
            goto LABEL_251;
          isVoiceCond = VoicePlayCondMaster__isVoiceCond(v244, v128, v130, 81, 0LL);
          if ( !voiceEntity )
            goto LABEL_251;
          v132 = voiceEntity->fields.condType;
          v133 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
          v134 = v132 == 18;
          v135 = v132 == 7;
          if ( !v133 )
            goto LABEL_251;
          size = v133->fields._size;
          v137 = isVoiceCond;
          EnableInfo = (void *)ServantStatusListViewItem__get_SvtId(v4, 0LL);
          if ( i >= v98[6] )
            goto LABEL_252;
          v140 = *v102;
          v141 = (int)EnableInfo;
          v142 = v137 && (v134 || v135);
          voiceLabelSpec = v110;
          v94 = limitCount;
          v143 = (ServantStatusVoiceListViewItem_o *)sub_B170CC(
                                                       ServantStatusVoiceListViewItem_TypeInfo,
                                                       v56,
                                                       v57,
                                                       v138,
                                                       v139);
          ServantStatusVoiceListViewItem___ctor(
            v143,
            size,
            v141,
            svtId,
            limitCount,
            v140,
            v245,
            v142,
            voiceLabelSpec,
            v233);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v133,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v143,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          this = v246;
          v4 = v248;
LABEL_100:
          v97 = v98[6];
        }
      }
      v93 = v245 + 1;
      v153 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
      v154 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v154 = BalanceConfig_TypeInfo;
      }
      v49 = v241;
      if ( v153 == v154->static_fields->ServantIdJekyll )
        break;
      EnableInfo = (void *)ServantStatusListViewItem__get_SvtId(v4, 0LL);
      v178 = BalanceConfig_TypeInfo;
      v179 = (int)EnableInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v178 = BalanceConfig_TypeInfo;
      }
      if ( v179 == v178->static_fields->ServantIdMashu1 )
      {
        if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TutorialFlag_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        }
        if ( TutorialFlag__Get_28023340(115, 0LL) )
        {
          v180 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
          v181 = BalanceConfig_TypeInfo;
          v182 = v180;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v181 = BalanceConfig_TypeInfo;
          }
          v172 = v245 + 1;
          v183 = VoiceMaster__getEnableInfo(v241, v182, v181->static_fields->ServantIdMashu2, v94, 0LL, 0, 0, 0LL);
          if ( !v183 )
          {
LABEL_256:
            firstPriority[0] = v245 + 1;
            sub_B170D4();
          }
          v184 = v183;
          if ( (int)v183->max_length >= 1 )
          {
            v185 = 0LL;
            while ( 1 )
            {
              v186 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v246->fields.itemList;
              if ( !v186 )
                goto LABEL_256;
              v187 = v186->fields._size;
              EnableInfo = (void *)ServantStatusListViewItem__get_SvtId(v248, 0LL);
              v190 = (int)EnableInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              }
              if ( v185 >= v184->max_length )
                break;
              v191 = v184->m_Items[v185];
              ServantIdMashu2 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu2;
              v193 = (ServantStatusVoiceListViewItem_o *)sub_B170CC(
                                                           ServantStatusVoiceListViewItem_TypeInfo,
                                                           v56,
                                                           v57,
                                                           v188,
                                                           v189);
              ServantStatusVoiceListViewItem___ctor(
                v193,
                v187,
                v190,
                ServantIdMashu2,
                limitCount,
                v191,
                v172,
                0,
                0,
                v233);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v186,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v193,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
              if ( (__int64)++v185 >= (int)v184->max_length )
                goto LABEL_177;
            }
LABEL_254:
            firstPriority[0] = v172;
LABEL_253:
            sub_B17100(EnableInfo, v56, v57);
            sub_B170A0();
          }
LABEL_177:
          v4 = v248;
          v94 = limitCount;
          this = v246;
          v93 = v245 + 2;
        }
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v194 = NetworkManager__get_UserId(0LL);
        v195 = BalanceConfig_TypeInfo;
        v196 = v194;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v49 = v241;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v195 = BalanceConfig_TypeInfo;
          }
        }
        else
        {
          v49 = v241;
        }
        static_fields = v195->static_fields;
        MashuTdGradeUpQuestId = static_fields->MashuTdGradeUpQuestId;
        MashuTdGradeUpQuestPhase = static_fields->MashuTdGradeUpQuestPhase;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        EnableInfo = (void *)CondType__IsQuestPhaseClear(
                               v196,
                               MashuTdGradeUpQuestId,
                               MashuTdGradeUpQuestPhase,
                               -1,
                               0,
                               0LL);
        if ( ((unsigned __int8)EnableInfo & 1) != 0 )
        {
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          }
          if ( !v238 )
            goto LABEL_255;
          EnableInfo = (void *)ServantLimitAddMaster__TryGetEntity(
                                 v238,
                                 &entity,
                                 BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                 v94,
                                 0LL);
          if ( ((unsigned __int8)EnableInfo & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_255;
            EnableInfo = BalanceConfig_TypeInfo;
            svtVoiceId = entity->fields.svtVoiceId;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              EnableInfo = BalanceConfig_TypeInfo;
            }
            if ( svtVoiceId != *(_DWORD *)(*((_QWORD *)EnableInfo + 23) + 344LL) )
            {
              v80 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
              v81 = BalanceConfig_TypeInfo;
              v82 = v80;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v81 = BalanceConfig_TypeInfo;
              }
              v245 = v93;
              EnableInfo = VoiceMaster__getEnableInfo(
                             v49,
                             v82,
                             v81->static_fields->ServantIdMashu3,
                             v94,
                             0LL,
                             0,
                             0,
                             0LL);
              if ( !EnableInfo )
                goto LABEL_251;
              v83 = EnableInfo;
              if ( *((int *)EnableInfo + 6) >= 1 )
              {
                v84 = 0LL;
                while ( 1 )
                {
                  v85 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
                  if ( !v85 )
                    break;
                  v86 = v85->fields._size;
                  EnableInfo = (void *)ServantStatusListViewItem__get_SvtId(v4, 0LL);
                  v89 = (int)EnableInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  }
                  if ( v84 >= *((unsigned int *)v83 + 6) )
                    goto LABEL_252;
                  v90 = (VoiceInfo_o *)v83[v84 + 4];
                  ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
                  v92 = (ServantStatusVoiceListViewItem_o *)sub_B170CC(
                                                              ServantStatusVoiceListViewItem_TypeInfo,
                                                              v56,
                                                              v57,
                                                              v87,
                                                              v88);
                  ServantStatusVoiceListViewItem___ctor(
                    v92,
                    v86,
                    v89,
                    ServantIdMashu3,
                    limitCount,
                    v90,
                    v245,
                    0,
                    0,
                    v233);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v85,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v92,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                  v4 = v248;
                  if ( (__int64)++v84 >= *((int *)v83 + 6) )
                    goto LABEL_36;
                }
LABEL_251:
                firstPriority[0] = v245;
                sub_B170D4();
              }
LABEL_36:
              v93 = v245 + 1;
LABEL_156:
              v49 = v241;
            }
          }
        }
      }
LABEL_200:
      VoiceLimitCountList = v240;
      v78 = v93;
      LODWORD(v77) = v240->max_length;
      v79 = v242 + 1;
      if ( (__int64)(v242 + 1) >= (int)v77 )
        goto LABEL_203;
    }
    v155 = DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
             (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)v241,
             (System_String_o *)StringLiteral_2221/*"B050"*/,
             (const MethodInfo_266F7D8 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string__GetEntity__);
    v156 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v156 )
      goto LABEL_255;
    v157 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)v156,
                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v158 = NetworkManager__get_UserId(0LL);
    v159 = ServantStatusListViewItem__get_SvtId(v248, 0LL);
    if ( !v157 )
      goto LABEL_255;
    v160 = UserServantCollectionMaster__GetEntityDefinitely(v157, v158, v159, 0LL);
    if ( !v155 )
      goto LABEL_255;
    if ( v155[1].fields.id == 17 )
    {
      if ( !v160 )
        goto LABEL_255;
      EnableInfo = (void *)UserServantCollectionEntity__IsPlayed(v160, v155[1].fields.warId, 0LL);
      if ( ((unsigned __int8)EnableInfo & 1) == 0 )
      {
        v4 = v248;
        goto LABEL_200;
      }
    }
    v161 = ServantStatusListViewItem__get_SvtId(v248, 0LL);
    v162 = BalanceConfig_TypeInfo;
    v163 = v161;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v162 = BalanceConfig_TypeInfo;
    }
    EnableInfo = VoiceMaster__getEnableInfo(v241, v163, v162->static_fields->ServantIdHyde, v94, 0LL, 0, 0, 0LL);
    if ( !EnableInfo )
      goto LABEL_255;
    v164 = (unsigned int *)EnableInfo;
    if ( *((int *)EnableInfo + 6) >= 1 )
    {
      v165 = 0LL;
      v243 = (char *)EnableInfo + 32;
      while ( 1 )
      {
        v166 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
        if ( !v166 )
          break;
        v167 = v166->fields._size;
        v168 = this;
        EnableInfo = (void *)ServantStatusListViewItem__get_SvtId(v248, 0LL);
        v171 = (int)EnableInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        }
        v172 = v93;
        if ( v165 >= v164[6] )
          goto LABEL_254;
        v173 = *(VoiceInfo_o **)&v243[8 * v165];
        ServantIdHyde = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
        v175 = (ServantStatusVoiceListViewItem_o *)sub_B170CC(
                                                     ServantStatusVoiceListViewItem_TypeInfo,
                                                     v56,
                                                     v57,
                                                     v169,
                                                     v170);
        v176 = ServantIdHyde;
        v177 = (EventMissionProgressRequest_Argument_ProgressData_o *)v175;
        v93 = v172;
        ServantStatusVoiceListViewItem___ctor(v175, v167, v171, v176, limitCount, v173, v172, 0, 0, v233);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v166,
          v177,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v165;
        this = v168;
        if ( (__int64)v165 >= (int)v164[6] )
          goto LABEL_155;
      }
LABEL_255:
      firstPriority[0] = v93;
      sub_B170D4();
    }
LABEL_155:
    v4 = v248;
    v93 = v245 + 2;
    goto LABEL_156;
  }
LABEL_204:
  v204 = this->fields.itemList;
  if ( !v204 )
    goto LABEL_257;
  v205 = v204->fields._size;
  v206 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo,
                                                                                                   v56,
                                                                                                   v57,
                                                                                                   v58,
                                                                                                   v59);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v206,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
  v208 = v205 - 1;
  if ( (int)v205 - 1 >= 1 )
  {
    v209 = 0LL;
    v210 = v208;
    v211 = 5LL;
    svtIda = v208;
    do
    {
      v212 = this->fields.itemList;
      if ( !v212 )
        goto LABEL_257;
      if ( v209 >= (unsigned int)v212->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v213 = (ServantStatusVoiceListViewItem_o *)v212->fields._items->m_Items[v209];
      if ( !v213 )
        goto LABEL_257;
      v214 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v213->klass->_2.bitflags2 + 1) < (unsigned int)v214
        || (ServantStatusVoiceListViewItem_c *)v213->klass->_2.typeHierarchy[v214 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        goto LABEL_257;
      }
      if ( ServantStatusVoiceListViewItem__get_OpenName(v213, v207)
        && !ServantStatusVoiceListViewItem__get_DispNum(v213, v207) )
      {
        if ( !v206 )
          goto LABEL_257;
        System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v206,
          (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__);
        if ( (__int64)(v209 + 1) < v205 )
        {
          v216 = v211;
          while ( 1 )
          {
            v217 = v246->fields.itemList;
            if ( !v217 )
              break;
            if ( v217->fields._size <= (unsigned int)(v216 - 4) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v218 = (ServantStatusVoiceListViewItem_o *)*((_QWORD *)&v217->fields._items->obj.klass + v216);
            if ( !v218 )
              break;
            v219 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v218->klass->_2.bitflags2 + 1) < (unsigned int)v219
              || (ServantStatusVoiceListViewItem_c *)v218->klass->_2.typeHierarchy[v219 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
            {
              break;
            }
            OpenName = ServantStatusVoiceListViewItem__get_OpenName(v218, v207);
            v222 = ServantStatusVoiceListViewItem__get_OpenName(v213, v221);
            if ( System_String__op_Equality(OpenName, v222, 0LL) )
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v206,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v218,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__);
            if ( (int)++v216 - 4 >= (int)v205 )
              goto LABEL_229;
          }
LABEL_257:
          sub_B170D4();
        }
LABEL_229:
        v210 = svtIda;
        if ( v206->fields._size >= 1 )
        {
          ServantStatusVoiceListViewItem__SetNameNum(v213, 1, v215);
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v251,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v206,
            (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
          v223 = 2;
          v253 = *(System_Collections_Generic_List_Enumerator_T__o *)v251;
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v253,
                    (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__) )
          {
            if ( !v253.fields.current
              || (v225 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
                  *(&v253.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v225)
              || (ServantStatusVoiceListViewItem_c *)v253.fields.current->klass->_2.typeHierarchy[v225 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
            {
              sub_B170D4();
            }
            v226 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v253.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v226 )
            {
              if ( (ServantStatusVoiceListViewItem_c *)v253.fields.current->klass->_2.typeHierarchy[v226 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
                v227 = v253.fields.current;
              else
                v227 = 0LL;
            }
            else
            {
              v227 = 0LL;
            }
            ServantStatusVoiceListViewItem__SetNameNum((ServantStatusVoiceListViewItem_o *)v227, v223++, v224);
          }
          *(_DWORD *)&v251[4 * v252++ + 24] = 1600;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v253,
            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
          if ( v252 )
          {
            if ( *(_DWORD *)&v251[4 * v252 + 20] == 1600 )
              --v252;
          }
        }
      }
      this = v246;
      ++v209;
      ++v211;
    }
    while ( (__int64)v209 < v210 );
  }
  explanationLabel = this->fields.explanationLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v229 = LocalizationManager__Get((System_String_o *)StringLiteral_11998/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_257;
  UILabel__set_text(explanationLabel, v229, 0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  v231 = LocalizationManager__Get(v234, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_257;
  UILabel__set_text(emptyMessageLabel, v231, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0LL);
}


void __fastcall ServantStatusVoiceListViewManager__DestroyList(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantStatusVoiceListViewItem_o *__fastcall ServantStatusVoiceListViewManager__GetItem(
        ServantStatusVoiceListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_40FCAAA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B16FFC(&ServantStatusVoiceListViewItem_TypeInfo, v5);
    byte_40FCAAA = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (ServantStatusVoiceListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
    return (ServantStatusVoiceListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
        ServantStatusVoiceListViewManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        VoiceInfo_o *voiceInfo,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  ServantVoiceMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v12; // x3
  void *Entity_30014400; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct VoiceEntity_o *voiceEntity; // x8
  __int64 svtVoiceType; // x8
  __int64 v18; // x20
  System_String_o *v19; // x0
  struct VoiceEntity_o *v20; // x8
  System_String_o *v21; // x19
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x0
  System_String_o *v23; // x0
  __int64 v24; // x20
  int v25; // w8
  System_String_o *v26; // x19
  unsigned int v27; // w21
  __int64 v28; // x22
  __int64 v29; // x8
  __int64 v30; // x8

  if ( (byte_40FCAA8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantVoiceMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&StringLiteral_15842/*"_"*/, v9);
    byte_40FCAA8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  Entity_30014400 = ServantVoiceMaster__getEntity_30014400(MasterData_WarQuestSelectionMaster, svtId, limitCount, v12);
  if ( !voiceInfo )
    goto LABEL_25;
  voiceEntity = voiceInfo->fields.voiceEntity;
  if ( !voiceEntity || !Entity_30014400 )
    goto LABEL_25;
  svtVoiceType = voiceEntity->fields.svtVoiceType;
  if ( (unsigned int)svtVoiceType >= *((_DWORD *)Entity_30014400 + 6) )
  {
LABEL_26:
    sub_B17100(Entity_30014400, v14, v15);
    sub_B170A0();
  }
  v18 = *((_QWORD *)Entity_30014400 + svtVoiceType + 4);
  if ( !v18 )
    return 0;
  v19 = System_Int32__ToString((int)voiceInfo + 52, 0LL);
  v20 = voiceInfo->fields.voiceEntity;
  if ( !v20
    || (v21 = v19, (id = v20->fields.id) == 0LL)
    || (v23 = (System_String_o *)((__int64 (__fastcall *)(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *, void *))id->klass->vtable._3_ToString.method)(
                                   id,
                                   id->klass[1]._1.image),
        Entity_30014400 = System_String__Concat_43746016(v21, (System_String_o *)StringLiteral_15842/*"_"*/, v23, 0LL),
        (v24 = *(_QWORD *)(v18 + 32)) == 0) )
  {
LABEL_25:
    sub_B170D4();
  }
  v25 = *(_DWORD *)(v24 + 24);
  if ( v25 < 1 )
    return 0;
  v26 = (System_String_o *)Entity_30014400;
  v27 = 0;
  while ( 1 )
  {
    if ( v27 >= v25 )
      goto LABEL_26;
    v28 = *(_QWORD *)(v24 + 8LL * (int)v27 + 32);
    if ( !v28 )
      goto LABEL_25;
    v29 = *(_QWORD *)(v28 + 64);
    if ( !v29 )
      goto LABEL_25;
    if ( !*(_DWORD *)(v29 + 24) )
      goto LABEL_26;
    v30 = *(_QWORD *)(v29 + 32);
    if ( !v30 )
      goto LABEL_25;
    Entity_30014400 = (void *)System_String__op_Equality(*(System_String_o **)(v30 + 16), v26, 0LL);
    if ( ((unsigned __int8)Entity_30014400 & 1) != 0 )
    {
      if ( *(_DWORD *)(v28 + 80) )
        return 1;
    }
    v25 = *(_DWORD *)(v24 + 24);
    if ( (int)++v27 >= v25 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
        ServantStatusVoiceListViewManager_o *this,
        int32_t svtId,
        VoiceInfo_o *voiceInfo,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct ServantVoiceCond_array *servantVoiceConds; // x22
  int max_length; // w8
  UserServantCollectionEntity_o *v17; // x19
  unsigned int v18; // w23
  bool v19; // w24
  ServantVoiceCond_o *v20; // x9
  int32_t condType; // w8
  int value; // w26
  __int64 v23; // x20
  __int64 v24; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_40FCAA9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FCAA9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_29;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       UserId,
                       svtId,
                       0LL);
  if ( !voiceInfo )
    goto LABEL_29;
  servantVoiceConds = voiceInfo->fields.servantVoiceConds;
  if ( !servantVoiceConds )
    goto LABEL_29;
  max_length = servantVoiceConds->max_length;
  if ( max_length >= 1 )
  {
    v17 = EntityDefinitely;
    v18 = 0;
    v19 = 1;
    while ( 1 )
    {
      if ( v18 >= max_length )
      {
        sub_B17100(EntityDefinitely, v13, v14);
        sub_B170A0();
      }
      v20 = servantVoiceConds->m_Items[v18];
      if ( !v20 )
        break;
      condType = v20->fields.condType;
      value = v20->fields.value;
      if ( condType == 20 || condType == 3 )
        v19 = 0;
      if ( condType == 3 || condType == 20 )
      {
        if ( !v17 )
          break;
        v23 = *(_QWORD *)&v17->fields.friendshipRank.fields.currentCryptoKey;
        v24 = *(_QWORD *)&v17->fields.friendshipRank.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v26.fields.currentCryptoKey = v23;
        *(_QWORD *)&v26.fields.fakeValue = v24;
        EntityDefinitely = (UserServantCollectionEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                              v26,
                                                              0LL);
        if ( (int)EntityDefinitely >= value )
          v19 = 1;
      }
      max_length = servantVoiceConds->max_length;
      if ( (int)++v18 >= max_length )
        return v19;
    }
LABEL_29:
    sub_B170D4();
  }
  return 1;
}


void __fastcall ServantStatusVoiceListViewManager__OnClickListView(
        ServantStatusVoiceListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct ListViewItem_o *linkItem; // x22
  __int64 v11; // x10
  ServantStatusVoiceListViewManager_CallbackFunc_o *callbackFunc; // x21
  int v13; // w20
  int32_t Index; // w0
  int32_t v15; // w1

  if ( (byte_40FCAB0 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusVoiceListViewItem_TypeInfo, obj);
    byte_40FCAB0 = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0LL
    || (v11 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v11)
    || (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
  {
    sub_B170D4();
  }
  if ( LOBYTE(linkItem[1].fields.sortValue2B) )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( callbackFunc )
    {
      v13 = BYTE1(linkItem[1].fields.sortValue2B);
      Index = ListViewObject__get_Index(obj, 0LL);
      if ( v13 )
        v15 = 2;
      else
        v15 = 1;
      ServantStatusVoiceListViewManager_CallbackFunc__Invoke(callbackFunc, v15, Index, 0LL);
    }
  }
}


void __fastcall ServantStatusVoiceListViewManager__OnMoveEnd(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UIScrollView_o *v13; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_40FCAAF & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCAAF = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v13 = this->fields.scrollView;
        if ( !v13 )
          sub_B170D4();
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__RequestListObject(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *current; // x21
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FCAAD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v11);
    sub_B16FFC(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v12);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v13);
    byte_40FCAAD = 1;
  }
  memset(&v23, 0, sizeof(v23));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v23.fields.current;
      v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusVoiceListViewObject__Init(
        (ServantStatusVoiceListViewObject_o *)current,
        mode,
        v21,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v22);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__RequestListObject_30016832(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FCAAE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v9);
    sub_B16FFC(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v10);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v11);
    byte_40FCAAE = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusVoiceListViewObject__Init(
        (ServantStatusVoiceListViewObject_o *)current,
        mode,
        v19,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v20);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


void __fastcall ServantStatusVoiceListViewManager__SetMode(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        ServantStatusVoiceListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x3

  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusVoiceListViewManager__SetMode_30015892(this, mode, -1, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__SetMode_30015892(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        int32_t select,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v17; // x11
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *ObjectList; // x0
  int size; // w8
  System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *v21; // x19
  unsigned int v22; // w21
  ServantStatusVoiceListViewObject_o *v23; // x20
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *ClippingObjectList; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  int32_t v32; // w8
  System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *v33; // x20
  int v34; // w8
  __int64 v35; // x23
  ServantStatusVoiceListViewObject_o *v36; // x21
  System_Action_o *v37; // x22
  const MethodInfo *v38; // x3
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-60h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FCAAC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__, v12);
    sub_B16FFC(&ServantStatusVoiceListViewItem_TypeInfo, v13);
    sub_B16FFC(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v14);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v15);
    byte_40FCAAC = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( mode == 2 )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_35;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v39,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    for ( i = v39;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
          BYTE1(i.fields.current[12].klass) = HIDWORD(i.fields.current[1].klass) == select )
    {
      if ( !i.fields.current )
        sub_B170D4();
      v17 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&i.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v17
        || (ServantStatusVoiceListViewItem_c *)i.fields.current->klass->_2.typeHierarchy[v17 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        sub_B170D4();
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    ObjectList = ServantStatusVoiceListViewManager__get_ObjectList(this, v18);
    if ( !ObjectList )
      goto LABEL_35;
    size = ObjectList->fields._size;
    v21 = ObjectList;
    if ( size >= 1 )
    {
      v22 = 0;
      while ( 1 )
      {
        if ( size <= v22 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v23 = v21->fields._items->m_Items[v22];
        if ( !v23 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        ServantStatusVoiceListViewObject__Init(
          v23,
          4,
          0LL,
          zero.fields.x,
          *(UnityEngine_Vector3_o *)&zero.fields.y,
          v24);
        size = v21->fields._size;
        if ( (int)++v22 >= size )
          return;
      }
      goto LABEL_35;
    }
  }
  else
  {
    this->fields.initMode = mode;
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
    ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0LL);
    if ( mode == 3 )
    {
      ClippingObjectList = ServantStatusVoiceListViewManager__get_ClippingObjectList(this, v25);
      if ( !ClippingObjectList )
        goto LABEL_35;
      v32 = ClippingObjectList->fields._size;
      v33 = ClippingObjectList;
      if ( v32 < 1 )
      {
        this->fields.callbackCount = 1;
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
          0.2,
          0LL);
      }
      else
      {
        this->fields.callbackCount = v32;
        v34 = ClippingObjectList->fields._size;
        if ( v34 >= 1 )
        {
          v35 = 0LL;
          while ( 1 )
          {
            if ( v34 <= (unsigned int)v35 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v36 = v33->fields._items->m_Items[v35];
            v37 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v28, v29, v30, v31);
            System_Action___ctor(v37, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
            if ( !v36 )
              break;
            v42 = UnityEngine_Vector3__get_zero(0LL);
            ServantStatusVoiceListViewObject__Init(
              v36,
              5,
              v37,
              v42.fields.x,
              *(UnityEngine_Vector3_o *)&v42.fields.y,
              v38);
            v34 = v33->fields._size;
            if ( (int)++v35 >= v34 )
              return;
          }
LABEL_35:
          sub_B170D4();
        }
      }
    }
    else if ( mode == 1 )
    {
      ServantStatusVoiceListViewManager__RequestListObject_30016832(this, 3, v26);
    }
  }
}


void __fastcall ServantStatusVoiceListViewManager__SetMode_30016772(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x3

  this->fields.callbackFunc2 = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusVoiceListViewManager__SetMode_30015892(this, mode, -1, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__SetObjectItem(
        ServantStatusVoiceListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  if ( (byte_40FCAAB & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusVoiceListViewObject_TypeInfo, obj);
    byte_40FCAAB = 1;
  }
  if ( !obj
    || (v6 = *(&ServantStatusVoiceListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantStatusVoiceListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantStatusVoiceListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  initMode = this->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 1 )
    v13 = 3;
  else
    v13 = 2;
  ServantStatusVoiceListViewObject__Init(
    (ServantStatusVoiceListViewObject_o *)obj,
    v13,
    0LL,
    v9,
    *(UnityEngine_Vector3_o *)&v10,
    v8);
}


void __fastcall ServantStatusVoiceListViewManager__add_callbackFunc(
        ServantStatusVoiceListViewManager_o *this,
        ServantStatusVoiceListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ServantStatusVoiceListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantStatusVoiceListViewManager_o *v10; // x0
  ServantStatusVoiceListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40FCAA0 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FCAA0 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ServantStatusVoiceListViewManager_CallbackFunc_c *)v7->klass != ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  ServantStatusVoiceListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall ServantStatusVoiceListViewManager__add_callbackFunc2(
        ServantStatusVoiceListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantStatusVoiceListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40FCAA2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FCAA2 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  ServantStatusVoiceListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *__fastcall ServantStatusVoiceListViewManager__get_ClippingObjectList(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  ServantStatusVoiceListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FCAA5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FCAA5 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (ServantStatusVoiceListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        (UnityEngine_GameObject_o *)current,
                                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B170D4();
      Item = (ListViewItem_o *)ServantStatusVoiceListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B170D4();
      if ( Item->fields.isTermination )
      {
        if ( ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
        {
          if ( !v14 )
            sub_B170D4();
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v14 )
          sub_B170D4();
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *)v14;
}


System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *__fastcall ServantStatusVoiceListViewManager__get_ObjectList(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FCAA4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FCAA4 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *)v14;
}


void __fastcall ServantStatusVoiceListViewManager__remove_callbackFunc(
        ServantStatusVoiceListViewManager_o *this,
        ServantStatusVoiceListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ServantStatusVoiceListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantStatusVoiceListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40FCAA1 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FCAA1 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ServantStatusVoiceListViewManager_CallbackFunc_c *)v7->klass != ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  ServantStatusVoiceListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall ServantStatusVoiceListViewManager__remove_callbackFunc2(
        ServantStatusVoiceListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantStatusVoiceListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_40FCAA3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FCAA3 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  ServantStatusVoiceListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager_CallbackFunc___ctor(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantStatusVoiceListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_40F7674 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&ServantStatusVoiceListViewManager_ResultKind_TypeInfo, v9);
    byte_40F7674 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(ServantStatusVoiceListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall ServantStatusVoiceListViewManager_CallbackFunc__EndInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager_CallbackFunc__Invoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  ServantStatusVoiceListViewManager_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  ServantStatusVoiceListViewManager_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  ServantStatusVoiceListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ServantStatusVoiceListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result);
      if ( (sub_B1702C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)result, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)result, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AAFEF8(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B170AC(v17, v22);
        (*v19)(v21, v26, (unsigned int)result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AAFEF8(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)result,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)result, v22);
    goto LABEL_38;
  }
}