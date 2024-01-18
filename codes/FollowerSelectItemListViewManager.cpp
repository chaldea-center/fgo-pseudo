void __fastcall FollowerSelectItemListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ListViewSort_o *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  FollowerSelectItemListViewManager_c *v12; // x8
  float v13; // s4
  float v14; // s5
  float v15; // s6
  float v16; // s7
  struct UnityEngine_Color_o v17; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418AA63 & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewManager_TypeInfo, v1);
    sub_B2C35C(&ListViewSort_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_6731/*"FollowerSelect"*/, v3);
    byte_418AA63 = 1;
  }
  v4 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v4, (System_String_o *)StringLiteral_6731/*"FollowerSelect"*/, 11, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)FollowerSelectItemListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B2C2F8(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
  v12 = FollowerSelectItemListViewManager_TypeInfo;
  v18.fields.a = 1.0;
  FollowerSelectItemListViewManager_TypeInfo->static_fields->lastSelectedQuestId = -1;
  v12->static_fields->lastSelectedQuestPhase = -1;
  v18.fields.r = 0.30196;
  v17 = (struct UnityEngine_Color_o)0LL;
  v18.fields.g = 0.30196;
  v18.fields.b = 0.30196;
  UnityEngine_Color___ctor(v18, v13, v14, v15, v16, (const MethodInfo *)&v17);
  FollowerSelectItemListViewManager_TypeInfo->static_fields->REFRESH_DARK_COLOR = v17;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *changeSkillButton; // x0
  UnityEngine_Component_o *sortKindButton; // x20
  UISprite_o *changeSkillButtonSprite; // x21
  WebViewObject_o *Component_WebViewObject; // x19

  if ( (byte_418AA3E & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_B2C35C(&StringLiteral_16962/*"btn_bg_12"*/, v4);
    sub_B2C35C(&StringLiteral_17013/*"btn_sefilter_2"*/, v5);
    sub_B2C35C(&StringLiteral_17145/*"buttontxt_formation_19"*/, v6);
    byte_418AA3E = 1;
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
  AtlasManager__SetEventSprite(changeSkillButtonSprite, (System_String_o *)StringLiteral_17145/*"buttontxt_formation_19"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.bonusFilterSprite, (System_String_o *)StringLiteral_17013/*"btn_sefilter_2"*/, 0LL);
  changeSkillButton = (UnityEngine_Component_o *)this->fields.bonusFilterSprite;
  if ( !changeSkillButton
    || (changeSkillButton = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))changeSkillButton->klass[2]._1.typeMetadataHandle)(
                                                         changeSkillButton,
                                                         changeSkillButton->klass[2]._1.interopData),
        !sortKindButton)
    || (Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    sortKindButton,
                                    (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        changeSkillButton = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(
                                                         (UISprite_o *)Component_WebViewObject,
                                                         (System_String_o *)StringLiteral_16962/*"btn_bg_12"*/,
                                                         0LL),
        !Component_WebViewObject) )
  {
LABEL_12:
    sub_B2C434(changeSkillButton, method);
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
    sub_B2C434(classButtonControl, *(_QWORD *)&classPos);
  }
  return sort->fields.sortKind != 11;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__CloseSortDialog(
        FollowerSelectItemListViewManager_o *this,
        bool isResult,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_418AA57 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isResult);
    byte_418AA57 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
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
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
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
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  struct EventUpValSetupInfo_o **p_setupInfo; // x27
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // x22
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v69; // x22
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  FollowerSelectItemListViewManager_c *v82; // x0
  struct ListViewSort_o **p_supportSortInfo; // x8
  struct ListViewSort_o *v84; // x1
  struct ListViewSort_o **p_sort; // x28
  __int64 String_35342888; // x0
  __int64 v87; // x1
  const MethodInfo *v88; // x4
  int32_t InitialDisplayClass; // w0
  FollowerSelectItemListViewManager_c *v90; // x8
  EventUpValSetupInfo_o *v91; // x0
  QuestRestrictionInfo_o *v92; // x19
  System_String_o *v93; // x22
  __int64 v94; // x8
  __int64 v95; // x22
  unsigned __int64 v96; // x20
  System_String_o *v97; // x23
  int32_t EventId; // w26
  FollowerSelectItemListViewManager_o *v99; // x21
  ClassButtonControlComponent_o *classButtonControl; // x22
  ClassButtonControlComponent_CallbackFunc_o *v101; // x23
  ClassButtonControlComponent_o *v102; // x22
  const MethodInfo *v103; // x2
  QuestPhaseEntity_o *v104; // x20
  __int64 v105; // x22
  __int64 v106; // x22
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  FollowerInfo_array *QuestFollowerList; // x26
  int v109; // w20
  bool IsMyServantOrNpcRestriction_31241252; // w20
  bool v111; // cc
  BalanceConfig_c *v112; // x0
  int32_t ClassBoardReleaseQuestId; // w22
  bool IsQuestClear_25746984; // w22
  __int64 v115; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v116; // x23
  unsigned __int64 v117; // x24
  FollowerInfo_o **m_Items; // x22
  FollowerInfo_array *v119; // x9
  FollowerInfo_o *v120; // x27
  FollowerInfo_array *v121; // x25
  __int64 v122; // x26
  int32_t ReturnTypeByQuestId; // w0
  System_Int32_array *NpcServantIndividuality; // x0
  __int64 v125; // x22
  __int64 v126; // x23
  int32_t v127; // w0
  bool IsRecommendedFollower; // w20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v129; // x25
  char v130; // w20
  int32_t v131; // w0
  ServantLeaderInfo_o *ServantLeaderInfo; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v133; // x22
  __int64 v134; // x23
  __int64 v135; // x26
  int32_t v136; // w22
  int32_t ClassBoardBaseId; // w22
  UserClassBoardSquareMaster_o *Master_WarQuestSelectionMaster; // x23
  __int64 v139; // x26
  Il2CppObject *v140; // x0
  System_Int32_array **v141; // x0
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  System_Int32_array **v148; // x0
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  FollowerSelectItemListViewManager_c *v155; // x0
  _BOOL4 v156; // w8
  _BOOL4 v157; // w9
  int32_t followerClassId; // w26
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x20
  bool isServantEquipBonusFilterEnable; // w21
  bool isServantBonusFilterEnable; // w23
  bool isBonusFilterEnable; // w25
  FollowerSelectItemListViewItem_o *v163; // x22
  int v164; // w20
  bool v165; // w8
  int64_t userId; // x25
  int v167; // w8
  unsigned int v168; // w24
  int64_t v169; // x8
  Il2CppObject *v170; // x0
  Il2CppObject *v171; // x22
  __int64 v172; // x28
  BalanceConfig_c *v173; // x0
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t FixEventSupportDeckNum; // w22
  int32_t FixMainSupportDeckNum; // w23
  int32_t deckPriority; // w26
  unsigned __int64 v178; // x20
  int32_t v179; // w27
  System_Collections_Generic_Dictionary_int__int__o *v180; // x24
  bool v181; // w23
  bool v182; // w28
  FollowerSelectItemListViewItem_o *v183; // x22
  struct BalanceConfig_StaticFields *v184; // x8
  int32_t v185; // w22
  int32_t v186; // w23
  int32_t v187; // w26
  unsigned __int64 v188; // x27
  int32_t v189; // w19
  int32_t v190; // w24
  int32_t v191; // w19
  _BOOL4 v192; // w10
  _BOOL4 v193; // w9
  _BOOL4 v194; // w11
  System_Collections_Generic_Dictionary_int__int__o *v195; // x25
  int v196; // w21
  bool v197; // w20
  bool v198; // w28
  bool v199; // w22
  FollowerSelectItemListViewItem_o *v200; // x0
  int32_t v201; // w2
  EventMissionProgressRequest_Argument_ProgressData_o *v202; // x23
  int64_t v203; // x20
  unsigned __int64 v204; // x8
  unsigned __int64 v205; // x19
  __int64 v206; // x9
  __int64 v207; // x9
  unsigned __int64 v208; // x8
  FollowerInfo_o *v209; // x8
  Il2CppObject *v210; // x0
  __int64 v211; // x24
  BalanceConfig_c *v212; // x0
  struct BalanceConfig_StaticFields *v213; // x9
  int32_t v214; // w22
  int32_t v215; // w23
  int32_t v216; // w26
  unsigned __int64 v217; // x25
  int32_t v218; // w19
  System_Collections_Generic_Dictionary_int__int__o *v219; // x28
  bool v220; // w27
  bool v221; // w23
  bool v222; // w24
  FollowerSelectItemListViewItem_o *v223; // x22
  struct BalanceConfig_StaticFields *v224; // x8
  int32_t v225; // w22
  int32_t v226; // w23
  int32_t v227; // w26
  unsigned __int64 v228; // x27
  int32_t v229; // w22
  int32_t v230; // w19
  int v231; // w20
  bool v232; // w25
  bool v233; // w28
  int32_t v234; // w24
  bool v235; // w22
  FollowerSelectItemListViewItem_o *v236; // x23
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v238; // x2
  FollowerSelectItemListViewManager_c *v239; // x0
  const MethodInfo *v240; // x1
  struct UIScrollView_o *scrollView; // x8
  __int64 v242; // x0
  FollowerSelectItemListViewManager_o *v243; // x0
  int32_t v244; // w1
  int32_t v245; // w2
  bool v246; // w3
  const MethodInfo *v247; // x4
  int32_t supportDeckId; // [xsp+38h] [xbp-168h]
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary; // [xsp+48h] [xbp-158h]
  const MethodInfo *v250; // [xsp+58h] [xbp-148h]
  int32_t v251; // [xsp+6Ch] [xbp-134h]
  UserFollowMaster_o *questPhaseb; // [xsp+70h] [xbp-130h]
  bool questIdb; // [xsp+7Ch] [xbp-124h]
  QuestPhaseEntity_o *v256; // [xsp+80h] [xbp-120h]
  QuestPhaseEntity_o *v257; // [xsp+80h] [xbp-120h]
  int32_t v258; // [xsp+80h] [xbp-120h]
  bool isReleasedClassBoard; // [xsp+88h] [xbp-118h]
  __int64 v260; // [xsp+88h] [xbp-118h]
  __int64 v261; // [xsp+88h] [xbp-118h]
  struct System_Collections_Generic_List_ListViewItem__o **p_originalItemList; // [xsp+90h] [xbp-110h]
  bool v263; // [xsp+98h] [xbp-108h]
  int64_t v264; // [xsp+98h] [xbp-108h]
  int64_t v265; // [xsp+98h] [xbp-108h]
  FollowerInfo_array *v266; // [xsp+A0h] [xbp-100h]
  bool v267; // [xsp+A0h] [xbp-100h]
  __int64 v268; // [xsp+A0h] [xbp-100h]
  __int64 v269; // [xsp+A0h] [xbp-100h]
  __int64 v270; // [xsp+A0h] [xbp-100h]
  NpcFollowerMaster_o *v271; // [xsp+A8h] [xbp-F8h]
  NpcFollowerMaster_o *v272; // [xsp+A8h] [xbp-F8h]
  NpcFollowerMaster_o *v273; // [xsp+A8h] [xbp-F8h]
  FollowerInfo_o **v274; // [xsp+B0h] [xbp-F0h]
  unsigned int *v275; // [xsp+B0h] [xbp-F0h]
  unsigned int *v276; // [xsp+B0h] [xbp-F0h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v277; // [xsp+B8h] [xbp-E8h]
  __int64 v278; // [xsp+B8h] [xbp-E8h]
  __int64 v279; // [xsp+B8h] [xbp-E8h]
  _BOOL4 IsMyServantOrNpcRestriction; // [xsp+C0h] [xbp-E0h]
  unsigned int v281; // [xsp+C0h] [xbp-E0h]
  unsigned __int64 v282; // [xsp+C0h] [xbp-E0h]
  bool v283; // [xsp+C8h] [xbp-D8h]
  FollowerInfo_o **v284; // [xsp+C8h] [xbp-D8h]
  FollowerInfo_o **v285; // [xsp+C8h] [xbp-D8h]
  int32_t pos; // [xsp+D0h] [xbp-D0h]
  FollowerInfo_o *posc; // [xsp+D0h] [xbp-D0h]
  int32_t posa; // [xsp+D0h] [xbp-D0h]
  FollowerInfo_o *posd; // [xsp+D0h] [xbp-D0h]
  int32_t posb; // [xsp+D0h] [xbp-D0h]
  struct System_Collections_Generic_List_ListViewItem__o **p_mixItemList; // [xsp+D8h] [xbp-C8h]
  int32_t v297; // [xsp+100h] [xbp-A0h]
  int32_t size; // [xsp+100h] [xbp-A0h]
  FollowerInfo_o *v299; // [xsp+100h] [xbp-A0h]
  int32_t v300; // [xsp+100h] [xbp-A0h]
  FollowerInfo_o *v301; // [xsp+100h] [xbp-A0h]
  FollowerSelectItemListViewManager_o *v302; // [xsp+108h] [xbp-98h]
  UserGameEntity_o *v303; // [xsp+110h] [xbp-90h] BYREF
  UserGameEntity_o *v304; // [xsp+118h] [xbp-88h] BYREF
  UserClassBoardSquareEntity_o *v305; // [xsp+120h] [xbp-80h] BYREF
  UserServantEntity_o *v306; // [xsp+128h] [xbp-78h] BYREF
  UserServantEntity_o *entity; // [xsp+130h] [xbp-70h] BYREF
  UserServantEntity_o *v308; // [xsp+138h] [xbp-68h] BYREF
  NpcFollowerEntity_o *v309; // [xsp+140h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v310; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v311; // 0:x0.16

  if ( (byte_418AA40 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&questId);
    sub_B2C35C(&ClassButtonControlComponent_CallbackFunc_TypeInfo, v10);
    sub_B2C35C(&char___TypeInfo, v11);
    sub_B2C35C(&ClassBoardInfo_TypeInfo, v12);
    sub_B2C35C(&CondType_TypeInfo, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v16);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserFollowMaster___, v18);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v19);
    sub_B2C35C(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v20);
    sub_B2C35C(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, v21);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v22);
    sub_B2C35C(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, v23);
    sub_B2C35C(&Method_DataManager_GetMaster_UserFollowerMaster___, v24);
    sub_B2C35C(&DataManager_TypeInfo, v25);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v26);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27);
    sub_B2C35C(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v28);
    sub_B2C35C(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v29);
    sub_B2C35C(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v30);
    sub_B2C35C(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v31);
    sub_B2C35C(&FollowerSelectItemListViewItem_TypeInfo, v32);
    sub_B2C35C(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v33);
    sub_B2C35C(&FollowerSelectItemListViewManager_TypeInfo, v34);
    sub_B2C35C(&int___TypeInfo, v35);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardInfo__Add__, v36);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v37);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__, v38);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardInfo___ctor__, v39);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v40);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v41);
    sub_B2C35C(&System_Collections_Generic_List_ClassBoardInfo__TypeInfo, v42);
    sub_B2C35C(&System_Collections_Generic_List_ListViewItem__TypeInfo, v43);
    sub_B2C35C(&LocalizationManager_TypeInfo, v44);
    sub_B2C35C(&System_Math_TypeInfo, v45);
    sub_B2C35C(&NetworkManager_TypeInfo, v46);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v47);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v48);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v49);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v50);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v51);
    sub_B2C35C(&StringLiteral_2838/*"BonusFilterEventId"*/, v52);
    sub_B2C35C(&StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v53);
    sub_B2C35C(&StringLiteral_1/*""*/, v54);
    byte_418AA40 = 1;
  }
  v308 = 0LL;
  v309 = 0LL;
  v306 = 0LL;
  entity = 0LL;
  v304 = 0LL;
  v305 = 0LL;
  v303 = 0LL;
  this->fields.questId = questId;
  p_setupInfo = &this->fields.setupInfo;
  this->fields.questPhase = questPhase;
  this->fields.setupInfo = setupInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    *(System_String_array ***)&questPhase,
    *(System_String_array ***)&friendPointUpVal,
    *(System_Boolean_array ***)&friendPointUpMaxVal,
    (System_Int32_array **)friendPointCampaignEntityList,
    (System_Int32_array *)setupInfo,
    (System_Int32_array *)questRestrictionInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v302 = this;
  v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v62,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  p_mixItemList = &this->fields.mixItemList;
  this->fields.mixItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v62;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mixItemList,
    (System_Int32_array **)v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  v69 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v69,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.originalItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v69;
  p_originalItemList = &this->fields.originalItemList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.originalItemList,
    (System_Int32_array **)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v82 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v82 = FollowerSelectItemListViewManager_TypeInfo;
  }
  p_supportSortInfo = &v82->static_fields->supportSortInfo;
  v84 = *p_supportSortInfo;
  this->fields.sort = *p_supportSortInfo;
  p_sort = &this->fields.sort;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v84,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  if ( !this->fields.sort )
    goto LABEL_301;
  InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                          this,
                          questId,
                          questPhase,
                          this->fields.sort->fields.isRequestLoad,
                          v88);
  v90 = FollowerSelectItemListViewManager_TypeInfo;
  FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId = InitialDisplayClass;
  v90->static_fields->lastSelectedQuestId = questId;
  v90->static_fields->lastSelectedQuestPhase = questPhase;
  v91 = this->fields.setupInfo;
  v92 = questRestrictionInfo;
  if ( v91 && EventUpValSetupInfo__get_EventId(v91, 0LL) >= 1 )
  {
    String_35342888 = (__int64)UnityEngine_PlayerPrefs__GetString_35342888((System_String_o *)StringLiteral_2838/*"BonusFilterEventId"*/, 0LL);
    if ( !String_35342888 )
      goto LABEL_301;
    v93 = (System_String_o *)String_35342888;
    if ( *(int *)(String_35342888 + 16) < 1 )
      goto LABEL_20;
    String_35342888 = sub_B2C374(char___TypeInfo, 1LL);
    if ( !String_35342888 )
      goto LABEL_301;
    if ( !*(_DWORD *)(String_35342888 + 24) )
      goto LABEL_302;
    *(_WORD *)(String_35342888 + 32) = 44;
    String_35342888 = (__int64)System_String__Split(v93, (System_Char_array *)String_35342888, 0LL);
    if ( !String_35342888 )
      goto LABEL_301;
    v94 = *(_QWORD *)(String_35342888 + 24);
    v95 = String_35342888;
    if ( (int)v94 < 1 )
    {
LABEL_20:
      String_35342888 = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_301;
      ListViewSort__SetFilter((ListViewSort_o *)String_35342888, 18, 0, 0LL);
      String_35342888 = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_301;
      ListViewSort__SetFilter((ListViewSort_o *)String_35342888, 19, 0, 0LL);
      String_35342888 = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_301;
      ListViewSort__SetFilter((ListViewSort_o *)String_35342888, 20, 0, 0LL);
      String_35342888 = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_301;
      ListViewSort__SetFilter((ListViewSort_o *)String_35342888, 40, 1, 0LL);
      String_35342888 = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_301;
      ListViewSort__SetFilter((ListViewSort_o *)String_35342888, 41, 1, 0LL);
    }
    else
    {
      v96 = 0LL;
      while ( 1 )
      {
        if ( v96 >= (unsigned int)v94 )
          goto LABEL_302;
        String_35342888 = (__int64)*p_setupInfo;
        if ( !*p_setupInfo )
          goto LABEL_301;
        v97 = *(System_String_o **)(v95 + 32 + 8 * v96);
        EventId = EventUpValSetupInfo__get_EventId((EventUpValSetupInfo_o *)String_35342888, 0LL);
        String_35342888 = System_Int32__Parse(v97, 0LL);
        if ( EventId == (_DWORD)String_35342888 )
          break;
        LODWORD(v94) = *(_DWORD *)(v95 + 24);
        if ( (__int64)++v96 >= (int)v94 )
          goto LABEL_20;
      }
    }
  }
  String_35342888 = (__int64)*p_sort;
  if ( !*p_sort )
    goto LABEL_301;
  ListViewSort__Load((ListViewSort_o *)String_35342888, 0LL);
  v99 = v302;
  classButtonControl = v302->fields.classButtonControl;
  v101 = (ClassButtonControlComponent_CallbackFunc_o *)sub_B2C42C(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v101,
    (Il2CppObject *)v302,
    Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_301;
  ClassButtonControlComponent__init(classButtonControl, v101, questId, questPhase, 0, 0LL);
  v302->fields.isInput = 0;
  v102 = v302->fields.classButtonControl;
  String_35342888 = (__int64)FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  }
  if ( !v102 )
    goto LABEL_301;
  ClassButtonControlComponent__setCursor(
    v102,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(v302, setupInfo, v103);
  String_35342888 = (__int64)v302->fields.bonusFilterKindButton;
  if ( !String_35342888 )
    goto LABEL_301;
  String_35342888 = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)String_35342888, 0LL);
  if ( !String_35342888 )
    goto LABEL_301;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)String_35342888, v302->fields.isBonusFilterEnable, 0LL);
  if ( v302->fields.isBonusFilterEnable )
  {
    String_35342888 = (__int64)v302->fields.bonusFilterKindLabel;
    if ( !String_35342888 )
      goto LABEL_301;
    UILabel__set_text((UILabel_o *)String_35342888, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v302->fields.isRefreshBtnHide = 0;
  String_35342888 = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !String_35342888
    || (String_35342888 = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)String_35342888,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0 )
  {
LABEL_301:
    sub_B2C434(String_35342888, v87);
  }
  v104 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)String_35342888, questId, questPhase, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)v302, 0, 0LL);
  v256 = v104;
  if ( v104 )
  {
    v105 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v105 + 306) & 1) == 0 )
      sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v106 = **(_QWORD **)(v105 + 192);
    if ( (*(_BYTE *)(v106 + 306) & 1) == 0 )
      sub_AC505C(v106);
    String_35342888 = **(_QWORD **)(v106 + 184);
    if ( !String_35342888 )
      goto LABEL_301;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)String_35342888,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
    String_35342888 = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !String_35342888 )
      goto LABEL_301;
    v271 = (NpcFollowerMaster_o *)MasterData_WarQuestSelectionMaster;
    String_35342888 = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)String_35342888,
                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
    if ( !String_35342888 )
      goto LABEL_301;
    QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)String_35342888,
                          questId,
                          questPhase,
                          0LL);
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    String_35342888 = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !String_35342888 )
      goto LABEL_301;
    v109 = *(_DWORD *)(String_35342888 + 48);
    String_35342888 = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !String_35342888 )
      goto LABEL_301;
    pos = *(_DWORD *)(String_35342888 + 52);
    if ( questRestrictionInfo && v109 >= 1 )
    {
      IsMyServantOrNpcRestriction_31241252 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(
                                               questRestrictionInfo,
                                               pos,
                                               0LL);
      IsMyServantOrNpcRestriction = 0;
    }
    else if ( questRestrictionInfo )
    {
      v111 = v109 <= 0;
      IsMyServantOrNpcRestriction_31241252 = 0;
      IsMyServantOrNpcRestriction = 0;
      if ( v111 )
      {
        IsMyServantOrNpcRestriction_31241252 = 0;
        IsMyServantOrNpcRestriction = QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL);
      }
    }
    else
    {
      IsMyServantOrNpcRestriction = 0;
      IsMyServantOrNpcRestriction_31241252 = 0;
    }
    v112 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v112 = BalanceConfig_TypeInfo;
    }
    ClassBoardReleaseQuestId = v112->static_fields->ClassBoardReleaseQuestId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_25746984 = CondType__IsQuestClear_25746984(ClassBoardReleaseQuestId, -1, 0, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    String_35342888 = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    if ( !QuestFollowerList )
      goto LABEL_301;
    v115 = *(_QWORD *)&QuestFollowerList->max_length;
    if ( (int)v115 >= 1 )
    {
      v297 = 0;
      isReleasedClassBoard = IsQuestClear_25746984;
      v116 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)String_35342888;
      v117 = 0LL;
      m_Items = QuestFollowerList->m_Items;
      v119 = QuestFollowerList;
      v266 = QuestFollowerList;
      v263 = IsMyServantOrNpcRestriction_31241252;
      v274 = QuestFollowerList->m_Items;
      v277 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)String_35342888;
      do
      {
        if ( v117 >= (unsigned int)v115 )
          goto LABEL_302;
        v120 = m_Items[v117];
        if ( IsMyServantOrNpcRestriction_31241252 )
        {
          if ( !questRestrictionInfo )
            goto LABEL_301;
          v121 = v119;
          String_35342888 = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
          if ( !v120 )
            goto LABEL_301;
          String_35342888 = (__int64)FollowerInfo__getServantLeaderInfo(v120, 0, String_35342888, 0LL);
          v119 = v121;
          if ( String_35342888 )
          {
            v122 = String_35342888;
            String_35342888 = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !String_35342888 )
              goto LABEL_301;
            String_35342888 = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)String_35342888,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
            if ( !String_35342888 )
              goto LABEL_301;
            String_35342888 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)String_35342888,
                                &entity,
                                v120->fields.npcFollowerSvtId,
                                (const MethodInfo_24E4354 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
            if ( (String_35342888 & 1) != 0 )
            {
              ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
              NpcServantIndividuality = FollowerInfo__GetNpcServantIndividuality(v120, 0, ReturnTypeByQuestId, 0LL);
              goto LABEL_81;
            }
            if ( !v116 )
              goto LABEL_301;
            if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                    v116,
                    &v306,
                    v120->fields.npcFollowerSvtId,
                    (const MethodInfo_24E4354 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
              goto LABEL_90;
            String_35342888 = (__int64)v306;
            if ( !v306 )
              goto LABEL_301;
            if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v306, 0LL) )
            {
              String_35342888 = (__int64)v306;
              if ( !v306 )
                goto LABEL_301;
              NpcServantIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                          (NpcServantFollowerEntity_o *)v306,
                                          0LL);
LABEL_81:
              String_35342888 = QuestRestrictionInfo__IsRestrictionServantIndividuality_31244412(
                                  questRestrictionInfo,
                                  NpcServantIndividuality,
                                  pos,
                                  0LL);
            }
            else
            {
LABEL_90:
              v126 = *(_QWORD *)(v122 + 48);
              v125 = *(_QWORD *)(v122 + 56);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v310.fields.currentCryptoKey = v126;
              *(_QWORD *)&v310.fields.fakeValue = v125;
              v127 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v310, 0LL);
              String_35342888 = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                  questRestrictionInfo,
                                  v127,
                                  *(_DWORD *)(v122 + 64),
                                  *(_DWORD *)(v122 + 164),
                                  pos,
                                  0,
                                  0LL);
              m_Items = v274;
              v116 = v277;
            }
            v119 = v121;
            if ( (String_35342888 & 1) != 0 )
              goto LABEL_141;
          }
        }
        else if ( !v120 )
        {
          goto LABEL_301;
        }
        if ( !v120->fields.isFixedNpc && (!IsMyServantOrNpcRestriction || !v120->fields.isMySvtOrNpc) )
        {
          String_35342888 = (__int64)v271;
          if ( !v271 )
            goto LABEL_301;
          if ( NpcFollowerMaster__TryGetEntity(v271, &v309, v120->fields.userId, questId, questPhase, 0LL) )
          {
            String_35342888 = (__int64)v309;
            if ( !v309 )
              goto LABEL_301;
            IsRecommendedFollower = NpcFollowerEntity__IsRecommendedFollower(v309, 0LL);
          }
          else
          {
            IsRecommendedFollower = 0;
          }
          v129 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ClassBoardInfo__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v129,
            (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
          if ( !v116 )
            goto LABEL_301;
          String_35342888 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                              v116,
                              &v308,
                              v120->fields.npcFollowerSvtId,
                              (const MethodInfo_24E4354 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
          v283 = IsRecommendedFollower;
          if ( (String_35342888 & 1) != 0 )
          {
            if ( !v308 )
              goto LABEL_301;
            String_35342888 = NpcServantFollowerEntity__IsNotClassBoard(
                                v308->fields.imageLimitCount.fields.fakeValue,
                                0LL);
            if ( (String_35342888 & 1) != 0
              || (String_35342888 = QuestPhaseEntity__IsNotClassBoard(v256, 0LL), (String_35342888 & 1) != 0) )
            {
              v130 = 1;
LABEL_131:
              if ( !v129 )
                goto LABEL_301;
LABEL_132:
              v148 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v129,
                                              (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
              v120->fields.userClassBoardInfo = (struct ClassBoardInfo_array *)v148;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v120->fields.userClassBoardInfo,
                v148,
                v149,
                v150,
                v151,
                v152,
                v153,
                v154);
              v155 = FollowerSelectItemListViewManager_TypeInfo;
              if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
                v155 = FollowerSelectItemListViewManager_TypeInfo;
              }
              v156 = v99->fields.isBonusFilterEnable;
              v157 = v99->fields.isServantBonusFilterEnable;
              followerClassId = v155->static_fields->followerClassId;
              if ( (v130 & 1) != 0 )
                classBoardMaxDictionary = 0LL;
              else
                classBoardMaxDictionary = v99->fields.classBoardMaxDictionary;
              isServantEquipBonusFilterEnable = v99->fields.isServantEquipBonusFilterEnable;
              isServantBonusFilterEnable = v157;
              isBonusFilterEnable = v156;
              v163 = (FollowerSelectItemListViewItem_o *)sub_B2C42C(FollowerSelectItemListViewItem_TypeInfo);
              FollowerSelectItemListViewItem___ctor(
                v163,
                v297,
                0,
                v120,
                followerClassId,
                friendPointUpVal,
                friendPointUpMaxVal,
                friendPointCampaignEntityList,
                isBonusFilterEnable,
                isServantBonusFilterEnable,
                isServantEquipBonusFilterEnable,
                v283,
                setupInfo,
                questRestrictionInfo,
                0,
                0,
                0,
                classBoardMaxDictionary,
                isReleasedClassBoard,
                v250);
              String_35342888 = (__int64)*p_mixItemList;
              if ( !*p_mixItemList )
                goto LABEL_301;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)String_35342888,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v163,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
              IsMyServantOrNpcRestriction_31241252 = v263;
              v116 = v277;
              String_35342888 = (__int64)*p_originalItemList;
              if ( !*p_originalItemList )
                goto LABEL_301;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)String_35342888,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v163,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
              ++v297;
              v99 = v302;
              m_Items = v274;
              v119 = v266;
              goto LABEL_141;
            }
            if ( !questRestrictionInfo )
              goto LABEL_301;
            v131 = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
            ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v120, 0, v131, 0LL);
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            String_35342888 = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
            if ( !ServantLeaderInfo )
              goto LABEL_301;
            v133 = (DataMasterBase_WarMaster__WarEntity__int__o *)String_35342888;
            v135 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
            v134 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v311.fields.currentCryptoKey = v135;
            *(_QWORD *)&v311.fields.fakeValue = v134;
            String_35342888 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v311, 0LL);
            if ( !v133 )
              goto LABEL_301;
            String_35342888 = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         v133,
                                         String_35342888,
                                         (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !String_35342888 )
              goto LABEL_301;
            v136 = *(_DWORD *)(String_35342888 + 80);
            String_35342888 = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( !String_35342888 )
              goto LABEL_301;
            ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(
                                 (ClassBoardClassMaster_o *)String_35342888,
                                 v136,
                                 0LL);
            Master_WarQuestSelectionMaster = (UserClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            String_35342888 = NetworkManager__get_UserId(0LL);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_301;
            String_35342888 = UserClassBoardSquareMaster__TryGetEntity(
                                Master_WarQuestSelectionMaster,
                                &v305,
                                String_35342888,
                                ClassBoardBaseId,
                                0LL);
            if ( (String_35342888 & 1) != 0 )
            {
              v139 = sub_B2C42C(ClassBoardInfo_TypeInfo);
              ClassBoardInfo___ctor((ClassBoardInfo_o *)v139, 0LL);
              if ( !v139 )
                goto LABEL_301;
              *(_DWORD *)(v139 + 16) = ClassBoardBaseId;
              if ( !v305 )
                goto LABEL_301;
              String_35342888 = (__int64)v305->fields.classBoardSquareIds;
              if ( !String_35342888 )
                goto LABEL_301;
              v140 = System_Array__Clone((System_Array_o *)String_35342888, 0LL);
              v141 = (System_Int32_array **)sub_B2C41C(v140, int___TypeInfo);
              *(_QWORD *)(v139 + 24) = v141;
              sub_B2C2F8((BattleServantConfConponent_o *)(v139 + 24), v141, v142, v143, v144, v145, v146, v147);
              if ( !v129 )
                goto LABEL_301;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v129,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v139,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ClassBoardInfo__Add__);
              v130 = 0;
              goto LABEL_132;
            }
          }
          v130 = 0;
          goto LABEL_131;
        }
LABEL_141:
        LODWORD(v115) = v119->max_length;
        ++v117;
      }
      while ( (__int64)v117 < (int)v115 );
    }
    if ( !questRestrictionInfo || !QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL) )
      goto LABEL_151;
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    String_35342888 = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !String_35342888 )
      goto LABEL_301;
    v164 = *(_DWORD *)(String_35342888 + 48);
    String_35342888 = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !String_35342888 )
      goto LABEL_301;
    if ( v164 >= 1 )
      v165 = !QuestRestrictionInfo__IsSelectableNormalSupport(
                questRestrictionInfo,
                *(_DWORD *)(String_35342888 + 52),
                0LL);
    else
LABEL_151:
      v165 = 0;
    v99->fields.isRefreshBtnHide = v165;
    if ( !v165 && !v256->fields.isNpcOnly )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      String_35342888 = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
      if ( !String_35342888 )
        goto LABEL_301;
      String_35342888 = DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                          (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)String_35342888,
                          &v304,
                          (const MethodInfo_24E43E0 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
      if ( (String_35342888 & 1) != 0 )
      {
        if ( !v304 )
          goto LABEL_301;
        userId = v304->fields.userId;
        if ( userId )
        {
          v167 = *(_DWORD *)(userId + 24);
          if ( v167 >= 1 )
          {
            v168 = 0;
            v264 = v304->fields.userId;
            do
            {
              if ( v168 >= v167 )
                goto LABEL_302;
              v169 = userId + 8LL * (int)v168;
              String_35342888 = *(_QWORD *)(v169 + 32);
              v284 = (FollowerInfo_o **)(v169 + 32);
              if ( !String_35342888 )
                goto LABEL_301;
              FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)String_35342888, 0LL);
              if ( v168 >= *(_DWORD *)(userId + 24) )
                goto LABEL_302;
              if ( !*v284 )
                goto LABEL_301;
              String_35342888 = (__int64)(*v284)->fields.mainSupportDeckIds;
              if ( !String_35342888 )
                goto LABEL_301;
              v260 = *(_QWORD *)(String_35342888 + 24);
              v170 = System_Array__Clone((System_Array_o *)String_35342888, 0LL);
              if ( v170 )
              {
                v171 = v170;
                v172 = sub_B2C41C(v170, int___TypeInfo);
                if ( !v172 )
                {
LABEL_303:
                  sub_B2C728(v171);
                  FollowerSelectItemListViewManager__GetInitialDisplayClass(v243, v244, v245, v246, v247);
                  return;
                }
              }
              else
              {
                v172 = 0LL;
              }
              v173 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v173 = BalanceConfig_TypeInfo;
              }
              static_fields = v173->static_fields;
              FixMainSupportDeckNum = static_fields->FixMainSupportDeckNum;
              FixEventSupportDeckNum = static_fields->FixEventSupportDeckNum;
              if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_Math_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              }
              String_35342888 = System_Math__Max_45012344(FixMainSupportDeckNum, FixEventSupportDeckNum, 0LL);
              v281 = v168;
              v278 = v172;
              if ( (int)v260 <= 0 )
              {
                v272 = (NpcFollowerMaster_o *)(int)v260;
                v275 = (unsigned int *)(v172 + 24);
              }
              else
              {
                deckPriority = String_35342888;
                v178 = 0LL;
                v272 = (NpcFollowerMaster_o *)(int)v260;
                v275 = (unsigned int *)(v172 + 24);
                v257 = (QuestPhaseEntity_o *)(v172 + 32);
                do
                {
                  if ( !*p_originalItemList )
                    goto LABEL_301;
                  if ( v168 >= *(_DWORD *)(userId + 24) )
                    goto LABEL_302;
                  if ( !v172 )
                    goto LABEL_301;
                  if ( v178 >= *v275 )
                    goto LABEL_302;
                  size = (*p_originalItemList)->fields._size;
                  v179 = *((_DWORD *)&v257->klass + v178);
                  v180 = v99->fields.classBoardMaxDictionary;
                  v181 = v99->fields.isServantEquipBonusFilterEnable;
                  posc = *v284;
                  v182 = v99->fields.isServantBonusFilterEnable;
                  v267 = v99->fields.isBonusFilterEnable;
                  v183 = (FollowerSelectItemListViewItem_o *)sub_B2C42C(FollowerSelectItemListViewItem_TypeInfo);
                  FollowerSelectItemListViewItem___ctor(
                    v183,
                    size,
                    0,
                    posc,
                    0,
                    friendPointUpVal,
                    friendPointUpMaxVal,
                    friendPointCampaignEntityList,
                    v267,
                    v182,
                    v181,
                    0,
                    setupInfo,
                    v92,
                    1,
                    v179,
                    deckPriority,
                    v180,
                    1,
                    v250);
                  String_35342888 = (__int64)v99->fields.originalItemList;
                  if ( !String_35342888 )
                    goto LABEL_301;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)String_35342888,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v183,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                  v168 = v281;
                  v172 = v278;
                  ++v178;
                  --deckPriority;
                }
                while ( (__int64)v178 < (int)v260 );
              }
              posa = 0;
              v268 = v172 + 32;
              while ( 1 )
              {
                String_35342888 = (__int64)BalanceConfig_TypeInfo;
                if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  String_35342888 = (__int64)BalanceConfig_TypeInfo;
                }
                v184 = *(struct BalanceConfig_StaticFields **)(String_35342888 + 184);
                if ( posa >= v184->SupportDeckMemberMax )
                  break;
                if ( (*(_BYTE *)(String_35342888 + 307) & 4) != 0 && !*(_DWORD *)(String_35342888 + 224) )
                {
                  j_il2cpp_runtime_class_init_0(String_35342888);
                  v184 = BalanceConfig_TypeInfo->static_fields;
                }
                v186 = v184->FixMainSupportDeckNum;
                v185 = v184->FixEventSupportDeckNum;
                if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !System_Math_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                }
                String_35342888 = System_Math__Max_45012344(v186, v185, 0LL);
                if ( (int)v260 >= 1 )
                {
                  v187 = String_35342888;
                  v188 = 0LL;
                  do
                  {
                    if ( !*p_mixItemList )
                      goto LABEL_301;
                    v189 = (*p_mixItemList)->fields._size;
                    String_35342888 = (__int64)BalanceConfig_TypeInfo;
                    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      String_35342888 = (__int64)BalanceConfig_TypeInfo;
                    }
                    if ( v168 >= *(_DWORD *)(userId + 24) )
                      goto LABEL_302;
                    if ( !v172 )
                      goto LABEL_301;
                    if ( v188 >= *v275 )
                      goto LABEL_302;
                    v190 = v189;
                    v191 = *(_DWORD *)(v268 + 4 * v188);
                    v192 = v99->fields.isServantBonusFilterEnable;
                    v299 = *v284;
                    v193 = v99->fields.isBonusFilterEnable;
                    v194 = v99->fields.isServantEquipBonusFilterEnable;
                    v195 = v99->fields.classBoardMaxDictionary;
                    v196 = *(_DWORD *)(*(_QWORD *)(String_35342888 + 184) + 164LL);
                    v197 = v194;
                    v198 = v192;
                    v199 = v193;
                    v200 = (FollowerSelectItemListViewItem_o *)sub_B2C42C(FollowerSelectItemListViewItem_TypeInfo);
                    supportDeckId = v191;
                    v92 = questRestrictionInfo;
                    v201 = v196 - posa;
                    v99 = v302;
                    v202 = (EventMissionProgressRequest_Argument_ProgressData_o *)v200;
                    FollowerSelectItemListViewItem___ctor(
                      v200,
                      v190,
                      v201,
                      v299,
                      posa,
                      friendPointUpVal,
                      friendPointUpMaxVal,
                      friendPointCampaignEntityList,
                      v199,
                      v198,
                      v197,
                      0,
                      setupInfo,
                      questRestrictionInfo,
                      1,
                      supportDeckId,
                      v187,
                      v195,
                      1,
                      v250);
                    String_35342888 = (__int64)v302->fields.mixItemList;
                    if ( !String_35342888 )
                      goto LABEL_301;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)String_35342888,
                      v202,
                      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                    userId = v264;
                    v168 = v281;
                    v172 = v278;
                    ++v188;
                    --v187;
                  }
                  while ( (__int64)v188 < (__int64)v272 );
                }
                ++posa;
              }
              v167 = *(_DWORD *)(userId + 24);
              ++v168;
            }
            while ( (int)v168 < v167 );
          }
        }
      }
      v251 = FollowerInfo__GetReturnTypeByQuestId(questId, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      String_35342888 = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserFollowerMaster___);
      if ( !String_35342888 )
        goto LABEL_301;
      String_35342888 = DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                          (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)String_35342888,
                          &v303,
                          (const MethodInfo_24E43E0 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
      if ( (String_35342888 & 1) != 0 )
      {
        if ( !v303 )
          goto LABEL_301;
        v203 = v303->fields.userId;
        String_35342888 = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !String_35342888 )
          goto LABEL_301;
        String_35342888 = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)String_35342888,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !String_35342888 )
          goto LABEL_301;
        String_35342888 = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)String_35342888,
                                     questId,
                                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !String_35342888 )
          goto LABEL_301;
        questIdb = QuestEntity__HasFlag_23879348((QuestEntity_o *)String_35342888, 0x8000000LL, questPhase, 0LL);
        String_35342888 = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !String_35342888 )
          goto LABEL_301;
        String_35342888 = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)String_35342888,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserFollowMaster___);
        questPhaseb = (UserFollowMaster_o *)String_35342888;
        if ( !v203 )
          goto LABEL_301;
        v204 = *(_QWORD *)(v203 + 24);
        if ( (int)v204 >= 1 )
        {
          v205 = 0LL;
          v258 = 0;
          v265 = v203;
          do
          {
            v204 = (unsigned int)v204;
            if ( questIdb )
            {
              if ( v205 >= (unsigned int)v204 )
                goto LABEL_302;
              v206 = *(_QWORD *)(v203 + 8 * v205 + 32);
              if ( !v206 )
                goto LABEL_301;
              if ( *(_DWORD *)(v206 + 36) == 5 )
              {
                String_35342888 = (__int64)questPhaseb;
                if ( !questPhaseb )
                  goto LABEL_301;
                String_35342888 = UserFollowMaster__IsFollowUser(questPhaseb, *(_QWORD *)(v206 + 16), 0LL);
                if ( (String_35342888 & 1) == 0 )
                  goto LABEL_290;
                v204 = *(unsigned int *)(v203 + 24);
              }
            }
            else
            {
              if ( v205 >= (unsigned int)v204 )
                goto LABEL_302;
              v207 = *(_QWORD *)(v203 + 8 * v205 + 32);
              if ( !v207 )
                goto LABEL_301;
              if ( *(_DWORD *)(v207 + 36) == 5 )
                goto LABEL_290;
            }
            if ( v205 >= v204 )
              goto LABEL_302;
            v208 = v203 + 8 * v205;
            String_35342888 = *(_QWORD *)(v208 + 32);
            v285 = (FollowerInfo_o **)(v208 + 32);
            if ( !String_35342888 )
              goto LABEL_301;
            FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)String_35342888, 0LL);
            String_35342888 = sub_B2C374(int___TypeInfo, 0LL);
            if ( v205 >= *(unsigned int *)(v203 + 24) )
              goto LABEL_302;
            v209 = *v285;
            if ( !*v285 )
              goto LABEL_301;
            if ( v251 )
            {
              String_35342888 = (__int64)v209->fields.eventSupportDeckIds;
              if ( !String_35342888 )
                goto LABEL_301;
            }
            else
            {
              String_35342888 = (__int64)v209->fields.mainSupportDeckIds;
              if ( !String_35342888 )
                goto LABEL_301;
            }
            v261 = *(_QWORD *)(String_35342888 + 24);
            v210 = System_Array__Clone((System_Array_o *)String_35342888, 0LL);
            if ( v210 )
            {
              v171 = v210;
              v211 = sub_B2C41C(v210, int___TypeInfo);
              if ( !v211 )
                goto LABEL_303;
            }
            else
            {
              v211 = 0LL;
            }
            v212 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v212 = BalanceConfig_TypeInfo;
            }
            v213 = v212->static_fields;
            v215 = v213->FixMainSupportDeckNum;
            v214 = v213->FixEventSupportDeckNum;
            if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Math_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            }
            String_35342888 = System_Math__Max_45012344(v215, v214, 0LL);
            v279 = v211;
            v282 = v205;
            if ( (int)v261 > 0 )
            {
              v216 = String_35342888;
              v217 = 0LL;
              v273 = (NpcFollowerMaster_o *)(int)v261;
              v276 = (unsigned int *)(v211 + 24);
              v269 = v211 + 32;
              while ( 1 )
              {
                if ( !*p_originalItemList )
                  goto LABEL_301;
                if ( v205 >= *(unsigned int *)(v203 + 24) )
                  break;
                if ( !v211 )
                  goto LABEL_301;
                if ( v217 >= *v276 )
                  break;
                v300 = (*p_originalItemList)->fields._size;
                v218 = *(_DWORD *)(v269 + 4 * v217);
                v219 = v99->fields.classBoardMaxDictionary;
                v220 = v99->fields.isServantEquipBonusFilterEnable;
                posd = *v285;
                v221 = v99->fields.isServantBonusFilterEnable;
                v222 = v99->fields.isBonusFilterEnable;
                v223 = (FollowerSelectItemListViewItem_o *)sub_B2C42C(FollowerSelectItemListViewItem_TypeInfo);
                FollowerSelectItemListViewItem___ctor(
                  v223,
                  v300,
                  0,
                  posd,
                  0,
                  friendPointUpVal,
                  friendPointUpMaxVal,
                  friendPointCampaignEntityList,
                  v222,
                  v221,
                  v220,
                  0,
                  setupInfo,
                  questRestrictionInfo,
                  0,
                  v218,
                  v216,
                  v219,
                  1,
                  v250);
                String_35342888 = (__int64)v99->fields.originalItemList;
                if ( !String_35342888 )
                  goto LABEL_301;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)String_35342888,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v223,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                v211 = v279;
                v205 = v282;
                ++v217;
                --v216;
                if ( (__int64)v217 >= (int)v261 )
                  goto LABEL_263;
              }
LABEL_302:
              v242 = sub_B2C460(String_35342888);
              sub_B2C400(v242, 0LL);
            }
            v273 = (NpcFollowerMaster_o *)(int)v261;
            v276 = (unsigned int *)(v211 + 24);
LABEL_263:
            posb = 0;
            v270 = v211 + 32;
            while ( 1 )
            {
              String_35342888 = (__int64)BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                String_35342888 = (__int64)BalanceConfig_TypeInfo;
              }
              v224 = *(struct BalanceConfig_StaticFields **)(String_35342888 + 184);
              if ( posb >= v224->SupportDeckMemberMax )
                break;
              if ( (*(_BYTE *)(String_35342888 + 307) & 4) != 0 && !*(_DWORD *)(String_35342888 + 224) )
              {
                j_il2cpp_runtime_class_init_0(String_35342888);
                v224 = BalanceConfig_TypeInfo->static_fields;
              }
              v226 = v224->FixMainSupportDeckNum;
              v225 = v224->FixEventSupportDeckNum;
              if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_Math_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              }
              String_35342888 = System_Math__Max_45012344(v226, v225, 0LL);
              if ( (int)v261 >= 1 )
              {
                v227 = String_35342888;
                v228 = 0LL;
                while ( *p_mixItemList )
                {
                  v229 = (*p_mixItemList)->fields._size;
                  String_35342888 = (__int64)BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    String_35342888 = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( v205 >= *(unsigned int *)(v203 + 24) )
                    goto LABEL_302;
                  if ( !v211 )
                    goto LABEL_301;
                  if ( v228 >= *v276 )
                    goto LABEL_302;
                  v230 = *(_DWORD *)(v270 + 4 * v228);
                  v301 = *v285;
                  v231 = *(_DWORD *)(*(_QWORD *)(String_35342888 + 184) + 164LL);
                  v232 = v99->fields.isServantEquipBonusFilterEnable;
                  v233 = v99->fields.isServantBonusFilterEnable;
                  v234 = v229;
                  v235 = v99->fields.isBonusFilterEnable;
                  classBoardMaxNumDictionary = v302->fields.classBoardMaxDictionary;
                  v99 = v302;
                  v236 = (FollowerSelectItemListViewItem_o *)sub_B2C42C(FollowerSelectItemListViewItem_TypeInfo);
                  FollowerSelectItemListViewItem___ctor(
                    v236,
                    v234,
                    v231 - posb,
                    v301,
                    posb,
                    friendPointUpVal,
                    friendPointUpMaxVal,
                    friendPointCampaignEntityList,
                    v235,
                    v233,
                    v232,
                    0,
                    setupInfo,
                    questRestrictionInfo,
                    0,
                    v230,
                    v227,
                    classBoardMaxNumDictionary,
                    1,
                    v250);
                  String_35342888 = (__int64)v302->fields.mixItemList;
                  if ( !String_35342888 )
                    goto LABEL_301;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)String_35342888,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v236,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                  v203 = v265;
                  v211 = v279;
                  v205 = v282;
                  ++v228;
                  --v227;
                  if ( (__int64)v228 >= (__int64)v273 )
                    goto LABEL_281;
                }
                goto LABEL_301;
              }
LABEL_281:
              ++posb;
            }
            ++v258;
            if ( (*(_BYTE *)(String_35342888 + 307) & 4) != 0 && !*(_DWORD *)(String_35342888 + 224) )
            {
              j_il2cpp_runtime_class_init_0(String_35342888);
              v224 = BalanceConfig_TypeInfo->static_fields;
            }
            if ( v258 >= v224->SupportListMax )
              break;
LABEL_290:
            LODWORD(v204) = *(_DWORD *)(v203 + 24);
            ++v205;
          }
          while ( (__int64)v205 < (int)v204 );
        }
      }
    }
  }
  String_35342888 = (__int64)v99->fields.refreshButtonObject;
  if ( !String_35342888 )
    goto LABEL_301;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)String_35342888, !v99->fields.isRefreshBtnHide, 0LL);
  emptyMessageLabel = v99->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  String_35342888 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_301;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)String_35342888, 0LL);
  v239 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v239 = FollowerSelectItemListViewManager_TypeInfo;
  }
  FollowerSelectItemListViewManager__SortClass(v99, v239->static_fields->followerClassId, v238);
  ListViewManager__SortItem((ListViewManager_o *)v99, -1, 0, -1, 0LL);
  FollowerSelectItemListViewManager__SetFilterButtonImage(v99, v240);
  scrollView = v99->fields.scrollView;
  if ( !scrollView )
    goto LABEL_301;
  BYTE2(scrollView->fields.scrollWheelFactor) = 1;
}


void __fastcall FollowerSelectItemListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  FollowerSelectItemListViewManager_c *v3; // x0
  ListViewSort_o *supportSortInfo; // x0

  if ( (byte_418AA39 & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_6732/*"FollowerSelectClass"*/, v2);
    byte_418AA39 = 1;
  }
  v3 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v3 = FollowerSelectItemListViewManager_TypeInfo;
  }
  supportSortInfo = v3->static_fields->supportSortInfo;
  if ( !supportSortInfo )
    sub_B2C434(0LL, v1);
  ListViewSort__DeleteContinueData(supportSortInfo, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6732/*"FollowerSelectClass"*/, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FollowerSelectItemListViewManager__DestroyList_30676208(this, 0LL, v2);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList_30676208(
        FollowerSelectItemListViewManager_o *this,
        BattleSetupInfo_o *battleSetupInfo,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  FollowerSelectItemListViewManager_o *v9; // x19
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Int32_array **eventUpValSetupInfo; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  FollowerSelectItemListViewManager_c *v28; // x0
  System_Int32_array ***static_fields; // x8
  System_Int32_array **v30; // x1
  FollowerSelectItemListViewManager_o **p_sort; // x21
  const MethodInfo *v32; // x4
  int32_t InitialDisplayClass; // w0
  FollowerSelectItemListViewManager_c *v34; // x8
  int32_t v35; // w20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  FollowerSelectItemListViewManager_o *v42; // x0
  int monitor; // w20
  FollowerSelectItemListViewManager_c *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  ClassButtonControlComponent_o *classButtonControl; // x20
  ClassButtonControlComponent_CallbackFunc_o *v52; // x21
  ClassButtonControlComponent_o *v53; // x20
  const MethodInfo *v54; // x2
  UILabel_o *bonusFilterKindLabel; // x20

  v9 = this;
  if ( (byte_418AA46 & 1) == 0 )
  {
    sub_B2C35C(&ClassButtonControlComponent_CallbackFunc_TypeInfo, battleSetupInfo);
    sub_B2C35C(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v10);
    sub_B2C35C(&FollowerSelectItemListViewManager_TypeInfo, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_11798/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/, v13);
    this = (FollowerSelectItemListViewManager_o *)sub_B2C35C(&StringLiteral_6732/*"FollowerSelectClass"*/, v14);
    byte_418AA46 = 1;
  }
  if ( battleSetupInfo )
  {
    eventUpValSetupInfo = (System_Int32_array **)battleSetupInfo->fields.eventUpValSetupInfo;
    if ( !v9 )
      goto LABEL_45;
  }
  else
  {
    eventUpValSetupInfo = 0LL;
    if ( !v9 )
      goto LABEL_45;
  }
  v9->fields.setupInfo = (struct EventUpValSetupInfo_o *)eventUpValSetupInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v9->fields.setupInfo,
    eventUpValSetupInfo,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v9->fields.questRestrictionInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields.questRestrictionInfo, 0LL, v16, v17, v18, v19, v20, v21);
  v28 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v28 = FollowerSelectItemListViewManager_TypeInfo;
  }
  static_fields = (System_Int32_array ***)v28->static_fields;
  v30 = *static_fields;
  v9->fields.sort = (struct ListViewSort_o *)*static_fields;
  p_sort = (FollowerSelectItemListViewManager_o **)&v9->fields.sort;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields.sort, v30, v22, v23, v24, v25, v26, v27);
  if ( battleSetupInfo )
  {
    this = (FollowerSelectItemListViewManager_o *)BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
    if ( !*p_sort )
      goto LABEL_45;
    InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                            v9,
                            (int32_t)this,
                            battleSetupInfo->fields.questPhase,
                            BYTE1((*p_sort)->fields.dropObjectList),
                            v32);
    v34 = FollowerSelectItemListViewManager_TypeInfo;
    v35 = InitialDisplayClass;
    if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v34 = FollowerSelectItemListViewManager_TypeInfo;
    }
    v34->static_fields->followerClassId = v35;
  }
  this = *p_sort;
  if ( !*p_sort )
    goto LABEL_45;
  ListViewSort__Load((ListViewSort_o *)this, 0LL);
  ListViewManager__DestroyList((ListViewManager_o *)v9, 0LL);
  this = (FollowerSelectItemListViewManager_o *)v9->fields.sort;
  if ( !this )
    goto LABEL_45;
  ListViewSort__Save((ListViewSort_o *)this, 0LL);
  if ( !*p_sort )
    goto LABEL_45;
  if ( BYTE2((*p_sort)->fields.dropObjectList) )
  {
    v42 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v42 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor = (int)v42->fields.itemList->monitor;
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(
                      v42,
                      (const MethodInfo *)eventUpValSetupInfo) )
    {
      v44 = FollowerSelectItemListViewManager_TypeInfo;
      if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v44 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6732/*"FollowerSelectClass"*/, v44->static_fields->followerClassId, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
  v9->fields.originalItemList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields.originalItemList, 0LL, v36, v37, v38, v39, v40, v41);
  v9->fields.mixItemList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields.mixItemList, 0LL, v45, v46, v47, v48, v49, v50);
  classButtonControl = v9->fields.classButtonControl;
  v52 = (ClassButtonControlComponent_CallbackFunc_o *)sub_B2C42C(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v52,
    (Il2CppObject *)v9,
    Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_45;
  ClassButtonControlComponent__init(classButtonControl, v52, v9->fields.questId, v9->fields.questPhase, 0, 0LL);
  v9->fields.isInput = 0;
  this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
  v53 = v9->fields.classButtonControl;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  }
  if ( !v53 )
    goto LABEL_45;
  ClassButtonControlComponent__setCursor(
    v53,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(v9, v9->fields.setupInfo, v54);
  this = (FollowerSelectItemListViewManager_o *)v9->fields.bonusFilterKindButton;
  if ( !this )
    goto LABEL_45;
  this = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v9->fields.isBonusFilterEnable, 0LL);
  if ( v9->fields.isBonusFilterEnable )
  {
    bonusFilterKindLabel = v9->fields.bonusFilterKindLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (FollowerSelectItemListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11798/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/, 0LL);
    if ( bonusFilterKindLabel )
    {
      UILabel__set_text(bonusFilterKindLabel, (System_String_o *)this, 0LL);
      goto LABEL_41;
    }
LABEL_45:
    sub_B2C434(this, eventUpValSetupInfo);
  }
LABEL_41:
  this = (FollowerSelectItemListViewManager_o *)v9->fields.tutorialListViewObject;
  if ( !this )
    goto LABEL_45;
  ((void (__fastcall *)(FollowerSelectItemListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._4_SetObjectItem.method)(
    this,
    this->klass->vtable._5_SetSortButtonImage.methodPtr);
  this = (FollowerSelectItemListViewManager_o *)v9->fields.tutorialListViewObject;
  if ( !this )
    goto LABEL_45;
  this = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__EndClassCompatibilityMenu(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_418AA52 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_418AA52 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  CommonUI__CloseClassCompatibilityMenu(Instance, 0LL, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__EndCloseClassBoardEffectListDialog(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_418AA61 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_418AA61 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  CommonUI__CloseClassBoardEffectListDialog(Instance, 0LL, 0LL);
  this->fields.isInput = 1;
}


void __fastcall FollowerSelectItemListViewManager__EndCloseSelectBonusFilterKind(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__EndSelectBonusFilterKind(
        FollowerSelectItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  ListViewSort_o *sort; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v11; // x21

  if ( (byte_418AA54 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_418AA54 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    FollowerSelectItemListViewManager__SetFilterButtonImage(this, v7);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_8;
    ListViewSort__Save(sort, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__,
    0LL);
  if ( !Instance )
LABEL_8:
    sub_B2C434(sort, v8);
  CommonUI__CloseServantBonusFilterSelectMenu(Instance, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerSelectItemListViewManager__GetAdvantageClassId(
        FollowerSelectItemListViewManager_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v14; // x20
  int32_t result; // w0
  struct System_Int32_array *classIds; // x8
  struct System_Int32_array *v17; // x8
  WarEntity_o *v18; // x8
  __int64 v19; // x0

  if ( (byte_418AA43 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, *(_QWORD *)&questId);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, v8);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_418AA43 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_17;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  if ( !Entity )
    return defaultValue;
  v14 = Entity;
  result = QuestPhaseEntity__GetAdvantageClassId(Entity, 0LL);
  if ( result != -1 )
    return result;
  classIds = v14->fields.classIds;
  if ( !classIds || !*(_QWORD *)&classIds->max_length )
    return defaultValue;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v17 = v14->fields.classIds;
  if ( !v17 )
    goto LABEL_17;
  if ( !v17->max_length )
  {
    v19 = sub_B2C460(Instance);
    sub_B2C400(v19, 0LL);
  }
  if ( !Instance )
LABEL_17:
    sub_B2C434(Instance, v12);
  v18 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          v17->m_Items[1],
          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  result = defaultValue;
  if ( v18 )
    return *(&v18->fields.flag + 1);
  return result;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_c *v2; // x0

  if ( (byte_418AA49 & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewManager_TypeInfo, method);
    byte_418AA49 = 1;
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

  if ( (byte_418AA62 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    byte_418AA62 = 1;
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
  __int64 v8; // x1
  int32_t PlayerPrefsFollowerClassId; // w21
  FollowerSelectItemListViewManager_c *v10; // x0
  _BOOL8 AdvantageClassAuto; // x0
  const MethodInfo *v12; // x3
  int32_t AdvantageClassId; // w22
  _BOOL8 IsSameQuestAndPhase; // x0
  const MethodInfo *v15; // x4

  if ( (byte_418AA41 & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewManager_TypeInfo, *(_QWORD *)&questId);
    this = (FollowerSelectItemListViewManager_o *)sub_B2C35C(&OptionManager_TypeInfo, v8);
    byte_418AA41 = 1;
  }
  if ( isInitialize )
  {
    PlayerPrefsFollowerClassId = FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(
                                   this,
                                   *(const MethodInfo **)&questId);
  }
  else
  {
    v10 = FollowerSelectItemListViewManager_TypeInfo;
    if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v10 = FollowerSelectItemListViewManager_TypeInfo;
    }
    PlayerPrefsFollowerClassId = v10->static_fields->followerClassId;
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
                            v12);
    AdvantageClassId = PlayerPrefsFollowerClassId;
    if ( !IsSameQuestAndPhase )
      AdvantageClassId = FollowerSelectItemListViewManager__GetAdvantageClassId(
                           (FollowerSelectItemListViewManager_o *)IsSameQuestAndPhase,
                           questId,
                           questPhase,
                           PlayerPrefsFollowerClassId,
                           v15);
  }
  if ( ServantClassEntity__IsValidClassOnSellectSupport(AdvantageClassId, 0LL) )
    return AdvantageClassId;
  else
    return PlayerPrefsFollowerClassId;
}


// local variable allocation has failed, the output may be wrong!
FollowerSelectItemListViewItem_o *__fastcall FollowerSelectItemListViewManager__GetItem(
        FollowerSelectItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_418AA47 & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_418AA47 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (FollowerSelectItemListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == FollowerSelectItemListViewItem_TypeInfo )
    return (FollowerSelectItemListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetItemCount(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *mixItemList; // x8

  if ( (byte_418AA5E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    byte_418AA5E = 1;
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
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v10; // x22
  __int64 v11; // x10
  struct UnityEngine_GameObject_o *dragParentObject; // x8

  v6 = this;
  if ( (byte_418AA5F & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewItem_TypeInfo, userId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    this = (FollowerSelectItemListViewManager_o *)sub_B2C35C(
                                                    &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                    v8);
    byte_418AA5F = 1;
  }
  itemList = v6->fields.itemList;
  if ( !itemList )
LABEL_17:
    sub_B2C434(this, userId);
  v10 = 0LL;
  while ( (__int64)v10 < itemList->fields._size )
  {
    if ( v10 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    this = (FollowerSelectItemListViewManager_o *)itemList->fields._items->m_Items[v10];
    if ( this )
    {
      v11 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (FollowerSelectItemListViewItem_c *)this->klass->_2.typeHierarchy[v11 - 1] == FollowerSelectItemListViewItem_TypeInfo )
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
            return v10;
        }
      }
    }
    itemList = v6->fields.itemList;
    ++v10;
    if ( !itemList )
      goto LABEL_17;
  }
  LODWORD(v10) = 0;
  return v10;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_418AA44 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6732/*"FollowerSelectClass"*/, method);
    byte_418AA44 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6732/*"FollowerSelectClass"*/, 0, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewManager_c *v2; // x0
  ListViewSort_o *supportSortInfo; // x0

  if ( (byte_418AA3A & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewManager_TypeInfo, v1);
    byte_418AA3A = 1;
  }
  v2 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v2 = FollowerSelectItemListViewManager_TypeInfo;
  }
  supportSortInfo = v2->static_fields->supportSortInfo;
  if ( !supportSortInfo )
    sub_B2C434(0LL, v1);
  ListViewSort__InitLoad(supportSortInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerSelectItemListViewManager__IsSameQuestAndPhase(
        FollowerSelectItemListViewManager_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v6; // x1
  FollowerSelectItemListViewManager_c *v7; // x0
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
  struct FollowerSelectItemListViewManager_StaticFields *v9; // x8

  if ( (byte_418AA42 & 1) == 0 )
  {
    sub_B2C35C(&BattleData_TypeInfo, *(_QWORD *)&questId);
    sub_B2C35C(&FollowerSelectItemListViewManager_TypeInfo, v6);
    byte_418AA42 = 1;
  }
  v7 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v7 = FollowerSelectItemListViewManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( static_fields->lastSelectedQuestId == -1 )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = FollowerSelectItemListViewManager_TypeInfo;
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
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = FollowerSelectItemListViewManager_TypeInfo;
  }
  v9 = v7->static_fields;
  if ( v9->lastSelectedQuestId != questId )
    return 0;
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v9 = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  }
  return v9->lastSelectedQuestPhase == questPhase;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__ModifyList(
        FollowerSelectItemListViewManager_o *this,
        int32_t friendPointUpVal,
        int32_t friendPointUpMaxVal,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  unsigned __int64 v13; // x23
  ListViewItem_o *v14; // x8
  __int64 v15; // x11
  __int64 v16; // x11
  FollowerSelectItemListViewItem_o *v17; // x0
  FollowerSelectItemListViewManager_c *v18; // x0
  int32_t followerClassId; // w22
  const MethodInfo *v20; // x3
  struct System_Collections_Generic_List_ListViewItem__o *originalItemList; // x25
  signed __int64 v22; // x22
  unsigned __int64 v23; // x23
  ListViewItem_o *v24; // x8
  __int64 v25; // x11
  __int64 v26; // x11
  FollowerSelectItemListViewItem_o *v27; // x0
  struct System_Collections_Generic_List_ListViewItem__o *mixItemList; // x25
  signed __int64 v29; // x22
  unsigned __int64 v30; // x23
  ListViewItem_o *v31; // x8
  __int64 v32; // x11
  __int64 v33; // x11
  FollowerSelectItemListViewItem_o *v34; // x0

  v6 = this;
  if ( (byte_418AA45 & 1) == 0 )
  {
    sub_B2C35C(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&friendPointUpVal);
    sub_B2C35C(&FollowerSelectItemListViewItem_TypeInfo, v7);
    sub_B2C35C(&FollowerSelectItemListViewManager_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    this = (FollowerSelectItemListViewManager_o *)sub_B2C35C(
                                                    &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                    v10);
    byte_418AA45 = 1;
  }
  itemList = v6->fields.itemList;
  if ( !itemList )
    goto LABEL_57;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v14 = itemList->fields._items->m_Items[v13];
      if ( !v14 )
        break;
      v15 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v14->klass->_2.bitflags2 + 1) < (unsigned int)v15
        || (FollowerSelectItemListViewItem_c *)v14->klass->_2.typeHierarchy[v15 - 1] != FollowerSelectItemListViewItem_TypeInfo )
      {
        break;
      }
      v16 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v14->klass->_2.bitflags2 + 1) >= (unsigned int)v16 )
      {
        if ( (FollowerSelectItemListViewItem_c *)v14->klass->_2.typeHierarchy[v16 - 1] == FollowerSelectItemListViewItem_TypeInfo )
          v17 = (FollowerSelectItemListViewItem_o *)itemList->fields._items->m_Items[v13];
        else
          v17 = 0LL;
      }
      else
      {
        v17 = 0LL;
      }
      FollowerSelectItemListViewItem__Modify(v17, friendPointUpVal, friendPointUpMaxVal, method);
      if ( (__int64)++v13 >= size )
        goto LABEL_19;
      itemList = v6->fields.itemList;
    }
    while ( itemList );
LABEL_57:
    sub_B2C434(this, *(_QWORD *)&friendPointUpVal);
  }
LABEL_19:
  v18 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v18 = FollowerSelectItemListViewManager_TypeInfo;
  }
  followerClassId = v18->static_fields->followerClassId;
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
    v22 = originalItemList->fields._size;
    if ( (int)v22 >= 1 )
    {
      v23 = 0LL;
      while ( 1 )
      {
        if ( v23 >= (unsigned int)originalItemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v24 = originalItemList->fields._items->m_Items[v23];
        if ( !v24 )
          goto LABEL_57;
        v25 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v25
          || (FollowerSelectItemListViewItem_c *)v24->klass->_2.typeHierarchy[v25 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          goto LABEL_57;
        }
        v26 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v24->klass->_2.bitflags2 + 1) >= (unsigned int)v26 )
        {
          if ( (FollowerSelectItemListViewItem_c *)v24->klass->_2.typeHierarchy[v26 - 1] == FollowerSelectItemListViewItem_TypeInfo )
            v27 = (FollowerSelectItemListViewItem_o *)originalItemList->fields._items->m_Items[v23];
          else
            v27 = 0LL;
        }
        else
        {
          v27 = 0LL;
        }
        FollowerSelectItemListViewItem__Modify(v27, friendPointUpVal, friendPointUpMaxVal, v20);
        if ( (__int64)++v23 >= v22 )
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
    v29 = mixItemList->fields._size;
    if ( (int)v29 >= 1 )
    {
      v30 = 0LL;
      while ( 1 )
      {
        if ( v30 >= (unsigned int)mixItemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v31 = mixItemList->fields._items->m_Items[v30];
        if ( !v31 )
          goto LABEL_57;
        v32 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v31->klass->_2.bitflags2 + 1) < (unsigned int)v32
          || (FollowerSelectItemListViewItem_c *)v31->klass->_2.typeHierarchy[v32 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          goto LABEL_57;
        }
        v33 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v31->klass->_2.bitflags2 + 1) >= (unsigned int)v33 )
        {
          if ( (FollowerSelectItemListViewItem_c *)v31->klass->_2.typeHierarchy[v33 - 1] == FollowerSelectItemListViewItem_TypeInfo )
            v34 = (FollowerSelectItemListViewItem_o *)mixItemList->fields._items->m_Items[v30];
          else
            v34 = 0LL;
        }
        else
        {
          v34 = 0LL;
        }
        FollowerSelectItemListViewItem__Modify(v34, friendPointUpVal, friendPointUpMaxVal, v20);
        if ( (__int64)++v30 >= v29 )
          return;
        mixItemList = v6->fields.mixItemList;
        if ( !mixItemList )
          goto LABEL_57;
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__OnChangeClass(
        FollowerSelectItemListViewManager_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( (byte_418AA5A & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, *(_QWORD *)&classPos);
    byte_418AA5A = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  _BOOL4 isServantBonusFilterEnable; // w23
  _BOOL4 isServantEquipBonusFilterEnable; // w24
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  ServantBonusFilterSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_418AA53 & 1) == 0 )
  {
    sub_B2C35C(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418AA53 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
    isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantBonusFilterSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantBonusFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__,
      0LL);
    if ( !v10 )
      sub_B2C434(v12, v13);
    CommonUI__OpenServantBonusFilterSelectMenu(
      v10,
      0,
      isServantBonusFilterEnable,
      isServantEquipBonusFilterEnable,
      sort,
      v11,
      0LL);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickChangeSkill(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  __int64 displaySkill; // x8
  System_Collections_Generic_List_FollowerSelectItemListViewObject__o *ObjectList; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int size; // w8
  System_Collections_Generic_List_FollowerSelectItemListViewObject__o *v11; // x20
  unsigned int v12; // w21

  if ( (byte_418AA5D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418AA5D = 1;
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
      this->fields.displaySkill = dword_31B3BE0[displaySkill];
    ObjectList = FollowerSelectItemListViewManager__get_ObjectList(this, v5);
    if ( !ObjectList )
      goto LABEL_17;
    size = ObjectList->fields._size;
    v11 = ObjectList;
    if ( size >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( size <= v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        ObjectList = (System_Collections_Generic_List_FollowerSelectItemListViewObject__o *)v11->fields._items->m_Items[v12];
        if ( !ObjectList )
          break;
        FollowerSelectItemListViewObject__ChangeDisplaySkill(
          (FollowerSelectItemListViewObject_o *)ObjectList,
          this->fields.displaySkill,
          v9);
        size = v11->fields._size;
        if ( (int)++v12 >= size )
          return;
      }
LABEL_17:
      sub_B2C434(ObjectList, v8);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickClassComparibility(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_418AA51 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418AA51 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__,
      0LL);
    if ( !Instance )
      sub_B2C434(v8, v9);
    CommonUI__OpenClassCompatibilityMenu(Instance, v7, 0LL);
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
      sub_B2C2F8(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B2C2F8(
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
        sub_B2C434(v10, v11);
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

  if ( (byte_418AA58 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AA58 = 1;
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
      sub_B2C434(v3, v4);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickSortKind(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  OtherUserSortDialog_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418AA56 & 1) == 0 )
  {
    sub_B2C35C(&OtherUserSortDialog_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_FollowerSelectItemListViewManager_CloseSortDialog__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418AA56 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (OtherUserSortDialog_CallbackFunc_o *)sub_B2C42C(OtherUserSortDialog_CallbackFunc_TypeInfo);
    OtherUserSortDialog_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_CloseSortDialog__,
      0LL);
    if ( !v8 )
      sub_B2C434(v10, v11);
    CommonUI__OpenOtherUserSortDialog(v8, 0, sort, v9, 0LL);
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
    sub_B2C2F8(
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
        sub_B2C434(v10, v11);
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
    sub_B2C2F8(
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
        sub_B2C434(v10, v11);
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
    sub_B2C2F8(
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
        sub_B2C434(v10, v11);
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

  if ( (byte_418AA50 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12634/*"ScrollViewEnabled"*/, obj);
    byte_418AA50 = 1;
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
        (System_String_o *)StringLiteral_12634/*"ScrollViewEnabled"*/,
        0.1,
        0LL);
    }
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v8, v9, v10, v11, v12, v13);
    if ( callbackFunc )
    {
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        FollowerSelectItemListViewManager_CallbackFunc__Invoke(callbackFunc, kind, Index, 0LL);
        return;
      }
LABEL_14:
      sub_B2C434(tutorialListViewObject, obj);
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

  if ( (byte_418AA4F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418AA4F = 1;
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
              sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
              if ( callbackFunc2 )
                System_Action__Invoke(callbackFunc2, 0LL);
              return;
            }
          }
        }
      }
      sub_B2C434(tutorialListViewObject, v7);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OpenSupportClassBoard(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *v4; // x19
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int32_t Index; // w20
  FollowerSelectItemListViewItem_o *v18; // x21
  __int64 v19; // x10
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  const MethodInfo *v25; // x1
  int32_t scrollBar; // w22
  int32_t ClassBoardBaseId; // w20
  struct FollowerInfo_o *followerInfo; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x8
  int max_length; // w9
  unsigned int v31; // w10
  __int64 v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  _QWORD **v39; // x23
  __int64 v40; // x22
  __int16 v41; // w8
  __int64 v42; // x22
  __int64 v43; // x22
  __int64 v44; // x22
  System_Int32_array ***v45; // x8
  System_Int32_array **v46; // x1
  CommonUI_o *Instance; // x22
  System_Action_o *v48; // x23
  __int64 v49; // x0

  v4 = this;
  if ( (byte_418AA60 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, obj);
    sub_B2C35C(&Method_System_Array_Empty_int___, v5);
    sub_B2C35C(&ClassBoardInfo_TypeInfo, v6);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B2C35C(&FollowerSelectItemListViewItem_TypeInfo, v11);
    sub_B2C35C(&Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__, v12);
    sub_B2C35C(&Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14);
    this = (FollowerSelectItemListViewManager_o *)sub_B2C35C(
                                                    &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                    v15);
    byte_418AA60 = 1;
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v18 = (FollowerSelectItemListViewItem_o *)itemList->fields._items->m_Items[Index];
        if ( !v18 )
          return;
        v19 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v19
          || (FollowerSelectItemListViewItem_c *)v18->klass->_2.typeHierarchy[v19 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          return;
        }
        if ( v18->fields.isQuestRestriction )
        {
          v20 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
          if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 75) & 2) != 0 )
            v20 = (_QWORD *)sub_B2C364(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
          v21 = (System_Reflection_MethodBase_o *)sub_B2C340(v20, v20[3]);
          OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0LL);
          return;
        }
        v4->fields.isInput = 0;
        v22 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
        if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 75) & 2) != 0 )
          v22 = (_QWORD *)sub_B2C364(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
        v23 = (System_Reflection_MethodBase_o *)sub_B2C340(v22, v22[3]);
        OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
        this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewItem__get_SvtId(v18, v25);
        if ( Master_WarQuestSelectionMaster )
        {
          this = (FollowerSelectItemListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                          Master_WarQuestSelectionMaster,
                                                          (int32_t)this,
                                                          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            scrollBar = (int32_t)this->fields.scrollBar;
            this = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( this )
            {
              ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(
                                   (ClassBoardClassMaster_o *)this,
                                   scrollBar,
                                   0LL);
              this = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
              if ( this )
              {
                this = (FollowerSelectItemListViewManager_o *)ClassBoardClassMaster__IsInvalidClass(
                                                                (ClassBoardClassMaster_o *)this,
                                                                scrollBar,
                                                                0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_34;
                followerInfo = v18->fields.followerInfo;
                if ( !followerInfo )
                  goto LABEL_49;
                userClassBoardInfo = followerInfo->fields.userClassBoardInfo;
                if ( !userClassBoardInfo )
                  goto LABEL_49;
                max_length = userClassBoardInfo->max_length;
                if ( max_length < 1 )
                {
LABEL_34:
                  v32 = sub_B2C42C(ClassBoardInfo_TypeInfo);
                  ClassBoardInfo___ctor((ClassBoardInfo_o *)v32, 0LL);
                  if ( v32 )
                  {
                    *(_DWORD *)(v32 + 16) = ClassBoardBaseId;
                    v39 = (_QWORD **)Method_System_Array_Empty_int___;
                    v40 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
                    v41 = *(_WORD *)(v40 + 306);
                    if ( (v41 & 1) == 0 )
                    {
                      sub_AC505C(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
                      v41 = *(_WORD *)(v40 + 306);
                    }
                    if ( (v41 & 0x400) != 0 )
                    {
                      v42 = *v39[6];
                      if ( (*(_BYTE *)(v42 + 306) & 1) == 0 )
                        sub_AC505C(*v39[6]);
                      if ( !*(_DWORD *)(v42 + 224) )
                      {
                        v43 = *v39[6];
                        if ( (*(_BYTE *)(v43 + 306) & 1) == 0 )
                          sub_AC505C(*v39[6]);
                        j_il2cpp_runtime_class_init_0(v43);
                      }
                    }
                    v44 = *v39[6];
                    if ( (*(_BYTE *)(v44 + 306) & 1) == 0 )
                      sub_AC505C(*v39[6]);
                    v45 = *(System_Int32_array ****)(v44 + 184);
                    v46 = *v45;
                    *(_QWORD *)(v32 + 24) = *v45;
                    sub_B2C2F8((BattleServantConfConponent_o *)(v32 + 24), v46, v33, v34, v35, v36, v37, v38);
LABEL_47:
                    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    v48 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                    System_Action___ctor(
                      v48,
                      (Il2CppObject *)v4,
                      Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__,
                      0LL);
                    if ( Instance )
                    {
                      CommonUI__OpenClassBoardEffectListDialog(
                        Instance,
                        1,
                        ClassBoardBaseId,
                        0,
                        v48,
                        1,
                        (ClassBoardInfo_o *)v32,
                        0LL);
                      return;
                    }
                  }
                }
                else
                {
                  v31 = 0;
                  while ( 1 )
                  {
                    if ( v31 >= max_length )
                    {
                      v49 = sub_B2C460(this);
                      sub_B2C400(v49, 0LL);
                    }
                    v32 = (__int64)userClassBoardInfo->m_Items[v31];
                    if ( !v32 )
                      break;
                    if ( *(_DWORD *)(v32 + 16) == ClassBoardBaseId )
                      goto LABEL_47;
                    if ( (int)++v31 >= max_length )
                      goto LABEL_34;
                  }
                }
              }
            }
          }
        }
      }
LABEL_49:
      sub_B2C434(this, obj);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__RequestInto(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_FollowerSelectItemListViewObject__o *ObjectList; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_FollowerSelectItemListViewObject__o *v10; // x20
  signed __int64 size; // x8
  unsigned __int64 v12; // x24
  int v13; // w23
  FollowerSelectItemListViewObject_o *v14; // x21
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418AA4E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v5);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v6);
    byte_418AA4E = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = FollowerSelectItemListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_15:
    sub_B2C434(ObjectList, v9);
  v10 = ObjectList;
  this->fields.callbackCount = ObjectList->fields._size;
  LODWORD(size) = ObjectList->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v12 = 0LL;
  v13 = 0;
  do
  {
    if ( v12 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v14 = v10->fields._items->m_Items[v12];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v14, 0LL) )
    {
      v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v14 )
        goto LABEL_15;
      ++v13;
      zero = UnityEngine_Vector3__get_zero(0LL);
      FollowerSelectItemListViewObject__Init(v14, 4, v15, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v16);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v10->fields._size;
    ++v12;
  }
  while ( (__int64)v12 < size );
  if ( !v13 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418AA4C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__, v9);
    sub_B2C35C(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v12);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v13);
    byte_418AA4C = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v19, v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      FollowerSelectItemListViewObject__Init(
        (FollowerSelectItemListViewObject_o *)current,
        mode,
        v18,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__RequestListObject_30679536(
        FollowerSelectItemListViewManager_o *this,
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418AA4D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__, v7);
    sub_B2C35C(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_418AA4D = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v17, v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      FollowerSelectItemListViewObject__Init(
        (FollowerSelectItemListViewObject_o *)current,
        mode,
        v16,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


void __fastcall FollowerSelectItemListViewManager__ScrollViewEnabled(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_B2C434(0LL, method);
  UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__SetBonusFilterFlag(
        FollowerSelectItemListViewManager_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  EventUpValSetupInfo_o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v3 = setupInfo;
  if ( (byte_418AA3D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventFilterMaster___, setupInfo);
    sub_B2C35C(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418AA3D = 1;
  }
  entity = 0LL;
  if ( v3 )
    LODWORD(v3) = EventUpValSetupInfo__get_EventId(v3, 0LL);
  *(_WORD *)&this->fields.isBonusFilterEnable = 256;
  this->fields.isServantEquipBonusFilterEnable = 1;
  if ( (int)v3 >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventFilterMaster___);
    if ( !Instance )
      goto LABEL_15;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
           &entity,
           (int32_t)v3,
           (const MethodInfo_24E412C *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__) )
    {
      Instance = (DataManager_o *)entity;
      if ( entity )
      {
        this->fields.isBonusFilterEnable = !EventFilterEntity__IsSupportFilterNoDisp((EventFilterEntity_o *)entity, 0LL);
        Instance = (DataManager_o *)entity;
        if ( entity )
        {
          this->fields.isServantBonusFilterEnable = !EventFilterEntity__IsSupportServantFilterNoDisp(
                                                       (EventFilterEntity_o *)entity,
                                                       0LL);
          Instance = (DataManager_o *)entity;
          if ( entity )
          {
            this->fields.isServantEquipBonusFilterEnable = !EventFilterEntity__IsSupportServantEquipFilterNoDisp(
                                                              (EventFilterEntity_o *)entity,
                                                              0LL);
            return;
          }
        }
      }
LABEL_15:
      sub_B2C434(Instance, v8);
    }
    this->fields.isBonusFilterEnable = 1;
  }
}


void __fastcall FollowerSelectItemListViewManager__SetClassBoardInfo(
        FollowerSelectItemListViewManager_o *this,
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  BalanceConfig_c *v18; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classInfoSprite; // x20
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x0
  BattleServantConfConponent_o *p_classBoardMaxDictionary; // x20
  System_Collections_Generic_Dictionary_int__int__o *v23; // x19
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *Master_WarQuestSelectionMaster; // x0
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v39; // x3
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  unsigned __int64 v41; // x10
  int32_t *v42; // x11
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x21
  __int64 v46; // x9
  ClassBoardSquareMaster_o *v47; // x0
  __int64 v48; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v50; // x1
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  unsigned __int64 v52; // x10
  int32_t *v53; // x11
  __int64 v54; // x0

  if ( (byte_418AA3F & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&BalanceConfig_TypeInfo, v3);
    sub_B2C35C(&ClassBoardBaseEntity_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5);
    sub_B2C35C(&CondType_TypeInfo, v6);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Clear__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_B2C35C(&System_IDisposable_TypeInfo, v14);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_17146/*"buttontxt_formation_20"*/, v17);
    byte_418AA3F = 1;
  }
  v18 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v18->static_fields->ClassBoardReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_25746984(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17146/*"buttontxt_formation_20"*/, 0LL);
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = (BattleServantConfConponent_o *)&this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_2E2470C *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v23 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v23,
      (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    p_classBoardMaxDictionary->klass = (BattleServantConfConponent_c *)v23;
    sub_B2C2F8(p_classBoardMaxDictionary, (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster[1].klass) == 0LL )
  {
    sub_B2C434(Master_WarQuestSelectionMaster, v31);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 Master_WarQuestSelectionMaster,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v32);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v36;
        p_offset += 4;
        if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v33);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v40 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v41 = 0LL;
      v42 = &v40->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v42 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v41;
        v42 += 4;
        if ( v41 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_34;
      }
      v43 = (__int64)&v40->vtable[*v42].method;
    }
    else
    {
LABEL_34:
      v43 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v39);
    }
    v44 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(
            Enumerator,
            *(_QWORD *)(v43 + 8));
    v45 = v44;
    if ( v44 )
    {
      v46 = *(&ClassBoardBaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v44 + 300LL) < (unsigned int)v46
        || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v44 + 200LL) + 8 * v46 - 8) != ClassBoardBaseEntity_TypeInfo )
      {
        sub_B2C728(v44);
LABEL_55:
        sub_B2C434(v47, v48);
      }
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v47 = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v45 )
      goto LABEL_55;
    if ( !v47 )
      sub_B2C434(0LL, v48);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(v47, *(_DWORD *)(v45 + 16), 0LL);
    if ( OtherThanNoneEntity )
    {
      if ( !p_classBoardMaxDictionary->klass )
        sub_B2C434(OtherThanNoneEntity, v50);
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)p_classBoardMaxDictionary->klass,
        *(_DWORD *)(v45 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v51 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v52 = 0LL;
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      ++v52;
      v53 += 4;
      if ( v52 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_51;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_51:
    v54 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v39);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(Enumerator, *(_QWORD *)(v54 + 8));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__SetClassId(
        FollowerSelectItemListViewManager_o *this,
        int32_t followerClassId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  FollowerSelectItemListViewManager_c *v13; // x0
  System_Collections_Generic_IEnumerable_T__o *mixItemList; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  const MethodInfo *v24; // x1
  __int64 v25; // x10
  System_Collections_Generic_IEnumerable_T__o *originalItemList; // x22
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v27; // x23
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x2
  __int64 v35; // x10
  int v36; // w19
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-78h] BYREF
  int v38[2]; // [xsp+20h] [xbp-60h]
  int v39; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_418AA4A & 1) == 0 )
  {
    sub_B2C35C(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&followerClassId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_B2C35C(&FollowerSelectItemListViewItem_TypeInfo, v8);
    sub_B2C35C(&FollowerSelectItemListViewManager_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem___ctor___67312280, v11);
    sub_B2C35C(&System_Collections_Generic_List_ListViewItem__TypeInfo, v12);
    byte_418AA4A = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v39 = 0;
  v13 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v13 = FollowerSelectItemListViewManager_TypeInfo;
  }
  v13->static_fields->followerClassId = followerClassId;
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
      v15 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_ListViewItem__TypeInfo);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v15,
        mixItemList,
        (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_ListViewItem___ctor___67312280);
      this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v15;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.itemList,
        (System_Int32_array **)v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      itemList = this->fields.itemList;
      if ( itemList )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v37,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v40 = v37;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v40,
                  (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( v40.fields.current )
          {
            v25 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v40.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v25
              && (FollowerSelectItemListViewItem_c *)v40.fields.current->klass->_2.typeHierarchy[v25 - 1] == FollowerSelectItemListViewItem_TypeInfo )
            {
              FollowerSelectItemListViewItem__UpdateRestriction(
                (FollowerSelectItemListViewItem_o *)v40.fields.current,
                v24);
            }
          }
        }
        v38[0] = 190;
        v39 = 1;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v40,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        v39 = 0;
        return;
      }
LABEL_31:
      sub_B2C434(itemList, v22);
    }
    originalItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.originalItemList;
    v27 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_ListViewItem__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v27,
      originalItemList,
      (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_ListViewItem___ctor___67312280);
    this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v27;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.itemList,
      (System_Int32_array **)v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_31;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v40 = v37;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v40,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( v40.fields.current )
      {
        v35 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v40.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v35
          && (FollowerSelectItemListViewItem_c *)v40.fields.current->klass->_2.typeHierarchy[v35 - 1] == FollowerSelectItemListViewItem_TypeInfo )
        {
          FollowerSelectItemListViewItem__AnalyzeEntity(
            (FollowerSelectItemListViewItem_o *)v40.fields.current,
            followerClassId,
            v34);
        }
      }
    }
    v38[0] = 190;
    v36 = ++v39;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v40,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v36 && v38[v36 - 1] == 190 )
      v39 = v36 - 1;
  }
}


void __fastcall FollowerSelectItemListViewManager__SetFilterButtonImage(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *bonusFilterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_418AA55 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17014/*"btn_sefilter_2_on"*/, method);
    sub_B2C35C(&StringLiteral_17013/*"btn_sefilter_2"*/, v3);
    byte_418AA55 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (bonusFilterSprite = this->fields.bonusFilterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !bonusFilterSprite) )
  {
    sub_B2C434(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17013/*"btn_sefilter_2"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17014/*"btn_sefilter_2_on"*/;
  UISprite__set_spriteName(bonusFilterSprite, *v6, 0LL);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  FollowerSelectItemListViewManager__SetMode_30678688(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__SetMode_30678688(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  char *ObjectList; // x0
  __int64 v11; // x1
  int v12; // w8
  char *v13; // x19
  unsigned int v14; // w22
  FollowerSelectItemListViewObject_o *v15; // x21
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  __int64 *v18; // x8
  const MethodInfo *v19; // x1
  int32_t v20; // w8
  char *v21; // x20
  int v22; // w8
  __int64 v23; // x23
  FollowerSelectItemListViewObject_o *v24; // x21
  System_Action_o *v25; // x22
  const MethodInfo *v26; // x3
  int v27; // s1
  int32_t v30; // w1
  FollowerSelectItemListViewObject_o *v31; // x0
  System_Action_o *v32; // x2
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct FollowerSelectItemListViewObject_o *tutorialListViewObject; // x22
  const MethodInfo *v40; // x1
  struct FollowerSelectItemListViewObject_o *v41; // x21

  if ( (byte_418AA4B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v7);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v8);
    sub_B2C35C(&StringLiteral_11429/*"RequestInto"*/, v9);
    byte_418AA4B = 1;
  }
  if ( mode == 3 )
  {
    ObjectList = (char *)FollowerSelectItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
    if ( !ObjectList )
      goto LABEL_38;
    v12 = *((_DWORD *)ObjectList + 6);
    v13 = ObjectList;
    if ( v12 >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v12 <= v14 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v15 = *(FollowerSelectItemListViewObject_o **)(*((_QWORD *)v13 + 2) + 8LL * (int)v14 + 32);
        if ( !v15 )
          break;
        UnityEngine_Vector3__get_zero(0LL);
        if ( (byte_418AA6D & 1) == 0 )
        {
          sub_B2C35C(&FollowerSelectItemListViewItem_TypeInfo, v16);
          byte_418AA6D = 1;
        }
        FollowerSelectItemListViewObject__SetupDisp(v15, v16);
        v12 = *((_DWORD *)v13 + 6);
        if ( (int)++v14 >= v12 )
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
    v18 = &StringLiteral_11429/*"RequestInto"*/;
LABEL_37:
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)*v18, 0.0, 0LL);
    return;
  }
  if ( mode != 4 )
  {
    if ( mode == 2 )
      FollowerSelectItemListViewManager__RequestListObject_30679536(this, 3, v17);
    return;
  }
  ListViewManager__set_IsInput((ListViewManager_o *)this, 1, 0LL);
  ObjectList = (char *)FollowerSelectItemListViewManager__get_ClippingObjectList(this, v19);
  if ( !ObjectList )
    goto LABEL_38;
  v20 = *((_DWORD *)ObjectList + 6);
  v21 = ObjectList;
  if ( v20 < 1 )
  {
    this->fields.callbackCount = 1;
    v18 = &StringLiteral_10036/*"OnMoveEnd"*/;
    goto LABEL_37;
  }
  this->fields.callbackCount = v20;
  v22 = *((_DWORD *)ObjectList + 6);
  if ( v22 >= 1 )
  {
    v23 = 0LL;
    while ( 1 )
    {
      if ( v22 <= (unsigned int)v23 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v24 = *(FollowerSelectItemListViewObject_o **)(*((_QWORD *)v21 + 2) + 8 * v23 + 32);
      v25 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v24 )
        break;
      *(UnityEngine_Vector3_o *)(&v27 - 1) = UnityEngine_Vector3__get_zero(0LL);
      if ( (_DWORD)v23 )
      {
        v30 = 2;
        v31 = v24;
        v32 = v25;
      }
      else
      {
        FollowerSelectItemListViewObject__Init(v24, 0, v25, 0.0, *(UnityEngine_Vector3_o *)&v27, v26);
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
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(ObjectList + 32),
          (System_Int32_array **)this,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
        tutorialListViewObject = this->fields.tutorialListViewObject;
        ObjectList = (char *)FollowerSelectItemListViewObject__GetItem(v24, v40);
        if ( !tutorialListViewObject )
          break;
        ObjectList = (char *)((__int64 (__fastcall *)(struct FollowerSelectItemListViewObject_o *, char *, Il2CppMethodPointer))tutorialListViewObject->klass->vtable._5_SetItem.method)(
                               tutorialListViewObject,
                               ObjectList,
                               tutorialListViewObject->klass->vtable._6_SetItem.methodPtr);
        v41 = this->fields.tutorialListViewObject;
        if ( !v41 )
          break;
        *(UnityEngine_Vector3_o *)(&v27 - 1) = UnityEngine_Vector3__get_zero(0LL);
        v30 = 6;
        v31 = v41;
        v32 = 0LL;
      }
      FollowerSelectItemListViewObject__Init(v31, v30, v32, 0.0, *(UnityEngine_Vector3_o *)&v27, v26);
      v22 = *((_DWORD *)v21 + 6);
      if ( (int)++v23 >= v22 )
        return;
    }
LABEL_38:
    sub_B2C434(ObjectList, v11);
  }
}


void __fastcall FollowerSelectItemListViewManager__SetMode_30679480(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  FollowerSelectItemListViewManager__SetMode_30678688(this, mode, v10);
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
  if ( (byte_418AA48 & 1) == 0 )
  {
    this = (FollowerSelectItemListViewManager_o *)sub_B2C35C(&FollowerSelectItemListViewObject_TypeInfo, obj);
    byte_418AA48 = 1;
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
    sub_B2C434(this, obj);
  }
  if ( !v4 )
    goto LABEL_19;
  UnityEngine_Vector3__get_zero(0LL);
  if ( (byte_418AA6D & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewItem_TypeInfo, v13);
    byte_418AA6D = 1;
  }
  FollowerSelectItemListViewObject__SetupDisp((FollowerSelectItemListViewObject_o *)v4, v13);
}


void __fastcall FollowerSelectItemListViewManager__SetSortButtonImage(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  __int64 v10; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *sortKindLabel; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  System_String_o **v16; // x8
  struct ListViewSort_o *v17; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v19; // x9
  System_String_o **v20; // x10
  System_String_o **v21; // x8
  struct ListViewSort_o *v22; // x8
  System_String_o **v23; // x8

  if ( (byte_418AA59 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17021/*"btn_sort_up"*/, v3);
    sub_B2C35C(&StringLiteral_17104/*"btn_txt_up"*/, v4);
    sub_B2C35C(&StringLiteral_17061/*"btn_txt_new"*/, v5);
    sub_B2C35C(&StringLiteral_17051/*"btn_txt_down"*/, v6);
    sub_B2C35C(&StringLiteral_17068/*"btn_txt_old"*/, v7);
    sub_B2C35C(&StringLiteral_17018/*"btn_sort_down"*/, v8);
    byte_418AA59 = 1;
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
    v14 = this->fields.sort;
    if ( v14 )
    {
      sortKind = v14->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17068/*"btn_txt_old"*/ : &StringLiteral_17061/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v17->fields.isAscendingOrder;
              v19 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
              v20 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
LABEL_32:
              if ( isAscendingOrder )
                v23 = v19;
              else
                v23 = v20;
              UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
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
          v21 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17104/*"btn_txt_up"*/ : &StringLiteral_17051/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
          v22 = this->fields.sort;
          if ( v22 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v22->fields.isAscendingOrder;
              v19 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
              v20 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_36:
    sub_B2C434(sort, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__SortClass(
        FollowerSelectItemListViewManager_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  FollowerSelectItemListViewManager_c *v13; // x0
  FollowerSelectItemListViewManager_c *v14; // x0
  int32_t followerClassId; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x21
  struct ListViewSort_o *SvtId; // x0
  const MethodInfo *v18; // x1
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  signed __int64 size; // x24
  int32_t v22; // w25
  unsigned __int64 v23; // x26
  FollowerSelectItemListViewItem_o *v24; // x22
  __int64 v25; // x10
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  if ( (byte_418AA5B & 1) == 0 )
  {
    sub_B2C35C(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classPos);
    sub_B2C35C(&FollowerSelectItemListViewItem_TypeInfo, v5);
    sub_B2C35C(&FollowerSelectItemListViewManager_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem___ctor___67312280, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_List_ListViewItem__TypeInfo, v12);
    byte_418AA5B = 1;
  }
  v13 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v13 = FollowerSelectItemListViewManager_TypeInfo;
  }
  if ( v13->static_fields->followerClassId != classPos )
  {
    if ( (BYTE3(ClassButtonControlComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    }
    if ( !ClassButtonControlComponent__IsMixSupportGroupType(classPos, 0LL) )
    {
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
      ClassButtonControlComponent__IsMixSupportGroupType(followerClassId, 0LL);
    }
  }
  FollowerSelectItemListViewManager__SetClassId(this, classPos, method);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  p_itemList = &this->fields.itemList;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_45;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v22 = 0;
    v23 = 0LL;
    do
    {
      if ( v23 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v24 = (FollowerSelectItemListViewItem_o *)itemList->fields._items->m_Items[v23];
      if ( !v24 )
        break;
      v25 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v25
        || (FollowerSelectItemListViewItem_c *)v24->klass->_2.typeHierarchy[v25 - 1] != FollowerSelectItemListViewItem_TypeInfo )
      {
        break;
      }
      SvtId = (struct ListViewSort_o *)FollowerSelectItemListViewItem__get_SvtId(v24, v18);
      if ( (int)SvtId >= 1 )
      {
        v24->fields.index = v22;
        if ( !v16 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v16,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v22;
      }
      if ( (__int64)++v23 >= size )
        goto LABEL_32;
      itemList = *p_itemList;
    }
    while ( *p_itemList );
LABEL_45:
    sub_B2C434(SvtId, v18);
  }
LABEL_32:
  v26 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v26,
    (System_Collections_Generic_IEnumerable_T__o *)v16,
    (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_ListViewItem___ctor___67312280);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v26;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t RefreshRemain; // x0
  __int64 v11; // x1
  __int64 v12; // x20
  UnityEngine_GameObject_o *refreshButtonObject; // x0
  UnityEngine_Object_o *v14; // x21
  UnityEngine_Object_o *v15; // x21
  UIWidget_o *v16; // x21
  int64_t Time; // x0
  int64_t v18; // x21
  UILabel_o *refreshRemainLabel; // x22
  Il2CppObject *v20; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UIWidget_o *refreshButtonSprite; // x20
  int v23; // s0
  UnityEngine_Object_o *v27; // x20
  UIWidget_o *refreshTitleSprite; // x20
  int v29; // s0
  __int64 v33; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418AA5C & 1) == 0 )
  {
    sub_B2C35C(&FollowerListRequest_TypeInfo, method);
    sub_B2C35C(&FollowerSelectItemListViewManager_TypeInfo, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, v4);
    sub_B2C35C(&long_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_23539/*"{0}"*/, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_418AA5C = 1;
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
                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
      *(UnityEngine_Color_o *)&v23 = UnityEngine_Color__get_white(0LL);
      if ( !refreshButtonSprite )
        goto LABEL_58;
      UIWidget__set_color(refreshButtonSprite, *(UnityEngine_Color_o *)&v23, 0LL);
    }
    refreshButtonObject = this->fields.refreshTitleObject;
    if ( refreshButtonObject )
    {
      v27 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      refreshButtonObject,
                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      refreshButtonObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
      if ( ((unsigned __int8)refreshButtonObject & 1) != 0 )
      {
        if ( !v27 )
          goto LABEL_58;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v27, 1, 0LL);
      }
      else
      {
        refreshTitleSprite = (UIWidget_o *)this->fields.refreshTitleSprite;
        *(UnityEngine_Color_o *)&v29 = UnityEngine_Color__get_white(0LL);
        if ( !refreshTitleSprite )
          goto LABEL_58;
        UIWidget__set_color(refreshTitleSprite, *(UnityEngine_Color_o *)&v29, 0LL);
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
    sub_B2C434(refreshButtonObject, v11);
  }
  v12 = RefreshRemain;
  refreshButtonObject = this->fields.refreshButtonObject;
  if ( !refreshButtonObject )
    goto LABEL_58;
  v14 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  refreshButtonObject,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  refreshButtonObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
  if ( ((unsigned __int8)refreshButtonObject & 1) != 0 )
  {
    if ( !v14 )
      goto LABEL_58;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v14, 0, 0LL);
  }
  refreshButtonObject = this->fields.refreshTitleObject;
  if ( !refreshButtonObject )
    goto LABEL_58;
  v15 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  refreshButtonObject,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  refreshButtonObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
  if ( ((unsigned __int8)refreshButtonObject & 1) != 0 )
  {
    if ( !v15 )
      goto LABEL_58;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v15, 0, 0LL);
  }
  v16 = (UIWidget_o *)this->fields.refreshButtonSprite;
  refreshButtonObject = (UnityEngine_GameObject_o *)FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    refreshButtonObject = (UnityEngine_GameObject_o *)FollowerSelectItemListViewManager_TypeInfo;
  }
  if ( !v16 )
    goto LABEL_58;
  UIWidget__set_color(v16, *(UnityEngine_Color_o *)(*(_QWORD *)&refreshButtonObject[7].fields.m_CachedPtr + 20LL), 0LL);
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
    v18 = Time;
    refreshButtonObject = (UnityEngine_GameObject_o *)this->fields.refreshRemainLabel;
    this->fields.isRefreshClear = 1;
    if ( refreshButtonObject )
    {
      refreshButtonObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)refreshButtonObject, 0LL);
      if ( refreshButtonObject )
      {
        UnityEngine_GameObject__SetActive(refreshButtonObject, 1, 0LL);
        refreshRemainLabel = this->fields.refreshRemainLabel;
        v33 = v12;
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v33);
        refreshButtonObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                            (System_String_o *)StringLiteral_23539/*"{0}"*/,
                                                            v20,
                                                            0LL);
        if ( refreshRemainLabel )
        {
          UILabel__set_text(refreshRemainLabel, (System_String_o *)refreshButtonObject, 0LL);
          this->fields.refreshCheckTime = v18;
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

  if ( (byte_418AA35 & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_418AA35 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418AA37 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418AA37 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
  FollowerSelectItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_FollowerSelectItemListViewObject__o *__fastcall FollowerSelectItemListViewManager__get_ClippingObjectList(
        FollowerSelectItemListViewManager_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  FollowerSelectItemListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_418AA3C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418AA3C = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (FollowerSelectItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        (UnityEngine_GameObject_o *)current,
                                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)FollowerSelectItemListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B2C434(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_24147020((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_B2C434(v22, v23);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v11 )
          sub_B2C434(Item, v21);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FollowerSelectItemListViewObject__o *)v11;
}


System_Collections_Generic_List_FollowerSelectItemListViewObject__o *__fastcall FollowerSelectItemListViewManager__get_ObjectList(
        FollowerSelectItemListViewManager_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_418AA3B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418AA3B = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FollowerSelectItemListViewObject__o *)v11;
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

  if ( (byte_418AA36 & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_418AA36 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418AA38 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418AA38 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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
  sub_B2C2F8(p_method, object);
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
  __int64 v9; // x1
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_41841D4 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&FollowerSelectItemListViewManager_ResultKind_TypeInfo, v9);
    byte_41841D4 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(FollowerSelectItemListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall FollowerSelectItemListViewManager_CallbackFunc__EndInvoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  FollowerSelectItemListViewManager_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  FollowerSelectItemListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
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
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)result, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)result, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AC5258(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B2C40C(v18, v23);
        (*v20)(v22, v28, (unsigned int)result, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AC5258(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)result,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)result,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)result, v23);
    goto LABEL_38;
  }
}