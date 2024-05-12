void __fastcall ServantStatusVoiceListViewManager___ctor(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.transformNameAddHeight = 34;
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

  if ( (byte_438DCB4 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438DCB4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_VoiceMaster___);
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
        v25 = sub_B776C8(Instance);
        sub_B77668(v25, 0LL);
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
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v34, 0LL);
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
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v35, 0LL);
      if ( v16 >= LODWORD(v15->fields.datalist) )
        goto LABEL_28;
      v21 = (VoiceInfo_o *)*((_QWORD *)&v15->fields.lookup + v16);
      v22 = (int)Instance;
      v23 = *firstPriority;
      v24 = (ServantStatusVoiceListViewItem_o *)sub_B77694(ServantStatusVoiceListViewItem_TypeInfo);
      ServantStatusVoiceListViewItem___ctor(v24, size, svtId, v22, 0, v21, v23, 0, 0, v26);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (__int64)++v16 >= SLODWORD(v15->fields.datalist) )
        goto LABEL_25;
    }
LABEL_27:
    sub_B7769C(Instance, v7);
  }
}


void __fastcall ServantStatusVoiceListViewManager__Awake(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  void *scrollView; // x0
  float v4; // w9

  if ( (byte_438DCB3 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_438DCB3 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__GetComponent_WebViewObject_(
                       (UnityEngine_Component_o *)scrollView,
                       (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL )
  {
    sub_B7769C(scrollView, method);
  }
  v4 = *((float *)scrollView + 75);
  this->fields.defaultPanelCenter = *((float *)scrollView + 73);
  this->fields.defaultPanelHeight = v4;
}


void __fastcall ServantStatusVoiceListViewManager__CreateList(
        ServantStatusVoiceListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        System_Int32_array *changeSvtVoiceIdList,
        const MethodInfo *method)
{
  float defaultPanelCenter; // s9
  float defaultPanelHeight; // s8
  __int64 v7; // x22
  void *transformNameSprite; // x0
  const MethodInfo *v9; // x1
  _BOOL4 IsTransformServant_k__BackingField; // w19
  UILabel_o *transformNameLabel; // x19
  float transformNameAddHeight; // s0
  struct UIScrollView_o *scrollView; // x8
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x19
  int64_t UserId; // x20
  VoiceMaster_o *v16; // x24
  System_Collections_Generic_List_VoiceCondType_Type__o *v17; // x19
  System_Int32_array *v18; // x9
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x19
  int32_t maxLimitCount; // w20
  System_Int32_array *VoiceLimitCountList; // x22
  const MethodInfo *v24; // x5
  ServantVoiceRelationEntity_array *v25; // x19
  int32_t v26; // w0
  const MethodInfo *v27; // x4
  ServantVoiceRelationEntity_array *v28; // x19
  int32_t v29; // w0
  const MethodInfo *v30; // x4
  __int64 v31; // x8
  int32_t v32; // w19
  unsigned __int64 v33; // x9
  int32_t v34; // w0
  BalanceConfig_c *v35; // x8
  int32_t v36; // w19
  __int64 v37; // x1
  _QWORD *v38; // x23
  unsigned __int64 v39; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x20
  int32_t v41; // w24
  int32_t v42; // w19
  VoiceInfo_o *v43; // x26
  int32_t ServantIdMashu3; // w27
  ServantStatusVoiceListViewItem_o *v45; // x28
  int32_t v46; // w28
  int32_t v47; // w22
  __int64 v48; // x0
  __int64 v49; // x1
  const MethodInfo *v50; // x4
  int v51; // w8
  _DWORD *v52; // x26
  unsigned int i; // w25
  char *v54; // x23
  VoiceInfo_o *v55; // x3
  VoiceInfo_o **v56; // x23
  VoiceInfo_o *v57; // t1
  struct VoiceEntity_o *voiceEntity; // x24
  int32_t condType; // w9
  int v60; // w28
  _BOOL4 v61; // w8
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x3
  char v64; // w22
  _BOOL8 v65; // x0
  const MethodInfo *v66; // x1
  Il2CppObject *v67; // x27
  __int64 v68; // x10
  Il2CppClass *v69; // x8
  __int64 v70; // x0
  __int64 v71; // x1
  struct VoiceEntity_o *v72; // x8
  int32_t v73; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x19
  __int64 v75; // x1
  System_String_o *v76; // x2
  __int64 v77; // x0
  int32_t v78; // w5
  const MethodInfo *v79; // x6
  struct VoiceEntity_o *v80; // x8
  int32_t v81; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v82; // x19
  System_String_o *v83; // x2
  int32_t v84; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x20
  bool v86; // w28
  bool v87; // w21
  char v88; // w19
  int32_t size; // w24
  VoiceInfo_o *v90; // x23
  int32_t v91; // w27
  bool v92; // w19
  ServantStatusVoiceListViewItem_o *v93; // x28
  _BOOL8 v94; // x0
  const MethodInfo *v95; // x1
  Il2CppObject *current; // x27
  __int64 v97; // x10
  Il2CppClass *klass; // x8
  __int64 v99; // x0
  int32_t v100; // w5
  const MethodInfo *v101; // x6
  __int64 v102; // x0
  __int64 v103; // x0
  __int64 v104; // x0
  int32_t v105; // w19
  WarMessageEntity_o *v106; // x27
  __int64 v107; // x1
  UserServantCollectionMaster_o *v108; // x19
  int64_t v109; // x20
  int32_t v110; // w0
  BalanceConfig_c *v111; // x8
  int32_t v112; // w19
  unsigned int *v113; // x27
  unsigned __int64 v114; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v115; // x20
  int32_t v116; // w24
  ServantStatusVoiceListViewManager_o *v117; // x25
  int32_t v118; // w19
  int32_t v119; // w21
  VoiceInfo_o *v120; // x23
  int32_t ServantIdHyde; // w28
  ServantStatusVoiceListViewItem_o *v122; // x0
  int32_t v123; // w3
  EventMissionProgressRequest_Argument_ProgressData_o *v124; // x26
  BalanceConfig_c *v125; // x8
  int v126; // w19
  int32_t v127; // w0
  BalanceConfig_c *v128; // x8
  int32_t v129; // w19
  VoiceInfo_array *EnableInfo; // x0
  __int64 v131; // x1
  VoiceInfo_array *v132; // x27
  unsigned __int64 v133; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v134; // x20
  int32_t v135; // w24
  int32_t v136; // w19
  VoiceInfo_o *v137; // x23
  int32_t ServantIdMashu2; // w26
  ServantStatusVoiceListViewItem_o *v139; // x28
  int64_t v140; // x0
  BalanceConfig_c *v141; // x8
  int64_t v142; // x20
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t MashuTdGradeUpQuestId; // w19
  int32_t MashuTdGradeUpQuestPhase; // w23
  int32_t svtVoiceId; // w19
  ServantVoiceRelationEntity_array *v147; // x19
  int32_t v148; // w0
  const MethodInfo *v149; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v150; // x8
  signed __int64 v151; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v152; // x20
  int v153; // w8
  unsigned __int64 v154; // x24
  signed __int64 v155; // x22
  __int64 v156; // x25
  struct System_Collections_Generic_List_ListViewItem__o *v157; // x19
  ServantStatusVoiceListViewItem_o *v158; // x21
  __int64 v159; // x10
  const MethodInfo *v160; // x2
  __int64 v161; // x26
  struct System_Collections_Generic_List_ListViewItem__o *v162; // x19
  ServantStatusVoiceListViewItem_o *v163; // x22
  __int64 v164; // x10
  System_String_o *OpenName; // x19
  const MethodInfo *v166; // x1
  System_String_o *v167; // x0
  int32_t v168; // w21
  _BOOL8 v169; // x0
  __int64 v170; // x1
  const MethodInfo *v171; // x2
  __int64 v172; // x11
  __int64 v173; // x11
  Il2CppObject *v174; // x0
  UILabel_o *explanationLabel; // x19
  UILabel_o *emptyMessageLabel; // x19
  __int64 v177; // x0
  BalanceConfig_c *v178; // x8
  bool voiceLabelSpec; // [xsp+0h] [xbp-180h]
  const MethodInfo *v180; // [xsp+8h] [xbp-178h]
  System_String_o *v181; // [xsp+18h] [xbp-168h]
  UserServantCollectionEntity_o *EntityDefinitely; // [xsp+20h] [xbp-160h]
  unsigned __int64 v184; // [xsp+30h] [xbp-150h]
  ServantLimitAddMaster_o *v185; // [xsp+38h] [xbp-148h]
  System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList; // [xsp+40h] [xbp-140h]
  System_Int32_array *v187; // [xsp+48h] [xbp-138h]
  DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *v188; // [xsp+50h] [xbp-130h]
  unsigned __int64 v189; // [xsp+58h] [xbp-128h]
  char *v190; // [xsp+60h] [xbp-120h]
  VoicePlayCondMaster_o *v191; // [xsp+68h] [xbp-118h]
  int32_t v192; // [xsp+74h] [xbp-10Ch]
  ServantStatusVoiceListViewManager_o *v193; // [xsp+78h] [xbp-108h]
  int32_t limitCount; // [xsp+80h] [xbp-100h]
  int32_t svtId; // [xsp+84h] [xbp-FCh]
  signed __int64 v197; // [xsp+88h] [xbp-F8h]
  _BYTE v198[44]; // [xsp+90h] [xbp-F0h] BYREF
  int v199; // [xsp+BCh] [xbp-C4h]
  System_Collections_Generic_List_Enumerator_T__o v200; // [xsp+C0h] [xbp-C0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+D8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v202; // [xsp+E0h] [xbp-A0h] BYREF
  ServantVoiceRelationEntity_array *afterRelationList; // [xsp+F8h] [xbp-88h] BYREF
  ServantVoiceRelationEntity_array *sameRelationList; // [xsp+100h] [xbp-80h] BYREF
  ServantVoiceRelationEntity_array *beforeRelationList; // [xsp+108h] [xbp-78h] BYREF
  int32_t firstPriority[3]; // [xsp+114h] [xbp-6Ch] BYREF
  UnityEngine_Vector4_o v207; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438DCB5 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_VoiceMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_CondType_Kind__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_CondType_Kind___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_CondType_Kind__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B775C4(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&TutorialFlag_TypeInfo);
    sub_B775C4(&StringLiteral_2305/*"B050"*/);
    sub_B775C4(&StringLiteral_15376/*"VOICE_EMPTY_MESSAGE"*/);
    sub_B775C4(&StringLiteral_12280/*"SERVANT_STATUS_VOICE_EXPLANATION"*/);
    byte_438DCB5 = 1;
  }
  firstPriority[0] = 0;
  sameRelationList = 0LL;
  beforeRelationList = 0LL;
  afterRelationList = 0LL;
  memset(&v202, 0, sizeof(v202));
  entity = 0LL;
  memset(&v200, 0, sizeof(v200));
  v199 = 0;
  defaultPanelCenter = this->fields.defaultPanelCenter;
  defaultPanelHeight = this->fields.defaultPanelHeight;
  v7 = StringLiteral_15376/*"VOICE_EMPTY_MESSAGE"*/;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !mainInfo )
    goto LABEL_265;
  transformNameSprite = this->fields.transformNameSprite;
  if ( !transformNameSprite )
    goto LABEL_265;
  IsTransformServant_k__BackingField = mainInfo->fields._IsTransformServant_k__BackingField;
  transformNameSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transformNameSprite, 0LL);
  if ( !transformNameSprite )
    goto LABEL_265;
  if ( IsTransformServant_k__BackingField )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameSprite, 1, 0LL);
    transformNameLabel = this->fields.transformNameLabel;
    transformNameSprite = ServantStatusListViewItem__GetTransformName(mainInfo, 0LL);
    if ( !transformNameLabel )
      goto LABEL_265;
    UILabel__set_text(transformNameLabel, (System_String_o *)transformNameSprite, 0LL);
    transformNameAddHeight = (float)this->fields.transformNameAddHeight;
    defaultPanelCenter = defaultPanelCenter + (float)(transformNameAddHeight * -0.5);
    defaultPanelHeight = defaultPanelHeight - transformNameAddHeight;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameSprite, 0, 0LL);
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_265;
  transformNameSprite = *(void **)&scrollView->fields.mPlane.fields.m_Normal.fields.x;
  if ( !transformNameSprite )
    goto LABEL_265;
  v207.fields.x = *((float *)transformNameSprite + 72);
  v207.fields.z = *((float *)transformNameSprite + 74);
  v207.fields.y = defaultPanelCenter;
  v207.fields.w = defaultPanelHeight;
  UIPanel__set_baseClipRegion((UIPanel_o *)transformNameSprite, v207, 0LL);
  transformNameSprite = this->fields.scrollView;
  if ( !transformNameSprite )
    goto LABEL_265;
  UIScrollView__ResetPosition((UIScrollView_o *)transformNameSprite, 0LL);
  this->fields.execObjectExtraFlag = 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_265;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       Master_WarQuestSelectionMaster,
                       UserId,
                       (int32_t)transformNameSprite,
                       0LL);
  v16 = (VoiceMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_VoiceMaster___);
  v191 = (VoicePlayCondMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v185 = (ServantLimitAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  firstPriority[0] = 0;
  v17 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B77694(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v17,
    (const MethodInfo_30E8064 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v17
    || (disableCondTypeList = (System_Collections_Generic_List_CondType_Kind__o *)v17,
        System_Collections_Generic_List_VoiceCondType_Type___Add(
          v17,
          81,
          (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_CondType_Kind__Add__),
        (v18 = changeSvtVoiceIdList) == 0LL) )
  {
LABEL_265:
    sub_B7769C(transformNameSprite, v9);
  }
  v19 = *(_QWORD *)&changeSvtVoiceIdList->max_length;
  v181 = (System_String_o *)v7;
  v193 = this;
  if ( (int)v19 >= 1 )
  {
    v20 = 0LL;
    v188 = (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)v16;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v19 )
        goto LABEL_261;
      v184 = v20;
      svtId = v18->m_Items[v20 + 1];
      transformNameSprite = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_265;
      MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)transformNameSprite,
                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      transformNameSprite = EntityDefinitely;
      if ( !EntityDefinitely )
        goto LABEL_265;
      maxLimitCount = EntityDefinitely->fields.maxLimitCount;
      transformNameSprite = UserServantCollectionEntity__getCostumeList(EntityDefinitely, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_265;
      VoiceLimitCountList = ServantLimitAddMaster__getVoiceLimitCountList(
                              MasterData_WarQuestSelectionMaster,
                              svtId,
                              maxLimitCount,
                              (System_Int32_array *)transformNameSprite,
                              0LL);
      transformNameSprite = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_265;
      transformNameSprite = DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)transformNameSprite,
                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !transformNameSprite )
        goto LABEL_265;
      ServantVoiceRelationMaster__GetRelationList_30243272(
        (ServantVoiceRelationMaster_o *)transformNameSprite,
        &beforeRelationList,
        &sameRelationList,
        &afterRelationList,
        svtId,
        v24);
      v25 = beforeRelationList;
      v26 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, firstPriority, v25, v26, v27);
      v28 = sameRelationList;
      ++firstPriority[0];
      v29 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, firstPriority, v28, v29, v30);
      if ( !VoiceLimitCountList )
        goto LABEL_265;
      v31 = *(_QWORD *)&VoiceLimitCountList->max_length;
      v32 = firstPriority[0];
      if ( (int)v31 >= 1 )
        break;
      v46 = firstPriority[0];
LABEL_211:
      v147 = afterRelationList;
      firstPriority[0] = v46;
      v148 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, firstPriority, v147, v148, v149);
      v18 = changeSvtVoiceIdList;
      LODWORD(v19) = changeSvtVoiceIdList->max_length;
      v20 = v184 + 1;
      if ( (__int64)(v184 + 1) >= (int)v19 )
        goto LABEL_212;
    }
    v33 = 0LL;
    v187 = VoiceLimitCountList;
    while ( 1 )
    {
      if ( v33 >= (unsigned int)v31 )
      {
        firstPriority[0] = v32;
        goto LABEL_261;
      }
      v47 = VoiceLimitCountList->m_Items[v33 + 1];
      v189 = v33;
      v48 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      if ( !v16 )
      {
        firstPriority[0] = v32;
        sub_B7769C(v48, v49);
      }
      v192 = v32;
      transformNameSprite = VoiceMaster__getEnableInfo(v16, v48, svtId, v47, disableCondTypeList, 0, 0, 0LL);
      if ( !transformNameSprite )
        goto LABEL_259;
      v51 = *((_DWORD *)transformNameSprite + 6);
      v52 = transformNameSprite;
      limitCount = v47;
      if ( v51 >= 1 )
      {
        for ( i = 0; (int)i < v51; ++i )
        {
          if ( i >= v51 )
          {
LABEL_260:
            firstPriority[0] = v192;
            goto LABEL_261;
          }
          v54 = (char *)&v52[2 * i];
          v57 = (VoiceInfo_o *)*((_QWORD *)v54 + 4);
          v56 = (VoiceInfo_o **)(v54 + 32);
          v55 = v57;
          if ( !v57 )
            goto LABEL_259;
          voiceEntity = v55->fields.voiceEntity;
          if ( v47 > 10 )
            goto LABEL_97;
          if ( !voiceEntity )
            goto LABEL_259;
          if ( voiceEntity->fields.svtVoiceType != 2 )
            goto LABEL_97;
          condType = voiceEntity->fields.condType;
          if ( condType == 7 )
          {
            if ( voiceEntity->fields.condValue == 2 )
            {
              v60 = 1;
            }
            else
            {
              transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                              (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                              svtId,
                                              v47,
                                              v55,
                                              v50);
              if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              {
                if ( i >= v52[6] )
                  goto LABEL_260;
                transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                                                (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                                svtId,
                                                *v56,
                                                v63);
                if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
                  goto LABEL_109;
                goto LABEL_71;
              }
              transformNameSprite = this->fields.itemList;
              if ( !transformNameSprite )
                goto LABEL_259;
              System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)v198,
                (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)transformNameSprite,
                (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
              v202 = *(System_Collections_Generic_List_Enumerator_T__o *)v198;
              do
              {
                v94 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                        &v202,
                        (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                if ( !v94 )
                {
                  v60 = 1;
                  goto LABEL_125;
                }
                current = v202.fields.current;
                if ( !v202.fields.current
                  || (v97 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
                      *(&v202.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v97)
                  || (ServantStatusVoiceListViewItem_c *)v202.fields.current->klass->_2.typeHierarchy[v97 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                {
                  sub_B7769C(v94, v95);
                }
                klass = v202.fields.current[10].klass;
                if ( !klass )
                  sub_B7769C(v94, v95);
              }
              while ( HIDWORD(klass->_1.namespaze) != 2
                   || LODWORD(klass->_1.this_arg.data) != 7
                   || HIDWORD(klass->_1.this_arg.data) != voiceEntity->fields.condValue
                   || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                        (ServantStatusVoiceListViewItem_o *)v202.fields.current,
                        v95) != svtId );
              v99 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
              if ( i >= v52[6] )
              {
                v104 = sub_B776C8(v99);
                sub_B77668(v104, 0LL);
              }
              ServantStatusVoiceListViewItem__SetLimitCount(
                (ServantStatusVoiceListViewItem_o *)current,
                v99,
                svtId,
                v47,
                *v56,
                v100,
                v101);
              v60 = 0;
LABEL_125:
              *(_DWORD *)&v198[4 * v199++ + 24] = 860;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                &v202,
                (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
              if ( v199 && *(_DWORD *)&v198[4 * v199 + 20] == 860 )
              {
                --v199;
                if ( !v60 )
                  goto LABEL_109;
                goto LABEL_97;
              }
            }
            condType = voiceEntity->fields.condType;
          }
          else
          {
            v60 = 1;
          }
          v61 = v60 != 0;
          if ( condType != 18 )
            goto LABEL_96;
          if ( i >= v52[6] )
            goto LABEL_260;
          transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                          (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                          svtId,
                                          v47,
                                          *v56,
                                          v50);
          if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
          {
            transformNameSprite = this->fields.itemList;
            if ( !transformNameSprite )
              goto LABEL_259;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v198,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)transformNameSprite,
              (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v202 = *(System_Collections_Generic_List_Enumerator_T__o *)v198;
            while ( 1 )
            {
              v65 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v202,
                      (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v65 )
                break;
              v67 = v202.fields.current;
              if ( !v202.fields.current
                || (v68 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
                    *(&v202.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v68)
                || (ServantStatusVoiceListViewItem_c *)v202.fields.current->klass->_2.typeHierarchy[v68 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                sub_B7769C(v65, v66);
              }
              v69 = v202.fields.current[10].klass;
              if ( !v69 )
                sub_B7769C(v65, v66);
              if ( HIDWORD(v69->_1.namespaze) == 2
                && LODWORD(v69->_1.this_arg.data) == 18
                && ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                     (ServantStatusVoiceListViewItem_o *)v202.fields.current,
                     v66) == svtId )
              {
                v70 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                if ( i >= v52[6] )
                {
                  v102 = sub_B776C8(v70);
                  sub_B77668(v102, 0LL);
                }
                if ( !*v56 )
                  sub_B7769C(v70, v71);
                v72 = (*v56)->fields.voiceEntity;
                if ( !v72 )
                  sub_B7769C(v70, v71);
                v73 = v70;
                id = v72->fields.id;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                }
                v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45464420(id, 0LL);
                if ( !v191 )
                  sub_B7769C(0LL, v75);
                if ( !VoicePlayCondMaster__isVoiceCond(v191, v73, v76, 81, 0LL) )
                {
                  v77 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                  if ( i >= v52[6] )
                  {
                    v103 = sub_B776C8(v77);
                    sub_B77668(v103, 0LL);
                  }
                  ServantStatusVoiceListViewItem__SetLimitCount(
                    (ServantStatusVoiceListViewItem_o *)v67,
                    v77,
                    svtId,
                    v47,
                    *v56,
                    v78,
                    v79);
                  v60 = 0;
                }
                break;
              }
            }
            *(_DWORD *)&v198[4 * v199++ + 24] = 860;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v202,
              (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
            v61 = v60 != 0;
            if ( v199 && *(_DWORD *)&v198[4 * v199 + 20] == 860 )
            {
              --v199;
              if ( !v60 )
                goto LABEL_109;
            }
            else
            {
LABEL_96:
              if ( !v61 )
                goto LABEL_109;
            }
LABEL_97:
            v64 = 0;
            goto LABEL_98;
          }
          if ( i >= v52[6] )
            goto LABEL_260;
          transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                                          (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                          svtId,
                                          *v56,
                                          v62);
          if ( !v60 || ((unsigned __int8)transformNameSprite & 1) == 0 )
            goto LABEL_109;
LABEL_71:
          v64 = 1;
LABEL_98:
          transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
          if ( i >= v52[6] )
            goto LABEL_260;
          if ( !*v56 )
            goto LABEL_259;
          v80 = (*v56)->fields.voiceEntity;
          if ( !v80 )
            goto LABEL_259;
          v81 = (int)transformNameSprite;
          v82 = v80->fields.id;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45464420(v82, 0LL);
          transformNameSprite = v191;
          if ( !v191 )
            goto LABEL_259;
          transformNameSprite = (void *)VoicePlayCondMaster__isVoiceCond(v191, v81, v83, 81, 0LL);
          if ( !voiceEntity )
            goto LABEL_259;
          v84 = voiceEntity->fields.condType;
          itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
          v86 = v84 == 18;
          v87 = v84 == 7;
          if ( !itemList )
            goto LABEL_259;
          v88 = (char)transformNameSprite;
          size = itemList->fields._size;
          transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
          if ( i >= v52[6] )
            goto LABEL_260;
          v90 = *v56;
          v91 = (int)transformNameSprite;
          v92 = v88 & (v86 || v87);
          voiceLabelSpec = v64;
          v47 = limitCount;
          v93 = (ServantStatusVoiceListViewItem_o *)sub_B77694(ServantStatusVoiceListViewItem_TypeInfo);
          ServantStatusVoiceListViewItem___ctor(v93, size, v91, svtId, limitCount, v90, v192, v92, voiceLabelSpec, v180);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            itemList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v93,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          this = v193;
LABEL_109:
          v51 = v52[6];
        }
      }
      v46 = v192 + 1;
      v105 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      v178 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v178 = BalanceConfig_TypeInfo;
      }
      v16 = (VoiceMaster_o *)v188;
      if ( v105 == v178->static_fields->ServantIdJekyll )
      {
        v106 = DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                 v188,
                 (System_String_o *)StringLiteral_2305/*"B050"*/,
                 (const MethodInfo_21FBCE4 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string__GetEntity__);
        transformNameSprite = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transformNameSprite )
          goto LABEL_263;
        v108 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)transformNameSprite,
                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v109 = NetworkManager__get_UserId(0LL);
        transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
        if ( !v108 )
          goto LABEL_263;
        transformNameSprite = UserServantCollectionMaster__GetEntityDefinitely(
                                v108,
                                v109,
                                (int32_t)transformNameSprite,
                                0LL);
        if ( !v106 )
          goto LABEL_263;
        if ( v106->fields.condId != 17 )
          goto LABEL_152;
        if ( !transformNameSprite )
          goto LABEL_263;
        transformNameSprite = (void *)UserServantCollectionEntity__IsPlayed(
                                        (UserServantCollectionEntity_o *)transformNameSprite,
                                        v106->fields.condNum,
                                        0LL);
        if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
        {
LABEL_152:
          v110 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
          v111 = BalanceConfig_TypeInfo;
          v112 = v110;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v111 = BalanceConfig_TypeInfo;
          }
          transformNameSprite = VoiceMaster__getEnableInfo(
                                  (VoiceMaster_o *)v188,
                                  v112,
                                  v111->static_fields->ServantIdHyde,
                                  v47,
                                  0LL,
                                  0,
                                  0,
                                  0LL);
          if ( !transformNameSprite )
            goto LABEL_263;
          v113 = (unsigned int *)transformNameSprite;
          if ( *((int *)transformNameSprite + 6) >= 1 )
          {
            v114 = 0LL;
            v190 = (char *)transformNameSprite + 32;
            while ( 1 )
            {
              v115 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
              if ( !v115 )
                break;
              v116 = v115->fields._size;
              v117 = this;
              transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
              v118 = (int)transformNameSprite;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              }
              v119 = v46;
              if ( v114 >= v113[6] )
                goto LABEL_262;
              v120 = *(VoiceInfo_o **)&v190[8 * v114];
              ServantIdHyde = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
              v122 = (ServantStatusVoiceListViewItem_o *)sub_B77694(ServantStatusVoiceListViewItem_TypeInfo);
              v123 = ServantIdHyde;
              v124 = (EventMissionProgressRequest_Argument_ProgressData_o *)v122;
              v46 = v119;
              ServantStatusVoiceListViewItem___ctor(v122, v116, v118, v123, limitCount, v120, v119, 0, 0, v180);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v115,
                v124,
                (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
              ++v114;
              this = v117;
              if ( (__int64)v114 >= (int)v113[6] )
                goto LABEL_164;
            }
LABEL_263:
            firstPriority[0] = v46;
            sub_B7769C(transformNameSprite, v107);
          }
LABEL_164:
          v46 = v192 + 2;
LABEL_165:
          v16 = (VoiceMaster_o *)v188;
        }
      }
      else
      {
        transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
        v125 = BalanceConfig_TypeInfo;
        v126 = (int)transformNameSprite;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v125 = BalanceConfig_TypeInfo;
        }
        if ( v126 == v125->static_fields->ServantIdMashu1 )
        {
          if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TutorialFlag_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          }
          if ( TutorialFlag__Get_29515752(115, 0LL) )
          {
            v127 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
            v128 = BalanceConfig_TypeInfo;
            v129 = v127;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v128 = BalanceConfig_TypeInfo;
            }
            v119 = v192 + 1;
            EnableInfo = VoiceMaster__getEnableInfo(
                           (VoiceMaster_o *)v188,
                           v129,
                           v128->static_fields->ServantIdMashu2,
                           v47,
                           0LL,
                           0,
                           0,
                           0LL);
            if ( !EnableInfo )
            {
LABEL_264:
              firstPriority[0] = v192 + 1;
              sub_B7769C(EnableInfo, v131);
            }
            v132 = EnableInfo;
            if ( (int)EnableInfo->max_length >= 1 )
            {
              v133 = 0LL;
              while ( 1 )
              {
                v134 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v193->fields.itemList;
                if ( !v134 )
                  goto LABEL_264;
                v135 = v134->fields._size;
                transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                v136 = (int)transformNameSprite;
                if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                }
                if ( v133 >= v132->max_length )
                  break;
                v137 = v132->m_Items[v133];
                ServantIdMashu2 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu2;
                v139 = (ServantStatusVoiceListViewItem_o *)sub_B77694(ServantStatusVoiceListViewItem_TypeInfo);
                ServantStatusVoiceListViewItem___ctor(
                  v139,
                  v135,
                  v136,
                  ServantIdMashu2,
                  limitCount,
                  v137,
                  v119,
                  0,
                  0,
                  v180);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v134,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v139,
                  (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                if ( (__int64)++v133 >= (int)v132->max_length )
                  goto LABEL_186;
              }
LABEL_262:
              firstPriority[0] = v119;
LABEL_261:
              v177 = sub_B776C8(transformNameSprite);
              sub_B77668(v177, 0LL);
            }
LABEL_186:
            v47 = limitCount;
            this = v193;
            v46 = v192 + 2;
          }
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          v140 = NetworkManager__get_UserId(0LL);
          v141 = BalanceConfig_TypeInfo;
          v142 = v140;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
          {
            v16 = (VoiceMaster_o *)v188;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v141 = BalanceConfig_TypeInfo;
            }
          }
          else
          {
            v16 = (VoiceMaster_o *)v188;
          }
          static_fields = v141->static_fields;
          MashuTdGradeUpQuestId = static_fields->MashuTdGradeUpQuestId;
          MashuTdGradeUpQuestPhase = static_fields->MashuTdGradeUpQuestPhase;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          transformNameSprite = (void *)CondType__IsQuestPhaseClear(
                                          v142,
                                          MashuTdGradeUpQuestId,
                                          MashuTdGradeUpQuestPhase,
                                          -1,
                                          0,
                                          0LL);
          if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
          {
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            }
            transformNameSprite = v185;
            if ( !v185 )
              goto LABEL_263;
            transformNameSprite = (void *)ServantLimitAddMaster__TryGetEntity(
                                            v185,
                                            &entity,
                                            BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                            v47,
                                            0LL);
            if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_263;
              transformNameSprite = BalanceConfig_TypeInfo;
              svtVoiceId = entity->fields.svtVoiceId;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                transformNameSprite = BalanceConfig_TypeInfo;
              }
              if ( svtVoiceId != *(_DWORD *)(*((_QWORD *)transformNameSprite + 23) + 344LL) )
              {
                v34 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                v35 = BalanceConfig_TypeInfo;
                v36 = v34;
                if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  v35 = BalanceConfig_TypeInfo;
                }
                v192 = v46;
                transformNameSprite = VoiceMaster__getEnableInfo(
                                        v16,
                                        v36,
                                        v35->static_fields->ServantIdMashu3,
                                        v47,
                                        0LL,
                                        0,
                                        0,
                                        0LL);
                if ( !transformNameSprite )
                  goto LABEL_259;
                v38 = transformNameSprite;
                if ( *((int *)transformNameSprite + 6) >= 1 )
                {
                  v39 = 0LL;
                  while ( 1 )
                  {
                    v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
                    if ( !v40 )
                      break;
                    v41 = v40->fields._size;
                    transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                    v42 = (int)transformNameSprite;
                    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    }
                    if ( v39 >= *((unsigned int *)v38 + 6) )
                      goto LABEL_260;
                    v43 = (VoiceInfo_o *)v38[v39 + 4];
                    ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
                    v45 = (ServantStatusVoiceListViewItem_o *)sub_B77694(ServantStatusVoiceListViewItem_TypeInfo);
                    ServantStatusVoiceListViewItem___ctor(
                      v45,
                      v41,
                      v42,
                      ServantIdMashu3,
                      limitCount,
                      v43,
                      v192,
                      0,
                      0,
                      v180);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v40,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
                      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                    if ( (__int64)++v39 >= *((int *)v38 + 6) )
                      goto LABEL_45;
                  }
LABEL_259:
                  firstPriority[0] = v192;
                  sub_B7769C(transformNameSprite, v37);
                }
LABEL_45:
                v46 = v192 + 1;
                goto LABEL_165;
              }
            }
          }
        }
      }
      VoiceLimitCountList = v187;
      v32 = v46;
      LODWORD(v31) = v187->max_length;
      v33 = v189 + 1;
      if ( (__int64)(v189 + 1) >= (int)v31 )
        goto LABEL_211;
    }
  }
LABEL_212:
  v150 = this->fields.itemList;
  if ( !v150 )
    goto LABEL_265;
  v151 = v150->fields._size;
  v152 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v152,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
  v153 = v151 - 1;
  if ( (int)v151 - 1 >= 1 )
  {
    v154 = 0LL;
    v155 = v153;
    v156 = 5LL;
    v197 = v153;
    do
    {
      v157 = this->fields.itemList;
      if ( !v157 )
        goto LABEL_265;
      if ( v154 >= (unsigned int)v157->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v158 = (ServantStatusVoiceListViewItem_o *)v157->fields._items->m_Items[v154];
      if ( !v158 )
        goto LABEL_265;
      v159 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v158->klass->_2.bitflags2 + 1) < (unsigned int)v159
        || (ServantStatusVoiceListViewItem_c *)v158->klass->_2.typeHierarchy[v159 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        goto LABEL_265;
      }
      transformNameSprite = ServantStatusVoiceListViewItem__get_OpenName(v158, v9);
      if ( transformNameSprite )
      {
        transformNameSprite = (void *)ServantStatusVoiceListViewItem__get_DispNum(v158, v9);
        if ( !(_DWORD)transformNameSprite )
        {
          if ( !v152 )
            goto LABEL_265;
          System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)v152,
            (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__);
          if ( (__int64)(v154 + 1) < v151 )
          {
            v161 = v156;
            do
            {
              v162 = v193->fields.itemList;
              if ( !v162 )
                goto LABEL_265;
              if ( v162->fields._size <= (unsigned int)(v161 - 4) )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
              v163 = (ServantStatusVoiceListViewItem_o *)*((_QWORD *)&v162->fields._items->obj.klass + v161);
              if ( !v163 )
                goto LABEL_265;
              v164 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v163->klass->_2.bitflags2 + 1) < (unsigned int)v164
                || (ServantStatusVoiceListViewItem_c *)v163->klass->_2.typeHierarchy[v164 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                goto LABEL_265;
              }
              OpenName = ServantStatusVoiceListViewItem__get_OpenName(v163, v9);
              v167 = ServantStatusVoiceListViewItem__get_OpenName(v158, v166);
              transformNameSprite = (void *)System_String__op_Equality(OpenName, v167, 0LL);
              if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v152,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v163,
                  (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__);
            }
            while ( (int)++v161 - 4 < (int)v151 );
          }
          v155 = v197;
          if ( v152->fields._size >= 1 )
          {
            ServantStatusVoiceListViewItem__SetNameNum(v158, 1, v160);
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v198,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v152,
              (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
            v168 = 2;
            v200 = *(System_Collections_Generic_List_Enumerator_T__o *)v198;
            while ( 1 )
            {
              v169 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                       &v200,
                       (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
              if ( !v169 )
                break;
              if ( !v200.fields.current
                || (v172 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
                    *(&v200.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v172)
                || (ServantStatusVoiceListViewItem_c *)v200.fields.current->klass->_2.typeHierarchy[v172 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                sub_B7769C(v169, v170);
              }
              v173 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v200.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v173 )
              {
                if ( (ServantStatusVoiceListViewItem_c *)v200.fields.current->klass->_2.typeHierarchy[v173 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
                  v174 = v200.fields.current;
                else
                  v174 = 0LL;
              }
              else
              {
                v174 = 0LL;
              }
              ServantStatusVoiceListViewItem__SetNameNum((ServantStatusVoiceListViewItem_o *)v174, v168++, v171);
            }
            *(_DWORD *)&v198[4 * v199++ + 24] = 1764;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v200,
              (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
            if ( v199 )
            {
              if ( *(_DWORD *)&v198[4 * v199 + 20] == 1764 )
                --v199;
            }
          }
        }
      }
      this = v193;
      ++v154;
      ++v156;
    }
    while ( (__int64)v154 < v155 );
  }
  explanationLabel = this->fields.explanationLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  transformNameSprite = LocalizationManager__Get((System_String_o *)StringLiteral_12280/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_265;
  UILabel__set_text(explanationLabel, (System_String_o *)transformNameSprite, 0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  transformNameSprite = LocalizationManager__Get(v181, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_265;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)transformNameSprite, 0LL);
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

  if ( (byte_438DCB8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&ServantStatusVoiceListViewItem_TypeInfo);
    byte_438DCB8 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
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

  if ( (byte_438DCB6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_16197/*"_"*/);
    byte_438DCB6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)ServantVoiceMaster__getEntity_30245212(
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
    v25 = sub_B776C8(Instance);
    sub_B77668(v25, 0LL);
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
        Instance = (DataManager_o *)System_String__Concat_44904220(
                                      v15,
                                      (System_String_o *)StringLiteral_16197/*"_"*/,
                                      v16,
                                      0LL),
        (v17 = *(_QWORD *)(v13 + 32)) == 0) )
  {
LABEL_25:
    sub_B7769C(Instance, v9);
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

  if ( (byte_438DCB7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438DCB7 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
        v20 = sub_B776C8(Instance);
        sub_B77668(v20, 0LL);
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
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v21, 0LL);
        if ( (int)Instance >= value )
          v13 = 1;
      }
      max_length = servantVoiceConds->max_length;
      if ( (int)++v12 >= max_length )
        return v13;
    }
LABEL_29:
    sub_B7769C(Instance, v7);
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
  if ( (byte_438DCBE & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_B775C4(&ServantStatusVoiceListViewItem_TypeInfo);
    byte_438DCBE = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0LL
    || (v11 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v11)
    || (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
  {
    sub_B7769C(this, obj);
  }
  if ( LOBYTE(linkItem[1].fields.sortValue2B) )
  {
    callbackFunc = v9->fields.callbackFunc;
    v9->fields.callbackFunc = 0LL;
    sub_B77560(
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

  if ( (byte_438DCBD & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DCBD = 1;
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
          sub_B7769C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B77560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_438DCBB & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_B775C4(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438DCBB = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7769C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      ObjectList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v15.fields.current;
      v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v12, v13);
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
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__RequestListObject_30247644(
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

  if ( (byte_438DCBC & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_B775C4(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438DCBC = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7769C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      ObjectList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v13.fields.current;
      v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v10, v11);
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
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
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
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusVoiceListViewManager__SetMode_30246704(this, mode, -1, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__SetMode_30246704(
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

  if ( (byte_438DCBA & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
    sub_B775C4(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_B775C4(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438DCBA = 1;
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
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    for ( i = v26; ; BYTE1(i.fields.current[12].klass) = HIDWORD(i.fields.current[1].klass) == select )
    {
      v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &i,
             (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v9 )
        break;
      if ( !i.fields.current )
        sub_B7769C(v9, v10);
      v8 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&i.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v8
        || (ServantStatusVoiceListViewItem_c *)i.fields.current->klass->_2.typeHierarchy[v8 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        sub_B7769C(v9, v10);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
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
          (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
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
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
            v23 = (ServantStatusVoiceListViewObject_o *)v20->fields._items->m_Items[v22];
            v24 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
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
          sub_B7769C(itemList, *(_QWORD *)&mode);
        }
      }
    }
    else if ( mode == 1 )
    {
      ServantStatusVoiceListViewManager__RequestListObject_30247644(this, 3, v18);
    }
  }
}


void __fastcall ServantStatusVoiceListViewManager__SetMode_30247584(
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
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusVoiceListViewManager__SetMode_30246704(this, mode, -1, v10);
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
  if ( (byte_438DCB9 & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_B775C4(&ServantStatusVoiceListViewObject_TypeInfo);
    byte_438DCB9 = 1;
  }
  if ( !obj
    || (v6 = *(&ServantStatusVoiceListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantStatusVoiceListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantStatusVoiceListViewObject_TypeInfo )
  {
    sub_B7769C(this, obj);
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

  if ( (byte_438DCAD & 1) == 0 )
  {
    sub_B775C4(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    byte_438DCAD = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
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

  if ( (byte_438DCAF & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438DCAF = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
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

  if ( (byte_438DCB2 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DCB2 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
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
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (ServantStatusVoiceListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        (UnityEngine_GameObject_o *)current,
                                                                        (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B7769C(0LL, v10);
      Item = (ListViewItem_o *)ServantStatusVoiceListViewObject__GetItem(Component_srcLineSprite, v10);
      if ( !Item )
        sub_B7769C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_24185472((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B7769C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B7769C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_438DCB1 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DCB1 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
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
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      if ( !v3 )
        sub_B7769C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_438DCAE & 1) == 0 )
  {
    sub_B775C4(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    byte_438DCAE = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
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

  if ( (byte_438DCB0 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438DCB0 = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
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
  sub_B77560(
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
  __int64 v9; // x2
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_4388E5E & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&ServantStatusVoiceListViewManager_ResultKind_TypeInfo);
    byte_4388E5E = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(ServantStatusVoiceListViewManager_ResultKind_TypeInfo, &v13, *(_QWORD *)&result);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, v9);
  return (System_IAsyncResult_o *)sub_B77568(this, v11, callback, object);
}


void __fastcall ServantStatusVoiceListViewManager_CallbackFunc__EndInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
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
        sub_B77680(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind);
      if ( (sub_B775F4(v22) & 1) == 0 )
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
      v24 = sub_B775EC(v22);
      v25 = sub_B779F0(v22);
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
            v18 = sub_B0F4C0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B77674(v17, v22);
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
            v16 = sub_B0F4C0(v21, class_0, v10);
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