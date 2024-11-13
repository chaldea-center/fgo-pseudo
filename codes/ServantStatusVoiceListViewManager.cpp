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
  ServantVoiceRelationEntity_array *v6; // x22
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  VoiceInfo_array *Instance; // x0
  __int64 v18; // x1
  int max_length; // w8
  VoiceMaster_o *v20; // x21
  unsigned int v21; // w9
  char v22; // w20
  ServantVoiceRelationEntity_o *v23; // x23
  __int64 v24; // x24
  __int64 v25; // x25
  VoiceInfo_array *v26; // x24
  unsigned __int64 v27; // x22
  System_Collections_Generic_List_object__o *itemList; // x25
  int32_t size; // w27
  __int64 v30; // x26
  __int64 v31; // x28
  __int64 v32; // x2
  __int64 v33; // x3
  VoiceInfo_o *v34; // x29
  int32_t v35; // w28
  int32_t v36; // w20
  ServantStatusVoiceListViewItem_o *v37; // x26
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x0
  const MethodInfo *v48; // [xsp+8h] [xbp-98h]
  VoiceMaster_o *v49; // [xsp+18h] [xbp-88h]
  ServantVoiceRelationEntity_array *v50; // [xsp+20h] [xbp-80h]
  int32_t ascendOrder; // [xsp+28h] [xbp-78h]
  unsigned int v52; // [xsp+2Ch] [xbp-74h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  v6 = relationList;
  if ( (byte_4B13D25 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoiceMaster___, firstPriority, relationList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&ServantStatusVoiceListViewItem_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B13D25 = 1;
  }
  Instance = (VoiceInfo_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (VoiceInfo_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !v6 )
    goto LABEL_29;
  max_length = v6->max_length;
  if ( max_length >= 1 )
  {
    v20 = (VoiceMaster_o *)Instance;
    v21 = 0;
    v22 = 1;
    ascendOrder = 0;
    v49 = (VoiceMaster_o *)Instance;
    v50 = v6;
    while ( 1 )
    {
      if ( v21 >= max_length )
LABEL_30:
        sub_1BCAA44(Instance, v18);
      v23 = v6->m_Items[v21];
      v52 = v21;
      if ( !v23 )
        goto LABEL_29;
      v25 = *(_QWORD *)&v23->fields.relationSvtId.fields.currentCryptoKey;
      v24 = *(_QWORD *)&v23->fields.relationSvtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
      *(_QWORD *)&v55.fields.currentCryptoKey = v25;
      *(_QWORD *)&v55.fields.fakeValue = v24;
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v55, 0LL);
      if ( !v20 )
        goto LABEL_29;
      Instance = VoiceMaster__getEnableInfo(v20, svtId, (int32_t)Instance, 0, 0LL, 0, 0, 0LL);
      v26 = Instance;
      if ( (v22 & 1) == 0 && ascendOrder != v23->fields.ascendOrder )
        ++*firstPriority;
      if ( !Instance )
        goto LABEL_29;
      ascendOrder = v23->fields.ascendOrder;
      if ( (int)Instance->max_length >= 1 )
        break;
LABEL_27:
      v20 = v49;
      v6 = v50;
      v22 = 0;
      max_length = v50->max_length;
      v21 = v52 + 1;
      if ( (int)(v52 + 1) >= max_length )
        return;
    }
    v27 = 0LL;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      v31 = *(_QWORD *)&v23->fields.relationSvtId.fields.currentCryptoKey;
      v30 = *(_QWORD *)&v23->fields.relationSvtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
      *(_QWORD *)&v56.fields.currentCryptoKey = v31;
      *(_QWORD *)&v56.fields.fakeValue = v30;
      Instance = (VoiceInfo_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v56, 0LL);
      if ( v27 >= v26->max_length )
        goto LABEL_30;
      v34 = v26->m_Items[v27];
      v35 = (int)Instance;
      v36 = *firstPriority;
      v37 = (ServantStatusVoiceListViewItem_o *)sub_1BCAA2C(ServantStatusVoiceListViewItem_TypeInfo, v18, v32, v33);
      ServantStatusVoiceListViewItem___ctor(v37, size, svtId, v35, 0, v34, v36, 0, 0, v48);
      items = itemList->fields._items;
      v45 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v46 = itemList->fields._size;
      if ( (unsigned int)v46 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v37,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &items->obj.klass + v46;
        itemList->fields._size = v46 + 1;
        v47[4] = (Il2CppClass *)v37;
        sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 4), (int64_t)v37, v38, v39, v40, v41, v42, v43);
      }
      if ( (__int64)++v27 >= (int)v26->max_length )
        goto LABEL_27;
    }
LABEL_29:
    sub_1BCAA3C(Instance, v18);
  }
}


void __fastcall ServantStatusVoiceListViewManager__Awake(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  void *scrollView; // x0
  float v5; // s1

  if ( (byte_4B13D24 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIPanel___, method, v2);
    byte_4B13D24 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)scrollView,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL )
  {
    sub_1BCAA3C(scrollView, method);
  }
  v5 = *((float *)scrollView + 77);
  this->fields.defaultPanelCenter = *((float *)scrollView + 75);
  this->fields.defaultPanelHeight = v5;
}


void __fastcall ServantStatusVoiceListViewManager__CreateList(
        ServantStatusVoiceListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        System_Int32_array *changeSvtVoiceIdList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x22
  float defaultPanelCenter; // s9
  float defaultPanelHeight; // s8
  void *transformNameSprite; // x0
  const MethodInfo *v84; // x1
  _BOOL4 IsTransformServant_k__BackingField; // w19
  ServantStatusVoiceListViewManager_o *v86; // x19
  UILabel_o *transformNameLabel; // x20
  float transformNameAddHeight; // s0
  struct UIScrollView_o *scrollView; // x8
  __int64 v90; // x1
  __int64 v91; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x21
  Il2CppObject *v94; // x20
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  System_Collections_Generic_List_T__o *v98; // x19
  __int64 v99; // x2
  __int64 v100; // x3
  struct System_Object_array *items; // x8
  _QWORD *v102; // x9
  System_Int32_array *v103; // x19
  __int64 v104; // x10
  VoiceMaster_o *v105; // x22
  __int64 v106; // x8
  unsigned __int64 v107; // x9
  Il2CppObject *MasterData_object; // x20
  int32_t maxLimitCount; // w21
  System_Int32_array *VoiceLimitCountList; // x19
  ServantVoiceRelationEntity_array *v111; // x20
  int32_t v112; // w0
  const MethodInfo *v113; // x4
  ServantVoiceRelationEntity_array *v114; // x20
  int32_t v115; // w0
  const MethodInfo *v116; // x4
  System_Int32_array *v117; // x9
  __int64 v118; // x8
  unsigned __int64 v119; // x19
  int32_t v120; // w20
  const MethodInfo *v121; // x4
  int v122; // w8
  _DWORD *v123; // x21
  unsigned int i; // w25
  char *v125; // x19
  VoiceInfo_o *v126; // x3
  VoiceInfo_o **v127; // x19
  VoiceInfo_o *v128; // t1
  struct VoiceEntity_o *voiceEntity; // x27
  int32_t condType; // w8
  const MethodInfo *v131; // x3
  _BOOL8 v132; // x0
  const MethodInfo *v133; // x1
  Il2CppObject *current; // x23
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8
  __int64 v137; // x0
  int32_t v138; // w5
  const MethodInfo *v139; // x6
  int32_t v140; // w1
  bool voiceLabelSpec; // w22
  _BOOL8 v142; // x0
  const MethodInfo *v143; // x1
  __int64 v144; // x10
  Il2CppClass *v145; // x8
  __int64 v146; // x0
  __int64 v147; // x1
  struct VoiceEntity_o *v148; // x8
  int32_t v149; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x24
  __int64 v151; // x1
  System_String_o *v152; // x2
  struct VoiceEntity_o *v153; // x8
  int32_t v154; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v155; // x24
  System_String_o *v156; // x2
  int32_t v157; // w8
  System_Collections_Generic_List_object__o *itemList; // x23
  bool v159; // w28
  bool v160; // w20
  char v161; // w26
  int32_t size; // w24
  __int64 v163; // x2
  __int64 v164; // x3
  VoiceInfo_o *v165; // x29
  int32_t v166; // w19
  int32_t v167; // w27
  bool v168; // w28
  ServantStatusVoiceListViewItem_o *v169; // x26
  int64_t v170; // x2
  int32_t v171; // w3
  System_String_o *v172; // x4
  BattleSetupInfo_o *v173; // x5
  FollowerInfo_o *v174; // x6
  PartyListViewItem_o *v175; // x7
  struct System_Object_array *v176; // x8
  _QWORD *v177; // x9
  __int64 v178; // x10
  Il2CppClass **v179; // x0
  __int64 v180; // x0
  int32_t v181; // w20
  int32_t v182; // w21
  __int64 v183; // x1
  int32_t v184; // w23
  BalanceConfig_c *v185; // x8
  Il2CppObject *v186; // x23
  __int64 v187; // x1
  Il2CppObject *v188; // x24
  int64_t v189; // x26
  __int64 v190; // x1
  int32_t v191; // w23
  BalanceConfig_c *v192; // x8
  _QWORD *v193; // x23
  unsigned __int64 v194; // x22
  System_Collections_Generic_List_object__o *v195; // x26
  int32_t v196; // w29
  __int64 v197; // x2
  __int64 v198; // x3
  int32_t v199; // w24
  VoiceInfo_o *v200; // x19
  int32_t ServantIdHyde; // w28
  ServantStatusVoiceListViewItem_o *v202; // x27
  int64_t v203; // x2
  int32_t v204; // w3
  System_String_o *v205; // x4
  BattleSetupInfo_o *v206; // x5
  FollowerInfo_o *v207; // x6
  PartyListViewItem_o *v208; // x7
  struct System_Object_array *v209; // x8
  _QWORD *v210; // x9
  __int64 v211; // x10
  Il2CppClass **v212; // x0
  int32_t v213; // w8
  int v214; // w23
  BalanceConfig_c *v215; // x8
  __int64 v216; // x1
  int32_t v217; // w23
  BalanceConfig_c *v218; // x8
  _QWORD *v219; // x23
  unsigned __int64 v220; // x22
  System_Collections_Generic_List_object__o *v221; // x26
  int32_t v222; // w29
  __int64 v223; // x2
  __int64 v224; // x3
  int32_t v225; // w24
  VoiceInfo_o *v226; // x19
  int32_t ServantIdMashu2; // w28
  ServantStatusVoiceListViewItem_o *v228; // x27
  int64_t v229; // x2
  int32_t v230; // w3
  System_String_o *v231; // x4
  BattleSetupInfo_o *v232; // x5
  FollowerInfo_o *v233; // x6
  PartyListViewItem_o *v234; // x7
  struct System_Object_array *v235; // x8
  _QWORD *v236; // x9
  __int64 v237; // x10
  Il2CppClass **v238; // x0
  __int64 v239; // x1
  int64_t v240; // x23
  BalanceConfig_c *v241; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t MashuTdGradeUpQuestId; // w24
  int32_t MashuTdGradeUpQuestPhase; // w26
  int32_t svtVoiceId; // w19
  __int64 v246; // x1
  int32_t v247; // w23
  BalanceConfig_c *v248; // x8
  _QWORD *v249; // x23
  unsigned __int64 v250; // x22
  System_Collections_Generic_List_object__o *v251; // x26
  int32_t v252; // w29
  __int64 v253; // x2
  __int64 v254; // x3
  int32_t v255; // w24
  VoiceInfo_o *v256; // x19
  int32_t ServantIdMashu3; // w28
  ServantStatusVoiceListViewItem_o *v258; // x27
  int64_t v259; // x2
  int32_t v260; // w3
  System_String_o *v261; // x4
  BattleSetupInfo_o *v262; // x5
  FollowerInfo_o *v263; // x6
  PartyListViewItem_o *v264; // x7
  struct System_Object_array *v265; // x8
  _QWORD *v266; // x9
  __int64 v267; // x10
  Il2CppClass **v268; // x0
  ServantVoiceRelationEntity_array *v269; // x19
  int32_t v270; // w0
  const MethodInfo *v271; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v272; // x8
  int32_t v273; // w25
  __int64 v274; // x20
  int32_t j; // w21
  ServantStatusVoiceListViewItem_o *v276; // x22
  __int64 v277; // x10
  int64_t v278; // x2
  int v279; // w8
  int32_t v280; // w23
  Il2CppObject *v281; // x24
  __int64 v282; // x10
  System_String_o *OpenName; // x19
  const MethodInfo *v284; // x1
  System_String_o *v285; // x0
  int32_t v286; // w3
  System_String_o *v287; // x4
  BattleSetupInfo_o *v288; // x5
  FollowerInfo_o *v289; // x6
  PartyListViewItem_o *v290; // x7
  __int64 v291; // x8
  _QWORD *v292; // x9
  __int64 v293; // x10
  __int64 v294; // x0
  int32_t v295; // w22
  _BOOL8 v296; // x0
  __int64 v297; // x1
  const MethodInfo *v298; // x2
  __int64 v299; // x11
  UILabel_o *explanationLabel; // x20
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v302; // [xsp+8h] [xbp-168h]
  System_String_o *v303; // [xsp+18h] [xbp-158h]
  UserServantCollectionEntity_o *EntityDefinitely; // [xsp+20h] [xbp-150h]
  unsigned __int64 v306; // [xsp+30h] [xbp-140h]
  ServantLimitAddMaster_o *v307; // [xsp+38h] [xbp-138h]
  System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList; // [xsp+40h] [xbp-130h]
  System_Int32_array *v309; // [xsp+48h] [xbp-128h]
  Il2CppObject *v310; // [xsp+50h] [xbp-120h]
  unsigned __int64 v311; // [xsp+58h] [xbp-118h]
  VoicePlayCondMaster_o *v312; // [xsp+60h] [xbp-110h]
  int32_t svtId; // [xsp+6Ch] [xbp-104h]
  int limitCount; // [xsp+84h] [xbp-ECh]
  System_Collections_Generic_List_Enumerator_object__o v317; // [xsp+88h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o k; // [xsp+A0h] [xbp-D0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+B8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v320; // [xsp+C0h] [xbp-B0h] BYREF
  ServantVoiceRelationEntity_array *afterRelationList; // [xsp+E0h] [xbp-90h] BYREF
  ServantVoiceRelationEntity_array *sameRelationList; // [xsp+E8h] [xbp-88h] BYREF
  ServantVoiceRelationEntity_array *beforeRelationList; // [xsp+F0h] [xbp-80h] BYREF
  int32_t firstPriority; // [xsp+FCh] [xbp-74h] BYREF
  UnityEngine_Vector4_o v325; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B13D26 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, mainInfo, changeSvtVoiceIdList);
    sub_1BCA7E0(&CondType_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMaster_VoiceMaster___, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMaster_VoicePlayCondMaster___, v18, v19);
    sub_1BCA7E0(&DataManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string__GetEntity__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v32, v33);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__get_Current__,
      v34,
      v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CondType_Kind__Add__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__, v40, v41);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__, v42, v43);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__, v44, v45);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v46, v47);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__, v48, v49);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v50, v51);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__get_Count__, v52, v53);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v54, v55);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v56, v57);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo, v58, v59);
    sub_1BCA7E0(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v60, v61);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v62, v63);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v64, v65);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v66, v67);
    sub_1BCA7E0(&ServantStatusVoiceListViewItem_TypeInfo, v68, v69);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v70, v71);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v72, v73);
    sub_1BCA7E0(&StringLiteral_2660/*"B050"*/, v74, v75);
    sub_1BCA7E0(&StringLiteral_15406/*"VOICE_EMPTY_MESSAGE"*/, v76, v77);
    sub_1BCA7E0(&StringLiteral_12081/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, v78, v79);
    byte_4B13D26 = 1;
  }
  v80 = StringLiteral_15406/*"VOICE_EMPTY_MESSAGE"*/;
  firstPriority = 0;
  sameRelationList = 0LL;
  beforeRelationList = 0LL;
  afterRelationList = 0LL;
  memset(&v320, 0, sizeof(v320));
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
    v86 = this;
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
    v86 = this;
  }
  scrollView = v86->fields.scrollView;
  if ( !scrollView )
    goto LABEL_233;
  transformNameSprite = scrollView->fields.mPanel;
  if ( !transformNameSprite )
    goto LABEL_233;
  v325.fields.x = *((float *)transformNameSprite + 74);
  v325.fields.z = *((float *)transformNameSprite + 76);
  v325.fields.y = defaultPanelCenter;
  v325.fields.w = defaultPanelHeight;
  UIPanel__set_baseClipRegion((UIPanel_o *)transformNameSprite, v325, 0LL);
  transformNameSprite = this->fields.scrollView;
  if ( !transformNameSprite )
    goto LABEL_233;
  UIScrollView__ResetPosition((UIScrollView_o *)transformNameSprite, 0LL);
  this->fields.execObjectExtraFlag = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v90);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v91);
  v303 = (System_String_o *)v80;
  UserId = NetworkManager__get_UserId(0LL);
  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
  if ( !Master_object )
    goto LABEL_233;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       UserId,
                       (int32_t)transformNameSprite,
                       0LL);
  v310 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_VoiceMaster___);
  v312 = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v94 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  firstPriority = 0;
  v98 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_CondType_Kind__TypeInfo,
                                                  v95,
                                                  v96,
                                                  v97);
  System_Collections_Generic_List_Int32Enum____ctor(
    v98,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v98 )
    goto LABEL_233;
  transformNameSprite = v98;
  items = v98->fields._items;
  v102 = Method_System_Collections_Generic_List_CondType_Kind__Add__;
  ++v98->fields._version;
  v103 = changeSvtVoiceIdList;
  if ( !items )
    goto LABEL_233;
  v104 = *((int *)transformNameSprite + 6);
  v105 = (VoiceMaster_o *)v310;
  disableCondTypeList = (System_Collections_Generic_List_CondType_Kind__o *)transformNameSprite;
  if ( (unsigned int)v104 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)transformNameSprite,
      81,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
  }
  else
  {
    *((_DWORD *)transformNameSprite + 6) = v104 + 1;
    *((_DWORD *)items->m_Items + v104) = 81;
  }
  v307 = (ServantLimitAddMaster_o *)v94;
  if ( !changeSvtVoiceIdList )
LABEL_233:
    sub_1BCAA3C(transformNameSprite, v84);
  v106 = *(_QWORD *)&changeSvtVoiceIdList->max_length;
  if ( (int)v106 >= 1 )
  {
    v107 = 0LL;
    while ( 1 )
    {
      if ( v107 >= (unsigned int)v106 )
        goto LABEL_234;
      v306 = v107;
      svtId = v103->m_Items[v107 + 1];
      transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_233;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)transformNameSprite,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
      transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transformNameSprite )
        goto LABEL_233;
      v309 = VoiceLimitCountList;
      transformNameSprite = DataManager__GetMasterData_object_(
                              (DataManager_o *)transformNameSprite,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !transformNameSprite )
        goto LABEL_233;
      ServantVoiceRelationMaster__GetRelationList_40609312(
        (ServantVoiceRelationMaster_o *)transformNameSprite,
        &beforeRelationList,
        &sameRelationList,
        &afterRelationList,
        svtId,
        0LL);
      v111 = beforeRelationList;
      v112 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v111, v112, v113);
      v114 = sameRelationList;
      ++firstPriority;
      v115 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v114, v115, v116);
      v117 = VoiceLimitCountList;
      if ( !VoiceLimitCountList )
        goto LABEL_233;
      v118 = *(_QWORD *)&VoiceLimitCountList->max_length;
      if ( (int)v118 >= 1 )
        break;
LABEL_193:
      v269 = afterRelationList;
      v270 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, &firstPriority, v269, v270, v271);
      v103 = changeSvtVoiceIdList;
      LODWORD(v106) = changeSvtVoiceIdList->max_length;
      v107 = v306 + 1;
      if ( (__int64)(v306 + 1) >= (int)v106 )
        goto LABEL_194;
    }
    v119 = 0LL;
    while ( 1 )
    {
      if ( v119 >= (unsigned int)v118 )
        goto LABEL_234;
      v120 = v117->m_Items[v119 + 1];
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      if ( !v105 )
        goto LABEL_233;
      v311 = v119;
      limitCount = v120;
      transformNameSprite = VoiceMaster__getEnableInfo(
                              v105,
                              (int32_t)transformNameSprite,
                              svtId,
                              v120,
                              disableCondTypeList,
                              0,
                              0,
                              0LL);
      if ( !transformNameSprite )
        goto LABEL_233;
      v122 = *((_DWORD *)transformNameSprite + 6);
      v123 = transformNameSprite;
      if ( v122 >= 1 )
      {
        for ( i = 0; (int)i < v122; ++i )
        {
          if ( i >= v122 )
            goto LABEL_234;
          v125 = (char *)&v123[2 * i];
          v128 = (VoiceInfo_o *)*((_QWORD *)v125 + 4);
          v127 = (VoiceInfo_o **)(v125 + 32);
          v126 = v128;
          if ( !v128 )
            goto LABEL_233;
          voiceEntity = v126->fields.voiceEntity;
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
                                                  v126,
                                                  v121);
                  if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
                  {
                    transformNameSprite = this->fields.itemList;
                    if ( !transformNameSprite )
                      goto LABEL_233;
                    System_Collections_Generic_List_object___GetEnumerator(
                      (System_Collections_Generic_List_Enumerator_T__o *)&v317,
                      (System_Collections_Generic_List_object__o *)transformNameSprite,
                      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
                    v320 = v317;
                    do
                    {
                      v132 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                               &v320,
                               (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                      if ( !v132 )
                        goto LABEL_87;
                      current = v320.fields._current;
                      if ( !v320.fields._current
                        || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                            LOBYTE(v320.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
                        || (ServantStatusVoiceListViewItem_c *)v320.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                      {
                        sub_1BCAA3C(v132, v133);
                      }
                      klass = v320.fields._current[10].klass;
                      if ( !klass )
                        sub_1BCAA3C(v132, v133);
                    }
                    while ( HIDWORD(klass->_1.namespaze) != 2
                         || LODWORD(klass->_1.this_arg.data) != 7
                         || HIDWORD(klass->_1.this_arg.data) != voiceEntity->fields.condValue
                         || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                              (ServantStatusVoiceListViewItem_o *)v320.fields._current,
                              v133) != svtId );
                    v137 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                    v140 = v137;
                    if ( i >= v123[6] )
                      sub_1BCAA44(v137, (unsigned int)v137);
                    goto LABEL_105;
                  }
LABEL_67:
                  if ( i >= v123[6] )
                    goto LABEL_234;
                  transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                                                  (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                                  svtId,
                                                  *v127,
                                                  v131);
                  if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
                    goto LABEL_102;
                  voiceLabelSpec = 1;
                  goto LABEL_89;
                }
              }
              else if ( condType == 18 )
              {
                if ( i >= v123[6] )
                  goto LABEL_234;
                transformNameSprite = (void *)ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                                                (ServantStatusVoiceListViewManager_o *)transformNameSprite,
                                                svtId,
                                                limitCount,
                                                *v127,
                                                v121);
                if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
                  goto LABEL_67;
                transformNameSprite = this->fields.itemList;
                if ( !transformNameSprite )
                  goto LABEL_233;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v317,
                  (System_Collections_Generic_List_object__o *)transformNameSprite,
                  (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
                v320 = v317;
                do
                {
                  v142 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                           &v320,
                           (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                  if ( !v142 )
                    goto LABEL_87;
                  current = v320.fields._current;
                  if ( !v320.fields._current
                    || (v144 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                        LOBYTE(v320.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v144)
                    || (ServantStatusVoiceListViewItem_c *)v320.fields._current->klass->_2.typeHierarchy[v144 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                  {
                    sub_1BCAA3C(v142, v143);
                  }
                  v145 = v320.fields._current[10].klass;
                  if ( !v145 )
                    sub_1BCAA3C(v142, v143);
                }
                while ( HIDWORD(v145->_1.namespaze) != 2
                     || LODWORD(v145->_1.this_arg.data) != 18
                     || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                          (ServantStatusVoiceListViewItem_o *)v320.fields._current,
                          v143) != svtId );
                v146 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                if ( i >= v123[6] )
                  sub_1BCAA44(v146, v147);
                if ( !*v127 )
                  sub_1BCAA3C(v146, v147);
                v148 = (*v127)->fields.voiceEntity;
                if ( !v148 )
                  sub_1BCAA3C(v146, v147);
                v149 = v146;
                id = v148->fields.id;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v147);
                v152 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(id, 0LL);
                if ( !v312 )
                  sub_1BCAA3C(0LL, v151);
                if ( !VoicePlayCondMaster__isVoiceCond(v312, v149, v152, 81, 0LL) )
                {
                  v180 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                  v140 = v180;
                  if ( i >= v123[6] )
                    sub_1BCAA44(v180, (unsigned int)v180);
LABEL_105:
                  ServantStatusVoiceListViewItem__SetLimitCount(
                    (ServantStatusVoiceListViewItem_o *)current,
                    v140,
                    svtId,
                    limitCount,
                    *v127,
                    v138,
                    v139);
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v320,
                    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
                  goto LABEL_102;
                }
LABEL_87:
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v320,
                  (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
              }
            }
          }
          voiceLabelSpec = 0;
LABEL_89:
          transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
          if ( i >= v123[6] )
            goto LABEL_234;
          if ( !*v127 )
            goto LABEL_233;
          v153 = (*v127)->fields.voiceEntity;
          if ( !v153 )
            goto LABEL_233;
          v154 = (int)transformNameSprite;
          v155 = v153->fields.id;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v84);
          v156 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(v155, 0LL);
          transformNameSprite = v312;
          if ( !v312 )
            goto LABEL_233;
          transformNameSprite = (void *)VoicePlayCondMaster__isVoiceCond(v312, v154, v156, 81, 0LL);
          if ( !voiceEntity )
            goto LABEL_233;
          v157 = voiceEntity->fields.condType;
          itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          v159 = v157 == 18;
          v160 = v157 == 7;
          if ( !itemList )
            goto LABEL_233;
          v161 = (char)transformNameSprite;
          size = itemList->fields._size;
          transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
          if ( i >= v123[6] )
            goto LABEL_234;
          v165 = *v127;
          v166 = firstPriority;
          v167 = (int)transformNameSprite;
          v168 = v161 & (v159 || v160);
          v169 = (ServantStatusVoiceListViewItem_o *)sub_1BCAA2C(
                                                       ServantStatusVoiceListViewItem_TypeInfo,
                                                       v84,
                                                       v163,
                                                       v164);
          ServantStatusVoiceListViewItem___ctor(
            v169,
            size,
            v167,
            svtId,
            limitCount,
            v165,
            v166,
            v168,
            voiceLabelSpec,
            v302);
          v176 = itemList->fields._items;
          v177 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++itemList->fields._version;
          if ( !v176 )
            goto LABEL_233;
          v178 = itemList->fields._size;
          if ( (unsigned int)v178 >= v176->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              itemList,
              (Il2CppObject *)v169,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v177[4] + 192LL) + 112LL));
          }
          else
          {
            v179 = &v176->obj.klass + v178;
            itemList->fields._size = v178 + 1;
            v179[4] = (Il2CppClass *)v169;
            sub_1BCA784((PartyOrganizationUtility_o *)(v179 + 4), (int64_t)v169, v170, v171, v172, v173, v174, v175);
          }
LABEL_102:
          v122 = v123[6];
        }
      }
      v181 = firstPriority;
      v182 = ++firstPriority;
      v184 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      v185 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v183);
        v185 = BalanceConfig_TypeInfo;
      }
      v105 = (VoiceMaster_o *)v310;
      if ( v184 == v185->static_fields->ServantIdJekyll )
        break;
      transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      v214 = (int)transformNameSprite;
      v215 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v84);
        v215 = BalanceConfig_TypeInfo;
      }
      if ( v214 == v215->static_fields->ServantIdMashu1 )
      {
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v84);
        if ( TutorialFlag__Get_38402052(115, 0LL) )
        {
          v217 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
          v218 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v216);
            v218 = BalanceConfig_TypeInfo;
          }
          transformNameSprite = VoiceMaster__getEnableInfo(
                                  (VoiceMaster_o *)v310,
                                  v217,
                                  v218->static_fields->ServantIdMashu2,
                                  limitCount,
                                  0LL,
                                  0,
                                  0,
                                  0LL);
          if ( !transformNameSprite )
            goto LABEL_233;
          v219 = transformNameSprite;
          if ( *((int *)transformNameSprite + 6) >= 1 )
          {
            v220 = 0LL;
            while ( 1 )
            {
              v221 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
              if ( !v221 )
                goto LABEL_233;
              v222 = v221->fields._size;
              transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
              v225 = (int)transformNameSprite;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v84);
              if ( v220 >= *((unsigned int *)v219 + 6) )
                break;
              v226 = (VoiceInfo_o *)v219[v220 + 4];
              ServantIdMashu2 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu2;
              v228 = (ServantStatusVoiceListViewItem_o *)sub_1BCAA2C(
                                                           ServantStatusVoiceListViewItem_TypeInfo,
                                                           v84,
                                                           v223,
                                                           v224);
              ServantStatusVoiceListViewItem___ctor(
                v228,
                v222,
                v225,
                ServantIdMashu2,
                limitCount,
                v226,
                v182,
                0,
                0,
                v302);
              v235 = v221->fields._items;
              v236 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++v221->fields._version;
              if ( !v235 )
                goto LABEL_233;
              v237 = v221->fields._size;
              if ( (unsigned int)v237 >= v235->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v221,
                  (Il2CppObject *)v228,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v236[4] + 192LL) + 112LL));
              }
              else
              {
                v238 = &v235->obj.klass + v237;
                v221->fields._size = v237 + 1;
                v238[4] = (Il2CppClass *)v228;
                sub_1BCA784((PartyOrganizationUtility_o *)(v238 + 4), (int64_t)v228, v229, v230, v231, v232, v233, v234);
              }
              if ( (__int64)++v220 >= *((int *)v219 + 6) )
                goto LABEL_160;
            }
LABEL_234:
            sub_1BCAA44(transformNameSprite, v84);
          }
LABEL_160:
          v182 = v181 + 2;
          firstPriority = v181 + 2;
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v84);
        v240 = NetworkManager__get_UserId(0LL);
        v241 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v239);
          v241 = BalanceConfig_TypeInfo;
        }
        v105 = (VoiceMaster_o *)v310;
        static_fields = v241->static_fields;
        MashuTdGradeUpQuestId = static_fields->MashuTdGradeUpQuestId;
        MashuTdGradeUpQuestPhase = static_fields->MashuTdGradeUpQuestPhase;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v239);
        transformNameSprite = (void *)CondType__IsQuestPhaseClear(
                                        v240,
                                        MashuTdGradeUpQuestId,
                                        MashuTdGradeUpQuestPhase,
                                        -1,
                                        0,
                                        0LL);
        if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
        {
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v84);
          transformNameSprite = v307;
          if ( !v307 )
            goto LABEL_233;
          transformNameSprite = (void *)ServantLimitAddMaster__TryGetEntity(
                                          v307,
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
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v84);
              transformNameSprite = BalanceConfig_TypeInfo;
            }
            if ( svtVoiceId != *(_DWORD *)(*((_QWORD *)transformNameSprite + 23) + 352LL) )
            {
              v247 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
              v248 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v246);
                v248 = BalanceConfig_TypeInfo;
              }
              transformNameSprite = VoiceMaster__getEnableInfo(
                                      (VoiceMaster_o *)v310,
                                      v247,
                                      v248->static_fields->ServantIdMashu3,
                                      limitCount,
                                      0LL,
                                      0,
                                      0,
                                      0LL);
              if ( !transformNameSprite )
                goto LABEL_233;
              v249 = transformNameSprite;
              if ( *((int *)transformNameSprite + 6) >= 1 )
              {
                v250 = 0LL;
                do
                {
                  v251 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
                  if ( !v251 )
                    goto LABEL_233;
                  v252 = v251->fields._size;
                  transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
                  v255 = (int)transformNameSprite;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v84);
                  if ( v250 >= *((unsigned int *)v249 + 6) )
                    goto LABEL_234;
                  v256 = (VoiceInfo_o *)v249[v250 + 4];
                  ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
                  v258 = (ServantStatusVoiceListViewItem_o *)sub_1BCAA2C(
                                                               ServantStatusVoiceListViewItem_TypeInfo,
                                                               v84,
                                                               v253,
                                                               v254);
                  ServantStatusVoiceListViewItem___ctor(
                    v258,
                    v252,
                    v255,
                    ServantIdMashu3,
                    limitCount,
                    v256,
                    v182,
                    0,
                    0,
                    v302);
                  v265 = v251->fields._items;
                  v266 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++v251->fields._version;
                  if ( !v265 )
                    goto LABEL_233;
                  v267 = v251->fields._size;
                  if ( (unsigned int)v267 >= v265->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v251,
                      (Il2CppObject *)v258,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v266[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v268 = &v265->obj.klass + v267;
                    v251->fields._size = v267 + 1;
                    v268[4] = (Il2CppClass *)v258;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)(v268 + 4),
                      (int64_t)v258,
                      v259,
                      v260,
                      v261,
                      v262,
                      v263,
                      v264);
                  }
                }
                while ( (__int64)++v250 < *((int *)v249 + 6) );
              }
              v213 = v182 + 1;
LABEL_139:
              v105 = (VoiceMaster_o *)v310;
              firstPriority = v213;
            }
          }
        }
      }
LABEL_176:
      v117 = v309;
      LODWORD(v118) = v309->max_length;
      v119 = v311 + 1;
      if ( (__int64)(v311 + 1) >= (int)v118 )
        goto LABEL_193;
    }
    v186 = DataMasterBase_object__object__object___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v310,
             (Il2CppObject *)StringLiteral_2660/*"B050"*/,
             (const MethodInfo_31B3198 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string__GetEntity__);
    transformNameSprite = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !transformNameSprite )
      goto LABEL_233;
    v188 = DataManager__GetMasterData_object_(
             (DataManager_o *)transformNameSprite,
             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v187);
    v189 = NetworkManager__get_UserId(0LL);
    transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
    if ( !v188 )
      goto LABEL_233;
    transformNameSprite = UserServantCollectionMaster__GetEntityDefinitely(
                            (UserServantCollectionMaster_o *)v188,
                            v189,
                            (int32_t)transformNameSprite,
                            0LL);
    if ( !v186 )
      goto LABEL_233;
    if ( LODWORD(v186[3].klass) == 17 )
    {
      if ( !transformNameSprite )
        goto LABEL_233;
      transformNameSprite = (void *)UserServantCollectionEntity__IsPlayed(
                                      (UserServantCollectionEntity_o *)transformNameSprite,
                                      HIDWORD(v186[3].klass),
                                      0LL);
      if ( ((unsigned __int8)transformNameSprite & 1) == 0 )
        goto LABEL_176;
    }
    v191 = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
    v192 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v190);
      v192 = BalanceConfig_TypeInfo;
    }
    transformNameSprite = VoiceMaster__getEnableInfo(
                            (VoiceMaster_o *)v310,
                            v191,
                            v192->static_fields->ServantIdHyde,
                            limitCount,
                            0LL,
                            0,
                            0,
                            0LL);
    if ( !transformNameSprite )
      goto LABEL_233;
    v193 = transformNameSprite;
    if ( *((int *)transformNameSprite + 6) >= 1 )
    {
      v194 = 0LL;
      do
      {
        v195 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !v195 )
          goto LABEL_233;
        v196 = v195->fields._size;
        transformNameSprite = (void *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
        v199 = (int)transformNameSprite;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v84);
        if ( v194 >= *((unsigned int *)v193 + 6) )
          goto LABEL_234;
        v200 = (VoiceInfo_o *)v193[v194 + 4];
        ServantIdHyde = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
        v202 = (ServantStatusVoiceListViewItem_o *)sub_1BCAA2C(ServantStatusVoiceListViewItem_TypeInfo, v84, v197, v198);
        ServantStatusVoiceListViewItem___ctor(v202, v196, v199, ServantIdHyde, limitCount, v200, v182, 0, 0, v302);
        v209 = v195->fields._items;
        v210 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v195->fields._version;
        if ( !v209 )
          goto LABEL_233;
        v211 = v195->fields._size;
        if ( (unsigned int)v211 >= v209->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v195,
            (Il2CppObject *)v202,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v210[4] + 192LL) + 112LL));
        }
        else
        {
          v212 = &v209->obj.klass + v211;
          v195->fields._size = v211 + 1;
          v212[4] = (Il2CppClass *)v202;
          sub_1BCA784((PartyOrganizationUtility_o *)(v212 + 4), (int64_t)v202, v203, v204, v205, v206, v207, v208);
        }
      }
      while ( (__int64)++v194 < *((int *)v193 + 6) );
    }
    v213 = v181 + 2;
    goto LABEL_139;
  }
LABEL_194:
  v272 = this->fields.itemList;
  if ( !v272 )
    goto LABEL_233;
  v273 = v272->fields._size;
  v274 = sub_1BCAA2C(System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo, v84, v99, v100);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v274,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
  if ( v273 - 1 >= 1 )
  {
    for ( j = 0; j != v273 - 1; ++j )
    {
      transformNameSprite = this->fields.itemList;
      if ( !transformNameSprite )
        goto LABEL_233;
      transformNameSprite = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)transformNameSprite,
                              j,
                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !transformNameSprite )
        goto LABEL_233;
      v276 = (ServantStatusVoiceListViewItem_o *)transformNameSprite;
      v277 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)transformNameSprite + 304LL) < (unsigned int)v277
        || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)transformNameSprite + 200LL) + 8 * v277 - 8) != ServantStatusVoiceListViewItem_TypeInfo )
      {
        goto LABEL_233;
      }
      if ( ServantStatusVoiceListViewItem__get_OpenName((ServantStatusVoiceListViewItem_o *)transformNameSprite, v84) )
      {
        transformNameSprite = (void *)ServantStatusVoiceListViewItem__get_DispNum(v276, v84);
        if ( !(_DWORD)transformNameSprite )
        {
          if ( !v274 )
            goto LABEL_233;
          v278 = *(unsigned int *)(v274 + 24);
          v279 = *(_DWORD *)(v274 + 28) + 1;
          *(_DWORD *)(v274 + 24) = 0;
          *(_DWORD *)(v274 + 28) = v279;
          if ( (int)v278 >= 1 )
            System_Array__Clear(*(System_Array_o **)(v274 + 16), 0, v278, 0LL);
          v280 = j + 1;
          if ( j + 1 < v273 )
          {
            do
            {
              transformNameSprite = this->fields.itemList;
              if ( !transformNameSprite )
                goto LABEL_233;
              transformNameSprite = System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)transformNameSprite,
                                      v280,
                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !transformNameSprite )
                goto LABEL_233;
              v281 = (Il2CppObject *)transformNameSprite;
              v282 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)transformNameSprite + 304LL) < (unsigned int)v282
                || *(ServantStatusVoiceListViewItem_c **)(*(_QWORD *)(*(_QWORD *)transformNameSprite + 200LL)
                                                        + 8 * v282
                                                        - 8) != ServantStatusVoiceListViewItem_TypeInfo )
              {
                goto LABEL_233;
              }
              OpenName = ServantStatusVoiceListViewItem__get_OpenName(
                           (ServantStatusVoiceListViewItem_o *)transformNameSprite,
                           v84);
              v285 = ServantStatusVoiceListViewItem__get_OpenName(v276, v284);
              transformNameSprite = (void *)System_String__op_Equality(OpenName, v285, 0LL);
              if ( ((unsigned __int8)transformNameSprite & 1) != 0 )
              {
                v291 = *(_QWORD *)(v274 + 16);
                v292 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__;
                ++*(_DWORD *)(v274 + 28);
                if ( !v291 )
                  goto LABEL_233;
                v293 = *(int *)(v274 + 24);
                if ( (unsigned int)v293 >= *(_DWORD *)(v291 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)v274,
                    v281,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v292[4] + 192LL) + 112LL));
                }
                else
                {
                  v294 = v291 + 8 * v293;
                  *(_DWORD *)(v274 + 24) = v293 + 1;
                  *(_QWORD *)(v294 + 32) = v281;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)(v294 + 32),
                    (int64_t)v281,
                    v278,
                    v286,
                    v287,
                    v288,
                    v289,
                    v290);
                }
              }
            }
            while ( v273 != ++v280 );
          }
          if ( *(int *)(v274 + 24) >= 1 )
          {
            ServantStatusVoiceListViewItem__SetNameNum(v276, 1, (const MethodInfo *)v278);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v317,
              (System_Collections_Generic_List_object__o *)v274,
              (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
            v295 = 2;
            for ( k = v317;
                  ;
                  ServantStatusVoiceListViewItem__SetNameNum(
                    (ServantStatusVoiceListViewItem_o *)k.fields._current,
                    v295++,
                    v298) )
            {
              v296 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &k,
                       (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
              if ( !v296 )
                break;
              if ( k.fields._current )
              {
                v299 = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
                if ( LOBYTE(k.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v299
                  && (ServantStatusVoiceListViewItem_c *)k.fields._current->klass->_2.typeHierarchy[v299 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
                {
                  continue;
                }
              }
              sub_1BCAA3C(v296, v297);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &k,
              (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
          }
        }
      }
    }
  }
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v84);
  transformNameSprite = LocalizationManager__Get((System_String_o *)StringLiteral_12081/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_233;
  UILabel__set_text(explanationLabel, (System_String_o *)transformNameSprite, 0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  transformNameSprite = LocalizationManager__Get(v303, 0LL);
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
  __int64 v6; // x2
  ServantStatusVoiceListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B13D29 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&ServantStatusVoiceListViewItem_TypeInfo, v5, v6);
    byte_4B13D29 = 1;
  }
  result = (ServantStatusVoiceListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantStatusVoiceListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  struct VoiceEntity_o *voiceEntity; // x8
  __int64 svtVoiceType; // x8
  __int64 v16; // x20
  struct VoiceEntity_o *v17; // x8
  System_String_o *v18; // x19
  System_String_o *v19; // x0
  __int64 v20; // x20
  int v21; // w8
  System_String_o *v22; // x19
  unsigned int v23; // w21
  __int64 v24; // x22
  __int64 v25; // x8
  __int64 v26; // x8

  if ( (byte_4B13D27 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantVoiceMaster___, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v10, v11);
    byte_4B13D27 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)ServantVoiceMaster__getEntity_40601672(
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
    sub_1BCAA44(Instance, v13);
  v16 = *((_QWORD *)&Instance->fields._DispLog + svtVoiceType);
  if ( !v16 )
    return 0;
  Instance = (DataManager_o *)System_Int32__ToString((int)voiceInfo + 52, 0LL);
  v17 = voiceInfo->fields.voiceEntity;
  if ( !v17
    || (v18 = (System_String_o *)Instance, (Instance = (DataManager_o *)v17->fields.id) == 0LL)
    || (v19 = (System_String_o *)((__int64 (__fastcall *)(DataManager_o *, void *))Instance->klass->vtable._3_ToString.method)(
                                   Instance,
                                   Instance->klass[1]._1.image),
        Instance = (DataManager_o *)System_String__Concat_62412480(
                                      v18,
                                      (System_String_o *)StringLiteral_16290/*"_"*/,
                                      v19,
                                      0LL),
        (v20 = *(_QWORD *)(v16 + 32)) == 0) )
  {
LABEL_25:
    sub_1BCAA3C(Instance, v13);
  }
  v21 = *(_DWORD *)(v20 + 24);
  if ( v21 < 1 )
    return 0;
  v22 = (System_String_o *)Instance;
  v23 = 0;
  while ( 1 )
  {
    if ( v23 >= v21 )
      goto LABEL_26;
    v24 = *(_QWORD *)(v20 + 8LL * (int)v23 + 32);
    if ( !v24 )
      goto LABEL_25;
    v25 = *(_QWORD *)(v24 + 64);
    if ( !v25 )
      goto LABEL_25;
    if ( !*(_DWORD *)(v25 + 24) )
      goto LABEL_26;
    v26 = *(_QWORD *)(v25 + 32);
    if ( !v26 )
      goto LABEL_25;
    Instance = (DataManager_o *)System_String__op_Equality(*(System_String_o **)(v26 + 16), v22, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( *(_DWORD *)(v24 + 80) )
        return 1;
    }
    v21 = *(_DWORD *)(v20 + 24);
    if ( (int)++v23 >= v21 )
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x21
  struct ServantVoiceCond_array *servantVoiceConds; // x22
  int max_length; // w8
  int64_t v18; // x19
  unsigned int v19; // w23
  bool v20; // w25
  ServantVoiceCond_o *v21; // x8
  int32_t condType; // w9
  int value; // w26
  __int64 v24; // x20
  __int64 v25; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4B13D28 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId, voiceInfo);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B13D28 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
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
    v18 = Instance;
    v19 = 0;
    v20 = 1;
    while ( 1 )
    {
      if ( v19 >= max_length )
        sub_1BCAA44(Instance, v13);
      v21 = servantVoiceConds->m_Items[v19];
      if ( !v21 )
        break;
      condType = v21->fields.condType;
      if ( condType == 20 || condType == 3 )
        v20 = 0;
      value = v21->fields.value;
      if ( condType == 3 || condType == 20 )
      {
        if ( !v18 )
          break;
        v24 = *(_QWORD *)(v18 + 100);
        v25 = *(_QWORD *)(v18 + 108);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
        *(_QWORD *)&v27.fields.currentCryptoKey = v24;
        *(_QWORD *)&v27.fields.fakeValue = v25;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v27, 0LL);
        if ( (int)Instance >= value )
          v20 = 1;
      }
      max_length = servantVoiceConds->max_length;
      if ( (int)++v19 >= max_length )
        return v20;
    }
LABEL_27:
    sub_1BCAA3C(Instance, v13);
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
  if ( (byte_4B13D2F & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1BCA7E0(&ServantStatusVoiceListViewItem_TypeInfo, obj, method);
    byte_4B13D2F = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0LL
    || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( LOBYTE(linkItem[1].fields.sortValue2B) )
  {
    callbackFunc = v9->fields.callbackFunc;
    v9->fields.callbackFunc = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v9->fields.callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  __int64 v7; // x1
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct UIScrollView_o *v16; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B13D2E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B13D2E = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v16 = this->fields.scrollView;
        if ( !v16 )
          sub_1BCAA3C(0LL, v9);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v16->klass->vtable._8_UpdateScrollbars.method)(
          v16,
          1LL,
          v16->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v22; // x1
  int32_t size; // w8
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  Il2CppObject *current; // x21
  System_Action_o *v28; // x22
  __int64 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B13D2C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__, v7, v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v17, v18);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v19, v20);
    byte_4B13D2C = 1;
  }
  memset(&v32, 0, sizeof(v32));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v22);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v32.fields._current;
      v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v29, v30);
      ServantStatusVoiceListViewObject__Init_35952540(
        (ServantStatusVoiceListViewObject_o *)current,
        mode,
        v28,
        delay,
        v31);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__RequestListObject_35952036(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v20; // x1
  int32_t size; // w8
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  Il2CppObject *current; // x21
  System_Action_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B13D2D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__, v7, v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v17, v18);
    byte_4B13D2D = 1;
  }
  memset(&v30, 0, sizeof(v30));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v20);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v30.fields._current;
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v27, v28);
      ServantStatusVoiceListViewObject__Init_35953148((ServantStatusVoiceListViewObject_o *)current, mode, v26, v29);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusVoiceListViewManager__SetMode_35951064(this, mode, -1, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__SetMode_35951064(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        int32_t select,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 methodPtr_low; // x11
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x1
  System_Collections_Generic_List_object__o *v32; // x19
  int32_t v33; // w20
  const MethodInfo *v34; // x2
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v36; // x20
  int32_t v37; // w21
  Il2CppObject *Item; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Action_o *v42; // x23
  const MethodInfo *v43; // x3
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B13D2B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, *(_QWORD *)&select);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__, v17, v18);
    sub_1BCA7E0(&ServantStatusVoiceListViewItem_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v21, v22);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v23, v24);
    byte_4B13D2B = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( mode == 2 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_30;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v44,
      itemList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    for ( i = v44; ; BYTE1(i.fields._current[12].klass) = HIDWORD(i.fields._current[1].klass) == select )
    {
      v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v26 )
        break;
      if ( !i.fields._current )
        sub_1BCAA3C(v26, v27);
      methodPtr_low = LOBYTE(ServantStatusVoiceListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(i.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (ServantStatusVoiceListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        sub_1BCAA3C(v26, v27);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_object__o *)ServantStatusVoiceListViewManager__get_ObjectList(this, v31);
    if ( !itemList )
      goto LABEL_30;
    v32 = itemList;
    if ( itemList->fields._size >= 1 )
    {
      v33 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v32,
                                                                  v33,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
        if ( !itemList )
          break;
        ServantStatusVoiceListViewObject__Init_35950936((ServantStatusVoiceListViewObject_o *)itemList, 4, v34);
        if ( ++v33 >= v32->fields._size )
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
                                                                v29);
      if ( !itemList )
        goto LABEL_30;
      size = itemList->fields._size;
      v36 = itemList;
      if ( size >= 1 )
      {
        this->fields.callbackCount = size;
        v37 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v36,
                   v37,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__);
          v42 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v39, v40, v41);
          System_Action___ctor(v42, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
            break;
          ServantStatusVoiceListViewObject__Init_35952540((ServantStatusVoiceListViewObject_o *)Item, 5, v42, 0.1, v43);
          if ( ++v37 >= v36->fields._size )
            return;
        }
LABEL_30:
        sub_1BCAA3C(itemList, *(_QWORD *)&mode);
      }
      this->fields.callbackCount = 1;
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
        0.2,
        0LL);
    }
    else if ( mode == 1 )
    {
      ServantStatusVoiceListViewManager__RequestListObject_35952036(this, 3, v30);
    }
  }
}


void __fastcall ServantStatusVoiceListViewManager__SetMode_35951980(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusVoiceListViewManager__SetMode_35951064(this, mode, -1, v10);
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
  if ( (byte_4B13D2A & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_1BCA7E0(&ServantStatusVoiceListViewObject_TypeInfo, obj, item);
    byte_4B13D2A = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantStatusVoiceListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusVoiceListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusVoiceListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ServantStatusVoiceListViewObject__Init_35950936(
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

  if ( (byte_4B13D1E & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B13D1E = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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

  if ( (byte_4B13D20 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B13D20 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  ServantStatusVoiceListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *__fastcall ServantStatusVoiceListViewManager__get_ClippingObjectList(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x21
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v29; // x1
  Il2CppObject *v30; // x21
  ListViewItem_o *Item; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  _BOOL8 v39; // x0
  __int64 v40; // x1
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B13D23 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B13D23 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v47 = v46;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v47.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)ServantStatusVoiceListViewObject__GetItem(
                                 (ServantStatusVoiceListViewObject_o *)Component_object,
                                 v29);
      if ( !Item )
        sub_1BCAA3C(0LL, v32);
      if ( Item->fields.isTermination )
      {
        v39 = ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, Item, 0LL);
        if ( v39 )
        {
          if ( !v21 )
            sub_1BCAA3C(v39, v40);
          items = v21->fields._items;
          v42 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1BCAA3C(v39, v40);
          size = v21->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v30,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v21 )
          sub_1BCAA3C(Item, v32);
        items = v21->fields._items;
        v42 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(Item, v32);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v44 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v30;
        sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v30, v33, v34, v35, v36, v37, v38);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *)v21;
}


System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *__fastcall ServantStatusVoiceListViewManager__get_ObjectList(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B13D22 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B13D22 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v42.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v35 = (int64_t)Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v37 = Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v35;
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), v35, v29, v30, v31, v32, v33, v34);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *)v21;
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

  if ( (byte_4B13D1F & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B13D1F = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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

  if ( (byte_4B13D21 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B13D21 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0AA94;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0AA3C;
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
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = result;
  v14 = kind;
  if ( (byte_4B13D30 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&result);
    sub_1BCA7E0(&ServantStatusVoiceListViewManager_ResultKind_TypeInfo, v9, v10);
    byte_4B13D30 = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(ServantStatusVoiceListViewManager_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall ServantStatusVoiceListViewManager_CallbackFunc__EndInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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