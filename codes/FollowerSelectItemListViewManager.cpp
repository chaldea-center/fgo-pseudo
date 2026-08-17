void FollowerSelectItemListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  FollowerSelectItemListViewManager___c_c *v3; // x0
  Il2CppObject *v4; // x19
  System_Func_T__TResult__o *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8

  if ( (byte_596AFD3 & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewManager_TypeInfo);
    sub_2213A60(&System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo);
    sub_2213A60(&Method_FollowerSelectItemListViewManager___c___cctor_b__136_0__);
    sub_2213A60(&FollowerSelectItemListViewManager___c_TypeInfo);
    byte_596AFD3 = 1;
  }
  v3 = FollowerSelectItemListViewManager___c_TypeInfo;
  if ( !*(&FollowerSelectItemListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager___c_TypeInfo, v1, v2);
    v3 = FollowerSelectItemListViewManager___c_TypeInfo;
  }
  v4 = (Il2CppObject *)v3->static_fields->__9;
  v5 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo);
  System_Func_Int32Enum__object____ctor(v5, v4, Method_FollowerSelectItemListViewManager___c___cctor_b__136_0__, 0);
  FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT = (struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)FollowerSelectItemListViewManager_TypeInfo->static_fields,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->lastSelectedQuestId = -1;
  static_fields->REFRESH_DARK_COLOR = (struct UnityEngine_Color_o)xmmword_E9CFF0;
}


void FollowerSelectItemListViewManager___ctor(FollowerSelectItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void FollowerSelectItemListViewManager__AdjustButton(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *changeSkillButton; // x0
  UnityEngine_Component_o *sortKindButton; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UISprite_o *changeSkillButtonSprite; // x21
  Il2CppObject *Component_object; // x19

  if ( (byte_596AFA7 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_2213A60(&StringLiteral_18206/*"btn_bg_12"*/);
    sub_2213A60(&StringLiteral_18283/*"btn_sefilter_2"*/);
    sub_2213A60(&StringLiteral_18442/*"buttontxt_formation_19"*/);
    byte_596AFA7 = 1;
  }
  changeSkillButton = (UnityEngine_Component_o *)this->fields.changeSkillButton;
  if ( !changeSkillButton )
    goto LABEL_11;
  sortKindButton = (UnityEngine_Component_o *)this->fields.sortKindButton;
  changeSkillButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(changeSkillButton, 0);
  if ( !changeSkillButton )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSkillButton, 1, 0);
  changeSkillButtonSprite = this->fields.changeSkillButtonSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v5, v6);
  AtlasManager__SetEventSprite(changeSkillButtonSprite, (System_String_o *)StringLiteral_18442/*"buttontxt_formation_19"*/, 0);
  AtlasManager__SetEventSprite(this->fields.bonusFilterSprite, (System_String_o *)StringLiteral_18283/*"btn_sefilter_2"*/, 0);
  changeSkillButton = (UnityEngine_Component_o *)this->fields.bonusFilterSprite;
  if ( !changeSkillButton
    || (changeSkillButton = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))changeSkillButton->klass[2]._1.parent)(
                                                         changeSkillButton,
                                                         changeSkillButton->klass[2]._1.generic_class),
        !sortKindButton)
    || (Component_object = UnityEngine_Component__GetComponent_object_(
                             sortKindButton,
                             (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        changeSkillButton = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(
                                                         (UISprite_o *)Component_object,
                                                         (System_String_o *)StringLiteral_18206/*"btn_bg_12"*/,
                                                         0),
        !Component_object) )
  {
LABEL_11:
    sub_2213CDC(changeSkillButton, method);
  }
  ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[33].methodPtr)(
    Component_object,
    Component_object->klass->vtable[33].method);
}


// local variable allocation has failed, the output may be wrong!
bool FollowerSelectItemListViewManager__ChangeClass(
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
    || (ClassButtonControlComponent__setCursor(classButtonControl, classPos, 0),
        this->fields.isInput = isInput,
        FollowerSelectItemListViewManager__SortClass(this, classPos, v7),
        (sort = this->fields.sort) == 0) )
  {
    sub_2213CDC(classButtonControl, *(_QWORD *)&classPos);
  }
  return sort->fields.sortKind != 11;
}


void FollowerSelectItemListViewManager__CloseSortDialog(
        FollowerSelectItemListViewManager_o *this,
        bool isResult,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_596AFC5 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AFC5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  CommonUI__CloseOtherUserSortDialog((CommonUI_o *)Instance, 0, 0);
  if ( isResult )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewManager__CreateList(
        FollowerSelectItemListViewManager_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t friendPointUpVal,
        int32_t friendPointUpMaxVal,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_List_object__o *v18; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_List_object__o *v25; // x21
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_List_object__o *v32; // x21
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 ReturnTypeByQuestId; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  FollowerSelectItemListViewManager_c *v42; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct ListViewSort_o *v44; // x0
  struct ListViewSort_o **p_sort; // x21
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  int32_t v52; // w28
  ClassButtonControlComponent_o *classButtonControl; // x22
  ClassButtonControlComponent_CallbackFunc_o *v54; // x27
  const MethodInfo *v55; // x4
  __int64 v56; // x1
  __int64 v57; // x2
  int32_t InitialDisplayClass; // w22
  ClassButtonControlComponent_c *v59; // x0
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
  int v61; // w9
  __int64 v62; // x1
  __int64 v63; // x2
  System_Int32_array *OngoingQuestTargetEventIds; // x22
  EventUpValSetupInfo_o *v65; // x27
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  __int64 v72; // x2
  __int64 v73; // x8
  __int64 v74; // x27
  unsigned __int64 v75; // x19
  int32_t v76; // w0
  int v77; // w8
  ClassButtonControlComponent_o *v78; // x21
  FollowerSelectItemListViewManager_o *v79; // x21
  const MethodInfo *v80; // x2
  QuestPhaseEntity_o *v81; // x25
  bool IsNoneSupportFriendPoint; // w21
  bool v83; // w9
  bool v84; // w22
  bool v85; // w23
  __int64 v86; // x21
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  struct EventUpValSetupInfo_o *setupInfo; // x1
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7
  System_String_o *v106; // x2
  System_String_o *v107; // x3
  int32_t v108; // w4
  int32_t v109; // w5
  bool v110; // w6
  bool v111; // w7
  long double v112; // q0
  __int64 v113; // x0
  __int64 v114; // x0
  Il2CppObject *MasterData_object; // x28
  FollowerInfo_array *QuestFollowerList; // x26
  __int64 v117; // x2
  bool IsMyServantOrNpcRestriction_50456184; // w20
  BalanceConfig_c *v119; // x0
  int32_t ClassBoardReleaseQuestId; // w21
  __int64 v121; // x1
  __int64 v122; // x2
  bool IsQuestClear_47284152; // w21
  __int64 v124; // x2
  int max_length; // w8
  int v126; // w23
  FollowerInfo_o *v127; // x27
  ServantLeaderInfo_o *ServantLeaderInfo; // x21
  int32_t v129; // w0
  System_Int32_array *v130; // x22
  int32_t Rarity; // w0
  bool IsRecommendedFollower; // w19
  System_Collections_Generic_List_object__o *v133; // x22
  __int64 v134; // x2
  bool v135; // w24
  char v136; // w19
  FollowerSelectItemListViewManager_o *v137; // x21
  System_Object_array *v138; // x0
  System_String_o *v139; // x2
  System_String_o *v140; // x3
  int32_t v141; // w4
  int32_t v142; // w5
  bool v143; // w6
  bool v144; // w7
  __int64 v145; // x1
  __int64 v146; // x2
  FollowerSelectItemListViewManager_c *v147; // x0
  int32_t followerClassId; // w22
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v149; // x28
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x19
  FollowerSelectItemListViewItem_o *v151; // x21
  System_String_o *v152; // x2
  System_String_o *v153; // x3
  int32_t v154; // w4
  int32_t v155; // w5
  bool v156; // w6
  bool v157; // w7
  __int64 v158; // x8
  _QWORD *v159; // x9
  __int64 v160; // x10
  __int64 v161; // x8
  System_String_o *v162; // x2
  System_String_o *v163; // x3
  int32_t v164; // w4
  int32_t v165; // w5
  bool v166; // w6
  bool v167; // w7
  __int64 v168; // x8
  _QWORD *v169; // x9
  __int64 v170; // x10
  __int64 v171; // x8
  System_String_o *v172; // x2
  System_String_o *v173; // x3
  int32_t v174; // w4
  int32_t v175; // w5
  bool v176; // w6
  bool v177; // w7
  __int64 v178; // x8
  _QWORD *v179; // x9
  __int64 v180; // x10
  __int64 v181; // x8
  Il2CppObject *v182; // x0
  __int64 v183; // x1
  __int64 v184; // x2
  __int64 v185; // x24
  __int64 v186; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v187; // x21
  int32_t ClassBoardBaseId; // w29
  __int64 v189; // x2
  Il2CppObject *v190; // x21
  __int64 v191; // x19
  UserClassBoardSquareEntity_o *v192; // x8
  Il2CppObject *v193; // x28
  __int64 v194; // x0
  Il2CppClass *v195; // x1
  int32_t v196; // w0
  System_String_o *v197; // x2
  System_String_o *v198; // x3
  int32_t v199; // w4
  int32_t v200; // w5
  bool v201; // w6
  bool v202; // w7
  System_Int32_array *OpenClassIdArrayFromBaseId; // x0
  System_String_o *v204; // x2
  System_String_o *v205; // x3
  int32_t v206; // w4
  int32_t v207; // w5
  bool v208; // w6
  bool v209; // w7
  System_String_o *v210; // x2
  System_String_o *v211; // x3
  int32_t v212; // w4
  int32_t v213; // w5
  bool v214; // w6
  bool v215; // w7
  struct System_Object_array *items; // x8
  _QWORD *v217; // x9
  __int64 size; // x10
  Il2CppClass **v219; // x0
  QuestPhaseEntity_o *v220; // x29
  bool v221; // w8
  __int64 v222; // x2
  unsigned __int64 namespaze_low; // x8
  unsigned __int64 v224; // x20
  void **v225; // x9
  _QWORD *v226; // x8
  Il2CppObject *v227; // x0
  __int64 v228; // x1
  __int64 v229; // x2
  Il2CppClass *v230; // x21
  Il2CppClass *v231; // x22
  __int64 v232; // x3
  __int64 v233; // x29
  BalanceConfig_c *v234; // x0
  struct BalanceConfig_StaticFields *v235; // x9
  int32_t FixMainSupportDeckNum; // w21
  int32_t FixEventSupportDeckNum; // w22
  int32_t deckPriority; // w21
  unsigned __int64 v239; // x23
  int32_t v240; // w26
  FollowerInfo_o *klass; // x27
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v242; // x28
  System_Collections_Generic_Dictionary_int__int__o *v243; // x24
  int32_t supportDeckId; // w25
  FollowerSelectItemListViewItem_o *v245; // x22
  System_String_o *v246; // x2
  System_String_o *v247; // x3
  int32_t v248; // w4
  int32_t v249; // w5
  bool v250; // w6
  bool v251; // w7
  __int64 v252; // x8
  _QWORD *v253; // x9
  __int64 v254; // x10
  __int64 v255; // x8
  struct BalanceConfig_StaticFields *v256; // x8
  int32_t v257; // w22
  int32_t v258; // w26
  int32_t v259; // w22
  unsigned __int64 v260; // x24
  int32_t v261; // w27
  FollowerInfo_o *v262; // x28
  int v263; // w19
  int32_t v264; // w29
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v265; // x23
  System_Collections_Generic_Dictionary_int__int__o *v266; // x25
  FollowerSelectItemListViewItem_o *v267; // x26
  System_String_o *v268; // x2
  System_String_o *v269; // x3
  int32_t v270; // w4
  int32_t v271; // w5
  bool v272; // w6
  bool v273; // w7
  __int64 v274; // x8
  _QWORD *v275; // x9
  __int64 v276; // x10
  __int64 v277; // x8
  __int64 v278; // x2
  Il2CppClass *v279; // x19
  const char *namespaze; // x8
  int v281; // w22
  unsigned __int64 v282; // x24
  FollowerInfo_o *v283; // x25
  Il2CppObject *v284; // x0
  __int64 v285; // x1
  __int64 v286; // x27
  BalanceConfig_c *v287; // x0
  struct BalanceConfig_StaticFields *v288; // x9
  int32_t v289; // w20
  int32_t v290; // w21
  int32_t v291; // w26
  FollowerSelectItemListViewManager_o *v292; // x19
  unsigned __int64 v293; // x24
  int32_t v294; // w20
  int32_t v295; // w29
  System_Collections_Generic_Dictionary_int__int__o *v296; // x28
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v297; // x23
  FollowerSelectItemListViewItem_o *v298; // x21
  System_String_o *v299; // x2
  System_String_o *v300; // x3
  int32_t v301; // w4
  int32_t v302; // w5
  bool v303; // w6
  bool v304; // w7
  __int64 v305; // x8
  __int64 v306; // x10
  __int64 v307; // x8
  int32_t v308; // w21
  BalanceConfig_c *v309; // x0
  struct BalanceConfig_StaticFields *v310; // x8
  int32_t v311; // w20
  int32_t v312; // w26
  unsigned __int64 v313; // x29
  int32_t v314; // w28
  int v315; // w25
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v316; // x23
  System_Collections_Generic_Dictionary_int__int__o *v317; // x19
  int32_t v318; // w22
  FollowerSelectItemListViewItem_o *v319; // x0
  int32_t v320; // w2
  Il2CppObject *v321; // x20
  System_String_o *v322; // x2
  System_String_o *v323; // x3
  int32_t v324; // w4
  int32_t v325; // w5
  bool v326; // w6
  bool v327; // w7
  __int64 v328; // x8
  _QWORD *v329; // x9
  __int64 v330; // x10
  __int64 v331; // x8
  struct ServantLeaderInfo_array *userSvtGrandHash; // x19
  int v333; // w8
  int v334; // w24
  bool isGrandServantRestriction; // w27
  ServantLeaderInfo_o *v336; // x9
  int32_t v337; // w23
  System_Collections_Generic_Dictionary_int__int__o *v338; // x22
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *followerSelectItemOption; // x20
  int32_t grandGraphId; // w25
  FollowerSelectItemListViewManager_o *v341; // x28
  FollowerSelectItemListViewItem_o *v342; // x21
  System_String_o *v343; // x2
  System_String_o *v344; // x3
  int32_t v345; // w4
  int32_t v346; // w5
  bool v347; // w6
  bool v348; // w7
  __int64 v349; // x8
  __int64 v350; // x10
  __int64 v351; // x8
  Il2CppClass *v352; // x19
  bool v353; // w20
  const char *v354; // x8
  bool v355; // w9
  signed __int64 i; // x25
  __int64 v357; // x22
  System_String_o *v358; // x2
  System_String_o *v359; // x3
  int32_t v360; // w4
  int32_t v361; // w5
  bool v362; // w6
  bool v363; // w7
  __int64 v364; // x23
  bool isGrandSupport; // w29
  int32_t v366; // w28
  __int64 v367; // x8
  __int64 v368; // x8
  __int64 v369; // x9
  __int64 v370; // x10
  int v371; // w8
  __int64 v372; // x11
  int v373; // w9
  __int64 v374; // x13
  __int64 v375; // x8
  __int64 v376; // x8
  __int64 v377; // x24
  __int64 v378; // x1
  System_String_o *v379; // x2
  System_String_o *v380; // x3
  int32_t v381; // w4
  int32_t v382; // w5
  bool v383; // w6
  bool v384; // w7
  int32_t v385; // w24
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v386; // x26
  FollowerSelectItemListViewItem_o *v387; // x23
  System_String_o *v388; // x2
  System_String_o *v389; // x3
  int32_t v390; // w4
  int32_t v391; // w5
  bool v392; // w6
  bool v393; // w7
  __int64 v394; // x8
  _QWORD *v395; // x9
  __int64 v396; // x10
  __int64 v397; // x8
  __int64 v398; // x2
  __int64 v399; // x1
  const MethodInfo *v400; // x2
  FollowerSelectItemListViewManager_c *v401; // x0
  const MethodInfo *v402; // x2
  const MethodInfo *v403; // x1
  struct UIScrollView_o *scrollView; // x8
  __int64 v405; // x2
  __int64 v406; // x3
  __int64 v407; // x0
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary; // [xsp+10h] [xbp-160h]
  UserFollowMaster_o *v409; // [xsp+50h] [xbp-120h]
  struct System_Collections_Generic_List_ListViewItem__o **p_recommendItemList; // [xsp+58h] [xbp-118h]
  bool v411; // [xsp+64h] [xbp-10Ch]
  unsigned int v412; // [xsp+68h] [xbp-108h]
  int pos; // [xsp+74h] [xbp-FCh]
  ClassBoardClassMaster_o *Master_object; // [xsp+80h] [xbp-F0h]
  ClassBoardClassMaster_o *v418; // [xsp+80h] [xbp-F0h]
  ClassBoardClassMaster_o *v419; // [xsp+80h] [xbp-F0h]
  struct System_Collections_Generic_List_ListViewItem__o **p_originalItemList; // [xsp+88h] [xbp-E8h]
  Il2CppObject *v421; // [xsp+90h] [xbp-E0h]
  __int64 v422; // [xsp+90h] [xbp-E0h]
  bool HasFlag_49492572; // [xsp+90h] [xbp-E0h]
  bool isReleasedClassBoard; // [xsp+98h] [xbp-D8h]
  bool v425[8]; // [xsp+98h] [xbp-D8h]
  bool v426[8]; // [xsp+98h] [xbp-D8h]
  int v427; // [xsp+A0h] [xbp-D0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v428; // [xsp+A8h] [xbp-C8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v429; // [xsp+A8h] [xbp-C8h]
  _BOOL4 followerInfo; // [xsp+B0h] [xbp-C0h]
  Il2CppClass *followerInfoa; // [xsp+B0h] [xbp-C0h]
  FollowerInfo_o *followerInfob; // [xsp+B0h] [xbp-C0h]
  int32_t index; // [xsp+B8h] [xbp-B8h]
  int32_t indexa; // [xsp+B8h] [xbp-B8h]
  int32_t indexb[2]; // [xsp+B8h] [xbp-B8h]
  struct System_Collections_Generic_List_ListViewItem__o **p_mixItemList; // [xsp+C0h] [xbp-B0h]
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o **p_followerSelectItemOption; // [xsp+C8h] [xbp-A8h]
  UserFollowMaster_o *v438; // [xsp+C8h] [xbp-A8h]
  Il2CppObject *v440; // [xsp+D8h] [xbp-98h] BYREF
  Il2CppObject *v441; // [xsp+E0h] [xbp-90h] BYREF
  Il2CppObject *v442; // [xsp+E8h] [xbp-88h] BYREF
  UserClassBoardSquareEntity_o *v443; // [xsp+F0h] [xbp-80h] BYREF
  bool isWhole; // [xsp+FCh] [xbp-74h] BYREF
  Il2CppObject *v445; // [xsp+100h] [xbp-70h] BYREF
  NpcFollowerEntity_o *entity; // [xsp+108h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v447; // 0:x0.16

  if ( (byte_596AFA9 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&ClassBoardInfo_TypeInfo);
    sub_2213A60(&ClassButtonControlComponent_TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserFollowerMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    sub_2213A60(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__);
    sub_2213A60(&Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&EventUpValSetupInfo_TypeInfo);
    sub_2213A60(&FollowerSelectItemListViewItem_TypeInfo);
    sub_2213A60(&Method_FollowerSelectItemListViewManager_OnChangeClass__);
    sub_2213A60(&FollowerSelectItemListViewManager_TypeInfo);
    sub_2213A60(&FollowerSelectItemListViewManager_FollowerSelectItemOption_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_ClassBoardInfo__TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ServantLeaderInfo___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&StringLiteral_3324/*"BonusFilterEventId"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596AFA9 = 1;
  }
  v445 = 0;
  entity = 0;
  isWhole = 0;
  v442 = 0;
  v443 = 0;
  v440 = 0;
  v441 = 0;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    *(System_String_o **)&questPhase,
    *(System_String_o **)&friendPointUpVal,
    friendPointUpMaxVal,
    (int32_t)friendPointCampaignEntityList,
    (bool)questRestrictionInfo,
    (bool)method);
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.mixItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v11;
  p_mixItemList = &this->fields.mixItemList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mixItemList, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.originalItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v18;
  p_originalItemList = &this->fields.originalItemList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.originalItemList,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.recommendItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v25;
  p_recommendItemList = &this->fields.recommendItemList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.recommendItemList,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.grandItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v32;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandItemList,
    (int32_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0);
  v42 = FollowerSelectItemListViewManager_TypeInfo;
  v412 = ReturnTypeByQuestId;
  if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v40, v41);
    v42 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v42->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT )
    goto LABEL_361;
  v44 = (struct ListViewSort_o *)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))LIST_VIEW_SORT->fields.invoke_impl)(
                                   LIST_VIEW_SORT->fields.method_code,
                                   v412,
                                   LIST_VIEW_SORT->fields.method);
  this->fields.sort = v44;
  p_sort = &this->fields.sort;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sort, (int32_t)v44, v46, v47, v48, v49, v50, v51);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_361;
  v52 = *(_DWORD *)(ReturnTypeByQuestId + 84);
  classButtonControl = this->fields.classButtonControl;
  v54 = (ClassButtonControlComponent_CallbackFunc_o *)sub_2213CCC(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v54,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0);
  if ( !classButtonControl )
    goto LABEL_361;
  pos = v52;
  ClassButtonControlComponent__init(classButtonControl, v54, questId, questPhase, questRestrictionInfo, v52, 0);
  if ( !*p_sort )
    goto LABEL_361;
  InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                          this,
                          questId,
                          questPhase,
                          (*p_sort)->fields.isRequestLoad,
                          v55);
  v59 = ClassButtonControlComponent_TypeInfo;
  static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  v61 = *(&ClassButtonControlComponent_TypeInfo->_2.cctor_finished + 1);
  static_fields->followerClassId = InitialDisplayClass;
  static_fields->lastSelectedQuestId = questId;
  static_fields->lastSelectedQuestPhase = questPhase;
  if ( !v61 )
    j_il2cpp_runtime_class_init_0(v59, v56, v57);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(InitialDisplayClass, 0) )
    this->fields.isGetRecommendSupport = 1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v62, v63);
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_361;
  OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                 (EventQuestMaster_o *)ReturnTypeByQuestId,
                                 questId,
                                 questPhase,
                                 0,
                                 0);
  v65 = (EventUpValSetupInfo_o *)sub_2213CCC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_48741124(v65, OngoingQuestTargetEventIds, 0, questId, questPhase, 0);
  this->fields.setupInfo = v65;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo, (int32_t)v65, v66, v67, v68, v69, v70, v71);
  ReturnTypeByQuestId = (__int64)this->fields.sort;
  if ( !ReturnTypeByQuestId )
    goto LABEL_361;
  ListViewSort__Load((ListViewSort_o *)ReturnTypeByQuestId, 0);
  if ( !OngoingQuestTargetEventIds )
    goto LABEL_361;
  if ( OngoingQuestTargetEventIds->max_length )
  {
    ReturnTypeByQuestId = (__int64)UnityEngine_PlayerPrefs__GetString_83398240((System_String_o *)StringLiteral_3324/*"BonusFilterEventId"*/, 0);
    if ( !ReturnTypeByQuestId )
      goto LABEL_361;
    if ( *(int *)(ReturnTypeByQuestId + 16) < 1 )
      goto LABEL_27;
    ReturnTypeByQuestId = (__int64)System_String__Split((System_String_o *)ReturnTypeByQuestId, 0x2Cu, 0, 0);
    if ( !ReturnTypeByQuestId )
      goto LABEL_361;
    v73 = *(_QWORD *)(ReturnTypeByQuestId + 24);
    v74 = ReturnTypeByQuestId;
    if ( (int)v73 < 1 )
    {
LABEL_27:
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_361;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 18, 0, 0);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_361;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 19, 0, 0);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_361;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 20, 0, 0);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_361;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 40, 1, 0);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_361;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 41, 1, 0);
    }
    else
    {
      v75 = 0;
      while ( 1 )
      {
        if ( v75 >= (unsigned int)v73 )
          goto LABEL_362;
        v76 = System_Int32__Parse(*(System_String_o **)(v74 + 32 + 8 * v75), 0);
        ReturnTypeByQuestId = System_Linq_Enumerable__Contains_int_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)OngoingQuestTargetEventIds,
                                v76,
                                (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (ReturnTypeByQuestId & 1) != 0 )
          break;
        LODWORD(v73) = *(_DWORD *)(v74 + 24);
        if ( (__int64)++v75 >= (int)v73 )
          goto LABEL_27;
      }
    }
  }
  ReturnTypeByQuestId = (__int64)FollowerSelectItemListViewManager_TypeInfo;
  v77 = *(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1);
  v78 = this->fields.classButtonControl;
  this->fields.isInput = 0;
  if ( !v77 )
    j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId, v40, v72);
  if ( !v78 )
    goto LABEL_361;
  ClassButtonControlComponent__setCursor(
    v78,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0);
  v79 = this;
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, OngoingQuestTargetEventIds, v80);
  ReturnTypeByQuestId = (__int64)this->fields.bonusFilterKindButton;
  if ( !ReturnTypeByQuestId )
    goto LABEL_361;
  ReturnTypeByQuestId = (__int64)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)ReturnTypeByQuestId,
                                   0);
  if ( !ReturnTypeByQuestId )
    goto LABEL_361;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)ReturnTypeByQuestId,
    this->fields.isBonusFilterEnable,
    0);
  if ( this->fields.isBonusFilterEnable )
  {
    ReturnTypeByQuestId = (__int64)this->fields.bonusFilterKindLabel;
    if ( !ReturnTypeByQuestId )
      goto LABEL_361;
    UILabel__set_text((UILabel_o *)ReturnTypeByQuestId, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  this->fields.isRefreshBtnHide = 0;
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_361;
  ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_361;
  v81 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)ReturnTypeByQuestId, questId, questPhase, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !v81 )
    goto LABEL_356;
  IsNoneSupportFriendPoint = QuestPhaseEntity__IsNoneSupportFriendPoint(v81, 0);
  ReturnTypeByQuestId = QuestPhaseEntity__IsUseGrandBoard(v81, 0);
  if ( (ReturnTypeByQuestId & 1) != 0 )
  {
    if ( !questRestrictionInfo )
      goto LABEL_361;
    v83 = QuestRestrictionInfo__get_ActiveGrandBoardCount(questRestrictionInfo, 0) < 1
       || QuestRestrictionInfo__IsGrandSelectableSupport(questRestrictionInfo, 0);
  }
  else
  {
    v83 = 0;
  }
  v84 = IsNoneSupportFriendPoint;
  v411 = v83;
  v85 = v83;
  v86 = sub_2213CCC(FollowerSelectItemListViewManager_FollowerSelectItemOption_TypeInfo);
  *(_BYTE *)(v86 + 64) = 1;
  System_Object___ctor((Il2CppObject *)v86, 0);
  *(_DWORD *)(v86 + 16) = friendPointUpVal;
  *(_DWORD *)(v86 + 20) = friendPointUpMaxVal;
  *(_QWORD *)(v86 + 24) = friendPointCampaignEntityList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v86 + 24),
    (int32_t)friendPointCampaignEntityList,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  *(_BYTE *)(v86 + 32) = this->fields.isBonusFilterEnable;
  *(_WORD *)(v86 + 33) = *(_WORD *)&this->fields.isServantBonusFilterEnable;
  setupInfo = this->fields.setupInfo;
  *(_QWORD *)(v86 + 40) = setupInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v86 + 40), (int32_t)setupInfo, v94, v95, v96, v97, v98, v99);
  *(_QWORD *)(v86 + 48) = questRestrictionInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v86 + 48),
    (int32_t)questRestrictionInfo,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  *(_BYTE *)(v86 + 65) = v84;
  *(_BYTE *)(v86 + 66) = v85;
  this->fields.followerSelectItemOption = (struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *)v86;
  p_followerSelectItemOption = &this->fields.followerSelectItemOption;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.followerSelectItemOption,
    v86,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111);
  v113 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v113 + 309) & 1) == 0 )
    v113 = sub_224B908(v112);
  v114 = *(_QWORD *)(*(_QWORD *)(v113 + 192) + 16LL);
  if ( (*(_WORD *)(v114 + 309) & 1) == 0 )
    v114 = sub_224B908(v112);
  ReturnTypeByQuestId = **(_QWORD **)(v114 + 184);
  if ( !ReturnTypeByQuestId
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)ReturnTypeByQuestId,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_NpcFollowerMaster___),
        (ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_NpcFollowerMaster___)) == 0
    || (QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                              (NpcFollowerMaster_o *)ReturnTypeByQuestId,
                              questId,
                              questPhase,
                              0),
        (ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
  {
LABEL_361:
    sub_2213CDC(ReturnTypeByQuestId, v40);
  }
  if ( *(int *)(ReturnTypeByQuestId + 80) >= 1 )
  {
    v40 = (unsigned int)pos;
    if ( questRestrictionInfo )
    {
      IsMyServantOrNpcRestriction_50456184 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_50456184(
                                               questRestrictionInfo,
                                               pos,
                                               0);
LABEL_64:
      followerInfo = 0;
      goto LABEL_65;
    }
LABEL_63:
    IsMyServantOrNpcRestriction_50456184 = 0;
    goto LABEL_64;
  }
  if ( !questRestrictionInfo )
    goto LABEL_63;
  IsMyServantOrNpcRestriction_50456184 = 0;
  followerInfo = QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0);
LABEL_65:
  v119 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v40, v117);
    v119 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v119->static_fields->ClassBoardReleaseQuestId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v40, v117);
  IsQuestClear_47284152 = CondType__IsQuestClear_47284152(ClassBoardReleaseQuestId, -1, 0, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v121, v122);
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v428 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
  if ( !QuestFollowerList )
    goto LABEL_361;
  max_length = QuestFollowerList->max_length;
  if ( max_length >= 1 )
  {
    index = 0;
    v126 = 0;
    v421 = MasterData_object;
    isReleasedClassBoard = IsQuestClear_47284152;
    do
    {
      if ( v126 >= (unsigned int)max_length )
        goto LABEL_362;
      if ( !questRestrictionInfo )
        goto LABEL_361;
      v127 = QuestFollowerList->m_Items[v126];
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
      if ( !v127 )
        goto LABEL_361;
      ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v127, 0, ReturnTypeByQuestId, 0);
      v129 = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
      ReturnTypeByQuestId = (__int64)FollowerInfo__GetNpcServantIndividualityFull(v127, 0, v129, 0);
      if ( !ServantLeaderInfo )
        goto LABEL_361;
      v130 = (System_Int32_array *)ReturnTypeByQuestId;
      Rarity = ServantLeaderInfo__getRarity(ServantLeaderInfo, 0);
      ReturnTypeByQuestId = QuestRestrictionInfo__IsRestriction_50437900(
                              questRestrictionInfo,
                              &isWhole,
                              v130,
                              Rarity,
                              ServantLeaderInfo->fields.lv,
                              pos,
                              3,
                              0);
      if ( (ReturnTypeByQuestId & 1) != 0 )
        goto LABEL_119;
      if ( IsMyServantOrNpcRestriction_50456184 )
      {
        ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality_50459340(
                                questRestrictionInfo,
                                v130,
                                pos,
                                0);
        if ( (ReturnTypeByQuestId & 1) != 0 )
          goto LABEL_119;
      }
      if ( v127->fields.isFixedNpc || followerInfo && v127->fields.isMySvtOrNpc )
        goto LABEL_119;
      if ( !MasterData_object )
        goto LABEL_361;
      if ( NpcFollowerMaster__TryGetEntity(
             (NpcFollowerMaster_o *)MasterData_object,
             &entity,
             v127->fields.userId,
             questId,
             questPhase,
             0) )
      {
        ReturnTypeByQuestId = (__int64)entity;
        if ( !entity )
          goto LABEL_361;
        IsRecommendedFollower = NpcFollowerEntity__IsRecommendedFollower(entity, 0);
      }
      else
      {
        IsRecommendedFollower = 0;
      }
      v133 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ClassBoardInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v133,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
      ReturnTypeByQuestId = (__int64)v428;
      if ( !v428 )
        goto LABEL_361;
      ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetEntity(
                              v428,
                              &v445,
                              v127->fields.npcFollowerSvtId,
                              (const MethodInfo_3F131DC *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
      if ( (ReturnTypeByQuestId & 1) != 0 )
      {
        if ( !v445 )
          goto LABEL_361;
        ReturnTypeByQuestId = NpcServantFollowerEntity__IsNotClassBoard((int32_t)v445[7].monitor, 0);
        if ( (ReturnTypeByQuestId & 1) != 0
          || (ReturnTypeByQuestId = QuestPhaseEntity__IsNotClassBoard(v81, 0), (ReturnTypeByQuestId & 1) != 0) )
        {
          v135 = IsRecommendedFollower;
          v136 = 1;
          goto LABEL_97;
        }
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v40, v134);
        Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
        v182 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
        v186 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        v185 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
        v187 = (DataMasterBase_TMaster__TEntity__PKType__o *)v182;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v183, v184);
        *(_QWORD *)&v447.fields.currentCryptoKey = v186;
        *(_QWORD *)&v447.fields.fakeValue = v185;
        ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v447, 0);
        if ( !v187 )
          goto LABEL_361;
        v135 = IsRecommendedFollower;
        ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         v187,
                                         ReturnTypeByQuestId,
                                         (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !ReturnTypeByQuestId || !Master_object )
          goto LABEL_361;
        ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(
                             Master_object,
                             *(_DWORD *)(ReturnTypeByQuestId + 80),
                             0);
        v190 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40, v189);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        ReturnTypeByQuestId = (__int64)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40, v189);
          ReturnTypeByQuestId = (__int64)NetworkManager_TypeInfo;
        }
        if ( !v190 )
          goto LABEL_361;
        ReturnTypeByQuestId = UserClassBoardSquareMaster__TryGetEntity(
                                (UserClassBoardSquareMaster_o *)v190,
                                &v443,
                                *(_QWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 64LL),
                                ClassBoardBaseId,
                                0);
        if ( (ReturnTypeByQuestId & 1) != 0 )
        {
          v191 = sub_2213CCC(ClassBoardInfo_TypeInfo);
          ClassBoardInfo___ctor((ClassBoardInfo_o *)v191, 0);
          if ( !v191 )
            goto LABEL_361;
          v192 = v443;
          *(_DWORD *)(v191 + 16) = ClassBoardBaseId;
          if ( !v192 )
            goto LABEL_361;
          ReturnTypeByQuestId = (__int64)v192->fields.classBoardSquareIds;
          if ( !ReturnTypeByQuestId )
            goto LABEL_361;
          v193 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0);
          v194 = sub_2213BB4(v193, int___TypeInfo);
          v195 = int___TypeInfo;
          *(_QWORD *)(v191 + 24) = v194;
          v196 = sub_2213BB4(v193, v195);
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v191 + 24), v196, v197, v198, v199, v200, v201, v202);
          OpenClassIdArrayFromBaseId = ClassBoardClassMaster__GetOpenClassIdArrayFromBaseId(
                                         Master_object,
                                         ClassBoardBaseId,
                                         0);
          *(_QWORD *)(v191 + 32) = OpenClassIdArrayFromBaseId;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(v191 + 32),
            (int32_t)OpenClassIdArrayFromBaseId,
            v204,
            v205,
            v206,
            v207,
            v208,
            v209);
          if ( !v133 )
            goto LABEL_361;
          items = v133->fields._items;
          v137 = this;
          v217 = Method_System_Collections_Generic_List_ClassBoardInfo__Add__;
          ++v133->fields._version;
          if ( !items )
            goto LABEL_361;
          size = v133->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v133,
              (Il2CppObject *)v191,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v217[4] + 192LL) + 112LL));
          }
          else
          {
            v219 = &items->obj.klass + size;
            v133->fields._size = size + 1;
            v219[4] = (Il2CppClass *)v191;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v219 + 4), v191, v210, v211, v212, v213, v214, v215);
          }
          v136 = 0;
          goto LABEL_98;
        }
      }
      else
      {
        v135 = IsRecommendedFollower;
      }
      v136 = 0;
LABEL_97:
      v137 = this;
      if ( !v133 )
        goto LABEL_361;
LABEL_98:
      v138 = System_Collections_Generic_List_object___ToArray(
               v133,
               (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
      v127->fields.userClassBoardInfo = (struct ClassBoardInfo_array *)v138;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v127->fields.userClassBoardInfo,
        (int32_t)v138,
        v139,
        v140,
        v141,
        v142,
        v143,
        v144);
      v147 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v145, v146);
        v147 = FollowerSelectItemListViewManager_TypeInfo;
      }
      followerClassId = v147->static_fields->followerClassId;
      v149 = *p_followerSelectItemOption;
      if ( (v136 & 1) != 0 )
        classBoardMaxDictionary = 0;
      else
        classBoardMaxDictionary = v137->fields.classBoardMaxDictionary;
      v151 = (FollowerSelectItemListViewItem_o *)sub_2213CCC(FollowerSelectItemListViewItem_TypeInfo);
      FollowerSelectItemListViewItem___ctor(
        v151,
        index,
        0,
        v127,
        followerClassId,
        v135,
        v149,
        0,
        0,
        0,
        classBoardMaxDictionary,
        isReleasedClassBoard,
        0,
        0,
        0,
        0,
        0);
      ReturnTypeByQuestId = (__int64)*p_mixItemList;
      if ( !*p_mixItemList )
        goto LABEL_361;
      v158 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      v159 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      MasterData_object = v421;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v158 )
        goto LABEL_361;
      v160 = *(int *)(ReturnTypeByQuestId + 24);
      if ( (unsigned int)v160 >= *(_DWORD *)(v158 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v151,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
      }
      else
      {
        v161 = v158 + 8 * v160;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v160 + 1;
        *(_QWORD *)(v161 + 32) = v151;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v161 + 32), (int32_t)v151, v152, v153, v154, v155, v156, v157);
      }
      ReturnTypeByQuestId = (__int64)*p_originalItemList;
      if ( !*p_originalItemList )
        goto LABEL_361;
      v168 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      v169 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v168 )
        goto LABEL_361;
      v170 = *(int *)(ReturnTypeByQuestId + 24);
      if ( (unsigned int)v170 >= *(_DWORD *)(v168 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v151,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
      }
      else
      {
        v171 = v168 + 8 * v170;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v170 + 1;
        *(_QWORD *)(v171 + 32) = v151;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v171 + 32), (int32_t)v151, v162, v163, v164, v165, v166, v167);
      }
      ReturnTypeByQuestId = (__int64)*p_recommendItemList;
      if ( !*p_recommendItemList )
        goto LABEL_361;
      v178 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      v179 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v178 )
        goto LABEL_361;
      v180 = *(int *)(ReturnTypeByQuestId + 24);
      if ( (unsigned int)v180 >= *(_DWORD *)(v178 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v151,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
      }
      else
      {
        v181 = v178 + 8 * v180;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v180 + 1;
        *(_QWORD *)(v181 + 32) = v151;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v181 + 32), (int32_t)v151, v172, v173, v174, v175, v176, v177);
      }
      ++index;
LABEL_119:
      max_length = QuestFollowerList->max_length;
      ++v126;
    }
    while ( v126 < max_length );
  }
  if ( questRestrictionInfo )
  {
    v79 = this;
    v220 = v81;
    if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0) )
      goto LABEL_150;
    ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_361;
    if ( *(int *)(ReturnTypeByQuestId + 80) >= 1 )
      v221 = !QuestRestrictionInfo__IsSelectableNormalSupport(questRestrictionInfo, pos, 0);
    else
LABEL_150:
      v221 = 0;
  }
  else
  {
    v79 = this;
    v221 = 0;
    v220 = v81;
  }
  v79->fields.isRefreshBtnHide = v221;
  if ( !v221 && !v220->fields.isNpcOnly )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v40, v124);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_361;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v442,
                            (const MethodInfo_3F132BC *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v442 )
        goto LABEL_361;
      followerInfoa = v442[1].klass;
      if ( followerInfoa )
      {
        namespaze_low = LODWORD(followerInfoa->_1.namespaze);
        if ( (int)namespaze_low >= 1 )
        {
          v224 = 0;
          do
          {
            if ( v224 >= namespaze_low )
              goto LABEL_362;
            v225 = &followerInfoa->_1.image + v224;
            v226 = v225[4];
            v429 = (DataMasterBase_TMaster__TEntity__PKType__o *)(v225 + 4);
            if ( !v226 )
              goto LABEL_361;
            ReturnTypeByQuestId = v226[15];
            if ( !ReturnTypeByQuestId )
              goto LABEL_361;
            v418 = *(ClassBoardClassMaster_o **)(ReturnTypeByQuestId + 24);
            v227 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0);
            if ( v227 )
            {
              v230 = (Il2CppClass *)v227;
              v231 = int___TypeInfo;
              v233 = sub_2213BB4(v227, int___TypeInfo);
              if ( !v233 )
              {
                sub_221405C(v230, v231, v229, v232);
LABEL_363:
                ReturnTypeByQuestId = sub_221405C(v224, v230, v405, v406);
LABEL_364:
                v407 = sub_2213D00(ReturnTypeByQuestId, v378);
                sub_2213BA0(v407, 0);
              }
            }
            else
            {
              v233 = 0;
            }
            v234 = BalanceConfig_TypeInfo;
            if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v228, v229);
              v234 = BalanceConfig_TypeInfo;
            }
            v235 = v234->static_fields;
            FixMainSupportDeckNum = v235->FixMainSupportDeckNum;
            FixEventSupportDeckNum = v235->FixEventSupportDeckNum;
            if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v228, v229);
            ReturnTypeByQuestId = System_Math__Max_77153260(FixMainSupportDeckNum, FixEventSupportDeckNum, 0);
            if ( (int)v418 >= 1 )
            {
              deckPriority = ReturnTypeByQuestId;
              v239 = 0;
              do
              {
                if ( !*p_originalItemList )
                  goto LABEL_361;
                if ( v224 >= LODWORD(followerInfoa->_1.namespaze) )
                  goto LABEL_362;
                if ( !v233 )
                  goto LABEL_361;
                if ( v239 >= *(unsigned int *)(v233 + 24) )
                  goto LABEL_362;
                v240 = (*p_originalItemList)->fields._size;
                klass = (FollowerInfo_o *)v429->klass;
                v242 = *p_followerSelectItemOption;
                v243 = this->fields.classBoardMaxDictionary;
                supportDeckId = *(_DWORD *)(v233 + 32 + 4 * v239);
                v245 = (FollowerSelectItemListViewItem_o *)sub_2213CCC(FollowerSelectItemListViewItem_TypeInfo);
                FollowerSelectItemListViewItem___ctor(
                  v245,
                  v240,
                  0,
                  klass,
                  0,
                  0,
                  v242,
                  1,
                  supportDeckId,
                  deckPriority,
                  v243,
                  1,
                  0,
                  0,
                  0,
                  0,
                  0);
                ReturnTypeByQuestId = (__int64)this->fields.originalItemList;
                if ( !ReturnTypeByQuestId )
                  goto LABEL_361;
                v252 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v253 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v252 )
                  goto LABEL_361;
                v254 = *(int *)(ReturnTypeByQuestId + 24);
                if ( (unsigned int)v254 >= *(_DWORD *)(v252 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    (Il2CppObject *)v245,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v253[4] + 192LL) + 112LL));
                }
                else
                {
                  v255 = v252 + 8 * v254;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v254 + 1;
                  *(_QWORD *)(v255 + 32) = v245;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)(v255 + 32),
                    (int32_t)v245,
                    v246,
                    v247,
                    v248,
                    v249,
                    v250,
                    v251);
                }
                ++v239;
                --deckPriority;
              }
              while ( (unsigned int)v418 != v239 );
            }
            indexa = 0;
            *(_QWORD *)v425 = v233 + 32;
            v422 = v233;
            while ( 1 )
            {
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v40, v222);
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              }
              v256 = *(struct BalanceConfig_StaticFields **)(ReturnTypeByQuestId + 184);
              if ( indexa >= v256->SupportDeckMemberMax )
                break;
              if ( !*(_DWORD *)(ReturnTypeByQuestId + 228) )
              {
                j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId, v40, v222);
                v256 = BalanceConfig_TypeInfo->static_fields;
              }
              v257 = v256->FixMainSupportDeckNum;
              v258 = v256->FixEventSupportDeckNum;
              if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v40, v222);
              ReturnTypeByQuestId = System_Math__Max_77153260(v257, v258, 0);
              if ( (int)v418 >= 1 )
              {
                v259 = ReturnTypeByQuestId;
                v260 = 0;
                while ( *p_mixItemList )
                {
                  ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                  v261 = (*p_mixItemList)->fields._size;
                  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v40, v222);
                    ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( v224 >= LODWORD(followerInfoa->_1.namespaze) )
                    goto LABEL_362;
                  if ( !v233 )
                    goto LABEL_361;
                  if ( v260 >= *(unsigned int *)(v233 + 24) )
                    goto LABEL_362;
                  v262 = (FollowerInfo_o *)v429->klass;
                  v263 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 180LL);
                  v264 = *(_DWORD *)(*(_QWORD *)v425 + 4 * v260);
                  v265 = *p_followerSelectItemOption;
                  v266 = this->fields.classBoardMaxDictionary;
                  v267 = (FollowerSelectItemListViewItem_o *)sub_2213CCC(FollowerSelectItemListViewItem_TypeInfo);
                  FollowerSelectItemListViewItem___ctor(
                    v267,
                    v261,
                    v263 - indexa,
                    v262,
                    indexa,
                    0,
                    v265,
                    1,
                    v264,
                    v259,
                    v266,
                    1,
                    0,
                    0,
                    0,
                    0,
                    0);
                  ReturnTypeByQuestId = (__int64)this->fields.mixItemList;
                  if ( !ReturnTypeByQuestId )
                    goto LABEL_361;
                  v274 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                  v275 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                  if ( !v274 )
                    goto LABEL_361;
                  v276 = *(int *)(ReturnTypeByQuestId + 24);
                  if ( (unsigned int)v276 >= *(_DWORD *)(v274 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                      (Il2CppObject *)v267,
                      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v275[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v277 = v274 + 8 * v276;
                    *(_DWORD *)(ReturnTypeByQuestId + 24) = v276 + 1;
                    *(_QWORD *)(v277 + 32) = v267;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)(v277 + 32),
                      (int32_t)v267,
                      v268,
                      v269,
                      v270,
                      v271,
                      v272,
                      v273);
                  }
                  ++v260;
                  v233 = v422;
                  --v259;
                  if ( (unsigned int)v418 == v260 )
                    goto LABEL_207;
                }
                goto LABEL_361;
              }
LABEL_207:
              ++indexa;
            }
            ++v224;
            v79 = this;
            namespaze_low = LODWORD(followerInfoa->_1.namespaze);
          }
          while ( (int)v224 < (int)namespaze_low );
        }
      }
    }
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v40, v222);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_361;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v441,
                            (const MethodInfo_3F132BC *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v441 )
        goto LABEL_361;
      v279 = v441[1].klass;
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_361;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !ReturnTypeByQuestId )
        goto LABEL_361;
      ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                       questId,
                                       (const MethodInfo_3F10B30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_361;
      HasFlag_49492572 = QuestEntity__HasFlag_49492572((QuestEntity_o *)ReturnTypeByQuestId, 0x8000000, questPhase, 0);
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_361;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserFollowMaster___);
      v409 = (UserFollowMaster_o *)ReturnTypeByQuestId;
      if ( !v279 )
        goto LABEL_361;
      namespaze = v279->_1.namespaze;
      if ( (int)namespaze >= 1 )
      {
        v281 = 0;
        v282 = 0;
        v419 = (ClassBoardClassMaster_o *)v279;
        do
        {
          if ( v282 >= (unsigned int)namespaze )
            goto LABEL_362;
          v283 = (FollowerInfo_o *)*((_QWORD *)&v279->_1.byval_arg.data + v282);
          if ( HasFlag_49492572 )
          {
            if ( !v283 )
              goto LABEL_361;
            if ( v283->fields.type == 5 )
            {
              ReturnTypeByQuestId = (__int64)v409;
              if ( !v409 )
                goto LABEL_361;
              ReturnTypeByQuestId = UserFollowMaster__IsFollowUser(v409, v283->fields.userId, 0);
              if ( (ReturnTypeByQuestId & 1) == 0 )
                goto LABEL_296;
            }
          }
          else
          {
            if ( !v283 )
              goto LABEL_361;
            if ( v283->fields.type == 5 )
              goto LABEL_296;
          }
          sub_2213B20(int___TypeInfo, 0);
          if ( v412 )
          {
            ReturnTypeByQuestId = (__int64)v283->fields.eventSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_361;
          }
          else
          {
            ReturnTypeByQuestId = (__int64)v283->fields.mainSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_361;
          }
          *(_QWORD *)indexb = *(unsigned int *)(ReturnTypeByQuestId + 24);
          v284 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0);
          if ( v284 )
          {
            v224 = (unsigned __int64)v284;
            v230 = int___TypeInfo;
            v286 = sub_2213BB4(v284, int___TypeInfo);
            if ( !v286 )
              goto LABEL_363;
          }
          else
          {
            v286 = 0;
          }
          v287 = BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v285, v405);
            v287 = BalanceConfig_TypeInfo;
          }
          v288 = v287->static_fields;
          v289 = v288->FixMainSupportDeckNum;
          v290 = v288->FixEventSupportDeckNum;
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v285, v405);
          *(_QWORD *)v426 = v282;
          v427 = v281;
          ReturnTypeByQuestId = System_Math__Max_77153260(v289, v290, 0);
          v291 = ReturnTypeByQuestId;
          if ( indexb[0] >= 1 )
          {
            v292 = this;
            v293 = 0;
            while ( 1 )
            {
              if ( !*p_originalItemList || !v286 )
                goto LABEL_361;
              if ( v293 >= *(unsigned int *)(v286 + 24) )
                break;
              v294 = (*p_originalItemList)->fields._size;
              v295 = *(_DWORD *)(v286 + 32 + 4 * v293);
              v296 = v292->fields.classBoardMaxDictionary;
              v297 = *p_followerSelectItemOption;
              v298 = (FollowerSelectItemListViewItem_o *)sub_2213CCC(FollowerSelectItemListViewItem_TypeInfo);
              FollowerSelectItemListViewItem___ctor(
                v298,
                v294,
                0,
                v283,
                0,
                0,
                v297,
                0,
                v295,
                v291,
                v296,
                1,
                0,
                0,
                0,
                0,
                0);
              ReturnTypeByQuestId = (__int64)v292->fields.originalItemList;
              if ( !ReturnTypeByQuestId )
                goto LABEL_361;
              v305 = *(_QWORD *)(ReturnTypeByQuestId + 16);
              ++*(_DWORD *)(ReturnTypeByQuestId + 28);
              if ( !v305 )
                goto LABEL_361;
              v306 = *(int *)(ReturnTypeByQuestId + 24);
              if ( (unsigned int)v306 >= *(_DWORD *)(v305 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                  (Il2CppObject *)v298,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(*((_QWORD *)Method_System_Collections_Generic_List_ListViewItem__Add__
                                                             + 4)
                                                           + 192LL)
                                               + 112LL));
              }
              else
              {
                v307 = v305 + 8 * v306;
                *(_DWORD *)(ReturnTypeByQuestId + 24) = v306 + 1;
                *(_QWORD *)(v307 + 32) = v298;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)(v307 + 32),
                  (int32_t)v298,
                  v299,
                  v300,
                  v301,
                  v302,
                  v303,
                  v304);
              }
              ++v293;
              v292 = this;
              --v291;
              if ( *(_QWORD *)indexb == v293 )
                goto LABEL_253;
            }
LABEL_362:
            sub_2213CE4(ReturnTypeByQuestId);
          }
LABEL_253:
          v308 = 0;
          followerInfob = v283;
          while ( 1 )
          {
            v309 = BalanceConfig_TypeInfo;
            if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v40, v278);
              v309 = BalanceConfig_TypeInfo;
            }
            v310 = v309->static_fields;
            if ( v308 >= v310->SupportDeckMemberMax )
              break;
            if ( !*(&v309->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v309, v40, v278);
              v310 = BalanceConfig_TypeInfo->static_fields;
            }
            v311 = v310->FixMainSupportDeckNum;
            v312 = v310->FixEventSupportDeckNum;
            if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v40, v278);
            ReturnTypeByQuestId = System_Math__Max_77153260(v311, v312, 0);
            v291 = ReturnTypeByQuestId;
            if ( indexb[0] >= 1 )
            {
              v313 = 0;
              while ( *p_mixItemList )
              {
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                v314 = (*p_mixItemList)->fields._size;
                if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v40, v278);
                  ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                }
                if ( !v286 )
                  break;
                if ( v313 >= *(unsigned int *)(v286 + 24) )
                  goto LABEL_362;
                v315 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 180LL);
                v316 = *p_followerSelectItemOption;
                v317 = this->fields.classBoardMaxDictionary;
                v318 = *(_DWORD *)(v286 + 32 + 4 * v313);
                v319 = (FollowerSelectItemListViewItem_o *)sub_2213CCC(FollowerSelectItemListViewItem_TypeInfo);
                v320 = v315 - v308;
                v283 = followerInfob;
                v321 = (Il2CppObject *)v319;
                FollowerSelectItemListViewItem___ctor(
                  v319,
                  v314,
                  v320,
                  followerInfob,
                  v308,
                  0,
                  v316,
                  0,
                  v318,
                  v291,
                  v317,
                  1,
                  0,
                  0,
                  0,
                  0,
                  0);
                ReturnTypeByQuestId = (__int64)this->fields.mixItemList;
                if ( !ReturnTypeByQuestId )
                  break;
                v328 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v329 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v328 )
                  break;
                v330 = *(int *)(ReturnTypeByQuestId + 24);
                if ( (unsigned int)v330 >= *(_DWORD *)(v328 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    v321,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v329[4] + 192LL) + 112LL));
                }
                else
                {
                  v331 = v328 + 8 * v330;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v330 + 1;
                  *(_QWORD *)(v331 + 32) = v321;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)(v331 + 32),
                    (int32_t)v321,
                    v322,
                    v323,
                    v324,
                    v325,
                    v326,
                    v327);
                }
                ++v313;
                --v291;
                if ( *(_QWORD *)indexb == v313 )
                  goto LABEL_274;
              }
              goto LABEL_361;
            }
LABEL_274:
            ++v308;
          }
          v79 = this;
          if ( v411 && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v283->fields.userSvtGrandHash, 0) )
          {
            v40 = (unsigned int)pos;
            if ( pos < 1 )
            {
              ReturnTypeByQuestId = 0;
            }
            else
            {
              ReturnTypeByQuestId = (__int64)questRestrictionInfo;
              if ( !questRestrictionInfo )
                goto LABEL_361;
              ReturnTypeByQuestId = QuestRestrictionInfo__IsGrandServantRestriction(questRestrictionInfo, pos, 0);
            }
            userSvtGrandHash = v283->fields.userSvtGrandHash;
            if ( !userSvtGrandHash )
              goto LABEL_361;
            v333 = userSvtGrandHash->max_length;
            if ( v333 >= 1 )
            {
              v334 = 0;
              isGrandServantRestriction = ReturnTypeByQuestId & 1;
              while ( v334 < (unsigned int)v333 )
              {
                if ( !*p_mixItemList )
                  goto LABEL_361;
                v336 = userSvtGrandHash->m_Items[v334];
                if ( !v336 )
                  goto LABEL_361;
                v337 = (*p_mixItemList)->fields._size;
                v338 = v79->fields.classBoardMaxDictionary;
                followerSelectItemOption = v79->fields.followerSelectItemOption;
                grandGraphId = v336->fields.grandGraphId;
                v341 = v79;
                v342 = (FollowerSelectItemListViewItem_o *)sub_2213CCC(FollowerSelectItemListViewItem_TypeInfo);
                FollowerSelectItemListViewItem___ctor(
                  v342,
                  v337,
                  0,
                  followerInfob,
                  0,
                  0,
                  followerSelectItemOption,
                  0,
                  0,
                  v291,
                  v338,
                  1,
                  0,
                  1,
                  grandGraphId,
                  isGrandServantRestriction,
                  0);
                ReturnTypeByQuestId = (__int64)v341->fields.grandItemList;
                if ( !ReturnTypeByQuestId )
                  goto LABEL_361;
                v349 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v349 )
                  goto LABEL_361;
                v350 = *(int *)(ReturnTypeByQuestId + 24);
                if ( (unsigned int)v350 >= *(_DWORD *)(v349 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    (Il2CppObject *)v342,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(*((_QWORD *)Method_System_Collections_Generic_List_ListViewItem__Add__
                                                               + 4)
                                                             + 192LL)
                                                 + 112LL));
                }
                else
                {
                  v351 = v349 + 8 * v350;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v350 + 1;
                  *(_QWORD *)(v351 + 32) = v342;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)(v351 + 32),
                    (int32_t)v342,
                    v343,
                    v344,
                    v345,
                    v346,
                    v347,
                    v348);
                }
                v333 = userSvtGrandHash->max_length;
                ++v334;
                v79 = this;
                if ( v334 >= v333 )
                  goto LABEL_293;
              }
              goto LABEL_362;
            }
          }
LABEL_293:
          ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v40, v278);
            ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
          }
          v279 = (Il2CppClass *)v419;
          v282 = *(_QWORD *)v426;
          v281 = v427 + 1;
          if ( v427 + 1 >= *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 716LL) )
            break;
LABEL_296:
          LODWORD(namespaze) = v279->_1.namespaze;
          ++v282;
        }
        while ( (__int64)v282 < (int)namespaze );
      }
    }
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v40, v278);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_361;
    if ( DataMasterBase_object__object__long___TryGetSingleEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
           &v440,
           (const MethodInfo_3F132BC *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    {
      ReturnTypeByQuestId = (__int64)v440;
      if ( !v440 )
        goto LABEL_361;
      ReturnTypeByQuestId = UserRecommendFollowerEntity__IsEnableSupport(
                              (UserRecommendFollowerEntity_o *)v440,
                              questId,
                              questPhase,
                              0);
      if ( (ReturnTypeByQuestId & 1) != 0 )
      {
        if ( !v440 )
          goto LABEL_361;
        v352 = v440[1].klass;
        ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_361;
        ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !ReturnTypeByQuestId )
          goto LABEL_361;
        ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                         questId,
                                         (const MethodInfo_3F10B30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_361;
        v353 = QuestEntity__HasFlag_49492572((QuestEntity_o *)ReturnTypeByQuestId, 0x8000000, questPhase, 0);
        ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_361;
        ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserFollowMaster___);
        v438 = (UserFollowMaster_o *)ReturnTypeByQuestId;
        if ( !v352 )
          goto LABEL_361;
        v354 = v352->_1.namespaze;
        v355 = v411;
        if ( (int)v354 >= 1 )
        {
          for ( i = 0; i < (int)v354; ++i )
          {
            if ( i >= (unsigned __int64)(unsigned int)v354 )
              goto LABEL_362;
            v357 = *((_QWORD *)&v352->_1.byval_arg.data + i);
            if ( v353 )
            {
              if ( !v357 )
                goto LABEL_361;
              if ( *(_DWORD *)(v357 + 36) == 5 )
              {
                ReturnTypeByQuestId = (__int64)v438;
                if ( !v438 )
                  goto LABEL_361;
                ReturnTypeByQuestId = UserFollowMaster__IsFollowUser(v438, *(_QWORD *)(v357 + 16), 0);
                v355 = v411;
                if ( (ReturnTypeByQuestId & 1) == 0 )
                  goto LABEL_355;
              }
            }
            else
            {
              if ( !v357 )
                goto LABEL_361;
              if ( *(_DWORD *)(v357 + 36) == 5 )
                goto LABEL_355;
            }
            if ( v355
              && (ReturnTypeByQuestId = BasicHelper__IsNullOrEmpty(
                                          *(System_Collections_ICollection_o **)(v357 + 144),
                                          0),
                  (ReturnTypeByQuestId & 1) == 0) )
            {
              v367 = *(_QWORD *)(v357 + 56);
              if ( !v367 )
                goto LABEL_361;
              if ( !*(_DWORD *)(v367 + 24) )
                goto LABEL_362;
              v368 = *(_QWORD *)(v367 + 32);
              if ( !v368 )
                goto LABEL_361;
              v369 = *(_QWORD *)(v368 + 56);
              if ( !v369 )
                goto LABEL_361;
              v370 = *(_QWORD *)(v357 + 144);
              if ( !v370 )
                goto LABEL_361;
              v371 = *(_DWORD *)(v370 + 24);
              if ( v371 < 1 )
              {
                v373 = 0;
LABEL_336:
                v366 = 0;
              }
              else
              {
                v372 = *(_QWORD *)(v369 + 40);
                v373 = 0;
                while ( 1 )
                {
                  if ( v371 == v373 )
                    goto LABEL_362;
                  v374 = *(_QWORD *)(v370 + 8LL * v373 + 32);
                  if ( !v374 )
                    goto LABEL_361;
                  if ( v372 == *(_QWORD *)(v374 + 40) )
                    break;
                  if ( (v371 & ~(v371 >> 31)) == ++v373 )
                    goto LABEL_336;
                }
                v366 = *(_DWORD *)(v374 + 268);
              }
              isGrandSupport = v373 < v371;
              ReturnTypeByQuestId = sub_2213B20(ServantLeaderInfo___TypeInfo, 1);
              v364 = ReturnTypeByQuestId;
            }
            else
            {
              ReturnTypeByQuestId = sub_2213B20(ServantLeaderInfo___TypeInfo, 1);
              v364 = ReturnTypeByQuestId;
              isGrandSupport = 0;
              v366 = 0;
            }
            v375 = *(_QWORD *)(v357 + 56);
            if ( !v375 )
              goto LABEL_361;
            if ( !*(_DWORD *)(v375 + 24) )
              goto LABEL_362;
            v376 = *(_QWORD *)(v375 + 32);
            if ( !v376 || !v364 )
              goto LABEL_361;
            v377 = *(_QWORD *)(v376 + 56);
            if ( v377 )
            {
              ReturnTypeByQuestId = sub_2213BB4(v377, *(_QWORD *)(*(_QWORD *)v364 + 64LL));
              if ( !ReturnTypeByQuestId )
                goto LABEL_364;
            }
            if ( !*(_DWORD *)(v364 + 24) )
              goto LABEL_362;
            *(_QWORD *)(v364 + 32) = v377;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v364 + 32), v377, v358, v359, v360, v361, v362, v363);
            *(_QWORD *)(v357 + 40) = v364;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v357 + 40), v364, v379, v380, v381, v382, v383, v384);
            if ( !*p_recommendItemList )
              goto LABEL_361;
            v385 = (*p_recommendItemList)->fields._size;
            v386 = v79->fields.followerSelectItemOption;
            classBoardMaxNumDictionary = this->fields.classBoardMaxDictionary;
            v79 = this;
            v387 = (FollowerSelectItemListViewItem_o *)sub_2213CCC(FollowerSelectItemListViewItem_TypeInfo);
            FollowerSelectItemListViewItem___ctor(
              v387,
              v385,
              0,
              (FollowerInfo_o *)v357,
              0,
              0,
              v386,
              0,
              0,
              0,
              classBoardMaxNumDictionary,
              1,
              1,
              isGrandSupport,
              v366,
              0,
              0);
            ReturnTypeByQuestId = (__int64)this->fields.recommendItemList;
            if ( !ReturnTypeByQuestId )
              goto LABEL_361;
            v394 = *(_QWORD *)(ReturnTypeByQuestId + 16);
            v395 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++*(_DWORD *)(ReturnTypeByQuestId + 28);
            if ( !v394 )
              goto LABEL_361;
            v396 = *(int *)(ReturnTypeByQuestId + 24);
            if ( (unsigned int)v396 >= *(_DWORD *)(v394 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                (Il2CppObject *)v387,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v395[4] + 192LL) + 112LL));
            }
            else
            {
              v397 = v394 + 8 * v396;
              *(_DWORD *)(ReturnTypeByQuestId + 24) = v396 + 1;
              *(_QWORD *)(v397 + 32) = v387;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v397 + 32),
                (int32_t)v387,
                v388,
                v389,
                v390,
                v391,
                v392,
                v393);
            }
            v355 = v411;
            ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v40, v398);
              v355 = v411;
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            }
            if ( i >= *(int *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 716LL) )
              break;
LABEL_355:
            LODWORD(v354) = v352->_1.namespaze;
          }
        }
      }
    }
  }
LABEL_356:
  ReturnTypeByQuestId = (__int64)v79->fields.refreshButtonObject;
  if ( !ReturnTypeByQuestId )
    goto LABEL_361;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ReturnTypeByQuestId, !v79->fields.isRefreshBtnHide, 0);
  v401 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v399, v400);
    v401 = FollowerSelectItemListViewManager_TypeInfo;
  }
  FollowerSelectItemListViewManager__SetEmptyMessage(v79, v401->static_fields->followerClassId, v400);
  FollowerSelectItemListViewManager__SortClass(
    v79,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    v402);
  ListViewManager__SortItem((ListViewManager_o *)v79, -1, 0, -1, 0);
  FollowerSelectItemListViewManager__SetFilterButtonImage(v79, v403);
  scrollView = v79->fields.scrollView;
  if ( !scrollView )
    goto LABEL_361;
  scrollView->fields.smoothDragStart = 1;
}


void FollowerSelectItemListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  FollowerSelectItemListViewManager_c *v3; // x0
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v5; // x8

  if ( (byte_596AFA2 & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_7065/*"FollowerSelectClass"*/);
    sub_2213A60(&StringLiteral_7068/*"FollowerSelectOldClass"*/);
    byte_596AFA2 = 1;
  }
  v3 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v1, v2);
    v3 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v3->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT
    || (v3 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))LIST_VIEW_SORT->fields.invoke_impl)(
                                                      LIST_VIEW_SORT->fields.method_code,
                                                      1,
                                                      LIST_VIEW_SORT->fields.method)) == 0
    || (ListViewSort__DeleteContinueData((ListViewSort_o *)v3, 0),
        (v5 = FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT) == 0)
    || (v3 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))v5->fields.invoke_impl)(
                                                      v5->fields.method_code,
                                                      0,
                                                      v5->fields.method)) == 0 )
  {
    sub_2213CDC(v3, v1);
  }
  ListViewSort__DeleteContinueData((ListViewSort_o *)v3, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_7065/*"FollowerSelectClass"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_7068/*"FollowerSelectOldClass"*/, 0);
}


void FollowerSelectItemListViewManager__DestroyList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FollowerSelectItemListViewManager__DestroyList_39288892(this, 0, v2);
}


void FollowerSelectItemListViewManager__DestroyList_39288892(
        FollowerSelectItemListViewManager_o *this,
        BattleSetupInfo_o *battleSetupInfo,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v10; // w0
  int32_t v11; // w8
  struct QuestRestrictionInfo_o *v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  EventQuestMaster_o *ReturnTypeByQuestId; // x0
  const MethodInfo *v20; // x1
  __int64 v21; // x2
  FollowerSelectItemListViewManager_c *v22; // x8
  unsigned int v23; // w20
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct ListViewSort_o *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x1
  __int64 v33; // x2
  System_Int32_array *OngoingQuestTargetEventIds; // x0
  int32_t questId; // w20
  System_Int32_array *v36; // x22
  int32_t questPhase; // w21
  EventUpValSetupInfo_o *v38; // x23
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  MissionNaviTransitionBoardItem_o *p_setupInfo; // x0
  int32_t v46; // w1
  ClassButtonControlComponent_o *classButtonControl; // x20
  ClassButtonControlComponent_CallbackFunc_o *v48; // x21
  const MethodInfo *v49; // x4
  struct ListViewSort_o *sort; // x8
  int32_t InitialDisplayClass; // w0
  __int64 v52; // x2
  FollowerSelectItemListViewManager_c *v53; // x8
  int32_t v54; // w20
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  struct ListViewSort_o *v62; // x8
  FollowerSelectItemListViewManager_o *v63; // x0
  int monitor; // w20
  const MethodInfo *v65; // x1
  __int64 v66; // x2
  FollowerSelectItemListViewManager_c *v67; // x0
  FollowerSelectItemListViewManager_o *v68; // x0
  int monitor_high; // w20
  __int64 v70; // x1
  FollowerSelectItemListViewManager_c *v71; // x0
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  __int64 v90; // x2
  ClassButtonControlComponent_o *v91; // x20
  const MethodInfo *v92; // x2
  struct EventUpValSetupInfo_o *setupInfo; // x8
  System_Int32_array *v94; // x1
  __int64 v95; // x2
  UILabel_o *bonusFilterKindLabel; // x20
  System_String_o *v97; // x2
  System_String_o *v98; // x3
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7

  if ( (byte_596AFB1 & 1) == 0 )
  {
    sub_2213A60(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&EventUpValSetupInfo_TypeInfo);
    sub_2213A60(&Method_FollowerSelectItemListViewManager_OnChangeClass__);
    sub_2213A60(&FollowerSelectItemListViewManager_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12215/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/);
    sub_2213A60(&StringLiteral_7065/*"FollowerSelectClass"*/);
    sub_2213A60(&StringLiteral_7068/*"FollowerSelectOldClass"*/);
    byte_596AFB1 = 1;
  }
  if ( battleSetupInfo )
  {
    v10 = BattleSetupInfo__TargetQuestId(battleSetupInfo, 0);
    v11 = *(_DWORD *)((char *)off_18 + (_QWORD)battleSetupInfo);
    v12 = *(struct QuestRestrictionInfo_o **)((char *)&qword_58 + (_QWORD)battleSetupInfo);
    this->fields.questId = v10;
    this->fields.questPhase = v11;
    this->fields.questRestrictionInfo = v12;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
      (int32_t)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    ReturnTypeByQuestId = (EventQuestMaster_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                  *(int *)((char *)&dword_14 + (_QWORD)battleSetupInfo),
                                                  0);
    v22 = FollowerSelectItemListViewManager_TypeInfo;
    v23 = (unsigned int)ReturnTypeByQuestId;
    if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v20, v21);
      v22 = FollowerSelectItemListViewManager_TypeInfo;
    }
    LIST_VIEW_SORT = v22->static_fields->LIST_VIEW_SORT;
    if ( !LIST_VIEW_SORT )
      goto LABEL_49;
    v25 = (struct ListViewSort_o *)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))LIST_VIEW_SORT->fields.invoke_impl)(
                                     LIST_VIEW_SORT->fields.method_code,
                                     v23,
                                     LIST_VIEW_SORT->fields.method);
    this->fields.sort = v25;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sort, (int32_t)v25, v26, v27, v28, v29, v30, v31);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v32, v33);
    ReturnTypeByQuestId = (EventQuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventQuestMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_49;
    OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                   ReturnTypeByQuestId,
                                   this->fields.questId,
                                   this->fields.questPhase,
                                   0,
                                   0);
    questId = this->fields.questId;
    v36 = OngoingQuestTargetEventIds;
    questPhase = this->fields.questPhase;
    v38 = (EventUpValSetupInfo_o *)sub_2213CCC(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_48741124(v38, v36, 0, questId, questPhase, 0);
    this->fields.setupInfo = v38;
    p_setupInfo = (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo;
    v46 = (int)v38;
  }
  else
  {
    this->fields.setupInfo = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    p_setupInfo = (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo;
    v46 = 0;
    this->fields.questRestrictionInfo = 0;
  }
  sub_2213A04(p_setupInfo, v46, v39, v40, v41, v42, v43, v44);
  classButtonControl = this->fields.classButtonControl;
  v48 = (ClassButtonControlComponent_CallbackFunc_o *)sub_2213CCC(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v48,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0);
  if ( !classButtonControl )
    goto LABEL_49;
  ClassButtonControlComponent__init(
    classButtonControl,
    v48,
    this->fields.questId,
    this->fields.questPhase,
    this->fields.questRestrictionInfo,
    0,
    0);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_49;
  InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                          this,
                          this->fields.questId,
                          this->fields.questPhase,
                          sort->fields.isRequestLoad,
                          v49);
  v53 = FollowerSelectItemListViewManager_TypeInfo;
  v54 = InitialDisplayClass;
  if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v20, v52);
    v53 = FollowerSelectItemListViewManager_TypeInfo;
  }
  static_fields = v53->static_fields;
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.sort;
  static_fields->followerClassId = v54;
  *(_QWORD *)&static_fields->lastSelectedQuestId = *(_QWORD *)&this->fields.questId;
  if ( !ReturnTypeByQuestId )
    goto LABEL_49;
  ListViewSort__Load((ListViewSort_o *)ReturnTypeByQuestId, 0);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.sort;
  if ( !ReturnTypeByQuestId )
    goto LABEL_49;
  ListViewSort__Save((ListViewSort_o *)ReturnTypeByQuestId, 0);
  v62 = this->fields.sort;
  if ( !v62 )
    goto LABEL_49;
  if ( v62->fields.isRequestSave )
  {
    v63 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v20, v56);
      v63 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor = (int)v63->fields.sort->monitor;
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(v63, v20) )
    {
      v67 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v65, v66);
        v67 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_7065/*"FollowerSelectClass"*/, v67->static_fields->followerClassId, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
    v68 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v65, v66);
      v68 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor_high = HIDWORD(v68->fields.sort->monitor);
    if ( monitor_high != FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(v68, v65) )
    {
      v71 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v70, v56);
        v71 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_7068/*"FollowerSelectOldClass"*/, v71->static_fields->oldFollowerClassId, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
  }
  this->fields.originalItemList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.originalItemList, 0, v56, v57, v58, v59, v60, v61);
  this->fields.mixItemList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mixItemList, 0, v72, v73, v74, v75, v76, v77);
  this->fields.recommendItemList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.recommendItemList, 0, v78, v79, v80, v81, v82, v83);
  this->fields.grandItemList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.grandItemList, 0, v84, v85, v86, v87, v88, v89);
  ReturnTypeByQuestId = (EventQuestMaster_o *)FollowerSelectItemListViewManager_TypeInfo;
  v91 = this->fields.classButtonControl;
  this->fields.isInput = 0;
  if ( !HIDWORD(ReturnTypeByQuestId[2].fields.sb) )
    j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId, v20, v90);
  if ( !v91 )
    goto LABEL_49;
  ClassButtonControlComponent__setCursor(
    v91,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0);
  setupInfo = this->fields.setupInfo;
  v94 = setupInfo ? setupInfo->fields.eventIdList : (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, v94, v92);
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.bonusFilterKindButton;
  if ( !ReturnTypeByQuestId )
    goto LABEL_49;
  ReturnTypeByQuestId = (EventQuestMaster_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)ReturnTypeByQuestId,
                                                0);
  if ( !ReturnTypeByQuestId )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)ReturnTypeByQuestId,
    this->fields.isBonusFilterEnable,
    0);
  if ( this->fields.isBonusFilterEnable )
  {
    bonusFilterKindLabel = this->fields.bonusFilterKindLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v95);
    ReturnTypeByQuestId = (EventQuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12215/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/, 0);
    if ( bonusFilterKindLabel )
    {
      UILabel__set_text(bonusFilterKindLabel, (System_String_o *)ReturnTypeByQuestId, 0);
      goto LABEL_45;
    }
LABEL_49:
    sub_2213CDC(ReturnTypeByQuestId, v20);
  }
LABEL_45:
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.tutorialListViewObject;
  if ( !ReturnTypeByQuestId )
    goto LABEL_49;
  ((void (__fastcall *)(EventQuestMaster_o *, const MethodInfo *))ReturnTypeByQuestId->klass->vtable._4_ForForceDerived.methodPtr)(
    ReturnTypeByQuestId,
    ReturnTypeByQuestId->klass->vtable._4_ForForceDerived.method);
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.tutorialListViewObject;
  if ( !ReturnTypeByQuestId )
    goto LABEL_49;
  ReturnTypeByQuestId = (EventQuestMaster_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)ReturnTypeByQuestId,
                                                0);
  if ( !ReturnTypeByQuestId )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ReturnTypeByQuestId, 0, 0);
  this->fields.isGetRecommendSupport = 0;
  this->fields.followerSelectItemOption = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.followerSelectItemOption,
    0,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
}


void FollowerSelectItemListViewManager__EndClassCompatibilityMenu(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596AFC0 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AFC0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0, 0);
}


void FollowerSelectItemListViewManager__EndCloseClassBoardEffectListDialog(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596AFD1 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AFD1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  CommonUI__CloseClassBoardEffectListDialog((CommonUI_o *)Instance, 0, 0);
  this->fields.isInput = 1;
}


void FollowerSelectItemListViewManager__EndCloseSelectBonusFilterKind(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void FollowerSelectItemListViewManager__EndSelectBonusFilterKind(
        FollowerSelectItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  ListViewSort_o *sort; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x21

  if ( (byte_596AFC2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AFC2 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    FollowerSelectItemListViewManager__SetFilterButtonImage(this, v5);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_8;
    ListViewSort__Save(sort, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__,
    0);
  if ( !Instance )
LABEL_8:
    sub_2213CDC(sort, v6);
  CommonUI__CloseServantBonusFilterSelectMenu((CommonUI_o *)Instance, v9, 0);
}


int32_t FollowerSelectItemListViewManager__GetAdvantageClassId(
        FollowerSelectItemListViewManager_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t defaultValue,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v11; // x20
  int32_t result; // w0
  struct System_Int32_array *classIds; // x8
  struct System_Int32_array *v14; // x8
  Il2CppObject *v15; // x8

  if ( (byte_596AFAC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596AFAC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_17;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0);
  if ( !Entity )
    return defaultValue;
  v11 = Entity;
  result = QuestPhaseEntity__GetAdvantageClassId(Entity, 0);
  if ( result != -1 )
    return result;
  classIds = v11->fields.classIds;
  if ( !classIds || !classIds->max_length )
    return defaultValue;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v14 = v11->fields.classIds;
  if ( !v14 )
    goto LABEL_17;
  if ( !LODWORD(v14->max_length) )
    sub_2213CE4(Instance);
  if ( !Instance )
LABEL_17:
    sub_2213CDC(Instance, v9);
  v15 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          v14->m_Items[0],
          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  result = defaultValue;
  if ( v15 )
    return HIDWORD(v15[4].klass);
  return result;
}


int32_t FollowerSelectItemListViewManager__GetClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  FollowerSelectItemListViewManager_c *v3; // x0

  if ( (byte_596AFB5 & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewManager_TypeInfo);
    byte_596AFB5 = 1;
  }
  v3 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, method, v2);
    v3 = FollowerSelectItemListViewManager_TypeInfo;
  }
  return v3->static_fields->followerClassId;
}


int32_t FollowerSelectItemListViewManager__GetDisplayItemNum(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8

  if ( (byte_596AFD2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_596AFD2 = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( itemSortList )
    return itemSortList->fields._size;
  else
    return 0;
}


int32_t FollowerSelectItemListViewManager__GetDisplaySkill(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.displaySkill;
}


// local variable allocation has failed, the output may be wrong!
int32_t FollowerSelectItemListViewManager__GetInitialDisplayClass(
        FollowerSelectItemListViewManager_o *this,
        int32_t questId,
        int32_t questPhase,
        bool isInitialize,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *v8; // x22
  FollowerSelectItemListViewManager_c *PlayerPrefsFollowerClassId; // x0
  int32_t followerClassId; // w21
  Il2CppObject *IsSameQuestAndPhase; // x0
  __int64 v12; // x1
  ClassButtonControlComponent_o *classButtonControl; // x8
  char v14; // w22
  __int64 v15; // x1
  __int64 v16; // x2
  QuestPhaseEntity_o *Entity; // x0
  int32_t AdvantageClassId; // w0
  const MethodInfo *v19; // x1
  __int64 v20; // x2
  _BOOL8 v21; // x0
  _BOOL8 AdvantageClassAuto; // x0
  const MethodInfo *v23; // x4
  bool v24; // w8
  int32_t v25; // w22
  RecommendSupportQuestEntity_o *v27; // [xsp+0h] [xbp-40h] BYREF
  int32_t enableCount[2]; // [xsp+8h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_596AFAA & 1) == 0 )
  {
    sub_2213A60(&ClassButtonControlComponent_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_RecommendSupportQuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&FollowerSelectItemListViewManager_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    this = (FollowerSelectItemListViewManager_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596AFAA = 1;
  }
  v27 = 0;
  *(_QWORD *)enableCount = 0;
  if ( isInitialize )
  {
    PlayerPrefsFollowerClassId = (FollowerSelectItemListViewManager_c *)FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(
                                                                          this,
                                                                          *(const MethodInfo **)&questId);
    followerClassId = (int)PlayerPrefsFollowerClassId;
  }
  else
  {
    PlayerPrefsFollowerClassId = FollowerSelectItemListViewManager_TypeInfo;
    if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(
        FollowerSelectItemListViewManager_TypeInfo,
        *(_QWORD *)&questId,
        *(_QWORD *)&questPhase);
      PlayerPrefsFollowerClassId = FollowerSelectItemListViewManager_TypeInfo;
    }
    followerClassId = PlayerPrefsFollowerClassId->static_fields->followerClassId;
  }
  IsSameQuestAndPhase = (Il2CppObject *)FollowerSelectItemListViewManager__IsSameQuestAndPhase(
                                          (FollowerSelectItemListViewManager_o *)PlayerPrefsFollowerClassId,
                                          questId,
                                          questPhase,
                                          (const MethodInfo *)isInitialize);
  classButtonControl = v8->fields.classButtonControl;
  if ( !classButtonControl )
    goto LABEL_34;
  v14 = (char)IsSameQuestAndPhase;
  if ( ClassButtonControlComponent__HasDisableClassTabs(classButtonControl, &enableCount[1], enableCount, 0) )
  {
    if ( (v14 & 1) != 0 )
      return followerClassId;
    if ( enableCount[0] == 1 )
      followerClassId = enableCount[1];
    else
      followerClassId = 9;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15, v16);
    IsSameQuestAndPhase = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( IsSameQuestAndPhase )
    {
      Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)IsSameQuestAndPhase, questId, questPhase, 0);
      if ( Entity )
      {
        AdvantageClassId = QuestPhaseEntity__GetAdvantageClassId(Entity, 0);
        if ( AdvantageClassId != -1 )
          return AdvantageClassId;
      }
      return followerClassId;
    }
LABEL_34:
    sub_2213CDC(IsSameQuestAndPhase, v12);
  }
  if ( !*(&ClassButtonControlComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, v15, v16);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(followerClassId, 0) )
  {
    IsSameQuestAndPhase = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsSameQuestAndPhase )
      goto LABEL_34;
    IsSameQuestAndPhase = DataManager__GetMasterData_object_(
                            (DataManager_o *)IsSameQuestAndPhase,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_RecommendSupportQuestMaster___);
    if ( !IsSameQuestAndPhase )
      goto LABEL_34;
    v21 = RecommendSupportQuestMaster__TryGetEntity(
            (RecommendSupportQuestMaster_o *)IsSameQuestAndPhase,
            &v27,
            questId,
            questPhase,
            0);
    if ( !v21 )
      followerClassId = FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(
                          (FollowerSelectItemListViewManager_o *)v21,
                          v19);
  }
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v19, v20);
  AdvantageClassAuto = OptionManager__GetAdvantageClassAuto(0);
  v24 = v14 | ~AdvantageClassAuto;
  v25 = followerClassId;
  if ( !v24 )
    v25 = FollowerSelectItemListViewManager__GetAdvantageClassId(
            (FollowerSelectItemListViewManager_o *)AdvantageClassAuto,
            questId,
            questPhase,
            followerClassId,
            v23);
  if ( ServantClassEntity__IsValidClassOnSellectSupport(v25, 0) )
    return v25;
  return followerClassId;
}


FollowerSelectItemListViewItem_o *FollowerSelectItemListViewManager__GetItem(
        FollowerSelectItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596AFB3 & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_596AFB3 = 1;
  }
  result = (FollowerSelectItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (FollowerSelectItemListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != FollowerSelectItemListViewItem_TypeInfo )
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


int32_t FollowerSelectItemListViewManager__GetItemCount(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *mixItemList; // x8

  if ( (byte_596AFCD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_596AFCD = 1;
  }
  mixItemList = this->fields.mixItemList;
  if ( mixItemList )
    return mixItemList->fields._size;
  else
    return 0;
}


int32_t FollowerSelectItemListViewManager__GetItemIndex(
        FollowerSelectItemListViewManager_o *this,
        int64_t userId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v8; // w22
  Il2CppObject *Item; // x0
  FollowerSelectItemListViewItem_o *v10; // x23
  __int64 naturalAligment; // x10

  if ( (byte_596AFCE & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_596AFCE = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_2213CDC(itemList, userId);
  v8 = 0;
  while ( v8 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v8,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      v10 = (FollowerSelectItemListViewItem_o *)Item;
      naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (FollowerSelectItemListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo
        && FollowerSelectItemListViewItem__get_FollowerId((FollowerSelectItemListViewItem_o *)Item, 0) == userId )
      {
        itemList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                  v10,
                                                                  0);
        if ( !itemList )
          goto LABEL_13;
        if ( itemList[1].klass == (System_Collections_Generic_List_object__c *)userSvtId )
          return v8;
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v8;
    if ( !itemList )
      goto LABEL_13;
  }
  return 0;
}


int32_t FollowerSelectItemListViewManager__GetItemIndex_39301332(
        FollowerSelectItemListViewManager_o *this,
        int64_t userId,
        int32_t classId,
        int32_t deckId,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v12; // w24
  Il2CppObject *Item; // x0
  FollowerSelectItemListViewItem_o *v14; // x25
  __int64 naturalAligment; // x10

  if ( (byte_596AFCF & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_596AFCF = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_2213CDC(itemList, userId);
  v12 = 0;
  while ( v12 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v12,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      v14 = (FollowerSelectItemListViewItem_o *)Item;
      naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (FollowerSelectItemListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo
        && FollowerSelectItemListViewItem__get_FollowerId((FollowerSelectItemListViewItem_o *)Item, 0) == userId )
      {
        if ( grandGraphId < 1 )
        {
          if ( FollowerSelectItemListViewItem__get_SelectClassId(v14, 0) == classId
            && v14->fields.supportDeckId == deckId )
          {
            return v12;
          }
        }
        else if ( v14->fields._GrandGraphId_k__BackingField == grandGraphId )
        {
          return v12;
        }
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v12;
    if ( !itemList )
      goto LABEL_16;
  }
  return -1;
}


int32_t FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_596AFAE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7065/*"FollowerSelectClass"*/);
    byte_596AFAE = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_7065/*"FollowerSelectClass"*/, 0, 0);
}


int32_t FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_596AFAF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7068/*"FollowerSelectOldClass"*/);
    byte_596AFAF = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_7068/*"FollowerSelectOldClass"*/, 0, 0);
}


void FollowerSelectItemListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  FollowerSelectItemListViewManager_c *v3; // x0
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v5; // x8

  if ( (byte_596AFA3 & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewManager_TypeInfo);
    byte_596AFA3 = 1;
  }
  v3 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v1, v2);
    v3 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v3->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT
    || (v3 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))LIST_VIEW_SORT->fields.invoke_impl)(
                                                      LIST_VIEW_SORT->fields.method_code,
                                                      1,
                                                      LIST_VIEW_SORT->fields.method)) == 0
    || (ListViewSort__InitLoad((ListViewSort_o *)v3, 0),
        (v5 = FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT) == 0)
    || (v3 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))v5->fields.invoke_impl)(
                                                      v5->fields.method_code,
                                                      0,
                                                      v5->fields.method)) == 0 )
  {
    sub_2213CDC(v3, v1);
  }
  ListViewSort__InitLoad((ListViewSort_o *)v3, 0);
}


// local variable allocation has failed, the output may be wrong!
bool FollowerSelectItemListViewManager__IsSameQuestAndPhase(
        FollowerSelectItemListViewManager_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_c *v6; // x0
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
  struct FollowerSelectItemListViewManager_StaticFields *v8; // x8

  if ( (byte_596AFAB & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewManager_TypeInfo);
    byte_596AFAB = 1;
  }
  v6 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(
      FollowerSelectItemListViewManager_TypeInfo,
      *(_QWORD *)&questId,
      *(_QWORD *)&questPhase);
    v6 = FollowerSelectItemListViewManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  if ( static_fields->lastSelectedQuestId == -1 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
      v6 = FollowerSelectItemListViewManager_TypeInfo;
      static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
    }
    if ( static_fields->lastSelectedQuestPhase == -1 )
      return 0;
  }
  if ( !*(&v6->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v6, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    v6 = FollowerSelectItemListViewManager_TypeInfo;
  }
  v8 = v6->static_fields;
  if ( v8->lastSelectedQuestId != questId )
    return 0;
  if ( !*(&v6->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v6, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    v8 = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  }
  return v8->lastSelectedQuestPhase == questPhase;
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewManager__ModifyList(
        FollowerSelectItemListViewManager_o *this,
        int32_t friendPointUpVal,
        int32_t friendPointUpMaxVal,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *v6; // x19
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *followerSelectItemOption; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  int size; // w23
  int32_t v10; // w20
  __int64 naturalAligment; // x10
  FollowerSelectItemListViewManager_c *v12; // x0
  int32_t followerClassId; // w20
  struct System_Collections_Generic_List_ListViewItem__o *originalItemList; // x8
  int v15; // w23
  int32_t v16; // w20
  __int64 v17; // x10
  struct System_Collections_Generic_List_ListViewItem__o *mixItemList; // x8
  int v19; // w23
  int32_t v20; // w20
  __int64 v21; // x10

  v6 = this;
  if ( (byte_596AFB0 & 1) == 0 )
  {
    sub_2213A60(&ClassButtonControlComponent_TypeInfo);
    sub_2213A60(&FollowerSelectItemListViewItem_TypeInfo);
    sub_2213A60(&FollowerSelectItemListViewManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (FollowerSelectItemListViewManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_596AFB0 = 1;
  }
  followerSelectItemOption = v6->fields.followerSelectItemOption;
  if ( !followerSelectItemOption )
    goto LABEL_35;
  itemList = v6->fields.itemList;
  followerSelectItemOption->fields.friendPointUpVal = friendPointUpVal;
  followerSelectItemOption->fields.friendPointUpMaxVal = friendPointUpMaxVal;
  if ( !itemList )
    goto LABEL_35;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      this = (FollowerSelectItemListViewManager_o *)v6->fields.itemList;
      if ( !this )
        break;
      this = (FollowerSelectItemListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)this,
                                                      v10,
                                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (FollowerSelectItemListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != FollowerSelectItemListViewItem_TypeInfo )
      {
        break;
      }
      FollowerSelectItemListViewItem__Modify((FollowerSelectItemListViewItem_o *)this, 0);
      if ( size == ++v10 )
        goto LABEL_12;
    }
LABEL_35:
    sub_2213CDC(this, *(_QWORD *)&friendPointUpVal);
  }
LABEL_12:
  v12 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(
      FollowerSelectItemListViewManager_TypeInfo,
      *(_QWORD *)&friendPointUpVal,
      *(_QWORD *)&friendPointUpMaxVal);
    v12 = FollowerSelectItemListViewManager_TypeInfo;
  }
  followerClassId = v12->static_fields->followerClassId;
  if ( !*(&ClassButtonControlComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      ClassButtonControlComponent_TypeInfo,
      *(_QWORD *)&friendPointUpVal,
      *(_QWORD *)&friendPointUpMaxVal);
  this = (FollowerSelectItemListViewManager_o *)ClassButtonControlComponent__IsMixSupportGroupType(followerClassId, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    originalItemList = v6->fields.originalItemList;
    if ( !originalItemList )
      goto LABEL_35;
    v15 = originalItemList->fields._size;
    if ( v15 >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        this = (FollowerSelectItemListViewManager_o *)v6->fields.originalItemList;
        if ( !this )
          break;
        this = (FollowerSelectItemListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this,
                                                        v16,
                                                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !this )
          break;
        v17 = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
        if ( this->klass->_2.naturalAligment < (unsigned int)v17
          || (FollowerSelectItemListViewItem_c *)this->klass->_2.typeHierarchy[v17 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          break;
        }
        FollowerSelectItemListViewItem__Modify((FollowerSelectItemListViewItem_o *)this, 0);
        if ( v15 == ++v16 )
          return;
      }
      goto LABEL_35;
    }
  }
  else
  {
    mixItemList = v6->fields.mixItemList;
    if ( !mixItemList )
      goto LABEL_35;
    v19 = mixItemList->fields._size;
    if ( v19 >= 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        this = (FollowerSelectItemListViewManager_o *)v6->fields.mixItemList;
        if ( !this )
          break;
        this = (FollowerSelectItemListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this,
                                                        v20,
                                                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !this )
          break;
        v21 = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
        if ( this->klass->_2.naturalAligment < (unsigned int)v21
          || (FollowerSelectItemListViewItem_c *)this->klass->_2.typeHierarchy[v21 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          break;
        }
        FollowerSelectItemListViewItem__Modify((FollowerSelectItemListViewItem_o *)this, 0);
        if ( v19 == ++v20 )
          return;
      }
      goto LABEL_35;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewManager__OnChangeClass(
        FollowerSelectItemListViewManager_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 IsRecommendSupportGroupType; // x0
  __int64 v6; // x1
  int v7; // w21
  const MethodInfo *v8; // x2
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t oldCursor; // w22
  struct ClassButtonControlComponent_o *v11; // x8
  FollowerSelectItemListViewManager_c *v12; // x0
  int32_t v13; // w22
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
  _BYTE *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  const MethodInfo *v17; // x2

  if ( (byte_596AFC8 & 1) == 0 )
  {
    sub_2213A60(&ClassButtonControlComponent_TypeInfo);
    sub_2213A60(&Method_FollowerSelectItemListViewManager_OnChangeClass__);
    sub_2213A60(&FollowerSelectItemListViewManager_TypeInfo);
    byte_596AFC8 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( !*(&ClassButtonControlComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classPos, method);
    IsRecommendSupportGroupType = ClassButtonControlComponent__IsRecommendSupportGroupType(classPos, 0);
    if ( this->fields.classButtonControl )
    {
      v7 = IsRecommendSupportGroupType;
      IsRecommendSupportGroupType = ClassButtonControlComponent__getChangeCursorPos(this->fields.classButtonControl, 0);
      if ( (IsRecommendSupportGroupType & 0x80000000) == 0 )
      {
        classButtonControl = this->fields.classButtonControl;
        if ( !classButtonControl )
          goto LABEL_22;
        oldCursor = classButtonControl->fields.oldCursor;
        if ( !*(&ClassButtonControlComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, v6, v8);
        IsRecommendSupportGroupType = ClassButtonControlComponent__IsRecommendSupportGroupType(oldCursor, 0);
        if ( ((v7 | (unsigned int)IsRecommendSupportGroupType) & 1) != 0 )
          FollowerSelectItemListViewManager__SetEmptyMessage(this, classPos, v8);
      }
      v11 = this->fields.classButtonControl;
      if ( v11 )
      {
        v12 = FollowerSelectItemListViewManager_TypeInfo;
        v13 = v11->fields.oldCursor;
        if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v6, v8);
          v12 = FollowerSelectItemListViewManager_TypeInfo;
        }
        static_fields = v12->static_fields;
        v15 = Method_FollowerSelectItemListViewManager_OnChangeClass__;
        static_fields->oldFollowerClassId = v13;
        if ( (v15[83] & 2) != 0 )
          v15 = (_BYTE *)sub_2213A78(v15);
        v16 = (System_Reflection_MethodBase_o *)sub_2213A44(v15, *((_QWORD *)v15 + 4));
        OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0);
        if ( (v7 & 1) != 0 )
          FollowerSelectItemListViewManager__OnClickRecommend(this, classPos, v17);
        else
          FollowerSelectItemListViewManager__SortClass(this, classPos, v17);
        return;
      }
    }
LABEL_22:
    sub_2213CDC(IsRecommendSupportGroupType, v6);
  }
}


void FollowerSelectItemListViewManager__OnClickBonusFilterKind(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  _BOOL4 isServantBonusFilterEnable; // w24
  CommonUI_o *v7; // x23
  _BOOL4 isServantEquipBonusFilterEnable; // w25
  System_Int32_array *equipBonusFilterEventIds; // x21
  ListViewSort_o *sort; // x20
  ServantBonusFilterSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_596AFC1 & 1) == 0 )
  {
    sub_2213A60(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__);
    sub_2213A60(&Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AFC1 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
    v7 = (CommonUI_o *)Instance;
    isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
    equipBonusFilterEventIds = this->fields.equipBonusFilterEventIds;
    sort = this->fields.sort;
    v11 = (ServantBonusFilterSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantBonusFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__,
      0);
    if ( !v7 )
      sub_2213CDC(v12, v13);
    CommonUI__OpenServantBonusFilterSelectMenu(
      v7,
      0,
      isServantBonusFilterEnable,
      isServantEquipBonusFilterEnable,
      equipBonusFilterEventIds,
      sort,
      v11,
      0);
  }
}


void FollowerSelectItemListViewManager__OnClickChangeSkill(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  __int64 displaySkill; // x8
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w21
  const MethodInfo *v11; // x2

  if ( (byte_596AFCC & 1) == 0 )
  {
    sub_2213A60(&Method_FollowerSelectItemListViewManager_OnClickChangeSkill__);
    sub_2213A60(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    byte_596AFCC = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickChangeSkill__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickChangeSkill__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_FollowerSelectItemListViewManager_OnClickChangeSkill__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    displaySkill = (unsigned int)this->fields.displaySkill;
    if ( (unsigned int)displaySkill <= 2 )
      this->fields.displaySkill = dword_ED8EAC[displaySkill];
    ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                                this,
                                                                v5);
    if ( !ObjectList )
      goto LABEL_14;
    v9 = ObjectList;
    if ( ObjectList->fields._size >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    v9,
                                                                    v10,
                                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
        if ( !ObjectList )
          break;
        FollowerSelectItemListViewObject__ChangeDisplaySkill(
          (FollowerSelectItemListViewObject_o *)ObjectList,
          this->fields.displaySkill,
          v11);
        if ( ++v10 >= v9->fields._size )
          return;
      }
LABEL_14:
      sub_2213CDC(ObjectList, v8);
    }
  }
}


void FollowerSelectItemListViewManager__OnClickClassComparibility(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_596AFBF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__);
    sub_2213A60(&Method_FollowerSelectItemListViewManager_OnClickClassComparibility__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AFBF = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickClassComparibility__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickClassComparibility__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_FollowerSelectItemListViewManager_OnClickClassComparibility__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v6,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__,
      0);
    if ( !Instance )
      sub_2213CDC(v7, v8);
    CommonUI__OpenClassCompatibilityMenu((CommonUI_o *)Instance, v6, 0);
  }
}


void FollowerSelectItemListViewManager__OnClickListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewManager__OnClickRecommend(
        FollowerSelectItemListViewManager_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  _BOOL4 isGetRecommendSupport; // w8
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  FollowerSelectItemListViewManager_c *v13; // x0
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596AFC9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__);
    sub_2213A60(&FollowerSelectItemListViewManager_TypeInfo);
    byte_596AFC9 = 1;
  }
  isGetRecommendSupport = this->fields.isGetRecommendSupport;
  entity = 0;
  if ( isGetRecommendSupport )
    goto LABEL_4;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&classPos, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
  if ( !Master_object )
    goto LABEL_16;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          (const MethodInfo_3F132BC *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    goto LABEL_12;
  Master_object = entity;
  if ( !entity )
LABEL_16:
    sub_2213CDC(Master_object, v7);
  if ( UserRecommendFollowerEntity__IsEnableSupport(
         (UserRecommendFollowerEntity_o *)entity,
         this->fields.questId,
         this->fields.questPhase,
         0) )
  {
LABEL_4:
    FollowerSelectItemListViewManager__SortClass(this, classPos, method);
    return;
  }
LABEL_12:
  v13 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v7, method);
    v13 = FollowerSelectItemListViewManager_TypeInfo;
  }
  callbackFunc = this->fields.callbackFunc;
  v13->static_fields->followerClassId = classPos;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      0,
      (System_String_o *)method,
      v8,
      v9,
      v10,
      v11,
      v12);
    ((void (__fastcall *)(intptr_t, __int64, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      14,
      0xFFFFFFFFLL,
      0,
      callbackFunc->fields.method);
  }
}


void FollowerSelectItemListViewManager__OnClickRefresh(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w19
  __int64 v15; // x1

  if ( (byte_596AFBE & 1) == 0 )
  {
    sub_2213A60(&ClassButtonControlComponent_TypeInfo);
    byte_596AFBE = 1;
  }
  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
      classButtonControl = this->fields.classButtonControl;
      if ( !classButtonControl )
        sub_2213CDC(v10, v11);
      currentCursor = classButtonControl->fields.currentCursor;
      if ( !*(&ClassButtonControlComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, v11, v12);
      if ( ClassButtonControlComponent__IsRecommendSupportGroupType(currentCursor, 0) )
        v15 = 13;
      else
        v15 = 7;
      ((void (__fastcall *)(intptr_t, __int64, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        v15,
        0xFFFFFFFFLL,
        0,
        callbackFunc->fields.method);
    }
  }
}


void FollowerSelectItemListViewManager__OnClickSelectListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_2213CDC(v10, v11);
      Index = (unsigned int)ListViewObject__get_Index(obj, 0);
      ((void (__fastcall *)(intptr_t, _QWORD, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        0,
        Index,
        0,
        callbackFunc->fields.method);
    }
  }
}


void FollowerSelectItemListViewManager__OnClickSkill1ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void FollowerSelectItemListViewManager__OnClickSkill2ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void FollowerSelectItemListViewManager__OnClickSkill3ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void FollowerSelectItemListViewManager__OnClickSortAscendingOrder(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_596AFC6 & 1) == 0 )
  {
    sub_2213A60(&Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__);
    byte_596AFC6 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_2213CDC(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void FollowerSelectItemListViewManager__OnClickSortKind(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  _BOOL8 IsRecommendSupportGroupType; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w20
  struct ListViewSort_o *sort; // x8
  int v11; // w9
  Il2CppObject *Instance; // x21
  ListViewSort_o *v13; // x20
  OtherUserSortDialog_CallbackFunc_o *v14; // x22

  if ( (byte_596AFC4 & 1) == 0 )
  {
    sub_2213A60(&OtherUserSortDialog_CallbackFunc_TypeInfo);
    sub_2213A60(&ClassButtonControlComponent_TypeInfo);
    sub_2213A60(&Method_FollowerSelectItemListViewManager_CloseSortDialog__);
    sub_2213A60(&Method_FollowerSelectItemListViewManager_OnClickSortKind__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AFC4 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_FollowerSelectItemListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    classButtonControl = this->fields.classButtonControl;
    if ( classButtonControl )
    {
      currentCursor = classButtonControl->fields.currentCursor;
      if ( !*(&ClassButtonControlComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, v6, v7);
      IsRecommendSupportGroupType = ClassButtonControlComponent__IsRecommendSupportGroupType(currentCursor, 0);
      if ( IsRecommendSupportGroupType )
      {
        sort = this->fields.sort;
        if ( sort )
        {
          if ( sort->fields.otherSortKind == 11 )
            v11 = 29;
          else
            v11 = 11;
          sort->fields.otherSortKind = v11;
          ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
          return;
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v13 = this->fields.sort;
        v14 = (OtherUserSortDialog_CallbackFunc_o *)sub_2213CCC(OtherUserSortDialog_CallbackFunc_TypeInfo);
        OtherUserSortDialog_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          Method_FollowerSelectItemListViewManager_CloseSortDialog__,
          0);
        if ( Instance )
        {
          CommonUI__OpenOtherUserSortDialog((CommonUI_o *)Instance, 0, v13, v14, 0);
          return;
        }
      }
    }
    sub_2213CDC(IsRecommendSupportGroupType, v6);
  }
}


void FollowerSelectItemListViewManager__OnClickSupportListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_2213CDC(v10, v11);
      Index = (unsigned int)ListViewObject__get_Index(obj, 0);
      ((void (__fastcall *)(intptr_t, __int64, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        5,
        Index,
        0,
        callbackFunc->fields.method);
    }
  }
}


void FollowerSelectItemListViewManager__OnLongPushAppendSkill1ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FollowerSelectItemListViewManager__OnLongPushSkill(this, obj, 8, v3);
}


void FollowerSelectItemListViewManager__OnLongPushAppendSkill2ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FollowerSelectItemListViewManager__OnLongPushSkill(this, obj, 9, v3);
}


void FollowerSelectItemListViewManager__OnLongPushAppendSkill3ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FollowerSelectItemListViewManager__OnLongPushSkill(this, obj, 10, v3);
}


void FollowerSelectItemListViewManager__OnLongPushAppendSkill4ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FollowerSelectItemListViewManager__OnLongPushSkill(this, obj, 11, v3);
}


void FollowerSelectItemListViewManager__OnLongPushAppendSkill5ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FollowerSelectItemListViewManager__OnLongPushSkill(this, obj, 12, v3);
}


void FollowerSelectItemListViewManager__OnLongPushListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_2213CDC(v10, v11);
      Index = (unsigned int)ListViewObject__get_Index(obj, 0);
      ((void (__fastcall *)(intptr_t, __int64, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        1,
        Index,
        0,
        callbackFunc->fields.method);
    }
  }
}


void FollowerSelectItemListViewManager__OnLongPushServantEquip(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 naturalAligment; // x10
  ListViewObject_o *v11; // x22
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 Index; // x2
  __int64 dispObject_low; // x3

  if ( (byte_596AFBC & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewObject_TypeInfo);
    byte_596AFBC = 1;
  }
  if ( this->fields.isInput )
  {
    if ( obj
      && (naturalAligment = FollowerSelectItemListViewObject_TypeInfo->_2.naturalAligment,
          obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      v11 = (FollowerSelectItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewObject_TypeInfo
          ? obj
          : 0LL;
    }
    else
    {
      v11 = 0;
    }
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_2213CDC(v13, v14);
      Index = (unsigned int)ListViewObject__get_Index(obj, 0);
      if ( v11 )
        dispObject_low = LODWORD(v11[1].fields.dispObject);
      else
        dispObject_low = 0;
      ((void (__fastcall *)(intptr_t, __int64, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        6,
        Index,
        dispObject_low,
        callbackFunc->fields.method);
    }
  }
}


void FollowerSelectItemListViewManager__OnLongPushSkill(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        int32_t kind,
        const MethodInfo *method)
{
  UnityEngine_Component_o *tutorialListViewObject; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x22
  __int64 Index; // x2

  if ( (byte_596AFBD & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13184/*"ScrollViewEnabled"*/);
    byte_596AFBD = 1;
  }
  if ( this->fields.isInput )
  {
    tutorialListViewObject = (UnityEngine_Component_o *)this->fields.tutorialListViewObject;
    if ( !tutorialListViewObject )
      goto LABEL_14;
    tutorialListViewObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(tutorialListViewObject, 0);
    if ( !tutorialListViewObject )
      goto LABEL_14;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)tutorialListViewObject, 0) )
    {
      tutorialListViewObject = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !tutorialListViewObject )
        goto LABEL_14;
      UIScrollView__Press((UIScrollView_o *)tutorialListViewObject, 0, 0);
      tutorialListViewObject = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !tutorialListViewObject )
        goto LABEL_14;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)tutorialListViewObject, 0, 0);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_13184/*"ScrollViewEnabled"*/,
        0.1,
        0);
    }
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v8, v9, v10, v11, v12, v13);
    if ( callbackFunc )
    {
      if ( obj )
      {
        Index = (unsigned int)ListViewObject__get_Index(obj, 0);
        ((void (__fastcall *)(intptr_t, _QWORD, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          (unsigned int)kind,
          Index,
          0,
          callbackFunc->fields.method);
        return;
      }
LABEL_14:
      sub_2213CDC(tutorialListViewObject, obj);
    }
  }
}


void FollowerSelectItemListViewManager__OnLongPushSkill1ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FollowerSelectItemListViewManager__OnLongPushSkill(this, obj, 2, v3);
}


void FollowerSelectItemListViewManager__OnLongPushSkill2ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FollowerSelectItemListViewManager__OnLongPushSkill(this, obj, 3, v3);
}


void FollowerSelectItemListViewManager__OnLongPushSkill3ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FollowerSelectItemListViewManager__OnLongPushSkill(this, obj, 4, v3);
}


void FollowerSelectItemListViewManager__OnMoveEnd(FollowerSelectItemListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UnityEngine_Component_o *tutorialListViewObject; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_596AFBB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AFBB = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
        goto LABEL_15;
      tutorialListViewObject = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( tutorialListViewObject )
      {
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, Il2CppClass *))tutorialListViewObject->klass[1]._1.element_class)(
          tutorialListViewObject,
          1,
          tutorialListViewObject->klass[1]._1.castClass);
        tutorialListViewObject = (UnityEngine_Component_o *)this->fields.tutorialListViewObject;
        if ( tutorialListViewObject )
        {
          tutorialListViewObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                tutorialListViewObject,
                                                                0);
          if ( tutorialListViewObject )
          {
            if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)tutorialListViewObject, 0) )
              goto LABEL_15;
            tutorialListViewObject = (UnityEngine_Component_o *)this->fields.scrollView;
            if ( tutorialListViewObject )
            {
              UIScrollView__UpdatePosition((UIScrollView_o *)tutorialListViewObject, 0);
              this->fields.isScrollRefresh = 1;
LABEL_15:
              callbackFunc2 = this->fields.callbackFunc2;
              this->fields.callbackFunc2 = 0;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
                0,
                v10,
                v11,
                v12,
                v13,
                v14,
                v15);
              if ( callbackFunc2 )
                ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
                  callbackFunc2->fields.method_code,
                  callbackFunc2->fields.method);
              return;
            }
          }
        }
      }
      sub_2213CDC(tutorialListViewObject, v9);
    }
  }
}


void FollowerSelectItemListViewManager__OpenSupportClassBoard(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *v4; // x19
  System_Collections_Generic_List_object__o *itemList; // x21
  int32_t Index; // w0
  Il2CppObject *Item; // x0
  FollowerSelectItemListViewItem_o *v8; // x20
  __int64 naturalAligment; // x10
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Master_object; // x21
  int32_t scrollView; // w24
  __int64 v18; // x2
  int32_t v19; // w21
  FollowerSelectItemListViewManager_o *v20; // x25
  struct FollowerInfo_o *followerInfo; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x27
  int max_length; // w8
  unsigned int v24; // w28
  ClassBoardInfo_o *v25; // x22
  __int64 v26; // x23
  __int64 v27; // x26
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  long double v34; // q0
  _QWORD *v35; // x24
  __int64 v36; // x8
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 *v39; // x8
  __int64 v40; // x1
  __int64 v41; // x1
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  long double v48; // q0
  _QWORD *v49; // x24
  __int64 v50; // x8
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 *v53; // x8
  __int64 v54; // x1
  Il2CppObject *Instance; // x24
  System_Action_o *v56; // x25
  struct FollowerInfo_o *v57; // x8

  v4 = this;
  if ( (byte_596AFD0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&ClassBoardInfo_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_int___);
    sub_2213A60(&FollowerSelectItemListViewItem_TypeInfo);
    sub_2213A60(&Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__);
    sub_2213A60(&Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (FollowerSelectItemListViewManager_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AFD0 = 1;
  }
  if ( v4->fields.isInput )
  {
    itemList = (System_Collections_Generic_List_object__o *)v4->fields.itemList;
    if ( itemList )
    {
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0);
        Item = System_Collections_Generic_List_object___get_Item(
                 itemList,
                 Index,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Item )
          return;
        v8 = (FollowerSelectItemListViewItem_o *)Item;
        naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (FollowerSelectItemListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          return;
        }
        if ( LOBYTE(Item[11].klass) )
        {
          v10 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
          if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 83) & 2) != 0 )
            v10 = (_QWORD *)sub_2213A78(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
          v11 = (System_Reflection_MethodBase_o *)sub_2213A44(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0, 0);
          return;
        }
        v4->fields.isInput = 0;
        v12 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
        if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 83) & 2) != 0 )
          v12 = (_QWORD *)sub_2213A78(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
        v13 = (System_Reflection_MethodBase_o *)sub_2213A44(v12, v12[4]);
        OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14, v15);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
        this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewItem__get_SvtId(v8, 0);
        if ( Master_object )
        {
          this = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                          (int32_t)this,
                                                          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            scrollView = (int32_t)this->fields.scrollView;
            this = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( this )
            {
              this = (FollowerSelectItemListViewManager_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                                              (ClassBoardClassMaster_o *)this,
                                                              scrollView,
                                                              0);
              v19 = (int)this;
              if ( (_DWORD)this )
              {
                if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, obj, v18);
                this = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
                if ( !this )
                  goto LABEL_67;
                this = (FollowerSelectItemListViewManager_o *)ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
                                                                (ClassBoardBaseMaster_o *)this,
                                                                v19,
                                                                0);
                v20 = this;
              }
              else
              {
                v20 = 0;
              }
              followerInfo = v8->fields.followerInfo;
              if ( followerInfo )
              {
                userClassBoardInfo = followerInfo->fields.userClassBoardInfo;
                if ( userClassBoardInfo )
                {
                  max_length = userClassBoardInfo->max_length;
                  if ( max_length < 1 )
                  {
                    v26 = 0;
                    v25 = 0;
LABEL_45:
                    if ( !v26 )
                    {
                      v26 = sub_2213CCC(ClassBoardInfo_TypeInfo);
                      ClassBoardInfo___ctor((ClassBoardInfo_o *)v26, 0);
                      if ( !v26 )
                        goto LABEL_67;
                      *(_DWORD *)(v26 + 16) = v19;
                      v35 = Method_System_Array_Empty_int___;
                      v36 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v36 )
                      {
                        sub_224B964(Method_System_Array_Empty_int___);
                        v36 = v35[7];
                      }
                      v37 = *(_QWORD *)(v36 + 16);
                      if ( (*(_WORD *)(v37 + 309) & 1) == 0 )
                        v37 = sub_224B908(v34);
                      if ( !*(_DWORD *)(v37 + 228) )
                        *(__n128 *)&v34 = j_il2cpp_runtime_class_init_0(v37, obj, v28);
                      v38 = *(_QWORD *)(v35[7] + 16LL);
                      if ( (*(_WORD *)(v38 + 309) & 1) == 0 )
                        v38 = sub_224B908(v34);
                      v39 = *(__int64 **)(v38 + 184);
                      v40 = *v39;
                      *(_QWORD *)(v26 + 24) = *v39;
                      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 24), v40, v28, v29, v30, v31, v32, v33);
                      v49 = Method_System_Array_Empty_int___;
                      v50 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v50 )
                      {
                        sub_224B964(Method_System_Array_Empty_int___);
                        v50 = v49[7];
                      }
                      v51 = *(_QWORD *)(v50 + 16);
                      if ( (*(_WORD *)(v51 + 309) & 1) == 0 )
                        v51 = sub_224B908(v48);
                      if ( !*(_DWORD *)(v51 + 228) )
                        *(__n128 *)&v48 = j_il2cpp_runtime_class_init_0(v51, v41, v42);
                      v52 = *(_QWORD *)(v49[7] + 16LL);
                      if ( (*(_WORD *)(v52 + 309) & 1) == 0 )
                        v52 = sub_224B908(v48);
                      v53 = *(__int64 **)(v52 + 184);
                      v54 = *v53;
                      *(_QWORD *)(v26 + 32) = *v53;
                      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 32), v54, v42, v43, v44, v45, v46, v47);
                    }
LABEL_64:
                    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    v56 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                    System_Action___ctor(
                      v56,
                      (Il2CppObject *)v4,
                      Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__,
                      0);
                    v57 = v8->fields.followerInfo;
                    if ( v57 && Instance )
                    {
                      CommonUI__OpenClassBoardEffectListDialog(
                        (CommonUI_o *)Instance,
                        1,
                        v19,
                        0,
                        v56,
                        1,
                        (ClassBoardInfo_o *)v26,
                        v25,
                        v8->fields._IsGrandSupport_k__BackingField,
                        v57->fields.followerClassStatistics,
                        0,
                        0);
                      return;
                    }
                  }
                  else
                  {
                    v24 = 0;
                    v25 = 0;
                    v26 = 0;
                    while ( 1 )
                    {
                      if ( v24 >= max_length )
                        sub_2213CE4(this);
                      v27 = (__int64)userClassBoardInfo->m_Items[v24];
                      if ( !v27 )
                        break;
                      if ( *(_DWORD *)(v27 + 16) == v19 )
                      {
                        this = (FollowerSelectItemListViewManager_o *)ClassBoardInfo__IsReleasedClassId(
                                                                        (ClassBoardInfo_o *)v27,
                                                                        scrollView,
                                                                        0);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          v26 = v27;
                      }
                      if ( v20 )
                      {
                        if ( LODWORD(v20->fields.m_CachedPtr) == *(_DWORD *)(v27 + 16) )
                        {
                          this = (FollowerSelectItemListViewManager_o *)System_Linq_Enumerable__Any_int_(
                                                                          *(System_Collections_Generic_IEnumerable_TSource__o **)(v27 + 24),
                                                                          (const MethodInfo_3865C7C *)Method_System_Linq_Enumerable_Any_int___);
                          if ( ((unsigned __int8)this & 1) != 0 )
                            v25 = (ClassBoardInfo_o *)v27;
                        }
                      }
                      if ( v26 && v25 )
                        goto LABEL_64;
                      max_length = userClassBoardInfo->max_length;
                      if ( (int)++v24 >= max_length )
                        goto LABEL_45;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_67:
      sub_2213CDC(this, obj);
    }
  }
}


void FollowerSelectItemListViewManager__PlayClassButtonEffect(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  ClassButtonControlComponent_o *classButtonControl; // x0

  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl )
    sub_2213CDC(0, method);
  ClassButtonControlComponent__PlayRecommendEffect(classButtonControl, 0);
}


void FollowerSelectItemListViewManager__RequestInto(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_FollowerSelectItemListViewObject__o *ObjectList; // x0
  __int64 v5; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v7; // x20
  int v8; // w24
  int32_t v9; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v11; // x23
  const MethodInfo *v12; // x3
  System_String_o *v13; // x1

  if ( (byte_596AFBA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_2213A60(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596AFBA = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
  ObjectList = FollowerSelectItemListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_2213CDC(ObjectList, v5);
  size = ObjectList->fields._size;
  v7 = (System_Collections_Generic_List_object__o *)ObjectList;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v8 = 0;
  v9 = 0;
  do
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v7,
             v9,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0) )
    {
      v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      FollowerSelectItemListViewObject__Init_39294420((FollowerSelectItemListViewObject_o *)Item, 4, v11, 0.1, v12);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v9;
  }
  while ( v9 < v7->fields._size );
  if ( !v8 )
  {
LABEL_12:
    v13 = (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/;
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v13, 0.0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewManager__RequestListObject(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596AFB8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__);
    sub_2213A60(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_2213A60(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596AFB8 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v13, v14);
      FollowerSelectItemListViewObject__Init_39294420(
        (FollowerSelectItemListViewObject_o *)current,
        mode,
        v12,
        delay,
        v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewManager__RequestListObject_39293328(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596AFB9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__);
    sub_2213A60(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_2213A60(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596AFB9 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v11, v12);
      FollowerSelectItemListViewObject__Init_39293820((FollowerSelectItemListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


void FollowerSelectItemListViewManager__SaveSortFilter(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  __int64 v4; // x2
  struct ListViewSort_o *v5; // x8
  FollowerSelectItemListViewManager_o *v6; // x0
  int monitor; // w20
  const MethodInfo *v8; // x1
  __int64 v9; // x2
  FollowerSelectItemListViewManager_c *v10; // x0
  FollowerSelectItemListViewManager_o *v11; // x0
  int monitor_high; // w20
  __int64 v13; // x1
  __int64 v14; // x2
  FollowerSelectItemListViewManager_c *v15; // x0

  if ( (byte_596AFB2 & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_7065/*"FollowerSelectClass"*/);
    sub_2213A60(&StringLiteral_7068/*"FollowerSelectOldClass"*/);
    byte_596AFB2 = 1;
  }
  sort = this->fields.sort;
  if ( !sort || (ListViewSort__Save(sort, 0), (v5 = this->fields.sort) == 0) )
    sub_2213CDC(sort, method);
  if ( v5->fields.isRequestSave )
  {
    v6 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, method, v4);
      v6 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor = (int)v6->fields.sort->monitor;
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(v6, method) )
    {
      v10 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v8, v9);
        v10 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_7065/*"FollowerSelectClass"*/, v10->static_fields->followerClassId, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
    v11 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v8, v9);
      v11 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor_high = HIDWORD(v11->fields.sort->monitor);
    if ( monitor_high != FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(v11, v8) )
    {
      v15 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v13, v14);
        v15 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_7068/*"FollowerSelectOldClass"*/, v15->static_fields->oldFollowerClassId, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
  }
}


void FollowerSelectItemListViewManager__ScrollViewEnabled(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_2213CDC(0, method);
  UnityEngine_Behaviour__set_enabled(scrollView, 1, 0);
}


void FollowerSelectItemListViewManager__SetBonusFilterFlag(
        FollowerSelectItemListViewManager_o *this,
        System_Int32_array *eventIds,
        const MethodInfo *method)
{
  const MethodInfo_38A0B70 *v5; // x1
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v7; // x1
  il2cpp_array_size_t max_length; // x8
  System_Collections_Generic_List_int__o *v9; // x21
  unsigned __int64 v10; // x23
  int32_t v11; // w22
  bool isBonusFilterEnable; // w26
  bool IsSupportFilterNoDisp; // w8
  bool isServantBonusFilterEnable; // w26
  bool IsSupportServantFilterNoDisp; // w8
  bool isServantEquipBonusFilterEnable; // w26
  bool IsSupportServantEquipFilterNoDisp; // w8
  struct System_Int32_array *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596AFA6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventFilterMaster___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596AFA6 = 1;
  }
  v5 = (const MethodInfo_38A0B70 *)Method_System_Linq_Enumerable_ToList_int___;
  entity = 0;
  *(_WORD *)&this->fields.isBonusFilterEnable = 0;
  this->fields.isServantEquipBonusFilterEnable = 0;
  Instance = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)eventIds,
                                                         v5);
  if ( !eventIds )
    goto LABEL_21;
  max_length = eventIds->max_length;
  v9 = Instance;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_2213CE4(Instance);
      v11 = eventIds->m_Items[v10];
      Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventFilterMaster___);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)EventFilterMaster__TryGetEntity_48991628(
                                                             (EventFilterMaster_o *)Instance,
                                                             &entity,
                                                             v11,
                                                             0,
                                                             0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (System_Collections_Generic_List_int__o *)entity;
        if ( !entity )
          break;
        isBonusFilterEnable = this->fields.isBonusFilterEnable;
        IsSupportFilterNoDisp = EventFilterEntity__IsSupportFilterNoDisp(entity, 0);
        Instance = (System_Collections_Generic_List_int__o *)entity;
        this->fields.isBonusFilterEnable = isBonusFilterEnable || !IsSupportFilterNoDisp;
        if ( !Instance )
          break;
        isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
        IsSupportServantFilterNoDisp = EventFilterEntity__IsSupportServantFilterNoDisp(
                                         (EventFilterEntity_o *)Instance,
                                         0);
        Instance = (System_Collections_Generic_List_int__o *)entity;
        this->fields.isServantBonusFilterEnable = isServantBonusFilterEnable || !IsSupportServantFilterNoDisp;
        if ( !Instance )
          break;
        isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
        IsSupportServantEquipFilterNoDisp = EventFilterEntity__IsSupportServantEquipFilterNoDisp(
                                              (EventFilterEntity_o *)Instance,
                                              0);
        Instance = (System_Collections_Generic_List_int__o *)entity;
        this->fields.isServantEquipBonusFilterEnable = isServantEquipBonusFilterEnable
                                                    || !IsSupportServantEquipFilterNoDisp;
        if ( !Instance )
          break;
        Instance = (System_Collections_Generic_List_int__o *)EventFilterEntity__IsSupportServantEquipFilterNoDisp(
                                                               (EventFilterEntity_o *)Instance,
                                                               0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v9 )
            break;
          Instance = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Remove(
                                                                 v9,
                                                                 v11,
                                                                 (const MethodInfo_4468730 *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
      else
      {
        *(_WORD *)&this->fields.isBonusFilterEnable = 257;
        this->fields.isServantEquipBonusFilterEnable = 1;
      }
      LODWORD(max_length) = eventIds->max_length;
      if ( (__int64)++v10 >= (int)max_length )
        goto LABEL_19;
    }
LABEL_21:
    sub_2213CDC(Instance, v7);
  }
LABEL_19:
  if ( !v9 )
    goto LABEL_21;
  v18 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.equipBonusFilterEventIds = v18;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipBonusFilterEventIds,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
}


void FollowerSelectItemListViewManager__SetClassBoardInfo(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  __int64 v6; // x1
  __int64 v7; // x2
  UISprite_o *classInfoSprite; // x20
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x0
  MissionNaviTransitionBoardItem_o *p_classBoardMaxDictionary; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_Dictionary_int__int__o *v13; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_ObjectModel_Collection_T__o *Master_object; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v26; // x9
  int *p_offset; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x20
  Il2CppObject *v38; // x0
  __int64 v39; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v41; // x1
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  System_Collections_Generic_IEnumerator_T__o *v46; // [xsp+18h] [xbp-48h]

  if ( (byte_596AFA8 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__getEntityList__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&StringLiteral_18443/*"buttontxt_formation_20"*/);
    byte_596AFA8 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v4->static_fields->ClassBoardReleaseQuestId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method, v2);
  if ( CondType__IsQuestClear_47284152(ClassBoardReleaseQuestId, -1, 0, 0) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v7);
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_18443/*"buttontxt_formation_20"*/, 0);
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = (MissionNaviTransitionBoardItem_o *)&this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_3F92DA0 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v13 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v13,
      (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    p_classBoardMaxDictionary->klass = (MissionNaviTransitionBoardItem_c *)v13;
    sub_2213A04(p_classBoardMaxDictionary, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11, v12);
  Master_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object
    || (Master_object = (System_Collections_ObjectModel_Collection_T__o *)Master_object[1].fields.items) == 0 )
  {
    sub_2213CDC(Master_object, v21);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Master_object,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
  v46 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v23);
  for ( i = Enumerator; ; i = v46 )
  {
    klass = i->klass;
    v26 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        p_offset += 4;
        if ( !v26 )
          goto LABEL_24;
      }
      v28 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_24:
      v28 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
            i,
            *(_QWORD *)(v28 + 8));
    if ( (v29 & 1) == 0 )
      break;
    if ( !v46 )
      sub_2213CDC(v29, v30);
    v31 = v46->klass;
    v32 = *(unsigned __int16 *)&v46->klass->_2.rank;
    if ( *(_WORD *)&v46->klass->_2.rank )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__c **)v33 - 1) != System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_32;
      }
      v34 = (__int64)&v31->vtable[*v33];
    }
    else
    {
LABEL_32:
      v34 = sub_224BC3C(v46, System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, 0);
    }
    v37 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
            v46,
            *(_QWORD *)(v34 + 8));
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v35, v36);
    v38 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v37 )
      sub_2213CDC(v38, v39);
    if ( !v38 )
      sub_2213CDC(0, v39);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                            (ClassBoardSquareMaster_o *)v38,
                            *(_DWORD *)(v37 + 16),
                            0);
    if ( OtherThanNoneEntity )
    {
      if ( !p_classBoardMaxDictionary->klass )
        sub_2213CDC(OtherThanNoneEntity, v41);
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)p_classBoardMaxDictionary->klass,
        *(_DWORD *)(v37 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_3F92C20 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  if ( v46 )
  {
    v42 = v46->klass;
    v43 = *(unsigned __int16 *)&v46->klass->_2.rank;
    if ( *(_WORD *)&v46->klass->_2.rank )
    {
      v44 = &v42->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
      {
        --v43;
        v44 += 4;
        if ( !v43 )
          goto LABEL_48;
      }
      v45 = (__int64)&v42->vtable[*v44];
    }
    else
    {
LABEL_48:
      v45 = sub_224BC3C(v46, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(v46, *(_QWORD *)(v45 + 8));
  }
}


void FollowerSelectItemListViewManager__SetClassId(
        FollowerSelectItemListViewManager_o *this,
        int32_t followerClassId,
        const MethodInfo *method)
{
  __int64 v5; // x19
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  FollowerSelectItemListViewManager_c *v9; // x0
  int32_t v10; // w21
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_IEnumerable_T__o *mixItemList; // x21
  System_Collections_Generic_List_object__o *v14; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 naturalAligment; // x10
  int32_t v22; // w21
  System_Collections_Generic_IEnumerable_T__o *recommendItemList; // x21
  System_Collections_Generic_List_object__o *v24; // x22
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x10
  System_Collections_Generic_IEnumerable_T__o *originalItemList; // x21
  System_Collections_Generic_List_object__o *v33; // x22
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x21
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct System_Collections_Generic_List_ListViewItem__o *v41; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x20
  System_Func_object__bool__o *v43; // x23
  __int64 v44; // x10
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_596AFB6 & 1) == 0 )
  {
    sub_2213A60(&ClassButtonControlComponent_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_OfType_FollowerSelectItemListViewItem___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_FollowerSelectItemListViewItem___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&FollowerSelectItemListViewItem_TypeInfo);
    sub_2213A60(&FollowerSelectItemListViewManager_TypeInfo);
    sub_2213A60(&System_Func_FollowerSelectItemListViewItem__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem___ctor___91654648);
    sub_2213A60(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_2213A60(&Method_FollowerSelectItemListViewManager___c__DisplayClass84_0__SetClassId_b__0__);
    sub_2213A60(&FollowerSelectItemListViewManager___c__DisplayClass84_0_TypeInfo);
    byte_596AFB6 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  v5 = sub_2213CCC(FollowerSelectItemListViewManager___c__DisplayClass84_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_42;
  *(_DWORD *)(v5 + 16) = followerClassId;
  v9 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v7, v8);
    v9 = FollowerSelectItemListViewManager_TypeInfo;
  }
  v9->static_fields->followerClassId = followerClassId;
  if ( this->fields.mixItemList && this->fields.originalItemList && this->fields.grandItemList )
  {
    v10 = *(_DWORD *)(v5 + 16);
    if ( !*(&ClassButtonControlComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, v7, v8);
    if ( ClassButtonControlComponent__IsMixSupportGroupType(v10, 0) )
    {
      mixItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.mixItemList;
      v14 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ListViewItem__TypeInfo);
      System_Collections_Generic_List_object____ctor_71841080(
        v14,
        mixItemList,
        (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_ListViewItem___ctor___91654648);
      this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v14;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.itemList,
        (int32_t)v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( itemList )
      {
        System_Collections_Generic_List_object___AddRange(
          itemList,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.grandItemList,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_ListViewItem__AddRange__);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v45,
            itemList,
            (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v46 = v45;
          v45.fields._list = 0;
          *(_QWORD *)&v45.fields._index = &v46;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v46,
                    (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v46.fields._current )
            {
              naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
              if ( v46.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
                && (FollowerSelectItemListViewItem_c *)v46.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__UpdateRestriction(
                  (FollowerSelectItemListViewItem_o *)v46.fields._current,
                  0);
              }
            }
          }
LABEL_40:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v46,
            (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
      }
    }
    else
    {
      v22 = *(_DWORD *)(v5 + 16);
      if ( !*(&ClassButtonControlComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, v11, v12);
      if ( ClassButtonControlComponent__IsRecommendSupportGroupType(v22, 0) )
      {
        recommendItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.recommendItemList;
        v24 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor_71841080(
          v24,
          recommendItemList,
          (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_ListViewItem___ctor___91654648);
        this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v24;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.itemList,
          (int32_t)v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v45,
            itemList,
            (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v46 = v45;
          v45.fields._list = 0;
          *(_QWORD *)&v45.fields._index = &v46;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v46,
                    (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v46.fields._current )
            {
              v31 = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
              if ( v46.fields._current->klass->_2.naturalAligment >= (unsigned int)v31
                && (FollowerSelectItemListViewItem_c *)v46.fields._current->klass->_2.typeHierarchy[v31 - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__UpdateRestriction(
                  (FollowerSelectItemListViewItem_o *)v46.fields._current,
                  0);
              }
            }
          }
          goto LABEL_40;
        }
      }
      else
      {
        originalItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.originalItemList;
        v33 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor_71841080(
          v33,
          originalItemList,
          (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_ListViewItem___ctor___91654648);
        this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v33;
        p_itemList = &this->fields.itemList;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.itemList,
          (int32_t)v33,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
        if ( *(_DWORD *)(v5 + 16) )
        {
          v41 = this->fields.itemList;
          v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                       (System_Collections_IEnumerable_o *)this->fields.grandItemList,
                                                                       (const MethodInfo_388851C *)Method_System_Linq_Enumerable_OfType_FollowerSelectItemListViewItem___);
          v43 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_FollowerSelectItemListViewItem__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v43,
            (Il2CppObject *)v5,
            Method_FollowerSelectItemListViewManager___c__DisplayClass84_0__SetClassId_b__0__,
            0);
          itemList = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Where_object_(
                                                                    v42,
                                                                    (System_Func_TSource__bool__o *)v43,
                                                                    (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_FollowerSelectItemListViewItem___);
          if ( !v41 )
            goto LABEL_42;
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)v41,
            (System_Collections_Generic_IEnumerable_T__o *)itemList,
            (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_ListViewItem__AddRange__);
        }
        itemList = (System_Collections_Generic_List_object__o *)*p_itemList;
        if ( *p_itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v45,
            itemList,
            (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v46 = v45;
          v45.fields._list = 0;
          *(_QWORD *)&v45.fields._index = &v46;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v46,
                    (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v46.fields._current )
            {
              v44 = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
              if ( v46.fields._current->klass->_2.naturalAligment >= (unsigned int)v44
                && (FollowerSelectItemListViewItem_c *)v46.fields._current->klass->_2.typeHierarchy[v44 - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__SetClassId(
                  (FollowerSelectItemListViewItem_o *)v46.fields._current,
                  *(_DWORD *)(v5 + 16),
                  0);
              }
            }
          }
          goto LABEL_40;
        }
      }
    }
LABEL_42:
    sub_2213CDC(itemList, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewManager__SetEmptyMessage(
        FollowerSelectItemListViewManager_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  bool IsRecommendSupportGroupType; // w8
  UILabel_o *emptyMessageLabel; // x19
  System_String_o **v9; // x8
  System_String_o *v10; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1

  if ( (byte_596AFAD & 1) == 0 )
  {
    sub_2213A60(&ClassButtonControlComponent_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_11502/*"RECOMMEND_SERVANT_EMPTY"*/);
    sub_2213A60(&StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_596AFAD = 1;
  }
  if ( !*(&ClassButtonControlComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classId, method);
  IsRecommendSupportGroupType = ClassButtonControlComponent__IsRecommendSupportGroupType(classId, 0);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( IsRecommendSupportGroupType )
    v9 = (System_String_o **)&StringLiteral_11502/*"RECOMMEND_SERVANT_EMPTY"*/;
  else
    v9 = (System_String_o **)&StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  v10 = *v9;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  v11 = LocalizationManager__Get(v10, 0);
  if ( !emptyMessageLabel )
    sub_2213CDC(v11, v12);
  UILabel__set_text(emptyMessageLabel, v11, 0);
}


void FollowerSelectItemListViewManager__SetFilterButtonImage(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *bonusFilterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_596AFC3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18284/*"btn_sefilter_2_on"*/);
    sub_2213A60(&StringLiteral_18283/*"btn_sefilter_2"*/);
    byte_596AFC3 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (bonusFilterSprite = this->fields.bonusFilterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !bonusFilterSprite) )
  {
    sub_2213CDC(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_18283/*"btn_sefilter_2"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_18284/*"btn_sefilter_2_on"*/;
  UISprite__set_spriteName(bonusFilterSprite, *v5, 0);
}


void FollowerSelectItemListViewManager__SetMode(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        FollowerSelectItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  FollowerSelectItemListViewManager__SetMode_39292556(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewManager__SetMode_39292556(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  char *ClippingObjectList; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x19
  int32_t v8; // w20
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  int32_t v12; // w8
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v16; // x23
  const MethodInfo *v17; // x3
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct FollowerSelectItemListViewObject_o *tutorialListViewObject; // x23
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  UnityEngine_MonoBehaviour_o *v27; // x0
  System_String_o *v28; // x1

  if ( (byte_596AFB7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_2213A60(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    sub_2213A60(&StringLiteral_11840/*"RequestInto"*/);
    byte_596AFB7 = 1;
  }
  if ( mode != 3 )
  {
    this->fields.initMode = mode;
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
    ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
    if ( mode == 1 )
    {
      v27 = (UnityEngine_MonoBehaviour_o *)this;
      v28 = (System_String_o *)StringLiteral_11840/*"RequestInto"*/;
    }
    else
    {
      if ( mode != 4 )
      {
        if ( mode == 2 )
          FollowerSelectItemListViewManager__RequestListObject_39293328(this, 3, v10);
        return;
      }
      ListViewManager__set_IsInput((ListViewManager_o *)this, 1, 0);
      ClippingObjectList = (char *)FollowerSelectItemListViewManager__get_ClippingObjectList(this, v11);
      if ( !ClippingObjectList )
        goto LABEL_32;
      v12 = *((_DWORD *)ClippingObjectList + 6);
      v13 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
      if ( v12 >= 1 )
      {
        v14 = 0;
        this->fields.callbackCount = v12;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v13,
                   v14,
                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
          v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v16, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0);
          if ( v14 )
          {
            if ( !Item )
              goto LABEL_32;
            FollowerSelectItemListViewObject__Init_39293820((FollowerSelectItemListViewObject_o *)Item, 2, v16, v17);
          }
          else
          {
            if ( !Item )
              goto LABEL_32;
            FollowerSelectItemListViewObject__Init_39293820((FollowerSelectItemListViewObject_o *)Item, 0, v16, v17);
            ClippingObjectList = (char *)this->fields.tutorialListViewObject;
            if ( !ClippingObjectList )
              goto LABEL_32;
            ClippingObjectList = (char *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)ClippingObjectList,
                                           0);
            if ( !ClippingObjectList )
              goto LABEL_32;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ClippingObjectList, 1, 0);
            ClippingObjectList = (char *)this->fields.tutorialListViewObject;
            if ( !ClippingObjectList )
              goto LABEL_32;
            *((_QWORD *)ClippingObjectList + 5) = this;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(ClippingObjectList + 40),
              (int32_t)this,
              v18,
              v19,
              v20,
              v21,
              v22,
              v23);
            tutorialListViewObject = this->fields.tutorialListViewObject;
            ClippingObjectList = (char *)FollowerSelectItemListViewObject__GetItem(
                                           (FollowerSelectItemListViewObject_o *)Item,
                                           v25);
            if ( !tutorialListViewObject )
              goto LABEL_32;
            ((void (__fastcall *)(struct FollowerSelectItemListViewObject_o *, char *, const MethodInfo *))tutorialListViewObject->klass->vtable._5_SetItem.methodPtr)(
              tutorialListViewObject,
              ClippingObjectList,
              tutorialListViewObject->klass->vtable._5_SetItem.method);
            ClippingObjectList = (char *)this->fields.tutorialListViewObject;
            if ( !ClippingObjectList )
              goto LABEL_32;
            FollowerSelectItemListViewObject__Init_39290824(
              (FollowerSelectItemListViewObject_o *)ClippingObjectList,
              6,
              v26);
          }
          if ( ++v14 >= v13->fields._size )
            return;
        }
      }
      v27 = (UnityEngine_MonoBehaviour_o *)this;
      v28 = (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/;
      this->fields.callbackCount = 1;
    }
    UnityEngine_MonoBehaviour__Invoke(v27, v28, 0.0, 0);
    return;
  }
  ClippingObjectList = (char *)FollowerSelectItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ClippingObjectList )
    goto LABEL_32;
  v7 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
  if ( *((int *)ClippingObjectList + 6) >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      ClippingObjectList = (char *)System_Collections_Generic_List_object___get_Item(
                                     v7,
                                     v8,
                                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
      if ( !ClippingObjectList )
        break;
      FollowerSelectItemListViewObject__Init_39290824((FollowerSelectItemListViewObject_o *)ClippingObjectList, 5, v9);
      if ( ++v8 >= v7->fields._size )
        return;
    }
LABEL_32:
    sub_2213CDC(ClippingObjectList, v6);
  }
}


void FollowerSelectItemListViewManager__SetMode_39293276(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  FollowerSelectItemListViewManager__SetMode_39292556(this, mode, v10);
}


void FollowerSelectItemListViewManager__SetObjectItem(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t initMode; // w8
  int32_t v9; // w1

  if ( (byte_596AFB4 & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewObject_TypeInfo);
    byte_596AFB4 = 1;
  }
  if ( obj
    && (naturalAligment = FollowerSelectItemListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (FollowerSelectItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  initMode = this->fields.initMode;
  if ( initMode == 3 )
  {
    if ( v7 )
    {
      v9 = 5;
      goto LABEL_17;
    }
LABEL_18:
    sub_2213CDC(v7, obj);
  }
  if ( initMode != 2 )
  {
    if ( v7 )
    {
      v9 = 2;
      goto LABEL_17;
    }
    goto LABEL_18;
  }
  if ( !v7 )
    goto LABEL_18;
  v9 = 3;
LABEL_17:
  FollowerSelectItemListViewObject__Init_39290824(
    (FollowerSelectItemListViewObject_o *)v7,
    v9,
    (const MethodInfo *)item);
}


void FollowerSelectItemListViewManager__SetSortButtonImage(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  ListViewSort_o *sort; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w20
  bool IsRecommendSupportGroupType; // w20
  __int64 v11; // x2
  UILabel_o *sortKindLabel; // x21
  UnityEngine_Object_o *sortOrderSprite; // x21
  struct ListViewSort_o *v14; // x8
  int32_t *p_otherSortKind; // x9
  int32_t v16; // w9
  System_String_o **v17; // x8
  struct ListViewSort_o *v18; // x8
  System_String_o **v19; // x9
  System_String_o **v20; // x10
  System_String_o **v21; // x8
  System_String_o **v22; // x8

  if ( (byte_596AFC7 & 1) == 0 )
  {
    sub_2213A60(&ClassButtonControlComponent_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18291/*"btn_sort_up"*/);
    sub_2213A60(&StringLiteral_18395/*"btn_txt_up"*/);
    sub_2213A60(&StringLiteral_18344/*"btn_txt_new"*/);
    sub_2213A60(&StringLiteral_18334/*"btn_txt_down"*/);
    sub_2213A60(&StringLiteral_18352/*"btn_txt_old"*/);
    sub_2213A60(&StringLiteral_18288/*"btn_sort_down"*/);
    byte_596AFC7 = 1;
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0, 0);
  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl )
    goto LABEL_41;
  currentCursor = classButtonControl->fields.currentCursor;
  if ( !*(&ClassButtonControlComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, v6, v7);
  IsRecommendSupportGroupType = ClassButtonControlComponent__IsRecommendSupportGroupType(currentCursor, 0);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    sortKindLabel = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, IsRecommendSupportGroupType, 0);
    if ( !sortKindLabel )
      goto LABEL_41;
    UILabel__set_text(sortKindLabel, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v11);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v14 = this->fields.sort;
    if ( IsRecommendSupportGroupType )
    {
      if ( !v14 )
        goto LABEL_41;
      p_otherSortKind = &v14->fields.otherSortKind;
    }
    else
    {
      if ( !v14 )
        goto LABEL_41;
      p_otherSortKind = &v14->fields.sortKind;
    }
    v16 = *p_otherSortKind;
    if ( v16 == 11 || v16 == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( sort )
      {
        v17 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_18352/*"btn_txt_old"*/ : &StringLiteral_18344/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v17, 0);
        v18 = this->fields.sort;
        if ( v18 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            v19 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
            v20 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
LABEL_37:
            if ( v18->fields.isAscendingOrder )
              v22 = v19;
            else
              v22 = v20;
            UISprite__set_spriteName((UISprite_o *)sort, *v22, 0);
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
        v21 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_18395/*"btn_txt_up"*/ : &StringLiteral_18334/*"btn_txt_down"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v21, 0);
        v18 = this->fields.sort;
        if ( v18 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            v19 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
            v20 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
            goto LABEL_37;
          }
        }
      }
    }
LABEL_41:
    sub_2213CDC(sort, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewManager__SortClass(
        FollowerSelectItemListViewManager_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_c *v5; // x0
  __int64 v6; // x1
  FollowerSelectItemListViewManager_c *v7; // x0
  int32_t followerClassId; // w21
  System_Collections_Generic_List_object__o *v9; // x20
  System_Collections_Generic_List_object__o *Instance; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x8
  int32_t klass_high; // w22
  int v14; // w28
  Il2CppObject *current; // x23
  __int64 naturalAligment; // x10
  QuestRestrictionInfo_o *SvtId; // x0
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *followerSelectItemOption; // x8
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596AFCA & 1) == 0 )
  {
    sub_2213A60(&ClassButtonControlComponent_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&FollowerSelectItemListViewItem_TypeInfo);
    sub_2213A60(&FollowerSelectItemListViewManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_596AFCA = 1;
  }
  v5 = FollowerSelectItemListViewManager_TypeInfo;
  memset(&v38, 0, sizeof(v38));
  if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, *(_QWORD *)&classPos, method);
    v5 = FollowerSelectItemListViewManager_TypeInfo;
  }
  if ( v5->static_fields->followerClassId != classPos )
  {
    if ( !*(&ClassButtonControlComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classPos, method);
    if ( !ClassButtonControlComponent__IsMixSupportGroupType(classPos, 0) )
    {
      v7 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v6, method);
        v7 = FollowerSelectItemListViewManager_TypeInfo;
      }
      followerClassId = v7->static_fields->followerClassId;
      if ( !*(&ClassButtonControlComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, v6, method);
      ClassButtonControlComponent__IsMixSupportGroupType(followerClassId, 0);
    }
  }
  FollowerSelectItemListViewManager__SetClassId(this, classPos, method);
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  Instance = (System_Collections_Generic_List_object__o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  v12 = Instance;
  Instance = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_51;
  klass_high = HIDWORD(v12[2].klass);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    Instance,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v14 = 0;
  v38 = v37;
  v37.fields._list = 0;
  *(_QWORD *)&v37.fields._index = &v38;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v38.fields._current;
    if ( v38.fields._current )
    {
      naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( v38.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (FollowerSelectItemListViewItem_c *)v38.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo )
      {
        SvtId = (QuestRestrictionInfo_o *)FollowerSelectItemListViewItem__get_SvtId(
                                            (FollowerSelectItemListViewItem_o *)v38.fields._current,
                                            0);
        if ( (int)SvtId >= 1 && !LOBYTE(current[16].monitor) )
        {
          followerSelectItemOption = this->fields.followerSelectItemOption;
          if ( !followerSelectItemOption )
            sub_2213CDC(SvtId, v18);
          if ( !followerSelectItemOption->fields.isUseGrandBoard
            || BYTE5(current[15].klass)
            || !BYTE6(current[15].klass) )
          {
            if ( klass_high < 1
              || (SvtId = this->fields.questRestrictionInfo) == 0
              || (SvtId = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsGrandServantRestriction(
                                                      SvtId,
                                                      klass_high,
                                                      0),
                  ((unsigned __int8)SvtId & 1) == 0)
              || BYTE5(current[15].klass) )
            {
              HIDWORD(current[1].klass) = v14;
              if ( !v9
                || (items = v9->fields._items,
                    v27 = Method_System_Collections_Generic_List_ListViewItem__Add__,
                    ++v9->fields._version,
                    !items) )
              {
                sub_2213CDC(SvtId, v18);
              }
              size = v9->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v9,
                  current,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
              }
              else
              {
                v29 = &items->obj.klass + size;
                v9->fields._size = size + 1;
                v29[4] = (Il2CppClass *)current;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)(v29 + 4),
                  (int32_t)current,
                  v19,
                  v20,
                  v21,
                  v22,
                  v23,
                  v24);
              }
              ++v14;
            }
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.itemList, (int32_t)v9, v30, v31, v32, v33, v34, v35);
  Instance = (System_Collections_Generic_List_object__o *)this->fields.sort;
  if ( !Instance )
    goto LABEL_51;
  if ( LODWORD(Instance[1].fields._items) == 11 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( (!questRestrictionInfo || !questRestrictionInfo->fields.isRestriction)
      && this->fields.isBonusFilterEnable
      && !ListViewSort__GetFilter((ListViewSort_o *)Instance, 18, 0) )
    {
      Instance = (System_Collections_Generic_List_object__o *)this->fields.sort;
      if ( !Instance )
        goto LABEL_51;
      if ( !ListViewSort__GetFilter((ListViewSort_o *)Instance, 19, 0) )
      {
        Instance = (System_Collections_Generic_List_object__o *)this->fields.sort;
        if ( !Instance )
          goto LABEL_51;
        if ( ListViewSort__GetFilter((ListViewSort_o *)Instance, 40, 0) )
        {
          Instance = (System_Collections_Generic_List_object__o *)this->fields.sort;
          if ( Instance )
          {
            ListViewSort__GetFilter((ListViewSort_o *)Instance, 41, 0);
            goto LABEL_50;
          }
LABEL_51:
          sub_2213CDC(Instance, v11);
        }
      }
    }
  }
LABEL_50:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void FollowerSelectItemListViewManager__Update(FollowerSelectItemListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ListViewManager__Update((ListViewManager_o *)this, 0);
  if ( !this->fields.isRefreshBtnHide )
    FollowerSelectItemListViewManager__UpdateRefreshButtonInfo(this, v3);
}


void FollowerSelectItemListViewManager__UpdateRefreshButtonInfo(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  FollowerSelectItemListViewManager_o *v3; // x19
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w20
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t RefreshRemain; // x0
  int64_t v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *v15; // x21
  __int64 v16; // x2
  UIWidget_o *refreshButtonSprite; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  NetworkManager_c *v20; // x0
  int64_t Time; // x0
  int64_t v22; // x21
  UILabel_o *refreshRemainLabel; // x22
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  Il2CppObject *Component_object; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppObject *v30; // x20
  int64_t v31; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_596AFCB & 1) == 0 )
  {
    sub_2213A60(&ClassButtonControlComponent_TypeInfo);
    sub_2213A60(&FollowerListRequest_TypeInfo);
    sub_2213A60(&FollowerRecommendSupportListRequest_TypeInfo);
    sub_2213A60(&FollowerSelectItemListViewManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_26484/*"{0}"*/);
    this = (FollowerSelectItemListViewManager_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596AFCB = 1;
  }
  classButtonControl = v3->fields.classButtonControl;
  if ( !classButtonControl )
    goto LABEL_59;
  currentCursor = classButtonControl->fields.currentCursor;
  if ( !*(&ClassButtonControlComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, method, v2);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(currentCursor, 0) )
  {
    if ( !*(&FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo, v6, v7);
    RefreshRemain = FollowerRecommendSupportListRequest__GetRefreshRemain(0);
  }
  else
  {
    if ( !*(&FollowerListRequest_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo, v6, v7);
    RefreshRemain = FollowerListRequest__getRefreshRemain(0);
  }
  v9 = RefreshRemain;
  if ( RefreshRemain <= 0 )
  {
    if ( !v3->fields.isRefreshClear )
      return;
    this = (FollowerSelectItemListViewManager_o *)v3->fields.refreshButtonObject;
    v3->fields.isRefreshClear = 0;
    if ( !this )
      goto LABEL_59;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v26);
    this = (FollowerSelectItemListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                    (UnityEngine_Object_o *)Component_object,
                                                    0,
                                                    0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_59;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0);
    }
    else
    {
      this = (FollowerSelectItemListViewManager_o *)v3->fields.refreshButtonSprite;
      if ( !this )
        goto LABEL_59;
      v32.fields.r = 1.0;
      v32.fields.g = 1.0;
      v32.fields.b = 1.0;
      v32.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this, v32, 0);
    }
    this = (FollowerSelectItemListViewManager_o *)v3->fields.refreshTitleObject;
    if ( this )
    {
      v30 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)this,
              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28, v29);
      this = (FollowerSelectItemListViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v30, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v30 )
          goto LABEL_59;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v30, 1, 0);
      }
      else
      {
        this = (FollowerSelectItemListViewManager_o *)v3->fields.refreshTitleSprite;
        if ( !this )
          goto LABEL_59;
        v33.fields.r = 1.0;
        v33.fields.g = 1.0;
        v33.fields.b = 1.0;
        v33.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v33, 0);
      }
      this = (FollowerSelectItemListViewManager_o *)v3->fields.refreshRemainLabel;
      if ( this )
      {
        this = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          this = (FollowerSelectItemListViewManager_o *)v3->fields.refreshRemainLabel;
          if ( this )
          {
            UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
            return;
          }
        }
      }
    }
LABEL_59:
    sub_2213CDC(this, method);
  }
  this = (FollowerSelectItemListViewManager_o *)v3->fields.refreshButtonObject;
  if ( !this )
    goto LABEL_59;
  v12 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  this = (FollowerSelectItemListViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_59;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v12, 0, 0);
  }
  this = (FollowerSelectItemListViewManager_o *)v3->fields.refreshTitleObject;
  if ( !this )
    goto LABEL_59;
  v15 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
  this = (FollowerSelectItemListViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v15 )
      goto LABEL_59;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v15, 0, 0);
  }
  refreshButtonSprite = (UIWidget_o *)v3->fields.refreshButtonSprite;
  this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
  if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, method, v16);
  if ( !refreshButtonSprite )
    goto LABEL_59;
  UIWidget__set_color(
    refreshButtonSprite,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->REFRESH_DARK_COLOR,
    0);
  this = (FollowerSelectItemListViewManager_o *)v3->fields.refreshTitleSprite;
  if ( !this )
    goto LABEL_59;
  UIWidget__set_color(
    (UIWidget_o *)this,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->REFRESH_DARK_COLOR,
    0);
  v20 = NetworkManager_TypeInfo;
  v3->fields.isRefreshClear = 1;
  if ( !*(&v20->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v20, v18, v19);
  Time = NetworkManager__getTime(0);
  if ( v3->fields.refreshCheckTime != Time )
  {
    v22 = Time;
    this = (FollowerSelectItemListViewManager_o *)v3->fields.refreshRemainLabel;
    if ( this )
    {
      this = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        refreshRemainLabel = v3->fields.refreshRemainLabel;
        v31 = v9;
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v31);
        this = (FollowerSelectItemListViewManager_o *)System_String__Format(
                                                        (System_String_o *)StringLiteral_26484/*"{0}"*/,
                                                        v24,
                                                        0);
        if ( refreshRemainLabel )
        {
          UILabel__set_text(refreshRemainLabel, (System_String_o *)this, 0);
          v3->fields.refreshCheckTime = v22;
          return;
        }
      }
    }
    goto LABEL_59;
  }
}


void FollowerSelectItemListViewManager__add_callbackFunc(
        FollowerSelectItemListViewManager_o *this,
        FollowerSelectItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  FollowerSelectItemListViewManager_o *v11; // x0
  FollowerSelectItemListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596AF9E & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    byte_596AF9E = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (FollowerSelectItemListViewManager_CallbackFunc_c *)v6->klass != FollowerSelectItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FollowerSelectItemListViewManager_o *)sub_221405C(
                                                 v6,
                                                 FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                 v7,
                                                 v8);
  FollowerSelectItemListViewManager__remove_callbackFunc(v11, v12, v13);
}


void FollowerSelectItemListViewManager__add_callbackFunc2(
        FollowerSelectItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  FollowerSelectItemListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596AFA0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596AFA0 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FollowerSelectItemListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  FollowerSelectItemListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_FollowerSelectItemListViewObject__o *FollowerSelectItemListViewManager__get_ClippingObjectList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596AFA5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AFA5 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v12);
      Item = (ListViewItem_o *)FollowerSelectItemListViewObject__GetItem(
                                 (FollowerSelectItemListViewObject_o *)Component_object,
                                 v12);
      if ( !Item )
        sub_2213CDC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50835204((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_2213CDC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_2213CDC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FollowerSelectItemListViewObject__o *)v3;
}


System_Collections_Generic_List_FollowerSelectItemListViewObject__o *FollowerSelectItemListViewManager__get_ObjectList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596AFA4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AFA4 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FollowerSelectItemListViewObject__o *)v3;
}


void FollowerSelectItemListViewManager__remove_callbackFunc(
        FollowerSelectItemListViewManager_o *this,
        FollowerSelectItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  FollowerSelectItemListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596AF9F & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    byte_596AF9F = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (FollowerSelectItemListViewManager_CallbackFunc_c *)v6->klass != FollowerSelectItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FollowerSelectItemListViewManager_o *)sub_221405C(
                                                 v6,
                                                 FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                 v7,
                                                 v8);
  FollowerSelectItemListViewManager__add_callbackFunc2(v11, v12, v13);
}


void FollowerSelectItemListViewManager__remove_callbackFunc2(
        FollowerSelectItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_596AFA1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596AFA1 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (const MethodInfo *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  FollowerSelectItemListViewManager__DeleteContinueData(v11);
}


void FollowerSelectItemListViewManager_CallbackFunc___ctor(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2000D60;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_2000D00;
}


System_IAsyncResult_o *FollowerSelectItemListViewManager_CallbackFunc__BeginInvoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        int32_t param,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[2]; // [xsp+0h] [xbp-60h] BYREF
  __int128 v12; // [xsp+10h] [xbp-50h]
  int32_t v13; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  v15 = kind;
  v13 = param;
  if ( (byte_596AFD4 & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewManager_ResultKind_TypeInfo);
    byte_596AFD4 = 1;
  }
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(FollowerSelectItemListViewManager_ResultKind_TypeInfo, &v15);
  v11[1] = j_il2cpp_value_box_0(qword_5984348, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(qword_5984348, &v13);
  return (System_IAsyncResult_o *)sub_2213A14(this, v11, callback, object);
}


void FollowerSelectItemListViewManager_CallbackFunc__EndInvoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void FollowerSelectItemListViewManager_CallbackFunc__Invoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        int32_t param,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    result,
    param,
    this->fields.method);
}


void FollowerSelectItemListViewManager_FollowerSelectItemOption___ctor(
        FollowerSelectItemListViewManager_FollowerSelectItemOption_o *this,
        const MethodInfo *method)
{
  this->fields.isReleasedClassBoard = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FollowerSelectItemListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596AFD5 & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewManager___c_TypeInfo);
    byte_596AFD5 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(FollowerSelectItemListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FollowerSelectItemListViewManager___c_TypeInfo->static_fields->__9 = (struct FollowerSelectItemListViewManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)FollowerSelectItemListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FollowerSelectItemListViewManager___c___ctor(
        FollowerSelectItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


ListViewSort_o *FollowerSelectItemListViewManager___c____cctor_b__136_0(
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

  if ( (byte_596AFD6 & 1) == 0 )
  {
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&StringLiteral_7066/*"FollowerSelectEventQuest"*/);
    sub_2213A60(&StringLiteral_7067/*"FollowerSelectMainQuest"*/);
    byte_596AFD6 = 1;
  }
  if ( questType )
  {
    if ( questType != 1 )
    {
      v8 = sub_2213A74(&System_NotImplementedException_TypeInfo);
      v9 = (System_NotImplementedException_o *)sub_2213CCC(v8);
      System_NotImplementedException___ctor(v9, 0);
      v10 = sub_2213A74(&Method_FollowerSelectItemListViewManager___c___cctor_b__136_0__);
      sub_2213BA0(v9, v10);
    }
    v4 = &StringLiteral_7066/*"FollowerSelectEventQuest"*/;
  }
  else
  {
    v4 = &StringLiteral_7067/*"FollowerSelectMainQuest"*/;
  }
  v5 = (System_String_o *)*v4;
  v6 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v6, v5, 11, 0, 0);
  return v6;
}


void FollowerSelectItemListViewManager___c__DisplayClass84_0___ctor(
        FollowerSelectItemListViewManager___c__DisplayClass84_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool FollowerSelectItemListViewManager___c__DisplayClass84_0___SetClassId_b__0(
        FollowerSelectItemListViewManager___c__DisplayClass84_0_o *this,
        FollowerSelectItemListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return FollowerSelectItemListViewItem__get_GrandFollowerClassId(x, 0) == this->fields.followerClassId;
}