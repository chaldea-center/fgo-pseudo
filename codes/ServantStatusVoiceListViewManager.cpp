void ServantStatusVoiceListViewManager___ctor(ServantStatusVoiceListViewManager_o *this, const MethodInfo *method)
{
  this->fields.transformNameAddHeight = 34;
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(
        ServantStatusVoiceListViewManager_o *this,
        int32_t *firstPriority,
        ServantVoiceRelationEntity_array *relationList,
        int32_t svtId,
        const MethodInfo *method)
{
  VoiceInfo_array *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
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
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
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

  if ( (byte_4D2A522 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2A522 = 1;
  }
  Instance = (VoiceInfo_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (VoiceInfo_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_VoiceMaster___);
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
        sub_1C942F8(Instance);
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
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v43, 0);
      if ( !v10 )
        goto LABEL_29;
      Instance = VoiceMaster__getEnableInfo(v10, svtId, (int32_t)Instance, 0, 0, 0, 0, 0);
      v16 = Instance;
      if ( (v12 & 1) == 0 && ascendOrder != v13->fields.ascendOrder )
        ++*firstPriority;
      if ( !Instance )
        goto LABEL_29;
      ascendOrder = v13->fields.ascendOrder;
      if ( SLODWORD(Instance->max_length) >= 1 )
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
    v17 = 0;
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
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v44, 0);
      if ( v17 >= LODWORD(v16->max_length) )
        goto LABEL_30;
      v22 = v16->m_Items[v17];
      v23 = (int)Instance;
      v24 = *firstPriority;
      v25 = (ServantStatusVoiceListViewItem_o *)sub_1C942E4(ServantStatusVoiceListViewItem_TypeInfo);
      ServantStatusVoiceListViewItem___ctor(v25, size, svtId, v23, 0, v22, v24, 0, 0, v36);
      items = itemList->fields._items;
      v33 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v34 = itemList->fields._size;
      if ( (unsigned int)v34 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v25,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + v34;
        itemList->fields._size = v34 + 1;
        v35[4] = (Il2CppClass *)v25;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)v25, v26, v27, v28, v29, v30, v31);
      }
      if ( (__int64)++v17 >= SLODWORD(v16->max_length) )
        goto LABEL_27;
    }
LABEL_29:
    sub_1C942F0(Instance, v8);
  }
}


void ServantStatusVoiceListViewManager__Awake(ServantStatusVoiceListViewManager_o *this, const MethodInfo *method)
{
  void *scrollView; // x0
  float v4; // s1

  if ( (byte_4D2A521 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4D2A521 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)scrollView,
                       (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0 )
  {
    sub_1C942F0(scrollView, method);
  }
  v4 = *((float *)scrollView + 77);
  this->fields.defaultPanelCenter = *((float *)scrollView + 75);
  this->fields.defaultPanelHeight = v4;
}


void ServantStatusVoiceListViewManager__CreateList(
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
  ServantStatusVoiceListViewManager_o *v10; // x20
  UILabel_o *transformNameLabel; // x19
  float transformNameAddHeight; // s0
  struct UIScrollView_o *scrollView; // x8
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v15; // x0
  int64_t userIdNumber; // x19
  Il2CppObject *v17; // x22
  Il2CppObject *v18; // x19
  System_Collections_Generic_List_T__o *v19; // x23
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  System_Int32_array *v23; // x9
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v25; // x10
  Il2CppObject *MasterData_object; // x19
  int32_t maxLimitCount; // w20
  System_Int32_array *VoiceLimitCountList; // x24
  ServantVoiceRelationEntity_array *v29; // x19
  int32_t v30; // w0
  const MethodInfo *v31; // x4
  ServantVoiceRelationEntity_array *v32; // x19
  int32_t v33; // w0
  const MethodInfo *v34; // x4
  il2cpp_array_size_t v35; // x8
  unsigned __int64 v36; // x19
  int32_t v37; // w20
  VoiceInfo_array *EnableInfo; // x24
  System_Collections_Generic_List_object__o *v39; // x27
  int v40; // w8
  unsigned int v41; // w22
  Il2CppClass **v42; // x26
  Il2CppClass *v43; // x8
  VoiceInfo_o **v44; // x26
  Il2CppClass *v45; // t1
  char *name; // x23
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  int v53; // w19
  BalanceConfig_c *v54; // x8
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  int v59; // w8
  const MethodInfo *v60; // x3
  _BOOL8 v61; // x0
  const MethodInfo *v62; // x1
  Il2CppObject *current; // x28
  __int64 naturalAligment; // x10
  _DWORD *monitor; // x8
  __int64 v66; // x0
  int32_t v67; // w5
  const MethodInfo *v68; // x6
  int32_t v69; // w1
  bool voiceLabelSpec; // w21
  _BOOL8 v71; // x0
  const MethodInfo *v72; // x1
  __int64 v73; // x10
  _DWORD *v74; // x8
  __int64 v75; // x0
  __int64 v76; // x1
  struct VoiceEntity_o *voiceEntity; // x8
  int32_t v78; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x19
  __int64 v80; // x1
  System_String_o *v81; // x2
  struct VoiceEntity_o *v82; // x8
  int32_t v83; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v84; // x19
  System_String_o *v85; // x2
  int v86; // w8
  bool v87; // w25
  System_Collections_Generic_List_object__o *v88; // x23
  int32_t v89; // w28
  VoiceInfo_o *v90; // x29
  int32_t v91; // w26
  int32_t v92; // w19
  ServantStatusVoiceListViewItem_o *v93; // x20
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  struct System_Object_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  Il2CppClass **v103; // x0
  __int64 v104; // x0
  int32_t v105; // w22
  int32_t v106; // w21
  int32_t v107; // w19
  BalanceConfig_c *v108; // x8
  Il2CppObject *v109; // x20
  NetworkManager_c *v110; // x0
  int64_t v111; // x19
  UserServantCollectionEntity_o *v112; // x23
  _BOOL8 v113; // x0
  __int64 v114; // x1
  int32_t v115; // w20
  BalanceConfig_c *v116; // x0
  VoiceInfo_array *v117; // x0
  __int64 v118; // x1
  VoiceInfo_array *v119; // x23
  unsigned __int64 v120; // x26
  VoiceInfo_o **m_Items; // x29
  System_Collections_Generic_List_object__o *itemList; // x27
  int32_t v123; // w28
  int32_t v124; // w20
  BalanceConfig_c *v125; // x0
  VoiceInfo_o *v126; // x24
  int32_t ServantIdHyde; // w19
  ServantStatusVoiceListViewItem_o *v128; // x25
  __int64 v129; // x0
  __int64 v130; // x1
  int32_t v131; // w2
  int32_t v132; // w3
  System_String_o *v133; // x4
  int32_t v134; // w5
  int64_t v135; // x6
  System_String_o *v136; // x7
  struct System_Object_array *v137; // x8
  _QWORD *v138; // x9
  __int64 v139; // x10
  Il2CppClass **v140; // x0
  int v141; // w19
  BalanceConfig_c *v142; // x8
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t v144; // w19
  BalanceConfig_c *v145; // x8
  int32_t v146; // w29
  _QWORD *v147; // x23
  unsigned __int64 v148; // x21
  System_Collections_Generic_List_object__o *v149; // x27
  int32_t v150; // w25
  int32_t v151; // w28
  VoiceInfo_o *v152; // x19
  int32_t ServantIdMashu2; // w24
  ServantStatusVoiceListViewItem_o *v154; // x20
  int32_t v155; // w2
  int32_t v156; // w3
  System_String_o *v157; // x4
  int32_t v158; // w5
  int64_t v159; // x6
  System_String_o *v160; // x7
  struct System_Object_array *v161; // x8
  _QWORD *v162; // x9
  __int64 v163; // x10
  Il2CppClass **v164; // x0
  NetworkManager_c *v165; // x0
  BalanceConfig_c *v166; // x8
  int64_t v167; // x20
  struct BalanceConfig_StaticFields *v168; // x8
  int32_t MashuTdGradeUpQuestId; // w19
  int32_t MashuTdGradeUpQuestPhase; // w23
  int32_t svtVoiceId; // w19
  int32_t v172; // w19
  int32_t v173; // w26
  BalanceConfig_c *v174; // x8
  _QWORD *v175; // x23
  unsigned __int64 v176; // x21
  System_Collections_Generic_List_object__o *v177; // x27
  int32_t v178; // w25
  int32_t v179; // w28
  VoiceInfo_o *v180; // x19
  int32_t ServantIdMashu3; // w24
  ServantStatusVoiceListViewItem_o *v182; // x20
  int32_t v183; // w2
  int32_t v184; // w3
  System_String_o *v185; // x4
  int32_t v186; // w5
  int64_t v187; // x6
  System_String_o *v188; // x7
  struct System_Object_array *v189; // x8
  _QWORD *v190; // x9
  __int64 v191; // x10
  Il2CppClass **v192; // x0
  ServantVoiceRelationEntity_array *v193; // x19
  int32_t v194; // w0
  const MethodInfo *v195; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v196; // x8
  int32_t v197; // w25
  __int64 v198; // x20
  int32_t i; // w21
  ServantStatusVoiceListViewItem_o *v200; // x22
  __int64 v201; // x10
  const MethodInfo *v202; // x2
  int v203; // w8
  int32_t v204; // w23
  Il2CppObject *v205; // x24
  __int64 v206; // x10
  System_String_o *OpenName; // x19
  const MethodInfo *v208; // x1
  System_String_o *v209; // x0
  int32_t v210; // w3
  System_String_o *v211; // x4
  int32_t v212; // w5
  int64_t v213; // x6
  System_String_o *v214; // x7
  __int64 v215; // x8
  _QWORD *v216; // x9
  __int64 v217; // x10
  __int64 v218; // x0
  int32_t v219; // w22
  _BOOL8 v220; // x0
  __int64 v221; // x1
  const MethodInfo *v222; // x2
  __int64 v223; // x11
  UILabel_o *explanationLabel; // x20
  UILabel_o *emptyMessageLabel; // x19
  const MethodInfo *v226; // [xsp+8h] [xbp-188h]
  System_String_o *v227; // [xsp+20h] [xbp-170h]
  UserServantCollectionEntity_o *EntityDefinitely; // [xsp+28h] [xbp-168h]
  ServantLimitAddMaster_o *v230; // [xsp+38h] [xbp-158h]
  unsigned __int64 v231; // [xsp+40h] [xbp-150h]
  System_Collections_Generic_List_T__o *v232; // [xsp+48h] [xbp-148h]
  System_Int32_array *v233; // [xsp+50h] [xbp-140h]
  VoiceMaster_o *v234; // [xsp+58h] [xbp-138h]
  unsigned __int64 v235; // [xsp+60h] [xbp-130h]
  VoicePlayCondMaster_o *v236; // [xsp+68h] [xbp-128h]
  int32_t svtId; // [xsp+78h] [xbp-118h]
  int limitCount; // [xsp+7Ch] [xbp-114h]
  System_Collections_Generic_List_Enumerator_object__o v241; // [xsp+88h] [xbp-108h] BYREF
  System_Collections_Generic_List_Enumerator_object__o j; // [xsp+A0h] [xbp-F0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+B8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v244; // [xsp+C0h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v245; // [xsp+E0h] [xbp-B0h] BYREF
  ServantVoiceRelationEntity_array *afterRelationList; // [xsp+100h] [xbp-90h] BYREF
  ServantVoiceRelationEntity_array *sameRelationList; // [xsp+108h] [xbp-88h] BYREF
  ServantVoiceRelationEntity_array *beforeRelationList; // [xsp+110h] [xbp-80h] BYREF
  int32_t firstPriority; // [xsp+11Ch] [xbp-74h] BYREF
  UnityEngine_Vector4_o v250; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2A523 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_VoiceMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_CondType_Kind__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_VoiceEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_VoiceEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_VoiceEntity___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_CondType_Kind___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_VoiceEntity__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_CondType_Kind__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C94098(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&TutorialFlag_TypeInfo);
    sub_1C94098(&StringLiteral_15301/*"VOICE_EMPTY_MESSAGE"*/);
    sub_1C94098(&StringLiteral_12048/*"SERVANT_STATUS_VOICE_EXPLANATION"*/);
    byte_4D2A523 = 1;
  }
  v4 = StringLiteral_15301/*"VOICE_EMPTY_MESSAGE"*/;
  firstPriority = 0;
  sameRelationList = 0;
  beforeRelationList = 0;
  afterRelationList = 0;
  memset(&v245, 0, sizeof(v245));
  memset(&v244, 0, sizeof(v244));
  entity = 0;
  memset(&j, 0, sizeof(j));
  defaultPanelCenter = this->fields.defaultPanelCenter;
  defaultPanelHeight = this->fields.defaultPanelHeight;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !mainInfo )
    goto LABEL_272;
  transformNameSprite = this->fields.transformNameSprite;
  if ( !transformNameSprite )
    goto LABEL_272;
  IsTransformServant_k__BackingField = mainInfo->fields._IsTransformServant_k__BackingField;
  transformNameSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transformNameSprite, 0);
  if ( !transformNameSprite )
    goto LABEL_272;
  if ( IsTransformServant_k__BackingField )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameSprite, 1, 0);
    v10 = this;
    transformNameLabel = this->fields.transformNameLabel;
    transformNameSprite = ServantStatusListViewItem__GetTransformName(mainInfo, 0);
    if ( !transformNameLabel )
      goto LABEL_272;
    UILabel__set_text(transformNameLabel, (System_String_o *)transformNameSprite, 0);
    transformNameAddHeight = (float)this->fields.transformNameAddHeight;
    defaultPanelCenter = defaultPanelCenter + (float)(transformNameAddHeight * -0.5);
    defaultPanelHeight = defaultPanelHeight - transformNameAddHeight;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameSprite, 0, 0);
    v10 = this;
  }
  scrollView = v10->fields.scrollView;
  if ( !scrollView )
    goto LABEL_272;
  transformNameSprite = scrollView->fields.mPanel;
  if ( !transformNameSprite )
    goto LABEL_272;
  v250.fields.x = *((float *)transformNameSprite + 74);
  v250.fields.z = *((float *)transformNameSprite + 76);
  v250.fields.y = defaultPanelCenter;
  v250.fields.w = defaultPanelHeight;
  UIPanel__set_baseClipRegion((UIPanel_o *)transformNameSprite, v250, 0);
  transformNameSprite = this->fields.scrollView;
  if ( !transformNameSprite )
    goto LABEL_272;
  UIScrollView__ResetPosition((UIScrollView_o *)transformNameSprite, 0);
  this->fields.execObjectExtraFlag = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
  }
  v15 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v15 = NetworkManager_TypeInfo;
  }
  v227 = (System_String_o *)v4;
  userIdNumber = v15->static_fields->userIdNumber;
  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
  if ( !Master_object )
    goto LABEL_272;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       userIdNumber,
                       (int32_t)transformNameSprite,
                       0);
  v17 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_VoiceMaster___);
  v236 = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v18 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  firstPriority = 0;
  v19 = (System_Collections_Generic_List_T__o *)sub_1C942E4(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v19,
    (const MethodInfo_384FDE8 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v19 )
    goto LABEL_272;
  items = v19->fields._items;
  v21 = Method_System_Collections_Generic_List_CondType_Kind__Add__;
  ++v19->fields._version;
  if ( !items )
    goto LABEL_272;
  size = v19->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v19,
      81,
      *(const MethodInfo_385063C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v19->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  v23 = changeSvtVoiceIdList;
  v230 = (ServantLimitAddMaster_o *)v18;
  if ( !changeSvtVoiceIdList )
LABEL_272:
    sub_1C942F0(transformNameSprite, v8);
  max_length = changeSvtVoiceIdList->max_length;
  if ( (int)max_length >= 1 )
  {
    v25 = 0;
    v234 = (VoiceMaster_o *)v17;
    v232 = v19;
    while ( 1 )
    {
      if ( v25 >= (unsigned int)max_length )
        goto LABEL_273;
      v231 = v25;
      svtId = v23->m_Items[v25];
      transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_272;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)transformNameSprite,
                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      transformNameSprite = EntityDefinitely;
      if ( !EntityDefinitely )
        goto LABEL_272;
      maxLimitCount = EntityDefinitely->fields.maxLimitCount;
      transformNameSprite = UserServantCollectionEntity__getCostumeList(EntityDefinitely, 0);
      if ( !MasterData_object )
        goto LABEL_272;
      VoiceLimitCountList = ServantLimitAddMaster__getVoiceLimitCountList(
                              (ServantLimitAddMaster_o *)MasterData_object,
                              svtId,
                              maxLimitCount,
                              (System_Int32_array *)transformNameSprite,
                              0);
      transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_272;
      transformNameSprite = DataManager__GetMasterData_object_(
                              (DataManager_o *)transformNameSprite,
                              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !transformNameSprite )
        goto LABEL_272;
      ServantVoiceRelationMaster__GetRelationList_43603972(
        (ServantVoiceRelationMaster_o *)transformNameSprite,
        &beforeRelationList,
        &sameRelationList,
        &afterRelationList,
        svtId,
        0);
      v29 = beforeRelationList;
      v30 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v29, v30, v31);
      v32 = sameRelationList;
      ++firstPriority;
      v33 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v32, v33, v34);
      if ( !VoiceLimitCountList )
        goto LABEL_272;
      v35 = VoiceLimitCountList->max_length;
      if ( (int)v35 >= 1 )
        break;
LABEL_232:
      v193 = afterRelationList;
      v194 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v193, v194, v195);
      v23 = changeSvtVoiceIdList;
      LODWORD(max_length) = changeSvtVoiceIdList->max_length;
      v25 = v231 + 1;
      if ( (__int64)(v231 + 1) >= (int)max_length )
        goto LABEL_233;
    }
    v36 = 0;
    v233 = VoiceLimitCountList;
    while ( 1 )
    {
      if ( v36 >= (unsigned int)v35 )
        goto LABEL_273;
      v37 = VoiceLimitCountList->m_Items[v36];
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      if ( !v17 )
        goto LABEL_272;
      v235 = v36;
      limitCount = v37;
      EnableInfo = VoiceMaster__getEnableInfo(
                     (VoiceMaster_o *)v17,
                     (int32_t)transformNameSprite,
                     svtId,
                     v37,
                     (System_Collections_Generic_List_CondType_Kind__o *)v19,
                     0,
                     0,
                     0);
      v39 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_VoiceEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v39,
        (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_VoiceEntity___ctor__);
      if ( !EnableInfo )
        goto LABEL_272;
      v40 = EnableInfo->max_length;
      if ( v40 >= 1 )
        break;
LABEL_133:
      v105 = firstPriority;
      v106 = ++firstPriority;
      v107 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      v108 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v108 = BalanceConfig_TypeInfo;
      }
      if ( v107 == v108->static_fields->ServantIdJekyll )
      {
        transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transformNameSprite )
          goto LABEL_272;
        v109 = DataManager__GetMasterData_object_(
                 (DataManager_o *)transformNameSprite,
                 (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4D2633A )
        {
          sub_1C94098(&NetworkManager_TypeInfo);
          byte_4D2633A = 1;
        }
        v110 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v110 = NetworkManager_TypeInfo;
        }
        v111 = v110->static_fields->userIdNumber;
        transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
        if ( !v109 )
          goto LABEL_272;
        v112 = UserServantCollectionMaster__GetEntityDefinitely(
                 (UserServantCollectionMaster_o *)v109,
                 v111,
                 (int32_t)transformNameSprite,
                 0);
        transformNameSprite = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v39, 0);
        if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
        {
          if ( !v39 )
            goto LABEL_272;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v241,
            v39,
            (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_VoiceEntity__GetEnumerator__);
          v244 = v241;
          while ( 1 )
          {
            v113 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v244,
                     (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_VoiceEntity__MoveNext__);
            if ( !v113 )
              break;
            if ( !v244.fields._current )
              sub_1C942F0(v113, v114);
            if ( !v112 )
              sub_1C942F0(v113, v114);
            if ( UserServantCollectionEntity__IsPlayed(v112, HIDWORD(v244.fields._current[3].klass), 0) )
            {
              v115 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
              v116 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v116 = BalanceConfig_TypeInfo;
              }
              v117 = VoiceMaster__getEnableInfo(v234, v115, v116->static_fields->ServantIdHyde, limitCount, 0, 0, 0, 0);
              v119 = v117;
              if ( !v117 )
                sub_1C942F0(0, v118);
              if ( SLODWORD(v117->max_length) >= 1 )
              {
                v120 = 0;
                m_Items = v117->m_Items;
                do
                {
                  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  if ( !itemList )
                    sub_1C942F0(v117, v118);
                  v123 = itemList->fields._size;
                  v124 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                  v125 = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v125 = BalanceConfig_TypeInfo;
                  }
                  if ( v120 >= LODWORD(v119->max_length) )
                    sub_1C942F8(v125);
                  v126 = m_Items[v120];
                  ServantIdHyde = v125->static_fields->ServantIdHyde;
                  v128 = (ServantStatusVoiceListViewItem_o *)sub_1C942E4(ServantStatusVoiceListViewItem_TypeInfo);
                  ServantStatusVoiceListViewItem___ctor(
                    v128,
                    v123,
                    v124,
                    ServantIdHyde,
                    limitCount,
                    v126,
                    v106,
                    0,
                    0,
                    v226);
                  v137 = itemList->fields._items;
                  v138 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++itemList->fields._version;
                  if ( !v137 )
                    sub_1C942F0(v129, v130);
                  v139 = itemList->fields._size;
                  if ( (unsigned int)v139 >= LODWORD(v137->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      itemList,
                      (Il2CppObject *)v128,
                      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v140 = &v137->obj.klass + v139;
                    itemList->fields._size = v139 + 1;
                    v140[4] = (Il2CppClass *)v128;
                    sub_1C9403C(
                      (GrandQuestFolderBoardItem_o *)(v140 + 4),
                      (int32_t)v128,
                      v131,
                      v132,
                      v133,
                      v134,
                      v135,
                      v136);
                  }
                  ++v120;
                }
                while ( (__int64)v120 < SLODWORD(v119->max_length) );
              }
              firstPriority = v105 + 2;
              break;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v244,
            (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_VoiceEntity__Dispose__);
        }
      }
      else
      {
        transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
        v141 = (int)transformNameSprite;
        v142 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v142 = BalanceConfig_TypeInfo;
        }
        static_fields = v142->static_fields;
        if ( v141 == static_fields->ServantIdMashu1 )
        {
          if ( !v142->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v142);
            static_fields = BalanceConfig_TypeInfo->static_fields;
          }
          if ( limitCount != static_fields->SpecialLimitCountPLD )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_41176064(115, 0) )
            {
              v144 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
              v145 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v145 = BalanceConfig_TypeInfo;
              }
              v146 = v106;
              transformNameSprite = VoiceMaster__getEnableInfo(
                                      v234,
                                      v144,
                                      v145->static_fields->ServantIdMashu2,
                                      limitCount,
                                      0,
                                      0,
                                      0,
                                      0);
              if ( !transformNameSprite )
                goto LABEL_272;
              v147 = transformNameSprite;
              if ( *((int *)transformNameSprite + 6) >= 1 )
              {
                v148 = 0;
                while ( 1 )
                {
                  v149 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  if ( !v149 )
                    goto LABEL_272;
                  v150 = v149->fields._size;
                  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                  v151 = (int)transformNameSprite;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( v148 >= *((unsigned int *)v147 + 6) )
                    break;
                  v152 = (VoiceInfo_o *)v147[v148 + 4];
                  ServantIdMashu2 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu2;
                  v154 = (ServantStatusVoiceListViewItem_o *)sub_1C942E4(ServantStatusVoiceListViewItem_TypeInfo);
                  ServantStatusVoiceListViewItem___ctor(
                    v154,
                    v150,
                    v151,
                    ServantIdMashu2,
                    limitCount,
                    v152,
                    v146,
                    0,
                    0,
                    v226);
                  v161 = v149->fields._items;
                  v162 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++v149->fields._version;
                  if ( !v161 )
                    goto LABEL_272;
                  v163 = v149->fields._size;
                  if ( (unsigned int)v163 >= LODWORD(v161->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v149,
                      (Il2CppObject *)v154,
                      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v162[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v164 = &v161->obj.klass + v163;
                    v149->fields._size = v163 + 1;
                    v164[4] = (Il2CppClass *)v154;
                    sub_1C9403C(
                      (GrandQuestFolderBoardItem_o *)(v164 + 4),
                      (int32_t)v154,
                      v155,
                      v156,
                      v157,
                      v158,
                      v159,
                      v160);
                  }
                  if ( (__int64)++v148 >= *((int *)v147 + 6) )
                    goto LABEL_196;
                }
LABEL_273:
                sub_1C942F8(transformNameSprite);
              }
LABEL_196:
              v106 = v105 + 2;
              firstPriority = v105 + 2;
            }
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4D2633A )
            {
              sub_1C94098(&NetworkManager_TypeInfo);
              byte_4D2633A = 1;
            }
            v165 = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v165 = NetworkManager_TypeInfo;
            }
            v166 = BalanceConfig_TypeInfo;
            v167 = v165->static_fields->userIdNumber;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v166 = BalanceConfig_TypeInfo;
            }
            v168 = v166->static_fields;
            MashuTdGradeUpQuestId = v168->MashuTdGradeUpQuestId;
            MashuTdGradeUpQuestPhase = v168->MashuTdGradeUpQuestPhase;
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            transformNameSprite = (void *)CondType__IsQuestPhaseClear(
                                            v167,
                                            MashuTdGradeUpQuestId,
                                            MashuTdGradeUpQuestPhase,
                                            -1,
                                            0,
                                            0);
            if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
            {
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              transformNameSprite = v230;
              if ( !v230 )
                goto LABEL_272;
              transformNameSprite = (void *)ServantLimitAddMaster__TryGetEntity(
                                              v230,
                                              &entity,
                                              BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                              limitCount,
                                              0);
              if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_272;
                svtVoiceId = entity->fields.svtVoiceId;
                transformNameSprite = BalanceConfig_TypeInfo;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  transformNameSprite = BalanceConfig_TypeInfo;
                }
                if ( svtVoiceId != *(_DWORD *)(*((_QWORD *)transformNameSprite + 23) + 376LL) )
                {
                  v172 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                  v173 = v106;
                  v174 = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v174 = BalanceConfig_TypeInfo;
                  }
                  transformNameSprite = VoiceMaster__getEnableInfo(
                                          v234,
                                          v172,
                                          v174->static_fields->ServantIdMashu3,
                                          limitCount,
                                          0,
                                          0,
                                          0,
                                          0);
                  if ( !transformNameSprite )
                    goto LABEL_272;
                  v175 = transformNameSprite;
                  if ( *((int *)transformNameSprite + 6) >= 1 )
                  {
                    v176 = 0;
                    do
                    {
                      v177 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                      if ( !v177 )
                        goto LABEL_272;
                      v178 = v177->fields._size;
                      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                      v179 = (int)transformNameSprite;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      if ( v176 >= *((unsigned int *)v175 + 6) )
                        goto LABEL_273;
                      v180 = (VoiceInfo_o *)v175[v176 + 4];
                      ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
                      v182 = (ServantStatusVoiceListViewItem_o *)sub_1C942E4(ServantStatusVoiceListViewItem_TypeInfo);
                      ServantStatusVoiceListViewItem___ctor(
                        v182,
                        v178,
                        v179,
                        ServantIdMashu3,
                        limitCount,
                        v180,
                        v173,
                        0,
                        0,
                        v226);
                      v189 = v177->fields._items;
                      v190 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                      ++v177->fields._version;
                      if ( !v189 )
                        goto LABEL_272;
                      v191 = v177->fields._size;
                      if ( (unsigned int)v191 >= LODWORD(v189->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v177,
                          (Il2CppObject *)v182,
                          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v190[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v192 = &v189->obj.klass + v191;
                        v177->fields._size = v191 + 1;
                        v192[4] = (Il2CppClass *)v182;
                        sub_1C9403C(
                          (GrandQuestFolderBoardItem_o *)(v192 + 4),
                          (int32_t)v182,
                          v183,
                          v184,
                          v185,
                          v186,
                          v187,
                          v188);
                      }
                    }
                    while ( (__int64)++v176 < *((int *)v175 + 6) );
                  }
                  firstPriority = v173 + 1;
                }
              }
            }
          }
        }
      }
      VoiceLimitCountList = v233;
      v17 = (Il2CppObject *)v234;
      v19 = v232;
      LODWORD(v35) = v233->max_length;
      v36 = v235 + 1;
      if ( (__int64)(v235 + 1) >= (int)v35 )
        goto LABEL_232;
    }
    v41 = 0;
    while ( 1 )
    {
      if ( v41 >= v40 )
        goto LABEL_273;
      v42 = &EnableInfo->obj.klass + (int)v41;
      v45 = v42[4];
      v44 = (VoiceInfo_o **)(v42 + 4);
      v43 = v45;
      if ( !v45 )
        goto LABEL_272;
      name = (char *)v43->_1.name;
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      v53 = (int)transformNameSprite;
      v54 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v54 = BalanceConfig_TypeInfo;
      }
      if ( v53 == v54->static_fields->ServantIdJekyll )
      {
        if ( !name )
          goto LABEL_272;
        if ( *((_DWORD *)name + 7) == 7 )
        {
          if ( !v39 )
            goto LABEL_272;
          v55 = v39->fields._items;
          v56 = Method_System_Collections_Generic_List_VoiceEntity__Add__;
          ++v39->fields._version;
          if ( !v55 )
            goto LABEL_272;
          v57 = v39->fields._size;
          if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v39,
              (Il2CppObject *)name,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
          }
          else
          {
            v58 = &v55->obj.klass + v57;
            v39->fields._size = v57 + 1;
            v58[4] = (Il2CppClass *)name;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v58 + 4), (int32_t)name, v47, v48, v49, v50, v51, v52);
          }
        }
      }
      if ( limitCount <= 10 )
      {
        if ( !name )
          goto LABEL_272;
        if ( *((_DWORD *)name + 7) == 2 )
        {
          v59 = *((_DWORD *)name + 12);
          if ( v59 == 7 )
          {
            if ( *((_DWORD *)name + 13) != 2 )
            {
              if ( v41 >= LODWORD(EnableInfo->max_length) )
                goto LABEL_273;
              transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                              (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                              svtId,
                                              limitCount,
                                              *v44,
                                              (const MethodInfo *)v49);
              if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
              {
                transformNameSprite = this->fields.itemList;
                if ( !transformNameSprite )
                  goto LABEL_272;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v241,
                  (System_Collections_Generic_List_object__o *)transformNameSprite,
                  (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
                v245 = v241;
                do
                {
                  v61 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v245,
                          (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                  if ( !v61 )
                    goto LABEL_102;
                  current = v245.fields._current;
                  if ( !v245.fields._current
                    || (naturalAligment = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment,
                        v245.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
                    || (ServantStatusVoiceListViewItem_c *)v245.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                  {
                    sub_1C942F0(v61, v62);
                  }
                  monitor = v245.fields._current[10].monitor;
                  if ( !monitor )
                    sub_1C942F0(v61, v62);
                }
                while ( monitor[7] != 2
                     || monitor[12] != 7
                     || monitor[13] != *((_DWORD *)name + 13)
                     || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                          (ServantStatusVoiceListViewItem_o *)v245.fields._current,
                          v62) != svtId );
                v66 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                v69 = v66;
                if ( v41 >= LODWORD(EnableInfo->max_length) )
                  sub_1C942F8(v66);
                goto LABEL_125;
              }
LABEL_82:
              if ( v41 >= LODWORD(EnableInfo->max_length) )
                goto LABEL_273;
              transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                                              (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                              svtId,
                                              *v44,
                                              v60);
              if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
                goto LABEL_121;
              voiceLabelSpec = 1;
              goto LABEL_104;
            }
          }
          else if ( v59 == 18 )
          {
            if ( v41 >= LODWORD(EnableInfo->max_length) )
              goto LABEL_273;
            transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                            (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                            svtId,
                                            limitCount,
                                            *v44,
                                            (const MethodInfo *)v49);
            if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              goto LABEL_82;
            transformNameSprite = this->fields.itemList;
            if ( !transformNameSprite )
              goto LABEL_272;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v241,
              (System_Collections_Generic_List_object__o *)transformNameSprite,
              (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v245 = v241;
            do
            {
              v71 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v245,
                      (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v71 )
                goto LABEL_102;
              current = v245.fields._current;
              if ( !v245.fields._current
                || (v73 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment,
                    v245.fields._current->klass->_2.naturalAligment < (unsigned int)v73)
                || (ServantStatusVoiceListViewItem_c *)v245.fields._current->klass->_2.typeHierarchy[v73 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                sub_1C942F0(v71, v72);
              }
              v74 = v245.fields._current[10].monitor;
              if ( !v74 )
                sub_1C942F0(v71, v72);
            }
            while ( v74[7] != 2
                 || v74[12] != 18
                 || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                      (ServantStatusVoiceListViewItem_o *)v245.fields._current,
                      v72) != svtId );
            v75 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
            if ( v41 >= LODWORD(EnableInfo->max_length) )
              sub_1C942F8(v75);
            if ( !*v44 )
              sub_1C942F0(v75, v76);
            voiceEntity = (*v44)->fields.voiceEntity;
            if ( !voiceEntity )
              sub_1C942F0(v75, v76);
            v78 = v75;
            id = voiceEntity->fields.id;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
            v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49657388(id, 0);
            if ( !v236 )
              sub_1C942F0(0, v80);
            if ( !VoicePlayCondMaster__isVoiceCond(v236, v78, v81, 81, 0) )
            {
              v104 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
              v69 = v104;
              if ( v41 >= LODWORD(EnableInfo->max_length) )
                sub_1C942F8(v104);
LABEL_125:
              ServantStatusVoiceListViewItem__SetLimitCount(
                (ServantStatusVoiceListViewItem_o *)current,
                v69,
                svtId,
                limitCount,
                *v44,
                v67,
                v68);
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v245,
                (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
              goto LABEL_121;
            }
LABEL_102:
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v245,
              (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          }
        }
      }
      voiceLabelSpec = 0;
LABEL_104:
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      if ( v41 >= LODWORD(EnableInfo->max_length) )
        goto LABEL_273;
      if ( !*v44 )
        goto LABEL_272;
      v82 = (*v44)->fields.voiceEntity;
      if ( !v82 )
        goto LABEL_272;
      v83 = (int)transformNameSprite;
      v84 = v82->fields.id;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49657388(v84, 0);
      transformNameSprite = v236;
      if ( !v236 )
        goto LABEL_272;
      transformNameSprite = (void *)VoicePlayCondMaster__isVoiceCond(v236, v83, v85, 81, 0);
      if ( !name )
        goto LABEL_272;
      v86 = *((_DWORD *)name + 12);
      v87 = v86 == 7 || v86 == 18 || v86 == 54 && ((unsigned __int8)transformNameSprite & 1) != 0;
      v88 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !v88 )
        goto LABEL_272;
      v89 = v88->fields._size;
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      if ( v41 >= LODWORD(EnableInfo->max_length) )
        goto LABEL_273;
      v90 = *v44;
      v91 = firstPriority;
      v92 = (int)transformNameSprite;
      v93 = (ServantStatusVoiceListViewItem_o *)sub_1C942E4(ServantStatusVoiceListViewItem_TypeInfo);
      ServantStatusVoiceListViewItem___ctor(v93, v89, v92, svtId, limitCount, v90, v91, v87, voiceLabelSpec, v226);
      v100 = v88->fields._items;
      v101 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v88->fields._version;
      if ( !v100 )
        goto LABEL_272;
      v102 = v88->fields._size;
      if ( (unsigned int)v102 >= LODWORD(v100->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v88,
          (Il2CppObject *)v93,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
      }
      else
      {
        v103 = &v100->obj.klass + v102;
        v88->fields._size = v102 + 1;
        v103[4] = (Il2CppClass *)v93;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v103 + 4), (int32_t)v93, v94, v95, v96, v97, v98, v99);
      }
LABEL_121:
      v40 = EnableInfo->max_length;
      if ( (int)++v41 >= v40 )
        goto LABEL_133;
    }
  }
LABEL_233:
  v196 = this->fields.itemList;
  if ( !v196 )
    goto LABEL_272;
  v197 = v196->fields._size;
  v198 = sub_1C942E4(System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v198,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
  if ( v197 - 1 >= 1 )
  {
    for ( i = 0; i != v197 - 1; ++i )
    {
      transformNameSprite = this->fields.itemList;
      if ( !transformNameSprite )
        goto LABEL_272;
      transformNameSprite = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)transformNameSprite,
                              i,
                              (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !transformNameSprite )
        goto LABEL_272;
      v200 = (ServantStatusVoiceListViewItem_o *)transformNameSprite;
      v201 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)transformNameSprite + 304LL) < (unsigned int)v201
        || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)transformNameSprite + 200LL) + 8 * v201 - 8) != ServantStatusVoiceListViewItem_TypeInfo )
      {
        goto LABEL_272;
      }
      if ( ServantStatusVoiceListViewItem__get_OpenName((ServantStatusVoiceListViewItem_o *)transformNameSprite, v8) )
      {
        transformNameSprite = (void *)ServantStatusVoiceListViewItem__get_DispNum(v200, v8);
        if ( !(_DWORD)transformNameSprite )
        {
          if ( !v198 )
            goto LABEL_272;
          v202 = (const MethodInfo *)*(unsigned int *)(v198 + 24);
          v203 = *(_DWORD *)(v198 + 28) + 1;
          *(_DWORD *)(v198 + 24) = 0;
          *(_DWORD *)(v198 + 28) = v203;
          if ( (int)v202 >= 1 )
            System_Array__Clear(*(System_Array_o **)(v198 + 16), 0, (int32_t)v202, 0);
          v204 = i + 1;
          if ( i + 1 < v197 )
          {
            do
            {
              transformNameSprite = this->fields.itemList;
              if ( !transformNameSprite )
                goto LABEL_272;
              transformNameSprite = System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)transformNameSprite,
                                      v204,
                                      (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !transformNameSprite )
                goto LABEL_272;
              v205 = (Il2CppObject *)transformNameSprite;
              v206 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
              if ( *(unsigned __int8 *)(*(_QWORD *)transformNameSprite + 304LL) < (unsigned int)v206
                || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)transformNameSprite + 200LL)
                                                        + 8 * v206
                                                        - 8) != ServantStatusVoiceListViewItem_TypeInfo )
              {
                goto LABEL_272;
              }
              OpenName = ServantStatusVoiceListViewItem__get_OpenName(
                           (ServantStatusVoiceListViewItem_o *)transformNameSprite,
                           v8);
              v209 = ServantStatusVoiceListViewItem__get_OpenName(v200, v208);
              transformNameSprite = (void *)System_String__op_Equality(OpenName, v209, 0);
              if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              {
                v215 = *(_QWORD *)(v198 + 16);
                v216 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__;
                ++*(_DWORD *)(v198 + 28);
                if ( !v215 )
                  goto LABEL_272;
                v217 = *(int *)(v198 + 24);
                if ( (unsigned int)v217 >= *(_DWORD *)(v215 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)v198,
                    v205,
                    *(const MethodInfo_386AE34 **)(*(_QWORD *)(v216[4] + 192LL) + 112LL));
                }
                else
                {
                  v218 = v215 + 8 * v217;
                  *(_DWORD *)(v198 + 24) = v217 + 1;
                  *(_QWORD *)(v218 + 32) = v205;
                  sub_1C9403C(
                    (GrandQuestFolderBoardItem_o *)(v218 + 32),
                    (int32_t)v205,
                    (int32_t)v202,
                    v210,
                    v211,
                    v212,
                    v213,
                    v214);
                }
              }
            }
            while ( v197 != ++v204 );
          }
          if ( *(int *)(v198 + 24) >= 1 )
          {
            ServantStatusVoiceListViewItem__SetNameNum(v200, 1, v202);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v241,
              (System_Collections_Generic_List_object__o *)v198,
              (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
            v219 = 2;
            for ( j = v241;
                  ;
                  ServantStatusVoiceListViewItem__SetNameNum(
                    (ServantStatusVoiceListViewItem_o *)j.fields._current,
                    v219++,
                    v222) )
            {
              v220 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &j,
                       (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
              if ( !v220 )
                break;
              if ( j.fields._current )
              {
                v223 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
                if ( j.fields._current->klass->_2.naturalAligment >= (unsigned int)v223
                  && (ServantStatusVoiceListViewItem_c *)j.fields._current->klass->_2.typeHierarchy[v223 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
                {
                  continue;
                }
              }
              sub_1C942F0(v220, v221);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &j,
              (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
          }
        }
      }
    }
  }
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transformNameSprite = LocalizationManager__Get((System_String_o *)StringLiteral_12048/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, 0);
  if ( !explanationLabel )
    goto LABEL_272;
  UILabel__set_text(explanationLabel, (System_String_o *)transformNameSprite, 0);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  transformNameSprite = LocalizationManager__Get(v227, 0);
  if ( !emptyMessageLabel )
    goto LABEL_272;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)transformNameSprite, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0);
}


void ServantStatusVoiceListViewManager__DestroyList(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


ServantStatusVoiceListViewItem_o *ServantStatusVoiceListViewManager__GetItem(
        ServantStatusVoiceListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusVoiceListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4D2A526 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&ServantStatusVoiceListViewItem_TypeInfo);
    byte_4D2A526 = 1;
  }
  result = (ServantStatusVoiceListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantStatusVoiceListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (ServantStatusVoiceListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


bool ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
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

  if ( (byte_4D2A524 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_16163/*"_"*/);
    byte_4D2A524 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)ServantVoiceMaster__getEntity_43596624(
                                (ServantVoiceMaster_o *)Instance,
                                svtId,
                                limitCount,
                                0);
  if ( !voiceInfo )
    goto LABEL_25;
  voiceEntity = voiceInfo->fields.voiceEntity;
  if ( !voiceEntity || !Instance )
    goto LABEL_25;
  svtVoiceType = voiceEntity->fields.svtVoiceType;
  if ( (unsigned int)svtVoiceType >= LODWORD(Instance->fields.m_CancellationTokenSource) )
LABEL_26:
    sub_1C942F8(Instance);
  v12 = *((_QWORD *)&Instance->fields._DispLog + svtVoiceType);
  if ( !v12 )
    return 0;
  Instance = (DataManager_o *)System_Int32__ToString((int)voiceInfo + 52, 0);
  v13 = voiceInfo->fields.voiceEntity;
  if ( !v13
    || (v14 = (System_String_o *)Instance, (Instance = (DataManager_o *)v13->fields.id) == 0)
    || (v15 = (System_String_o *)((__int64 (__fastcall *)(DataManager_o *, const MethodInfo *))Instance->klass->vtable._3_ToString.methodPtr)(
                                   Instance,
                                   Instance->klass->vtable._3_ToString.method),
        Instance = (DataManager_o *)System_String__Concat_64456008(v14, (System_String_o *)StringLiteral_16163/*"_"*/, v15, 0),
        (v16 = *(_QWORD *)(v12 + 32)) == 0) )
  {
LABEL_25:
    sub_1C942F0(Instance, v9);
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
    Instance = (DataManager_o *)System_String__op_Equality(*(System_String_o **)(v22 + 16), v18, 0);
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


bool ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
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

  if ( (byte_4D2A525 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2A525 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
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
                                0);
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
        sub_1C942F8(Instance);
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
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v20, 0);
        if ( (int)Instance >= value )
          v13 = 1;
      }
      max_length = servantVoiceConds->max_length;
      if ( (int)++v12 >= max_length )
        return v13;
    }
LABEL_31:
    sub_1C942F0(Instance, v7);
  }
  return 1;
}


void ServantStatusVoiceListViewManager__OnClickListView(
        ServantStatusVoiceListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ServantStatusVoiceListViewManager_o *v9; // x20
  struct ListViewItem_o *linkItem; // x21
  __int64 naturalAligment; // x10
  struct ServantStatusVoiceListViewManager_CallbackFunc_o *callbackFunc; // x22
  int v13; // w20
  unsigned int Index; // w0
  __int64 v15; // x1

  v9 = this;
  if ( (byte_4D2A52C & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1C94098(&ServantStatusVoiceListViewItem_TypeInfo);
    byte_4D2A52C = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0
    || (naturalAligment = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewItem_TypeInfo )
  {
    sub_1C942F0(this, obj);
  }
  if ( LOBYTE(linkItem[1].fields.sortValue2B) )
  {
    callbackFunc = v9->fields.callbackFunc;
    v9->fields.callbackFunc = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v9->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      v13 = BYTE1(linkItem[1].fields.sortValue2B);
      Index = ListViewObject__get_Index(obj, 0);
      if ( v13 )
        v15 = 2;
      else
        v15 = 1;
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        v15,
        Index,
        callbackFunc->fields.method);
    }
  }
}


void ServantStatusVoiceListViewManager__OnMoveEnd(ServantStatusVoiceListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4D2A52B & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2A52B = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0);
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_1C942F0(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v14,
          1,
          v14->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2, 0, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusVoiceListViewManager__RequestListObject(
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

  if ( (byte_4D2A529 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_1C94098(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_1C94098(&StringLiteral_9964/*"OnMoveEnd"*/);
    byte_4D2A529 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C942F0(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9964/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C942F0(v12, v13);
      ServantStatusVoiceListViewObject__Init_39057804(
        (ServantStatusVoiceListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusVoiceListViewManager__RequestListObject_39057300(
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

  if ( (byte_4D2A52A & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_1C94098(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_1C94098(&StringLiteral_9964/*"OnMoveEnd"*/);
    byte_4D2A52A = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C942F0(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9964/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C942F0(v10, v11);
      ServantStatusVoiceListViewObject__Init_39058412((ServantStatusVoiceListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


void ServantStatusVoiceListViewManager__SetMode(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        ServantStatusVoiceListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x3

  this->fields.callbackFunc = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusVoiceListViewManager__SetMode_39056328(this, mode, -1, v10);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusVoiceListViewManager__SetMode_39056328(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        int32_t select,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  __int64 naturalAligment; // x11
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

  if ( (byte_4D2A528 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
    sub_1C94098(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_1C94098(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_1C94098(&StringLiteral_9964/*"OnMoveEnd"*/);
    byte_4D2A528 = 1;
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
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    for ( i = v23; ; BYTE1(i.fields._current[12].monitor) = HIDWORD(i.fields._current[1].klass) == select )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v8 )
        break;
      if ( !i.fields._current )
        sub_1C942F0(v8, v9);
      naturalAligment = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
      if ( i.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (ServantStatusVoiceListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        sub_1C942F0(v8, v9);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
                                                                  (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
        if ( !itemList )
          break;
        ServantStatusVoiceListViewObject__Init_39056200((ServantStatusVoiceListViewObject_o *)itemList, 4, v16);
        if ( ++v15 >= v14->fields._size )
          return;
      }
      goto LABEL_30;
    }
  }
  else
  {
    this->fields.initMode = mode;
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
    ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0);
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
                   (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
          v21 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
          System_Action___ctor(v21, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0);
          if ( !Item )
            break;
          ServantStatusVoiceListViewObject__Init_39057804((ServantStatusVoiceListViewObject_o *)Item, 5, v21, 0.1, v22);
          if ( ++v19 >= v18->fields._size )
            return;
        }
LABEL_30:
        sub_1C942F0(itemList, *(_QWORD *)&mode);
      }
      this->fields.callbackCount = 1;
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_9964/*"OnMoveEnd"*/,
        0.2,
        0);
    }
    else if ( mode == 1 )
    {
      ServantStatusVoiceListViewManager__RequestListObject_39057300(this, 3, v12);
    }
  }
}


void ServantStatusVoiceListViewManager__SetMode_39057244(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x3

  this->fields.callbackFunc2 = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusVoiceListViewManager__SetMode_39056328(this, mode, -1, v10);
}


void ServantStatusVoiceListViewManager__SetObjectItem(
        ServantStatusVoiceListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusVoiceListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4D2A527 & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1C94098(&ServantStatusVoiceListViewObject_TypeInfo);
    byte_4D2A527 = 1;
  }
  if ( !obj
    || (naturalAligment = ServantStatusVoiceListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantStatusVoiceListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewObject_TypeInfo )
  {
    sub_1C942F0(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ServantStatusVoiceListViewObject__Init_39056200(
    (ServantStatusVoiceListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


void ServantStatusVoiceListViewManager__add_callbackFunc(
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

  if ( (byte_4D2A51B & 1) == 0 )
  {
    sub_1C94098(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    byte_4D2A51B = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (ServantStatusVoiceListViewManager_CallbackFunc_c *)v7->klass != ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C9468C(v7);
  ServantStatusVoiceListViewManager__remove_callbackFunc(v10, v11, v12);
}


void ServantStatusVoiceListViewManager__add_callbackFunc2(
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

  if ( (byte_4D2A51D & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D2A51D = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C9468C(v7);
  ServantStatusVoiceListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *ServantStatusVoiceListViewManager__get_ClippingObjectList(
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  _BOOL8 v20; // x0
  __int64 v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D2A520 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
    sub_1C94098(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2A520 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C942F0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C942F0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C942F0(0, v10);
      Item = (ListViewItem_o *)ServantStatusVoiceListViewObject__GetItem(
                                 (ServantStatusVoiceListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C942F0(0, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_44610268((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1C942F0(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C942F0(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C942F0(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C942F0(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *)v3;
}


System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *ServantStatusVoiceListViewManager__get_ObjectList(
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D2A51F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
    sub_1C94098(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2A51F = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C942F0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C942F0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C942F0(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C942F0(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *)v3;
}


void ServantStatusVoiceListViewManager__remove_callbackFunc(
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

  if ( (byte_4D2A51C & 1) == 0 )
  {
    sub_1C94098(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    byte_4D2A51C = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (ServantStatusVoiceListViewManager_CallbackFunc_c *)v7->klass != ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C9468C(v7);
  ServantStatusVoiceListViewManager__add_callbackFunc2(v10, v11, v12);
}


void ServantStatusVoiceListViewManager__remove_callbackFunc2(
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

  if ( (byte_4D2A51E & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D2A51E = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C9468C(v7);
  ServantStatusVoiceListViewManager__get_ObjectList(v10, v11);
}


void ServantStatusVoiceListViewManager_CallbackFunc___ctor(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC6C30;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC6BD8;
}


System_IAsyncResult_o *ServantStatusVoiceListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = result;
  v12 = kind;
  if ( (byte_4D2A52D & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&ServantStatusVoiceListViewManager_ResultKind_TypeInfo);
    byte_4D2A52D = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(ServantStatusVoiceListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v10, callback, object);
}


void ServantStatusVoiceListViewManager_CallbackFunc__EndInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void ServantStatusVoiceListViewManager_CallbackFunc__Invoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    result,
    this->fields.method);
}