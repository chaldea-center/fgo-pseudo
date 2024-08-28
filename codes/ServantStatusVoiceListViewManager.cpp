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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  VoiceInfo_array *Instance; // x0
  __int64 v13; // x1
  signed int max_length; // w8
  VoiceMaster_o *v15; // x21
  unsigned int v16; // w9
  char v17; // w20
  ServantVoiceRelationEntity_o *v18; // x23
  __int64 v19; // x24
  __int64 v20; // x25
  VoiceInfo_array *v21; // x24
  unsigned __int64 v22; // x22
  System_Collections_Generic_List_object__o *itemList; // x25
  int32_t size; // w27
  __int64 v25; // x26
  __int64 v26; // x28
  VoiceInfo_o *v27; // x29
  int32_t v28; // w28
  int32_t v29; // w20
  ServantStatusVoiceListViewItem_o *v30; // x26
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0
  const MethodInfo *v37; // [xsp+8h] [xbp-98h]
  VoiceMaster_o *v38; // [xsp+18h] [xbp-88h]
  ServantVoiceRelationEntity_array *v39; // [xsp+20h] [xbp-80h]
  int32_t ascendOrder; // [xsp+28h] [xbp-78h]
  unsigned int v41; // [xsp+2Ch] [xbp-74h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4A1D1FF & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_VoiceMaster___, firstPriority);
    sub_1B715CC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B715CC(&ServantStatusVoiceListViewItem_TypeInfo, v10);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4A1D1FF = 1;
  }
  Instance = (VoiceInfo_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (VoiceInfo_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !relationList )
    goto LABEL_29;
  max_length = relationList->max_length;
  if ( max_length >= 1 )
  {
    v15 = (VoiceMaster_o *)Instance;
    v16 = 0;
    v17 = 1;
    ascendOrder = 0;
    v38 = (VoiceMaster_o *)Instance;
    v39 = relationList;
    while ( 1 )
    {
      if ( v16 >= max_length )
LABEL_30:
        sub_1B71830(Instance, v13);
      v18 = relationList->m_Items[v16];
      v41 = v16;
      if ( !v18 )
        goto LABEL_29;
      v20 = *(_QWORD *)&v18->fields.relationSvtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&v18->fields.relationSvtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v44.fields.currentCryptoKey = v20;
      *(_QWORD *)&v44.fields.fakeValue = v19;
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v44, 0LL);
      if ( !v15 )
        goto LABEL_29;
      Instance = VoiceMaster__getEnableInfo(v15, svtId, (int32_t)Instance, 0, 0LL, 0, 0, 0LL);
      v21 = Instance;
      if ( (v17 & 1) == 0 && ascendOrder != v18->fields.ascendOrder )
        ++*firstPriority;
      if ( !Instance )
        goto LABEL_29;
      ascendOrder = v18->fields.ascendOrder;
      if ( (int)Instance->max_length >= 1 )
        break;
LABEL_27:
      v15 = v38;
      relationList = v39;
      v17 = 0;
      max_length = v39->max_length;
      v16 = v41 + 1;
      if ( (int)(v41 + 1) >= max_length )
        return;
    }
    v22 = 0LL;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      v26 = *(_QWORD *)&v18->fields.relationSvtId.fields.currentCryptoKey;
      v25 = *(_QWORD *)&v18->fields.relationSvtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v45.fields.currentCryptoKey = v26;
      *(_QWORD *)&v45.fields.fakeValue = v25;
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v45, 0LL);
      if ( v22 >= v21->max_length )
        goto LABEL_30;
      v27 = v21->m_Items[v22];
      v28 = (int)Instance;
      v29 = *firstPriority;
      v30 = (ServantStatusVoiceListViewItem_o *)sub_1B71818(ServantStatusVoiceListViewItem_TypeInfo);
      ServantStatusVoiceListViewItem___ctor(v30, size, svtId, v28, 0, v27, v29, 0, 0, v37);
      items = itemList->fields._items;
      v34 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v35 = itemList->fields._size;
      if ( (unsigned int)v35 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v30,
          *(const MethodInfo_34D0260 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + v35;
        itemList->fields._size = v35 + 1;
        v36[4] = (Il2CppClass *)v30;
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v30, v31, v32);
      }
      if ( (__int64)++v22 >= (int)v21->max_length )
        goto LABEL_27;
    }
LABEL_29:
    sub_1B71828(Instance, v13);
  }
}


void __fastcall ServantStatusVoiceListViewManager__Awake(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  void *scrollView; // x0
  float v4; // s1

  if ( (byte_4A1D1FE & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_4A1D1FE = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)scrollView,
                       (const MethodInfo_2E51E8C *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL )
  {
    sub_1B71828(scrollView, method);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x22
  float defaultPanelCenter; // s9
  float defaultPanelHeight; // s8
  void *transformNameSprite; // x0
  const MethodInfo *v46; // x1
  _BOOL4 IsTransformServant_k__BackingField; // w19
  ServantStatusVoiceListViewManager_o *v48; // x19
  UILabel_o *transformNameLabel; // x20
  float transformNameAddHeight; // s0
  struct UIScrollView_o *scrollView; // x8
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x21
  Il2CppObject *v54; // x20
  System_Collections_Generic_List_T__o *v55; // x19
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  System_Int32_array *v58; // x19
  __int64 v59; // x10
  VoiceMaster_o *v60; // x22
  __int64 v61; // x8
  unsigned __int64 v62; // x9
  Il2CppObject *MasterData_object; // x20
  int32_t maxLimitCount; // w21
  System_Int32_array *VoiceLimitCountList; // x19
  ServantVoiceRelationEntity_array *v66; // x20
  int32_t v67; // w0
  const MethodInfo *v68; // x4
  ServantVoiceRelationEntity_array *v69; // x20
  int32_t v70; // w0
  const MethodInfo *v71; // x4
  System_Int32_array *v72; // x9
  __int64 v73; // x8
  unsigned __int64 v74; // x19
  int32_t v75; // w20
  const MethodInfo *v76; // x4
  int v77; // w8
  _DWORD *v78; // x21
  unsigned int i; // w25
  char *v80; // x19
  VoiceInfo_o *v81; // x3
  VoiceInfo_o **v82; // x19
  VoiceInfo_o *v83; // t1
  struct VoiceEntity_o *voiceEntity; // x27
  int32_t condType; // w8
  const MethodInfo *v86; // x3
  _BOOL8 v87; // x0
  const MethodInfo *v88; // x1
  Il2CppObject *current; // x23
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8
  __int64 v92; // x0
  int32_t v93; // w5
  const MethodInfo *v94; // x6
  int32_t v95; // w1
  bool voiceLabelSpec; // w22
  _BOOL8 v97; // x0
  const MethodInfo *v98; // x1
  __int64 v99; // x10
  Il2CppClass *v100; // x8
  __int64 v101; // x0
  __int64 v102; // x1
  struct VoiceEntity_o *v103; // x8
  int32_t v104; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x24
  __int64 v106; // x1
  System_String_o *v107; // x2
  struct VoiceEntity_o *v108; // x8
  int32_t v109; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v110; // x24
  System_String_o *v111; // x2
  int32_t v112; // w8
  System_Collections_Generic_List_object__o *itemList; // x23
  bool v114; // w28
  bool v115; // w20
  char v116; // w26
  int32_t size; // w24
  VoiceInfo_o *v118; // x29
  int32_t v119; // w19
  int32_t v120; // w27
  bool v121; // w28
  ServantStatusVoiceListViewItem_o *v122; // x26
  int32_t v123; // w2
  int32_t v124; // w3
  struct System_Object_array *v125; // x8
  _QWORD *v126; // x9
  __int64 v127; // x10
  Il2CppClass **v128; // x0
  __int64 v129; // x0
  int32_t v130; // w20
  int32_t v131; // w21
  int32_t v132; // w23
  BalanceConfig_c *v133; // x8
  Il2CppObject *v134; // x23
  Il2CppObject *v135; // x24
  int64_t v136; // x26
  int32_t v137; // w23
  BalanceConfig_c *v138; // x8
  _QWORD *v139; // x23
  unsigned __int64 v140; // x22
  System_Collections_Generic_List_object__o *v141; // x26
  int32_t v142; // w29
  int32_t v143; // w24
  VoiceInfo_o *v144; // x19
  int32_t ServantIdHyde; // w28
  ServantStatusVoiceListViewItem_o *v146; // x27
  int32_t v147; // w2
  int32_t v148; // w3
  struct System_Object_array *v149; // x8
  _QWORD *v150; // x9
  __int64 v151; // x10
  Il2CppClass **v152; // x0
  int32_t v153; // w8
  int v154; // w23
  BalanceConfig_c *v155; // x8
  int32_t v156; // w23
  BalanceConfig_c *v157; // x8
  _QWORD *v158; // x23
  unsigned __int64 v159; // x22
  System_Collections_Generic_List_object__o *v160; // x26
  int32_t v161; // w29
  int32_t v162; // w24
  VoiceInfo_o *v163; // x19
  int32_t ServantIdMashu2; // w28
  ServantStatusVoiceListViewItem_o *v165; // x27
  int32_t v166; // w2
  int32_t v167; // w3
  struct System_Object_array *v168; // x8
  _QWORD *v169; // x9
  __int64 v170; // x10
  Il2CppClass **v171; // x0
  int64_t v172; // x23
  BalanceConfig_c *v173; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t MashuTdGradeUpQuestId; // w24
  int32_t MashuTdGradeUpQuestPhase; // w26
  int32_t svtVoiceId; // w19
  int32_t v178; // w23
  BalanceConfig_c *v179; // x8
  _QWORD *v180; // x23
  unsigned __int64 v181; // x22
  System_Collections_Generic_List_object__o *v182; // x26
  int32_t v183; // w29
  int32_t v184; // w24
  VoiceInfo_o *v185; // x19
  int32_t ServantIdMashu3; // w28
  ServantStatusVoiceListViewItem_o *v187; // x27
  int32_t v188; // w2
  int32_t v189; // w3
  struct System_Object_array *v190; // x8
  _QWORD *v191; // x9
  __int64 v192; // x10
  Il2CppClass **v193; // x0
  ServantVoiceRelationEntity_array *v194; // x19
  int32_t v195; // w0
  const MethodInfo *v196; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v197; // x8
  int32_t v198; // w25
  __int64 v199; // x20
  int32_t j; // w21
  ServantStatusVoiceListViewItem_o *v201; // x22
  __int64 v202; // x10
  const MethodInfo *v203; // x2
  int v204; // w8
  int32_t v205; // w23
  Il2CppObject *v206; // x24
  __int64 v207; // x10
  System_String_o *OpenName; // x19
  const MethodInfo *v209; // x1
  System_String_o *v210; // x0
  int32_t v211; // w3
  __int64 v212; // x8
  _QWORD *v213; // x9
  __int64 v214; // x10
  __int64 v215; // x0
  int32_t v216; // w22
  _BOOL8 v217; // x0
  __int64 v218; // x1
  const MethodInfo *v219; // x2
  __int64 v220; // x11
  UILabel_o *explanationLabel; // x20
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v223; // [xsp+8h] [xbp-168h]
  System_String_o *v224; // [xsp+18h] [xbp-158h]
  UserServantCollectionEntity_o *EntityDefinitely; // [xsp+20h] [xbp-150h]
  unsigned __int64 v227; // [xsp+30h] [xbp-140h]
  ServantLimitAddMaster_o *v228; // [xsp+38h] [xbp-138h]
  System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList; // [xsp+40h] [xbp-130h]
  System_Int32_array *v230; // [xsp+48h] [xbp-128h]
  Il2CppObject *v231; // [xsp+50h] [xbp-120h]
  unsigned __int64 v232; // [xsp+58h] [xbp-118h]
  VoicePlayCondMaster_o *v233; // [xsp+60h] [xbp-110h]
  int32_t svtId; // [xsp+6Ch] [xbp-104h]
  int limitCount; // [xsp+84h] [xbp-ECh]
  System_Collections_Generic_List_Enumerator_object__o v238; // [xsp+88h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o k; // [xsp+A0h] [xbp-D0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+B8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v241; // [xsp+C0h] [xbp-B0h] BYREF
  ServantVoiceRelationEntity_array *afterRelationList; // [xsp+E0h] [xbp-90h] BYREF
  ServantVoiceRelationEntity_array *sameRelationList; // [xsp+E8h] [xbp-88h] BYREF
  ServantVoiceRelationEntity_array *beforeRelationList; // [xsp+F0h] [xbp-80h] BYREF
  int32_t firstPriority; // [xsp+FCh] [xbp-74h] BYREF
  UnityEngine_Vector4_o v246; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A1D200 & 1) == 0 )
  {
    sub_1B715CC(&BalanceConfig_TypeInfo, mainInfo);
    sub_1B715CC(&CondType_TypeInfo, v4);
    sub_1B715CC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v5);
    sub_1B715CC(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___, v6);
    sub_1B715CC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v7);
    sub_1B715CC(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v8);
    sub_1B715CC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_1B715CC(&Method_DataManager_GetMaster_VoiceMaster___, v10);
    sub_1B715CC(&Method_DataManager_GetMaster_VoicePlayCondMaster___, v11);
    sub_1B715CC(&DataManager_TypeInfo, v12);
    sub_1B715CC(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string__GetEntity__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__, v16);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v17);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v18);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__get_Current__, v19);
    sub_1B715CC(&Method_System_Collections_Generic_List_CondType_Kind__Add__, v20);
    sub_1B715CC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v21);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__, v22);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__, v23);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__, v24);
    sub_1B715CC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v25);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__, v26);
    sub_1B715CC(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v27);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__get_Count__, v28);
    sub_1B715CC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v29);
    sub_1B715CC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v30);
    sub_1B715CC(&System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo, v31);
    sub_1B715CC(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v32);
    sub_1B715CC(&LocalizationManager_TypeInfo, v33);
    sub_1B715CC(&NetworkManager_TypeInfo, v34);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v35);
    sub_1B715CC(&ServantStatusVoiceListViewItem_TypeInfo, v36);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37);
    sub_1B715CC(&TutorialFlag_TypeInfo, v38);
    sub_1B715CC(&StringLiteral_2639/*"B050"*/, v39);
    sub_1B715CC(&StringLiteral_15190/*"VOICE_EMPTY_MESSAGE"*/, v40);
    sub_1B715CC(&StringLiteral_11902/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, v41);
    byte_4A1D200 = 1;
  }
  v42 = StringLiteral_15190/*"VOICE_EMPTY_MESSAGE"*/;
  firstPriority = 0;
  sameRelationList = 0LL;
  beforeRelationList = 0LL;
  afterRelationList = 0LL;
  memset(&v241, 0, sizeof(v241));
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
    v48 = this;
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
    v48 = this;
  }
  scrollView = v48->fields.scrollView;
  if ( !scrollView )
    goto LABEL_233;
  transformNameSprite = scrollView->fields.mPanel;
  if ( !transformNameSprite )
    goto LABEL_233;
  v246.fields.x = *((float *)transformNameSprite + 74);
  v246.fields.z = *((float *)transformNameSprite + 76);
  v246.fields.y = defaultPanelCenter;
  v246.fields.w = defaultPanelHeight;
  UIPanel__set_baseClipRegion((UIPanel_o *)transformNameSprite, v246, 0LL);
  transformNameSprite = this->fields.scrollView;
  if ( !transformNameSprite )
    goto LABEL_233;
  UIScrollView__ResetPosition((UIScrollView_o *)transformNameSprite, 0LL);
  this->fields.execObjectExtraFlag = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v224 = (System_String_o *)v42;
  UserId = NetworkManager__get_UserId(0LL);
  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
  if ( !Master_object )
    goto LABEL_233;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       UserId,
                       (int32_t)transformNameSprite,
                       0LL);
  v231 = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_VoiceMaster___);
  v233 = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v54 = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  firstPriority = 0;
  v55 = (System_Collections_Generic_List_T__o *)sub_1B71818(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v55,
    (const MethodInfo_34B5214 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v55 )
    goto LABEL_233;
  transformNameSprite = v55;
  items = v55->fields._items;
  v57 = Method_System_Collections_Generic_List_CondType_Kind__Add__;
  ++v55->fields._version;
  v58 = changeSvtVoiceIdList;
  if ( !items )
    goto LABEL_233;
  v59 = *((int *)transformNameSprite + 6);
  v60 = (VoiceMaster_o *)v231;
  disableCondTypeList = (System_Collections_Generic_List_CondType_Kind__o *)transformNameSprite;
  if ( (unsigned int)v59 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)transformNameSprite,
      81,
      *(const MethodInfo_34B5A68 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
  }
  else
  {
    *((_DWORD *)transformNameSprite + 6) = v59 + 1;
    *((_DWORD *)items->m_Items + v59) = 81;
  }
  v228 = (ServantLimitAddMaster_o *)v54;
  if ( !changeSvtVoiceIdList )
LABEL_233:
    sub_1B71828(transformNameSprite, v46);
  v61 = *(_QWORD *)&changeSvtVoiceIdList->max_length;
  if ( (int)v61 >= 1 )
  {
    v62 = 0LL;
    while ( 1 )
    {
      if ( v62 >= (unsigned int)v61 )
        goto LABEL_234;
      v227 = v62;
      svtId = v58->m_Items[v62 + 1];
      transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_233;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)transformNameSprite,
                            (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
      transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_233;
      v230 = VoiceLimitCountList;
      transformNameSprite = DataManager__GetMasterData_object_(
                              (DataManager_o *)transformNameSprite,
                              (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !transformNameSprite )
        goto LABEL_233;
      ServantVoiceRelationMaster__GetRelationList_39583036(
        (ServantVoiceRelationMaster_o *)transformNameSprite,
        &beforeRelationList,
        &sameRelationList,
        &afterRelationList,
        svtId,
        0LL);
      v66 = beforeRelationList;
      v67 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v66, v67, v68);
      v69 = sameRelationList;
      ++firstPriority;
      v70 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v69, v70, v71);
      v72 = VoiceLimitCountList;
      if ( !VoiceLimitCountList )
        goto LABEL_233;
      v73 = *(_QWORD *)&VoiceLimitCountList->max_length;
      if ( (int)v73 >= 1 )
        break;
LABEL_193:
      v194 = afterRelationList;
      v195 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v194, v195, v196);
      v58 = changeSvtVoiceIdList;
      LODWORD(v61) = changeSvtVoiceIdList->max_length;
      v62 = v227 + 1;
      if ( (__int64)(v227 + 1) >= (int)v61 )
        goto LABEL_194;
    }
    v74 = 0LL;
    while ( 1 )
    {
      if ( v74 >= (unsigned int)v73 )
        goto LABEL_234;
      v75 = v72->m_Items[v74 + 1];
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      if ( !v60 )
        goto LABEL_233;
      v232 = v74;
      limitCount = v75;
      transformNameSprite = VoiceMaster__getEnableInfo(
                              v60,
                              (int32_t)transformNameSprite,
                              svtId,
                              v75,
                              disableCondTypeList,
                              0,
                              0,
                              0LL);
      if ( !transformNameSprite )
        goto LABEL_233;
      v77 = *((_DWORD *)transformNameSprite + 6);
      v78 = transformNameSprite;
      if ( v77 >= 1 )
      {
        for ( i = 0; (int)i < v77; ++i )
        {
          if ( i >= v77 )
            goto LABEL_234;
          v80 = (char *)&v78[2 * i];
          v83 = (VoiceInfo_o *)*((_QWORD *)v80 + 4);
          v82 = (VoiceInfo_o **)(v80 + 32);
          v81 = v83;
          if ( !v83 )
            goto LABEL_233;
          voiceEntity = v81->fields.voiceEntity;
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
                                                  v81,
                                                  v76);
                  if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
                  {
                    transformNameSprite = this->fields.itemList;
                    if ( !transformNameSprite )
                      goto LABEL_233;
                    System_Collections_Generic_List_object___GetEnumerator(
                      (System_Collections_Generic_List_Enumerator_T__o *)&v238,
                      (System_Collections_Generic_List_object__o *)transformNameSprite,
                      (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
                    v241 = v238;
                    do
                    {
                      v87 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                              &v241,
                              (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                      if ( !v87 )
                        goto LABEL_87;
                      current = v241.fields._current;
                      if ( !v241.fields._current
                        || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                            LOBYTE(v241.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
                        || (ServantStatusVoiceListViewItem_c *)v241.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                      {
                        sub_1B71828(v87, v88);
                      }
                      klass = v241.fields._current[10].klass;
                      if ( !klass )
                        sub_1B71828(v87, v88);
                    }
                    while ( HIDWORD(klass->_1.namespaze) != 2
                         || LODWORD(klass->_1.this_arg.data) != 7
                         || HIDWORD(klass->_1.this_arg.data) != voiceEntity->fields.condValue
                         || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                              (ServantStatusVoiceListViewItem_o *)v241.fields._current,
                              v88) != svtId );
                    v92 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                    v95 = v92;
                    if ( i >= v78[6] )
                      sub_1B71830(v92, (unsigned int)v92);
                    goto LABEL_105;
                  }
LABEL_67:
                  if ( i >= v78[6] )
                    goto LABEL_234;
                  transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                                                  (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                                  svtId,
                                                  *v82,
                                                  v86);
                  if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
                    goto LABEL_102;
                  voiceLabelSpec = 1;
                  goto LABEL_89;
                }
              }
              else if ( condType == 18 )
              {
                if ( i >= v78[6] )
                  goto LABEL_234;
                transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                                (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                                svtId,
                                                limitCount,
                                                *v82,
                                                v76);
                if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
                  goto LABEL_67;
                transformNameSprite = this->fields.itemList;
                if ( !transformNameSprite )
                  goto LABEL_233;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v238,
                  (System_Collections_Generic_List_object__o *)transformNameSprite,
                  (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
                v241 = v238;
                do
                {
                  v97 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v241,
                          (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                  if ( !v97 )
                    goto LABEL_87;
                  current = v241.fields._current;
                  if ( !v241.fields._current
                    || (v99 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                        LOBYTE(v241.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v99)
                    || (ServantStatusVoiceListViewItem_c *)v241.fields._current->klass->_2.typeHierarchy[v99 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                  {
                    sub_1B71828(v97, v98);
                  }
                  v100 = v241.fields._current[10].klass;
                  if ( !v100 )
                    sub_1B71828(v97, v98);
                }
                while ( HIDWORD(v100->_1.namespaze) != 2
                     || LODWORD(v100->_1.this_arg.data) != 18
                     || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                          (ServantStatusVoiceListViewItem_o *)v241.fields._current,
                          v98) != svtId );
                v101 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                if ( i >= v78[6] )
                  sub_1B71830(v101, v102);
                if ( !*v82 )
                  sub_1B71828(v101, v102);
                v103 = (*v82)->fields.voiceEntity;
                if ( !v103 )
                  sub_1B71828(v101, v102);
                v104 = v101;
                id = v103->fields.id;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                v107 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46344112(id, 0LL);
                if ( !v233 )
                  sub_1B71828(0LL, v106);
                if ( !VoicePlayCondMaster__isVoiceCond(v233, v104, v107, 81, 0LL) )
                {
                  v129 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                  v95 = v129;
                  if ( i >= v78[6] )
                    sub_1B71830(v129, (unsigned int)v129);
LABEL_105:
                  ServantStatusVoiceListViewItem__SetLimitCount(
                    (ServantStatusVoiceListViewItem_o *)current,
                    v95,
                    svtId,
                    limitCount,
                    *v82,
                    v93,
                    v94);
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v241,
                    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
                  goto LABEL_102;
                }
LABEL_87:
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v241,
                  (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
              }
            }
          }
          voiceLabelSpec = 0;
LABEL_89:
          transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
          if ( i >= v78[6] )
            goto LABEL_234;
          if ( !*v82 )
            goto LABEL_233;
          v108 = (*v82)->fields.voiceEntity;
          if ( !v108 )
            goto LABEL_233;
          v109 = (int)transformNameSprite;
          v110 = v108->fields.id;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v111 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46344112(v110, 0LL);
          transformNameSprite = v233;
          if ( !v233 )
            goto LABEL_233;
          transformNameSprite = (void *)VoicePlayCondMaster__isVoiceCond(v233, v109, v111, 81, 0LL);
          if ( !voiceEntity )
            goto LABEL_233;
          v112 = voiceEntity->fields.condType;
          itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          v114 = v112 == 18;
          v115 = v112 == 7;
          if ( !itemList )
            goto LABEL_233;
          v116 = (char)transformNameSprite;
          size = itemList->fields._size;
          transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
          if ( i >= v78[6] )
            goto LABEL_234;
          v118 = *v82;
          v119 = firstPriority;
          v120 = (int)transformNameSprite;
          v121 = v116 & (v114 || v115);
          v122 = (ServantStatusVoiceListViewItem_o *)sub_1B71818(ServantStatusVoiceListViewItem_TypeInfo);
          ServantStatusVoiceListViewItem___ctor(
            v122,
            size,
            v120,
            svtId,
            limitCount,
            v118,
            v119,
            v121,
            voiceLabelSpec,
            v223);
          v125 = itemList->fields._items;
          v126 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++itemList->fields._version;
          if ( !v125 )
            goto LABEL_233;
          v127 = itemList->fields._size;
          if ( (unsigned int)v127 >= v125->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              itemList,
              (Il2CppObject *)v122,
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
          }
          else
          {
            v128 = &v125->obj.klass + v127;
            itemList->fields._size = v127 + 1;
            v128[4] = (Il2CppClass *)v122;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v128 + 4), (int32_t)v122, v123, v124);
          }
LABEL_102:
          v77 = v78[6];
        }
      }
      v130 = firstPriority;
      v131 = ++firstPriority;
      v132 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      v133 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v133 = BalanceConfig_TypeInfo;
      }
      v60 = (VoiceMaster_o *)v231;
      if ( v132 == v133->static_fields->ServantIdJekyll )
        break;
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      v154 = (int)transformNameSprite;
      v155 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v155 = BalanceConfig_TypeInfo;
      }
      if ( v154 == v155->static_fields->ServantIdMashu1 )
      {
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( TutorialFlag__Get_37486428(115, 0LL) )
        {
          v156 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
          v157 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v157 = BalanceConfig_TypeInfo;
          }
          transformNameSprite = VoiceMaster__getEnableInfo(
                                  (VoiceMaster_o *)v231,
                                  v156,
                                  v157->static_fields->ServantIdMashu2,
                                  limitCount,
                                  0LL,
                                  0,
                                  0,
                                  0LL);
          if ( !transformNameSprite )
            goto LABEL_233;
          v158 = transformNameSprite;
          if ( *((int *)transformNameSprite + 6) >= 1 )
          {
            v159 = 0LL;
            while ( 1 )
            {
              v160 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
              if ( !v160 )
                goto LABEL_233;
              v161 = v160->fields._size;
              transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
              v162 = (int)transformNameSprite;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              if ( v159 >= *((unsigned int *)v158 + 6) )
                break;
              v163 = (VoiceInfo_o *)v158[v159 + 4];
              ServantIdMashu2 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu2;
              v165 = (ServantStatusVoiceListViewItem_o *)sub_1B71818(ServantStatusVoiceListViewItem_TypeInfo);
              ServantStatusVoiceListViewItem___ctor(
                v165,
                v161,
                v162,
                ServantIdMashu2,
                limitCount,
                v163,
                v131,
                0,
                0,
                v223);
              v168 = v160->fields._items;
              v169 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++v160->fields._version;
              if ( !v168 )
                goto LABEL_233;
              v170 = v160->fields._size;
              if ( (unsigned int)v170 >= v168->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v160,
                  (Il2CppObject *)v165,
                  *(const MethodInfo_34D0260 **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
              }
              else
              {
                v171 = &v168->obj.klass + v170;
                v160->fields._size = v170 + 1;
                v171[4] = (Il2CppClass *)v165;
                sub_1B71570((ServantStatusBattleListViewItem_o *)(v171 + 4), (int32_t)v165, v166, v167);
              }
              if ( (__int64)++v159 >= *((int *)v158 + 6) )
                goto LABEL_160;
            }
LABEL_234:
            sub_1B71830(transformNameSprite, v46);
          }
LABEL_160:
          v131 = v130 + 2;
          firstPriority = v130 + 2;
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v172 = NetworkManager__get_UserId(0LL);
        v173 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v173 = BalanceConfig_TypeInfo;
        }
        v60 = (VoiceMaster_o *)v231;
        static_fields = v173->static_fields;
        MashuTdGradeUpQuestId = static_fields->MashuTdGradeUpQuestId;
        MashuTdGradeUpQuestPhase = static_fields->MashuTdGradeUpQuestPhase;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        transformNameSprite = (void *)CondType__IsQuestPhaseClear(
                                        v172,
                                        MashuTdGradeUpQuestId,
                                        MashuTdGradeUpQuestPhase,
                                        -1,
                                        0,
                                        0LL);
        if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
        {
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          transformNameSprite = v228;
          if ( !v228 )
            goto LABEL_233;
          transformNameSprite = (void *)ServantLimitAddMaster__TryGetEntity(
                                          v228,
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
              v178 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
              v179 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v179 = BalanceConfig_TypeInfo;
              }
              transformNameSprite = VoiceMaster__getEnableInfo(
                                      (VoiceMaster_o *)v231,
                                      v178,
                                      v179->static_fields->ServantIdMashu3,
                                      limitCount,
                                      0LL,
                                      0,
                                      0,
                                      0LL);
              if ( !transformNameSprite )
                goto LABEL_233;
              v180 = transformNameSprite;
              if ( *((int *)transformNameSprite + 6) >= 1 )
              {
                v181 = 0LL;
                do
                {
                  v182 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  if ( !v182 )
                    goto LABEL_233;
                  v183 = v182->fields._size;
                  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                  v184 = (int)transformNameSprite;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( v181 >= *((unsigned int *)v180 + 6) )
                    goto LABEL_234;
                  v185 = (VoiceInfo_o *)v180[v181 + 4];
                  ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
                  v187 = (ServantStatusVoiceListViewItem_o *)sub_1B71818(ServantStatusVoiceListViewItem_TypeInfo);
                  ServantStatusVoiceListViewItem___ctor(
                    v187,
                    v183,
                    v184,
                    ServantIdMashu3,
                    limitCount,
                    v185,
                    v131,
                    0,
                    0,
                    v223);
                  v190 = v182->fields._items;
                  v191 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++v182->fields._version;
                  if ( !v190 )
                    goto LABEL_233;
                  v192 = v182->fields._size;
                  if ( (unsigned int)v192 >= v190->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v182,
                      (Il2CppObject *)v187,
                      *(const MethodInfo_34D0260 **)(*(_QWORD *)(v191[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v193 = &v190->obj.klass + v192;
                    v182->fields._size = v192 + 1;
                    v193[4] = (Il2CppClass *)v187;
                    sub_1B71570((ServantStatusBattleListViewItem_o *)(v193 + 4), (int32_t)v187, v188, v189);
                  }
                }
                while ( (__int64)++v181 < *((int *)v180 + 6) );
              }
              v153 = v131 + 1;
LABEL_139:
              v60 = (VoiceMaster_o *)v231;
              firstPriority = v153;
            }
          }
        }
      }
LABEL_176:
      v72 = v230;
      LODWORD(v73) = v230->max_length;
      v74 = v232 + 1;
      if ( (__int64)(v232 + 1) >= (int)v73 )
        goto LABEL_193;
    }
    v134 = DataMasterBase_object__object__object___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v231,
             (Il2CppObject *)StringLiteral_2639/*"B050"*/,
             (const MethodInfo_30F8AB8 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string__GetEntity__);
    transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !transformNameSprite )
      goto LABEL_233;
    v135 = DataManager__GetMasterData_object_(
             (DataManager_o *)transformNameSprite,
             (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v136 = NetworkManager__get_UserId(0LL);
    transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
    if ( !v135 )
      goto LABEL_233;
    transformNameSprite = UserServantCollectionMaster__GetEntityDefinitely(
                            (UserServantCollectionMaster_o *)v135,
                            v136,
                            (int32_t)transformNameSprite,
                            0LL);
    if ( !v134 )
      goto LABEL_233;
    if ( LODWORD(v134[3].klass) == 17 )
    {
      if ( !transformNameSprite )
        goto LABEL_233;
      transformNameSprite = (void *)UserServantCollectionEntity__IsPlayed(
                                      (UserServantCollectionEntity_o *)transformNameSprite,
                                      HIDWORD(v134[3].klass),
                                      0LL);
      if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
        goto LABEL_176;
    }
    v137 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
    v138 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v138 = BalanceConfig_TypeInfo;
    }
    transformNameSprite = VoiceMaster__getEnableInfo(
                            (VoiceMaster_o *)v231,
                            v137,
                            v138->static_fields->ServantIdHyde,
                            limitCount,
                            0LL,
                            0,
                            0,
                            0LL);
    if ( !transformNameSprite )
      goto LABEL_233;
    v139 = transformNameSprite;
    if ( *((int *)transformNameSprite + 6) >= 1 )
    {
      v140 = 0LL;
      do
      {
        v141 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !v141 )
          goto LABEL_233;
        v142 = v141->fields._size;
        transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
        v143 = (int)transformNameSprite;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( v140 >= *((unsigned int *)v139 + 6) )
          goto LABEL_234;
        v144 = (VoiceInfo_o *)v139[v140 + 4];
        ServantIdHyde = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
        v146 = (ServantStatusVoiceListViewItem_o *)sub_1B71818(ServantStatusVoiceListViewItem_TypeInfo);
        ServantStatusVoiceListViewItem___ctor(v146, v142, v143, ServantIdHyde, limitCount, v144, v131, 0, 0, v223);
        v149 = v141->fields._items;
        v150 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v141->fields._version;
        if ( !v149 )
          goto LABEL_233;
        v151 = v141->fields._size;
        if ( (unsigned int)v151 >= v149->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v141,
            (Il2CppObject *)v146,
            *(const MethodInfo_34D0260 **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
        }
        else
        {
          v152 = &v149->obj.klass + v151;
          v141->fields._size = v151 + 1;
          v152[4] = (Il2CppClass *)v146;
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v152 + 4), (int32_t)v146, v147, v148);
        }
      }
      while ( (__int64)++v140 < *((int *)v139 + 6) );
    }
    v153 = v130 + 2;
    goto LABEL_139;
  }
LABEL_194:
  v197 = this->fields.itemList;
  if ( !v197 )
    goto LABEL_233;
  v198 = v197->fields._size;
  v199 = sub_1B71818(System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v199,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
  if ( v198 - 1 >= 1 )
  {
    for ( j = 0; j != v198 - 1; ++j )
    {
      transformNameSprite = this->fields.itemList;
      if ( !transformNameSprite )
        goto LABEL_233;
      transformNameSprite = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)transformNameSprite,
                              j,
                              (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !transformNameSprite )
        goto LABEL_233;
      v201 = (ServantStatusVoiceListViewItem_o *)transformNameSprite;
      v202 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)transformNameSprite + 304LL) < (unsigned int)v202
        || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)transformNameSprite + 200LL) + 8 * v202 - 8) != ServantStatusVoiceListViewItem_TypeInfo )
      {
        goto LABEL_233;
      }
      if ( ServantStatusVoiceListViewItem__get_OpenName((ServantStatusVoiceListViewItem_o *)transformNameSprite, v46) )
      {
        transformNameSprite = (void *)ServantStatusVoiceListViewItem__get_DispNum(v201, v46);
        if ( !(_DWORD)transformNameSprite )
        {
          if ( !v199 )
            goto LABEL_233;
          v203 = (const MethodInfo *)*(unsigned int *)(v199 + 24);
          v204 = *(_DWORD *)(v199 + 28) + 1;
          *(_DWORD *)(v199 + 24) = 0;
          *(_DWORD *)(v199 + 28) = v204;
          if ( (int)v203 >= 1 )
            System_Array__Clear(*(System_Array_o **)(v199 + 16), 0, (int32_t)v203, 0LL);
          v205 = j + 1;
          if ( j + 1 < v198 )
          {
            do
            {
              transformNameSprite = this->fields.itemList;
              if ( !transformNameSprite )
                goto LABEL_233;
              transformNameSprite = System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)transformNameSprite,
                                      v205,
                                      (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !transformNameSprite )
                goto LABEL_233;
              v206 = (Il2CppObject *)transformNameSprite;
              v207 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)transformNameSprite + 304LL) < (unsigned int)v207
                || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)transformNameSprite + 200LL)
                                                        + 8 * v207
                                                        - 8) != ServantStatusVoiceListViewItem_TypeInfo )
              {
                goto LABEL_233;
              }
              OpenName = ServantStatusVoiceListViewItem__get_OpenName(
                           (ServantStatusVoiceListViewItem_o *)transformNameSprite,
                           v46);
              v210 = ServantStatusVoiceListViewItem__get_OpenName(v201, v209);
              transformNameSprite = (void *)System_String__op_Equality(OpenName, v210, 0LL);
              if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              {
                v212 = *(_QWORD *)(v199 + 16);
                v213 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__;
                ++*(_DWORD *)(v199 + 28);
                if ( !v212 )
                  goto LABEL_233;
                v214 = *(int *)(v199 + 24);
                if ( (unsigned int)v214 >= *(_DWORD *)(v212 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)v199,
                    v206,
                    *(const MethodInfo_34D0260 **)(*(_QWORD *)(v213[4] + 192LL) + 112LL));
                }
                else
                {
                  v215 = v212 + 8 * v214;
                  *(_DWORD *)(v199 + 24) = v214 + 1;
                  *(_QWORD *)(v215 + 32) = v206;
                  sub_1B71570((ServantStatusBattleListViewItem_o *)(v215 + 32), (int32_t)v206, (int32_t)v203, v211);
                }
              }
            }
            while ( v198 != ++v205 );
          }
          if ( *(int *)(v199 + 24) >= 1 )
          {
            ServantStatusVoiceListViewItem__SetNameNum(v201, 1, v203);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v238,
              (System_Collections_Generic_List_object__o *)v199,
              (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
            v216 = 2;
            for ( k = v238;
                  ;
                  ServantStatusVoiceListViewItem__SetNameNum(
                    (ServantStatusVoiceListViewItem_o *)k.fields._current,
                    v216++,
                    v219) )
            {
              v217 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &k,
                       (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
              if ( !v217 )
                break;
              if ( k.fields._current )
              {
                v220 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
                if ( LOBYTE(k.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v220
                  && (ServantStatusVoiceListViewItem_c *)k.fields._current->klass->_2.typeHierarchy[v220 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
                {
                  continue;
                }
              }
              sub_1B71828(v217, v218);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &k,
              (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
          }
        }
      }
    }
  }
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transformNameSprite = LocalizationManager__Get((System_String_o *)StringLiteral_11902/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_233;
  UILabel__set_text(explanationLabel, (System_String_o *)transformNameSprite, 0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  transformNameSprite = LocalizationManager__Get(v224, 0LL);
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


// local variable allocation has failed, the output may be wrong!
ServantStatusVoiceListViewItem_o *__fastcall ServantStatusVoiceListViewManager__GetItem(
        ServantStatusVoiceListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ServantStatusVoiceListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A1D203 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B715CC(&ServantStatusVoiceListViewItem_TypeInfo, v5);
    byte_4A1D203 = 1;
  }
  result = (ServantStatusVoiceListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantStatusVoiceListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
        ServantStatusVoiceListViewManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        VoiceInfo_o *voiceInfo,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  struct VoiceEntity_o *voiceEntity; // x8
  __int64 svtVoiceType; // x8
  __int64 v14; // x20
  struct VoiceEntity_o *v15; // x8
  System_String_o *v16; // x19
  System_String_o *v17; // x0
  __int64 v18; // x20
  int v19; // w8
  System_String_o *v20; // x19
  unsigned int v21; // w21
  __int64 v22; // x22
  __int64 v23; // x8
  __int64 v24; // x8

  if ( (byte_4A1D201 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_ServantVoiceMaster___, *(_QWORD *)&svtId);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B715CC(&StringLiteral_16073/*"_"*/, v9);
    byte_4A1D201 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)ServantVoiceMaster__getEntity_39575420(
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
    sub_1B71830(Instance, v11);
  v14 = *((_QWORD *)&Instance->fields._DispLog + svtVoiceType);
  if ( !v14 )
    return 0;
  Instance = (DataManager_o *)System_Int32__ToString((int)voiceInfo + 52, 0LL);
  v15 = voiceInfo->fields.voiceEntity;
  if ( !v15
    || (v16 = (System_String_o *)Instance, (Instance = (DataManager_o *)v15->fields.id) == 0LL)
    || (v17 = (System_String_o *)((__int64 (__fastcall *)(DataManager_o *, void *))Instance->klass->vtable._3_ToString.method)(
                                   Instance,
                                   Instance->klass[1]._1.image),
        Instance = (DataManager_o *)System_String__Concat_61516764(
                                      v16,
                                      (System_String_o *)StringLiteral_16073/*"_"*/,
                                      v17,
                                      0LL),
        (v18 = *(_QWORD *)(v14 + 32)) == 0) )
  {
LABEL_25:
    sub_1B71828(Instance, v11);
  }
  v19 = *(_DWORD *)(v18 + 24);
  if ( v19 < 1 )
    return 0;
  v20 = (System_String_o *)Instance;
  v21 = 0;
  while ( 1 )
  {
    if ( v21 >= v19 )
      goto LABEL_26;
    v22 = *(_QWORD *)(v18 + 8LL * (int)v21 + 32);
    if ( !v22 )
      goto LABEL_25;
    v23 = *(_QWORD *)(v22 + 64);
    if ( !v23 )
      goto LABEL_25;
    if ( !*(_DWORD *)(v23 + 24) )
      goto LABEL_26;
    v24 = *(_QWORD *)(v23 + 32);
    if ( !v24 )
      goto LABEL_25;
    Instance = (DataManager_o *)System_String__op_Equality(*(System_String_o **)(v24 + 16), v20, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( *(_DWORD *)(v22 + 80) )
        return 1;
    }
    v19 = *(_DWORD *)(v18 + 24);
    if ( (int)++v21 >= v19 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
        ServantStatusVoiceListViewManager_o *this,
        int32_t svtId,
        VoiceInfo_o *voiceInfo,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x21
  struct ServantVoiceCond_array *servantVoiceConds; // x22
  int max_length; // w8
  int64_t v14; // x19
  unsigned int v15; // w23
  bool v16; // w25
  ServantVoiceCond_o *v17; // x8
  int32_t condType; // w9
  int value; // w26
  __int64 v20; // x20
  __int64 v21; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4A1D202 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_1B715CC(&NetworkManager_TypeInfo, v6);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A1D202 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    v14 = Instance;
    v15 = 0;
    v16 = 1;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1B71830(Instance, v10);
      v17 = servantVoiceConds->m_Items[v15];
      if ( !v17 )
        break;
      condType = v17->fields.condType;
      if ( condType == 20 || condType == 3 )
        v16 = 0;
      value = v17->fields.value;
      if ( condType == 3 || condType == 20 )
      {
        if ( !v14 )
          break;
        v20 = *(_QWORD *)(v14 + 100);
        v21 = *(_QWORD *)(v14 + 108);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v23.fields.currentCryptoKey = v20;
        *(_QWORD *)&v23.fields.fakeValue = v21;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v23, 0LL);
        if ( (int)Instance >= value )
          v16 = 1;
      }
      max_length = servantVoiceConds->max_length;
      if ( (int)++v15 >= max_length )
        return v16;
    }
LABEL_27:
    sub_1B71828(Instance, v10);
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
  if ( (byte_4A1D209 & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1B715CC(&ServantStatusVoiceListViewItem_TypeInfo, obj);
    byte_4A1D209 = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0LL
    || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
  {
    sub_1B71828(this, obj);
  }
  if ( LOBYTE(linkItem[1].fields.sortValue2B) )
  {
    callbackFunc = v5->fields.callbackFunc;
    v5->fields.callbackFunc = 0LL;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v5->fields.callbackFunc, 0, (int32_t)method, v3);
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

  if ( (byte_4A1D208 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A1D208 = 1;
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
          sub_1B71828(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A1D206 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v11);
    sub_1B715CC(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v12);
    sub_1B715CC(&StringLiteral_9901/*"OnMoveEnd"*/, v13);
    byte_4A1D206 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B71828(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9901/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B71828(v19, v20);
      ServantStatusVoiceListViewObject__Init_34604428(
        (ServantStatusVoiceListViewObject_o *)current,
        mode,
        v18,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__RequestListObject_34603924(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A1D207 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v9);
    sub_1B715CC(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v10);
    sub_1B715CC(&StringLiteral_9901/*"OnMoveEnd"*/, v11);
    byte_4A1D207 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B71828(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9901/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B71828(v17, v18);
      ServantStatusVoiceListViewObject__Init_34605036((ServantStatusVoiceListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
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
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  ServantStatusVoiceListViewManager__SetMode_34602952(this, mode, -1, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__SetMode_34602952(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        int32_t select,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  __int64 methodPtr_low; // x11
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  System_Collections_Generic_List_object__o *v23; // x19
  int32_t v24; // w20
  const MethodInfo *v25; // x2
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v27; // x20
  int32_t v28; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v30; // x23
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A1D205 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__, v12);
    sub_1B715CC(&ServantStatusVoiceListViewItem_TypeInfo, v13);
    sub_1B715CC(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v14);
    sub_1B715CC(&StringLiteral_9901/*"OnMoveEnd"*/, v15);
    byte_4A1D205 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( mode == 2 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_30;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      itemList,
      (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    for ( i = v32; ; BYTE1(i.fields._current[12].klass) = HIDWORD(i.fields._current[1].klass) == select )
    {
      v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v17 )
        break;
      if ( !i.fields._current )
        sub_1B71828(v17, v18);
      methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(i.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (ServantStatusVoiceListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        sub_1B71828(v17, v18);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(this, v22);
    if ( !itemList )
      goto LABEL_30;
    v23 = itemList;
    if ( itemList->fields._size >= 1 )
    {
      v24 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v23,
                                                                  v24,
                                                                  (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
        if ( !itemList )
          break;
        ServantStatusVoiceListViewObject__Init_34602824((ServantStatusVoiceListViewObject_o *)itemList, 4, v25);
        if ( ++v24 >= v23->fields._size )
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
                                                                v20);
      if ( !itemList )
        goto LABEL_30;
      size = itemList->fields._size;
      v27 = itemList;
      if ( size >= 1 )
      {
        this->fields.callbackCount = size;
        v28 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v27,
                   v28,
                   (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
          v30 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
          System_Action___ctor(v30, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
            break;
          ServantStatusVoiceListViewObject__Init_34604428((ServantStatusVoiceListViewObject_o *)Item, 5, v30, 0.1, v31);
          if ( ++v28 >= v27->fields._size )
            return;
        }
LABEL_30:
        sub_1B71828(itemList, *(_QWORD *)&mode);
      }
      this->fields.callbackCount = 1;
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_9901/*"OnMoveEnd"*/,
        0.2,
        0LL);
    }
    else if ( mode == 1 )
    {
      ServantStatusVoiceListViewManager__RequestListObject_34603924(this, 3, v21);
    }
  }
}


void __fastcall ServantStatusVoiceListViewManager__SetMode_34603868(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x3

  this->fields.callbackFunc2 = callback;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  ServantStatusVoiceListViewManager__SetMode_34602952(this, mode, -1, v6);
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
  if ( (byte_4A1D204 & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1B715CC(&ServantStatusVoiceListViewObject_TypeInfo, obj);
    byte_4A1D204 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusVoiceListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewObject_TypeInfo )
  {
    sub_1B71828(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ServantStatusVoiceListViewObject__Init_34602824(
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

  if ( (byte_4A1D1F8 & 1) == 0 )
  {
    sub_1B715CC(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A1D1F8 = 1;
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
    v8 = sub_1BACABC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B71AE8(v7);
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

  if ( (byte_4A1D1FA & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, value);
    byte_4A1D1FA = 1;
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
    v8 = sub_1BACABC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B71AE8(v7);
  ServantStatusVoiceListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *__fastcall ServantStatusVoiceListViewManager__get_ClippingObjectList(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A1D1FD & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__, v8);
    sub_1B715CC(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo, v9);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v10);
    byte_4A1D1FD = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B71828(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B71828(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1B71828(0LL, v18);
      Item = (ListViewItem_o *)ServantStatusVoiceListViewObject__GetItem(
                                 (ServantStatusVoiceListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1B71828(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_40512280((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1B71828(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1B71828(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_34D0260 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1B71828(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1B71828(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *)v11;
}


System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *__fastcall ServantStatusVoiceListViewManager__get_ObjectList(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A1D1FC & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__, v8);
    sub_1B715CC(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo, v9);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v10);
    byte_4A1D1FC = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B71828(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B71828(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1B71828(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B71828(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_34D0260 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *)v11;
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

  if ( (byte_4A1D1F9 & 1) == 0 )
  {
    sub_1B715CC(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A1D1F9 = 1;
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
    v8 = sub_1BACABC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B71AE8(v7);
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

  if ( (byte_4A1D1FB & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, value);
    byte_4A1D1FB = 1;
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
    v8 = sub_1BACABC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B71AE8(v7);
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B7168C(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B71844(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B716F4(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19B6174;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B611C;
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = result;
  v16 = kind;
  if ( (byte_4A1D20A & 1) == 0 )
  {
    sub_1B715CC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B715CC(&ServantStatusVoiceListViewManager_ResultKind_TypeInfo, v9);
    byte_4A1D20A = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             ServantStatusVoiceListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1B71580(this, v14, callback, object);
}


void __fastcall ServantStatusVoiceListViewManager_CallbackFunc__EndInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B71584(result, 0LL, method);
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