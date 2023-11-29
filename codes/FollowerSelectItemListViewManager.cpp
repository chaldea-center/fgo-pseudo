void __fastcall FollowerSelectItemListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  ListViewSort_o *v7; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  FollowerSelectItemListViewManager_c *v15; // x8
  float v16; // s4
  float v17; // s5
  float v18; // s6
  float v19; // s7
  struct UnityEngine_Color_o v20; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FA724 & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewManager_TypeInfo, v1);
    sub_B16FFC(&ListViewSort_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_6707, v6);
    byte_40FA724 = 1;
  }
  v7 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v1, v2, v3, v4);
  ListViewSort___ctor_30208480(v7, (System_String_o *)StringLiteral_6707, 11, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)FollowerSelectItemListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v7;
  sub_B16F98(static_fields, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
  v15 = FollowerSelectItemListViewManager_TypeInfo;
  v21.fields.a = 1.0;
  FollowerSelectItemListViewManager_TypeInfo->static_fields->lastSelectedQuestId = -1;
  v15->static_fields->lastSelectedQuestPhase = -1;
  v21.fields.r = 0.30196;
  v20 = (struct UnityEngine_Color_o)0LL;
  v21.fields.g = 0.30196;
  v21.fields.b = 0.30196;
  UnityEngine_Color___ctor(v21, v16, v17, v18, v19, (const MethodInfo *)&v20);
  FollowerSelectItemListViewManager_TypeInfo->static_fields->REFRESH_DARK_COLOR = v20;
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
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *changeSkillButtonSprite; // x21
  struct UISprite_o *bonusFilterSprite; // x0
  WebViewObject_o *Component_WebViewObject; // x19

  if ( (byte_40FA6FF & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_B16FFC(&StringLiteral_16896, v4);
    sub_B16FFC(&StringLiteral_16947, v5);
    sub_B16FFC(&StringLiteral_17079, v6);
    byte_40FA6FF = 1;
  }
  changeSkillButton = (UnityEngine_Component_o *)this->fields.changeSkillButton;
  if ( !changeSkillButton )
    goto LABEL_12;
  sortKindButton = (UnityEngine_Component_o *)this->fields.sortKindButton;
  gameObject = UnityEngine_Component__get_gameObject(changeSkillButton, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  changeSkillButtonSprite = this->fields.changeSkillButtonSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(changeSkillButtonSprite, (System_String_o *)StringLiteral_17079, 0LL);
  AtlasManager__SetEventSprite(this->fields.bonusFilterSprite, (System_String_o *)StringLiteral_16947, 0LL);
  bonusFilterSprite = this->fields.bonusFilterSprite;
  if ( !bonusFilterSprite
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))bonusFilterSprite->klass->vtable._33_MakePixelPerfect.method)(
          bonusFilterSprite,
          bonusFilterSprite->klass->vtable._34_get_minWidth.methodPtr),
        !sortKindButton)
    || (Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    sortKindButton,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        AtlasManager__SetEventSprite((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_16896, 0LL),
        !Component_WebViewObject) )
  {
LABEL_12:
    sub_B170D4();
  }
  ((void (__fastcall *)(WebViewObject_o *, Il2CppClass *))Component_WebViewObject->klass[2]._1.castClass)(
    Component_WebViewObject,
    Component_WebViewObject->klass[2]._1.declaringType);
}


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
    sub_B170D4();
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

  if ( (byte_40FA718 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isResult);
    byte_40FA718 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  EventUpValSetupInfo_o **p_setupInfo; // x27
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v66; // x22
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v77; // x22
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  FollowerSelectItemListViewManager_c *v90; // x0
  struct ListViewSort_o **p_supportSortInfo; // x8
  struct ListViewSort_o *v92; // x1
  ListViewSort_o **p_sort; // x28
  const MethodInfo *v94; // x4
  int32_t InitialDisplayClass; // w0
  FollowerSelectItemListViewManager_c *v96; // x8
  EventUpValSetupInfo_o *v97; // x0
  QuestRestrictionInfo_o *v98; // x19
  System_String_o *String_34837456; // x0
  __int64 v100; // x2
  System_String_o *v101; // x22
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v103; // x2
  __int64 v104; // x1
  __int64 v105; // x8
  __int64 v106; // x22
  unsigned __int64 v107; // x20
  System_String_o *v108; // x23
  int32_t EventId; // w26
  FollowerSelectItemListViewManager_o *v110; // x21
  ClassButtonControlComponent_o *classButtonControl; // x22
  __int64 v112; // x1
  __int64 v113; // x2
  __int64 v114; // x3
  __int64 v115; // x4
  ClassButtonControlComponent_CallbackFunc_o *v116; // x23
  ClassButtonControlComponent_o *v117; // x22
  const MethodInfo *v118; // x2
  UnityEngine_Component_o *bonusFilterKindButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *bonusFilterKindLabel; // x0
  WebViewManager_o *Instance; // x0
  QuestPhaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  QuestPhaseEntity_o *v124; // x20
  __int64 v125; // x22
  __int64 v126; // x22
  DataManager_o *v127; // x0
  NpcFollowerMaster_o *v128; // x25
  WebViewManager_o *v129; // x0
  NpcFollowerMaster_o *v130; // x0
  FollowerInfo_array *QuestFollowerList; // x28
  clsQuestCheck_o *v132; // x0
  int qrs; // w20
  clsQuestCheck_o *v134; // x0
  bool IsMyServantOrNpcRestriction_31258540; // w20
  bool v136; // cc
  BalanceConfig_c *v137; // x0
  int32_t ClassBoardReleaseQuestId; // w22
  bool IsQuestClear_25438860; // w22
  __int64 v140; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v141; // x23
  unsigned __int64 v142; // x24
  FollowerInfo_o **m_Items; // x22
  FollowerInfo_o *v144; // x27
  int32_t ReturnTypeByQuestId; // w0
  __int64 v146; // x26
  WebViewManager_o *v147; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v148; // x0
  int32_t v149; // w0
  System_Int32_array *NpcServantIndividuality; // x0
  __int64 v151; // x1
  __int64 v152; // x2
  __int64 v153; // x3
  __int64 v154; // x4
  bool IsRecommendedFollower; // w25
  __int64 v156; // x22
  __int64 v157; // x23
  int32_t v158; // w0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v159; // x28
  char v160; // w20
  int32_t v161; // w0
  ServantLeaderInfo_o *ServantLeaderInfo; // x23
  WarQuestSelectionMaster_o *v163; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v164; // x22
  __int64 v165; // x23
  __int64 v166; // x26
  int32_t v167; // w0
  WarEntity_o *v168; // x0
  int32_t startType; // w22
  ClassBoardClassMaster_o *v170; // x0
  int32_t ClassBoardBaseId; // w22
  UserClassBoardSquareMaster_o *v172; // x23
  int64_t UserId; // x0
  __int64 v174; // x1
  __int64 v175; // x2
  __int64 v176; // x3
  __int64 v177; // x4
  __int64 v178; // x26
  System_Array_o *classBoardSquareIds; // x0
  Il2CppObject *v180; // x0
  System_Int32_array **v181; // x0
  System_String_array **v182; // x2
  System_String_array **v183; // x3
  System_Boolean_array **v184; // x4
  System_Int32_array **v185; // x5
  System_Int32_array *v186; // x6
  System_Int32_array *v187; // x7
  System_Int32_array **v188; // x0
  System_String_array **v189; // x2
  System_String_array **v190; // x3
  System_Boolean_array **v191; // x4
  System_Int32_array **v192; // x5
  System_Int32_array *v193; // x6
  System_Int32_array *v194; // x7
  __int64 v195; // x1
  __int64 v196; // x2
  __int64 v197; // x3
  __int64 v198; // x4
  FollowerSelectItemListViewManager_c *v199; // x0
  bool v200; // w26
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x20
  bool isServantEquipBonusFilterEnable; // w23
  bool isServantBonusFilterEnable; // w25
  bool isBonusFilterEnable; // w28
  FollowerSelectItemListViewItem_o *v205; // x22
  clsQuestCheck_o *v206; // x0
  int v207; // w20
  clsQuestCheck_o *v208; // x0
  bool v209; // w8
  DataMasterBase_UserGameMaster__UserGameEntity__long__o *v210; // x0
  int64_t v211; // x25
  int v212; // w8
  unsigned int v213; // w24
  int64_t v214; // x8
  FollowerInfo_o *v215; // x0
  System_Array_o *mainSupportDeckIds; // x0
  Il2CppObject *v217; // x0
  Il2CppObject *v218; // x22
  __int64 v219; // x28
  BalanceConfig_c *v220; // x0
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t FixEventSupportDeckNum; // w22
  int32_t FixMainSupportDeckNum; // w23
  __int64 v224; // x3
  __int64 v225; // x4
  int32_t deckPriority; // w26
  unsigned __int64 v227; // x20
  int32_t v228; // w27
  System_Collections_Generic_Dictionary_int__int__o *v229; // x24
  bool v230; // w23
  bool v231; // w28
  FollowerSelectItemListViewItem_o *v232; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *originalItemList; // x0
  struct BalanceConfig_StaticFields *v234; // x8
  int32_t v235; // w22
  int32_t v236; // w23
  int32_t v237; // w0
  __int64 v238; // x3
  __int64 v239; // x4
  int32_t v240; // w26
  unsigned __int64 v241; // x27
  int32_t v242; // w19
  int32_t v243; // w24
  int32_t v244; // w19
  _BOOL4 v245; // w10
  _BOOL4 v246; // w9
  _BOOL4 v247; // w11
  System_Collections_Generic_Dictionary_int__int__o *v248; // x25
  int v249; // w21
  bool v250; // w20
  bool v251; // w28
  bool v252; // w22
  FollowerSelectItemListViewItem_o *v253; // x0
  int32_t v254; // w2
  EventMissionProgressRequest_Argument_ProgressData_o *v255; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *mixItemList; // x0
  DataMasterBase_UserGameMaster__UserGameEntity__long__o *v257; // x0
  int64_t v258; // x20
  WebViewManager_o *v259; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v260; // x0
  QuestEntity_o *v261; // x0
  WebViewManager_o *v262; // x0
  unsigned __int64 v263; // x8
  unsigned __int64 v264; // x19
  __int64 v265; // x9
  __int64 v266; // x9
  unsigned __int64 v267; // x8
  FollowerInfo_o *v268; // x0
  __int64 v269; // x2
  FollowerInfo_o *v270; // x8
  System_Array_o *eventSupportDeckIds; // x0
  Il2CppObject *v272; // x0
  __int64 v273; // x24
  BalanceConfig_c *v274; // x0
  struct BalanceConfig_StaticFields *v275; // x9
  int32_t v276; // w22
  int32_t v277; // w23
  __int64 v278; // x3
  __int64 v279; // x4
  int32_t v280; // w26
  unsigned __int64 v281; // x25
  int32_t v282; // w19
  System_Collections_Generic_Dictionary_int__int__o *v283; // x28
  bool v284; // w27
  bool v285; // w23
  bool v286; // w24
  FollowerSelectItemListViewItem_o *v287; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v288; // x0
  struct BalanceConfig_StaticFields *v289; // x8
  int32_t v290; // w22
  int32_t v291; // w23
  int32_t v292; // w0
  __int64 v293; // x3
  __int64 v294; // x4
  int32_t v295; // w26
  unsigned __int64 v296; // x27
  int32_t v297; // w22
  int32_t v298; // w19
  int v299; // w20
  bool v300; // w25
  bool v301; // w28
  int32_t v302; // w24
  bool v303; // w22
  FollowerSelectItemListViewItem_o *v304; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v305; // x0
  UnityEngine_GameObject_o *refreshButtonObject; // x0
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v308; // x0
  const MethodInfo *v309; // x2
  FollowerSelectItemListViewManager_c *v310; // x0
  const MethodInfo *v311; // x1
  struct UIScrollView_o *scrollView; // x8
  FollowerSelectItemListViewManager_o *v313; // x0
  int32_t v314; // w1
  int32_t v315; // w2
  bool v316; // w3
  const MethodInfo *v317; // x4
  int32_t supportDeckId; // [xsp+38h] [xbp-168h]
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary; // [xsp+48h] [xbp-158h]
  int32_t v320; // [xsp+6Ch] [xbp-134h]
  UserFollowMaster_o *questPhaseb; // [xsp+70h] [xbp-130h]
  bool questIdb; // [xsp+7Ch] [xbp-124h]
  QuestPhaseEntity_o *v325; // [xsp+80h] [xbp-120h]
  QuestPhaseEntity_o *v326; // [xsp+80h] [xbp-120h]
  int32_t v327; // [xsp+80h] [xbp-120h]
  bool isReleasedClassBoard; // [xsp+88h] [xbp-118h]
  void *monitor; // [xsp+88h] [xbp-118h]
  void *v330; // [xsp+88h] [xbp-118h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_originalItemList; // [xsp+90h] [xbp-110h]
  bool v332; // [xsp+98h] [xbp-108h]
  int64_t v333; // [xsp+98h] [xbp-108h]
  int64_t v334; // [xsp+98h] [xbp-108h]
  FollowerInfo_array *v335; // [xsp+A0h] [xbp-100h]
  bool v336; // [xsp+A0h] [xbp-100h]
  __int64 v337; // [xsp+A0h] [xbp-100h]
  __int64 v338; // [xsp+A0h] [xbp-100h]
  __int64 v339; // [xsp+A0h] [xbp-100h]
  NpcFollowerMaster_o *v340; // [xsp+A8h] [xbp-F8h]
  signed __int64 v341; // [xsp+A8h] [xbp-F8h]
  signed __int64 v342; // [xsp+A8h] [xbp-F8h]
  FollowerInfo_o **v343; // [xsp+B0h] [xbp-F0h]
  unsigned int *v344; // [xsp+B0h] [xbp-F0h]
  unsigned int *v345; // [xsp+B0h] [xbp-F0h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v346; // [xsp+B8h] [xbp-E8h]
  __int64 v347; // [xsp+B8h] [xbp-E8h]
  __int64 v348; // [xsp+B8h] [xbp-E8h]
  _BOOL4 IsMyServantOrNpcRestriction; // [xsp+C0h] [xbp-E0h]
  unsigned int v350; // [xsp+C0h] [xbp-E0h]
  unsigned __int64 v351; // [xsp+C0h] [xbp-E0h]
  int32_t followerClassId; // [xsp+C8h] [xbp-D8h]
  FollowerInfo_o **followerClassIda; // [xsp+C8h] [xbp-D8h]
  FollowerInfo_o **followerClassIdb; // [xsp+C8h] [xbp-D8h]
  int32_t pos; // [xsp+D0h] [xbp-D0h]
  FollowerInfo_o *posc; // [xsp+D0h] [xbp-D0h]
  int32_t posa; // [xsp+D0h] [xbp-D0h]
  FollowerInfo_o *posd; // [xsp+D0h] [xbp-D0h]
  int32_t posb; // [xsp+D0h] [xbp-D0h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_mixItemList; // [xsp+D8h] [xbp-C8h]
  int32_t v366; // [xsp+100h] [xbp-A0h]
  int32_t size; // [xsp+100h] [xbp-A0h]
  FollowerInfo_o *v368; // [xsp+100h] [xbp-A0h]
  int32_t v369; // [xsp+100h] [xbp-A0h]
  FollowerInfo_o *v370; // [xsp+100h] [xbp-A0h]
  FollowerSelectItemListViewManager_o *v371; // [xsp+108h] [xbp-98h]
  UserGameEntity_o *v372; // [xsp+110h] [xbp-90h] BYREF
  UserGameEntity_o *v373; // [xsp+118h] [xbp-88h] BYREF
  UserClassBoardSquareEntity_o *v374; // [xsp+120h] [xbp-80h] BYREF
  UserServantEntity_o *v375; // [xsp+128h] [xbp-78h] BYREF
  UserServantEntity_o *entity; // [xsp+130h] [xbp-70h] BYREF
  UserServantEntity_o *v377; // [xsp+138h] [xbp-68h] BYREF
  NpcFollowerEntity_o *v378; // [xsp+140h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v379; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v380; // 0:x0.16

  if ( (byte_40FA701 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&questId);
    sub_B16FFC(&ClassButtonControlComponent_CallbackFunc_TypeInfo, v10);
    sub_B16FFC(&char___TypeInfo, v11);
    sub_B16FFC(&ClassBoardInfo_TypeInfo, v12);
    sub_B16FFC(&CondType_TypeInfo, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserFollowMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v19);
    sub_B16FFC(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v20);
    sub_B16FFC(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, v21);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v22);
    sub_B16FFC(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, v23);
    sub_B16FFC(&Method_DataManager_GetMaster_UserFollowerMaster___, v24);
    sub_B16FFC(&DataManager_TypeInfo, v25);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v26);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27);
    sub_B16FFC(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v28);
    sub_B16FFC(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v29);
    sub_B16FFC(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v30);
    sub_B16FFC(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v31);
    sub_B16FFC(&FollowerSelectItemListViewItem_TypeInfo, v32);
    sub_B16FFC(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v33);
    sub_B16FFC(&FollowerSelectItemListViewManager_TypeInfo, v34);
    sub_B16FFC(&int___TypeInfo, v35);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardInfo__Add__, v36);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v37);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__, v38);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardInfo___ctor__, v39);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v40);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v41);
    sub_B16FFC(&System_Collections_Generic_List_ClassBoardInfo__TypeInfo, v42);
    sub_B16FFC(&System_Collections_Generic_List_ListViewItem__TypeInfo, v43);
    sub_B16FFC(&LocalizationManager_TypeInfo, v44);
    sub_B16FFC(&System_Math_TypeInfo, v45);
    sub_B16FFC(&NetworkManager_TypeInfo, v46);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v47);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v48);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v49);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v50);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v51);
    sub_B16FFC(&StringLiteral_2826, v52);
    sub_B16FFC(&StringLiteral_11842, v53);
    sub_B16FFC(&StringLiteral_1, v54);
    byte_40FA701 = 1;
  }
  v377 = 0LL;
  v378 = 0LL;
  v375 = 0LL;
  entity = 0LL;
  v373 = 0LL;
  v374 = 0LL;
  v372 = 0LL;
  this->fields.questId = questId;
  p_setupInfo = &this->fields.setupInfo;
  this->fields.questPhase = questPhase;
  this->fields.setupInfo = setupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    *(System_String_array ***)&questPhase,
    *(System_String_array ***)&friendPointUpVal,
    *(System_Boolean_array ***)&friendPointUpMaxVal,
    (System_Int32_array **)friendPointCampaignEntityList,
    (System_Int32_array *)setupInfo,
    (System_Int32_array *)questRestrictionInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v371 = this;
  v66 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                                                                  v62,
                                                                                                  v63,
                                                                                                  v64,
                                                                                                  v65);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v66,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  p_mixItemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.mixItemList;
  this->fields.mixItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v66;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mixItemList,
    (System_Int32_array **)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  v77 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                                                                  v73,
                                                                                                  v74,
                                                                                                  v75,
                                                                                                  v76);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v77,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.originalItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v77;
  p_originalItemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.originalItemList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.originalItemList,
    (System_Int32_array **)v77,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  v90 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v90 = FollowerSelectItemListViewManager_TypeInfo;
  }
  p_supportSortInfo = &v90->static_fields->supportSortInfo;
  v92 = *p_supportSortInfo;
  this->fields.sort = *p_supportSortInfo;
  p_sort = &this->fields.sort;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v92,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  if ( !this->fields.sort )
    goto LABEL_302;
  InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                          this,
                          questId,
                          questPhase,
                          this->fields.sort->fields.isRequestLoad,
                          v94);
  v96 = FollowerSelectItemListViewManager_TypeInfo;
  FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId = InitialDisplayClass;
  v96->static_fields->lastSelectedQuestId = questId;
  v96->static_fields->lastSelectedQuestPhase = questPhase;
  v97 = this->fields.setupInfo;
  v98 = questRestrictionInfo;
  if ( v97 && EventUpValSetupInfo__get_EventId(v97, 0LL) >= 1 )
  {
    String_34837456 = UnityEngine_PlayerPrefs__GetString_34837456((System_String_o *)StringLiteral_2826, 0LL);
    if ( !String_34837456 )
      goto LABEL_302;
    v101 = String_34837456;
    if ( String_34837456->fields.m_stringLength < 1 )
      goto LABEL_20;
    Master_WarQuestSelectionMaster = sub_B17014(char___TypeInfo, 1LL, v100);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_302;
    v104 = Master_WarQuestSelectionMaster;
    if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
      goto LABEL_303;
    *(_WORD *)(Master_WarQuestSelectionMaster + 32) = 44;
    Master_WarQuestSelectionMaster = (__int64)System_String__Split(
                                                v101,
                                                (System_Char_array *)Master_WarQuestSelectionMaster,
                                                0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_302;
    v105 = *(_QWORD *)(Master_WarQuestSelectionMaster + 24);
    v106 = Master_WarQuestSelectionMaster;
    if ( (int)v105 < 1 )
    {
LABEL_20:
      if ( !*p_sort )
        goto LABEL_302;
      ListViewSort__SetFilter(*p_sort, 18, 0, 0LL);
      if ( !*p_sort )
        goto LABEL_302;
      ListViewSort__SetFilter(*p_sort, 19, 0, 0LL);
      if ( !*p_sort )
        goto LABEL_302;
      ListViewSort__SetFilter(*p_sort, 20, 0, 0LL);
      if ( !*p_sort )
        goto LABEL_302;
      ListViewSort__SetFilter(*p_sort, 40, 1, 0LL);
      if ( !*p_sort )
        goto LABEL_302;
      ListViewSort__SetFilter(*p_sort, 41, 1, 0LL);
    }
    else
    {
      v107 = 0LL;
      while ( 1 )
      {
        if ( v107 >= (unsigned int)v105 )
          goto LABEL_303;
        if ( !*p_setupInfo )
          goto LABEL_302;
        v108 = *(System_String_o **)(v106 + 32 + 8 * v107);
        EventId = EventUpValSetupInfo__get_EventId(*p_setupInfo, 0LL);
        Master_WarQuestSelectionMaster = System_Int32__Parse(v108, 0LL);
        if ( EventId == (_DWORD)Master_WarQuestSelectionMaster )
          break;
        LODWORD(v105) = *(_DWORD *)(v106 + 24);
        if ( (__int64)++v107 >= (int)v105 )
          goto LABEL_20;
      }
    }
  }
  if ( !*p_sort )
    goto LABEL_302;
  ListViewSort__Load(*p_sort, 0LL);
  v110 = v371;
  classButtonControl = v371->fields.classButtonControl;
  v116 = (ClassButtonControlComponent_CallbackFunc_o *)sub_B170CC(
                                                         ClassButtonControlComponent_CallbackFunc_TypeInfo,
                                                         v112,
                                                         v113,
                                                         v114,
                                                         v115);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v116,
    (Il2CppObject *)v371,
    Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_302;
  ClassButtonControlComponent__init(classButtonControl, v116, questId, questPhase, 0, 0LL);
  v371->fields.isInput = 0;
  v117 = v371->fields.classButtonControl;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  }
  if ( !v117 )
    goto LABEL_302;
  ClassButtonControlComponent__setCursor(
    v117,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(v371, setupInfo, v118);
  bonusFilterKindButton = (UnityEngine_Component_o *)v371->fields.bonusFilterKindButton;
  if ( !bonusFilterKindButton )
    goto LABEL_302;
  gameObject = UnityEngine_Component__get_gameObject(bonusFilterKindButton, 0LL);
  if ( !gameObject )
    goto LABEL_302;
  UnityEngine_GameObject__SetActive(gameObject, v371->fields.isBonusFilterEnable, 0LL);
  if ( v371->fields.isBonusFilterEnable )
  {
    bonusFilterKindLabel = v371->fields.bonusFilterKindLabel;
    if ( !bonusFilterKindLabel )
      goto LABEL_302;
    UILabel__set_text(bonusFilterKindLabel, (System_String_o *)StringLiteral_1, 0LL);
  }
  v371->fields.isRefreshBtnHide = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0LL )
  {
LABEL_302:
    sub_B170D4();
  }
  v124 = QuestPhaseMaster__GetEntity(MasterData_WarQuestSelectionMaster, questId, questPhase, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)v371, 0, 0LL);
  v325 = v124;
  if ( !v124 )
    goto LABEL_292;
  v125 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v125 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v126 = **(_QWORD **)(v125 + 192);
  if ( (*(_BYTE *)(v126 + 306) & 1) == 0 )
    sub_AAFCFC(v126);
  v127 = **(DataManager_o ***)(v126 + 184);
  if ( !v127 )
    goto LABEL_302;
  v128 = (NpcFollowerMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  v127,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  v129 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v129 )
    goto LABEL_302;
  v130 = (NpcFollowerMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v129,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !v130 )
    goto LABEL_302;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(v130, questId, questPhase, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v132 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v132 )
    goto LABEL_302;
  qrs = (int)v132[1].fields.qrs;
  v134 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v134 )
    goto LABEL_302;
  pos = HIDWORD(v134[1].fields.qrs);
  if ( questRestrictionInfo && qrs >= 1 )
  {
    IsMyServantOrNpcRestriction_31258540 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_31258540(
                                             questRestrictionInfo,
                                             pos,
                                             0LL);
    IsMyServantOrNpcRestriction = 0;
  }
  else if ( questRestrictionInfo )
  {
    v136 = qrs <= 0;
    IsMyServantOrNpcRestriction_31258540 = 0;
    IsMyServantOrNpcRestriction = 0;
    if ( v136 )
    {
      IsMyServantOrNpcRestriction_31258540 = 0;
      IsMyServantOrNpcRestriction = QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL);
    }
  }
  else
  {
    IsMyServantOrNpcRestriction = 0;
    IsMyServantOrNpcRestriction_31258540 = 0;
  }
  v137 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v137 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v137->static_fields->ClassBoardReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_25438860 = CondType__IsQuestClear_25438860(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  if ( !QuestFollowerList )
    goto LABEL_302;
  v140 = *(_QWORD *)&QuestFollowerList->max_length;
  if ( (int)v140 >= 1 )
  {
    v366 = 0;
    isReleasedClassBoard = IsQuestClear_25438860;
    v141 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster;
    v142 = 0LL;
    m_Items = QuestFollowerList->m_Items;
    v335 = QuestFollowerList;
    v340 = v128;
    v332 = IsMyServantOrNpcRestriction_31258540;
    v343 = QuestFollowerList->m_Items;
    v346 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster;
    do
    {
      if ( v142 >= (unsigned int)v140 )
        goto LABEL_303;
      v144 = m_Items[v142];
      if ( IsMyServantOrNpcRestriction_31258540 )
      {
        if ( !questRestrictionInfo )
          goto LABEL_302;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
        if ( !v144 )
          goto LABEL_302;
        Master_WarQuestSelectionMaster = (__int64)FollowerInfo__getServantLeaderInfo(v144, 0, ReturnTypeByQuestId, 0LL);
        if ( Master_WarQuestSelectionMaster )
        {
          v146 = Master_WarQuestSelectionMaster;
          v147 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v147 )
            goto LABEL_302;
          v148 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)v147,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
          if ( !v148 )
            goto LABEL_302;
          if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                 v148,
                 &entity,
                 v144->fields.npcFollowerSvtId,
                 (const MethodInfo_266F60C *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
          {
            v149 = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
            NpcServantIndividuality = FollowerInfo__GetNpcServantIndividuality(v144, 0, v149, 0LL);
            goto LABEL_81;
          }
          if ( !v141 )
            goto LABEL_302;
          if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                 v141,
                 &v375,
                 v144->fields.npcFollowerSvtId,
                 (const MethodInfo_266F60C *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
          {
            if ( !v375 )
              goto LABEL_302;
            if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v375, 0LL) )
            {
              if ( !v375 )
                goto LABEL_302;
              NpcServantIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                          (NpcServantFollowerEntity_o *)v375,
                                          0LL);
LABEL_81:
              Master_WarQuestSelectionMaster = QuestRestrictionInfo__IsRestrictionServantIndividuality_31261700(
                                                 questRestrictionInfo,
                                                 NpcServantIndividuality,
                                                 pos,
                                                 0LL);
              if ( (Master_WarQuestSelectionMaster & 1) != 0 )
                goto LABEL_141;
              goto LABEL_84;
            }
          }
          v157 = *(_QWORD *)(v146 + 48);
          v156 = *(_QWORD *)(v146 + 56);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v379.fields.currentCryptoKey = v157;
          *(_QWORD *)&v379.fields.fakeValue = v156;
          v158 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v379, 0LL);
          Master_WarQuestSelectionMaster = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                             questRestrictionInfo,
                                             v158,
                                             *(_DWORD *)(v146 + 64),
                                             *(_DWORD *)(v146 + 164),
                                             pos,
                                             0,
                                             0LL);
          m_Items = v343;
          v141 = v346;
          if ( (Master_WarQuestSelectionMaster & 1) != 0 )
            goto LABEL_141;
        }
      }
      else if ( !v144 )
      {
        goto LABEL_302;
      }
LABEL_84:
      if ( !v144->fields.isFixedNpc && (!IsMyServantOrNpcRestriction || !v144->fields.isMySvtOrNpc) )
      {
        if ( !v128 )
          goto LABEL_302;
        if ( NpcFollowerMaster__TryGetEntity(v128, &v378, v144->fields.userId, questId, questPhase, 0LL) )
        {
          if ( !v378 )
            goto LABEL_302;
          IsRecommendedFollower = NpcFollowerEntity__IsRecommendedFollower(v378, 0LL);
        }
        else
        {
          IsRecommendedFollower = 0;
        }
        v159 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_ClassBoardInfo__TypeInfo, v151, v152, v153, v154);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v159,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
        if ( !v141 )
          goto LABEL_302;
        if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               v141,
               &v377,
               v144->fields.npcFollowerSvtId,
               (const MethodInfo_266F60C *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
        {
          if ( !v377 )
            goto LABEL_302;
          if ( NpcServantFollowerEntity__IsNotClassBoard(v377->fields.imageLimitCount.fields.fakeValue, 0LL)
            || QuestPhaseEntity__IsNotClassBoard(v325, 0LL) )
          {
            v160 = 1;
            if ( !v159 )
              goto LABEL_302;
            goto LABEL_132;
          }
          if ( !questRestrictionInfo )
            goto LABEL_302;
          v161 = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
          ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v144, 0, v161, 0LL);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          v163 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
          if ( !ServantLeaderInfo )
            goto LABEL_302;
          v164 = (DataMasterBase_WarMaster__WarEntity__int__o *)v163;
          v166 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
          v165 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v380.fields.currentCryptoKey = v166;
          *(_QWORD *)&v380.fields.fakeValue = v165;
          v167 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v380, 0LL);
          if ( !v164 )
            goto LABEL_302;
          v168 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v164,
                   v167,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !v168 )
            goto LABEL_302;
          startType = v168->fields.startType;
          v170 = (ClassBoardClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
          if ( !v170 )
            goto LABEL_302;
          ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(v170, startType, 0LL);
          v172 = (UserClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          if ( !v172 )
            goto LABEL_302;
          if ( UserClassBoardSquareMaster__TryGetEntity(v172, &v374, UserId, ClassBoardBaseId, 0LL) )
          {
            v178 = sub_B170CC(ClassBoardInfo_TypeInfo, v174, v175, v176, v177);
            ClassBoardInfo___ctor((ClassBoardInfo_o *)v178, 0LL);
            if ( !v178 )
              goto LABEL_302;
            *(_DWORD *)(v178 + 16) = ClassBoardBaseId;
            if ( !v374 )
              goto LABEL_302;
            classBoardSquareIds = (System_Array_o *)v374->fields.classBoardSquareIds;
            if ( !classBoardSquareIds )
              goto LABEL_302;
            v180 = System_Array__Clone(classBoardSquareIds, 0LL);
            v181 = (System_Int32_array **)sub_B170BC(v180, int___TypeInfo);
            *(_QWORD *)(v178 + 24) = v181;
            sub_B16F98((BattleServantConfConponent_o *)(v178 + 24), v181, v182, v183, v184, v185, v186, v187);
            if ( !v159 )
              goto LABEL_302;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v159,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v178,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ClassBoardInfo__Add__);
            v160 = 0;
            goto LABEL_132;
          }
        }
        v160 = 0;
        if ( !v159 )
          goto LABEL_302;
LABEL_132:
        v188 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v159,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
        v144->fields.userClassBoardInfo = (struct ClassBoardInfo_array *)v188;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v144->fields.userClassBoardInfo,
          v188,
          v189,
          v190,
          v191,
          v192,
          v193,
          v194);
        v199 = FollowerSelectItemListViewManager_TypeInfo;
        if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
          v199 = FollowerSelectItemListViewManager_TypeInfo;
        }
        v200 = IsRecommendedFollower;
        followerClassId = v199->static_fields->followerClassId;
        if ( (v160 & 1) != 0 )
          classBoardMaxDictionary = 0LL;
        else
          classBoardMaxDictionary = v371->fields.classBoardMaxDictionary;
        isServantEquipBonusFilterEnable = v371->fields.isServantEquipBonusFilterEnable;
        isServantBonusFilterEnable = v371->fields.isServantBonusFilterEnable;
        isBonusFilterEnable = v371->fields.isBonusFilterEnable;
        v205 = (FollowerSelectItemListViewItem_o *)sub_B170CC(
                                                     FollowerSelectItemListViewItem_TypeInfo,
                                                     v195,
                                                     v196,
                                                     v197,
                                                     v198);
        FollowerSelectItemListViewItem___ctor(
          v205,
          v366,
          0,
          v144,
          followerClassId,
          friendPointUpVal,
          friendPointUpMaxVal,
          friendPointCampaignEntityList,
          isBonusFilterEnable,
          isServantBonusFilterEnable,
          isServantEquipBonusFilterEnable,
          v200,
          setupInfo,
          questRestrictionInfo,
          0,
          0,
          0,
          classBoardMaxDictionary,
          isReleasedClassBoard,
          0LL);
        if ( !*p_mixItemList )
          goto LABEL_302;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_mixItemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v205,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        QuestFollowerList = v335;
        v128 = v340;
        IsMyServantOrNpcRestriction_31258540 = v332;
        v141 = v346;
        if ( !*p_originalItemList )
          goto LABEL_302;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_originalItemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v205,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        m_Items = v343;
        ++v366;
      }
LABEL_141:
      LODWORD(v140) = QuestFollowerList->max_length;
      ++v142;
    }
    while ( (__int64)v142 < (int)v140 );
  }
  if ( questRestrictionInfo )
  {
    v110 = v371;
    if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL) )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      v206 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v206 )
        goto LABEL_302;
      v207 = (int)v206[1].fields.qrs;
      v208 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v208 )
        goto LABEL_302;
      if ( v207 >= 1 )
      {
        v209 = !QuestRestrictionInfo__IsSelectableNormalSupport(questRestrictionInfo, HIDWORD(v208[1].fields.qrs), 0LL);
        goto LABEL_153;
      }
    }
  }
  else
  {
    v110 = v371;
  }
  v209 = 0;
LABEL_153:
  v110->fields.isRefreshBtnHide = v209;
  if ( !v209 && !v325->fields.isNpcOnly )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v210 = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    if ( !v210 )
      goto LABEL_302;
    Master_WarQuestSelectionMaster = DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                                       v210,
                                       &v373,
                                       (const MethodInfo_266F698 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    if ( (Master_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !v373 )
        goto LABEL_302;
      v211 = v373->fields.userId;
      if ( v211 )
      {
        v212 = *(_DWORD *)(v211 + 24);
        if ( v212 >= 1 )
        {
          v213 = 0;
          v333 = v373->fields.userId;
          do
          {
            if ( v213 >= v212 )
              goto LABEL_303;
            v214 = v211 + 8LL * (int)v213;
            v215 = *(FollowerInfo_o **)(v214 + 32);
            followerClassIda = (FollowerInfo_o **)(v214 + 32);
            if ( !v215 )
              goto LABEL_302;
            FollowerInfo__ChangeLimitCountBySpoilerProtection(v215, 0LL);
            if ( v213 >= *(_DWORD *)(v211 + 24) )
              goto LABEL_303;
            if ( !*followerClassIda )
              goto LABEL_302;
            mainSupportDeckIds = (System_Array_o *)(*followerClassIda)->fields.mainSupportDeckIds;
            if ( !mainSupportDeckIds )
              goto LABEL_302;
            monitor = mainSupportDeckIds[1].monitor;
            v217 = System_Array__Clone(mainSupportDeckIds, 0LL);
            if ( v217 )
            {
              v218 = v217;
              v219 = sub_B170BC(v217, int___TypeInfo);
              if ( !v219 )
              {
LABEL_304:
                v313 = (FollowerSelectItemListViewManager_o *)sub_B173C8(v218);
                FollowerSelectItemListViewManager__GetInitialDisplayClass(v313, v314, v315, v316, v317);
                return;
              }
            }
            else
            {
              v219 = 0LL;
            }
            v220 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v220 = BalanceConfig_TypeInfo;
            }
            static_fields = v220->static_fields;
            FixMainSupportDeckNum = static_fields->FixMainSupportDeckNum;
            FixEventSupportDeckNum = static_fields->FixEventSupportDeckNum;
            if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Math_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            }
            Master_WarQuestSelectionMaster = System_Math__Max_44463768(
                                               FixMainSupportDeckNum,
                                               FixEventSupportDeckNum,
                                               0LL);
            v350 = v213;
            v347 = v219;
            if ( (int)monitor <= 0 )
            {
              v341 = (int)monitor;
              v344 = (unsigned int *)(v219 + 24);
            }
            else
            {
              deckPriority = Master_WarQuestSelectionMaster;
              v227 = 0LL;
              v341 = (int)monitor;
              v344 = (unsigned int *)(v219 + 24);
              v326 = (QuestPhaseEntity_o *)(v219 + 32);
              do
              {
                if ( !*p_originalItemList )
                  goto LABEL_302;
                if ( v213 >= *(_DWORD *)(v211 + 24) )
                  goto LABEL_303;
                if ( !v219 )
                  goto LABEL_302;
                if ( v227 >= *v344 )
                  goto LABEL_303;
                size = (*p_originalItemList)->fields._size;
                v228 = *((_DWORD *)&v326->klass + v227);
                v229 = v110->fields.classBoardMaxDictionary;
                v230 = v110->fields.isServantEquipBonusFilterEnable;
                posc = *followerClassIda;
                v231 = v110->fields.isServantBonusFilterEnable;
                v336 = v110->fields.isBonusFilterEnable;
                v232 = (FollowerSelectItemListViewItem_o *)sub_B170CC(
                                                             FollowerSelectItemListViewItem_TypeInfo,
                                                             v104,
                                                             v103,
                                                             v224,
                                                             v225);
                FollowerSelectItemListViewItem___ctor(
                  v232,
                  size,
                  0,
                  posc,
                  0,
                  friendPointUpVal,
                  friendPointUpMaxVal,
                  friendPointCampaignEntityList,
                  v336,
                  v231,
                  v230,
                  0,
                  setupInfo,
                  v98,
                  1,
                  v228,
                  deckPriority,
                  v229,
                  1,
                  0LL);
                originalItemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v110->fields.originalItemList;
                if ( !originalItemList )
                  goto LABEL_302;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  originalItemList,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v232,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                v213 = v350;
                v219 = v347;
                ++v227;
                --deckPriority;
              }
              while ( (__int64)v227 < (int)monitor );
            }
            posa = 0;
            v337 = v219 + 32;
            while ( 1 )
            {
              Master_WarQuestSelectionMaster = (__int64)BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                Master_WarQuestSelectionMaster = (__int64)BalanceConfig_TypeInfo;
              }
              v234 = *(struct BalanceConfig_StaticFields **)(Master_WarQuestSelectionMaster + 184);
              if ( posa >= v234->SupportDeckMemberMax )
                break;
              if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
                && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
              {
                j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
                v234 = BalanceConfig_TypeInfo->static_fields;
              }
              v236 = v234->FixMainSupportDeckNum;
              v235 = v234->FixEventSupportDeckNum;
              if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_Math_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              }
              v237 = System_Math__Max_44463768(v236, v235, 0LL);
              if ( (int)monitor >= 1 )
              {
                v240 = v237;
                v241 = 0LL;
                do
                {
                  if ( !*p_mixItemList )
                    goto LABEL_302;
                  v242 = (*p_mixItemList)->fields._size;
                  Master_WarQuestSelectionMaster = (__int64)BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    Master_WarQuestSelectionMaster = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( v213 >= *(_DWORD *)(v211 + 24) )
                    goto LABEL_303;
                  if ( !v219 )
                    goto LABEL_302;
                  if ( v241 >= *v344 )
                    goto LABEL_303;
                  v243 = v242;
                  v244 = *(_DWORD *)(v337 + 4 * v241);
                  v245 = v110->fields.isServantBonusFilterEnable;
                  v368 = *followerClassIda;
                  v246 = v110->fields.isBonusFilterEnable;
                  v247 = v110->fields.isServantEquipBonusFilterEnable;
                  v248 = v110->fields.classBoardMaxDictionary;
                  v249 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 164LL);
                  v250 = v247;
                  v251 = v245;
                  v252 = v246;
                  v253 = (FollowerSelectItemListViewItem_o *)sub_B170CC(
                                                               FollowerSelectItemListViewItem_TypeInfo,
                                                               v104,
                                                               v103,
                                                               v238,
                                                               v239);
                  supportDeckId = v244;
                  v98 = questRestrictionInfo;
                  v254 = v249 - posa;
                  v110 = v371;
                  v255 = (EventMissionProgressRequest_Argument_ProgressData_o *)v253;
                  FollowerSelectItemListViewItem___ctor(
                    v253,
                    v243,
                    v254,
                    v368,
                    posa,
                    friendPointUpVal,
                    friendPointUpMaxVal,
                    friendPointCampaignEntityList,
                    v252,
                    v251,
                    v250,
                    0,
                    setupInfo,
                    questRestrictionInfo,
                    1,
                    supportDeckId,
                    v240,
                    v248,
                    1,
                    0LL);
                  mixItemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v371->fields.mixItemList;
                  if ( !mixItemList )
                    goto LABEL_302;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    mixItemList,
                    v255,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                  v211 = v333;
                  v213 = v350;
                  v219 = v347;
                  ++v241;
                  --v240;
                }
                while ( (__int64)v241 < v341 );
              }
              ++posa;
            }
            v212 = *(_DWORD *)(v211 + 24);
            ++v213;
          }
          while ( (int)v213 < v212 );
        }
      }
    }
    v320 = FollowerInfo__GetReturnTypeByQuestId(questId, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v257 = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserFollowerMaster___);
    if ( !v257 )
      goto LABEL_302;
    if ( DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
           v257,
           &v372,
           (const MethodInfo_266F698 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__) )
    {
      if ( !v372 )
        goto LABEL_302;
      v258 = v372->fields.userId;
      v259 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v259 )
        goto LABEL_302;
      v260 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)v259,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !v260 )
        goto LABEL_302;
      v261 = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v260,
                                questId,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( !v261 )
        goto LABEL_302;
      questIdb = QuestEntity__HasFlag_23922108(v261, 0x8000000LL, questPhase, 0LL);
      v262 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v262 )
        goto LABEL_302;
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)v262,
                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserFollowMaster___);
      questPhaseb = (UserFollowMaster_o *)Master_WarQuestSelectionMaster;
      if ( !v258 )
        goto LABEL_302;
      v263 = *(_QWORD *)(v258 + 24);
      if ( (int)v263 >= 1 )
      {
        v264 = 0LL;
        v327 = 0;
        v334 = v258;
        do
        {
          v263 = (unsigned int)v263;
          if ( questIdb )
          {
            if ( v264 >= (unsigned int)v263 )
              goto LABEL_303;
            v265 = *(_QWORD *)(v258 + 8 * v264 + 32);
            if ( !v265 )
              goto LABEL_302;
            if ( *(_DWORD *)(v265 + 36) == 5 )
            {
              if ( !questPhaseb )
                goto LABEL_302;
              Master_WarQuestSelectionMaster = UserFollowMaster__IsFollowUser(questPhaseb, *(_QWORD *)(v265 + 16), 0LL);
              if ( (Master_WarQuestSelectionMaster & 1) == 0 )
                goto LABEL_291;
              v263 = *(unsigned int *)(v258 + 24);
            }
          }
          else
          {
            if ( v264 >= (unsigned int)v263 )
              goto LABEL_303;
            v266 = *(_QWORD *)(v258 + 8 * v264 + 32);
            if ( !v266 )
              goto LABEL_302;
            if ( *(_DWORD *)(v266 + 36) == 5 )
              goto LABEL_291;
          }
          if ( v264 >= v263 )
            goto LABEL_303;
          v267 = v258 + 8 * v264;
          v268 = *(FollowerInfo_o **)(v267 + 32);
          followerClassIdb = (FollowerInfo_o **)(v267 + 32);
          if ( !v268 )
            goto LABEL_302;
          FollowerInfo__ChangeLimitCountBySpoilerProtection(v268, 0LL);
          Master_WarQuestSelectionMaster = sub_B17014(int___TypeInfo, 0LL, v269);
          if ( v264 >= *(unsigned int *)(v258 + 24) )
            goto LABEL_303;
          v270 = *followerClassIdb;
          if ( !*followerClassIdb )
            goto LABEL_302;
          if ( v320 )
          {
            eventSupportDeckIds = (System_Array_o *)v270->fields.eventSupportDeckIds;
            if ( !eventSupportDeckIds )
              goto LABEL_302;
          }
          else
          {
            eventSupportDeckIds = (System_Array_o *)v270->fields.mainSupportDeckIds;
            if ( !eventSupportDeckIds )
              goto LABEL_302;
          }
          v330 = eventSupportDeckIds[1].monitor;
          v272 = System_Array__Clone(eventSupportDeckIds, 0LL);
          if ( v272 )
          {
            v218 = v272;
            v273 = sub_B170BC(v272, int___TypeInfo);
            if ( !v273 )
              goto LABEL_304;
          }
          else
          {
            v273 = 0LL;
          }
          v274 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v274 = BalanceConfig_TypeInfo;
          }
          v275 = v274->static_fields;
          v277 = v275->FixMainSupportDeckNum;
          v276 = v275->FixEventSupportDeckNum;
          if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Math_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          }
          Master_WarQuestSelectionMaster = System_Math__Max_44463768(v277, v276, 0LL);
          v348 = v273;
          v351 = v264;
          if ( (int)v330 > 0 )
          {
            v280 = Master_WarQuestSelectionMaster;
            v281 = 0LL;
            v342 = (int)v330;
            v345 = (unsigned int *)(v273 + 24);
            v338 = v273 + 32;
            while ( 1 )
            {
              if ( !*p_originalItemList )
                goto LABEL_302;
              if ( v264 >= *(unsigned int *)(v258 + 24) )
                break;
              if ( !v273 )
                goto LABEL_302;
              if ( v281 >= *v345 )
                break;
              v369 = (*p_originalItemList)->fields._size;
              v282 = *(_DWORD *)(v338 + 4 * v281);
              v283 = v110->fields.classBoardMaxDictionary;
              v284 = v110->fields.isServantEquipBonusFilterEnable;
              posd = *followerClassIdb;
              v285 = v110->fields.isServantBonusFilterEnable;
              v286 = v110->fields.isBonusFilterEnable;
              v287 = (FollowerSelectItemListViewItem_o *)sub_B170CC(
                                                           FollowerSelectItemListViewItem_TypeInfo,
                                                           v104,
                                                           v103,
                                                           v278,
                                                           v279);
              FollowerSelectItemListViewItem___ctor(
                v287,
                v369,
                0,
                posd,
                0,
                friendPointUpVal,
                friendPointUpMaxVal,
                friendPointCampaignEntityList,
                v286,
                v285,
                v284,
                0,
                setupInfo,
                questRestrictionInfo,
                0,
                v282,
                v280,
                v283,
                1,
                0LL);
              v288 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v110->fields.originalItemList;
              if ( !v288 )
                goto LABEL_302;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v288,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v287,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
              v273 = v348;
              v264 = v351;
              ++v281;
              --v280;
              if ( (__int64)v281 >= (int)v330 )
                goto LABEL_264;
            }
LABEL_303:
            sub_B17100(Master_WarQuestSelectionMaster, v104, v103);
            sub_B170A0();
          }
          v342 = (int)v330;
          v345 = (unsigned int *)(v273 + 24);
LABEL_264:
          posb = 0;
          v339 = v273 + 32;
          while ( 1 )
          {
            Master_WarQuestSelectionMaster = (__int64)BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Master_WarQuestSelectionMaster = (__int64)BalanceConfig_TypeInfo;
            }
            v289 = *(struct BalanceConfig_StaticFields **)(Master_WarQuestSelectionMaster + 184);
            if ( posb >= v289->SupportDeckMemberMax )
              break;
            if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
              && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
            {
              j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
              v289 = BalanceConfig_TypeInfo->static_fields;
            }
            v291 = v289->FixMainSupportDeckNum;
            v290 = v289->FixEventSupportDeckNum;
            if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Math_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            }
            v292 = System_Math__Max_44463768(v291, v290, 0LL);
            if ( (int)v330 >= 1 )
            {
              v295 = v292;
              v296 = 0LL;
              while ( *p_mixItemList )
              {
                v297 = (*p_mixItemList)->fields._size;
                Master_WarQuestSelectionMaster = (__int64)BalanceConfig_TypeInfo;
                if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  Master_WarQuestSelectionMaster = (__int64)BalanceConfig_TypeInfo;
                }
                if ( v264 >= *(unsigned int *)(v258 + 24) )
                  goto LABEL_303;
                if ( !v273 )
                  goto LABEL_302;
                if ( v296 >= *v345 )
                  goto LABEL_303;
                v298 = *(_DWORD *)(v339 + 4 * v296);
                v370 = *followerClassIdb;
                v299 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 164LL);
                v300 = v110->fields.isServantEquipBonusFilterEnable;
                v301 = v110->fields.isServantBonusFilterEnable;
                v302 = v297;
                v303 = v110->fields.isBonusFilterEnable;
                classBoardMaxNumDictionary = v371->fields.classBoardMaxDictionary;
                v110 = v371;
                v304 = (FollowerSelectItemListViewItem_o *)sub_B170CC(
                                                             FollowerSelectItemListViewItem_TypeInfo,
                                                             v104,
                                                             v103,
                                                             v293,
                                                             v294);
                FollowerSelectItemListViewItem___ctor(
                  v304,
                  v302,
                  v299 - posb,
                  v370,
                  posb,
                  friendPointUpVal,
                  friendPointUpMaxVal,
                  friendPointCampaignEntityList,
                  v303,
                  v301,
                  v300,
                  0,
                  setupInfo,
                  questRestrictionInfo,
                  0,
                  v298,
                  v295,
                  classBoardMaxNumDictionary,
                  1,
                  0LL);
                v305 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v371->fields.mixItemList;
                if ( !v305 )
                  goto LABEL_302;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v305,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v304,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                v258 = v334;
                v273 = v348;
                v264 = v351;
                ++v296;
                --v295;
                if ( (__int64)v296 >= v342 )
                  goto LABEL_282;
              }
              goto LABEL_302;
            }
LABEL_282:
            ++posb;
          }
          ++v327;
          if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
            && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
          {
            j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
            v289 = BalanceConfig_TypeInfo->static_fields;
          }
          if ( v327 >= v289->SupportListMax )
            break;
LABEL_291:
          LODWORD(v263) = *(_DWORD *)(v258 + 24);
          ++v264;
        }
        while ( (__int64)v264 < (int)v263 );
      }
    }
  }
LABEL_292:
  refreshButtonObject = v110->fields.refreshButtonObject;
  if ( !refreshButtonObject )
    goto LABEL_302;
  UnityEngine_GameObject__SetActive(refreshButtonObject, !v110->fields.isRefreshBtnHide, 0LL);
  emptyMessageLabel = v110->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v308 = LocalizationManager__Get((System_String_o *)StringLiteral_11842, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_302;
  UILabel__set_text(emptyMessageLabel, v308, 0LL);
  v310 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v310 = FollowerSelectItemListViewManager_TypeInfo;
  }
  FollowerSelectItemListViewManager__SortClass(v110, v310->static_fields->followerClassId, v309);
  ListViewManager__SortItem((ListViewManager_o *)v110, -1, 0, -1, 0LL);
  FollowerSelectItemListViewManager__SetFilterButtonImage(v110, v311);
  scrollView = v110->fields.scrollView;
  if ( !scrollView )
    goto LABEL_302;
  BYTE2(scrollView->fields.scrollWheelFactor) = 1;
}


void __fastcall FollowerSelectItemListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  FollowerSelectItemListViewManager_c *v3; // x0
  ListViewSort_o *supportSortInfo; // x0

  if ( (byte_40FA6FA & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_6708, v2);
    byte_40FA6FA = 1;
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
    sub_B170D4();
  ListViewSort__DeleteContinueData(supportSortInfo, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6708, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FollowerSelectItemListViewManager__DestroyList_26086992(this, 0LL, v2);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList_26086992(
        FollowerSelectItemListViewManager_o *this,
        BattleSetupInfo_o *battleSetupInfo,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct EventUpValSetupInfo_o *eventUpValSetupInfo; // x1
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
  struct ListViewSort_o **p_supportSortInfo; // x8
  struct ListViewSort_o *v30; // x1
  ListViewSort_o **p_sort; // x21
  int32_t v32; // w0
  const MethodInfo *v33; // x4
  int32_t InitialDisplayClass; // w0
  FollowerSelectItemListViewManager_c *v35; // x8
  int32_t v36; // w20
  ListViewSort_o *sort; // x0
  const MethodInfo *v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  FollowerSelectItemListViewManager_o *v45; // x0
  int monitor; // w20
  FollowerSelectItemListViewManager_c *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  ClassButtonControlComponent_o *classButtonControl; // x20
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  ClassButtonControlComponent_CallbackFunc_o *v59; // x21
  ClassButtonControlComponent_o *v60; // x20
  const MethodInfo *v61; // x2
  UnityEngine_Component_o *bonusFilterKindButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *bonusFilterKindLabel; // x20
  System_String_o *v65; // x0
  struct FollowerSelectItemListViewObject_o *tutorialListViewObject; // x0
  UnityEngine_Component_o *v67; // x0
  UnityEngine_GameObject_o *v68; // x0

  if ( (byte_40FA707 & 1) == 0 )
  {
    sub_B16FFC(&ClassButtonControlComponent_CallbackFunc_TypeInfo, battleSetupInfo);
    sub_B16FFC(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v10);
    sub_B16FFC(&FollowerSelectItemListViewManager_TypeInfo, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_11748, v13);
    sub_B16FFC(&StringLiteral_6708, v14);
    byte_40FA707 = 1;
  }
  if ( battleSetupInfo )
  {
    eventUpValSetupInfo = battleSetupInfo->fields.eventUpValSetupInfo;
    if ( !this )
      goto LABEL_45;
  }
  else
  {
    eventUpValSetupInfo = 0LL;
    if ( !this )
      goto LABEL_45;
  }
  this->fields.setupInfo = eventUpValSetupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)eventUpValSetupInfo,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.questRestrictionInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v16, v17, v18, v19, v20, v21);
  v28 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v28 = FollowerSelectItemListViewManager_TypeInfo;
  }
  p_supportSortInfo = &v28->static_fields->supportSortInfo;
  v30 = *p_supportSortInfo;
  this->fields.sort = *p_supportSortInfo;
  p_sort = &this->fields.sort;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v30,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( battleSetupInfo )
  {
    v32 = BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
    if ( !*p_sort )
      goto LABEL_45;
    InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                            this,
                            v32,
                            battleSetupInfo->fields.questPhase,
                            (*p_sort)->fields.isRequestLoad,
                            v33);
    v35 = FollowerSelectItemListViewManager_TypeInfo;
    v36 = InitialDisplayClass;
    if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v35 = FollowerSelectItemListViewManager_TypeInfo;
    }
    v35->static_fields->followerClassId = v36;
  }
  if ( !*p_sort )
    goto LABEL_45;
  ListViewSort__Load(*p_sort, 0LL);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_45;
  ListViewSort__Save(sort, 0LL);
  if ( !*p_sort )
    goto LABEL_45;
  if ( (*p_sort)->fields.isRequestSave )
  {
    v45 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v45 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor = (int)v45->fields.itemList->monitor;
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(v45, v38) )
    {
      v47 = FollowerSelectItemListViewManager_TypeInfo;
      if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v47 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6708, v47->static_fields->followerClassId, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
  this->fields.originalItemList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.originalItemList, 0LL, v39, v40, v41, v42, v43, v44);
  this->fields.mixItemList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.mixItemList, 0LL, v48, v49, v50, v51, v52, v53);
  classButtonControl = this->fields.classButtonControl;
  v59 = (ClassButtonControlComponent_CallbackFunc_o *)sub_B170CC(
                                                        ClassButtonControlComponent_CallbackFunc_TypeInfo,
                                                        v55,
                                                        v56,
                                                        v57,
                                                        v58);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v59,
    (Il2CppObject *)this,
    Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_45;
  ClassButtonControlComponent__init(classButtonControl, v59, this->fields.questId, this->fields.questPhase, 0, 0LL);
  this->fields.isInput = 0;
  v60 = this->fields.classButtonControl;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  }
  if ( !v60 )
    goto LABEL_45;
  ClassButtonControlComponent__setCursor(
    v60,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, this->fields.setupInfo, v61);
  bonusFilterKindButton = (UnityEngine_Component_o *)this->fields.bonusFilterKindButton;
  if ( !bonusFilterKindButton )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject(bonusFilterKindButton, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, this->fields.isBonusFilterEnable, 0LL);
  if ( this->fields.isBonusFilterEnable )
  {
    bonusFilterKindLabel = this->fields.bonusFilterKindLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v65 = LocalizationManager__Get((System_String_o *)StringLiteral_11748, 0LL);
    if ( bonusFilterKindLabel )
    {
      UILabel__set_text(bonusFilterKindLabel, v65, 0LL);
      goto LABEL_41;
    }
LABEL_45:
    sub_B170D4();
  }
LABEL_41:
  tutorialListViewObject = this->fields.tutorialListViewObject;
  if ( !tutorialListViewObject )
    goto LABEL_45;
  ((void (__fastcall *)(struct FollowerSelectItemListViewObject_o *, Il2CppMethodPointer))tutorialListViewObject->klass->vtable._4_ClearItem.method)(
    tutorialListViewObject,
    tutorialListViewObject->klass->vtable._5_SetItem.methodPtr);
  v67 = (UnityEngine_Component_o *)this->fields.tutorialListViewObject;
  if ( !v67 )
    goto LABEL_45;
  v68 = UnityEngine_Component__get_gameObject(v67, 0LL);
  if ( !v68 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v68, 0, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__EndClassCompatibilityMenu(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FA713 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40FA713 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseClassCompatibilityMenu(Instance, 0LL, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__EndCloseClassBoardEffectListDialog(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FA722 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40FA722 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  ListViewSort_o *sort; // x0
  CommonUI_o *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x21

  if ( (byte_40FA715 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40FA715 = 1;
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
  System_Action___ctor(
    v14,
    (Il2CppObject *)this,
    Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__,
    0LL);
  if ( !Instance )
LABEL_8:
    sub_B170D4();
  CommonUI__CloseServantBonusFilterSelectMenu(Instance, v14, 0LL);
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
  WebViewManager_o *Instance; // x0
  QuestPhaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v14; // x20
  int32_t result; // w0
  struct System_Int32_array *classIds; // x8
  WebViewManager_o *v17; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  struct System_Int32_array *v21; // x8
  WarEntity_o *v22; // x8

  if ( (byte_40FA704 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, *(_QWORD *)&questId);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FA704 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_17;
  Entity = QuestPhaseMaster__GetEntity(MasterData_WarQuestSelectionMaster, questId, questPhase, 0LL);
  if ( !Entity )
    return defaultValue;
  v14 = Entity;
  result = QuestPhaseEntity__GetAdvantageClassId(Entity, 0LL);
  if ( result != -1 )
    return result;
  classIds = v14->fields.classIds;
  if ( !classIds || !*(_QWORD *)&classIds->max_length )
    return defaultValue;
  v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v17 )
    goto LABEL_17;
  v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v17,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v21 = v14->fields.classIds;
  if ( !v21 )
    goto LABEL_17;
  if ( !v21->max_length )
  {
    sub_B17100(v18, v19, v20);
    sub_B170A0();
  }
  if ( !v18 )
LABEL_17:
    sub_B170D4();
  v22 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v18,
          v21->m_Items[1],
          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  result = defaultValue;
  if ( v22 )
    return *(&v22->fields.flag + 1);
  return result;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_c *v2; // x0

  if ( (byte_40FA70A & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewManager_TypeInfo, method);
    byte_40FA70A = 1;
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

  if ( (byte_40FA723 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    byte_40FA723 = 1;
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

  if ( (byte_40FA702 & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewManager_TypeInfo, *(_QWORD *)&questId);
    this = (FollowerSelectItemListViewManager_o *)sub_B16FFC(&OptionManager_TypeInfo, v8);
    byte_40FA702 = 1;
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

  if ( (byte_40FA708 & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_40FA708 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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

  if ( (byte_40FA71F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    byte_40FA71F = 1;
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
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v10; // x22
  FollowerSelectItemListViewItem_o *v11; // x23
  __int64 v12; // x10
  ServantLeaderInfo_o *ServantLeader; // x0

  if ( (byte_40FA720 & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewItem_TypeInfo, userId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    byte_40FA720 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_B170D4();
  v10 = 0LL;
  while ( (__int64)v10 < itemList->fields._size )
  {
    if ( v10 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v11 = (FollowerSelectItemListViewItem_o *)itemList->fields._items->m_Items[v10];
    if ( v11 )
    {
      v12 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) >= (unsigned int)v12
        && (FollowerSelectItemListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] == FollowerSelectItemListViewItem_TypeInfo
        && FollowerSelectItemListViewItem__get_FollowerId(v11, 0LL) == userId )
      {
        ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(v11, 0LL);
        if ( !ServantLeader )
          goto LABEL_15;
        if ( ServantLeader->fields.userSvtId == userSvtId )
          return v10;
      }
    }
    itemList = this->fields.itemList;
    ++v10;
    if ( !itemList )
      goto LABEL_15;
  }
  LODWORD(v10) = 0;
  return v10;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FA705 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6708, method);
    byte_40FA705 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6708, 0, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewManager_c *v2; // x0
  ListViewSort_o *supportSortInfo; // x0

  if ( (byte_40FA6FB & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewManager_TypeInfo, v1);
    byte_40FA6FB = 1;
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
    sub_B170D4();
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

  if ( (byte_40FA703 & 1) == 0 )
  {
    sub_B16FFC(&BattleData_TypeInfo, *(_QWORD *)&questId);
    sub_B16FFC(&FollowerSelectItemListViewManager_TypeInfo, v6);
    byte_40FA703 = 1;
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
  struct System_Collections_Generic_List_ListViewItem__o *originalItemList; // x25
  signed __int64 v21; // x22
  unsigned __int64 v22; // x23
  ListViewItem_o *v23; // x8
  __int64 v24; // x11
  __int64 v25; // x11
  FollowerSelectItemListViewItem_o *v26; // x0
  struct System_Collections_Generic_List_ListViewItem__o *mixItemList; // x25
  signed __int64 v28; // x22
  unsigned __int64 v29; // x23
  ListViewItem_o *v30; // x8
  __int64 v31; // x11
  __int64 v32; // x11
  FollowerSelectItemListViewItem_o *v33; // x0

  if ( (byte_40FA706 & 1) == 0 )
  {
    sub_B16FFC(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&friendPointUpVal);
    sub_B16FFC(&FollowerSelectItemListViewItem_TypeInfo, v7);
    sub_B16FFC(&FollowerSelectItemListViewManager_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    byte_40FA706 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_57;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
      FollowerSelectItemListViewItem__Modify(v17, friendPointUpVal, friendPointUpMaxVal, 0LL);
      if ( (__int64)++v13 >= size )
        goto LABEL_19;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_57:
    sub_B170D4();
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
  if ( ClassButtonControlComponent__IsMixSupportGroupType(followerClassId, 0LL) )
  {
    originalItemList = this->fields.originalItemList;
    if ( !originalItemList )
      goto LABEL_57;
    v21 = originalItemList->fields._size;
    if ( (int)v21 >= 1 )
    {
      v22 = 0LL;
      while ( 1 )
      {
        if ( v22 >= (unsigned int)originalItemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v23 = originalItemList->fields._items->m_Items[v22];
        if ( !v23 )
          goto LABEL_57;
        v24 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v23->klass->_2.bitflags2 + 1) < (unsigned int)v24
          || (FollowerSelectItemListViewItem_c *)v23->klass->_2.typeHierarchy[v24 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          goto LABEL_57;
        }
        v25 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v23->klass->_2.bitflags2 + 1) >= (unsigned int)v25 )
        {
          if ( (FollowerSelectItemListViewItem_c *)v23->klass->_2.typeHierarchy[v25 - 1] == FollowerSelectItemListViewItem_TypeInfo )
            v26 = (FollowerSelectItemListViewItem_o *)originalItemList->fields._items->m_Items[v22];
          else
            v26 = 0LL;
        }
        else
        {
          v26 = 0LL;
        }
        FollowerSelectItemListViewItem__Modify(v26, friendPointUpVal, friendPointUpMaxVal, 0LL);
        if ( (__int64)++v22 >= v21 )
          return;
        originalItemList = this->fields.originalItemList;
        if ( !originalItemList )
          goto LABEL_57;
      }
    }
  }
  else
  {
    mixItemList = this->fields.mixItemList;
    if ( !mixItemList )
      goto LABEL_57;
    v28 = mixItemList->fields._size;
    if ( (int)v28 >= 1 )
    {
      v29 = 0LL;
      while ( 1 )
      {
        if ( v29 >= (unsigned int)mixItemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v30 = mixItemList->fields._items->m_Items[v29];
        if ( !v30 )
          goto LABEL_57;
        v31 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v31
          || (FollowerSelectItemListViewItem_c *)v30->klass->_2.typeHierarchy[v31 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          goto LABEL_57;
        }
        v32 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v30->klass->_2.bitflags2 + 1) >= (unsigned int)v32 )
        {
          if ( (FollowerSelectItemListViewItem_c *)v30->klass->_2.typeHierarchy[v32 - 1] == FollowerSelectItemListViewItem_TypeInfo )
            v33 = (FollowerSelectItemListViewItem_o *)mixItemList->fields._items->m_Items[v29];
          else
            v33 = 0LL;
        }
        else
        {
          v33 = 0LL;
        }
        FollowerSelectItemListViewItem__Modify(v33, friendPointUpVal, friendPointUpMaxVal, 0LL);
        if ( (__int64)++v29 >= v28 )
          return;
        mixItemList = this->fields.mixItemList;
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

  if ( (byte_40FA71B & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, *(_QWORD *)&classPos);
    byte_40FA71B = 1;
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  ServantBonusFilterSelectMenu_CallbackFunc_o *v15; // x22

  if ( (byte_40FA714 & 1) == 0 )
  {
    sub_B16FFC(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FA714 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
    isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v15 = (ServantBonusFilterSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                           ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo,
                                                           v11,
                                                           v12,
                                                           v13,
                                                           v14);
    ServantBonusFilterSelectMenu_CallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__,
      0LL);
    if ( !v10 )
      sub_B170D4();
    CommonUI__OpenServantBonusFilterSelectMenu(
      v10,
      0,
      isServantBonusFilterEnable,
      isServantEquipBonusFilterEnable,
      sort,
      v15,
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
  const MethodInfo *v8; // x2
  int size; // w8
  System_Collections_Generic_List_FollowerSelectItemListViewObject__o *v10; // x20
  unsigned int v11; // w21
  FollowerSelectItemListViewObject_o *v12; // x0

  if ( (byte_40FA71E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FA71E = 1;
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
      this->fields.displaySkill = dword_3136948[displaySkill];
    ObjectList = FollowerSelectItemListViewManager__get_ObjectList(this, v5);
    if ( !ObjectList )
      goto LABEL_17;
    size = ObjectList->fields._size;
    v10 = ObjectList;
    if ( size >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( size <= v11 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v12 = v10->fields._items->m_Items[v11];
        if ( !v12 )
          break;
        FollowerSelectItemListViewObject__ChangeDisplaySkill(v12, this->fields.displaySkill, v8);
        size = v10->fields._size;
        if ( (int)++v11 >= size )
          return;
      }
LABEL_17:
      sub_B170D4();
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x21

  if ( (byte_40FA712 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FA712 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__,
      0LL);
    if ( !Instance )
      sub_B170D4();
    CommonUI__OpenClassCompatibilityMenu(Instance, v11, 0LL);
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
      sub_B16F98(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
  int32_t Index; // w2

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B16F98(
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
        sub_B170D4();
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
  struct ListViewSort_o *sort; // x8

  if ( (byte_40FA719 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FA719 = 1;
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
      sub_B170D4();
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  OtherUserSortDialog_CallbackFunc_o *v13; // x22

  if ( (byte_40FA717 & 1) == 0 )
  {
    sub_B16FFC(&OtherUserSortDialog_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FollowerSelectItemListViewManager_CloseSortDialog__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FA717 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v13 = (OtherUserSortDialog_CallbackFunc_o *)sub_B170CC(OtherUserSortDialog_CallbackFunc_TypeInfo, v9, v10, v11, v12);
    OtherUserSortDialog_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_CloseSortDialog__,
      0LL);
    if ( !v8 )
      sub_B170D4();
    CommonUI__OpenOtherUserSortDialog(v8, 0, sort, v13, 0LL);
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
  int32_t Index; // w2

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B16F98(
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
        sub_B170D4();
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
  int32_t Index; // w2

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B16F98(
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
        sub_B170D4();
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
  int32_t Index; // w2

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B16F98(
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
        sub_B170D4();
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
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UIScrollView_o *scrollView; // x0
  UnityEngine_Behaviour_o *v16; // x0
  FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x22
  int32_t Index; // w0

  if ( (byte_40FA711 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12578, obj);
    byte_40FA711 = 1;
  }
  if ( this->fields.isInput )
  {
    tutorialListViewObject = (UnityEngine_Component_o *)this->fields.tutorialListViewObject;
    if ( !tutorialListViewObject )
      goto LABEL_14;
    gameObject = UnityEngine_Component__get_gameObject(tutorialListViewObject, 0LL);
    if ( !gameObject )
      goto LABEL_14;
    if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    {
      scrollView = this->fields.scrollView;
      if ( !scrollView )
        goto LABEL_14;
      UIScrollView__Press(scrollView, 0, 0LL);
      v16 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
      if ( !v16 )
        goto LABEL_14;
      UnityEngine_Behaviour__set_enabled(v16, 0, 0LL);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_12578,
        0.1,
        0LL);
    }
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
    if ( callbackFunc )
    {
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        FollowerSelectItemListViewManager_CallbackFunc__Invoke(callbackFunc, kind, Index, 0LL);
        return;
      }
LABEL_14:
      sub_B170D4();
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UIScrollView_o *v13; // x0
  UnityEngine_Component_o *tutorialListViewObject; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIScrollView_o *v16; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_40FA710 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA710 = 1;
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
      v13 = this->fields.scrollView;
      if ( v13 )
      {
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
        tutorialListViewObject = (UnityEngine_Component_o *)this->fields.tutorialListViewObject;
        if ( tutorialListViewObject )
        {
          gameObject = UnityEngine_Component__get_gameObject(tutorialListViewObject, 0LL);
          if ( gameObject )
          {
            if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
              goto LABEL_16;
            v16 = this->fields.scrollView;
            if ( v16 )
            {
              UIScrollView__UpdatePosition(v16, 0LL);
              this->fields.isScrollRefresh = 1;
LABEL_16:
              callbackFunc2 = this->fields.callbackFunc2;
              this->fields.callbackFunc2 = 0LL;
              sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
              if ( callbackFunc2 )
                System_Action__Invoke(callbackFunc2, 0LL);
              return;
            }
          }
        }
      }
      sub_B170D4();
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OpenSupportClassBoard(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
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
  int32_t SvtId; // w0
  WarEntity_o *Entity; // x0
  int32_t startType; // w22
  ClassBoardClassMaster_o *v28; // x0
  int32_t ClassBoardBaseId; // w20
  ClassBoardClassMaster_o *v30; // x0
  _BOOL8 IsInvalidClass; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  struct FollowerInfo_o *followerInfo; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x8
  int max_length; // w9
  unsigned int v39; // w10
  __int64 v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  _QWORD **v47; // x23
  __int64 v48; // x22
  __int16 v49; // w8
  __int64 v50; // x22
  __int64 v51; // x22
  __int64 v52; // x22
  System_Int32_array ***v53; // x8
  System_Int32_array **v54; // x1
  CommonUI_o *Instance; // x22
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  System_Action_o *v60; // x23

  if ( (byte_40FA721 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, obj);
    sub_B16FFC(&Method_System_Array_Empty_int___, v5);
    sub_B16FFC(&ClassBoardInfo_TypeInfo, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B16FFC(&FollowerSelectItemListViewItem_TypeInfo, v11);
    sub_B16FFC(&Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__, v12);
    sub_B16FFC(&Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    byte_40FA721 = 1;
  }
  if ( this->fields.isInput )
  {
    itemList = this->fields.itemList;
    if ( itemList )
    {
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        if ( itemList->fields._size <= (unsigned int)Index )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
            v20 = (_QWORD *)sub_B17004(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
          v21 = (System_Reflection_MethodBase_o *)sub_B16FE0(v20, v20[3]);
          OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0LL);
          return;
        }
        this->fields.isInput = 0;
        v22 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
        if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 75) & 2) != 0 )
          v22 = (_QWORD *)sub_B17004(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
        v23 = (System_Reflection_MethodBase_o *)sub_B16FE0(v22, v22[3]);
        OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
        SvtId = FollowerSelectItemListViewItem__get_SvtId(v18, 0LL);
        if ( Master_WarQuestSelectionMaster )
        {
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     Master_WarQuestSelectionMaster,
                     SvtId,
                     (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Entity )
          {
            startType = Entity->fields.startType;
            v28 = (ClassBoardClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( v28 )
            {
              ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(v28, startType, 0LL);
              v30 = (ClassBoardClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
              if ( v30 )
              {
                IsInvalidClass = ClassBoardClassMaster__IsInvalidClass(v30, startType, 0LL);
                if ( IsInvalidClass )
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
                  v40 = sub_B170CC(ClassBoardInfo_TypeInfo, v32, v33, v34, v35);
                  ClassBoardInfo___ctor((ClassBoardInfo_o *)v40, 0LL);
                  if ( v40 )
                  {
                    *(_DWORD *)(v40 + 16) = ClassBoardBaseId;
                    v47 = (_QWORD **)Method_System_Array_Empty_int___;
                    v48 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
                    v49 = *(_WORD *)(v48 + 306);
                    if ( (v49 & 1) == 0 )
                    {
                      sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
                      v49 = *(_WORD *)(v48 + 306);
                    }
                    if ( (v49 & 0x400) != 0 )
                    {
                      v50 = *v47[6];
                      if ( (*(_BYTE *)(v50 + 306) & 1) == 0 )
                        sub_AAFCFC(*v47[6]);
                      if ( !*(_DWORD *)(v50 + 224) )
                      {
                        v51 = *v47[6];
                        if ( (*(_BYTE *)(v51 + 306) & 1) == 0 )
                          sub_AAFCFC(*v47[6]);
                        j_il2cpp_runtime_class_init_0(v51);
                      }
                    }
                    v52 = *v47[6];
                    if ( (*(_BYTE *)(v52 + 306) & 1) == 0 )
                      sub_AAFCFC(*v47[6]);
                    v53 = *(System_Int32_array ****)(v52 + 184);
                    v54 = *v53;
                    *(_QWORD *)(v40 + 24) = *v53;
                    sub_B16F98((BattleServantConfConponent_o *)(v40 + 24), v54, v41, v42, v43, v44, v45, v46);
LABEL_47:
                    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    v60 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v56, v57, v58, v59);
                    System_Action___ctor(
                      v60,
                      (Il2CppObject *)this,
                      Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__,
                      0LL);
                    if ( Instance )
                    {
                      CommonUI__OpenClassBoardEffectListDialog(
                        Instance,
                        1,
                        ClassBoardBaseId,
                        0,
                        v60,
                        1,
                        (ClassBoardInfo_o *)v40,
                        0LL);
                      return;
                    }
                  }
                }
                else
                {
                  v39 = 0;
                  while ( 1 )
                  {
                    if ( v39 >= max_length )
                    {
                      sub_B17100(IsInvalidClass, v32, v33);
                      sub_B170A0();
                    }
                    v40 = (__int64)userClassBoardInfo->m_Items[v39];
                    if ( !v40 )
                      break;
                    if ( *(_DWORD *)(v40 + 16) == ClassBoardBaseId )
                      goto LABEL_47;
                    if ( (int)++v39 >= max_length )
                      goto LABEL_34;
                  }
                }
              }
            }
          }
        }
      }
LABEL_49:
      sub_B170D4();
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
  System_Collections_Generic_List_FollowerSelectItemListViewObject__o *v9; // x20
  signed __int64 size; // x8
  unsigned __int64 v11; // x24
  int v12; // w23
  FollowerSelectItemListViewObject_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x22
  const MethodInfo *v19; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FA70F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v5);
    sub_B16FFC(&StringLiteral_10004, v6);
    byte_40FA70F = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = FollowerSelectItemListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_15:
    sub_B170D4();
  v9 = ObjectList;
  this->fields.callbackCount = ObjectList->fields._size;
  LODWORD(size) = ObjectList->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v11 = 0LL;
  v12 = 0;
  do
  {
    if ( v11 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v13 = v9->fields._items->m_Items[v11];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v13, 0LL) )
    {
      v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v13 )
        goto LABEL_15;
      ++v12;
      zero = UnityEngine_Vector3__get_zero(0LL);
      FollowerSelectItemListViewObject__Init(v13, 4, v18, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v19);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v9->fields._size;
    ++v11;
  }
  while ( (__int64)v11 < size );
  if ( !v12 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
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
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *current; // x21
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FA70D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__, v9);
    sub_B16FFC(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v12);
    sub_B16FFC(&StringLiteral_10004, v13);
    byte_40FA70D = 1;
  }
  memset(&v23, 0, sizeof(v23));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v23.fields.current;
      v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      FollowerSelectItemListViewObject__Init(
        (FollowerSelectItemListViewObject_o *)current,
        mode,
        v21,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v22);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__RequestListObject_26090328(
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
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FA70E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__, v7);
    sub_B16FFC(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v10);
    sub_B16FFC(&StringLiteral_10004, v11);
    byte_40FA70E = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      FollowerSelectItemListViewObject__Init(
        (FollowerSelectItemListViewObject_o *)current,
        mode,
        v19,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v20);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


void __fastcall FollowerSelectItemListViewManager__ScrollViewEnabled(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v3 = setupInfo;
  if ( (byte_40FA6FE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventFilterMaster___, setupInfo);
    sub_B16FFC(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA6FE = 1;
  }
  entity = 0LL;
  if ( v3 )
    LODWORD(v3) = EventUpValSetupInfo__get_EventId(v3, 0LL);
  *(_WORD *)&this->fields.isBonusFilterEnable = 256;
  this->fields.isServantEquipBonusFilterEnable = 1;
  if ( (int)v3 >= 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventFilterMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_15;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           MasterData_WarQuestSelectionMaster,
           &entity,
           (int32_t)v3,
           (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__) )
    {
      if ( entity )
      {
        this->fields.isBonusFilterEnable = !EventFilterEntity__IsSupportFilterNoDisp((EventFilterEntity_o *)entity, 0LL);
        if ( entity )
        {
          this->fields.isServantBonusFilterEnable = !EventFilterEntity__IsSupportServantFilterNoDisp(
                                                       (EventFilterEntity_o *)entity,
                                                       0LL);
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
      sub_B170D4();
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
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  UISprite_o *classInfoSprite; // x20
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x0
  BattleServantConfConponent_o *p_classBoardMaxDictionary; // x20
  System_Collections_Generic_Dictionary_int__int__o *v27; // x19
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v38; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  __int64 v45; // x0
  __int64 v46; // x21
  __int64 v47; // x9
  ClassBoardSquareMaster_o *v48; // x0
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  unsigned __int64 v51; // x10
  int32_t *v52; // x11
  __int64 v53; // x0

  if ( (byte_40FA700 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&BalanceConfig_TypeInfo, v3);
    sub_B16FFC(&ClassBoardBaseEntity_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5);
    sub_B16FFC(&CondType_TypeInfo, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Clear__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_B16FFC(&System_IDisposable_TypeInfo, v14);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_17080, v17);
    byte_40FA700 = 1;
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
  if ( CondType__IsQuestClear_25438860(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17080, 0LL);
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = (BattleServantConfConponent_o *)&this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_2DDD180 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v27 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v20,
                                                                 v21,
                                                                 v22,
                                                                 v23);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v27,
      (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    p_classBoardMaxDictionary->klass = (BattleServantConfConponent_c *)v27;
    sub_B16F98(p_classBoardMaxDictionary, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster->fields.list) == 0LL )
  {
    sub_B170D4();
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v38 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v38;
        p_offset += 4;
        if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v41 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v42 = 0LL;
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v43 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_34;
      }
      v44 = (__int64)&v41->vtable[*v43].method;
    }
    else
    {
LABEL_34:
      v44 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v45 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
            Enumerator,
            *(_QWORD *)(v44 + 8));
    v46 = v45;
    if ( v45 )
    {
      v47 = *(&ClassBoardBaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v45 + 300LL) < (unsigned int)v47
        || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v45 + 200LL) + 8 * v47 - 8) != ClassBoardBaseEntity_TypeInfo )
      {
        sub_B173C8(v45);
LABEL_55:
        sub_B170D4();
      }
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v48 = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v46 )
      goto LABEL_55;
    if ( !v48 )
      sub_B170D4();
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(v48, *(_DWORD *)(v46 + 16), 0LL);
    if ( OtherThanNoneEntity )
    {
      if ( !p_classBoardMaxDictionary->klass )
        sub_B170D4();
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)p_classBoardMaxDictionary->klass,
        *(_DWORD *)(v46 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v50 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v51 = 0LL;
    v52 = &v50->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      ++v51;
      v52 += 4;
      if ( v51 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_51;
    }
    v53 = (__int64)&v50->vtable[*v52].method;
  }
  else
  {
LABEL_51:
    v53 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(Enumerator, *(_QWORD *)(v53 + 8));
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_IEnumerable_T__o *mixItemList; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v27; // x10
  System_Collections_Generic_IEnumerable_T__o *originalItemList; // x22
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v29; // x23
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct System_Collections_Generic_List_ListViewItem__o *v36; // x0
  __int64 v37; // x10
  int v38; // w19
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+8h] [xbp-78h] BYREF
  int v40[2]; // [xsp+20h] [xbp-60h]
  int v41; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_40FA70B & 1) == 0 )
  {
    sub_B16FFC(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&followerClassId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_B16FFC(&FollowerSelectItemListViewItem_TypeInfo, v8);
    sub_B16FFC(&FollowerSelectItemListViewManager_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem___ctor___66738096, v11);
    sub_B16FFC(&System_Collections_Generic_List_ListViewItem__TypeInfo, v12);
    byte_40FA70B = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v41 = 0;
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
      v19 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                              System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                                              v14,
                                                                              v15,
                                                                              v16,
                                                                              v17);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v19,
        mixItemList,
        (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_ListViewItem___ctor___66738096);
      this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v19;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.itemList,
        (System_Int32_array **)v19,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      itemList = this->fields.itemList;
      if ( itemList )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v39,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v42 = v39;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v42,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( v42.fields.current )
          {
            v27 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v42.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v27
              && (FollowerSelectItemListViewItem_c *)v42.fields.current->klass->_2.typeHierarchy[v27 - 1] == FollowerSelectItemListViewItem_TypeInfo )
            {
              FollowerSelectItemListViewItem__UpdateRestriction(
                (FollowerSelectItemListViewItem_o *)v42.fields.current,
                0LL);
            }
          }
        }
        v40[0] = 190;
        v41 = 1;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v42,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        v41 = 0;
        return;
      }
LABEL_31:
      sub_B170D4();
    }
    originalItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.originalItemList;
    v29 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                            System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                                            v14,
                                                                            v15,
                                                                            v16,
                                                                            v17);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v29,
      originalItemList,
      (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_ListViewItem___ctor___66738096);
    this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v29;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.itemList,
      (System_Int32_array **)v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    v36 = this->fields.itemList;
    if ( !v36 )
      goto LABEL_31;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v39,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v36,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v42 = v39;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v42,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( v42.fields.current )
      {
        v37 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v42.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v37
          && (FollowerSelectItemListViewItem_c *)v42.fields.current->klass->_2.typeHierarchy[v37 - 1] == FollowerSelectItemListViewItem_TypeInfo )
        {
          FollowerSelectItemListViewItem__SetClassId(
            (FollowerSelectItemListViewItem_o *)v42.fields.current,
            followerClassId,
            0LL);
        }
      }
    }
    v40[0] = 190;
    v38 = ++v41;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v42,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v38 && v40[v38 - 1] == 190 )
      v41 = v38 - 1;
  }
}


void __fastcall FollowerSelectItemListViewManager__SetFilterButtonImage(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *bonusFilterSprite; // x19
  bool v6; // w0
  System_String_o **v7; // x8

  if ( (byte_40FA716 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16948, method);
    sub_B16FFC(&StringLiteral_16947, v3);
    byte_40FA716 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (bonusFilterSprite = this->fields.bonusFilterSprite,
        v6 = ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !bonusFilterSprite) )
  {
    sub_B170D4();
  }
  v7 = (System_String_o **)&StringLiteral_16947;
  if ( !v6 )
    v7 = (System_String_o **)&StringLiteral_16948;
  UISprite__set_spriteName(bonusFilterSprite, *v7, 0LL);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  FollowerSelectItemListViewManager__SetMode_26089480(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__SetMode_26089480(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_FollowerSelectItemListViewObject__o *ObjectList; // x0
  int size; // w8
  System_Collections_Generic_List_FollowerSelectItemListViewObject__o *v12; // x19
  unsigned int v13; // w22
  FollowerSelectItemListViewObject_o *v14; // x21
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  __int64 *v17; // x8
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_FollowerSelectItemListViewObject__o *ClippingObjectList; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  int32_t v24; // w8
  System_Collections_Generic_List_FollowerSelectItemListViewObject__o *v25; // x20
  int v26; // w8
  __int64 v27; // x23
  FollowerSelectItemListViewObject_o *v28; // x21
  System_Action_o *v29; // x22
  const MethodInfo *v30; // x3
  int v31; // s1
  int32_t v34; // w1
  FollowerSelectItemListViewObject_o *v35; // x0
  System_Action_o *v36; // x2
  UnityEngine_Component_o *tutorialListViewObject; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct FollowerSelectItemListViewObject_o *v45; // x0
  struct FollowerSelectItemListViewObject_o *v46; // x22
  const MethodInfo *v47; // x1
  FollowerSelectItemListViewItem_o *Item; // x0
  struct FollowerSelectItemListViewObject_o *v49; // x21

  if ( (byte_40FA70C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v7);
    sub_B16FFC(&StringLiteral_10004, v8);
    sub_B16FFC(&StringLiteral_11393, v9);
    byte_40FA70C = 1;
  }
  if ( mode == 3 )
  {
    ObjectList = FollowerSelectItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
    if ( !ObjectList )
      goto LABEL_38;
    size = ObjectList->fields._size;
    v12 = ObjectList;
    if ( size >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( size <= v13 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v14 = v12->fields._items->m_Items[v13];
        if ( !v14 )
          break;
        UnityEngine_Vector3__get_zero(0LL);
        if ( (byte_40FA72E & 1) == 0 )
        {
          sub_B16FFC(&FollowerSelectItemListViewItem_TypeInfo, v15);
          byte_40FA72E = 1;
        }
        FollowerSelectItemListViewObject__SetupDisp(v14, v15);
        size = v12->fields._size;
        if ( (int)++v13 >= size )
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
    v17 = &StringLiteral_11393;
LABEL_37:
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)*v17, 0.0, 0LL);
    return;
  }
  if ( mode != 4 )
  {
    if ( mode == 2 )
      FollowerSelectItemListViewManager__RequestListObject_26090328(this, 3, v16);
    return;
  }
  ListViewManager__set_IsInput((ListViewManager_o *)this, 1, 0LL);
  ClippingObjectList = FollowerSelectItemListViewManager__get_ClippingObjectList(this, v18);
  if ( !ClippingObjectList )
    goto LABEL_38;
  v24 = ClippingObjectList->fields._size;
  v25 = ClippingObjectList;
  if ( v24 < 1 )
  {
    this->fields.callbackCount = 1;
    v17 = &StringLiteral_10004;
    goto LABEL_37;
  }
  this->fields.callbackCount = v24;
  v26 = ClippingObjectList->fields._size;
  if ( v26 >= 1 )
  {
    v27 = 0LL;
    while ( 1 )
    {
      if ( v26 <= (unsigned int)v27 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v28 = v25->fields._items->m_Items[v27];
      v29 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v20, v21, v22, v23);
      System_Action___ctor(v29, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v28 )
        break;
      *(UnityEngine_Vector3_o *)(&v31 - 1) = UnityEngine_Vector3__get_zero(0LL);
      if ( (_DWORD)v27 )
      {
        v34 = 2;
        v35 = v28;
        v36 = v29;
      }
      else
      {
        FollowerSelectItemListViewObject__Init(v28, 0, v29, 0.0, *(UnityEngine_Vector3_o *)&v31, v30);
        tutorialListViewObject = (UnityEngine_Component_o *)this->fields.tutorialListViewObject;
        if ( !tutorialListViewObject )
          break;
        gameObject = UnityEngine_Component__get_gameObject(tutorialListViewObject, 0LL);
        if ( !gameObject )
          break;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        v45 = this->fields.tutorialListViewObject;
        if ( !v45 )
          break;
        v45->fields.manager = (struct ListViewManager_o *)this;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v45->fields.manager,
          (System_Int32_array **)this,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
        v46 = this->fields.tutorialListViewObject;
        Item = FollowerSelectItemListViewObject__GetItem(v28, v47);
        if ( !v46 )
          break;
        ((void (__fastcall *)(struct FollowerSelectItemListViewObject_o *, FollowerSelectItemListViewItem_o *, Il2CppMethodPointer))v46->klass->vtable._5_SetItem.method)(
          v46,
          Item,
          v46->klass->vtable._6_SetItem.methodPtr);
        v49 = this->fields.tutorialListViewObject;
        if ( !v49 )
          break;
        *(UnityEngine_Vector3_o *)(&v31 - 1) = UnityEngine_Vector3__get_zero(0LL);
        v34 = 6;
        v35 = v49;
        v36 = 0LL;
      }
      FollowerSelectItemListViewObject__Init(v35, v34, v36, 0.0, *(UnityEngine_Vector3_o *)&v31, v30);
      v26 = v25->fields._size;
      if ( (int)++v27 >= v26 )
        return;
    }
LABEL_38:
    sub_B170D4();
  }
}


void __fastcall FollowerSelectItemListViewManager__SetMode_26090272(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  FollowerSelectItemListViewManager__SetMode_26089480(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__SetObjectItem(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject_o *v4; // x19
  __int64 v6; // x10
  int32_t initMode; // w8
  const MethodInfo *v8; // x3
  int v9; // s1
  int32_t v12; // w1
  const MethodInfo *v13; // x1

  v4 = obj;
  if ( (byte_40FA709 & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewObject_TypeInfo, obj);
    byte_40FA709 = 1;
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
  initMode = this->fields.initMode;
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
    sub_B170D4();
  }
  if ( !v4 )
    goto LABEL_19;
  UnityEngine_Vector3__get_zero(0LL);
  if ( (byte_40FA72E & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewItem_TypeInfo, v13);
    byte_40FA72E = 1;
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
  ListViewSort_o *sort; // x0
  UILabel_o *sortKindLabel; // x20
  System_String_o *SortKindButtonText; // x0
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  UISprite_o *sortExplanationSprite; // x0
  System_String_o **v17; // x8
  struct ListViewSort_o *v18; // x8
  UISprite_o *v19; // x0
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v21; // x9
  System_String_o **v22; // x10
  UISprite_o *v23; // x0
  System_String_o **v24; // x8
  struct ListViewSort_o *v25; // x8
  System_String_o **v26; // x8

  if ( (byte_40FA71A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16955, v3);
    sub_B16FFC(&StringLiteral_17038, v4);
    sub_B16FFC(&StringLiteral_16995, v5);
    sub_B16FFC(&StringLiteral_16985, v6);
    sub_B16FFC(&StringLiteral_17002, v7);
    sub_B16FFC(&StringLiteral_16952, v8);
    byte_40FA71A = 1;
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
    SortKindButtonText = ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !sortKindLabel )
      goto LABEL_36;
    UILabel__set_text(sortKindLabel, SortKindButtonText, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL) )
  {
    v14 = this->fields.sort;
    if ( v14 )
    {
      sortKind = v14->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sortExplanationSprite = this->fields.sortExplanationSprite;
        if ( sortExplanationSprite )
        {
          v17 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17002 : &StringLiteral_16995);
          UISprite__set_spriteName(sortExplanationSprite, *v17, 0LL);
          v18 = this->fields.sort;
          if ( v18 )
          {
            v19 = this->fields.sortOrderSprite;
            if ( v19 )
            {
              isAscendingOrder = v18->fields.isAscendingOrder;
              v21 = (System_String_o **)&StringLiteral_16952;
              v22 = (System_String_o **)&StringLiteral_16955;
LABEL_32:
              if ( isAscendingOrder )
                v26 = v21;
              else
                v26 = v22;
              UISprite__set_spriteName(v19, *v26, 0LL);
              return;
            }
          }
        }
      }
      else
      {
        v23 = this->fields.sortExplanationSprite;
        if ( v23 )
        {
          v24 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17038 : &StringLiteral_16985);
          UISprite__set_spriteName(v23, *v24, 0LL);
          v25 = this->fields.sort;
          if ( v25 )
          {
            v19 = this->fields.sortOrderSprite;
            if ( v19 )
            {
              isAscendingOrder = v25->fields.isAscendingOrder;
              v21 = (System_String_o **)&StringLiteral_16955;
              v22 = (System_String_o **)&StringLiteral_16952;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_36:
    sub_B170D4();
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  signed __int64 size; // x24
  int32_t v28; // w25
  unsigned __int64 v29; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v30; // x22
  __int64 v31; // x10
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v32; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct ListViewSort_o *sort; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  ListViewSort_o *v41; // x0
  ListViewSort_o *v42; // x0
  ListViewSort_o *v43; // x0

  if ( (byte_40FA71C & 1) == 0 )
  {
    sub_B16FFC(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classPos);
    sub_B16FFC(&FollowerSelectItemListViewItem_TypeInfo, v5);
    sub_B16FFC(&FollowerSelectItemListViewManager_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem___ctor___66738096, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_List_ListViewItem__TypeInfo, v12);
    byte_40FA71C = 1;
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
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                                                                  v16,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  p_itemList = &this->fields.itemList;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_45;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v28 = 0;
    v29 = 0LL;
    do
    {
      if ( v29 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v30 = (EventMissionProgressRequest_Argument_ProgressData_o *)itemList->fields._items->m_Items[v29];
      if ( !v30 )
        break;
      v31 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v31
        || (FollowerSelectItemListViewItem_c *)v30->klass->_2.typeHierarchy[v31 - 1] != FollowerSelectItemListViewItem_TypeInfo )
      {
        break;
      }
      if ( FollowerSelectItemListViewItem__get_SvtId((FollowerSelectItemListViewItem_o *)v30, 0LL) >= 1 )
      {
        v30->fields.missionConditionDetailId = v28;
        if ( !v20 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v20,
          v30,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v28;
      }
      if ( (__int64)++v29 >= size )
        goto LABEL_32;
      itemList = *p_itemList;
    }
    while ( *p_itemList );
LABEL_45:
    sub_B170D4();
  }
LABEL_32:
  v32 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                          System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                                          v21,
                                                                          v22,
                                                                          v23,
                                                                          v24);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v32,
    (System_Collections_Generic_IEnumerable_T__o *)v20,
    (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_ListViewItem___ctor___66738096);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v32;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_45;
  if ( sort->fields.sortKind == 11 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( (!questRestrictionInfo || !questRestrictionInfo->fields.isRestriction)
      && this->fields.isBonusFilterEnable
      && !ListViewSort__GetFilter(sort, 18, 0LL) )
    {
      v41 = this->fields.sort;
      if ( !v41 )
        goto LABEL_45;
      if ( !ListViewSort__GetFilter(v41, 19, 0LL) )
      {
        v42 = this->fields.sort;
        if ( !v42 )
          goto LABEL_45;
        if ( ListViewSort__GetFilter(v42, 40, 0LL) )
        {
          v43 = this->fields.sort;
          if ( !v43 )
            goto LABEL_45;
          ListViewSort__GetFilter(v43, 41, 0LL);
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
  __int64 v11; // x20
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Behaviour_o *v13; // x21
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Behaviour_o *v15; // x21
  UIWidget_o *v16; // x21
  FollowerSelectItemListViewManager_c *v17; // x0
  UIWidget_o *v18; // x0
  int64_t Time; // x0
  int64_t v20; // x21
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UILabel_o *v23; // x22
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  UnityEngine_GameObject_o *refreshButtonObject; // x0
  UnityEngine_Behaviour_o *Component_srcLineSprite; // x20
  UIWidget_o *refreshButtonSprite; // x20
  int v29; // s0
  UnityEngine_GameObject_o *refreshTitleObject; // x0
  UnityEngine_Behaviour_o *v34; // x20
  UIWidget_o *refreshTitleSprite; // x20
  int v36; // s0
  UnityEngine_Component_o *refreshRemainLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v42; // x0
  __int64 v43; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FA71D & 1) == 0 )
  {
    sub_B16FFC(&FollowerListRequest_TypeInfo, method);
    sub_B16FFC(&FollowerSelectItemListViewManager_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, v4);
    sub_B16FFC(&long_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_23445, v8);
    sub_B16FFC(&StringLiteral_1, v9);
    byte_40FA71D = 1;
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
    Component_srcLineSprite = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           refreshButtonObject,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      if ( !Component_srcLineSprite )
        goto LABEL_58;
      UnityEngine_Behaviour__set_enabled(Component_srcLineSprite, 1, 0LL);
    }
    else
    {
      refreshButtonSprite = (UIWidget_o *)this->fields.refreshButtonSprite;
      *(UnityEngine_Color_o *)&v29 = UnityEngine_Color__get_white(0LL);
      if ( !refreshButtonSprite )
        goto LABEL_58;
      UIWidget__set_color(refreshButtonSprite, *(UnityEngine_Color_o *)&v29, 0LL);
    }
    refreshTitleObject = this->fields.refreshTitleObject;
    if ( refreshTitleObject )
    {
      v34 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         refreshTitleObject,
                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v34, 0LL, 0LL) )
      {
        if ( !v34 )
          goto LABEL_58;
        UnityEngine_Behaviour__set_enabled(v34, 1, 0LL);
      }
      else
      {
        refreshTitleSprite = (UIWidget_o *)this->fields.refreshTitleSprite;
        *(UnityEngine_Color_o *)&v36 = UnityEngine_Color__get_white(0LL);
        if ( !refreshTitleSprite )
          goto LABEL_58;
        UIWidget__set_color(refreshTitleSprite, *(UnityEngine_Color_o *)&v36, 0LL);
      }
      refreshRemainLabel = (UnityEngine_Component_o *)this->fields.refreshRemainLabel;
      if ( refreshRemainLabel )
      {
        gameObject = UnityEngine_Component__get_gameObject(refreshRemainLabel, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          v42 = this->fields.refreshRemainLabel;
          if ( v42 )
          {
            UILabel__set_text(v42, (System_String_o *)StringLiteral_1, 0LL);
            return;
          }
        }
      }
    }
LABEL_58:
    sub_B170D4();
  }
  v11 = RefreshRemain;
  v12 = this->fields.refreshButtonObject;
  if ( !v12 )
    goto LABEL_58;
  v13 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v12,
                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL) )
  {
    if ( !v13 )
      goto LABEL_58;
    UnityEngine_Behaviour__set_enabled(v13, 0, 0LL);
  }
  v14 = this->fields.refreshTitleObject;
  if ( !v14 )
    goto LABEL_58;
  v15 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v14,
                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL) )
  {
    if ( !v15 )
      goto LABEL_58;
    UnityEngine_Behaviour__set_enabled(v15, 0, 0LL);
  }
  v16 = (UIWidget_o *)this->fields.refreshButtonSprite;
  v17 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v17 = FollowerSelectItemListViewManager_TypeInfo;
  }
  if ( !v16 )
    goto LABEL_58;
  UIWidget__set_color(v16, v17->static_fields->REFRESH_DARK_COLOR, 0LL);
  v18 = (UIWidget_o *)this->fields.refreshTitleSprite;
  if ( !v18 )
    goto LABEL_58;
  UIWidget__set_color(v18, FollowerSelectItemListViewManager_TypeInfo->static_fields->REFRESH_DARK_COLOR, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( this->fields.refreshCheckTime != Time )
  {
    v20 = Time;
    v21 = (UnityEngine_Component_o *)this->fields.refreshRemainLabel;
    this->fields.isRefreshClear = 1;
    if ( v21 )
    {
      v22 = UnityEngine_Component__get_gameObject(v21, 0LL);
      if ( v22 )
      {
        UnityEngine_GameObject__SetActive(v22, 1, 0LL);
        v23 = this->fields.refreshRemainLabel;
        v43 = v11;
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v43);
        v25 = System_String__Format((System_String_o *)StringLiteral_23445, v24, 0LL);
        if ( v23 )
        {
          UILabel__set_text(v23, v25, 0LL);
          this->fields.refreshCheckTime = v20;
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

  if ( (byte_40FA6F6 & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FA6F6 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_B173C8(v7);
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

  if ( (byte_40FA6F8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FA6F8 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_B173C8(v7);
  FollowerSelectItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_FollowerSelectItemListViewObject__o *__fastcall FollowerSelectItemListViewManager__get_ClippingObjectList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  FollowerSelectItemListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FA6FD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FA6FD = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (FollowerSelectItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        (UnityEngine_GameObject_o *)current,
                                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B170D4();
      Item = (ListViewItem_o *)FollowerSelectItemListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B170D4();
      if ( Item->fields.isTermination )
      {
        if ( ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
        {
          if ( !v14 )
            sub_B170D4();
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v14 )
          sub_B170D4();
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FollowerSelectItemListViewObject__o *)v14;
}


System_Collections_Generic_List_FollowerSelectItemListViewObject__o *__fastcall FollowerSelectItemListViewManager__get_ObjectList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FA6FC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FA6FC = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FollowerSelectItemListViewObject__o *)v14;
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

  if ( (byte_40FA6F7 & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FA6F7 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_B173C8(v7);
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

  if ( (byte_40FA6F9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FA6F9 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_B173C8(v7);
  FollowerSelectItemListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager_CallbackFunc___ctor(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F68C1 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&FollowerSelectItemListViewManager_ResultKind_TypeInfo, v9);
    byte_40F68C1 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(FollowerSelectItemListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall FollowerSelectItemListViewManager_CallbackFunc__EndInvoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result);
      if ( (sub_B1702C(v22) & 1) == 0 )
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
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
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
            v18 = sub_AAFEF8(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B170AC(v17, v22);
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
            v16 = sub_AAFEF8(v21, class_0, v10);
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