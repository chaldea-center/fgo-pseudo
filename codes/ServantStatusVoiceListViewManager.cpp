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
  int max_length; // w8
  VoiceMaster_o *v9; // x21
  unsigned int v10; // w9
  char v11; // w20
  ServantVoiceRelationEntity_o *v12; // x23
  __int64 v13; // x24
  __int64 v14; // x25
  VoiceInfo_array *v15; // x24
  unsigned __int64 v16; // x22
  System_Collections_Generic_List_object__o *itemList; // x25
  int32_t size; // w27
  __int64 v19; // x26
  __int64 v20; // x28
  VoiceInfo_o *v21; // x29
  int32_t v22; // w28
  int32_t v23; // w20
  ServantStatusVoiceListViewItem_o *v24; // x26
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0
  const MethodInfo *v31; // [xsp+8h] [xbp-98h]
  VoiceMaster_o *v32; // [xsp+18h] [xbp-88h]
  ServantVoiceRelationEntity_array *v33; // [xsp+20h] [xbp-80h]
  int32_t ascendOrder; // [xsp+28h] [xbp-78h]
  unsigned int v35; // [xsp+2Ch] [xbp-74h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4C4069E & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C4069E = 1;
  }
  Instance = (VoiceInfo_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (VoiceInfo_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !relationList )
    goto LABEL_29;
  max_length = relationList->max_length;
  if ( max_length >= 1 )
  {
    v9 = (VoiceMaster_o *)Instance;
    v10 = 0;
    v11 = 1;
    ascendOrder = 0;
    v32 = (VoiceMaster_o *)Instance;
    v33 = relationList;
    while ( 1 )
    {
      if ( v10 >= max_length )
LABEL_30:
        sub_1C372BC(Instance);
      v12 = relationList->m_Items[v10];
      v35 = v10;
      if ( !v12 )
        goto LABEL_29;
      v14 = *(_QWORD *)&v12->fields.relationSvtId.fields.currentCryptoKey;
      v13 = *(_QWORD *)&v12->fields.relationSvtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v38.fields.currentCryptoKey = v14;
      *(_QWORD *)&v38.fields.fakeValue = v13;
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v38, 0);
      if ( !v9 )
        goto LABEL_29;
      Instance = VoiceMaster__getEnableInfo(v9, svtId, (int32_t)Instance, 0, 0, 0, 0, 0);
      v15 = Instance;
      if ( (v11 & 1) == 0 && ascendOrder != v12->fields.ascendOrder )
        ++*firstPriority;
      if ( !Instance )
        goto LABEL_29;
      ascendOrder = v12->fields.ascendOrder;
      if ( SLODWORD(Instance->max_length) >= 1 )
        break;
LABEL_27:
      v9 = v32;
      relationList = v33;
      v11 = 0;
      max_length = v33->max_length;
      v10 = v35 + 1;
      if ( (int)(v35 + 1) >= max_length )
        return;
    }
    v16 = 0;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      v20 = *(_QWORD *)&v12->fields.relationSvtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&v12->fields.relationSvtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v39.fields.currentCryptoKey = v20;
      *(_QWORD *)&v39.fields.fakeValue = v19;
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v39, 0);
      if ( v16 >= LODWORD(v15->max_length) )
        goto LABEL_30;
      v21 = v15->m_Items[v16];
      v22 = (int)Instance;
      v23 = *firstPriority;
      v24 = (ServantStatusVoiceListViewItem_o *)sub_1C372A4(ServantStatusVoiceListViewItem_TypeInfo);
      ServantStatusVoiceListViewItem___ctor(v24, size, svtId, v22, 0, v21, v23, 0, 0, v31);
      items = itemList->fields._items;
      v28 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v29 = itemList->fields._size;
      if ( (unsigned int)v29 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v24,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + v29;
        itemList->fields._size = v29 + 1;
        v30[4] = (Il2CppClass *)v24;
        sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v24, v25, v26);
      }
      if ( (__int64)++v16 >= SLODWORD(v15->max_length) )
        goto LABEL_27;
    }
LABEL_29:
    sub_1C372B4(Instance);
  }
}


void ServantStatusVoiceListViewManager__Awake(ServantStatusVoiceListViewManager_o *this, const MethodInfo *method)
{
  void *scrollView; // x0
  float v4; // s1

  if ( (byte_4C4069D & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4C4069D = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)scrollView,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0 )
  {
    sub_1C372B4(scrollView);
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
  _BOOL4 IsTransformServant_k__BackingField; // w19
  ServantStatusVoiceListViewManager_o *v9; // x20
  UILabel_o *transformNameLabel; // x19
  float transformNameAddHeight; // s0
  struct UIScrollView_o *scrollView; // x8
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v14; // x0
  int64_t userIdNumber; // x19
  Il2CppObject *v16; // x22
  Il2CppObject *v17; // x19
  System_Collections_Generic_List_T__o *v18; // x23
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  System_Int32_array *v22; // x9
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v24; // x10
  Il2CppObject *MasterData_object; // x19
  int32_t maxLimitCount; // w20
  System_Int32_array *VoiceLimitCountList; // x24
  ServantVoiceRelationEntity_array *v28; // x19
  int32_t v29; // w0
  const MethodInfo *v30; // x4
  ServantVoiceRelationEntity_array *v31; // x19
  int32_t v32; // w0
  const MethodInfo *v33; // x4
  il2cpp_array_size_t v34; // x8
  unsigned __int64 v35; // x19
  int32_t v36; // w20
  VoiceInfo_array *EnableInfo; // x24
  System_Collections_Generic_List_object__o *v38; // x27
  int v39; // w8
  unsigned int v40; // w22
  Il2CppClass **v41; // x26
  Il2CppClass *v42; // x8
  VoiceInfo_o **v43; // x26
  Il2CppClass *v44; // t1
  char *name; // x23
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x4
  int v49; // w19
  BalanceConfig_c *v50; // x8
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  int v55; // w8
  const MethodInfo *v56; // x3
  _BOOL8 v57; // x0
  const MethodInfo *v58; // x1
  Il2CppObject *current; // x28
  __int64 naturalAligment; // x10
  _DWORD *monitor; // x8
  __int64 v62; // x0
  int32_t v63; // w5
  const MethodInfo *v64; // x6
  int32_t v65; // w1
  bool voiceLabelSpec; // w21
  _BOOL8 v67; // x0
  const MethodInfo *v68; // x1
  __int64 v69; // x10
  _DWORD *v70; // x8
  __int64 v71; // x0
  struct VoiceEntity_o *voiceEntity; // x8
  int32_t v73; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x19
  System_String_o *v75; // x2
  struct VoiceEntity_o *v76; // x8
  int32_t v77; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v78; // x19
  System_String_o *v79; // x2
  int v80; // w8
  bool v81; // w25
  System_Collections_Generic_List_object__o *v82; // x23
  int32_t v83; // w28
  VoiceInfo_o *v84; // x29
  int32_t v85; // w26
  int32_t v86; // w19
  ServantStatusVoiceListViewItem_o *v87; // x20
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  struct System_Object_array *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  Il2CppClass **v93; // x0
  __int64 v94; // x0
  int32_t v95; // w22
  int32_t v96; // w21
  int32_t v97; // w19
  BalanceConfig_c *v98; // x8
  Il2CppObject *v99; // x20
  NetworkManager_c *v100; // x0
  int64_t v101; // x19
  UserServantCollectionEntity_o *v102; // x23
  _BOOL8 v103; // x0
  int32_t v104; // w20
  BalanceConfig_c *v105; // x0
  VoiceInfo_array *v106; // x0
  VoiceInfo_array *v107; // x23
  unsigned __int64 v108; // x26
  VoiceInfo_o **m_Items; // x29
  System_Collections_Generic_List_object__o *itemList; // x27
  int32_t v111; // w28
  int32_t v112; // w20
  BalanceConfig_c *v113; // x0
  VoiceInfo_o *v114; // x24
  int32_t ServantIdHyde; // w19
  ServantStatusVoiceListViewItem_o *v116; // x25
  __int64 v117; // x0
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  struct System_Object_array *v120; // x8
  _QWORD *v121; // x9
  __int64 v122; // x10
  Il2CppClass **v123; // x0
  int v124; // w19
  BalanceConfig_c *v125; // x8
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t v127; // w19
  BalanceConfig_c *v128; // x8
  int32_t v129; // w29
  _QWORD *v130; // x23
  unsigned __int64 v131; // x21
  System_Collections_Generic_List_object__o *v132; // x27
  int32_t v133; // w25
  int32_t v134; // w28
  VoiceInfo_o *v135; // x19
  int32_t ServantIdMashu2; // w24
  ServantStatusVoiceListViewItem_o *v137; // x20
  int32_t v138; // w2
  const MethodInfo *v139; // x3
  struct System_Object_array *v140; // x8
  _QWORD *v141; // x9
  __int64 v142; // x10
  Il2CppClass **v143; // x0
  NetworkManager_c *v144; // x0
  BalanceConfig_c *v145; // x8
  int64_t v146; // x20
  struct BalanceConfig_StaticFields *v147; // x8
  int32_t MashuTdGradeUpQuestId; // w19
  int32_t MashuTdGradeUpQuestPhase; // w23
  int32_t svtVoiceId; // w19
  int32_t v151; // w19
  int32_t v152; // w26
  BalanceConfig_c *v153; // x8
  _QWORD *v154; // x23
  unsigned __int64 v155; // x21
  System_Collections_Generic_List_object__o *v156; // x27
  int32_t v157; // w25
  int32_t v158; // w28
  VoiceInfo_o *v159; // x19
  int32_t ServantIdMashu3; // w24
  ServantStatusVoiceListViewItem_o *v161; // x20
  int32_t v162; // w2
  const MethodInfo *v163; // x3
  struct System_Object_array *v164; // x8
  _QWORD *v165; // x9
  __int64 v166; // x10
  Il2CppClass **v167; // x0
  ServantVoiceRelationEntity_array *v168; // x19
  int32_t v169; // w0
  const MethodInfo *v170; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v171; // x8
  int32_t v172; // w25
  __int64 v173; // x20
  int32_t i; // w21
  const MethodInfo *v175; // x1
  ServantStatusVoiceListViewItem_o *v176; // x22
  __int64 v177; // x10
  const MethodInfo *v178; // x1
  const MethodInfo *v179; // x2
  int v180; // w8
  int32_t v181; // w23
  const MethodInfo *v182; // x1
  Il2CppObject *v183; // x24
  __int64 v184; // x10
  System_String_o *OpenName; // x19
  const MethodInfo *v186; // x1
  System_String_o *v187; // x0
  const MethodInfo *v188; // x3
  __int64 v189; // x8
  _QWORD *v190; // x9
  __int64 v191; // x10
  __int64 v192; // x0
  int32_t v193; // w22
  _BOOL8 v194; // x0
  const MethodInfo *v195; // x2
  __int64 v196; // x11
  UILabel_o *explanationLabel; // x20
  UILabel_o *emptyMessageLabel; // x19
  const MethodInfo *v199; // [xsp+8h] [xbp-188h]
  System_String_o *v200; // [xsp+20h] [xbp-170h]
  UserServantCollectionEntity_o *EntityDefinitely; // [xsp+28h] [xbp-168h]
  ServantLimitAddMaster_o *v203; // [xsp+38h] [xbp-158h]
  unsigned __int64 v204; // [xsp+40h] [xbp-150h]
  System_Collections_Generic_List_T__o *v205; // [xsp+48h] [xbp-148h]
  System_Int32_array *v206; // [xsp+50h] [xbp-140h]
  VoiceMaster_o *v207; // [xsp+58h] [xbp-138h]
  unsigned __int64 v208; // [xsp+60h] [xbp-130h]
  VoicePlayCondMaster_o *v209; // [xsp+68h] [xbp-128h]
  int32_t svtId; // [xsp+78h] [xbp-118h]
  int limitCount; // [xsp+7Ch] [xbp-114h]
  System_Collections_Generic_List_Enumerator_object__o v214; // [xsp+88h] [xbp-108h] BYREF
  System_Collections_Generic_List_Enumerator_object__o j; // [xsp+A0h] [xbp-F0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+B8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v217; // [xsp+C0h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v218; // [xsp+E0h] [xbp-B0h] BYREF
  ServantVoiceRelationEntity_array *afterRelationList; // [xsp+100h] [xbp-90h] BYREF
  ServantVoiceRelationEntity_array *sameRelationList; // [xsp+108h] [xbp-88h] BYREF
  ServantVoiceRelationEntity_array *beforeRelationList; // [xsp+110h] [xbp-80h] BYREF
  int32_t firstPriority; // [xsp+11Ch] [xbp-74h] BYREF
  UnityEngine_Vector4_o v223; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C4069F & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_VoiceMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_CondType_Kind__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_VoiceEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_VoiceEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_VoiceEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_CondType_Kind___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_VoiceEntity__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_CondType_Kind__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C37058(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&TutorialFlag_TypeInfo);
    sub_1C37058(&StringLiteral_15245/*"VOICE_EMPTY_MESSAGE"*/);
    sub_1C37058(&StringLiteral_12001/*"SERVANT_STATUS_VOICE_EXPLANATION"*/);
    byte_4C4069F = 1;
  }
  v4 = StringLiteral_15245/*"VOICE_EMPTY_MESSAGE"*/;
  firstPriority = 0;
  sameRelationList = 0;
  beforeRelationList = 0;
  afterRelationList = 0;
  memset(&v218, 0, sizeof(v218));
  memset(&v217, 0, sizeof(v217));
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
    v9 = this;
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
    v9 = this;
  }
  scrollView = v9->fields.scrollView;
  if ( !scrollView )
    goto LABEL_272;
  transformNameSprite = scrollView->fields.mPanel;
  if ( !transformNameSprite )
    goto LABEL_272;
  v223.fields.x = *((float *)transformNameSprite + 74);
  v223.fields.z = *((float *)transformNameSprite + 76);
  v223.fields.y = defaultPanelCenter;
  v223.fields.w = defaultPanelHeight;
  UIPanel__set_baseClipRegion((UIPanel_o *)transformNameSprite, v223, 0);
  transformNameSprite = this->fields.scrollView;
  if ( !transformNameSprite )
    goto LABEL_272;
  UIScrollView__ResetPosition((UIScrollView_o *)transformNameSprite, 0);
  this->fields.execObjectExtraFlag = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  v14 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v14 = NetworkManager_TypeInfo;
  }
  v200 = (System_String_o *)v4;
  userIdNumber = v14->static_fields->userIdNumber;
  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
  if ( !Master_object )
    goto LABEL_272;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       userIdNumber,
                       (int32_t)transformNameSprite,
                       0);
  v16 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_VoiceMaster___);
  v209 = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v17 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  firstPriority = 0;
  v18 = (System_Collections_Generic_List_T__o *)sub_1C372A4(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v18,
    (const MethodInfo_3787FD8 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v18 )
    goto LABEL_272;
  items = v18->fields._items;
  v20 = Method_System_Collections_Generic_List_CondType_Kind__Add__;
  ++v18->fields._version;
  if ( !items )
    goto LABEL_272;
  size = v18->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v18,
      81,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v18->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  v22 = changeSvtVoiceIdList;
  v203 = (ServantLimitAddMaster_o *)v17;
  if ( !changeSvtVoiceIdList )
LABEL_272:
    sub_1C372B4(transformNameSprite);
  max_length = changeSvtVoiceIdList->max_length;
  if ( (int)max_length >= 1 )
  {
    v24 = 0;
    v207 = (VoiceMaster_o *)v16;
    v205 = v18;
    while ( 1 )
    {
      if ( v24 >= (unsigned int)max_length )
        goto LABEL_273;
      v204 = v24;
      svtId = v22->m_Items[v24];
      transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_272;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)transformNameSprite,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
      transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_272;
      transformNameSprite = DataManager__GetMasterData_object_(
                              (DataManager_o *)transformNameSprite,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !transformNameSprite )
        goto LABEL_272;
      ServantVoiceRelationMaster__GetRelationList_42823828(
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
        goto LABEL_272;
      v34 = VoiceLimitCountList->max_length;
      if ( (int)v34 >= 1 )
        break;
LABEL_232:
      v168 = afterRelationList;
      v169 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v168, v169, v170);
      v22 = changeSvtVoiceIdList;
      LODWORD(max_length) = changeSvtVoiceIdList->max_length;
      v24 = v204 + 1;
      if ( (__int64)(v204 + 1) >= (int)max_length )
        goto LABEL_233;
    }
    v35 = 0;
    v206 = VoiceLimitCountList;
    while ( 1 )
    {
      if ( v35 >= (unsigned int)v34 )
        goto LABEL_273;
      v36 = VoiceLimitCountList->m_Items[v35];
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      if ( !v16 )
        goto LABEL_272;
      v208 = v35;
      limitCount = v36;
      EnableInfo = VoiceMaster__getEnableInfo(
                     (VoiceMaster_o *)v16,
                     (int32_t)transformNameSprite,
                     svtId,
                     v36,
                     (System_Collections_Generic_List_CondType_Kind__o *)v18,
                     0,
                     0,
                     0);
      v38 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_VoiceEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v38,
        (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_VoiceEntity___ctor__);
      if ( !EnableInfo )
        goto LABEL_272;
      v39 = EnableInfo->max_length;
      if ( v39 >= 1 )
        break;
LABEL_133:
      v95 = firstPriority;
      v96 = ++firstPriority;
      v97 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      v98 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v98 = BalanceConfig_TypeInfo;
      }
      if ( v97 == v98->static_fields->ServantIdJekyll )
      {
        transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transformNameSprite )
          goto LABEL_272;
        v99 = DataManager__GetMasterData_object_(
                (DataManager_o *)transformNameSprite,
                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C3CD62 )
        {
          sub_1C37058(&NetworkManager_TypeInfo);
          byte_4C3CD62 = 1;
        }
        v100 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v100 = NetworkManager_TypeInfo;
        }
        v101 = v100->static_fields->userIdNumber;
        transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
        if ( !v99 )
          goto LABEL_272;
        v102 = UserServantCollectionMaster__GetEntityDefinitely(
                 (UserServantCollectionMaster_o *)v99,
                 v101,
                 (int32_t)transformNameSprite,
                 0);
        transformNameSprite = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v38, 0);
        if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
        {
          if ( !v38 )
            goto LABEL_272;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v214,
            v38,
            (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_VoiceEntity__GetEnumerator__);
          v217 = v214;
          while ( 1 )
          {
            v103 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v217,
                     (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_VoiceEntity__MoveNext__);
            if ( !v103 )
              break;
            if ( !v217.fields._current )
              sub_1C372B4(v103);
            if ( !v102 )
              sub_1C372B4(v103);
            if ( UserServantCollectionEntity__IsPlayed(v102, HIDWORD(v217.fields._current[3].klass), 0) )
            {
              v104 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
              v105 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v105 = BalanceConfig_TypeInfo;
              }
              v106 = VoiceMaster__getEnableInfo(v207, v104, v105->static_fields->ServantIdHyde, limitCount, 0, 0, 0, 0);
              v107 = v106;
              if ( !v106 )
                sub_1C372B4(0);
              if ( SLODWORD(v106->max_length) >= 1 )
              {
                v108 = 0;
                m_Items = v106->m_Items;
                do
                {
                  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  if ( !itemList )
                    sub_1C372B4(v106);
                  v111 = itemList->fields._size;
                  v112 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                  v113 = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v113 = BalanceConfig_TypeInfo;
                  }
                  if ( v108 >= LODWORD(v107->max_length) )
                    sub_1C372BC(v113);
                  v114 = m_Items[v108];
                  ServantIdHyde = v113->static_fields->ServantIdHyde;
                  v116 = (ServantStatusVoiceListViewItem_o *)sub_1C372A4(ServantStatusVoiceListViewItem_TypeInfo);
                  ServantStatusVoiceListViewItem___ctor(
                    v116,
                    v111,
                    v112,
                    ServantIdHyde,
                    limitCount,
                    v114,
                    v96,
                    0,
                    0,
                    v199);
                  v120 = itemList->fields._items;
                  v121 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++itemList->fields._version;
                  if ( !v120 )
                    sub_1C372B4(v117);
                  v122 = itemList->fields._size;
                  if ( (unsigned int)v122 >= LODWORD(v120->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      itemList,
                      (Il2CppObject *)v116,
                      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v123 = &v120->obj.klass + v122;
                    itemList->fields._size = v122 + 1;
                    v123[4] = (Il2CppClass *)v116;
                    sub_1C36FFC((CGThumbnailListItem_o *)(v123 + 4), (int32_t)v116, v118, v119);
                  }
                  ++v108;
                }
                while ( (__int64)v108 < SLODWORD(v107->max_length) );
              }
              firstPriority = v95 + 2;
              break;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v217,
            (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_VoiceEntity__Dispose__);
        }
      }
      else
      {
        transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
        v124 = (int)transformNameSprite;
        v125 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v125 = BalanceConfig_TypeInfo;
        }
        static_fields = v125->static_fields;
        if ( v124 == static_fields->ServantIdMashu1 )
        {
          if ( !v125->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v125);
            static_fields = BalanceConfig_TypeInfo->static_fields;
          }
          if ( limitCount != static_fields->SpecialLimitCountPLD )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_40427704(115, 0) )
            {
              v127 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
              v128 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v128 = BalanceConfig_TypeInfo;
              }
              v129 = v96;
              transformNameSprite = VoiceMaster__getEnableInfo(
                                      v207,
                                      v127,
                                      v128->static_fields->ServantIdMashu2,
                                      limitCount,
                                      0,
                                      0,
                                      0,
                                      0);
              if ( !transformNameSprite )
                goto LABEL_272;
              v130 = transformNameSprite;
              if ( *((int *)transformNameSprite + 6) >= 1 )
              {
                v131 = 0;
                while ( 1 )
                {
                  v132 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  if ( !v132 )
                    goto LABEL_272;
                  v133 = v132->fields._size;
                  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                  v134 = (int)transformNameSprite;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( v131 >= *((unsigned int *)v130 + 6) )
                    break;
                  v135 = (VoiceInfo_o *)v130[v131 + 4];
                  ServantIdMashu2 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu2;
                  v137 = (ServantStatusVoiceListViewItem_o *)sub_1C372A4(ServantStatusVoiceListViewItem_TypeInfo);
                  ServantStatusVoiceListViewItem___ctor(
                    v137,
                    v133,
                    v134,
                    ServantIdMashu2,
                    limitCount,
                    v135,
                    v129,
                    0,
                    0,
                    v199);
                  v140 = v132->fields._items;
                  v141 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++v132->fields._version;
                  if ( !v140 )
                    goto LABEL_272;
                  v142 = v132->fields._size;
                  if ( (unsigned int)v142 >= LODWORD(v140->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v132,
                      (Il2CppObject *)v137,
                      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v143 = &v140->obj.klass + v142;
                    v132->fields._size = v142 + 1;
                    v143[4] = (Il2CppClass *)v137;
                    sub_1C36FFC((CGThumbnailListItem_o *)(v143 + 4), (int32_t)v137, v138, v139);
                  }
                  if ( (__int64)++v131 >= *((int *)v130 + 6) )
                    goto LABEL_196;
                }
LABEL_273:
                sub_1C372BC(transformNameSprite);
              }
LABEL_196:
              v96 = v95 + 2;
              firstPriority = v95 + 2;
            }
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C3CD62 )
            {
              sub_1C37058(&NetworkManager_TypeInfo);
              byte_4C3CD62 = 1;
            }
            v144 = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v144 = NetworkManager_TypeInfo;
            }
            v145 = BalanceConfig_TypeInfo;
            v146 = v144->static_fields->userIdNumber;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v145 = BalanceConfig_TypeInfo;
            }
            v147 = v145->static_fields;
            MashuTdGradeUpQuestId = v147->MashuTdGradeUpQuestId;
            MashuTdGradeUpQuestPhase = v147->MashuTdGradeUpQuestPhase;
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            transformNameSprite = (void *)CondType__IsQuestPhaseClear(
                                            v146,
                                            MashuTdGradeUpQuestId,
                                            MashuTdGradeUpQuestPhase,
                                            -1,
                                            0,
                                            0);
            if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
            {
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              transformNameSprite = v203;
              if ( !v203 )
                goto LABEL_272;
              transformNameSprite = (void *)ServantLimitAddMaster__TryGetEntity(
                                              v203,
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
                  v151 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                  v152 = v96;
                  v153 = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v153 = BalanceConfig_TypeInfo;
                  }
                  transformNameSprite = VoiceMaster__getEnableInfo(
                                          v207,
                                          v151,
                                          v153->static_fields->ServantIdMashu3,
                                          limitCount,
                                          0,
                                          0,
                                          0,
                                          0);
                  if ( !transformNameSprite )
                    goto LABEL_272;
                  v154 = transformNameSprite;
                  if ( *((int *)transformNameSprite + 6) >= 1 )
                  {
                    v155 = 0;
                    do
                    {
                      v156 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                      if ( !v156 )
                        goto LABEL_272;
                      v157 = v156->fields._size;
                      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                      v158 = (int)transformNameSprite;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      if ( v155 >= *((unsigned int *)v154 + 6) )
                        goto LABEL_273;
                      v159 = (VoiceInfo_o *)v154[v155 + 4];
                      ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
                      v161 = (ServantStatusVoiceListViewItem_o *)sub_1C372A4(ServantStatusVoiceListViewItem_TypeInfo);
                      ServantStatusVoiceListViewItem___ctor(
                        v161,
                        v157,
                        v158,
                        ServantIdMashu3,
                        limitCount,
                        v159,
                        v152,
                        0,
                        0,
                        v199);
                      v164 = v156->fields._items;
                      v165 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                      ++v156->fields._version;
                      if ( !v164 )
                        goto LABEL_272;
                      v166 = v156->fields._size;
                      if ( (unsigned int)v166 >= LODWORD(v164->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v156,
                          (Il2CppObject *)v161,
                          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v167 = &v164->obj.klass + v166;
                        v156->fields._size = v166 + 1;
                        v167[4] = (Il2CppClass *)v161;
                        sub_1C36FFC((CGThumbnailListItem_o *)(v167 + 4), (int32_t)v161, v162, v163);
                      }
                    }
                    while ( (__int64)++v155 < *((int *)v154 + 6) );
                  }
                  firstPriority = v152 + 1;
                }
              }
            }
          }
        }
      }
      VoiceLimitCountList = v206;
      v16 = (Il2CppObject *)v207;
      v18 = v205;
      LODWORD(v34) = v206->max_length;
      v35 = v208 + 1;
      if ( (__int64)(v208 + 1) >= (int)v34 )
        goto LABEL_232;
    }
    v40 = 0;
    while ( 1 )
    {
      if ( v40 >= v39 )
        goto LABEL_273;
      v41 = &EnableInfo->obj.klass + (int)v40;
      v44 = v41[4];
      v43 = (VoiceInfo_o **)(v41 + 4);
      v42 = v44;
      if ( !v44 )
        goto LABEL_272;
      name = (char *)v42->_1.name;
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      v49 = (int)transformNameSprite;
      v50 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v50 = BalanceConfig_TypeInfo;
      }
      if ( v49 == v50->static_fields->ServantIdJekyll )
      {
        if ( !name )
          goto LABEL_272;
        if ( *((_DWORD *)name + 7) == 7 )
        {
          if ( !v38 )
            goto LABEL_272;
          v51 = v38->fields._items;
          v52 = Method_System_Collections_Generic_List_VoiceEntity__Add__;
          ++v38->fields._version;
          if ( !v51 )
            goto LABEL_272;
          v53 = v38->fields._size;
          if ( (unsigned int)v53 >= LODWORD(v51->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)name,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
          }
          else
          {
            v54 = &v51->obj.klass + v53;
            v38->fields._size = v53 + 1;
            v54[4] = (Il2CppClass *)name;
            sub_1C36FFC((CGThumbnailListItem_o *)(v54 + 4), (int32_t)name, v46, v47);
          }
        }
      }
      if ( limitCount <= 10 )
      {
        if ( !name )
          goto LABEL_272;
        if ( *((_DWORD *)name + 7) == 2 )
        {
          v55 = *((_DWORD *)name + 12);
          if ( v55 == 7 )
          {
            if ( *((_DWORD *)name + 13) != 2 )
            {
              if ( v40 >= LODWORD(EnableInfo->max_length) )
                goto LABEL_273;
              transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                              (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                              svtId,
                                              limitCount,
                                              *v43,
                                              v48);
              if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
              {
                transformNameSprite = this->fields.itemList;
                if ( !transformNameSprite )
                  goto LABEL_272;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v214,
                  (System_Collections_Generic_List_object__o *)transformNameSprite,
                  (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
                v218 = v214;
                do
                {
                  v57 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v218,
                          (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                  if ( !v57 )
                    goto LABEL_102;
                  current = v218.fields._current;
                  if ( !v218.fields._current
                    || (naturalAligment = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment,
                        v218.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
                    || (ServantStatusVoiceListViewItem_c *)v218.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                  {
                    sub_1C372B4(v57);
                  }
                  monitor = v218.fields._current[10].monitor;
                  if ( !monitor )
                    sub_1C372B4(v57);
                }
                while ( monitor[7] != 2
                     || monitor[12] != 7
                     || monitor[13] != *((_DWORD *)name + 13)
                     || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                          (ServantStatusVoiceListViewItem_o *)v218.fields._current,
                          v58) != svtId );
                v62 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                v65 = v62;
                if ( v40 >= LODWORD(EnableInfo->max_length) )
                  sub_1C372BC(v62);
                goto LABEL_125;
              }
LABEL_82:
              if ( v40 >= LODWORD(EnableInfo->max_length) )
                goto LABEL_273;
              transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                                              (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                              svtId,
                                              *v43,
                                              v56);
              if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
                goto LABEL_121;
              voiceLabelSpec = 1;
              goto LABEL_104;
            }
          }
          else if ( v55 == 18 )
          {
            if ( v40 >= LODWORD(EnableInfo->max_length) )
              goto LABEL_273;
            transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                            (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                            svtId,
                                            limitCount,
                                            *v43,
                                            v48);
            if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              goto LABEL_82;
            transformNameSprite = this->fields.itemList;
            if ( !transformNameSprite )
              goto LABEL_272;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v214,
              (System_Collections_Generic_List_object__o *)transformNameSprite,
              (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v218 = v214;
            do
            {
              v67 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v218,
                      (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v67 )
                goto LABEL_102;
              current = v218.fields._current;
              if ( !v218.fields._current
                || (v69 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment,
                    v218.fields._current->klass->_2.naturalAligment < (unsigned int)v69)
                || (ServantStatusVoiceListViewItem_c *)v218.fields._current->klass->_2.typeHierarchy[v69 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                sub_1C372B4(v67);
              }
              v70 = v218.fields._current[10].monitor;
              if ( !v70 )
                sub_1C372B4(v67);
            }
            while ( v70[7] != 2
                 || v70[12] != 18
                 || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                      (ServantStatusVoiceListViewItem_o *)v218.fields._current,
                      v68) != svtId );
            v71 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
            if ( v40 >= LODWORD(EnableInfo->max_length) )
              sub_1C372BC(v71);
            if ( !*v43 )
              sub_1C372B4(v71);
            voiceEntity = (*v43)->fields.voiceEntity;
            if ( !voiceEntity )
              sub_1C372B4(v71);
            v73 = v71;
            id = voiceEntity->fields.id;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
            v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48966740(id, 0);
            if ( !v209 )
              sub_1C372B4(0);
            if ( !VoicePlayCondMaster__isVoiceCond(v209, v73, v75, 81, 0) )
            {
              v94 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
              v65 = v94;
              if ( v40 >= LODWORD(EnableInfo->max_length) )
                sub_1C372BC(v94);
LABEL_125:
              ServantStatusVoiceListViewItem__SetLimitCount(
                (ServantStatusVoiceListViewItem_o *)current,
                v65,
                svtId,
                limitCount,
                *v43,
                v63,
                v64);
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v218,
                (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
              goto LABEL_121;
            }
LABEL_102:
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v218,
              (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          }
        }
      }
      voiceLabelSpec = 0;
LABEL_104:
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      if ( v40 >= LODWORD(EnableInfo->max_length) )
        goto LABEL_273;
      if ( !*v43 )
        goto LABEL_272;
      v76 = (*v43)->fields.voiceEntity;
      if ( !v76 )
        goto LABEL_272;
      v77 = (int)transformNameSprite;
      v78 = v76->fields.id;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48966740(v78, 0);
      transformNameSprite = v209;
      if ( !v209 )
        goto LABEL_272;
      transformNameSprite = (void *)VoicePlayCondMaster__isVoiceCond(v209, v77, v79, 81, 0);
      if ( !name )
        goto LABEL_272;
      v80 = *((_DWORD *)name + 12);
      v81 = v80 == 7 || v80 == 18 || v80 == 54 && ((unsigned __int8)transformNameSprite & 1) != 0;
      v82 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !v82 )
        goto LABEL_272;
      v83 = v82->fields._size;
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      if ( v40 >= LODWORD(EnableInfo->max_length) )
        goto LABEL_273;
      v84 = *v43;
      v85 = firstPriority;
      v86 = (int)transformNameSprite;
      v87 = (ServantStatusVoiceListViewItem_o *)sub_1C372A4(ServantStatusVoiceListViewItem_TypeInfo);
      ServantStatusVoiceListViewItem___ctor(v87, v83, v86, svtId, limitCount, v84, v85, v81, voiceLabelSpec, v199);
      v90 = v82->fields._items;
      v91 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v82->fields._version;
      if ( !v90 )
        goto LABEL_272;
      v92 = v82->fields._size;
      if ( (unsigned int)v92 >= LODWORD(v90->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v82,
          (Il2CppObject *)v87,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
      }
      else
      {
        v93 = &v90->obj.klass + v92;
        v82->fields._size = v92 + 1;
        v93[4] = (Il2CppClass *)v87;
        sub_1C36FFC((CGThumbnailListItem_o *)(v93 + 4), (int32_t)v87, v88, v89);
      }
LABEL_121:
      v39 = EnableInfo->max_length;
      if ( (int)++v40 >= v39 )
        goto LABEL_133;
    }
  }
LABEL_233:
  v171 = this->fields.itemList;
  if ( !v171 )
    goto LABEL_272;
  v172 = v171->fields._size;
  v173 = sub_1C372A4(System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v173,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
  if ( v172 - 1 >= 1 )
  {
    for ( i = 0; i != v172 - 1; ++i )
    {
      transformNameSprite = this->fields.itemList;
      if ( !transformNameSprite )
        goto LABEL_272;
      transformNameSprite = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)transformNameSprite,
                              i,
                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !transformNameSprite )
        goto LABEL_272;
      v176 = (ServantStatusVoiceListViewItem_o *)transformNameSprite;
      v177 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)transformNameSprite + 304LL) < (unsigned int)v177
        || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)transformNameSprite + 200LL) + 8 * v177 - 8) != ServantStatusVoiceListViewItem_TypeInfo )
      {
        goto LABEL_272;
      }
      if ( ServantStatusVoiceListViewItem__get_OpenName((ServantStatusVoiceListViewItem_o *)transformNameSprite, v175) )
      {
        transformNameSprite = (void *)ServantStatusVoiceListViewItem__get_DispNum(v176, v178);
        if ( !(_DWORD)transformNameSprite )
        {
          if ( !v173 )
            goto LABEL_272;
          v179 = (const MethodInfo *)*(unsigned int *)(v173 + 24);
          v180 = *(_DWORD *)(v173 + 28) + 1;
          *(_DWORD *)(v173 + 24) = 0;
          *(_DWORD *)(v173 + 28) = v180;
          if ( (int)v179 >= 1 )
            System_Array__Clear(*(System_Array_o **)(v173 + 16), 0, (int32_t)v179, 0);
          v181 = i + 1;
          if ( i + 1 < v172 )
          {
            do
            {
              transformNameSprite = this->fields.itemList;
              if ( !transformNameSprite )
                goto LABEL_272;
              transformNameSprite = System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)transformNameSprite,
                                      v181,
                                      (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !transformNameSprite )
                goto LABEL_272;
              v183 = (Il2CppObject *)transformNameSprite;
              v184 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
              if ( *(unsigned __int8 *)(*(_QWORD *)transformNameSprite + 304LL) < (unsigned int)v184
                || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)transformNameSprite + 200LL)
                                                        + 8 * v184
                                                        - 8) != ServantStatusVoiceListViewItem_TypeInfo )
              {
                goto LABEL_272;
              }
              OpenName = ServantStatusVoiceListViewItem__get_OpenName(
                           (ServantStatusVoiceListViewItem_o *)transformNameSprite,
                           v182);
              v187 = ServantStatusVoiceListViewItem__get_OpenName(v176, v186);
              transformNameSprite = (void *)System_String__op_Equality(OpenName, v187, 0);
              if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              {
                v189 = *(_QWORD *)(v173 + 16);
                v190 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__;
                ++*(_DWORD *)(v173 + 28);
                if ( !v189 )
                  goto LABEL_272;
                v191 = *(int *)(v173 + 24);
                if ( (unsigned int)v191 >= *(_DWORD *)(v189 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)v173,
                    v183,
                    *(const MethodInfo_37A3024 **)(*(_QWORD *)(v190[4] + 192LL) + 112LL));
                }
                else
                {
                  v192 = v189 + 8 * v191;
                  *(_DWORD *)(v173 + 24) = v191 + 1;
                  *(_QWORD *)(v192 + 32) = v183;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v192 + 32), (int32_t)v183, (int32_t)v179, v188);
                }
              }
            }
            while ( v172 != ++v181 );
          }
          if ( *(int *)(v173 + 24) >= 1 )
          {
            ServantStatusVoiceListViewItem__SetNameNum(v176, 1, v179);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v214,
              (System_Collections_Generic_List_object__o *)v173,
              (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
            v193 = 2;
            for ( j = v214;
                  ;
                  ServantStatusVoiceListViewItem__SetNameNum(
                    (ServantStatusVoiceListViewItem_o *)j.fields._current,
                    v193++,
                    v195) )
            {
              v194 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &j,
                       (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
              if ( !v194 )
                break;
              if ( j.fields._current )
              {
                v196 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
                if ( j.fields._current->klass->_2.naturalAligment >= (unsigned int)v196
                  && (ServantStatusVoiceListViewItem_c *)j.fields._current->klass->_2.typeHierarchy[v196 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
                {
                  continue;
                }
              }
              sub_1C372B4(v194);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &j,
              (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
          }
        }
      }
    }
  }
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transformNameSprite = LocalizationManager__Get((System_String_o *)StringLiteral_12001/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, 0);
  if ( !explanationLabel )
    goto LABEL_272;
  UILabel__set_text(explanationLabel, (System_String_o *)transformNameSprite, 0);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  transformNameSprite = LocalizationManager__Get(v200, 0);
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

  if ( (byte_4C406A2 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&ServantStatusVoiceListViewItem_TypeInfo);
    byte_4C406A2 = 1;
  }
  result = (ServantStatusVoiceListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantStatusVoiceListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  struct VoiceEntity_o *voiceEntity; // x8
  __int64 svtVoiceType; // x8
  __int64 v11; // x20
  struct VoiceEntity_o *v12; // x8
  System_String_o *v13; // x19
  System_String_o *v14; // x0
  __int64 v15; // x20
  int v16; // w8
  System_String_o *v17; // x19
  unsigned int v18; // w21
  __int64 v19; // x22
  __int64 v20; // x8
  __int64 v21; // x8

  if ( (byte_4C406A0 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_16109/*"_"*/);
    byte_4C406A0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)ServantVoiceMaster__getEntity_42816424(
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
    sub_1C372BC(Instance);
  v11 = *((_QWORD *)&Instance->fields._DispLog + svtVoiceType);
  if ( !v11 )
    return 0;
  Instance = (DataManager_o *)System_Int32__ToString((int)voiceInfo + 52, 0);
  v12 = voiceInfo->fields.voiceEntity;
  if ( !v12
    || (v13 = (System_String_o *)Instance, (Instance = (DataManager_o *)v12->fields.id) == 0)
    || (v14 = (System_String_o *)((__int64 (__fastcall *)(DataManager_o *, const MethodInfo *))Instance->klass->vtable._3_ToString.methodPtr)(
                                   Instance,
                                   Instance->klass->vtable._3_ToString.method),
        Instance = (DataManager_o *)System_String__Concat_63599904(v13, (System_String_o *)StringLiteral_16109/*"_"*/, v14, 0),
        (v15 = *(_QWORD *)(v11 + 32)) == 0) )
  {
LABEL_25:
    sub_1C372B4(Instance);
  }
  v16 = *(_DWORD *)(v15 + 24);
  if ( v16 < 1 )
    return 0;
  v17 = (System_String_o *)Instance;
  v18 = 0;
  while ( 1 )
  {
    if ( v18 >= v16 )
      goto LABEL_26;
    v19 = *(_QWORD *)(v15 + 8LL * (int)v18 + 32);
    if ( !v19 )
      goto LABEL_25;
    v20 = *(_QWORD *)(v19 + 64);
    if ( !v20 )
      goto LABEL_25;
    if ( !*(_DWORD *)(v20 + 24) )
      goto LABEL_26;
    v21 = *(_QWORD *)(v20 + 32);
    if ( !v21 )
      goto LABEL_25;
    Instance = (DataManager_o *)System_String__op_Equality(*(System_String_o **)(v21 + 16), v17, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( *(_DWORD *)(v19 + 80) )
        return 1;
    }
    v16 = *(_DWORD *)(v15 + 24);
    if ( (int)++v18 >= v16 )
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
  Il2CppObject *MasterData_object; // x21
  struct ServantVoiceCond_array *servantVoiceConds; // x22
  int max_length; // w8
  DataManager_o *v10; // x19
  unsigned int v11; // w23
  bool v12; // w25
  ServantVoiceCond_o *v13; // x8
  int32_t condType; // w9
  int value; // w26
  __int64 v16; // x20
  __int64 v17; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4C406A1 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C406A1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
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
    v10 = Instance;
    v11 = 0;
    v12 = 1;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1C372BC(Instance);
      v13 = servantVoiceConds->m_Items[v11];
      if ( !v13 )
        break;
      condType = v13->fields.condType;
      if ( condType == 20 || condType == 3 )
        v12 = 0;
      value = v13->fields.value;
      if ( condType == 3 || condType == 20 )
      {
        if ( !v10 )
          break;
        v16 = *(__int64 *)((char *)&v10->fields.lockCountObj + 4);
        v17 = *(_QWORD *)&v10->fields.isFailedLoad;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v19.fields.currentCryptoKey = v16;
        *(_QWORD *)&v19.fields.fakeValue = v17;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v19, 0);
        if ( (int)Instance >= value )
          v12 = 1;
      }
      max_length = servantVoiceConds->max_length;
      if ( (int)++v11 >= max_length )
        return v12;
    }
LABEL_31:
    sub_1C372B4(Instance);
  }
  return 1;
}


void ServantStatusVoiceListViewManager__OnClickListView(
        ServantStatusVoiceListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantStatusVoiceListViewManager_o *v5; // x20
  struct ListViewItem_o *linkItem; // x21
  __int64 naturalAligment; // x10
  struct ServantStatusVoiceListViewManager_CallbackFunc_o *callbackFunc; // x22
  int v9; // w20
  unsigned int Index; // w0
  __int64 v11; // x1

  v5 = this;
  if ( (byte_4C406A8 & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1C37058(&ServantStatusVoiceListViewItem_TypeInfo);
    byte_4C406A8 = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0
    || (naturalAligment = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewItem_TypeInfo )
  {
    sub_1C372B4(this);
  }
  if ( LOBYTE(linkItem[1].fields.sortValue2B) )
  {
    callbackFunc = v5->fields.callbackFunc;
    v5->fields.callbackFunc = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields.callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
    {
      v9 = BYTE1(linkItem[1].fields.sortValue2B);
      Index = ListViewObject__get_Index(obj, 0);
      if ( v9 )
        v11 = 2;
      else
        v11 = 1;
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        v11,
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C406A7 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C406A7 = 1;
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
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1C372B4(0);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v9->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v9,
          1,
          v9->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v7, v8);
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
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C406A5 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_1C37058(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C406A5 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C372B4(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C372B4(v11);
      ServantStatusVoiceListViewObject__Init_37563280(
        (ServantStatusVoiceListViewObject_o *)current,
        mode,
        v10,
        delay,
        v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusVoiceListViewManager__RequestListObject_37562776(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C406A6 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_1C37058(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C406A6 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C372B4(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      ObjectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v11.fields._current;
      v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C372B4(v9);
      ServantStatusVoiceListViewObject__Init_37563888((ServantStatusVoiceListViewObject_o *)current, mode, v8, v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


void ServantStatusVoiceListViewManager__SetMode(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        ServantStatusVoiceListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x3

  this->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  ServantStatusVoiceListViewManager__SetMode_37561804(this, mode, -1, v6);
}


void ServantStatusVoiceListViewManager__SetMode_37561804(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        int32_t select,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL8 v8; // x0
  __int64 naturalAligment; // x11
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_object__o *v13; // x19
  int32_t v14; // w20
  const MethodInfo *v15; // x2
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v20; // x23
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C406A4 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
    sub_1C37058(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_1C37058(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C406A4 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( mode == 2 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_30;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      itemList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    for ( i = v22; ; BYTE1(i.fields._current[12].monitor) = HIDWORD(i.fields._current[1].klass) == select )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v8 )
        break;
      if ( !i.fields._current )
        sub_1C372B4(v8);
      naturalAligment = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
      if ( i.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (ServantStatusVoiceListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        sub_1C372B4(v8);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(this, v12);
    if ( !itemList )
      goto LABEL_30;
    v13 = itemList;
    if ( itemList->fields._size >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v13,
                                                                  v14,
                                                                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
        if ( !itemList )
          break;
        ServantStatusVoiceListViewObject__Init_37561676((ServantStatusVoiceListViewObject_o *)itemList, 4, v15);
        if ( ++v14 >= v13->fields._size )
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
                                                                v10);
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
                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
          v20 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(v20, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0);
          if ( !Item )
            break;
          ServantStatusVoiceListViewObject__Init_37563280((ServantStatusVoiceListViewObject_o *)Item, 5, v20, 0.1, v21);
          if ( ++v18 >= v17->fields._size )
            return;
        }
LABEL_30:
        sub_1C372B4(itemList);
      }
      this->fields.callbackCount = 1;
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
        0.2,
        0);
    }
    else if ( mode == 1 )
    {
      ServantStatusVoiceListViewManager__RequestListObject_37562776(this, 3, v11);
    }
  }
}


void ServantStatusVoiceListViewManager__SetMode_37562720(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x3

  this->fields.callbackFunc2 = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  ServantStatusVoiceListViewManager__SetMode_37561804(this, mode, -1, v6);
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
  if ( (byte_4C406A3 & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1C37058(&ServantStatusVoiceListViewObject_TypeInfo);
    byte_4C406A3 = 1;
  }
  if ( !obj
    || (naturalAligment = ServantStatusVoiceListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantStatusVoiceListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewObject_TypeInfo )
  {
    sub_1C372B4(this);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ServantStatusVoiceListViewObject__Init_37561676(
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

  if ( (byte_4C40697 & 1) == 0 )
  {
    sub_1C37058(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    byte_4C40697 = 1;
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
    v8 = sub_1C712B0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
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

  if ( (byte_4C40699 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C40699 = 1;
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
    v8 = sub_1C712B0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
  ServantStatusVoiceListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *ServantStatusVoiceListViewManager__get_ClippingObjectList(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *v9; // x21
  ListViewItem_o *Item; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  _BOOL8 v13; // x0
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C4069C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4069C = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C372B4(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v9 = Component_object;
      if ( !Component_object )
        sub_1C372B4(0);
      Item = (ListViewItem_o *)ServantStatusVoiceListViewObject__GetItem(
                                 (ServantStatusVoiceListViewObject_o *)Component_object,
                                 v8);
      if ( !Item )
        sub_1C372B4(0);
      if ( Item->fields.isTermination )
      {
        v13 = ListViewManager__ClippingItem_43820548((ListViewManager_o *)this, Item, 0);
        if ( v13 )
        {
          if ( !v3 )
            sub_1C372B4(v13);
          items = v3->fields._items;
          v15 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C372B4(v13);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v9,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C372B4(Item);
        items = v3->fields._items;
        v15 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C372B4(Item);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v17 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v17[4] = (Il2CppClass *)v9;
        sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v9, v11, v12);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *)v3;
}


System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *ServantStatusVoiceListViewManager__get_ObjectList(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C4069B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4069B = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C372B4(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C372B4(Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C372B4(Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v10, v8, v9);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C40698 & 1) == 0 )
  {
    sub_1C37058(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    byte_4C40698 = 1;
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
    v8 = sub_1C712B0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
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

  if ( (byte_4C4069A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C4069A = 1;
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
    v8 = sub_1C712B0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
  ServantStatusVoiceListViewManager__get_ObjectList(v10, v11);
}


void ServantStatusVoiceListViewManager_CallbackFunc___ctor(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A79290;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A79238;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *ServantStatusVoiceListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  _QWORD v18[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v19; // [xsp+28h] [xbp-38h] BYREF
  int32_t v20; // [xsp+2Ch] [xbp-34h] BYREF

  v19 = result;
  v20 = kind;
  if ( (byte_4C406A9 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&ServantStatusVoiceListViewManager_ResultKind_TypeInfo);
    byte_4C406A9 = 1;
  }
  v18[2] = 0;
  v18[0] = j_il2cpp_value_box_0(
             ServantStatusVoiceListViewManager_ResultKind_TypeInfo,
             &v20,
             *(_QWORD *)&result,
             callback,
             object,
             method,
             v6,
             v7);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v19, v11, v12, v13, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v18, callback, object);
}


void ServantStatusVoiceListViewManager_CallbackFunc__EndInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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