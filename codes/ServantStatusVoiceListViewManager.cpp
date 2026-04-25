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

  if ( (byte_4E025B2 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E025B2 = 1;
  }
  Instance = (VoiceInfo_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (VoiceInfo_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_VoiceMaster___);
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
        sub_1CE6960(Instance);
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
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v44, 0);
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
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v45, 0);
      if ( v17 >= LODWORD(v16->max_length) )
        goto LABEL_30;
      v22 = v16->m_Items[v17];
      v23 = *firstPriority;
      v24 = (int)Instance;
      v25 = (ServantStatusVoiceListViewItem_o *)sub_1CE694C(ServantStatusVoiceListViewItem_TypeInfo);
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
          *(const MethodInfo_3905F68 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + v35;
        itemList->fields._size = v35 + 1;
        v36[4] = (Il2CppClass *)v25;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v36 + 4), (int32_t)v25, v27, v28, v29, v30, v31, v32);
      }
      if ( (__int64)++v17 >= SLODWORD(v16->max_length) )
        goto LABEL_27;
    }
LABEL_29:
    sub_1CE6958(Instance, v8);
  }
}


void ServantStatusVoiceListViewManager__Awake(ServantStatusVoiceListViewManager_o *this, const MethodInfo *method)
{
  void *scrollView; // x0
  float v4; // s1

  if ( (byte_4E025B1 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4E025B1 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)scrollView,
                       (const MethodInfo_31FAB78 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0 )
  {
    sub_1CE6958(scrollView, method);
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
  __int64 v4; // x21
  float defaultPanelCenter; // s9
  float defaultPanelHeight; // s8
  void *AnyTransformServant; // x0
  const MethodInfo *v8; // x1
  UIWidget_o *transformNameSprite; // x20
  UIWidget_o *transformNameLabel; // x20
  ServantStatusVoiceListViewManager_o *v11; // x19
  UILabel_o *v12; // x20
  float transformNameAddHeight; // s0
  struct UIScrollView_o *scrollView; // x8
  Il2CppObject *Master_object; // x22
  Il2CppObject *v16; // x21
  System_Collections_Generic_List_T__o *v17; // x24
  struct System_Object_array *items; // x8
  System_Int32_array *v19; // x19
  _QWORD *v20; // x9
  __int64 size; // x10
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v23; // x9
  Il2CppObject *MasterData_object; // x20
  int32_t maxLimitCount; // w21
  System_Int32_array *VoiceLimitCountList; // x25
  ServantVoiceRelationEntity_array *v27; // x20
  int32_t v28; // w0
  const MethodInfo *v29; // x4
  ServantVoiceRelationEntity_array *v30; // x20
  int32_t v31; // w0
  const MethodInfo *v32; // x4
  il2cpp_array_size_t v33; // x8
  unsigned __int64 v34; // x19
  int32_t v35; // w21
  VoiceInfo_array *EnableInfo; // x23
  System_Collections_Generic_List_object__o *v37; // x26
  int v38; // w8
  unsigned int v39; // w25
  Il2CppClass **v40; // x19
  Il2CppClass *v41; // x8
  VoiceInfo_o **v42; // x19
  Il2CppClass *v43; // t1
  char *name; // x28
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  int v51; // w20
  BalanceConfig_c *v52; // x8
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  int v57; // w8
  const MethodInfo *v58; // x3
  _BOOL8 v59; // x0
  const MethodInfo *v60; // x1
  Il2CppObject *current; // x27
  __int64 naturalAligment; // x10
  _DWORD *monitor; // x8
  __int64 v64; // x0
  int32_t v65; // w1
  int32_t v66; // w5
  const MethodInfo *v67; // x6
  bool voiceLabelSpec; // w22
  _BOOL8 v69; // x0
  const MethodInfo *v70; // x1
  __int64 v71; // x10
  _DWORD *v72; // x8
  __int64 v73; // x0
  __int64 v74; // x1
  struct VoiceEntity_o *voiceEntity; // x8
  int32_t v76; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x20
  __int64 v78; // x1
  System_String_o *v79; // x2
  struct VoiceEntity_o *v80; // x8
  int32_t v81; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v82; // x20
  System_String_o *v83; // x2
  int v84; // w8
  bool v85; // w28
  System_Collections_Generic_List_object__o *v86; // x27
  int32_t v87; // w20
  VoiceInfo_o *v88; // x19
  int32_t v89; // w29
  ServantStatusVoiceListViewItem_o *v90; // x24
  int32_t v91; // w2
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  struct System_Object_array *v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  Il2CppClass **v101; // x0
  __int64 v102; // x0
  int32_t v103; // w25
  int32_t v104; // w22
  int32_t v105; // w20
  BalanceConfig_c *v106; // x8
  Il2CppObject *v107; // x24
  NetworkManager_c *v108; // x0
  int64_t userIdNumber; // x20
  UserServantCollectionEntity_o *EntityDefinitely; // x27
  _BOOL8 v111; // x0
  __int64 v112; // x1
  int32_t v113; // w24
  BalanceConfig_c *v114; // x0
  VoiceInfo_array *v115; // x0
  __int64 v116; // x1
  VoiceInfo_array *v117; // x26
  unsigned __int64 v118; // x19
  VoiceInfo_o **m_Items; // x29
  System_Collections_Generic_List_object__o *itemList; // x27
  int32_t v121; // w28
  BalanceConfig_c *v122; // x0
  VoiceInfo_o *v123; // x20
  int32_t ServantIdHyde; // w23
  ServantStatusVoiceListViewItem_o *v125; // x24
  int32_t v126; // w2
  __int64 v127; // x0
  __int64 v128; // x1
  int32_t v129; // w2
  int32_t v130; // w3
  System_String_o *v131; // x4
  int32_t v132; // w5
  int64_t v133; // x6
  System_String_o *v134; // x7
  struct System_Object_array *v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  Il2CppClass **v138; // x0
  int v139; // w20
  BalanceConfig_c *v140; // x8
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t v142; // w20
  BalanceConfig_c *v143; // x8
  int32_t v144; // w29
  _QWORD *v145; // x26
  unsigned __int64 v146; // x22
  System_Collections_Generic_List_object__o *v147; // x27
  int32_t v148; // w28
  VoiceInfo_o *v149; // x19
  int32_t ServantIdMashu2; // w20
  ServantStatusVoiceListViewItem_o *v151; // x24
  int32_t v152; // w2
  int32_t v153; // w2
  int32_t v154; // w3
  System_String_o *v155; // x4
  int32_t v156; // w5
  int64_t v157; // x6
  System_String_o *v158; // x7
  struct System_Object_array *v159; // x8
  _QWORD *v160; // x9
  __int64 v161; // x10
  Il2CppClass **v162; // x0
  NetworkManager_c *v163; // x0
  BalanceConfig_c *v164; // x8
  int64_t v165; // x24
  struct BalanceConfig_StaticFields *v166; // x8
  int32_t MashuTdGradeUpQuestId; // w20
  int32_t MashuTdGradeUpQuestPhase; // w23
  int32_t svtVoiceId; // w19
  int32_t v170; // w20
  int32_t v171; // w25
  BalanceConfig_c *v172; // x8
  _QWORD *v173; // x26
  unsigned __int64 v174; // x22
  System_Collections_Generic_List_object__o *v175; // x27
  int32_t v176; // w28
  VoiceInfo_o *v177; // x19
  int32_t ServantIdMashu3; // w20
  ServantStatusVoiceListViewItem_o *v179; // x24
  int32_t v180; // w2
  int32_t v181; // w2
  int32_t v182; // w3
  System_String_o *v183; // x4
  int32_t v184; // w5
  int64_t v185; // x6
  System_String_o *v186; // x7
  struct System_Object_array *v187; // x8
  _QWORD *v188; // x9
  __int64 v189; // x10
  Il2CppClass **v190; // x0
  ServantVoiceRelationEntity_array *v191; // x19
  int32_t v192; // w0
  const MethodInfo *v193; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v194; // x8
  int32_t v195; // w25
  __int64 v196; // x20
  int32_t i; // w21
  ServantStatusVoiceListViewItem_o *v198; // x22
  __int64 v199; // x10
  const MethodInfo *v200; // x2
  int v201; // w8
  int32_t v202; // w23
  Il2CppObject *v203; // x24
  __int64 v204; // x10
  System_String_o *OpenName; // x19
  const MethodInfo *v206; // x1
  System_String_o *v207; // x0
  int32_t v208; // w3
  System_String_o *v209; // x4
  int32_t v210; // w5
  int64_t v211; // x6
  System_String_o *v212; // x7
  __int64 v213; // x8
  _QWORD *v214; // x9
  __int64 v215; // x10
  __int64 v216; // x0
  int32_t v217; // w22
  _BOOL8 v218; // x0
  __int64 v219; // x1
  const MethodInfo *v220; // x2
  __int64 v221; // x11
  UILabel_o *explanationLabel; // x20
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v224; // [xsp+8h] [xbp-188h]
  System_String_o *v225; // [xsp+20h] [xbp-170h]
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // [xsp+28h] [xbp-168h]
  ServantLimitAddMaster_o *v228; // [xsp+38h] [xbp-158h]
  unsigned __int64 v229; // [xsp+40h] [xbp-150h]
  System_Collections_Generic_List_T__o *v230; // [xsp+48h] [xbp-148h]
  System_Int32_array *v231; // [xsp+50h] [xbp-140h]
  VoiceMaster_o *v232; // [xsp+58h] [xbp-138h]
  unsigned __int64 v233; // [xsp+60h] [xbp-130h]
  VoicePlayCondMaster_o *v234; // [xsp+68h] [xbp-128h]
  int32_t svtId; // [xsp+7Ch] [xbp-114h]
  System_Collections_Generic_List_Enumerator_object__o v238; // [xsp+88h] [xbp-108h] BYREF
  System_Collections_Generic_List_Enumerator_object__o j; // [xsp+A0h] [xbp-F0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+B8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v241; // [xsp+C0h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v242; // [xsp+E0h] [xbp-B0h] BYREF
  ServantVoiceRelationEntity_array *afterRelationList; // [xsp+100h] [xbp-90h] BYREF
  ServantVoiceRelationEntity_array *sameRelationList; // [xsp+108h] [xbp-88h] BYREF
  ServantVoiceRelationEntity_array *beforeRelationList; // [xsp+110h] [xbp-80h] BYREF
  int32_t firstPriority; // [xsp+11Ch] [xbp-74h] BYREF
  UnityEngine_Color_o TransformNameSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TransformNameLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v249; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E025B3 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&CondType_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_VoiceMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_CondType_Kind__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_VoiceEntity__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_VoiceEntity__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_VoiceEntity___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_CondType_Kind___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1CE6700(&System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_List_VoiceEntity__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_List_CondType_Kind__TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1CE6700(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&TutorialFlag_TypeInfo);
    sub_1CE6700(&StringLiteral_15393/*"VOICE_EMPTY_MESSAGE"*/);
    sub_1CE6700(&StringLiteral_12123/*"SERVANT_STATUS_VOICE_EXPLANATION"*/);
    byte_4E025B3 = 1;
  }
  v4 = StringLiteral_15393/*"VOICE_EMPTY_MESSAGE"*/;
  firstPriority = 0;
  sameRelationList = 0;
  beforeRelationList = 0;
  afterRelationList = 0;
  memset(&v242, 0, sizeof(v242));
  memset(&v241, 0, sizeof(v241));
  entity = 0;
  memset(&j, 0, sizeof(j));
  defaultPanelCenter = this->fields.defaultPanelCenter;
  defaultPanelHeight = this->fields.defaultPanelHeight;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !mainInfo )
    goto LABEL_269;
  AnyTransformServant = (void *)ServantStatusListViewItem__get_AnyTransformServant(mainInfo, 0);
  transformNameSprite = (UIWidget_o *)this->fields.transformNameSprite;
  if ( ((unsigned __int8)AnyTransformServant & 1) != 0 )
  {
    TransformNameSpriteColor = ServantStatusListViewItem__get_TransformNameSpriteColor(mainInfo, 0);
    if ( !transformNameSprite )
      goto LABEL_269;
    UIWidget__set_color(transformNameSprite, TransformNameSpriteColor, 0);
    transformNameLabel = (UIWidget_o *)this->fields.transformNameLabel;
    TransformNameLabelColor = ServantStatusListViewItem__get_TransformNameLabelColor(mainInfo, 0);
    if ( !transformNameLabel )
      goto LABEL_269;
    UIWidget__set_color(transformNameLabel, TransformNameLabelColor, 0);
    AnyTransformServant = this->fields.transformNameSprite;
    if ( !AnyTransformServant )
      goto LABEL_269;
    AnyTransformServant = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)AnyTransformServant, 0);
    if ( !AnyTransformServant )
      goto LABEL_269;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AnyTransformServant, 1, 0);
    v11 = this;
    v12 = this->fields.transformNameLabel;
    AnyTransformServant = ServantStatusListViewItem__GetTransformName(mainInfo, 0);
    if ( !v12 )
      goto LABEL_269;
    UILabel__set_text(v12, (System_String_o *)AnyTransformServant, 0);
    transformNameAddHeight = (float)this->fields.transformNameAddHeight;
    defaultPanelCenter = defaultPanelCenter + (float)(transformNameAddHeight * -0.5);
    defaultPanelHeight = defaultPanelHeight - transformNameAddHeight;
  }
  else
  {
    if ( !transformNameSprite )
      goto LABEL_269;
    AnyTransformServant = UnityEngine_Component__get_gameObject(
                            (UnityEngine_Component_o *)this->fields.transformNameSprite,
                            0);
    if ( !AnyTransformServant )
      goto LABEL_269;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AnyTransformServant, 0, 0);
    v11 = this;
  }
  scrollView = v11->fields.scrollView;
  if ( !scrollView )
    goto LABEL_269;
  AnyTransformServant = scrollView->fields.mPanel;
  if ( !AnyTransformServant )
    goto LABEL_269;
  v249.fields.x = *((float *)AnyTransformServant + 74);
  v249.fields.z = *((float *)AnyTransformServant + 76);
  v249.fields.y = defaultPanelCenter;
  v249.fields.w = defaultPanelHeight;
  v225 = (System_String_o *)v4;
  UIPanel__set_baseClipRegion((UIPanel_o *)AnyTransformServant, v249, 0);
  AnyTransformServant = this->fields.scrollView;
  if ( !AnyTransformServant )
    goto LABEL_269;
  UIScrollView__ResetPosition((UIScrollView_o *)AnyTransformServant, 0);
  this->fields.execObjectExtraFlag = 1;
  userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_VoiceMaster___);
  v234 = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v16 = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  firstPriority = 0;
  v17 = (System_Collections_Generic_List_T__o *)sub_1CE694C(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v17,
    (const MethodInfo_38EAF1C *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v17 )
    goto LABEL_269;
  items = v17->fields._items;
  v19 = changeSvtVoiceIdList;
  v20 = Method_System_Collections_Generic_List_CondType_Kind__Add__;
  ++v17->fields._version;
  if ( !items )
    goto LABEL_269;
  size = v17->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v17,
      81,
      *(const MethodInfo_38EB770 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v17->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  v228 = (ServantLimitAddMaster_o *)v16;
  if ( !changeSvtVoiceIdList )
LABEL_269:
    sub_1CE6958(AnyTransformServant, v8);
  max_length = changeSvtVoiceIdList->max_length;
  if ( (int)max_length >= 1 )
  {
    v23 = 0;
    v232 = (VoiceMaster_o *)Master_object;
    v230 = v17;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)max_length )
        goto LABEL_270;
      v229 = v23;
      svtId = v19->m_Items[v23];
      AnyTransformServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !AnyTransformServant )
        goto LABEL_269;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)AnyTransformServant,
                            (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      AnyTransformServant = userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
        goto LABEL_269;
      maxLimitCount = userSvtCollectionEntity->fields.maxLimitCount;
      AnyTransformServant = UserServantCollectionEntity__GetCostumeList(userSvtCollectionEntity, -1, 0);
      if ( !MasterData_object )
        goto LABEL_269;
      VoiceLimitCountList = ServantLimitAddMaster__getVoiceLimitCountList(
                              (ServantLimitAddMaster_o *)MasterData_object,
                              svtId,
                              maxLimitCount,
                              (System_Int32_array *)AnyTransformServant,
                              0);
      AnyTransformServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !AnyTransformServant )
        goto LABEL_269;
      AnyTransformServant = DataManager__GetMasterData_object_(
                              (DataManager_o *)AnyTransformServant,
                              (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !AnyTransformServant )
        goto LABEL_269;
      ServantVoiceRelationMaster__GetRelationList_43966600(
        (ServantVoiceRelationMaster_o *)AnyTransformServant,
        &beforeRelationList,
        &sameRelationList,
        &afterRelationList,
        svtId,
        0);
      v27 = beforeRelationList;
      v28 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v27, v28, v29);
      v30 = sameRelationList;
      ++firstPriority;
      v31 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v30, v31, v32);
      if ( !VoiceLimitCountList )
        goto LABEL_269;
      v33 = VoiceLimitCountList->max_length;
      if ( (int)v33 >= 1 )
        break;
LABEL_229:
      v191 = afterRelationList;
      v192 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v191, v192, v193);
      v19 = changeSvtVoiceIdList;
      LODWORD(max_length) = changeSvtVoiceIdList->max_length;
      v23 = v229 + 1;
      if ( (__int64)(v229 + 1) >= (int)max_length )
        goto LABEL_230;
    }
    v34 = 0;
    v231 = VoiceLimitCountList;
    while ( 1 )
    {
      if ( v34 >= (unsigned int)v33 )
        goto LABEL_270;
      v35 = VoiceLimitCountList->m_Items[v34];
      AnyTransformServant = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      if ( !Master_object )
        goto LABEL_269;
      v233 = v34;
      EnableInfo = VoiceMaster__getEnableInfo(
                     (VoiceMaster_o *)Master_object,
                     (int32_t)AnyTransformServant,
                     svtId,
                     v35,
                     (System_Collections_Generic_List_CondType_Kind__o *)v17,
                     0,
                     0,
                     0);
      v37 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_VoiceEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v37,
        (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_VoiceEntity___ctor__);
      if ( !EnableInfo )
        goto LABEL_269;
      v38 = EnableInfo->max_length;
      if ( v38 >= 1 )
        break;
LABEL_130:
      v103 = firstPriority;
      v104 = ++firstPriority;
      v105 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      v106 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v106 = BalanceConfig_TypeInfo;
      }
      if ( v105 == v106->static_fields->ServantIdJekyll )
      {
        AnyTransformServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !AnyTransformServant )
          goto LABEL_269;
        v107 = DataManager__GetMasterData_object_(
                 (DataManager_o *)AnyTransformServant,
                 (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4DFE4CA )
        {
          sub_1CE6700(&NetworkManager_TypeInfo);
          byte_4DFE4CA = 1;
        }
        v108 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v108 = NetworkManager_TypeInfo;
        }
        userIdNumber = v108->static_fields->userIdNumber;
        AnyTransformServant = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
        if ( !v107 )
          goto LABEL_269;
        EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                             (UserServantCollectionMaster_o *)v107,
                             userIdNumber,
                             (int32_t)AnyTransformServant,
                             0);
        AnyTransformServant = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v37, 0);
        if ( ((unsigned __int8)AnyTransformServant & 1) == 0 )
        {
          if ( !v37 )
            goto LABEL_269;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v238,
            v37,
            (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_VoiceEntity__GetEnumerator__);
          v241 = v238;
          while ( 1 )
          {
            v111 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v241,
                     (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_VoiceEntity__MoveNext__);
            if ( !v111 )
              break;
            if ( !v241.fields._current )
              sub_1CE6958(v111, v112);
            if ( !EntityDefinitely )
              sub_1CE6958(v111, v112);
            if ( UserServantCollectionEntity__IsPlayed(EntityDefinitely, HIDWORD(v241.fields._current[3].klass), 0) )
            {
              v113 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
              v114 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v114 = BalanceConfig_TypeInfo;
              }
              v115 = VoiceMaster__getEnableInfo(v232, v113, v114->static_fields->ServantIdHyde, v35, 0, 0, 0, 0);
              v117 = v115;
              if ( !v115 )
                sub_1CE6958(0, v116);
              if ( SLODWORD(v115->max_length) >= 1 )
              {
                v118 = 0;
                m_Items = v115->m_Items;
                do
                {
                  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  if ( !itemList )
                    sub_1CE6958(v115, v116);
                  v121 = itemList->fields._size;
                  ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                  v122 = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v122 = BalanceConfig_TypeInfo;
                  }
                  if ( v118 >= LODWORD(v117->max_length) )
                    sub_1CE6960(v122);
                  v123 = m_Items[v118];
                  ServantIdHyde = v122->static_fields->ServantIdHyde;
                  v125 = (ServantStatusVoiceListViewItem_o *)sub_1CE694C(ServantStatusVoiceListViewItem_TypeInfo);
                  ServantStatusVoiceListViewItem___ctor(v125, v121, v126, ServantIdHyde, v35, v123, v104, 0, 0, v224);
                  v135 = itemList->fields._items;
                  v136 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++itemList->fields._version;
                  if ( !v135 )
                    sub_1CE6958(v127, v128);
                  v137 = itemList->fields._size;
                  if ( (unsigned int)v137 >= LODWORD(v135->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      itemList,
                      (Il2CppObject *)v125,
                      *(const MethodInfo_3905F68 **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v138 = &v135->obj.klass + v137;
                    itemList->fields._size = v137 + 1;
                    v138[4] = (Il2CppClass *)v125;
                    sub_1CE66A4(
                      (GrandQuestFolderBoardItem_o *)(v138 + 4),
                      (int32_t)v125,
                      v129,
                      v130,
                      v131,
                      v132,
                      v133,
                      v134);
                  }
                  ++v118;
                }
                while ( (__int64)v118 < SLODWORD(v117->max_length) );
              }
              firstPriority = v103 + 2;
              break;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v241,
            (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_VoiceEntity__Dispose__);
        }
      }
      else
      {
        AnyTransformServant = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
        v139 = (int)AnyTransformServant;
        v140 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v140 = BalanceConfig_TypeInfo;
        }
        static_fields = v140->static_fields;
        if ( v139 == static_fields->ServantIdMashu1 )
        {
          if ( !v140->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v140);
            static_fields = BalanceConfig_TypeInfo->static_fields;
          }
          if ( v35 != static_fields->SpecialLimitCountPLD )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_41569468(115, 0) )
            {
              v142 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
              v143 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v143 = BalanceConfig_TypeInfo;
              }
              v144 = v104;
              AnyTransformServant = VoiceMaster__getEnableInfo(
                                      v232,
                                      v142,
                                      v143->static_fields->ServantIdMashu2,
                                      v35,
                                      0,
                                      0,
                                      0,
                                      0);
              if ( !AnyTransformServant )
                goto LABEL_269;
              v145 = AnyTransformServant;
              if ( *((int *)AnyTransformServant + 6) >= 1 )
              {
                v146 = 0;
                while ( 1 )
                {
                  v147 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  if ( !v147 )
                    goto LABEL_269;
                  v148 = v147->fields._size;
                  ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                  AnyTransformServant = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( v146 >= *((unsigned int *)v145 + 6) )
                    break;
                  v149 = (VoiceInfo_o *)v145[v146 + 4];
                  ServantIdMashu2 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu2;
                  v151 = (ServantStatusVoiceListViewItem_o *)sub_1CE694C(ServantStatusVoiceListViewItem_TypeInfo);
                  ServantStatusVoiceListViewItem___ctor(v151, v148, v152, ServantIdMashu2, v35, v149, v144, 0, 0, v224);
                  v159 = v147->fields._items;
                  v160 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++v147->fields._version;
                  if ( !v159 )
                    goto LABEL_269;
                  v161 = v147->fields._size;
                  if ( (unsigned int)v161 >= LODWORD(v159->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v147,
                      (Il2CppObject *)v151,
                      *(const MethodInfo_3905F68 **)(*(_QWORD *)(v160[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v162 = &v159->obj.klass + v161;
                    v147->fields._size = v161 + 1;
                    v162[4] = (Il2CppClass *)v151;
                    sub_1CE66A4(
                      (GrandQuestFolderBoardItem_o *)(v162 + 4),
                      (int32_t)v151,
                      v153,
                      v154,
                      v155,
                      v156,
                      v157,
                      v158);
                  }
                  if ( (__int64)++v146 >= *((int *)v145 + 6) )
                    goto LABEL_193;
                }
LABEL_270:
                sub_1CE6960(AnyTransformServant);
              }
LABEL_193:
              v104 = v103 + 2;
              firstPriority = v103 + 2;
            }
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4DFE4CA )
            {
              sub_1CE6700(&NetworkManager_TypeInfo);
              byte_4DFE4CA = 1;
            }
            v163 = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v163 = NetworkManager_TypeInfo;
            }
            v164 = BalanceConfig_TypeInfo;
            v165 = v163->static_fields->userIdNumber;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v164 = BalanceConfig_TypeInfo;
            }
            v166 = v164->static_fields;
            MashuTdGradeUpQuestId = v166->MashuTdGradeUpQuestId;
            MashuTdGradeUpQuestPhase = v166->MashuTdGradeUpQuestPhase;
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            AnyTransformServant = (void *)CondType__IsQuestPhaseClear(
                                            v165,
                                            MashuTdGradeUpQuestId,
                                            MashuTdGradeUpQuestPhase,
                                            -1,
                                            0,
                                            0);
            if ( ((unsigned __int8)AnyTransformServant & 1) != 0 )
            {
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              AnyTransformServant = v228;
              if ( !v228 )
                goto LABEL_269;
              AnyTransformServant = (void *)ServantLimitAddMaster__TryGetEntity(
                                              v228,
                                              &entity,
                                              BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                              v35,
                                              0);
              if ( ((unsigned __int8)AnyTransformServant & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_269;
                svtVoiceId = entity->fields.svtVoiceId;
                AnyTransformServant = BalanceConfig_TypeInfo;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  AnyTransformServant = BalanceConfig_TypeInfo;
                }
                if ( svtVoiceId != *(_DWORD *)(*((_QWORD *)AnyTransformServant + 23) + 372LL) )
                {
                  v170 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                  v171 = v104;
                  v172 = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v172 = BalanceConfig_TypeInfo;
                  }
                  AnyTransformServant = VoiceMaster__getEnableInfo(
                                          v232,
                                          v170,
                                          v172->static_fields->ServantIdMashu3,
                                          v35,
                                          0,
                                          0,
                                          0,
                                          0);
                  if ( !AnyTransformServant )
                    goto LABEL_269;
                  v173 = AnyTransformServant;
                  if ( *((int *)AnyTransformServant + 6) >= 1 )
                  {
                    v174 = 0;
                    do
                    {
                      v175 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                      if ( !v175 )
                        goto LABEL_269;
                      v176 = v175->fields._size;
                      ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                      AnyTransformServant = BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      if ( v174 >= *((unsigned int *)v173 + 6) )
                        goto LABEL_270;
                      v177 = (VoiceInfo_o *)v173[v174 + 4];
                      ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
                      v179 = (ServantStatusVoiceListViewItem_o *)sub_1CE694C(ServantStatusVoiceListViewItem_TypeInfo);
                      ServantStatusVoiceListViewItem___ctor(
                        v179,
                        v176,
                        v180,
                        ServantIdMashu3,
                        v35,
                        v177,
                        v171,
                        0,
                        0,
                        v224);
                      v187 = v175->fields._items;
                      v188 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                      ++v175->fields._version;
                      if ( !v187 )
                        goto LABEL_269;
                      v189 = v175->fields._size;
                      if ( (unsigned int)v189 >= LODWORD(v187->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v175,
                          (Il2CppObject *)v179,
                          *(const MethodInfo_3905F68 **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v190 = &v187->obj.klass + v189;
                        v175->fields._size = v189 + 1;
                        v190[4] = (Il2CppClass *)v179;
                        sub_1CE66A4(
                          (GrandQuestFolderBoardItem_o *)(v190 + 4),
                          (int32_t)v179,
                          v181,
                          v182,
                          v183,
                          v184,
                          v185,
                          v186);
                      }
                    }
                    while ( (__int64)++v174 < *((int *)v173 + 6) );
                  }
                  firstPriority = v171 + 1;
                }
              }
            }
          }
        }
      }
      VoiceLimitCountList = v231;
      Master_object = (Il2CppObject *)v232;
      v17 = v230;
      LODWORD(v33) = v231->max_length;
      v34 = v233 + 1;
      if ( (__int64)(v233 + 1) >= (int)v33 )
        goto LABEL_229;
    }
    v39 = 0;
    while ( 1 )
    {
      if ( v39 >= v38 )
        goto LABEL_270;
      v40 = &EnableInfo->obj.klass + (int)v39;
      v43 = v40[4];
      v42 = (VoiceInfo_o **)(v40 + 4);
      v41 = v43;
      if ( !v43 )
        goto LABEL_269;
      name = (char *)v41->_1.name;
      AnyTransformServant = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      v51 = (int)AnyTransformServant;
      v52 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v52 = BalanceConfig_TypeInfo;
      }
      if ( v51 == v52->static_fields->ServantIdJekyll )
      {
        if ( !name )
          goto LABEL_269;
        if ( *((_DWORD *)name + 7) == 7 )
        {
          if ( !v37 )
            goto LABEL_269;
          v53 = v37->fields._items;
          v54 = Method_System_Collections_Generic_List_VoiceEntity__Add__;
          ++v37->fields._version;
          if ( !v53 )
            goto LABEL_269;
          v55 = v37->fields._size;
          if ( (unsigned int)v55 >= LODWORD(v53->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v37,
              (Il2CppObject *)name,
              *(const MethodInfo_3905F68 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
          }
          else
          {
            v56 = &v53->obj.klass + v55;
            v37->fields._size = v55 + 1;
            v56[4] = (Il2CppClass *)name;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v56 + 4), (int32_t)name, v45, v46, v47, v48, v49, v50);
          }
        }
      }
      if ( v35 <= 10 )
      {
        if ( !name )
          goto LABEL_269;
        if ( *((_DWORD *)name + 7) == 2 )
        {
          v57 = *((_DWORD *)name + 12);
          if ( v57 == 7 )
          {
            if ( *((_DWORD *)name + 13) != 2 )
            {
              if ( v39 >= LODWORD(EnableInfo->max_length) )
                goto LABEL_270;
              AnyTransformServant = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                              (ServantStatusVoiceListViewManager_o *)AnyTransformServant,
                                              svtId,
                                              v35,
                                              *v42,
                                              (const MethodInfo *)v47);
              if ( ((unsigned __int8)AnyTransformServant & 1) == 0 )
              {
                AnyTransformServant = this->fields.itemList;
                if ( !AnyTransformServant )
                  goto LABEL_269;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v238,
                  (System_Collections_Generic_List_object__o *)AnyTransformServant,
                  (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
                v242 = v238;
                do
                {
                  v59 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v242,
                          (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                  if ( !v59 )
                    goto LABEL_99;
                  current = v242.fields._current;
                  if ( !v242.fields._current
                    || (naturalAligment = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment,
                        v242.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
                    || (ServantStatusVoiceListViewItem_c *)v242.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                  {
                    sub_1CE6958(v59, v60);
                  }
                  monitor = v242.fields._current[9].monitor;
                  if ( !monitor )
                    sub_1CE6958(v59, v60);
                }
                while ( monitor[7] != 2
                     || monitor[12] != 7
                     || monitor[13] != *((_DWORD *)name + 13)
                     || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                          (ServantStatusVoiceListViewItem_o *)v242.fields._current,
                          v60) != svtId );
                v64 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                if ( v39 >= LODWORD(EnableInfo->max_length) )
                  sub_1CE6960(v64);
                goto LABEL_122;
              }
LABEL_79:
              if ( v39 >= LODWORD(EnableInfo->max_length) )
                goto LABEL_270;
              AnyTransformServant = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                                              (ServantStatusVoiceListViewManager_o *)AnyTransformServant,
                                              svtId,
                                              *v42,
                                              v58);
              if ( ((unsigned __int8)AnyTransformServant & 1) == 0 )
                goto LABEL_118;
              voiceLabelSpec = 1;
              goto LABEL_101;
            }
          }
          else if ( v57 == 18 )
          {
            if ( v39 >= LODWORD(EnableInfo->max_length) )
              goto LABEL_270;
            AnyTransformServant = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                            (ServantStatusVoiceListViewManager_o *)AnyTransformServant,
                                            svtId,
                                            v35,
                                            *v42,
                                            (const MethodInfo *)v47);
            if ( ((unsigned __int8)AnyTransformServant & 1) != 0 )
              goto LABEL_79;
            AnyTransformServant = this->fields.itemList;
            if ( !AnyTransformServant )
              goto LABEL_269;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v238,
              (System_Collections_Generic_List_object__o *)AnyTransformServant,
              (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v242 = v238;
            do
            {
              v69 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v242,
                      (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v69 )
                goto LABEL_99;
              current = v242.fields._current;
              if ( !v242.fields._current
                || (v71 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment,
                    v242.fields._current->klass->_2.naturalAligment < (unsigned int)v71)
                || (ServantStatusVoiceListViewItem_c *)v242.fields._current->klass->_2.typeHierarchy[v71 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                sub_1CE6958(v69, v70);
              }
              v72 = v242.fields._current[9].monitor;
              if ( !v72 )
                sub_1CE6958(v69, v70);
            }
            while ( v72[7] != 2
                 || v72[12] != 18
                 || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                      (ServantStatusVoiceListViewItem_o *)v242.fields._current,
                      v70) != svtId );
            v73 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
            if ( v39 >= LODWORD(EnableInfo->max_length) )
              sub_1CE6960(v73);
            if ( !*v42 )
              sub_1CE6958(v73, v74);
            voiceEntity = (*v42)->fields.voiceEntity;
            if ( !voiceEntity )
              sub_1CE6958(v73, v74);
            v76 = v73;
            id = voiceEntity->fields.id;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
            v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_50073852(id, 0);
            if ( !v234 )
              sub_1CE6958(0, v78);
            if ( !VoicePlayCondMaster__isVoiceCond(v234, v76, v79, 81, 0) )
            {
              v102 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
              if ( v39 >= LODWORD(EnableInfo->max_length) )
                sub_1CE6960(v102);
LABEL_122:
              ServantStatusVoiceListViewItem__SetLimitCount(
                (ServantStatusVoiceListViewItem_o *)current,
                v65,
                svtId,
                v35,
                *v42,
                v66,
                v67);
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v242,
                (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
              goto LABEL_118;
            }
LABEL_99:
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v242,
              (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          }
        }
      }
      voiceLabelSpec = 0;
LABEL_101:
      AnyTransformServant = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      if ( v39 >= LODWORD(EnableInfo->max_length) )
        goto LABEL_270;
      if ( !*v42 )
        goto LABEL_269;
      v80 = (*v42)->fields.voiceEntity;
      if ( !v80 )
        goto LABEL_269;
      v81 = (int)AnyTransformServant;
      v82 = v80->fields.id;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_50073852(v82, 0);
      AnyTransformServant = v234;
      if ( !v234 )
        goto LABEL_269;
      AnyTransformServant = (void *)VoicePlayCondMaster__isVoiceCond(v234, v81, v83, 81, 0);
      if ( !name )
        goto LABEL_269;
      v84 = *((_DWORD *)name + 12);
      v85 = v84 == 7 || v84 == 18 || v84 == 54 && ((unsigned __int8)AnyTransformServant & 1) != 0;
      v86 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !v86 )
        goto LABEL_269;
      v87 = v86->fields._size;
      AnyTransformServant = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      if ( v39 >= LODWORD(EnableInfo->max_length) )
        goto LABEL_270;
      v88 = *v42;
      v89 = firstPriority;
      v90 = (ServantStatusVoiceListViewItem_o *)sub_1CE694C(ServantStatusVoiceListViewItem_TypeInfo);
      ServantStatusVoiceListViewItem___ctor(v90, v87, v91, svtId, v35, v88, v89, v85, voiceLabelSpec, v224);
      v98 = v86->fields._items;
      v99 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v86->fields._version;
      if ( !v98 )
        goto LABEL_269;
      v100 = v86->fields._size;
      if ( (unsigned int)v100 >= LODWORD(v98->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v86,
          (Il2CppObject *)v90,
          *(const MethodInfo_3905F68 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
      }
      else
      {
        v101 = &v98->obj.klass + v100;
        v86->fields._size = v100 + 1;
        v101[4] = (Il2CppClass *)v90;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v101 + 4), (int32_t)v90, v92, v93, v94, v95, v96, v97);
      }
LABEL_118:
      v38 = EnableInfo->max_length;
      if ( (int)++v39 >= v38 )
        goto LABEL_130;
    }
  }
LABEL_230:
  v194 = this->fields.itemList;
  if ( !v194 )
    goto LABEL_269;
  v195 = v194->fields._size;
  v196 = sub_1CE694C(System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v196,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
  if ( v195 - 1 >= 1 )
  {
    for ( i = 0; i != v195 - 1; ++i )
    {
      AnyTransformServant = this->fields.itemList;
      if ( !AnyTransformServant )
        goto LABEL_269;
      AnyTransformServant = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)AnyTransformServant,
                              i,
                              (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !AnyTransformServant )
        goto LABEL_269;
      v198 = (ServantStatusVoiceListViewItem_o *)AnyTransformServant;
      v199 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)AnyTransformServant + 304LL) < (unsigned int)v199
        || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)AnyTransformServant + 200LL) + 8 * v199 - 8) != ServantStatusVoiceListViewItem_TypeInfo )
      {
        goto LABEL_269;
      }
      if ( ServantStatusVoiceListViewItem__get_OpenName((ServantStatusVoiceListViewItem_o *)AnyTransformServant, v8) )
      {
        AnyTransformServant = (void *)ServantStatusVoiceListViewItem__get_DispNum(v198, v8);
        if ( !(_DWORD)AnyTransformServant )
        {
          if ( !v196 )
            goto LABEL_269;
          v200 = (const MethodInfo *)*(unsigned int *)(v196 + 24);
          v201 = *(_DWORD *)(v196 + 28) + 1;
          *(_DWORD *)(v196 + 24) = 0;
          *(_DWORD *)(v196 + 28) = v201;
          if ( (int)v200 >= 1 )
            System_Array__Clear(*(System_Array_o **)(v196 + 16), 0, (int32_t)v200, 0);
          v202 = i + 1;
          if ( i + 1 < v195 )
          {
            do
            {
              AnyTransformServant = this->fields.itemList;
              if ( !AnyTransformServant )
                goto LABEL_269;
              AnyTransformServant = System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)AnyTransformServant,
                                      v202,
                                      (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !AnyTransformServant )
                goto LABEL_269;
              v203 = (Il2CppObject *)AnyTransformServant;
              v204 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
              if ( *(unsigned __int8 *)(*(_QWORD *)AnyTransformServant + 304LL) < (unsigned int)v204
                || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)AnyTransformServant + 200LL)
                                                        + 8 * v204
                                                        - 8) != ServantStatusVoiceListViewItem_TypeInfo )
              {
                goto LABEL_269;
              }
              OpenName = ServantStatusVoiceListViewItem__get_OpenName(
                           (ServantStatusVoiceListViewItem_o *)AnyTransformServant,
                           v8);
              v207 = ServantStatusVoiceListViewItem__get_OpenName(v198, v206);
              AnyTransformServant = (void *)System_String__op_Equality(OpenName, v207, 0);
              if ( ((unsigned __int8)AnyTransformServant & 1) != 0 )
              {
                v213 = *(_QWORD *)(v196 + 16);
                v214 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__;
                ++*(_DWORD *)(v196 + 28);
                if ( !v213 )
                  goto LABEL_269;
                v215 = *(int *)(v196 + 24);
                if ( (unsigned int)v215 >= *(_DWORD *)(v213 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)v196,
                    v203,
                    *(const MethodInfo_3905F68 **)(*(_QWORD *)(v214[4] + 192LL) + 112LL));
                }
                else
                {
                  v216 = v213 + 8 * v215;
                  *(_DWORD *)(v196 + 24) = v215 + 1;
                  *(_QWORD *)(v216 + 32) = v203;
                  sub_1CE66A4(
                    (GrandQuestFolderBoardItem_o *)(v216 + 32),
                    (int32_t)v203,
                    (int32_t)v200,
                    v208,
                    v209,
                    v210,
                    v211,
                    v212);
                }
              }
            }
            while ( v195 != ++v202 );
          }
          if ( *(int *)(v196 + 24) >= 1 )
          {
            ServantStatusVoiceListViewItem__SetNameNum(v198, 1, v200);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v238,
              (System_Collections_Generic_List_object__o *)v196,
              (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
            v217 = 2;
            for ( j = v238;
                  ;
                  ServantStatusVoiceListViewItem__SetNameNum(
                    (ServantStatusVoiceListViewItem_o *)j.fields._current,
                    v217++,
                    v220) )
            {
              v218 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &j,
                       (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
              if ( !v218 )
                break;
              if ( j.fields._current )
              {
                v221 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
                if ( j.fields._current->klass->_2.naturalAligment >= (unsigned int)v221
                  && (ServantStatusVoiceListViewItem_c *)j.fields._current->klass->_2.typeHierarchy[v221 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
                {
                  continue;
                }
              }
              sub_1CE6958(v218, v219);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &j,
              (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
          }
        }
      }
    }
  }
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  AnyTransformServant = LocalizationManager__Get((System_String_o *)StringLiteral_12123/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, 0);
  if ( !explanationLabel )
    goto LABEL_269;
  UILabel__set_text(explanationLabel, (System_String_o *)AnyTransformServant, 0);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  AnyTransformServant = LocalizationManager__Get(v225, 0);
  if ( !emptyMessageLabel )
    goto LABEL_269;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)AnyTransformServant, 0);
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

  if ( (byte_4E025B6 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1CE6700(&ServantStatusVoiceListViewItem_TypeInfo);
    byte_4E025B6 = 1;
  }
  result = (ServantStatusVoiceListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantStatusVoiceListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4E025B4 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&StringLiteral_16258/*"_"*/);
    byte_4E025B4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)ServantVoiceMaster__getEntity_43959460(
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
    sub_1CE6960(Instance);
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
        Instance = (DataManager_o *)System_String__Concat_65161092(v14, (System_String_o *)StringLiteral_16258/*"_"*/, v15, 0),
        (v16 = *(_QWORD *)(v12 + 32)) == 0) )
  {
LABEL_25:
    sub_1CE6958(Instance, v9);
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
      if ( *(_DWORD *)(v20 + 88) )
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

  if ( (byte_4E025B5 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E025B5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4DFE4CA )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    byte_4DFE4CA = 1;
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
        sub_1CE6960(Instance);
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
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v20, 0);
        if ( (int)Instance >= value )
          v13 = 1;
      }
      max_length = servantVoiceConds->max_length;
      if ( (int)++v12 >= max_length )
        return v13;
    }
LABEL_31:
    sub_1CE6958(Instance, v7);
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
  if ( (byte_4E025BC & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1CE6700(&ServantStatusVoiceListViewItem_TypeInfo);
    byte_4E025BC = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0
    || (naturalAligment = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewItem_TypeInfo )
  {
    sub_1CE6958(this, obj);
  }
  if ( LOBYTE(linkItem[1].fields.sortValue1B) )
  {
    callbackFunc = v9->fields.callbackFunc;
    v9->fields.callbackFunc = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v9->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
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

  if ( (byte_4E025BB & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E025BB = 1;
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
          sub_1CE6958(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v14,
          1,
          v14->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2, 0, v8, v9, v10, v11, v12, v13);
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
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4E025B9 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_1CE6700(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_1CE6700(&StringLiteral_10019/*"OnMoveEnd"*/);
    byte_4E025B9 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1CE6958(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10019/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      ObjectList,
      (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v14.fields._current;
      v11 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1CE6958(v12, v13);
      ServantStatusVoiceListViewObject__Init_40113256(
        (ServantStatusVoiceListViewObject_o *)current,
        mode,
        v11,
        delay,
        0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusVoiceListViewManager__RequestListObject_39282032(
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
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4E025BA & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_1CE6700(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_1CE6700(&StringLiteral_10019/*"OnMoveEnd"*/);
    byte_4E025BA = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1CE6958(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10019/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      ObjectList,
      (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v12.fields._current;
      v9 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1CE6958(v10, v11);
      ServantStatusVoiceListViewObject__Init_40113340((ServantStatusVoiceListViewObject_o *)current, mode, v9, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
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
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusVoiceListViewManager__SetMode_39281052(this, mode, -1, v10);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusVoiceListViewManager__SetMode_39281052(
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
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v20; // x23
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4E025B8 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
    sub_1CE6700(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_1CE6700(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_1CE6700(&StringLiteral_10019/*"OnMoveEnd"*/);
    byte_4E025B8 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( mode == 2 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_30;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      itemList,
      (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    for ( i = v21; ; BYTE1(i.fields._current[11].monitor) = HIDWORD(i.fields._current[1].klass) == select )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v8 )
        break;
      if ( !i.fields._current )
        sub_1CE6958(v8, v9);
      naturalAligment = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
      if ( i.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (ServantStatusVoiceListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        sub_1CE6958(v8, v9);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
                                                                  (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
        if ( !itemList )
          break;
        ServantStatusVoiceListViewObject__Init_40112388((ServantStatusVoiceListViewObject_o *)itemList, 4, 0);
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
      v17 = itemList;
      if ( size >= 1 )
      {
        this->fields.callbackCount = size;
        v18 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v17,
                   v18,
                   (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
          v20 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
          System_Action___ctor(v20, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0);
          if ( !Item )
            break;
          ServantStatusVoiceListViewObject__Init_40113256((ServantStatusVoiceListViewObject_o *)Item, 5, v20, 0.1, 0);
          if ( ++v18 >= v17->fields._size )
            return;
        }
LABEL_30:
        sub_1CE6958(itemList, *(_QWORD *)&mode);
      }
      this->fields.callbackCount = 1;
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_10019/*"OnMoveEnd"*/,
        0.2,
        0);
    }
    else if ( mode == 1 )
    {
      ServantStatusVoiceListViewManager__RequestListObject_39282032(this, 3, v12);
    }
  }
}


void ServantStatusVoiceListViewManager__SetMode_39281976(
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
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusVoiceListViewManager__SetMode_39281052(this, mode, -1, v10);
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
  if ( (byte_4E025B7 & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1CE6700(&ServantStatusVoiceListViewObject_TypeInfo);
    byte_4E025B7 = 1;
  }
  if ( !obj
    || (naturalAligment = ServantStatusVoiceListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantStatusVoiceListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewObject_TypeInfo )
  {
    sub_1CE6958(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ServantStatusVoiceListViewObject__Init_40112388((ServantStatusVoiceListViewObject_o *)obj, v7, 0);
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

  if ( (byte_4E025AB & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    byte_4E025AB = 1;
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
    v8 = sub_1D424D4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1CE6CF4(v7);
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

  if ( (byte_4E025AD & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    byte_4E025AD = 1;
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
    v8 = sub_1D424D4(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1CE6CF4(v7);
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
  __int64 v10; // x1
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

  if ( (byte_4E025B0 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E025B0 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1CE6958(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1CE6958(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1CE6958(0, v10);
      Item = (ListViewItem_o *)ServantStatusVoiceListViewObject__GetItem(
                                 (ServantStatusVoiceListViewObject_o *)Component_object,
                                 0);
      if ( !Item )
        sub_1CE6958(0, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_44937408((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1CE6958(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1CE6958(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3905F68 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1CE6958(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1CE6958(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4E025AF & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E025AF = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1CE6958(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1CE6958(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1CE6958(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1CE6958(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3905F68 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4E025AC & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    byte_4E025AC = 1;
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
    v8 = sub_1D424D4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1CE6CF4(v7);
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

  if ( (byte_4E025AE & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    byte_4E025AE = 1;
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
    v8 = sub_1D424D4(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1CE6CF4(v7);
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
  sub_1CE66A4(
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
  if ( (sub_1CE67C0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1CE6974(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1CE6828(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1B155A0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B15548;
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
  if ( (byte_4E025BD & 1) == 0 )
  {
    sub_1CE6700(&int_TypeInfo);
    sub_1CE6700(&ServantStatusVoiceListViewManager_ResultKind_TypeInfo);
    byte_4E025BD = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(ServantStatusVoiceListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1CE66B4(this, v10, callback, object);
}


void ServantStatusVoiceListViewManager_CallbackFunc__EndInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1CE66B8(result, 0, method);
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