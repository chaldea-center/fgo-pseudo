void __fastcall FollowerSelectItemListViewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  FollowerSelectItemListViewManager___c_c *v16; // x0
  Il2CppObject *v17; // x19
  System_Func_Voice_BATTLE__BattlePerformance_VoiceParam__o *v18; // x20
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  FollowerSelectItemListViewManager_c *v26; // x8
  float v27; // s4
  float v28; // s5
  float v29; // s6
  float v30; // s7
  struct UnityEngine_Color_o v31; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EBC07 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort___ctor__, v4, v5, v6);
    sub_B5D5C4(&System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_FollowerSelectItemListViewManager___c___cctor_b__124_0__, v10, v11, v12);
    sub_B5D5C4(&FollowerSelectItemListViewManager___c_TypeInfo, v13, v14, v15);
    byte_42EBC07 = 1;
  }
  v16 = FollowerSelectItemListViewManager___c_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager___c_TypeInfo);
    v16 = FollowerSelectItemListViewManager___c_TypeInfo;
  }
  v17 = (Il2CppObject *)v16->static_fields->__9;
  v18 = (System_Func_Voice_BATTLE__BattlePerformance_VoiceParam__o *)sub_B5D694(System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo);
  System_Func_Voice_BATTLE__BattlePerformance_VoiceParam____ctor(
    v18,
    v17,
    Method_FollowerSelectItemListViewManager___c___cctor_b__124_0__,
    (const MethodInfo_2C2B7F8 *)Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort___ctor__);
  static_fields = (BattleServantConfConponent_o *)FollowerSelectItemListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v18;
  sub_B5D560(static_fields, (System_Int32_array **)v18, v20, v21, v22, v23, v24, v25);
  v26 = FollowerSelectItemListViewManager_TypeInfo;
  v32.fields.a = 1.0;
  FollowerSelectItemListViewManager_TypeInfo->static_fields->lastSelectedQuestId = -1;
  v26->static_fields->lastSelectedQuestPhase = -1;
  v32.fields.r = 0.30196;
  v31 = (struct UnityEngine_Color_o)0LL;
  v32.fields.g = 0.30196;
  v32.fields.b = 0.30196;
  UnityEngine_Color___ctor(v32, v27, v28, v29, v30, (const MethodInfo *)&v31);
  FollowerSelectItemListViewManager_TypeInfo->static_fields->REFRESH_DARK_COLOR = v31;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_Component_o *changeSkillButton; // x0
  UnityEngine_Component_o *sortKindButton; // x20
  UISprite_o *changeSkillButtonSprite; // x21
  WebViewObject_o *Component_WebViewObject; // x19

  if ( (byte_42EBBE0 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17171/*"btn_bg_12"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17222/*"btn_sefilter_2"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17356/*"buttontxt_formation_19"*/, v14, v15, v16);
    byte_42EBBE0 = 1;
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
  AtlasManager__SetEventSprite(changeSkillButtonSprite, (System_String_o *)StringLiteral_17356/*"buttontxt_formation_19"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.bonusFilterSprite, (System_String_o *)StringLiteral_17222/*"btn_sefilter_2"*/, 0LL);
  changeSkillButton = (UnityEngine_Component_o *)this->fields.bonusFilterSprite;
  if ( !changeSkillButton
    || (changeSkillButton = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))changeSkillButton->klass[2]._1.typeMetadataHandle)(
                                                         changeSkillButton,
                                                         changeSkillButton->klass[2]._1.interopData),
        !sortKindButton)
    || (Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    sortKindButton,
                                    (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        changeSkillButton = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(
                                                         (UISprite_o *)Component_WebViewObject,
                                                         (System_String_o *)StringLiteral_17171/*"btn_bg_12"*/,
                                                         0LL),
        !Component_WebViewObject) )
  {
LABEL_12:
    sub_B5D69C(changeSkillButton, method);
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
    sub_B5D69C(classButtonControl, *(_QWORD *)&classPos);
  }
  return sort->fields.sortKind != 11;
}


void __fastcall FollowerSelectItemListViewManager__CloseSortDialog(
        FollowerSelectItemListViewManager_o *this,
        bool isResult,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_42EBBFA & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isResult, (_DWORD)method, v3);
    byte_42EBBFA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  int v103; // w1
  int v104; // w2
  __int64 v105; // x3
  int v106; // w1
  int v107; // w2
  __int64 v108; // x3
  int v109; // w1
  int v110; // w2
  __int64 v111; // x3
  int v112; // w1
  int v113; // w2
  __int64 v114; // x3
  int v115; // w1
  int v116; // w2
  __int64 v117; // x3
  int v118; // w1
  int v119; // w2
  __int64 v120; // x3
  int v121; // w1
  int v122; // w2
  __int64 v123; // x3
  int v124; // w1
  int v125; // w2
  __int64 v126; // x3
  int v127; // w1
  int v128; // w2
  __int64 v129; // x3
  int v130; // w1
  int v131; // w2
  __int64 v132; // x3
  int v133; // w1
  int v134; // w2
  __int64 v135; // x3
  int v136; // w1
  int v137; // w2
  __int64 v138; // x3
  int v139; // w1
  int v140; // w2
  __int64 v141; // x3
  int v142; // w1
  int v143; // w2
  __int64 v144; // x3
  int v145; // w1
  int v146; // w2
  __int64 v147; // x3
  int v148; // w1
  int v149; // w2
  __int64 v150; // x3
  int v151; // w1
  int v152; // w2
  __int64 v153; // x3
  int v154; // w1
  int v155; // w2
  __int64 v156; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v157; // x21
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v164; // x21
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  __int64 v171; // x1
  FollowerSelectItemListViewManager_c *v172; // x8
  __int64 LIST_VIEW_SORT; // x0
  struct ListViewSort_o *v174; // x0
  struct ListViewSort_o **p_sort; // x27
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  const MethodInfo *v182; // x4
  int32_t InitialDisplayClass; // w0
  FollowerSelectItemListViewManager_c *v184; // x8
  System_Int32_array *OngoingQuestTargetEventIds; // x26
  EventUpValSetupInfo_o *v186; // x21
  System_String_array **v187; // x2
  System_String_array **v188; // x3
  System_Boolean_array **v189; // x4
  System_Int32_array **v190; // x5
  System_Int32_array *v191; // x6
  System_Int32_array *v192; // x7
  System_String_o *v193; // x21
  __int64 v194; // x8
  __int64 v195; // x25
  unsigned __int64 v196; // x20
  int32_t v197; // w0
  ClassButtonControlComponent_o *classButtonControl; // x21
  ClassButtonControlComponent_CallbackFunc_o *v199; // x25
  ClassButtonControlComponent_o *v200; // x21
  const MethodInfo *v201; // x2
  QuestPhaseEntity_o *v202; // x20
  __int64 v203; // x21
  __int64 v204; // x21
  NpcFollowerMaster_o *MasterData_WarQuestSelectionMaster; // x24
  FollowerInfo_array *QuestFollowerList; // x27
  int v207; // w20
  bool IsMyServantOrNpcRestriction_34282120; // w20
  bool v209; // cc
  BalanceConfig_c *v210; // x0
  int32_t ClassBoardReleaseQuestId; // w21
  bool IsQuestClear_25877652; // w25
  __int64 v213; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v214; // x21
  unsigned __int64 v215; // x22
  bool v216; // w10
  FollowerInfo_o **m_Items; // x25
  FollowerInfo_o *v218; // x26
  __int64 v219; // x28
  int32_t ReturnTypeByQuestId; // w0
  System_Int32_array *NpcServantIndividuality; // x0
  bool IsRecommendedFollower; // w24
  __int64 v223; // x21
  __int64 v224; // x25
  int32_t v225; // w0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v226; // x28
  char v227; // w20
  ClassBoardClassMaster_o *v228; // x20
  int32_t v229; // w0
  ServantLeaderInfo_o *ServantLeaderInfo; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v231; // x25
  __int64 v232; // x19
  __int64 v233; // x21
  int32_t ClassBoardBaseId; // w19
  UserClassBoardSquareMaster_o *Master_WarQuestSelectionMaster; // x21
  __int64 v236; // x25
  Il2CppObject *v237; // x0
  System_Int32_array **v238; // x0
  System_String_array **v239; // x2
  System_String_array **v240; // x3
  System_Boolean_array **v241; // x4
  System_Int32_array **v242; // x5
  System_Int32_array *v243; // x6
  System_Int32_array *v244; // x7
  System_Int32_array **OpenClassIdArrayFromBaseId; // x0
  System_String_array **v246; // x2
  System_String_array **v247; // x3
  System_Boolean_array **v248; // x4
  System_Int32_array **v249; // x5
  System_Int32_array *v250; // x6
  System_Int32_array *v251; // x7
  System_Int32_array **v252; // x0
  System_String_array **v253; // x2
  System_String_array **v254; // x3
  System_Boolean_array **v255; // x4
  System_Int32_array **v256; // x5
  System_Int32_array *v257; // x6
  System_Int32_array *v258; // x7
  FollowerSelectItemListViewManager_c *v259; // x0
  _BOOL4 v260; // w8
  _BOOL4 v261; // w9
  int32_t v262; // w28
  EventUpValSetupInfo_o *setupInfo; // x21
  bool v264; // w19
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x20
  bool isServantEquipBonusFilterEnable; // w23
  bool isServantBonusFilterEnable; // w24
  bool isBonusFilterEnable; // w27
  FollowerSelectItemListViewItem_o *v269; // x25
  int v270; // w20
  bool v271; // w8
  int64_t userId; // x27
  int v273; // w8
  unsigned int v274; // w22
  int64_t v275; // x8
  Il2CppObject *v276; // x0
  Il2CppObject *v277; // x21
  __int64 v278; // x20
  BalanceConfig_c *v279; // x0
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t FixEventSupportDeckNum; // w21
  int32_t FixMainSupportDeckNum; // w25
  __int64 v283; // x9
  unsigned int *v284; // x10
  int32_t deckPriority; // w24
  unsigned __int64 v286; // x20
  System_Collections_Generic_Dictionary_int__int__o *v287; // x21
  int32_t v288; // w22
  bool v289; // w28
  bool v290; // w26
  FollowerSelectItemListViewItem_o *v291; // x25
  struct BalanceConfig_StaticFields *v292; // x8
  int32_t v293; // w21
  int32_t v294; // w25
  int32_t v295; // w28
  unsigned __int64 v296; // x26
  int32_t v297; // w24
  bool v298; // w27
  int v299; // w20
  bool v300; // w25
  bool v301; // w22
  FollowerSelectItemListViewItem_o *v302; // x21
  int64_t v303; // x20
  unsigned __int64 v304; // x8
  unsigned __int64 v305; // x19
  __int64 v306; // x9
  __int64 v307; // x9
  unsigned __int64 v308; // x8
  FollowerInfo_o *v309; // x8
  Il2CppObject *v310; // x0
  __int64 v311; // x22
  BalanceConfig_c *v312; // x0
  struct BalanceConfig_StaticFields *v313; // x9
  int32_t v314; // w21
  int32_t v315; // w25
  int32_t v316; // w26
  unsigned __int64 v317; // x24
  System_Collections_Generic_Dictionary_int__int__o *v318; // x27
  int32_t v319; // w28
  bool v320; // w22
  bool v321; // w25
  bool v322; // w19
  FollowerSelectItemListViewItem_o *v323; // x21
  struct BalanceConfig_StaticFields *v324; // x8
  int32_t v325; // w21
  int32_t v326; // w25
  int32_t v327; // w26
  unsigned __int64 v328; // x28
  int32_t v329; // w21
  bool v330; // w27
  System_Collections_Generic_Dictionary_int__int__o *v331; // x20
  int v332; // w24
  bool v333; // w25
  int32_t v334; // w19
  bool v335; // w22
  FollowerSelectItemListViewItem_o *v336; // x21
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v338; // x2
  FollowerSelectItemListViewManager_c *v339; // x0
  const MethodInfo *v340; // x1
  struct UIScrollView_o *scrollView; // x8
  __int64 v342; // x0
  FollowerSelectItemListViewManager_o *v343; // x0
  int32_t v344; // w1
  int32_t v345; // w2
  bool v346; // w3
  const MethodInfo *v347; // x4
  int32_t supportDeckId; // [xsp+38h] [xbp-168h]
  int32_t supportDeckIda; // [xsp+38h] [xbp-168h]
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary; // [xsp+48h] [xbp-158h]
  const MethodInfo *v351; // [xsp+58h] [xbp-148h]
  int32_t arg; // [xsp+6Ch] [xbp-134h]
  UserFollowMaster_o *questIdb; // [xsp+70h] [xbp-130h]
  bool questPhaseb; // [xsp+7Ch] [xbp-124h]
  __int64 v357; // [xsp+80h] [xbp-120h]
  int32_t v358; // [xsp+80h] [xbp-120h]
  __int64 v359; // [xsp+88h] [xbp-118h]
  __int64 v360; // [xsp+88h] [xbp-118h]
  struct System_Collections_Generic_List_ListViewItem__o **p_originalItemList; // [xsp+90h] [xbp-110h]
  QuestPhaseEntity_o *v362; // [xsp+98h] [xbp-108h]
  QuestPhaseEntity_o *v363; // [xsp+98h] [xbp-108h]
  QuestPhaseEntity_o *v364; // [xsp+98h] [xbp-108h]
  bool isReleasedClassBoard; // [xsp+A0h] [xbp-100h]
  bool v366; // [xsp+A0h] [xbp-100h]
  __int64 v367; // [xsp+A0h] [xbp-100h]
  __int64 v368; // [xsp+A0h] [xbp-100h]
  __int64 v369; // [xsp+A0h] [xbp-100h]
  bool v370; // [xsp+A8h] [xbp-F8h]
  signed __int64 v371; // [xsp+A8h] [xbp-F8h]
  signed __int64 v372; // [xsp+A8h] [xbp-F8h]
  FollowerInfo_array *v373; // [xsp+B0h] [xbp-F0h]
  unsigned int *v374; // [xsp+B0h] [xbp-F0h]
  unsigned int *v375; // [xsp+B0h] [xbp-F0h]
  NpcFollowerMaster_o *v376; // [xsp+B8h] [xbp-E8h]
  unsigned int v377; // [xsp+B8h] [xbp-E8h]
  __int64 v378; // [xsp+B8h] [xbp-E8h]
  FollowerInfo_o **v379; // [xsp+C0h] [xbp-E0h]
  __int64 v380; // [xsp+C0h] [xbp-E0h]
  unsigned __int64 v381; // [xsp+C0h] [xbp-E0h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v382; // [xsp+C8h] [xbp-D8h]
  FollowerInfo_o **v383; // [xsp+C8h] [xbp-D8h]
  FollowerInfo_o **v384; // [xsp+C8h] [xbp-D8h]
  _BOOL4 followerClassId; // [xsp+D0h] [xbp-D0h]
  EventUpValSetupInfo_o *followerClassIdc; // [xsp+D0h] [xbp-D0h]
  int32_t followerClassIda; // [xsp+D0h] [xbp-D0h]
  EventUpValSetupInfo_o *followerClassIdd; // [xsp+D0h] [xbp-D0h]
  int32_t followerClassIdb; // [xsp+D0h] [xbp-D0h]
  struct System_Collections_Generic_List_ListViewItem__o **p_mixItemList; // [xsp+D8h] [xbp-C8h]
  QuestRestrictionInfo_o *v391; // [xsp+E0h] [xbp-C0h]
  int32_t v395; // [xsp+F8h] [xbp-A8h]
  FollowerInfo_o *v396; // [xsp+F8h] [xbp-A8h]
  EventUpValSetupInfo_o *v397; // [xsp+F8h] [xbp-A8h]
  FollowerInfo_o *v398; // [xsp+F8h] [xbp-A8h]
  EventUpValSetupInfo_o *v399; // [xsp+F8h] [xbp-A8h]
  int32_t v400; // [xsp+100h] [xbp-A0h]
  int32_t size; // [xsp+100h] [xbp-A0h]
  FollowerInfo_o *v402; // [xsp+100h] [xbp-A0h]
  int32_t v403; // [xsp+100h] [xbp-A0h]
  FollowerInfo_o *v404; // [xsp+100h] [xbp-A0h]
  FollowerSelectItemListViewManager_o *v405; // [xsp+108h] [xbp-98h]
  UserGameEntity_o *v406; // [xsp+110h] [xbp-90h] BYREF
  UserGameEntity_o *v407; // [xsp+118h] [xbp-88h] BYREF
  UserClassBoardSquareEntity_o *v408; // [xsp+120h] [xbp-80h] BYREF
  UserServantEntity_o *v409; // [xsp+128h] [xbp-78h] BYREF
  UserServantEntity_o *entity; // [xsp+130h] [xbp-70h] BYREF
  UserServantEntity_o *v411; // [xsp+138h] [xbp-68h] BYREF
  NpcFollowerEntity_o *v412; // [xsp+140h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v413; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v414; // 0:x0.16

  v8 = questRestrictionInfo;
  if ( (byte_42EBBE2 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, questId, questPhase, *(_QWORD *)&friendPointUpVal);
    sub_B5D5C4(&ClassButtonControlComponent_CallbackFunc_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&char___TypeInfo, v13, v14, v15);
    sub_B5D5C4(&ClassBoardInfo_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&CondType_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v22, v23, v24);
    sub_B5D5C4(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___, v25, v26, v27);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v28, v29, v30);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v31, v32, v33);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserFollowMaster___, v34, v35, v36);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v37, v38, v39);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventQuestMaster___, v40, v41, v42);
    sub_B5D5C4(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v43, v44, v45);
    sub_B5D5C4(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, v46, v47, v48);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v49, v50, v51);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, v52, v53, v54);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserFollowerMaster___, v55, v56, v57);
    sub_B5D5C4(&DataManager_TypeInfo, v58, v59, v60);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v61, v62, v63);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v64, v65, v66);
    sub_B5D5C4(
      &Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__,
      v67,
      v68,
      v69);
    sub_B5D5C4(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v70,
      v71,
      v72);
    sub_B5D5C4(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v73, v74, v75);
    sub_B5D5C4(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v76,
      v77,
      v78);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v79, v80, v81);
    sub_B5D5C4(&EventUpValSetupInfo_TypeInfo, v82, v83, v84);
    sub_B5D5C4(&FollowerSelectItemListViewItem_TypeInfo, v85, v86, v87);
    sub_B5D5C4(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v88, v89, v90);
    sub_B5D5C4(&FollowerSelectItemListViewManager_TypeInfo, v91, v92, v93);
    sub_B5D5C4(&Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__, v94, v95, v96);
    sub_B5D5C4(&int___TypeInfo, v97, v98, v99);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardInfo__Add__, v100, v101, v102);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v103, v104, v105);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__, v106, v107, v108);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardInfo___ctor__, v109, v110, v111);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v112, v113, v114);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v115, v116, v117);
    sub_B5D5C4(&System_Collections_Generic_List_ClassBoardInfo__TypeInfo, v118, v119, v120);
    sub_B5D5C4(&System_Collections_Generic_List_ListViewItem__TypeInfo, v121, v122, v123);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v124, v125, v126);
    sub_B5D5C4(&System_Math_TypeInfo, v127, v128, v129);
    sub_B5D5C4(&NetworkManager_TypeInfo, v130, v131, v132);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v133, v134, v135);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v136, v137, v138);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v139, v140, v141);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v142, v143, v144);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v145, v146, v147);
    sub_B5D5C4(&StringLiteral_2893/*"BonusFilterEventId"*/, v148, v149, v150);
    sub_B5D5C4(&StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v151, v152, v153);
    sub_B5D5C4(&StringLiteral_1/*""*/, v154, v155, v156);
    byte_42EBBE2 = 1;
  }
  v411 = 0LL;
  v412 = 0LL;
  v409 = 0LL;
  entity = 0LL;
  v407 = 0LL;
  v408 = 0LL;
  v406 = 0LL;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  this->fields.questRestrictionInfo = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)v8,
    *(System_String_array ***)&questPhase,
    *(System_String_array ***)&friendPointUpVal,
    *(System_Boolean_array ***)&friendPointUpMaxVal,
    (System_Int32_array **)friendPointCampaignEntityList,
    (System_Int32_array *)questRestrictionInfo,
    (System_Int32_array *)method);
  v157 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v157,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.mixItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v157;
  p_mixItemList = &this->fields.mixItemList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mixItemList,
    (System_Int32_array **)v157,
    v158,
    v159,
    v160,
    v161,
    v162,
    v163);
  v164 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v164,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.originalItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v164;
  p_originalItemList = &this->fields.originalItemList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.originalItemList,
    (System_Int32_array **)v164,
    v165,
    v166,
    v167,
    v168,
    v169,
    v170);
  arg = FollowerInfo__GetReturnTypeByQuestId(questId, 0LL);
  v172 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v172 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = (__int64)v172->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT )
    goto LABEL_305;
  v174 = System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort___Invoke(
           (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)LIST_VIEW_SORT,
           arg,
           (const MethodInfo_2C2B80C *)Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__);
  this->fields.sort = v174;
  p_sort = &this->fields.sort;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v174,
    v176,
    v177,
    v178,
    v179,
    v180,
    v181);
  if ( !this->fields.sort )
    goto LABEL_305;
  InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                          this,
                          questId,
                          questPhase,
                          this->fields.sort->fields.isRequestLoad,
                          v182);
  v184 = FollowerSelectItemListViewManager_TypeInfo;
  FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId = InitialDisplayClass;
  v184->static_fields->lastSelectedQuestId = questId;
  v184->static_fields->lastSelectedQuestPhase = questPhase;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  LIST_VIEW_SORT = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !LIST_VIEW_SORT )
    goto LABEL_305;
  OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                 (EventQuestMaster_o *)LIST_VIEW_SORT,
                                 questId,
                                 questPhase,
                                 0LL);
  v186 = (EventUpValSetupInfo_o *)sub_B5D694(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_24751852(v186, OngoingQuestTargetEventIds, 0, questId, questPhase, 0LL);
  this->fields.setupInfo = v186;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)v186,
    v187,
    v188,
    v189,
    v190,
    v191,
    v192);
  if ( !OngoingQuestTargetEventIds )
    goto LABEL_305;
  if ( *(_QWORD *)&OngoingQuestTargetEventIds->max_length )
  {
    LIST_VIEW_SORT = (__int64)UnityEngine_PlayerPrefs__GetString_35648228((System_String_o *)StringLiteral_2893/*"BonusFilterEventId"*/, 0LL);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    v193 = (System_String_o *)LIST_VIEW_SORT;
    if ( *(int *)(LIST_VIEW_SORT + 16) < 1 )
      goto LABEL_24;
    LIST_VIEW_SORT = sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    if ( !*(_DWORD *)(LIST_VIEW_SORT + 24) )
      goto LABEL_306;
    *(_WORD *)(LIST_VIEW_SORT + 32) = 44;
    LIST_VIEW_SORT = (__int64)System_String__Split(v193, (System_Char_array *)LIST_VIEW_SORT, 0LL);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    v194 = *(_QWORD *)(LIST_VIEW_SORT + 24);
    v195 = LIST_VIEW_SORT;
    if ( (int)v194 < 1 )
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
      v196 = 0LL;
      while ( 1 )
      {
        if ( v196 >= (unsigned int)v194 )
          goto LABEL_306;
        v197 = System_Int32__Parse(*(System_String_o **)(v195 + 32 + 8 * v196), 0LL);
        LIST_VIEW_SORT = System_Linq_Enumerable__Contains_int_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)OngoingQuestTargetEventIds,
                           v197,
                           (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (LIST_VIEW_SORT & 1) != 0 )
          break;
        LODWORD(v194) = *(_DWORD *)(v195 + 24);
        if ( (__int64)++v196 >= (int)v194 )
          goto LABEL_24;
      }
    }
  }
  LIST_VIEW_SORT = (__int64)*p_sort;
  if ( !*p_sort )
    goto LABEL_305;
  ListViewSort__Load((ListViewSort_o *)LIST_VIEW_SORT, 0LL);
  classButtonControl = this->fields.classButtonControl;
  v199 = (ClassButtonControlComponent_CallbackFunc_o *)sub_B5D694(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v199,
    (Il2CppObject *)this,
    Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_305;
  ClassButtonControlComponent__init(classButtonControl, v199, questId, questPhase, 0, 0LL);
  this->fields.isInput = 0;
  v200 = this->fields.classButtonControl;
  LIST_VIEW_SORT = (__int64)FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  }
  if ( !v200 )
    goto LABEL_305;
  ClassButtonControlComponent__setCursor(
    v200,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, OngoingQuestTargetEventIds, v201);
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
  LIST_VIEW_SORT = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LIST_VIEW_SORT
    || (LIST_VIEW_SORT = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)LIST_VIEW_SORT,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0 )
  {
LABEL_305:
    sub_B5D69C(LIST_VIEW_SORT, v171);
  }
  v202 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)LIST_VIEW_SORT, questId, questPhase, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v362 = v202;
  if ( v202 )
  {
    v203 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v203 + 306) & 1) == 0 )
      sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v204 = **(_QWORD **)(v203 + 192);
    if ( (*(_BYTE *)(v204 + 306) & 1) == 0 )
      sub_AF52C4(v204);
    LIST_VIEW_SORT = **(_QWORD **)(v204 + 184);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    MasterData_WarQuestSelectionMaster = (NpcFollowerMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)LIST_VIEW_SORT,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
    LIST_VIEW_SORT = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    LIST_VIEW_SORT = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)LIST_VIEW_SORT,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
    LIST_VIEW_SORT = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    v207 = *(_DWORD *)(LIST_VIEW_SORT + 48);
    LIST_VIEW_SORT = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    v395 = *(_DWORD *)(LIST_VIEW_SORT + 52);
    if ( v8 && v207 >= 1 )
    {
      IsMyServantOrNpcRestriction_34282120 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34282120(v8, v395, 0LL);
      followerClassId = 0;
    }
    else if ( v8 )
    {
      v209 = v207 <= 0;
      IsMyServantOrNpcRestriction_34282120 = 0;
      followerClassId = 0;
      if ( v209 )
      {
        IsMyServantOrNpcRestriction_34282120 = 0;
        followerClassId = QuestRestrictionInfo__IsMyServantOrNpcRestriction(v8, 0LL);
      }
    }
    else
    {
      followerClassId = 0;
      IsMyServantOrNpcRestriction_34282120 = 0;
    }
    v210 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v210 = BalanceConfig_TypeInfo;
    }
    ClassBoardReleaseQuestId = v210->static_fields->ClassBoardReleaseQuestId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_25877652 = CondType__IsQuestClear_25877652(ClassBoardReleaseQuestId, -1, 0, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    LIST_VIEW_SORT = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    if ( !QuestFollowerList )
      goto LABEL_305;
    v213 = *(_QWORD *)&QuestFollowerList->max_length;
    v405 = this;
    v391 = v8;
    if ( (int)v213 >= 1 )
    {
      v214 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)LIST_VIEW_SORT;
      v215 = 0LL;
      v216 = IsQuestClear_25877652;
      m_Items = QuestFollowerList->m_Items;
      v400 = 0;
      isReleasedClassBoard = v216;
      v373 = QuestFollowerList;
      v376 = MasterData_WarQuestSelectionMaster;
      v370 = IsMyServantOrNpcRestriction_34282120;
      v379 = QuestFollowerList->m_Items;
      v382 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)LIST_VIEW_SORT;
      do
      {
        if ( v215 >= (unsigned int)v213 )
          goto LABEL_306;
        v218 = m_Items[v215];
        if ( IsMyServantOrNpcRestriction_34282120 )
        {
          if ( !v8 )
            goto LABEL_305;
          LIST_VIEW_SORT = FollowerInfo__GetReturnTypeByQuestId(v8->fields.questId, 0LL);
          if ( !v218 )
            goto LABEL_305;
          LIST_VIEW_SORT = (__int64)FollowerInfo__getServantLeaderInfo(v218, 0, LIST_VIEW_SORT, 0LL);
          if ( LIST_VIEW_SORT )
          {
            v219 = LIST_VIEW_SORT;
            LIST_VIEW_SORT = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !LIST_VIEW_SORT )
              goto LABEL_305;
            LIST_VIEW_SORT = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)LIST_VIEW_SORT,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
            if ( !LIST_VIEW_SORT )
              goto LABEL_305;
            LIST_VIEW_SORT = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)LIST_VIEW_SORT,
                               &entity,
                               v218->fields.npcFollowerSvtId,
                               (const MethodInfo_23FB094 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
            if ( (LIST_VIEW_SORT & 1) != 0 )
            {
              ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v8->fields.questId, 0LL);
              NpcServantIndividuality = FollowerInfo__GetNpcServantIndividuality(v218, 0, ReturnTypeByQuestId, 0LL);
              goto LABEL_85;
            }
            if ( !v214 )
              goto LABEL_305;
            if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                   v214,
                   &v409,
                   v218->fields.npcFollowerSvtId,
                   (const MethodInfo_23FB094 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
            {
              LIST_VIEW_SORT = (__int64)v409;
              if ( !v409 )
                goto LABEL_305;
              if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v409, 0LL) )
              {
                LIST_VIEW_SORT = (__int64)v409;
                if ( !v409 )
                  goto LABEL_305;
                NpcServantIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                            (NpcServantFollowerEntity_o *)v409,
                                            0LL);
LABEL_85:
                LIST_VIEW_SORT = QuestRestrictionInfo__IsRestrictionServantIndividuality_34285280(
                                   v8,
                                   NpcServantIndividuality,
                                   v395,
                                   0LL);
                if ( (LIST_VIEW_SORT & 1) != 0 )
                  goto LABEL_145;
                goto LABEL_88;
              }
            }
            v224 = *(_QWORD *)(v219 + 48);
            v223 = *(_QWORD *)(v219 + 56);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v413.fields.currentCryptoKey = v224;
            *(_QWORD *)&v413.fields.fakeValue = v223;
            v225 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v413, 0LL);
            LIST_VIEW_SORT = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                               v8,
                               v225,
                               *(_DWORD *)(v219 + 64),
                               *(_DWORD *)(v219 + 164),
                               v395,
                               0,
                               0LL);
            m_Items = v379;
            v214 = v382;
            if ( (LIST_VIEW_SORT & 1) != 0 )
              goto LABEL_145;
          }
        }
        else if ( !v218 )
        {
          goto LABEL_305;
        }
LABEL_88:
        if ( !v218->fields.isFixedNpc && (!followerClassId || !v218->fields.isMySvtOrNpc) )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_305;
          if ( NpcFollowerMaster__TryGetEntity(
                 MasterData_WarQuestSelectionMaster,
                 &v412,
                 v218->fields.userId,
                 questId,
                 questPhase,
                 0LL) )
          {
            LIST_VIEW_SORT = (__int64)v412;
            if ( !v412 )
              goto LABEL_305;
            IsRecommendedFollower = NpcFollowerEntity__IsRecommendedFollower(v412, 0LL);
          }
          else
          {
            IsRecommendedFollower = 0;
          }
          v226 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ClassBoardInfo__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v226,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
          if ( !v214 )
            goto LABEL_305;
          LIST_VIEW_SORT = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                             v214,
                             &v411,
                             v218->fields.npcFollowerSvtId,
                             (const MethodInfo_23FB094 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
          if ( (LIST_VIEW_SORT & 1) != 0 )
          {
            if ( !v411 )
              goto LABEL_305;
            LIST_VIEW_SORT = NpcServantFollowerEntity__IsNotClassBoard(
                               v411->fields.imageLimitCount.fields.fakeValue,
                               0LL);
            if ( (LIST_VIEW_SORT & 1) != 0
              || (LIST_VIEW_SORT = QuestPhaseEntity__IsNotClassBoard(v362, 0LL), (LIST_VIEW_SORT & 1) != 0) )
            {
              v227 = 1;
LABEL_135:
              if ( !v226 )
                goto LABEL_305;
LABEL_136:
              v252 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v226,
                                              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
              v218->fields.userClassBoardInfo = (struct ClassBoardInfo_array *)v252;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v218->fields.userClassBoardInfo,
                v252,
                v253,
                v254,
                v255,
                v256,
                v257,
                v258);
              v259 = FollowerSelectItemListViewManager_TypeInfo;
              if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
                v259 = FollowerSelectItemListViewManager_TypeInfo;
              }
              v260 = this->fields.isBonusFilterEnable;
              v261 = this->fields.isServantBonusFilterEnable;
              v262 = v259->static_fields->followerClassId;
              setupInfo = this->fields.setupInfo;
              v264 = IsRecommendedFollower;
              if ( (v227 & 1) != 0 )
                classBoardMaxDictionary = 0LL;
              else
                classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
              isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
              isServantBonusFilterEnable = v261;
              isBonusFilterEnable = v260;
              v269 = (FollowerSelectItemListViewItem_o *)sub_B5D694(FollowerSelectItemListViewItem_TypeInfo);
              FollowerSelectItemListViewItem___ctor(
                v269,
                v400,
                0,
                v218,
                v262,
                friendPointUpVal,
                friendPointUpMaxVal,
                friendPointCampaignEntityList,
                isBonusFilterEnable,
                isServantBonusFilterEnable,
                isServantEquipBonusFilterEnable,
                v264,
                setupInfo,
                v391,
                0,
                0,
                0,
                classBoardMaxDictionary,
                isReleasedClassBoard,
                v351);
              LIST_VIEW_SORT = (__int64)*p_mixItemList;
              if ( !*p_mixItemList )
                goto LABEL_305;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)LIST_VIEW_SORT,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v269,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
              QuestFollowerList = v373;
              MasterData_WarQuestSelectionMaster = v376;
              IsMyServantOrNpcRestriction_34282120 = v370;
              v214 = v382;
              LIST_VIEW_SORT = (__int64)*p_originalItemList;
              if ( !*p_originalItemList )
                goto LABEL_305;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)LIST_VIEW_SORT,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v269,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
              ++v400;
              this = v405;
              v8 = v391;
              m_Items = v379;
              goto LABEL_145;
            }
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            LIST_VIEW_SORT = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( !v8 )
              goto LABEL_305;
            v228 = (ClassBoardClassMaster_o *)LIST_VIEW_SORT;
            v229 = FollowerInfo__GetReturnTypeByQuestId(v8->fields.questId, 0LL);
            ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v218, 0, v229, 0LL);
            LIST_VIEW_SORT = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
            if ( !ServantLeaderInfo )
              goto LABEL_305;
            v231 = (DataMasterBase_WarMaster__WarEntity__int__o *)LIST_VIEW_SORT;
            v232 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
            v233 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v414.fields.currentCryptoKey = v232;
            *(_QWORD *)&v414.fields.fakeValue = v233;
            LIST_VIEW_SORT = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v414, 0LL);
            if ( !v231 )
              goto LABEL_305;
            LIST_VIEW_SORT = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v231,
                                        LIST_VIEW_SORT,
                                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !LIST_VIEW_SORT || !v228 )
              goto LABEL_305;
            ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(v228, *(_DWORD *)(LIST_VIEW_SORT + 80), 0LL);
            Master_WarQuestSelectionMaster = (UserClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
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
                               &v408,
                               LIST_VIEW_SORT,
                               ClassBoardBaseId,
                               0LL);
            if ( (LIST_VIEW_SORT & 1) != 0 )
            {
              v236 = sub_B5D694(ClassBoardInfo_TypeInfo);
              ClassBoardInfo___ctor((ClassBoardInfo_o *)v236, 0LL);
              if ( !v236 )
                goto LABEL_305;
              *(_DWORD *)(v236 + 16) = ClassBoardBaseId;
              if ( !v408 )
                goto LABEL_305;
              LIST_VIEW_SORT = (__int64)v408->fields.classBoardSquareIds;
              if ( !LIST_VIEW_SORT )
                goto LABEL_305;
              v237 = System_Array__Clone((System_Array_o *)LIST_VIEW_SORT, 0LL);
              v238 = (System_Int32_array **)sub_B5D684(v237, int___TypeInfo);
              *(_QWORD *)(v236 + 24) = v238;
              sub_B5D560((BattleServantConfConponent_o *)(v236 + 24), v238, v239, v240, v241, v242, v243, v244);
              OpenClassIdArrayFromBaseId = (System_Int32_array **)ClassBoardClassMaster__GetOpenClassIdArrayFromBaseId(
                                                                    v228,
                                                                    ClassBoardBaseId,
                                                                    0LL);
              *(_QWORD *)(v236 + 32) = OpenClassIdArrayFromBaseId;
              sub_B5D560(
                (BattleServantConfConponent_o *)(v236 + 32),
                OpenClassIdArrayFromBaseId,
                v246,
                v247,
                v248,
                v249,
                v250,
                v251);
              if ( !v226 )
                goto LABEL_305;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v226,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v236,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ClassBoardInfo__Add__);
              v227 = 0;
              goto LABEL_136;
            }
          }
          v227 = 0;
          goto LABEL_135;
        }
LABEL_145:
        LODWORD(v213) = QuestFollowerList->max_length;
        ++v215;
      }
      while ( (__int64)v215 < (int)v213 );
    }
    if ( !v8 || !QuestRestrictionInfo__IsMyServantOrNpcRestriction(v8, 0LL) )
      goto LABEL_155;
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    LIST_VIEW_SORT = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    v270 = *(_DWORD *)(LIST_VIEW_SORT + 48);
    LIST_VIEW_SORT = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    if ( v270 >= 1 )
      v271 = !QuestRestrictionInfo__IsSelectableNormalSupport(v8, *(_DWORD *)(LIST_VIEW_SORT + 52), 0LL);
    else
LABEL_155:
      v271 = 0;
    this->fields.isRefreshBtnHide = v271;
    if ( !v271 && !v362->fields.isNpcOnly )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      LIST_VIEW_SORT = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
      if ( !LIST_VIEW_SORT )
        goto LABEL_305;
      LIST_VIEW_SORT = DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                         (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)LIST_VIEW_SORT,
                         &v407,
                         (const MethodInfo_23FB120 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
      if ( (LIST_VIEW_SORT & 1) != 0 )
      {
        if ( !v407 )
          goto LABEL_305;
        userId = v407->fields.userId;
        if ( userId )
        {
          v273 = *(_DWORD *)(userId + 24);
          if ( v273 >= 1 )
          {
            v274 = 0;
            v363 = (QuestPhaseEntity_o *)v407->fields.userId;
            do
            {
              if ( v274 >= v273 )
                goto LABEL_306;
              v275 = userId + 8LL * (int)v274;
              LIST_VIEW_SORT = *(_QWORD *)(v275 + 32);
              v383 = (FollowerInfo_o **)(v275 + 32);
              if ( !LIST_VIEW_SORT )
                goto LABEL_305;
              FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)LIST_VIEW_SORT, 0LL);
              if ( v274 >= *(_DWORD *)(userId + 24) )
                goto LABEL_306;
              if ( !*v383 )
                goto LABEL_305;
              LIST_VIEW_SORT = (__int64)(*v383)->fields.mainSupportDeckIds;
              if ( !LIST_VIEW_SORT )
                goto LABEL_305;
              v359 = *(_QWORD *)(LIST_VIEW_SORT + 24);
              v276 = System_Array__Clone((System_Array_o *)LIST_VIEW_SORT, 0LL);
              if ( v276 )
              {
                v277 = v276;
                v278 = sub_B5D684(v276, int___TypeInfo);
                if ( !v278 )
                {
LABEL_307:
                  sub_B5D990(v277);
                  FollowerSelectItemListViewManager__GetInitialDisplayClass(v343, v344, v345, v346, v347);
                  return;
                }
              }
              else
              {
                v278 = 0LL;
              }
              v279 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v279 = BalanceConfig_TypeInfo;
              }
              static_fields = v279->static_fields;
              FixMainSupportDeckNum = static_fields->FixMainSupportDeckNum;
              FixEventSupportDeckNum = static_fields->FixEventSupportDeckNum;
              if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_Math_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              }
              LIST_VIEW_SORT = System_Math__Max_45149472(FixMainSupportDeckNum, FixEventSupportDeckNum, 0LL);
              v377 = v274;
              v380 = v278;
              if ( (int)v359 <= 0 )
              {
                v371 = (int)v359;
                v374 = (unsigned int *)(v278 + 24);
              }
              else
              {
                v283 = v278;
                v284 = (unsigned int *)(v278 + 24);
                deckPriority = LIST_VIEW_SORT;
                v286 = 0LL;
                v371 = (int)v359;
                v374 = v284;
                v357 = v283 + 32;
                do
                {
                  if ( !*p_originalItemList )
                    goto LABEL_305;
                  if ( v274 >= *(_DWORD *)(userId + 24) )
                    goto LABEL_306;
                  if ( !v380 )
                    goto LABEL_305;
                  if ( v286 >= *v374 )
                    goto LABEL_306;
                  size = (*p_originalItemList)->fields._size;
                  followerClassIdc = this->fields.setupInfo;
                  v287 = this->fields.classBoardMaxDictionary;
                  v288 = *(_DWORD *)(v357 + 4 * v286);
                  v396 = *v383;
                  v289 = this->fields.isServantEquipBonusFilterEnable;
                  v290 = this->fields.isServantBonusFilterEnable;
                  v366 = this->fields.isBonusFilterEnable;
                  v291 = (FollowerSelectItemListViewItem_o *)sub_B5D694(FollowerSelectItemListViewItem_TypeInfo);
                  FollowerSelectItemListViewItem___ctor(
                    v291,
                    size,
                    0,
                    v396,
                    0,
                    friendPointUpVal,
                    friendPointUpMaxVal,
                    friendPointCampaignEntityList,
                    v366,
                    v290,
                    v289,
                    0,
                    followerClassIdc,
                    v8,
                    1,
                    v288,
                    deckPriority,
                    v287,
                    1,
                    v351);
                  LIST_VIEW_SORT = (__int64)this->fields.originalItemList;
                  if ( !LIST_VIEW_SORT )
                    goto LABEL_305;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)LIST_VIEW_SORT,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v291,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                  v274 = v377;
                  ++v286;
                  --deckPriority;
                }
                while ( (__int64)v286 < (int)v359 );
                v278 = v380;
              }
              followerClassIda = 0;
              v367 = v278 + 32;
              while ( 1 )
              {
                LIST_VIEW_SORT = (__int64)BalanceConfig_TypeInfo;
                if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  LIST_VIEW_SORT = (__int64)BalanceConfig_TypeInfo;
                }
                v292 = *(struct BalanceConfig_StaticFields **)(LIST_VIEW_SORT + 184);
                if ( followerClassIda >= v292->SupportDeckMemberMax )
                  break;
                if ( (*(_BYTE *)(LIST_VIEW_SORT + 307) & 4) != 0 && !*(_DWORD *)(LIST_VIEW_SORT + 224) )
                {
                  j_il2cpp_runtime_class_init_0(LIST_VIEW_SORT);
                  v292 = BalanceConfig_TypeInfo->static_fields;
                }
                v294 = v292->FixMainSupportDeckNum;
                v293 = v292->FixEventSupportDeckNum;
                if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !System_Math_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                }
                LIST_VIEW_SORT = System_Math__Max_45149472(v294, v293, 0LL);
                if ( (int)v359 >= 1 )
                {
                  v295 = LIST_VIEW_SORT;
                  v296 = 0LL;
                  do
                  {
                    if ( !*p_mixItemList )
                      goto LABEL_305;
                    v297 = (*p_mixItemList)->fields._size;
                    LIST_VIEW_SORT = (__int64)BalanceConfig_TypeInfo;
                    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      LIST_VIEW_SORT = (__int64)BalanceConfig_TypeInfo;
                    }
                    if ( v274 >= *(_DWORD *)(userId + 24) )
                      goto LABEL_306;
                    if ( !v278 )
                      goto LABEL_305;
                    if ( v296 >= *v374 )
                      goto LABEL_306;
                    v397 = this->fields.setupInfo;
                    v402 = *v383;
                    v298 = this->fields.isServantEquipBonusFilterEnable;
                    v299 = *(_DWORD *)(*(_QWORD *)(LIST_VIEW_SORT + 184) + 164LL);
                    v300 = this->fields.isServantBonusFilterEnable;
                    v301 = this->fields.isBonusFilterEnable;
                    classBoardMaxNumDictionary = v405->fields.classBoardMaxDictionary;
                    v8 = v391;
                    supportDeckId = *(_DWORD *)(v367 + 4 * v296);
                    this = v405;
                    v302 = (FollowerSelectItemListViewItem_o *)sub_B5D694(FollowerSelectItemListViewItem_TypeInfo);
                    FollowerSelectItemListViewItem___ctor(
                      v302,
                      v297,
                      v299 - followerClassIda,
                      v402,
                      followerClassIda,
                      friendPointUpVal,
                      friendPointUpMaxVal,
                      friendPointCampaignEntityList,
                      v301,
                      v300,
                      v298,
                      0,
                      v397,
                      v391,
                      1,
                      supportDeckId,
                      v295,
                      classBoardMaxNumDictionary,
                      1,
                      v351);
                    LIST_VIEW_SORT = (__int64)v405->fields.mixItemList;
                    if ( !LIST_VIEW_SORT )
                      goto LABEL_305;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)LIST_VIEW_SORT,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v302,
                      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                    userId = (int64_t)v363;
                    v274 = v377;
                    v278 = v380;
                    ++v296;
                    --v295;
                  }
                  while ( (__int64)v296 < v371 );
                }
                ++followerClassIda;
              }
              v273 = *(_DWORD *)(userId + 24);
              ++v274;
            }
            while ( (int)v274 < v273 );
          }
        }
      }
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      LIST_VIEW_SORT = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserFollowerMaster___);
      if ( !LIST_VIEW_SORT )
        goto LABEL_305;
      LIST_VIEW_SORT = DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                         (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)LIST_VIEW_SORT,
                         &v406,
                         (const MethodInfo_23FB120 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
      if ( (LIST_VIEW_SORT & 1) != 0 )
      {
        if ( !v406 )
          goto LABEL_305;
        v303 = v406->fields.userId;
        LIST_VIEW_SORT = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !LIST_VIEW_SORT )
          goto LABEL_305;
        LIST_VIEW_SORT = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)LIST_VIEW_SORT,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !LIST_VIEW_SORT )
          goto LABEL_305;
        LIST_VIEW_SORT = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)LIST_VIEW_SORT,
                                    questId,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !LIST_VIEW_SORT )
          goto LABEL_305;
        questPhaseb = QuestEntity__HasFlag_25406292((QuestEntity_o *)LIST_VIEW_SORT, 0x8000000LL, questPhase, 0LL);
        LIST_VIEW_SORT = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !LIST_VIEW_SORT )
          goto LABEL_305;
        LIST_VIEW_SORT = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)LIST_VIEW_SORT,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserFollowMaster___);
        questIdb = (UserFollowMaster_o *)LIST_VIEW_SORT;
        if ( !v303 )
          goto LABEL_305;
        v304 = *(_QWORD *)(v303 + 24);
        if ( (int)v304 >= 1 )
        {
          v305 = 0LL;
          v358 = 0;
          v364 = (QuestPhaseEntity_o *)v303;
          do
          {
            v304 = (unsigned int)v304;
            if ( questPhaseb )
            {
              if ( v305 >= (unsigned int)v304 )
                goto LABEL_306;
              v306 = *(_QWORD *)(v303 + 8 * v305 + 32);
              if ( !v306 )
                goto LABEL_305;
              if ( *(_DWORD *)(v306 + 36) == 5 )
              {
                LIST_VIEW_SORT = (__int64)questIdb;
                if ( !questIdb )
                  goto LABEL_305;
                LIST_VIEW_SORT = UserFollowMaster__IsFollowUser(questIdb, *(_QWORD *)(v306 + 16), 0LL);
                if ( (LIST_VIEW_SORT & 1) == 0 )
                  goto LABEL_294;
                v304 = *(unsigned int *)(v303 + 24);
              }
            }
            else
            {
              if ( v305 >= (unsigned int)v304 )
                goto LABEL_306;
              v307 = *(_QWORD *)(v303 + 8 * v305 + 32);
              if ( !v307 )
                goto LABEL_305;
              if ( *(_DWORD *)(v307 + 36) == 5 )
                goto LABEL_294;
            }
            if ( v305 >= v304 )
              goto LABEL_306;
            v308 = v303 + 8 * v305;
            LIST_VIEW_SORT = *(_QWORD *)(v308 + 32);
            v384 = (FollowerInfo_o **)(v308 + 32);
            if ( !LIST_VIEW_SORT )
              goto LABEL_305;
            FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)LIST_VIEW_SORT, 0LL);
            LIST_VIEW_SORT = sub_B5D5DC(int___TypeInfo, 0LL);
            if ( v305 >= *(unsigned int *)(v303 + 24) )
              goto LABEL_306;
            v309 = *v384;
            if ( !*v384 )
              goto LABEL_305;
            if ( arg )
            {
              LIST_VIEW_SORT = (__int64)v309->fields.eventSupportDeckIds;
              if ( !LIST_VIEW_SORT )
                goto LABEL_305;
            }
            else
            {
              LIST_VIEW_SORT = (__int64)v309->fields.mainSupportDeckIds;
              if ( !LIST_VIEW_SORT )
                goto LABEL_305;
            }
            v360 = *(_QWORD *)(LIST_VIEW_SORT + 24);
            v310 = System_Array__Clone((System_Array_o *)LIST_VIEW_SORT, 0LL);
            if ( v310 )
            {
              v277 = v310;
              v311 = sub_B5D684(v310, int___TypeInfo);
              if ( !v311 )
                goto LABEL_307;
            }
            else
            {
              v311 = 0LL;
            }
            v312 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v312 = BalanceConfig_TypeInfo;
            }
            v313 = v312->static_fields;
            v315 = v313->FixMainSupportDeckNum;
            v314 = v313->FixEventSupportDeckNum;
            if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Math_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            }
            LIST_VIEW_SORT = System_Math__Max_45149472(v315, v314, 0LL);
            v378 = v311;
            v381 = v305;
            if ( (int)v360 > 0 )
            {
              v316 = LIST_VIEW_SORT;
              v317 = 0LL;
              v372 = (int)v360;
              v375 = (unsigned int *)(v311 + 24);
              v368 = v311 + 32;
              while ( 1 )
              {
                if ( !*p_originalItemList )
                  goto LABEL_305;
                if ( v305 >= *(unsigned int *)(v303 + 24) )
                  break;
                if ( !v311 )
                  goto LABEL_305;
                if ( v317 >= *v375 )
                  break;
                v403 = (*p_originalItemList)->fields._size;
                followerClassIdd = this->fields.setupInfo;
                v318 = this->fields.classBoardMaxDictionary;
                v319 = *(_DWORD *)(v368 + 4 * v317);
                v398 = *v384;
                v320 = this->fields.isServantEquipBonusFilterEnable;
                v321 = this->fields.isServantBonusFilterEnable;
                v322 = this->fields.isBonusFilterEnable;
                v323 = (FollowerSelectItemListViewItem_o *)sub_B5D694(FollowerSelectItemListViewItem_TypeInfo);
                FollowerSelectItemListViewItem___ctor(
                  v323,
                  v403,
                  0,
                  v398,
                  0,
                  friendPointUpVal,
                  friendPointUpMaxVal,
                  friendPointCampaignEntityList,
                  v322,
                  v321,
                  v320,
                  0,
                  followerClassIdd,
                  v391,
                  0,
                  v319,
                  v316,
                  v318,
                  1,
                  v351);
                LIST_VIEW_SORT = (__int64)this->fields.originalItemList;
                if ( !LIST_VIEW_SORT )
                  goto LABEL_305;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)LIST_VIEW_SORT,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v323,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                v311 = v378;
                v305 = v381;
                ++v317;
                --v316;
                if ( (__int64)v317 >= (int)v360 )
                  goto LABEL_267;
              }
LABEL_306:
              v342 = sub_B5D6C8(LIST_VIEW_SORT);
              sub_B5D668(v342, 0LL);
            }
            v372 = (int)v360;
            v375 = (unsigned int *)(v311 + 24);
LABEL_267:
            followerClassIdb = 0;
            v369 = v311 + 32;
            while ( 1 )
            {
              LIST_VIEW_SORT = (__int64)BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                LIST_VIEW_SORT = (__int64)BalanceConfig_TypeInfo;
              }
              v324 = *(struct BalanceConfig_StaticFields **)(LIST_VIEW_SORT + 184);
              if ( followerClassIdb >= v324->SupportDeckMemberMax )
                break;
              if ( (*(_BYTE *)(LIST_VIEW_SORT + 307) & 4) != 0 && !*(_DWORD *)(LIST_VIEW_SORT + 224) )
              {
                j_il2cpp_runtime_class_init_0(LIST_VIEW_SORT);
                v324 = BalanceConfig_TypeInfo->static_fields;
              }
              v326 = v324->FixMainSupportDeckNum;
              v325 = v324->FixEventSupportDeckNum;
              if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_Math_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              }
              LIST_VIEW_SORT = System_Math__Max_45149472(v326, v325, 0LL);
              if ( (int)v360 >= 1 )
              {
                v327 = LIST_VIEW_SORT;
                v328 = 0LL;
                while ( *p_mixItemList )
                {
                  v329 = (*p_mixItemList)->fields._size;
                  LIST_VIEW_SORT = (__int64)BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    LIST_VIEW_SORT = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( v305 >= *(unsigned int *)(v303 + 24) )
                    goto LABEL_306;
                  if ( !v311 )
                    goto LABEL_305;
                  if ( v328 >= *v375 )
                    goto LABEL_306;
                  v399 = this->fields.setupInfo;
                  v404 = *v384;
                  v330 = this->fields.isServantEquipBonusFilterEnable;
                  v331 = v405->fields.classBoardMaxDictionary;
                  v332 = *(_DWORD *)(*(_QWORD *)(LIST_VIEW_SORT + 184) + 164LL);
                  v333 = this->fields.isServantBonusFilterEnable;
                  v334 = v329;
                  v335 = this->fields.isBonusFilterEnable;
                  supportDeckIda = *(_DWORD *)(v369 + 4 * v328);
                  this = v405;
                  v336 = (FollowerSelectItemListViewItem_o *)sub_B5D694(FollowerSelectItemListViewItem_TypeInfo);
                  FollowerSelectItemListViewItem___ctor(
                    v336,
                    v334,
                    v332 - followerClassIdb,
                    v404,
                    followerClassIdb,
                    friendPointUpVal,
                    friendPointUpMaxVal,
                    friendPointCampaignEntityList,
                    v335,
                    v333,
                    v330,
                    0,
                    v399,
                    v391,
                    0,
                    supportDeckIda,
                    v327,
                    v331,
                    1,
                    v351);
                  LIST_VIEW_SORT = (__int64)v405->fields.mixItemList;
                  if ( !LIST_VIEW_SORT )
                    goto LABEL_305;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)LIST_VIEW_SORT,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v336,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                  v303 = (int64_t)v364;
                  v311 = v378;
                  v305 = v381;
                  ++v328;
                  --v327;
                  if ( (__int64)v328 >= v372 )
                    goto LABEL_285;
                }
                goto LABEL_305;
              }
LABEL_285:
              ++followerClassIdb;
            }
            ++v358;
            if ( (*(_BYTE *)(LIST_VIEW_SORT + 307) & 4) != 0 && !*(_DWORD *)(LIST_VIEW_SORT + 224) )
            {
              j_il2cpp_runtime_class_init_0(LIST_VIEW_SORT);
              v324 = BalanceConfig_TypeInfo->static_fields;
            }
            if ( v358 >= v324->SupportListMax )
              break;
LABEL_294:
            LODWORD(v304) = *(_DWORD *)(v303 + 24);
            ++v305;
          }
          while ( (__int64)v305 < (int)v304 );
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
  LIST_VIEW_SORT = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_305;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)LIST_VIEW_SORT, 0LL);
  v339 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v339 = FollowerSelectItemListViewManager_TypeInfo;
  }
  FollowerSelectItemListViewManager__SortClass(this, v339->static_fields->followerClassId, v338);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  FollowerSelectItemListViewManager__SetFilterButtonImage(this, v340);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_305;
  BYTE2(scrollView->fields.scrollWheelFactor) = 1;
}


void __fastcall FollowerSelectItemListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  FollowerSelectItemListViewManager_c *v10; // x0
  System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x0

  if ( (byte_42EBBDB & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_6812/*"FollowerSelectClass"*/, v7, v8, v9);
    byte_42EBBDB = 1;
  }
  v10 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v10 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v10->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT
    || (LIST_VIEW_SORT = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort___Invoke(
                                                                                                 LIST_VIEW_SORT,
                                                                                                 1,
                                                                                                 (const MethodInfo_2C2B80C *)Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__)) == 0LL
    || (ListViewSort__DeleteContinueData((ListViewSort_o *)LIST_VIEW_SORT, 0LL),
        (LIST_VIEW_SORT = FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT) == 0LL)
    || (LIST_VIEW_SORT = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort___Invoke(
                                                                                                 LIST_VIEW_SORT,
                                                                                                 0,
                                                                                                 (const MethodInfo_2C2B80C *)Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__)) == 0LL )
  {
    sub_B5D69C(LIST_VIEW_SORT, v1);
  }
  ListViewSort__DeleteContinueData((ListViewSort_o *)LIST_VIEW_SORT, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6812/*"FollowerSelectClass"*/, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FollowerSelectItemListViewManager__DestroyList_31096760(this, 0LL, v2);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList_31096760(
        FollowerSelectItemListViewManager_o *this,
        BattleSetupInfo_o *battleSetupInfo,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  const MethodInfo *v40; // x1
  int32_t ReturnTypeByQuestId; // w20
  FollowerSelectItemListViewManager_c *v42; // x8
  System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x0
  struct ListViewSort_o *v44; // x0
  struct ListViewSort_o **p_sort; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  const MethodInfo *v52; // x4
  System_Int32_array *OngoingQuestTargetEventIds; // x0
  int32_t questId; // w21
  int32_t questPhase; // w22
  System_Int32_array *v56; // x23
  EventUpValSetupInfo_o *v57; // x24
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  FollowerSelectItemListViewManager_o *v76; // x0
  int monitor; // w21
  FollowerSelectItemListViewManager_c *v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  ClassButtonControlComponent_o *classButtonControl; // x20
  ClassButtonControlComponent_CallbackFunc_o *v86; // x21
  ClassButtonControlComponent_o *v87; // x20
  const MethodInfo *v88; // x2
  struct EventUpValSetupInfo_o *setupInfo; // x8
  System_Int32_array *v90; // x1
  UILabel_o *bonusFilterKindLabel; // x20

  if ( (byte_42EBBE8 & 1) == 0 )
  {
    sub_B5D5C4(&ClassButtonControlComponent_CallbackFunc_TypeInfo, (_DWORD)battleSetupInfo, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventQuestMaster___, v10, v11, v12);
    sub_B5D5C4(&DataManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&EventUpValSetupInfo_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v19, v20, v21);
    sub_B5D5C4(&FollowerSelectItemListViewManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__, v25, v26, v27);
    sub_B5D5C4(&int___TypeInfo, v28, v29, v30);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_11928/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_6812/*"FollowerSelectClass"*/, v37, v38, v39);
    byte_42EBBE8 = 1;
  }
  if ( battleSetupInfo )
  {
    this->fields.questId = BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
    this->fields.questPhase = battleSetupInfo->fields.questPhase;
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(battleSetupInfo->fields.questId, 0LL);
    v42 = FollowerSelectItemListViewManager_TypeInfo;
    if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v42 = FollowerSelectItemListViewManager_TypeInfo;
    }
    LIST_VIEW_SORT = v42->static_fields->LIST_VIEW_SORT;
    if ( !LIST_VIEW_SORT )
      goto LABEL_47;
    v44 = System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort___Invoke(
            LIST_VIEW_SORT,
            ReturnTypeByQuestId,
            (const MethodInfo_2C2B80C *)Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__);
    this->fields.sort = v44;
    p_sort = &this->fields.sort;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.sort,
      (System_Int32_array **)v44,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    if ( !this->fields.sort )
      goto LABEL_47;
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                                                                                   this,
                                                                                   this->fields.questId,
                                                                                   this->fields.questPhase,
                                                                                   this->fields.sort->fields.isRequestLoad,
                                                                                   v52);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    LIST_VIEW_SORT = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventQuestMaster___);
    if ( !LIST_VIEW_SORT )
      goto LABEL_47;
    OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                   (EventQuestMaster_o *)LIST_VIEW_SORT,
                                   this->fields.questId,
                                   this->fields.questPhase,
                                   0LL);
    questId = this->fields.questId;
    questPhase = this->fields.questPhase;
    v56 = OngoingQuestTargetEventIds;
    v57 = (EventUpValSetupInfo_o *)sub_B5D694(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_24751852(v57, v56, 0, questId, questPhase, 0LL);
    this->fields.setupInfo = v57;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.setupInfo,
      (System_Int32_array **)v57,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
  }
  else
  {
    this->fields.setupInfo = 0LL;
    sub_B5D560(
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v64, v65, v66, v67, v68, v69);
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
    v76 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v76 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor = (int)v76->fields.itemList->monitor;
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(v76, v40) )
    {
      v78 = FollowerSelectItemListViewManager_TypeInfo;
      if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v78 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6812/*"FollowerSelectClass"*/, v78->static_fields->followerClassId, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
  this->fields.originalItemList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.originalItemList, 0LL, v70, v71, v72, v73, v74, v75);
  this->fields.mixItemList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.mixItemList, 0LL, v79, v80, v81, v82, v83, v84);
  classButtonControl = this->fields.classButtonControl;
  v86 = (ClassButtonControlComponent_CallbackFunc_o *)sub_B5D694(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v86,
    (Il2CppObject *)this,
    Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_47;
  ClassButtonControlComponent__init(classButtonControl, v86, this->fields.questId, this->fields.questPhase, 0, 0LL);
  this->fields.isInput = 0;
  v87 = this->fields.classButtonControl;
  LIST_VIEW_SORT = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  }
  if ( !v87 )
    goto LABEL_47;
  ClassButtonControlComponent__setCursor(
    v87,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  setupInfo = this->fields.setupInfo;
  v90 = setupInfo ? setupInfo->fields.eventIdList : (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, v90, v88);
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
                                                                                             (System_String_o *)StringLiteral_11928/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/,
                                                                                             0LL);
    if ( bonusFilterKindLabel )
    {
      UILabel__set_text(bonusFilterKindLabel, (System_String_o *)LIST_VIEW_SORT, 0LL);
      goto LABEL_43;
    }
LABEL_47:
    sub_B5D69C(LIST_VIEW_SORT, v40);
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
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42EBBF5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EBBF5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseClassCompatibilityMenu(Instance, 0LL, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__EndCloseClassBoardEffectListDialog(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42EBC05 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EBC05 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  ListViewSort_o *sort; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v16; // x21

  if ( (byte_42EBBF7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42EBBF7 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    FollowerSelectItemListViewManager__SetFilterButtonImage(this, v12);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_8;
    ListViewSort__Save(sort, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)this,
    Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__,
    0LL);
  if ( !Instance )
LABEL_8:
    sub_B5D69C(sort, v13);
  CommonUI__CloseServantBonusFilterSelectMenu(Instance, v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerSelectItemListViewManager__GetAdvantageClassId(
        FollowerSelectItemListViewManager_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t defaultValue,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v20; // x20
  int32_t result; // w0
  struct System_Int32_array *classIds; // x8
  struct System_Int32_array *v23; // x8
  WarEntity_o *v24; // x8
  __int64 v25; // x0

  if ( (byte_42EBBE5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, questId, questPhase, *(_QWORD *)&defaultValue);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42EBBE5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_17;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  if ( !Entity )
    return defaultValue;
  v20 = Entity;
  result = QuestPhaseEntity__GetAdvantageClassId(Entity, 0LL);
  if ( result != -1 )
    return result;
  classIds = v20->fields.classIds;
  if ( !classIds || !*(_QWORD *)&classIds->max_length )
    return defaultValue;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v23 = v20->fields.classIds;
  if ( !v23 )
    goto LABEL_17;
  if ( !v23->max_length )
  {
    v25 = sub_B5D6C8(Instance);
    sub_B5D668(v25, 0LL);
  }
  if ( !Instance )
LABEL_17:
    sub_B5D69C(Instance, v18);
  v24 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          v23->m_Items[1],
          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  result = defaultValue;
  if ( v24 )
    return *(&v24->fields.flag + 1);
  return result;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  FollowerSelectItemListViewManager_c *v4; // x0

  if ( (byte_42EBBEC & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBBEC = 1;
  }
  v4 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v4 = FollowerSelectItemListViewManager_TypeInfo;
  }
  return v4->static_fields->followerClassId;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetDisplayItemNum(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8

  if ( (byte_42EBC06 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, (_DWORD)method, v2, v3);
    byte_42EBC06 = 1;
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t PlayerPrefsFollowerClassId; // w21
  FollowerSelectItemListViewManager_c *v12; // x0
  _BOOL8 AdvantageClassAuto; // x0
  const MethodInfo *v14; // x3
  int32_t AdvantageClassId; // w22
  _BOOL8 IsSameQuestAndPhase; // x0
  const MethodInfo *v17; // x4

  if ( (byte_42EBBE3 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewManager_TypeInfo, questId, questPhase, isInitialize);
    this = (FollowerSelectItemListViewManager_o *)sub_B5D5C4(&OptionManager_TypeInfo, v8, v9, v10);
    byte_42EBBE3 = 1;
  }
  if ( isInitialize )
  {
    PlayerPrefsFollowerClassId = FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(
                                   this,
                                   *(const MethodInfo **)&questId);
  }
  else
  {
    v12 = FollowerSelectItemListViewManager_TypeInfo;
    if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v12 = FollowerSelectItemListViewManager_TypeInfo;
    }
    PlayerPrefsFollowerClassId = v12->static_fields->followerClassId;
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
                            v14);
    AdvantageClassId = PlayerPrefsFollowerClassId;
    if ( !IsSameQuestAndPhase )
      AdvantageClassId = FollowerSelectItemListViewManager__GetAdvantageClassId(
                           (FollowerSelectItemListViewManager_o *)IsSameQuestAndPhase,
                           questId,
                           questPhase,
                           PlayerPrefsFollowerClassId,
                           v17);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42EBBEA & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewItem_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    byte_42EBBEA = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (FollowerSelectItemListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == FollowerSelectItemListViewItem_TypeInfo )
    return (FollowerSelectItemListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetItemCount(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_ListViewItem__o *mixItemList; // x8

  if ( (byte_42EBC01 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, (_DWORD)method, v2, v3);
    byte_42EBC01 = 1;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v14; // x22
  __int64 v15; // x10
  struct UnityEngine_GameObject_o *dragParentObject; // x8

  v6 = this;
  if ( (byte_42EBC02 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewItem_TypeInfo, userId, userSvtId, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7, v8, v9);
    this = (FollowerSelectItemListViewManager_o *)sub_B5D5C4(
                                                    &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                    v10,
                                                    v11,
                                                    v12);
    byte_42EBC02 = 1;
  }
  itemList = v6->fields.itemList;
  if ( !itemList )
LABEL_17:
    sub_B5D69C(this, userId);
  v14 = 0LL;
  while ( (__int64)v14 < itemList->fields._size )
  {
    if ( v14 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (FollowerSelectItemListViewManager_o *)itemList->fields._items->m_Items[v14];
    if ( this )
    {
      v15 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v15
        && (FollowerSelectItemListViewItem_c *)this->klass->_2.typeHierarchy[v15 - 1] == FollowerSelectItemListViewItem_TypeInfo )
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
            return v14;
        }
      }
    }
    itemList = v6->fields.itemList;
    ++v14;
    if ( !itemList )
      goto LABEL_17;
  }
  LODWORD(v14) = 0;
  return v14;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerSelectItemListViewManager__GetItemIndex_31107624(
        FollowerSelectItemListViewManager_o *this,
        int64_t userId,
        int32_t classId,
        int32_t deckId,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *v8; // x22
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  unsigned __int64 v16; // x23
  ListViewItem_o *v17; // x8
  __int64 v18; // x11
  ListViewItem_c *klass; // x9
  int monitor_high; // w9

  v8 = this;
  if ( (byte_42EBC03 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewItem_TypeInfo, userId, classId, *(_QWORD *)&deckId);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9, v10, v11);
    this = (FollowerSelectItemListViewManager_o *)sub_B5D5C4(
                                                    &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                    v12,
                                                    v13,
                                                    v14);
    byte_42EBC03 = 1;
  }
  itemList = v8->fields.itemList;
  if ( !itemList )
LABEL_19:
    sub_B5D69C(this, userId);
  v16 = 0LL;
  while ( (__int64)v16 < itemList->fields._size )
  {
    if ( v16 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v17 = itemList->fields._items->m_Items[v16];
    if ( v17 )
    {
      v18 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v17->klass->_2.bitflags2 + 1) >= (unsigned int)v18
        && (FollowerSelectItemListViewItem_c *)v17->klass->_2.typeHierarchy[v18 - 1] == FollowerSelectItemListViewItem_TypeInfo )
      {
        klass = v17[1].klass;
        if ( klass )
          klass = (ListViewItem_c *)klass->_1.name;
        if ( klass == (ListViewItem_c *)userId )
        {
          monitor_high = HIDWORD(v17[1].monitor);
          if ( monitor_high )
            monitor_high = (int)v17[1].monitor;
          if ( monitor_high == classId && HIDWORD(v17[2].fields.sortValue0) == deckId )
            return v16;
        }
      }
    }
    itemList = v8->fields.itemList;
    ++v16;
    if ( !itemList )
      goto LABEL_19;
  }
  LODWORD(v16) = -1;
  return v16;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBBE6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6812/*"FollowerSelectClass"*/, (_DWORD)method, v2, v3);
    byte_42EBBE6 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6812/*"FollowerSelectClass"*/, 0, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  FollowerSelectItemListViewManager_c *v7; // x0
  System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x0

  if ( (byte_42EBBDC & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__, v4, v5, v6);
    byte_42EBBDC = 1;
  }
  v7 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v7 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v7->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT
    || (LIST_VIEW_SORT = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort___Invoke(
                                                                                                 LIST_VIEW_SORT,
                                                                                                 1,
                                                                                                 (const MethodInfo_2C2B80C *)Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__)) == 0LL
    || (ListViewSort__InitLoad((ListViewSort_o *)LIST_VIEW_SORT, 0LL),
        (LIST_VIEW_SORT = FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT) == 0LL)
    || (LIST_VIEW_SORT = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort___Invoke(
                                                                                                 LIST_VIEW_SORT,
                                                                                                 0,
                                                                                                 (const MethodInfo_2C2B80C *)Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__)) == 0LL )
  {
    sub_B5D69C(LIST_VIEW_SORT, v1);
  }
  ListViewSort__InitLoad((ListViewSort_o *)LIST_VIEW_SORT, 0LL);
}


bool __fastcall FollowerSelectItemListViewManager__IsSameQuestAndPhase(
        FollowerSelectItemListViewManager_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  FollowerSelectItemListViewManager_c *v9; // x0
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
  struct FollowerSelectItemListViewManager_StaticFields *v11; // x8

  if ( (byte_42EBBE4 & 1) == 0 )
  {
    sub_B5D5C4(&BattleData_TypeInfo, questId, questPhase, method);
    sub_B5D5C4(&FollowerSelectItemListViewManager_TypeInfo, v6, v7, v8);
    byte_42EBBE4 = 1;
  }
  v9 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v9 = FollowerSelectItemListViewManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  if ( static_fields->lastSelectedQuestId == -1 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = FollowerSelectItemListViewManager_TypeInfo;
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
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = FollowerSelectItemListViewManager_TypeInfo;
  }
  v11 = v9->static_fields;
  if ( v11->lastSelectedQuestId != questId )
    return 0;
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v11 = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  }
  return v11->lastSelectedQuestPhase == questPhase;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__ModifyList(
        FollowerSelectItemListViewManager_o *this,
        int32_t friendPointUpVal,
        int32_t friendPointUpMaxVal,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *v6; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  unsigned __int64 v21; // x23
  ListViewItem_o *v22; // x8
  __int64 v23; // x11
  __int64 v24; // x11
  FollowerSelectItemListViewItem_o *v25; // x0
  FollowerSelectItemListViewManager_c *v26; // x0
  int32_t followerClassId; // w22
  const MethodInfo *v28; // x3
  struct System_Collections_Generic_List_ListViewItem__o *originalItemList; // x25
  signed __int64 v30; // x22
  unsigned __int64 v31; // x23
  ListViewItem_o *v32; // x8
  __int64 v33; // x11
  __int64 v34; // x11
  FollowerSelectItemListViewItem_o *v35; // x0
  struct System_Collections_Generic_List_ListViewItem__o *mixItemList; // x25
  signed __int64 v37; // x22
  unsigned __int64 v38; // x23
  ListViewItem_o *v39; // x8
  __int64 v40; // x11
  __int64 v41; // x11
  FollowerSelectItemListViewItem_o *v42; // x0

  v6 = this;
  if ( (byte_42EBBE7 & 1) == 0 )
  {
    sub_B5D5C4(&ClassButtonControlComponent_TypeInfo, friendPointUpVal, friendPointUpMaxVal, method);
    sub_B5D5C4(&FollowerSelectItemListViewItem_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&FollowerSelectItemListViewManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v13, v14, v15);
    this = (FollowerSelectItemListViewManager_o *)sub_B5D5C4(
                                                    &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                    v16,
                                                    v17,
                                                    v18);
    byte_42EBBE7 = 1;
  }
  itemList = v6->fields.itemList;
  if ( !itemList )
    goto LABEL_57;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v21 = 0LL;
    do
    {
      if ( v21 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v22 = itemList->fields._items->m_Items[v21];
      if ( !v22 )
        break;
      v23 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v23
        || (FollowerSelectItemListViewItem_c *)v22->klass->_2.typeHierarchy[v23 - 1] != FollowerSelectItemListViewItem_TypeInfo )
      {
        break;
      }
      v24 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v22->klass->_2.bitflags2 + 1) >= (unsigned int)v24 )
      {
        if ( (FollowerSelectItemListViewItem_c *)v22->klass->_2.typeHierarchy[v24 - 1] == FollowerSelectItemListViewItem_TypeInfo )
          v25 = (FollowerSelectItemListViewItem_o *)itemList->fields._items->m_Items[v21];
        else
          v25 = 0LL;
      }
      else
      {
        v25 = 0LL;
      }
      FollowerSelectItemListViewItem__Modify(v25, friendPointUpVal, friendPointUpMaxVal, method);
      if ( (__int64)++v21 >= size )
        goto LABEL_19;
      itemList = v6->fields.itemList;
    }
    while ( itemList );
LABEL_57:
    sub_B5D69C(this, *(_QWORD *)&friendPointUpVal);
  }
LABEL_19:
  v26 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v26 = FollowerSelectItemListViewManager_TypeInfo;
  }
  followerClassId = v26->static_fields->followerClassId;
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
    v30 = originalItemList->fields._size;
    if ( (int)v30 >= 1 )
    {
      v31 = 0LL;
      while ( 1 )
      {
        if ( v31 >= (unsigned int)originalItemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v32 = originalItemList->fields._items->m_Items[v31];
        if ( !v32 )
          goto LABEL_57;
        v33 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v32->klass->_2.bitflags2 + 1) < (unsigned int)v33
          || (FollowerSelectItemListViewItem_c *)v32->klass->_2.typeHierarchy[v33 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          goto LABEL_57;
        }
        v34 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v32->klass->_2.bitflags2 + 1) >= (unsigned int)v34 )
        {
          if ( (FollowerSelectItemListViewItem_c *)v32->klass->_2.typeHierarchy[v34 - 1] == FollowerSelectItemListViewItem_TypeInfo )
            v35 = (FollowerSelectItemListViewItem_o *)originalItemList->fields._items->m_Items[v31];
          else
            v35 = 0LL;
        }
        else
        {
          v35 = 0LL;
        }
        FollowerSelectItemListViewItem__Modify(v35, friendPointUpVal, friendPointUpMaxVal, v28);
        if ( (__int64)++v31 >= v30 )
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
    v37 = mixItemList->fields._size;
    if ( (int)v37 >= 1 )
    {
      v38 = 0LL;
      while ( 1 )
      {
        if ( v38 >= (unsigned int)mixItemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v39 = mixItemList->fields._items->m_Items[v38];
        if ( !v39 )
          goto LABEL_57;
        v40 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v39->klass->_2.bitflags2 + 1) < (unsigned int)v40
          || (FollowerSelectItemListViewItem_c *)v39->klass->_2.typeHierarchy[v40 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          goto LABEL_57;
        }
        v41 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v39->klass->_2.bitflags2 + 1) >= (unsigned int)v41 )
        {
          if ( (FollowerSelectItemListViewItem_c *)v39->klass->_2.typeHierarchy[v41 - 1] == FollowerSelectItemListViewItem_TypeInfo )
            v42 = (FollowerSelectItemListViewItem_o *)mixItemList->fields._items->m_Items[v38];
          else
            v42 = 0LL;
        }
        else
        {
          v42 = 0LL;
        }
        FollowerSelectItemListViewItem__Modify(v42, friendPointUpVal, friendPointUpMaxVal, v28);
        if ( (__int64)++v38 >= v37 )
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
  __int64 v3; // x3
  const MethodInfo *v6; // x2

  if ( (byte_42EBBFD & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, classPos, (_DWORD)method, v3);
    byte_42EBBFD = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    FollowerSelectItemListViewManager__SortClass(this, classPos, v6);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickBonusFilterKind(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  _BOOL4 isServantBonusFilterEnable; // w24
  _BOOL4 isServantEquipBonusFilterEnable; // w25
  System_Int32_array *equipBonusFilterEventIds; // x20
  ListViewSort_o *sort; // x21
  CommonUI_o *v19; // x22
  ServantBonusFilterSelectMenu_CallbackFunc_o *v20; // x23
  __int64 v21; // x0
  __int64 v22; // x1

  if ( (byte_42EBBF6 & 1) == 0 )
  {
    sub_B5D5C4(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EBBF6 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
    isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
    equipBonusFilterEventIds = this->fields.equipBonusFilterEventIds;
    sort = this->fields.sort;
    v19 = (CommonUI_o *)Instance;
    v20 = (ServantBonusFilterSelectMenu_CallbackFunc_o *)sub_B5D694(ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantBonusFilterSelectMenu_CallbackFunc___ctor(
      v20,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__,
      0LL);
    if ( !v19 )
      sub_B5D69C(v21, v22);
    CommonUI__OpenServantBonusFilterSelectMenu(
      v19,
      0,
      isServantBonusFilterEnable,
      isServantEquipBonusFilterEnable,
      equipBonusFilterEventIds,
      sort,
      v20,
      0LL);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickChangeSkill(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x1
  __int64 displaySkill; // x8
  System_Collections_Generic_List_FollowerSelectItemListViewObject__o *ObjectList; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  int size; // w8
  System_Collections_Generic_List_FollowerSelectItemListViewObject__o *v17; // x20
  unsigned int v18; // w21

  if ( (byte_42EBC00 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42EBC00 = 1;
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
      this->fields.displaySkill = dword_32B4C38[displaySkill];
    ObjectList = FollowerSelectItemListViewManager__get_ObjectList(this, v11);
    if ( !ObjectList )
      goto LABEL_17;
    size = ObjectList->fields._size;
    v17 = ObjectList;
    if ( size >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( size <= v18 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        ObjectList = (System_Collections_Generic_List_FollowerSelectItemListViewObject__o *)v17->fields._items->m_Items[v18];
        if ( !ObjectList )
          break;
        FollowerSelectItemListViewObject__ChangeDisplaySkill(
          (FollowerSelectItemListViewObject_o *)ObjectList,
          this->fields.displaySkill,
          v15);
        size = v17->fields._size;
        if ( (int)++v18 >= size )
          return;
      }
LABEL_17:
      sub_B5D69C(ObjectList, v14);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickClassComparibility(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_42EBBF4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EBBF4 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v15,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__,
      0LL);
    if ( !Instance )
      sub_B5D69C(v16, v17);
    CommonUI__OpenClassCompatibilityMenu(Instance, v15, 0LL);
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
      sub_B5D560(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B5D560(
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
        sub_B5D69C(v10, v11);
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_42EBBFB & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBBFB = 1;
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
      sub_B5D69C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickSortKind(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v16; // x21
  OtherUserSortDialog_CallbackFunc_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42EBBF9 & 1) == 0 )
  {
    sub_B5D5C4(&OtherUserSortDialog_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FollowerSelectItemListViewManager_CloseSortDialog__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EBBF9 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v16 = (CommonUI_o *)Instance;
    v17 = (OtherUserSortDialog_CallbackFunc_o *)sub_B5D694(OtherUserSortDialog_CallbackFunc_TypeInfo);
    OtherUserSortDialog_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_CloseSortDialog__,
      0LL);
    if ( !v16 )
      sub_B5D69C(v18, v19);
    CommonUI__OpenOtherUserSortDialog(v16, 0, sort, v17, 0LL);
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
    sub_B5D560(
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
        sub_B5D69C(v10, v11);
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
    sub_B5D560(
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
        sub_B5D69C(v10, v11);
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
    sub_B5D560(
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
        sub_B5D69C(v10, v11);
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

  if ( (byte_42EBBF3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12784/*"ScrollViewEnabled"*/, (_DWORD)obj, kind, method);
    byte_42EBBF3 = 1;
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
        (System_String_o *)StringLiteral_12784/*"ScrollViewEnabled"*/,
        0.1,
        0LL);
    }
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v8, v9, v10, v11, v12, v13);
    if ( callbackFunc )
    {
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        FollowerSelectItemListViewManager_CallbackFunc__Invoke(callbackFunc, kind, Index, 0LL);
        return;
      }
LABEL_14:
      sub_B5D69C(tutorialListViewObject, obj);
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
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Component_o *tutorialListViewObject; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_42EBBF2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBBF2 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
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
              sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
              if ( callbackFunc2 )
                System_Action__Invoke(callbackFunc2, 0LL);
              return;
            }
          }
        }
      }
      sub_B5D69C(tutorialListViewObject, v9);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OpenSupportClassBoard(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  FollowerSelectItemListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int32_t Index; // w20
  FollowerSelectItemListViewItem_o *v41; // x20
  __int64 v42; // x10
  _QWORD *v43; // x0
  System_Reflection_MethodBase_o *v44; // x0
  _QWORD *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  const MethodInfo *v48; // x1
  int32_t scrollBar; // w22
  struct FollowerInfo_o *followerInfo; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v53; // w20
  unsigned int v54; // w24
  __int64 v55; // x21
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  _QWORD **v62; // x24
  __int64 v63; // x22
  __int16 v64; // w8
  __int64 v65; // x22
  __int64 v66; // x22
  __int64 v67; // x22
  System_Int32_array ***v68; // x8
  System_Int32_array **v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  _QWORD **v76; // x23
  __int64 v77; // x22
  __int16 v78; // w8
  __int64 v79; // x22
  __int64 v80; // x22
  __int64 v81; // x22
  System_Int32_array ***v82; // x8
  System_Int32_array **v83; // x1
  CommonUI_o *Instance; // x22
  System_Action_o *v85; // x23
  __int64 v86; // x0

  v5 = this;
  if ( (byte_42EBC04 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Array_Empty_int___, v6, v7, v8);
    sub_B5D5C4(&ClassBoardInfo_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v15, v16, v17);
    sub_B5D5C4(&DataManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21, v22, v23);
    sub_B5D5C4(&FollowerSelectItemListViewItem_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__, v27, v28, v29);
    sub_B5D5C4(&Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v33, v34, v35);
    this = (FollowerSelectItemListViewManager_o *)sub_B5D5C4(
                                                    &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                    v36,
                                                    v37,
                                                    v38);
    byte_42EBC04 = 1;
  }
  if ( v5->fields.isInput )
  {
    itemList = v5->fields.itemList;
    if ( itemList )
    {
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        if ( itemList->fields._size <= (unsigned int)Index )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v41 = (FollowerSelectItemListViewItem_o *)itemList->fields._items->m_Items[Index];
        if ( !v41 )
          return;
        v42 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v41->klass->_2.bitflags2 + 1) < (unsigned int)v42
          || (FollowerSelectItemListViewItem_c *)v41->klass->_2.typeHierarchy[v42 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          return;
        }
        if ( v41->fields.isQuestRestriction )
        {
          v43 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
          if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 75) & 2) != 0 )
            v43 = (_QWORD *)sub_B5D5CC(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
          v44 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v43, v43[3]);
          OverwriteAssetSoundName__PlaySystemSe(v44, 2, 0LL);
          return;
        }
        v5->fields.isInput = 0;
        v45 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
        if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 75) & 2) != 0 )
          v45 = (_QWORD *)sub_B5D5CC(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
        v46 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v45, v45[3]);
        OverwriteAssetSoundName__PlaySystemSe(v46, 0, 0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
        this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewItem__get_SvtId(v41, v48);
        if ( Master_WarQuestSelectionMaster )
        {
          this = (FollowerSelectItemListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                          Master_WarQuestSelectionMaster,
                                                          (int32_t)this,
                                                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            scrollBar = (int32_t)this->fields.scrollBar;
            this = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( this )
            {
              this = (FollowerSelectItemListViewManager_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                                              (ClassBoardClassMaster_o *)this,
                                                              scrollBar,
                                                              0LL);
              followerInfo = v41->fields.followerInfo;
              if ( followerInfo )
              {
                userClassBoardInfo = followerInfo->fields.userClassBoardInfo;
                if ( userClassBoardInfo )
                {
                  max_length = userClassBoardInfo->max_length;
                  v53 = (int)this;
                  if ( max_length < 1 )
                  {
LABEL_33:
                    v55 = sub_B5D694(ClassBoardInfo_TypeInfo);
                    ClassBoardInfo___ctor((ClassBoardInfo_o *)v55, 0LL);
                    if ( v55 )
                    {
                      *(_DWORD *)(v55 + 16) = v53;
                      v62 = (_QWORD **)Method_System_Array_Empty_int___;
                      v63 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
                      v64 = *(_WORD *)(v63 + 306);
                      if ( (v64 & 1) == 0 )
                      {
                        sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
                        v64 = *(_WORD *)(v63 + 306);
                      }
                      if ( (v64 & 0x400) != 0 )
                      {
                        v65 = *v62[6];
                        if ( (*(_BYTE *)(v65 + 306) & 1) == 0 )
                          sub_AF52C4(*v62[6]);
                        if ( !*(_DWORD *)(v65 + 224) )
                        {
                          v66 = *v62[6];
                          if ( (*(_BYTE *)(v66 + 306) & 1) == 0 )
                            sub_AF52C4(*v62[6]);
                          j_il2cpp_runtime_class_init_0(v66);
                        }
                      }
                      v67 = *v62[6];
                      if ( (*(_BYTE *)(v67 + 306) & 1) == 0 )
                        sub_AF52C4(*v62[6]);
                      v68 = *(System_Int32_array ****)(v67 + 184);
                      v69 = *v68;
                      *(_QWORD *)(v55 + 24) = *v68;
                      sub_B5D560((BattleServantConfConponent_o *)(v55 + 24), v69, v56, v57, v58, v59, v60, v61);
                      v76 = (_QWORD **)Method_System_Array_Empty_int___;
                      v77 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
                      v78 = *(_WORD *)(v77 + 306);
                      if ( (v78 & 1) == 0 )
                      {
                        sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
                        v78 = *(_WORD *)(v77 + 306);
                      }
                      if ( (v78 & 0x400) != 0 )
                      {
                        v79 = *v76[6];
                        if ( (*(_BYTE *)(v79 + 306) & 1) == 0 )
                          sub_AF52C4(*v76[6]);
                        if ( !*(_DWORD *)(v79 + 224) )
                        {
                          v80 = *v76[6];
                          if ( (*(_BYTE *)(v80 + 306) & 1) == 0 )
                            sub_AF52C4(*v76[6]);
                          j_il2cpp_runtime_class_init_0(v80);
                        }
                      }
                      v81 = *v76[6];
                      if ( (*(_BYTE *)(v81 + 306) & 1) == 0 )
                        sub_AF52C4(*v76[6]);
                      v82 = *(System_Int32_array ****)(v81 + 184);
                      v83 = *v82;
                      *(_QWORD *)(v55 + 32) = *v82;
                      sub_B5D560((BattleServantConfConponent_o *)(v55 + 32), v83, v70, v71, v72, v73, v74, v75);
LABEL_57:
                      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v85 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                      System_Action___ctor(
                        v85,
                        (Il2CppObject *)v5,
                        Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__,
                        0LL);
                      if ( Instance )
                      {
                        CommonUI__OpenClassBoardEffectListDialog(
                          Instance,
                          1,
                          v53,
                          0,
                          v85,
                          1,
                          (ClassBoardInfo_o *)v55,
                          0LL);
                        return;
                      }
                    }
                  }
                  else
                  {
                    v54 = 0;
                    while ( 1 )
                    {
                      if ( v54 >= max_length )
                      {
                        v86 = sub_B5D6C8(this);
                        sub_B5D668(v86, 0LL);
                      }
                      v55 = (__int64)userClassBoardInfo->m_Items[v54];
                      if ( !v55 )
                        break;
                      if ( *(_DWORD *)(v55 + 16) == v53 )
                      {
                        this = (FollowerSelectItemListViewManager_o *)ClassBoardInfo__IsReleasedClassId(
                                                                        (ClassBoardInfo_o *)v55,
                                                                        scrollBar,
                                                                        0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          goto LABEL_57;
                      }
                      max_length = userClassBoardInfo->max_length;
                      if ( (int)++v54 >= max_length )
                        goto LABEL_33;
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_B5D69C(this, obj);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__RequestInto(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  const MethodInfo *v17; // x1
  System_Collections_Generic_List_FollowerSelectItemListViewObject__o *ObjectList; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_FollowerSelectItemListViewObject__o *v20; // x20
  signed __int64 size; // x8
  unsigned __int64 v22; // x24
  int v23; // w23
  FollowerSelectItemListViewObject_o *v24; // x21
  System_Action_o *v25; // x22
  const MethodInfo *v26; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EBBF1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v14, v15, v16);
    byte_42EBBF1 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = FollowerSelectItemListViewManager__get_ObjectList(this, v17);
  if ( !ObjectList )
LABEL_15:
    sub_B5D69C(ObjectList, v19);
  v20 = ObjectList;
  this->fields.callbackCount = ObjectList->fields._size;
  LODWORD(size) = ObjectList->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v22 = 0LL;
  v23 = 0;
  do
  {
    if ( v22 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v24 = v20->fields._items->m_Items[v22];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v24, 0LL) )
    {
      v25 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v24 )
        goto LABEL_15;
      ++v23;
      zero = UnityEngine_Vector3__get_zero(0LL);
      FollowerSelectItemListViewObject__Init(v24, 4, v25, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v26);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v20->fields._size;
    ++v22;
  }
  while ( (__int64)v22 < size );
  if ( !v23 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
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
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v30; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EBBEF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v26, v27, v28);
    byte_42EBBEF = 1;
  }
  memset(&v37, 0, sizeof(v37));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v30);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v37,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v37.fields.current;
      v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v34, v35);
      zero = UnityEngine_Vector3__get_zero(0LL);
      FollowerSelectItemListViewObject__Init(
        (FollowerSelectItemListViewObject_o *)current,
        mode,
        v33,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v36);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v37,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__RequestListObject_31100604(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v28; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EBBF0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v24, v25, v26);
    byte_42EBBF0 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v28);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v35.fields.current;
      v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v32, v33);
      zero = UnityEngine_Vector3__get_zero(0LL);
      FollowerSelectItemListViewObject__Init(
        (FollowerSelectItemListViewObject_o *)current,
        mode,
        v31,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v34);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


void __fastcall FollowerSelectItemListViewManager__SaveSortFilter(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ListViewSort_o *sort; // x0
  struct ListViewSort_o *v9; // x8
  FollowerSelectItemListViewManager_o *v10; // x0
  int monitor; // w20
  FollowerSelectItemListViewManager_c *v12; // x0

  if ( (byte_42EBBE9 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6812/*"FollowerSelectClass"*/, v5, v6, v7);
    byte_42EBBE9 = 1;
  }
  sort = this->fields.sort;
  if ( !sort || (ListViewSort__Save(sort, 0LL), (v9 = this->fields.sort) == 0LL) )
    sub_B5D69C(sort, method);
  if ( v9->fields.isRequestSave )
  {
    v10 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v10 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor = (int)v10->fields.itemList->monitor;
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(v10, method) )
    {
      v12 = FollowerSelectItemListViewManager_TypeInfo;
      if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v12 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6812/*"FollowerSelectClass"*/, v12->static_fields->followerClassId, 0LL);
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
    sub_B5D69C(0LL, method);
  UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__SetBonusFilterFlag(
        FollowerSelectItemListViewManager_o *this,
        System_Int32_array *eventIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v22; // x1
  __int64 v23; // x8
  System_Collections_Generic_List_int__o *v24; // x21
  unsigned __int64 v25; // x23
  int32_t v26; // w22
  bool isBonusFilterEnable; // w28
  bool isServantBonusFilterEnable; // w28
  bool isServantEquipBonusFilterEnable; // w28
  struct System_Int32_array *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42EBBDF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventFilterMaster___, (_DWORD)eventIds, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_int___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Remove__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42EBBDF = 1;
  }
  entity = 0LL;
  *(_WORD *)&this->fields.isBonusFilterEnable = 256;
  this->fields.isServantEquipBonusFilterEnable = 1;
  Instance = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)eventIds,
                                                         (const MethodInfo_1CBA56C *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !eventIds )
    goto LABEL_22;
  v23 = *(_QWORD *)&eventIds->max_length;
  v24 = Instance;
  if ( v23 && (int)v23 >= 1 )
  {
    v25 = 0LL;
    while ( 1 )
    {
      if ( v25 >= (unsigned int)v23 )
      {
        v37 = sub_B5D6C8(Instance);
        sub_B5D668(v37, 0LL);
      }
      v26 = eventIds->m_Items[v25 + 1];
      Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventFilterMaster___);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                                             &entity,
                                                             v26,
                                                             (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__);
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
          if ( !v24 )
            break;
          Instance = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Remove(
                                                                 v24,
                                                                 v26,
                                                                 (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
      else
      {
        this->fields.isBonusFilterEnable = 1;
      }
      LODWORD(v23) = eventIds->max_length;
      if ( (__int64)++v25 >= (int)v23 )
        goto LABEL_20;
    }
LABEL_22:
    sub_B5D69C(Instance, v22);
  }
LABEL_20:
  if ( !v24 )
    goto LABEL_22;
  v30 = System_Collections_Generic_List_int___ToArray(
          v24,
          (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.equipBonusFilterEventIds = v30;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipBonusFilterEventIds,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}


void __fastcall FollowerSelectItemListViewManager__SetClassBoardInfo(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  BalanceConfig_c *v50; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classInfoSprite; // x20
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x0
  BattleServantConfConponent_o *p_classBoardMaxDictionary; // x20
  System_Collections_Generic_Dictionary_int__int__o *v55; // x19
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *Master_WarQuestSelectionMaster; // x0
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v68; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v71; // x3
  System_Collections_Generic_IEnumerator_T__c *v72; // x8
  unsigned __int64 v73; // x10
  int32_t *v74; // x11
  __int64 v75; // x0
  __int64 v76; // x0
  __int64 v77; // x21
  __int64 v78; // x9
  ClassBoardSquareMaster_o *v79; // x0
  __int64 v80; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v82; // x1
  System_Collections_Generic_IEnumerator_T__c *v83; // x8
  unsigned __int64 v84; // x10
  int32_t *v85; // x11
  __int64 v86; // x0

  if ( (byte_42EBBE1 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&ClassBoardBaseEntity_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&CondType_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v20, v21, v22);
    sub_B5D5C4(&DataManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Clear__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_17357/*"buttontxt_formation_20"*/, v47, v48, v49);
    byte_42EBBE1 = 1;
  }
  v50 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v50 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v50->static_fields->ClassBoardReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_25877652(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17357/*"buttontxt_formation_20"*/, 0LL);
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = (BattleServantConfConponent_o *)&this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_2F0B024 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v55 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v55,
      (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    p_classBoardMaxDictionary->klass = (BattleServantConfConponent_c *)v55;
    sub_B5D560(p_classBoardMaxDictionary, (System_Int32_array **)v55, v56, v57, v58, v59, v60, v61);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster[1].klass) == 0LL )
  {
    sub_B5D69C(Master_WarQuestSelectionMaster, v63);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 Master_WarQuestSelectionMaster,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v64);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v68 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v68;
        p_offset += 4;
        if ( v68 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v65);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v72 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v73 = 0LL;
      v74 = &v72->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v74 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v73;
        v74 += 4;
        if ( v73 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_34;
      }
      v75 = (__int64)&v72->vtable[*v74].method;
    }
    else
    {
LABEL_34:
      v75 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v71);
    }
    v76 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v75)(
            Enumerator,
            *(_QWORD *)(v75 + 8));
    v77 = v76;
    if ( v76 )
    {
      v78 = *(&ClassBoardBaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v76 + 300LL) < (unsigned int)v78
        || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v76 + 200LL) + 8 * v78 - 8) != ClassBoardBaseEntity_TypeInfo )
      {
        sub_B5D990(v76);
LABEL_55:
        sub_B5D69C(v79, v80);
      }
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v79 = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v77 )
      goto LABEL_55;
    if ( !v79 )
      sub_B5D69C(0LL, v80);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(v79, *(_DWORD *)(v77 + 16), 0LL);
    if ( OtherThanNoneEntity )
    {
      if ( !p_classBoardMaxDictionary->klass )
        sub_B5D69C(OtherThanNoneEntity, v82);
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)p_classBoardMaxDictionary->klass,
        *(_DWORD *)(v77 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v83 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v84 = 0LL;
    v85 = &v83->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v85 - 1) != System_IDisposable_TypeInfo )
    {
      ++v84;
      v85 += 4;
      if ( v84 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_51;
    }
    v86 = (__int64)&v83->vtable[*v85].method;
  }
  else
  {
LABEL_51:
    v86 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v71);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v86)(Enumerator, *(_QWORD *)(v86 + 8));
}


void __fastcall FollowerSelectItemListViewManager__SetClassId(
        FollowerSelectItemListViewManager_o *this,
        int32_t followerClassId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  FollowerSelectItemListViewManager_c *v30; // x0
  System_Collections_Generic_IEnumerable_T__o *mixItemList; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v32; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  const MethodInfo *v41; // x1
  __int64 v42; // x10
  System_Collections_Generic_IEnumerable_T__o *originalItemList; // x22
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v44; // x23
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  const MethodInfo *v51; // x2
  __int64 v52; // x10
  int v53; // w19
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+8h] [xbp-78h] BYREF
  int v55[2]; // [xsp+20h] [xbp-60h]
  int v56; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_42EBBED & 1) == 0 )
  {
    sub_B5D5C4(&ClassButtonControlComponent_TypeInfo, followerClassId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v12, v13, v14);
    sub_B5D5C4(&FollowerSelectItemListViewItem_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&FollowerSelectItemListViewManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem___ctor___68741096, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_ListViewItem__TypeInfo, v27, v28, v29);
    byte_42EBBED = 1;
  }
  memset(&v57, 0, sizeof(v57));
  v56 = 0;
  v30 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v30 = FollowerSelectItemListViewManager_TypeInfo;
  }
  v30->static_fields->followerClassId = followerClassId;
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
      v32 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_ListViewItem__TypeInfo);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v32,
        mixItemList,
        (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_ListViewItem___ctor___68741096);
      this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v32;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.itemList,
        (System_Int32_array **)v32,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      itemList = this->fields.itemList;
      if ( itemList )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v54,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v57 = v54;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v57,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( v57.fields.current )
          {
            v42 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v57.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v42
              && (FollowerSelectItemListViewItem_c *)v57.fields.current->klass->_2.typeHierarchy[v42 - 1] == FollowerSelectItemListViewItem_TypeInfo )
            {
              FollowerSelectItemListViewItem__UpdateRestriction(
                (FollowerSelectItemListViewItem_o *)v57.fields.current,
                v41);
            }
          }
        }
        v55[0] = 190;
        v56 = 1;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v57,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        v56 = 0;
        return;
      }
LABEL_31:
      sub_B5D69C(itemList, v39);
    }
    originalItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.originalItemList;
    v44 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_ListViewItem__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v44,
      originalItemList,
      (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_ListViewItem___ctor___68741096);
    this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v44;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.itemList,
      (System_Int32_array **)v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_31;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v54,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v57 = v54;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v57,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( v57.fields.current )
      {
        v52 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v57.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v52
          && (FollowerSelectItemListViewItem_c *)v57.fields.current->klass->_2.typeHierarchy[v52 - 1] == FollowerSelectItemListViewItem_TypeInfo )
        {
          FollowerSelectItemListViewItem__AnalyzeEntity(
            (FollowerSelectItemListViewItem_o *)v57.fields.current,
            followerClassId,
            v51);
        }
      }
    }
    v55[0] = 190;
    v53 = ++v56;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v57,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v53 && v55[v53 - 1] == 190 )
      v56 = v53 - 1;
  }
}


void __fastcall FollowerSelectItemListViewManager__SetFilterButtonImage(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ListViewSort_o *sort; // x0
  UISprite_o *bonusFilterSprite; // x19
  System_String_o **v10; // x8

  if ( (byte_42EBBF8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17223/*"btn_sefilter_2_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17222/*"btn_sefilter_2"*/, v5, v6, v7);
    byte_42EBBF8 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (bonusFilterSprite = this->fields.bonusFilterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !bonusFilterSprite) )
  {
    sub_B5D69C(sort, method);
  }
  v10 = (System_String_o **)&StringLiteral_17222/*"btn_sefilter_2"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v10 = (System_String_o **)&StringLiteral_17223/*"btn_sefilter_2_on"*/;
  UISprite__set_spriteName(bonusFilterSprite, *v10, 0LL);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  FollowerSelectItemListViewManager__SetMode_31099756(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__SetMode_31099756(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char *ObjectList; // x0
  __int64 v22; // x1
  int v23; // w8
  char *v24; // x19
  unsigned int v25; // w22
  FollowerSelectItemListViewObject_o *v26; // x21
  const MethodInfo *v27; // x1
  int v28; // w2
  __int64 v29; // x3
  const MethodInfo *v30; // x2
  __int64 *v31; // x8
  const MethodInfo *v32; // x1
  int32_t v33; // w8
  char *v34; // x20
  int v35; // w8
  __int64 v36; // x23
  FollowerSelectItemListViewObject_o *v37; // x21
  System_Action_o *v38; // x22
  const MethodInfo *v39; // x3
  int v40; // s1
  int32_t v43; // w1
  FollowerSelectItemListViewObject_o *v44; // x0
  System_Action_o *v45; // x2
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct FollowerSelectItemListViewObject_o *tutorialListViewObject; // x22
  const MethodInfo *v53; // x1
  struct FollowerSelectItemListViewObject_o *v54; // x21

  if ( (byte_42EBBEE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_11562/*"RequestInto"*/, v18, v19, v20);
    byte_42EBBEE = 1;
  }
  if ( mode == 3 )
  {
    ObjectList = (char *)FollowerSelectItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
    if ( !ObjectList )
      goto LABEL_38;
    v23 = *((_DWORD *)ObjectList + 6);
    v24 = ObjectList;
    if ( v23 >= 1 )
    {
      v25 = 0;
      while ( 1 )
      {
        if ( v23 <= v25 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v26 = *(FollowerSelectItemListViewObject_o **)(*((_QWORD *)v24 + 2) + 8LL * (int)v25 + 32);
        if ( !v26 )
          break;
        UnityEngine_Vector3__get_zero(0LL);
        if ( (byte_42EBC11 & 1) == 0 )
        {
          sub_B5D5C4(&FollowerSelectItemListViewItem_TypeInfo, (_DWORD)v27, v28, v29);
          byte_42EBC11 = 1;
        }
        FollowerSelectItemListViewObject__SetupDisp(v26, v27);
        v23 = *((_DWORD *)v24 + 6);
        if ( (int)++v25 >= v23 )
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
    v31 = &StringLiteral_11562/*"RequestInto"*/;
LABEL_37:
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)*v31, 0.0, 0LL);
    return;
  }
  if ( mode != 4 )
  {
    if ( mode == 2 )
      FollowerSelectItemListViewManager__RequestListObject_31100604(this, 3, v30);
    return;
  }
  ListViewManager__set_IsInput((ListViewManager_o *)this, 1, 0LL);
  ObjectList = (char *)FollowerSelectItemListViewManager__get_ClippingObjectList(this, v32);
  if ( !ObjectList )
    goto LABEL_38;
  v33 = *((_DWORD *)ObjectList + 6);
  v34 = ObjectList;
  if ( v33 < 1 )
  {
    this->fields.callbackCount = 1;
    v31 = &StringLiteral_10142/*"OnMoveEnd"*/;
    goto LABEL_37;
  }
  this->fields.callbackCount = v33;
  v35 = *((_DWORD *)ObjectList + 6);
  if ( v35 >= 1 )
  {
    v36 = 0LL;
    while ( 1 )
    {
      if ( v35 <= (unsigned int)v36 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v37 = *(FollowerSelectItemListViewObject_o **)(*((_QWORD *)v34 + 2) + 8 * v36 + 32);
      v38 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v38, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v37 )
        break;
      *(UnityEngine_Vector3_o *)(&v40 - 1) = UnityEngine_Vector3__get_zero(0LL);
      if ( (_DWORD)v36 )
      {
        v43 = 2;
        v44 = v37;
        v45 = v38;
      }
      else
      {
        FollowerSelectItemListViewObject__Init(v37, 0, v38, 0.0, *(UnityEngine_Vector3_o *)&v40, v39);
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
        sub_B5D560(
          (BattleServantConfConponent_o *)(ObjectList + 32),
          (System_Int32_array **)this,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
        tutorialListViewObject = this->fields.tutorialListViewObject;
        ObjectList = (char *)FollowerSelectItemListViewObject__GetItem(v37, v53);
        if ( !tutorialListViewObject )
          break;
        ObjectList = (char *)((__int64 (__fastcall *)(struct FollowerSelectItemListViewObject_o *, char *, Il2CppMethodPointer))tutorialListViewObject->klass->vtable._5_SetItem.method)(
                               tutorialListViewObject,
                               ObjectList,
                               tutorialListViewObject->klass->vtable._6_SetItem.methodPtr);
        v54 = this->fields.tutorialListViewObject;
        if ( !v54 )
          break;
        *(UnityEngine_Vector3_o *)(&v40 - 1) = UnityEngine_Vector3__get_zero(0LL);
        v43 = 6;
        v44 = v54;
        v45 = 0LL;
      }
      FollowerSelectItemListViewObject__Init(v44, v43, v45, 0.0, *(UnityEngine_Vector3_o *)&v40, v39);
      v35 = *((_DWORD *)v34 + 6);
      if ( (int)++v36 >= v35 )
        return;
    }
LABEL_38:
    sub_B5D69C(ObjectList, v22);
  }
}


void __fastcall FollowerSelectItemListViewManager__SetMode_31100548(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  FollowerSelectItemListViewManager__SetMode_31099756(this, mode, v10);
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
  int v14; // w2
  __int64 v15; // x3

  v4 = obj;
  v5 = this;
  if ( (byte_42EBBEB & 1) == 0 )
  {
    this = (FollowerSelectItemListViewManager_o *)sub_B5D5C4(
                                                    &FollowerSelectItemListViewObject_TypeInfo,
                                                    (_DWORD)obj,
                                                    (_DWORD)item,
                                                    method);
    byte_42EBBEB = 1;
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
    sub_B5D69C(this, obj);
  }
  if ( !v4 )
    goto LABEL_19;
  UnityEngine_Vector3__get_zero(0LL);
  if ( (byte_42EBC11 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewItem_TypeInfo, (_DWORD)v13, v14, v15);
    byte_42EBC11 = 1;
  }
  FollowerSelectItemListViewObject__SetupDisp((FollowerSelectItemListViewObject_o *)v4, v13);
}


void __fastcall FollowerSelectItemListViewManager__SetSortButtonImage(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  __int64 v24; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *sortKindLabel; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v28; // x8
  int32_t sortKind; // w9
  System_String_o **v30; // x8
  struct ListViewSort_o *v31; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v33; // x9
  System_String_o **v34; // x10
  System_String_o **v35; // x8
  struct ListViewSort_o *v36; // x8
  System_String_o **v37; // x8

  if ( (byte_42EBBFC & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17230/*"btn_sort_up"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17314/*"btn_txt_up"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17270/*"btn_txt_new"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17260/*"btn_txt_down"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17277/*"btn_txt_old"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17227/*"btn_sort_down"*/, v20, v21, v22);
    byte_42EBBFC = 1;
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
    v28 = this->fields.sort;
    if ( v28 )
    {
      sortKind = v28->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v30 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17277/*"btn_txt_old"*/ : &StringLiteral_17270/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v30, 0LL);
          v31 = this->fields.sort;
          if ( v31 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v31->fields.isAscendingOrder;
              v33 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
              v34 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
LABEL_32:
              if ( isAscendingOrder )
                v37 = v33;
              else
                v37 = v34;
              UISprite__set_spriteName((UISprite_o *)sort, *v37, 0LL);
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
          v35 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17314/*"btn_txt_up"*/ : &StringLiteral_17260/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v35, 0LL);
          v36 = this->fields.sort;
          if ( v36 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v36->fields.isAscendingOrder;
              v33 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
              v34 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_36:
    sub_B5D69C(sort, v24);
  }
}


void __fastcall FollowerSelectItemListViewManager__SortClass(
        FollowerSelectItemListViewManager_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  FollowerSelectItemListViewManager_c *v30; // x0
  FollowerSelectItemListViewManager_c *v31; // x0
  int32_t followerClassId; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x21
  struct ListViewSort_o *SvtId; // x0
  const MethodInfo *v35; // x1
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  signed __int64 size; // x24
  int32_t v39; // w25
  unsigned __int64 v40; // x26
  FollowerSelectItemListViewItem_o *v41; // x22
  __int64 v42; // x10
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v43; // x22
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  if ( (byte_42EBBFE & 1) == 0 )
  {
    sub_B5D5C4(&ClassButtonControlComponent_TypeInfo, classPos, (_DWORD)method, v3);
    sub_B5D5C4(&FollowerSelectItemListViewItem_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&FollowerSelectItemListViewManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem___ctor___68741096, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_ListViewItem__TypeInfo, v27, v28, v29);
    byte_42EBBFE = 1;
  }
  v30 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v30 = FollowerSelectItemListViewManager_TypeInfo;
  }
  if ( v30->static_fields->followerClassId != classPos )
  {
    if ( (BYTE3(ClassButtonControlComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    }
    if ( !ClassButtonControlComponent__IsMixSupportGroupType(classPos, 0LL) )
    {
      v31 = FollowerSelectItemListViewManager_TypeInfo;
      if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v31 = FollowerSelectItemListViewManager_TypeInfo;
      }
      followerClassId = v31->static_fields->followerClassId;
      if ( (BYTE3(ClassButtonControlComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      }
      ClassButtonControlComponent__IsMixSupportGroupType(followerClassId, 0LL);
    }
  }
  FollowerSelectItemListViewManager__SetClassId(this, classPos, method);
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  p_itemList = &this->fields.itemList;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_45;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v39 = 0;
    v40 = 0LL;
    do
    {
      if ( v40 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v41 = (FollowerSelectItemListViewItem_o *)itemList->fields._items->m_Items[v40];
      if ( !v41 )
        break;
      v42 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v41->klass->_2.bitflags2 + 1) < (unsigned int)v42
        || (FollowerSelectItemListViewItem_c *)v41->klass->_2.typeHierarchy[v42 - 1] != FollowerSelectItemListViewItem_TypeInfo )
      {
        break;
      }
      SvtId = (struct ListViewSort_o *)FollowerSelectItemListViewItem__get_SvtId(v41, v35);
      if ( (int)SvtId >= 1 )
      {
        v41->fields.index = v39;
        if ( !v33 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v33,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v39;
      }
      if ( (__int64)++v40 >= size )
        goto LABEL_32;
      itemList = *p_itemList;
    }
    while ( *p_itemList );
LABEL_45:
    sub_B5D69C(SvtId, v35);
  }
LABEL_32:
  v43 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v43,
    (System_Collections_Generic_IEnumerable_T__o *)v33,
    (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_ListViewItem___ctor___68741096);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v43;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int64_t RefreshRemain; // x0
  __int64 v27; // x1
  __int64 v28; // x20
  UnityEngine_GameObject_o *refreshButtonObject; // x0
  UnityEngine_Object_o *v30; // x21
  UnityEngine_Object_o *v31; // x21
  UIWidget_o *v32; // x21
  int64_t Time; // x0
  int64_t v34; // x21
  UILabel_o *refreshRemainLabel; // x22
  Il2CppObject *v36; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UIWidget_o *refreshButtonSprite; // x20
  int v39; // s0
  UnityEngine_Object_o *v43; // x20
  UIWidget_o *refreshTitleSprite; // x20
  int v45; // s0
  __int64 v49; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EBBFF & 1) == 0 )
  {
    sub_B5D5C4(&FollowerListRequest_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FollowerSelectItemListViewManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, v8, v9, v10);
    sub_B5D5C4(&long_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_23850/*"{0}"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_1/*""*/, v23, v24, v25);
    byte_42EBBFF = 1;
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
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
      *(UnityEngine_Color_o *)&v39 = UnityEngine_Color__get_white(0LL);
      if ( !refreshButtonSprite )
        goto LABEL_58;
      UIWidget__set_color(refreshButtonSprite, *(UnityEngine_Color_o *)&v39, 0LL);
    }
    refreshButtonObject = this->fields.refreshTitleObject;
    if ( refreshButtonObject )
    {
      v43 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      refreshButtonObject,
                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      refreshButtonObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v43, 0LL, 0LL);
      if ( ((unsigned __int8)refreshButtonObject & 1) != 0 )
      {
        if ( !v43 )
          goto LABEL_58;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v43, 1, 0LL);
      }
      else
      {
        refreshTitleSprite = (UIWidget_o *)this->fields.refreshTitleSprite;
        *(UnityEngine_Color_o *)&v45 = UnityEngine_Color__get_white(0LL);
        if ( !refreshTitleSprite )
          goto LABEL_58;
        UIWidget__set_color(refreshTitleSprite, *(UnityEngine_Color_o *)&v45, 0LL);
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
    sub_B5D69C(refreshButtonObject, v27);
  }
  v28 = RefreshRemain;
  refreshButtonObject = this->fields.refreshButtonObject;
  if ( !refreshButtonObject )
    goto LABEL_58;
  v30 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  refreshButtonObject,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  refreshButtonObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
  if ( ((unsigned __int8)refreshButtonObject & 1) != 0 )
  {
    if ( !v30 )
      goto LABEL_58;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v30, 0, 0LL);
  }
  refreshButtonObject = this->fields.refreshTitleObject;
  if ( !refreshButtonObject )
    goto LABEL_58;
  v31 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  refreshButtonObject,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  refreshButtonObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
  if ( ((unsigned __int8)refreshButtonObject & 1) != 0 )
  {
    if ( !v31 )
      goto LABEL_58;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v31, 0, 0LL);
  }
  v32 = (UIWidget_o *)this->fields.refreshButtonSprite;
  refreshButtonObject = (UnityEngine_GameObject_o *)FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    refreshButtonObject = (UnityEngine_GameObject_o *)FollowerSelectItemListViewManager_TypeInfo;
  }
  if ( !v32 )
    goto LABEL_58;
  UIWidget__set_color(v32, *(UnityEngine_Color_o *)(*(_QWORD *)&refreshButtonObject[7].fields.m_CachedPtr + 20LL), 0LL);
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
    v34 = Time;
    refreshButtonObject = (UnityEngine_GameObject_o *)this->fields.refreshRemainLabel;
    this->fields.isRefreshClear = 1;
    if ( refreshButtonObject )
    {
      refreshButtonObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)refreshButtonObject, 0LL);
      if ( refreshButtonObject )
      {
        UnityEngine_GameObject__SetActive(refreshButtonObject, 1, 0LL);
        refreshRemainLabel = this->fields.refreshRemainLabel;
        v49 = v28;
        v36 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v49);
        refreshButtonObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                            (System_String_o *)StringLiteral_23850/*"{0}"*/,
                                                            v36,
                                                            0LL);
        if ( refreshRemainLabel )
        {
          UILabel__set_text(refreshRemainLabel, (System_String_o *)refreshButtonObject, 0LL);
          this->fields.refreshCheckTime = v34;
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
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct FollowerSelectItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FollowerSelectItemListViewManager_o *v11; // x0
  FollowerSelectItemListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EBBD7 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EBBD7 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (FollowerSelectItemListViewManager_CallbackFunc_c *)v8->klass != FollowerSelectItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  FollowerSelectItemListViewManager__remove_callbackFunc(v11, v12, v13);
}


void __fastcall FollowerSelectItemListViewManager__add_callbackFunc2(
        FollowerSelectItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FollowerSelectItemListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EBBD9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EBBD9 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  FollowerSelectItemListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_FollowerSelectItemListViewObject__o *__fastcall FollowerSelectItemListViewManager__get_ClippingObjectList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  FollowerSelectItemListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *Item; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42EBBDE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EBBDE = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v44.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (FollowerSelectItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        (UnityEngine_GameObject_o *)current,
                                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      Item = (ListViewItem_o *)FollowerSelectItemListViewObject__GetItem(Component_srcLineSprite, v36);
      if ( !Item )
        sub_B5D69C(0LL, v39);
      if ( Item->fields.isTermination )
      {
        v40 = ListViewManager__ClippingItem_23920288((ListViewManager_o *)this, Item, 0LL);
        if ( v40 )
        {
          if ( !v29 )
            sub_B5D69C(v40, v41);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v29 )
          sub_B5D69C(Item, v39);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          v37,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FollowerSelectItemListViewObject__o *)v29;
}


System_Collections_Generic_List_FollowerSelectItemListViewObject__o *__fastcall FollowerSelectItemListViewManager__get_ObjectList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EBBDD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EBBDD = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FollowerSelectItemListViewObject__o *)v29;
}


void __fastcall FollowerSelectItemListViewManager__remove_callbackFunc(
        FollowerSelectItemListViewManager_o *this,
        FollowerSelectItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct FollowerSelectItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FollowerSelectItemListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EBBD8 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EBBD8 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (FollowerSelectItemListViewManager_CallbackFunc_c *)v8->klass != FollowerSelectItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  FollowerSelectItemListViewManager__add_callbackFunc2(v11, v12, v13);
}


void __fastcall FollowerSelectItemListViewManager__remove_callbackFunc2(
        FollowerSelectItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_42EBBDA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EBBDA = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  FollowerSelectItemListViewManager__DeleteContinueData(v11);
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall FollowerSelectItemListViewManager_CallbackFunc__BeginInvoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v13[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v14; // [xsp+18h] [xbp-28h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-24h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_42E56D7 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, kind, result, callback);
    sub_B5D5C4(&FollowerSelectItemListViewManager_ResultKind_TypeInfo, v9, v10, v11);
    byte_42E56D7 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(FollowerSelectItemListViewManager_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B5D568(this, v13, callback, object);
}


void __fastcall FollowerSelectItemListViewManager_CallbackFunc__EndInvoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
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
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
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
            v19 = sub_AF54C0(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B5D674(v18, v23);
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
            v17 = sub_AF54C0(v22, class_0, v10, v12);
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


void __fastcall FollowerSelectItemListViewManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct FollowerSelectItemListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E56D5 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E56D5 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(FollowerSelectItemListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = FollowerSelectItemListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FollowerSelectItemListViewManager___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 *v11; // x8
  System_String_o *v12; // x19
  ListViewSort_o *v13; // x20
  __int64 v15; // x0
  System_NotImplementedException_o *v16; // x19
  __int64 v17; // x0

  if ( (byte_42E56D6 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_TypeInfo, questType, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_6813/*"FollowerSelectEventQuest"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_6814/*"FollowerSelectMainQuest"*/, v8, v9, v10);
    byte_42E56D6 = 1;
  }
  if ( questType )
  {
    if ( questType != 1 )
    {
      v15 = sub_B5D5C8(&System_NotImplementedException_TypeInfo);
      v16 = (System_NotImplementedException_o *)sub_B5D694(v15);
      System_NotImplementedException___ctor(v16, 0LL);
      v17 = sub_B5D5C8(&Method_FollowerSelectItemListViewManager___c___cctor_b__124_0__);
      sub_B5D668(v16, v17);
    }
    v11 = &StringLiteral_6813/*"FollowerSelectEventQuest"*/;
  }
  else
  {
    v11 = &StringLiteral_6814/*"FollowerSelectMainQuest"*/;
  }
  v12 = (System_String_o *)*v11;
  v13 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v13, v12, 11, 0, 0LL);
  return v13;
}