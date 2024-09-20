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
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  const MethodInfo *v32; // [xsp+8h] [xbp-98h]
  VoiceMaster_o *v33; // [xsp+18h] [xbp-88h]
  ServantVoiceRelationEntity_array *v34; // [xsp+20h] [xbp-80h]
  int32_t ascendOrder; // [xsp+28h] [xbp-78h]
  unsigned int v36; // [xsp+2Ch] [xbp-74h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4A58664 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A58664 = 1;
  }
  Instance = (VoiceInfo_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (VoiceInfo_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !relationList )
    goto LABEL_29;
  max_length = relationList->max_length;
  if ( max_length >= 1 )
  {
    v10 = (VoiceMaster_o *)Instance;
    v11 = 0;
    v12 = 1;
    ascendOrder = 0;
    v33 = (VoiceMaster_o *)Instance;
    v34 = relationList;
    while ( 1 )
    {
      if ( v11 >= max_length )
LABEL_30:
        sub_1B88814(Instance, v8);
      v13 = relationList->m_Items[v11];
      v36 = v11;
      if ( !v13 )
        goto LABEL_29;
      v15 = *(_QWORD *)&v13->fields.relationSvtId.fields.currentCryptoKey;
      v14 = *(_QWORD *)&v13->fields.relationSvtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v39.fields.currentCryptoKey = v15;
      *(_QWORD *)&v39.fields.fakeValue = v14;
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v39, 0LL);
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
      v10 = v33;
      relationList = v34;
      v12 = 0;
      max_length = v34->max_length;
      v11 = v36 + 1;
      if ( (int)(v36 + 1) >= max_length )
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
      *(_QWORD *)&v40.fields.currentCryptoKey = v21;
      *(_QWORD *)&v40.fields.fakeValue = v20;
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v40, 0LL);
      if ( v17 >= v16->max_length )
        goto LABEL_30;
      v22 = v16->m_Items[v17];
      v23 = (int)Instance;
      v24 = *firstPriority;
      v25 = (ServantStatusVoiceListViewItem_o *)sub_1B887FC(ServantStatusVoiceListViewItem_TypeInfo);
      ServantStatusVoiceListViewItem___ctor(v25, size, svtId, v23, 0, v22, v24, 0, 0, v32);
      items = itemList->fields._items;
      v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v30 = itemList->fields._size;
      if ( (unsigned int)v30 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v25,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + v30;
        itemList->fields._size = v30 + 1;
        v31[4] = (Il2CppClass *)v25;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v25, v26, v27);
      }
      if ( (__int64)++v17 >= (int)v16->max_length )
        goto LABEL_27;
    }
LABEL_29:
    sub_1B8880C(Instance, v8);
  }
}


void __fastcall ServantStatusVoiceListViewManager__Awake(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  void *scrollView; // x0
  float v4; // s1

  if ( (byte_4A58663 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4A58663 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)scrollView,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL )
  {
    sub_1B8880C(scrollView, method);
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
  int64_t UserId; // x21
  Il2CppObject *v16; // x20
  System_Collections_Generic_List_T__o *v17; // x19
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  System_Int32_array *v20; // x19
  __int64 v21; // x10
  VoiceMaster_o *v22; // x22
  __int64 v23; // x8
  unsigned __int64 v24; // x9
  Il2CppObject *MasterData_object; // x20
  int32_t maxLimitCount; // w21
  System_Int32_array *VoiceLimitCountList; // x19
  ServantVoiceRelationEntity_array *v28; // x20
  int32_t v29; // w0
  const MethodInfo *v30; // x4
  ServantVoiceRelationEntity_array *v31; // x20
  int32_t v32; // w0
  const MethodInfo *v33; // x4
  System_Int32_array *v34; // x9
  __int64 v35; // x8
  unsigned __int64 v36; // x19
  int32_t v37; // w20
  const MethodInfo *v38; // x4
  int v39; // w8
  _DWORD *v40; // x21
  unsigned int i; // w25
  char *v42; // x19
  VoiceInfo_o *v43; // x3
  VoiceInfo_o **v44; // x19
  VoiceInfo_o *v45; // t1
  struct VoiceEntity_o *voiceEntity; // x27
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
  int32_t v57; // w1
  bool voiceLabelSpec; // w22
  _BOOL8 v59; // x0
  const MethodInfo *v60; // x1
  __int64 v61; // x10
  Il2CppClass *v62; // x8
  __int64 v63; // x0
  __int64 v64; // x1
  struct VoiceEntity_o *v65; // x8
  int32_t v66; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x24
  __int64 v68; // x1
  System_String_o *v69; // x2
  struct VoiceEntity_o *v70; // x8
  int32_t v71; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v72; // x24
  System_String_o *v73; // x2
  int32_t v74; // w8
  System_Collections_Generic_List_object__o *itemList; // x23
  bool v76; // w28
  bool v77; // w20
  char v78; // w26
  int32_t size; // w24
  VoiceInfo_o *v80; // x29
  int32_t v81; // w19
  int32_t v82; // w27
  bool v83; // w28
  ServantStatusVoiceListViewItem_o *v84; // x26
  int32_t v85; // w2
  int32_t v86; // w3
  struct System_Object_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  __int64 v91; // x0
  int32_t v92; // w20
  int32_t v93; // w21
  int32_t v94; // w23
  BalanceConfig_c *v95; // x8
  Il2CppObject *v96; // x23
  Il2CppObject *v97; // x24
  int64_t v98; // x26
  int32_t v99; // w23
  BalanceConfig_c *v100; // x8
  _QWORD *v101; // x23
  unsigned __int64 v102; // x22
  System_Collections_Generic_List_object__o *v103; // x26
  int32_t v104; // w29
  int32_t v105; // w24
  VoiceInfo_o *v106; // x19
  int32_t ServantIdHyde; // w28
  ServantStatusVoiceListViewItem_o *v108; // x27
  int32_t v109; // w2
  int32_t v110; // w3
  struct System_Object_array *v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  Il2CppClass **v114; // x0
  int32_t v115; // w8
  int v116; // w23
  BalanceConfig_c *v117; // x8
  int32_t v118; // w23
  BalanceConfig_c *v119; // x8
  _QWORD *v120; // x23
  unsigned __int64 v121; // x22
  System_Collections_Generic_List_object__o *v122; // x26
  int32_t v123; // w29
  int32_t v124; // w24
  VoiceInfo_o *v125; // x19
  int32_t ServantIdMashu2; // w28
  ServantStatusVoiceListViewItem_o *v127; // x27
  int32_t v128; // w2
  int32_t v129; // w3
  struct System_Object_array *v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  Il2CppClass **v133; // x0
  int64_t v134; // x23
  BalanceConfig_c *v135; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t MashuTdGradeUpQuestId; // w24
  int32_t MashuTdGradeUpQuestPhase; // w26
  int32_t svtVoiceId; // w19
  int32_t v140; // w23
  BalanceConfig_c *v141; // x8
  _QWORD *v142; // x23
  unsigned __int64 v143; // x22
  System_Collections_Generic_List_object__o *v144; // x26
  int32_t v145; // w29
  int32_t v146; // w24
  VoiceInfo_o *v147; // x19
  int32_t ServantIdMashu3; // w28
  ServantStatusVoiceListViewItem_o *v149; // x27
  int32_t v150; // w2
  int32_t v151; // w3
  struct System_Object_array *v152; // x8
  _QWORD *v153; // x9
  __int64 v154; // x10
  Il2CppClass **v155; // x0
  ServantVoiceRelationEntity_array *v156; // x19
  int32_t v157; // w0
  const MethodInfo *v158; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v159; // x8
  int32_t v160; // w25
  __int64 v161; // x20
  int32_t j; // w21
  ServantStatusVoiceListViewItem_o *v163; // x22
  __int64 v164; // x10
  const MethodInfo *v165; // x2
  int v166; // w8
  int32_t v167; // w23
  Il2CppObject *v168; // x24
  __int64 v169; // x10
  System_String_o *OpenName; // x19
  const MethodInfo *v171; // x1
  System_String_o *v172; // x0
  int32_t v173; // w3
  __int64 v174; // x8
  _QWORD *v175; // x9
  __int64 v176; // x10
  __int64 v177; // x0
  int32_t v178; // w22
  _BOOL8 v179; // x0
  __int64 v180; // x1
  const MethodInfo *v181; // x2
  __int64 v182; // x11
  UILabel_o *explanationLabel; // x20
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v185; // [xsp+8h] [xbp-168h]
  System_String_o *v186; // [xsp+18h] [xbp-158h]
  UserServantCollectionEntity_o *EntityDefinitely; // [xsp+20h] [xbp-150h]
  unsigned __int64 v189; // [xsp+30h] [xbp-140h]
  ServantLimitAddMaster_o *v190; // [xsp+38h] [xbp-138h]
  System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList; // [xsp+40h] [xbp-130h]
  System_Int32_array *v192; // [xsp+48h] [xbp-128h]
  Il2CppObject *v193; // [xsp+50h] [xbp-120h]
  unsigned __int64 v194; // [xsp+58h] [xbp-118h]
  VoicePlayCondMaster_o *v195; // [xsp+60h] [xbp-110h]
  int32_t svtId; // [xsp+6Ch] [xbp-104h]
  int limitCount; // [xsp+84h] [xbp-ECh]
  System_Collections_Generic_List_Enumerator_object__o v200; // [xsp+88h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o k; // [xsp+A0h] [xbp-D0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+B8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v203; // [xsp+C0h] [xbp-B0h] BYREF
  ServantVoiceRelationEntity_array *afterRelationList; // [xsp+E0h] [xbp-90h] BYREF
  ServantVoiceRelationEntity_array *sameRelationList; // [xsp+E8h] [xbp-88h] BYREF
  ServantVoiceRelationEntity_array *beforeRelationList; // [xsp+F0h] [xbp-80h] BYREF
  int32_t firstPriority; // [xsp+FCh] [xbp-74h] BYREF
  UnityEngine_Vector4_o v208; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A58665 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_VoiceMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CondType_Kind__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CondType_Kind___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_CondType_Kind__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1B885B0(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&StringLiteral_2639/*"B050"*/);
    sub_1B885B0(&StringLiteral_15239/*"VOICE_EMPTY_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_11943/*"SERVANT_STATUS_VOICE_EXPLANATION"*/);
    byte_4A58665 = 1;
  }
  v4 = StringLiteral_15239/*"VOICE_EMPTY_MESSAGE"*/;
  firstPriority = 0;
  sameRelationList = 0LL;
  beforeRelationList = 0LL;
  afterRelationList = 0LL;
  memset(&v203, 0, sizeof(v203));
  entity = 0LL;
  memset(&k, 0, sizeof(k));
  defaultPanelCenter = this->fields.defaultPanelCenter;
  defaultPanelHeight = this->fields.defaultPanelHeight;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !mainInfo )
    goto LABEL_233;
  transformNameSprite = this->fields.transformNameSprite;
  if ( !transformNameSprite )
    goto LABEL_233;
  IsTransformServant_k__BackingField = mainInfo->fields._IsTransformServant_k__BackingField;
  transformNameSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transformNameSprite, 0LL);
  if ( !transformNameSprite )
    goto LABEL_233;
  if ( IsTransformServant_k__BackingField )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameSprite, 1, 0LL);
    v10 = this;
    transformNameLabel = this->fields.transformNameLabel;
    transformNameSprite = ServantStatusListViewItem__GetTransformName(mainInfo, 0LL);
    if ( !transformNameLabel )
      goto LABEL_233;
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
    goto LABEL_233;
  transformNameSprite = scrollView->fields.mPanel;
  if ( !transformNameSprite )
    goto LABEL_233;
  v208.fields.x = *((float *)transformNameSprite + 74);
  v208.fields.z = *((float *)transformNameSprite + 76);
  v208.fields.y = defaultPanelCenter;
  v208.fields.w = defaultPanelHeight;
  UIPanel__set_baseClipRegion((UIPanel_o *)transformNameSprite, v208, 0LL);
  transformNameSprite = this->fields.scrollView;
  if ( !transformNameSprite )
    goto LABEL_233;
  UIScrollView__ResetPosition((UIScrollView_o *)transformNameSprite, 0LL);
  this->fields.execObjectExtraFlag = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v186 = (System_String_o *)v4;
  UserId = NetworkManager__get_UserId(0LL);
  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
  if ( !Master_object )
    goto LABEL_233;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       UserId,
                       (int32_t)transformNameSprite,
                       0LL);
  v193 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_VoiceMaster___);
  v195 = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v16 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  firstPriority = 0;
  v17 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v17,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v17 )
    goto LABEL_233;
  transformNameSprite = v17;
  items = v17->fields._items;
  v19 = Method_System_Collections_Generic_List_CondType_Kind__Add__;
  ++v17->fields._version;
  v20 = changeSvtVoiceIdList;
  if ( !items )
    goto LABEL_233;
  v21 = *((int *)transformNameSprite + 6);
  v22 = (VoiceMaster_o *)v193;
  disableCondTypeList = (System_Collections_Generic_List_CondType_Kind__o *)transformNameSprite;
  if ( (unsigned int)v21 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)transformNameSprite,
      81,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    *((_DWORD *)transformNameSprite + 6) = v21 + 1;
    *((_DWORD *)items->m_Items + v21) = 81;
  }
  v190 = (ServantLimitAddMaster_o *)v16;
  if ( !changeSvtVoiceIdList )
LABEL_233:
    sub_1B8880C(transformNameSprite, v8);
  v23 = *(_QWORD *)&changeSvtVoiceIdList->max_length;
  if ( (int)v23 >= 1 )
  {
    v24 = 0LL;
    while ( 1 )
    {
      if ( v24 >= (unsigned int)v23 )
        goto LABEL_234;
      v189 = v24;
      svtId = v20->m_Items[v24 + 1];
      transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_233;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)transformNameSprite,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      transformNameSprite = EntityDefinitely;
      if ( !EntityDefinitely )
        goto LABEL_233;
      maxLimitCount = EntityDefinitely->fields.maxLimitCount;
      transformNameSprite = UserServantCollectionEntity__getCostumeList(EntityDefinitely, 0LL);
      if ( !MasterData_object )
        goto LABEL_233;
      VoiceLimitCountList = ServantLimitAddMaster__getVoiceLimitCountList(
                              (ServantLimitAddMaster_o *)MasterData_object,
                              svtId,
                              maxLimitCount,
                              (System_Int32_array *)transformNameSprite,
                              0LL);
      transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_233;
      v192 = VoiceLimitCountList;
      transformNameSprite = DataManager__GetMasterData_object_(
                              (DataManager_o *)transformNameSprite,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !transformNameSprite )
        goto LABEL_233;
      ServantVoiceRelationMaster__GetRelationList_39795048(
        (ServantVoiceRelationMaster_o *)transformNameSprite,
        &beforeRelationList,
        &sameRelationList,
        &afterRelationList,
        svtId,
        0LL);
      v28 = beforeRelationList;
      v29 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v28, v29, v30);
      v31 = sameRelationList;
      ++firstPriority;
      v32 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v31, v32, v33);
      v34 = VoiceLimitCountList;
      if ( !VoiceLimitCountList )
        goto LABEL_233;
      v35 = *(_QWORD *)&VoiceLimitCountList->max_length;
      if ( (int)v35 >= 1 )
        break;
LABEL_193:
      v156 = afterRelationList;
      v157 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v156, v157, v158);
      v20 = changeSvtVoiceIdList;
      LODWORD(v23) = changeSvtVoiceIdList->max_length;
      v24 = v189 + 1;
      if ( (__int64)(v189 + 1) >= (int)v23 )
        goto LABEL_194;
    }
    v36 = 0LL;
    while ( 1 )
    {
      if ( v36 >= (unsigned int)v35 )
        goto LABEL_234;
      v37 = v34->m_Items[v36 + 1];
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      if ( !v22 )
        goto LABEL_233;
      v194 = v36;
      limitCount = v37;
      transformNameSprite = VoiceMaster__getEnableInfo(
                              v22,
                              (int32_t)transformNameSprite,
                              svtId,
                              v37,
                              disableCondTypeList,
                              0,
                              0,
                              0LL);
      if ( !transformNameSprite )
        goto LABEL_233;
      v39 = *((_DWORD *)transformNameSprite + 6);
      v40 = transformNameSprite;
      if ( v39 >= 1 )
      {
        for ( i = 0; (int)i < v39; ++i )
        {
          if ( i >= v39 )
            goto LABEL_234;
          v42 = (char *)&v40[2 * i];
          v45 = (VoiceInfo_o *)*((_QWORD *)v42 + 4);
          v44 = (VoiceInfo_o **)(v42 + 32);
          v43 = v45;
          if ( !v45 )
            goto LABEL_233;
          voiceEntity = v43->fields.voiceEntity;
          if ( limitCount <= 10 )
          {
            if ( !voiceEntity )
              goto LABEL_233;
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
                      goto LABEL_233;
                    System_Collections_Generic_List_object___GetEnumerator(
                      (System_Collections_Generic_List_Enumerator_T__o *)&v200,
                      (System_Collections_Generic_List_object__o *)transformNameSprite,
                      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
                    v203 = v200;
                    do
                    {
                      v49 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                              &v203,
                              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                      if ( !v49 )
                        goto LABEL_87;
                      current = v203.fields._current;
                      if ( !v203.fields._current
                        || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                            LOBYTE(v203.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
                        || (ServantStatusVoiceListViewItem_c *)v203.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                      {
                        sub_1B8880C(v49, v50);
                      }
                      klass = v203.fields._current[10].klass;
                      if ( !klass )
                        sub_1B8880C(v49, v50);
                    }
                    while ( HIDWORD(klass->_1.namespaze) != 2
                         || LODWORD(klass->_1.this_arg.data) != 7
                         || HIDWORD(klass->_1.this_arg.data) != voiceEntity->fields.condValue
                         || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                              (ServantStatusVoiceListViewItem_o *)v203.fields._current,
                              v50) != svtId );
                    v54 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                    v57 = v54;
                    if ( i >= v40[6] )
                      sub_1B88814(v54, (unsigned int)v54);
                    goto LABEL_105;
                  }
LABEL_67:
                  if ( i >= v40[6] )
                    goto LABEL_234;
                  transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                                                  (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                                  svtId,
                                                  *v44,
                                                  v48);
                  if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
                    goto LABEL_102;
                  voiceLabelSpec = 1;
                  goto LABEL_89;
                }
              }
              else if ( condType == 18 )
              {
                if ( i >= v40[6] )
                  goto LABEL_234;
                transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                                (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                                svtId,
                                                limitCount,
                                                *v44,
                                                v38);
                if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
                  goto LABEL_67;
                transformNameSprite = this->fields.itemList;
                if ( !transformNameSprite )
                  goto LABEL_233;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v200,
                  (System_Collections_Generic_List_object__o *)transformNameSprite,
                  (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
                v203 = v200;
                do
                {
                  v59 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v203,
                          (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                  if ( !v59 )
                    goto LABEL_87;
                  current = v203.fields._current;
                  if ( !v203.fields._current
                    || (v61 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                        LOBYTE(v203.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v61)
                    || (ServantStatusVoiceListViewItem_c *)v203.fields._current->klass->_2.typeHierarchy[v61 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                  {
                    sub_1B8880C(v59, v60);
                  }
                  v62 = v203.fields._current[10].klass;
                  if ( !v62 )
                    sub_1B8880C(v59, v60);
                }
                while ( HIDWORD(v62->_1.namespaze) != 2
                     || LODWORD(v62->_1.this_arg.data) != 18
                     || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                          (ServantStatusVoiceListViewItem_o *)v203.fields._current,
                          v60) != svtId );
                v63 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                if ( i >= v40[6] )
                  sub_1B88814(v63, v64);
                if ( !*v44 )
                  sub_1B8880C(v63, v64);
                v65 = (*v44)->fields.voiceEntity;
                if ( !v65 )
                  sub_1B8880C(v63, v64);
                v66 = v63;
                id = v65->fields.id;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46485644(id, 0LL);
                if ( !v195 )
                  sub_1B8880C(0LL, v68);
                if ( !VoicePlayCondMaster__isVoiceCond(v195, v66, v69, 81, 0LL) )
                {
                  v91 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                  v57 = v91;
                  if ( i >= v40[6] )
                    sub_1B88814(v91, (unsigned int)v91);
LABEL_105:
                  ServantStatusVoiceListViewItem__SetLimitCount(
                    (ServantStatusVoiceListViewItem_o *)current,
                    v57,
                    svtId,
                    limitCount,
                    *v44,
                    v55,
                    v56);
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v203,
                    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
                  goto LABEL_102;
                }
LABEL_87:
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v203,
                  (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
              }
            }
          }
          voiceLabelSpec = 0;
LABEL_89:
          transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
          if ( i >= v40[6] )
            goto LABEL_234;
          if ( !*v44 )
            goto LABEL_233;
          v70 = (*v44)->fields.voiceEntity;
          if ( !v70 )
            goto LABEL_233;
          v71 = (int)transformNameSprite;
          v72 = v70->fields.id;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46485644(v72, 0LL);
          transformNameSprite = v195;
          if ( !v195 )
            goto LABEL_233;
          transformNameSprite = (void *)VoicePlayCondMaster__isVoiceCond(v195, v71, v73, 81, 0LL);
          if ( !voiceEntity )
            goto LABEL_233;
          v74 = voiceEntity->fields.condType;
          itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          v76 = v74 == 18;
          v77 = v74 == 7;
          if ( !itemList )
            goto LABEL_233;
          v78 = (char)transformNameSprite;
          size = itemList->fields._size;
          transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
          if ( i >= v40[6] )
            goto LABEL_234;
          v80 = *v44;
          v81 = firstPriority;
          v82 = (int)transformNameSprite;
          v83 = v78 & (v76 || v77);
          v84 = (ServantStatusVoiceListViewItem_o *)sub_1B887FC(ServantStatusVoiceListViewItem_TypeInfo);
          ServantStatusVoiceListViewItem___ctor(v84, size, v82, svtId, limitCount, v80, v81, v83, voiceLabelSpec, v185);
          v87 = itemList->fields._items;
          v88 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++itemList->fields._version;
          if ( !v87 )
            goto LABEL_233;
          v89 = itemList->fields._size;
          if ( (unsigned int)v89 >= v87->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              itemList,
              (Il2CppObject *)v84,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
          }
          else
          {
            v90 = &v87->obj.klass + v89;
            itemList->fields._size = v89 + 1;
            v90[4] = (Il2CppClass *)v84;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v90 + 4), (int32_t)v84, v85, v86);
          }
LABEL_102:
          v39 = v40[6];
        }
      }
      v92 = firstPriority;
      v93 = ++firstPriority;
      v94 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      v95 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v95 = BalanceConfig_TypeInfo;
      }
      v22 = (VoiceMaster_o *)v193;
      if ( v94 == v95->static_fields->ServantIdJekyll )
        break;
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      v116 = (int)transformNameSprite;
      v117 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v117 = BalanceConfig_TypeInfo;
      }
      if ( v116 == v117->static_fields->ServantIdMashu1 )
      {
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( TutorialFlag__Get_37688364(115, 0LL) )
        {
          v118 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
          v119 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v119 = BalanceConfig_TypeInfo;
          }
          transformNameSprite = VoiceMaster__getEnableInfo(
                                  (VoiceMaster_o *)v193,
                                  v118,
                                  v119->static_fields->ServantIdMashu2,
                                  limitCount,
                                  0LL,
                                  0,
                                  0,
                                  0LL);
          if ( !transformNameSprite )
            goto LABEL_233;
          v120 = transformNameSprite;
          if ( *((int *)transformNameSprite + 6) >= 1 )
          {
            v121 = 0LL;
            while ( 1 )
            {
              v122 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
              if ( !v122 )
                goto LABEL_233;
              v123 = v122->fields._size;
              transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
              v124 = (int)transformNameSprite;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              if ( v121 >= *((unsigned int *)v120 + 6) )
                break;
              v125 = (VoiceInfo_o *)v120[v121 + 4];
              ServantIdMashu2 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu2;
              v127 = (ServantStatusVoiceListViewItem_o *)sub_1B887FC(ServantStatusVoiceListViewItem_TypeInfo);
              ServantStatusVoiceListViewItem___ctor(
                v127,
                v123,
                v124,
                ServantIdMashu2,
                limitCount,
                v125,
                v93,
                0,
                0,
                v185);
              v130 = v122->fields._items;
              v131 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++v122->fields._version;
              if ( !v130 )
                goto LABEL_233;
              v132 = v122->fields._size;
              if ( (unsigned int)v132 >= v130->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v122,
                  (Il2CppObject *)v127,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
              }
              else
              {
                v133 = &v130->obj.klass + v132;
                v122->fields._size = v132 + 1;
                v133[4] = (Il2CppClass *)v127;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v133 + 4), (int32_t)v127, v128, v129);
              }
              if ( (__int64)++v121 >= *((int *)v120 + 6) )
                goto LABEL_160;
            }
LABEL_234:
            sub_1B88814(transformNameSprite, v8);
          }
LABEL_160:
          v93 = v92 + 2;
          firstPriority = v92 + 2;
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v134 = NetworkManager__get_UserId(0LL);
        v135 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v135 = BalanceConfig_TypeInfo;
        }
        v22 = (VoiceMaster_o *)v193;
        static_fields = v135->static_fields;
        MashuTdGradeUpQuestId = static_fields->MashuTdGradeUpQuestId;
        MashuTdGradeUpQuestPhase = static_fields->MashuTdGradeUpQuestPhase;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        transformNameSprite = (void *)CondType__IsQuestPhaseClear(
                                        v134,
                                        MashuTdGradeUpQuestId,
                                        MashuTdGradeUpQuestPhase,
                                        -1,
                                        0,
                                        0LL);
        if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
        {
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          transformNameSprite = v190;
          if ( !v190 )
            goto LABEL_233;
          transformNameSprite = (void *)ServantLimitAddMaster__TryGetEntity(
                                          v190,
                                          &entity,
                                          BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                          limitCount,
                                          0LL);
          if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_233;
            svtVoiceId = entity->fields.svtVoiceId;
            transformNameSprite = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              transformNameSprite = BalanceConfig_TypeInfo;
            }
            if ( svtVoiceId != *(_DWORD *)(*((_QWORD *)transformNameSprite + 23) + 352LL) )
            {
              v140 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
              v141 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v141 = BalanceConfig_TypeInfo;
              }
              transformNameSprite = VoiceMaster__getEnableInfo(
                                      (VoiceMaster_o *)v193,
                                      v140,
                                      v141->static_fields->ServantIdMashu3,
                                      limitCount,
                                      0LL,
                                      0,
                                      0,
                                      0LL);
              if ( !transformNameSprite )
                goto LABEL_233;
              v142 = transformNameSprite;
              if ( *((int *)transformNameSprite + 6) >= 1 )
              {
                v143 = 0LL;
                do
                {
                  v144 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  if ( !v144 )
                    goto LABEL_233;
                  v145 = v144->fields._size;
                  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                  v146 = (int)transformNameSprite;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( v143 >= *((unsigned int *)v142 + 6) )
                    goto LABEL_234;
                  v147 = (VoiceInfo_o *)v142[v143 + 4];
                  ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
                  v149 = (ServantStatusVoiceListViewItem_o *)sub_1B887FC(ServantStatusVoiceListViewItem_TypeInfo);
                  ServantStatusVoiceListViewItem___ctor(
                    v149,
                    v145,
                    v146,
                    ServantIdMashu3,
                    limitCount,
                    v147,
                    v93,
                    0,
                    0,
                    v185);
                  v152 = v144->fields._items;
                  v153 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++v144->fields._version;
                  if ( !v152 )
                    goto LABEL_233;
                  v154 = v144->fields._size;
                  if ( (unsigned int)v154 >= v152->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v144,
                      (Il2CppObject *)v149,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v153[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v155 = &v152->obj.klass + v154;
                    v144->fields._size = v154 + 1;
                    v155[4] = (Il2CppClass *)v149;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v155 + 4), (int32_t)v149, v150, v151);
                  }
                }
                while ( (__int64)++v143 < *((int *)v142 + 6) );
              }
              v115 = v93 + 1;
LABEL_139:
              v22 = (VoiceMaster_o *)v193;
              firstPriority = v115;
            }
          }
        }
      }
LABEL_176:
      v34 = v192;
      LODWORD(v35) = v192->max_length;
      v36 = v194 + 1;
      if ( (__int64)(v194 + 1) >= (int)v35 )
        goto LABEL_193;
    }
    v96 = DataMasterBase_object__object__object___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)v193,
            (Il2CppObject *)StringLiteral_2639/*"B050"*/,
            (const MethodInfo_311DC8C *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string__GetEntity__);
    transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !transformNameSprite )
      goto LABEL_233;
    v97 = DataManager__GetMasterData_object_(
            (DataManager_o *)transformNameSprite,
            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v98 = NetworkManager__get_UserId(0LL);
    transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
    if ( !v97 )
      goto LABEL_233;
    transformNameSprite = UserServantCollectionMaster__GetEntityDefinitely(
                            (UserServantCollectionMaster_o *)v97,
                            v98,
                            (int32_t)transformNameSprite,
                            0LL);
    if ( !v96 )
      goto LABEL_233;
    if ( LODWORD(v96[3].klass) == 17 )
    {
      if ( !transformNameSprite )
        goto LABEL_233;
      transformNameSprite = (void *)UserServantCollectionEntity__IsPlayed(
                                      (UserServantCollectionEntity_o *)transformNameSprite,
                                      HIDWORD(v96[3].klass),
                                      0LL);
      if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
        goto LABEL_176;
    }
    v99 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
    v100 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v100 = BalanceConfig_TypeInfo;
    }
    transformNameSprite = VoiceMaster__getEnableInfo(
                            (VoiceMaster_o *)v193,
                            v99,
                            v100->static_fields->ServantIdHyde,
                            limitCount,
                            0LL,
                            0,
                            0,
                            0LL);
    if ( !transformNameSprite )
      goto LABEL_233;
    v101 = transformNameSprite;
    if ( *((int *)transformNameSprite + 6) >= 1 )
    {
      v102 = 0LL;
      do
      {
        v103 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !v103 )
          goto LABEL_233;
        v104 = v103->fields._size;
        transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
        v105 = (int)transformNameSprite;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( v102 >= *((unsigned int *)v101 + 6) )
          goto LABEL_234;
        v106 = (VoiceInfo_o *)v101[v102 + 4];
        ServantIdHyde = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
        v108 = (ServantStatusVoiceListViewItem_o *)sub_1B887FC(ServantStatusVoiceListViewItem_TypeInfo);
        ServantStatusVoiceListViewItem___ctor(v108, v104, v105, ServantIdHyde, limitCount, v106, v93, 0, 0, v185);
        v111 = v103->fields._items;
        v112 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v103->fields._version;
        if ( !v111 )
          goto LABEL_233;
        v113 = v103->fields._size;
        if ( (unsigned int)v113 >= v111->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v103,
            (Il2CppObject *)v108,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
        }
        else
        {
          v114 = &v111->obj.klass + v113;
          v103->fields._size = v113 + 1;
          v114[4] = (Il2CppClass *)v108;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v114 + 4), (int32_t)v108, v109, v110);
        }
      }
      while ( (__int64)++v102 < *((int *)v101 + 6) );
    }
    v115 = v92 + 2;
    goto LABEL_139;
  }
LABEL_194:
  v159 = this->fields.itemList;
  if ( !v159 )
    goto LABEL_233;
  v160 = v159->fields._size;
  v161 = sub_1B887FC(System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v161,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
  if ( v160 - 1 >= 1 )
  {
    for ( j = 0; j != v160 - 1; ++j )
    {
      transformNameSprite = this->fields.itemList;
      if ( !transformNameSprite )
        goto LABEL_233;
      transformNameSprite = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)transformNameSprite,
                              j,
                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !transformNameSprite )
        goto LABEL_233;
      v163 = (ServantStatusVoiceListViewItem_o *)transformNameSprite;
      v164 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)transformNameSprite + 304LL) < (unsigned int)v164
        || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)transformNameSprite + 200LL) + 8 * v164 - 8) != ServantStatusVoiceListViewItem_TypeInfo )
      {
        goto LABEL_233;
      }
      if ( ServantStatusVoiceListViewItem__get_OpenName((ServantStatusVoiceListViewItem_o *)transformNameSprite, v8) )
      {
        transformNameSprite = (void *)ServantStatusVoiceListViewItem__get_DispNum(v163, v8);
        if ( !(_DWORD)transformNameSprite )
        {
          if ( !v161 )
            goto LABEL_233;
          v165 = (const MethodInfo *)*(unsigned int *)(v161 + 24);
          v166 = *(_DWORD *)(v161 + 28) + 1;
          *(_DWORD *)(v161 + 24) = 0;
          *(_DWORD *)(v161 + 28) = v166;
          if ( (int)v165 >= 1 )
            System_Array__Clear(*(System_Array_o **)(v161 + 16), 0, (int32_t)v165, 0LL);
          v167 = j + 1;
          if ( j + 1 < v160 )
          {
            do
            {
              transformNameSprite = this->fields.itemList;
              if ( !transformNameSprite )
                goto LABEL_233;
              transformNameSprite = System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)transformNameSprite,
                                      v167,
                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !transformNameSprite )
                goto LABEL_233;
              v168 = (Il2CppObject *)transformNameSprite;
              v169 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)transformNameSprite + 304LL) < (unsigned int)v169
                || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)transformNameSprite + 200LL)
                                                        + 8 * v169
                                                        - 8) != ServantStatusVoiceListViewItem_TypeInfo )
              {
                goto LABEL_233;
              }
              OpenName = ServantStatusVoiceListViewItem__get_OpenName(
                           (ServantStatusVoiceListViewItem_o *)transformNameSprite,
                           v8);
              v172 = ServantStatusVoiceListViewItem__get_OpenName(v163, v171);
              transformNameSprite = (void *)System_String__op_Equality(OpenName, v172, 0LL);
              if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              {
                v174 = *(_QWORD *)(v161 + 16);
                v175 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__;
                ++*(_DWORD *)(v161 + 28);
                if ( !v174 )
                  goto LABEL_233;
                v176 = *(int *)(v161 + 24);
                if ( (unsigned int)v176 >= *(_DWORD *)(v174 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)v161,
                    v168,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v175[4] + 192LL) + 112LL));
                }
                else
                {
                  v177 = v174 + 8 * v176;
                  *(_DWORD *)(v161 + 24) = v176 + 1;
                  *(_QWORD *)(v177 + 32) = v168;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v177 + 32), (int32_t)v168, (int32_t)v165, v173);
                }
              }
            }
            while ( v160 != ++v167 );
          }
          if ( *(int *)(v161 + 24) >= 1 )
          {
            ServantStatusVoiceListViewItem__SetNameNum(v163, 1, v165);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v200,
              (System_Collections_Generic_List_object__o *)v161,
              (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
            v178 = 2;
            for ( k = v200;
                  ;
                  ServantStatusVoiceListViewItem__SetNameNum(
                    (ServantStatusVoiceListViewItem_o *)k.fields._current,
                    v178++,
                    v181) )
            {
              v179 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &k,
                       (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
              if ( !v179 )
                break;
              if ( k.fields._current )
              {
                v182 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
                if ( LOBYTE(k.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v182
                  && (ServantStatusVoiceListViewItem_c *)k.fields._current->klass->_2.typeHierarchy[v182 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
                {
                  continue;
                }
              }
              sub_1B8880C(v179, v180);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &k,
              (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
          }
        }
      }
    }
  }
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transformNameSprite = LocalizationManager__Get((System_String_o *)StringLiteral_11943/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_233;
  UILabel__set_text(explanationLabel, (System_String_o *)transformNameSprite, 0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  transformNameSprite = LocalizationManager__Get(v186, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_233;
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

  if ( (byte_4A58668 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&ServantStatusVoiceListViewItem_TypeInfo);
    byte_4A58668 = 1;
  }
  result = (ServantStatusVoiceListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantStatusVoiceListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4A58666 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    byte_4A58666 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)ServantVoiceMaster__getEntity_39787432(
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
    sub_1B88814(Instance, v9);
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
        Instance = (DataManager_o *)System_String__Concat_61718292(
                                      v14,
                                      (System_String_o *)StringLiteral_16123/*"_"*/,
                                      v15,
                                      0LL),
        (v16 = *(_QWORD *)(v12 + 32)) == 0) )
  {
LABEL_25:
    sub_1B8880C(Instance, v9);
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
  int64_t Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21
  struct ServantVoiceCond_array *servantVoiceConds; // x22
  int max_length; // w8
  int64_t v11; // x19
  unsigned int v12; // w23
  bool v13; // w25
  ServantVoiceCond_o *v14; // x8
  int32_t condType; // w9
  int value; // w26
  __int64 v17; // x20
  __int64 v18; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4A58667 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A58667 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_27;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                        (UserServantCollectionMaster_o *)MasterData_object,
                        Instance,
                        svtId,
                        0LL);
  if ( !voiceInfo )
    goto LABEL_27;
  servantVoiceConds = voiceInfo->fields.servantVoiceConds;
  if ( !servantVoiceConds )
    goto LABEL_27;
  max_length = servantVoiceConds->max_length;
  if ( max_length >= 1 )
  {
    v11 = Instance;
    v12 = 0;
    v13 = 1;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1B88814(Instance, v7);
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
        v17 = *(_QWORD *)(v11 + 100);
        v18 = *(_QWORD *)(v11 + 108);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v20.fields.currentCryptoKey = v17;
        *(_QWORD *)&v20.fields.fakeValue = v18;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v20, 0LL);
        if ( (int)Instance >= value )
          v13 = 1;
      }
      max_length = servantVoiceConds->max_length;
      if ( (int)++v12 >= max_length )
        return v13;
    }
LABEL_27:
    sub_1B8880C(Instance, v7);
  }
  return 1;
}


void __fastcall ServantStatusVoiceListViewManager__OnClickListView(
        ServantStatusVoiceListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusVoiceListViewManager_o *v5; // x20
  struct ListViewItem_o *linkItem; // x21
  __int64 methodPtr_low; // x10
  struct ServantStatusVoiceListViewManager_CallbackFunc_o *callbackFunc; // x22
  int v9; // w20
  unsigned int Index; // w0
  __int64 v11; // x1

  v5 = this;
  if ( (byte_4A5866E & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1B885B0(&ServantStatusVoiceListViewItem_TypeInfo);
    byte_4A5866E = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0LL
    || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( LOBYTE(linkItem[1].fields.sortValue2B) )
  {
    callbackFunc = v5->fields.callbackFunc;
    v5->fields.callbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
    {
      v9 = BYTE1(linkItem[1].fields.sortValue2B);
      Index = ListViewObject__get_Index(obj, 0LL);
      if ( v9 )
        v11 = 2LL;
      else
        v11 = 1LL;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        v11,
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
  int32_t v8; // w2
  int32_t v9; // w3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4A5866D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5866D = 1;
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
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1B8880C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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

  if ( (byte_4A5866B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_1B885B0(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5866B = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v12, v13);
      ServantStatusVoiceListViewObject__Init_34668520(
        (ServantStatusVoiceListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__RequestListObject_34668016(
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

  if ( (byte_4A5866C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_1B885B0(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5866C = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v10, v11);
      ServantStatusVoiceListViewObject__Init_34669128((ServantStatusVoiceListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


void __fastcall ServantStatusVoiceListViewManager__SetMode(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        ServantStatusVoiceListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x3

  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  ServantStatusVoiceListViewManager__SetMode_34667044(this, mode, -1, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__SetMode_34667044(
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

  if ( (byte_4A5866A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
    sub_1B885B0(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_1B885B0(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5866A = 1;
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
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    for ( i = v23; ; BYTE1(i.fields._current[12].klass) = HIDWORD(i.fields._current[1].klass) == select )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v8 )
        break;
      if ( !i.fields._current )
        sub_1B8880C(v8, v9);
      methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(i.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (ServantStatusVoiceListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        sub_1B8880C(v8, v9);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
        if ( !itemList )
          break;
        ServantStatusVoiceListViewObject__Init_34666916((ServantStatusVoiceListViewObject_o *)itemList, 4, v16);
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
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
          v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(v21, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
            break;
          ServantStatusVoiceListViewObject__Init_34668520((ServantStatusVoiceListViewObject_o *)Item, 5, v21, 0.1, v22);
          if ( ++v19 >= v18->fields._size )
            return;
        }
LABEL_30:
        sub_1B8880C(itemList, *(_QWORD *)&mode);
      }
      this->fields.callbackCount = 1;
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
        0.2,
        0LL);
    }
    else if ( mode == 1 )
    {
      ServantStatusVoiceListViewManager__RequestListObject_34668016(this, 3, v12);
    }
  }
}


void __fastcall ServantStatusVoiceListViewManager__SetMode_34667960(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x3

  this->fields.callbackFunc2 = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  ServantStatusVoiceListViewManager__SetMode_34667044(this, mode, -1, v6);
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
  if ( (byte_4A58669 & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1B885B0(&ServantStatusVoiceListViewObject_TypeInfo);
    byte_4A58669 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusVoiceListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ServantStatusVoiceListViewObject__Init_34666916(
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

  if ( (byte_4A5865D & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    byte_4A5865D = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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

  if ( (byte_4A5865F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5865F = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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
  int32_t v14; // w2
  int32_t v15; // w3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A58662 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58662 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)ServantStatusVoiceListViewObject__GetItem(
                                 (ServantStatusVoiceListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v16 )
        {
          if ( !v3 )
            sub_1B8880C(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A58661 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58661 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4A5865E & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    byte_4A5865E = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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

  if ( (byte_4A58660 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A58660 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19CB7B4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CB75C;
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
  if ( (byte_4A5866F & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&ServantStatusVoiceListViewManager_ResultKind_TypeInfo);
    byte_4A5866F = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(
             ServantStatusVoiceListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&result,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall ServantStatusVoiceListViewManager_CallbackFunc__EndInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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