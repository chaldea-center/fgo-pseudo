void __fastcall FollowerSelectItemListViewManager___cctor(const MethodInfo *method)
{
  FollowerSelectItemListViewManager___c_c *v1; // x0
  Il2CppObject *v2; // x19
  System_Func_Voice_BATTLE__BattlePerformance_VoiceParam__o *v3; // x20
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  FollowerSelectItemListViewManager_c *v11; // x8
  float v12; // s4
  float v13; // s5
  float v14; // s6
  float v15; // s7
  struct UnityEngine_Color_o v16; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_435539E & 1) == 0 )
  {
    sub_B70694(&FollowerSelectItemListViewManager_TypeInfo);
    sub_B70694(&Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort___ctor__);
    sub_B70694(&System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo);
    sub_B70694(&Method_FollowerSelectItemListViewManager___c___cctor_b__124_0__);
    sub_B70694(&FollowerSelectItemListViewManager___c_TypeInfo);
    byte_435539E = 1;
  }
  v1 = FollowerSelectItemListViewManager___c_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager___c_TypeInfo);
    v1 = FollowerSelectItemListViewManager___c_TypeInfo;
  }
  v2 = (Il2CppObject *)v1->static_fields->__9;
  v3 = (System_Func_Voice_BATTLE__BattlePerformance_VoiceParam__o *)sub_B70764(System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo);
  System_Func_Voice_BATTLE__BattlePerformance_VoiceParam____ctor(
    v3,
    v2,
    Method_FollowerSelectItemListViewManager___c___cctor_b__124_0__,
    (const MethodInfo_29A90A0 *)Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort___ctor__);
  static_fields = (BattleServantConfConponent_o *)FollowerSelectItemListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B70630(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
  v11 = FollowerSelectItemListViewManager_TypeInfo;
  v17.fields.a = 1.0;
  FollowerSelectItemListViewManager_TypeInfo->static_fields->lastSelectedQuestId = -1;
  v11->static_fields->lastSelectedQuestPhase = -1;
  v17.fields.r = 0.30196;
  v16 = (struct UnityEngine_Color_o)0LL;
  v17.fields.g = 0.30196;
  v17.fields.b = 0.30196;
  UnityEngine_Color___ctor(v17, v12, v13, v14, v15, (const MethodInfo *)&v16);
  FollowerSelectItemListViewManager_TypeInfo->static_fields->REFRESH_DARK_COLOR = v16;
}


void __fastcall FollowerSelectItemListViewManager___ctor(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__AdjustButton(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *changeSkillButton; // x0
  UnityEngine_Component_o *sortKindButton; // x20
  UISprite_o *changeSkillButtonSprite; // x21
  WebViewObject_o *Component_WebViewObject; // x19

  if ( (byte_4355377 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B70694(&StringLiteral_17218/*"btn_bg_12"*/);
    sub_B70694(&StringLiteral_17269/*"btn_sefilter_2"*/);
    sub_B70694(&StringLiteral_17403/*"buttontxt_formation_19"*/);
    byte_4355377 = 1;
  }
  changeSkillButton = (UnityEngine_Component_o *)this->fields.changeSkillButton;
  if ( !changeSkillButton )
    goto LABEL_12;
  sortKindButton = (UnityEngine_Component_o *)this->fields.sortKindButton;
  changeSkillButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(changeSkillButton, 0LL);
  if ( !changeSkillButton )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSkillButton, 1, 0LL);
  changeSkillButtonSprite = this->fields.changeSkillButtonSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(changeSkillButtonSprite, (System_String_o *)StringLiteral_17403/*"buttontxt_formation_19"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.bonusFilterSprite, (System_String_o *)StringLiteral_17269/*"btn_sefilter_2"*/, 0LL);
  changeSkillButton = (UnityEngine_Component_o *)this->fields.bonusFilterSprite;
  if ( !changeSkillButton
    || (changeSkillButton = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))changeSkillButton->klass[2]._1.typeMetadataHandle)(
                                                         changeSkillButton,
                                                         changeSkillButton->klass[2]._1.interopData),
        !sortKindButton)
    || (Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    sortKindButton,
                                    (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        changeSkillButton = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(
                                                         (UISprite_o *)Component_WebViewObject,
                                                         (System_String_o *)StringLiteral_17218/*"btn_bg_12"*/,
                                                         0LL),
        !Component_WebViewObject) )
  {
LABEL_12:
    sub_B7076C(changeSkillButton, method);
  }
  ((void (__fastcall *)(WebViewObject_o *, Il2CppClass *))Component_WebViewObject->klass[2]._1.castClass)(
    Component_WebViewObject,
    Component_WebViewObject->klass[2]._1.declaringType);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerSelectItemListViewManager__ChangeClass(
        FollowerSelectItemListViewManager_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  ClassButtonControlComponent_o *classButtonControl; // x0
  bool isInput; // w21
  const MethodInfo *v7; // x2
  struct ListViewSort_o *sort; // x8

  classButtonControl = this->fields.classButtonControl;
  isInput = this->fields.isInput;
  this->fields.isInput = 0;
  if ( !classButtonControl
    || (ClassButtonControlComponent__setCursor(classButtonControl, classPos, 0LL),
        this->fields.isInput = isInput,
        FollowerSelectItemListViewManager__SortClass(this, classPos, v7),
        (sort = this->fields.sort) == 0LL) )
  {
    sub_B7076C(classButtonControl, *(_QWORD *)&classPos);
  }
  return sort->fields.sortKind != 11;
}


void __fastcall FollowerSelectItemListViewManager__CloseSortDialog(
        FollowerSelectItemListViewManager_o *this,
        bool isResult,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4355391 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4355391 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v6);
  CommonUI__CloseOtherUserSortDialog(Instance, 0LL, 0LL);
  if ( isResult )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__CreateList(
        FollowerSelectItemListViewManager_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t friendPointUpVal,
        int32_t friendPointUpMaxVal,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v8; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  FollowerSelectItemListViewManager_c *v25; // x8
  __int64 LIST_VIEW_SORT; // x0
  struct ListViewSort_o *v27; // x0
  struct ListViewSort_o **p_sort; // x27
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x4
  int32_t InitialDisplayClass; // w0
  FollowerSelectItemListViewManager_c *v37; // x8
  System_Int32_array *OngoingQuestTargetEventIds; // x26
  EventUpValSetupInfo_o *v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_o *v46; // x21
  __int64 v47; // x8
  __int64 v48; // x25
  unsigned __int64 v49; // x20
  int32_t v50; // w0
  ClassButtonControlComponent_o *classButtonControl; // x21
  ClassButtonControlComponent_CallbackFunc_o *v52; // x25
  ClassButtonControlComponent_o *v53; // x21
  const MethodInfo *v54; // x2
  QuestPhaseEntity_o *v55; // x20
  __int64 v56; // x21
  __int64 v57; // x21
  NpcFollowerMaster_o *MasterData_WarQuestSelectionMaster; // x24
  FollowerInfo_array *QuestFollowerList; // x27
  int v60; // w20
  bool IsMyServantOrNpcRestriction_34234816; // w20
  bool v62; // cc
  BalanceConfig_c *v63; // x0
  int32_t ClassBoardReleaseQuestId; // w21
  bool IsQuestClear_24296868; // w25
  __int64 v66; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v67; // x21
  unsigned __int64 v68; // x22
  bool v69; // w10
  FollowerInfo_o **m_Items; // x25
  FollowerInfo_o *v71; // x26
  __int64 v72; // x28
  int32_t ReturnTypeByQuestId; // w0
  System_Int32_array *NpcServantIndividuality; // x0
  bool IsRecommendedFollower; // w24
  __int64 v76; // x21
  __int64 v77; // x25
  int32_t v78; // w0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v79; // x28
  char v80; // w20
  ClassBoardClassMaster_o *v81; // x20
  int32_t v82; // w0
  ServantLeaderInfo_o *ServantLeaderInfo; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v84; // x25
  __int64 v85; // x19
  __int64 v86; // x21
  int32_t ClassBoardBaseId; // w19
  UserClassBoardSquareMaster_o *Master_WarQuestSelectionMaster; // x21
  __int64 v89; // x25
  Il2CppObject *v90; // x0
  System_Int32_array **v91; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **OpenClassIdArrayFromBaseId; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **v105; // x0
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  FollowerSelectItemListViewManager_c *v112; // x0
  _BOOL4 v113; // w8
  _BOOL4 v114; // w9
  int32_t v115; // w28
  EventUpValSetupInfo_o *setupInfo; // x21
  bool v117; // w19
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x20
  bool isServantEquipBonusFilterEnable; // w23
  bool isServantBonusFilterEnable; // w24
  bool isBonusFilterEnable; // w27
  FollowerSelectItemListViewItem_o *v122; // x25
  int v123; // w20
  bool v124; // w8
  int64_t userId; // x27
  int v126; // w8
  unsigned int v127; // w22
  int64_t v128; // x8
  Il2CppObject *v129; // x0
  Il2CppObject *v130; // x21
  __int64 v131; // x20
  BalanceConfig_c *v132; // x0
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t FixEventSupportDeckNum; // w21
  int32_t FixMainSupportDeckNum; // w25
  __int64 v136; // x9
  unsigned int *v137; // x10
  int32_t deckPriority; // w24
  unsigned __int64 v139; // x20
  System_Collections_Generic_Dictionary_int__int__o *v140; // x21
  int32_t v141; // w22
  bool v142; // w28
  bool v143; // w26
  FollowerSelectItemListViewItem_o *v144; // x25
  struct BalanceConfig_StaticFields *v145; // x8
  int32_t v146; // w21
  int32_t v147; // w25
  int32_t v148; // w28
  unsigned __int64 v149; // x26
  int32_t v150; // w24
  bool v151; // w27
  int v152; // w20
  bool v153; // w25
  bool v154; // w22
  FollowerSelectItemListViewItem_o *v155; // x21
  int64_t v156; // x20
  unsigned __int64 v157; // x8
  unsigned __int64 v158; // x19
  __int64 v159; // x9
  __int64 v160; // x9
  unsigned __int64 v161; // x8
  FollowerInfo_o *v162; // x8
  Il2CppObject *v163; // x0
  __int64 v164; // x22
  BalanceConfig_c *v165; // x0
  struct BalanceConfig_StaticFields *v166; // x9
  int32_t v167; // w21
  int32_t v168; // w25
  int32_t v169; // w26
  unsigned __int64 v170; // x24
  System_Collections_Generic_Dictionary_int__int__o *v171; // x27
  int32_t v172; // w28
  bool v173; // w22
  bool v174; // w25
  bool v175; // w19
  FollowerSelectItemListViewItem_o *v176; // x21
  struct BalanceConfig_StaticFields *v177; // x8
  int32_t v178; // w21
  int32_t v179; // w25
  int32_t v180; // w26
  unsigned __int64 v181; // x28
  int32_t v182; // w21
  bool v183; // w27
  System_Collections_Generic_Dictionary_int__int__o *v184; // x20
  int v185; // w24
  bool v186; // w25
  int32_t v187; // w19
  bool v188; // w22
  FollowerSelectItemListViewItem_o *v189; // x21
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v191; // x2
  FollowerSelectItemListViewManager_c *v192; // x0
  const MethodInfo *v193; // x1
  struct UIScrollView_o *scrollView; // x8
  __int64 v195; // x0
  FollowerSelectItemListViewManager_o *v196; // x0
  int32_t v197; // w1
  int32_t v198; // w2
  bool v199; // w3
  const MethodInfo *v200; // x4
  int32_t supportDeckId; // [xsp+38h] [xbp-168h]
  int32_t supportDeckIda; // [xsp+38h] [xbp-168h]
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary; // [xsp+48h] [xbp-158h]
  const MethodInfo *v204; // [xsp+58h] [xbp-148h]
  int32_t arg; // [xsp+6Ch] [xbp-134h]
  UserFollowMaster_o *questIdb; // [xsp+70h] [xbp-130h]
  bool questPhaseb; // [xsp+7Ch] [xbp-124h]
  __int64 v210; // [xsp+80h] [xbp-120h]
  int32_t v211; // [xsp+80h] [xbp-120h]
  __int64 v212; // [xsp+88h] [xbp-118h]
  __int64 v213; // [xsp+88h] [xbp-118h]
  struct System_Collections_Generic_List_ListViewItem__o **p_originalItemList; // [xsp+90h] [xbp-110h]
  QuestPhaseEntity_o *v215; // [xsp+98h] [xbp-108h]
  QuestPhaseEntity_o *v216; // [xsp+98h] [xbp-108h]
  QuestPhaseEntity_o *v217; // [xsp+98h] [xbp-108h]
  bool isReleasedClassBoard; // [xsp+A0h] [xbp-100h]
  bool v219; // [xsp+A0h] [xbp-100h]
  __int64 v220; // [xsp+A0h] [xbp-100h]
  __int64 v221; // [xsp+A0h] [xbp-100h]
  __int64 v222; // [xsp+A0h] [xbp-100h]
  bool v223; // [xsp+A8h] [xbp-F8h]
  signed __int64 v224; // [xsp+A8h] [xbp-F8h]
  signed __int64 v225; // [xsp+A8h] [xbp-F8h]
  FollowerInfo_array *v226; // [xsp+B0h] [xbp-F0h]
  unsigned int *v227; // [xsp+B0h] [xbp-F0h]
  unsigned int *v228; // [xsp+B0h] [xbp-F0h]
  NpcFollowerMaster_o *v229; // [xsp+B8h] [xbp-E8h]
  unsigned int v230; // [xsp+B8h] [xbp-E8h]
  __int64 v231; // [xsp+B8h] [xbp-E8h]
  FollowerInfo_o **v232; // [xsp+C0h] [xbp-E0h]
  __int64 v233; // [xsp+C0h] [xbp-E0h]
  unsigned __int64 v234; // [xsp+C0h] [xbp-E0h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v235; // [xsp+C8h] [xbp-D8h]
  FollowerInfo_o **v236; // [xsp+C8h] [xbp-D8h]
  FollowerInfo_o **v237; // [xsp+C8h] [xbp-D8h]
  _BOOL4 followerClassId; // [xsp+D0h] [xbp-D0h]
  EventUpValSetupInfo_o *followerClassIdc; // [xsp+D0h] [xbp-D0h]
  int32_t followerClassIda; // [xsp+D0h] [xbp-D0h]
  EventUpValSetupInfo_o *followerClassIdd; // [xsp+D0h] [xbp-D0h]
  int32_t followerClassIdb; // [xsp+D0h] [xbp-D0h]
  struct System_Collections_Generic_List_ListViewItem__o **p_mixItemList; // [xsp+D8h] [xbp-C8h]
  QuestRestrictionInfo_o *v244; // [xsp+E0h] [xbp-C0h]
  int32_t v248; // [xsp+F8h] [xbp-A8h]
  FollowerInfo_o *v249; // [xsp+F8h] [xbp-A8h]
  EventUpValSetupInfo_o *v250; // [xsp+F8h] [xbp-A8h]
  FollowerInfo_o *v251; // [xsp+F8h] [xbp-A8h]
  EventUpValSetupInfo_o *v252; // [xsp+F8h] [xbp-A8h]
  int32_t v253; // [xsp+100h] [xbp-A0h]
  int32_t size; // [xsp+100h] [xbp-A0h]
  FollowerInfo_o *v255; // [xsp+100h] [xbp-A0h]
  int32_t v256; // [xsp+100h] [xbp-A0h]
  FollowerInfo_o *v257; // [xsp+100h] [xbp-A0h]
  FollowerSelectItemListViewManager_o *v258; // [xsp+108h] [xbp-98h]
  UserGameEntity_o *v259; // [xsp+110h] [xbp-90h] BYREF
  UserGameEntity_o *v260; // [xsp+118h] [xbp-88h] BYREF
  UserClassBoardSquareEntity_o *v261; // [xsp+120h] [xbp-80h] BYREF
  UserServantEntity_o *v262; // [xsp+128h] [xbp-78h] BYREF
  UserServantEntity_o *entity; // [xsp+130h] [xbp-70h] BYREF
  UserServantEntity_o *v264; // [xsp+138h] [xbp-68h] BYREF
  NpcFollowerEntity_o *v265; // [xsp+140h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v266; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v267; // 0:x0.16

  v8 = questRestrictionInfo;
  if ( (byte_4355379 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_B70694(&char___TypeInfo);
    sub_B70694(&ClassBoardInfo_TypeInfo);
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_B70694(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_B70694(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_B70694(&Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserFollowerMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_B70694(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
    sub_B70694(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    sub_B70694(&Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    sub_B70694(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B70694(&EventUpValSetupInfo_TypeInfo);
    sub_B70694(&FollowerSelectItemListViewItem_TypeInfo);
    sub_B70694(&Method_FollowerSelectItemListViewManager_OnChangeClass__);
    sub_B70694(&FollowerSelectItemListViewManager_TypeInfo);
    sub_B70694(&Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B70694(&System_Collections_Generic_List_ClassBoardInfo__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&System_Math_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B70694(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B70694(&StringLiteral_2902/*"BonusFilterEventId"*/);
    sub_B70694(&StringLiteral_12046/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4355379 = 1;
  }
  v264 = 0LL;
  v265 = 0LL;
  v262 = 0LL;
  entity = 0LL;
  v260 = 0LL;
  v261 = 0LL;
  v259 = 0LL;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  this->fields.questRestrictionInfo = v8;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)v8,
    *(System_String_array ***)&questPhase,
    *(System_String_array ***)&friendPointUpVal,
    *(System_Boolean_array ***)&friendPointUpMaxVal,
    (System_Int32_array **)friendPointCampaignEntityList,
    (System_Int32_array *)questRestrictionInfo,
    (System_Int32_array *)method);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.mixItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v10;
  p_mixItemList = &this->fields.mixItemList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mixItemList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.originalItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v17;
  p_originalItemList = &this->fields.originalItemList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.originalItemList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  arg = FollowerInfo__GetReturnTypeByQuestId(questId, 0LL);
  v25 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v25 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = (__int64)v25->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT )
    goto LABEL_305;
  v27 = System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort___Invoke(
          (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)LIST_VIEW_SORT,
          arg,
          (const MethodInfo_29A90B4 *)Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__);
  this->fields.sort = v27;
  p_sort = &this->fields.sort;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v27,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  if ( !this->fields.sort )
    goto LABEL_305;
  InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                          this,
                          questId,
                          questPhase,
                          this->fields.sort->fields.isRequestLoad,
                          v35);
  v37 = FollowerSelectItemListViewManager_TypeInfo;
  FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId = InitialDisplayClass;
  v37->static_fields->lastSelectedQuestId = questId;
  v37->static_fields->lastSelectedQuestPhase = questPhase;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  LIST_VIEW_SORT = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !LIST_VIEW_SORT )
    goto LABEL_305;
  OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                 (EventQuestMaster_o *)LIST_VIEW_SORT,
                                 questId,
                                 questPhase,
                                 0LL,
                                 0LL);
  v39 = (EventUpValSetupInfo_o *)sub_B70764(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_23742548(v39, OngoingQuestTargetEventIds, 0, questId, questPhase, 0LL);
  this->fields.setupInfo = v39;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  if ( !OngoingQuestTargetEventIds )
    goto LABEL_305;
  if ( *(_QWORD *)&OngoingQuestTargetEventIds->max_length )
  {
    LIST_VIEW_SORT = (__int64)UnityEngine_PlayerPrefs__GetString_36095200((System_String_o *)StringLiteral_2902/*"BonusFilterEventId"*/, 0LL);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    v46 = (System_String_o *)LIST_VIEW_SORT;
    if ( *(int *)(LIST_VIEW_SORT + 16) < 1 )
      goto LABEL_24;
    LIST_VIEW_SORT = sub_B706AC(char___TypeInfo, 1LL);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    if ( !*(_DWORD *)(LIST_VIEW_SORT + 24) )
      goto LABEL_306;
    *(_WORD *)(LIST_VIEW_SORT + 32) = 44;
    LIST_VIEW_SORT = (__int64)System_String__Split(v46, (System_Char_array *)LIST_VIEW_SORT, 0LL);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    v47 = *(_QWORD *)(LIST_VIEW_SORT + 24);
    v48 = LIST_VIEW_SORT;
    if ( (int)v47 < 1 )
    {
LABEL_24:
      LIST_VIEW_SORT = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_305;
      ListViewSort__SetFilter((ListViewSort_o *)LIST_VIEW_SORT, 18, 0, 0LL);
      LIST_VIEW_SORT = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_305;
      ListViewSort__SetFilter((ListViewSort_o *)LIST_VIEW_SORT, 19, 0, 0LL);
      LIST_VIEW_SORT = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_305;
      ListViewSort__SetFilter((ListViewSort_o *)LIST_VIEW_SORT, 20, 0, 0LL);
      LIST_VIEW_SORT = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_305;
      ListViewSort__SetFilter((ListViewSort_o *)LIST_VIEW_SORT, 40, 1, 0LL);
      LIST_VIEW_SORT = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_305;
      ListViewSort__SetFilter((ListViewSort_o *)LIST_VIEW_SORT, 41, 1, 0LL);
    }
    else
    {
      v49 = 0LL;
      while ( 1 )
      {
        if ( v49 >= (unsigned int)v47 )
          goto LABEL_306;
        v50 = System_Int32__Parse(*(System_String_o **)(v48 + 32 + 8 * v49), 0LL);
        LIST_VIEW_SORT = System_Linq_Enumerable__Contains_int_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)OngoingQuestTargetEventIds,
                           v50,
                           (const MethodInfo_1CB57D0 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (LIST_VIEW_SORT & 1) != 0 )
          break;
        LODWORD(v47) = *(_DWORD *)(v48 + 24);
        if ( (__int64)++v49 >= (int)v47 )
          goto LABEL_24;
      }
    }
  }
  LIST_VIEW_SORT = (__int64)*p_sort;
  if ( !*p_sort )
    goto LABEL_305;
  ListViewSort__Load((ListViewSort_o *)LIST_VIEW_SORT, 0LL);
  classButtonControl = this->fields.classButtonControl;
  v52 = (ClassButtonControlComponent_CallbackFunc_o *)sub_B70764(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v52,
    (Il2CppObject *)this,
    Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_305;
  ClassButtonControlComponent__init(classButtonControl, v52, questId, questPhase, 0, 0LL);
  this->fields.isInput = 0;
  v53 = this->fields.classButtonControl;
  LIST_VIEW_SORT = (__int64)FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  }
  if ( !v53 )
    goto LABEL_305;
  ClassButtonControlComponent__setCursor(
    v53,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, OngoingQuestTargetEventIds, v54);
  LIST_VIEW_SORT = (__int64)this->fields.bonusFilterKindButton;
  if ( !LIST_VIEW_SORT )
    goto LABEL_305;
  LIST_VIEW_SORT = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LIST_VIEW_SORT, 0LL);
  if ( !LIST_VIEW_SORT )
    goto LABEL_305;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LIST_VIEW_SORT, this->fields.isBonusFilterEnable, 0LL);
  if ( this->fields.isBonusFilterEnable )
  {
    LIST_VIEW_SORT = (__int64)this->fields.bonusFilterKindLabel;
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    UILabel__set_text((UILabel_o *)LIST_VIEW_SORT, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  this->fields.isRefreshBtnHide = 0;
  LIST_VIEW_SORT = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LIST_VIEW_SORT
    || (LIST_VIEW_SORT = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)LIST_VIEW_SORT,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0 )
  {
LABEL_305:
    sub_B7076C(LIST_VIEW_SORT, v24);
  }
  v55 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)LIST_VIEW_SORT, questId, questPhase, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v215 = v55;
  if ( v55 )
  {
    v56 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v56 + 306) & 1) == 0 )
      sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v57 = **(_QWORD **)(v56 + 192);
    if ( (*(_BYTE *)(v57 + 306) & 1) == 0 )
      sub_B08394(v57);
    LIST_VIEW_SORT = **(_QWORD **)(v57 + 184);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    MasterData_WarQuestSelectionMaster = (NpcFollowerMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)LIST_VIEW_SORT,
                                                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
    LIST_VIEW_SORT = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    LIST_VIEW_SORT = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)LIST_VIEW_SORT,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)LIST_VIEW_SORT,
                          questId,
                          questPhase,
                          0LL);
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    LIST_VIEW_SORT = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    v60 = *(_DWORD *)(LIST_VIEW_SORT + 48);
    LIST_VIEW_SORT = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    v248 = *(_DWORD *)(LIST_VIEW_SORT + 52);
    if ( v8 && v60 >= 1 )
    {
      IsMyServantOrNpcRestriction_34234816 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34234816(v8, v248, 0LL);
      followerClassId = 0;
    }
    else if ( v8 )
    {
      v62 = v60 <= 0;
      IsMyServantOrNpcRestriction_34234816 = 0;
      followerClassId = 0;
      if ( v62 )
      {
        IsMyServantOrNpcRestriction_34234816 = 0;
        followerClassId = QuestRestrictionInfo__IsMyServantOrNpcRestriction(v8, 0LL);
      }
    }
    else
    {
      followerClassId = 0;
      IsMyServantOrNpcRestriction_34234816 = 0;
    }
    v63 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v63 = BalanceConfig_TypeInfo;
    }
    ClassBoardReleaseQuestId = v63->static_fields->ClassBoardReleaseQuestId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_24296868 = CondType__IsQuestClear_24296868(ClassBoardReleaseQuestId, -1, 0, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    LIST_VIEW_SORT = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    if ( !QuestFollowerList )
      goto LABEL_305;
    v66 = *(_QWORD *)&QuestFollowerList->max_length;
    v258 = this;
    v244 = v8;
    if ( (int)v66 >= 1 )
    {
      v67 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)LIST_VIEW_SORT;
      v68 = 0LL;
      v69 = IsQuestClear_24296868;
      m_Items = QuestFollowerList->m_Items;
      v253 = 0;
      isReleasedClassBoard = v69;
      v226 = QuestFollowerList;
      v229 = MasterData_WarQuestSelectionMaster;
      v223 = IsMyServantOrNpcRestriction_34234816;
      v232 = QuestFollowerList->m_Items;
      v235 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)LIST_VIEW_SORT;
      do
      {
        if ( v68 >= (unsigned int)v66 )
          goto LABEL_306;
        v71 = m_Items[v68];
        if ( IsMyServantOrNpcRestriction_34234816 )
        {
          if ( !v8 )
            goto LABEL_305;
          LIST_VIEW_SORT = FollowerInfo__GetReturnTypeByQuestId(v8->fields.questId, 0LL);
          if ( !v71 )
            goto LABEL_305;
          LIST_VIEW_SORT = (__int64)FollowerInfo__getServantLeaderInfo(v71, 0, LIST_VIEW_SORT, 0LL);
          if ( LIST_VIEW_SORT )
          {
            v72 = LIST_VIEW_SORT;
            LIST_VIEW_SORT = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !LIST_VIEW_SORT )
              goto LABEL_305;
            LIST_VIEW_SORT = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)LIST_VIEW_SORT,
                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
            if ( !LIST_VIEW_SORT )
              goto LABEL_305;
            LIST_VIEW_SORT = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)LIST_VIEW_SORT,
                               &entity,
                               v71->fields.npcFollowerSvtId,
                               (const MethodInfo_21C06C4 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
            if ( (LIST_VIEW_SORT & 1) != 0 )
            {
              ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v8->fields.questId, 0LL);
              NpcServantIndividuality = FollowerInfo__GetNpcServantIndividuality(v71, 0, ReturnTypeByQuestId, 0LL);
              goto LABEL_85;
            }
            if ( !v67 )
              goto LABEL_305;
            if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                   v67,
                   &v262,
                   v71->fields.npcFollowerSvtId,
                   (const MethodInfo_21C06C4 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
            {
              LIST_VIEW_SORT = (__int64)v262;
              if ( !v262 )
                goto LABEL_305;
              if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v262, 0LL) )
              {
                LIST_VIEW_SORT = (__int64)v262;
                if ( !v262 )
                  goto LABEL_305;
                NpcServantIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                            (NpcServantFollowerEntity_o *)v262,
                                            0LL);
LABEL_85:
                LIST_VIEW_SORT = QuestRestrictionInfo__IsRestrictionServantIndividuality_34237976(
                                   v8,
                                   NpcServantIndividuality,
                                   v248,
                                   0LL);
                if ( (LIST_VIEW_SORT & 1) != 0 )
                  goto LABEL_145;
                goto LABEL_88;
              }
            }
            v77 = *(_QWORD *)(v72 + 48);
            v76 = *(_QWORD *)(v72 + 56);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v266.fields.currentCryptoKey = v77;
            *(_QWORD *)&v266.fields.fakeValue = v76;
            v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v266, 0LL);
            LIST_VIEW_SORT = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                               v8,
                               v78,
                               *(_DWORD *)(v72 + 64),
                               *(_DWORD *)(v72 + 164),
                               v248,
                               0,
                               0LL);
            m_Items = v232;
            v67 = v235;
            if ( (LIST_VIEW_SORT & 1) != 0 )
              goto LABEL_145;
          }
        }
        else if ( !v71 )
        {
          goto LABEL_305;
        }
LABEL_88:
        if ( !v71->fields.isFixedNpc && (!followerClassId || !v71->fields.isMySvtOrNpc) )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_305;
          if ( NpcFollowerMaster__TryGetEntity(
                 MasterData_WarQuestSelectionMaster,
                 &v265,
                 v71->fields.userId,
                 questId,
                 questPhase,
                 0LL) )
          {
            LIST_VIEW_SORT = (__int64)v265;
            if ( !v265 )
              goto LABEL_305;
            IsRecommendedFollower = NpcFollowerEntity__IsRecommendedFollower(v265, 0LL);
          }
          else
          {
            IsRecommendedFollower = 0;
          }
          v79 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ClassBoardInfo__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v79,
            (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
          if ( !v67 )
            goto LABEL_305;
          LIST_VIEW_SORT = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                             v67,
                             &v264,
                             v71->fields.npcFollowerSvtId,
                             (const MethodInfo_21C06C4 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
          if ( (LIST_VIEW_SORT & 1) != 0 )
          {
            if ( !v264 )
              goto LABEL_305;
            LIST_VIEW_SORT = NpcServantFollowerEntity__IsNotClassBoard(
                               v264->fields.imageLimitCount.fields.fakeValue,
                               0LL);
            if ( (LIST_VIEW_SORT & 1) != 0
              || (LIST_VIEW_SORT = QuestPhaseEntity__IsNotClassBoard(v215, 0LL), (LIST_VIEW_SORT & 1) != 0) )
            {
              v80 = 1;
LABEL_135:
              if ( !v79 )
                goto LABEL_305;
LABEL_136:
              v105 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v79,
                                              (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
              v71->fields.userClassBoardInfo = (struct ClassBoardInfo_array *)v105;
              sub_B70630(
                (BattleServantConfConponent_o *)&v71->fields.userClassBoardInfo,
                v105,
                v106,
                v107,
                v108,
                v109,
                v110,
                v111);
              v112 = FollowerSelectItemListViewManager_TypeInfo;
              if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
                v112 = FollowerSelectItemListViewManager_TypeInfo;
              }
              v113 = this->fields.isBonusFilterEnable;
              v114 = this->fields.isServantBonusFilterEnable;
              v115 = v112->static_fields->followerClassId;
              setupInfo = this->fields.setupInfo;
              v117 = IsRecommendedFollower;
              if ( (v80 & 1) != 0 )
                classBoardMaxDictionary = 0LL;
              else
                classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
              isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
              isServantBonusFilterEnable = v114;
              isBonusFilterEnable = v113;
              v122 = (FollowerSelectItemListViewItem_o *)sub_B70764(FollowerSelectItemListViewItem_TypeInfo);
              FollowerSelectItemListViewItem___ctor(
                v122,
                v253,
                0,
                v71,
                v115,
                friendPointUpVal,
                friendPointUpMaxVal,
                friendPointCampaignEntityList,
                isBonusFilterEnable,
                isServantBonusFilterEnable,
                isServantEquipBonusFilterEnable,
                v117,
                setupInfo,
                v244,
                0,
                0,
                0,
                classBoardMaxDictionary,
                isReleasedClassBoard,
                v204);
              LIST_VIEW_SORT = (__int64)*p_mixItemList;
              if ( !*p_mixItemList )
                goto LABEL_305;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)LIST_VIEW_SORT,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v122,
                (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
              QuestFollowerList = v226;
              MasterData_WarQuestSelectionMaster = v229;
              IsMyServantOrNpcRestriction_34234816 = v223;
              v67 = v235;
              LIST_VIEW_SORT = (__int64)*p_originalItemList;
              if ( !*p_originalItemList )
                goto LABEL_305;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)LIST_VIEW_SORT,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v122,
                (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
              ++v253;
              this = v258;
              v8 = v244;
              m_Items = v232;
              goto LABEL_145;
            }
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            LIST_VIEW_SORT = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( !v8 )
              goto LABEL_305;
            v81 = (ClassBoardClassMaster_o *)LIST_VIEW_SORT;
            v82 = FollowerInfo__GetReturnTypeByQuestId(v8->fields.questId, 0LL);
            ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v71, 0, v82, 0LL);
            LIST_VIEW_SORT = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantMaster___);
            if ( !ServantLeaderInfo )
              goto LABEL_305;
            v84 = (DataMasterBase_WarMaster__WarEntity__int__o *)LIST_VIEW_SORT;
            v85 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
            v86 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v267.fields.currentCryptoKey = v85;
            *(_QWORD *)&v267.fields.fakeValue = v86;
            LIST_VIEW_SORT = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v267, 0LL);
            if ( !v84 )
              goto LABEL_305;
            LIST_VIEW_SORT = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v84,
                                        LIST_VIEW_SORT,
                                        (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !LIST_VIEW_SORT || !v81 )
              goto LABEL_305;
            ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(v81, *(_DWORD *)(LIST_VIEW_SORT + 80), 0LL);
            Master_WarQuestSelectionMaster = (UserClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            LIST_VIEW_SORT = NetworkManager__get_UserId(0LL);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_305;
            LIST_VIEW_SORT = UserClassBoardSquareMaster__TryGetEntity(
                               Master_WarQuestSelectionMaster,
                               &v261,
                               LIST_VIEW_SORT,
                               ClassBoardBaseId,
                               0LL);
            if ( (LIST_VIEW_SORT & 1) != 0 )
            {
              v89 = sub_B70764(ClassBoardInfo_TypeInfo);
              ClassBoardInfo___ctor((ClassBoardInfo_o *)v89, 0LL);
              if ( !v89 )
                goto LABEL_305;
              *(_DWORD *)(v89 + 16) = ClassBoardBaseId;
              if ( !v261 )
                goto LABEL_305;
              LIST_VIEW_SORT = (__int64)v261->fields.classBoardSquareIds;
              if ( !LIST_VIEW_SORT )
                goto LABEL_305;
              v90 = System_Array__Clone((System_Array_o *)LIST_VIEW_SORT, 0LL);
              v91 = (System_Int32_array **)sub_B70754(v90, int___TypeInfo);
              *(_QWORD *)(v89 + 24) = v91;
              sub_B70630((BattleServantConfConponent_o *)(v89 + 24), v91, v92, v93, v94, v95, v96, v97);
              OpenClassIdArrayFromBaseId = (System_Int32_array **)ClassBoardClassMaster__GetOpenClassIdArrayFromBaseId(
                                                                    v81,
                                                                    ClassBoardBaseId,
                                                                    0LL);
              *(_QWORD *)(v89 + 32) = OpenClassIdArrayFromBaseId;
              sub_B70630(
                (BattleServantConfConponent_o *)(v89 + 32),
                OpenClassIdArrayFromBaseId,
                v99,
                v100,
                v101,
                v102,
                v103,
                v104);
              if ( !v79 )
                goto LABEL_305;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v79,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v89,
                (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ClassBoardInfo__Add__);
              v80 = 0;
              goto LABEL_136;
            }
          }
          v80 = 0;
          goto LABEL_135;
        }
LABEL_145:
        LODWORD(v66) = QuestFollowerList->max_length;
        ++v68;
      }
      while ( (__int64)v68 < (int)v66 );
    }
    if ( !v8 || !QuestRestrictionInfo__IsMyServantOrNpcRestriction(v8, 0LL) )
      goto LABEL_155;
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    LIST_VIEW_SORT = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    v123 = *(_DWORD *)(LIST_VIEW_SORT + 48);
    LIST_VIEW_SORT = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    if ( v123 >= 1 )
      v124 = !QuestRestrictionInfo__IsSelectableNormalSupport(v8, *(_DWORD *)(LIST_VIEW_SORT + 52), 0LL);
    else
LABEL_155:
      v124 = 0;
    this->fields.isRefreshBtnHide = v124;
    if ( !v124 && !v215->fields.isNpcOnly )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      LIST_VIEW_SORT = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
      if ( !LIST_VIEW_SORT )
        goto LABEL_305;
      LIST_VIEW_SORT = DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                         (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)LIST_VIEW_SORT,
                         &v260,
                         (const MethodInfo_21C0750 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
      if ( (LIST_VIEW_SORT & 1) != 0 )
      {
        if ( !v260 )
          goto LABEL_305;
        userId = v260->fields.userId;
        if ( userId )
        {
          v126 = *(_DWORD *)(userId + 24);
          if ( v126 >= 1 )
          {
            v127 = 0;
            v216 = (QuestPhaseEntity_o *)v260->fields.userId;
            do
            {
              if ( v127 >= v126 )
                goto LABEL_306;
              v128 = userId + 8LL * (int)v127;
              LIST_VIEW_SORT = *(_QWORD *)(v128 + 32);
              v236 = (FollowerInfo_o **)(v128 + 32);
              if ( !LIST_VIEW_SORT )
                goto LABEL_305;
              FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)LIST_VIEW_SORT, 0LL);
              if ( v127 >= *(_DWORD *)(userId + 24) )
                goto LABEL_306;
              if ( !*v236 )
                goto LABEL_305;
              LIST_VIEW_SORT = (__int64)(*v236)->fields.mainSupportDeckIds;
              if ( !LIST_VIEW_SORT )
                goto LABEL_305;
              v212 = *(_QWORD *)(LIST_VIEW_SORT + 24);
              v129 = System_Array__Clone((System_Array_o *)LIST_VIEW_SORT, 0LL);
              if ( v129 )
              {
                v130 = v129;
                v131 = sub_B70754(v129, int___TypeInfo);
                if ( !v131 )
                {
LABEL_307:
                  sub_B70A60(v130);
                  FollowerSelectItemListViewManager__GetInitialDisplayClass(v196, v197, v198, v199, v200);
                  return;
                }
              }
              else
              {
                v131 = 0LL;
              }
              v132 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v132 = BalanceConfig_TypeInfo;
              }
              static_fields = v132->static_fields;
              FixMainSupportDeckNum = static_fields->FixMainSupportDeckNum;
              FixEventSupportDeckNum = static_fields->FixEventSupportDeckNum;
              if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_Math_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              }
              LIST_VIEW_SORT = System_Math__Max_45601072(FixMainSupportDeckNum, FixEventSupportDeckNum, 0LL);
              v230 = v127;
              v233 = v131;
              if ( (int)v212 <= 0 )
              {
                v224 = (int)v212;
                v227 = (unsigned int *)(v131 + 24);
              }
              else
              {
                v136 = v131;
                v137 = (unsigned int *)(v131 + 24);
                deckPriority = LIST_VIEW_SORT;
                v139 = 0LL;
                v224 = (int)v212;
                v227 = v137;
                v210 = v136 + 32;
                do
                {
                  if ( !*p_originalItemList )
                    goto LABEL_305;
                  if ( v127 >= *(_DWORD *)(userId + 24) )
                    goto LABEL_306;
                  if ( !v233 )
                    goto LABEL_305;
                  if ( v139 >= *v227 )
                    goto LABEL_306;
                  size = (*p_originalItemList)->fields._size;
                  followerClassIdc = this->fields.setupInfo;
                  v140 = this->fields.classBoardMaxDictionary;
                  v141 = *(_DWORD *)(v210 + 4 * v139);
                  v249 = *v236;
                  v142 = this->fields.isServantEquipBonusFilterEnable;
                  v143 = this->fields.isServantBonusFilterEnable;
                  v219 = this->fields.isBonusFilterEnable;
                  v144 = (FollowerSelectItemListViewItem_o *)sub_B70764(FollowerSelectItemListViewItem_TypeInfo);
                  FollowerSelectItemListViewItem___ctor(
                    v144,
                    size,
                    0,
                    v249,
                    0,
                    friendPointUpVal,
                    friendPointUpMaxVal,
                    friendPointCampaignEntityList,
                    v219,
                    v143,
                    v142,
                    0,
                    followerClassIdc,
                    v8,
                    1,
                    v141,
                    deckPriority,
                    v140,
                    1,
                    v204);
                  LIST_VIEW_SORT = (__int64)this->fields.originalItemList;
                  if ( !LIST_VIEW_SORT )
                    goto LABEL_305;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)LIST_VIEW_SORT,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v144,
                    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                  v127 = v230;
                  ++v139;
                  --deckPriority;
                }
                while ( (__int64)v139 < (int)v212 );
                v131 = v233;
              }
              followerClassIda = 0;
              v220 = v131 + 32;
              while ( 1 )
              {
                LIST_VIEW_SORT = (__int64)BalanceConfig_TypeInfo;
                if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  LIST_VIEW_SORT = (__int64)BalanceConfig_TypeInfo;
                }
                v145 = *(struct BalanceConfig_StaticFields **)(LIST_VIEW_SORT + 184);
                if ( followerClassIda >= v145->SupportDeckMemberMax )
                  break;
                if ( (*(_BYTE *)(LIST_VIEW_SORT + 307) & 4) != 0 && !*(_DWORD *)(LIST_VIEW_SORT + 224) )
                {
                  j_il2cpp_runtime_class_init_0(LIST_VIEW_SORT);
                  v145 = BalanceConfig_TypeInfo->static_fields;
                }
                v147 = v145->FixMainSupportDeckNum;
                v146 = v145->FixEventSupportDeckNum;
                if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !System_Math_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                }
                LIST_VIEW_SORT = System_Math__Max_45601072(v147, v146, 0LL);
                if ( (int)v212 >= 1 )
                {
                  v148 = LIST_VIEW_SORT;
                  v149 = 0LL;
                  do
                  {
                    if ( !*p_mixItemList )
                      goto LABEL_305;
                    v150 = (*p_mixItemList)->fields._size;
                    LIST_VIEW_SORT = (__int64)BalanceConfig_TypeInfo;
                    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      LIST_VIEW_SORT = (__int64)BalanceConfig_TypeInfo;
                    }
                    if ( v127 >= *(_DWORD *)(userId + 24) )
                      goto LABEL_306;
                    if ( !v131 )
                      goto LABEL_305;
                    if ( v149 >= *v227 )
                      goto LABEL_306;
                    v250 = this->fields.setupInfo;
                    v255 = *v236;
                    v151 = this->fields.isServantEquipBonusFilterEnable;
                    v152 = *(_DWORD *)(*(_QWORD *)(LIST_VIEW_SORT + 184) + 164LL);
                    v153 = this->fields.isServantBonusFilterEnable;
                    v154 = this->fields.isBonusFilterEnable;
                    classBoardMaxNumDictionary = v258->fields.classBoardMaxDictionary;
                    v8 = v244;
                    supportDeckId = *(_DWORD *)(v220 + 4 * v149);
                    this = v258;
                    v155 = (FollowerSelectItemListViewItem_o *)sub_B70764(FollowerSelectItemListViewItem_TypeInfo);
                    FollowerSelectItemListViewItem___ctor(
                      v155,
                      v150,
                      v152 - followerClassIda,
                      v255,
                      followerClassIda,
                      friendPointUpVal,
                      friendPointUpMaxVal,
                      friendPointCampaignEntityList,
                      v154,
                      v153,
                      v151,
                      0,
                      v250,
                      v244,
                      1,
                      supportDeckId,
                      v148,
                      classBoardMaxNumDictionary,
                      1,
                      v204);
                    LIST_VIEW_SORT = (__int64)v258->fields.mixItemList;
                    if ( !LIST_VIEW_SORT )
                      goto LABEL_305;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)LIST_VIEW_SORT,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v155,
                      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                    userId = (int64_t)v216;
                    v127 = v230;
                    v131 = v233;
                    ++v149;
                    --v148;
                  }
                  while ( (__int64)v149 < v224 );
                }
                ++followerClassIda;
              }
              v126 = *(_DWORD *)(userId + 24);
              ++v127;
            }
            while ( (int)v127 < v126 );
          }
        }
      }
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      LIST_VIEW_SORT = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserFollowerMaster___);
      if ( !LIST_VIEW_SORT )
        goto LABEL_305;
      LIST_VIEW_SORT = DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                         (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)LIST_VIEW_SORT,
                         &v259,
                         (const MethodInfo_21C0750 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
      if ( (LIST_VIEW_SORT & 1) != 0 )
      {
        if ( !v259 )
          goto LABEL_305;
        v156 = v259->fields.userId;
        LIST_VIEW_SORT = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !LIST_VIEW_SORT )
          goto LABEL_305;
        LIST_VIEW_SORT = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)LIST_VIEW_SORT,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !LIST_VIEW_SORT )
          goto LABEL_305;
        LIST_VIEW_SORT = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)LIST_VIEW_SORT,
                                    questId,
                                    (const MethodInfo_21C0440 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !LIST_VIEW_SORT )
          goto LABEL_305;
        questPhaseb = QuestEntity__HasFlag_26076348((QuestEntity_o *)LIST_VIEW_SORT, 0x8000000LL, questPhase, 0LL);
        LIST_VIEW_SORT = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !LIST_VIEW_SORT )
          goto LABEL_305;
        LIST_VIEW_SORT = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)LIST_VIEW_SORT,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserFollowMaster___);
        questIdb = (UserFollowMaster_o *)LIST_VIEW_SORT;
        if ( !v156 )
          goto LABEL_305;
        v157 = *(_QWORD *)(v156 + 24);
        if ( (int)v157 >= 1 )
        {
          v158 = 0LL;
          v211 = 0;
          v217 = (QuestPhaseEntity_o *)v156;
          do
          {
            v157 = (unsigned int)v157;
            if ( questPhaseb )
            {
              if ( v158 >= (unsigned int)v157 )
                goto LABEL_306;
              v159 = *(_QWORD *)(v156 + 8 * v158 + 32);
              if ( !v159 )
                goto LABEL_305;
              if ( *(_DWORD *)(v159 + 36) == 5 )
              {
                LIST_VIEW_SORT = (__int64)questIdb;
                if ( !questIdb )
                  goto LABEL_305;
                LIST_VIEW_SORT = UserFollowMaster__IsFollowUser(questIdb, *(_QWORD *)(v159 + 16), 0LL);
                if ( (LIST_VIEW_SORT & 1) == 0 )
                  goto LABEL_294;
                v157 = *(unsigned int *)(v156 + 24);
              }
            }
            else
            {
              if ( v158 >= (unsigned int)v157 )
                goto LABEL_306;
              v160 = *(_QWORD *)(v156 + 8 * v158 + 32);
              if ( !v160 )
                goto LABEL_305;
              if ( *(_DWORD *)(v160 + 36) == 5 )
                goto LABEL_294;
            }
            if ( v158 >= v157 )
              goto LABEL_306;
            v161 = v156 + 8 * v158;
            LIST_VIEW_SORT = *(_QWORD *)(v161 + 32);
            v237 = (FollowerInfo_o **)(v161 + 32);
            if ( !LIST_VIEW_SORT )
              goto LABEL_305;
            FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)LIST_VIEW_SORT, 0LL);
            LIST_VIEW_SORT = sub_B706AC(int___TypeInfo, 0LL);
            if ( v158 >= *(unsigned int *)(v156 + 24) )
              goto LABEL_306;
            v162 = *v237;
            if ( !*v237 )
              goto LABEL_305;
            if ( arg )
            {
              LIST_VIEW_SORT = (__int64)v162->fields.eventSupportDeckIds;
              if ( !LIST_VIEW_SORT )
                goto LABEL_305;
            }
            else
            {
              LIST_VIEW_SORT = (__int64)v162->fields.mainSupportDeckIds;
              if ( !LIST_VIEW_SORT )
                goto LABEL_305;
            }
            v213 = *(_QWORD *)(LIST_VIEW_SORT + 24);
            v163 = System_Array__Clone((System_Array_o *)LIST_VIEW_SORT, 0LL);
            if ( v163 )
            {
              v130 = v163;
              v164 = sub_B70754(v163, int___TypeInfo);
              if ( !v164 )
                goto LABEL_307;
            }
            else
            {
              v164 = 0LL;
            }
            v165 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v165 = BalanceConfig_TypeInfo;
            }
            v166 = v165->static_fields;
            v168 = v166->FixMainSupportDeckNum;
            v167 = v166->FixEventSupportDeckNum;
            if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Math_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            }
            LIST_VIEW_SORT = System_Math__Max_45601072(v168, v167, 0LL);
            v231 = v164;
            v234 = v158;
            if ( (int)v213 > 0 )
            {
              v169 = LIST_VIEW_SORT;
              v170 = 0LL;
              v225 = (int)v213;
              v228 = (unsigned int *)(v164 + 24);
              v221 = v164 + 32;
              while ( 1 )
              {
                if ( !*p_originalItemList )
                  goto LABEL_305;
                if ( v158 >= *(unsigned int *)(v156 + 24) )
                  break;
                if ( !v164 )
                  goto LABEL_305;
                if ( v170 >= *v228 )
                  break;
                v256 = (*p_originalItemList)->fields._size;
                followerClassIdd = this->fields.setupInfo;
                v171 = this->fields.classBoardMaxDictionary;
                v172 = *(_DWORD *)(v221 + 4 * v170);
                v251 = *v237;
                v173 = this->fields.isServantEquipBonusFilterEnable;
                v174 = this->fields.isServantBonusFilterEnable;
                v175 = this->fields.isBonusFilterEnable;
                v176 = (FollowerSelectItemListViewItem_o *)sub_B70764(FollowerSelectItemListViewItem_TypeInfo);
                FollowerSelectItemListViewItem___ctor(
                  v176,
                  v256,
                  0,
                  v251,
                  0,
                  friendPointUpVal,
                  friendPointUpMaxVal,
                  friendPointCampaignEntityList,
                  v175,
                  v174,
                  v173,
                  0,
                  followerClassIdd,
                  v244,
                  0,
                  v172,
                  v169,
                  v171,
                  1,
                  v204);
                LIST_VIEW_SORT = (__int64)this->fields.originalItemList;
                if ( !LIST_VIEW_SORT )
                  goto LABEL_305;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)LIST_VIEW_SORT,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v176,
                  (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                v164 = v231;
                v158 = v234;
                ++v170;
                --v169;
                if ( (__int64)v170 >= (int)v213 )
                  goto LABEL_267;
              }
LABEL_306:
              v195 = sub_B70798(LIST_VIEW_SORT);
              sub_B70738(v195, 0LL);
            }
            v225 = (int)v213;
            v228 = (unsigned int *)(v164 + 24);
LABEL_267:
            followerClassIdb = 0;
            v222 = v164 + 32;
            while ( 1 )
            {
              LIST_VIEW_SORT = (__int64)BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                LIST_VIEW_SORT = (__int64)BalanceConfig_TypeInfo;
              }
              v177 = *(struct BalanceConfig_StaticFields **)(LIST_VIEW_SORT + 184);
              if ( followerClassIdb >= v177->SupportDeckMemberMax )
                break;
              if ( (*(_BYTE *)(LIST_VIEW_SORT + 307) & 4) != 0 && !*(_DWORD *)(LIST_VIEW_SORT + 224) )
              {
                j_il2cpp_runtime_class_init_0(LIST_VIEW_SORT);
                v177 = BalanceConfig_TypeInfo->static_fields;
              }
              v179 = v177->FixMainSupportDeckNum;
              v178 = v177->FixEventSupportDeckNum;
              if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_Math_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              }
              LIST_VIEW_SORT = System_Math__Max_45601072(v179, v178, 0LL);
              if ( (int)v213 >= 1 )
              {
                v180 = LIST_VIEW_SORT;
                v181 = 0LL;
                while ( *p_mixItemList )
                {
                  v182 = (*p_mixItemList)->fields._size;
                  LIST_VIEW_SORT = (__int64)BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    LIST_VIEW_SORT = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( v158 >= *(unsigned int *)(v156 + 24) )
                    goto LABEL_306;
                  if ( !v164 )
                    goto LABEL_305;
                  if ( v181 >= *v228 )
                    goto LABEL_306;
                  v252 = this->fields.setupInfo;
                  v257 = *v237;
                  v183 = this->fields.isServantEquipBonusFilterEnable;
                  v184 = v258->fields.classBoardMaxDictionary;
                  v185 = *(_DWORD *)(*(_QWORD *)(LIST_VIEW_SORT + 184) + 164LL);
                  v186 = this->fields.isServantBonusFilterEnable;
                  v187 = v182;
                  v188 = this->fields.isBonusFilterEnable;
                  supportDeckIda = *(_DWORD *)(v222 + 4 * v181);
                  this = v258;
                  v189 = (FollowerSelectItemListViewItem_o *)sub_B70764(FollowerSelectItemListViewItem_TypeInfo);
                  FollowerSelectItemListViewItem___ctor(
                    v189,
                    v187,
                    v185 - followerClassIdb,
                    v257,
                    followerClassIdb,
                    friendPointUpVal,
                    friendPointUpMaxVal,
                    friendPointCampaignEntityList,
                    v188,
                    v186,
                    v183,
                    0,
                    v252,
                    v244,
                    0,
                    supportDeckIda,
                    v180,
                    v184,
                    1,
                    v204);
                  LIST_VIEW_SORT = (__int64)v258->fields.mixItemList;
                  if ( !LIST_VIEW_SORT )
                    goto LABEL_305;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)LIST_VIEW_SORT,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v189,
                    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                  v156 = (int64_t)v217;
                  v164 = v231;
                  v158 = v234;
                  ++v181;
                  --v180;
                  if ( (__int64)v181 >= v225 )
                    goto LABEL_285;
                }
                goto LABEL_305;
              }
LABEL_285:
              ++followerClassIdb;
            }
            ++v211;
            if ( (*(_BYTE *)(LIST_VIEW_SORT + 307) & 4) != 0 && !*(_DWORD *)(LIST_VIEW_SORT + 224) )
            {
              j_il2cpp_runtime_class_init_0(LIST_VIEW_SORT);
              v177 = BalanceConfig_TypeInfo->static_fields;
            }
            if ( v211 >= v177->SupportListMax )
              break;
LABEL_294:
            LODWORD(v157) = *(_DWORD *)(v156 + 24);
            ++v158;
          }
          while ( (__int64)v158 < (int)v157 );
        }
      }
    }
  }
  LIST_VIEW_SORT = (__int64)this->fields.refreshButtonObject;
  if ( !LIST_VIEW_SORT )
    goto LABEL_305;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LIST_VIEW_SORT, !this->fields.isRefreshBtnHide, 0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LIST_VIEW_SORT = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12046/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_305;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)LIST_VIEW_SORT, 0LL);
  v192 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v192 = FollowerSelectItemListViewManager_TypeInfo;
  }
  FollowerSelectItemListViewManager__SortClass(this, v192->static_fields->followerClassId, v191);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  FollowerSelectItemListViewManager__SetFilterButtonImage(this, v193);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_305;
  BYTE2(scrollView->fields.scrollWheelFactor) = 1;
}


void __fastcall FollowerSelectItemListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewManager_c *v2; // x0
  System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x0

  if ( (byte_4355372 & 1) == 0 )
  {
    sub_B70694(&FollowerSelectItemListViewManager_TypeInfo);
    sub_B70694(&Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__);
    sub_B70694(&StringLiteral_6825/*"FollowerSelectClass"*/);
    byte_4355372 = 1;
  }
  v2 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v2 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v2->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT
    || (LIST_VIEW_SORT = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort___Invoke(
                                                                                                 LIST_VIEW_SORT,
                                                                                                 1,
                                                                                                 (const MethodInfo_29A90B4 *)Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__)) == 0LL
    || (ListViewSort__DeleteContinueData((ListViewSort_o *)LIST_VIEW_SORT, 0LL),
        (LIST_VIEW_SORT = FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT) == 0LL)
    || (LIST_VIEW_SORT = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort___Invoke(
                                                                                                 LIST_VIEW_SORT,
                                                                                                 0,
                                                                                                 (const MethodInfo_29A90B4 *)Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__)) == 0LL )
  {
    sub_B7076C(LIST_VIEW_SORT, v1);
  }
  ListViewSort__DeleteContinueData((ListViewSort_o *)LIST_VIEW_SORT, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6825/*"FollowerSelectClass"*/, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FollowerSelectItemListViewManager__DestroyList_31657956(this, 0LL, v2);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList_31657956(
        FollowerSelectItemListViewManager_o *this,
        BattleSetupInfo_o *battleSetupInfo,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x1
  int32_t ReturnTypeByQuestId; // w20
  FollowerSelectItemListViewManager_c *v12; // x8
  System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x0
  struct ListViewSort_o *v14; // x0
  struct ListViewSort_o **p_sort; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x4
  System_Int32_array *OngoingQuestTargetEventIds; // x0
  int32_t questId; // w21
  int32_t questPhase; // w22
  System_Int32_array *v26; // x23
  EventUpValSetupInfo_o *v27; // x24
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  FollowerSelectItemListViewManager_o *v46; // x0
  int monitor; // w21
  FollowerSelectItemListViewManager_c *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  ClassButtonControlComponent_o *classButtonControl; // x20
  ClassButtonControlComponent_CallbackFunc_o *v56; // x21
  ClassButtonControlComponent_o *v57; // x20
  const MethodInfo *v58; // x2
  struct EventUpValSetupInfo_o *setupInfo; // x8
  System_Int32_array *v60; // x1
  UILabel_o *bonusFilterKindLabel; // x20

  if ( (byte_435537F & 1) == 0 )
  {
    sub_B70694(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&EventUpValSetupInfo_TypeInfo);
    sub_B70694(&Method_FollowerSelectItemListViewManager_OnChangeClass__);
    sub_B70694(&FollowerSelectItemListViewManager_TypeInfo);
    sub_B70694(&Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_11949/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/);
    sub_B70694(&StringLiteral_6825/*"FollowerSelectClass"*/);
    byte_435537F = 1;
  }
  if ( battleSetupInfo )
  {
    this->fields.questId = BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
    this->fields.questPhase = battleSetupInfo->fields.questPhase;
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(battleSetupInfo->fields.questId, 0LL);
    v12 = FollowerSelectItemListViewManager_TypeInfo;
    if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v12 = FollowerSelectItemListViewManager_TypeInfo;
    }
    LIST_VIEW_SORT = v12->static_fields->LIST_VIEW_SORT;
    if ( !LIST_VIEW_SORT )
      goto LABEL_47;
    v14 = System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort___Invoke(
            LIST_VIEW_SORT,
            ReturnTypeByQuestId,
            (const MethodInfo_29A90B4 *)Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__);
    this->fields.sort = v14;
    p_sort = &this->fields.sort;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.sort,
      (System_Int32_array **)v14,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    if ( !this->fields.sort )
      goto LABEL_47;
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                                                                                   this,
                                                                                   this->fields.questId,
                                                                                   this->fields.questPhase,
                                                                                   this->fields.sort->fields.isRequestLoad,
                                                                                   v22);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    LIST_VIEW_SORT = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventQuestMaster___);
    if ( !LIST_VIEW_SORT )
      goto LABEL_47;
    OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                   (EventQuestMaster_o *)LIST_VIEW_SORT,
                                   this->fields.questId,
                                   this->fields.questPhase,
                                   0LL,
                                   0LL);
    questId = this->fields.questId;
    questPhase = this->fields.questPhase;
    v26 = OngoingQuestTargetEventIds;
    v27 = (EventUpValSetupInfo_o *)sub_B70764(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_23742548(v27, v26, 0, questId, questPhase, 0LL);
    this->fields.setupInfo = v27;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.setupInfo,
      (System_Int32_array **)v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  else
  {
    this->fields.setupInfo = 0LL;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.setupInfo,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    p_sort = &this->fields.sort;
  }
  this->fields.questRestrictionInfo = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v34, v35, v36, v37, v38, v39);
  LIST_VIEW_SORT = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)this->fields.sort;
  if ( !LIST_VIEW_SORT )
    goto LABEL_47;
  ListViewSort__Load((ListViewSort_o *)LIST_VIEW_SORT, 0LL);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  LIST_VIEW_SORT = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)this->fields.sort;
  if ( !LIST_VIEW_SORT )
    goto LABEL_47;
  ListViewSort__Save((ListViewSort_o *)LIST_VIEW_SORT, 0LL);
  if ( !*p_sort )
    goto LABEL_47;
  if ( (*p_sort)->fields.isRequestSave )
  {
    v46 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v46 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor = (int)v46->fields.itemList->monitor;
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(v46, v10) )
    {
      v48 = FollowerSelectItemListViewManager_TypeInfo;
      if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v48 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6825/*"FollowerSelectClass"*/, v48->static_fields->followerClassId, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
  this->fields.originalItemList = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.originalItemList, 0LL, v40, v41, v42, v43, v44, v45);
  this->fields.mixItemList = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.mixItemList, 0LL, v49, v50, v51, v52, v53, v54);
  classButtonControl = this->fields.classButtonControl;
  v56 = (ClassButtonControlComponent_CallbackFunc_o *)sub_B70764(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v56,
    (Il2CppObject *)this,
    Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_47;
  ClassButtonControlComponent__init(classButtonControl, v56, this->fields.questId, this->fields.questPhase, 0, 0LL);
  this->fields.isInput = 0;
  v57 = this->fields.classButtonControl;
  LIST_VIEW_SORT = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  }
  if ( !v57 )
    goto LABEL_47;
  ClassButtonControlComponent__setCursor(
    v57,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  setupInfo = this->fields.setupInfo;
  v60 = setupInfo ? setupInfo->fields.eventIdList : (System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, v60, v58);
  LIST_VIEW_SORT = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)this->fields.bonusFilterKindButton;
  if ( !LIST_VIEW_SORT )
    goto LABEL_47;
  LIST_VIEW_SORT = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)UnityEngine_Component__get_gameObject(
                                                                                           (UnityEngine_Component_o *)LIST_VIEW_SORT,
                                                                                           0LL);
  if ( !LIST_VIEW_SORT )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LIST_VIEW_SORT, this->fields.isBonusFilterEnable, 0LL);
  if ( this->fields.isBonusFilterEnable )
  {
    bonusFilterKindLabel = this->fields.bonusFilterKindLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    LIST_VIEW_SORT = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)LocalizationManager__Get(
                                                                                             (System_String_o *)StringLiteral_11949/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/,
                                                                                             0LL);
    if ( bonusFilterKindLabel )
    {
      UILabel__set_text(bonusFilterKindLabel, (System_String_o *)LIST_VIEW_SORT, 0LL);
      goto LABEL_43;
    }
LABEL_47:
    sub_B7076C(LIST_VIEW_SORT, v10);
  }
LABEL_43:
  LIST_VIEW_SORT = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)this->fields.tutorialListViewObject;
  if ( !LIST_VIEW_SORT )
    goto LABEL_47;
  ((void (__fastcall *)(System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *, Il2CppMethodPointer))LIST_VIEW_SORT->klass->vtable._4_unknown.method)(
    LIST_VIEW_SORT,
    LIST_VIEW_SORT->klass->vtable._5_unknown.methodPtr);
  LIST_VIEW_SORT = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)this->fields.tutorialListViewObject;
  if ( !LIST_VIEW_SORT )
    goto LABEL_47;
  LIST_VIEW_SORT = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)UnityEngine_Component__get_gameObject(
                                                                                           (UnityEngine_Component_o *)LIST_VIEW_SORT,
                                                                                           0LL);
  if ( !LIST_VIEW_SORT )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LIST_VIEW_SORT, 0, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__EndClassCompatibilityMenu(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_435538C & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_435538C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v3);
  CommonUI__CloseClassCompatibilityMenu(Instance, 0LL, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__EndCloseClassBoardEffectListDialog(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_435539C & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_435539C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  CommonUI__CloseClassBoardEffectListDialog(Instance, 0LL, 0LL);
  this->fields.isInput = 1;
}


void __fastcall FollowerSelectItemListViewManager__EndCloseSelectBonusFilterKind(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall FollowerSelectItemListViewManager__EndSelectBonusFilterKind(
        FollowerSelectItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  ListViewSort_o *sort; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v9; // x21

  if ( (byte_435538E & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_435538E = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    FollowerSelectItemListViewManager__SetFilterButtonImage(this, v5);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_8;
    ListViewSort__Save(sort, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__,
    0LL);
  if ( !Instance )
LABEL_8:
    sub_B7076C(sort, v6);
  CommonUI__CloseServantBonusFilterSelectMenu(Instance, v9, 0LL);
}


int32_t __fastcall FollowerSelectItemListViewManager__GetAdvantageClassId(
        FollowerSelectItemListViewManager_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t defaultValue,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v11; // x20
  int32_t result; // w0
  struct System_Int32_array *classIds; // x8
  struct System_Int32_array *v14; // x8
  WarEntity_o *v15; // x8
  __int64 v16; // x0

  if ( (byte_435537C & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B70694(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435537C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_17;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  if ( !Entity )
    return defaultValue;
  v11 = Entity;
  result = QuestPhaseEntity__GetAdvantageClassId(Entity, 0LL);
  if ( result != -1 )
    return result;
  classIds = v11->fields.classIds;
  if ( !classIds || !*(_QWORD *)&classIds->max_length )
    return defaultValue;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v14 = v11->fields.classIds;
  if ( !v14 )
    goto LABEL_17;
  if ( !v14->max_length )
  {
    v16 = sub_B70798(Instance);
    sub_B70738(v16, 0LL);
  }
  if ( !Instance )
LABEL_17:
    sub_B7076C(Instance, v9);
  v15 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          v14->m_Items[1],
          (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  result = defaultValue;
  if ( v15 )
    return *(&v15->fields.flag + 1);
  return result;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_c *v2; // x0

  if ( (byte_4355383 & 1) == 0 )
  {
    sub_B70694(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4355383 = 1;
  }
  v2 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v2 = FollowerSelectItemListViewManager_TypeInfo;
  }
  return v2->static_fields->followerClassId;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetDisplayItemNum(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8

  if ( (byte_435539D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_435539D = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( itemSortList )
    return itemSortList->fields._size;
  else
    return 0;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetDisplaySkill(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.displaySkill;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerSelectItemListViewManager__GetInitialDisplayClass(
        FollowerSelectItemListViewManager_o *this,
        int32_t questId,
        int32_t questPhase,
        bool isInitialize,
        const MethodInfo *method)
{
  int32_t PlayerPrefsFollowerClassId; // w21
  FollowerSelectItemListViewManager_c *v9; // x0
  _BOOL8 AdvantageClassAuto; // x0
  const MethodInfo *v11; // x3
  int32_t AdvantageClassId; // w22
  _BOOL8 IsSameQuestAndPhase; // x0
  const MethodInfo *v14; // x4

  if ( (byte_435537A & 1) == 0 )
  {
    sub_B70694(&FollowerSelectItemListViewManager_TypeInfo);
    this = (FollowerSelectItemListViewManager_o *)sub_B70694(&OptionManager_TypeInfo);
    byte_435537A = 1;
  }
  if ( isInitialize )
  {
    PlayerPrefsFollowerClassId = FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(
                                   this,
                                   *(const MethodInfo **)&questId);
  }
  else
  {
    v9 = FollowerSelectItemListViewManager_TypeInfo;
    if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v9 = FollowerSelectItemListViewManager_TypeInfo;
    }
    PlayerPrefsFollowerClassId = v9->static_fields->followerClassId;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  AdvantageClassAuto = OptionManager__GetAdvantageClassAuto(0LL);
  AdvantageClassId = PlayerPrefsFollowerClassId;
  if ( AdvantageClassAuto )
  {
    IsSameQuestAndPhase = FollowerSelectItemListViewManager__IsSameQuestAndPhase(
                            (FollowerSelectItemListViewManager_o *)AdvantageClassAuto,
                            questId,
                            questPhase,
                            v11);
    AdvantageClassId = PlayerPrefsFollowerClassId;
    if ( !IsSameQuestAndPhase )
      AdvantageClassId = FollowerSelectItemListViewManager__GetAdvantageClassId(
                           (FollowerSelectItemListViewManager_o *)IsSameQuestAndPhase,
                           questId,
                           questPhase,
                           PlayerPrefsFollowerClassId,
                           v14);
  }
  if ( ServantClassEntity__IsValidClassOnSellectSupport(AdvantageClassId, 0LL) )
    return AdvantageClassId;
  else
    return PlayerPrefsFollowerClassId;
}


FollowerSelectItemListViewItem_o *__fastcall FollowerSelectItemListViewManager__GetItem(
        FollowerSelectItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_4355381 & 1) == 0 )
  {
    sub_B70694(&FollowerSelectItemListViewItem_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4355381 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (FollowerSelectItemListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == FollowerSelectItemListViewItem_TypeInfo )
    return (FollowerSelectItemListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetItemCount(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *mixItemList; // x8

  if ( (byte_4355398 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4355398 = 1;
  }
  mixItemList = this->fields.mixItemList;
  if ( mixItemList )
    return mixItemList->fields._size;
  else
    return 0;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetItemIndex(
        FollowerSelectItemListViewManager_o *this,
        int64_t userId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *v6; // x21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v8; // x22
  __int64 v9; // x10
  struct UnityEngine_GameObject_o *dragParentObject; // x8

  v6 = this;
  if ( (byte_4355399 & 1) == 0 )
  {
    sub_B70694(&FollowerSelectItemListViewItem_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (FollowerSelectItemListViewManager_o *)sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4355399 = 1;
  }
  itemList = v6->fields.itemList;
  if ( !itemList )
LABEL_17:
    sub_B7076C(this, userId);
  v8 = 0LL;
  while ( (__int64)v8 < itemList->fields._size )
  {
    if ( v8 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    this = (FollowerSelectItemListViewManager_o *)itemList->fields._items->m_Items[v8];
    if ( this )
    {
      v9 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (FollowerSelectItemListViewItem_c *)this->klass->_2.typeHierarchy[v9 - 1] == FollowerSelectItemListViewItem_TypeInfo )
      {
        dragParentObject = this->fields.dragParentObject;
        if ( dragParentObject )
          dragParentObject = *(struct UnityEngine_GameObject_o **)&dragParentObject->fields.m_CachedPtr;
        if ( dragParentObject == (struct UnityEngine_GameObject_o *)userId )
        {
          this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                          (FollowerSelectItemListViewItem_o *)this,
                                                          (const MethodInfo *)userId);
          if ( !this )
            goto LABEL_17;
          if ( this->fields.emptyMessageBase == (struct UnityEngine_GameObject_o *)userSvtId )
            return v8;
        }
      }
    }
    itemList = v6->fields.itemList;
    ++v8;
    if ( !itemList )
      goto LABEL_17;
  }
  LODWORD(v8) = 0;
  return v8;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetItemIndex_31668824(
        FollowerSelectItemListViewManager_o *this,
        int64_t userId,
        int32_t classId,
        int32_t deckId,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *v8; // x22
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  unsigned __int64 v10; // x23
  ListViewItem_o *v11; // x8
  __int64 v12; // x11
  ListViewItem_c *klass; // x9
  int monitor_high; // w9

  v8 = this;
  if ( (byte_435539A & 1) == 0 )
  {
    sub_B70694(&FollowerSelectItemListViewItem_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (FollowerSelectItemListViewManager_o *)sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_435539A = 1;
  }
  itemList = v8->fields.itemList;
  if ( !itemList )
LABEL_19:
    sub_B7076C(this, userId);
  v10 = 0LL;
  while ( (__int64)v10 < itemList->fields._size )
  {
    if ( v10 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v11 = itemList->fields._items->m_Items[v10];
    if ( v11 )
    {
      v12 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) >= (unsigned int)v12
        && (FollowerSelectItemListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] == FollowerSelectItemListViewItem_TypeInfo )
      {
        klass = v11[1].klass;
        if ( klass )
          klass = (ListViewItem_c *)klass->_1.name;
        if ( klass == (ListViewItem_c *)userId )
        {
          monitor_high = HIDWORD(v11[1].monitor);
          if ( monitor_high )
            monitor_high = (int)v11[1].monitor;
          if ( monitor_high == classId && HIDWORD(v11[2].fields.sortValue0) == deckId )
            return v10;
        }
      }
    }
    itemList = v8->fields.itemList;
    ++v10;
    if ( !itemList )
      goto LABEL_19;
  }
  LODWORD(v10) = -1;
  return v10;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_435537D & 1) == 0 )
  {
    sub_B70694(&StringLiteral_6825/*"FollowerSelectClass"*/);
    byte_435537D = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6825/*"FollowerSelectClass"*/, 0, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewManager_c *v2; // x0
  System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x0

  if ( (byte_4355373 & 1) == 0 )
  {
    sub_B70694(&FollowerSelectItemListViewManager_TypeInfo);
    sub_B70694(&Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__);
    byte_4355373 = 1;
  }
  v2 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v2 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v2->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT
    || (LIST_VIEW_SORT = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort___Invoke(
                                                                                                 LIST_VIEW_SORT,
                                                                                                 1,
                                                                                                 (const MethodInfo_29A90B4 *)Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__)) == 0LL
    || (ListViewSort__InitLoad((ListViewSort_o *)LIST_VIEW_SORT, 0LL),
        (LIST_VIEW_SORT = FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT) == 0LL)
    || (LIST_VIEW_SORT = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort___Invoke(
                                                                                                 LIST_VIEW_SORT,
                                                                                                 0,
                                                                                                 (const MethodInfo_29A90B4 *)Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__)) == 0LL )
  {
    sub_B7076C(LIST_VIEW_SORT, v1);
  }
  ListViewSort__InitLoad((ListViewSort_o *)LIST_VIEW_SORT, 0LL);
}


bool __fastcall FollowerSelectItemListViewManager__IsSameQuestAndPhase(
        FollowerSelectItemListViewManager_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_c *v6; // x0
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
  struct FollowerSelectItemListViewManager_StaticFields *v8; // x8

  if ( (byte_435537B & 1) == 0 )
  {
    sub_B70694(&BattleData_TypeInfo);
    sub_B70694(&FollowerSelectItemListViewManager_TypeInfo);
    byte_435537B = 1;
  }
  v6 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v6 = FollowerSelectItemListViewManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  if ( static_fields->lastSelectedQuestId == -1 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = FollowerSelectItemListViewManager_TypeInfo;
      static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
    }
    if ( static_fields->lastSelectedQuestPhase == -1 )
    {
      if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      if ( BattleData__getSavedQuestId(0LL) == questId )
      {
        if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleData_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
        }
        return BattleData__getSavedQuestPhase(0LL) == questPhase;
      }
      return 0;
    }
  }
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = FollowerSelectItemListViewManager_TypeInfo;
  }
  v8 = v6->static_fields;
  if ( v8->lastSelectedQuestId != questId )
    return 0;
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v8 = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  }
  return v8->lastSelectedQuestPhase == questPhase;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__ModifyList(
        FollowerSelectItemListViewManager_o *this,
        int32_t friendPointUpVal,
        int32_t friendPointUpMaxVal,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *v6; // x21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  unsigned __int64 v9; // x23
  ListViewItem_o *v10; // x8
  __int64 v11; // x11
  __int64 v12; // x11
  FollowerSelectItemListViewItem_o *v13; // x0
  FollowerSelectItemListViewManager_c *v14; // x0
  int32_t followerClassId; // w22
  const MethodInfo *v16; // x3
  struct System_Collections_Generic_List_ListViewItem__o *originalItemList; // x25
  signed __int64 v18; // x22
  unsigned __int64 v19; // x23
  ListViewItem_o *v20; // x8
  __int64 v21; // x11
  __int64 v22; // x11
  FollowerSelectItemListViewItem_o *v23; // x0
  struct System_Collections_Generic_List_ListViewItem__o *mixItemList; // x25
  signed __int64 v25; // x22
  unsigned __int64 v26; // x23
  ListViewItem_o *v27; // x8
  __int64 v28; // x11
  __int64 v29; // x11
  FollowerSelectItemListViewItem_o *v30; // x0

  v6 = this;
  if ( (byte_435537E & 1) == 0 )
  {
    sub_B70694(&ClassButtonControlComponent_TypeInfo);
    sub_B70694(&FollowerSelectItemListViewItem_TypeInfo);
    sub_B70694(&FollowerSelectItemListViewManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (FollowerSelectItemListViewManager_o *)sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_435537E = 1;
  }
  itemList = v6->fields.itemList;
  if ( !itemList )
    goto LABEL_57;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v10 = itemList->fields._items->m_Items[v9];
      if ( !v10 )
        break;
      v11 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11
        || (FollowerSelectItemListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] != FollowerSelectItemListViewItem_TypeInfo )
      {
        break;
      }
      v12 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v12 )
      {
        if ( (FollowerSelectItemListViewItem_c *)v10->klass->_2.typeHierarchy[v12 - 1] == FollowerSelectItemListViewItem_TypeInfo )
          v13 = (FollowerSelectItemListViewItem_o *)itemList->fields._items->m_Items[v9];
        else
          v13 = 0LL;
      }
      else
      {
        v13 = 0LL;
      }
      FollowerSelectItemListViewItem__Modify(v13, friendPointUpVal, friendPointUpMaxVal, method);
      if ( (__int64)++v9 >= size )
        goto LABEL_19;
      itemList = v6->fields.itemList;
    }
    while ( itemList );
LABEL_57:
    sub_B7076C(this, *(_QWORD *)&friendPointUpVal);
  }
LABEL_19:
  v14 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v14 = FollowerSelectItemListViewManager_TypeInfo;
  }
  followerClassId = v14->static_fields->followerClassId;
  if ( (BYTE3(ClassButtonControlComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  }
  this = (FollowerSelectItemListViewManager_o *)ClassButtonControlComponent__IsMixSupportGroupType(followerClassId, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    originalItemList = v6->fields.originalItemList;
    if ( !originalItemList )
      goto LABEL_57;
    v18 = originalItemList->fields._size;
    if ( (int)v18 >= 1 )
    {
      v19 = 0LL;
      while ( 1 )
      {
        if ( v19 >= (unsigned int)originalItemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v20 = originalItemList->fields._items->m_Items[v19];
        if ( !v20 )
          goto LABEL_57;
        v21 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v21
          || (FollowerSelectItemListViewItem_c *)v20->klass->_2.typeHierarchy[v21 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          goto LABEL_57;
        }
        v22 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v20->klass->_2.bitflags2 + 1) >= (unsigned int)v22 )
        {
          if ( (FollowerSelectItemListViewItem_c *)v20->klass->_2.typeHierarchy[v22 - 1] == FollowerSelectItemListViewItem_TypeInfo )
            v23 = (FollowerSelectItemListViewItem_o *)originalItemList->fields._items->m_Items[v19];
          else
            v23 = 0LL;
        }
        else
        {
          v23 = 0LL;
        }
        FollowerSelectItemListViewItem__Modify(v23, friendPointUpVal, friendPointUpMaxVal, v16);
        if ( (__int64)++v19 >= v18 )
          return;
        originalItemList = v6->fields.originalItemList;
        if ( !originalItemList )
          goto LABEL_57;
      }
    }
  }
  else
  {
    mixItemList = v6->fields.mixItemList;
    if ( !mixItemList )
      goto LABEL_57;
    v25 = mixItemList->fields._size;
    if ( (int)v25 >= 1 )
    {
      v26 = 0LL;
      while ( 1 )
      {
        if ( v26 >= (unsigned int)mixItemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v27 = mixItemList->fields._items->m_Items[v26];
        if ( !v27 )
          goto LABEL_57;
        v28 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
          || (FollowerSelectItemListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          goto LABEL_57;
        }
        v29 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v27->klass->_2.bitflags2 + 1) >= (unsigned int)v29 )
        {
          if ( (FollowerSelectItemListViewItem_c *)v27->klass->_2.typeHierarchy[v29 - 1] == FollowerSelectItemListViewItem_TypeInfo )
            v30 = (FollowerSelectItemListViewItem_o *)mixItemList->fields._items->m_Items[v26];
          else
            v30 = 0LL;
        }
        else
        {
          v30 = 0LL;
        }
        FollowerSelectItemListViewItem__Modify(v30, friendPointUpVal, friendPointUpMaxVal, v16);
        if ( (__int64)++v26 >= v25 )
          return;
        mixItemList = v6->fields.mixItemList;
        if ( !mixItemList )
          goto LABEL_57;
      }
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OnChangeClass(
        FollowerSelectItemListViewManager_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( (byte_4355394 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4355394 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    FollowerSelectItemListViewManager__SortClass(this, classPos, v5);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickBonusFilterKind(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  _BOOL4 isServantBonusFilterEnable; // w24
  _BOOL4 isServantEquipBonusFilterEnable; // w25
  System_Int32_array *equipBonusFilterEventIds; // x20
  ListViewSort_o *sort; // x21
  CommonUI_o *v8; // x22
  ServantBonusFilterSelectMenu_CallbackFunc_o *v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_435538D & 1) == 0 )
  {
    sub_B70694(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_435538D = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
    isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
    equipBonusFilterEventIds = this->fields.equipBonusFilterEventIds;
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantBonusFilterSelectMenu_CallbackFunc_o *)sub_B70764(ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantBonusFilterSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__,
      0LL);
    if ( !v8 )
      sub_B7076C(v10, v11);
    CommonUI__OpenServantBonusFilterSelectMenu(
      v8,
      0,
      isServantBonusFilterEnable,
      isServantEquipBonusFilterEnable,
      equipBonusFilterEventIds,
      sort,
      v9,
      0LL);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickChangeSkill(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 displaySkill; // x8
  System_Collections_Generic_List_FollowerSelectItemListViewObject__o *ObjectList; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int size; // w8
  System_Collections_Generic_List_FollowerSelectItemListViewObject__o *v9; // x20
  unsigned int v10; // w21

  if ( (byte_4355397 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4355397 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    displaySkill = this->fields.displaySkill;
    if ( (unsigned int)displaySkill <= 2 )
      this->fields.displaySkill = dword_32FCCB8[displaySkill];
    ObjectList = FollowerSelectItemListViewManager__get_ObjectList(this, v3);
    if ( !ObjectList )
      goto LABEL_17;
    size = ObjectList->fields._size;
    v9 = ObjectList;
    if ( size >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( size <= v10 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        ObjectList = (System_Collections_Generic_List_FollowerSelectItemListViewObject__o *)v9->fields._items->m_Items[v10];
        if ( !ObjectList )
          break;
        FollowerSelectItemListViewObject__ChangeDisplaySkill(
          (FollowerSelectItemListViewObject_o *)ObjectList,
          this->fields.displaySkill,
          v7);
        size = v9->fields._size;
        if ( (int)++v10 >= size )
          return;
      }
LABEL_17:
      sub_B7076C(ObjectList, v6);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickClassComparibility(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_435538B & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_435538B = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v4,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__,
      0LL);
    if ( !Instance )
      sub_B7076C(v5, v6);
    CommonUI__OpenClassCompatibilityMenu(Instance, v4, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall FollowerSelectItemListViewManager__OnClickRefresh(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x19
  BattleServantConfConponent_o *p_callbackFunc; // x0

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
      p_callbackFunc->klass = 0LL;
      sub_B70630(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
      FollowerSelectItemListViewManager_CallbackFunc__Invoke(callbackFunc, 7, -1, 0LL);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickSelectListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_B7076C(v10, v11);
      Index = ListViewObject__get_Index(obj, 0LL);
      FollowerSelectItemListViewManager_CallbackFunc__Invoke(callbackFunc, 0, Index, 0LL);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickSkill1ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall FollowerSelectItemListViewManager__OnClickSkill2ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall FollowerSelectItemListViewManager__OnClickSkill3ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall FollowerSelectItemListViewManager__OnClickSortAscendingOrder(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4355392 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4355392 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B7076C(v3, v4);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickSortKind(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v5; // x21
  OtherUserSortDialog_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4355390 & 1) == 0 )
  {
    sub_B70694(&OtherUserSortDialog_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FollowerSelectItemListViewManager_CloseSortDialog__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4355390 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v5 = (CommonUI_o *)Instance;
    v6 = (OtherUserSortDialog_CallbackFunc_o *)sub_B70764(OtherUserSortDialog_CallbackFunc_TypeInfo);
    OtherUserSortDialog_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_CloseSortDialog__,
      0LL);
    if ( !v5 )
      sub_B7076C(v7, v8);
    CommonUI__OpenOtherUserSortDialog(v5, 0, sort, v6, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickSupportListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_B7076C(v10, v11);
      Index = ListViewObject__get_Index(obj, 0LL);
      FollowerSelectItemListViewManager_CallbackFunc__Invoke(callbackFunc, 5, Index, 0LL);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OnLongPushAppendSkill1ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FollowerSelectItemListViewManager__OnLongPushSkill(this, obj, 8, v3);
}


void __fastcall FollowerSelectItemListViewManager__OnLongPushAppendSkill2ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FollowerSelectItemListViewManager__OnLongPushSkill(this, obj, 9, v3);
}


void __fastcall FollowerSelectItemListViewManager__OnLongPushAppendSkill3ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FollowerSelectItemListViewManager__OnLongPushSkill(this, obj, 10, v3);
}


void __fastcall FollowerSelectItemListViewManager__OnLongPushAppendSkill4ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FollowerSelectItemListViewManager__OnLongPushSkill(this, obj, 11, v3);
}


void __fastcall FollowerSelectItemListViewManager__OnLongPushAppendSkill5ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FollowerSelectItemListViewManager__OnLongPushSkill(this, obj, 12, v3);
}


void __fastcall FollowerSelectItemListViewManager__OnLongPushListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_B7076C(v10, v11);
      Index = ListViewObject__get_Index(obj, 0LL);
      FollowerSelectItemListViewManager_CallbackFunc__Invoke(callbackFunc, 1, Index, 0LL);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OnLongPushServantEquip(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_B7076C(v10, v11);
      Index = ListViewObject__get_Index(obj, 0LL);
      FollowerSelectItemListViewManager_CallbackFunc__Invoke(callbackFunc, 6, Index, 0LL);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OnLongPushSkill(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        int32_t kind,
        const MethodInfo *method)
{
  UnityEngine_Component_o *tutorialListViewObject; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x22
  int32_t Index; // w0

  if ( (byte_435538A & 1) == 0 )
  {
    sub_B70694(&StringLiteral_12805/*"ScrollViewEnabled"*/);
    byte_435538A = 1;
  }
  if ( this->fields.isInput )
  {
    tutorialListViewObject = (UnityEngine_Component_o *)this->fields.tutorialListViewObject;
    if ( !tutorialListViewObject )
      goto LABEL_14;
    tutorialListViewObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                          tutorialListViewObject,
                                                          0LL);
    if ( !tutorialListViewObject )
      goto LABEL_14;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)tutorialListViewObject, 0LL) )
    {
      tutorialListViewObject = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !tutorialListViewObject )
        goto LABEL_14;
      UIScrollView__Press((UIScrollView_o *)tutorialListViewObject, 0, 0LL);
      tutorialListViewObject = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !tutorialListViewObject )
        goto LABEL_14;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)tutorialListViewObject, 0, 0LL);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_12805/*"ScrollViewEnabled"*/,
        0.1,
        0LL);
    }
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v8, v9, v10, v11, v12, v13);
    if ( callbackFunc )
    {
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        FollowerSelectItemListViewManager_CallbackFunc__Invoke(callbackFunc, kind, Index, 0LL);
        return;
      }
LABEL_14:
      sub_B7076C(tutorialListViewObject, obj);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OnLongPushSkill1ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FollowerSelectItemListViewManager__OnLongPushSkill(this, obj, 2, v3);
}


void __fastcall FollowerSelectItemListViewManager__OnLongPushSkill2ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FollowerSelectItemListViewManager__OnLongPushSkill(this, obj, 3, v3);
}


void __fastcall FollowerSelectItemListViewManager__OnLongPushSkill3ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FollowerSelectItemListViewManager__OnLongPushSkill(this, obj, 4, v3);
}


void __fastcall FollowerSelectItemListViewManager__OnMoveEnd(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_Component_o *tutorialListViewObject; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_4355389 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4355389 = 1;
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
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
        goto LABEL_16;
      tutorialListViewObject = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( tutorialListViewObject )
      {
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, Il2CppClass *))tutorialListViewObject->klass[1]._1.castClass)(
          tutorialListViewObject,
          1LL,
          tutorialListViewObject->klass[1]._1.declaringType);
        tutorialListViewObject = (UnityEngine_Component_o *)this->fields.tutorialListViewObject;
        if ( tutorialListViewObject )
        {
          tutorialListViewObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                tutorialListViewObject,
                                                                0LL);
          if ( tutorialListViewObject )
          {
            if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)tutorialListViewObject, 0LL) )
              goto LABEL_16;
            tutorialListViewObject = (UnityEngine_Component_o *)this->fields.scrollView;
            if ( tutorialListViewObject )
            {
              UIScrollView__UpdatePosition((UIScrollView_o *)tutorialListViewObject, 0LL);
              this->fields.isScrollRefresh = 1;
LABEL_16:
              callbackFunc2 = this->fields.callbackFunc2;
              this->fields.callbackFunc2 = 0LL;
              sub_B70630((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
              if ( callbackFunc2 )
                System_Action__Invoke(callbackFunc2, 0LL);
              return;
            }
          }
        }
      }
      sub_B7076C(tutorialListViewObject, v7);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OpenSupportClassBoard(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int32_t Index; // w20
  FollowerSelectItemListViewItem_o *v7; // x20
  __int64 v8; // x10
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  const MethodInfo *v14; // x1
  int32_t scrollBar; // w22
  struct FollowerInfo_o *followerInfo; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v19; // w20
  unsigned int v20; // w24
  __int64 v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  _QWORD **v28; // x24
  __int64 v29; // x22
  __int16 v30; // w8
  __int64 v31; // x22
  __int64 v32; // x22
  __int64 v33; // x22
  System_Int32_array ***v34; // x8
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  _QWORD **v42; // x23
  __int64 v43; // x22
  __int16 v44; // w8
  __int64 v45; // x22
  __int64 v46; // x22
  __int64 v47; // x22
  System_Int32_array ***v48; // x8
  System_Int32_array **v49; // x1
  CommonUI_o *Instance; // x22
  System_Action_o *v51; // x23
  __int64 v52; // x0

  v4 = this;
  if ( (byte_435539B & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Array_Empty_int___);
    sub_B70694(&ClassBoardInfo_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&FollowerSelectItemListViewItem_TypeInfo);
    sub_B70694(&Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__);
    sub_B70694(&Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (FollowerSelectItemListViewManager_o *)sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_435539B = 1;
  }
  if ( v4->fields.isInput )
  {
    itemList = v4->fields.itemList;
    if ( itemList )
    {
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        if ( itemList->fields._size <= (unsigned int)Index )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v7 = (FollowerSelectItemListViewItem_o *)itemList->fields._items->m_Items[Index];
        if ( !v7 )
          return;
        v8 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8
          || (FollowerSelectItemListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          return;
        }
        if ( v7->fields.isQuestRestriction )
        {
          v9 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
          if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 75) & 2) != 0 )
            v9 = (_QWORD *)sub_B7069C(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
          v10 = (System_Reflection_MethodBase_o *)sub_B70678(v9, v9[3]);
          OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0LL);
          return;
        }
        v4->fields.isInput = 0;
        v11 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
        if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 75) & 2) != 0 )
          v11 = (_QWORD *)sub_B7069C(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
        v12 = (System_Reflection_MethodBase_o *)sub_B70678(v11, v11[3]);
        OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantMaster___);
        this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewItem__get_SvtId(v7, v14);
        if ( Master_WarQuestSelectionMaster )
        {
          this = (FollowerSelectItemListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                          Master_WarQuestSelectionMaster,
                                                          (int32_t)this,
                                                          (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            scrollBar = (int32_t)this->fields.scrollBar;
            this = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( this )
            {
              this = (FollowerSelectItemListViewManager_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                                              (ClassBoardClassMaster_o *)this,
                                                              scrollBar,
                                                              0LL);
              followerInfo = v7->fields.followerInfo;
              if ( followerInfo )
              {
                userClassBoardInfo = followerInfo->fields.userClassBoardInfo;
                if ( userClassBoardInfo )
                {
                  max_length = userClassBoardInfo->max_length;
                  v19 = (int)this;
                  if ( max_length < 1 )
                  {
LABEL_33:
                    v21 = sub_B70764(ClassBoardInfo_TypeInfo);
                    ClassBoardInfo___ctor((ClassBoardInfo_o *)v21, 0LL);
                    if ( v21 )
                    {
                      *(_DWORD *)(v21 + 16) = v19;
                      v28 = (_QWORD **)Method_System_Array_Empty_int___;
                      v29 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
                      v30 = *(_WORD *)(v29 + 306);
                      if ( (v30 & 1) == 0 )
                      {
                        sub_B08394(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
                        v30 = *(_WORD *)(v29 + 306);
                      }
                      if ( (v30 & 0x400) != 0 )
                      {
                        v31 = *v28[6];
                        if ( (*(_BYTE *)(v31 + 306) & 1) == 0 )
                          sub_B08394(*v28[6]);
                        if ( !*(_DWORD *)(v31 + 224) )
                        {
                          v32 = *v28[6];
                          if ( (*(_BYTE *)(v32 + 306) & 1) == 0 )
                            sub_B08394(*v28[6]);
                          j_il2cpp_runtime_class_init_0(v32);
                        }
                      }
                      v33 = *v28[6];
                      if ( (*(_BYTE *)(v33 + 306) & 1) == 0 )
                        sub_B08394(*v28[6]);
                      v34 = *(System_Int32_array ****)(v33 + 184);
                      v35 = *v34;
                      *(_QWORD *)(v21 + 24) = *v34;
                      sub_B70630((BattleServantConfConponent_o *)(v21 + 24), v35, v22, v23, v24, v25, v26, v27);
                      v42 = (_QWORD **)Method_System_Array_Empty_int___;
                      v43 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
                      v44 = *(_WORD *)(v43 + 306);
                      if ( (v44 & 1) == 0 )
                      {
                        sub_B08394(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
                        v44 = *(_WORD *)(v43 + 306);
                      }
                      if ( (v44 & 0x400) != 0 )
                      {
                        v45 = *v42[6];
                        if ( (*(_BYTE *)(v45 + 306) & 1) == 0 )
                          sub_B08394(*v42[6]);
                        if ( !*(_DWORD *)(v45 + 224) )
                        {
                          v46 = *v42[6];
                          if ( (*(_BYTE *)(v46 + 306) & 1) == 0 )
                            sub_B08394(*v42[6]);
                          j_il2cpp_runtime_class_init_0(v46);
                        }
                      }
                      v47 = *v42[6];
                      if ( (*(_BYTE *)(v47 + 306) & 1) == 0 )
                        sub_B08394(*v42[6]);
                      v48 = *(System_Int32_array ****)(v47 + 184);
                      v49 = *v48;
                      *(_QWORD *)(v21 + 32) = *v48;
                      sub_B70630((BattleServantConfConponent_o *)(v21 + 32), v49, v36, v37, v38, v39, v40, v41);
LABEL_57:
                      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v51 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                      System_Action___ctor(
                        v51,
                        (Il2CppObject *)v4,
                        Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__,
                        0LL);
                      if ( Instance )
                      {
                        CommonUI__OpenClassBoardEffectListDialog(
                          Instance,
                          1,
                          v19,
                          0,
                          v51,
                          1,
                          (ClassBoardInfo_o *)v21,
                          0LL);
                        return;
                      }
                    }
                  }
                  else
                  {
                    v20 = 0;
                    while ( 1 )
                    {
                      if ( v20 >= max_length )
                      {
                        v52 = sub_B70798(this);
                        sub_B70738(v52, 0LL);
                      }
                      v21 = (__int64)userClassBoardInfo->m_Items[v20];
                      if ( !v21 )
                        break;
                      if ( *(_DWORD *)(v21 + 16) == v19 )
                      {
                        this = (FollowerSelectItemListViewManager_o *)ClassBoardInfo__IsReleasedClassId(
                                                                        (ClassBoardInfo_o *)v21,
                                                                        scrollBar,
                                                                        0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          goto LABEL_57;
                      }
                      max_length = userClassBoardInfo->max_length;
                      if ( (int)++v20 >= max_length )
                        goto LABEL_33;
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_B7076C(this, obj);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__RequestInto(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_FollowerSelectItemListViewObject__o *ObjectList; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_FollowerSelectItemListViewObject__o *v6; // x20
  signed __int64 size; // x8
  unsigned __int64 v8; // x24
  int v9; // w23
  FollowerSelectItemListViewObject_o *v10; // x21
  System_Action_o *v11; // x22
  const MethodInfo *v12; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4355388 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_B70694(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    sub_B70694(&StringLiteral_10159/*"OnMoveEnd"*/);
    byte_4355388 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = FollowerSelectItemListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_15:
    sub_B7076C(ObjectList, v5);
  v6 = ObjectList;
  this->fields.callbackCount = ObjectList->fields._size;
  LODWORD(size) = ObjectList->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v8 = 0LL;
  v9 = 0;
  do
  {
    if ( v8 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v10 = v6->fields._items->m_Items[v8];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v10, 0LL) )
    {
      v11 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v10 )
        goto LABEL_15;
      ++v9;
      zero = UnityEngine_Vector3__get_zero(0LL);
      FollowerSelectItemListViewObject__Init(v10, 4, v11, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v12);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v6->fields._size;
    ++v8;
  }
  while ( (__int64)v8 < size );
  if ( !v9 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10159/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__RequestListObject(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4355386 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__);
    sub_B70694(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_B70694(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_B70694(&StringLiteral_10159/*"OnMoveEnd"*/);
    byte_4355386 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7076C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10159/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      ObjectList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v15.fields.current;
      v11 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7076C(v12, v13);
      zero = UnityEngine_Vector3__get_zero(0LL);
      FollowerSelectItemListViewObject__Init(
        (FollowerSelectItemListViewObject_o *)current,
        mode,
        v11,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v14);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__RequestListObject_31661804(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4355387 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__);
    sub_B70694(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_B70694(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_B70694(&StringLiteral_10159/*"OnMoveEnd"*/);
    byte_4355387 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7076C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10159/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      ObjectList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v13.fields.current;
      v9 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7076C(v10, v11);
      zero = UnityEngine_Vector3__get_zero(0LL);
      FollowerSelectItemListViewObject__Init(
        (FollowerSelectItemListViewObject_o *)current,
        mode,
        v9,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v12);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


void __fastcall FollowerSelectItemListViewManager__SaveSortFilter(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  struct ListViewSort_o *v4; // x8
  FollowerSelectItemListViewManager_o *v5; // x0
  int monitor; // w20
  FollowerSelectItemListViewManager_c *v7; // x0

  if ( (byte_4355380 & 1) == 0 )
  {
    sub_B70694(&FollowerSelectItemListViewManager_TypeInfo);
    sub_B70694(&StringLiteral_6825/*"FollowerSelectClass"*/);
    byte_4355380 = 1;
  }
  sort = this->fields.sort;
  if ( !sort || (ListViewSort__Save(sort, 0LL), (v4 = this->fields.sort) == 0LL) )
    sub_B7076C(sort, method);
  if ( v4->fields.isRequestSave )
  {
    v5 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v5 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor = (int)v5->fields.itemList->monitor;
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(v5, method) )
    {
      v7 = FollowerSelectItemListViewManager_TypeInfo;
      if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v7 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6825/*"FollowerSelectClass"*/, v7->static_fields->followerClassId, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__ScrollViewEnabled(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_B7076C(0LL, method);
  UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__SetBonusFilterFlag(
        FollowerSelectItemListViewManager_o *this,
        System_Int32_array *eventIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  System_Collections_Generic_List_int__o *v8; // x21
  unsigned __int64 v9; // x23
  int32_t v10; // w22
  bool isBonusFilterEnable; // w28
  bool isServantBonusFilterEnable; // w28
  bool isServantEquipBonusFilterEnable; // w28
  struct System_Int32_array *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4355376 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventFilterMaster___);
    sub_B70694(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_int___);
    sub_B70694(&Method_System_Collections_Generic_List_int__Remove__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4355376 = 1;
  }
  entity = 0LL;
  *(_WORD *)&this->fields.isBonusFilterEnable = 256;
  this->fields.isServantEquipBonusFilterEnable = 1;
  Instance = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)eventIds,
                                                         (const MethodInfo_1CCB4A0 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !eventIds )
    goto LABEL_22;
  v7 = *(_QWORD *)&eventIds->max_length;
  v8 = Instance;
  if ( v7 && (int)v7 >= 1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v7 )
      {
        v21 = sub_B70798(Instance);
        sub_B70738(v21, 0LL);
      }
      v10 = eventIds->m_Items[v9 + 1];
      Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventFilterMaster___);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                                             &entity,
                                                             v10,
                                                             (const MethodInfo_21C049C *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (System_Collections_Generic_List_int__o *)entity;
        if ( !entity )
          break;
        isBonusFilterEnable = this->fields.isBonusFilterEnable;
        this->fields.isBonusFilterEnable = isBonusFilterEnable | !EventFilterEntity__IsSupportFilterNoDisp(
                                                                    (EventFilterEntity_o *)entity,
                                                                    0LL);
        Instance = (System_Collections_Generic_List_int__o *)entity;
        if ( !entity )
          break;
        isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
        this->fields.isServantBonusFilterEnable = isServantBonusFilterEnable | !EventFilterEntity__IsSupportServantFilterNoDisp(
                                                                                  (EventFilterEntity_o *)entity,
                                                                                  0LL);
        Instance = (System_Collections_Generic_List_int__o *)entity;
        if ( !entity )
          break;
        isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
        this->fields.isServantEquipBonusFilterEnable = isServantEquipBonusFilterEnable | !EventFilterEntity__IsSupportServantEquipFilterNoDisp(
                                                                                            (EventFilterEntity_o *)entity,
                                                                                            0LL);
        Instance = (System_Collections_Generic_List_int__o *)entity;
        if ( !entity )
          break;
        Instance = (System_Collections_Generic_List_int__o *)EventFilterEntity__IsSupportServantEquipFilterNoDisp(
                                                               (EventFilterEntity_o *)entity,
                                                               0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v8 )
            break;
          Instance = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Remove(
                                                                 v8,
                                                                 v10,
                                                                 (const MethodInfo_30B7B54 *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
      else
      {
        this->fields.isBonusFilterEnable = 1;
      }
      LODWORD(v7) = eventIds->max_length;
      if ( (__int64)++v9 >= (int)v7 )
        goto LABEL_20;
    }
LABEL_22:
    sub_B7076C(Instance, v6);
  }
LABEL_20:
  if ( !v8 )
    goto LABEL_22;
  v14 = System_Collections_Generic_List_int___ToArray(
          v8,
          (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.equipBonusFilterEventIds = v14;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.equipBonusFilterEventIds,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void __fastcall FollowerSelectItemListViewManager__SetClassBoardInfo(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classInfoSprite; // x20
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x0
  BattleServantConfConponent_o *p_classBoardMaxDictionary; // x20
  System_Collections_Generic_Dictionary_int__int__o *v8; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *Master_WarQuestSelectionMaster; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x21
  __int64 v29; // x9
  ClassBoardSquareMaster_o *v30; // x0
  __int64 v31; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v33; // x1
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0

  if ( (byte_4355378 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&ClassBoardBaseEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__Clear__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&StringLiteral_17404/*"buttontxt_formation_20"*/);
    byte_4355378 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v3->static_fields->ClassBoardReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_24296868(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17404/*"buttontxt_formation_20"*/, 0LL);
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = (BattleServantConfConponent_o *)&this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_2FBB32C *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B70764(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v8,
      (const MethodInfo_2FBA5BC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    p_classBoardMaxDictionary->klass = (BattleServantConfConponent_c *)v8;
    sub_B70630(p_classBoardMaxDictionary, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster[1].klass) == 0LL )
  {
    sub_B7076C(Master_WarQuestSelectionMaster, v16);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 Master_WarQuestSelectionMaster,
                 (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7076C(0LL, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_34;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_34:
      v26 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8));
    v28 = v27;
    if ( v27 )
    {
      v29 = *(&ClassBoardBaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 300LL) < (unsigned int)v29
        || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * v29 - 8) != ClassBoardBaseEntity_TypeInfo )
      {
        sub_B70A60(v27);
LABEL_55:
        sub_B7076C(v30, v31);
      }
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v30 = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v28 )
      goto LABEL_55;
    if ( !v30 )
      sub_B7076C(0LL, v31);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(v30, *(_DWORD *)(v28 + 16), 0LL);
    if ( OtherThanNoneEntity )
    {
      if ( !p_classBoardMaxDictionary->klass )
        sub_B7076C(OtherThanNoneEntity, v33);
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)p_classBoardMaxDictionary->klass,
        *(_DWORD *)(v28 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_2FBB160 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v34 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_51;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_51:
    v37 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
}


void __fastcall FollowerSelectItemListViewManager__SetClassId(
        FollowerSelectItemListViewManager_o *this,
        int32_t followerClassId,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_c *v5; // x0
  System_Collections_Generic_IEnumerable_T__o *mixItemList; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v7; // x22
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  const MethodInfo *v16; // x1
  __int64 v17; // x10
  System_Collections_Generic_IEnumerable_T__o *originalItemList; // x22
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v19; // x23
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x2
  __int64 v27; // x10
  int v28; // w19
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-78h] BYREF
  int v30[2]; // [xsp+20h] [xbp-60h]
  int v31; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_4355384 & 1) == 0 )
  {
    sub_B70694(&ClassButtonControlComponent_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B70694(&FollowerSelectItemListViewItem_TypeInfo);
    sub_B70694(&FollowerSelectItemListViewManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem___ctor___69165824);
    sub_B70694(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    byte_4355384 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v31 = 0;
  v5 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v5 = FollowerSelectItemListViewManager_TypeInfo;
  }
  v5->static_fields->followerClassId = followerClassId;
  if ( this->fields.mixItemList && this->fields.originalItemList )
  {
    if ( (BYTE3(ClassButtonControlComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    }
    if ( ClassButtonControlComponent__IsMixSupportGroupType(followerClassId, 0LL) )
    {
      mixItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.mixItemList;
      v7 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_List_ListViewItem__TypeInfo);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v7,
        mixItemList,
        (const MethodInfo_3024BBC *)Method_System_Collections_Generic_List_ListViewItem___ctor___69165824);
      this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v7;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.itemList,
        (System_Int32_array **)v7,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      itemList = this->fields.itemList;
      if ( itemList )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v29,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
          (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v32 = v29;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v32,
                  (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( v32.fields.current )
          {
            v17 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v32.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v17
              && (FollowerSelectItemListViewItem_c *)v32.fields.current->klass->_2.typeHierarchy[v17 - 1] == FollowerSelectItemListViewItem_TypeInfo )
            {
              FollowerSelectItemListViewItem__UpdateRestriction(
                (FollowerSelectItemListViewItem_o *)v32.fields.current,
                v16);
            }
          }
        }
        v30[0] = 190;
        v31 = 1;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v32,
          (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        v31 = 0;
        return;
      }
LABEL_31:
      sub_B7076C(itemList, v14);
    }
    originalItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.originalItemList;
    v19 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_List_ListViewItem__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v19,
      originalItemList,
      (const MethodInfo_3024BBC *)Method_System_Collections_Generic_List_ListViewItem___ctor___69165824);
    this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v19;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.itemList,
      (System_Int32_array **)v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_31;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v29,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v32 = v29;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v32,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( v32.fields.current )
      {
        v27 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v32.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v27
          && (FollowerSelectItemListViewItem_c *)v32.fields.current->klass->_2.typeHierarchy[v27 - 1] == FollowerSelectItemListViewItem_TypeInfo )
        {
          FollowerSelectItemListViewItem__AnalyzeEntity(
            (FollowerSelectItemListViewItem_o *)v32.fields.current,
            followerClassId,
            v26);
        }
      }
    }
    v30[0] = 190;
    v28 = ++v31;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v32,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v28 && v30[v28 - 1] == 190 )
      v31 = v28 - 1;
  }
}


void __fastcall FollowerSelectItemListViewManager__SetFilterButtonImage(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *bonusFilterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_435538F & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17270/*"btn_sefilter_2_on"*/);
    sub_B70694(&StringLiteral_17269/*"btn_sefilter_2"*/);
    byte_435538F = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (bonusFilterSprite = this->fields.bonusFilterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !bonusFilterSprite) )
  {
    sub_B7076C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17269/*"btn_sefilter_2"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17270/*"btn_sefilter_2_on"*/;
  UISprite__set_spriteName(bonusFilterSprite, *v5, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__SetMode(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        FollowerSelectItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  FollowerSelectItemListViewManager__SetMode_31660956(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__SetMode_31660956(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  char *ObjectList; // x0
  __int64 v6; // x1
  int v7; // w8
  char *v8; // x19
  unsigned int v9; // w22
  FollowerSelectItemListViewObject_o *v10; // x21
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  __int64 *v13; // x8
  const MethodInfo *v14; // x1
  int32_t v15; // w8
  char *v16; // x20
  int v17; // w8
  __int64 v18; // x23
  FollowerSelectItemListViewObject_o *v19; // x21
  System_Action_o *v20; // x22
  const MethodInfo *v21; // x3
  int v22; // s1
  int32_t v25; // w1
  FollowerSelectItemListViewObject_o *v26; // x0
  System_Action_o *v27; // x2
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct FollowerSelectItemListViewObject_o *tutorialListViewObject; // x22
  const MethodInfo *v35; // x1
  struct FollowerSelectItemListViewObject_o *v36; // x21

  if ( (byte_4355385 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_B70694(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    sub_B70694(&StringLiteral_10159/*"OnMoveEnd"*/);
    sub_B70694(&StringLiteral_11583/*"RequestInto"*/);
    byte_4355385 = 1;
  }
  if ( mode == 3 )
  {
    ObjectList = (char *)FollowerSelectItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
    if ( !ObjectList )
      goto LABEL_38;
    v7 = *((_DWORD *)ObjectList + 6);
    v8 = ObjectList;
    if ( v7 >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v7 <= v9 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v10 = *(FollowerSelectItemListViewObject_o **)(*((_QWORD *)v8 + 2) + 8LL * (int)v9 + 32);
        if ( !v10 )
          break;
        UnityEngine_Vector3__get_zero(0LL);
        if ( (byte_43553A8 & 1) == 0 )
        {
          sub_B70694(&FollowerSelectItemListViewItem_TypeInfo);
          byte_43553A8 = 1;
        }
        FollowerSelectItemListViewObject__SetupDisp(v10, v11);
        v7 = *((_DWORD *)v8 + 6);
        if ( (int)++v9 >= v7 )
          return;
      }
      goto LABEL_38;
    }
    return;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( mode == 1 )
  {
    v13 = &StringLiteral_11583/*"RequestInto"*/;
LABEL_37:
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)*v13, 0.0, 0LL);
    return;
  }
  if ( mode != 4 )
  {
    if ( mode == 2 )
      FollowerSelectItemListViewManager__RequestListObject_31661804(this, 3, v12);
    return;
  }
  ListViewManager__set_IsInput((ListViewManager_o *)this, 1, 0LL);
  ObjectList = (char *)FollowerSelectItemListViewManager__get_ClippingObjectList(this, v14);
  if ( !ObjectList )
    goto LABEL_38;
  v15 = *((_DWORD *)ObjectList + 6);
  v16 = ObjectList;
  if ( v15 < 1 )
  {
    this->fields.callbackCount = 1;
    v13 = &StringLiteral_10159/*"OnMoveEnd"*/;
    goto LABEL_37;
  }
  this->fields.callbackCount = v15;
  v17 = *((_DWORD *)ObjectList + 6);
  if ( v17 >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( v17 <= (unsigned int)v18 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v19 = *(FollowerSelectItemListViewObject_o **)(*((_QWORD *)v16 + 2) + 8 * v18 + 32);
      v20 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v20, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v19 )
        break;
      *(UnityEngine_Vector3_o *)(&v22 - 1) = UnityEngine_Vector3__get_zero(0LL);
      if ( (_DWORD)v18 )
      {
        v25 = 2;
        v26 = v19;
        v27 = v20;
      }
      else
      {
        FollowerSelectItemListViewObject__Init(v19, 0, v20, 0.0, *(UnityEngine_Vector3_o *)&v22, v21);
        ObjectList = (char *)this->fields.tutorialListViewObject;
        if ( !ObjectList )
          break;
        ObjectList = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ObjectList, 0LL);
        if ( !ObjectList )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ObjectList, 1, 0LL);
        ObjectList = (char *)this->fields.tutorialListViewObject;
        if ( !ObjectList )
          break;
        *((_QWORD *)ObjectList + 4) = this;
        sub_B70630(
          (BattleServantConfConponent_o *)(ObjectList + 32),
          (System_Int32_array **)this,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        tutorialListViewObject = this->fields.tutorialListViewObject;
        ObjectList = (char *)FollowerSelectItemListViewObject__GetItem(v19, v35);
        if ( !tutorialListViewObject )
          break;
        ObjectList = (char *)((__int64 (__fastcall *)(struct FollowerSelectItemListViewObject_o *, char *, Il2CppMethodPointer))tutorialListViewObject->klass->vtable._5_SetItem.method)(
                               tutorialListViewObject,
                               ObjectList,
                               tutorialListViewObject->klass->vtable._6_SetItem.methodPtr);
        v36 = this->fields.tutorialListViewObject;
        if ( !v36 )
          break;
        *(UnityEngine_Vector3_o *)(&v22 - 1) = UnityEngine_Vector3__get_zero(0LL);
        v25 = 6;
        v26 = v36;
        v27 = 0LL;
      }
      FollowerSelectItemListViewObject__Init(v26, v25, v27, 0.0, *(UnityEngine_Vector3_o *)&v22, v21);
      v17 = *((_DWORD *)v16 + 6);
      if ( (int)++v18 >= v17 )
        return;
    }
LABEL_38:
    sub_B7076C(ObjectList, v6);
  }
}


void __fastcall FollowerSelectItemListViewManager__SetMode_31661748(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  FollowerSelectItemListViewManager__SetMode_31660956(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__SetObjectItem(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject_o *v4; // x19
  FollowerSelectItemListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w8
  const MethodInfo *v8; // x3
  int v9; // s1
  int32_t v12; // w1
  const MethodInfo *v13; // x1

  v4 = obj;
  v5 = this;
  if ( (byte_4355382 & 1) == 0 )
  {
    this = (FollowerSelectItemListViewManager_o *)sub_B70694(&FollowerSelectItemListViewObject_TypeInfo);
    byte_4355382 = 1;
  }
  if ( v4 )
  {
    v6 = *(&FollowerSelectItemListViewObject_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v4->klass->_2.bitflags2 + 1) >= (unsigned int)v6 )
    {
      if ( (FollowerSelectItemListViewObject_c *)v4->klass->_2.typeHierarchy[v6 - 1] != FollowerSelectItemListViewObject_TypeInfo )
        v4 = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
  }
  initMode = v5->fields.initMode;
  if ( initMode != 3 )
  {
    if ( initMode == 2 )
    {
      if ( v4 )
      {
        *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Vector3__get_zero(0LL);
        v12 = 3;
LABEL_18:
        FollowerSelectItemListViewObject__Init(
          (FollowerSelectItemListViewObject_o *)v4,
          v12,
          0LL,
          0.0,
          *(UnityEngine_Vector3_o *)&v9,
          v8);
        return;
      }
    }
    else if ( v4 )
    {
      *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Vector3__get_zero(0LL);
      v12 = 2;
      goto LABEL_18;
    }
LABEL_19:
    sub_B7076C(this, obj);
  }
  if ( !v4 )
    goto LABEL_19;
  UnityEngine_Vector3__get_zero(0LL);
  if ( (byte_43553A8 & 1) == 0 )
  {
    sub_B70694(&FollowerSelectItemListViewItem_TypeInfo);
    byte_43553A8 = 1;
  }
  FollowerSelectItemListViewObject__SetupDisp((FollowerSelectItemListViewObject_o *)v4, v13);
}


void __fastcall FollowerSelectItemListViewManager__SetSortButtonImage(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  __int64 v4; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *sortKindLabel; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v8; // x8
  int32_t sortKind; // w9
  System_String_o **v10; // x8
  struct ListViewSort_o *v11; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v13; // x9
  System_String_o **v14; // x10
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x8

  if ( (byte_4355393 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_17277/*"btn_sort_up"*/);
    sub_B70694(&StringLiteral_17361/*"btn_txt_up"*/);
    sub_B70694(&StringLiteral_17317/*"btn_txt_new"*/);
    sub_B70694(&StringLiteral_17307/*"btn_txt_down"*/);
    sub_B70694(&StringLiteral_17324/*"btn_txt_old"*/);
    sub_B70694(&StringLiteral_17274/*"btn_sort_down"*/);
    byte_4355393 = 1;
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_36;
    sortKindLabel = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !sortKindLabel )
      goto LABEL_36;
    UILabel__set_text(sortKindLabel, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( v8 )
    {
      sortKind = v8->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17324/*"btn_txt_old"*/ : &StringLiteral_17317/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v11->fields.isAscendingOrder;
              v13 = (System_String_o **)&StringLiteral_17274/*"btn_sort_down"*/;
              v14 = (System_String_o **)&StringLiteral_17277/*"btn_sort_up"*/;
LABEL_32:
              if ( isAscendingOrder )
                v17 = v13;
              else
                v17 = v14;
              UISprite__set_spriteName((UISprite_o *)sort, *v17, 0LL);
              return;
            }
          }
        }
      }
      else
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v15 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17361/*"btn_txt_up"*/ : &StringLiteral_17307/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
          v16 = this->fields.sort;
          if ( v16 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v16->fields.isAscendingOrder;
              v13 = (System_String_o **)&StringLiteral_17277/*"btn_sort_up"*/;
              v14 = (System_String_o **)&StringLiteral_17274/*"btn_sort_down"*/;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_36:
    sub_B7076C(sort, v4);
  }
}


void __fastcall FollowerSelectItemListViewManager__SortClass(
        FollowerSelectItemListViewManager_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_c *v5; // x0
  FollowerSelectItemListViewManager_c *v6; // x0
  int32_t followerClassId; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x21
  struct ListViewSort_o *SvtId; // x0
  const MethodInfo *v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  signed __int64 size; // x24
  int32_t v14; // w25
  unsigned __int64 v15; // x26
  FollowerSelectItemListViewItem_o *v16; // x22
  __int64 v17; // x10
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  if ( (byte_4355395 & 1) == 0 )
  {
    sub_B70694(&ClassButtonControlComponent_TypeInfo);
    sub_B70694(&FollowerSelectItemListViewItem_TypeInfo);
    sub_B70694(&FollowerSelectItemListViewManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem___ctor___69165824);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B70694(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    byte_4355395 = 1;
  }
  v5 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v5 = FollowerSelectItemListViewManager_TypeInfo;
  }
  if ( v5->static_fields->followerClassId != classPos )
  {
    if ( (BYTE3(ClassButtonControlComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    }
    if ( !ClassButtonControlComponent__IsMixSupportGroupType(classPos, 0LL) )
    {
      v6 = FollowerSelectItemListViewManager_TypeInfo;
      if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v6 = FollowerSelectItemListViewManager_TypeInfo;
      }
      followerClassId = v6->static_fields->followerClassId;
      if ( (BYTE3(ClassButtonControlComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      }
      ClassButtonControlComponent__IsMixSupportGroupType(followerClassId, 0LL);
    }
  }
  FollowerSelectItemListViewManager__SetClassId(this, classPos, method);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  p_itemList = &this->fields.itemList;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_45;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v14 = 0;
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v16 = (FollowerSelectItemListViewItem_o *)itemList->fields._items->m_Items[v15];
      if ( !v16 )
        break;
      v17 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
        || (FollowerSelectItemListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] != FollowerSelectItemListViewItem_TypeInfo )
      {
        break;
      }
      SvtId = (struct ListViewSort_o *)FollowerSelectItemListViewItem__get_SvtId(v16, v10);
      if ( (int)SvtId >= 1 )
      {
        v16->fields.index = v14;
        if ( !v8 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v8,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v14;
      }
      if ( (__int64)++v15 >= size )
        goto LABEL_32;
      itemList = *p_itemList;
    }
    while ( *p_itemList );
LABEL_45:
    sub_B7076C(SvtId, v10);
  }
LABEL_32:
  v18 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v18,
    (System_Collections_Generic_IEnumerable_T__o *)v8,
    (const MethodInfo_3024BBC *)Method_System_Collections_Generic_List_ListViewItem___ctor___69165824);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v18;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  SvtId = this->fields.sort;
  if ( !SvtId )
    goto LABEL_45;
  if ( SvtId->fields.sortKind == 11 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( (!questRestrictionInfo || !questRestrictionInfo->fields.isRestriction)
      && this->fields.isBonusFilterEnable
      && !ListViewSort__GetFilter(SvtId, 18, 0LL) )
    {
      SvtId = this->fields.sort;
      if ( !SvtId )
        goto LABEL_45;
      if ( !ListViewSort__GetFilter(SvtId, 19, 0LL) )
      {
        SvtId = this->fields.sort;
        if ( !SvtId )
          goto LABEL_45;
        if ( ListViewSort__GetFilter(SvtId, 40, 0LL) )
        {
          SvtId = this->fields.sort;
          if ( !SvtId )
            goto LABEL_45;
          ListViewSort__GetFilter(SvtId, 41, 0LL);
        }
      }
    }
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__Update(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ListViewManager__Update((ListViewManager_o *)this, 0LL);
  if ( !this->fields.isRefreshBtnHide )
    FollowerSelectItemListViewManager__UpdateRefreshButtonInfo(this, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__UpdateRefreshButtonInfo(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t RefreshRemain; // x0
  __int64 v4; // x1
  __int64 v5; // x20
  UnityEngine_GameObject_o *refreshButtonObject; // x0
  UnityEngine_Object_o *v7; // x21
  UnityEngine_Object_o *v8; // x21
  UIWidget_o *v9; // x21
  int64_t Time; // x0
  int64_t v11; // x21
  UILabel_o *refreshRemainLabel; // x22
  __int64 v13; // x2
  Il2CppObject *v14; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UIWidget_o *refreshButtonSprite; // x20
  int v17; // s0
  UnityEngine_Object_o *v21; // x20
  UIWidget_o *refreshTitleSprite; // x20
  int v23; // s0
  __int64 v27; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4355396 & 1) == 0 )
  {
    sub_B70694(&FollowerListRequest_TypeInfo);
    sub_B70694(&FollowerSelectItemListViewManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_23922/*"{0}"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4355396 = 1;
  }
  if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
  }
  RefreshRemain = FollowerListRequest__getRefreshRemain(0LL);
  if ( RefreshRemain <= 0 )
  {
    if ( !this->fields.isRefreshClear )
      return;
    refreshButtonObject = this->fields.refreshButtonObject;
    this->fields.isRefreshClear = 0;
    if ( !refreshButtonObject )
      goto LABEL_58;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        refreshButtonObject,
                                                        (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    refreshButtonObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                        Component_srcLineSprite,
                                                        0LL,
                                                        0LL);
    if ( ((unsigned __int8)refreshButtonObject & 1) != 0 )
    {
      if ( !Component_srcLineSprite )
        goto LABEL_58;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 1, 0LL);
    }
    else
    {
      refreshButtonSprite = (UIWidget_o *)this->fields.refreshButtonSprite;
      *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_white(0LL);
      if ( !refreshButtonSprite )
        goto LABEL_58;
      UIWidget__set_color(refreshButtonSprite, *(UnityEngine_Color_o *)&v17, 0LL);
    }
    refreshButtonObject = this->fields.refreshTitleObject;
    if ( refreshButtonObject )
    {
      v21 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      refreshButtonObject,
                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      refreshButtonObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
      if ( ((unsigned __int8)refreshButtonObject & 1) != 0 )
      {
        if ( !v21 )
          goto LABEL_58;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v21, 1, 0LL);
      }
      else
      {
        refreshTitleSprite = (UIWidget_o *)this->fields.refreshTitleSprite;
        *(UnityEngine_Color_o *)&v23 = UnityEngine_Color__get_white(0LL);
        if ( !refreshTitleSprite )
          goto LABEL_58;
        UIWidget__set_color(refreshTitleSprite, *(UnityEngine_Color_o *)&v23, 0LL);
      }
      refreshButtonObject = (UnityEngine_GameObject_o *)this->fields.refreshRemainLabel;
      if ( refreshButtonObject )
      {
        refreshButtonObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)refreshButtonObject, 0LL);
        if ( refreshButtonObject )
        {
          UnityEngine_GameObject__SetActive(refreshButtonObject, 0, 0LL);
          refreshButtonObject = (UnityEngine_GameObject_o *)this->fields.refreshRemainLabel;
          if ( refreshButtonObject )
          {
            UILabel__set_text((UILabel_o *)refreshButtonObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_58:
    sub_B7076C(refreshButtonObject, v4);
  }
  v5 = RefreshRemain;
  refreshButtonObject = this->fields.refreshButtonObject;
  if ( !refreshButtonObject )
    goto LABEL_58;
  v7 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 refreshButtonObject,
                                 (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  refreshButtonObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  if ( ((unsigned __int8)refreshButtonObject & 1) != 0 )
  {
    if ( !v7 )
      goto LABEL_58;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v7, 0, 0LL);
  }
  refreshButtonObject = this->fields.refreshTitleObject;
  if ( !refreshButtonObject )
    goto LABEL_58;
  v8 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 refreshButtonObject,
                                 (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  refreshButtonObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  if ( ((unsigned __int8)refreshButtonObject & 1) != 0 )
  {
    if ( !v8 )
      goto LABEL_58;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v8, 0, 0LL);
  }
  v9 = (UIWidget_o *)this->fields.refreshButtonSprite;
  refreshButtonObject = (UnityEngine_GameObject_o *)FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    refreshButtonObject = (UnityEngine_GameObject_o *)FollowerSelectItemListViewManager_TypeInfo;
  }
  if ( !v9 )
    goto LABEL_58;
  UIWidget__set_color(v9, *(UnityEngine_Color_o *)(*(_QWORD *)&refreshButtonObject[7].fields.m_CachedPtr + 20LL), 0LL);
  refreshButtonObject = (UnityEngine_GameObject_o *)this->fields.refreshTitleSprite;
  if ( !refreshButtonObject )
    goto LABEL_58;
  UIWidget__set_color(
    (UIWidget_o *)refreshButtonObject,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->REFRESH_DARK_COLOR,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( this->fields.refreshCheckTime != Time )
  {
    v11 = Time;
    refreshButtonObject = (UnityEngine_GameObject_o *)this->fields.refreshRemainLabel;
    this->fields.isRefreshClear = 1;
    if ( refreshButtonObject )
    {
      refreshButtonObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)refreshButtonObject, 0LL);
      if ( refreshButtonObject )
      {
        UnityEngine_GameObject__SetActive(refreshButtonObject, 1, 0LL);
        refreshRemainLabel = this->fields.refreshRemainLabel;
        v27 = v5;
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v27, v13);
        refreshButtonObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                            (System_String_o *)StringLiteral_23922/*"{0}"*/,
                                                            v14,
                                                            0LL);
        if ( refreshRemainLabel )
        {
          UILabel__set_text(refreshRemainLabel, (System_String_o *)refreshButtonObject, 0LL);
          this->fields.refreshCheckTime = v11;
          return;
        }
      }
    }
    goto LABEL_58;
  }
}


void __fastcall FollowerSelectItemListViewManager__add_callbackFunc(
        FollowerSelectItemListViewManager_o *this,
        FollowerSelectItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct FollowerSelectItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  FollowerSelectItemListViewManager_o *v10; // x0
  FollowerSelectItemListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_435536E & 1) == 0 )
  {
    sub_B70694(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    byte_435536E = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (FollowerSelectItemListViewManager_CallbackFunc_c *)v7->klass != FollowerSelectItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B650AC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B70A60(v7);
  FollowerSelectItemListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall FollowerSelectItemListViewManager__add_callbackFunc2(
        FollowerSelectItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  FollowerSelectItemListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4355370 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_4355370 = 1;
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
    v8 = sub_B650AC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B70A60(v7);
  FollowerSelectItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_FollowerSelectItemListViewObject__o *__fastcall FollowerSelectItemListViewManager__get_ClippingObjectList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  FollowerSelectItemListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4355375 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4355375 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7076C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7076C(v7, v8);
      Component_srcLineSprite = (FollowerSelectItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        (UnityEngine_GameObject_o *)current,
                                                                        (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B7076C(0LL, v10);
      Item = (ListViewItem_o *)FollowerSelectItemListViewObject__GetItem(Component_srcLineSprite, v10);
      if ( !Item )
        sub_B7076C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_23985548((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B7076C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B7076C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FollowerSelectItemListViewObject__o *)v3;
}


System_Collections_Generic_List_FollowerSelectItemListViewObject__o *__fastcall FollowerSelectItemListViewManager__get_ObjectList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4355374 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4355374 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7076C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7076C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      if ( !v3 )
        sub_B7076C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FollowerSelectItemListViewObject__o *)v3;
}


void __fastcall FollowerSelectItemListViewManager__remove_callbackFunc(
        FollowerSelectItemListViewManager_o *this,
        FollowerSelectItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct FollowerSelectItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  FollowerSelectItemListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_435536F & 1) == 0 )
  {
    sub_B70694(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    byte_435536F = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (FollowerSelectItemListViewManager_CallbackFunc_c *)v7->klass != FollowerSelectItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B650AC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B70A60(v7);
  FollowerSelectItemListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall FollowerSelectItemListViewManager__remove_callbackFunc2(
        FollowerSelectItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_4355371 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_4355371 = 1;
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
    v8 = sub_B650AC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B70A60(v7);
  FollowerSelectItemListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager_CallbackFunc___ctor(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B70630(p_method);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall FollowerSelectItemListViewManager_CallbackFunc__BeginInvoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_434EABF & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&FollowerSelectItemListViewManager_ResultKind_TypeInfo);
    byte_434EABF = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(FollowerSelectItemListViewManager_ResultKind_TypeInfo, &v13, *(_QWORD *)&result);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, v9);
  return (System_IAsyncResult_o *)sub_B70638(this, v11, callback, object);
}


void __fastcall FollowerSelectItemListViewManager_CallbackFunc__EndInvoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager_CallbackFunc__Invoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  FollowerSelectItemListViewManager_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  FollowerSelectItemListViewManager_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  FollowerSelectItemListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (FollowerSelectItemListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind);
      if ( (sub_B706C4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)result, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)result, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B706BC(v22);
      v25 = sub_B70AC0(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_B08590(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B70744(v17, v22);
        (*v19)(v21, v26, (unsigned int)result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_B08590(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)result,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)result, v22);
    goto LABEL_38;
  }
}


void __fastcall FollowerSelectItemListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct FollowerSelectItemListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_434EABD & 1) == 0 )
  {
    sub_B70694(&FollowerSelectItemListViewManager___c_TypeInfo);
    byte_434EABD = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(FollowerSelectItemListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = FollowerSelectItemListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FollowerSelectItemListViewManager___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall FollowerSelectItemListViewManager___c___ctor(
        FollowerSelectItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


ListViewSort_o *__fastcall FollowerSelectItemListViewManager___c____cctor_b__124_0(
        FollowerSelectItemListViewManager___c_o *this,
        int32_t questType,
        const MethodInfo *method)
{
  __int64 *v4; // x8
  System_String_o *v5; // x19
  ListViewSort_o *v6; // x20
  __int64 v8; // x0
  System_NotImplementedException_o *v9; // x19
  __int64 v10; // x0

  if ( (byte_434EABE & 1) == 0 )
  {
    sub_B70694(&ListViewSort_TypeInfo);
    sub_B70694(&StringLiteral_6826/*"FollowerSelectEventQuest"*/);
    sub_B70694(&StringLiteral_6827/*"FollowerSelectMainQuest"*/);
    byte_434EABE = 1;
  }
  if ( questType )
  {
    if ( questType != 1 )
    {
      v8 = sub_B70698(&System_NotImplementedException_TypeInfo);
      v9 = (System_NotImplementedException_o *)sub_B70764(v8);
      System_NotImplementedException___ctor(v9, 0LL);
      v10 = sub_B70698(&Method_FollowerSelectItemListViewManager___c___cctor_b__124_0__);
      sub_B70738(v9, v10);
    }
    v4 = &StringLiteral_6826/*"FollowerSelectEventQuest"*/;
  }
  else
  {
    v4 = &StringLiteral_6827/*"FollowerSelectMainQuest"*/;
  }
  v5 = (System_String_o *)*v4;
  v6 = (ListViewSort_o *)sub_B70764(ListViewSort_TypeInfo);
  ListViewSort___ctor_33980040(v6, v5, 11, 0, 0LL);
  return v6;
}