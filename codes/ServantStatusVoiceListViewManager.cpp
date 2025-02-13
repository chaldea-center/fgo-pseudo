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
  VoiceInfo_array *Instance; // x0
  __int64 v8; // x1
  signed int max_length; // w8
  VoiceMaster_o *v10; // x21
  unsigned int v11; // w9
  char v12; // w20
  ServantVoiceRelationEntity_o *v13; // x23
  __int64 v14; // x24
  __int64 v15; // x25
  VoiceInfo_array *v16; // x24
  unsigned __int64 v17; // x22
  System_Collections_Generic_List_object__o *itemList; // x25
  int32_t size; // w27
  __int64 v20; // x26
  __int64 v21; // x28
  VoiceInfo_o *v22; // x29
  int32_t v23; // w28
  int32_t v24; // w20
  ServantStatusVoiceListViewItem_o *v25; // x26
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  const MethodInfo *v36; // [xsp+8h] [xbp-98h]
  VoiceMaster_o *v37; // [xsp+18h] [xbp-88h]
  ServantVoiceRelationEntity_array *v38; // [xsp+20h] [xbp-80h]
  int32_t ascendOrder; // [xsp+28h] [xbp-78h]
  unsigned int v40; // [xsp+2Ch] [xbp-74h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4BD9FDB & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD9FDB = 1;
  }
  Instance = (VoiceInfo_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (VoiceInfo_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !relationList )
    goto LABEL_29;
  max_length = relationList->max_length;
  if ( max_length >= 1 )
  {
    v10 = (VoiceMaster_o *)Instance;
    v11 = 0;
    v12 = 1;
    ascendOrder = 0;
    v37 = (VoiceMaster_o *)Instance;
    v38 = relationList;
    while ( 1 )
    {
      if ( v11 >= max_length )
LABEL_30:
        sub_1C2209C(Instance, v8);
      v13 = relationList->m_Items[v11];
      v40 = v11;
      if ( !v13 )
        goto LABEL_29;
      v15 = *(_QWORD *)&v13->fields.relationSvtId.fields.currentCryptoKey;
      v14 = *(_QWORD *)&v13->fields.relationSvtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v43.fields.currentCryptoKey = v15;
      *(_QWORD *)&v43.fields.fakeValue = v14;
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v43, 0LL);
      if ( !v10 )
        goto LABEL_29;
      Instance = VoiceMaster__getEnableInfo(v10, svtId, (int32_t)Instance, 0, 0LL, 0, 0, 0LL);
      v16 = Instance;
      if ( (v12 & 1) == 0 && ascendOrder != v13->fields.ascendOrder )
        ++*firstPriority;
      if ( !Instance )
        goto LABEL_29;
      ascendOrder = v13->fields.ascendOrder;
      if ( (int)Instance->max_length >= 1 )
        break;
LABEL_27:
      v10 = v37;
      relationList = v38;
      v12 = 0;
      max_length = v38->max_length;
      v11 = v40 + 1;
      if ( (int)(v40 + 1) >= max_length )
        return;
    }
    v17 = 0LL;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      v21 = *(_QWORD *)&v13->fields.relationSvtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&v13->fields.relationSvtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v44.fields.currentCryptoKey = v21;
      *(_QWORD *)&v44.fields.fakeValue = v20;
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v44, 0LL);
      if ( v17 >= v16->max_length )
        goto LABEL_30;
      v22 = v16->m_Items[v17];
      v23 = (int)Instance;
      v24 = *firstPriority;
      v25 = (ServantStatusVoiceListViewItem_o *)sub_1C22084(ServantStatusVoiceListViewItem_TypeInfo);
      ServantStatusVoiceListViewItem___ctor(v25, size, svtId, v23, 0, v22, v24, 0, 0, v36);
      items = itemList->fields._items;
      v33 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v34 = itemList->fields._size;
      if ( (unsigned int)v34 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v25,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + v34;
        itemList->fields._size = v34 + 1;
        v35[4] = (Il2CppClass *)v25;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)v25, v26, v27, v28, v29, v30, v31);
      }
      if ( (__int64)++v17 >= (int)v16->max_length )
        goto LABEL_27;
    }
LABEL_29:
    sub_1C22094(Instance, v8);
  }
}


void __fastcall ServantStatusVoiceListViewManager__Awake(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  void *scrollView; // x0
  float v4; // s1

  if ( (byte_4BD9FDA & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4BD9FDA = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)scrollView,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL )
  {
    sub_1C22094(scrollView, method);
  }
  v4 = *((float *)scrollView + 77);
  this->fields.defaultPanelCenter = *((float *)scrollView + 75);
  this->fields.defaultPanelHeight = v4;
}


void __fastcall ServantStatusVoiceListViewManager__CreateList(
        ServantStatusVoiceListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        System_Int32_array *changeSvtVoiceIdList,
        const MethodInfo *method)
{
  __int64 v4; // x22
  float defaultPanelCenter; // s9
  float defaultPanelHeight; // s8
  void *transformNameSprite; // x0
  const MethodInfo *v8; // x1
  _BOOL4 IsTransformServant_k__BackingField; // w19
  ServantStatusVoiceListViewManager_o *v10; // x19
  UILabel_o *transformNameLabel; // x20
  float transformNameAddHeight; // s0
  struct UIScrollView_o *scrollView; // x8
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v15; // x0
  int64_t userIdNumber; // x21
  Il2CppObject *v17; // x22
  Il2CppObject *v18; // x20
  System_Collections_Generic_List_T__o *v19; // x23
  struct System_Object_array *items; // x8
  System_Int32_array *v21; // x19
  _QWORD *v22; // x9
  __int64 size; // x10
  __int64 v24; // x8
  unsigned __int64 v25; // x9
  Il2CppObject *MasterData_object; // x20
  int32_t maxLimitCount; // w21
  System_Int32_array *VoiceLimitCountList; // x24
  ServantVoiceRelationEntity_array *v29; // x20
  int32_t v30; // w0
  const MethodInfo *v31; // x4
  ServantVoiceRelationEntity_array *v32; // x20
  int32_t v33; // w0
  const MethodInfo *v34; // x4
  __int64 v35; // x8
  unsigned __int64 v36; // x9
  int32_t v37; // w19
  const MethodInfo *v38; // x4
  int v39; // w8
  _DWORD *v40; // x24
  unsigned int i; // w26
  char *v42; // x19
  VoiceInfo_o *v43; // x3
  VoiceInfo_o **v44; // x19
  VoiceInfo_o *v45; // t1
  struct VoiceEntity_o *voiceEntity; // x25
  int32_t condType; // w8
  const MethodInfo *v48; // x3
  _BOOL8 v49; // x0
  const MethodInfo *v50; // x1
  Il2CppObject *current; // x23
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8
  __int64 v54; // x0
  int32_t v55; // w5
  const MethodInfo *v56; // x6
  bool voiceLabelSpec; // w22
  _BOOL8 v58; // x0
  const MethodInfo *v59; // x1
  Il2CppObject *v60; // x27
  __int64 v61; // x10
  Il2CppClass *v62; // x8
  __int64 v63; // x0
  __int64 v64; // x1
  struct VoiceEntity_o *v65; // x8
  int32_t v66; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x20
  __int64 v68; // x1
  System_String_o *v69; // x2
  struct VoiceEntity_o *v70; // x8
  int32_t v71; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v72; // x20
  System_String_o *v73; // x2
  int32_t v74; // w8
  System_Collections_Generic_List_object__o *itemList; // x23
  bool v76; // w27
  bool v77; // w21
  char v78; // w20
  int32_t v79; // w25
  VoiceInfo_o *v80; // x19
  int32_t v81; // w29
  int32_t v82; // w28
  bool v83; // w20
  ServantStatusVoiceListViewItem_o *v84; // x27
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  struct System_Object_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  Il2CppClass **v94; // x0
  __int64 v95; // x0
  int32_t v96; // w5
  const MethodInfo *v97; // x6
  int32_t v98; // w25
  int32_t v99; // w24
  int32_t v100; // w20
  BalanceConfig_c *v101; // x8
  Il2CppObject *v102; // x27
  Il2CppObject *v103; // x23
  NetworkManager_c *v104; // x0
  int64_t v105; // x20
  int32_t v106; // w20
  int32_t v107; // w21
  BalanceConfig_c *v108; // x8
  _QWORD *v109; // x27
  unsigned __int64 v110; // x22
  System_Collections_Generic_List_object__o *v111; // x23
  int32_t v112; // w20
  int32_t v113; // w25
  VoiceInfo_o *v114; // x19
  int32_t ServantIdHyde; // w29
  ServantStatusVoiceListViewItem_o *v116; // x28
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  struct System_Object_array *v123; // x8
  _QWORD *v124; // x9
  __int64 v125; // x10
  Il2CppClass **v126; // x0
  int32_t v127; // w8
  int v128; // w20
  BalanceConfig_c *v129; // x8
  int32_t v130; // w20
  int32_t v131; // w21
  BalanceConfig_c *v132; // x8
  _QWORD *v133; // x27
  unsigned __int64 v134; // x22
  System_Collections_Generic_List_object__o *v135; // x23
  int32_t v136; // w20
  int32_t v137; // w25
  VoiceInfo_o *v138; // x19
  int32_t ServantIdMashu2; // w29
  ServantStatusVoiceListViewItem_o *v140; // x28
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  struct System_Object_array *v147; // x8
  _QWORD *v148; // x9
  __int64 v149; // x10
  Il2CppClass **v150; // x0
  NetworkManager_c *v151; // x0
  BalanceConfig_c *v152; // x8
  int64_t v153; // x20
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t MashuTdGradeUpQuestId; // w23
  int32_t MashuTdGradeUpQuestPhase; // w25
  int32_t svtVoiceId; // w19
  int32_t v158; // w20
  BalanceConfig_c *v159; // x8
  _QWORD *v160; // x27
  unsigned __int64 v161; // x22
  System_Collections_Generic_List_object__o *v162; // x23
  int32_t v163; // w20
  int32_t v164; // w25
  VoiceInfo_o *v165; // x19
  int32_t ServantIdMashu3; // w29
  ServantStatusVoiceListViewItem_o *v167; // x28
  int64_t v168; // x2
  int32_t v169; // w3
  System_String_o *v170; // x4
  BattleSetupInfo_o *v171; // x5
  FollowerInfo_o *v172; // x6
  PartyListViewItem_o *v173; // x7
  struct System_Object_array *v174; // x8
  _QWORD *v175; // x9
  __int64 v176; // x10
  Il2CppClass **v177; // x0
  ServantVoiceRelationEntity_array *v178; // x19
  int32_t v179; // w0
  const MethodInfo *v180; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v181; // x8
  int32_t v182; // w25
  __int64 v183; // x20
  int32_t j; // w21
  ServantStatusVoiceListViewItem_o *v185; // x22
  __int64 v186; // x10
  int64_t v187; // x2
  int v188; // w8
  int32_t v189; // w23
  Il2CppObject *v190; // x24
  __int64 v191; // x10
  System_String_o *OpenName; // x19
  const MethodInfo *v193; // x1
  System_String_o *v194; // x0
  int32_t v195; // w3
  System_String_o *v196; // x4
  BattleSetupInfo_o *v197; // x5
  FollowerInfo_o *v198; // x6
  PartyListViewItem_o *v199; // x7
  __int64 v200; // x8
  _QWORD *v201; // x9
  __int64 v202; // x10
  __int64 v203; // x0
  int32_t v204; // w22
  _BOOL8 v205; // x0
  __int64 v206; // x1
  const MethodInfo *v207; // x2
  __int64 v208; // x11
  UILabel_o *explanationLabel; // x20
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v211; // [xsp+8h] [xbp-168h]
  System_String_o *v212; // [xsp+18h] [xbp-158h]
  UserServantCollectionEntity_o *EntityDefinitely; // [xsp+20h] [xbp-150h]
  unsigned __int64 v215; // [xsp+30h] [xbp-140h]
  ServantLimitAddMaster_o *v216; // [xsp+38h] [xbp-138h]
  System_Collections_Generic_List_T__o *v217; // [xsp+40h] [xbp-130h]
  System_Int32_array *v218; // [xsp+48h] [xbp-128h]
  DataMasterBase_TMaster__TEntity__PKType__o *v219; // [xsp+50h] [xbp-120h]
  unsigned __int64 v220; // [xsp+58h] [xbp-118h]
  VoicePlayCondMaster_o *v221; // [xsp+60h] [xbp-110h]
  int32_t svtId; // [xsp+6Ch] [xbp-104h]
  int limitCount; // [xsp+84h] [xbp-ECh]
  System_Collections_Generic_List_Enumerator_object__o v226; // [xsp+88h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o k; // [xsp+A0h] [xbp-D0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+B8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v229; // [xsp+C0h] [xbp-B0h] BYREF
  ServantVoiceRelationEntity_array *afterRelationList; // [xsp+E0h] [xbp-90h] BYREF
  ServantVoiceRelationEntity_array *sameRelationList; // [xsp+E8h] [xbp-88h] BYREF
  ServantVoiceRelationEntity_array *beforeRelationList; // [xsp+F0h] [xbp-80h] BYREF
  int32_t firstPriority; // [xsp+FCh] [xbp-74h] BYREF
  UnityEngine_Vector4_o v234; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD9FDC & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_VoiceMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_CondType_Kind__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_CondType_Kind___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_CondType_Kind__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C21E38(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    sub_1C21E38(&StringLiteral_2679/*"B050"*/);
    sub_1C21E38(&StringLiteral_15505/*"VOICE_EMPTY_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_12162/*"SERVANT_STATUS_VOICE_EXPLANATION"*/);
    byte_4BD9FDC = 1;
  }
  v4 = StringLiteral_15505/*"VOICE_EMPTY_MESSAGE"*/;
  firstPriority = 0;
  sameRelationList = 0LL;
  beforeRelationList = 0LL;
  afterRelationList = 0LL;
  memset(&v229, 0, sizeof(v229));
  entity = 0LL;
  memset(&k, 0, sizeof(k));
  defaultPanelCenter = this->fields.defaultPanelCenter;
  defaultPanelHeight = this->fields.defaultPanelHeight;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !mainInfo )
    goto LABEL_246;
  transformNameSprite = this->fields.transformNameSprite;
  if ( !transformNameSprite )
    goto LABEL_246;
  IsTransformServant_k__BackingField = mainInfo->fields._IsTransformServant_k__BackingField;
  transformNameSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transformNameSprite, 0LL);
  if ( !transformNameSprite )
    goto LABEL_246;
  if ( IsTransformServant_k__BackingField )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameSprite, 1, 0LL);
    v10 = this;
    transformNameLabel = this->fields.transformNameLabel;
    transformNameSprite = ServantStatusListViewItem__GetTransformName(mainInfo, 0LL);
    if ( !transformNameLabel )
      goto LABEL_246;
    UILabel__set_text(transformNameLabel, (System_String_o *)transformNameSprite, 0LL);
    transformNameAddHeight = (float)this->fields.transformNameAddHeight;
    defaultPanelCenter = defaultPanelCenter + (float)(transformNameAddHeight * -0.5);
    defaultPanelHeight = defaultPanelHeight - transformNameAddHeight;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameSprite, 0, 0LL);
    v10 = this;
  }
  scrollView = v10->fields.scrollView;
  if ( !scrollView )
    goto LABEL_246;
  transformNameSprite = scrollView->fields.mPanel;
  if ( !transformNameSprite )
    goto LABEL_246;
  v234.fields.x = *((float *)transformNameSprite + 74);
  v234.fields.z = *((float *)transformNameSprite + 76);
  v234.fields.y = defaultPanelCenter;
  v234.fields.w = defaultPanelHeight;
  UIPanel__set_baseClipRegion((UIPanel_o *)transformNameSprite, v234, 0LL);
  transformNameSprite = this->fields.scrollView;
  if ( !transformNameSprite )
    goto LABEL_246;
  UIScrollView__ResetPosition((UIScrollView_o *)transformNameSprite, 0LL);
  this->fields.execObjectExtraFlag = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v15 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v15 = NetworkManager_TypeInfo;
  }
  v212 = (System_String_o *)v4;
  userIdNumber = v15->static_fields->userIdNumber;
  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
  if ( !Master_object )
    goto LABEL_246;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       userIdNumber,
                       (int32_t)transformNameSprite,
                       0LL);
  v17 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_VoiceMaster___);
  v221 = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v18 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  firstPriority = 0;
  v19 = (System_Collections_Generic_List_T__o *)sub_1C22084(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v19,
    (const MethodInfo_3634068 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v19 )
    goto LABEL_246;
  items = v19->fields._items;
  v21 = changeSvtVoiceIdList;
  v22 = Method_System_Collections_Generic_List_CondType_Kind__Add__;
  ++v19->fields._version;
  if ( !items )
    goto LABEL_246;
  size = v19->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v19,
      81,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v19->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  v216 = (ServantLimitAddMaster_o *)v18;
  if ( !changeSvtVoiceIdList )
LABEL_246:
    sub_1C22094(transformNameSprite, v8);
  v24 = *(_QWORD *)&changeSvtVoiceIdList->max_length;
  if ( (int)v24 >= 1 )
  {
    v25 = 0LL;
    v219 = (DataMasterBase_TMaster__TEntity__PKType__o *)v17;
    v217 = v19;
    while ( 1 )
    {
      if ( v25 >= (unsigned int)v24 )
        goto LABEL_247;
      v215 = v25;
      svtId = v21->m_Items[v25 + 1];
      transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_246;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)transformNameSprite,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      transformNameSprite = EntityDefinitely;
      if ( !EntityDefinitely )
        goto LABEL_246;
      maxLimitCount = EntityDefinitely->fields.maxLimitCount;
      transformNameSprite = UserServantCollectionEntity__getCostumeList(EntityDefinitely, 0LL);
      if ( !MasterData_object )
        goto LABEL_246;
      VoiceLimitCountList = ServantLimitAddMaster__getVoiceLimitCountList(
                              (ServantLimitAddMaster_o *)MasterData_object,
                              svtId,
                              maxLimitCount,
                              (System_Int32_array *)transformNameSprite,
                              0LL);
      transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_246;
      transformNameSprite = DataManager__GetMasterData_object_(
                              (DataManager_o *)transformNameSprite,
                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !transformNameSprite )
        goto LABEL_246;
      ServantVoiceRelationMaster__GetRelationList_41150092(
        (ServantVoiceRelationMaster_o *)transformNameSprite,
        &beforeRelationList,
        &sameRelationList,
        &afterRelationList,
        svtId,
        0LL);
      v29 = beforeRelationList;
      v30 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v29, v30, v31);
      v32 = sameRelationList;
      ++firstPriority;
      v33 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v32, v33, v34);
      if ( !VoiceLimitCountList )
        goto LABEL_246;
      v35 = *(_QWORD *)&VoiceLimitCountList->max_length;
      if ( (int)v35 >= 1 )
        break;
LABEL_206:
      v178 = afterRelationList;
      v179 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v178, v179, v180);
      v21 = changeSvtVoiceIdList;
      LODWORD(v24) = changeSvtVoiceIdList->max_length;
      v25 = v215 + 1;
      if ( (__int64)(v215 + 1) >= (int)v24 )
        goto LABEL_207;
    }
    v36 = 0LL;
    v218 = VoiceLimitCountList;
    while ( 1 )
    {
      if ( v36 >= (unsigned int)v35 )
        goto LABEL_247;
      v37 = VoiceLimitCountList->m_Items[v36 + 1];
      v220 = v36;
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      if ( !v17 )
        goto LABEL_246;
      limitCount = v37;
      transformNameSprite = VoiceMaster__getEnableInfo(
                              (VoiceMaster_o *)v17,
                              (int32_t)transformNameSprite,
                              svtId,
                              v37,
                              (System_Collections_Generic_List_CondType_Kind__o *)v19,
                              0,
                              0,
                              0LL);
      if ( !transformNameSprite )
        goto LABEL_246;
      v39 = *((_DWORD *)transformNameSprite + 6);
      v40 = transformNameSprite;
      if ( v39 >= 1 )
      {
        for ( i = 0; (int)i < v39; ++i )
        {
          if ( i >= v39 )
            goto LABEL_247;
          v42 = (char *)&v40[2 * i];
          v45 = (VoiceInfo_o *)*((_QWORD *)v42 + 4);
          v44 = (VoiceInfo_o **)(v42 + 32);
          v43 = v45;
          if ( !v45 )
            goto LABEL_246;
          voiceEntity = v43->fields.voiceEntity;
          if ( limitCount <= 10 )
          {
            if ( !voiceEntity )
              goto LABEL_246;
            if ( voiceEntity->fields.svtVoiceType == 2 )
            {
              condType = voiceEntity->fields.condType;
              if ( condType == 7 )
              {
                if ( voiceEntity->fields.condValue != 2 )
                {
                  transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                                  (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                                  svtId,
                                                  limitCount,
                                                  v43,
                                                  v38);
                  if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
                  {
                    transformNameSprite = this->fields.itemList;
                    if ( !transformNameSprite )
                      goto LABEL_246;
                    System_Collections_Generic_List_object___GetEnumerator(
                      (System_Collections_Generic_List_Enumerator_T__o *)&v226,
                      (System_Collections_Generic_List_object__o *)transformNameSprite,
                      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
                    v229 = v226;
                    do
                    {
                      v49 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                              &v229,
                              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                      if ( !v49 )
                        goto LABEL_91;
                      current = v229.fields._current;
                      if ( !v229.fields._current
                        || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                            LOBYTE(v229.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
                        || (ServantStatusVoiceListViewItem_c *)v229.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                      {
                        sub_1C22094(v49, v50);
                      }
                      klass = v229.fields._current[10].klass;
                      if ( !klass )
                        sub_1C22094(v49, v50);
                    }
                    while ( HIDWORD(klass->_1.namespaze) != 2
                         || LODWORD(klass->_1.this_arg.data) != 7
                         || HIDWORD(klass->_1.this_arg.data) != voiceEntity->fields.condValue
                         || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                              (ServantStatusVoiceListViewItem_o *)v229.fields._current,
                              v50) != svtId );
                    v54 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                    if ( i >= v40[6] )
                      sub_1C2209C(v54, (unsigned int)v54);
                    ServantStatusVoiceListViewItem__SetLimitCount(
                      (ServantStatusVoiceListViewItem_o *)current,
                      v54,
                      svtId,
                      limitCount,
                      *v44,
                      v55,
                      v56);
                    goto LABEL_110;
                  }
LABEL_71:
                  if ( i >= v40[6] )
                    goto LABEL_247;
                  transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                                                  (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                                  svtId,
                                                  *v44,
                                                  v48);
                  if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
                    goto LABEL_106;
                  voiceLabelSpec = 1;
                  goto LABEL_93;
                }
              }
              else if ( condType == 18 )
              {
                if ( i >= v40[6] )
                  goto LABEL_247;
                transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                                (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                                svtId,
                                                limitCount,
                                                *v44,
                                                v38);
                if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
                  goto LABEL_71;
                transformNameSprite = this->fields.itemList;
                if ( !transformNameSprite )
                  goto LABEL_246;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v226,
                  (System_Collections_Generic_List_object__o *)transformNameSprite,
                  (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
                v229 = v226;
                do
                {
                  v58 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v229,
                          (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                  if ( !v58 )
                    goto LABEL_91;
                  v60 = v229.fields._current;
                  if ( !v229.fields._current
                    || (v61 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                        LOBYTE(v229.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v61)
                    || (ServantStatusVoiceListViewItem_c *)v229.fields._current->klass->_2.typeHierarchy[v61 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                  {
                    sub_1C22094(v58, v59);
                  }
                  v62 = v229.fields._current[10].klass;
                  if ( !v62 )
                    sub_1C22094(v58, v59);
                }
                while ( HIDWORD(v62->_1.namespaze) != 2
                     || LODWORD(v62->_1.this_arg.data) != 18
                     || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                          (ServantStatusVoiceListViewItem_o *)v229.fields._current,
                          v59) != svtId );
                v63 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                if ( i >= v40[6] )
                  sub_1C2209C(v63, v64);
                if ( !*v44 )
                  sub_1C22094(v63, v64);
                v65 = (*v44)->fields.voiceEntity;
                if ( !v65 )
                  sub_1C22094(v63, v64);
                v66 = v63;
                id = v65->fields.id;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47657208(id, 0LL);
                if ( !v221 )
                  sub_1C22094(0LL, v68);
                if ( !VoicePlayCondMaster__isVoiceCond(v221, v66, v69, 81, 0LL) )
                {
                  v95 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                  if ( i >= v40[6] )
                    sub_1C2209C(v95, (unsigned int)v95);
                  ServantStatusVoiceListViewItem__SetLimitCount(
                    (ServantStatusVoiceListViewItem_o *)v60,
                    v95,
                    svtId,
                    limitCount,
                    *v44,
                    v96,
                    v97);
LABEL_110:
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v229,
                    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
                  goto LABEL_106;
                }
LABEL_91:
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v229,
                  (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
              }
            }
          }
          voiceLabelSpec = 0;
LABEL_93:
          transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
          if ( i >= v40[6] )
            goto LABEL_247;
          if ( !*v44 )
            goto LABEL_246;
          v70 = (*v44)->fields.voiceEntity;
          if ( !v70 )
            goto LABEL_246;
          v71 = (int)transformNameSprite;
          v72 = v70->fields.id;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47657208(v72, 0LL);
          transformNameSprite = v221;
          if ( !v221 )
            goto LABEL_246;
          transformNameSprite = (void *)VoicePlayCondMaster__isVoiceCond(v221, v71, v73, 81, 0LL);
          if ( !voiceEntity )
            goto LABEL_246;
          v74 = voiceEntity->fields.condType;
          itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          v76 = v74 == 18;
          v77 = v74 == 7;
          if ( !itemList )
            goto LABEL_246;
          v78 = (char)transformNameSprite;
          v79 = itemList->fields._size;
          transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
          if ( i >= v40[6] )
            goto LABEL_247;
          v80 = *v44;
          v81 = firstPriority;
          v82 = (int)transformNameSprite;
          v83 = v78 & (v76 || v77);
          v84 = (ServantStatusVoiceListViewItem_o *)sub_1C22084(ServantStatusVoiceListViewItem_TypeInfo);
          ServantStatusVoiceListViewItem___ctor(v84, v79, v82, svtId, limitCount, v80, v81, v83, voiceLabelSpec, v211);
          v91 = itemList->fields._items;
          v92 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++itemList->fields._version;
          if ( !v91 )
            goto LABEL_246;
          v93 = itemList->fields._size;
          if ( (unsigned int)v93 >= v91->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              itemList,
              (Il2CppObject *)v84,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
          }
          else
          {
            v94 = &v91->obj.klass + v93;
            itemList->fields._size = v93 + 1;
            v94[4] = (Il2CppClass *)v84;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v94 + 4), (int64_t)v84, v85, v86, v87, v88, v89, v90);
          }
LABEL_106:
          v39 = v40[6];
        }
      }
      v98 = firstPriority;
      v99 = ++firstPriority;
      v100 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      v101 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v101 = BalanceConfig_TypeInfo;
      }
      v17 = (Il2CppObject *)v219;
      if ( v100 == v101->static_fields->ServantIdJekyll )
        break;
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      v128 = (int)transformNameSprite;
      v129 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v129 = BalanceConfig_TypeInfo;
      }
      if ( v128 == v129->static_fields->ServantIdMashu1 )
      {
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( TutorialFlag__Get_38930984(115, 0LL) )
        {
          v130 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
          v131 = v98;
          v132 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v132 = BalanceConfig_TypeInfo;
          }
          transformNameSprite = VoiceMaster__getEnableInfo(
                                  (VoiceMaster_o *)v219,
                                  v130,
                                  v132->static_fields->ServantIdMashu2,
                                  limitCount,
                                  0LL,
                                  0,
                                  0,
                                  0LL);
          if ( !transformNameSprite )
            goto LABEL_246;
          v133 = transformNameSprite;
          if ( *((int *)transformNameSprite + 6) >= 1 )
          {
            v134 = 0LL;
            while ( 1 )
            {
              v135 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
              if ( !v135 )
                goto LABEL_246;
              v136 = v135->fields._size;
              transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
              v137 = (int)transformNameSprite;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              if ( v134 >= *((unsigned int *)v133 + 6) )
                break;
              v138 = (VoiceInfo_o *)v133[v134 + 4];
              ServantIdMashu2 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu2;
              v140 = (ServantStatusVoiceListViewItem_o *)sub_1C22084(ServantStatusVoiceListViewItem_TypeInfo);
              ServantStatusVoiceListViewItem___ctor(
                v140,
                v136,
                v137,
                ServantIdMashu2,
                limitCount,
                v138,
                v99,
                0,
                0,
                v211);
              v147 = v135->fields._items;
              v148 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++v135->fields._version;
              if ( !v147 )
                goto LABEL_246;
              v149 = v135->fields._size;
              if ( (unsigned int)v149 >= v147->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v135,
                  (Il2CppObject *)v140,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v148[4] + 192LL) + 112LL));
              }
              else
              {
                v150 = &v147->obj.klass + v149;
                v135->fields._size = v149 + 1;
                v150[4] = (Il2CppClass *)v140;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v150 + 4), (int64_t)v140, v141, v142, v143, v144, v145, v146);
              }
              if ( (__int64)++v134 >= *((int *)v133 + 6) )
                goto LABEL_169;
            }
LABEL_247:
            sub_1C2209C(transformNameSprite, v8);
          }
LABEL_169:
          v99 = v131 + 2;
          firstPriority = v131 + 2;
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4BD6FF5 )
        {
          sub_1C21E38(&NetworkManager_TypeInfo);
          byte_4BD6FF5 = 1;
        }
        v151 = NetworkManager_TypeInfo;
        v17 = (Il2CppObject *)v219;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v151 = NetworkManager_TypeInfo;
        }
        v152 = BalanceConfig_TypeInfo;
        v153 = v151->static_fields->userIdNumber;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v152 = BalanceConfig_TypeInfo;
        }
        static_fields = v152->static_fields;
        MashuTdGradeUpQuestId = static_fields->MashuTdGradeUpQuestId;
        MashuTdGradeUpQuestPhase = static_fields->MashuTdGradeUpQuestPhase;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        transformNameSprite = (void *)CondType__IsQuestPhaseClear(
                                        v153,
                                        MashuTdGradeUpQuestId,
                                        MashuTdGradeUpQuestPhase,
                                        -1,
                                        0,
                                        0LL);
        if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
        {
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          transformNameSprite = v216;
          if ( !v216 )
            goto LABEL_246;
          transformNameSprite = (void *)ServantLimitAddMaster__TryGetEntity(
                                          v216,
                                          &entity,
                                          BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                          limitCount,
                                          0LL);
          if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_246;
            svtVoiceId = entity->fields.svtVoiceId;
            transformNameSprite = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              transformNameSprite = BalanceConfig_TypeInfo;
            }
            if ( svtVoiceId != *(_DWORD *)(*((_QWORD *)transformNameSprite + 23) + 352LL) )
            {
              v158 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
              v159 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v159 = BalanceConfig_TypeInfo;
              }
              transformNameSprite = VoiceMaster__getEnableInfo(
                                      (VoiceMaster_o *)v219,
                                      v158,
                                      v159->static_fields->ServantIdMashu3,
                                      limitCount,
                                      0LL,
                                      0,
                                      0,
                                      0LL);
              if ( !transformNameSprite )
                goto LABEL_246;
              v160 = transformNameSprite;
              if ( *((int *)transformNameSprite + 6) >= 1 )
              {
                v161 = 0LL;
                do
                {
                  v162 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  if ( !v162 )
                    goto LABEL_246;
                  v163 = v162->fields._size;
                  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                  v164 = (int)transformNameSprite;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( v161 >= *((unsigned int *)v160 + 6) )
                    goto LABEL_247;
                  v165 = (VoiceInfo_o *)v160[v161 + 4];
                  ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
                  v167 = (ServantStatusVoiceListViewItem_o *)sub_1C22084(ServantStatusVoiceListViewItem_TypeInfo);
                  ServantStatusVoiceListViewItem___ctor(
                    v167,
                    v163,
                    v164,
                    ServantIdMashu3,
                    limitCount,
                    v165,
                    v99,
                    0,
                    0,
                    v211);
                  v174 = v162->fields._items;
                  v175 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++v162->fields._version;
                  if ( !v174 )
                    goto LABEL_246;
                  v176 = v162->fields._size;
                  if ( (unsigned int)v176 >= v174->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v162,
                      (Il2CppObject *)v167,
                      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v175[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v177 = &v174->obj.klass + v176;
                    v162->fields._size = v176 + 1;
                    v177[4] = (Il2CppClass *)v167;
                    sub_1C21DDC(
                      (PartyOrganizationUtility_o *)(v177 + 4),
                      (int64_t)v167,
                      v168,
                      v169,
                      v170,
                      v171,
                      v172,
                      v173);
                  }
                }
                while ( (__int64)++v161 < *((int *)v160 + 6) );
              }
              v127 = v99 + 1;
LABEL_148:
              v17 = (Il2CppObject *)v219;
              firstPriority = v127;
            }
          }
        }
      }
LABEL_189:
      v19 = v217;
      VoiceLimitCountList = v218;
      LODWORD(v35) = v218->max_length;
      v36 = v220 + 1;
      if ( (__int64)(v220 + 1) >= (int)v35 )
        goto LABEL_206;
    }
    v102 = DataMasterBase_object__object__object___GetEntity(
             v219,
             (Il2CppObject *)StringLiteral_2679/*"B050"*/,
             (const MethodInfo_3260880 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string__GetEntity__);
    transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !transformNameSprite )
      goto LABEL_246;
    v103 = DataManager__GetMasterData_object_(
             (DataManager_o *)transformNameSprite,
             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    v104 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v104 = NetworkManager_TypeInfo;
    }
    v105 = v104->static_fields->userIdNumber;
    transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
    if ( !v103 )
      goto LABEL_246;
    transformNameSprite = UserServantCollectionMaster__GetEntityDefinitely(
                            (UserServantCollectionMaster_o *)v103,
                            v105,
                            (int32_t)transformNameSprite,
                            0LL);
    if ( !v102 )
      goto LABEL_246;
    if ( LODWORD(v102[3].klass) == 17 )
    {
      if ( !transformNameSprite )
        goto LABEL_246;
      transformNameSprite = (void *)UserServantCollectionEntity__IsPlayed(
                                      (UserServantCollectionEntity_o *)transformNameSprite,
                                      HIDWORD(v102[3].klass),
                                      0LL);
      if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
        goto LABEL_189;
    }
    v106 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
    v107 = v98;
    v108 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v108 = BalanceConfig_TypeInfo;
    }
    transformNameSprite = VoiceMaster__getEnableInfo(
                            (VoiceMaster_o *)v219,
                            v106,
                            v108->static_fields->ServantIdHyde,
                            limitCount,
                            0LL,
                            0,
                            0,
                            0LL);
    if ( !transformNameSprite )
      goto LABEL_246;
    v109 = transformNameSprite;
    if ( *((int *)transformNameSprite + 6) >= 1 )
    {
      v110 = 0LL;
      do
      {
        v111 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !v111 )
          goto LABEL_246;
        v112 = v111->fields._size;
        transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
        v113 = (int)transformNameSprite;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( v110 >= *((unsigned int *)v109 + 6) )
          goto LABEL_247;
        v114 = (VoiceInfo_o *)v109[v110 + 4];
        ServantIdHyde = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
        v116 = (ServantStatusVoiceListViewItem_o *)sub_1C22084(ServantStatusVoiceListViewItem_TypeInfo);
        ServantStatusVoiceListViewItem___ctor(v116, v112, v113, ServantIdHyde, limitCount, v114, v99, 0, 0, v211);
        v123 = v111->fields._items;
        v124 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v111->fields._version;
        if ( !v123 )
          goto LABEL_246;
        v125 = v111->fields._size;
        if ( (unsigned int)v125 >= v123->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v111,
            (Il2CppObject *)v116,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
        }
        else
        {
          v126 = &v123->obj.klass + v125;
          v111->fields._size = v125 + 1;
          v126[4] = (Il2CppClass *)v116;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v126 + 4), (int64_t)v116, v117, v118, v119, v120, v121, v122);
        }
      }
      while ( (__int64)++v110 < *((int *)v109 + 6) );
    }
    v127 = v107 + 2;
    goto LABEL_148;
  }
LABEL_207:
  v181 = this->fields.itemList;
  if ( !v181 )
    goto LABEL_246;
  v182 = v181->fields._size;
  v183 = sub_1C22084(System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v183,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
  if ( v182 - 1 >= 1 )
  {
    for ( j = 0; j != v182 - 1; ++j )
    {
      transformNameSprite = this->fields.itemList;
      if ( !transformNameSprite )
        goto LABEL_246;
      transformNameSprite = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)transformNameSprite,
                              j,
                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !transformNameSprite )
        goto LABEL_246;
      v185 = (ServantStatusVoiceListViewItem_o *)transformNameSprite;
      v186 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)transformNameSprite + 304LL) < (unsigned int)v186
        || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)transformNameSprite + 200LL) + 8 * v186 - 8) != ServantStatusVoiceListViewItem_TypeInfo )
      {
        goto LABEL_246;
      }
      if ( ServantStatusVoiceListViewItem__get_OpenName((ServantStatusVoiceListViewItem_o *)transformNameSprite, v8) )
      {
        transformNameSprite = (void *)ServantStatusVoiceListViewItem__get_DispNum(v185, v8);
        if ( !(_DWORD)transformNameSprite )
        {
          if ( !v183 )
            goto LABEL_246;
          v187 = *(unsigned int *)(v183 + 24);
          v188 = *(_DWORD *)(v183 + 28) + 1;
          *(_DWORD *)(v183 + 24) = 0;
          *(_DWORD *)(v183 + 28) = v188;
          if ( (int)v187 >= 1 )
            System_Array__Clear(*(System_Array_o **)(v183 + 16), 0, v187, 0LL);
          v189 = j + 1;
          if ( j + 1 < v182 )
          {
            do
            {
              transformNameSprite = this->fields.itemList;
              if ( !transformNameSprite )
                goto LABEL_246;
              transformNameSprite = System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)transformNameSprite,
                                      v189,
                                      (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !transformNameSprite )
                goto LABEL_246;
              v190 = (Il2CppObject *)transformNameSprite;
              v191 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)transformNameSprite + 304LL) < (unsigned int)v191
                || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)transformNameSprite + 200LL)
                                                        + 8 * v191
                                                        - 8) != ServantStatusVoiceListViewItem_TypeInfo )
              {
                goto LABEL_246;
              }
              OpenName = ServantStatusVoiceListViewItem__get_OpenName(
                           (ServantStatusVoiceListViewItem_o *)transformNameSprite,
                           v8);
              v194 = ServantStatusVoiceListViewItem__get_OpenName(v185, v193);
              transformNameSprite = (void *)System_String__op_Equality(OpenName, v194, 0LL);
              if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              {
                v200 = *(_QWORD *)(v183 + 16);
                v201 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__;
                ++*(_DWORD *)(v183 + 28);
                if ( !v200 )
                  goto LABEL_246;
                v202 = *(int *)(v183 + 24);
                if ( (unsigned int)v202 >= *(_DWORD *)(v200 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)v183,
                    v190,
                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v201[4] + 192LL) + 112LL));
                }
                else
                {
                  v203 = v200 + 8 * v202;
                  *(_DWORD *)(v183 + 24) = v202 + 1;
                  *(_QWORD *)(v203 + 32) = v190;
                  sub_1C21DDC(
                    (PartyOrganizationUtility_o *)(v203 + 32),
                    (int64_t)v190,
                    v187,
                    v195,
                    v196,
                    v197,
                    v198,
                    v199);
                }
              }
            }
            while ( v182 != ++v189 );
          }
          if ( *(int *)(v183 + 24) >= 1 )
          {
            ServantStatusVoiceListViewItem__SetNameNum(v185, 1, (const MethodInfo *)v187);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v226,
              (System_Collections_Generic_List_object__o *)v183,
              (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
            v204 = 2;
            for ( k = v226;
                  ;
                  ServantStatusVoiceListViewItem__SetNameNum(
                    (ServantStatusVoiceListViewItem_o *)k.fields._current,
                    v204++,
                    v207) )
            {
              v205 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &k,
                       (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
              if ( !v205 )
                break;
              if ( k.fields._current )
              {
                v208 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
                if ( LOBYTE(k.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v208
                  && (ServantStatusVoiceListViewItem_c *)k.fields._current->klass->_2.typeHierarchy[v208 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
                {
                  continue;
                }
              }
              sub_1C22094(v205, v206);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &k,
              (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
          }
        }
      }
    }
  }
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transformNameSprite = LocalizationManager__Get((System_String_o *)StringLiteral_12162/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_246;
  UILabel__set_text(explanationLabel, (System_String_o *)transformNameSprite, 0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  transformNameSprite = LocalizationManager__Get(v212, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_246;
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
  ServantStatusVoiceListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4BD9FDF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&ServantStatusVoiceListViewItem_TypeInfo);
    byte_4BD9FDF = 1;
  }
  result = (ServantStatusVoiceListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantStatusVoiceListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (ServantStatusVoiceListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
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
  struct VoiceEntity_o *voiceEntity; // x8
  __int64 svtVoiceType; // x8
  __int64 v12; // x20
  struct VoiceEntity_o *v13; // x8
  System_String_o *v14; // x19
  System_String_o *v15; // x0
  __int64 v16; // x20
  int v17; // w8
  System_String_o *v18; // x19
  unsigned int v19; // w21
  __int64 v20; // x22
  __int64 v21; // x8
  __int64 v22; // x8

  if ( (byte_4BD9FDD & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_16399/*"_"*/);
    byte_4BD9FDD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)ServantVoiceMaster__getEntity_41142696(
                                (ServantVoiceMaster_o *)Instance,
                                svtId,
                                limitCount,
                                0LL);
  if ( !voiceInfo )
    goto LABEL_25;
  voiceEntity = voiceInfo->fields.voiceEntity;
  if ( !voiceEntity || !Instance )
    goto LABEL_25;
  svtVoiceType = voiceEntity->fields.svtVoiceType;
  if ( (unsigned int)svtVoiceType >= LODWORD(Instance->fields.m_CancellationTokenSource) )
LABEL_26:
    sub_1C2209C(Instance, v9);
  v12 = *((_QWORD *)&Instance->fields._DispLog + svtVoiceType);
  if ( !v12 )
    return 0;
  Instance = (DataManager_o *)System_Int32__ToString((int)voiceInfo + 52, 0LL);
  v13 = voiceInfo->fields.voiceEntity;
  if ( !v13
    || (v14 = (System_String_o *)Instance, (Instance = (DataManager_o *)v13->fields.id) == 0LL)
    || (v15 = (System_String_o *)((__int64 (__fastcall *)(DataManager_o *, void *))Instance->klass->vtable._3_ToString.method)(
                                   Instance,
                                   Instance->klass[1]._1.image),
        Instance = (DataManager_o *)System_String__Concat_63126736(
                                      v14,
                                      (System_String_o *)StringLiteral_16399/*"_"*/,
                                      v15,
                                      0LL),
        (v16 = *(_QWORD *)(v12 + 32)) == 0) )
  {
LABEL_25:
    sub_1C22094(Instance, v9);
  }
  v17 = *(_DWORD *)(v16 + 24);
  if ( v17 < 1 )
    return 0;
  v18 = (System_String_o *)Instance;
  v19 = 0;
  while ( 1 )
  {
    if ( v19 >= v17 )
      goto LABEL_26;
    v20 = *(_QWORD *)(v16 + 8LL * (int)v19 + 32);
    if ( !v20 )
      goto LABEL_25;
    v21 = *(_QWORD *)(v20 + 64);
    if ( !v21 )
      goto LABEL_25;
    if ( !*(_DWORD *)(v21 + 24) )
      goto LABEL_26;
    v22 = *(_QWORD *)(v21 + 32);
    if ( !v22 )
      goto LABEL_25;
    Instance = (DataManager_o *)System_String__op_Equality(*(System_String_o **)(v22 + 16), v18, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( *(_DWORD *)(v20 + 80) )
        return 1;
    }
    v17 = *(_DWORD *)(v16 + 24);
    if ( (int)++v19 >= v17 )
      return 0;
  }
}


bool __fastcall ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
        ServantStatusVoiceListViewManager_o *this,
        int32_t svtId,
        VoiceInfo_o *voiceInfo,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21
  struct ServantVoiceCond_array *servantVoiceConds; // x22
  int max_length; // w8
  DataManager_o *v11; // x19
  unsigned int v12; // w23
  bool v13; // w25
  ServantVoiceCond_o *v14; // x8
  int32_t condType; // w9
  int value; // w26
  __int64 v17; // x20
  __int64 v18; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4BD9FDE & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD9FDE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_31;
  Instance = (DataManager_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                (UserServantCollectionMaster_o *)MasterData_object,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                svtId,
                                0LL);
  if ( !voiceInfo )
    goto LABEL_31;
  servantVoiceConds = voiceInfo->fields.servantVoiceConds;
  if ( !servantVoiceConds )
    goto LABEL_31;
  max_length = servantVoiceConds->max_length;
  if ( max_length >= 1 )
  {
    v11 = Instance;
    v12 = 0;
    v13 = 1;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1C2209C(Instance, v7);
      v14 = servantVoiceConds->m_Items[v12];
      if ( !v14 )
        break;
      condType = v14->fields.condType;
      if ( condType == 20 || condType == 3 )
        v13 = 0;
      value = v14->fields.value;
      if ( condType == 3 || condType == 20 )
      {
        if ( !v11 )
          break;
        v17 = *(__int64 *)((char *)&v11->fields.lockCountObj + 4);
        v18 = *(_QWORD *)&v11->fields.isFailedLoad;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v20.fields.currentCryptoKey = v17;
        *(_QWORD *)&v20.fields.fakeValue = v18;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v20, 0LL);
        if ( (int)Instance >= value )
          v13 = 1;
      }
      max_length = servantVoiceConds->max_length;
      if ( (int)++v12 >= max_length )
        return v13;
    }
LABEL_31:
    sub_1C22094(Instance, v7);
  }
  return 1;
}


void __fastcall ServantStatusVoiceListViewManager__OnClickListView(
        ServantStatusVoiceListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ServantStatusVoiceListViewManager_o *v9; // x20
  struct ListViewItem_o *linkItem; // x21
  __int64 methodPtr_low; // x10
  struct ServantStatusVoiceListViewManager_CallbackFunc_o *callbackFunc; // x22
  int v13; // w20
  unsigned int Index; // w0
  __int64 v15; // x1

  v9 = this;
  if ( (byte_4BD9FE5 & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1C21E38(&ServantStatusVoiceListViewItem_TypeInfo);
    byte_4BD9FE5 = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0LL
    || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
  {
    sub_1C22094(this, obj);
  }
  if ( LOBYTE(linkItem[1].fields.sortValue2B) )
  {
    callbackFunc = v9->fields.callbackFunc;
    v9->fields.callbackFunc = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v9->fields.callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      v13 = BYTE1(linkItem[1].fields.sortValue2B);
      Index = ListViewObject__get_Index(obj, 0LL);
      if ( v13 )
        v15 = 2LL;
      else
        v15 = 1LL;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        v15,
        Index,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4BD9FE4 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9FE4 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_1C22094(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BD9FE2 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_1C21E38(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_1C21E38(&StringLiteral_10133/*"OnMoveEnd"*/);
    byte_4BD9FE2 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C22094(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10133/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C22094(v12, v13);
      ServantStatusVoiceListViewObject__Init_36407396(
        (ServantStatusVoiceListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__RequestListObject_36406892(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BD9FE3 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_1C21E38(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_1C21E38(&StringLiteral_10133/*"OnMoveEnd"*/);
    byte_4BD9FE3 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C22094(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10133/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C22094(v10, v11);
      ServantStatusVoiceListViewObject__Init_36408004((ServantStatusVoiceListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


void __fastcall ServantStatusVoiceListViewManager__SetMode(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        ServantStatusVoiceListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x3

  this->fields.callbackFunc = callback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusVoiceListViewManager__SetMode_36405920(this, mode, -1, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__SetMode_36405920(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        int32_t select,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  __int64 methodPtr_low; // x11
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  System_Collections_Generic_List_object__o *v14; // x19
  int32_t v15; // w20
  const MethodInfo *v16; // x2
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v21; // x23
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BD9FE1 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
    sub_1C21E38(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_1C21E38(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_1C21E38(&StringLiteral_10133/*"OnMoveEnd"*/);
    byte_4BD9FE1 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( mode == 2 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_30;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      itemList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    for ( i = v23; ; BYTE1(i.fields._current[12].klass) = HIDWORD(i.fields._current[1].klass) == select )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v8 )
        break;
      if ( !i.fields._current )
        sub_1C22094(v8, v9);
      methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(i.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (ServantStatusVoiceListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        sub_1C22094(v8, v9);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(this, v13);
    if ( !itemList )
      goto LABEL_30;
    v14 = itemList;
    if ( itemList->fields._size >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v14,
                                                                  v15,
                                                                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
        if ( !itemList )
          break;
        ServantStatusVoiceListViewObject__Init_36405792((ServantStatusVoiceListViewObject_o *)itemList, 4, v16);
        if ( ++v15 >= v14->fields._size )
          return;
      }
      goto LABEL_30;
    }
  }
  else
  {
    this->fields.initMode = mode;
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
    ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0LL);
    if ( mode == 3 )
    {
      itemList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ClippingObjectList(
                                                                this,
                                                                v11);
      if ( !itemList )
        goto LABEL_30;
      size = itemList->fields._size;
      v18 = itemList;
      if ( size >= 1 )
      {
        this->fields.callbackCount = size;
        v19 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v18,
                   v19,
                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
          v21 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(v21, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
            break;
          ServantStatusVoiceListViewObject__Init_36407396((ServantStatusVoiceListViewObject_o *)Item, 5, v21, 0.1, v22);
          if ( ++v19 >= v18->fields._size )
            return;
        }
LABEL_30:
        sub_1C22094(itemList, *(_QWORD *)&mode);
      }
      this->fields.callbackCount = 1;
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_10133/*"OnMoveEnd"*/,
        0.2,
        0LL);
    }
    else if ( mode == 1 )
    {
      ServantStatusVoiceListViewManager__RequestListObject_36406892(this, 3, v12);
    }
  }
}


void __fastcall ServantStatusVoiceListViewManager__SetMode_36406836(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x3

  this->fields.callbackFunc2 = callback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusVoiceListViewManager__SetMode_36405920(this, mode, -1, v10);
}


void __fastcall ServantStatusVoiceListViewManager__SetObjectItem(
        ServantStatusVoiceListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusVoiceListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4BD9FE0 & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1C21E38(&ServantStatusVoiceListViewObject_TypeInfo);
    byte_4BD9FE0 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusVoiceListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewObject_TypeInfo )
  {
    sub_1C22094(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ServantStatusVoiceListViewObject__Init_36405792(
    (ServantStatusVoiceListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
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

  if ( (byte_4BD9FD4 & 1) == 0 )
  {
    sub_1C21E38(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    byte_4BD9FD4 = 1;
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
    v8 = sub_1C5D328(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C22354(v7);
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

  if ( (byte_4BD9FD6 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    byte_4BD9FD6 = 1;
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
    v8 = sub_1C5D328(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C22354(v7);
  ServantStatusVoiceListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *__fastcall ServantStatusVoiceListViewManager__get_ClippingObjectList(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  _BOOL8 v20; // x0
  __int64 v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BD9FD9 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9FD9 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C22094(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1C22094(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C22094(0LL, v10);
      Item = (ListViewItem_o *)ServantStatusVoiceListViewObject__GetItem(
                                 (ServantStatusVoiceListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C22094(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_42012552((ListViewManager_o *)this, Item, 0LL);
        if ( v20 )
        {
          if ( !v3 )
            sub_1C22094(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C22094(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C22094(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C22094(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *)v3;
}


System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *__fastcall ServantStatusVoiceListViewManager__get_ObjectList(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BD9FD8 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9FD8 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C22094(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1C22094(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v16 = (int64_t)Component_object;
      if ( !v3 )
        sub_1C22094(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C22094(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 4), v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4BD9FD5 & 1) == 0 )
  {
    sub_1C21E38(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    byte_4BD9FD5 = 1;
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
    v8 = sub_1C5D328(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C22354(v7);
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

  if ( (byte_4BD9FD7 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    byte_4BD9FD7 = 1;
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
    v8 = sub_1C5D328(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C22354(v7);
  ServantStatusVoiceListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager_CallbackFunc___ctor(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A60E88;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A60E30;
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
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_4BD9FE6 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&ServantStatusVoiceListViewManager_ResultKind_TypeInfo);
    byte_4BD9FE6 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(
             ServantStatusVoiceListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&result,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1C21DEC(this, v13, callback, object);
}


void __fastcall ServantStatusVoiceListViewManager_CallbackFunc__EndInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
}


void __fastcall ServantStatusVoiceListViewManager_CallbackFunc__Invoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}