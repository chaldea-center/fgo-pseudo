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
  __int64 v27; // x2
  VoiceInfo_o *v28; // x29
  int32_t v29; // w28
  int32_t v30; // w20
  ServantStatusVoiceListViewItem_o *v31; // x26
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0
  const MethodInfo *v38; // [xsp+8h] [xbp-98h]
  VoiceMaster_o *v39; // [xsp+18h] [xbp-88h]
  ServantVoiceRelationEntity_array *v40; // [xsp+20h] [xbp-80h]
  int32_t ascendOrder; // [xsp+28h] [xbp-78h]
  unsigned int v42; // [xsp+2Ch] [xbp-74h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_49F9C5A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_VoiceMaster___, firstPriority);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B640C8(&ServantStatusVoiceListViewItem_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49F9C5A = 1;
  }
  Instance = (VoiceInfo_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (VoiceInfo_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !relationList )
    goto LABEL_29;
  max_length = relationList->max_length;
  if ( max_length >= 1 )
  {
    v15 = (VoiceMaster_o *)Instance;
    v16 = 0;
    v17 = 1;
    ascendOrder = 0;
    v39 = (VoiceMaster_o *)Instance;
    v40 = relationList;
    while ( 1 )
    {
      if ( v16 >= max_length )
LABEL_30:
        sub_1B6432C(Instance, v13);
      v18 = relationList->m_Items[v16];
      v42 = v16;
      if ( !v18 )
        goto LABEL_29;
      v20 = *(_QWORD *)&v18->fields.relationSvtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&v18->fields.relationSvtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v45.fields.currentCryptoKey = v20;
      *(_QWORD *)&v45.fields.fakeValue = v19;
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v45, 0LL);
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
      v15 = v39;
      relationList = v40;
      v17 = 0;
      max_length = v40->max_length;
      v16 = v42 + 1;
      if ( (int)(v42 + 1) >= max_length )
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
      *(_QWORD *)&v46.fields.currentCryptoKey = v26;
      *(_QWORD *)&v46.fields.fakeValue = v25;
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v46, 0LL);
      if ( v22 >= v21->max_length )
        goto LABEL_30;
      v28 = v21->m_Items[v22];
      v29 = (int)Instance;
      v30 = *firstPriority;
      v31 = (ServantStatusVoiceListViewItem_o *)sub_1B64314(ServantStatusVoiceListViewItem_TypeInfo, v13, v27);
      ServantStatusVoiceListViewItem___ctor(v31, size, svtId, v29, 0, v28, v30, 0, 0, v38);
      items = itemList->fields._items;
      v35 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v36 = itemList->fields._size;
      if ( (unsigned int)v36 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v31,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + v36;
        itemList->fields._size = v36 + 1;
        v37[4] = (Il2CppClass *)v31;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v31, v32, v33);
      }
      if ( (__int64)++v22 >= (int)v21->max_length )
        goto LABEL_27;
    }
LABEL_29:
    sub_1B64324(Instance);
  }
}


void __fastcall ServantStatusVoiceListViewManager__Awake(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  void *scrollView; // x0
  float v4; // s1

  if ( (byte_49F9C59 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_49F9C59 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)scrollView,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL )
  {
    sub_1B64324(scrollView);
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
  _BOOL4 IsTransformServant_k__BackingField; // w19
  ServantStatusVoiceListViewManager_o *v47; // x19
  UILabel_o *transformNameLabel; // x20
  float transformNameAddHeight; // s0
  struct UIScrollView_o *scrollView; // x8
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x21
  Il2CppObject *v53; // x20
  __int64 v54; // x1
  __int64 v55; // x2
  System_Collections_Generic_List_T__o *v56; // x19
  __int64 v57; // x1
  __int64 v58; // x2
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  System_Int32_array *v61; // x19
  __int64 v62; // x10
  VoiceMaster_o *v63; // x22
  __int64 v64; // x8
  unsigned __int64 v65; // x9
  Il2CppObject *MasterData_object; // x20
  int32_t maxLimitCount; // w21
  System_Int32_array *VoiceLimitCountList; // x19
  ServantVoiceRelationEntity_array *v69; // x20
  int32_t v70; // w0
  const MethodInfo *v71; // x4
  ServantVoiceRelationEntity_array *v72; // x20
  int32_t v73; // w0
  const MethodInfo *v74; // x4
  System_Int32_array *v75; // x9
  __int64 v76; // x8
  unsigned __int64 v77; // x19
  int32_t v78; // w20
  const MethodInfo *v79; // x4
  int v80; // w8
  _DWORD *v81; // x21
  unsigned int i; // w25
  char *v83; // x19
  VoiceInfo_o *v84; // x3
  VoiceInfo_o **v85; // x19
  VoiceInfo_o *v86; // t1
  struct VoiceEntity_o *voiceEntity; // x27
  int32_t condType; // w8
  const MethodInfo *v89; // x3
  _BOOL8 v90; // x0
  const MethodInfo *v91; // x1
  Il2CppObject *current; // x23
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8
  __int64 v95; // x0
  int32_t v96; // w5
  const MethodInfo *v97; // x6
  int32_t v98; // w1
  bool voiceLabelSpec; // w22
  _BOOL8 v100; // x0
  const MethodInfo *v101; // x1
  __int64 v102; // x10
  Il2CppClass *v103; // x8
  __int64 v104; // x0
  __int64 v105; // x1
  struct VoiceEntity_o *v106; // x8
  int32_t v107; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x24
  System_String_o *v109; // x2
  struct VoiceEntity_o *v110; // x8
  int32_t v111; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v112; // x24
  System_String_o *v113; // x2
  int32_t v114; // w8
  System_Collections_Generic_List_object__o *itemList; // x23
  bool v116; // w28
  bool v117; // w20
  char v118; // w26
  int32_t size; // w24
  __int64 v120; // x2
  VoiceInfo_o *v121; // x29
  int32_t v122; // w19
  int32_t v123; // w27
  bool v124; // w28
  ServantStatusVoiceListViewItem_o *v125; // x26
  int32_t v126; // w2
  int32_t v127; // w3
  struct System_Object_array *v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  Il2CppClass **v131; // x0
  __int64 v132; // x0
  int32_t v133; // w20
  int32_t v134; // w21
  int32_t v135; // w23
  BalanceConfig_c *v136; // x8
  Il2CppObject *v137; // x23
  Il2CppObject *v138; // x24
  int64_t v139; // x26
  int32_t v140; // w23
  BalanceConfig_c *v141; // x8
  _QWORD *v142; // x23
  unsigned __int64 v143; // x22
  System_Collections_Generic_List_object__o *v144; // x26
  int32_t v145; // w29
  __int64 v146; // x2
  int32_t v147; // w24
  VoiceInfo_o *v148; // x19
  int32_t ServantIdHyde; // w28
  ServantStatusVoiceListViewItem_o *v150; // x27
  int32_t v151; // w2
  int32_t v152; // w3
  struct System_Object_array *v153; // x8
  _QWORD *v154; // x9
  __int64 v155; // x10
  Il2CppClass **v156; // x0
  int32_t v157; // w8
  int v158; // w23
  BalanceConfig_c *v159; // x8
  int32_t v160; // w23
  BalanceConfig_c *v161; // x8
  _QWORD *v162; // x23
  unsigned __int64 v163; // x22
  System_Collections_Generic_List_object__o *v164; // x26
  int32_t v165; // w29
  __int64 v166; // x2
  int32_t v167; // w24
  VoiceInfo_o *v168; // x19
  int32_t ServantIdMashu2; // w28
  ServantStatusVoiceListViewItem_o *v170; // x27
  int32_t v171; // w2
  int32_t v172; // w3
  struct System_Object_array *v173; // x8
  _QWORD *v174; // x9
  __int64 v175; // x10
  Il2CppClass **v176; // x0
  int64_t v177; // x23
  BalanceConfig_c *v178; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t MashuTdGradeUpQuestId; // w24
  int32_t MashuTdGradeUpQuestPhase; // w26
  int32_t svtVoiceId; // w19
  int32_t v183; // w23
  BalanceConfig_c *v184; // x8
  _QWORD *v185; // x23
  unsigned __int64 v186; // x22
  System_Collections_Generic_List_object__o *v187; // x26
  int32_t v188; // w29
  __int64 v189; // x2
  int32_t v190; // w24
  VoiceInfo_o *v191; // x19
  int32_t ServantIdMashu3; // w28
  ServantStatusVoiceListViewItem_o *v193; // x27
  int32_t v194; // w2
  int32_t v195; // w3
  struct System_Object_array *v196; // x8
  _QWORD *v197; // x9
  __int64 v198; // x10
  Il2CppClass **v199; // x0
  ServantVoiceRelationEntity_array *v200; // x19
  int32_t v201; // w0
  const MethodInfo *v202; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v203; // x8
  int32_t v204; // w25
  __int64 v205; // x20
  int32_t j; // w21
  const MethodInfo *v207; // x1
  ServantStatusVoiceListViewItem_o *v208; // x22
  __int64 v209; // x10
  const MethodInfo *v210; // x1
  const MethodInfo *v211; // x2
  int v212; // w8
  int32_t v213; // w23
  const MethodInfo *v214; // x1
  Il2CppObject *v215; // x24
  __int64 v216; // x10
  System_String_o *OpenName; // x19
  const MethodInfo *v218; // x1
  System_String_o *v219; // x0
  int32_t v220; // w3
  __int64 v221; // x8
  _QWORD *v222; // x9
  __int64 v223; // x10
  __int64 v224; // x0
  int32_t v225; // w22
  _BOOL8 v226; // x0
  const MethodInfo *v227; // x2
  __int64 v228; // x11
  UILabel_o *explanationLabel; // x20
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v231; // [xsp+8h] [xbp-168h]
  System_String_o *v232; // [xsp+18h] [xbp-158h]
  UserServantCollectionEntity_o *EntityDefinitely; // [xsp+20h] [xbp-150h]
  unsigned __int64 v235; // [xsp+30h] [xbp-140h]
  ServantLimitAddMaster_o *v236; // [xsp+38h] [xbp-138h]
  System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList; // [xsp+40h] [xbp-130h]
  System_Int32_array *v238; // [xsp+48h] [xbp-128h]
  Il2CppObject *v239; // [xsp+50h] [xbp-120h]
  unsigned __int64 v240; // [xsp+58h] [xbp-118h]
  VoicePlayCondMaster_o *v241; // [xsp+60h] [xbp-110h]
  int32_t svtId; // [xsp+6Ch] [xbp-104h]
  int limitCount; // [xsp+84h] [xbp-ECh]
  System_Collections_Generic_List_Enumerator_object__o v246; // [xsp+88h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o k; // [xsp+A0h] [xbp-D0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+B8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v249; // [xsp+C0h] [xbp-B0h] BYREF
  ServantVoiceRelationEntity_array *afterRelationList; // [xsp+E0h] [xbp-90h] BYREF
  ServantVoiceRelationEntity_array *sameRelationList; // [xsp+E8h] [xbp-88h] BYREF
  ServantVoiceRelationEntity_array *beforeRelationList; // [xsp+F0h] [xbp-80h] BYREF
  int32_t firstPriority; // [xsp+FCh] [xbp-74h] BYREF
  UnityEngine_Vector4_o v254; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F9C5B & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, mainInfo);
    sub_1B640C8(&CondType_TypeInfo, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_VoiceMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMaster_VoicePlayCondMaster___, v11);
    sub_1B640C8(&DataManager_TypeInfo, v12);
    sub_1B640C8(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string__GetEntity__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__get_Current__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_CondType_Kind__Add__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__get_Count__, v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v29);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v30);
    sub_1B640C8(&System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo, v31);
    sub_1B640C8(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v32);
    sub_1B640C8(&LocalizationManager_TypeInfo, v33);
    sub_1B640C8(&NetworkManager_TypeInfo, v34);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v35);
    sub_1B640C8(&ServantStatusVoiceListViewItem_TypeInfo, v36);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37);
    sub_1B640C8(&TutorialFlag_TypeInfo, v38);
    sub_1B640C8(&StringLiteral_2636/*"B050"*/, v39);
    sub_1B640C8(&StringLiteral_15170/*"VOICE_EMPTY_MESSAGE"*/, v40);
    sub_1B640C8(&StringLiteral_11888/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, v41);
    byte_49F9C5B = 1;
  }
  v42 = StringLiteral_15170/*"VOICE_EMPTY_MESSAGE"*/;
  firstPriority = 0;
  sameRelationList = 0LL;
  beforeRelationList = 0LL;
  afterRelationList = 0LL;
  memset(&v249, 0, sizeof(v249));
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
    v47 = this;
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
    v47 = this;
  }
  scrollView = v47->fields.scrollView;
  if ( !scrollView )
    goto LABEL_233;
  transformNameSprite = scrollView->fields.mPanel;
  if ( !transformNameSprite )
    goto LABEL_233;
  v254.fields.x = *((float *)transformNameSprite + 74);
  v254.fields.z = *((float *)transformNameSprite + 76);
  v254.fields.y = defaultPanelCenter;
  v254.fields.w = defaultPanelHeight;
  UIPanel__set_baseClipRegion((UIPanel_o *)transformNameSprite, v254, 0LL);
  transformNameSprite = this->fields.scrollView;
  if ( !transformNameSprite )
    goto LABEL_233;
  UIScrollView__ResetPosition((UIScrollView_o *)transformNameSprite, 0LL);
  this->fields.execObjectExtraFlag = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v232 = (System_String_o *)v42;
  UserId = NetworkManager__get_UserId(0LL);
  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
  if ( !Master_object )
    goto LABEL_233;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       UserId,
                       (int32_t)transformNameSprite,
                       0LL);
  v239 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_VoiceMaster___);
  v241 = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v53 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  firstPriority = 0;
  v56 = (System_Collections_Generic_List_T__o *)sub_1B64314(
                                                  System_Collections_Generic_List_CondType_Kind__TypeInfo,
                                                  v54,
                                                  v55);
  System_Collections_Generic_List_Int32Enum____ctor(
    v56,
    (const MethodInfo_3491F54 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v56 )
    goto LABEL_233;
  transformNameSprite = v56;
  items = v56->fields._items;
  v60 = Method_System_Collections_Generic_List_CondType_Kind__Add__;
  ++v56->fields._version;
  v61 = changeSvtVoiceIdList;
  if ( !items )
    goto LABEL_233;
  v62 = *((int *)transformNameSprite + 6);
  v63 = (VoiceMaster_o *)v239;
  disableCondTypeList = (System_Collections_Generic_List_CondType_Kind__o *)transformNameSprite;
  if ( (unsigned int)v62 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)transformNameSprite,
      81,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    *((_DWORD *)transformNameSprite + 6) = v62 + 1;
    *((_DWORD *)items->m_Items + v62) = 81;
  }
  v236 = (ServantLimitAddMaster_o *)v53;
  if ( !changeSvtVoiceIdList )
LABEL_233:
    sub_1B64324(transformNameSprite);
  v64 = *(_QWORD *)&changeSvtVoiceIdList->max_length;
  if ( (int)v64 >= 1 )
  {
    v65 = 0LL;
    while ( 1 )
    {
      if ( v65 >= (unsigned int)v64 )
        goto LABEL_234;
      v235 = v65;
      svtId = v61->m_Items[v65 + 1];
      transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_233;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)transformNameSprite,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
      transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_233;
      v238 = VoiceLimitCountList;
      transformNameSprite = DataManager__GetMasterData_object_(
                              (DataManager_o *)transformNameSprite,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !transformNameSprite )
        goto LABEL_233;
      ServantVoiceRelationMaster__GetRelationList_39465092(
        (ServantVoiceRelationMaster_o *)transformNameSprite,
        &beforeRelationList,
        &sameRelationList,
        &afterRelationList,
        svtId,
        0LL);
      v69 = beforeRelationList;
      v70 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v69, v70, v71);
      v72 = sameRelationList;
      ++firstPriority;
      v73 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v72, v73, v74);
      v75 = VoiceLimitCountList;
      if ( !VoiceLimitCountList )
        goto LABEL_233;
      v76 = *(_QWORD *)&VoiceLimitCountList->max_length;
      if ( (int)v76 >= 1 )
        break;
LABEL_193:
      v200 = afterRelationList;
      v201 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v200, v201, v202);
      v61 = changeSvtVoiceIdList;
      LODWORD(v64) = changeSvtVoiceIdList->max_length;
      v65 = v235 + 1;
      if ( (__int64)(v235 + 1) >= (int)v64 )
        goto LABEL_194;
    }
    v77 = 0LL;
    while ( 1 )
    {
      if ( v77 >= (unsigned int)v76 )
        goto LABEL_234;
      v78 = v75->m_Items[v77 + 1];
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      if ( !v63 )
        goto LABEL_233;
      v240 = v77;
      limitCount = v78;
      transformNameSprite = VoiceMaster__getEnableInfo(
                              v63,
                              (int32_t)transformNameSprite,
                              svtId,
                              v78,
                              disableCondTypeList,
                              0,
                              0,
                              0LL);
      if ( !transformNameSprite )
        goto LABEL_233;
      v80 = *((_DWORD *)transformNameSprite + 6);
      v81 = transformNameSprite;
      if ( v80 >= 1 )
      {
        for ( i = 0; (int)i < v80; ++i )
        {
          if ( i >= v80 )
            goto LABEL_234;
          v83 = (char *)&v81[2 * i];
          v86 = (VoiceInfo_o *)*((_QWORD *)v83 + 4);
          v85 = (VoiceInfo_o **)(v83 + 32);
          v84 = v86;
          if ( !v86 )
            goto LABEL_233;
          voiceEntity = v84->fields.voiceEntity;
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
                                                  v84,
                                                  v79);
                  if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
                  {
                    transformNameSprite = this->fields.itemList;
                    if ( !transformNameSprite )
                      goto LABEL_233;
                    System_Collections_Generic_List_object___GetEnumerator(
                      (System_Collections_Generic_List_Enumerator_T__o *)&v246,
                      (System_Collections_Generic_List_object__o *)transformNameSprite,
                      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
                    v249 = v246;
                    do
                    {
                      v90 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                              &v249,
                              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                      if ( !v90 )
                        goto LABEL_87;
                      current = v249.fields._current;
                      if ( !v249.fields._current
                        || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                            LOBYTE(v249.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
                        || (ServantStatusVoiceListViewItem_c *)v249.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                      {
                        sub_1B64324(v90);
                      }
                      klass = v249.fields._current[10].klass;
                      if ( !klass )
                        sub_1B64324(v90);
                    }
                    while ( HIDWORD(klass->_1.namespaze) != 2
                         || LODWORD(klass->_1.this_arg.data) != 7
                         || HIDWORD(klass->_1.this_arg.data) != voiceEntity->fields.condValue
                         || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                              (ServantStatusVoiceListViewItem_o *)v249.fields._current,
                              v91) != svtId );
                    v95 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                    v98 = v95;
                    if ( i >= v81[6] )
                      sub_1B6432C(v95, (unsigned int)v95);
                    goto LABEL_105;
                  }
LABEL_67:
                  if ( i >= v81[6] )
                    goto LABEL_234;
                  transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                                                  (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                                  svtId,
                                                  *v85,
                                                  v89);
                  if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
                    goto LABEL_102;
                  voiceLabelSpec = 1;
                  goto LABEL_89;
                }
              }
              else if ( condType == 18 )
              {
                if ( i >= v81[6] )
                  goto LABEL_234;
                transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                                (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                                svtId,
                                                limitCount,
                                                *v85,
                                                v79);
                if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
                  goto LABEL_67;
                transformNameSprite = this->fields.itemList;
                if ( !transformNameSprite )
                  goto LABEL_233;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v246,
                  (System_Collections_Generic_List_object__o *)transformNameSprite,
                  (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
                v249 = v246;
                do
                {
                  v100 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                           &v249,
                           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                  if ( !v100 )
                    goto LABEL_87;
                  current = v249.fields._current;
                  if ( !v249.fields._current
                    || (v102 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                        LOBYTE(v249.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v102)
                    || (ServantStatusVoiceListViewItem_c *)v249.fields._current->klass->_2.typeHierarchy[v102 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                  {
                    sub_1B64324(v100);
                  }
                  v103 = v249.fields._current[10].klass;
                  if ( !v103 )
                    sub_1B64324(v100);
                }
                while ( HIDWORD(v103->_1.namespaze) != 2
                     || LODWORD(v103->_1.this_arg.data) != 18
                     || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                          (ServantStatusVoiceListViewItem_o *)v249.fields._current,
                          v101) != svtId );
                v104 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                if ( i >= v81[6] )
                  sub_1B6432C(v104, v105);
                if ( !*v85 )
                  sub_1B64324(v104);
                v106 = (*v85)->fields.voiceEntity;
                if ( !v106 )
                  sub_1B64324(v104);
                v107 = v104;
                id = v106->fields.id;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                v109 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46207452(id, 0LL);
                if ( !v241 )
                  sub_1B64324(0LL);
                if ( !VoicePlayCondMaster__isVoiceCond(v241, v107, v109, 81, 0LL) )
                {
                  v132 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                  v98 = v132;
                  if ( i >= v81[6] )
                    sub_1B6432C(v132, (unsigned int)v132);
LABEL_105:
                  ServantStatusVoiceListViewItem__SetLimitCount(
                    (ServantStatusVoiceListViewItem_o *)current,
                    v98,
                    svtId,
                    limitCount,
                    *v85,
                    v96,
                    v97);
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v249,
                    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
                  goto LABEL_102;
                }
LABEL_87:
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v249,
                  (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
              }
            }
          }
          voiceLabelSpec = 0;
LABEL_89:
          transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
          if ( i >= v81[6] )
            goto LABEL_234;
          if ( !*v85 )
            goto LABEL_233;
          v110 = (*v85)->fields.voiceEntity;
          if ( !v110 )
            goto LABEL_233;
          v111 = (int)transformNameSprite;
          v112 = v110->fields.id;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v113 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46207452(v112, 0LL);
          transformNameSprite = v241;
          if ( !v241 )
            goto LABEL_233;
          transformNameSprite = (void *)VoicePlayCondMaster__isVoiceCond(v241, v111, v113, 81, 0LL);
          if ( !voiceEntity )
            goto LABEL_233;
          v114 = voiceEntity->fields.condType;
          itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          v116 = v114 == 18;
          v117 = v114 == 7;
          if ( !itemList )
            goto LABEL_233;
          v118 = (char)transformNameSprite;
          size = itemList->fields._size;
          transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
          if ( i >= v81[6] )
            goto LABEL_234;
          v121 = *v85;
          v122 = firstPriority;
          v123 = (int)transformNameSprite;
          v124 = v118 & (v116 || v117);
          v125 = (ServantStatusVoiceListViewItem_o *)sub_1B64314(ServantStatusVoiceListViewItem_TypeInfo, v57, v120);
          ServantStatusVoiceListViewItem___ctor(
            v125,
            size,
            v123,
            svtId,
            limitCount,
            v121,
            v122,
            v124,
            voiceLabelSpec,
            v231);
          v128 = itemList->fields._items;
          v129 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++itemList->fields._version;
          if ( !v128 )
            goto LABEL_233;
          v130 = itemList->fields._size;
          if ( (unsigned int)v130 >= v128->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              itemList,
              (Il2CppObject *)v125,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
          }
          else
          {
            v131 = &v128->obj.klass + v130;
            itemList->fields._size = v130 + 1;
            v131[4] = (Il2CppClass *)v125;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v131 + 4), (int32_t)v125, v126, v127);
          }
LABEL_102:
          v80 = v81[6];
        }
      }
      v133 = firstPriority;
      v134 = ++firstPriority;
      v135 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      v136 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v136 = BalanceConfig_TypeInfo;
      }
      v63 = (VoiceMaster_o *)v239;
      if ( v135 == v136->static_fields->ServantIdJekyll )
        break;
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      v158 = (int)transformNameSprite;
      v159 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v159 = BalanceConfig_TypeInfo;
      }
      if ( v158 == v159->static_fields->ServantIdMashu1 )
      {
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( TutorialFlag__Get_37376848(115, 0LL) )
        {
          v160 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
          v161 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v161 = BalanceConfig_TypeInfo;
          }
          transformNameSprite = VoiceMaster__getEnableInfo(
                                  (VoiceMaster_o *)v239,
                                  v160,
                                  v161->static_fields->ServantIdMashu2,
                                  limitCount,
                                  0LL,
                                  0,
                                  0,
                                  0LL);
          if ( !transformNameSprite )
            goto LABEL_233;
          v162 = transformNameSprite;
          if ( *((int *)transformNameSprite + 6) >= 1 )
          {
            v163 = 0LL;
            while ( 1 )
            {
              v164 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
              if ( !v164 )
                goto LABEL_233;
              v165 = v164->fields._size;
              transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
              v167 = (int)transformNameSprite;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              if ( v163 >= *((unsigned int *)v162 + 6) )
                break;
              v168 = (VoiceInfo_o *)v162[v163 + 4];
              ServantIdMashu2 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu2;
              v170 = (ServantStatusVoiceListViewItem_o *)sub_1B64314(ServantStatusVoiceListViewItem_TypeInfo, v57, v166);
              ServantStatusVoiceListViewItem___ctor(
                v170,
                v165,
                v167,
                ServantIdMashu2,
                limitCount,
                v168,
                v134,
                0,
                0,
                v231);
              v173 = v164->fields._items;
              v174 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++v164->fields._version;
              if ( !v173 )
                goto LABEL_233;
              v175 = v164->fields._size;
              if ( (unsigned int)v175 >= v173->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v164,
                  (Il2CppObject *)v170,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v174[4] + 192LL) + 112LL));
              }
              else
              {
                v176 = &v173->obj.klass + v175;
                v164->fields._size = v175 + 1;
                v176[4] = (Il2CppClass *)v170;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v176 + 4), (int32_t)v170, v171, v172);
              }
              if ( (__int64)++v163 >= *((int *)v162 + 6) )
                goto LABEL_160;
            }
LABEL_234:
            sub_1B6432C(transformNameSprite, v57);
          }
LABEL_160:
          v134 = v133 + 2;
          firstPriority = v133 + 2;
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v177 = NetworkManager__get_UserId(0LL);
        v178 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v178 = BalanceConfig_TypeInfo;
        }
        v63 = (VoiceMaster_o *)v239;
        static_fields = v178->static_fields;
        MashuTdGradeUpQuestId = static_fields->MashuTdGradeUpQuestId;
        MashuTdGradeUpQuestPhase = static_fields->MashuTdGradeUpQuestPhase;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        transformNameSprite = (void *)CondType__IsQuestPhaseClear(
                                        v177,
                                        MashuTdGradeUpQuestId,
                                        MashuTdGradeUpQuestPhase,
                                        -1,
                                        0,
                                        0LL);
        if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
        {
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          transformNameSprite = v236;
          if ( !v236 )
            goto LABEL_233;
          transformNameSprite = (void *)ServantLimitAddMaster__TryGetEntity(
                                          v236,
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
              v183 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
              v184 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v184 = BalanceConfig_TypeInfo;
              }
              transformNameSprite = VoiceMaster__getEnableInfo(
                                      (VoiceMaster_o *)v239,
                                      v183,
                                      v184->static_fields->ServantIdMashu3,
                                      limitCount,
                                      0LL,
                                      0,
                                      0,
                                      0LL);
              if ( !transformNameSprite )
                goto LABEL_233;
              v185 = transformNameSprite;
              if ( *((int *)transformNameSprite + 6) >= 1 )
              {
                v186 = 0LL;
                do
                {
                  v187 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  if ( !v187 )
                    goto LABEL_233;
                  v188 = v187->fields._size;
                  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                  v190 = (int)transformNameSprite;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( v186 >= *((unsigned int *)v185 + 6) )
                    goto LABEL_234;
                  v191 = (VoiceInfo_o *)v185[v186 + 4];
                  ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
                  v193 = (ServantStatusVoiceListViewItem_o *)sub_1B64314(
                                                               ServantStatusVoiceListViewItem_TypeInfo,
                                                               v57,
                                                               v189);
                  ServantStatusVoiceListViewItem___ctor(
                    v193,
                    v188,
                    v190,
                    ServantIdMashu3,
                    limitCount,
                    v191,
                    v134,
                    0,
                    0,
                    v231);
                  v196 = v187->fields._items;
                  v197 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++v187->fields._version;
                  if ( !v196 )
                    goto LABEL_233;
                  v198 = v187->fields._size;
                  if ( (unsigned int)v198 >= v196->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v187,
                      (Il2CppObject *)v193,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v197[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v199 = &v196->obj.klass + v198;
                    v187->fields._size = v198 + 1;
                    v199[4] = (Il2CppClass *)v193;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v199 + 4), (int32_t)v193, v194, v195);
                  }
                }
                while ( (__int64)++v186 < *((int *)v185 + 6) );
              }
              v157 = v134 + 1;
LABEL_139:
              v63 = (VoiceMaster_o *)v239;
              firstPriority = v157;
            }
          }
        }
      }
LABEL_176:
      v75 = v238;
      LODWORD(v76) = v238->max_length;
      v77 = v240 + 1;
      if ( (__int64)(v240 + 1) >= (int)v76 )
        goto LABEL_193;
    }
    v137 = DataMasterBase_object__object__object___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v239,
             (Il2CppObject *)StringLiteral_2636/*"B050"*/,
             (const MethodInfo_30D41FC *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string__GetEntity__);
    transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !transformNameSprite )
      goto LABEL_233;
    v138 = DataManager__GetMasterData_object_(
             (DataManager_o *)transformNameSprite,
             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v139 = NetworkManager__get_UserId(0LL);
    transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
    if ( !v138 )
      goto LABEL_233;
    transformNameSprite = UserServantCollectionMaster__GetEntityDefinitely(
                            (UserServantCollectionMaster_o *)v138,
                            v139,
                            (int32_t)transformNameSprite,
                            0LL);
    if ( !v137 )
      goto LABEL_233;
    if ( LODWORD(v137[3].klass) == 17 )
    {
      if ( !transformNameSprite )
        goto LABEL_233;
      transformNameSprite = (void *)UserServantCollectionEntity__IsPlayed(
                                      (UserServantCollectionEntity_o *)transformNameSprite,
                                      HIDWORD(v137[3].klass),
                                      0LL);
      if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
        goto LABEL_176;
    }
    v140 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
    v141 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v141 = BalanceConfig_TypeInfo;
    }
    transformNameSprite = VoiceMaster__getEnableInfo(
                            (VoiceMaster_o *)v239,
                            v140,
                            v141->static_fields->ServantIdHyde,
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
        v147 = (int)transformNameSprite;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( v143 >= *((unsigned int *)v142 + 6) )
          goto LABEL_234;
        v148 = (VoiceInfo_o *)v142[v143 + 4];
        ServantIdHyde = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
        v150 = (ServantStatusVoiceListViewItem_o *)sub_1B64314(ServantStatusVoiceListViewItem_TypeInfo, v57, v146);
        ServantStatusVoiceListViewItem___ctor(v150, v145, v147, ServantIdHyde, limitCount, v148, v134, 0, 0, v231);
        v153 = v144->fields._items;
        v154 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v144->fields._version;
        if ( !v153 )
          goto LABEL_233;
        v155 = v144->fields._size;
        if ( (unsigned int)v155 >= v153->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v144,
            (Il2CppObject *)v150,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v154[4] + 192LL) + 112LL));
        }
        else
        {
          v156 = &v153->obj.klass + v155;
          v144->fields._size = v155 + 1;
          v156[4] = (Il2CppClass *)v150;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v156 + 4), (int32_t)v150, v151, v152);
        }
      }
      while ( (__int64)++v143 < *((int *)v142 + 6) );
    }
    v157 = v133 + 2;
    goto LABEL_139;
  }
LABEL_194:
  v203 = this->fields.itemList;
  if ( !v203 )
    goto LABEL_233;
  v204 = v203->fields._size;
  v205 = sub_1B64314(System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo, v57, v58);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v205,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
  if ( v204 - 1 >= 1 )
  {
    for ( j = 0; j != v204 - 1; ++j )
    {
      transformNameSprite = this->fields.itemList;
      if ( !transformNameSprite )
        goto LABEL_233;
      transformNameSprite = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)transformNameSprite,
                              j,
                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !transformNameSprite )
        goto LABEL_233;
      v208 = (ServantStatusVoiceListViewItem_o *)transformNameSprite;
      v209 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)transformNameSprite + 304LL) < (unsigned int)v209
        || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)transformNameSprite + 200LL) + 8 * v209 - 8) != ServantStatusVoiceListViewItem_TypeInfo )
      {
        goto LABEL_233;
      }
      if ( ServantStatusVoiceListViewItem__get_OpenName((ServantStatusVoiceListViewItem_o *)transformNameSprite, v207) )
      {
        transformNameSprite = (void *)ServantStatusVoiceListViewItem__get_DispNum(v208, v210);
        if ( !(_DWORD)transformNameSprite )
        {
          if ( !v205 )
            goto LABEL_233;
          v211 = (const MethodInfo *)*(unsigned int *)(v205 + 24);
          v212 = *(_DWORD *)(v205 + 28) + 1;
          *(_DWORD *)(v205 + 24) = 0;
          *(_DWORD *)(v205 + 28) = v212;
          if ( (int)v211 >= 1 )
            System_Array__Clear(*(System_Array_o **)(v205 + 16), 0, (int32_t)v211, 0LL);
          v213 = j + 1;
          if ( j + 1 < v204 )
          {
            do
            {
              transformNameSprite = this->fields.itemList;
              if ( !transformNameSprite )
                goto LABEL_233;
              transformNameSprite = System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)transformNameSprite,
                                      v213,
                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !transformNameSprite )
                goto LABEL_233;
              v215 = (Il2CppObject *)transformNameSprite;
              v216 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)transformNameSprite + 304LL) < (unsigned int)v216
                || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)transformNameSprite + 200LL)
                                                        + 8 * v216
                                                        - 8) != ServantStatusVoiceListViewItem_TypeInfo )
              {
                goto LABEL_233;
              }
              OpenName = ServantStatusVoiceListViewItem__get_OpenName(
                           (ServantStatusVoiceListViewItem_o *)transformNameSprite,
                           v214);
              v219 = ServantStatusVoiceListViewItem__get_OpenName(v208, v218);
              transformNameSprite = (void *)System_String__op_Equality(OpenName, v219, 0LL);
              if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              {
                v221 = *(_QWORD *)(v205 + 16);
                v222 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__;
                ++*(_DWORD *)(v205 + 28);
                if ( !v221 )
                  goto LABEL_233;
                v223 = *(int *)(v205 + 24);
                if ( (unsigned int)v223 >= *(_DWORD *)(v221 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)v205,
                    v215,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v222[4] + 192LL) + 112LL));
                }
                else
                {
                  v224 = v221 + 8 * v223;
                  *(_DWORD *)(v205 + 24) = v223 + 1;
                  *(_QWORD *)(v224 + 32) = v215;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v224 + 32), (int32_t)v215, (int32_t)v211, v220);
                }
              }
            }
            while ( v204 != ++v213 );
          }
          if ( *(int *)(v205 + 24) >= 1 )
          {
            ServantStatusVoiceListViewItem__SetNameNum(v208, 1, v211);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v246,
              (System_Collections_Generic_List_object__o *)v205,
              (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
            v225 = 2;
            for ( k = v246;
                  ;
                  ServantStatusVoiceListViewItem__SetNameNum(
                    (ServantStatusVoiceListViewItem_o *)k.fields._current,
                    v225++,
                    v227) )
            {
              v226 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &k,
                       (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
              if ( !v226 )
                break;
              if ( k.fields._current )
              {
                v228 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
                if ( LOBYTE(k.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v228
                  && (ServantStatusVoiceListViewItem_c *)k.fields._current->klass->_2.typeHierarchy[v228 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
                {
                  continue;
                }
              }
              sub_1B64324(v226);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &k,
              (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
          }
        }
      }
    }
  }
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transformNameSprite = LocalizationManager__Get((System_String_o *)StringLiteral_11888/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_233;
  UILabel__set_text(explanationLabel, (System_String_o *)transformNameSprite, 0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  transformNameSprite = LocalizationManager__Get(v232, 0LL);
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

  if ( (byte_49F9C5E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B640C8(&ServantStatusVoiceListViewItem_TypeInfo, v5);
    byte_49F9C5E = 1;
  }
  result = (ServantStatusVoiceListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantStatusVoiceListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_49F9C5C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantVoiceMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v9);
    byte_49F9C5C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)ServantVoiceMaster__getEntity_39457476(
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
    sub_1B6432C(Instance, v11);
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
        Instance = (DataManager_o *)System_String__Concat_61386656(
                                      v16,
                                      (System_String_o *)StringLiteral_16054/*"_"*/,
                                      v17,
                                      0LL),
        (v18 = *(_QWORD *)(v14 + 32)) == 0) )
  {
LABEL_25:
    sub_1B64324(Instance);
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
  Il2CppObject *MasterData_object; // x21
  __int64 v11; // x1
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

  if ( (byte_49F9C5D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49F9C5D = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
        sub_1B6432C(Instance, v11);
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
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v23, 0LL);
        if ( (int)Instance >= value )
          v16 = 1;
      }
      max_length = servantVoiceConds->max_length;
      if ( (int)++v15 >= max_length )
        return v16;
    }
LABEL_27:
    sub_1B64324(Instance);
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
  if ( (byte_49F9C64 & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1B640C8(&ServantStatusVoiceListViewItem_TypeInfo, obj);
    byte_49F9C64 = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0LL
    || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
  {
    sub_1B64324(this);
  }
  if ( LOBYTE(linkItem[1].fields.sortValue2B) )
  {
    callbackFunc = v5->fields.callbackFunc;
    v5->fields.callbackFunc = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.callbackFunc, 0, (int32_t)method, v3);
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
  int32_t v7; // w2
  int32_t v8; // w3
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_49F9C63 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F9C63 = 1;
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
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1B64324(0LL);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._8_UpdateScrollbars.method)(
          v9,
          1LL,
          v9->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v7, v8);
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
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F9C61 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v11);
    sub_1B640C8(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v12);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v13);
    byte_49F9C61 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v20);
      ServantStatusVoiceListViewObject__Init_34578720(
        (ServantStatusVoiceListViewObject_o *)current,
        mode,
        v19,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__RequestListObject_34578216(
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
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F9C62 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v9);
    sub_1B640C8(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v10);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v11);
    byte_49F9C62 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v18);
      ServantStatusVoiceListViewObject__Init_34579328((ServantStatusVoiceListViewObject_o *)current, mode, v17, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  ServantStatusVoiceListViewManager__SetMode_34577244(this, mode, -1, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__SetMode_34577244(
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
  __int64 methodPtr_low; // x11
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x1
  System_Collections_Generic_List_object__o *v22; // x19
  int32_t v23; // w20
  const MethodInfo *v24; // x2
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v26; // x20
  int32_t v27; // w21
  Il2CppObject *Item; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  System_Action_o *v31; // x23
  const MethodInfo *v32; // x3
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49F9C60 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__, v12);
    sub_1B640C8(&ServantStatusVoiceListViewItem_TypeInfo, v13);
    sub_1B640C8(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v14);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v15);
    byte_49F9C60 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( mode == 2 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_30;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v33,
      itemList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    for ( i = v33; ; BYTE1(i.fields._current[12].klass) = HIDWORD(i.fields._current[1].klass) == select )
    {
      v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v17 )
        break;
      if ( !i.fields._current )
        sub_1B64324(v17);
      methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(i.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (ServantStatusVoiceListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        sub_1B64324(v17);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(this, v21);
    if ( !itemList )
      goto LABEL_30;
    v22 = itemList;
    if ( itemList->fields._size >= 1 )
    {
      v23 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v22,
                                                                  v23,
                                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
        if ( !itemList )
          break;
        ServantStatusVoiceListViewObject__Init_34577116((ServantStatusVoiceListViewObject_o *)itemList, 4, v24);
        if ( ++v23 >= v22->fields._size )
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
                                                                v19);
      if ( !itemList )
        goto LABEL_30;
      size = itemList->fields._size;
      v26 = itemList;
      if ( size >= 1 )
      {
        this->fields.callbackCount = size;
        v27 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v26,
                   v27,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
          v31 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v29, v30);
          System_Action___ctor(v31, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
            break;
          ServantStatusVoiceListViewObject__Init_34578720((ServantStatusVoiceListViewObject_o *)Item, 5, v31, 0.1, v32);
          if ( ++v27 >= v26->fields._size )
            return;
        }
LABEL_30:
        sub_1B64324(itemList);
      }
      this->fields.callbackCount = 1;
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
        0.2,
        0LL);
    }
    else if ( mode == 1 )
    {
      ServantStatusVoiceListViewManager__RequestListObject_34578216(this, 3, v20);
    }
  }
}


void __fastcall ServantStatusVoiceListViewManager__SetMode_34578160(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x3

  this->fields.callbackFunc2 = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  ServantStatusVoiceListViewManager__SetMode_34577244(this, mode, -1, v6);
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
  if ( (byte_49F9C5F & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1B640C8(&ServantStatusVoiceListViewObject_TypeInfo, obj);
    byte_49F9C5F = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusVoiceListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewObject_TypeInfo )
  {
    sub_1B64324(this);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ServantStatusVoiceListViewObject__Init_34577116(
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

  if ( (byte_49F9C53 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, value);
    byte_49F9C53 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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

  if ( (byte_49F9C55 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F9C55 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
  ServantStatusVoiceListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *__fastcall ServantStatusVoiceListViewManager__get_ClippingObjectList(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *v18; // x21
  ListViewItem_o *Item; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  _BOOL8 v22; // x0
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49F9C58 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49F9C58 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v18 = Component_object;
      if ( !Component_object )
        sub_1B64324(0LL);
      Item = (ListViewItem_o *)ServantStatusVoiceListViewObject__GetItem(
                                 (ServantStatusVoiceListViewObject_o *)Component_object,
                                 v17);
      if ( !Item )
        sub_1B64324(0LL);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_40389508((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v12 )
            sub_1B64324(v22);
          items = v12->fields._items;
          v24 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
          ++v12->fields._version;
          if ( !items )
            sub_1B64324(v22);
          size = v12->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v18,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v12 )
          sub_1B64324(Item);
        items = v12->fields._items;
        v24 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1B64324(Item);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v18;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v18, v20, v21);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *)v12;
}


System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *__fastcall ServantStatusVoiceListViewManager__get_ObjectList(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49F9C57 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49F9C57 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v19 = Component_object;
      if ( !v12 )
        sub_1B64324(Component_object);
      items = v12->fields._items;
      v21 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B64324(Component_object);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          Component_object,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v19;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v19, v17, v18);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *)v12;
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

  if ( (byte_49F9C54 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, value);
    byte_49F9C54 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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

  if ( (byte_49F9C56 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F9C56 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A92D0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A9278;
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
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+28h] [xbp-38h] BYREF
  int32_t v13; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_49F9C65 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&ServantStatusVoiceListViewManager_ResultKind_TypeInfo, v9);
    byte_49F9C65 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(ServantStatusVoiceListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v11, callback, object);
}


void __fastcall ServantStatusVoiceListViewManager_CallbackFunc__EndInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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