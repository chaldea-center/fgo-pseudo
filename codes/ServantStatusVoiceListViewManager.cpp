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
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  const MethodInfo *v41; // [xsp+8h] [xbp-98h]
  VoiceMaster_o *v42; // [xsp+18h] [xbp-88h]
  ServantVoiceRelationEntity_array *v43; // [xsp+20h] [xbp-80h]
  int32_t ascendOrder; // [xsp+28h] [xbp-78h]
  unsigned int v45; // [xsp+2Ch] [xbp-74h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4BFB1CA & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_VoiceMaster___, firstPriority);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1C2E12C(&ServantStatusVoiceListViewItem_TypeInfo, v10);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4BFB1CA = 1;
  }
  Instance = (VoiceInfo_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (VoiceInfo_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !relationList )
    goto LABEL_29;
  max_length = relationList->max_length;
  if ( max_length >= 1 )
  {
    v15 = (VoiceMaster_o *)Instance;
    v16 = 0;
    v17 = 1;
    ascendOrder = 0;
    v42 = (VoiceMaster_o *)Instance;
    v43 = relationList;
    while ( 1 )
    {
      if ( v16 >= max_length )
LABEL_30:
        sub_1C2E390(Instance, v13);
      v18 = relationList->m_Items[v16];
      v45 = v16;
      if ( !v18 )
        goto LABEL_29;
      v20 = *(_QWORD *)&v18->fields.relationSvtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&v18->fields.relationSvtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v48.fields.currentCryptoKey = v20;
      *(_QWORD *)&v48.fields.fakeValue = v19;
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v48, 0LL);
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
      v15 = v42;
      relationList = v43;
      v17 = 0;
      max_length = v43->max_length;
      v16 = v45 + 1;
      if ( (int)(v45 + 1) >= max_length )
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
      *(_QWORD *)&v49.fields.currentCryptoKey = v26;
      *(_QWORD *)&v49.fields.fakeValue = v25;
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v49, 0LL);
      if ( v22 >= v21->max_length )
        goto LABEL_30;
      v27 = v21->m_Items[v22];
      v28 = (int)Instance;
      v29 = *firstPriority;
      v30 = (ServantStatusVoiceListViewItem_o *)sub_1C2E378(ServantStatusVoiceListViewItem_TypeInfo);
      ServantStatusVoiceListViewItem___ctor(v30, size, svtId, v28, 0, v27, v29, 0, 0, v41);
      items = itemList->fields._items;
      v38 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v39 = itemList->fields._size;
      if ( (unsigned int)v39 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v30,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &items->obj.klass + v39;
        itemList->fields._size = v39 + 1;
        v40[4] = (Il2CppClass *)v30;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v40 + 4), (int64_t)v30, v31, v32, v33, v34, v35, v36);
      }
      if ( (__int64)++v22 >= (int)v21->max_length )
        goto LABEL_27;
    }
LABEL_29:
    sub_1C2E388(Instance, v13);
  }
}


void __fastcall ServantStatusVoiceListViewManager__Awake(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  void *scrollView; // x0
  float v4; // s1

  if ( (byte_4BFB1C9 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_4BFB1C9 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)scrollView,
                       (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL )
  {
    sub_1C2E388(scrollView, method);
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
  __int64 v52; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v54; // x0
  int64_t userIdNumber; // x21
  Il2CppObject *v56; // x22
  Il2CppObject *v57; // x20
  System_Collections_Generic_List_T__o *v58; // x23
  struct System_Object_array *items; // x8
  System_Int32_array *v60; // x19
  _QWORD *v61; // x9
  __int64 size; // x10
  __int64 v63; // x8
  unsigned __int64 v64; // x9
  Il2CppObject *MasterData_object; // x20
  int32_t maxLimitCount; // w21
  System_Int32_array *VoiceLimitCountList; // x24
  ServantVoiceRelationEntity_array *v68; // x20
  int32_t v69; // w0
  const MethodInfo *v70; // x4
  ServantVoiceRelationEntity_array *v71; // x20
  int32_t v72; // w0
  const MethodInfo *v73; // x4
  __int64 v74; // x8
  unsigned __int64 v75; // x9
  int32_t v76; // w19
  const MethodInfo *v77; // x4
  int v78; // w8
  _DWORD *v79; // x24
  unsigned int i; // w26
  char *v81; // x19
  VoiceInfo_o *v82; // x3
  VoiceInfo_o **v83; // x19
  VoiceInfo_o *v84; // t1
  struct VoiceEntity_o *voiceEntity; // x25
  int32_t condType; // w8
  const MethodInfo *v87; // x3
  _BOOL8 v88; // x0
  const MethodInfo *v89; // x1
  Il2CppObject *current; // x23
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8
  __int64 v93; // x0
  int32_t v94; // w5
  const MethodInfo *v95; // x6
  bool voiceLabelSpec; // w22
  _BOOL8 v97; // x0
  const MethodInfo *v98; // x1
  Il2CppObject *v99; // x27
  __int64 v100; // x10
  Il2CppClass *v101; // x8
  __int64 v102; // x0
  __int64 v103; // x1
  struct VoiceEntity_o *v104; // x8
  int32_t v105; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x20
  __int64 v107; // x1
  System_String_o *v108; // x2
  struct VoiceEntity_o *v109; // x8
  int32_t v110; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v111; // x20
  System_String_o *v112; // x2
  int32_t v113; // w8
  System_Collections_Generic_List_object__o *itemList; // x23
  bool v115; // w27
  bool v116; // w21
  char v117; // w20
  int32_t v118; // w25
  VoiceInfo_o *v119; // x19
  int32_t v120; // w29
  int32_t v121; // w28
  bool v122; // w20
  ServantStatusVoiceListViewItem_o *v123; // x27
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  struct System_Object_array *v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  Il2CppClass **v133; // x0
  __int64 v134; // x0
  int32_t v135; // w5
  const MethodInfo *v136; // x6
  int32_t v137; // w25
  int32_t v138; // w24
  int32_t v139; // w20
  BalanceConfig_c *v140; // x8
  Il2CppObject *v141; // x27
  __int64 v142; // x1
  Il2CppObject *v143; // x23
  NetworkManager_c *v144; // x0
  int64_t v145; // x20
  int32_t v146; // w20
  int32_t v147; // w21
  BalanceConfig_c *v148; // x8
  _QWORD *v149; // x27
  unsigned __int64 v150; // x22
  System_Collections_Generic_List_object__o *v151; // x23
  int32_t v152; // w20
  int32_t v153; // w25
  VoiceInfo_o *v154; // x19
  int32_t ServantIdHyde; // w29
  ServantStatusVoiceListViewItem_o *v156; // x28
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  struct System_Object_array *v163; // x8
  _QWORD *v164; // x9
  __int64 v165; // x10
  Il2CppClass **v166; // x0
  int32_t v167; // w8
  int v168; // w20
  BalanceConfig_c *v169; // x8
  int32_t v170; // w20
  int32_t v171; // w21
  BalanceConfig_c *v172; // x8
  _QWORD *v173; // x27
  unsigned __int64 v174; // x22
  System_Collections_Generic_List_object__o *v175; // x23
  int32_t v176; // w20
  int32_t v177; // w25
  VoiceInfo_o *v178; // x19
  int32_t ServantIdMashu2; // w29
  ServantStatusVoiceListViewItem_o *v180; // x28
  int64_t v181; // x2
  int32_t v182; // w3
  System_String_o *v183; // x4
  BattleSetupInfo_o *v184; // x5
  FollowerInfo_o *v185; // x6
  PartyListViewItem_o *v186; // x7
  struct System_Object_array *v187; // x8
  _QWORD *v188; // x9
  __int64 v189; // x10
  Il2CppClass **v190; // x0
  NetworkManager_c *v191; // x0
  BalanceConfig_c *v192; // x8
  int64_t v193; // x20
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t MashuTdGradeUpQuestId; // w23
  int32_t MashuTdGradeUpQuestPhase; // w25
  int32_t svtVoiceId; // w19
  int32_t v198; // w20
  BalanceConfig_c *v199; // x8
  _QWORD *v200; // x27
  unsigned __int64 v201; // x22
  System_Collections_Generic_List_object__o *v202; // x23
  int32_t v203; // w20
  int32_t v204; // w25
  VoiceInfo_o *v205; // x19
  int32_t ServantIdMashu3; // w29
  ServantStatusVoiceListViewItem_o *v207; // x28
  int64_t v208; // x2
  int32_t v209; // w3
  System_String_o *v210; // x4
  BattleSetupInfo_o *v211; // x5
  FollowerInfo_o *v212; // x6
  PartyListViewItem_o *v213; // x7
  struct System_Object_array *v214; // x8
  _QWORD *v215; // x9
  __int64 v216; // x10
  Il2CppClass **v217; // x0
  ServantVoiceRelationEntity_array *v218; // x19
  int32_t v219; // w0
  const MethodInfo *v220; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v221; // x8
  int32_t v222; // w25
  __int64 v223; // x20
  int32_t j; // w21
  ServantStatusVoiceListViewItem_o *v225; // x22
  __int64 v226; // x10
  int64_t v227; // x2
  int v228; // w8
  int32_t v229; // w23
  Il2CppObject *v230; // x24
  __int64 v231; // x10
  System_String_o *OpenName; // x19
  const MethodInfo *v233; // x1
  System_String_o *v234; // x0
  int32_t v235; // w3
  System_String_o *v236; // x4
  BattleSetupInfo_o *v237; // x5
  FollowerInfo_o *v238; // x6
  PartyListViewItem_o *v239; // x7
  __int64 v240; // x8
  _QWORD *v241; // x9
  __int64 v242; // x10
  __int64 v243; // x0
  int32_t v244; // w22
  _BOOL8 v245; // x0
  __int64 v246; // x1
  const MethodInfo *v247; // x2
  __int64 v248; // x11
  UILabel_o *explanationLabel; // x20
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v251; // [xsp+8h] [xbp-168h]
  System_String_o *v252; // [xsp+18h] [xbp-158h]
  UserServantCollectionEntity_o *EntityDefinitely; // [xsp+20h] [xbp-150h]
  unsigned __int64 v255; // [xsp+30h] [xbp-140h]
  ServantLimitAddMaster_o *v256; // [xsp+38h] [xbp-138h]
  System_Collections_Generic_List_T__o *v257; // [xsp+40h] [xbp-130h]
  System_Int32_array *v258; // [xsp+48h] [xbp-128h]
  DataMasterBase_TMaster__TEntity__PKType__o *v259; // [xsp+50h] [xbp-120h]
  unsigned __int64 v260; // [xsp+58h] [xbp-118h]
  VoicePlayCondMaster_o *v261; // [xsp+60h] [xbp-110h]
  int32_t svtId; // [xsp+6Ch] [xbp-104h]
  int limitCount; // [xsp+84h] [xbp-ECh]
  System_Collections_Generic_List_Enumerator_object__o v266; // [xsp+88h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o k; // [xsp+A0h] [xbp-D0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+B8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v269; // [xsp+C0h] [xbp-B0h] BYREF
  ServantVoiceRelationEntity_array *afterRelationList; // [xsp+E0h] [xbp-90h] BYREF
  ServantVoiceRelationEntity_array *sameRelationList; // [xsp+E8h] [xbp-88h] BYREF
  ServantVoiceRelationEntity_array *beforeRelationList; // [xsp+F0h] [xbp-80h] BYREF
  int32_t firstPriority; // [xsp+FCh] [xbp-74h] BYREF
  UnityEngine_Vector4_o v274; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BFB1CB & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, mainInfo);
    sub_1C2E12C(&CondType_TypeInfo, v4);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v5);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___, v6);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v7);
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v8);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_1C2E12C(&Method_DataManager_GetMaster_VoiceMaster___, v10);
    sub_1C2E12C(&Method_DataManager_GetMaster_VoicePlayCondMaster___, v11);
    sub_1C2E12C(&DataManager_TypeInfo, v12);
    sub_1C2E12C(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string__GetEntity__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__, v16);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v17);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v18);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__get_Current__, v19);
    sub_1C2E12C(&Method_System_Collections_Generic_List_CondType_Kind__Add__, v20);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v21);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__, v22);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__, v23);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__, v24);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v25);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__, v26);
    sub_1C2E12C(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v27);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__get_Count__, v28);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v29);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v30);
    sub_1C2E12C(&System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo, v31);
    sub_1C2E12C(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v32);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v33);
    sub_1C2E12C(&NetworkManager_TypeInfo, v34);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v35);
    sub_1C2E12C(&ServantStatusVoiceListViewItem_TypeInfo, v36);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37);
    sub_1C2E12C(&TutorialFlag_TypeInfo, v38);
    sub_1C2E12C(&StringLiteral_2665/*"B050"*/, v39);
    sub_1C2E12C(&StringLiteral_15517/*"VOICE_EMPTY_MESSAGE"*/, v40);
    sub_1C2E12C(&StringLiteral_12171/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, v41);
    byte_4BFB1CB = 1;
  }
  v42 = StringLiteral_15517/*"VOICE_EMPTY_MESSAGE"*/;
  firstPriority = 0;
  sameRelationList = 0LL;
  beforeRelationList = 0LL;
  afterRelationList = 0LL;
  memset(&v269, 0, sizeof(v269));
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
    v48 = this;
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
    v48 = this;
  }
  scrollView = v48->fields.scrollView;
  if ( !scrollView )
    goto LABEL_246;
  transformNameSprite = scrollView->fields.mPanel;
  if ( !transformNameSprite )
    goto LABEL_246;
  v274.fields.x = *((float *)transformNameSprite + 74);
  v274.fields.z = *((float *)transformNameSprite + 76);
  v274.fields.y = defaultPanelCenter;
  v274.fields.w = defaultPanelHeight;
  UIPanel__set_baseClipRegion((UIPanel_o *)transformNameSprite, v274, 0LL);
  transformNameSprite = this->fields.scrollView;
  if ( !transformNameSprite )
    goto LABEL_246;
  UIScrollView__ResetPosition((UIScrollView_o *)transformNameSprite, 0LL);
  this->fields.execObjectExtraFlag = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BF81D5 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, v52);
    byte_4BF81D5 = 1;
  }
  v54 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v54 = NetworkManager_TypeInfo;
  }
  v252 = (System_String_o *)v42;
  userIdNumber = v54->static_fields->userIdNumber;
  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
  if ( !Master_object )
    goto LABEL_246;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       userIdNumber,
                       (int32_t)transformNameSprite,
                       0LL);
  v56 = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_VoiceMaster___);
  v261 = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v57 = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  firstPriority = 0;
  v58 = (System_Collections_Generic_List_T__o *)sub_1C2E378(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v58,
    (const MethodInfo_3650860 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v58 )
    goto LABEL_246;
  items = v58->fields._items;
  v60 = changeSvtVoiceIdList;
  v61 = Method_System_Collections_Generic_List_CondType_Kind__Add__;
  ++v58->fields._version;
  if ( !items )
    goto LABEL_246;
  size = v58->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v58,
      81,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
  }
  else
  {
    v58->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  v256 = (ServantLimitAddMaster_o *)v57;
  if ( !changeSvtVoiceIdList )
LABEL_246:
    sub_1C2E388(transformNameSprite, v46);
  v63 = *(_QWORD *)&changeSvtVoiceIdList->max_length;
  if ( (int)v63 >= 1 )
  {
    v64 = 0LL;
    v259 = (DataMasterBase_TMaster__TEntity__PKType__o *)v56;
    v257 = v58;
    while ( 1 )
    {
      if ( v64 >= (unsigned int)v63 )
        goto LABEL_247;
      v255 = v64;
      svtId = v60->m_Items[v64 + 1];
      transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_246;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)transformNameSprite,
                            (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
      transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_246;
      transformNameSprite = DataManager__GetMasterData_object_(
                              (DataManager_o *)transformNameSprite,
                              (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !transformNameSprite )
        goto LABEL_246;
      ServantVoiceRelationMaster__GetRelationList_41232276(
        (ServantVoiceRelationMaster_o *)transformNameSprite,
        &beforeRelationList,
        &sameRelationList,
        &afterRelationList,
        svtId,
        0LL);
      v68 = beforeRelationList;
      v69 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v68, v69, v70);
      v71 = sameRelationList;
      ++firstPriority;
      v72 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v71, v72, v73);
      if ( !VoiceLimitCountList )
        goto LABEL_246;
      v74 = *(_QWORD *)&VoiceLimitCountList->max_length;
      if ( (int)v74 >= 1 )
        break;
LABEL_206:
      v218 = afterRelationList;
      v219 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v218, v219, v220);
      v60 = changeSvtVoiceIdList;
      LODWORD(v63) = changeSvtVoiceIdList->max_length;
      v64 = v255 + 1;
      if ( (__int64)(v255 + 1) >= (int)v63 )
        goto LABEL_207;
    }
    v75 = 0LL;
    v258 = VoiceLimitCountList;
    while ( 1 )
    {
      if ( v75 >= (unsigned int)v74 )
        goto LABEL_247;
      v76 = VoiceLimitCountList->m_Items[v75 + 1];
      v260 = v75;
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      if ( !v56 )
        goto LABEL_246;
      limitCount = v76;
      transformNameSprite = VoiceMaster__getEnableInfo(
                              (VoiceMaster_o *)v56,
                              (int32_t)transformNameSprite,
                              svtId,
                              v76,
                              (System_Collections_Generic_List_CondType_Kind__o *)v58,
                              0,
                              0,
                              0LL);
      if ( !transformNameSprite )
        goto LABEL_246;
      v78 = *((_DWORD *)transformNameSprite + 6);
      v79 = transformNameSprite;
      if ( v78 >= 1 )
      {
        for ( i = 0; (int)i < v78; ++i )
        {
          if ( i >= v78 )
            goto LABEL_247;
          v81 = (char *)&v79[2 * i];
          v84 = (VoiceInfo_o *)*((_QWORD *)v81 + 4);
          v83 = (VoiceInfo_o **)(v81 + 32);
          v82 = v84;
          if ( !v84 )
            goto LABEL_246;
          voiceEntity = v82->fields.voiceEntity;
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
                                                  v82,
                                                  v77);
                  if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
                  {
                    transformNameSprite = this->fields.itemList;
                    if ( !transformNameSprite )
                      goto LABEL_246;
                    System_Collections_Generic_List_object___GetEnumerator(
                      (System_Collections_Generic_List_Enumerator_T__o *)&v266,
                      (System_Collections_Generic_List_object__o *)transformNameSprite,
                      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
                    v269 = v266;
                    do
                    {
                      v88 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                              &v269,
                              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                      if ( !v88 )
                        goto LABEL_91;
                      current = v269.fields._current;
                      if ( !v269.fields._current
                        || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                            LOBYTE(v269.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
                        || (ServantStatusVoiceListViewItem_c *)v269.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                      {
                        sub_1C2E388(v88, v89);
                      }
                      klass = v269.fields._current[10].klass;
                      if ( !klass )
                        sub_1C2E388(v88, v89);
                    }
                    while ( HIDWORD(klass->_1.namespaze) != 2
                         || LODWORD(klass->_1.this_arg.data) != 7
                         || HIDWORD(klass->_1.this_arg.data) != voiceEntity->fields.condValue
                         || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                              (ServantStatusVoiceListViewItem_o *)v269.fields._current,
                              v89) != svtId );
                    v93 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                    if ( i >= v79[6] )
                      sub_1C2E390(v93, (unsigned int)v93);
                    ServantStatusVoiceListViewItem__SetLimitCount(
                      (ServantStatusVoiceListViewItem_o *)current,
                      v93,
                      svtId,
                      limitCount,
                      *v83,
                      v94,
                      v95);
                    goto LABEL_110;
                  }
LABEL_71:
                  if ( i >= v79[6] )
                    goto LABEL_247;
                  transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                                                  (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                                  svtId,
                                                  *v83,
                                                  v87);
                  if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
                    goto LABEL_106;
                  voiceLabelSpec = 1;
                  goto LABEL_93;
                }
              }
              else if ( condType == 18 )
              {
                if ( i >= v79[6] )
                  goto LABEL_247;
                transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                                (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                                svtId,
                                                limitCount,
                                                *v83,
                                                v77);
                if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
                  goto LABEL_71;
                transformNameSprite = this->fields.itemList;
                if ( !transformNameSprite )
                  goto LABEL_246;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v266,
                  (System_Collections_Generic_List_object__o *)transformNameSprite,
                  (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
                v269 = v266;
                do
                {
                  v97 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v269,
                          (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                  if ( !v97 )
                    goto LABEL_91;
                  v99 = v269.fields._current;
                  if ( !v269.fields._current
                    || (v100 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                        LOBYTE(v269.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v100)
                    || (ServantStatusVoiceListViewItem_c *)v269.fields._current->klass->_2.typeHierarchy[v100 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                  {
                    sub_1C2E388(v97, v98);
                  }
                  v101 = v269.fields._current[10].klass;
                  if ( !v101 )
                    sub_1C2E388(v97, v98);
                }
                while ( HIDWORD(v101->_1.namespaze) != 2
                     || LODWORD(v101->_1.this_arg.data) != 18
                     || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                          (ServantStatusVoiceListViewItem_o *)v269.fields._current,
                          v98) != svtId );
                v102 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                if ( i >= v79[6] )
                  sub_1C2E390(v102, v103);
                if ( !*v83 )
                  sub_1C2E388(v102, v103);
                v104 = (*v83)->fields.voiceEntity;
                if ( !v104 )
                  sub_1C2E388(v102, v103);
                v105 = v102;
                id = v104->fields.id;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                v108 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47794660(id, 0LL);
                if ( !v261 )
                  sub_1C2E388(0LL, v107);
                if ( !VoicePlayCondMaster__isVoiceCond(v261, v105, v108, 81, 0LL) )
                {
                  v134 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                  if ( i >= v79[6] )
                    sub_1C2E390(v134, (unsigned int)v134);
                  ServantStatusVoiceListViewItem__SetLimitCount(
                    (ServantStatusVoiceListViewItem_o *)v99,
                    v134,
                    svtId,
                    limitCount,
                    *v83,
                    v135,
                    v136);
LABEL_110:
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v269,
                    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
                  goto LABEL_106;
                }
LABEL_91:
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v269,
                  (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
              }
            }
          }
          voiceLabelSpec = 0;
LABEL_93:
          transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
          if ( i >= v79[6] )
            goto LABEL_247;
          if ( !*v83 )
            goto LABEL_246;
          v109 = (*v83)->fields.voiceEntity;
          if ( !v109 )
            goto LABEL_246;
          v110 = (int)transformNameSprite;
          v111 = v109->fields.id;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v112 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47794660(v111, 0LL);
          transformNameSprite = v261;
          if ( !v261 )
            goto LABEL_246;
          transformNameSprite = (void *)VoicePlayCondMaster__isVoiceCond(v261, v110, v112, 81, 0LL);
          if ( !voiceEntity )
            goto LABEL_246;
          v113 = voiceEntity->fields.condType;
          itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          v115 = v113 == 18;
          v116 = v113 == 7;
          if ( !itemList )
            goto LABEL_246;
          v117 = (char)transformNameSprite;
          v118 = itemList->fields._size;
          transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
          if ( i >= v79[6] )
            goto LABEL_247;
          v119 = *v83;
          v120 = firstPriority;
          v121 = (int)transformNameSprite;
          v122 = v117 & (v115 || v116);
          v123 = (ServantStatusVoiceListViewItem_o *)sub_1C2E378(ServantStatusVoiceListViewItem_TypeInfo);
          ServantStatusVoiceListViewItem___ctor(
            v123,
            v118,
            v121,
            svtId,
            limitCount,
            v119,
            v120,
            v122,
            voiceLabelSpec,
            v251);
          v130 = itemList->fields._items;
          v131 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++itemList->fields._version;
          if ( !v130 )
            goto LABEL_246;
          v132 = itemList->fields._size;
          if ( (unsigned int)v132 >= v130->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              itemList,
              (Il2CppObject *)v123,
              *(const MethodInfo_366B8AC **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
          }
          else
          {
            v133 = &v130->obj.klass + v132;
            itemList->fields._size = v132 + 1;
            v133[4] = (Il2CppClass *)v123;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v133 + 4), (int64_t)v123, v124, v125, v126, v127, v128, v129);
          }
LABEL_106:
          v78 = v79[6];
        }
      }
      v137 = firstPriority;
      v138 = ++firstPriority;
      v139 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      v140 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v140 = BalanceConfig_TypeInfo;
      }
      v56 = (Il2CppObject *)v259;
      if ( v139 == v140->static_fields->ServantIdJekyll )
        break;
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      v168 = (int)transformNameSprite;
      v169 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v169 = BalanceConfig_TypeInfo;
      }
      if ( v168 == v169->static_fields->ServantIdMashu1 )
      {
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( TutorialFlag__Get_39000124(115, 0LL) )
        {
          v170 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
          v171 = v137;
          v172 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v172 = BalanceConfig_TypeInfo;
          }
          transformNameSprite = VoiceMaster__getEnableInfo(
                                  (VoiceMaster_o *)v259,
                                  v170,
                                  v172->static_fields->ServantIdMashu2,
                                  limitCount,
                                  0LL,
                                  0,
                                  0,
                                  0LL);
          if ( !transformNameSprite )
            goto LABEL_246;
          v173 = transformNameSprite;
          if ( *((int *)transformNameSprite + 6) >= 1 )
          {
            v174 = 0LL;
            while ( 1 )
            {
              v175 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
              if ( !v175 )
                goto LABEL_246;
              v176 = v175->fields._size;
              transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
              v177 = (int)transformNameSprite;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              if ( v174 >= *((unsigned int *)v173 + 6) )
                break;
              v178 = (VoiceInfo_o *)v173[v174 + 4];
              ServantIdMashu2 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu2;
              v180 = (ServantStatusVoiceListViewItem_o *)sub_1C2E378(ServantStatusVoiceListViewItem_TypeInfo);
              ServantStatusVoiceListViewItem___ctor(
                v180,
                v176,
                v177,
                ServantIdMashu2,
                limitCount,
                v178,
                v138,
                0,
                0,
                v251);
              v187 = v175->fields._items;
              v188 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++v175->fields._version;
              if ( !v187 )
                goto LABEL_246;
              v189 = v175->fields._size;
              if ( (unsigned int)v189 >= v187->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v175,
                  (Il2CppObject *)v180,
                  *(const MethodInfo_366B8AC **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
              }
              else
              {
                v190 = &v187->obj.klass + v189;
                v175->fields._size = v189 + 1;
                v190[4] = (Il2CppClass *)v180;
                sub_1C2E0D0((PartyOrganizationUtility_o *)(v190 + 4), (int64_t)v180, v181, v182, v183, v184, v185, v186);
              }
              if ( (__int64)++v174 >= *((int *)v173 + 6) )
                goto LABEL_169;
            }
LABEL_247:
            sub_1C2E390(transformNameSprite, v46);
          }
LABEL_169:
          v138 = v171 + 2;
          firstPriority = v171 + 2;
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4BF81D5 )
        {
          sub_1C2E12C(&NetworkManager_TypeInfo, v46);
          byte_4BF81D5 = 1;
        }
        v191 = NetworkManager_TypeInfo;
        v56 = (Il2CppObject *)v259;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v191 = NetworkManager_TypeInfo;
        }
        v192 = BalanceConfig_TypeInfo;
        v193 = v191->static_fields->userIdNumber;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v192 = BalanceConfig_TypeInfo;
        }
        static_fields = v192->static_fields;
        MashuTdGradeUpQuestId = static_fields->MashuTdGradeUpQuestId;
        MashuTdGradeUpQuestPhase = static_fields->MashuTdGradeUpQuestPhase;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        transformNameSprite = (void *)CondType__IsQuestPhaseClear(
                                        v193,
                                        MashuTdGradeUpQuestId,
                                        MashuTdGradeUpQuestPhase,
                                        -1,
                                        0,
                                        0LL);
        if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
        {
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          transformNameSprite = v256;
          if ( !v256 )
            goto LABEL_246;
          transformNameSprite = (void *)ServantLimitAddMaster__TryGetEntity(
                                          v256,
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
              v198 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
              v199 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v199 = BalanceConfig_TypeInfo;
              }
              transformNameSprite = VoiceMaster__getEnableInfo(
                                      (VoiceMaster_o *)v259,
                                      v198,
                                      v199->static_fields->ServantIdMashu3,
                                      limitCount,
                                      0LL,
                                      0,
                                      0,
                                      0LL);
              if ( !transformNameSprite )
                goto LABEL_246;
              v200 = transformNameSprite;
              if ( *((int *)transformNameSprite + 6) >= 1 )
              {
                v201 = 0LL;
                do
                {
                  v202 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  if ( !v202 )
                    goto LABEL_246;
                  v203 = v202->fields._size;
                  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                  v204 = (int)transformNameSprite;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( v201 >= *((unsigned int *)v200 + 6) )
                    goto LABEL_247;
                  v205 = (VoiceInfo_o *)v200[v201 + 4];
                  ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
                  v207 = (ServantStatusVoiceListViewItem_o *)sub_1C2E378(ServantStatusVoiceListViewItem_TypeInfo);
                  ServantStatusVoiceListViewItem___ctor(
                    v207,
                    v203,
                    v204,
                    ServantIdMashu3,
                    limitCount,
                    v205,
                    v138,
                    0,
                    0,
                    v251);
                  v214 = v202->fields._items;
                  v215 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++v202->fields._version;
                  if ( !v214 )
                    goto LABEL_246;
                  v216 = v202->fields._size;
                  if ( (unsigned int)v216 >= v214->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v202,
                      (Il2CppObject *)v207,
                      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v215[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v217 = &v214->obj.klass + v216;
                    v202->fields._size = v216 + 1;
                    v217[4] = (Il2CppClass *)v207;
                    sub_1C2E0D0(
                      (PartyOrganizationUtility_o *)(v217 + 4),
                      (int64_t)v207,
                      v208,
                      v209,
                      v210,
                      v211,
                      v212,
                      v213);
                  }
                }
                while ( (__int64)++v201 < *((int *)v200 + 6) );
              }
              v167 = v138 + 1;
LABEL_148:
              v56 = (Il2CppObject *)v259;
              firstPriority = v167;
            }
          }
        }
      }
LABEL_189:
      v58 = v257;
      VoiceLimitCountList = v258;
      LODWORD(v74) = v258->max_length;
      v75 = v260 + 1;
      if ( (__int64)(v260 + 1) >= (int)v74 )
        goto LABEL_206;
    }
    v141 = DataMasterBase_object__object__object___GetEntity(
             v259,
             (Il2CppObject *)StringLiteral_2665/*"B050"*/,
             (const MethodInfo_327FC38 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string__GetEntity__);
    transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !transformNameSprite )
      goto LABEL_246;
    v143 = DataManager__GetMasterData_object_(
             (DataManager_o *)transformNameSprite,
             (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BF81D5 )
    {
      sub_1C2E12C(&NetworkManager_TypeInfo, v142);
      byte_4BF81D5 = 1;
    }
    v144 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v144 = NetworkManager_TypeInfo;
    }
    v145 = v144->static_fields->userIdNumber;
    transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
    if ( !v143 )
      goto LABEL_246;
    transformNameSprite = UserServantCollectionMaster__GetEntityDefinitely(
                            (UserServantCollectionMaster_o *)v143,
                            v145,
                            (int32_t)transformNameSprite,
                            0LL);
    if ( !v141 )
      goto LABEL_246;
    if ( LODWORD(v141[3].klass) == 17 )
    {
      if ( !transformNameSprite )
        goto LABEL_246;
      transformNameSprite = (void *)UserServantCollectionEntity__IsPlayed(
                                      (UserServantCollectionEntity_o *)transformNameSprite,
                                      HIDWORD(v141[3].klass),
                                      0LL);
      if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
        goto LABEL_189;
    }
    v146 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
    v147 = v137;
    v148 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v148 = BalanceConfig_TypeInfo;
    }
    transformNameSprite = VoiceMaster__getEnableInfo(
                            (VoiceMaster_o *)v259,
                            v146,
                            v148->static_fields->ServantIdHyde,
                            limitCount,
                            0LL,
                            0,
                            0,
                            0LL);
    if ( !transformNameSprite )
      goto LABEL_246;
    v149 = transformNameSprite;
    if ( *((int *)transformNameSprite + 6) >= 1 )
    {
      v150 = 0LL;
      do
      {
        v151 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !v151 )
          goto LABEL_246;
        v152 = v151->fields._size;
        transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
        v153 = (int)transformNameSprite;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( v150 >= *((unsigned int *)v149 + 6) )
          goto LABEL_247;
        v154 = (VoiceInfo_o *)v149[v150 + 4];
        ServantIdHyde = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
        v156 = (ServantStatusVoiceListViewItem_o *)sub_1C2E378(ServantStatusVoiceListViewItem_TypeInfo);
        ServantStatusVoiceListViewItem___ctor(v156, v152, v153, ServantIdHyde, limitCount, v154, v138, 0, 0, v251);
        v163 = v151->fields._items;
        v164 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v151->fields._version;
        if ( !v163 )
          goto LABEL_246;
        v165 = v151->fields._size;
        if ( (unsigned int)v165 >= v163->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v151,
            (Il2CppObject *)v156,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
        }
        else
        {
          v166 = &v163->obj.klass + v165;
          v151->fields._size = v165 + 1;
          v166[4] = (Il2CppClass *)v156;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v166 + 4), (int64_t)v156, v157, v158, v159, v160, v161, v162);
        }
      }
      while ( (__int64)++v150 < *((int *)v149 + 6) );
    }
    v167 = v147 + 2;
    goto LABEL_148;
  }
LABEL_207:
  v221 = this->fields.itemList;
  if ( !v221 )
    goto LABEL_246;
  v222 = v221->fields._size;
  v223 = sub_1C2E378(System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v223,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
  if ( v222 - 1 >= 1 )
  {
    for ( j = 0; j != v222 - 1; ++j )
    {
      transformNameSprite = this->fields.itemList;
      if ( !transformNameSprite )
        goto LABEL_246;
      transformNameSprite = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)transformNameSprite,
                              j,
                              (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !transformNameSprite )
        goto LABEL_246;
      v225 = (ServantStatusVoiceListViewItem_o *)transformNameSprite;
      v226 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)transformNameSprite + 304LL) < (unsigned int)v226
        || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)transformNameSprite + 200LL) + 8 * v226 - 8) != ServantStatusVoiceListViewItem_TypeInfo )
      {
        goto LABEL_246;
      }
      if ( ServantStatusVoiceListViewItem__get_OpenName((ServantStatusVoiceListViewItem_o *)transformNameSprite, v46) )
      {
        transformNameSprite = (void *)ServantStatusVoiceListViewItem__get_DispNum(v225, v46);
        if ( !(_DWORD)transformNameSprite )
        {
          if ( !v223 )
            goto LABEL_246;
          v227 = *(unsigned int *)(v223 + 24);
          v228 = *(_DWORD *)(v223 + 28) + 1;
          *(_DWORD *)(v223 + 24) = 0;
          *(_DWORD *)(v223 + 28) = v228;
          if ( (int)v227 >= 1 )
            System_Array__Clear(*(System_Array_o **)(v223 + 16), 0, v227, 0LL);
          v229 = j + 1;
          if ( j + 1 < v222 )
          {
            do
            {
              transformNameSprite = this->fields.itemList;
              if ( !transformNameSprite )
                goto LABEL_246;
              transformNameSprite = System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)transformNameSprite,
                                      v229,
                                      (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !transformNameSprite )
                goto LABEL_246;
              v230 = (Il2CppObject *)transformNameSprite;
              v231 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)transformNameSprite + 304LL) < (unsigned int)v231
                || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)transformNameSprite + 200LL)
                                                        + 8 * v231
                                                        - 8) != ServantStatusVoiceListViewItem_TypeInfo )
              {
                goto LABEL_246;
              }
              OpenName = ServantStatusVoiceListViewItem__get_OpenName(
                           (ServantStatusVoiceListViewItem_o *)transformNameSprite,
                           v46);
              v234 = ServantStatusVoiceListViewItem__get_OpenName(v225, v233);
              transformNameSprite = (void *)System_String__op_Equality(OpenName, v234, 0LL);
              if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              {
                v240 = *(_QWORD *)(v223 + 16);
                v241 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__;
                ++*(_DWORD *)(v223 + 28);
                if ( !v240 )
                  goto LABEL_246;
                v242 = *(int *)(v223 + 24);
                if ( (unsigned int)v242 >= *(_DWORD *)(v240 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)v223,
                    v230,
                    *(const MethodInfo_366B8AC **)(*(_QWORD *)(v241[4] + 192LL) + 112LL));
                }
                else
                {
                  v243 = v240 + 8 * v242;
                  *(_DWORD *)(v223 + 24) = v242 + 1;
                  *(_QWORD *)(v243 + 32) = v230;
                  sub_1C2E0D0(
                    (PartyOrganizationUtility_o *)(v243 + 32),
                    (int64_t)v230,
                    v227,
                    v235,
                    v236,
                    v237,
                    v238,
                    v239);
                }
              }
            }
            while ( v222 != ++v229 );
          }
          if ( *(int *)(v223 + 24) >= 1 )
          {
            ServantStatusVoiceListViewItem__SetNameNum(v225, 1, (const MethodInfo *)v227);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v266,
              (System_Collections_Generic_List_object__o *)v223,
              (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
            v244 = 2;
            for ( k = v266;
                  ;
                  ServantStatusVoiceListViewItem__SetNameNum(
                    (ServantStatusVoiceListViewItem_o *)k.fields._current,
                    v244++,
                    v247) )
            {
              v245 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &k,
                       (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
              if ( !v245 )
                break;
              if ( k.fields._current )
              {
                v248 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
                if ( LOBYTE(k.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v248
                  && (ServantStatusVoiceListViewItem_c *)k.fields._current->klass->_2.typeHierarchy[v248 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
                {
                  continue;
                }
              }
              sub_1C2E388(v245, v246);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &k,
              (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
          }
        }
      }
    }
  }
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transformNameSprite = LocalizationManager__Get((System_String_o *)StringLiteral_12171/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_246;
  UILabel__set_text(explanationLabel, (System_String_o *)transformNameSprite, 0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  transformNameSprite = LocalizationManager__Get(v252, 0LL);
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


// local variable allocation has failed, the output may be wrong!
ServantStatusVoiceListViewItem_o *__fastcall ServantStatusVoiceListViewManager__GetItem(
        ServantStatusVoiceListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ServantStatusVoiceListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4BFB1CE & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1C2E12C(&ServantStatusVoiceListViewItem_TypeInfo, v5);
    byte_4BFB1CE = 1;
  }
  result = (ServantStatusVoiceListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantStatusVoiceListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4BFB1CC & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantVoiceMaster___, *(_QWORD *)&svtId);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1C2E12C(&StringLiteral_16410/*"_"*/, v9);
    byte_4BFB1CC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)ServantVoiceMaster__getEntity_41224900(
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
    sub_1C2E390(Instance, v11);
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
        Instance = (DataManager_o *)System_String__Concat_63246844(
                                      v16,
                                      (System_String_o *)StringLiteral_16410/*"_"*/,
                                      v17,
                                      0LL),
        (v18 = *(_QWORD *)(v14 + 32)) == 0) )
  {
LABEL_25:
    sub_1C2E388(Instance, v11);
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
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x21
  struct ServantVoiceCond_array *servantVoiceConds; // x22
  int max_length; // w8
  DataManager_o *v14; // x19
  unsigned int v15; // w23
  bool v16; // w25
  ServantVoiceCond_o *v17; // x8
  int32_t condType; // w9
  int value; // w26
  __int64 v20; // x20
  __int64 v21; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4BFB1CD & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_1C2E12C(&NetworkManager_TypeInfo, v6);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4BFB1CD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BF81D5 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, v10);
    byte_4BF81D5 = 1;
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
    v14 = Instance;
    v15 = 0;
    v16 = 1;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1C2E390(Instance, v10);
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
        v20 = *(__int64 *)((char *)&v14->fields.lockCountObj + 4);
        v21 = *(_QWORD *)&v14->fields.isFailedLoad;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v23.fields.currentCryptoKey = v20;
        *(_QWORD *)&v23.fields.fakeValue = v21;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v23, 0LL);
        if ( (int)Instance >= value )
          v16 = 1;
      }
      max_length = servantVoiceConds->max_length;
      if ( (int)++v15 >= max_length )
        return v16;
    }
LABEL_31:
    sub_1C2E388(Instance, v10);
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
  if ( (byte_4BFB1D4 & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1C2E12C(&ServantStatusVoiceListViewItem_TypeInfo, obj);
    byte_4BFB1D4 = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0LL
    || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
  {
    sub_1C2E388(this, obj);
  }
  if ( LOBYTE(linkItem[1].fields.sortValue2B) )
  {
    callbackFunc = v9->fields.callbackFunc;
    v9->fields.callbackFunc = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v9->fields.callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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

  if ( (byte_4BFB1D3 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFB1D3 = 1;
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
          sub_1C2E388(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4BFB1D1 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v11);
    sub_1C2E12C(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v12);
    sub_1C2E12C(&StringLiteral_10127/*"OnMoveEnd"*/, v13);
    byte_4BFB1D1 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2E388(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10127/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C2E388(v19, v20);
      ServantStatusVoiceListViewObject__Init_36469368(
        (ServantStatusVoiceListViewObject_o *)current,
        mode,
        v18,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__RequestListObject_36468864(
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

  if ( (byte_4BFB1D2 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v9);
    sub_1C2E12C(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v10);
    sub_1C2E12C(&StringLiteral_10127/*"OnMoveEnd"*/, v11);
    byte_4BFB1D2 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2E388(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10127/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C2E388(v17, v18);
      ServantStatusVoiceListViewObject__Init_36469976((ServantStatusVoiceListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
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
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusVoiceListViewManager__SetMode_36467892(this, mode, -1, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__SetMode_36467892(
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

  if ( (byte_4BFB1D0 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__, v12);
    sub_1C2E12C(&ServantStatusVoiceListViewItem_TypeInfo, v13);
    sub_1C2E12C(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v14);
    sub_1C2E12C(&StringLiteral_10127/*"OnMoveEnd"*/, v15);
    byte_4BFB1D0 = 1;
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
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    for ( i = v32; ; BYTE1(i.fields._current[12].klass) = HIDWORD(i.fields._current[1].klass) == select )
    {
      v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v17 )
        break;
      if ( !i.fields._current )
        sub_1C2E388(v17, v18);
      methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(i.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (ServantStatusVoiceListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        sub_1C2E388(v17, v18);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
                                                                  (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
        if ( !itemList )
          break;
        ServantStatusVoiceListViewObject__Init_36467764((ServantStatusVoiceListViewObject_o *)itemList, 4, v25);
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
                   (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
          v30 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
          System_Action___ctor(v30, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
            break;
          ServantStatusVoiceListViewObject__Init_36469368((ServantStatusVoiceListViewObject_o *)Item, 5, v30, 0.1, v31);
          if ( ++v28 >= v27->fields._size )
            return;
        }
LABEL_30:
        sub_1C2E388(itemList, *(_QWORD *)&mode);
      }
      this->fields.callbackCount = 1;
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_10127/*"OnMoveEnd"*/,
        0.2,
        0LL);
    }
    else if ( mode == 1 )
    {
      ServantStatusVoiceListViewManager__RequestListObject_36468864(this, 3, v21);
    }
  }
}


void __fastcall ServantStatusVoiceListViewManager__SetMode_36468808(
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
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusVoiceListViewManager__SetMode_36467892(this, mode, -1, v10);
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
  if ( (byte_4BFB1CF & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1C2E12C(&ServantStatusVoiceListViewObject_TypeInfo, obj);
    byte_4BFB1CF = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusVoiceListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewObject_TypeInfo )
  {
    sub_1C2E388(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ServantStatusVoiceListViewObject__Init_36467764(
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

  if ( (byte_4BFB1C3 & 1) == 0 )
  {
    sub_1C2E12C(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, value);
    byte_4BFB1C3 = 1;
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
    v8 = sub_1C6961C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2E648(v7);
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

  if ( (byte_4BFB1C5 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, value);
    byte_4BFB1C5 = 1;
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
    v8 = sub_1C6961C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2E648(v7);
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  _BOOL8 v28; // x0
  __int64 v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BFB1C8 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__, v8);
    sub_1C2E12C(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo, v9);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v10);
    byte_4BFB1C8 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2E388(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C2E388(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1C2E388(0LL, v18);
      Item = (ListViewItem_o *)ServantStatusVoiceListViewObject__GetItem(
                                 (ServantStatusVoiceListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1C2E388(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v28 = ListViewManager__ClippingItem_42097292((ListViewManager_o *)this, Item, 0LL);
        if ( v28 )
        {
          if ( !v11 )
            sub_1C2E388(v28, v29);
          items = v11->fields._items;
          v31 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1C2E388(v28, v29);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1C2E388(Item, v21);
        items = v11->fields._items;
        v31 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1C2E388(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v33 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v19;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v19, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BFB1C7 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__, v8);
    sub_1C2E12C(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo, v9);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v10);
    byte_4BFB1C7 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2E388(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C2E388(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v24 = (int64_t)Component_object;
      if ( !v11 )
        sub_1C2E388(Component_object, Component_object);
      items = v11->fields._items;
      v26 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C2E388(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v28 + 4), v24, v18, v19, v20, v21, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4BFB1C4 & 1) == 0 )
  {
    sub_1C2E12C(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, value);
    byte_4BFB1C4 = 1;
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
    v8 = sub_1C6961C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2E648(v7);
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

  if ( (byte_4BFB1C6 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, value);
    byte_4BFB1C6 = 1;
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
    v8 = sub_1C6961C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2E648(v7);
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
  sub_1C2E0D0(
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
  if ( (sub_1C2E1EC(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C2E3A4(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2E254(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A6D328;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A6D2D0;
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
  if ( (byte_4BFB1D5 & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1C2E12C(&ServantStatusVoiceListViewManager_ResultKind_TypeInfo, v9);
    byte_4BFB1D5 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             ServantStatusVoiceListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1C2E0E0(this, v14, callback, object);
}


void __fastcall ServantStatusVoiceListViewManager_CallbackFunc__EndInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2E0E4(result, 0LL, method);
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