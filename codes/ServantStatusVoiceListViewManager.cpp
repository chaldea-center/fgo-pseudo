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
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  signed int max_length; // w8
  VoiceMaster_o *v9; // x21
  unsigned int v10; // w23
  char v11; // w19
  ServantVoiceRelationEntity_o *v12; // x22
  __int64 v13; // x24
  __int64 v14; // x25
  DataManager_o *v15; // x24
  unsigned __int64 v16; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x25
  int32_t size; // w26
  __int64 v19; // x27
  __int64 v20; // x28
  VoiceInfo_o *v21; // x28
  int32_t v22; // w27
  int32_t v23; // w20
  ServantStatusVoiceListViewItem_o *v24; // x23
  __int64 v25; // x0
  const MethodInfo *v26; // [xsp+8h] [xbp-88h]
  VoiceMaster_o *v27; // [xsp+10h] [xbp-80h]
  ServantVoiceRelationEntity_array *v28; // [xsp+18h] [xbp-78h]
  int32_t ascendOrder; // [xsp+20h] [xbp-70h]
  unsigned int v30; // [xsp+24h] [xbp-6Ch]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_42B32E3 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B32E3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !relationList )
    goto LABEL_27;
  max_length = relationList->max_length;
  if ( max_length >= 1 )
  {
    v9 = (VoiceMaster_o *)Instance;
    v10 = 0;
    v11 = 1;
    ascendOrder = 0;
    v27 = (VoiceMaster_o *)Instance;
    v28 = relationList;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
LABEL_28:
        v25 = sub_B52A88(Instance);
        sub_B52A28(v25, 0LL);
      }
      v12 = relationList->m_Items[v10];
      if ( !v12 )
        goto LABEL_27;
      v14 = *(_QWORD *)&v12->fields.relationSvtId.fields.currentCryptoKey;
      v13 = *(_QWORD *)&v12->fields.relationSvtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v34.fields.currentCryptoKey = v14;
      *(_QWORD *)&v34.fields.fakeValue = v13;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v34, 0LL);
      if ( !v9 )
        goto LABEL_27;
      Instance = (DataManager_o *)VoiceMaster__getEnableInfo(v9, svtId, (int32_t)Instance, 0, 0LL, 0, 0, 0LL);
      v15 = Instance;
      if ( (v11 & 1) == 0 && ascendOrder != v12->fields.ascendOrder )
        ++*firstPriority;
      v30 = v10;
      if ( !Instance )
        goto LABEL_27;
      ascendOrder = v12->fields.ascendOrder;
      if ( SLODWORD(Instance->fields.datalist) >= 1 )
        break;
LABEL_25:
      v9 = v27;
      relationList = v28;
      v11 = 0;
      max_length = v28->max_length;
      v10 = v30 + 1;
      if ( (int)(v30 + 1) >= max_length )
        return;
    }
    v16 = 0LL;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      v20 = *(_QWORD *)&v12->fields.relationSvtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&v12->fields.relationSvtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v35.fields.currentCryptoKey = v20;
      *(_QWORD *)&v35.fields.fakeValue = v19;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v35, 0LL);
      if ( v16 >= LODWORD(v15->fields.datalist) )
        goto LABEL_28;
      v21 = (VoiceInfo_o *)*((_QWORD *)&v15->fields.lookup + v16);
      v22 = (int)Instance;
      v23 = *firstPriority;
      v24 = (ServantStatusVoiceListViewItem_o *)sub_B52A54(ServantStatusVoiceListViewItem_TypeInfo);
      ServantStatusVoiceListViewItem___ctor(v24, size, svtId, v22, 0, v21, v23, 0, 0, v26);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (__int64)++v16 >= SLODWORD(v15->fields.datalist) )
        goto LABEL_25;
    }
LABEL_27:
    sub_B52A5C(Instance, v7);
  }
}


void __fastcall ServantStatusVoiceListViewManager__CreateList(
        ServantStatusVoiceListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        System_Int32_array *changeSvtVoiceIdList,
        const MethodInfo *method)
{
  __int64 v6; // x22
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  const MethodInfo *v9; // x1
  int64_t v10; // x19
  VoiceMaster_o *v11; // x24
  System_Collections_Generic_List_VoiceCondType_Type__o *v12; // x19
  System_Int32_array *v13; // x9
  __int64 v14; // x8
  unsigned __int64 v15; // x10
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x19
  int32_t maxLimitCount; // w20
  System_Int32_array *VoiceLimitCountList; // x20
  const MethodInfo *v19; // x5
  ServantVoiceRelationEntity_array *v20; // x19
  int32_t v21; // w0
  const MethodInfo *v22; // x4
  ServantVoiceRelationEntity_array *v23; // x19
  int32_t v24; // w0
  const MethodInfo *v25; // x4
  __int64 v26; // x8
  int32_t v27; // w19
  unsigned __int64 v28; // x9
  int32_t v29; // w0
  BalanceConfig_c *v30; // x8
  int32_t v31; // w19
  __int64 v32; // x1
  int64_t v33; // x23
  unsigned __int64 v34; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x20
  int32_t v36; // w24
  int32_t v37; // w19
  VoiceInfo_o *v38; // x26
  int32_t ServantIdMashu3; // w27
  ServantStatusVoiceListViewItem_o *v40; // x28
  int32_t v41; // w28
  int32_t v42; // w22
  __int64 v43; // x0
  __int64 v44; // x1
  const MethodInfo *v45; // x4
  int v46; // w8
  int64_t v47; // x26
  unsigned int i; // w25
  int64_t v49; // x23
  VoiceInfo_o *v50; // x3
  VoiceInfo_o **v51; // x23
  VoiceInfo_o *v52; // t1
  struct VoiceEntity_o *voiceEntity; // x24
  int32_t condType; // w9
  int v55; // w28
  _BOOL4 v56; // w8
  const MethodInfo *v57; // x3
  const MethodInfo *v58; // x3
  char v59; // w22
  _BOOL8 v60; // x0
  const MethodInfo *v61; // x1
  Il2CppObject *v62; // x27
  __int64 v63; // x10
  Il2CppClass *v64; // x8
  __int64 v65; // x0
  __int64 v66; // x1
  struct VoiceEntity_o *v67; // x8
  int32_t v68; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x19
  __int64 v70; // x1
  System_String_o *v71; // x2
  __int64 v72; // x0
  int32_t v73; // w5
  const MethodInfo *v74; // x6
  struct VoiceEntity_o *v75; // x8
  int32_t v76; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v77; // x19
  System_String_o *v78; // x2
  int32_t v79; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x20
  bool v81; // w28
  bool v82; // w21
  int32_t size; // w24
  char v84; // w19
  VoiceInfo_o *v85; // x23
  int32_t v86; // w27
  bool v87; // w19
  ServantStatusVoiceListViewItem_o *v88; // x28
  _BOOL8 v89; // x0
  const MethodInfo *v90; // x1
  Il2CppObject *current; // x27
  __int64 v92; // x10
  Il2CppClass *klass; // x8
  __int64 v94; // x0
  int32_t v95; // w5
  const MethodInfo *v96; // x6
  __int64 v97; // x0
  __int64 v98; // x0
  __int64 v99; // x0
  int32_t v100; // w19
  BalanceConfig_c *v101; // x8
  WarMessageEntity_o *v102; // x27
  __int64 v103; // x1
  UserServantCollectionMaster_o *v104; // x19
  int64_t v105; // x20
  int32_t v106; // w0
  BalanceConfig_c *v107; // x8
  int32_t v108; // w19
  int64_t v109; // x27
  unsigned __int64 v110; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v111; // x20
  int32_t v112; // w24
  ServantStatusVoiceListViewManager_o *v113; // x25
  int32_t v114; // w19
  int32_t v115; // w21
  VoiceInfo_o *v116; // x23
  int32_t ServantIdHyde; // w28
  ServantStatusVoiceListViewItem_o *v118; // x0
  int32_t v119; // w3
  EventMissionProgressRequest_Argument_ProgressData_o *v120; // x26
  BalanceConfig_c *v121; // x8
  int v122; // w19
  int32_t v123; // w0
  BalanceConfig_c *v124; // x8
  int32_t v125; // w19
  VoiceInfo_array *EnableInfo; // x0
  __int64 v127; // x1
  VoiceInfo_array *v128; // x27
  unsigned __int64 v129; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v130; // x20
  int32_t v131; // w24
  int32_t v132; // w19
  VoiceInfo_o *v133; // x23
  int32_t ServantIdMashu2; // w26
  ServantStatusVoiceListViewItem_o *v135; // x28
  int64_t v136; // x0
  BalanceConfig_c *v137; // x8
  int64_t v138; // x20
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t MashuTdGradeUpQuestId; // w19
  int32_t MashuTdGradeUpQuestPhase; // w23
  int32_t svtVoiceId; // w19
  ServantVoiceRelationEntity_array *v143; // x19
  int32_t v144; // w0
  const MethodInfo *v145; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v146; // x8
  signed __int64 v147; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v148; // x20
  int v149; // w8
  unsigned __int64 v150; // x24
  signed __int64 v151; // x22
  __int64 v152; // x25
  struct System_Collections_Generic_List_ListViewItem__o *v153; // x19
  ServantStatusVoiceListViewItem_o *v154; // x21
  __int64 v155; // x10
  const MethodInfo *v156; // x2
  __int64 v157; // x26
  struct System_Collections_Generic_List_ListViewItem__o *v158; // x19
  ServantStatusVoiceListViewItem_o *v159; // x22
  __int64 v160; // x10
  System_String_o *OpenName; // x19
  const MethodInfo *v162; // x1
  System_String_o *v163; // x0
  int32_t v164; // w21
  _BOOL8 v165; // x0
  __int64 v166; // x1
  const MethodInfo *v167; // x2
  __int64 v168; // x11
  __int64 v169; // x11
  Il2CppObject *v170; // x0
  UILabel_o *explanationLabel; // x19
  UILabel_o *emptyMessageLabel; // x19
  __int64 v173; // x0
  bool voiceLabelSpec; // [xsp+0h] [xbp-170h]
  const MethodInfo *v175; // [xsp+8h] [xbp-168h]
  System_String_o *v176; // [xsp+10h] [xbp-160h]
  UserServantCollectionEntity_o *EntityDefinitely; // [xsp+18h] [xbp-158h]
  unsigned __int64 v179; // [xsp+28h] [xbp-148h]
  ServantLimitAddMaster_o *v180; // [xsp+30h] [xbp-140h]
  System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList; // [xsp+38h] [xbp-138h]
  System_Int32_array *v182; // [xsp+40h] [xbp-130h]
  VoiceMaster_o *v183; // [xsp+48h] [xbp-128h]
  unsigned __int64 v184; // [xsp+50h] [xbp-120h]
  int64_t v185; // [xsp+58h] [xbp-118h]
  VoicePlayCondMaster_o *v186; // [xsp+60h] [xbp-110h]
  int32_t v187; // [xsp+6Ch] [xbp-104h]
  ServantStatusVoiceListViewManager_o *v188; // [xsp+70h] [xbp-100h]
  int32_t limitCount; // [xsp+7Ch] [xbp-F4h]
  ServantStatusListViewItem_o *v190; // [xsp+80h] [xbp-F0h]
  int32_t svtId; // [xsp+88h] [xbp-E8h]
  signed __int64 svtIda; // [xsp+88h] [xbp-E8h]
  _BYTE v193[44]; // [xsp+90h] [xbp-E0h] BYREF
  int v194; // [xsp+BCh] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_T__o v195; // [xsp+C0h] [xbp-B0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+D8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v197; // [xsp+E0h] [xbp-90h] BYREF
  ServantVoiceRelationEntity_array *afterRelationList; // [xsp+F8h] [xbp-78h] BYREF
  ServantVoiceRelationEntity_array *sameRelationList; // [xsp+100h] [xbp-70h] BYREF
  ServantVoiceRelationEntity_array *beforeRelationList; // [xsp+108h] [xbp-68h] BYREF
  int32_t firstPriority[3]; // [xsp+114h] [xbp-5Ch] BYREF

  if ( (byte_42B32E4 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B52984(&Method_DataManager_GetMaster_VoiceMaster___);
    sub_B52984(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_CondType_Kind__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_CondType_Kind___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&System_Collections_Generic_List_CondType_Kind__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B52984(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TutorialFlag_TypeInfo);
    sub_B52984(&StringLiteral_2249/*"B050"*/);
    sub_B52984(&StringLiteral_15216/*"VOICE_EMPTY_MESSAGE"*/);
    sub_B52984(&StringLiteral_12138/*"SERVANT_STATUS_VOICE_EXPLANATION"*/);
    byte_42B32E4 = 1;
  }
  firstPriority[0] = 0;
  sameRelationList = 0LL;
  beforeRelationList = 0LL;
  afterRelationList = 0LL;
  memset(&v197, 0, sizeof(v197));
  entity = 0LL;
  v6 = StringLiteral_15216/*"VOICE_EMPTY_MESSAGE"*/;
  memset(&v195, 0, sizeof(v195));
  v194 = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.execObjectExtraFlag = 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !mainInfo )
    goto LABEL_257;
  v10 = UserId;
  UserId = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_257;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(Master_WarQuestSelectionMaster, v10, UserId, 0LL);
  v11 = (VoiceMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_VoiceMaster___);
  v186 = (VoicePlayCondMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v180 = (ServantLimitAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  firstPriority[0] = 0;
  v12 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B52A54(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v12,
    (const MethodInfo_305922C *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v12 )
    goto LABEL_257;
  disableCondTypeList = (System_Collections_Generic_List_CondType_Kind__o *)v12;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    81,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_CondType_Kind__Add__);
  v13 = changeSvtVoiceIdList;
  if ( !changeSvtVoiceIdList )
    goto LABEL_257;
  v14 = *(_QWORD *)&changeSvtVoiceIdList->max_length;
  v176 = (System_String_o *)v6;
  v188 = this;
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    v190 = mainInfo;
    v183 = v11;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)v14 )
        goto LABEL_253;
      v179 = v15;
      svtId = v13->m_Items[v15 + 1];
      UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !UserId )
        goto LABEL_257;
      MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)UserId,
                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
      UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !UserId )
        goto LABEL_257;
      UserId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)UserId,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !UserId )
        goto LABEL_257;
      ServantVoiceRelationMaster__GetRelationList_30950568(
        (ServantVoiceRelationMaster_o *)UserId,
        &beforeRelationList,
        &sameRelationList,
        &afterRelationList,
        svtId,
        v19);
      v20 = beforeRelationList;
      v21 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, firstPriority, v20, v21, v22);
      v23 = sameRelationList;
      ++firstPriority[0];
      v24 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, firstPriority, v23, v24, v25);
      if ( !VoiceLimitCountList )
        goto LABEL_257;
      v26 = *(_QWORD *)&VoiceLimitCountList->max_length;
      v27 = firstPriority[0];
      if ( (int)v26 >= 1 )
        break;
      v41 = firstPriority[0];
LABEL_203:
      v143 = afterRelationList;
      firstPriority[0] = v41;
      v144 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, firstPriority, v143, v144, v145);
      v13 = changeSvtVoiceIdList;
      LODWORD(v14) = changeSvtVoiceIdList->max_length;
      v15 = v179 + 1;
      if ( (__int64)(v179 + 1) >= (int)v14 )
        goto LABEL_204;
    }
    v28 = 0LL;
    v182 = VoiceLimitCountList;
    while ( 1 )
    {
      if ( v28 >= (unsigned int)v26 )
      {
        firstPriority[0] = v27;
        goto LABEL_253;
      }
      v42 = VoiceLimitCountList->m_Items[v28 + 1];
      v184 = v28;
      v43 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      if ( !v11 )
      {
        firstPriority[0] = v27;
        sub_B52A5C(v43, v44);
      }
      v187 = v27;
      UserId = (int64_t)VoiceMaster__getEnableInfo(v11, v43, svtId, v42, disableCondTypeList, 0, 0, 0LL);
      if ( !UserId )
        goto LABEL_251;
      v46 = *(_DWORD *)(UserId + 24);
      v47 = UserId;
      limitCount = v42;
      if ( v46 >= 1 )
      {
        for ( i = 0; (int)i < v46; ++i )
        {
          if ( i >= v46 )
          {
LABEL_252:
            firstPriority[0] = v187;
            goto LABEL_253;
          }
          v49 = v47 + 8LL * (int)i;
          v52 = *(VoiceInfo_o **)(v49 + 32);
          v51 = (VoiceInfo_o **)(v49 + 32);
          v50 = v52;
          if ( !v52 )
            goto LABEL_251;
          voiceEntity = v50->fields.voiceEntity;
          if ( v42 > 10 )
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
              v55 = 1;
            }
            else
            {
              UserId = ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                         (ServantStatusVoiceListViewManager_o *)UserId,
                         svtId,
                         v42,
                         v50,
                         v45);
              if ( (UserId & 1) != 0 )
              {
                if ( i >= *(_DWORD *)(v47 + 24) )
                  goto LABEL_252;
                UserId = ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                           (ServantStatusVoiceListViewManager_o *)UserId,
                           svtId,
                           *v51,
                           v58);
                if ( (UserId & 1) == 0 )
                  goto LABEL_100;
                goto LABEL_62;
              }
              UserId = (int64_t)this->fields.itemList;
              if ( !UserId )
                goto LABEL_251;
              System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)v193,
                (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserId,
                (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
              v197 = *(System_Collections_Generic_List_Enumerator_T__o *)v193;
              do
              {
                v89 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                        &v197,
                        (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                if ( !v89 )
                {
                  v55 = 1;
                  goto LABEL_116;
                }
                current = v197.fields.current;
                if ( !v197.fields.current
                  || (v92 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
                      *(&v197.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v92)
                  || (ServantStatusVoiceListViewItem_c *)v197.fields.current->klass->_2.typeHierarchy[v92 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                {
                  sub_B52A5C(v89, v90);
                }
                klass = v197.fields.current[10].klass;
                if ( !klass )
                  sub_B52A5C(v89, v90);
              }
              while ( HIDWORD(klass->_1.namespaze) != 2
                   || LODWORD(klass->_1.this_arg.data) != 7
                   || HIDWORD(klass->_1.this_arg.data) != voiceEntity->fields.condValue
                   || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                        (ServantStatusVoiceListViewItem_o *)v197.fields.current,
                        v90) != svtId );
              v94 = ServantStatusListViewItem__get_SvtId(v190, 0LL);
              if ( i >= *(_DWORD *)(v47 + 24) )
              {
                v99 = sub_B52A88(v94);
                sub_B52A28(v99, 0LL);
              }
              ServantStatusVoiceListViewItem__SetLimitCount(
                (ServantStatusVoiceListViewItem_o *)current,
                v94,
                svtId,
                v42,
                *v51,
                v95,
                v96);
              v55 = 0;
LABEL_116:
              mainInfo = v190;
              *(_DWORD *)&v193[4 * v194++ + 24] = 701;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                &v197,
                (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
              if ( v194 && *(_DWORD *)&v193[4 * v194 + 20] == 701 )
              {
                --v194;
                if ( !v55 )
                  goto LABEL_100;
                goto LABEL_88;
              }
            }
            condType = voiceEntity->fields.condType;
          }
          else
          {
            v55 = 1;
          }
          v56 = v55 != 0;
          if ( condType != 18 )
            goto LABEL_87;
          if ( i >= *(_DWORD *)(v47 + 24) )
            goto LABEL_252;
          UserId = ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                     (ServantStatusVoiceListViewManager_o *)UserId,
                     svtId,
                     v42,
                     *v51,
                     v45);
          if ( (UserId & 1) == 0 )
          {
            UserId = (int64_t)this->fields.itemList;
            if ( !UserId )
              goto LABEL_251;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v193,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserId,
              (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v197 = *(System_Collections_Generic_List_Enumerator_T__o *)v193;
            while ( 1 )
            {
              v60 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v197,
                      (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v60 )
                break;
              v62 = v197.fields.current;
              if ( !v197.fields.current
                || (v63 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
                    *(&v197.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v63)
                || (ServantStatusVoiceListViewItem_c *)v197.fields.current->klass->_2.typeHierarchy[v63 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                sub_B52A5C(v60, v61);
              }
              v64 = v197.fields.current[10].klass;
              if ( !v64 )
                sub_B52A5C(v60, v61);
              if ( HIDWORD(v64->_1.namespaze) == 2
                && LODWORD(v64->_1.this_arg.data) == 18
                && ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                     (ServantStatusVoiceListViewItem_o *)v197.fields.current,
                     v61) == svtId )
              {
                v65 = ServantStatusListViewItem__get_SvtId(v190, 0LL);
                if ( i >= *(_DWORD *)(v47 + 24) )
                {
                  v97 = sub_B52A88(v65);
                  sub_B52A28(v97, 0LL);
                }
                if ( !*v51 )
                  sub_B52A5C(v65, v66);
                v67 = (*v51)->fields.voiceEntity;
                if ( !v67 )
                  sub_B52A5C(v65, v66);
                v68 = v65;
                id = v67->fields.id;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                }
                v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44824884(id, 0LL);
                if ( !v186 )
                  sub_B52A5C(0LL, v70);
                if ( !VoicePlayCondMaster__isVoiceCond(v186, v68, v71, 81, 0LL) )
                {
                  v72 = ServantStatusListViewItem__get_SvtId(v190, 0LL);
                  if ( i >= *(_DWORD *)(v47 + 24) )
                  {
                    v98 = sub_B52A88(v72);
                    sub_B52A28(v98, 0LL);
                  }
                  ServantStatusVoiceListViewItem__SetLimitCount(
                    (ServantStatusVoiceListViewItem_o *)v62,
                    v72,
                    svtId,
                    v42,
                    *v51,
                    v73,
                    v74);
                  v55 = 0;
                }
                break;
              }
            }
            mainInfo = v190;
            *(_DWORD *)&v193[4 * v194++ + 24] = 701;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v197,
              (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
            v56 = v55 != 0;
            if ( v194 && *(_DWORD *)&v193[4 * v194 + 20] == 701 )
            {
              --v194;
              if ( !v55 )
                goto LABEL_100;
            }
            else
            {
LABEL_87:
              if ( !v56 )
                goto LABEL_100;
            }
LABEL_88:
            v59 = 0;
            goto LABEL_89;
          }
          if ( i >= *(_DWORD *)(v47 + 24) )
            goto LABEL_252;
          UserId = ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                     (ServantStatusVoiceListViewManager_o *)UserId,
                     svtId,
                     *v51,
                     v57);
          if ( !v55 || (UserId & 1) == 0 )
            goto LABEL_100;
LABEL_62:
          v59 = 1;
LABEL_89:
          UserId = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
          if ( i >= *(_DWORD *)(v47 + 24) )
            goto LABEL_252;
          if ( !*v51 )
            goto LABEL_251;
          v75 = (*v51)->fields.voiceEntity;
          if ( !v75 )
            goto LABEL_251;
          v76 = UserId;
          v77 = v75->fields.id;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44824884(v77, 0LL);
          UserId = (int64_t)v186;
          if ( !v186 )
            goto LABEL_251;
          UserId = VoicePlayCondMaster__isVoiceCond(v186, v76, v78, 81, 0LL);
          if ( !voiceEntity )
            goto LABEL_251;
          v79 = voiceEntity->fields.condType;
          itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
          v81 = v79 == 18;
          v82 = v79 == 7;
          if ( !itemList )
            goto LABEL_251;
          size = itemList->fields._size;
          v84 = UserId;
          UserId = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
          if ( i >= *(_DWORD *)(v47 + 24) )
            goto LABEL_252;
          v85 = *v51;
          v86 = UserId;
          v87 = v84 & (v81 || v82);
          voiceLabelSpec = v59;
          v42 = limitCount;
          v88 = (ServantStatusVoiceListViewItem_o *)sub_B52A54(ServantStatusVoiceListViewItem_TypeInfo);
          ServantStatusVoiceListViewItem___ctor(v88, size, v86, svtId, limitCount, v85, v187, v87, voiceLabelSpec, v175);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            itemList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v88,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          this = v188;
          mainInfo = v190;
LABEL_100:
          v46 = *(_DWORD *)(v47 + 24);
        }
      }
      v41 = v187 + 1;
      v100 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      v101 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v101 = BalanceConfig_TypeInfo;
      }
      v11 = v183;
      if ( v100 == v101->static_fields->ServantIdJekyll )
        break;
      UserId = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      v121 = BalanceConfig_TypeInfo;
      v122 = UserId;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v121 = BalanceConfig_TypeInfo;
      }
      if ( v122 == v121->static_fields->ServantIdMashu1 )
      {
        if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TutorialFlag_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        }
        if ( TutorialFlag__Get_29217932(115, 0LL) )
        {
          v123 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
          v124 = BalanceConfig_TypeInfo;
          v125 = v123;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v124 = BalanceConfig_TypeInfo;
          }
          v115 = v187 + 1;
          EnableInfo = VoiceMaster__getEnableInfo(v183, v125, v124->static_fields->ServantIdMashu2, v42, 0LL, 0, 0, 0LL);
          if ( !EnableInfo )
          {
LABEL_256:
            firstPriority[0] = v187 + 1;
            sub_B52A5C(EnableInfo, v127);
          }
          v128 = EnableInfo;
          if ( (int)EnableInfo->max_length >= 1 )
          {
            v129 = 0LL;
            while ( 1 )
            {
              v130 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v188->fields.itemList;
              if ( !v130 )
                goto LABEL_256;
              v131 = v130->fields._size;
              UserId = ServantStatusListViewItem__get_SvtId(v190, 0LL);
              v132 = UserId;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              }
              if ( v129 >= v128->max_length )
                break;
              v133 = v128->m_Items[v129];
              ServantIdMashu2 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu2;
              v135 = (ServantStatusVoiceListViewItem_o *)sub_B52A54(ServantStatusVoiceListViewItem_TypeInfo);
              ServantStatusVoiceListViewItem___ctor(
                v135,
                v131,
                v132,
                ServantIdMashu2,
                limitCount,
                v133,
                v115,
                0,
                0,
                v175);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v130,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v135,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
              if ( (__int64)++v129 >= (int)v128->max_length )
                goto LABEL_177;
            }
LABEL_254:
            firstPriority[0] = v115;
LABEL_253:
            v173 = sub_B52A88(UserId);
            sub_B52A28(v173, 0LL);
          }
LABEL_177:
          mainInfo = v190;
          v42 = limitCount;
          this = v188;
          v41 = v187 + 2;
        }
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v136 = NetworkManager__get_UserId(0LL);
        v137 = BalanceConfig_TypeInfo;
        v138 = v136;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v11 = v183;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v137 = BalanceConfig_TypeInfo;
          }
        }
        else
        {
          v11 = v183;
        }
        static_fields = v137->static_fields;
        MashuTdGradeUpQuestId = static_fields->MashuTdGradeUpQuestId;
        MashuTdGradeUpQuestPhase = static_fields->MashuTdGradeUpQuestPhase;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        UserId = CondType__IsQuestPhaseClear(v138, MashuTdGradeUpQuestId, MashuTdGradeUpQuestPhase, -1, 0, 0LL);
        if ( (UserId & 1) != 0 )
        {
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          }
          UserId = (int64_t)v180;
          if ( !v180 )
            goto LABEL_255;
          UserId = ServantLimitAddMaster__TryGetEntity(
                     v180,
                     &entity,
                     BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                     v42,
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
              v29 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
              v30 = BalanceConfig_TypeInfo;
              v31 = v29;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v30 = BalanceConfig_TypeInfo;
              }
              v187 = v41;
              UserId = (int64_t)VoiceMaster__getEnableInfo(
                                  v11,
                                  v31,
                                  v30->static_fields->ServantIdMashu3,
                                  v42,
                                  0LL,
                                  0,
                                  0,
                                  0LL);
              if ( !UserId )
                goto LABEL_251;
              v33 = UserId;
              if ( *(int *)(UserId + 24) >= 1 )
              {
                v34 = 0LL;
                while ( 1 )
                {
                  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
                  if ( !v35 )
                    break;
                  v36 = v35->fields._size;
                  UserId = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                  v37 = UserId;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  }
                  if ( v34 >= *(unsigned int *)(v33 + 24) )
                    goto LABEL_252;
                  v38 = *(VoiceInfo_o **)(v33 + 32 + 8 * v34);
                  ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
                  v40 = (ServantStatusVoiceListViewItem_o *)sub_B52A54(ServantStatusVoiceListViewItem_TypeInfo);
                  ServantStatusVoiceListViewItem___ctor(
                    v40,
                    v36,
                    v37,
                    ServantIdMashu3,
                    limitCount,
                    v38,
                    v187,
                    0,
                    0,
                    v175);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v35,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
                    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                  mainInfo = v190;
                  if ( (__int64)++v34 >= *(int *)(v33 + 24) )
                    goto LABEL_36;
                }
LABEL_251:
                firstPriority[0] = v187;
                sub_B52A5C(UserId, v32);
              }
LABEL_36:
              v41 = v187 + 1;
LABEL_156:
              v11 = v183;
            }
          }
        }
      }
LABEL_200:
      VoiceLimitCountList = v182;
      v27 = v41;
      LODWORD(v26) = v182->max_length;
      v28 = v184 + 1;
      if ( (__int64)(v184 + 1) >= (int)v26 )
        goto LABEL_203;
    }
    v102 = DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
             (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)v183,
             (System_String_o *)StringLiteral_2249/*"B050"*/,
             (const MethodInfo_23E2728 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string__GetEntity__);
    UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !UserId )
      goto LABEL_255;
    v104 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)UserId,
                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v105 = NetworkManager__get_UserId(0LL);
    UserId = ServantStatusListViewItem__get_SvtId(v190, 0LL);
    if ( !v104 )
      goto LABEL_255;
    UserId = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v104, v105, UserId, 0LL);
    if ( !v102 )
      goto LABEL_255;
    if ( v102->fields.condId == 17 )
    {
      if ( !UserId )
        goto LABEL_255;
      UserId = UserServantCollectionEntity__IsPlayed((UserServantCollectionEntity_o *)UserId, v102->fields.condNum, 0LL);
      if ( (UserId & 1) == 0 )
      {
        mainInfo = v190;
        goto LABEL_200;
      }
    }
    v106 = ServantStatusListViewItem__get_SvtId(v190, 0LL);
    v107 = BalanceConfig_TypeInfo;
    v108 = v106;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v107 = BalanceConfig_TypeInfo;
    }
    UserId = (int64_t)VoiceMaster__getEnableInfo(v183, v108, v107->static_fields->ServantIdHyde, v42, 0LL, 0, 0, 0LL);
    if ( !UserId )
      goto LABEL_255;
    v109 = UserId;
    if ( *(int *)(UserId + 24) >= 1 )
    {
      v110 = 0LL;
      v185 = UserId + 32;
      while ( 1 )
      {
        v111 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
        if ( !v111 )
          break;
        v112 = v111->fields._size;
        v113 = this;
        UserId = ServantStatusListViewItem__get_SvtId(v190, 0LL);
        v114 = UserId;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        }
        v115 = v41;
        if ( v110 >= *(unsigned int *)(v109 + 24) )
          goto LABEL_254;
        v116 = *(VoiceInfo_o **)(v185 + 8 * v110);
        ServantIdHyde = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
        v118 = (ServantStatusVoiceListViewItem_o *)sub_B52A54(ServantStatusVoiceListViewItem_TypeInfo);
        v119 = ServantIdHyde;
        v120 = (EventMissionProgressRequest_Argument_ProgressData_o *)v118;
        v41 = v115;
        ServantStatusVoiceListViewItem___ctor(v118, v112, v114, v119, limitCount, v116, v115, 0, 0, v175);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v111,
          v120,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v110;
        this = v113;
        if ( (__int64)v110 >= *(int *)(v109 + 24) )
          goto LABEL_155;
      }
LABEL_255:
      firstPriority[0] = v41;
      sub_B52A5C(UserId, v103);
    }
LABEL_155:
    mainInfo = v190;
    v41 = v187 + 2;
    goto LABEL_156;
  }
LABEL_204:
  v146 = this->fields.itemList;
  if ( !v146 )
    goto LABEL_257;
  v147 = v146->fields._size;
  v148 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v148,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
  v149 = v147 - 1;
  if ( (int)v147 - 1 >= 1 )
  {
    v150 = 0LL;
    v151 = v149;
    v152 = 5LL;
    svtIda = v149;
    do
    {
      v153 = this->fields.itemList;
      if ( !v153 )
        goto LABEL_257;
      if ( v150 >= (unsigned int)v153->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v154 = (ServantStatusVoiceListViewItem_o *)v153->fields._items->m_Items[v150];
      if ( !v154 )
        goto LABEL_257;
      v155 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v154->klass->_2.bitflags2 + 1) < (unsigned int)v155
        || (ServantStatusVoiceListViewItem_c *)v154->klass->_2.typeHierarchy[v155 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        goto LABEL_257;
      }
      UserId = (int64_t)ServantStatusVoiceListViewItem__get_OpenName(v154, v9);
      if ( UserId )
      {
        UserId = ServantStatusVoiceListViewItem__get_DispNum(v154, v9);
        if ( !(_DWORD)UserId )
        {
          if ( !v148 )
            goto LABEL_257;
          System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)v148,
            (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__);
          if ( (__int64)(v150 + 1) < v147 )
          {
            v157 = v152;
            while ( 1 )
            {
              v158 = v188->fields.itemList;
              if ( !v158 )
                break;
              if ( v158->fields._size <= (unsigned int)(v157 - 4) )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
              v159 = (ServantStatusVoiceListViewItem_o *)*((_QWORD *)&v158->fields._items->obj.klass + v157);
              if ( !v159 )
                break;
              v160 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v159->klass->_2.bitflags2 + 1) < (unsigned int)v160
                || (ServantStatusVoiceListViewItem_c *)v159->klass->_2.typeHierarchy[v160 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                break;
              }
              OpenName = ServantStatusVoiceListViewItem__get_OpenName(v159, v9);
              v163 = ServantStatusVoiceListViewItem__get_OpenName(v154, v162);
              UserId = System_String__op_Equality(OpenName, v163, 0LL);
              if ( (UserId & 1) != 0 )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v148,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v159,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__);
              if ( (int)++v157 - 4 >= (int)v147 )
                goto LABEL_229;
            }
LABEL_257:
            sub_B52A5C(UserId, v9);
          }
LABEL_229:
          v151 = svtIda;
          if ( v148->fields._size >= 1 )
          {
            ServantStatusVoiceListViewItem__SetNameNum(v154, 1, v156);
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v193,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v148,
              (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
            v164 = 2;
            v195 = *(System_Collections_Generic_List_Enumerator_T__o *)v193;
            while ( 1 )
            {
              v165 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                       &v195,
                       (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
              if ( !v165 )
                break;
              if ( !v195.fields.current
                || (v168 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
                    *(&v195.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v168)
                || (ServantStatusVoiceListViewItem_c *)v195.fields.current->klass->_2.typeHierarchy[v168 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                sub_B52A5C(v165, v166);
              }
              v169 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v195.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v169 )
              {
                if ( (ServantStatusVoiceListViewItem_c *)v195.fields.current->klass->_2.typeHierarchy[v169 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
                  v170 = v195.fields.current;
                else
                  v170 = 0LL;
              }
              else
              {
                v170 = 0LL;
              }
              ServantStatusVoiceListViewItem__SetNameNum((ServantStatusVoiceListViewItem_o *)v170, v164++, v167);
            }
            *(_DWORD *)&v193[4 * v194++ + 24] = 1600;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v195,
              (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
            if ( v194 )
            {
              if ( *(_DWORD *)&v193[4 * v194 + 20] == 1600 )
                --v194;
            }
          }
        }
      }
      this = v188;
      ++v150;
      ++v152;
    }
    while ( (__int64)v150 < v151 );
  }
  explanationLabel = this->fields.explanationLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12138/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_257;
  UILabel__set_text(explanationLabel, (System_String_o *)UserId, 0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  UserId = (int64_t)LocalizationManager__Get(v176, 0LL);
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


ServantStatusVoiceListViewItem_o *__fastcall ServantStatusVoiceListViewManager__GetItem(
        ServantStatusVoiceListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_42B32E7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&ServantStatusVoiceListViewItem_TypeInfo);
    byte_42B32E7 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (ServantStatusVoiceListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
    return (ServantStatusVoiceListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


bool __fastcall ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
        ServantStatusVoiceListViewManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        VoiceInfo_o *voiceInfo,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  struct VoiceEntity_o *voiceEntity; // x8
  __int64 svtVoiceType; // x8
  __int64 v13; // x20
  struct VoiceEntity_o *v14; // x8
  System_String_o *v15; // x19
  System_String_o *v16; // x0
  __int64 v17; // x20
  int v18; // w8
  System_String_o *v19; // x19
  unsigned int v20; // w21
  __int64 v21; // x22
  __int64 v22; // x8
  __int64 v23; // x8
  __int64 v25; // x0

  if ( (byte_42B32E5 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_16011/*"_"*/);
    byte_42B32E5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)ServantVoiceMaster__getEntity_30952508(
                                (ServantVoiceMaster_o *)Instance,
                                svtId,
                                limitCount,
                                v10);
  if ( !voiceInfo )
    goto LABEL_25;
  voiceEntity = voiceInfo->fields.voiceEntity;
  if ( !voiceEntity || !Instance )
    goto LABEL_25;
  svtVoiceType = voiceEntity->fields.svtVoiceType;
  if ( (unsigned int)svtVoiceType >= LODWORD(Instance->fields.datalist) )
  {
LABEL_26:
    v25 = sub_B52A88(Instance);
    sub_B52A28(v25, 0LL);
  }
  v13 = *((_QWORD *)&Instance->fields.lookup + svtVoiceType);
  if ( !v13 )
    return 0;
  Instance = (DataManager_o *)System_Int32__ToString((int)voiceInfo + 52, 0LL);
  v14 = voiceInfo->fields.voiceEntity;
  if ( !v14
    || (v15 = (System_String_o *)Instance, (Instance = (DataManager_o *)v14->fields.id) == 0LL)
    || (v16 = (System_String_o *)((__int64 (__fastcall *)(DataManager_o *, void *))Instance->klass->vtable._3_ToString.method)(
                                   Instance,
                                   Instance->klass[1]._1.image),
        Instance = (DataManager_o *)System_String__Concat_44570600(
                                      v15,
                                      (System_String_o *)StringLiteral_16011/*"_"*/,
                                      v16,
                                      0LL),
        (v17 = *(_QWORD *)(v13 + 32)) == 0) )
  {
LABEL_25:
    sub_B52A5C(Instance, v9);
  }
  v18 = *(_DWORD *)(v17 + 24);
  if ( v18 < 1 )
    return 0;
  v19 = (System_String_o *)Instance;
  v20 = 0;
  while ( 1 )
  {
    if ( v20 >= v18 )
      goto LABEL_26;
    v21 = *(_QWORD *)(v17 + 8LL * (int)v20 + 32);
    if ( !v21 )
      goto LABEL_25;
    v22 = *(_QWORD *)(v21 + 64);
    if ( !v22 )
      goto LABEL_25;
    if ( !*(_DWORD *)(v22 + 24) )
      goto LABEL_26;
    v23 = *(_QWORD *)(v22 + 32);
    if ( !v23 )
      goto LABEL_25;
    Instance = (DataManager_o *)System_String__op_Equality(*(System_String_o **)(v23 + 16), v19, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( *(_DWORD *)(v21 + 80) )
        return 1;
    }
    v18 = *(_DWORD *)(v17 + 24);
    if ( (int)++v20 >= v18 )
      return 0;
  }
}


bool __fastcall ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
        ServantStatusVoiceListViewManager_o *this,
        int32_t svtId,
        VoiceInfo_o *voiceInfo,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v7; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  struct ServantVoiceCond_array *servantVoiceConds; // x22
  int max_length; // w8
  int64_t v11; // x19
  unsigned int v12; // w23
  bool v13; // w24
  ServantVoiceCond_o *v14; // x9
  int32_t condType; // w8
  int value; // w26
  __int64 v17; // x20
  __int64 v18; // x21
  __int64 v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_42B32E6 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B32E6 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    v11 = Instance;
    v12 = 0;
    v13 = 1;
    while ( 1 )
    {
      if ( v12 >= max_length )
      {
        v20 = sub_B52A88(Instance);
        sub_B52A28(v20, 0LL);
      }
      v14 = servantVoiceConds->m_Items[v12];
      if ( !v14 )
        break;
      condType = v14->fields.condType;
      value = v14->fields.value;
      if ( condType == 20 || condType == 3 )
        v13 = 0;
      if ( condType == 3 || condType == 20 )
      {
        if ( !v11 )
          break;
        v17 = *(_QWORD *)(v11 + 100);
        v18 = *(_QWORD *)(v11 + 108);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v21.fields.currentCryptoKey = v17;
        *(_QWORD *)&v21.fields.fakeValue = v18;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v21, 0LL);
        if ( (int)Instance >= value )
          v13 = 1;
      }
      max_length = servantVoiceConds->max_length;
      if ( (int)++v12 >= max_length )
        return v13;
    }
LABEL_29:
    sub_B52A5C(Instance, v7);
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
  if ( (byte_42B32ED & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_B52984(&ServantStatusVoiceListViewItem_TypeInfo);
    byte_42B32ED = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0LL
    || (v11 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v11)
    || (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
  {
    sub_B52A5C(this, obj);
  }
  if ( LOBYTE(linkItem[1].fields.sortValue2B) )
  {
    callbackFunc = v9->fields.callbackFunc;
    v9->fields.callbackFunc = 0LL;
    sub_B52920(
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

  if ( (byte_42B32EC & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B32EC = 1;
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
          sub_B52A5C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42B32EA & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_B52984(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42B32EA = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B52A5C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      ObjectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v15.fields.current;
      v11 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B52A5C(v12, v13);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusVoiceListViewObject__Init(
        (ServantStatusVoiceListViewObject_o *)current,
        mode,
        v11,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v14);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__RequestListObject_30954940(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42B32EB & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_B52984(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42B32EB = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B52A5C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      ObjectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v13.fields.current;
      v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B52A5C(v10, v11);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusVoiceListViewObject__Init(
        (ServantStatusVoiceListViewObject_o *)current,
        mode,
        v9,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v12);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusVoiceListViewManager__SetMode_30954000(this, mode, -1, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__SetMode_30954000(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        int32_t select,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemList; // x0
  __int64 v8; // x11
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  int size; // w8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v13; // x19
  unsigned int v14; // w21
  ServantStatusVoiceListViewObject_o *v15; // x20
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2
  int32_t v19; // w8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v20; // x20
  int v21; // w8
  __int64 v22; // x23
  ServantStatusVoiceListViewObject_o *v23; // x21
  System_Action_o *v24; // x22
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-60h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42B32E9 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
    sub_B52984(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_B52984(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42B32E9 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( mode == 2 )
  {
    itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_35;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v26,
      itemList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    for ( i = v26; ; BYTE1(i.fields.current[12].klass) = HIDWORD(i.fields.current[1].klass) == select )
    {
      v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &i,
             (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v9 )
        break;
      if ( !i.fields.current )
        sub_B52A5C(v9, v10);
      v8 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&i.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v8
        || (ServantStatusVoiceListViewItem_c *)i.fields.current->klass->_2.typeHierarchy[v8 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        sub_B52A5C(v9, v10);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                v11);
    if ( !itemList )
      goto LABEL_35;
    size = itemList->fields._size;
    v13 = itemList;
    if ( size >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( size <= v14 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v15 = (ServantStatusVoiceListViewObject_o *)v13->fields._items->m_Items[v14];
        if ( !v15 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        ServantStatusVoiceListViewObject__Init(
          v15,
          4,
          0LL,
          zero.fields.x,
          *(UnityEngine_Vector3_o *)&zero.fields.y,
          v16);
        size = v13->fields._size;
        if ( (int)++v14 >= size )
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
                                                                                                  v17);
      if ( !itemList )
        goto LABEL_35;
      v19 = itemList->fields._size;
      v20 = itemList;
      if ( v19 < 1 )
      {
        this->fields.callbackCount = 1;
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
          0.2,
          0LL);
      }
      else
      {
        this->fields.callbackCount = v19;
        v21 = itemList->fields._size;
        if ( v21 >= 1 )
        {
          v22 = 0LL;
          while ( 1 )
          {
            if ( v21 <= (unsigned int)v22 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
            v23 = (ServantStatusVoiceListViewObject_o *)v20->fields._items->m_Items[v22];
            v24 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
            System_Action___ctor(v24, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
            if ( !v23 )
              break;
            v29 = UnityEngine_Vector3__get_zero(0LL);
            ServantStatusVoiceListViewObject__Init(
              v23,
              5,
              v24,
              v29.fields.x,
              *(UnityEngine_Vector3_o *)&v29.fields.y,
              v25);
            v21 = v20->fields._size;
            if ( (int)++v22 >= v21 )
              return;
          }
LABEL_35:
          sub_B52A5C(itemList, *(_QWORD *)&mode);
        }
      }
    }
    else if ( mode == 1 )
    {
      ServantStatusVoiceListViewManager__RequestListObject_30954940(this, 3, v18);
    }
  }
}


void __fastcall ServantStatusVoiceListViewManager__SetMode_30954880(
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusVoiceListViewManager__SetMode_30954000(this, mode, -1, v10);
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
  if ( (byte_42B32E8 & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_B52984(&ServantStatusVoiceListViewObject_TypeInfo);
    byte_42B32E8 = 1;
  }
  if ( !obj
    || (v6 = *(&ServantStatusVoiceListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantStatusVoiceListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantStatusVoiceListViewObject_TypeInfo )
  {
    sub_B52A5C(this, obj);
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

  if ( (byte_42B32DD & 1) == 0 )
  {
    sub_B52984(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    byte_42B32DD = 1;
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
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
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

  if ( (byte_42B32DF & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B32DF = 1;
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
    v8 = sub_B4739C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
  ServantStatusVoiceListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *__fastcall ServantStatusVoiceListViewManager__get_ClippingObjectList(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  ServantStatusVoiceListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42B32E2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B32E2 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B52A5C(v7, v8);
      Component_srcLineSprite = (ServantStatusVoiceListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        (UnityEngine_GameObject_o *)current,
                                                                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B52A5C(0LL, v10);
      Item = (ListViewItem_o *)ServantStatusVoiceListViewObject__GetItem(Component_srcLineSprite, v10);
      if ( !Item )
        sub_B52A5C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_23551160((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B52A5C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B52A5C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *)v3;
}


System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *__fastcall ServantStatusVoiceListViewManager__get_ObjectList(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42B32E1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B32E1 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B52A5C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      if ( !v3 )
        sub_B52A5C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *)v3;
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

  if ( (byte_42B32DE & 1) == 0 )
  {
    sub_B52984(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    byte_42B32DE = 1;
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
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
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

  if ( (byte_42B32E0 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B32E0 = 1;
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
    v8 = sub_B4739C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
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
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall ServantStatusVoiceListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v11; // [xsp+18h] [xbp-28h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-24h] BYREF

  v11 = result;
  v12 = kind;
  if ( (byte_42AD393 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&ServantStatusVoiceListViewManager_ResultKind_TypeInfo);
    byte_42AD393 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(ServantStatusVoiceListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_B52928(this, v10, callback, object);
}


void __fastcall ServantStatusVoiceListViewManager_CallbackFunc__EndInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B529B4(v23) & 1) == 0 )
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
      v25 = sub_B529AC(v23);
      v26 = sub_B52DB0(v23);
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
            v19 = sub_AEB880(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B52A34(v18, v23);
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
            v17 = sub_AEB880(v22, class_0, v10, v12);
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