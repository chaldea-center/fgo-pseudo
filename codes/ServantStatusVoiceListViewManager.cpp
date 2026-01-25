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
  VoiceMaster_o *v10; // x23
  unsigned int v11; // w9
  char v12; // w19
  ServantVoiceRelationEntity_o *v13; // x20
  __int64 v14; // x24
  __int64 v15; // x25
  VoiceInfo_array *v16; // x24
  unsigned __int64 v17; // x23
  System_Collections_Generic_List_object__o *itemList; // x25
  int32_t size; // w27
  __int64 v20; // x26
  __int64 v21; // x28
  VoiceInfo_o *v22; // x29
  int32_t v23; // w19
  int32_t v24; // w28
  ServantStatusVoiceListViewItem_o *v25; // x26
  int32_t v26; // w2
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0
  const MethodInfo *v37; // [xsp+8h] [xbp-98h]
  VoiceMaster_o *v38; // [xsp+18h] [xbp-88h]
  ServantVoiceRelationEntity_array *v39; // [xsp+20h] [xbp-80h]
  int32_t ascendOrder; // [xsp+30h] [xbp-70h]
  unsigned int v42; // [xsp+34h] [xbp-6Ch]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4CEC424 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEC424 = 1;
  }
  Instance = (VoiceInfo_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (VoiceInfo_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !relationList )
    goto LABEL_29;
  max_length = relationList->max_length;
  if ( max_length >= 1 )
  {
    v10 = (VoiceMaster_o *)Instance;
    v11 = 0;
    v12 = 1;
    ascendOrder = 0;
    v38 = (VoiceMaster_o *)Instance;
    v39 = relationList;
    while ( 1 )
    {
      if ( v11 >= max_length )
LABEL_30:
        sub_1C7BD48(Instance);
      v13 = relationList->m_Items[v11];
      v42 = v11;
      if ( !v13 )
        goto LABEL_29;
      v15 = *(_QWORD *)&v13->fields.relationSvtId.fields.currentCryptoKey;
      v14 = *(_QWORD *)&v13->fields.relationSvtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v44.fields.currentCryptoKey = v15;
      *(_QWORD *)&v44.fields.fakeValue = v14;
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v44, 0);
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
      v10 = v38;
      relationList = v39;
      v12 = 0;
      max_length = v39->max_length;
      v11 = v42 + 1;
      if ( (int)(v42 + 1) >= max_length )
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
      *(_QWORD *)&v45.fields.currentCryptoKey = v21;
      *(_QWORD *)&v45.fields.fakeValue = v20;
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v45, 0);
      if ( v17 >= LODWORD(v16->max_length) )
        goto LABEL_30;
      v22 = v16->m_Items[v17];
      v23 = *firstPriority;
      v24 = (int)Instance;
      v25 = (ServantStatusVoiceListViewItem_o *)sub_1C7BD34(ServantStatusVoiceListViewItem_TypeInfo);
      ServantStatusVoiceListViewItem___ctor(v25, size, v26, v24, 0, v22, v23, 0, 0, v37);
      items = itemList->fields._items;
      v34 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v35 = itemList->fields._size;
      if ( (unsigned int)v35 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v25,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + v35;
        itemList->fields._size = v35 + 1;
        v36[4] = (Il2CppClass *)v25;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v36 + 4), (int32_t)v25, v27, v28, v29, v30, v31, v32);
      }
      if ( (__int64)++v17 >= SLODWORD(v16->max_length) )
        goto LABEL_27;
    }
LABEL_29:
    sub_1C7BD40(Instance, v8);
  }
}


void ServantStatusVoiceListViewManager__Awake(ServantStatusVoiceListViewManager_o *this, const MethodInfo *method)
{
  void *scrollView; // x0
  float v4; // s1

  if ( (byte_4CEC423 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4CEC423 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)scrollView,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0 )
  {
    sub_1C7BD40(scrollView, method);
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
  UIWidget_o *transformNameSprite; // x0
  const MethodInfo *v8; // x1
  ServantStatusVoiceListViewManager_o *v9; // x19
  UILabel_o *transformNameLabel; // x20
  float transformNameAddHeight; // s0
  struct UIScrollView_o *scrollView; // x8
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v14; // x0
  int64_t userIdNumber; // x21
  Il2CppObject *v16; // x22
  Il2CppObject *v17; // x20
  System_Collections_Generic_List_T__o *v18; // x23
  struct System_Object_array *items; // x8
  System_Int32_array *v20; // x19
  _QWORD *v21; // x9
  __int64 size; // x10
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v24; // x9
  Il2CppObject *MasterData_object; // x20
  int32_t maxLimitCount; // w21
  System_Int32_array *VoiceLimitCountList; // x25
  ServantVoiceRelationEntity_array *v28; // x20
  int32_t v29; // w0
  const MethodInfo *v30; // x4
  ServantVoiceRelationEntity_array *v31; // x20
  int32_t v32; // w0
  const MethodInfo *v33; // x4
  il2cpp_array_size_t v34; // x8
  unsigned __int64 v35; // x19
  int32_t v36; // w21
  VoiceInfo_array *EnableInfo; // x24
  System_Collections_Generic_List_object__o *v38; // x27
  int v39; // w8
  unsigned int v40; // w26
  Il2CppClass **v41; // x19
  Il2CppClass *v42; // x8
  VoiceInfo_o **v43; // x19
  Il2CppClass *v44; // t1
  char *name; // x23
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int v52; // w20
  BalanceConfig_c *v53; // x8
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  int v58; // w8
  const MethodInfo *v59; // x3
  _BOOL8 v60; // x0
  const MethodInfo *v61; // x1
  Il2CppObject *current; // x28
  __int64 naturalAligment; // x10
  _DWORD *monitor; // x8
  __int64 v65; // x0
  int32_t v66; // w1
  int32_t v67; // w5
  const MethodInfo *v68; // x6
  bool voiceLabelSpec; // w22
  _BOOL8 v70; // x0
  const MethodInfo *v71; // x1
  __int64 v72; // x10
  _DWORD *v73; // x8
  __int64 v74; // x0
  __int64 v75; // x1
  struct VoiceEntity_o *voiceEntity; // x8
  int32_t v77; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x20
  __int64 v79; // x1
  System_String_o *v80; // x2
  struct VoiceEntity_o *v81; // x8
  int32_t v82; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v83; // x20
  System_String_o *v84; // x2
  int v85; // w8
  bool v86; // w28
  System_Collections_Generic_List_object__o *v87; // x23
  int32_t v88; // w20
  VoiceInfo_o *v89; // x19
  int32_t v90; // w29
  ServantStatusVoiceListViewItem_o *v91; // x25
  int32_t v92; // w2
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x4
  int32_t v96; // w5
  int64_t v97; // x6
  System_String_o *v98; // x7
  struct System_Object_array *v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  Il2CppClass **v102; // x0
  __int64 v103; // x0
  int32_t v104; // w26
  int32_t v105; // w22
  int32_t v106; // w20
  BalanceConfig_c *v107; // x8
  Il2CppObject *v108; // x23
  NetworkManager_c *v109; // x0
  int64_t v110; // x20
  UserServantCollectionEntity_o *v111; // x23
  _BOOL8 v112; // x0
  __int64 v113; // x1
  int32_t v114; // w23
  BalanceConfig_c *v115; // x0
  VoiceInfo_array *v116; // x0
  __int64 v117; // x1
  VoiceInfo_array *v118; // x23
  unsigned __int64 v119; // x19
  VoiceInfo_o **m_Items; // x29
  System_Collections_Generic_List_object__o *itemList; // x27
  int32_t v122; // w28
  BalanceConfig_c *v123; // x0
  VoiceInfo_o *v124; // x20
  int32_t ServantIdHyde; // w24
  ServantStatusVoiceListViewItem_o *v126; // x25
  int32_t v127; // w2
  __int64 v128; // x0
  __int64 v129; // x1
  int32_t v130; // w2
  int32_t v131; // w3
  System_String_o *v132; // x4
  int32_t v133; // w5
  int64_t v134; // x6
  System_String_o *v135; // x7
  struct System_Object_array *v136; // x8
  _QWORD *v137; // x9
  __int64 v138; // x10
  Il2CppClass **v139; // x0
  int v140; // w20
  BalanceConfig_c *v141; // x8
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t v143; // w20
  BalanceConfig_c *v144; // x8
  int32_t v145; // w29
  UIWidget_o *v146; // x23
  unsigned __int64 v147; // x22
  System_Collections_Generic_List_object__o *v148; // x27
  int32_t v149; // w28
  VoiceInfo_o *v150; // x19
  int32_t ServantIdMashu2; // w20
  ServantStatusVoiceListViewItem_o *v152; // x25
  int32_t v153; // w2
  int32_t v154; // w2
  int32_t v155; // w3
  System_String_o *v156; // x4
  int32_t v157; // w5
  int64_t v158; // x6
  System_String_o *v159; // x7
  struct System_Object_array *v160; // x8
  _QWORD *v161; // x9
  __int64 v162; // x10
  Il2CppClass **v163; // x0
  NetworkManager_c *v164; // x0
  BalanceConfig_c *v165; // x8
  int64_t v166; // x23
  struct BalanceConfig_StaticFields *v167; // x8
  int32_t MashuTdGradeUpQuestId; // w20
  int32_t MashuTdGradeUpQuestPhase; // w24
  int32_t svtVoiceId; // w19
  int32_t v171; // w20
  int32_t v172; // w26
  BalanceConfig_c *v173; // x8
  UIWidget_o *v174; // x23
  unsigned __int64 v175; // x22
  System_Collections_Generic_List_object__o *v176; // x27
  int32_t v177; // w28
  VoiceInfo_o *v178; // x19
  int32_t ServantIdMashu3; // w20
  ServantStatusVoiceListViewItem_o *v180; // x25
  int32_t v181; // w2
  int32_t v182; // w2
  int32_t v183; // w3
  System_String_o *v184; // x4
  int32_t v185; // w5
  int64_t v186; // x6
  System_String_o *v187; // x7
  struct System_Object_array *v188; // x8
  _QWORD *v189; // x9
  __int64 v190; // x10
  Il2CppClass **v191; // x0
  ServantVoiceRelationEntity_array *v192; // x19
  int32_t v193; // w0
  const MethodInfo *v194; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v195; // x8
  int32_t v196; // w25
  __int64 v197; // x20
  int32_t i; // w21
  ServantStatusVoiceListViewItem_o *v199; // x22
  __int64 v200; // x10
  const MethodInfo *v201; // x2
  int v202; // w8
  int32_t v203; // w23
  Il2CppObject *v204; // x24
  __int64 v205; // x10
  System_String_o *OpenName; // x19
  const MethodInfo *v207; // x1
  System_String_o *v208; // x0
  int32_t v209; // w3
  System_String_o *v210; // x4
  int32_t v211; // w5
  int64_t v212; // x6
  System_String_o *v213; // x7
  __int64 v214; // x8
  _QWORD *v215; // x9
  __int64 v216; // x10
  __int64 v217; // x0
  int32_t v218; // w22
  _BOOL8 v219; // x0
  __int64 v220; // x1
  const MethodInfo *v221; // x2
  __int64 v222; // x11
  UILabel_o *explanationLabel; // x20
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v225; // [xsp+8h] [xbp-188h]
  System_String_o *v226; // [xsp+20h] [xbp-170h]
  UserServantCollectionEntity_o *EntityDefinitely; // [xsp+28h] [xbp-168h]
  ServantLimitAddMaster_o *v229; // [xsp+38h] [xbp-158h]
  unsigned __int64 v230; // [xsp+40h] [xbp-150h]
  System_Collections_Generic_List_T__o *v231; // [xsp+48h] [xbp-148h]
  System_Int32_array *v232; // [xsp+50h] [xbp-140h]
  VoiceMaster_o *v233; // [xsp+58h] [xbp-138h]
  unsigned __int64 v234; // [xsp+60h] [xbp-130h]
  VoicePlayCondMaster_o *v235; // [xsp+68h] [xbp-128h]
  int32_t svtId; // [xsp+7Ch] [xbp-114h]
  System_Collections_Generic_List_Enumerator_object__o v239; // [xsp+88h] [xbp-108h] BYREF
  System_Collections_Generic_List_Enumerator_object__o j; // [xsp+A0h] [xbp-F0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+B8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v242; // [xsp+C0h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v243; // [xsp+E0h] [xbp-B0h] BYREF
  ServantVoiceRelationEntity_array *afterRelationList; // [xsp+100h] [xbp-90h] BYREF
  ServantVoiceRelationEntity_array *sameRelationList; // [xsp+108h] [xbp-88h] BYREF
  ServantVoiceRelationEntity_array *beforeRelationList; // [xsp+110h] [xbp-80h] BYREF
  int32_t firstPriority; // [xsp+11Ch] [xbp-74h] BYREF
  UnityEngine_Vector4_o v248; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CEC425 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_VoiceMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CondType_Kind__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_VoiceEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_VoiceEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_VoiceEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CondType_Kind___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_VoiceEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_CondType_Kind__TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C7BAE8(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&TutorialFlag_TypeInfo);
    sub_1C7BAE8(&StringLiteral_15302/*"VOICE_EMPTY_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_12051/*"SERVANT_STATUS_VOICE_EXPLANATION"*/);
    byte_4CEC425 = 1;
  }
  v4 = StringLiteral_15302/*"VOICE_EMPTY_MESSAGE"*/;
  firstPriority = 0;
  sameRelationList = 0;
  beforeRelationList = 0;
  afterRelationList = 0;
  memset(&v243, 0, sizeof(v243));
  memset(&v242, 0, sizeof(v242));
  entity = 0;
  memset(&j, 0, sizeof(j));
  defaultPanelCenter = this->fields.defaultPanelCenter;
  defaultPanelHeight = this->fields.defaultPanelHeight;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !mainInfo )
    goto LABEL_276;
  transformNameSprite = (UIWidget_o *)this->fields.transformNameSprite;
  if ( mainInfo->fields._IsTransformServant_k__BackingField )
  {
    if ( !transformNameSprite )
      goto LABEL_276;
    UIWidget__set_color(transformNameSprite, mainInfo->fields._TransformNameSpriteColor_k__BackingField, 0);
    transformNameSprite = (UIWidget_o *)this->fields.transformNameLabel;
    if ( !transformNameSprite )
      goto LABEL_276;
    UIWidget__set_color(transformNameSprite, mainInfo->fields._TransformNameLabelColor_k__BackingField, 0);
    transformNameSprite = (UIWidget_o *)this->fields.transformNameSprite;
    if ( !transformNameSprite )
      goto LABEL_276;
    transformNameSprite = (UIWidget_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)transformNameSprite,
                                          0);
    if ( !transformNameSprite )
      goto LABEL_276;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameSprite, 1, 0);
    v9 = this;
    transformNameLabel = this->fields.transformNameLabel;
    transformNameSprite = (UIWidget_o *)ServantStatusListViewItem__GetTransformName(mainInfo, 0);
    if ( !transformNameLabel )
      goto LABEL_276;
    UILabel__set_text(transformNameLabel, (System_String_o *)transformNameSprite, 0);
    transformNameAddHeight = (float)this->fields.transformNameAddHeight;
    defaultPanelCenter = defaultPanelCenter + (float)(transformNameAddHeight * -0.5);
    defaultPanelHeight = defaultPanelHeight - transformNameAddHeight;
  }
  else
  {
    if ( !transformNameSprite )
      goto LABEL_276;
    transformNameSprite = (UIWidget_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)transformNameSprite,
                                          0);
    if ( !transformNameSprite )
      goto LABEL_276;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameSprite, 0, 0);
    v9 = this;
  }
  scrollView = v9->fields.scrollView;
  if ( !scrollView )
    goto LABEL_276;
  transformNameSprite = (UIWidget_o *)scrollView->fields.mPanel;
  if ( !transformNameSprite )
    goto LABEL_276;
  v248.fields.x = transformNameSprite->fields.mLocalToPanel.fields.m31;
  v248.fields.z = transformNameSprite->fields.mLocalToPanel.fields.m12;
  v248.fields.y = defaultPanelCenter;
  v248.fields.w = defaultPanelHeight;
  UIPanel__set_baseClipRegion((UIPanel_o *)transformNameSprite, v248, 0);
  transformNameSprite = (UIWidget_o *)this->fields.scrollView;
  if ( !transformNameSprite )
    goto LABEL_276;
  UIScrollView__ResetPosition((UIScrollView_o *)transformNameSprite, 0);
  this->fields.execObjectExtraFlag = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  v14 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v14 = NetworkManager_TypeInfo;
  }
  v226 = (System_String_o *)v4;
  userIdNumber = v14->static_fields->userIdNumber;
  transformNameSprite = (UIWidget_o *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
  if ( !Master_object )
    goto LABEL_276;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       userIdNumber,
                       (int32_t)transformNameSprite,
                       0);
  v16 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_VoiceMaster___);
  v235 = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v17 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  firstPriority = 0;
  v18 = (System_Collections_Generic_List_T__o *)sub_1C7BD34(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v18,
    (const MethodInfo_3823DB0 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v18 )
    goto LABEL_276;
  items = v18->fields._items;
  v20 = changeSvtVoiceIdList;
  v21 = Method_System_Collections_Generic_List_CondType_Kind__Add__;
  ++v18->fields._version;
  if ( !items )
    goto LABEL_276;
  size = v18->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v18,
      81,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v18->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  v229 = (ServantLimitAddMaster_o *)v17;
  if ( !changeSvtVoiceIdList )
LABEL_276:
    sub_1C7BD40(transformNameSprite, v8);
  max_length = changeSvtVoiceIdList->max_length;
  if ( (int)max_length >= 1 )
  {
    v24 = 0;
    v233 = (VoiceMaster_o *)v16;
    v231 = v18;
    while ( 1 )
    {
      if ( v24 >= (unsigned int)max_length )
        goto LABEL_277;
      v230 = v24;
      svtId = v20->m_Items[v24];
      transformNameSprite = (UIWidget_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_276;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)transformNameSprite,
                            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      transformNameSprite = (UIWidget_o *)EntityDefinitely;
      if ( !EntityDefinitely )
        goto LABEL_276;
      maxLimitCount = EntityDefinitely->fields.maxLimitCount;
      transformNameSprite = (UIWidget_o *)UserServantCollectionEntity__getCostumeList(EntityDefinitely, 0);
      if ( !MasterData_object )
        goto LABEL_276;
      VoiceLimitCountList = ServantLimitAddMaster__getVoiceLimitCountList(
                              (ServantLimitAddMaster_o *)MasterData_object,
                              svtId,
                              maxLimitCount,
                              (System_Int32_array *)transformNameSprite,
                              0);
      transformNameSprite = (UIWidget_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_276;
      transformNameSprite = (UIWidget_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)transformNameSprite,
                                            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !transformNameSprite )
        goto LABEL_276;
      ServantVoiceRelationMaster__GetRelationList_43376688(
        (ServantVoiceRelationMaster_o *)transformNameSprite,
        &beforeRelationList,
        &sameRelationList,
        &afterRelationList,
        svtId,
        0);
      v28 = beforeRelationList;
      v29 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v28, v29, v30);
      v31 = sameRelationList;
      ++firstPriority;
      v32 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v31, v32, v33);
      if ( !VoiceLimitCountList )
        goto LABEL_276;
      v34 = VoiceLimitCountList->max_length;
      if ( (int)v34 >= 1 )
        break;
LABEL_236:
      v192 = afterRelationList;
      v193 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v192, v193, v194);
      v20 = changeSvtVoiceIdList;
      LODWORD(max_length) = changeSvtVoiceIdList->max_length;
      v24 = v230 + 1;
      if ( (__int64)(v230 + 1) >= (int)max_length )
        goto LABEL_237;
    }
    v35 = 0;
    v232 = VoiceLimitCountList;
    while ( 1 )
    {
      if ( v35 >= (unsigned int)v34 )
        goto LABEL_277;
      v36 = VoiceLimitCountList->m_Items[v35];
      transformNameSprite = (UIWidget_o *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      if ( !v16 )
        goto LABEL_276;
      EnableInfo = VoiceMaster__getEnableInfo(
                     (VoiceMaster_o *)v16,
                     (int32_t)transformNameSprite,
                     svtId,
                     v36,
                     (System_Collections_Generic_List_CondType_Kind__o *)v18,
                     0,
                     0,
                     0);
      v38 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_VoiceEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v38,
        (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_VoiceEntity___ctor__);
      if ( !EnableInfo )
        goto LABEL_276;
      v39 = EnableInfo->max_length;
      v234 = v35;
      if ( v39 >= 1 )
        break;
LABEL_137:
      v104 = firstPriority;
      v105 = ++firstPriority;
      v106 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      v107 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v107 = BalanceConfig_TypeInfo;
      }
      if ( v106 == v107->static_fields->ServantIdJekyll )
      {
        transformNameSprite = (UIWidget_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transformNameSprite )
          goto LABEL_276;
        v108 = DataManager__GetMasterData_object_(
                 (DataManager_o *)transformNameSprite,
                 (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CE827C )
        {
          sub_1C7BAE8(&NetworkManager_TypeInfo);
          byte_4CE827C = 1;
        }
        v109 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v109 = NetworkManager_TypeInfo;
        }
        v110 = v109->static_fields->userIdNumber;
        transformNameSprite = (UIWidget_o *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
        if ( !v108 )
          goto LABEL_276;
        v111 = UserServantCollectionMaster__GetEntityDefinitely(
                 (UserServantCollectionMaster_o *)v108,
                 v110,
                 (int32_t)transformNameSprite,
                 0);
        transformNameSprite = (UIWidget_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v38, 0);
        if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
        {
          if ( !v38 )
            goto LABEL_276;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v239,
            v38,
            (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_VoiceEntity__GetEnumerator__);
          v242 = v239;
          while ( 1 )
          {
            v112 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v242,
                     (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_VoiceEntity__MoveNext__);
            if ( !v112 )
              break;
            if ( !v242.fields._current )
              sub_1C7BD40(v112, v113);
            if ( !v111 )
              sub_1C7BD40(v112, v113);
            if ( UserServantCollectionEntity__IsPlayed(v111, HIDWORD(v242.fields._current[3].klass), 0) )
            {
              v114 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
              v115 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v115 = BalanceConfig_TypeInfo;
              }
              v116 = VoiceMaster__getEnableInfo(v233, v114, v115->static_fields->ServantIdHyde, v36, 0, 0, 0, 0);
              v118 = v116;
              if ( !v116 )
                sub_1C7BD40(0, v117);
              if ( SLODWORD(v116->max_length) >= 1 )
              {
                v119 = 0;
                m_Items = v116->m_Items;
                do
                {
                  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  if ( !itemList )
                    sub_1C7BD40(v116, v117);
                  v122 = itemList->fields._size;
                  ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                  v123 = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v123 = BalanceConfig_TypeInfo;
                  }
                  if ( v119 >= LODWORD(v118->max_length) )
                    sub_1C7BD48(v123);
                  v124 = m_Items[v119];
                  ServantIdHyde = v123->static_fields->ServantIdHyde;
                  v126 = (ServantStatusVoiceListViewItem_o *)sub_1C7BD34(ServantStatusVoiceListViewItem_TypeInfo);
                  ServantStatusVoiceListViewItem___ctor(v126, v122, v127, ServantIdHyde, v36, v124, v105, 0, 0, v225);
                  v136 = itemList->fields._items;
                  v137 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++itemList->fields._version;
                  if ( !v136 )
                    sub_1C7BD40(v128, v129);
                  v138 = itemList->fields._size;
                  if ( (unsigned int)v138 >= LODWORD(v136->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      itemList,
                      (Il2CppObject *)v126,
                      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v139 = &v136->obj.klass + v138;
                    itemList->fields._size = v138 + 1;
                    v139[4] = (Il2CppClass *)v126;
                    sub_1C7BA8C(
                      (GrandQuestFolderBoardItem_o *)(v139 + 4),
                      (int32_t)v126,
                      v130,
                      v131,
                      v132,
                      v133,
                      v134,
                      v135);
                  }
                  ++v119;
                }
                while ( (__int64)v119 < SLODWORD(v118->max_length) );
              }
              firstPriority = v104 + 2;
              break;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v242,
            (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_VoiceEntity__Dispose__);
        }
      }
      else
      {
        transformNameSprite = (UIWidget_o *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
        v140 = (int)transformNameSprite;
        v141 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v141 = BalanceConfig_TypeInfo;
        }
        static_fields = v141->static_fields;
        if ( v140 == static_fields->ServantIdMashu1 )
        {
          if ( !v141->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v141);
            static_fields = BalanceConfig_TypeInfo->static_fields;
          }
          if ( v36 != static_fields->SpecialLimitCountPLD )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_40989036(115, 0) )
            {
              v143 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
              v144 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v144 = BalanceConfig_TypeInfo;
              }
              v145 = v105;
              transformNameSprite = (UIWidget_o *)VoiceMaster__getEnableInfo(
                                                    v233,
                                                    v143,
                                                    v144->static_fields->ServantIdMashu2,
                                                    v36,
                                                    0,
                                                    0,
                                                    0,
                                                    0);
              if ( !transformNameSprite )
                goto LABEL_276;
              v146 = transformNameSprite;
              if ( SLODWORD(transformNameSprite->fields.m_CancellationTokenSource) >= 1 )
              {
                v147 = 0;
                while ( 1 )
                {
                  v148 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  if ( !v148 )
                    goto LABEL_276;
                  v149 = v148->fields._size;
                  ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                  transformNameSprite = (UIWidget_o *)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( v147 >= LODWORD(v146->fields.m_CancellationTokenSource) )
                    break;
                  v150 = (VoiceInfo_o *)*((_QWORD *)&v146->fields.leftAnchor + v147);
                  ServantIdMashu2 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu2;
                  v152 = (ServantStatusVoiceListViewItem_o *)sub_1C7BD34(ServantStatusVoiceListViewItem_TypeInfo);
                  ServantStatusVoiceListViewItem___ctor(v152, v149, v153, ServantIdMashu2, v36, v150, v145, 0, 0, v225);
                  v160 = v148->fields._items;
                  v161 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++v148->fields._version;
                  if ( !v160 )
                    goto LABEL_276;
                  v162 = v148->fields._size;
                  if ( (unsigned int)v162 >= LODWORD(v160->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v148,
                      (Il2CppObject *)v152,
                      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v161[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v163 = &v160->obj.klass + v162;
                    v148->fields._size = v162 + 1;
                    v163[4] = (Il2CppClass *)v152;
                    sub_1C7BA8C(
                      (GrandQuestFolderBoardItem_o *)(v163 + 4),
                      (int32_t)v152,
                      v154,
                      v155,
                      v156,
                      v157,
                      v158,
                      v159);
                  }
                  if ( (__int64)++v147 >= SLODWORD(v146->fields.m_CancellationTokenSource) )
                    goto LABEL_200;
                }
LABEL_277:
                sub_1C7BD48(transformNameSprite);
              }
LABEL_200:
              v105 = v104 + 2;
              firstPriority = v104 + 2;
            }
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4CE827C )
            {
              sub_1C7BAE8(&NetworkManager_TypeInfo);
              byte_4CE827C = 1;
            }
            v164 = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v164 = NetworkManager_TypeInfo;
            }
            v165 = BalanceConfig_TypeInfo;
            v166 = v164->static_fields->userIdNumber;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v165 = BalanceConfig_TypeInfo;
            }
            v167 = v165->static_fields;
            MashuTdGradeUpQuestId = v167->MashuTdGradeUpQuestId;
            MashuTdGradeUpQuestPhase = v167->MashuTdGradeUpQuestPhase;
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            transformNameSprite = (UIWidget_o *)CondType__IsQuestPhaseClear(
                                                  v166,
                                                  MashuTdGradeUpQuestId,
                                                  MashuTdGradeUpQuestPhase,
                                                  -1,
                                                  0,
                                                  0);
            if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
            {
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              transformNameSprite = (UIWidget_o *)v229;
              if ( !v229 )
                goto LABEL_276;
              transformNameSprite = (UIWidget_o *)ServantLimitAddMaster__TryGetEntity(
                                                    v229,
                                                    &entity,
                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                                    v36,
                                                    0);
              if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_276;
                svtVoiceId = entity->fields.svtVoiceId;
                transformNameSprite = (UIWidget_o *)BalanceConfig_TypeInfo;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  transformNameSprite = (UIWidget_o *)BalanceConfig_TypeInfo;
                }
                if ( svtVoiceId != *((_DWORD *)&transformNameSprite->fields.onChange[2].fields.method_is_virtual + 1) )
                {
                  v171 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                  v172 = v105;
                  v173 = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v173 = BalanceConfig_TypeInfo;
                  }
                  transformNameSprite = (UIWidget_o *)VoiceMaster__getEnableInfo(
                                                        v233,
                                                        v171,
                                                        v173->static_fields->ServantIdMashu3,
                                                        v36,
                                                        0,
                                                        0,
                                                        0,
                                                        0);
                  if ( !transformNameSprite )
                    goto LABEL_276;
                  v174 = transformNameSprite;
                  if ( SLODWORD(transformNameSprite->fields.m_CancellationTokenSource) >= 1 )
                  {
                    v175 = 0;
                    do
                    {
                      v176 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                      if ( !v176 )
                        goto LABEL_276;
                      v177 = v176->fields._size;
                      ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                      transformNameSprite = (UIWidget_o *)BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      if ( v175 >= LODWORD(v174->fields.m_CancellationTokenSource) )
                        goto LABEL_277;
                      v178 = (VoiceInfo_o *)*((_QWORD *)&v174->fields.leftAnchor + v175);
                      ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
                      v180 = (ServantStatusVoiceListViewItem_o *)sub_1C7BD34(ServantStatusVoiceListViewItem_TypeInfo);
                      ServantStatusVoiceListViewItem___ctor(
                        v180,
                        v177,
                        v181,
                        ServantIdMashu3,
                        v36,
                        v178,
                        v172,
                        0,
                        0,
                        v225);
                      v188 = v176->fields._items;
                      v189 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                      ++v176->fields._version;
                      if ( !v188 )
                        goto LABEL_276;
                      v190 = v176->fields._size;
                      if ( (unsigned int)v190 >= LODWORD(v188->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v176,
                          (Il2CppObject *)v180,
                          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v189[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v191 = &v188->obj.klass + v190;
                        v176->fields._size = v190 + 1;
                        v191[4] = (Il2CppClass *)v180;
                        sub_1C7BA8C(
                          (GrandQuestFolderBoardItem_o *)(v191 + 4),
                          (int32_t)v180,
                          v182,
                          v183,
                          v184,
                          v185,
                          v186,
                          v187);
                      }
                    }
                    while ( (__int64)++v175 < SLODWORD(v174->fields.m_CancellationTokenSource) );
                  }
                  firstPriority = v172 + 1;
                }
              }
            }
          }
        }
      }
      VoiceLimitCountList = v232;
      v16 = (Il2CppObject *)v233;
      v18 = v231;
      LODWORD(v34) = v232->max_length;
      v35 = v234 + 1;
      if ( (__int64)(v234 + 1) >= (int)v34 )
        goto LABEL_236;
    }
    v40 = 0;
    while ( 1 )
    {
      if ( v40 >= v39 )
        goto LABEL_277;
      v41 = &EnableInfo->obj.klass + (int)v40;
      v44 = v41[4];
      v43 = (VoiceInfo_o **)(v41 + 4);
      v42 = v44;
      if ( !v44 )
        goto LABEL_276;
      name = (char *)v42->_1.name;
      transformNameSprite = (UIWidget_o *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      v52 = (int)transformNameSprite;
      v53 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v53 = BalanceConfig_TypeInfo;
      }
      if ( v52 == v53->static_fields->ServantIdJekyll )
      {
        if ( !name )
          goto LABEL_276;
        if ( *((_DWORD *)name + 7) == 7 )
        {
          if ( !v38 )
            goto LABEL_276;
          v54 = v38->fields._items;
          v55 = Method_System_Collections_Generic_List_VoiceEntity__Add__;
          ++v38->fields._version;
          if ( !v54 )
            goto LABEL_276;
          v56 = v38->fields._size;
          if ( (unsigned int)v56 >= LODWORD(v54->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)name,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          }
          else
          {
            v57 = &v54->obj.klass + v56;
            v38->fields._size = v56 + 1;
            v57[4] = (Il2CppClass *)name;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v57 + 4), (int32_t)name, v46, v47, v48, v49, v50, v51);
          }
        }
      }
      if ( v36 <= 10 )
      {
        if ( !name )
          goto LABEL_276;
        if ( *((_DWORD *)name + 7) == 2 )
        {
          v58 = *((_DWORD *)name + 12);
          if ( v58 == 7 )
          {
            if ( *((_DWORD *)name + 13) != 2 )
            {
              if ( v40 >= LODWORD(EnableInfo->max_length) )
                goto LABEL_277;
              transformNameSprite = (UIWidget_o *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                                    (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                                    svtId,
                                                    v36,
                                                    *v43,
                                                    (const MethodInfo *)v48);
              if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
              {
                transformNameSprite = (UIWidget_o *)this->fields.itemList;
                if ( !transformNameSprite )
                  goto LABEL_276;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v239,
                  (System_Collections_Generic_List_object__o *)transformNameSprite,
                  (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
                v243 = v239;
                do
                {
                  v60 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v243,
                          (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                  if ( !v60 )
                    goto LABEL_106;
                  current = v243.fields._current;
                  if ( !v243.fields._current
                    || (naturalAligment = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment,
                        v243.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
                    || (ServantStatusVoiceListViewItem_c *)v243.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                  {
                    sub_1C7BD40(v60, v61);
                  }
                  monitor = v243.fields._current[9].monitor;
                  if ( !monitor )
                    sub_1C7BD40(v60, v61);
                }
                while ( monitor[7] != 2
                     || monitor[12] != 7
                     || monitor[13] != *((_DWORD *)name + 13)
                     || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                          (ServantStatusVoiceListViewItem_o *)v243.fields._current,
                          v61) != svtId );
                v65 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                if ( v40 >= LODWORD(EnableInfo->max_length) )
                  sub_1C7BD48(v65);
                goto LABEL_129;
              }
LABEL_86:
              if ( v40 >= LODWORD(EnableInfo->max_length) )
                goto LABEL_277;
              transformNameSprite = (UIWidget_o *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                                                    (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                                    svtId,
                                                    *v43,
                                                    v59);
              if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
                goto LABEL_125;
              voiceLabelSpec = 1;
              goto LABEL_108;
            }
          }
          else if ( v58 == 18 )
          {
            if ( v40 >= LODWORD(EnableInfo->max_length) )
              goto LABEL_277;
            transformNameSprite = (UIWidget_o *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                                  (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                                  svtId,
                                                  v36,
                                                  *v43,
                                                  (const MethodInfo *)v48);
            if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              goto LABEL_86;
            transformNameSprite = (UIWidget_o *)this->fields.itemList;
            if ( !transformNameSprite )
              goto LABEL_276;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v239,
              (System_Collections_Generic_List_object__o *)transformNameSprite,
              (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v243 = v239;
            do
            {
              v70 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v243,
                      (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v70 )
                goto LABEL_106;
              current = v243.fields._current;
              if ( !v243.fields._current
                || (v72 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment,
                    v243.fields._current->klass->_2.naturalAligment < (unsigned int)v72)
                || (ServantStatusVoiceListViewItem_c *)v243.fields._current->klass->_2.typeHierarchy[v72 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                sub_1C7BD40(v70, v71);
              }
              v73 = v243.fields._current[9].monitor;
              if ( !v73 )
                sub_1C7BD40(v70, v71);
            }
            while ( v73[7] != 2
                 || v73[12] != 18
                 || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                      (ServantStatusVoiceListViewItem_o *)v243.fields._current,
                      v71) != svtId );
            v74 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
            if ( v40 >= LODWORD(EnableInfo->max_length) )
              sub_1C7BD48(v74);
            if ( !*v43 )
              sub_1C7BD40(v74, v75);
            voiceEntity = (*v43)->fields.voiceEntity;
            if ( !voiceEntity )
              sub_1C7BD40(v74, v75);
            v77 = v74;
            id = voiceEntity->fields.id;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
            v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49485620(id, 0);
            if ( !v235 )
              sub_1C7BD40(0, v79);
            if ( !VoicePlayCondMaster__isVoiceCond(v235, v77, v80, 81, 0) )
            {
              v103 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
              if ( v40 >= LODWORD(EnableInfo->max_length) )
                sub_1C7BD48(v103);
LABEL_129:
              ServantStatusVoiceListViewItem__SetLimitCount(
                (ServantStatusVoiceListViewItem_o *)current,
                v66,
                svtId,
                v36,
                *v43,
                v67,
                v68);
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v243,
                (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
              goto LABEL_125;
            }
LABEL_106:
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v243,
              (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          }
        }
      }
      voiceLabelSpec = 0;
LABEL_108:
      transformNameSprite = (UIWidget_o *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      if ( v40 >= LODWORD(EnableInfo->max_length) )
        goto LABEL_277;
      if ( !*v43 )
        goto LABEL_276;
      v81 = (*v43)->fields.voiceEntity;
      if ( !v81 )
        goto LABEL_276;
      v82 = (int)transformNameSprite;
      v83 = v81->fields.id;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49485620(v83, 0);
      transformNameSprite = (UIWidget_o *)v235;
      if ( !v235 )
        goto LABEL_276;
      transformNameSprite = (UIWidget_o *)VoicePlayCondMaster__isVoiceCond(v235, v82, v84, 81, 0);
      if ( !name )
        goto LABEL_276;
      v85 = *((_DWORD *)name + 12);
      v86 = v85 == 7 || v85 == 18 || v85 == 54 && ((unsigned __int8)transformNameSprite & 1) != 0;
      v87 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !v87 )
        goto LABEL_276;
      v88 = v87->fields._size;
      transformNameSprite = (UIWidget_o *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      if ( v40 >= LODWORD(EnableInfo->max_length) )
        goto LABEL_277;
      v89 = *v43;
      v90 = firstPriority;
      v91 = (ServantStatusVoiceListViewItem_o *)sub_1C7BD34(ServantStatusVoiceListViewItem_TypeInfo);
      ServantStatusVoiceListViewItem___ctor(v91, v88, v92, svtId, v36, v89, v90, v86, voiceLabelSpec, v225);
      v99 = v87->fields._items;
      v100 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v87->fields._version;
      if ( !v99 )
        goto LABEL_276;
      v101 = v87->fields._size;
      if ( (unsigned int)v101 >= LODWORD(v99->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v87,
          (Il2CppObject *)v91,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
      }
      else
      {
        v102 = &v99->obj.klass + v101;
        v87->fields._size = v101 + 1;
        v102[4] = (Il2CppClass *)v91;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v102 + 4), (int32_t)v91, v93, v94, v95, v96, v97, v98);
      }
LABEL_125:
      v39 = EnableInfo->max_length;
      if ( (int)++v40 >= v39 )
        goto LABEL_137;
    }
  }
LABEL_237:
  v195 = this->fields.itemList;
  if ( !v195 )
    goto LABEL_276;
  v196 = v195->fields._size;
  v197 = sub_1C7BD34(System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v197,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
  if ( v196 - 1 >= 1 )
  {
    for ( i = 0; i != v196 - 1; ++i )
    {
      transformNameSprite = (UIWidget_o *)this->fields.itemList;
      if ( !transformNameSprite )
        goto LABEL_276;
      transformNameSprite = (UIWidget_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)transformNameSprite,
                                            i,
                                            (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !transformNameSprite )
        goto LABEL_276;
      v199 = (ServantStatusVoiceListViewItem_o *)transformNameSprite;
      v200 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
      if ( transformNameSprite->klass->_2.naturalAligment < (unsigned int)v200
        || (ServantStatusVoiceListViewItem_c *)transformNameSprite->klass->_2.typeHierarchy[v200 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        goto LABEL_276;
      }
      if ( ServantStatusVoiceListViewItem__get_OpenName((ServantStatusVoiceListViewItem_o *)transformNameSprite, v8) )
      {
        transformNameSprite = (UIWidget_o *)ServantStatusVoiceListViewItem__get_DispNum(v199, v8);
        if ( !(_DWORD)transformNameSprite )
        {
          if ( !v197 )
            goto LABEL_276;
          v201 = (const MethodInfo *)*(unsigned int *)(v197 + 24);
          v202 = *(_DWORD *)(v197 + 28) + 1;
          *(_DWORD *)(v197 + 24) = 0;
          *(_DWORD *)(v197 + 28) = v202;
          if ( (int)v201 >= 1 )
            System_Array__Clear(*(System_Array_o **)(v197 + 16), 0, (int32_t)v201, 0);
          v203 = i + 1;
          if ( i + 1 < v196 )
          {
            do
            {
              transformNameSprite = (UIWidget_o *)this->fields.itemList;
              if ( !transformNameSprite )
                goto LABEL_276;
              transformNameSprite = (UIWidget_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)transformNameSprite,
                                                    v203,
                                                    (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !transformNameSprite )
                goto LABEL_276;
              v204 = (Il2CppObject *)transformNameSprite;
              v205 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
              if ( transformNameSprite->klass->_2.naturalAligment < (unsigned int)v205
                || (ServantStatusVoiceListViewItem_c *)transformNameSprite->klass->_2.typeHierarchy[v205 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                goto LABEL_276;
              }
              OpenName = ServantStatusVoiceListViewItem__get_OpenName(
                           (ServantStatusVoiceListViewItem_o *)transformNameSprite,
                           v8);
              v208 = ServantStatusVoiceListViewItem__get_OpenName(v199, v207);
              transformNameSprite = (UIWidget_o *)System_String__op_Equality(OpenName, v208, 0);
              if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              {
                v214 = *(_QWORD *)(v197 + 16);
                v215 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__;
                ++*(_DWORD *)(v197 + 28);
                if ( !v214 )
                  goto LABEL_276;
                v216 = *(int *)(v197 + 24);
                if ( (unsigned int)v216 >= *(_DWORD *)(v214 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)v197,
                    v204,
                    *(const MethodInfo_383EDFC **)(*(_QWORD *)(v215[4] + 192LL) + 112LL));
                }
                else
                {
                  v217 = v214 + 8 * v216;
                  *(_DWORD *)(v197 + 24) = v216 + 1;
                  *(_QWORD *)(v217 + 32) = v204;
                  sub_1C7BA8C(
                    (GrandQuestFolderBoardItem_o *)(v217 + 32),
                    (int32_t)v204,
                    (int32_t)v201,
                    v209,
                    v210,
                    v211,
                    v212,
                    v213);
                }
              }
            }
            while ( v196 != ++v203 );
          }
          if ( *(int *)(v197 + 24) >= 1 )
          {
            ServantStatusVoiceListViewItem__SetNameNum(v199, 1, v201);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v239,
              (System_Collections_Generic_List_object__o *)v197,
              (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
            v218 = 2;
            for ( j = v239;
                  ;
                  ServantStatusVoiceListViewItem__SetNameNum(
                    (ServantStatusVoiceListViewItem_o *)j.fields._current,
                    v218++,
                    v221) )
            {
              v219 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &j,
                       (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
              if ( !v219 )
                break;
              if ( j.fields._current )
              {
                v222 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
                if ( j.fields._current->klass->_2.naturalAligment >= (unsigned int)v222
                  && (ServantStatusVoiceListViewItem_c *)j.fields._current->klass->_2.typeHierarchy[v222 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
                {
                  continue;
                }
              }
              sub_1C7BD40(v219, v220);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &j,
              (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
          }
        }
      }
    }
  }
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transformNameSprite = (UIWidget_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12051/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, 0);
  if ( !explanationLabel )
    goto LABEL_276;
  UILabel__set_text(explanationLabel, (System_String_o *)transformNameSprite, 0);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  transformNameSprite = (UIWidget_o *)LocalizationManager__Get(v226, 0);
  if ( !emptyMessageLabel )
    goto LABEL_276;
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

  if ( (byte_4CEC428 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&ServantStatusVoiceListViewItem_TypeInfo);
    byte_4CEC428 = 1;
  }
  result = (ServantStatusVoiceListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantStatusVoiceListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4CEC426 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_16165/*"_"*/);
    byte_4CEC426 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)ServantVoiceMaster__getEntity_43370296(
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
    sub_1C7BD48(Instance);
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
        Instance = (DataManager_o *)System_String__Concat_64215176(v14, (System_String_o *)StringLiteral_16165/*"_"*/, v15, 0),
        (v16 = *(_QWORD *)(v12 + 32)) == 0) )
  {
LABEL_25:
    sub_1C7BD40(Instance, v9);
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

  if ( (byte_4CEC427 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEC427 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
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
        sub_1C7BD48(Instance);
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
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v20, 0);
        if ( (int)Instance >= value )
          v13 = 1;
      }
      max_length = servantVoiceConds->max_length;
      if ( (int)++v12 >= max_length )
        return v13;
    }
LABEL_31:
    sub_1C7BD40(Instance, v7);
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
  if ( (byte_4CEC42E & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1C7BAE8(&ServantStatusVoiceListViewItem_TypeInfo);
    byte_4CEC42E = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0
    || (naturalAligment = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewItem_TypeInfo )
  {
    sub_1C7BD40(this, obj);
  }
  if ( LOBYTE(linkItem[1].fields.sortValue1B) )
  {
    callbackFunc = v9->fields.callbackFunc;
    v9->fields.callbackFunc = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v9->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      v13 = BYTE1(linkItem[1].fields.sortValue1B);
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

  if ( (byte_4CEC42D & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEC42D = 1;
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
          sub_1C7BD40(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v14,
          1,
          v14->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2, 0, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4CEC42B & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_1C7BAE8(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_1C7BAE8(&StringLiteral_9968/*"OnMoveEnd"*/);
    byte_4CEC42B = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C7BD40(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9968/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C7BD40(v12, v13);
      ServantStatusVoiceListViewObject__Init_38953180(
        (ServantStatusVoiceListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusVoiceListViewManager__RequestListObject_38952676(
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

  if ( (byte_4CEC42C & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_1C7BAE8(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_1C7BAE8(&StringLiteral_9968/*"OnMoveEnd"*/);
    byte_4CEC42C = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C7BD40(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9968/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C7BD40(v10, v11);
      ServantStatusVoiceListViewObject__Init_38953788((ServantStatusVoiceListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
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
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusVoiceListViewManager__SetMode_38951704(this, mode, -1, v10);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusVoiceListViewManager__SetMode_38951704(
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

  if ( (byte_4CEC42A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
    sub_1C7BAE8(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_1C7BAE8(&StringLiteral_9968/*"OnMoveEnd"*/);
    byte_4CEC42A = 1;
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
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    for ( i = v23; ; BYTE1(i.fields._current[11].monitor) = HIDWORD(i.fields._current[1].klass) == select )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v8 )
        break;
      if ( !i.fields._current )
        sub_1C7BD40(v8, v9);
      naturalAligment = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
      if ( i.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (ServantStatusVoiceListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        sub_1C7BD40(v8, v9);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
                                                                  (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
        if ( !itemList )
          break;
        ServantStatusVoiceListViewObject__Init_38951576((ServantStatusVoiceListViewObject_o *)itemList, 4, v16);
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
                   (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
          v21 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
          System_Action___ctor(v21, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0);
          if ( !Item )
            break;
          ServantStatusVoiceListViewObject__Init_38953180((ServantStatusVoiceListViewObject_o *)Item, 5, v21, 0.1, v22);
          if ( ++v19 >= v18->fields._size )
            return;
        }
LABEL_30:
        sub_1C7BD40(itemList, *(_QWORD *)&mode);
      }
      this->fields.callbackCount = 1;
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_9968/*"OnMoveEnd"*/,
        0.2,
        0);
    }
    else if ( mode == 1 )
    {
      ServantStatusVoiceListViewManager__RequestListObject_38952676(this, 3, v12);
    }
  }
}


void ServantStatusVoiceListViewManager__SetMode_38952620(
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
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusVoiceListViewManager__SetMode_38951704(this, mode, -1, v10);
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
  if ( (byte_4CEC429 & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1C7BAE8(&ServantStatusVoiceListViewObject_TypeInfo);
    byte_4CEC429 = 1;
  }
  if ( !obj
    || (naturalAligment = ServantStatusVoiceListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantStatusVoiceListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewObject_TypeInfo )
  {
    sub_1C7BD40(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ServantStatusVoiceListViewObject__Init_38951576(
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

  if ( (byte_4CEC41D & 1) == 0 )
  {
    sub_1C7BAE8(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    byte_4CEC41D = 1;
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
    v8 = sub_1CD78BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C7C0DC(v7);
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

  if ( (byte_4CEC41F & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CEC41F = 1;
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
    v8 = sub_1CD78BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C7C0DC(v7);
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

  if ( (byte_4CEC422 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEC422 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C7BD40(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C7BD40(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C7BD40(0, v10);
      Item = (ListViewItem_o *)ServantStatusVoiceListViewObject__GetItem(
                                 (ServantStatusVoiceListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C7BD40(0, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_44341312((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1C7BD40(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C7BD40(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C7BD40(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C7BD40(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4CEC421 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEC421 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C7BD40(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C7BD40(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C7BD40(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C7BD40(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4CEC41E & 1) == 0 )
  {
    sub_1C7BAE8(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    byte_4CEC41E = 1;
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
    v8 = sub_1CD78BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C7C0DC(v7);
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

  if ( (byte_4CEC420 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CEC420 = 1;
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
    v8 = sub_1CD78BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C7C0DC(v7);
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
  sub_1C7BA8C(
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
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AAFD08;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AAFCB0;
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
  if ( (byte_4CEC42F & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&ServantStatusVoiceListViewManager_ResultKind_TypeInfo);
    byte_4CEC42F = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(ServantStatusVoiceListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v10, callback, object);
}


void ServantStatusVoiceListViewManager_CallbackFunc__EndInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
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