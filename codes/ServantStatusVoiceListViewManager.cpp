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
  DataManager_o *Instance; // x0
  signed int max_length; // w8
  VoiceMaster_o *v13; // x21
  unsigned int v14; // w23
  char v15; // w19
  ServantVoiceRelationEntity_o *v16; // x22
  __int64 v17; // x24
  __int64 v18; // x25
  DataManager_o *v19; // x24
  unsigned __int64 v20; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x25
  int32_t size; // w26
  __int64 v23; // x27
  __int64 v24; // x28
  __int64 v25; // x1
  __int64 v26; // x2
  VoiceInfo_o *v27; // x28
  int32_t v28; // w27
  int32_t v29; // w20
  ServantStatusVoiceListViewItem_o *v30; // x23
  __int64 v31; // x0
  const MethodInfo *v32; // [xsp+8h] [xbp-88h]
  VoiceMaster_o *v33; // [xsp+10h] [xbp-80h]
  ServantVoiceRelationEntity_array *v34; // [xsp+18h] [xbp-78h]
  int32_t ascendOrder; // [xsp+20h] [xbp-70h]
  unsigned int v36; // [xsp+24h] [xbp-6Ch]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4217745 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoiceMaster___, firstPriority);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B0D8A4(&ServantStatusVoiceListViewItem_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4217745 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !relationList )
    goto LABEL_27;
  max_length = relationList->max_length;
  if ( max_length >= 1 )
  {
    v13 = (VoiceMaster_o *)Instance;
    v14 = 0;
    v15 = 1;
    ascendOrder = 0;
    v33 = (VoiceMaster_o *)Instance;
    v34 = relationList;
    while ( 1 )
    {
      if ( v14 >= max_length )
      {
LABEL_28:
        v31 = sub_B0D9A8(Instance);
        sub_B0D948(v31, 0LL);
      }
      v16 = relationList->m_Items[v14];
      if ( !v16 )
        goto LABEL_27;
      v18 = *(_QWORD *)&v16->fields.relationSvtId.fields.currentCryptoKey;
      v17 = *(_QWORD *)&v16->fields.relationSvtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v40.fields.currentCryptoKey = v18;
      *(_QWORD *)&v40.fields.fakeValue = v17;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v40, 0LL);
      if ( !v13 )
        goto LABEL_27;
      Instance = (DataManager_o *)VoiceMaster__getEnableInfo(v13, svtId, (int32_t)Instance, 0, 0LL, 0, 0, 0LL);
      v19 = Instance;
      if ( (v15 & 1) == 0 && ascendOrder != v16->fields.ascendOrder )
        ++*firstPriority;
      v36 = v14;
      if ( !Instance )
        goto LABEL_27;
      ascendOrder = v16->fields.ascendOrder;
      if ( SLODWORD(Instance->fields.datalist) >= 1 )
        break;
LABEL_25:
      v13 = v33;
      relationList = v34;
      v15 = 0;
      max_length = v34->max_length;
      v14 = v36 + 1;
      if ( (int)(v36 + 1) >= max_length )
        return;
    }
    v20 = 0LL;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      v24 = *(_QWORD *)&v16->fields.relationSvtId.fields.currentCryptoKey;
      v23 = *(_QWORD *)&v16->fields.relationSvtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v41.fields.currentCryptoKey = v24;
      *(_QWORD *)&v41.fields.fakeValue = v23;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v41, 0LL);
      if ( v20 >= LODWORD(v19->fields.datalist) )
        goto LABEL_28;
      v27 = (VoiceInfo_o *)*((_QWORD *)&v19->fields.lookup + v20);
      v28 = (int)Instance;
      v29 = *firstPriority;
      v30 = (ServantStatusVoiceListViewItem_o *)sub_B0D974(ServantStatusVoiceListViewItem_TypeInfo, v25, v26);
      ServantStatusVoiceListViewItem___ctor(v30, size, svtId, v28, 0, v27, v29, 0, 0, v32);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (__int64)++v20 >= SLODWORD(v19->fields.datalist) )
        goto LABEL_25;
    }
LABEL_27:
    sub_B0D97C(Instance);
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
  VoiceMaster_o *v48; // x24
  __int64 v49; // x1
  __int64 v50; // x2
  System_Collections_Generic_List_VoiceCondType_Type__o *v51; // x19
  __int64 v52; // x1
  __int64 v53; // x2
  System_Int32_array *v54; // x9
  __int64 v55; // x8
  unsigned __int64 v56; // x10
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x19
  int32_t maxLimitCount; // w20
  System_Int32_array *VoiceLimitCountList; // x20
  const MethodInfo *v60; // x5
  ServantVoiceRelationEntity_array *v61; // x19
  int32_t v62; // w0
  const MethodInfo *v63; // x4
  ServantVoiceRelationEntity_array *v64; // x19
  int32_t v65; // w0
  const MethodInfo *v66; // x4
  __int64 v67; // x8
  int32_t v68; // w19
  unsigned __int64 v69; // x9
  int32_t v70; // w0
  BalanceConfig_c *v71; // x8
  int32_t v72; // w19
  int64_t v73; // x23
  unsigned __int64 v74; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v75; // x20
  int32_t v76; // w24
  __int64 v77; // x1
  __int64 v78; // x2
  int32_t v79; // w19
  VoiceInfo_o *v80; // x26
  int32_t ServantIdMashu3; // w27
  ServantStatusVoiceListViewItem_o *v82; // x28
  int32_t v83; // w28
  int32_t v84; // w22
  __int64 v85; // x0
  const MethodInfo *v86; // x4
  int v87; // w8
  int64_t v88; // x26
  unsigned int i; // w25
  int64_t v90; // x23
  VoiceInfo_o *v91; // x3
  VoiceInfo_o **v92; // x23
  VoiceInfo_o *v93; // t1
  struct VoiceEntity_o *voiceEntity; // x24
  int32_t condType; // w9
  int v96; // w28
  _BOOL4 v97; // w8
  const MethodInfo *v98; // x3
  const MethodInfo *v99; // x3
  char v100; // w22
  _BOOL8 v101; // x0
  const MethodInfo *v102; // x1
  Il2CppObject *v103; // x27
  __int64 v104; // x10
  Il2CppClass *v105; // x8
  __int64 v106; // x0
  struct VoiceEntity_o *v107; // x8
  int32_t v108; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x19
  System_String_o *v110; // x2
  __int64 v111; // x0
  int32_t v112; // w5
  const MethodInfo *v113; // x6
  struct VoiceEntity_o *v114; // x8
  int32_t v115; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v116; // x19
  System_String_o *v117; // x2
  int32_t v118; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x20
  bool v120; // w28
  bool v121; // w21
  int32_t size; // w24
  char v123; // w19
  __int64 v124; // x1
  __int64 v125; // x2
  VoiceInfo_o *v126; // x23
  int32_t v127; // w27
  bool v128; // w19
  ServantStatusVoiceListViewItem_o *v129; // x28
  _BOOL8 v130; // x0
  const MethodInfo *v131; // x1
  Il2CppObject *current; // x27
  __int64 v133; // x10
  Il2CppClass *klass; // x8
  __int64 v135; // x0
  int32_t v136; // w5
  const MethodInfo *v137; // x6
  __int64 v138; // x0
  __int64 v139; // x0
  __int64 v140; // x0
  int32_t v141; // w19
  BalanceConfig_c *v142; // x8
  WarGroupEntity_o *v143; // x27
  UserServantCollectionMaster_o *v144; // x19
  int64_t v145; // x20
  int32_t v146; // w0
  BalanceConfig_c *v147; // x8
  int32_t v148; // w19
  int64_t v149; // x27
  unsigned __int64 v150; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v151; // x20
  int32_t v152; // w24
  ServantStatusVoiceListViewManager_o *v153; // x25
  __int64 v154; // x1
  __int64 v155; // x2
  int32_t v156; // w19
  int32_t v157; // w21
  VoiceInfo_o *v158; // x23
  int32_t ServantIdHyde; // w28
  ServantStatusVoiceListViewItem_o *v160; // x0
  int32_t v161; // w3
  EventMissionProgressRequest_Argument_ProgressData_o *v162; // x26
  BalanceConfig_c *v163; // x8
  int v164; // w19
  int32_t v165; // w0
  BalanceConfig_c *v166; // x8
  int32_t v167; // w19
  VoiceInfo_array *EnableInfo; // x0
  VoiceInfo_array *v169; // x27
  unsigned __int64 v170; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v171; // x20
  int32_t v172; // w24
  __int64 v173; // x1
  __int64 v174; // x2
  int32_t v175; // w19
  VoiceInfo_o *v176; // x23
  int32_t ServantIdMashu2; // w26
  ServantStatusVoiceListViewItem_o *v178; // x28
  int64_t v179; // x0
  BalanceConfig_c *v180; // x8
  int64_t v181; // x20
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t MashuTdGradeUpQuestId; // w19
  int32_t MashuTdGradeUpQuestPhase; // w23
  int32_t svtVoiceId; // w19
  ServantVoiceRelationEntity_array *v186; // x19
  int32_t v187; // w0
  const MethodInfo *v188; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v189; // x8
  signed __int64 v190; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v191; // x20
  const MethodInfo *v192; // x1
  int v193; // w8
  unsigned __int64 v194; // x24
  signed __int64 v195; // x22
  __int64 v196; // x25
  struct System_Collections_Generic_List_ListViewItem__o *v197; // x19
  ServantStatusVoiceListViewItem_o *v198; // x21
  __int64 v199; // x10
  const MethodInfo *v200; // x2
  __int64 v201; // x26
  struct System_Collections_Generic_List_ListViewItem__o *v202; // x19
  ServantStatusVoiceListViewItem_o *v203; // x22
  __int64 v204; // x10
  System_String_o *OpenName; // x19
  const MethodInfo *v206; // x1
  System_String_o *v207; // x0
  int32_t v208; // w21
  _BOOL8 v209; // x0
  const MethodInfo *v210; // x2
  __int64 v211; // x11
  __int64 v212; // x11
  Il2CppObject *v213; // x0
  UILabel_o *explanationLabel; // x19
  UILabel_o *emptyMessageLabel; // x19
  __int64 v216; // x0
  bool voiceLabelSpec; // [xsp+0h] [xbp-170h]
  const MethodInfo *v218; // [xsp+8h] [xbp-168h]
  System_String_o *v219; // [xsp+10h] [xbp-160h]
  UserServantCollectionEntity_o *EntityDefinitely; // [xsp+18h] [xbp-158h]
  unsigned __int64 v222; // [xsp+28h] [xbp-148h]
  ServantLimitAddMaster_o *v223; // [xsp+30h] [xbp-140h]
  System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList; // [xsp+38h] [xbp-138h]
  System_Int32_array *v225; // [xsp+40h] [xbp-130h]
  VoiceMaster_o *v226; // [xsp+48h] [xbp-128h]
  unsigned __int64 v227; // [xsp+50h] [xbp-120h]
  int64_t v228; // [xsp+58h] [xbp-118h]
  VoicePlayCondMaster_o *v229; // [xsp+60h] [xbp-110h]
  int32_t v230; // [xsp+6Ch] [xbp-104h]
  ServantStatusVoiceListViewManager_o *v231; // [xsp+70h] [xbp-100h]
  int32_t limitCount; // [xsp+7Ch] [xbp-F4h]
  ServantStatusListViewItem_o *v233; // [xsp+80h] [xbp-F0h]
  int32_t svtId; // [xsp+88h] [xbp-E8h]
  signed __int64 svtIda; // [xsp+88h] [xbp-E8h]
  _BYTE v236[44]; // [xsp+90h] [xbp-E0h] BYREF
  int v237; // [xsp+BCh] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_T__o v238; // [xsp+C0h] [xbp-B0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+D8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v240; // [xsp+E0h] [xbp-90h] BYREF
  ServantVoiceRelationEntity_array *afterRelationList; // [xsp+F8h] [xbp-78h] BYREF
  ServantVoiceRelationEntity_array *sameRelationList; // [xsp+100h] [xbp-70h] BYREF
  ServantVoiceRelationEntity_array *beforeRelationList; // [xsp+108h] [xbp-68h] BYREF
  int32_t firstPriority[3]; // [xsp+114h] [xbp-5Ch] BYREF

  v4 = mainInfo;
  if ( (byte_4217746 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, mainInfo);
    sub_B0D8A4(&CondType_TypeInfo, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_VoiceMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMaster_VoicePlayCondMaster___, v13);
    sub_B0D8A4(&DataManager_TypeInfo, v14);
    sub_B0D8A4(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string__GetEntity__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__get_Current__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CondType_Kind__Add__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v30);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__get_Count__, v31);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v32);
    sub_B0D8A4(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v33);
    sub_B0D8A4(&System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo, v34);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v35);
    sub_B0D8A4(&NetworkManager_TypeInfo, v36);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v37);
    sub_B0D8A4(&ServantStatusVoiceListViewItem_TypeInfo, v38);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v40);
    sub_B0D8A4(&StringLiteral_2235/*"B050"*/, v41);
    sub_B0D8A4(&StringLiteral_15163/*"VOICE_EMPTY_MESSAGE"*/, v42);
    sub_B0D8A4(&StringLiteral_12086/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, v43);
    byte_4217746 = 1;
  }
  firstPriority[0] = 0;
  sameRelationList = 0LL;
  beforeRelationList = 0LL;
  afterRelationList = 0LL;
  memset(&v240, 0, sizeof(v240));
  entity = 0LL;
  v44 = StringLiteral_15163/*"VOICE_EMPTY_MESSAGE"*/;
  memset(&v238, 0, sizeof(v238));
  v237 = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.execObjectExtraFlag = 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v4 )
    goto LABEL_257;
  v47 = UserId;
  UserId = ServantStatusListViewItem__get_SvtId(v4, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_257;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(Master_WarQuestSelectionMaster, v47, UserId, 0LL);
  v48 = (VoiceMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_VoiceMaster___);
  v229 = (VoicePlayCondMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v223 = (ServantLimitAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  firstPriority[0] = 0;
  v51 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B0D974(
                                                                   System_Collections_Generic_List_CondType_Kind__TypeInfo,
                                                                   v49,
                                                                   v50);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v51,
    (const MethodInfo_2FB217C *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v51 )
    goto LABEL_257;
  disableCondTypeList = (System_Collections_Generic_List_CondType_Kind__o *)v51;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v51,
    81,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_CondType_Kind__Add__);
  v54 = changeSvtVoiceIdList;
  if ( !changeSvtVoiceIdList )
    goto LABEL_257;
  v55 = *(_QWORD *)&changeSvtVoiceIdList->max_length;
  v219 = (System_String_o *)v44;
  v231 = this;
  if ( (int)v55 >= 1 )
  {
    v56 = 0LL;
    v233 = v4;
    v226 = v48;
    while ( 1 )
    {
      if ( v56 >= (unsigned int)v55 )
        goto LABEL_253;
      v222 = v56;
      svtId = v54->m_Items[v56 + 1];
      UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !UserId )
        goto LABEL_257;
      MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)UserId,
                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      UserId = (int64_t)EntityDefinitely;
      if ( !EntityDefinitely )
        goto LABEL_257;
      maxLimitCount = EntityDefinitely->fields.maxLimitCount;
      UserId = (int64_t)UserServantCollectionEntity__getCostumeList(EntityDefinitely, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_257;
      VoiceLimitCountList = ServantLimitAddMaster__getVoiceLimitCountList(
                              MasterData_WarQuestSelectionMaster,
                              svtId,
                              maxLimitCount,
                              (System_Int32_array *)UserId,
                              0LL);
      UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !UserId )
        goto LABEL_257;
      UserId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)UserId,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !UserId )
        goto LABEL_257;
      ServantVoiceRelationMaster__GetRelationList_29919536(
        (ServantVoiceRelationMaster_o *)UserId,
        &beforeRelationList,
        &sameRelationList,
        &afterRelationList,
        svtId,
        v60);
      v61 = beforeRelationList;
      v62 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, firstPriority, v61, v62, v63);
      v64 = sameRelationList;
      ++firstPriority[0];
      v65 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, firstPriority, v64, v65, v66);
      if ( !VoiceLimitCountList )
        goto LABEL_257;
      v67 = *(_QWORD *)&VoiceLimitCountList->max_length;
      v68 = firstPriority[0];
      if ( (int)v67 >= 1 )
        break;
      v83 = firstPriority[0];
LABEL_203:
      v186 = afterRelationList;
      firstPriority[0] = v83;
      v187 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, firstPriority, v186, v187, v188);
      v54 = changeSvtVoiceIdList;
      LODWORD(v55) = changeSvtVoiceIdList->max_length;
      v56 = v222 + 1;
      if ( (__int64)(v222 + 1) >= (int)v55 )
        goto LABEL_204;
    }
    v69 = 0LL;
    v225 = VoiceLimitCountList;
    while ( 1 )
    {
      if ( v69 >= (unsigned int)v67 )
      {
        firstPriority[0] = v68;
        goto LABEL_253;
      }
      v84 = VoiceLimitCountList->m_Items[v69 + 1];
      v227 = v69;
      v85 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
      if ( !v48 )
      {
        firstPriority[0] = v68;
        sub_B0D97C(v85);
      }
      v230 = v68;
      UserId = (int64_t)VoiceMaster__getEnableInfo(v48, v85, svtId, v84, disableCondTypeList, 0, 0, 0LL);
      if ( !UserId )
        goto LABEL_251;
      v87 = *(_DWORD *)(UserId + 24);
      v88 = UserId;
      limitCount = v84;
      if ( v87 >= 1 )
      {
        for ( i = 0; (int)i < v87; ++i )
        {
          if ( i >= v87 )
          {
LABEL_252:
            firstPriority[0] = v230;
            goto LABEL_253;
          }
          v90 = v88 + 8LL * (int)i;
          v93 = *(VoiceInfo_o **)(v90 + 32);
          v92 = (VoiceInfo_o **)(v90 + 32);
          v91 = v93;
          if ( !v93 )
            goto LABEL_251;
          voiceEntity = v91->fields.voiceEntity;
          if ( v84 > 10 )
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
              v96 = 1;
            }
            else
            {
              UserId = ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                         (ServantStatusVoiceListViewManager_o *)UserId,
                         svtId,
                         v84,
                         v91,
                         v86);
              if ( (UserId & 1) != 0 )
              {
                if ( i >= *(_DWORD *)(v88 + 24) )
                  goto LABEL_252;
                UserId = ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                           (ServantStatusVoiceListViewManager_o *)UserId,
                           svtId,
                           *v92,
                           v99);
                if ( (UserId & 1) == 0 )
                  goto LABEL_100;
                goto LABEL_62;
              }
              UserId = (int64_t)this->fields.itemList;
              if ( !UserId )
                goto LABEL_251;
              System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)v236,
                (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserId,
                (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
              v240 = *(System_Collections_Generic_List_Enumerator_T__o *)v236;
              do
              {
                v130 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                         &v240,
                         (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                if ( !v130 )
                {
                  v96 = 1;
                  goto LABEL_116;
                }
                current = v240.fields.current;
                if ( !v240.fields.current
                  || (v133 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
                      *(&v240.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v133)
                  || (ServantStatusVoiceListViewItem_c *)v240.fields.current->klass->_2.typeHierarchy[v133 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                {
                  sub_B0D97C(v130);
                }
                klass = v240.fields.current[10].klass;
                if ( !klass )
                  sub_B0D97C(v130);
              }
              while ( HIDWORD(klass->_1.namespaze) != 2
                   || LODWORD(klass->_1.this_arg.data) != 7
                   || HIDWORD(klass->_1.this_arg.data) != voiceEntity->fields.condValue
                   || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                        (ServantStatusVoiceListViewItem_o *)v240.fields.current,
                        v131) != svtId );
              v135 = ServantStatusListViewItem__get_SvtId(v233, 0LL);
              if ( i >= *(_DWORD *)(v88 + 24) )
              {
                v140 = sub_B0D9A8(v135);
                sub_B0D948(v140, 0LL);
              }
              ServantStatusVoiceListViewItem__SetLimitCount(
                (ServantStatusVoiceListViewItem_o *)current,
                v135,
                svtId,
                v84,
                *v92,
                v136,
                v137);
              v96 = 0;
LABEL_116:
              v4 = v233;
              *(_DWORD *)&v236[4 * v237++ + 24] = 701;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                &v240,
                (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
              if ( v237 && *(_DWORD *)&v236[4 * v237 + 20] == 701 )
              {
                --v237;
                if ( !v96 )
                  goto LABEL_100;
                goto LABEL_88;
              }
            }
            condType = voiceEntity->fields.condType;
          }
          else
          {
            v96 = 1;
          }
          v97 = v96 != 0;
          if ( condType != 18 )
            goto LABEL_87;
          if ( i >= *(_DWORD *)(v88 + 24) )
            goto LABEL_252;
          UserId = ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                     (ServantStatusVoiceListViewManager_o *)UserId,
                     svtId,
                     v84,
                     *v92,
                     v86);
          if ( (UserId & 1) == 0 )
          {
            UserId = (int64_t)this->fields.itemList;
            if ( !UserId )
              goto LABEL_251;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v236,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserId,
              (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v240 = *(System_Collections_Generic_List_Enumerator_T__o *)v236;
            while ( 1 )
            {
              v101 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                       &v240,
                       (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v101 )
                break;
              v103 = v240.fields.current;
              if ( !v240.fields.current
                || (v104 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
                    *(&v240.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v104)
                || (ServantStatusVoiceListViewItem_c *)v240.fields.current->klass->_2.typeHierarchy[v104 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                sub_B0D97C(v101);
              }
              v105 = v240.fields.current[10].klass;
              if ( !v105 )
                sub_B0D97C(v101);
              if ( HIDWORD(v105->_1.namespaze) == 2
                && LODWORD(v105->_1.this_arg.data) == 18
                && ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                     (ServantStatusVoiceListViewItem_o *)v240.fields.current,
                     v102) == svtId )
              {
                v106 = ServantStatusListViewItem__get_SvtId(v233, 0LL);
                if ( i >= *(_DWORD *)(v88 + 24) )
                {
                  v138 = sub_B0D9A8(v106);
                  sub_B0D948(v138, 0LL);
                }
                if ( !*v92 )
                  sub_B0D97C(v106);
                v107 = (*v92)->fields.voiceEntity;
                if ( !v107 )
                  sub_B0D97C(v106);
                v108 = v106;
                id = v107->fields.id;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                }
                v110 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(id, 0LL);
                if ( !v229 )
                  sub_B0D97C(0LL);
                if ( !VoicePlayCondMaster__isVoiceCond(v229, v108, v110, 81, 0LL) )
                {
                  v111 = ServantStatusListViewItem__get_SvtId(v233, 0LL);
                  if ( i >= *(_DWORD *)(v88 + 24) )
                  {
                    v139 = sub_B0D9A8(v111);
                    sub_B0D948(v139, 0LL);
                  }
                  ServantStatusVoiceListViewItem__SetLimitCount(
                    (ServantStatusVoiceListViewItem_o *)v103,
                    v111,
                    svtId,
                    v84,
                    *v92,
                    v112,
                    v113);
                  v96 = 0;
                }
                break;
              }
            }
            v4 = v233;
            *(_DWORD *)&v236[4 * v237++ + 24] = 701;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v240,
              (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
            v97 = v96 != 0;
            if ( v237 && *(_DWORD *)&v236[4 * v237 + 20] == 701 )
            {
              --v237;
              if ( !v96 )
                goto LABEL_100;
            }
            else
            {
LABEL_87:
              if ( !v97 )
                goto LABEL_100;
            }
LABEL_88:
            v100 = 0;
            goto LABEL_89;
          }
          if ( i >= *(_DWORD *)(v88 + 24) )
            goto LABEL_252;
          UserId = ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                     (ServantStatusVoiceListViewManager_o *)UserId,
                     svtId,
                     *v92,
                     v98);
          if ( !v96 || (UserId & 1) == 0 )
            goto LABEL_100;
LABEL_62:
          v100 = 1;
LABEL_89:
          UserId = ServantStatusListViewItem__get_SvtId(v4, 0LL);
          if ( i >= *(_DWORD *)(v88 + 24) )
            goto LABEL_252;
          if ( !*v92 )
            goto LABEL_251;
          v114 = (*v92)->fields.voiceEntity;
          if ( !v114 )
            goto LABEL_251;
          v115 = UserId;
          v116 = v114->fields.id;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v117 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(v116, 0LL);
          UserId = (int64_t)v229;
          if ( !v229 )
            goto LABEL_251;
          UserId = VoicePlayCondMaster__isVoiceCond(v229, v115, v117, 81, 0LL);
          if ( !voiceEntity )
            goto LABEL_251;
          v118 = voiceEntity->fields.condType;
          itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
          v120 = v118 == 18;
          v121 = v118 == 7;
          if ( !itemList )
            goto LABEL_251;
          size = itemList->fields._size;
          v123 = UserId;
          UserId = ServantStatusListViewItem__get_SvtId(v4, 0LL);
          if ( i >= *(_DWORD *)(v88 + 24) )
            goto LABEL_252;
          v126 = *v92;
          v127 = UserId;
          v128 = v123 & (v120 || v121);
          voiceLabelSpec = v100;
          v84 = limitCount;
          v129 = (ServantStatusVoiceListViewItem_o *)sub_B0D974(ServantStatusVoiceListViewItem_TypeInfo, v124, v125);
          ServantStatusVoiceListViewItem___ctor(
            v129,
            size,
            v127,
            svtId,
            limitCount,
            v126,
            v230,
            v128,
            voiceLabelSpec,
            v218);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            itemList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v129,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          this = v231;
          v4 = v233;
LABEL_100:
          v87 = *(_DWORD *)(v88 + 24);
        }
      }
      v83 = v230 + 1;
      v141 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
      v142 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v142 = BalanceConfig_TypeInfo;
      }
      v48 = v226;
      if ( v141 == v142->static_fields->ServantIdJekyll )
        break;
      UserId = ServantStatusListViewItem__get_SvtId(v4, 0LL);
      v163 = BalanceConfig_TypeInfo;
      v164 = UserId;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v163 = BalanceConfig_TypeInfo;
      }
      if ( v164 == v163->static_fields->ServantIdMashu1 )
      {
        if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TutorialFlag_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        }
        if ( TutorialFlag__Get_28088484(115, 0LL) )
        {
          v165 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
          v166 = BalanceConfig_TypeInfo;
          v167 = v165;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v166 = BalanceConfig_TypeInfo;
          }
          v157 = v230 + 1;
          EnableInfo = VoiceMaster__getEnableInfo(v226, v167, v166->static_fields->ServantIdMashu2, v84, 0LL, 0, 0, 0LL);
          if ( !EnableInfo )
          {
LABEL_256:
            firstPriority[0] = v230 + 1;
            sub_B0D97C(EnableInfo);
          }
          v169 = EnableInfo;
          if ( (int)EnableInfo->max_length >= 1 )
          {
            v170 = 0LL;
            while ( 1 )
            {
              v171 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v231->fields.itemList;
              if ( !v171 )
                goto LABEL_256;
              v172 = v171->fields._size;
              UserId = ServantStatusListViewItem__get_SvtId(v233, 0LL);
              v175 = UserId;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              }
              if ( v170 >= v169->max_length )
                break;
              v176 = v169->m_Items[v170];
              ServantIdMashu2 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu2;
              v178 = (ServantStatusVoiceListViewItem_o *)sub_B0D974(ServantStatusVoiceListViewItem_TypeInfo, v173, v174);
              ServantStatusVoiceListViewItem___ctor(
                v178,
                v172,
                v175,
                ServantIdMashu2,
                limitCount,
                v176,
                v157,
                0,
                0,
                v218);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v171,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v178,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
              if ( (__int64)++v170 >= (int)v169->max_length )
                goto LABEL_177;
            }
LABEL_254:
            firstPriority[0] = v157;
LABEL_253:
            v216 = sub_B0D9A8(UserId);
            sub_B0D948(v216, 0LL);
          }
LABEL_177:
          v4 = v233;
          v84 = limitCount;
          this = v231;
          v83 = v230 + 2;
        }
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v179 = NetworkManager__get_UserId(0LL);
        v180 = BalanceConfig_TypeInfo;
        v181 = v179;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v48 = v226;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v180 = BalanceConfig_TypeInfo;
          }
        }
        else
        {
          v48 = v226;
        }
        static_fields = v180->static_fields;
        MashuTdGradeUpQuestId = static_fields->MashuTdGradeUpQuestId;
        MashuTdGradeUpQuestPhase = static_fields->MashuTdGradeUpQuestPhase;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        UserId = CondType__IsQuestPhaseClear(v181, MashuTdGradeUpQuestId, MashuTdGradeUpQuestPhase, -1, 0, 0LL);
        if ( (UserId & 1) != 0 )
        {
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          }
          UserId = (int64_t)v223;
          if ( !v223 )
            goto LABEL_255;
          UserId = ServantLimitAddMaster__TryGetEntity(
                     v223,
                     &entity,
                     BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                     v84,
                     0LL);
          if ( (UserId & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_255;
            UserId = (int64_t)BalanceConfig_TypeInfo;
            svtVoiceId = entity->fields.svtVoiceId;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              UserId = (int64_t)BalanceConfig_TypeInfo;
            }
            if ( svtVoiceId != *(_DWORD *)(*(_QWORD *)(UserId + 184) + 344LL) )
            {
              v70 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
              v71 = BalanceConfig_TypeInfo;
              v72 = v70;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v71 = BalanceConfig_TypeInfo;
              }
              v230 = v83;
              UserId = (int64_t)VoiceMaster__getEnableInfo(
                                  v48,
                                  v72,
                                  v71->static_fields->ServantIdMashu3,
                                  v84,
                                  0LL,
                                  0,
                                  0,
                                  0LL);
              if ( !UserId )
                goto LABEL_251;
              v73 = UserId;
              if ( *(int *)(UserId + 24) >= 1 )
              {
                v74 = 0LL;
                while ( 1 )
                {
                  v75 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
                  if ( !v75 )
                    break;
                  v76 = v75->fields._size;
                  UserId = ServantStatusListViewItem__get_SvtId(v4, 0LL);
                  v79 = UserId;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  }
                  if ( v74 >= *(unsigned int *)(v73 + 24) )
                    goto LABEL_252;
                  v80 = *(VoiceInfo_o **)(v73 + 32 + 8 * v74);
                  ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
                  v82 = (ServantStatusVoiceListViewItem_o *)sub_B0D974(
                                                              ServantStatusVoiceListViewItem_TypeInfo,
                                                              v77,
                                                              v78);
                  ServantStatusVoiceListViewItem___ctor(
                    v82,
                    v76,
                    v79,
                    ServantIdMashu3,
                    limitCount,
                    v80,
                    v230,
                    0,
                    0,
                    v218);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v75,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v82,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                  v4 = v233;
                  if ( (__int64)++v74 >= *(int *)(v73 + 24) )
                    goto LABEL_36;
                }
LABEL_251:
                firstPriority[0] = v230;
                sub_B0D97C(UserId);
              }
LABEL_36:
              v83 = v230 + 1;
LABEL_156:
              v48 = v226;
            }
          }
        }
      }
LABEL_200:
      VoiceLimitCountList = v225;
      v68 = v83;
      LODWORD(v67) = v225->max_length;
      v69 = v227 + 1;
      if ( (__int64)(v227 + 1) >= (int)v67 )
        goto LABEL_203;
    }
    v143 = DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
             (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)v226,
             (System_String_o *)StringLiteral_2235/*"B050"*/,
             (const MethodInfo_266A024 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string__GetEntity__);
    UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !UserId )
      goto LABEL_255;
    v144 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)UserId,
                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v145 = NetworkManager__get_UserId(0LL);
    UserId = ServantStatusListViewItem__get_SvtId(v233, 0LL);
    if ( !v144 )
      goto LABEL_255;
    UserId = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v144, v145, UserId, 0LL);
    if ( !v143 )
      goto LABEL_255;
    if ( v143[1].fields.id == 17 )
    {
      if ( !UserId )
        goto LABEL_255;
      UserId = UserServantCollectionEntity__IsPlayed((UserServantCollectionEntity_o *)UserId, v143[1].fields.warId, 0LL);
      if ( (UserId & 1) == 0 )
      {
        v4 = v233;
        goto LABEL_200;
      }
    }
    v146 = ServantStatusListViewItem__get_SvtId(v233, 0LL);
    v147 = BalanceConfig_TypeInfo;
    v148 = v146;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v147 = BalanceConfig_TypeInfo;
    }
    UserId = (int64_t)VoiceMaster__getEnableInfo(v226, v148, v147->static_fields->ServantIdHyde, v84, 0LL, 0, 0, 0LL);
    if ( !UserId )
      goto LABEL_255;
    v149 = UserId;
    if ( *(int *)(UserId + 24) >= 1 )
    {
      v150 = 0LL;
      v228 = UserId + 32;
      while ( 1 )
      {
        v151 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
        if ( !v151 )
          break;
        v152 = v151->fields._size;
        v153 = this;
        UserId = ServantStatusListViewItem__get_SvtId(v233, 0LL);
        v156 = UserId;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        }
        v157 = v83;
        if ( v150 >= *(unsigned int *)(v149 + 24) )
          goto LABEL_254;
        v158 = *(VoiceInfo_o **)(v228 + 8 * v150);
        ServantIdHyde = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
        v160 = (ServantStatusVoiceListViewItem_o *)sub_B0D974(ServantStatusVoiceListViewItem_TypeInfo, v154, v155);
        v161 = ServantIdHyde;
        v162 = (EventMissionProgressRequest_Argument_ProgressData_o *)v160;
        v83 = v157;
        ServantStatusVoiceListViewItem___ctor(v160, v152, v156, v161, limitCount, v158, v157, 0, 0, v218);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v151,
          v162,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v150;
        this = v153;
        if ( (__int64)v150 >= *(int *)(v149 + 24) )
          goto LABEL_155;
      }
LABEL_255:
      firstPriority[0] = v83;
      sub_B0D97C(UserId);
    }
LABEL_155:
    v4 = v233;
    v83 = v230 + 2;
    goto LABEL_156;
  }
LABEL_204:
  v189 = this->fields.itemList;
  if ( !v189 )
    goto LABEL_257;
  v190 = v189->fields._size;
  v191 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo,
                                                                                                   v52,
                                                                                                   v53);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v191,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
  v193 = v190 - 1;
  if ( (int)v190 - 1 >= 1 )
  {
    v194 = 0LL;
    v195 = v193;
    v196 = 5LL;
    svtIda = v193;
    do
    {
      v197 = this->fields.itemList;
      if ( !v197 )
        goto LABEL_257;
      if ( v194 >= (unsigned int)v197->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v198 = (ServantStatusVoiceListViewItem_o *)v197->fields._items->m_Items[v194];
      if ( !v198 )
        goto LABEL_257;
      v199 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v198->klass->_2.bitflags2 + 1) < (unsigned int)v199
        || (ServantStatusVoiceListViewItem_c *)v198->klass->_2.typeHierarchy[v199 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        goto LABEL_257;
      }
      UserId = (int64_t)ServantStatusVoiceListViewItem__get_OpenName(v198, v192);
      if ( UserId )
      {
        UserId = ServantStatusVoiceListViewItem__get_DispNum(v198, v192);
        if ( !(_DWORD)UserId )
        {
          if ( !v191 )
            goto LABEL_257;
          System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)v191,
            (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__);
          if ( (__int64)(v194 + 1) < v190 )
          {
            v201 = v196;
            while ( 1 )
            {
              v202 = v231->fields.itemList;
              if ( !v202 )
                break;
              if ( v202->fields._size <= (unsigned int)(v201 - 4) )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              v203 = (ServantStatusVoiceListViewItem_o *)*((_QWORD *)&v202->fields._items->obj.klass + v201);
              if ( !v203 )
                break;
              v204 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v203->klass->_2.bitflags2 + 1) < (unsigned int)v204
                || (ServantStatusVoiceListViewItem_c *)v203->klass->_2.typeHierarchy[v204 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                break;
              }
              OpenName = ServantStatusVoiceListViewItem__get_OpenName(v203, v192);
              v207 = ServantStatusVoiceListViewItem__get_OpenName(v198, v206);
              UserId = System_String__op_Equality(OpenName, v207, 0LL);
              if ( (UserId & 1) != 0 )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v191,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v203,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__);
              if ( (int)++v201 - 4 >= (int)v190 )
                goto LABEL_229;
            }
LABEL_257:
            sub_B0D97C(UserId);
          }
LABEL_229:
          v195 = svtIda;
          if ( v191->fields._size >= 1 )
          {
            ServantStatusVoiceListViewItem__SetNameNum(v198, 1, v200);
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v236,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v191,
              (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
            v208 = 2;
            v238 = *(System_Collections_Generic_List_Enumerator_T__o *)v236;
            while ( 1 )
            {
              v209 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                       &v238,
                       (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
              if ( !v209 )
                break;
              if ( !v238.fields.current
                || (v211 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
                    *(&v238.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v211)
                || (ServantStatusVoiceListViewItem_c *)v238.fields.current->klass->_2.typeHierarchy[v211 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                sub_B0D97C(v209);
              }
              v212 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v238.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v212 )
              {
                if ( (ServantStatusVoiceListViewItem_c *)v238.fields.current->klass->_2.typeHierarchy[v212 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
                  v213 = v238.fields.current;
                else
                  v213 = 0LL;
              }
              else
              {
                v213 = 0LL;
              }
              ServantStatusVoiceListViewItem__SetNameNum((ServantStatusVoiceListViewItem_o *)v213, v208++, v210);
            }
            *(_DWORD *)&v236[4 * v237++ + 24] = 1600;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v238,
              (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
            if ( v237 )
            {
              if ( *(_DWORD *)&v236[4 * v237 + 20] == 1600 )
                --v237;
            }
          }
        }
      }
      this = v231;
      ++v194;
      ++v196;
    }
    while ( (__int64)v194 < v195 );
  }
  explanationLabel = this->fields.explanationLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12086/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_257;
  UILabel__set_text(explanationLabel, (System_String_o *)UserId, 0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  UserId = (int64_t)LocalizationManager__Get(v219, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_257;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)UserId, 0LL);
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

  if ( (byte_4217749 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B0D8A4(&ServantStatusVoiceListViewItem_TypeInfo, v5);
    byte_4217749 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
  DataManager_o *Instance; // x0
  const MethodInfo *v11; // x3
  struct VoiceEntity_o *voiceEntity; // x8
  __int64 svtVoiceType; // x8
  __int64 v14; // x20
  struct VoiceEntity_o *v15; // x8
  System_String_o *v16; // x19
  System_String_o *v17; // x0
  __int64 v18; // x20
  int v19; // w8
  System_String_o *v20; // x19
  unsigned int v21; // w21
  __int64 v22; // x22
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v26; // x0

  if ( (byte_4217747 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v9);
    byte_4217747 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)ServantVoiceMaster__getEntity_29921476(
                                (ServantVoiceMaster_o *)Instance,
                                svtId,
                                limitCount,
                                v11);
  if ( !voiceInfo )
    goto LABEL_25;
  voiceEntity = voiceInfo->fields.voiceEntity;
  if ( !voiceEntity || !Instance )
    goto LABEL_25;
  svtVoiceType = voiceEntity->fields.svtVoiceType;
  if ( (unsigned int)svtVoiceType >= LODWORD(Instance->fields.datalist) )
  {
LABEL_26:
    v26 = sub_B0D9A8(Instance);
    sub_B0D948(v26, 0LL);
  }
  v14 = *((_QWORD *)&Instance->fields.lookup + svtVoiceType);
  if ( !v14 )
    return 0;
  Instance = (DataManager_o *)System_Int32__ToString((int)voiceInfo + 52, 0LL);
  v15 = voiceInfo->fields.voiceEntity;
  if ( !v15
    || (v16 = (System_String_o *)Instance, (Instance = (DataManager_o *)v15->fields.id) == 0LL)
    || (v17 = (System_String_o *)((__int64 (__fastcall *)(DataManager_o *, void *))Instance->klass->vtable._3_ToString.method)(
                                   Instance,
                                   Instance->klass[1]._1.image),
        Instance = (DataManager_o *)System_String__Concat_43852188(
                                      v16,
                                      (System_String_o *)StringLiteral_15952/*"_"*/,
                                      v17,
                                      0LL),
        (v18 = *(_QWORD *)(v14 + 32)) == 0) )
  {
LABEL_25:
    sub_B0D97C(Instance);
  }
  v19 = *(_DWORD *)(v18 + 24);
  if ( v19 < 1 )
    return 0;
  v20 = (System_String_o *)Instance;
  v21 = 0;
  while ( 1 )
  {
    if ( v21 >= v19 )
      goto LABEL_26;
    v22 = *(_QWORD *)(v18 + 8LL * (int)v21 + 32);
    if ( !v22 )
      goto LABEL_25;
    v23 = *(_QWORD *)(v22 + 64);
    if ( !v23 )
      goto LABEL_25;
    if ( !*(_DWORD *)(v23 + 24) )
      goto LABEL_26;
    v24 = *(_QWORD *)(v23 + 32);
    if ( !v24 )
      goto LABEL_25;
    Instance = (DataManager_o *)System_String__op_Equality(*(System_String_o **)(v24 + 16), v20, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( *(_DWORD *)(v22 + 80) )
        return 1;
    }
    v19 = *(_DWORD *)(v18 + 24);
    if ( (int)++v21 >= v19 )
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
  int64_t Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  struct ServantVoiceCond_array *servantVoiceConds; // x22
  int max_length; // w8
  int64_t v13; // x19
  unsigned int v14; // w23
  bool v15; // w24
  ServantVoiceCond_o *v16; // x9
  int32_t condType; // w8
  int value; // w26
  __int64 v19; // x20
  __int64 v20; // x21
  __int64 v22; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4217748 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4217748 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_29;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                        MasterData_WarQuestSelectionMaster,
                        Instance,
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
    v13 = Instance;
    v14 = 0;
    v15 = 1;
    while ( 1 )
    {
      if ( v14 >= max_length )
      {
        v22 = sub_B0D9A8(Instance);
        sub_B0D948(v22, 0LL);
      }
      v16 = servantVoiceConds->m_Items[v14];
      if ( !v16 )
        break;
      condType = v16->fields.condType;
      value = v16->fields.value;
      if ( condType == 20 || condType == 3 )
        v15 = 0;
      if ( condType == 3 || condType == 20 )
      {
        if ( !v13 )
          break;
        v19 = *(_QWORD *)(v13 + 100);
        v20 = *(_QWORD *)(v13 + 108);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v23.fields.currentCryptoKey = v19;
        *(_QWORD *)&v23.fields.fakeValue = v20;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v23, 0LL);
        if ( (int)Instance >= value )
          v15 = 1;
      }
      max_length = servantVoiceConds->max_length;
      if ( (int)++v14 >= max_length )
        return v15;
    }
LABEL_29:
    sub_B0D97C(Instance);
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
  ServantStatusVoiceListViewManager_o *v9; // x20
  struct ListViewItem_o *linkItem; // x22
  __int64 v11; // x10
  ServantStatusVoiceListViewManager_CallbackFunc_o *callbackFunc; // x21
  int v13; // w20
  int32_t Index; // w0
  int32_t v15; // w1

  v9 = this;
  if ( (byte_421774F & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_B0D8A4(&ServantStatusVoiceListViewItem_TypeInfo, obj);
    byte_421774F = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0LL
    || (v11 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v11)
    || (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
  {
    sub_B0D97C(this);
  }
  if ( LOBYTE(linkItem[1].fields.sortValue2B) )
  {
    callbackFunc = v9->fields.callbackFunc;
    v9->fields.callbackFunc = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v9->fields.callbackFunc,
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

  if ( (byte_421774E & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421774E = 1;
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
          sub_B0D97C(0LL);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
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
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_421774C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v11);
    sub_B0D8A4(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v12);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v13);
    byte_421774C = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusVoiceListViewObject__Init(
        (ServantStatusVoiceListViewObject_o *)current,
        mode,
        v19,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__RequestListObject_29923908(
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
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_421774D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v9);
    sub_B0D8A4(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v10);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v11);
    byte_421774D = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusVoiceListViewObject__Init(
        (ServantStatusVoiceListViewObject_o *)current,
        mode,
        v17,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusVoiceListViewManager__SetMode_29922968(this, mode, -1, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__SetMode_29922968(
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemList; // x0
  __int64 v17; // x11
  _BOOL8 v18; // x0
  const MethodInfo *v19; // x1
  int size; // w8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v21; // x19
  unsigned int v22; // w21
  ServantStatusVoiceListViewObject_o *v23; // x20
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  int32_t v29; // w8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v30; // x20
  int v31; // w8
  __int64 v32; // x23
  ServantStatusVoiceListViewObject_o *v33; // x21
  System_Action_o *v34; // x22
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-60h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_421774B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__, v12);
    sub_B0D8A4(&ServantStatusVoiceListViewItem_TypeInfo, v13);
    sub_B0D8A4(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v14);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v15);
    byte_421774B = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( mode == 2 )
  {
    itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_35;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v36,
      itemList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    for ( i = v36; ; BYTE1(i.fields.current[12].klass) = HIDWORD(i.fields.current[1].klass) == select )
    {
      v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v18 )
        break;
      if ( !i.fields.current )
        sub_B0D97C(v18);
      v17 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&i.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v17
        || (ServantStatusVoiceListViewItem_c *)i.fields.current->klass->_2.typeHierarchy[v17 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        sub_B0D97C(v18);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                v19);
    if ( !itemList )
      goto LABEL_35;
    size = itemList->fields._size;
    v21 = itemList;
    if ( size >= 1 )
    {
      v22 = 0;
      while ( 1 )
      {
        if ( size <= v22 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v23 = (ServantStatusVoiceListViewObject_o *)v21->fields._items->m_Items[v22];
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
      itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusVoiceListViewManager__get_ClippingObjectList(
                                                                                                  this,
                                                                                                  v25);
      if ( !itemList )
        goto LABEL_35;
      v29 = itemList->fields._size;
      v30 = itemList;
      if ( v29 < 1 )
      {
        this->fields.callbackCount = 1;
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
          0.2,
          0LL);
      }
      else
      {
        this->fields.callbackCount = v29;
        v31 = itemList->fields._size;
        if ( v31 >= 1 )
        {
          v32 = 0LL;
          while ( 1 )
          {
            if ( v31 <= (unsigned int)v32 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v33 = (ServantStatusVoiceListViewObject_o *)v30->fields._items->m_Items[v32];
            v34 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v27, v28);
            System_Action___ctor(v34, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
            if ( !v33 )
              break;
            v39 = UnityEngine_Vector3__get_zero(0LL);
            ServantStatusVoiceListViewObject__Init(
              v33,
              5,
              v34,
              v39.fields.x,
              *(UnityEngine_Vector3_o *)&v39.fields.y,
              v35);
            v31 = v30->fields._size;
            if ( (int)++v32 >= v31 )
              return;
          }
LABEL_35:
          sub_B0D97C(itemList);
        }
      }
    }
    else if ( mode == 1 )
    {
      ServantStatusVoiceListViewManager__RequestListObject_29923908(this, 3, v26);
    }
  }
}


void __fastcall ServantStatusVoiceListViewManager__SetMode_29923848(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusVoiceListViewManager__SetMode_29922968(this, mode, -1, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__SetObjectItem(
        ServantStatusVoiceListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusVoiceListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_421774A & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_B0D8A4(&ServantStatusVoiceListViewObject_TypeInfo, obj);
    byte_421774A = 1;
  }
  if ( !obj
    || (v6 = *(&ServantStatusVoiceListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantStatusVoiceListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantStatusVoiceListViewObject_TypeInfo )
  {
    sub_B0D97C(this);
  }
  initMode = v5->fields.initMode;
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

  if ( (byte_421773F & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, value);
    byte_421773F = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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

  if ( (byte_4217741 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4217741 = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
  ServantStatusVoiceListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *__fastcall ServantStatusVoiceListViewManager__get_ClippingObjectList(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  ServantStatusVoiceListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v17; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4217744 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4217744 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (ServantStatusVoiceListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        (UnityEngine_GameObject_o *)current,
                                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B0D97C(0LL);
      Item = (ListViewItem_o *)ServantStatusVoiceListViewObject__GetItem(Component_srcLineSprite, v17);
      if ( !Item )
        sub_B0D97C(0LL);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_23719204((ListViewManager_o *)this, Item, 0LL);
        if ( v20 )
        {
          if ( !v12 )
            sub_B0D97C(v20);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v12 )
          sub_B0D97C(Item);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v18,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *)v12;
}


System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *__fastcall ServantStatusVoiceListViewManager__get_ObjectList(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4217743 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4217743 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      if ( !v12 )
        sub_B0D97C(Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *)v12;
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

  if ( (byte_4217740 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, value);
    byte_4217740 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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

  if ( (byte_4217742 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4217742 = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
  ServantStatusVoiceListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager_CallbackFunc___ctor(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
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
  if ( (byte_4212279 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&ServantStatusVoiceListViewManager_ResultKind_TypeInfo, v9);
    byte_4212279 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(ServantStatusVoiceListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B0D848(this, v11, callback, object);
}


void __fastcall ServantStatusVoiceListViewManager_CallbackFunc__EndInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
        sub_B0D960(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B0D8D4(v22) & 1) == 0 )
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
      v24 = sub_B0D8CC(v22);
      v25 = sub_B0DCD0(v22);
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
            v18 = sub_AA67A0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B0D954(v17, v22);
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
            v16 = sub_AA67A0(v21, class_0, v10);
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