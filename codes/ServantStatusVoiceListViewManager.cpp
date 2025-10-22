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
  const MethodInfo *v27; // x3
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

  if ( (byte_4C5443B & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5443B = 1;
  }
  Instance = (VoiceInfo_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (VoiceInfo_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_VoiceMaster___);
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
        sub_1C3E7C8(Instance, v8);
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
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v39, 0);
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
      v10 = v33;
      relationList = v34;
      v12 = 0;
      max_length = v34->max_length;
      v11 = v36 + 1;
      if ( (int)(v36 + 1) >= max_length )
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
      *(_QWORD *)&v40.fields.currentCryptoKey = v21;
      *(_QWORD *)&v40.fields.fakeValue = v20;
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v40, 0);
      if ( v17 >= LODWORD(v16->max_length) )
        goto LABEL_30;
      v22 = v16->m_Items[v17];
      v23 = (int)Instance;
      v24 = *firstPriority;
      v25 = (ServantStatusVoiceListViewItem_o *)sub_1C3E7B0(ServantStatusVoiceListViewItem_TypeInfo);
      ServantStatusVoiceListViewItem___ctor(v25, size, svtId, v23, 0, v22, v24, 0, 0, v32);
      items = itemList->fields._items;
      v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v30 = itemList->fields._size;
      if ( (unsigned int)v30 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v25,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + v30;
        itemList->fields._size = v30 + 1;
        v31[4] = (Il2CppClass *)v25;
        sub_1C3E508((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v25, v26, v27);
      }
      if ( (__int64)++v17 >= SLODWORD(v16->max_length) )
        goto LABEL_27;
    }
LABEL_29:
    sub_1C3E7C0(Instance, v8);
  }
}


void ServantStatusVoiceListViewManager__Awake(ServantStatusVoiceListViewManager_o *this, const MethodInfo *method)
{
  void *scrollView; // x0
  float v4; // s1

  if ( (byte_4C5443A & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4C5443A = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)scrollView,
                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0 )
  {
    sub_1C3E7C0(scrollView, method);
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
  int32_t v64; // w5
  const MethodInfo *v65; // x6
  int32_t v66; // w1
  bool voiceLabelSpec; // w21
  _BOOL8 v68; // x0
  const MethodInfo *v69; // x1
  __int64 v70; // x10
  _DWORD *v71; // x8
  __int64 v72; // x0
  __int64 v73; // x1
  struct VoiceEntity_o *voiceEntity; // x8
  int32_t v75; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x19
  __int64 v77; // x1
  System_String_o *v78; // x2
  struct VoiceEntity_o *v79; // x8
  int32_t v80; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v81; // x19
  System_String_o *v82; // x2
  int v83; // w8
  bool v84; // w25
  System_Collections_Generic_List_object__o *v85; // x23
  int32_t v86; // w28
  VoiceInfo_o *v87; // x29
  int32_t v88; // w26
  int32_t v89; // w19
  ServantStatusVoiceListViewItem_o *v90; // x20
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  struct System_Object_array *v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  Il2CppClass **v96; // x0
  __int64 v97; // x0
  int32_t v98; // w22
  int32_t v99; // w21
  int32_t v100; // w19
  BalanceConfig_c *v101; // x8
  Il2CppObject *v102; // x20
  NetworkManager_c *v103; // x0
  int64_t v104; // x19
  UserServantCollectionEntity_o *v105; // x23
  _BOOL8 v106; // x0
  __int64 v107; // x1
  int32_t v108; // w20
  BalanceConfig_c *v109; // x0
  VoiceInfo_array *v110; // x0
  __int64 v111; // x1
  VoiceInfo_array *v112; // x23
  unsigned __int64 v113; // x26
  VoiceInfo_o **m_Items; // x29
  System_Collections_Generic_List_object__o *itemList; // x27
  int32_t v116; // w28
  __int64 v117; // x1
  int32_t v118; // w20
  BalanceConfig_c *v119; // x0
  VoiceInfo_o *v120; // x24
  int32_t ServantIdHyde; // w19
  ServantStatusVoiceListViewItem_o *v122; // x25
  __int64 v123; // x0
  __int64 v124; // x1
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  struct System_Object_array *v127; // x8
  _QWORD *v128; // x9
  __int64 v129; // x10
  Il2CppClass **v130; // x0
  int v131; // w19
  BalanceConfig_c *v132; // x8
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t v134; // w19
  BalanceConfig_c *v135; // x8
  int32_t v136; // w29
  _QWORD *v137; // x23
  unsigned __int64 v138; // x21
  System_Collections_Generic_List_object__o *v139; // x27
  int32_t v140; // w25
  int32_t v141; // w28
  VoiceInfo_o *v142; // x19
  int32_t ServantIdMashu2; // w24
  ServantStatusVoiceListViewItem_o *v144; // x20
  int32_t v145; // w2
  const MethodInfo *v146; // x3
  struct System_Object_array *v147; // x8
  _QWORD *v148; // x9
  __int64 v149; // x10
  Il2CppClass **v150; // x0
  NetworkManager_c *v151; // x0
  BalanceConfig_c *v152; // x8
  int64_t v153; // x20
  struct BalanceConfig_StaticFields *v154; // x8
  int32_t MashuTdGradeUpQuestId; // w19
  int32_t MashuTdGradeUpQuestPhase; // w23
  int32_t svtVoiceId; // w19
  int32_t v158; // w19
  int32_t v159; // w26
  BalanceConfig_c *v160; // x8
  _QWORD *v161; // x23
  unsigned __int64 v162; // x21
  System_Collections_Generic_List_object__o *v163; // x27
  int32_t v164; // w25
  int32_t v165; // w28
  VoiceInfo_o *v166; // x19
  int32_t ServantIdMashu3; // w24
  ServantStatusVoiceListViewItem_o *v168; // x20
  int32_t v169; // w2
  const MethodInfo *v170; // x3
  struct System_Object_array *v171; // x8
  _QWORD *v172; // x9
  __int64 v173; // x10
  Il2CppClass **v174; // x0
  ServantVoiceRelationEntity_array *v175; // x19
  int32_t v176; // w0
  const MethodInfo *v177; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v178; // x8
  int32_t v179; // w25
  __int64 v180; // x20
  int32_t i; // w21
  ServantStatusVoiceListViewItem_o *v182; // x22
  __int64 v183; // x10
  const MethodInfo *v184; // x2
  int v185; // w8
  int32_t v186; // w23
  Il2CppObject *v187; // x24
  __int64 v188; // x10
  System_String_o *OpenName; // x19
  const MethodInfo *v190; // x1
  System_String_o *v191; // x0
  const MethodInfo *v192; // x3
  __int64 v193; // x8
  _QWORD *v194; // x9
  __int64 v195; // x10
  __int64 v196; // x0
  int32_t v197; // w22
  _BOOL8 v198; // x0
  __int64 v199; // x1
  const MethodInfo *v200; // x2
  __int64 v201; // x11
  UILabel_o *explanationLabel; // x20
  UILabel_o *emptyMessageLabel; // x19
  const MethodInfo *v204; // [xsp+8h] [xbp-188h]
  System_String_o *v205; // [xsp+20h] [xbp-170h]
  UserServantCollectionEntity_o *EntityDefinitely; // [xsp+28h] [xbp-168h]
  ServantLimitAddMaster_o *v208; // [xsp+38h] [xbp-158h]
  unsigned __int64 v209; // [xsp+40h] [xbp-150h]
  System_Collections_Generic_List_T__o *v210; // [xsp+48h] [xbp-148h]
  System_Int32_array *v211; // [xsp+50h] [xbp-140h]
  VoiceMaster_o *v212; // [xsp+58h] [xbp-138h]
  unsigned __int64 v213; // [xsp+60h] [xbp-130h]
  VoicePlayCondMaster_o *v214; // [xsp+68h] [xbp-128h]
  int32_t svtId; // [xsp+78h] [xbp-118h]
  int limitCount; // [xsp+7Ch] [xbp-114h]
  System_Collections_Generic_List_Enumerator_object__o v219; // [xsp+88h] [xbp-108h] BYREF
  System_Collections_Generic_List_Enumerator_object__o j; // [xsp+A0h] [xbp-F0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+B8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v222; // [xsp+C0h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v223; // [xsp+E0h] [xbp-B0h] BYREF
  ServantVoiceRelationEntity_array *afterRelationList; // [xsp+100h] [xbp-90h] BYREF
  ServantVoiceRelationEntity_array *sameRelationList; // [xsp+108h] [xbp-88h] BYREF
  ServantVoiceRelationEntity_array *beforeRelationList; // [xsp+110h] [xbp-80h] BYREF
  int32_t firstPriority; // [xsp+11Ch] [xbp-74h] BYREF
  UnityEngine_Vector4_o v228; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C5443C & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_VoiceMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_VoiceEntity__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_CondType_Kind__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_VoiceEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_VoiceEntity__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_VoiceEntity___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_CondType_Kind___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_VoiceEntity__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_CondType_Kind__TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C3E564(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&TutorialFlag_TypeInfo);
    sub_1C3E564(&StringLiteral_15255/*"VOICE_EMPTY_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_12003/*"SERVANT_STATUS_VOICE_EXPLANATION"*/);
    byte_4C5443C = 1;
  }
  v4 = StringLiteral_15255/*"VOICE_EMPTY_MESSAGE"*/;
  firstPriority = 0;
  sameRelationList = 0;
  beforeRelationList = 0;
  afterRelationList = 0;
  memset(&v223, 0, sizeof(v223));
  memset(&v222, 0, sizeof(v222));
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
  v228.fields.x = *((float *)transformNameSprite + 74);
  v228.fields.z = *((float *)transformNameSprite + 76);
  v228.fields.y = defaultPanelCenter;
  v228.fields.w = defaultPanelHeight;
  UIPanel__set_baseClipRegion((UIPanel_o *)transformNameSprite, v228, 0);
  transformNameSprite = this->fields.scrollView;
  if ( !transformNameSprite )
    goto LABEL_272;
  UIScrollView__ResetPosition((UIScrollView_o *)transformNameSprite, 0);
  this->fields.execObjectExtraFlag = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  v15 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v15 = NetworkManager_TypeInfo;
  }
  v205 = (System_String_o *)v4;
  userIdNumber = v15->static_fields->userIdNumber;
  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
  if ( !Master_object )
    goto LABEL_272;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       userIdNumber,
                       (int32_t)transformNameSprite,
                       0);
  v17 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_VoiceMaster___);
  v214 = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v18 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  firstPriority = 0;
  v19 = (System_Collections_Generic_List_T__o *)sub_1C3E7B0(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v19,
    (const MethodInfo_379A414 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
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
      *(const MethodInfo_379AC68 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v19->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  v23 = changeSvtVoiceIdList;
  v208 = (ServantLimitAddMaster_o *)v18;
  if ( !changeSvtVoiceIdList )
LABEL_272:
    sub_1C3E7C0(transformNameSprite, v8);
  max_length = changeSvtVoiceIdList->max_length;
  if ( (int)max_length >= 1 )
  {
    v25 = 0;
    v212 = (VoiceMaster_o *)v17;
    v210 = v19;
    while ( 1 )
    {
      if ( v25 >= (unsigned int)max_length )
        goto LABEL_273;
      v209 = v25;
      svtId = v23->m_Items[v25];
      transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_272;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)transformNameSprite,
                            (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
      transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_272;
      transformNameSprite = DataManager__GetMasterData_object_(
                              (DataManager_o *)transformNameSprite,
                              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !transformNameSprite )
        goto LABEL_272;
      ServantVoiceRelationMaster__GetRelationList_42875844(
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
      v175 = afterRelationList;
      v176 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v175, v176, v177);
      v23 = changeSvtVoiceIdList;
      LODWORD(max_length) = changeSvtVoiceIdList->max_length;
      v25 = v209 + 1;
      if ( (__int64)(v209 + 1) >= (int)max_length )
        goto LABEL_233;
    }
    v36 = 0;
    v211 = VoiceLimitCountList;
    while ( 1 )
    {
      if ( v36 >= (unsigned int)v35 )
        goto LABEL_273;
      v37 = VoiceLimitCountList->m_Items[v36];
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      if ( !v17 )
        goto LABEL_272;
      v213 = v36;
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
      v39 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_VoiceEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v39,
        (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_VoiceEntity___ctor__);
      if ( !EnableInfo )
        goto LABEL_272;
      v40 = EnableInfo->max_length;
      if ( v40 >= 1 )
        break;
LABEL_133:
      v98 = firstPriority;
      v99 = ++firstPriority;
      v100 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      v101 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v101 = BalanceConfig_TypeInfo;
      }
      if ( v100 == v101->static_fields->ServantIdJekyll )
      {
        transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transformNameSprite )
          goto LABEL_272;
        v102 = DataManager__GetMasterData_object_(
                 (DataManager_o *)transformNameSprite,
                 (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C50AE2 )
        {
          sub_1C3E564(&NetworkManager_TypeInfo);
          byte_4C50AE2 = 1;
        }
        v103 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v103 = NetworkManager_TypeInfo;
        }
        v104 = v103->static_fields->userIdNumber;
        transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
        if ( !v102 )
          goto LABEL_272;
        v105 = UserServantCollectionMaster__GetEntityDefinitely(
                 (UserServantCollectionMaster_o *)v102,
                 v104,
                 (int32_t)transformNameSprite,
                 0);
        transformNameSprite = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v39, 0);
        if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
        {
          if ( !v39 )
            goto LABEL_272;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v219,
            v39,
            (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_VoiceEntity__GetEnumerator__);
          v222 = v219;
          while ( 1 )
          {
            v106 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v222,
                     (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_VoiceEntity__MoveNext__);
            if ( !v106 )
              break;
            if ( !v222.fields._current )
              sub_1C3E7C0(v106, v107);
            if ( !v105 )
              sub_1C3E7C0(v106, v107);
            if ( UserServantCollectionEntity__IsPlayed(v105, HIDWORD(v222.fields._current[3].klass), 0) )
            {
              v108 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
              v109 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v109 = BalanceConfig_TypeInfo;
              }
              v110 = VoiceMaster__getEnableInfo(v212, v108, v109->static_fields->ServantIdHyde, limitCount, 0, 0, 0, 0);
              v112 = v110;
              if ( !v110 )
                sub_1C3E7C0(0, v111);
              if ( SLODWORD(v110->max_length) >= 1 )
              {
                v113 = 0;
                m_Items = v110->m_Items;
                do
                {
                  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  if ( !itemList )
                    sub_1C3E7C0(v110, v111);
                  v116 = itemList->fields._size;
                  v118 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                  v119 = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v119 = BalanceConfig_TypeInfo;
                  }
                  if ( v113 >= LODWORD(v112->max_length) )
                    sub_1C3E7C8(v119, v117);
                  v120 = m_Items[v113];
                  ServantIdHyde = v119->static_fields->ServantIdHyde;
                  v122 = (ServantStatusVoiceListViewItem_o *)sub_1C3E7B0(ServantStatusVoiceListViewItem_TypeInfo);
                  ServantStatusVoiceListViewItem___ctor(
                    v122,
                    v116,
                    v118,
                    ServantIdHyde,
                    limitCount,
                    v120,
                    v99,
                    0,
                    0,
                    v204);
                  v127 = itemList->fields._items;
                  v128 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++itemList->fields._version;
                  if ( !v127 )
                    sub_1C3E7C0(v123, v124);
                  v129 = itemList->fields._size;
                  if ( (unsigned int)v129 >= LODWORD(v127->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      itemList,
                      (Il2CppObject *)v122,
                      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v130 = &v127->obj.klass + v129;
                    itemList->fields._size = v129 + 1;
                    v130[4] = (Il2CppClass *)v122;
                    sub_1C3E508((CGThumbnailListItem_o *)(v130 + 4), (int32_t)v122, v125, v126);
                  }
                  ++v113;
                }
                while ( (__int64)v113 < SLODWORD(v112->max_length) );
              }
              firstPriority = v98 + 2;
              break;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v222,
            (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_VoiceEntity__Dispose__);
        }
      }
      else
      {
        transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
        v131 = (int)transformNameSprite;
        v132 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v132 = BalanceConfig_TypeInfo;
        }
        static_fields = v132->static_fields;
        if ( v131 == static_fields->ServantIdMashu1 )
        {
          if ( !v132->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v132);
            static_fields = BalanceConfig_TypeInfo->static_fields;
          }
          if ( limitCount != static_fields->SpecialLimitCountPLD )
          {
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__Get_40473944(115, 0) )
            {
              v134 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
              v135 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v135 = BalanceConfig_TypeInfo;
              }
              v136 = v99;
              transformNameSprite = VoiceMaster__getEnableInfo(
                                      v212,
                                      v134,
                                      v135->static_fields->ServantIdMashu2,
                                      limitCount,
                                      0,
                                      0,
                                      0,
                                      0);
              if ( !transformNameSprite )
                goto LABEL_272;
              v137 = transformNameSprite;
              if ( *((int *)transformNameSprite + 6) >= 1 )
              {
                v138 = 0;
                while ( 1 )
                {
                  v139 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  if ( !v139 )
                    goto LABEL_272;
                  v140 = v139->fields._size;
                  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                  v141 = (int)transformNameSprite;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( v138 >= *((unsigned int *)v137 + 6) )
                    break;
                  v142 = (VoiceInfo_o *)v137[v138 + 4];
                  ServantIdMashu2 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu2;
                  v144 = (ServantStatusVoiceListViewItem_o *)sub_1C3E7B0(ServantStatusVoiceListViewItem_TypeInfo);
                  ServantStatusVoiceListViewItem___ctor(
                    v144,
                    v140,
                    v141,
                    ServantIdMashu2,
                    limitCount,
                    v142,
                    v136,
                    0,
                    0,
                    v204);
                  v147 = v139->fields._items;
                  v148 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++v139->fields._version;
                  if ( !v147 )
                    goto LABEL_272;
                  v149 = v139->fields._size;
                  if ( (unsigned int)v149 >= LODWORD(v147->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v139,
                      (Il2CppObject *)v144,
                      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v148[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v150 = &v147->obj.klass + v149;
                    v139->fields._size = v149 + 1;
                    v150[4] = (Il2CppClass *)v144;
                    sub_1C3E508((CGThumbnailListItem_o *)(v150 + 4), (int32_t)v144, v145, v146);
                  }
                  if ( (__int64)++v138 >= *((int *)v137 + 6) )
                    goto LABEL_196;
                }
LABEL_273:
                sub_1C3E7C8(transformNameSprite, v8);
              }
LABEL_196:
              v99 = v98 + 2;
              firstPriority = v98 + 2;
            }
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C50AE2 )
            {
              sub_1C3E564(&NetworkManager_TypeInfo);
              byte_4C50AE2 = 1;
            }
            v151 = NetworkManager_TypeInfo;
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
            v154 = v152->static_fields;
            MashuTdGradeUpQuestId = v154->MashuTdGradeUpQuestId;
            MashuTdGradeUpQuestPhase = v154->MashuTdGradeUpQuestPhase;
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            transformNameSprite = (void *)CondType__IsQuestPhaseClear(
                                            v153,
                                            MashuTdGradeUpQuestId,
                                            MashuTdGradeUpQuestPhase,
                                            -1,
                                            0,
                                            0);
            if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
            {
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              transformNameSprite = v208;
              if ( !v208 )
                goto LABEL_272;
              transformNameSprite = (void *)ServantLimitAddMaster__TryGetEntity(
                                              v208,
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
                  v158 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                  v159 = v99;
                  v160 = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v160 = BalanceConfig_TypeInfo;
                  }
                  transformNameSprite = VoiceMaster__getEnableInfo(
                                          v212,
                                          v158,
                                          v160->static_fields->ServantIdMashu3,
                                          limitCount,
                                          0,
                                          0,
                                          0,
                                          0);
                  if ( !transformNameSprite )
                    goto LABEL_272;
                  v161 = transformNameSprite;
                  if ( *((int *)transformNameSprite + 6) >= 1 )
                  {
                    v162 = 0;
                    do
                    {
                      v163 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                      if ( !v163 )
                        goto LABEL_272;
                      v164 = v163->fields._size;
                      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                      v165 = (int)transformNameSprite;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      if ( v162 >= *((unsigned int *)v161 + 6) )
                        goto LABEL_273;
                      v166 = (VoiceInfo_o *)v161[v162 + 4];
                      ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
                      v168 = (ServantStatusVoiceListViewItem_o *)sub_1C3E7B0(ServantStatusVoiceListViewItem_TypeInfo);
                      ServantStatusVoiceListViewItem___ctor(
                        v168,
                        v164,
                        v165,
                        ServantIdMashu3,
                        limitCount,
                        v166,
                        v159,
                        0,
                        0,
                        v204);
                      v171 = v163->fields._items;
                      v172 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                      ++v163->fields._version;
                      if ( !v171 )
                        goto LABEL_272;
                      v173 = v163->fields._size;
                      if ( (unsigned int)v173 >= LODWORD(v171->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v163,
                          (Il2CppObject *)v168,
                          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v172[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v174 = &v171->obj.klass + v173;
                        v163->fields._size = v173 + 1;
                        v174[4] = (Il2CppClass *)v168;
                        sub_1C3E508((CGThumbnailListItem_o *)(v174 + 4), (int32_t)v168, v169, v170);
                      }
                    }
                    while ( (__int64)++v162 < *((int *)v161 + 6) );
                  }
                  firstPriority = v159 + 1;
                }
              }
            }
          }
        }
      }
      VoiceLimitCountList = v211;
      v17 = (Il2CppObject *)v212;
      v19 = v210;
      LODWORD(v35) = v211->max_length;
      v36 = v213 + 1;
      if ( (__int64)(v213 + 1) >= (int)v35 )
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
          if ( !v39 )
            goto LABEL_272;
          v52 = v39->fields._items;
          v53 = Method_System_Collections_Generic_List_VoiceEntity__Add__;
          ++v39->fields._version;
          if ( !v52 )
            goto LABEL_272;
          v54 = v39->fields._size;
          if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v39,
              (Il2CppObject *)name,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
          }
          else
          {
            v55 = &v52->obj.klass + v54;
            v39->fields._size = v54 + 1;
            v55[4] = (Il2CppClass *)name;
            sub_1C3E508((CGThumbnailListItem_o *)(v55 + 4), (int32_t)name, v47, v48);
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
              if ( v41 >= LODWORD(EnableInfo->max_length) )
                goto LABEL_273;
              transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                              (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                              svtId,
                                              limitCount,
                                              *v44,
                                              v49);
              if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
              {
                transformNameSprite = this->fields.itemList;
                if ( !transformNameSprite )
                  goto LABEL_272;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v219,
                  (System_Collections_Generic_List_object__o *)transformNameSprite,
                  (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
                v223 = v219;
                do
                {
                  v58 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v223,
                          (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                  if ( !v58 )
                    goto LABEL_102;
                  current = v223.fields._current;
                  if ( !v223.fields._current
                    || (naturalAligment = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment,
                        v223.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
                    || (ServantStatusVoiceListViewItem_c *)v223.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                  {
                    sub_1C3E7C0(v58, v59);
                  }
                  monitor = v223.fields._current[10].monitor;
                  if ( !monitor )
                    sub_1C3E7C0(v58, v59);
                }
                while ( monitor[7] != 2
                     || monitor[12] != 7
                     || monitor[13] != *((_DWORD *)name + 13)
                     || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                          (ServantStatusVoiceListViewItem_o *)v223.fields._current,
                          v59) != svtId );
                v63 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
                v66 = v63;
                if ( v41 >= LODWORD(EnableInfo->max_length) )
                  sub_1C3E7C8(v63, (unsigned int)v63);
                goto LABEL_125;
              }
LABEL_82:
              if ( v41 >= LODWORD(EnableInfo->max_length) )
                goto LABEL_273;
              transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                                              (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                              svtId,
                                              *v44,
                                              v57);
              if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
                goto LABEL_121;
              voiceLabelSpec = 1;
              goto LABEL_104;
            }
          }
          else if ( v56 == 18 )
          {
            if ( v41 >= LODWORD(EnableInfo->max_length) )
              goto LABEL_273;
            transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                            (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                            svtId,
                                            limitCount,
                                            *v44,
                                            v49);
            if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              goto LABEL_82;
            transformNameSprite = this->fields.itemList;
            if ( !transformNameSprite )
              goto LABEL_272;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v219,
              (System_Collections_Generic_List_object__o *)transformNameSprite,
              (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v223 = v219;
            do
            {
              v68 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v223,
                      (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v68 )
                goto LABEL_102;
              current = v223.fields._current;
              if ( !v223.fields._current
                || (v70 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment,
                    v223.fields._current->klass->_2.naturalAligment < (unsigned int)v70)
                || (ServantStatusVoiceListViewItem_c *)v223.fields._current->klass->_2.typeHierarchy[v70 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                sub_1C3E7C0(v68, v69);
              }
              v71 = v223.fields._current[10].monitor;
              if ( !v71 )
                sub_1C3E7C0(v68, v69);
            }
            while ( v71[7] != 2
                 || v71[12] != 18
                 || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                      (ServantStatusVoiceListViewItem_o *)v223.fields._current,
                      v69) != svtId );
            v72 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
            if ( v41 >= LODWORD(EnableInfo->max_length) )
              sub_1C3E7C8(v72, v73);
            if ( !*v44 )
              sub_1C3E7C0(v72, v73);
            voiceEntity = (*v44)->fields.voiceEntity;
            if ( !voiceEntity )
              sub_1C3E7C0(v72, v73);
            v75 = v72;
            id = voiceEntity->fields.id;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
            v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49039980(id, 0);
            if ( !v214 )
              sub_1C3E7C0(0, v77);
            if ( !VoicePlayCondMaster__isVoiceCond(v214, v75, v78, 81, 0) )
            {
              v97 = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
              v66 = v97;
              if ( v41 >= LODWORD(EnableInfo->max_length) )
                sub_1C3E7C8(v97, (unsigned int)v97);
LABEL_125:
              ServantStatusVoiceListViewItem__SetLimitCount(
                (ServantStatusVoiceListViewItem_o *)current,
                v66,
                svtId,
                limitCount,
                *v44,
                v64,
                v65);
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v223,
                (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
              goto LABEL_121;
            }
LABEL_102:
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v223,
              (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
      v79 = (*v44)->fields.voiceEntity;
      if ( !v79 )
        goto LABEL_272;
      v80 = (int)transformNameSprite;
      v81 = v79->fields.id;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49039980(v81, 0);
      transformNameSprite = v214;
      if ( !v214 )
        goto LABEL_272;
      transformNameSprite = (void *)VoicePlayCondMaster__isVoiceCond(v214, v80, v82, 81, 0);
      if ( !name )
        goto LABEL_272;
      v83 = *((_DWORD *)name + 12);
      v84 = v83 == 7 || v83 == 18 || v83 == 54 && ((unsigned __int8)transformNameSprite & 1) != 0;
      v85 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !v85 )
        goto LABEL_272;
      v86 = v85->fields._size;
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      if ( v41 >= LODWORD(EnableInfo->max_length) )
        goto LABEL_273;
      v87 = *v44;
      v88 = firstPriority;
      v89 = (int)transformNameSprite;
      v90 = (ServantStatusVoiceListViewItem_o *)sub_1C3E7B0(ServantStatusVoiceListViewItem_TypeInfo);
      ServantStatusVoiceListViewItem___ctor(v90, v86, v89, svtId, limitCount, v87, v88, v84, voiceLabelSpec, v204);
      v93 = v85->fields._items;
      v94 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v85->fields._version;
      if ( !v93 )
        goto LABEL_272;
      v95 = v85->fields._size;
      if ( (unsigned int)v95 >= LODWORD(v93->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v85,
          (Il2CppObject *)v90,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
      }
      else
      {
        v96 = &v93->obj.klass + v95;
        v85->fields._size = v95 + 1;
        v96[4] = (Il2CppClass *)v90;
        sub_1C3E508((CGThumbnailListItem_o *)(v96 + 4), (int32_t)v90, v91, v92);
      }
LABEL_121:
      v40 = EnableInfo->max_length;
      if ( (int)++v41 >= v40 )
        goto LABEL_133;
    }
  }
LABEL_233:
  v178 = this->fields.itemList;
  if ( !v178 )
    goto LABEL_272;
  v179 = v178->fields._size;
  v180 = sub_1C3E7B0(System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v180,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
  if ( v179 - 1 >= 1 )
  {
    for ( i = 0; i != v179 - 1; ++i )
    {
      transformNameSprite = this->fields.itemList;
      if ( !transformNameSprite )
        goto LABEL_272;
      transformNameSprite = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)transformNameSprite,
                              i,
                              (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !transformNameSprite )
        goto LABEL_272;
      v182 = (ServantStatusVoiceListViewItem_o *)transformNameSprite;
      v183 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)transformNameSprite + 304LL) < (unsigned int)v183
        || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)transformNameSprite + 200LL) + 8 * v183 - 8) != ServantStatusVoiceListViewItem_TypeInfo )
      {
        goto LABEL_272;
      }
      if ( ServantStatusVoiceListViewItem__get_OpenName((ServantStatusVoiceListViewItem_o *)transformNameSprite, v8) )
      {
        transformNameSprite = (void *)ServantStatusVoiceListViewItem__get_DispNum(v182, v8);
        if ( !(_DWORD)transformNameSprite )
        {
          if ( !v180 )
            goto LABEL_272;
          v184 = (const MethodInfo *)*(unsigned int *)(v180 + 24);
          v185 = *(_DWORD *)(v180 + 28) + 1;
          *(_DWORD *)(v180 + 24) = 0;
          *(_DWORD *)(v180 + 28) = v185;
          if ( (int)v184 >= 1 )
            System_Array__Clear(*(System_Array_o **)(v180 + 16), 0, (int32_t)v184, 0);
          v186 = i + 1;
          if ( i + 1 < v179 )
          {
            do
            {
              transformNameSprite = this->fields.itemList;
              if ( !transformNameSprite )
                goto LABEL_272;
              transformNameSprite = System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)transformNameSprite,
                                      v186,
                                      (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !transformNameSprite )
                goto LABEL_272;
              v187 = (Il2CppObject *)transformNameSprite;
              v188 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
              if ( *(unsigned __int8 *)(*(_QWORD *)transformNameSprite + 304LL) < (unsigned int)v188
                || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)transformNameSprite + 200LL)
                                                        + 8 * v188
                                                        - 8) != ServantStatusVoiceListViewItem_TypeInfo )
              {
                goto LABEL_272;
              }
              OpenName = ServantStatusVoiceListViewItem__get_OpenName(
                           (ServantStatusVoiceListViewItem_o *)transformNameSprite,
                           v8);
              v191 = ServantStatusVoiceListViewItem__get_OpenName(v182, v190);
              transformNameSprite = (void *)System_String__op_Equality(OpenName, v191, 0);
              if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              {
                v193 = *(_QWORD *)(v180 + 16);
                v194 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__;
                ++*(_DWORD *)(v180 + 28);
                if ( !v193 )
                  goto LABEL_272;
                v195 = *(int *)(v180 + 24);
                if ( (unsigned int)v195 >= *(_DWORD *)(v193 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)v180,
                    v187,
                    *(const MethodInfo_37B5460 **)(*(_QWORD *)(v194[4] + 192LL) + 112LL));
                }
                else
                {
                  v196 = v193 + 8 * v195;
                  *(_DWORD *)(v180 + 24) = v195 + 1;
                  *(_QWORD *)(v196 + 32) = v187;
                  sub_1C3E508((CGThumbnailListItem_o *)(v196 + 32), (int32_t)v187, (int32_t)v184, v192);
                }
              }
            }
            while ( v179 != ++v186 );
          }
          if ( *(int *)(v180 + 24) >= 1 )
          {
            ServantStatusVoiceListViewItem__SetNameNum(v182, 1, v184);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v219,
              (System_Collections_Generic_List_object__o *)v180,
              (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
            v197 = 2;
            for ( j = v219;
                  ;
                  ServantStatusVoiceListViewItem__SetNameNum(
                    (ServantStatusVoiceListViewItem_o *)j.fields._current,
                    v197++,
                    v200) )
            {
              v198 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &j,
                       (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
              if ( !v198 )
                break;
              if ( j.fields._current )
              {
                v201 = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
                if ( j.fields._current->klass->_2.naturalAligment >= (unsigned int)v201
                  && (ServantStatusVoiceListViewItem_c *)j.fields._current->klass->_2.typeHierarchy[v201 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
                {
                  continue;
                }
              }
              sub_1C3E7C0(v198, v199);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &j,
              (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
          }
        }
      }
    }
  }
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transformNameSprite = LocalizationManager__Get((System_String_o *)StringLiteral_12003/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, 0);
  if ( !explanationLabel )
    goto LABEL_272;
  UILabel__set_text(explanationLabel, (System_String_o *)transformNameSprite, 0);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  transformNameSprite = LocalizationManager__Get(v205, 0);
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

  if ( (byte_4C5443F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&ServantStatusVoiceListViewItem_TypeInfo);
    byte_4C5443F = 1;
  }
  result = (ServantStatusVoiceListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantStatusVoiceListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4C5443D & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_16119/*"_"*/);
    byte_4C5443D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)ServantVoiceMaster__getEntity_42868440(
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
    sub_1C3E7C8(Instance, v9);
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
        Instance = (DataManager_o *)System_String__Concat_63674716(v14, (System_String_o *)StringLiteral_16119/*"_"*/, v15, 0),
        (v16 = *(_QWORD *)(v12 + 32)) == 0) )
  {
LABEL_25:
    sub_1C3E7C0(Instance, v9);
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

  if ( (byte_4C5443E & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5443E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
        sub_1C3E7C8(Instance, v7);
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
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v20, 0);
        if ( (int)Instance >= value )
          v13 = 1;
      }
      max_length = servantVoiceConds->max_length;
      if ( (int)++v12 >= max_length )
        return v13;
    }
LABEL_31:
    sub_1C3E7C0(Instance, v7);
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
  if ( (byte_4C54445 & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1C3E564(&ServantStatusVoiceListViewItem_TypeInfo);
    byte_4C54445 = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0
    || (naturalAligment = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewItem_TypeInfo )
  {
    sub_1C3E7C0(this, obj);
  }
  if ( LOBYTE(linkItem[1].fields.sortValue2B) )
  {
    callbackFunc = v5->fields.callbackFunc;
    v5->fields.callbackFunc = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&v5->fields.callbackFunc, 0, (int32_t)method, v3);
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

  if ( (byte_4C54444 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C54444 = 1;
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
          sub_1C3E7C0(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v10,
          1,
          v10->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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

  if ( (byte_4C54442 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_1C3E564(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_1C3E564(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C54442 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3E7C0(0, v8);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C3E7C0(v12, v13);
      ServantStatusVoiceListViewObject__Init_37608084(
        (ServantStatusVoiceListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusVoiceListViewManager__RequestListObject_37607580(
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

  if ( (byte_4C54443 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_1C3E564(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_1C3E564(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C54443 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3E7C0(0, v6);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C3E7C0(v10, v11);
      ServantStatusVoiceListViewObject__Init_37608692((ServantStatusVoiceListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  ServantStatusVoiceListViewManager__SetMode_37606608(this, mode, -1, v6);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusVoiceListViewManager__SetMode_37606608(
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

  if ( (byte_4C54441 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
    sub_1C3E564(&ServantStatusVoiceListViewItem_TypeInfo);
    sub_1C3E564(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__);
    sub_1C3E564(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C54441 = 1;
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
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    for ( i = v23; ; BYTE1(i.fields._current[12].monitor) = HIDWORD(i.fields._current[1].klass) == select )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v8 )
        break;
      if ( !i.fields._current )
        sub_1C3E7C0(v8, v9);
      naturalAligment = ServantStatusVoiceListViewItem_TypeInfo->_2.naturalAligment;
      if ( i.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (ServantStatusVoiceListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        sub_1C3E7C0(v8, v9);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
                                                                  (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
        if ( !itemList )
          break;
        ServantStatusVoiceListViewObject__Init_37606480((ServantStatusVoiceListViewObject_o *)itemList, 4, v16);
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
                   (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
          v21 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
          System_Action___ctor(v21, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0);
          if ( !Item )
            break;
          ServantStatusVoiceListViewObject__Init_37608084((ServantStatusVoiceListViewObject_o *)Item, 5, v21, 0.1, v22);
          if ( ++v19 >= v18->fields._size )
            return;
        }
LABEL_30:
        sub_1C3E7C0(itemList, *(_QWORD *)&mode);
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
      ServantStatusVoiceListViewManager__RequestListObject_37607580(this, 3, v12);
    }
  }
}


void ServantStatusVoiceListViewManager__SetMode_37607524(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x3

  this->fields.callbackFunc2 = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  ServantStatusVoiceListViewManager__SetMode_37606608(this, mode, -1, v6);
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
  if ( (byte_4C54440 & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1C3E564(&ServantStatusVoiceListViewObject_TypeInfo);
    byte_4C54440 = 1;
  }
  if ( !obj
    || (naturalAligment = ServantStatusVoiceListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantStatusVoiceListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusVoiceListViewObject_TypeInfo )
  {
    sub_1C3E7C0(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ServantStatusVoiceListViewObject__Init_37606480(
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

  if ( (byte_4C54434 & 1) == 0 )
  {
    sub_1C3E564(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    byte_4C54434 = 1;
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
    v8 = sub_1C787BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3EA80(v7);
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

  if ( (byte_4C54436 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    byte_4C54436 = 1;
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
    v8 = sub_1C787BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3EA80(v7);
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

  if ( (byte_4C54439 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C54439 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3E7C0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C3E7C0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C3E7C0(0, v10);
      Item = (ListViewItem_o *)ServantStatusVoiceListViewObject__GetItem(
                                 (ServantStatusVoiceListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C3E7C0(0, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_43876032((ListViewManager_o *)this, Item, 0);
        if ( v16 )
        {
          if ( !v3 )
            sub_1C3E7C0(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C3E7C0(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C3E7C0(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C3E7C0(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1C3E508((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C54438 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C54438 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3E7C0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C3E7C0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C3E7C0(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C3E7C0(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C3E508((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C54435 & 1) == 0 )
  {
    sub_1C3E564(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    byte_4C54435 = 1;
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
    v8 = sub_1C787BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3EA80(v7);
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

  if ( (byte_4C54437 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    byte_4C54437 = 1;
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
    v8 = sub_1C787BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3EA80(v7);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A80638;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A805E0;
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
  if ( (byte_4C54446 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&ServantStatusVoiceListViewManager_ResultKind_TypeInfo);
    byte_4C54446 = 1;
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
  return (System_IAsyncResult_o *)sub_1C3E518(this, v18, callback, object);
}


void ServantStatusVoiceListViewManager_CallbackFunc__EndInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
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