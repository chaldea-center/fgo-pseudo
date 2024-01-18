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
  __int64 v12; // x1
  signed int max_length; // w8
  VoiceMaster_o *v14; // x21
  unsigned int v15; // w23
  char v16; // w19
  ServantVoiceRelationEntity_o *v17; // x22
  __int64 v18; // x24
  __int64 v19; // x25
  DataManager_o *v20; // x24
  unsigned __int64 v21; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x25
  int32_t size; // w26
  __int64 v24; // x27
  __int64 v25; // x28
  VoiceInfo_o *v26; // x28
  int32_t v27; // w27
  int32_t v28; // w20
  ServantStatusVoiceListViewItem_o *v29; // x23
  __int64 v30; // x0
  const MethodInfo *v31; // [xsp+8h] [xbp-88h]
  VoiceMaster_o *v32; // [xsp+10h] [xbp-80h]
  ServantVoiceRelationEntity_array *v33; // [xsp+18h] [xbp-78h]
  int32_t ascendOrder; // [xsp+20h] [xbp-70h]
  unsigned int v35; // [xsp+24h] [xbp-6Ch]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_418B0AD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_VoiceMaster___, firstPriority);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&ServantStatusVoiceListViewItem_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_418B0AD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !relationList )
    goto LABEL_27;
  max_length = relationList->max_length;
  if ( max_length >= 1 )
  {
    v14 = (VoiceMaster_o *)Instance;
    v15 = 0;
    v16 = 1;
    ascendOrder = 0;
    v32 = (VoiceMaster_o *)Instance;
    v33 = relationList;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
LABEL_28:
        v30 = sub_B2C460(Instance);
        sub_B2C400(v30, 0LL);
      }
      v17 = relationList->m_Items[v15];
      if ( !v17 )
        goto LABEL_27;
      v19 = *(_QWORD *)&v17->fields.relationSvtId.fields.currentCryptoKey;
      v18 = *(_QWORD *)&v17->fields.relationSvtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v39.fields.currentCryptoKey = v19;
      *(_QWORD *)&v39.fields.fakeValue = v18;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v39, 0LL);
      if ( !v14 )
        goto LABEL_27;
      Instance = (DataManager_o *)VoiceMaster__getEnableInfo(v14, svtId, (int32_t)Instance, 0, 0LL, 0, 0, 0LL);
      v20 = Instance;
      if ( (v16 & 1) == 0 && ascendOrder != v17->fields.ascendOrder )
        ++*firstPriority;
      v35 = v15;
      if ( !Instance )
        goto LABEL_27;
      ascendOrder = v17->fields.ascendOrder;
      if ( SLODWORD(Instance->fields.datalist) >= 1 )
        break;
LABEL_25:
      v14 = v32;
      relationList = v33;
      v16 = 0;
      max_length = v33->max_length;
      v15 = v35 + 1;
      if ( (int)(v35 + 1) >= max_length )
        return;
    }
    v21 = 0LL;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      v25 = *(_QWORD *)&v17->fields.relationSvtId.fields.currentCryptoKey;
      v24 = *(_QWORD *)&v17->fields.relationSvtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v40.fields.currentCryptoKey = v25;
      *(_QWORD *)&v40.fields.fakeValue = v24;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v40, 0LL);
      if ( v21 >= LODWORD(v20->fields.datalist) )
        goto LABEL_28;
      v26 = (VoiceInfo_o *)*((_QWORD *)&v20->fields.lookup + v21);
      v27 = (int)Instance;
      v28 = *firstPriority;
      v29 = (ServantStatusVoiceListViewItem_o *)sub_B2C42C(ServantStatusVoiceListViewItem_TypeInfo);
      ServantStatusVoiceListViewItem___ctor(v29, size, svtId, v27, 0, v26, v28, 0, 0, v31);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (__int64)++v21 >= SLODWORD(v20->fields.datalist) )
        goto LABEL_25;
    }
LABEL_27:
    sub_B2C434(Instance, v12);
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
  const MethodInfo *v47; // x1
  int64_t v48; // x19
  VoiceMaster_o *v49; // x24
  System_Collections_Generic_List_VoiceCondType_Type__o *v50; // x19
  System_Int32_array *v51; // x9
  __int64 v52; // x8
  unsigned __int64 v53; // x10
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x19
  int32_t maxLimitCount; // w20
  System_Int32_array *VoiceLimitCountList; // x20
  const MethodInfo *v57; // x5
  ServantVoiceRelationEntity_array *v58; // x19
  int32_t v59; // w0
  const MethodInfo *v60; // x4
  ServantVoiceRelationEntity_array *v61; // x19
  int32_t v62; // w0
  const MethodInfo *v63; // x4
  __int64 v64; // x8
  int32_t v65; // w19
  unsigned __int64 v66; // x9
  int32_t v67; // w0
  BalanceConfig_c *v68; // x8
  int32_t v69; // w19
  __int64 v70; // x1
  int64_t v71; // x23
  unsigned __int64 v72; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v73; // x20
  int32_t v74; // w24
  int32_t v75; // w19
  VoiceInfo_o *v76; // x26
  int32_t ServantIdMashu3; // w27
  ServantStatusVoiceListViewItem_o *v78; // x28
  int32_t v79; // w28
  int32_t v80; // w22
  __int64 v81; // x0
  __int64 v82; // x1
  const MethodInfo *v83; // x4
  int v84; // w8
  int64_t v85; // x26
  unsigned int i; // w25
  int64_t v87; // x23
  VoiceInfo_o *v88; // x3
  VoiceInfo_o **v89; // x23
  VoiceInfo_o *v90; // t1
  struct VoiceEntity_o *voiceEntity; // x24
  int32_t condType; // w9
  int v93; // w28
  _BOOL4 v94; // w8
  const MethodInfo *v95; // x3
  const MethodInfo *v96; // x3
  char v97; // w22
  _BOOL8 v98; // x0
  const MethodInfo *v99; // x1
  Il2CppObject *v100; // x27
  __int64 v101; // x10
  Il2CppClass *v102; // x8
  __int64 v103; // x0
  __int64 v104; // x1
  struct VoiceEntity_o *v105; // x8
  int32_t v106; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x19
  __int64 v108; // x1
  System_String_o *v109; // x2
  __int64 v110; // x0
  int32_t v111; // w5
  const MethodInfo *v112; // x6
  struct VoiceEntity_o *v113; // x8
  int32_t v114; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v115; // x19
  System_String_o *v116; // x2
  int32_t v117; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x20
  bool v119; // w28
  bool v120; // w21
  int32_t size; // w24
  char v122; // w19
  VoiceInfo_o *v123; // x23
  int32_t v124; // w27
  bool v125; // w19
  ServantStatusVoiceListViewItem_o *v126; // x28
  _BOOL8 v127; // x0
  const MethodInfo *v128; // x1
  Il2CppObject *current; // x27
  __int64 v130; // x10
  Il2CppClass *klass; // x8
  __int64 v132; // x0
  int32_t v133; // w5
  const MethodInfo *v134; // x6
  __int64 v135; // x0
  __int64 v136; // x0
  __int64 v137; // x0
  int32_t v138; // w19
  BalanceConfig_c *v139; // x8
  WarGroupEntity_o *v140; // x27
  __int64 v141; // x1
  UserServantCollectionMaster_o *v142; // x19
  int64_t v143; // x20
  int32_t v144; // w0
  BalanceConfig_c *v145; // x8
  int32_t v146; // w19
  int64_t v147; // x27
  unsigned __int64 v148; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v149; // x20
  int32_t v150; // w24
  ServantStatusVoiceListViewManager_o *v151; // x25
  int32_t v152; // w19
  int32_t v153; // w21
  VoiceInfo_o *v154; // x23
  int32_t ServantIdHyde; // w28
  ServantStatusVoiceListViewItem_o *v156; // x0
  int32_t v157; // w3
  EventMissionProgressRequest_Argument_ProgressData_o *v158; // x26
  BalanceConfig_c *v159; // x8
  int v160; // w19
  int32_t v161; // w0
  BalanceConfig_c *v162; // x8
  int32_t v163; // w19
  VoiceInfo_array *EnableInfo; // x0
  __int64 v165; // x1
  VoiceInfo_array *v166; // x27
  unsigned __int64 v167; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v168; // x20
  int32_t v169; // w24
  int32_t v170; // w19
  VoiceInfo_o *v171; // x23
  int32_t ServantIdMashu2; // w26
  ServantStatusVoiceListViewItem_o *v173; // x28
  int64_t v174; // x0
  BalanceConfig_c *v175; // x8
  int64_t v176; // x20
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t MashuTdGradeUpQuestId; // w19
  int32_t MashuTdGradeUpQuestPhase; // w23
  int32_t svtVoiceId; // w19
  ServantVoiceRelationEntity_array *v181; // x19
  int32_t v182; // w0
  const MethodInfo *v183; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v184; // x8
  signed __int64 v185; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v186; // x20
  int v187; // w8
  unsigned __int64 v188; // x24
  signed __int64 v189; // x22
  __int64 v190; // x25
  struct System_Collections_Generic_List_ListViewItem__o *v191; // x19
  ServantStatusVoiceListViewItem_o *v192; // x21
  __int64 v193; // x10
  const MethodInfo *v194; // x2
  __int64 v195; // x26
  struct System_Collections_Generic_List_ListViewItem__o *v196; // x19
  ServantStatusVoiceListViewItem_o *v197; // x22
  __int64 v198; // x10
  System_String_o *OpenName; // x19
  const MethodInfo *v200; // x1
  System_String_o *v201; // x0
  int32_t v202; // w21
  _BOOL8 v203; // x0
  __int64 v204; // x1
  const MethodInfo *v205; // x2
  __int64 v206; // x11
  __int64 v207; // x11
  Il2CppObject *v208; // x0
  UILabel_o *explanationLabel; // x19
  UILabel_o *emptyMessageLabel; // x19
  __int64 v211; // x0
  bool voiceLabelSpec; // [xsp+0h] [xbp-170h]
  const MethodInfo *v213; // [xsp+8h] [xbp-168h]
  System_String_o *v214; // [xsp+10h] [xbp-160h]
  UserServantCollectionEntity_o *EntityDefinitely; // [xsp+18h] [xbp-158h]
  unsigned __int64 v217; // [xsp+28h] [xbp-148h]
  ServantLimitAddMaster_o *v218; // [xsp+30h] [xbp-140h]
  System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList; // [xsp+38h] [xbp-138h]
  System_Int32_array *v220; // [xsp+40h] [xbp-130h]
  VoiceMaster_o *v221; // [xsp+48h] [xbp-128h]
  unsigned __int64 v222; // [xsp+50h] [xbp-120h]
  int64_t v223; // [xsp+58h] [xbp-118h]
  VoicePlayCondMaster_o *v224; // [xsp+60h] [xbp-110h]
  int32_t v225; // [xsp+6Ch] [xbp-104h]
  ServantStatusVoiceListViewManager_o *v226; // [xsp+70h] [xbp-100h]
  int32_t limitCount; // [xsp+7Ch] [xbp-F4h]
  ServantStatusListViewItem_o *v228; // [xsp+80h] [xbp-F0h]
  int32_t svtId; // [xsp+88h] [xbp-E8h]
  signed __int64 svtIda; // [xsp+88h] [xbp-E8h]
  _BYTE v231[44]; // [xsp+90h] [xbp-E0h] BYREF
  int v232; // [xsp+BCh] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_T__o v233; // [xsp+C0h] [xbp-B0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+D8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v235; // [xsp+E0h] [xbp-90h] BYREF
  ServantVoiceRelationEntity_array *afterRelationList; // [xsp+F8h] [xbp-78h] BYREF
  ServantVoiceRelationEntity_array *sameRelationList; // [xsp+100h] [xbp-70h] BYREF
  ServantVoiceRelationEntity_array *beforeRelationList; // [xsp+108h] [xbp-68h] BYREF
  int32_t firstPriority[3]; // [xsp+114h] [xbp-5Ch] BYREF

  v4 = mainInfo;
  if ( (byte_418B0AE & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, mainInfo);
    sub_B2C35C(&CondType_TypeInfo, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_VoiceMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMaster_VoicePlayCondMaster___, v13);
    sub_B2C35C(&DataManager_TypeInfo, v14);
    sub_B2C35C(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string__GetEntity__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__get_Current__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_CondType_Kind__Add__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v28);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__, v29);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v30);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__get_Count__, v31);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v32);
    sub_B2C35C(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v33);
    sub_B2C35C(&System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo, v34);
    sub_B2C35C(&LocalizationManager_TypeInfo, v35);
    sub_B2C35C(&NetworkManager_TypeInfo, v36);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v37);
    sub_B2C35C(&ServantStatusVoiceListViewItem_TypeInfo, v38);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39);
    sub_B2C35C(&TutorialFlag_TypeInfo, v40);
    sub_B2C35C(&StringLiteral_2225/*"B050"*/, v41);
    sub_B2C35C(&StringLiteral_15117/*"VOICE_EMPTY_MESSAGE"*/, v42);
    sub_B2C35C(&StringLiteral_12048/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, v43);
    byte_418B0AE = 1;
  }
  firstPriority[0] = 0;
  sameRelationList = 0LL;
  beforeRelationList = 0LL;
  afterRelationList = 0LL;
  memset(&v235, 0, sizeof(v235));
  entity = 0LL;
  v44 = StringLiteral_15117/*"VOICE_EMPTY_MESSAGE"*/;
  memset(&v233, 0, sizeof(v233));
  v232 = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.execObjectExtraFlag = 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v4 )
    goto LABEL_257;
  v48 = UserId;
  UserId = ServantStatusListViewItem__get_SvtId(v4, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_257;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(Master_WarQuestSelectionMaster, v48, UserId, 0LL);
  v49 = (VoiceMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_VoiceMaster___);
  v224 = (VoicePlayCondMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v218 = (ServantLimitAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  firstPriority[0] = 0;
  v50 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v50,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v50 )
    goto LABEL_257;
  disableCondTypeList = (System_Collections_Generic_List_CondType_Kind__o *)v50;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v50,
    81,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_CondType_Kind__Add__);
  v51 = changeSvtVoiceIdList;
  if ( !changeSvtVoiceIdList )
    goto LABEL_257;
  v52 = *(_QWORD *)&changeSvtVoiceIdList->max_length;
  v214 = (System_String_o *)v44;
  v226 = this;
  if ( (int)v52 >= 1 )
  {
    v53 = 0LL;
    v228 = v4;
    v221 = v49;
    while ( 1 )
    {
      if ( v53 >= (unsigned int)v52 )
        goto LABEL_253;
      v217 = v53;
      svtId = v51->m_Items[v53 + 1];
      UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !UserId )
        goto LABEL_257;
      MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)UserId,
                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
      UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !UserId )
        goto LABEL_257;
      UserId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)UserId,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !UserId )
        goto LABEL_257;
      ServantVoiceRelationMaster__GetRelationList_31382592(
        (ServantVoiceRelationMaster_o *)UserId,
        &beforeRelationList,
        &sameRelationList,
        &afterRelationList,
        svtId,
        v57);
      v58 = beforeRelationList;
      v59 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, firstPriority, v58, v59, v60);
      v61 = sameRelationList;
      ++firstPriority[0];
      v62 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, firstPriority, v61, v62, v63);
      if ( !VoiceLimitCountList )
        goto LABEL_257;
      v64 = *(_QWORD *)&VoiceLimitCountList->max_length;
      v65 = firstPriority[0];
      if ( (int)v64 >= 1 )
        break;
      v79 = firstPriority[0];
LABEL_203:
      v181 = afterRelationList;
      firstPriority[0] = v79;
      v182 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, firstPriority, v181, v182, v183);
      v51 = changeSvtVoiceIdList;
      LODWORD(v52) = changeSvtVoiceIdList->max_length;
      v53 = v217 + 1;
      if ( (__int64)(v217 + 1) >= (int)v52 )
        goto LABEL_204;
    }
    v66 = 0LL;
    v220 = VoiceLimitCountList;
    while ( 1 )
    {
      if ( v66 >= (unsigned int)v64 )
      {
        firstPriority[0] = v65;
        goto LABEL_253;
      }
      v80 = VoiceLimitCountList->m_Items[v66 + 1];
      v222 = v66;
      v81 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
      if ( !v49 )
      {
        firstPriority[0] = v65;
        sub_B2C434(v81, v82);
      }
      v225 = v65;
      UserId = (int64_t)VoiceMaster__getEnableInfo(v49, v81, svtId, v80, disableCondTypeList, 0, 0, 0LL);
      if ( !UserId )
        goto LABEL_251;
      v84 = *(_DWORD *)(UserId + 24);
      v85 = UserId;
      limitCount = v80;
      if ( v84 >= 1 )
      {
        for ( i = 0; (int)i < v84; ++i )
        {
          if ( i >= v84 )
          {
LABEL_252:
            firstPriority[0] = v225;
            goto LABEL_253;
          }
          v87 = v85 + 8LL * (int)i;
          v90 = *(VoiceInfo_o **)(v87 + 32);
          v89 = (VoiceInfo_o **)(v87 + 32);
          v88 = v90;
          if ( !v90 )
            goto LABEL_251;
          voiceEntity = v88->fields.voiceEntity;
          if ( v80 > 10 )
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
              v93 = 1;
            }
            else
            {
              UserId = ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                         (ServantStatusVoiceListViewManager_o *)UserId,
                         svtId,
                         v80,
                         v88,
                         v83);
              if ( (UserId & 1) != 0 )
              {
                if ( i >= *(_DWORD *)(v85 + 24) )
                  goto LABEL_252;
                UserId = ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                           (ServantStatusVoiceListViewManager_o *)UserId,
                           svtId,
                           *v89,
                           v96);
                if ( (UserId & 1) == 0 )
                  goto LABEL_100;
                goto LABEL_62;
              }
              UserId = (int64_t)this->fields.itemList;
              if ( !UserId )
                goto LABEL_251;
              System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)v231,
                (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserId,
                (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
              v235 = *(System_Collections_Generic_List_Enumerator_T__o *)v231;
              do
              {
                v127 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                         &v235,
                         (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                if ( !v127 )
                {
                  v93 = 1;
                  goto LABEL_116;
                }
                current = v235.fields.current;
                if ( !v235.fields.current
                  || (v130 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
                      *(&v235.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v130)
                  || (ServantStatusVoiceListViewItem_c *)v235.fields.current->klass->_2.typeHierarchy[v130 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                {
                  sub_B2C434(v127, v128);
                }
                klass = v235.fields.current[10].klass;
                if ( !klass )
                  sub_B2C434(v127, v128);
              }
              while ( HIDWORD(klass->_1.namespaze) != 2
                   || LODWORD(klass->_1.this_arg.data) != 7
                   || HIDWORD(klass->_1.this_arg.data) != voiceEntity->fields.condValue
                   || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                        (ServantStatusVoiceListViewItem_o *)v235.fields.current,
                        v128) != svtId );
              v132 = ServantStatusListViewItem__get_SvtId(v228, 0LL);
              if ( i >= *(_DWORD *)(v85 + 24) )
              {
                v137 = sub_B2C460(v132);
                sub_B2C400(v137, 0LL);
              }
              ServantStatusVoiceListViewItem__SetLimitCount(
                (ServantStatusVoiceListViewItem_o *)current,
                v132,
                svtId,
                v80,
                *v89,
                v133,
                v134);
              v93 = 0;
LABEL_116:
              v4 = v228;
              *(_DWORD *)&v231[4 * v232++ + 24] = 701;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                &v235,
                (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
              if ( v232 && *(_DWORD *)&v231[4 * v232 + 20] == 701 )
              {
                --v232;
                if ( !v93 )
                  goto LABEL_100;
                goto LABEL_88;
              }
            }
            condType = voiceEntity->fields.condType;
          }
          else
          {
            v93 = 1;
          }
          v94 = v93 != 0;
          if ( condType != 18 )
            goto LABEL_87;
          if ( i >= *(_DWORD *)(v85 + 24) )
            goto LABEL_252;
          UserId = ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                     (ServantStatusVoiceListViewManager_o *)UserId,
                     svtId,
                     v80,
                     *v89,
                     v83);
          if ( (UserId & 1) == 0 )
          {
            UserId = (int64_t)this->fields.itemList;
            if ( !UserId )
              goto LABEL_251;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v231,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserId,
              (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v235 = *(System_Collections_Generic_List_Enumerator_T__o *)v231;
            while ( 1 )
            {
              v98 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v235,
                      (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v98 )
                break;
              v100 = v235.fields.current;
              if ( !v235.fields.current
                || (v101 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
                    *(&v235.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v101)
                || (ServantStatusVoiceListViewItem_c *)v235.fields.current->klass->_2.typeHierarchy[v101 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                sub_B2C434(v98, v99);
              }
              v102 = v235.fields.current[10].klass;
              if ( !v102 )
                sub_B2C434(v98, v99);
              if ( HIDWORD(v102->_1.namespaze) == 2
                && LODWORD(v102->_1.this_arg.data) == 18
                && ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                     (ServantStatusVoiceListViewItem_o *)v235.fields.current,
                     v99) == svtId )
              {
                v103 = ServantStatusListViewItem__get_SvtId(v228, 0LL);
                if ( i >= *(_DWORD *)(v85 + 24) )
                {
                  v135 = sub_B2C460(v103);
                  sub_B2C400(v135, 0LL);
                }
                if ( !*v89 )
                  sub_B2C434(v103, v104);
                v105 = (*v89)->fields.voiceEntity;
                if ( !v105 )
                  sub_B2C434(v103, v104);
                v106 = v103;
                id = v105->fields.id;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                }
                v109 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(id, 0LL);
                if ( !v224 )
                  sub_B2C434(0LL, v108);
                if ( !VoicePlayCondMaster__isVoiceCond(v224, v106, v109, 81, 0LL) )
                {
                  v110 = ServantStatusListViewItem__get_SvtId(v228, 0LL);
                  if ( i >= *(_DWORD *)(v85 + 24) )
                  {
                    v136 = sub_B2C460(v110);
                    sub_B2C400(v136, 0LL);
                  }
                  ServantStatusVoiceListViewItem__SetLimitCount(
                    (ServantStatusVoiceListViewItem_o *)v100,
                    v110,
                    svtId,
                    v80,
                    *v89,
                    v111,
                    v112);
                  v93 = 0;
                }
                break;
              }
            }
            v4 = v228;
            *(_DWORD *)&v231[4 * v232++ + 24] = 701;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v235,
              (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
            v94 = v93 != 0;
            if ( v232 && *(_DWORD *)&v231[4 * v232 + 20] == 701 )
            {
              --v232;
              if ( !v93 )
                goto LABEL_100;
            }
            else
            {
LABEL_87:
              if ( !v94 )
                goto LABEL_100;
            }
LABEL_88:
            v97 = 0;
            goto LABEL_89;
          }
          if ( i >= *(_DWORD *)(v85 + 24) )
            goto LABEL_252;
          UserId = ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                     (ServantStatusVoiceListViewManager_o *)UserId,
                     svtId,
                     *v89,
                     v95);
          if ( !v93 || (UserId & 1) == 0 )
            goto LABEL_100;
LABEL_62:
          v97 = 1;
LABEL_89:
          UserId = ServantStatusListViewItem__get_SvtId(v4, 0LL);
          if ( i >= *(_DWORD *)(v85 + 24) )
            goto LABEL_252;
          if ( !*v89 )
            goto LABEL_251;
          v113 = (*v89)->fields.voiceEntity;
          if ( !v113 )
            goto LABEL_251;
          v114 = UserId;
          v115 = v113->fields.id;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v116 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(v115, 0LL);
          UserId = (int64_t)v224;
          if ( !v224 )
            goto LABEL_251;
          UserId = VoicePlayCondMaster__isVoiceCond(v224, v114, v116, 81, 0LL);
          if ( !voiceEntity )
            goto LABEL_251;
          v117 = voiceEntity->fields.condType;
          itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
          v119 = v117 == 18;
          v120 = v117 == 7;
          if ( !itemList )
            goto LABEL_251;
          size = itemList->fields._size;
          v122 = UserId;
          UserId = ServantStatusListViewItem__get_SvtId(v4, 0LL);
          if ( i >= *(_DWORD *)(v85 + 24) )
            goto LABEL_252;
          v123 = *v89;
          v124 = UserId;
          v125 = v122 & (v119 || v120);
          voiceLabelSpec = v97;
          v80 = limitCount;
          v126 = (ServantStatusVoiceListViewItem_o *)sub_B2C42C(ServantStatusVoiceListViewItem_TypeInfo);
          ServantStatusVoiceListViewItem___ctor(
            v126,
            size,
            v124,
            svtId,
            limitCount,
            v123,
            v225,
            v125,
            voiceLabelSpec,
            v213);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            itemList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v126,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          this = v226;
          v4 = v228;
LABEL_100:
          v84 = *(_DWORD *)(v85 + 24);
        }
      }
      v79 = v225 + 1;
      v138 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
      v139 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v139 = BalanceConfig_TypeInfo;
      }
      v49 = v221;
      if ( v138 == v139->static_fields->ServantIdJekyll )
        break;
      UserId = ServantStatusListViewItem__get_SvtId(v4, 0LL);
      v159 = BalanceConfig_TypeInfo;
      v160 = UserId;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v159 = BalanceConfig_TypeInfo;
      }
      if ( v160 == v159->static_fields->ServantIdMashu1 )
      {
        if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TutorialFlag_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        }
        if ( TutorialFlag__Get_28617756(115, 0LL) )
        {
          v161 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
          v162 = BalanceConfig_TypeInfo;
          v163 = v161;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v162 = BalanceConfig_TypeInfo;
          }
          v153 = v225 + 1;
          EnableInfo = VoiceMaster__getEnableInfo(v221, v163, v162->static_fields->ServantIdMashu2, v80, 0LL, 0, 0, 0LL);
          if ( !EnableInfo )
          {
LABEL_256:
            firstPriority[0] = v225 + 1;
            sub_B2C434(EnableInfo, v165);
          }
          v166 = EnableInfo;
          if ( (int)EnableInfo->max_length >= 1 )
          {
            v167 = 0LL;
            while ( 1 )
            {
              v168 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v226->fields.itemList;
              if ( !v168 )
                goto LABEL_256;
              v169 = v168->fields._size;
              UserId = ServantStatusListViewItem__get_SvtId(v228, 0LL);
              v170 = UserId;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              }
              if ( v167 >= v166->max_length )
                break;
              v171 = v166->m_Items[v167];
              ServantIdMashu2 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu2;
              v173 = (ServantStatusVoiceListViewItem_o *)sub_B2C42C(ServantStatusVoiceListViewItem_TypeInfo);
              ServantStatusVoiceListViewItem___ctor(
                v173,
                v169,
                v170,
                ServantIdMashu2,
                limitCount,
                v171,
                v153,
                0,
                0,
                v213);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v168,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v173,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
              if ( (__int64)++v167 >= (int)v166->max_length )
                goto LABEL_177;
            }
LABEL_254:
            firstPriority[0] = v153;
LABEL_253:
            v211 = sub_B2C460(UserId);
            sub_B2C400(v211, 0LL);
          }
LABEL_177:
          v4 = v228;
          v80 = limitCount;
          this = v226;
          v79 = v225 + 2;
        }
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v174 = NetworkManager__get_UserId(0LL);
        v175 = BalanceConfig_TypeInfo;
        v176 = v174;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v49 = v221;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v175 = BalanceConfig_TypeInfo;
          }
        }
        else
        {
          v49 = v221;
        }
        static_fields = v175->static_fields;
        MashuTdGradeUpQuestId = static_fields->MashuTdGradeUpQuestId;
        MashuTdGradeUpQuestPhase = static_fields->MashuTdGradeUpQuestPhase;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        UserId = CondType__IsQuestPhaseClear(v176, MashuTdGradeUpQuestId, MashuTdGradeUpQuestPhase, -1, 0, 0LL);
        if ( (UserId & 1) != 0 )
        {
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          }
          UserId = (int64_t)v218;
          if ( !v218 )
            goto LABEL_255;
          UserId = ServantLimitAddMaster__TryGetEntity(
                     v218,
                     &entity,
                     BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                     v80,
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
              v67 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
              v68 = BalanceConfig_TypeInfo;
              v69 = v67;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v68 = BalanceConfig_TypeInfo;
              }
              v225 = v79;
              UserId = (int64_t)VoiceMaster__getEnableInfo(
                                  v49,
                                  v69,
                                  v68->static_fields->ServantIdMashu3,
                                  v80,
                                  0LL,
                                  0,
                                  0,
                                  0LL);
              if ( !UserId )
                goto LABEL_251;
              v71 = UserId;
              if ( *(int *)(UserId + 24) >= 1 )
              {
                v72 = 0LL;
                while ( 1 )
                {
                  v73 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
                  if ( !v73 )
                    break;
                  v74 = v73->fields._size;
                  UserId = ServantStatusListViewItem__get_SvtId(v4, 0LL);
                  v75 = UserId;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  }
                  if ( v72 >= *(unsigned int *)(v71 + 24) )
                    goto LABEL_252;
                  v76 = *(VoiceInfo_o **)(v71 + 32 + 8 * v72);
                  ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
                  v78 = (ServantStatusVoiceListViewItem_o *)sub_B2C42C(ServantStatusVoiceListViewItem_TypeInfo);
                  ServantStatusVoiceListViewItem___ctor(
                    v78,
                    v74,
                    v75,
                    ServantIdMashu3,
                    limitCount,
                    v76,
                    v225,
                    0,
                    0,
                    v213);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v73,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v78,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                  v4 = v228;
                  if ( (__int64)++v72 >= *(int *)(v71 + 24) )
                    goto LABEL_36;
                }
LABEL_251:
                firstPriority[0] = v225;
                sub_B2C434(UserId, v70);
              }
LABEL_36:
              v79 = v225 + 1;
LABEL_156:
              v49 = v221;
            }
          }
        }
      }
LABEL_200:
      VoiceLimitCountList = v220;
      v65 = v79;
      LODWORD(v64) = v220->max_length;
      v66 = v222 + 1;
      if ( (__int64)(v222 + 1) >= (int)v64 )
        goto LABEL_203;
    }
    v140 = DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
             (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)v221,
             (System_String_o *)StringLiteral_2225/*"B050"*/,
             (const MethodInfo_24E4520 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string__GetEntity__);
    UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !UserId )
      goto LABEL_255;
    v142 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)UserId,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v143 = NetworkManager__get_UserId(0LL);
    UserId = ServantStatusListViewItem__get_SvtId(v228, 0LL);
    if ( !v142 )
      goto LABEL_255;
    UserId = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v142, v143, UserId, 0LL);
    if ( !v140 )
      goto LABEL_255;
    if ( v140[1].fields.id == 17 )
    {
      if ( !UserId )
        goto LABEL_255;
      UserId = UserServantCollectionEntity__IsPlayed((UserServantCollectionEntity_o *)UserId, v140[1].fields.warId, 0LL);
      if ( (UserId & 1) == 0 )
      {
        v4 = v228;
        goto LABEL_200;
      }
    }
    v144 = ServantStatusListViewItem__get_SvtId(v228, 0LL);
    v145 = BalanceConfig_TypeInfo;
    v146 = v144;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v145 = BalanceConfig_TypeInfo;
    }
    UserId = (int64_t)VoiceMaster__getEnableInfo(v221, v146, v145->static_fields->ServantIdHyde, v80, 0LL, 0, 0, 0LL);
    if ( !UserId )
      goto LABEL_255;
    v147 = UserId;
    if ( *(int *)(UserId + 24) >= 1 )
    {
      v148 = 0LL;
      v223 = UserId + 32;
      while ( 1 )
      {
        v149 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
        if ( !v149 )
          break;
        v150 = v149->fields._size;
        v151 = this;
        UserId = ServantStatusListViewItem__get_SvtId(v228, 0LL);
        v152 = UserId;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        }
        v153 = v79;
        if ( v148 >= *(unsigned int *)(v147 + 24) )
          goto LABEL_254;
        v154 = *(VoiceInfo_o **)(v223 + 8 * v148);
        ServantIdHyde = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
        v156 = (ServantStatusVoiceListViewItem_o *)sub_B2C42C(ServantStatusVoiceListViewItem_TypeInfo);
        v157 = ServantIdHyde;
        v158 = (EventMissionProgressRequest_Argument_ProgressData_o *)v156;
        v79 = v153;
        ServantStatusVoiceListViewItem___ctor(v156, v150, v152, v157, limitCount, v154, v153, 0, 0, v213);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v149,
          v158,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v148;
        this = v151;
        if ( (__int64)v148 >= *(int *)(v147 + 24) )
          goto LABEL_155;
      }
LABEL_255:
      firstPriority[0] = v79;
      sub_B2C434(UserId, v141);
    }
LABEL_155:
    v4 = v228;
    v79 = v225 + 2;
    goto LABEL_156;
  }
LABEL_204:
  v184 = this->fields.itemList;
  if ( !v184 )
    goto LABEL_257;
  v185 = v184->fields._size;
  v186 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v186,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
  v187 = v185 - 1;
  if ( (int)v185 - 1 >= 1 )
  {
    v188 = 0LL;
    v189 = v187;
    v190 = 5LL;
    svtIda = v187;
    do
    {
      v191 = this->fields.itemList;
      if ( !v191 )
        goto LABEL_257;
      if ( v188 >= (unsigned int)v191->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v192 = (ServantStatusVoiceListViewItem_o *)v191->fields._items->m_Items[v188];
      if ( !v192 )
        goto LABEL_257;
      v193 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v192->klass->_2.bitflags2 + 1) < (unsigned int)v193
        || (ServantStatusVoiceListViewItem_c *)v192->klass->_2.typeHierarchy[v193 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        goto LABEL_257;
      }
      UserId = (int64_t)ServantStatusVoiceListViewItem__get_OpenName(v192, v47);
      if ( UserId )
      {
        UserId = ServantStatusVoiceListViewItem__get_DispNum(v192, v47);
        if ( !(_DWORD)UserId )
        {
          if ( !v186 )
            goto LABEL_257;
          System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)v186,
            (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__);
          if ( (__int64)(v188 + 1) < v185 )
          {
            v195 = v190;
            while ( 1 )
            {
              v196 = v226->fields.itemList;
              if ( !v196 )
                break;
              if ( v196->fields._size <= (unsigned int)(v195 - 4) )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              v197 = (ServantStatusVoiceListViewItem_o *)*((_QWORD *)&v196->fields._items->obj.klass + v195);
              if ( !v197 )
                break;
              v198 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v197->klass->_2.bitflags2 + 1) < (unsigned int)v198
                || (ServantStatusVoiceListViewItem_c *)v197->klass->_2.typeHierarchy[v198 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                break;
              }
              OpenName = ServantStatusVoiceListViewItem__get_OpenName(v197, v47);
              v201 = ServantStatusVoiceListViewItem__get_OpenName(v192, v200);
              UserId = System_String__op_Equality(OpenName, v201, 0LL);
              if ( (UserId & 1) != 0 )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v186,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v197,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__);
              if ( (int)++v195 - 4 >= (int)v185 )
                goto LABEL_229;
            }
LABEL_257:
            sub_B2C434(UserId, v47);
          }
LABEL_229:
          v189 = svtIda;
          if ( v186->fields._size >= 1 )
          {
            ServantStatusVoiceListViewItem__SetNameNum(v192, 1, v194);
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v231,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v186,
              (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
            v202 = 2;
            v233 = *(System_Collections_Generic_List_Enumerator_T__o *)v231;
            while ( 1 )
            {
              v203 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                       &v233,
                       (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
              if ( !v203 )
                break;
              if ( !v233.fields.current
                || (v206 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
                    *(&v233.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v206)
                || (ServantStatusVoiceListViewItem_c *)v233.fields.current->klass->_2.typeHierarchy[v206 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                sub_B2C434(v203, v204);
              }
              v207 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v233.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v207 )
              {
                if ( (ServantStatusVoiceListViewItem_c *)v233.fields.current->klass->_2.typeHierarchy[v207 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
                  v208 = v233.fields.current;
                else
                  v208 = 0LL;
              }
              else
              {
                v208 = 0LL;
              }
              ServantStatusVoiceListViewItem__SetNameNum((ServantStatusVoiceListViewItem_o *)v208, v202++, v205);
            }
            *(_DWORD *)&v231[4 * v232++ + 24] = 1600;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v233,
              (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
            if ( v232 )
            {
              if ( *(_DWORD *)&v231[4 * v232 + 20] == 1600 )
                --v232;
            }
          }
        }
      }
      this = v226;
      ++v188;
      ++v190;
    }
    while ( (__int64)v188 < v189 );
  }
  explanationLabel = this->fields.explanationLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12048/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_257;
  UILabel__set_text(explanationLabel, (System_String_o *)UserId, 0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  UserId = (int64_t)LocalizationManager__Get(v214, 0LL);
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

  if ( (byte_418B0B1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B2C35C(&ServantStatusVoiceListViewItem_TypeInfo, v5);
    byte_418B0B1 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  struct VoiceEntity_o *voiceEntity; // x8
  __int64 svtVoiceType; // x8
  __int64 v15; // x20
  struct VoiceEntity_o *v16; // x8
  System_String_o *v17; // x19
  System_String_o *v18; // x0
  __int64 v19; // x20
  int v20; // w8
  System_String_o *v21; // x19
  unsigned int v22; // w21
  __int64 v23; // x22
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v27; // x0

  if ( (byte_418B0AF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantVoiceMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v9);
    byte_418B0AF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)ServantVoiceMaster__getEntity_31384532(
                                (ServantVoiceMaster_o *)Instance,
                                svtId,
                                limitCount,
                                v12);
  if ( !voiceInfo )
    goto LABEL_25;
  voiceEntity = voiceInfo->fields.voiceEntity;
  if ( !voiceEntity || !Instance )
    goto LABEL_25;
  svtVoiceType = voiceEntity->fields.svtVoiceType;
  if ( (unsigned int)svtVoiceType >= LODWORD(Instance->fields.datalist) )
  {
LABEL_26:
    v27 = sub_B2C460(Instance);
    sub_B2C400(v27, 0LL);
  }
  v15 = *((_QWORD *)&Instance->fields.lookup + svtVoiceType);
  if ( !v15 )
    return 0;
  Instance = (DataManager_o *)System_Int32__ToString((int)voiceInfo + 52, 0LL);
  v16 = voiceInfo->fields.voiceEntity;
  if ( !v16
    || (v17 = (System_String_o *)Instance, (Instance = (DataManager_o *)v16->fields.id) == 0LL)
    || (v18 = (System_String_o *)((__int64 (__fastcall *)(DataManager_o *, void *))Instance->klass->vtable._3_ToString.method)(
                                   Instance,
                                   Instance->klass[1]._1.image),
        Instance = (DataManager_o *)System_String__Concat_44307816(
                                      v17,
                                      (System_String_o *)StringLiteral_15905/*"_"*/,
                                      v18,
                                      0LL),
        (v19 = *(_QWORD *)(v15 + 32)) == 0) )
  {
LABEL_25:
    sub_B2C434(Instance, v11);
  }
  v20 = *(_DWORD *)(v19 + 24);
  if ( v20 < 1 )
    return 0;
  v21 = (System_String_o *)Instance;
  v22 = 0;
  while ( 1 )
  {
    if ( v22 >= v20 )
      goto LABEL_26;
    v23 = *(_QWORD *)(v19 + 8LL * (int)v22 + 32);
    if ( !v23 )
      goto LABEL_25;
    v24 = *(_QWORD *)(v23 + 64);
    if ( !v24 )
      goto LABEL_25;
    if ( !*(_DWORD *)(v24 + 24) )
      goto LABEL_26;
    v25 = *(_QWORD *)(v24 + 32);
    if ( !v25 )
      goto LABEL_25;
    Instance = (DataManager_o *)System_String__op_Equality(*(System_String_o **)(v25 + 16), v21, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( *(_DWORD *)(v23 + 80) )
        return 1;
    }
    v20 = *(_DWORD *)(v19 + 24);
    if ( (int)++v22 >= v20 )
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
  __int64 v10; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  struct ServantVoiceCond_array *servantVoiceConds; // x22
  int max_length; // w8
  int64_t v14; // x19
  unsigned int v15; // w23
  bool v16; // w24
  ServantVoiceCond_o *v17; // x9
  int32_t condType; // w8
  int value; // w26
  __int64 v20; // x20
  __int64 v21; // x21
  __int64 v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_418B0B0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_418B0B0 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    v14 = Instance;
    v15 = 0;
    v16 = 1;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
        v23 = sub_B2C460(Instance);
        sub_B2C400(v23, 0LL);
      }
      v17 = servantVoiceConds->m_Items[v15];
      if ( !v17 )
        break;
      condType = v17->fields.condType;
      value = v17->fields.value;
      if ( condType == 20 || condType == 3 )
        v16 = 0;
      if ( condType == 3 || condType == 20 )
      {
        if ( !v14 )
          break;
        v20 = *(_QWORD *)(v14 + 100);
        v21 = *(_QWORD *)(v14 + 108);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v24.fields.currentCryptoKey = v20;
        *(_QWORD *)&v24.fields.fakeValue = v21;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v24, 0LL);
        if ( (int)Instance >= value )
          v16 = 1;
      }
      max_length = servantVoiceConds->max_length;
      if ( (int)++v15 >= max_length )
        return v16;
    }
LABEL_29:
    sub_B2C434(Instance, v10);
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
  if ( (byte_418B0B7 & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_B2C35C(&ServantStatusVoiceListViewItem_TypeInfo, obj);
    byte_418B0B7 = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0LL
    || (v11 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v11)
    || (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
  {
    sub_B2C434(this, obj);
  }
  if ( LOBYTE(linkItem[1].fields.sortValue2B) )
  {
    callbackFunc = v9->fields.callbackFunc;
    v9->fields.callbackFunc = 0LL;
    sub_B2C2F8(
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
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UIScrollView_o *v14; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_418B0B6 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B0B6 = 1;
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
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_B2C434(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
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
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418B0B4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v11);
    sub_B2C35C(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v12);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v13);
    byte_418B0B4 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v19, v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusVoiceListViewObject__Init(
        (ServantStatusVoiceListViewObject_o *)current,
        mode,
        v18,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__RequestListObject_31386964(
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
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418B0B5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v9);
    sub_B2C35C(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_418B0B5 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v17, v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusVoiceListViewObject__Init(
        (ServantStatusVoiceListViewObject_o *)current,
        mode,
        v16,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusVoiceListViewManager__SetMode_31386024(this, mode, -1, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__SetMode_31386024(
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
  __int64 v19; // x1
  const MethodInfo *v20; // x1
  int size; // w8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v22; // x19
  unsigned int v23; // w21
  ServantStatusVoiceListViewObject_o *v24; // x20
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x2
  int32_t v28; // w8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v29; // x20
  int v30; // w8
  __int64 v31; // x23
  ServantStatusVoiceListViewObject_o *v32; // x21
  System_Action_o *v33; // x22
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-60h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418B0B3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__, v12);
    sub_B2C35C(&ServantStatusVoiceListViewItem_TypeInfo, v13);
    sub_B2C35C(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v14);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v15);
    byte_418B0B3 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( mode == 2 )
  {
    itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_35;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      itemList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    for ( i = v35; ; BYTE1(i.fields.current[12].klass) = HIDWORD(i.fields.current[1].klass) == select )
    {
      v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v18 )
        break;
      if ( !i.fields.current )
        sub_B2C434(v18, v19);
      v17 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&i.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v17
        || (ServantStatusVoiceListViewItem_c *)i.fields.current->klass->_2.typeHierarchy[v17 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        sub_B2C434(v18, v19);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                v20);
    if ( !itemList )
      goto LABEL_35;
    size = itemList->fields._size;
    v22 = itemList;
    if ( size >= 1 )
    {
      v23 = 0;
      while ( 1 )
      {
        if ( size <= v23 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v24 = (ServantStatusVoiceListViewObject_o *)v22->fields._items->m_Items[v23];
        if ( !v24 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        ServantStatusVoiceListViewObject__Init(
          v24,
          4,
          0LL,
          zero.fields.x,
          *(UnityEngine_Vector3_o *)&zero.fields.y,
          v25);
        size = v22->fields._size;
        if ( (int)++v23 >= size )
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
                                                                                                  v26);
      if ( !itemList )
        goto LABEL_35;
      v28 = itemList->fields._size;
      v29 = itemList;
      if ( v28 < 1 )
      {
        this->fields.callbackCount = 1;
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
          0.2,
          0LL);
      }
      else
      {
        this->fields.callbackCount = v28;
        v30 = itemList->fields._size;
        if ( v30 >= 1 )
        {
          v31 = 0LL;
          while ( 1 )
          {
            if ( v30 <= (unsigned int)v31 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v32 = (ServantStatusVoiceListViewObject_o *)v29->fields._items->m_Items[v31];
            v33 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(v33, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
            if ( !v32 )
              break;
            v38 = UnityEngine_Vector3__get_zero(0LL);
            ServantStatusVoiceListViewObject__Init(
              v32,
              5,
              v33,
              v38.fields.x,
              *(UnityEngine_Vector3_o *)&v38.fields.y,
              v34);
            v30 = v29->fields._size;
            if ( (int)++v31 >= v30 )
              return;
          }
LABEL_35:
          sub_B2C434(itemList, *(_QWORD *)&mode);
        }
      }
    }
    else if ( mode == 1 )
    {
      ServantStatusVoiceListViewManager__RequestListObject_31386964(this, 3, v27);
    }
  }
}


void __fastcall ServantStatusVoiceListViewManager__SetMode_31386904(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusVoiceListViewManager__SetMode_31386024(this, mode, -1, v10);
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
  if ( (byte_418B0B2 & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_B2C35C(&ServantStatusVoiceListViewObject_TypeInfo, obj);
    byte_418B0B2 = 1;
  }
  if ( !obj
    || (v6 = *(&ServantStatusVoiceListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantStatusVoiceListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantStatusVoiceListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
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

  if ( (byte_418B0A7 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, value);
    byte_418B0A7 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418B0A9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418B0A9 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
  ServantStatusVoiceListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *__fastcall ServantStatusVoiceListViewManager__get_ClippingObjectList(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  ServantStatusVoiceListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_418B0AC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418B0AC = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (ServantStatusVoiceListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        (UnityEngine_GameObject_o *)current,
                                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)ServantStatusVoiceListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B2C434(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_24147020((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_B2C434(v22, v23);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v11 )
          sub_B2C434(Item, v21);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *)v11;
}


System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *__fastcall ServantStatusVoiceListViewManager__get_ObjectList(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_418B0AB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418B0AB = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *)v11;
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

  if ( (byte_418B0A8 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, value);
    byte_418B0A8 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418B0AA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418B0AA = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4185430 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&ServantStatusVoiceListViewManager_ResultKind_TypeInfo, v9);
    byte_4185430 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(ServantStatusVoiceListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall ServantStatusVoiceListViewManager_CallbackFunc__EndInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  ServantStatusVoiceListViewManager_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  ServantStatusVoiceListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
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
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)result, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)result, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AC5258(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B2C40C(v18, v23);
        (*v20)(v22, v28, (unsigned int)result, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AC5258(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)result,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)result,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)result, v23);
    goto LABEL_38;
  }
}