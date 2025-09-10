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
  VoiceMaster_o *v11; // x21
  unsigned int v12; // w9
  char v13; // w20
  ServantVoiceRelationEntity_o *v14; // x23
  __int64 v15; // x24
  __int64 v16; // x25
  VoiceInfo_array *v17; // x24
  unsigned __int64 v18; // x22
  System_Collections_Generic_List_object__o *itemList; // x25
  int32_t size; // w27
  __int64 v21; // x26
  __int64 v22; // x28
  VoiceInfo_o *v23; // x29
  int32_t v24; // w28
  int32_t v25; // w20
  ServantStatusVoiceListViewItem_o *v26; // x26
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x0
  const MethodInfo *v33; // [xsp+8h] [xbp-98h]
  VoiceMaster_o *v34; // [xsp+18h] [xbp-88h]
  ServantVoiceRelationEntity_array *v35; // [xsp+20h] [xbp-80h]
  int32_t ascendOrder; // [xsp+28h] [xbp-78h]
  unsigned int v37; // [xsp+2Ch] [xbp-74h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4C24B88 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C24B88 = 1;
  }
  Instance = (VoiceInfo_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (VoiceInfo_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !relationList )
    goto LABEL_29;
  max_length = relationList->max_length;
  if ( max_length >= 1 )
  {
    v11 = (VoiceMaster_o *)Instance;
    v12 = 0;
    v13 = 1;
    ascendOrder = 0;
    v34 = (VoiceMaster_o *)Instance;
    v35 = relationList;
    while ( 1 )
    {
      if ( v12 >= max_length )
LABEL_30:
        sub_1C2D6F4(Instance, v8, v9);
      v14 = relationList->m_Items[v12];
      v37 = v12;
      if ( !v14 )
        goto LABEL_29;
      v16 = *(_QWORD *)&v14->fields.relationSvtId.fields.currentCryptoKey;
      v15 = *(_QWORD *)&v14->fields.relationSvtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v40.fields.currentCryptoKey = v16;
      *(_QWORD *)&v40.fields.fakeValue = v15;
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v40, 0);
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
      v11 = v34;
      relationList = v35;
      v13 = 0;
      max_length = v35->max_length;
      v12 = v37 + 1;
      if ( (int)(v37 + 1) >= max_length )
        return;
    }
    v18 = 0;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      v22 = *(_QWORD *)&v14->fields.relationSvtId.fields.currentCryptoKey;
      v21 = *(_QWORD *)&v14->fields.relationSvtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v41.fields.currentCryptoKey = v22;
      *(_QWORD *)&v41.fields.fakeValue = v21;
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v41, 0);
      if ( v18 >= LODWORD(v17->max_length) )
        goto LABEL_30;
      v23 = v17->m_Items[v18];
      v24 = (int)Instance;
      v25 = *firstPriority;
      v26 = (ServantStatusVoiceListViewItem_o *)sub_1C2D6DC(ServantStatusVoiceListViewItem_TypeInfo);
      ServantStatusVoiceListViewItem___ctor(v26, size, svtId, v24, 0, v23, v25, 0, 0, v33);
      items = itemList->fields._items;
      v30 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v31 = itemList->fields._size;
      if ( (unsigned int)v31 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v26,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + v31;
        itemList->fields._size = v31 + 1;
        v32[4] = (Il2CppClass *)v26;
        sub_1C2D434((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v26, v27, v28);
      }
      if ( (__int64)++v18 >= SLODWORD(v17->max_length) )
        goto LABEL_27;
    }
LABEL_29:
    sub_1C2D6EC(Instance, v8);
  }
}


void ServantStatusVoiceListViewManager__Awake(ServantStatusVoiceListViewManager_o *this, const MethodInfo *method)
{
  void *scrollView; // x0
  float v4; // s1

  if ( (byte_4C24B87 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4C24B87 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)scrollView,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0 )
  {
    sub_1C2D6EC(scrollView, method);
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
  __int64 v20; // x2
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  System_Int32_array *v24; // x9
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v26; // x10
  Il2CppObject *MasterData_object; // x19
  int32_t maxLimitCount; // w20
  System_Int32_array *VoiceLimitCountList; // x24
  ServantVoiceRelationEntity_array *v30; // x19
  int32_t v31; // w0
  const MethodInfo *v32; // x4
  ServantVoiceRelationEntity_array *v33; // x19
  int32_t v34; // w0
  const MethodInfo *v35; // x4
  il2cpp_array_size_t v36; // x8
  unsigned __int64 v37; // x19
  int32_t v38; // w20
  VoiceInfo_array *EnableInfo; // x24
  System_Collections_Generic_List_object__o *v40; // x27
  int v41; // w8
  unsigned int v42; // w22
  Il2CppClass **v43; // x26
  Il2CppClass *v44; // x8
  VoiceInfo_o **v45; // x26
  Il2CppClass *v46; // t1
  char *name; // x23
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x4
  int v50; // w19
  BalanceConfig_c *v51; // x8
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  int v56; // w8
  const MethodInfo *v57; // x3
  _BOOL8 v58; // x0
  const MethodInfo *v59; // x1
  Il2CppObject *current; // x28
  __int64 naturalAligment; // x10
  _DWORD *monitor; // x8
  __int64 v63; // x0
  __int64 v64; // x2
  int32_t v65; // w5
  const MethodInfo *v66; // x6
  int32_t v67; // w1
  bool voiceLabelSpec; // w21
  _BOOL8 v69; // x0
  const MethodInfo *v70; // x1
  __int64 v71; // x10
  _DWORD *v72; // x8
  __int64 v73; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  struct VoiceEntity_o *voiceEntity; // x8
  int32_t v77; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x19
  __int64 v79; // x1
  System_String_o *v80; // x2
  struct VoiceEntity_o *v81; // x8
  int32_t v82; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v83; // x19
  System_String_o *v84; // x2
  int v85; // w8
  bool v86; // w25
  System_Collections_Generic_List_object__o *v87; // x23
  int32_t v88; // w28
  VoiceInfo_o *v89; // x29
  int32_t v90; // w26
  int32_t v91; // w19
  ServantStatusVoiceListViewItem_o *v92; // x20
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  struct System_Object_array *v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  Il2CppClass **v98; // x0
  __int64 v99; // x0
  __int64 v100; // x2
  int32_t v101; // w22
  int32_t v102; // w21
  int32_t v103; // w19
  BalanceConfig_c *v104; // x8
  Il2CppObject *v105; // x20
  NetworkManager_c *v106; // x0
  int64_t v107; // x19
  UserServantCollectionEntity_o *v108; // x23
  _BOOL8 v109; // x0
  __int64 v110; // x1
  int32_t v111; // w20
  BalanceConfig_c *v112; // x0
  VoiceInfo_array *v113; // x0
  __int64 v114; // x1
  VoiceInfo_array *v115; // x23
  unsigned __int64 v116; // x26
  VoiceInfo_o **m_Items; // x29
  System_Collections_Generic_List_object__o *itemList; // x27
  int32_t v119; // w28
  __int64 v120; // x1
  __int64 v121; // x2
  int32_t v122; // w20
  BalanceConfig_c *v123; // x0
  VoiceInfo_o *v124; // x24
  int32_t ServantIdHyde; // w19
  ServantStatusVoiceListViewItem_o *v126; // x25
  __int64 v127; // x0
  __int64 v128; // x1
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  struct System_Object_array *v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  Il2CppClass **v134; // x0
  int v135; // w19
  BalanceConfig_c *v136; // x8
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t v138; // w19
  BalanceConfig_c *v139; // x8
  int32_t v140; // w29
  _QWORD *v141; // x23
  unsigned __int64 v142; // x21
  System_Collections_Generic_List_object__o *v143; // x27
  int32_t v144; // w25
  int32_t v145; // w28
  VoiceInfo_o *v146; // x19
  int32_t ServantIdMashu2; // w24
  ServantStatusVoiceListViewItem_o *v148; // x20
  int32_t v149; // w2
  const MethodInfo *v150; // x3
  struct System_Object_array *v151; // x8
  _QWORD *v152; // x9
  __int64 v153; // x10
  Il2CppClass **v154; // x0
  NetworkManager_c *v155; // x0
  BalanceConfig_c *v156; // x8
  int64_t v157; // x20
  struct BalanceConfig_StaticFields *v158; // x8
  int32_t MashuTdGradeUpQuestId; // w19
  int32_t MashuTdGradeUpQuestPhase; // w23
  int32_t svtVoiceId; // w19
  int32_t v162; // w19
  int32_t v163; // w26
  BalanceConfig_c *v164; // x8
  _QWORD *v165; // x23
  unsigned __int64 v166; // x21
  System_Collections_Generic_List_object__o *v167; // x27
  int32_t v168; // w25
  int32_t v169; // w28
  VoiceInfo_o *v170; // x19
  int32_t ServantIdMashu3; // w24
  ServantStatusVoiceListViewItem_o *v172; // x20
  int32_t v173; // w2
  const MethodInfo *v174; // x3
  struct System_Object_array *v175; // x8
  _QWORD *v176; // x9
  __int64 v177; // x10
  Il2CppClass **v178; // x0
  ServantVoiceRelationEntity_array *v179; // x19
  int32_t v180; // w0
  const MethodInfo *v181; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v182; // x8
  int32_t v183; // w25
  __int64 v184; // x20
  int32_t i; // w21
  ServantStatusVoiceListViewItem_o *v186; // x22
  __int64 v187; // x10
  const MethodInfo *v188; // x2
  int v189; // w8
  int32_t v190; // w23
  Il2CppObject *v191; // x24
  __int64 v192; // x10
  System_String_o *OpenName; // x19
  const MethodInfo *v194; // x1
  System_String_o *v195; // x0
  const MethodInfo *v196; // x3
  __int64 v197; // x8
  _QWORD *v198; // x9
  __int64 v199; // x10
  __int64 v200; // x0
  int32_t v201; // w22
  _BOOL8 v202; // x0
  __int64 v203; // x1
  const MethodInfo *v204; // x2
  __int64 v205; // x11
  UILabel_o *explanationLabel; // x20
  UILabel_o *emptyMessageLabel; // x19
  const MethodInfo *v208; // [xsp+8h] [xbp-188h]
  System_String_o *v209; // [xsp+20h] [xbp-170h]
  UserServantCollectionEntity_o *EntityDefinitely; // [xsp+28h] [xbp-168h]
  ServantLimitAddMaster_o *v212; // [xsp+38h] [xbp-158h]
  unsigned __int64 v213; // [xsp+40h] [xbp-150h]
  System_Collections_Generic_List_T__o *v214; // [xsp+48h] [xbp-148h]
  System_Int32_array *v215; // [xsp+50h] [xbp-140h]
  VoiceMaster_o *v216; // [xsp+58h] [xbp-138h]
  unsigned __int64 v217; // [xsp+60h] [xbp-130h]
  VoicePlayCondMaster_o *v218; // [xsp+68h] [xbp-128h]
  int32_t svtId; // [xsp+78h] [xbp-118h]
  int limitCount; // [xsp+7Ch] [xbp-114h]
  System_Collections_Generic_List_Enumerator_object__o v223; // [xsp+88h] [xbp-108h] BYREF
  System_Collections_Generic_List_Enumerator_object__o j; // [xsp+A0h] [xbp-F0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+B8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v226; // [xsp+C0h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v227; // [xsp+E0h] [xbp-B0h] BYREF
  ServantVoiceRelationEntity_array *afterRelationList; // [xsp+100h] [xbp-90h] BYREF
  ServantVoiceRelationEntity_array *sameRelationList; // [xsp+108h] [xbp-88h] BYREF
  ServantVoiceRelationEntity_array *beforeRelationList; // [xsp+110h] [xbp-80h] BYREF
  int32_t firstPriority; // [xsp+11Ch] [xbp-74h] BYREF
  UnityEngine_Vector4_o v232; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C24B89 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_VoiceMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CondType_Kind__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_VoiceEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_VoiceEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_VoiceEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CondType_Kind___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_VoiceEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_CondType_Kind__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C2D490(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TutorialFlag_TypeInfo);
    sub_1C2D490(&StringLiteral_15242/*"VOICE_EMPTY_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_11994/*"SERVANT_STATUS_VOICE_EXPLANATION"*/);
    byte_4C24B89 = 1;
  }
  v4 = StringLiteral_15242/*"VOICE_EMPTY_MESSAGE"*/;
  firstPriority = 0;
  sameRelationList = 0;
  beforeRelationList = 0;
  afterRelationList = 0;
  memset(&v227, 0, sizeof(v227));
  memset(&v226, 0, sizeof(v226));
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
  v232.fields.x = *((float *)transformNameSprite + 74);
  v232.fields.z = *((float *)transformNameSprite + 76);
  v232.fields.y = defaultPanelCenter;
  v232.fields.w = defaultPanelHeight;
  UIPanel__set_baseClipRegion((UIPanel_o *)transformNameSprite, v232, 0);
  transformNameSprite = this->fields.scrollView;
  if ( !transformNameSprite )
    goto LABEL_272;
  UIScrollView__ResetPosition((UIScrollView_o *)transformNameSprite, 0);
  this->fields.execObjectExtraFlag = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  v15 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v15 = NetworkManager_TypeInfo;
  }
  v209 = (System_String_o *)v4;
  userIdNumber = v15->static_fields->userIdNumber;
  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
  if ( !Master_object )
    goto LABEL_272;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       userIdNumber,
                       (int32_t)transformNameSprite,
                       0);
  v17 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_VoiceMaster___);
  v218 = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v18 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  firstPriority = 0;
  v19 = (System_Collections_Generic_List_T__o *)sub_1C2D6DC(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v19,
    (const MethodInfo_376EB38 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v19 )
    goto LABEL_272;
  items = v19->fields._items;
  v22 = Method_System_Collections_Generic_List_CondType_Kind__Add__;
  ++v19->fields._version;
  if ( !items )
    goto LABEL_272;
  size = v19->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v19,
      81,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v19->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  v24 = changeSvtVoiceIdList;
  v212 = (ServantLimitAddMaster_o *)v18;
  if ( !changeSvtVoiceIdList )
LABEL_272:
    sub_1C2D6EC(transformNameSprite, v8);
  max_length = changeSvtVoiceIdList->max_length;
  if ( (int)max_length >= 1 )
  {
    v26 = 0;
    v216 = (VoiceMaster_o *)v17;
    v214 = v19;
    while ( 1 )
    {
      if ( v26 >= (unsigned int)max_length )
        goto LABEL_273;
      v213 = v26;
      svtId = v24->m_Items[v26];
      transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_272;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)transformNameSprite,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
      transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_272;
      transformNameSprite = DataManager__GetMasterData_object_(
                              (DataManager_o *)transformNameSprite,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !transformNameSprite )
        goto LABEL_272;
      ServantVoiceRelationMaster__GetRelationList_42589272(
        (ServantVoiceRelationMaster_o *)transformNameSprite,
        &beforeRelationList,
        &sameRelationList,
        &afterRelationList,
        svtId,
        0);
      v30 = beforeRelationList;
      v31 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v30, v31, v32);
      v33 = sameRelationList;
      ++firstPriority;
      v34 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v33, v34, v35);
      if ( !VoiceLimitCountList )
        goto LABEL_272;
      v36 = VoiceLimitCountList->max_length;
      if ( (int)v36 >= 1 )
        break;
LABEL_232:
      v179 = afterRelationList;
      v180 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v179, v180, v181);
      v24 = changeSvtVoiceIdList;
      LODWORD(max_length) = changeSvtVoiceIdList->max_length;
      v26 = v213 + 1;
      if ( (__int64)(v213 + 1) >= (int)max_length )
        goto LABEL_233;
    }
    v37 = 0;
    v215 = VoiceLimitCountList;
    while ( 1 )
    {
      if ( v37 >= (unsigned int)v36 )
        goto LABEL_273;
      v38 = VoiceLimitCountList->m_Items[v37];
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      if ( !v17 )
        goto LABEL_272;
      v217 = v37;
      limitCount = v38;
      EnableInfo = VoiceMaster__getEnableInfo(
                     (VoiceMaster_o *)v17,
                     (int32_t)transformNameSprite,
                     svtId,
                     v38,
                     (System_Collections_Generic_List_CondType_Kind__o *)v19,
                     0,
                     0,
                     0);
      v40 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_VoiceEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v40,
        (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_VoiceEntity___ctor__);
      if ( !EnableInfo )
        goto LABEL_272;
      v41 = EnableInfo->max_length;
      if ( v41 >= 1 )
        break;
LABEL_133:
      v101 = firstPriority;
      v102 = ++firstPriority;
      v103 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      v104 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v104 = BalanceConfig_TypeInfo;
      }
      if ( v103 == v104->static_fields->ServantIdJekyll )
      {
        transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transformNameSprite )
          goto LABEL_272;
        v105 = DataManager__GetMasterData_object_(
                 (DataManager_o *)transformNameSprite,
                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C211E1 )
        {
          sub_1C2D490(&NetworkManager_TypeInfo);
          byte_4C211E1 = 1;
        }
        v106 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v106 = NetworkManager_TypeInfo;
        }
        v107 = v106->static_fields->userIdNumber;
        transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
        if ( !v105 )
          goto LABEL_272;
        v108 = UserServantCollectionMaster__GetEntityDefinitely(
                 (UserServantCollectionMaster_o *)v105,
                 v107,
                 (int32_t)transformNameSprite,
                 0);
        transformNameSprite = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v40, 0);
        if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
        {
          if ( !v40 )
            goto LABEL_272;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v223,
            v40,
            (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_VoiceEntity__GetEnumerator__);
          v226 = v223;
          while ( 1 )
          {
            v109 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v226,
                     (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_VoiceEntity__MoveNext__);
            if ( !v109 )
              break;
            if ( !v226.fields._current )
              sub_1C2D6EC(v109, v110);
            if ( !v108 )
              sub_1C2D6EC(v109, v110);
            if ( UserServantCollectionEntity__IsPlayed(v108, HIDWORD(v226.fields._current[3].klass), 0) )
            {
              v111 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
              v112 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v112 = BalanceConfig_TypeInfo;
              }
              v113 = VoiceMaster__getEnableInfo(v216, v111, v112->static_fields->ServantIdHyde, limitCount, 0, 0, 0, 0);
              v115 = v113;
              if ( !v113 )
                sub_1C2D6EC(0, v114);
              if ( SLODWORD(v113->max_length) >= 1 )
              {
                v116 = 0;
                m_Items = v113->m_Items;
                do
                {
                  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  if ( !itemList )
                    sub_1C2D6EC(v113, v114);
                  v119 = itemList->fields._size;
                  v122 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                  v123 = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v123 = BalanceConfig_TypeInfo;
                  }
                  if ( v116 >= LODWORD(v115->max_length) )
                    sub_1C2D6F4(v123, v120, v121);
                  v124 = m_Items[v116];
                  ServantIdHyde = v123->static_fields->ServantIdHyde;
                  v126 = (ServantStatusVoiceListViewItem_o *)sub_1C2D6DC(ServantStatusVoiceListViewItem_TypeInfo);
                  ServantStatusVoiceListViewItem___ctor(
                    v126,
                    v119,
                    v122,
                    ServantIdHyde,
                    limitCount,
                    v124,
                    v102,
                    0,
                    0,
                    v208);
                  v131 = itemList->fields._items;
                  v132 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++itemList->fields._version;
                  if ( !v131 )
                    sub_1C2D6EC(v127, v128);
                  v133 = itemList->fields._size;
                  if ( (unsigned int)v133 >= LODWORD(v131->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      itemList,
                      (Il2CppObject *)v126,
                      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v134 = &v131->obj.klass + v133;
                    itemList->fields._size = v133 + 1;
                    v134[4] = (Il2CppClass *)v126;
                    sub_1C2D434((CGThumbnailListItem_o *)(v134 + 4), (int32_t)v126, v129, v130);
                  }
                  ++v116;
                }
                while ( (__int64)v116 < SLODWORD(v115->max_length) );
              }
              firstPriority = v101 + 2;
              break;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v226,
            (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_VoiceEntity__Dispose__);
        }
      }
      else
      {
        transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
        v135 = (int)transformNameSprite;
        v136 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v136 = BalanceConfig_TypeInfo;
        }
        static_fields = v136->static_fields;
        if ( v135 == static_fields->ServantIdMashu1 )
        {
          if ( !v136->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v136);
            static_fields = BalanceConfig_TypeInfo->static_fields;
          }
          if ( limitCount != static_fields->SpecialLimitCountPLD )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_40206092(115, 0) )
            {
              v138 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
              v139 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v139 = BalanceConfig_TypeInfo;
              }
              v140 = v102;
              transformNameSprite = VoiceMaster__getEnableInfo(
                                      v216,
                                      v138,
                                      v139->static_fields->ServantIdMashu2,
                                      limitCount,
                                      0,
                                      0,
                                      0,
                                      0);
              if ( !transformNameSprite )
                goto LABEL_272;
              v141 = transformNameSprite;
              if ( *((int *)transformNameSprite + 6) >= 1 )
              {
                v142 = 0;
                while ( 1 )
                {
                  v143 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  if ( !v143 )
                    goto LABEL_272;
                  v144 = v143->fields._size;
                  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                  v145 = (int)transformNameSprite;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( v142 >= *((unsigned int *)v141 + 6) )
                    break;
                  v146 = (VoiceInfo_o *)v141[v142 + 4];
                  ServantIdMashu2 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu2;
                  v148 = (ServantStatusVoiceListViewItem_o *)sub_1C2D6DC(ServantStatusVoiceListViewItem_TypeInfo);
                  ServantStatusVoiceListViewItem___ctor(
                    v148,
                    v144,
                    v145,
                    ServantIdMashu2,
                    limitCount,
                    v146,
                    v140,
                    0,
                    0,
                    v208);
                  v151 = v143->fields._items;
                  v152 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++v143->fields._version;
                  if ( !v151 )
                    goto LABEL_272;
                  v153 = v143->fields._size;
                  if ( (unsigned int)v153 >= LODWORD(v151->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v143,
                      (Il2CppObject *)v148,
                      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v154 = &v151->obj.klass + v153;
                    v143->fields._size = v153 + 1;
                    v154[4] = (Il2CppClass *)v148;
                    sub_1C2D434((CGThumbnailListItem_o *)(v154 + 4), (int32_t)v148, v149, v150);
                  }
                  if ( (__int64)++v142 >= *((int *)v141 + 6) )
                    goto LABEL_196;
                }
LABEL_273:
                sub_1C2D6F4(transformNameSprite, v8, v20);
              }
LABEL_196:
              v102 = v101 + 2;
              firstPriority = v101 + 2;
            }
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C211E1 )
            {
              sub_1C2D490(&NetworkManager_TypeInfo);
              byte_4C211E1 = 1;
            }
            v155 = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v155 = NetworkManager_TypeInfo;
            }
            v156 = BalanceConfig_TypeInfo;
            v157 = v155->static_fields->userIdNumber;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v156 = BalanceConfig_TypeInfo;
            }
            v158 = v156->static_fields;
            MashuTdGradeUpQuestId = v158->MashuTdGradeUpQuestId;
            MashuTdGradeUpQuestPhase = v158->MashuTdGradeUpQuestPhase;
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            transformNameSprite = (void *)CondType__IsQuestPhaseClear(
                                            v157,
                                            MashuTdGradeUpQuestId,
                                            MashuTdGradeUpQuestPhase,
                                            -1,
                                            0,
                                            0);
            if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
            {
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              transformNameSprite = v212;
              if ( !v212 )
                goto LABEL_272;
              transformNameSprite = (void *)ServantLimitAddMaster__TryGetEntity(
                                              v212,
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
                  v162 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                  v163 = v102;
                  v164 = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v164 = BalanceConfig_TypeInfo;
                  }
                  transformNameSprite = VoiceMaster__getEnableInfo(
                                          v216,
                                          v162,
                                          v164->static_fields->ServantIdMashu3,
                                          limitCount,
                                          0,
                                          0,
                                          0,
                                          0);
                  if ( !transformNameSprite )
                    goto LABEL_272;
                  v165 = transformNameSprite;
                  if ( *((int *)transformNameSprite + 6) >= 1 )
                  {
                    v166 = 0;
                    do
                    {
                      v167 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                      if ( !v167 )
                        goto LABEL_272;
                      v168 = v167->fields._size;
                      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                      v169 = (int)transformNameSprite;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      if ( v166 >= *((unsigned int *)v165 + 6) )
                        goto LABEL_273;
                      v170 = (VoiceInfo_o *)v165[v166 + 4];
                      ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
                      v172 = (ServantStatusVoiceListViewItem_o *)sub_1C2D6DC(ServantStatusVoiceListViewItem_TypeInfo);
                      ServantStatusVoiceListViewItem___ctor(
                        v172,
                        v168,
                        v169,
                        ServantIdMashu3,
                        limitCount,
                        v170,
                        v163,
                        0,
                        0,
                        v208);
                      v175 = v167->fields._items;
                      v176 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                      ++v167->fields._version;
                      if ( !v175 )
                        goto LABEL_272;
                      v177 = v167->fields._size;
                      if ( (unsigned int)v177 >= LODWORD(v175->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v167,
                          (Il2CppObject *)v172,
                          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v176[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v178 = &v175->obj.klass + v177;
                        v167->fields._size = v177 + 1;
                        v178[4] = (Il2CppClass *)v172;
                        sub_1C2D434((CGThumbnailListItem_o *)(v178 + 4), (int32_t)v172, v173, v174);
                      }
                    }
                    while ( (__int64)++v166 < *((int *)v165 + 6) );
                  }
                  firstPriority = v163 + 1;
                }
              }
            }
          }
        }
      }
      VoiceLimitCountList = v215;
      v17 = (Il2CppObject *)v216;
      v19 = v214;
      LODWORD(v36) = v215->max_length;
      v37 = v217 + 1;
      if ( (__int64)(v217 + 1) >= (int)v36 )
        goto LABEL_232;
    }
    v42 = 0;
    while ( 1 )
    {
      if ( v42 >= v41 )
        goto LABEL_273;
      v43 = &EnableInfo->obj.klass + (int)v42;
      v46 = v43[4];
      v45 = (VoiceInfo_o **)(v43 + 4);
      v44 = v46;
      if ( !v46 )
        goto LABEL_272;
      name = (char *)v44->_1.name;
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      v50 = (int)transformNameSprite;
      v51 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v51 = BalanceConfig_TypeInfo;
      }
      if ( v50 == v51->static_fields->ServantIdJekyll )
      {
        if ( !name )
          goto LABEL_272;
        if ( *((_DWORD *)name + 7) == 7 )
        {
          if ( !v40 )
            goto LABEL_272;
          v52 = v40->fields._items;
          v53 = Method_System_Collections_Generic_List_VoiceEntity__Add__;
          ++v40->fields._version;
          if ( !v52 )
            goto LABEL_272;
          v54 = v40->fields._size;
          if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v40,
              (Il2CppObject *)name,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
          }
          else
          {
            v55 = &v52->obj.klass + v54;
            v40->fields._size = v54 + 1;
            v55[4] = (Il2CppClass *)name;
            sub_1C2D434((CGThumbnailListItem_o *)(v55 + 4), (int32_t)name, v20, v48);
          }
        }
      }
      if ( limitCount <= 10 )
      {
        if ( !name )
          goto LABEL_272;
        if ( *((_DWORD *)name + 7) == 2 )
        {
          v56 = *((_DWORD *)name + 12);
          if ( v56 == 7 )
          {
            if ( *((_DWORD *)name + 13) != 2 )
            {
              if ( v42 >= LODWORD(EnableInfo->max_length) )
                goto LABEL_273;
              transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                              (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                              svtId,
                                              limitCount,
                                              *v45,
                                              v49);
              if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
              {
                transformNameSprite = this->fields.itemList;
                if ( !transformNameSprite )
                  goto LABEL_272;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v223,
                  (System_Collections_Generic_List_object__o *)transformNameSprite,
                  (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
                v227 = v223;
                do
                {
                  v58 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v227,
                          (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                  if ( !v58 )
                    goto LABEL_102;
                  current = v227.fields._current;
                  if ( !v227.fields._current
                    || (naturalAligment = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment,
                        v227.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
                    || (ServantStatusVoiceListViewItem_c *)v227.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                  {
                    sub_1C2D6EC(v58, v59);
                  }
                  monitor = v227.fields._current[10].monitor;
                  if ( !monitor )
                    sub_1C2D6EC(v58, v59);
                }
                while ( monitor[7] != 2
                     || monitor[12] != 7
                     || monitor[13] != *((_DWORD *)name + 13)
                     || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                          (ServantStatusVoiceListViewItem_o *)v227.fields._current,
                          v59) != svtId );
                v63 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                v67 = v63;
                if ( v42 >= LODWORD(EnableInfo->max_length) )
                  sub_1C2D6F4(v63, (unsigned int)v63, v64);
                goto LABEL_125;
              }
LABEL_82:
              if ( v42 >= LODWORD(EnableInfo->max_length) )
                goto LABEL_273;
              transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                                              (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                              svtId,
                                              *v45,
                                              v57);
              if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
                goto LABEL_121;
              voiceLabelSpec = 1;
              goto LABEL_104;
            }
          }
          else if ( v56 == 18 )
          {
            if ( v42 >= LODWORD(EnableInfo->max_length) )
              goto LABEL_273;
            transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                            (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                            svtId,
                                            limitCount,
                                            *v45,
                                            v49);
            if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              goto LABEL_82;
            transformNameSprite = this->fields.itemList;
            if ( !transformNameSprite )
              goto LABEL_272;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v223,
              (System_Collections_Generic_List_object__o *)transformNameSprite,
              (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v227 = v223;
            do
            {
              v69 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v227,
                      (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v69 )
                goto LABEL_102;
              current = v227.fields._current;
              if ( !v227.fields._current
                || (v71 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment,
                    v227.fields._current->klass->_2.naturalAligment < (unsigned int)v71)
                || (ServantStatusVoiceListViewItem_c *)v227.fields._current->klass->_2.typeHierarchy[v71 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                sub_1C2D6EC(v69, v70);
              }
              v72 = v227.fields._current[10].monitor;
              if ( !v72 )
                sub_1C2D6EC(v69, v70);
            }
            while ( v72[7] != 2
                 || v72[12] != 18
                 || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                      (ServantStatusVoiceListViewItem_o *)v227.fields._current,
                      v70) != svtId );
            v73 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
            if ( v42 >= LODWORD(EnableInfo->max_length) )
              sub_1C2D6F4(v73, v74, v75);
            if ( !*v45 )
              sub_1C2D6EC(v73, v74);
            voiceEntity = (*v45)->fields.voiceEntity;
            if ( !voiceEntity )
              sub_1C2D6EC(v73, v74);
            v77 = v73;
            id = voiceEntity->fields.id;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
            v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48863712(id, 0);
            if ( !v218 )
              sub_1C2D6EC(0, v79);
            if ( !VoicePlayCondMaster__isVoiceCond(v218, v77, v80, 81, 0) )
            {
              v99 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
              v67 = v99;
              if ( v42 >= LODWORD(EnableInfo->max_length) )
                sub_1C2D6F4(v99, (unsigned int)v99, v100);
LABEL_125:
              ServantStatusVoiceListViewItem__SetLimitCount(
                (ServantStatusVoiceListViewItem_o *)current,
                v67,
                svtId,
                limitCount,
                *v45,
                v65,
                v66);
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v227,
                (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
              goto LABEL_121;
            }
LABEL_102:
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v227,
              (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          }
        }
      }
      voiceLabelSpec = 0;
LABEL_104:
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      if ( v42 >= LODWORD(EnableInfo->max_length) )
        goto LABEL_273;
      if ( !*v45 )
        goto LABEL_272;
      v81 = (*v45)->fields.voiceEntity;
      if ( !v81 )
        goto LABEL_272;
      v82 = (int)transformNameSprite;
      v83 = v81->fields.id;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48863712(v83, 0);
      transformNameSprite = v218;
      if ( !v218 )
        goto LABEL_272;
      transformNameSprite = (void *)VoicePlayCondMaster__isVoiceCond(v218, v82, v84, 81, 0);
      if ( !name )
        goto LABEL_272;
      v85 = *((_DWORD *)name + 12);
      v86 = v85 == 7 || v85 == 18 || v85 == 54 && ((unsigned __int8)transformNameSprite & 1) != 0;
      v87 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !v87 )
        goto LABEL_272;
      v88 = v87->fields._size;
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      if ( v42 >= LODWORD(EnableInfo->max_length) )
        goto LABEL_273;
      v89 = *v45;
      v90 = firstPriority;
      v91 = (int)transformNameSprite;
      v92 = (ServantStatusVoiceListViewItem_o *)sub_1C2D6DC(ServantStatusVoiceListViewItem_TypeInfo);
      ServantStatusVoiceListViewItem___ctor(v92, v88, v91, svtId, limitCount, v89, v90, v86, voiceLabelSpec, v208);
      v95 = v87->fields._items;
      v96 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v87->fields._version;
      if ( !v95 )
        goto LABEL_272;
      v97 = v87->fields._size;
      if ( (unsigned int)v97 >= LODWORD(v95->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v87,
          (Il2CppObject *)v92,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
      }
      else
      {
        v98 = &v95->obj.klass + v97;
        v87->fields._size = v97 + 1;
        v98[4] = (Il2CppClass *)v92;
        sub_1C2D434((CGThumbnailListItem_o *)(v98 + 4), (int32_t)v92, v93, v94);
      }
LABEL_121:
      v41 = EnableInfo->max_length;
      if ( (int)++v42 >= v41 )
        goto LABEL_133;
    }
  }
LABEL_233:
  v182 = this->fields.itemList;
  if ( !v182 )
    goto LABEL_272;
  v183 = v182->fields._size;
  v184 = sub_1C2D6DC(System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v184,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
  if ( v183 - 1 >= 1 )
  {
    for ( i = 0; i != v183 - 1; ++i )
    {
      transformNameSprite = this->fields.itemList;
      if ( !transformNameSprite )
        goto LABEL_272;
      transformNameSprite = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)transformNameSprite,
                              i,
                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !transformNameSprite )
        goto LABEL_272;
      v186 = (ServantStatusVoiceListViewItem_o *)transformNameSprite;
      v187 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)transformNameSprite + 304LL) < (unsigned int)v187
        || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)transformNameSprite + 200LL) + 8 * v187 - 8) != ServantStatusVoiceListViewItem_TypeInfo )
      {
        goto LABEL_272;
      }
      if ( ServantStatusVoiceListViewItem__get_OpenName((ServantStatusVoiceListViewItem_o *)transformNameSprite, v8) )
      {
        transformNameSprite = (void *)ServantStatusVoiceListViewItem__get_DispNum(v186, v8);
        if ( !(_DWORD)transformNameSprite )
        {
          if ( !v184 )
            goto LABEL_272;
          v188 = (const MethodInfo *)*(unsigned int *)(v184 + 24);
          v189 = *(_DWORD *)(v184 + 28) + 1;
          *(_DWORD *)(v184 + 24) = 0;
          *(_DWORD *)(v184 + 28) = v189;
          if ( (int)v188 >= 1 )
            System_Array__Clear(*(System_Array_o **)(v184 + 16), 0, (int32_t)v188, 0);
          v190 = i + 1;
          if ( i + 1 < v183 )
          {
            do
            {
              transformNameSprite = this->fields.itemList;
              if ( !transformNameSprite )
                goto LABEL_272;
              transformNameSprite = System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)transformNameSprite,
                                      v190,
                                      (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !transformNameSprite )
                goto LABEL_272;
              v191 = (Il2CppObject *)transformNameSprite;
              v192 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
              if ( *(unsigned __int8 *)(*(_QWORD *)transformNameSprite + 304LL) < (unsigned int)v192
                || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)transformNameSprite + 200LL)
                                                        + 8 * v192
                                                        - 8) != ServantStatusVoiceListViewItem_TypeInfo )
              {
                goto LABEL_272;
              }
              OpenName = ServantStatusVoiceListViewItem__get_OpenName(
                           (ServantStatusVoiceListViewItem_o *)transformNameSprite,
                           v8);
              v195 = ServantStatusVoiceListViewItem__get_OpenName(v186, v194);
              transformNameSprite = (void *)System_String__op_Equality(OpenName, v195, 0);
              if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              {
                v197 = *(_QWORD *)(v184 + 16);
                v198 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__;
                ++*(_DWORD *)(v184 + 28);
                if ( !v197 )
                  goto LABEL_272;
                v199 = *(int *)(v184 + 24);
                if ( (unsigned int)v199 >= *(_DWORD *)(v197 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)v184,
                    v191,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v198[4] + 192LL) + 112LL));
                }
                else
                {
                  v200 = v197 + 8 * v199;
                  *(_DWORD *)(v184 + 24) = v199 + 1;
                  *(_QWORD *)(v200 + 32) = v191;
                  sub_1C2D434((CGThumbnailListItem_o *)(v200 + 32), (int32_t)v191, (int32_t)v188, v196);
                }
              }
            }
            while ( v183 != ++v190 );
          }
          if ( *(int *)(v184 + 24) >= 1 )
          {
            ServantStatusVoiceListViewItem__SetNameNum(v186, 1, v188);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v223,
              (System_Collections_Generic_List_object__o *)v184,
              (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
            v201 = 2;
            for ( j = v223;
                  ;
                  ServantStatusVoiceListViewItem__SetNameNum(
                    (ServantStatusVoiceListViewItem_o *)j.fields._current,
                    v201++,
                    v204) )
            {
              v202 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &j,
                       (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
              if ( !v202 )
                break;
              if ( j.fields._current )
              {
                v205 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
                if ( j.fields._current->klass->_2.naturalAligment >= (unsigned int)v205
                  && (ServantStatusVoiceListViewItem_c *)j.fields._current->klass->_2.typeHierarchy[v205 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
                {
                  continue;
                }
              }
              sub_1C2D6EC(v202, v203);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &j,
              (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
          }
        }
      }
    }
  }
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transformNameSprite = LocalizationManager__Get((System_String_o *)StringLiteral_11994/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, 0);
  if ( !explanationLabel )
    goto LABEL_272;
  UILabel__set_text(explanationLabel, (System_String_o *)transformNameSprite, 0);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  transformNameSprite = LocalizationManager__Get(v209, 0);
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

  if ( (byte_4C24B8C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&ServantStatusVoiceListViewItem_TypeInfo);
    byte_4C24B8C = 1;
  }
  result = (ServantStatusVoiceListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantStatusVoiceListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v10; // x2
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

  if ( (byte_4C24B8A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_16105/*"_"*/);
    byte_4C24B8A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)ServantVoiceMaster__getEntity_42581868(
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
    sub_1C2D6F4(Instance, v9, v10);
  v13 = *((_QWORD *)&Instance->fields._DispLog + svtVoiceType);
  if ( !v13 )
    return 0;
  Instance = (DataManager_o *)System_Int32__ToString((int)voiceInfo + 52, 0);
  v14 = voiceInfo->fields.voiceEntity;
  if ( !v14
    || (v15 = (System_String_o *)Instance, (Instance = (DataManager_o *)v14->fields.id) == 0)
    || (v16 = (System_String_o *)((__int64 (__fastcall *)(DataManager_o *, const MethodInfo *))Instance->klass->vtable._3_ToString.methodPtr)(
                                   Instance,
                                   Instance->klass->vtable._3_ToString.method),
        Instance = (DataManager_o *)System_String__Concat_63496112(v15, (System_String_o *)StringLiteral_16105/*"_"*/, v16, 0),
        (v17 = *(_QWORD *)(v13 + 32)) == 0) )
  {
LABEL_25:
    sub_1C2D6EC(Instance, v9);
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
    Instance = (DataManager_o *)System_String__op_Equality(*(System_String_o **)(v23 + 16), v19, 0);
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


bool ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
        ServantStatusVoiceListViewManager_o *this,
        int32_t svtId,
        VoiceInfo_o *voiceInfo,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v9; // x2
  struct ServantVoiceCond_array *servantVoiceConds; // x22
  int max_length; // w8
  DataManager_o *v12; // x19
  unsigned int v13; // w23
  bool v14; // w25
  ServantVoiceCond_o *v15; // x8
  int32_t condType; // w9
  int value; // w26
  __int64 v18; // x20
  __int64 v19; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4C24B8B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C24B8B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
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
    v12 = Instance;
    v13 = 0;
    v14 = 1;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1C2D6F4(Instance, v7, v9);
      v15 = servantVoiceConds->m_Items[v13];
      if ( !v15 )
        break;
      condType = v15->fields.condType;
      if ( condType == 20 || condType == 3 )
        v14 = 0;
      value = v15->fields.value;
      if ( condType == 3 || condType == 20 )
      {
        if ( !v12 )
          break;
        v18 = *(__int64 *)((char *)&v12->fields.lockCountObj + 4);
        v19 = *(_QWORD *)&v12->fields.isFailedLoad;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v21.fields.currentCryptoKey = v18;
        *(_QWORD *)&v21.fields.fakeValue = v19;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v21, 0);
        if ( (int)Instance >= value )
          v14 = 1;
      }
      max_length = servantVoiceConds->max_length;
      if ( (int)++v13 >= max_length )
        return v14;
    }
LABEL_31:
    sub_1C2D6EC(Instance, v7);
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
  if ( (byte_4C24B92 & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1C2D490(&ServantStatusVoiceListViewItem_TypeInfo);
    byte_4C24B92 = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0
    || (naturalAligment = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewItem_TypeInfo )
  {
    sub_1C2D6EC(this, obj);
  }
  if ( LOBYTE(linkItem[1].fields.sortValue2B) )
  {
    callbackFunc = v5->fields.callbackFunc;
    v5->fields.callbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.callbackFunc, 0, (int32_t)method, v3);
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
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C24B91 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24B91 = 1;
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
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1C2D6EC(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v10,
          1,
          v10->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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

  if ( (byte_4C24B8F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_1C2D490(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C24B8F = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2D6EC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v12, v13);
      ServantStatusVoiceListViewObject__Init_37532864(
        (ServantStatusVoiceListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusVoiceListViewManager__RequestListObject_37532360(
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

  if ( (byte_4C24B90 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_1C2D490(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C24B90 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2D6EC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v10, v11);
      ServantStatusVoiceListViewObject__Init_37533472((ServantStatusVoiceListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  ServantStatusVoiceListViewManager__SetMode_37531388(this, mode, -1, v6);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusVoiceListViewManager__SetMode_37531388(
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

  if ( (byte_4C24B8E & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
    sub_1C2D490(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_1C2D490(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C24B8E = 1;
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
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    for ( i = v23; ; BYTE1(i.fields._current[12].monitor) = HIDWORD(i.fields._current[1].klass) == select )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v8 )
        break;
      if ( !i.fields._current )
        sub_1C2D6EC(v8, v9);
      naturalAligment = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
      if ( i.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (ServantStatusVoiceListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        sub_1C2D6EC(v8, v9);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
                                                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
        if ( !itemList )
          break;
        ServantStatusVoiceListViewObject__Init_37531260((ServantStatusVoiceListViewObject_o *)itemList, 4, v16);
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
                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
          v21 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(v21, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0);
          if ( !Item )
            break;
          ServantStatusVoiceListViewObject__Init_37532864((ServantStatusVoiceListViewObject_o *)Item, 5, v21, 0.1, v22);
          if ( ++v19 >= v18->fields._size )
            return;
        }
LABEL_30:
        sub_1C2D6EC(itemList, *(_QWORD *)&mode);
      }
      this->fields.callbackCount = 1;
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
        0.2,
        0);
    }
    else if ( mode == 1 )
    {
      ServantStatusVoiceListViewManager__RequestListObject_37532360(this, 3, v12);
    }
  }
}


void ServantStatusVoiceListViewManager__SetMode_37532304(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x3

  this->fields.callbackFunc2 = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  ServantStatusVoiceListViewManager__SetMode_37531388(this, mode, -1, v6);
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
  if ( (byte_4C24B8D & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1C2D490(&ServantStatusVoiceListViewObject_TypeInfo);
    byte_4C24B8D = 1;
  }
  if ( !obj
    || (naturalAligment = ServantStatusVoiceListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantStatusVoiceListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewObject_TypeInfo )
  {
    sub_1C2D6EC(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ServantStatusVoiceListViewObject__Init_37531260(
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

  if ( (byte_4C24B81 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    byte_4C24B81 = 1;
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
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
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

  if ( (byte_4C24B83 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C24B83 = 1;
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
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
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
  const MethodInfo *v15; // x3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C24B86 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24B86 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C2D6EC(0, v10);
      Item = (ListViewItem_o *)ServantStatusVoiceListViewObject__GetItem(
                                 (ServantStatusVoiceListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C2D6EC(0, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_43582756((ListViewManager_o *)this, Item, 0);
        if ( v16 )
        {
          if ( !v3 )
            sub_1C2D6EC(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C2D6EC(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C2D6EC(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C2D6EC(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C24B85 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24B85 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C2D6EC(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C2D6EC(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C24B82 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    byte_4C24B82 = 1;
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
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
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

  if ( (byte_4C24B84 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C24B84 = 1;
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
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A6FAD0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6FA78;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_4C24B93 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&ServantStatusVoiceListViewManager_ResultKind_TypeInfo);
    byte_4C24B93 = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(
             ServantStatusVoiceListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&result,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v13, callback, object);
}


void ServantStatusVoiceListViewManager_CallbackFunc__EndInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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