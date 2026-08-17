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
  __int64 v9; // x2
  int max_length; // w8
  VoiceMaster_o *v11; // x23
  unsigned int v12; // w9
  char v13; // w19
  ServantVoiceRelationEntity_o *v14; // x20
  __int64 v15; // x24
  __int64 v16; // x25
  VoiceInfo_array *v17; // x24
  unsigned __int64 v18; // x23
  System_Collections_Generic_List_object__o *itemList; // x25
  __int64 v20; // x26
  __int64 v21; // x28
  int32_t size; // w27
  VoiceInfo_o *v23; // x29
  int32_t v24; // w19
  int32_t v25; // w28
  ServantStatusVoiceListViewItem_o *v26; // x26
  int32_t v27; // w2
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0
  const MethodInfo *v38; // [xsp+8h] [xbp-98h]
  VoiceMaster_o *v39; // [xsp+18h] [xbp-88h]
  ServantVoiceRelationEntity_array *v40; // [xsp+20h] [xbp-80h]
  int32_t ascendOrder; // [xsp+30h] [xbp-70h]
  unsigned int v43; // [xsp+34h] [xbp-6Ch]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_596DFC3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596DFC3 = 1;
  }
  Instance = (VoiceInfo_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (VoiceInfo_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !relationList )
    goto LABEL_29;
  max_length = relationList->max_length;
  if ( max_length >= 1 )
  {
    v11 = (VoiceMaster_o *)Instance;
    v12 = 0;
    v13 = 1;
    ascendOrder = 0;
    v39 = (VoiceMaster_o *)Instance;
    v40 = relationList;
    while ( 1 )
    {
      if ( v12 >= max_length )
LABEL_30:
        sub_2213CE4(Instance);
      v43 = v12;
      v14 = relationList->m_Items[v12];
      if ( !v14 )
        goto LABEL_29;
      v15 = *(_QWORD *)&v14->fields.relationSvtId.fields.currentCryptoKey;
      v16 = *(_QWORD *)&v14->fields.relationSvtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
      *(_QWORD *)&v45.fields.currentCryptoKey = v15;
      *(_QWORD *)&v45.fields.fakeValue = v16;
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v45, 0);
      if ( !v11 )
        goto LABEL_29;
      Instance = VoiceMaster__getEnableInfo(v11, svtId, (int32_t)Instance, 0, 0, 0, 0, 0);
      v17 = Instance;
      if ( (v13 & 1) == 0 && ascendOrder != v14->fields.ascendOrder )
        ++*firstPriority;
      if ( !Instance )
        goto LABEL_29;
      ascendOrder = v14->fields.ascendOrder;
      if ( SLODWORD(Instance->max_length) >= 1 )
        break;
LABEL_27:
      v11 = v39;
      relationList = v40;
      v13 = 0;
      max_length = v40->max_length;
      v12 = v43 + 1;
      if ( (int)(v43 + 1) >= max_length )
        return;
    }
    v18 = 0;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      v20 = *(_QWORD *)&v14->fields.relationSvtId.fields.currentCryptoKey;
      v21 = *(_QWORD *)&v14->fields.relationSvtId.fields.fakeValue;
      size = itemList->fields._size;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
      *(_QWORD *)&v46.fields.currentCryptoKey = v20;
      *(_QWORD *)&v46.fields.fakeValue = v21;
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v46, 0);
      if ( v18 >= LODWORD(v17->max_length) )
        goto LABEL_30;
      v23 = v17->m_Items[v18];
      v24 = *firstPriority;
      v25 = (int)Instance;
      v26 = (ServantStatusVoiceListViewItem_o *)sub_2213CCC(ServantStatusVoiceListViewItem_TypeInfo);
      ServantStatusVoiceListViewItem___ctor(v26, size, v27, v25, 0, v23, v24, 0, 0, v38);
      items = itemList->fields._items;
      v35 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v36 = itemList->fields._size;
      if ( (unsigned int)v36 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v26,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + v36;
        itemList->fields._size = v36 + 1;
        v37[4] = (Il2CppClass *)v26;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v37 + 4), (int32_t)v26, v28, v29, v30, v31, v32, v33);
      }
      if ( (__int64)++v18 >= SLODWORD(v17->max_length) )
        goto LABEL_27;
    }
LABEL_29:
    sub_2213CDC(Instance, v8);
  }
}


void ServantStatusVoiceListViewManager__Awake(ServantStatusVoiceListViewManager_o *this, const MethodInfo *method)
{
  void *scrollView; // x0
  float v4; // s1

  if ( (byte_596DFC2 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_596DFC2 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)scrollView,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0 )
  {
    sub_2213CDC(scrollView, method);
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
  __int64 v6; // x19
  float defaultPanelCenter; // s9
  float defaultPanelHeight; // s8
  void *AnyTransformServant; // x0
  const MethodInfo *v10; // x1
  UIWidget_o *transformNameSprite; // x20
  UIWidget_o *transformNameLabel; // x20
  UILabel_o *v13; // x20
  float transformNameAddHeight; // s0
  struct UIScrollView_o *scrollView; // x8
  __int64 v16; // x1
  __int64 v17; // x2
  DataManager_c *v18; // x0
  Il2CppObject *Master_object; // x23
  Il2CppObject *v20; // x24
  System_Collections_Generic_List_T__o *v21; // x25
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  System_Int32_array *v25; // x9
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v27; // x10
  Il2CppObject *MasterData_object; // x20
  int32_t maxLimitCount; // w21
  System_Int32_array *VoiceLimitCountList; // x19
  ServantVoiceRelationEntity_array *v31; // x20
  int32_t v32; // w0
  const MethodInfo *v33; // x4
  ServantVoiceRelationEntity_array *v34; // x20
  int32_t v35; // w0
  const MethodInfo *v36; // x4
  il2cpp_array_size_t v37; // x8
  unsigned __int64 v38; // x20
  int32_t v39; // w21
  const MethodInfo *v40; // x4
  int v41; // w8
  _DWORD *v42; // x26
  unsigned int i; // w29
  char *v44; // x19
  VoiceInfo_o *v45; // x3
  VoiceInfo_o **v46; // x19
  VoiceInfo_o *v47; // t1
  struct VoiceEntity_o *voiceEntity; // x24
  int32_t condType; // w8
  const MethodInfo *v50; // x3
  _BOOL8 v51; // x0
  const MethodInfo *v52; // x1
  Il2CppObject *current; // x23
  __int64 naturalAligment; // x10
  _DWORD *monitor; // x8
  __int64 v56; // x0
  int32_t v57; // w1
  int32_t v58; // w5
  const MethodInfo *v59; // x6
  bool voiceLabelSpec; // w25
  _BOOL8 v61; // x0
  const MethodInfo *v62; // x1
  __int64 v63; // x10
  _DWORD *v64; // x8
  __int64 v65; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  struct VoiceEntity_o *v68; // x8
  int32_t v69; // w28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x20
  __int64 v71; // x1
  System_String_o *v72; // x2
  __int64 v73; // x2
  struct VoiceEntity_o *v74; // x8
  int32_t v75; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v76; // x20
  System_String_o *v77; // x2
  int32_t v78; // w8
  bool v79; // w28
  System_Collections_Generic_List_object__o *itemList; // x23
  int32_t v81; // w20
  VoiceInfo_o *v82; // x24
  int32_t v83; // w19
  ServantStatusVoiceListViewItem_o *v84; // x27
  int32_t v85; // w2
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  struct System_Object_array *v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  Il2CppClass **v95; // x0
  __int64 v96; // x0
  int32_t v97; // w24
  int32_t v98; // w26
  __int64 v99; // x1
  __int64 v100; // x2
  int32_t v101; // w20
  BalanceConfig_c *v102; // x8
  int32_t ServantIdJekyll; // w19
  __int64 v104; // x1
  __int64 v105; // x2
  BalanceConfig_c *v106; // x8
  int32_t v107; // w23
  int v108; // w9
  unsigned int *v109; // x23
  unsigned __int64 v110; // x25
  char *v111; // x29
  System_Collections_Generic_List_object__o *v112; // x28
  int32_t v113; // w20
  __int64 v114; // x1
  __int64 v115; // x2
  VoiceInfo_o *v116; // x24
  int32_t ServantIdHyde; // w19
  ServantStatusVoiceListViewItem_o *v118; // x27
  int32_t v119; // w2
  System_String_o *v120; // x2
  System_String_o *v121; // x3
  int32_t v122; // w4
  int32_t v123; // w5
  bool v124; // w6
  bool v125; // w7
  struct System_Object_array *v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  Il2CppClass **v129; // x0
  int32_t v130; // w8
  struct BalanceConfig_StaticFields *static_fields; // x9
  __int64 v132; // x2
  __int64 v133; // x1
  __int64 v134; // x2
  int32_t v135; // w20
  BalanceConfig_c *v136; // x8
  unsigned int *v137; // x23
  unsigned __int64 v138; // x25
  char *v139; // x29
  System_Collections_Generic_List_object__o *v140; // x28
  int32_t v141; // w20
  __int64 v142; // x1
  __int64 v143; // x2
  VoiceInfo_o *v144; // x24
  int32_t ServantIdMashu2; // w19
  ServantStatusVoiceListViewItem_o *v146; // x27
  int32_t v147; // w2
  System_String_o *v148; // x2
  System_String_o *v149; // x3
  int32_t v150; // w4
  int32_t v151; // w5
  bool v152; // w6
  bool v153; // w7
  struct System_Object_array *v154; // x8
  _QWORD *v155; // x9
  __int64 v156; // x10
  Il2CppClass **v157; // x0
  NetworkManager_c *v158; // x8
  BalanceConfig_c *v159; // x0
  int64_t userIdNumber; // x20
  struct BalanceConfig_StaticFields *v161; // x9
  int32_t MashuTdGradeUpQuestId; // w23
  int32_t MashuTdGradeUpQuestPhase; // w27
  __int64 v164; // x2
  __int64 v165; // x2
  int32_t svtVoiceId; // w19
  __int64 v167; // x1
  __int64 v168; // x2
  int32_t v169; // w20
  BalanceConfig_c *v170; // x8
  unsigned int *v171; // x23
  unsigned __int64 v172; // x25
  char *v173; // x29
  System_Collections_Generic_List_object__o *v174; // x28
  int32_t v175; // w20
  __int64 v176; // x1
  __int64 v177; // x2
  VoiceInfo_o *v178; // x24
  int32_t ServantIdMashu3; // w19
  ServantStatusVoiceListViewItem_o *v180; // x27
  int32_t v181; // w2
  System_String_o *v182; // x2
  System_String_o *v183; // x3
  int32_t v184; // w4
  int32_t v185; // w5
  bool v186; // w6
  bool v187; // w7
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
  System_String_o *v198; // x2
  int32_t j; // w21
  ServantStatusVoiceListViewItem_o *v200; // x22
  __int64 v201; // x10
  int v202; // w8
  int32_t v203; // w23
  Il2CppObject *v204; // x24
  __int64 v205; // x10
  System_String_o *OpenName; // x19
  const MethodInfo *v207; // x1
  System_String_o *v208; // x0
  System_String_o *v209; // x3
  int32_t v210; // w4
  int32_t v211; // w5
  bool v212; // w6
  bool v213; // w7
  __int64 v214; // x8
  _QWORD *v215; // x9
  __int64 v216; // x10
  __int64 v217; // x0
  int32_t v218; // w22
  __int64 v219; // x1
  const MethodInfo *v220; // x2
  __int64 v221; // x10
  UILabel_o *explanationLabel; // x20
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v224; // [xsp+8h] [xbp-168h]
  System_String_o *key; // [xsp+20h] [xbp-150h]
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // [xsp+28h] [xbp-148h]
  ServantLimitAddMaster_o *v228; // [xsp+38h] [xbp-138h]
  unsigned __int64 v229; // [xsp+40h] [xbp-130h]
  System_Collections_Generic_List_T__o *v230; // [xsp+48h] [xbp-128h]
  System_Int32_array *v231; // [xsp+50h] [xbp-120h]
  int32_t v232; // [xsp+5Ch] [xbp-114h]
  int32_t v233; // [xsp+5Ch] [xbp-114h]
  VoiceMaster_o *v234; // [xsp+60h] [xbp-110h]
  unsigned __int64 v235; // [xsp+68h] [xbp-108h]
  VoicePlayCondMaster_o *v236; // [xsp+70h] [xbp-100h]
  int32_t svtId; // [xsp+7Ch] [xbp-F4h]
  ServantStatusVoiceListViewManager_o *v238; // [xsp+80h] [xbp-F0h]
  System_Collections_Generic_List_Enumerator_object__o v239; // [xsp+88h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v240; // [xsp+A0h] [xbp-D0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+B8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v242; // [xsp+C0h] [xbp-B0h] BYREF
  ServantVoiceRelationEntity_array *afterRelationList; // [xsp+E0h] [xbp-90h] BYREF
  ServantVoiceRelationEntity_array *sameRelationList; // [xsp+E8h] [xbp-88h] BYREF
  ServantVoiceRelationEntity_array *beforeRelationList; // [xsp+F0h] [xbp-80h] BYREF
  int32_t firstPriority; // [xsp+FCh] [xbp-74h] BYREF
  UnityEngine_Color_o TransformNameSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TransformNameLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v249; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596DFC4 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_VoiceMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_CondType_Kind__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_CondType_Kind___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_CondType_Kind__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_2213A60(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&StringLiteral_15853/*"VOICE_EMPTY_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12516/*"SERVANT_STATUS_VOICE_EXPLANATION"*/);
    byte_596DFC4 = 1;
  }
  v6 = StringLiteral_15853/*"VOICE_EMPTY_MESSAGE"*/;
  defaultPanelCenter = this->fields.defaultPanelCenter;
  defaultPanelHeight = this->fields.defaultPanelHeight;
  firstPriority = 0;
  sameRelationList = 0;
  beforeRelationList = 0;
  afterRelationList = 0;
  memset(&v242, 0, sizeof(v242));
  entity = 0;
  memset(&v240, 0, sizeof(v240));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !mainInfo )
    goto LABEL_239;
  AnyTransformServant = (void *)ServantStatusListViewItem__get_AnyTransformServant(mainInfo, 0);
  transformNameSprite = (UIWidget_o *)this->fields.transformNameSprite;
  if ( ((unsigned __int8)AnyTransformServant & 1) != 0 )
  {
    TransformNameSpriteColor = ServantStatusListViewItem__get_TransformNameSpriteColor(mainInfo, 0);
    if ( !transformNameSprite )
      goto LABEL_239;
    UIWidget__set_color(transformNameSprite, TransformNameSpriteColor, 0);
    transformNameLabel = (UIWidget_o *)this->fields.transformNameLabel;
    TransformNameLabelColor = ServantStatusListViewItem__get_TransformNameLabelColor(mainInfo, 0);
    if ( !transformNameLabel )
      goto LABEL_239;
    UIWidget__set_color(transformNameLabel, TransformNameLabelColor, 0);
    AnyTransformServant = this->fields.transformNameSprite;
    if ( !AnyTransformServant )
      goto LABEL_239;
    AnyTransformServant = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)AnyTransformServant, 0);
    if ( !AnyTransformServant )
      goto LABEL_239;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AnyTransformServant, 1, 0);
    v13 = this->fields.transformNameLabel;
    AnyTransformServant = ServantStatusListViewItem__GetTransformName(mainInfo, 0);
    if ( !v13 )
      goto LABEL_239;
    UILabel__set_text(v13, (System_String_o *)AnyTransformServant, 0);
    transformNameAddHeight = (float)this->fields.transformNameAddHeight;
    defaultPanelHeight = defaultPanelHeight - transformNameAddHeight;
    defaultPanelCenter = defaultPanelCenter + (float)(transformNameAddHeight * -0.5);
  }
  else
  {
    if ( !transformNameSprite )
      goto LABEL_239;
    AnyTransformServant = UnityEngine_Component__get_gameObject(
                            (UnityEngine_Component_o *)this->fields.transformNameSprite,
                            0);
    if ( !AnyTransformServant )
      goto LABEL_239;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AnyTransformServant, 0, 0);
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_239;
  AnyTransformServant = scrollView->fields.mPanel;
  if ( !AnyTransformServant )
    goto LABEL_239;
  v249.fields.y = defaultPanelCenter;
  v249.fields.w = defaultPanelHeight;
  v249.fields.x = *((float *)AnyTransformServant + 74);
  v249.fields.z = *((float *)AnyTransformServant + 76);
  key = (System_String_o *)v6;
  UIPanel__set_baseClipRegion((UIPanel_o *)AnyTransformServant, v249, 0);
  AnyTransformServant = this->fields.scrollView;
  if ( !AnyTransformServant )
    goto LABEL_239;
  UIScrollView__ResetPosition((UIScrollView_o *)AnyTransformServant, 0);
  v18 = DataManager_TypeInfo;
  this->fields.execObjectExtraFlag = 1;
  userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
  if ( !*(&v18->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v18, v16, v17);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_VoiceMaster___);
  v20 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v228 = (ServantLimitAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  firstPriority = 0;
  v21 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v21,
    (const MethodInfo_44691F8 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v21 )
    goto LABEL_239;
  items = v21->fields._items;
  v23 = Method_System_Collections_Generic_List_CondType_Kind__Add__;
  ++v21->fields._version;
  if ( !items )
    goto LABEL_239;
  size = v21->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v21,
      81,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v21->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  v25 = changeSvtVoiceIdList;
  if ( !changeSvtVoiceIdList )
LABEL_239:
    sub_2213CDC(AnyTransformServant, v10);
  max_length = changeSvtVoiceIdList->max_length;
  v238 = this;
  if ( (int)max_length >= 1 )
  {
    v27 = 0;
    v234 = (VoiceMaster_o *)Master_object;
    v236 = (VoicePlayCondMaster_o *)v20;
    v230 = v21;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)max_length )
        goto LABEL_240;
      v229 = v27;
      svtId = v25->m_Items[v27];
      AnyTransformServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !AnyTransformServant )
        goto LABEL_239;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)AnyTransformServant,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      AnyTransformServant = userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
        goto LABEL_239;
      maxLimitCount = userSvtCollectionEntity->fields.maxLimitCount;
      AnyTransformServant = UserServantCollectionEntity__GetCostumeList(userSvtCollectionEntity, -1, 0);
      if ( !MasterData_object )
        goto LABEL_239;
      VoiceLimitCountList = ServantLimitAddMaster__getVoiceLimitCountList(
                              (ServantLimitAddMaster_o *)MasterData_object,
                              svtId,
                              maxLimitCount,
                              (System_Int32_array *)AnyTransformServant,
                              0);
      AnyTransformServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !AnyTransformServant )
        goto LABEL_239;
      AnyTransformServant = DataManager__GetMasterData_object_(
                              (DataManager_o *)AnyTransformServant,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !AnyTransformServant )
        goto LABEL_239;
      ServantVoiceRelationMaster__GetRelationList_49844896(
        (ServantVoiceRelationMaster_o *)AnyTransformServant,
        &beforeRelationList,
        &sameRelationList,
        &afterRelationList,
        svtId,
        0);
      v31 = beforeRelationList;
      v32 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v31, v32, v33);
      v34 = sameRelationList;
      ++firstPriority;
      v35 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v34, v35, v36);
      if ( !VoiceLimitCountList )
        goto LABEL_239;
      v37 = VoiceLimitCountList->max_length;
      if ( (int)v37 >= 1 )
        break;
LABEL_199:
      v192 = afterRelationList;
      v193 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v192, v193, v194);
      v25 = changeSvtVoiceIdList;
      LODWORD(max_length) = changeSvtVoiceIdList->max_length;
      v27 = v229 + 1;
      if ( (__int64)(v229 + 1) >= (int)max_length )
        goto LABEL_200;
    }
    v38 = 0;
    v231 = VoiceLimitCountList;
    while ( 1 )
    {
      if ( v38 >= (unsigned int)v37 )
        goto LABEL_240;
      v39 = VoiceLimitCountList->m_Items[v38];
      AnyTransformServant = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      if ( !Master_object )
        goto LABEL_239;
      v235 = v38;
      AnyTransformServant = VoiceMaster__getEnableInfo(
                              (VoiceMaster_o *)Master_object,
                              (int32_t)AnyTransformServant,
                              svtId,
                              v39,
                              (System_Collections_Generic_List_CondType_Kind__o *)v21,
                              0,
                              0,
                              0);
      if ( !AnyTransformServant )
        goto LABEL_239;
      v41 = *((_DWORD *)AnyTransformServant + 6);
      v42 = AnyTransformServant;
      if ( v41 >= 1 )
      {
        for ( i = 0; (int)i < v41; ++i )
        {
          if ( i >= v41 )
            goto LABEL_240;
          v44 = (char *)&v42[2 * i];
          v47 = (VoiceInfo_o *)*((_QWORD *)v44 + 4);
          v46 = (VoiceInfo_o **)(v44 + 32);
          v45 = v47;
          if ( !v47 )
            goto LABEL_239;
          voiceEntity = v45->fields.voiceEntity;
          if ( v39 <= 10 )
          {
            if ( !voiceEntity )
              goto LABEL_239;
            if ( voiceEntity->fields.svtVoiceType == 2 )
            {
              condType = voiceEntity->fields.condType;
              if ( condType == 7 )
              {
                if ( voiceEntity->fields.condValue != 2 )
                {
                  AnyTransformServant = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                                  (ServantStatusVoiceListViewManager_o *)AnyTransformServant,
                                                  svtId,
                                                  v39,
                                                  v45,
                                                  v40);
                  if ( ((unsigned __int8)AnyTransformServant & 1) == 0 )
                  {
                    AnyTransformServant = this->fields.itemList;
                    if ( !AnyTransformServant )
                      goto LABEL_239;
                    System_Collections_Generic_List_object___GetEnumerator(
                      (System_Collections_Generic_List_Enumerator_T__o *)&v239,
                      (System_Collections_Generic_List_object__o *)AnyTransformServant,
                      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
                    v242 = v239;
                    v239.fields._list = 0;
                    *(_QWORD *)&v239.fields._index = &v242;
                    do
                    {
                      v51 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                              &v242,
                              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                      if ( !v51 )
                        goto LABEL_88;
                      current = v242.fields._current;
                      if ( !v242.fields._current
                        || (naturalAligment = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment,
                            v242.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
                        || (ServantStatusVoiceListViewItem_c *)v242.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                      {
                        sub_2213CDC(v51, v52);
                      }
                      monitor = v242.fields._current[9].monitor;
                      if ( !monitor )
                        sub_2213CDC(v51, v52);
                    }
                    while ( monitor[7] != 2
                         || monitor[12] != 7
                         || monitor[13] != voiceEntity->fields.condValue
                         || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                              (ServantStatusVoiceListViewItem_o *)v242.fields._current,
                              v52) != svtId );
                    v56 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                    if ( i >= v42[6] )
                      sub_2213CE4(v56);
                    goto LABEL_112;
                  }
LABEL_68:
                  if ( i >= v42[6] )
                    goto LABEL_240;
                  AnyTransformServant = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                                                  (ServantStatusVoiceListViewManager_o *)AnyTransformServant,
                                                  svtId,
                                                  *v46,
                                                  v50);
                  if ( ((unsigned __int8)AnyTransformServant & 1) == 0 )
                    goto LABEL_108;
                  voiceLabelSpec = 1;
                  goto LABEL_90;
                }
              }
              else if ( condType == 18 )
              {
                if ( i >= v42[6] )
                  goto LABEL_240;
                AnyTransformServant = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                                (ServantStatusVoiceListViewManager_o *)AnyTransformServant,
                                                svtId,
                                                v39,
                                                *v46,
                                                v40);
                if ( ((unsigned __int8)AnyTransformServant & 1) != 0 )
                  goto LABEL_68;
                AnyTransformServant = this->fields.itemList;
                if ( !AnyTransformServant )
                  goto LABEL_239;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v239,
                  (System_Collections_Generic_List_object__o *)AnyTransformServant,
                  (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
                v242 = v239;
                v239.fields._list = 0;
                *(_QWORD *)&v239.fields._index = &v242;
                do
                {
                  v61 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v242,
                          (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                  if ( !v61 )
                    goto LABEL_88;
                  current = v242.fields._current;
                  if ( !v242.fields._current
                    || (v63 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment,
                        v242.fields._current->klass->_2.naturalAligment < (unsigned int)v63)
                    || (ServantStatusVoiceListViewItem_c *)v242.fields._current->klass->_2.typeHierarchy[v63 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                  {
                    sub_2213CDC(v61, v62);
                  }
                  v64 = v242.fields._current[9].monitor;
                  if ( !v64 )
                    sub_2213CDC(v61, v62);
                }
                while ( v64[7] != 2
                     || v64[12] != 18
                     || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                          (ServantStatusVoiceListViewItem_o *)v242.fields._current,
                          v62) != svtId );
                v65 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                if ( i >= v42[6] )
                  sub_2213CE4(v65);
                if ( !*v46 )
                  sub_2213CDC(v65, v66);
                v68 = (*v46)->fields.voiceEntity;
                if ( !v68 )
                  sub_2213CDC(v65, v66);
                v69 = v65;
                id = v68->fields.id;
                if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v66, v67);
                v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(id, 0);
                if ( !v236 )
                  sub_2213CDC(0, v71);
                if ( !VoicePlayCondMaster__isVoiceCond(v236, v69, v72, 81, 0) )
                {
                  v96 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                  if ( i >= v42[6] )
                    sub_2213CE4(v96);
LABEL_112:
                  ServantStatusVoiceListViewItem__SetLimitCount(
                    (ServantStatusVoiceListViewItem_o *)current,
                    v57,
                    svtId,
                    v39,
                    *v46,
                    v58,
                    v59);
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v242,
                    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
                  goto LABEL_108;
                }
LABEL_88:
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v242,
                  (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
              }
            }
          }
          voiceLabelSpec = 0;
LABEL_90:
          AnyTransformServant = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
          if ( i >= v42[6] )
            goto LABEL_240;
          if ( !*v46 )
            goto LABEL_239;
          v74 = (*v46)->fields.voiceEntity;
          if ( !v74 )
            goto LABEL_239;
          v75 = (int)AnyTransformServant;
          v76 = v74->fields.id;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v10, v73);
          v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(v76, 0);
          AnyTransformServant = v236;
          if ( !v236 )
            goto LABEL_239;
          AnyTransformServant = (void *)VoicePlayCondMaster__isVoiceCond(v236, v75, v77, 81, 0);
          if ( !voiceEntity )
            goto LABEL_239;
          v78 = voiceEntity->fields.condType;
          v79 = v78 == 7 || v78 == 18 || v78 == 54 && ((unsigned __int8)AnyTransformServant & 1) != 0;
          itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          if ( !itemList )
            goto LABEL_239;
          v81 = itemList->fields._size;
          AnyTransformServant = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
          if ( i >= v42[6] )
            goto LABEL_240;
          v82 = *v46;
          v83 = firstPriority;
          v84 = (ServantStatusVoiceListViewItem_o *)sub_2213CCC(ServantStatusVoiceListViewItem_TypeInfo);
          ServantStatusVoiceListViewItem___ctor(v84, v81, v85, svtId, v39, v82, v83, v79, voiceLabelSpec, v224);
          v92 = itemList->fields._items;
          v93 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++itemList->fields._version;
          if ( !v92 )
            goto LABEL_239;
          v94 = itemList->fields._size;
          if ( (unsigned int)v94 >= LODWORD(v92->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              itemList,
              (Il2CppObject *)v84,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
          }
          else
          {
            v95 = &v92->obj.klass + v94;
            itemList->fields._size = v94 + 1;
            v95[4] = (Il2CppClass *)v84;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v95 + 4), (int32_t)v84, v86, v87, v88, v89, v90, v91);
          }
          this = v238;
LABEL_108:
          v41 = v42[6];
        }
      }
      v97 = firstPriority;
      v98 = ++firstPriority;
      v101 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      v102 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v99, v100);
        v102 = BalanceConfig_TypeInfo;
      }
      ServantIdJekyll = v102->static_fields->ServantIdJekyll;
      AnyTransformServant = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      v106 = BalanceConfig_TypeInfo;
      v107 = (int)AnyTransformServant;
      v108 = *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1);
      if ( v101 == ServantIdJekyll )
        break;
      if ( !v108 )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v104, v105);
        v106 = BalanceConfig_TypeInfo;
      }
      static_fields = v106->static_fields;
      if ( v107 == static_fields->ServantIdMashu1 )
      {
        if ( !*(&v106->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v106, v104, v105);
          static_fields = BalanceConfig_TypeInfo->static_fields;
        }
        if ( v39 != static_fields->SpecialLimitCountPLD )
        {
          if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v104, v105);
          if ( TutorialFlag__Get_47388504(115, 0) )
          {
            v135 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
            v136 = BalanceConfig_TypeInfo;
            if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v133, v134);
              v136 = BalanceConfig_TypeInfo;
            }
            v233 = v97;
            AnyTransformServant = VoiceMaster__getEnableInfo(
                                    v234,
                                    v135,
                                    v136->static_fields->ServantIdMashu2,
                                    v39,
                                    0,
                                    0,
                                    0,
                                    0);
            if ( !AnyTransformServant )
              goto LABEL_239;
            v137 = (unsigned int *)AnyTransformServant;
            if ( *((int *)AnyTransformServant + 6) >= 1 )
            {
              v138 = 0;
              v139 = (char *)AnyTransformServant + 32;
              while ( 1 )
              {
                v140 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                if ( !v140 )
                  goto LABEL_239;
                v141 = v140->fields._size;
                ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                AnyTransformServant = BalanceConfig_TypeInfo;
                if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v142, v143);
                if ( v138 >= v137[6] )
                  break;
                v144 = *(VoiceInfo_o **)&v139[8 * v138];
                ServantIdMashu2 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu2;
                v146 = (ServantStatusVoiceListViewItem_o *)sub_2213CCC(ServantStatusVoiceListViewItem_TypeInfo);
                ServantStatusVoiceListViewItem___ctor(v146, v141, v147, ServantIdMashu2, v39, v144, v98, 0, 0, v224);
                v154 = v140->fields._items;
                v155 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++v140->fields._version;
                if ( !v154 )
                  goto LABEL_239;
                v156 = v140->fields._size;
                if ( (unsigned int)v156 >= LODWORD(v154->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v140,
                    (Il2CppObject *)v146,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v155[4] + 192LL) + 112LL));
                }
                else
                {
                  v157 = &v154->obj.klass + v156;
                  v140->fields._size = v156 + 1;
                  v157[4] = (Il2CppClass *)v146;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)(v157 + 4),
                    (int32_t)v146,
                    v148,
                    v149,
                    v150,
                    v151,
                    v152,
                    v153);
                }
                ++v138;
                this = v238;
                if ( (__int64)v138 >= (int)v137[6] )
                  goto LABEL_162;
              }
LABEL_240:
              sub_2213CE4(AnyTransformServant);
            }
LABEL_162:
            v98 = v233 + 2;
            firstPriority = v233 + 2;
          }
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v132);
          if ( !byte_5969EF2 )
          {
            sub_2213A60(&NetworkManager_TypeInfo);
            byte_5969EF2 = 1;
          }
          v158 = NetworkManager_TypeInfo;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v132);
            v158 = NetworkManager_TypeInfo;
          }
          v159 = BalanceConfig_TypeInfo;
          userIdNumber = v158->static_fields->userIdNumber;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10, v132);
            v159 = BalanceConfig_TypeInfo;
          }
          v161 = v159->static_fields;
          MashuTdGradeUpQuestId = v161->MashuTdGradeUpQuestId;
          MashuTdGradeUpQuestPhase = v161->MashuTdGradeUpQuestPhase;
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v10, v132);
          AnyTransformServant = (void *)CondType__IsQuestPhaseClear(
                                          userIdNumber,
                                          MashuTdGradeUpQuestId,
                                          MashuTdGradeUpQuestPhase,
                                          -1,
                                          0,
                                          0);
          this = v238;
          if ( ((unsigned __int8)AnyTransformServant & 1) != 0 )
          {
            if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10, v164);
            AnyTransformServant = v228;
            if ( !v228 )
              goto LABEL_239;
            AnyTransformServant = (void *)ServantLimitAddMaster__TryGetEntity(
                                            v228,
                                            &entity,
                                            BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                            v39,
                                            0);
            if ( ((unsigned __int8)AnyTransformServant & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_239;
              svtVoiceId = entity->fields.svtVoiceId;
              AnyTransformServant = BalanceConfig_TypeInfo;
              if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10, v165);
                AnyTransformServant = BalanceConfig_TypeInfo;
              }
              if ( svtVoiceId != *(_DWORD *)(*((_QWORD *)AnyTransformServant + 23) + 372LL) )
              {
                v169 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                v170 = BalanceConfig_TypeInfo;
                if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v167, v168);
                  v170 = BalanceConfig_TypeInfo;
                }
                AnyTransformServant = VoiceMaster__getEnableInfo(
                                        v234,
                                        v169,
                                        v170->static_fields->ServantIdMashu3,
                                        v39,
                                        0,
                                        0,
                                        0,
                                        0);
                if ( !AnyTransformServant )
                  goto LABEL_239;
                v171 = (unsigned int *)AnyTransformServant;
                if ( *((int *)AnyTransformServant + 6) >= 1 )
                {
                  v172 = 0;
                  v173 = (char *)AnyTransformServant + 32;
                  do
                  {
                    v174 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                    if ( !v174 )
                      goto LABEL_239;
                    v175 = v174->fields._size;
                    ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                    AnyTransformServant = BalanceConfig_TypeInfo;
                    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v176, v177);
                    if ( v172 >= v171[6] )
                      goto LABEL_240;
                    v178 = *(VoiceInfo_o **)&v173[8 * v172];
                    ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
                    v180 = (ServantStatusVoiceListViewItem_o *)sub_2213CCC(ServantStatusVoiceListViewItem_TypeInfo);
                    ServantStatusVoiceListViewItem___ctor(v180, v175, v181, ServantIdMashu3, v39, v178, v98, 0, 0, v224);
                    v188 = v174->fields._items;
                    v189 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                    ++v174->fields._version;
                    if ( !v188 )
                      goto LABEL_239;
                    v190 = v174->fields._size;
                    if ( (unsigned int)v190 >= LODWORD(v188->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v174,
                        (Il2CppObject *)v180,
                        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v189[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v191 = &v188->obj.klass + v190;
                      v174->fields._size = v190 + 1;
                      v191[4] = (Il2CppClass *)v180;
                      sub_2213A04(
                        (MissionNaviTransitionBoardItem_o *)(v191 + 4),
                        (int32_t)v180,
                        v182,
                        v183,
                        v184,
                        v185,
                        v186,
                        v187);
                    }
                    ++v172;
                    this = v238;
                  }
                  while ( (__int64)v172 < (int)v171[6] );
                }
                v130 = v98 + 1;
                goto LABEL_138;
              }
            }
          }
        }
      }
LABEL_182:
      v21 = v230;
      VoiceLimitCountList = v231;
      Master_object = (Il2CppObject *)v234;
      LODWORD(v37) = v231->max_length;
      v38 = v235 + 1;
      if ( (__int64)(v235 + 1) >= (int)v37 )
        goto LABEL_199;
    }
    if ( !v108 )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v104, v105);
      v106 = BalanceConfig_TypeInfo;
    }
    AnyTransformServant = VoiceMaster__getEnableInfo(v234, v107, v106->static_fields->ServantIdHyde, v39, 0, 0, 0, 0);
    if ( !AnyTransformServant )
      goto LABEL_239;
    v109 = (unsigned int *)AnyTransformServant;
    v232 = v97;
    if ( *((int *)AnyTransformServant + 6) >= 1 )
    {
      v110 = 0;
      v111 = (char *)AnyTransformServant + 32;
      do
      {
        v112 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !v112 )
          goto LABEL_239;
        v113 = v112->fields._size;
        ServantStatusListViewItem__get_SvtId(mainInfo, 0);
        AnyTransformServant = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v114, v115);
        if ( v110 >= v109[6] )
          goto LABEL_240;
        v116 = *(VoiceInfo_o **)&v111[8 * v110];
        ServantIdHyde = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
        v118 = (ServantStatusVoiceListViewItem_o *)sub_2213CCC(ServantStatusVoiceListViewItem_TypeInfo);
        ServantStatusVoiceListViewItem___ctor(v118, v113, v119, ServantIdHyde, v39, v116, v98, 0, 0, v224);
        v126 = v112->fields._items;
        v127 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v112->fields._version;
        if ( !v126 )
          goto LABEL_239;
        v128 = v112->fields._size;
        if ( (unsigned int)v128 >= LODWORD(v126->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v112,
            (Il2CppObject *)v118,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
        }
        else
        {
          v129 = &v126->obj.klass + v128;
          v112->fields._size = v128 + 1;
          v129[4] = (Il2CppClass *)v118;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v129 + 4), (int32_t)v118, v120, v121, v122, v123, v124, v125);
        }
        ++v110;
        this = v238;
      }
      while ( (__int64)v110 < (int)v109[6] );
    }
    v130 = v232 + 2;
LABEL_138:
    firstPriority = v130;
    goto LABEL_182;
  }
LABEL_200:
  v195 = this->fields.itemList;
  if ( !v195 )
    goto LABEL_239;
  v196 = v195->fields._size;
  v197 = sub_2213CCC(System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v197,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
  if ( v196 - 1 >= 1 )
  {
    for ( j = 0; j != v196 - 1; ++j )
    {
      AnyTransformServant = v238->fields.itemList;
      if ( !AnyTransformServant )
        goto LABEL_239;
      AnyTransformServant = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)AnyTransformServant,
                              j,
                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !AnyTransformServant )
        goto LABEL_239;
      v200 = (ServantStatusVoiceListViewItem_o *)AnyTransformServant;
      v201 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)AnyTransformServant + 304LL) < (unsigned int)v201
        || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)AnyTransformServant + 200LL) + 8 * v201 - 8) != ServantStatusVoiceListViewItem_TypeInfo )
      {
        goto LABEL_239;
      }
      if ( ServantStatusVoiceListViewItem__get_OpenName((ServantStatusVoiceListViewItem_o *)AnyTransformServant, v10) )
      {
        AnyTransformServant = (void *)ServantStatusVoiceListViewItem__get_DispNum(v200, v10);
        if ( !(_DWORD)AnyTransformServant )
        {
          if ( !v197 )
            goto LABEL_239;
          v198 = (System_String_o *)*(unsigned int *)(v197 + 24);
          v202 = *(_DWORD *)(v197 + 28) + 1;
          *(_DWORD *)(v197 + 24) = 0;
          *(_DWORD *)(v197 + 28) = v202;
          if ( (int)v198 >= 1 )
            System_Array__Clear(*(System_Array_o **)(v197 + 16), 0, (int32_t)v198, 0);
          v203 = j + 1;
          if ( j + 1 < v196 )
          {
            do
            {
              AnyTransformServant = v238->fields.itemList;
              if ( !AnyTransformServant )
                goto LABEL_239;
              AnyTransformServant = System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)AnyTransformServant,
                                      v203,
                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !AnyTransformServant )
                goto LABEL_239;
              v204 = (Il2CppObject *)AnyTransformServant;
              v205 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
              if ( *(unsigned __int8 *)(*(_QWORD *)AnyTransformServant + 304LL) < (unsigned int)v205
                || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)AnyTransformServant + 200LL)
                                                        + 8 * v205
                                                        - 8) != ServantStatusVoiceListViewItem_TypeInfo )
              {
                goto LABEL_239;
              }
              OpenName = ServantStatusVoiceListViewItem__get_OpenName(
                           (ServantStatusVoiceListViewItem_o *)AnyTransformServant,
                           v10);
              v208 = ServantStatusVoiceListViewItem__get_OpenName(v200, v207);
              AnyTransformServant = (void *)System_String__op_Equality(OpenName, v208, 0);
              if ( ((unsigned __int8)AnyTransformServant & 1) != 0 )
              {
                v214 = *(_QWORD *)(v197 + 16);
                v215 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__;
                ++*(_DWORD *)(v197 + 28);
                if ( !v214 )
                  goto LABEL_239;
                v216 = *(int *)(v197 + 24);
                if ( (unsigned int)v216 >= *(_DWORD *)(v214 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)v197,
                    v204,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v215[4] + 192LL) + 112LL));
                }
                else
                {
                  v217 = v214 + 8 * v216;
                  *(_DWORD *)(v197 + 24) = v216 + 1;
                  *(_QWORD *)(v217 + 32) = v204;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)(v217 + 32),
                    (int32_t)v204,
                    v198,
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
            ServantStatusVoiceListViewItem__SetNameNum(v200, 1, (const MethodInfo *)v198);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v239,
              (System_Collections_Generic_List_object__o *)v197,
              (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
            v218 = 2;
            v240 = v239;
            v239.fields._list = 0;
            *(_QWORD *)&v239.fields._index = &v240;
            while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v240,
                      (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__) )
            {
              if ( !v240.fields._current
                || (v221 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment,
                    v240.fields._current->klass->_2.naturalAligment < (unsigned int)v221)
                || (ServantStatusVoiceListViewItem_c *)v240.fields._current->klass->_2.typeHierarchy[v221 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                sub_2213CDC(v240.fields._current, v219);
              }
              ServantStatusVoiceListViewItem__SetNameNum(
                (ServantStatusVoiceListViewItem_o *)v240.fields._current,
                v218++,
                v220);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v240,
              (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
          }
        }
      }
    }
  }
  explanationLabel = v238->fields.explanationLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v198);
  AnyTransformServant = LocalizationManager__Get((System_String_o *)StringLiteral_12516/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, 0);
  if ( !explanationLabel )
    goto LABEL_239;
  UILabel__set_text(explanationLabel, (System_String_o *)AnyTransformServant, 0);
  emptyMessageLabel = v238->fields.emptyMessageLabel;
  AnyTransformServant = LocalizationManager__Get(key, 0);
  if ( !emptyMessageLabel )
    goto LABEL_239;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)AnyTransformServant, 0);
  ListViewManager__SortItem((ListViewManager_o *)v238, -1, 0, 3, 0);
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

  if ( (byte_596DFC7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&ServantStatusVoiceListViewItem_TypeInfo);
    byte_596DFC7 = 1;
  }
  result = (ServantStatusVoiceListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantStatusVoiceListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_596DFC5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    byte_596DFC5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)ServantVoiceMaster__getEntity_49837844(
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
    sub_2213CE4(Instance);
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
        Instance = (DataManager_o *)System_String__Concat_75694928(v14, (System_String_o *)StringLiteral_16746/*"_"*/, v15, 0),
        (v16 = *(_QWORD *)(v12 + 32)) == 0) )
  {
LABEL_25:
    sub_2213CDC(Instance, v9);
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
  __int64 v8; // x2
  Il2CppObject *MasterData_object; // x21
  __int64 v10; // x2
  struct ServantVoiceCond_array *servantVoiceConds; // x22
  int max_length; // w8
  DataManager_o *v13; // x19
  unsigned int v14; // w23
  bool v15; // w25
  ServantVoiceCond_o *v16; // x8
  int32_t condType; // w9
  int value; // w26
  __int64 v19; // x20
  __int64 v20; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_596DFC6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596DFC6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
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
    v13 = Instance;
    v14 = 0;
    v15 = 1;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_2213CE4(Instance);
      v16 = servantVoiceConds->m_Items[v14];
      if ( !v16 )
        break;
      condType = v16->fields.condType;
      if ( condType == 20 || condType == 3 )
        v15 = 0;
      value = v16->fields.value;
      if ( condType == 3 || condType == 20 )
      {
        if ( !v13 )
          break;
        v19 = *(_QWORD *)&v13->fields.isFailedLoad;
        v20 = *(__int64 *)((char *)&v13->fields.masterLoadThreads + 4);
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v10);
        *(_QWORD *)&v22.fields.currentCryptoKey = v19;
        *(_QWORD *)&v22.fields.fakeValue = v20;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v22, 0);
        if ( (int)Instance >= value )
          v15 = 1;
      }
      max_length = servantVoiceConds->max_length;
      if ( (int)++v14 >= max_length )
        return v15;
    }
LABEL_31:
    sub_2213CDC(Instance, v7);
  }
  return 1;
}


void ServantStatusVoiceListViewManager__OnClickListView(
        ServantStatusVoiceListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ServantStatusVoiceListViewManager_o *v9; // x20
  struct ListViewItem_o *linkItem; // x21
  __int64 naturalAligment; // x10
  struct ServantStatusVoiceListViewManager_CallbackFunc_o *callbackFunc; // x22
  int v13; // w20
  __int64 Index; // x2
  __int64 v15; // x1

  v9 = this;
  if ( (byte_596DFCD & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_2213A60(&ServantStatusVoiceListViewItem_TypeInfo);
    byte_596DFCD = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0
    || (naturalAligment = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewItem_TypeInfo )
  {
    sub_2213CDC(this, obj);
  }
  if ( LOBYTE(linkItem[1].fields.sortValue1B) )
  {
    callbackFunc = v9->fields.callbackFunc;
    v9->fields.callbackFunc = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v9->fields.callbackFunc,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( callbackFunc )
    {
      v13 = BYTE1(linkItem[1].fields.sortValue1B);
      Index = (unsigned int)ListViewObject__get_Index(obj, 0);
      if ( v13 )
        v15 = 2;
      else
        v15 = 1;
      ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
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
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct UIScrollView_o *v16; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_596DFCC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DFCC = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v16 = this->fields.scrollView;
        if ( !v16 )
          sub_2213CDC(0, v9);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v16->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v16,
          1,
          v16->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v10, v11, v12, v13, v14, v15);
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
  const MethodInfo_448473C *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596DFCA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_2213A60(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596DFCA = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v13, v14);
      ServantStatusVoiceListViewObject__Init_44654472(
        (ServantStatusVoiceListViewObject_o *)current,
        mode,
        v12,
        delay,
        v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusVoiceListViewManager__RequestListObject_44653980(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596DFCB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_2213A60(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596DFCB = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v11, v12);
      ServantStatusVoiceListViewObject__Init_44655068((ServantStatusVoiceListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


void ServantStatusVoiceListViewManager__SetMode(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        ServantStatusVoiceListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x3

  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusVoiceListViewManager__SetMode_44653016(this, mode, -1, v10);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusVoiceListViewManager__SetMode_44653016(
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
  System_String_o *v23; // x1
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596DFC9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
    sub_2213A60(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_2213A60(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596DFC9 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( mode == 2 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_29;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      itemList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v24,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v8 )
        break;
      if ( !v24.fields._current )
        sub_2213CDC(v8, v9);
      naturalAligment = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
      if ( v24.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (ServantStatusVoiceListViewItem_c *)v24.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        sub_2213CDC(v8, v9);
      }
      *((_BYTE *)&v24.fields._current->klass + (unsigned __int64)&qword_B8 + 1) = *(_DWORD *)((char *)&v24.fields._current->klass
                                                                                            + (unsigned __int64)&dword_14) == select;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v24,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(this, v13);
    if ( !itemList )
      goto LABEL_29;
    v14 = itemList;
    if ( itemList->fields._size >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v14,
                                                                  v15,
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
        if ( !itemList )
          break;
        ServantStatusVoiceListViewObject__Init_44652888((ServantStatusVoiceListViewObject_o *)itemList, 4, v16);
        if ( ++v15 >= v14->fields._size )
          return;
      }
      goto LABEL_29;
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
        goto LABEL_29;
      size = itemList->fields._size;
      v18 = itemList;
      if ( size >= 1 )
      {
        v19 = 0;
        this->fields.callbackCount = size;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v18,
                   v19,
                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
          v21 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v21, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0);
          if ( !Item )
            break;
          ServantStatusVoiceListViewObject__Init_44654472((ServantStatusVoiceListViewObject_o *)Item, 5, v21, 0.1, v22);
          if ( ++v19 >= v18->fields._size )
            return;
        }
LABEL_29:
        sub_2213CDC(itemList, *(_QWORD *)&mode);
      }
      v23 = (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/;
      this->fields.callbackCount = 1;
      UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v23, 0.2, 0);
    }
    else if ( mode == 1 )
    {
      ServantStatusVoiceListViewManager__RequestListObject_44653980(this, 3, v12);
    }
  }
}


void ServantStatusVoiceListViewManager__SetMode_44653924(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x3

  this->fields.callbackFunc2 = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusVoiceListViewManager__SetMode_44653016(this, mode, -1, v10);
}


void ServantStatusVoiceListViewManager__SetObjectItem(
        ServantStatusVoiceListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_596DFC8 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusVoiceListViewObject_TypeInfo);
    byte_596DFC8 = 1;
  }
  if ( obj
    && (naturalAligment = ServantStatusVoiceListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (ServantStatusVoiceListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == ServantStatusVoiceListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 1 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  ServantStatusVoiceListViewObject__Init_44652888(
    (ServantStatusVoiceListViewObject_o *)v7,
    v8,
    (const MethodInfo *)item);
}


void ServantStatusVoiceListViewManager__add_callbackFunc(
        ServantStatusVoiceListViewManager_o *this,
        ServantStatusVoiceListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusVoiceListViewManager_o *v11; // x0
  ServantStatusVoiceListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596DFBC & 1) == 0 )
  {
    sub_2213A60(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    byte_596DFBC = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (ServantStatusVoiceListViewManager_CallbackFunc_c *)v6->klass != ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, v7, v8);
  ServantStatusVoiceListViewManager__remove_callbackFunc(v11, v12, v13);
}


void ServantStatusVoiceListViewManager__add_callbackFunc2(
        ServantStatusVoiceListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusVoiceListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596DFBE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596DFBE = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  ServantStatusVoiceListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *ServantStatusVoiceListViewManager__get_ClippingObjectList(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596DFC1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DFC1 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v12);
      Item = (ListViewItem_o *)ServantStatusVoiceListViewObject__GetItem(
                                 (ServantStatusVoiceListViewObject_o *)Component_object,
                                 v12);
      if ( !Item )
        sub_2213CDC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50835204((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_2213CDC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_2213CDC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *)v3;
}


System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *ServantStatusVoiceListViewManager__get_ObjectList(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596DFC0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DFC0 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *)v3;
}


void ServantStatusVoiceListViewManager__remove_callbackFunc(
        ServantStatusVoiceListViewManager_o *this,
        ServantStatusVoiceListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusVoiceListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596DFBD & 1) == 0 )
  {
    sub_2213A60(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    byte_596DFBD = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (ServantStatusVoiceListViewManager_CallbackFunc_c *)v6->klass != ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, v7, v8);
  ServantStatusVoiceListViewManager__add_callbackFunc2(v11, v12, v13);
}


void ServantStatusVoiceListViewManager__remove_callbackFunc2(
        ServantStatusVoiceListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusVoiceListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_596DFBF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596DFBF = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  ServantStatusVoiceListViewManager__get_ObjectList(v11, v12);
}


void ServantStatusVoiceListViewManager_CallbackFunc___ctor(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2009400;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20093A8;
}


System_IAsyncResult_o *ServantStatusVoiceListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = kind;
  v11 = result;
  if ( (byte_596DFCE & 1) == 0 )
  {
    sub_2213A60(&ServantStatusVoiceListViewManager_ResultKind_TypeInfo);
    byte_596DFCE = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(ServantStatusVoiceListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return (System_IAsyncResult_o *)sub_2213A14(this, v10, callback, object);
}


void ServantStatusVoiceListViewManager_CallbackFunc__EndInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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