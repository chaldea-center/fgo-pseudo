void __fastcall FollowerSelectItemListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  FollowerSelectItemListViewManager___c_c *v10; // x0
  Il2CppObject *v11; // x19
  System_Func_T__TResult__o *v12; // x20
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4B113BA & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerSelectItemListViewManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_FollowerSelectItemListViewManager___c___cctor_b__133_0__, v6, v7);
    sub_1BCA7E0(&FollowerSelectItemListViewManager___c_TypeInfo, v8, v9);
    byte_4B113BA = 1;
  }
  v10 = FollowerSelectItemListViewManager___c_TypeInfo;
  if ( !FollowerSelectItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager___c_TypeInfo, v1);
    v10 = FollowerSelectItemListViewManager___c_TypeInfo;
  }
  v11 = (Il2CppObject *)v10->static_fields->__9;
  v12 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                       System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo,
                                       v1,
                                       v2,
                                       v3);
  System_Func_Int32Enum__object____ctor(v12, v11, Method_FollowerSelectItemListViewManager___c___cctor_b__133_0__, 0LL);
  FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT = (struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)v12;
  sub_1BCA784(FollowerSelectItemListViewManager_TypeInfo->static_fields, v12);
  static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->lastSelectedQuestId = -1LL;
  static_fields->REFRESH_DARK_COLOR = (struct UnityEngine_Color_o)xmmword_BD2CA0;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Component_o *changeSkillButton; // x0
  UnityEngine_Component_o *sortKindButton; // x20
  __int64 v14; // x1
  UISprite_o *changeSkillButtonSprite; // x21
  Il2CppObject *Component_object; // x19

  if ( (byte_4B1138F & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v4, v5);
    sub_1BCA7E0(&StringLiteral_17649/*"btn_bg_12"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17710/*"btn_sefilter_2"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17849/*"buttontxt_formation_19"*/, v10, v11);
    byte_4B1138F = 1;
  }
  changeSkillButton = (UnityEngine_Component_o *)this->fields.changeSkillButton;
  if ( !changeSkillButton )
    goto LABEL_11;
  sortKindButton = (UnityEngine_Component_o *)this->fields.sortKindButton;
  changeSkillButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(changeSkillButton, 0LL);
  if ( !changeSkillButton )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSkillButton, 1, 0LL);
  changeSkillButtonSprite = this->fields.changeSkillButtonSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14);
  AtlasManager__SetEventSprite(changeSkillButtonSprite, (System_String_o *)StringLiteral_17849/*"buttontxt_formation_19"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.bonusFilterSprite, (System_String_o *)StringLiteral_17710/*"btn_sefilter_2"*/, 0LL);
  changeSkillButton = (UnityEngine_Component_o *)this->fields.bonusFilterSprite;
  if ( !changeSkillButton
    || (changeSkillButton = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))changeSkillButton->klass[2]._1.typeMetadataHandle)(
                                                         changeSkillButton,
                                                         changeSkillButton->klass[2]._1.interopData),
        !sortKindButton)
    || (Component_object = UnityEngine_Component__GetComponent_object_(
                             sortKindButton,
                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        changeSkillButton = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(
                                                         (UISprite_o *)Component_object,
                                                         (System_String_o *)StringLiteral_17649/*"btn_bg_12"*/,
                                                         0LL),
        !Component_object) )
  {
LABEL_11:
    sub_1BCAA3C(changeSkillButton, method);
  }
  ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Component_object->klass->vtable[33].method)(
    Component_object,
    Component_object->klass->vtable[34].methodPtr);
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
    sub_1BCAA3C(classButtonControl, *(_QWORD *)&classPos);
  }
  return sort->fields.sortKind != 11;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__CloseSortDialog(
        FollowerSelectItemListViewManager_o *this,
        bool isResult,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B113AC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isResult, method);
    byte_4B113AC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  CommonUI__CloseOtherUserSortDialog((CommonUI_o *)Instance, 0LL, 0LL);
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
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  System_Collections_Generic_List_object__o *v107; // x24
  __int64 v108; // x1
  __int64 v109; // x2
  __int64 v110; // x3
  System_Collections_Generic_List_object__o *v111; // x24
  __int64 v112; // x1
  __int64 v113; // x2
  __int64 v114; // x3
  System_Collections_Generic_List_object__o *v115; // x24
  __int64 ReturnTypeByQuestId; // x0
  __int64 v117; // x1
  FollowerSelectItemListViewManager_c *v118; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct ListViewSort_o *v120; // x0
  struct ListViewSort_o **p_sort; // x24
  const MethodInfo *v122; // x4
  __int64 v123; // x1
  int32_t InitialDisplayClass; // w25
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
  __int64 v126; // x1
  System_Int32_array *OngoingQuestTargetEventIds; // x25
  __int64 v128; // x1
  __int64 v129; // x2
  __int64 v130; // x3
  EventUpValSetupInfo_o *v131; // x26
  __int64 v132; // x8
  __int64 v133; // x26
  unsigned __int64 v134; // x20
  int32_t v135; // w0
  ClassButtonControlComponent_o *classButtonControl; // x24
  __int64 v137; // x1
  __int64 v138; // x2
  __int64 v139; // x3
  ClassButtonControlComponent_CallbackFunc_o *v140; // x26
  ClassButtonControlComponent_o *v141; // x24
  const MethodInfo *v142; // x2
  QuestPhaseEntity_o *v143; // x29
  long double v144; // q0
  __int64 v145; // x0
  __int64 v146; // x0
  Il2CppObject *MasterData_object; // x23
  FollowerInfo_array *QuestFollowerList; // x27
  int v149; // w20
  QuestRestrictionInfo_o *v150; // x19
  bool IsMyServantOrNpcRestriction_41192312; // w26
  BalanceConfig_c *v152; // x0
  int32_t ClassBoardReleaseQuestId; // w24
  __int64 v154; // x1
  bool IsQuestClear_38310172; // w24
  __int64 v156; // x8
  FollowerSelectItemListViewManager_o *v157; // x19
  QuestRestrictionInfo_o *v158; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v159; // x28
  unsigned __int64 v160; // x21
  FollowerInfo_o *v161; // x24
  __int64 v162; // x25
  int32_t v163; // w0
  System_Int32_array *NpcServantIndividuality; // x0
  __int64 v165; // x2
  __int64 v166; // x3
  bool IsRecommendedFollower; // w19
  __int64 v168; // x26
  __int64 v169; // x28
  int32_t v170; // w0
  System_Collections_Generic_List_object__o *v171; // x25
  char v172; // w20
  ClassBoardClassMaster_o *v173; // x27
  QuestPhaseEntity_o *v174; // x19
  int32_t v175; // w0
  ServantLeaderInfo_o *ServantLeaderInfo; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v177; // x28
  __int64 v178; // x26
  __int64 v179; // x29
  int32_t ClassBoardBaseId; // w26
  __int64 v181; // x1
  Il2CppObject *Master_object; // x28
  __int64 v183; // x2
  __int64 v184; // x3
  ClassBoardInfo_o *v185; // x20
  QuestPhaseEntity_o *v186; // x23
  int32_t v187; // w29
  Il2CppObject *v188; // x26
  __int64 v189; // x0
  System_Int32_array *OpenClassIdArrayFromBaseId; // x0
  struct System_Object_array *items; // x8
  _QWORD *v192; // x9
  __int64 size; // x10
  Il2CppClass **v194; // x0
  System_Object_array *v195; // x0
  __int64 v196; // x1
  __int64 v197; // x2
  __int64 v198; // x3
  FollowerSelectItemListViewManager_c *v199; // x0
  int32_t v200; // w28
  EventUpValSetupInfo_o *setupInfo; // x22
  struct System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x20
  bool isServantEquipBonusFilterEnable; // w23
  bool isServantBonusFilterEnable; // w26
  bool isBonusFilterEnable; // w27
  FollowerSelectItemListViewItem_o *v206; // x25
  __int64 v207; // x8
  _QWORD *v208; // x9
  __int64 v209; // x10
  __int64 v210; // x8
  __int64 v211; // x8
  _QWORD *v212; // x9
  __int64 v213; // x10
  __int64 v214; // x8
  __int64 v215; // x8
  _QWORD *v216; // x9
  __int64 v217; // x10
  __int64 v218; // x8
  int v219; // w20
  bool v220; // w8
  FollowerSelectItemListViewManager_o *v221; // x20
  Il2CppClass *klass; // x23
  int namespaze; // w8
  Il2CppObject *v224; // x24
  void **v225; // x8
  Il2CppObject *v226; // x0
  __int64 v227; // x1
  Il2CppObject *v228; // x25
  __int64 v229; // x27
  BalanceConfig_c *v230; // x0
  struct BalanceConfig_StaticFields *v231; // x9
  int32_t FixEventSupportDeckNum; // w25
  int32_t FixMainSupportDeckNum; // w26
  __int64 v234; // x2
  __int64 v235; // x3
  int32_t deckPriority; // w28
  unsigned __int64 v237; // x21
  System_Collections_Generic_Dictionary_int__int__o *v238; // x25
  int32_t v239; // w22
  bool v240; // w29
  bool v241; // w27
  FollowerSelectItemListViewItem_o *v242; // x26
  __int64 v243; // x8
  _QWORD *v244; // x9
  __int64 v245; // x10
  __int64 v246; // x8
  struct BalanceConfig_StaticFields *v247; // x8
  int32_t v248; // w26
  int32_t v249; // w28
  __int64 v250; // x2
  __int64 v251; // x3
  int32_t v252; // w26
  unsigned __int64 v253; // x22
  int32_t v254; // w21
  Il2CppClass *v255; // x21
  EventUpValSetupInfo_o *v256; // x23
  bool v257; // w24
  System_Collections_Generic_Dictionary_int__int__o *v258; // x19
  int v259; // w27
  bool v260; // w25
  bool v261; // w29
  FollowerSelectItemListViewItem_o *v262; // x28
  __int64 v263; // x8
  _QWORD *v264; // x9
  __int64 v265; // x10
  __int64 v266; // x8
  Il2CppClass *v267; // x26
  unsigned __int64 namespaze_low; // x8
  unsigned __int64 v269; // x27
  __int64 v270; // x9
  __int64 v271; // x9
  void **v272; // x8
  FollowerInfo_o *v273; // x8
  Il2CppObject *v274; // x0
  __int64 v275; // x1
  __int64 v276; // x21
  BalanceConfig_c *v277; // x0
  struct BalanceConfig_StaticFields *v278; // x9
  int32_t v279; // w24
  int32_t v280; // w25
  __int64 v281; // x2
  __int64 v282; // x3
  int32_t v283; // w25
  unsigned __int64 v284; // x22
  System_Collections_Generic_Dictionary_int__int__o *v285; // x23
  int32_t v286; // w29
  bool v287; // w21
  bool v288; // w28
  bool v289; // w19
  FollowerSelectItemListViewItem_o *v290; // x24
  __int64 v291; // x8
  _QWORD *v292; // x9
  __int64 v293; // x10
  __int64 v294; // x8
  struct BalanceConfig_StaticFields *v295; // x8
  int32_t v296; // w24
  int32_t v297; // w25
  __int64 v298; // x2
  __int64 v299; // x3
  int32_t v300; // w25
  unsigned __int64 v301; // x23
  int32_t v302; // w22
  EventUpValSetupInfo_o *v303; // x19
  int32_t v304; // w21
  bool v305; // w26
  System_Collections_Generic_Dictionary_int__int__o *v306; // x27
  int v307; // w22
  bool v308; // w29
  bool v309; // w24
  FollowerSelectItemListViewItem_o *v310; // x28
  __int64 v311; // x8
  _QWORD *v312; // x9
  __int64 v313; // x10
  __int64 v314; // x8
  Il2CppClass *v315; // x19
  unsigned __int64 v316; // x8
  unsigned __int64 v317; // x22
  Il2CppType *p_byval_arg; // x20
  __int64 v319; // x9
  __int64 v320; // x9
  __int64 v321; // x26
  __int64 v322; // x8
  __int64 v323; // x8
  __int64 v324; // x8
  __int64 v325; // x27
  __int64 v326; // x28
  __int64 v327; // x2
  __int64 v328; // x3
  FollowerInfo_o *v329; // x27
  int32_t v330; // w21
  bool v331; // w19
  bool v332; // w28
  bool v333; // w25
  EventUpValSetupInfo_o *v334; // x29
  System_Collections_Generic_Dictionary_int__int__o *v335; // x24
  FollowerSelectItemListViewItem_o *v336; // x26
  __int64 v337; // x8
  _QWORD *v338; // x9
  __int64 v339; // x10
  __int64 v340; // x8
  __int64 v341; // x1
  const MethodInfo *v342; // x2
  FollowerSelectItemListViewManager_c *v343; // x0
  const MethodInfo *v344; // x2
  const MethodInfo *v345; // x1
  struct UIScrollView_o *scrollView; // x8
  __int64 v347; // x0
  int32_t supportDeckId; // [xsp+38h] [xbp-178h]
  int32_t supportDeckIda; // [xsp+38h] [xbp-178h]
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary; // [xsp+48h] [xbp-168h]
  UserFollowMaster_o *v351; // [xsp+70h] [xbp-140h]
  bool HasFlag_40199512; // [xsp+78h] [xbp-138h]
  unsigned int v353; // [xsp+7Ch] [xbp-134h]
  struct System_Collections_Generic_List_ListViewItem__o **p_recommendItemList; // [xsp+80h] [xbp-130h]
  bool v357; // [xsp+90h] [xbp-120h]
  __int64 v358; // [xsp+90h] [xbp-120h]
  int v359; // [xsp+90h] [xbp-120h]
  Il2CppObject *v360; // [xsp+98h] [xbp-118h]
  __int64 v361; // [xsp+98h] [xbp-118h]
  __int64 v362; // [xsp+98h] [xbp-118h]
  struct System_Collections_Generic_List_ListViewItem__o **p_originalItemList; // [xsp+A0h] [xbp-110h]
  FollowerInfo_array *v364; // [xsp+A8h] [xbp-108h]
  int v365; // [xsp+A8h] [xbp-108h]
  Il2CppClass *v366; // [xsp+A8h] [xbp-108h]
  bool isReleasedClassBoard; // [xsp+B0h] [xbp-100h]
  bool v368; // [xsp+B0h] [xbp-100h]
  __int64 v369; // [xsp+B0h] [xbp-100h]
  unsigned __int64 v370; // [xsp+B0h] [xbp-100h]
  EventUpValSetupInfo_o *v371; // [xsp+B8h] [xbp-F8h]
  EventUpValSetupInfo_o *v372; // [xsp+B8h] [xbp-F8h]
  EventUpValSetupInfo_o *v373; // [xsp+B8h] [xbp-F8h]
  EventUpValSetupInfo_o *v374; // [xsp+B8h] [xbp-F8h]
  bool v375; // [xsp+C0h] [xbp-F0h]
  __int64 v376; // [xsp+C0h] [xbp-F0h]
  int32_t pos; // [xsp+C8h] [xbp-E8h]
  FollowerInfo_o **posa; // [xsp+C8h] [xbp-E8h]
  FollowerInfo_o **posb; // [xsp+C8h] [xbp-E8h]
  _BOOL4 followerClassId; // [xsp+D0h] [xbp-E0h]
  EventUpValSetupInfo_o *followerClassIdc; // [xsp+D0h] [xbp-E0h]
  int32_t followerClassIda; // [xsp+D0h] [xbp-E0h]
  __int64 followerClassIdb; // [xsp+D0h] [xbp-E0h]
  struct System_Collections_Generic_List_ListViewItem__o **p_mixItemList; // [xsp+D8h] [xbp-D8h]
  UserFollowMaster_o *v385; // [xsp+D8h] [xbp-D8h]
  int32_t index; // [xsp+F8h] [xbp-B8h]
  FollowerInfo_o *indexc; // [xsp+F8h] [xbp-B8h]
  FollowerInfo_o *indexd; // [xsp+F8h] [xbp-B8h]
  FollowerInfo_o *indexe; // [xsp+F8h] [xbp-B8h]
  int32_t indexa; // [xsp+F8h] [xbp-B8h]
  Il2CppClass *indexb; // [xsp+F8h] [xbp-B8h]
  FollowerInfo_o **m_Items; // [xsp+100h] [xbp-B0h]
  int32_t v397; // [xsp+100h] [xbp-B0h]
  int32_t v398; // [xsp+100h] [xbp-B0h]
  int32_t v399; // [xsp+100h] [xbp-B0h]
  FollowerInfo_o *v400; // [xsp+100h] [xbp-B0h]
  bool v401; // [xsp+100h] [xbp-B0h]
  Il2CppObject *v403; // [xsp+110h] [xbp-A0h] BYREF
  Il2CppObject *v404; // [xsp+118h] [xbp-98h] BYREF
  Il2CppObject *v405; // [xsp+120h] [xbp-90h] BYREF
  UserClassBoardSquareEntity_o *v406; // [xsp+128h] [xbp-88h] BYREF
  Il2CppObject *v407; // [xsp+130h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+138h] [xbp-78h] BYREF
  Il2CppObject *v409; // [xsp+140h] [xbp-70h] BYREF
  NpcFollowerEntity_o *v410; // [xsp+148h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v411; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v412; // 0:x0.16

  if ( (byte_4B11391 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    sub_1BCA7E0(&ClassButtonControlComponent_CallbackFunc_TypeInfo, v8, v9);
    sub_1BCA7E0(&ClassBoardInfo_TypeInfo, v10, v11);
    sub_1BCA7E0(&ClassButtonControlComponent_TypeInfo, v12, v13);
    sub_1BCA7E0(&CondType_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___, v18, v19);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v20, v21);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v22, v23);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserFollowMaster___, v24, v25);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v26, v27);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventQuestMaster___, v28, v29);
    sub_1BCA7E0(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v30, v31);
    sub_1BCA7E0(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, v32, v33);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v34, v35);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, v36, v37);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserFollowerMaster___, v38, v39);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___, v40, v41);
    sub_1BCA7E0(&DataManager_TypeInfo, v42, v43);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v44, v45);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v46, v47);
    sub_1BCA7E0(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v48,
      v49);
    sub_1BCA7E0(
      &Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__,
      v50,
      v51);
    sub_1BCA7E0(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v52, v53);
    sub_1BCA7E0(
      &Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__,
      v54,
      v55);
    sub_1BCA7E0(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v56,
      v57);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v58, v59);
    sub_1BCA7E0(&EventUpValSetupInfo_TypeInfo, v60, v61);
    sub_1BCA7E0(&FollowerSelectItemListViewItem_TypeInfo, v62, v63);
    sub_1BCA7E0(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v64, v65);
    sub_1BCA7E0(&FollowerSelectItemListViewManager_TypeInfo, v66, v67);
    sub_1BCA7E0(&int___TypeInfo, v68, v69);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v70, v71);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardInfo__Add__, v72, v73);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__, v74, v75);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardInfo___ctor__, v76, v77);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v78, v79);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v80, v81);
    sub_1BCA7E0(&System_Collections_Generic_List_ListViewItem__TypeInfo, v82, v83);
    sub_1BCA7E0(&System_Collections_Generic_List_ClassBoardInfo__TypeInfo, v84, v85);
    sub_1BCA7E0(&System_Math_TypeInfo, v86, v87);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v88, v89);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v90, v91);
    sub_1BCA7E0(&ServantLeaderInfo___TypeInfo, v92, v93);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v94, v95);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v96, v97);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v98, v99);
    sub_1BCA7E0(&StringLiteral_3335/*"BonusFilterEventId"*/, v100, v101);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v102, v103);
    byte_4B11391 = 1;
  }
  v409 = 0LL;
  v410 = 0LL;
  v407 = 0LL;
  entity = 0LL;
  v405 = 0LL;
  v406 = 0LL;
  v403 = 0LL;
  v404 = 0LL;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BCA784(&this->fields.questRestrictionInfo, questRestrictionInfo);
  v107 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                        v104,
                                                        v105,
                                                        v106);
  System_Collections_Generic_List_object____ctor(
    v107,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.mixItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v107;
  p_mixItemList = &this->fields.mixItemList;
  sub_1BCA784(&this->fields.mixItemList, v107);
  v111 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                        v108,
                                                        v109,
                                                        v110);
  System_Collections_Generic_List_object____ctor(
    v111,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.originalItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v111;
  p_originalItemList = &this->fields.originalItemList;
  sub_1BCA784(&this->fields.originalItemList, v111);
  v115 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                        v112,
                                                        v113,
                                                        v114);
  System_Collections_Generic_List_object____ctor(
    v115,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.recommendItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v115;
  p_recommendItemList = &this->fields.recommendItemList;
  sub_1BCA784(&this->fields.recommendItemList, v115);
  ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0LL);
  v118 = FollowerSelectItemListViewManager_TypeInfo;
  v353 = ReturnTypeByQuestId;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v117);
    v118 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v118->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT )
    goto LABEL_350;
  v120 = (struct ListViewSort_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))LIST_VIEW_SORT->fields.m_target)(
                                    LIST_VIEW_SORT->fields.original_method_info,
                                    v353,
                                    *(_QWORD *)&LIST_VIEW_SORT->fields.extra_arg);
  this->fields.sort = v120;
  p_sort = &this->fields.sort;
  ReturnTypeByQuestId = sub_1BCA784(&this->fields.sort, v120);
  if ( !this->fields.sort )
    goto LABEL_350;
  InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                          this,
                          questId,
                          questPhase,
                          this->fields.sort->fields.isRequestLoad,
                          v122);
  static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  static_fields->followerClassId = InitialDisplayClass;
  static_fields->lastSelectedQuestId = questId;
  static_fields->lastSelectedQuestPhase = questPhase;
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, v123);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(InitialDisplayClass, 0LL) )
    this->fields.isGetRecommendSupport = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v126);
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_350;
  OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                 (EventQuestMaster_o *)ReturnTypeByQuestId,
                                 questId,
                                 questPhase,
                                 0LL,
                                 0LL);
  v131 = (EventUpValSetupInfo_o *)sub_1BCAA2C(EventUpValSetupInfo_TypeInfo, v128, v129, v130);
  EventUpValSetupInfo___ctor_39629568(v131, OngoingQuestTargetEventIds, 0, questId, questPhase, 0LL);
  this->fields.setupInfo = v131;
  ReturnTypeByQuestId = sub_1BCA784(&this->fields.setupInfo, v131);
  if ( !OngoingQuestTargetEventIds )
    goto LABEL_350;
  if ( *(_QWORD *)&OngoingQuestTargetEventIds->max_length )
  {
    ReturnTypeByQuestId = (__int64)UnityEngine_PlayerPrefs__GetString_70112520(
                                     (System_String_o *)StringLiteral_3335/*"BonusFilterEventId"*/,
                                     0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_350;
    if ( *(int *)(ReturnTypeByQuestId + 16) < 1 )
      goto LABEL_24;
    ReturnTypeByQuestId = (__int64)System_String__Split((System_String_o *)ReturnTypeByQuestId, 0x2Cu, 0, 0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_350;
    v132 = *(_QWORD *)(ReturnTypeByQuestId + 24);
    v133 = ReturnTypeByQuestId;
    if ( (int)v132 < 1 )
    {
LABEL_24:
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_350;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 18, 0, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_350;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 19, 0, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_350;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 20, 0, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_350;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 40, 1, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_350;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 41, 1, 0LL);
    }
    else
    {
      v134 = 0LL;
      while ( 1 )
      {
        if ( v134 >= (unsigned int)v132 )
          goto LABEL_351;
        v135 = System_Int32__Parse(*(System_String_o **)(v133 + 32 + 8 * v134), 0LL);
        ReturnTypeByQuestId = System_Linq_Enumerable__Contains_int_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)OngoingQuestTargetEventIds,
                                v135,
                                (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (ReturnTypeByQuestId & 1) != 0 )
          break;
        LODWORD(v132) = *(_DWORD *)(v133 + 24);
        if ( (__int64)++v134 >= (int)v132 )
          goto LABEL_24;
      }
    }
  }
  ReturnTypeByQuestId = (__int64)*p_sort;
  if ( !*p_sort )
    goto LABEL_350;
  ListViewSort__Load((ListViewSort_o *)ReturnTypeByQuestId, 0LL);
  classButtonControl = this->fields.classButtonControl;
  v140 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                         ClassButtonControlComponent_CallbackFunc_TypeInfo,
                                                         v137,
                                                         v138,
                                                         v139);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v140,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_350;
  ClassButtonControlComponent__init(classButtonControl, v140, questId, questPhase, 0, 0LL);
  this->fields.isInput = 0;
  ReturnTypeByQuestId = (__int64)FollowerSelectItemListViewManager_TypeInfo;
  v141 = this->fields.classButtonControl;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v117);
  if ( !v141 )
    goto LABEL_350;
  ClassButtonControlComponent__setCursor(
    v141,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, OngoingQuestTargetEventIds, v142);
  ReturnTypeByQuestId = (__int64)this->fields.bonusFilterKindButton;
  if ( !ReturnTypeByQuestId )
    goto LABEL_350;
  ReturnTypeByQuestId = (__int64)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)ReturnTypeByQuestId,
                                   0LL);
  if ( !ReturnTypeByQuestId )
    goto LABEL_350;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)ReturnTypeByQuestId,
    this->fields.isBonusFilterEnable,
    0LL);
  if ( this->fields.isBonusFilterEnable )
  {
    ReturnTypeByQuestId = (__int64)this->fields.bonusFilterKindLabel;
    if ( !ReturnTypeByQuestId )
      goto LABEL_350;
    UILabel__set_text((UILabel_o *)ReturnTypeByQuestId, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  this->fields.isRefreshBtnHide = 0;
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId
    || (ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0 )
  {
LABEL_350:
    sub_1BCAA3C(ReturnTypeByQuestId, v117);
  }
  v143 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)ReturnTypeByQuestId, questId, questPhase, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v143 )
    goto LABEL_345;
  v145 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v145 + 309) & 1) == 0 )
    v145 = sub_1C1C6BC(v144);
  v146 = *(_QWORD *)(*(_QWORD *)(v145 + 192) + 16LL);
  if ( (*(_BYTE *)(v146 + 309) & 1) == 0 )
    v146 = sub_1C1C6BC(v144);
  ReturnTypeByQuestId = **(_QWORD **)(v146 + 184);
  if ( !ReturnTypeByQuestId )
    goto LABEL_350;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ReturnTypeByQuestId,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_350;
  ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_350;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)ReturnTypeByQuestId,
                        questId,
                        questPhase,
                        0LL);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_350;
  v149 = *(_DWORD *)(ReturnTypeByQuestId + 48);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_350;
  pos = *(_DWORD *)(ReturnTypeByQuestId + 52);
  if ( v149 < 1 )
  {
    v150 = questRestrictionInfo;
    IsMyServantOrNpcRestriction_41192312 = 0;
    goto LABEL_56;
  }
  v150 = questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    IsMyServantOrNpcRestriction_41192312 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41192312(
                                             questRestrictionInfo,
                                             pos,
                                             0LL);
LABEL_56:
    followerClassId = 0;
    if ( v150 && v149 <= 0 )
      followerClassId = QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL);
    goto LABEL_60;
  }
  IsMyServantOrNpcRestriction_41192312 = 0;
  followerClassId = 0;
LABEL_60:
  v152 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v117);
    v152 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v152->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v117);
  IsQuestClear_38310172 = CondType__IsQuestClear_38310172(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v154);
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  if ( !QuestFollowerList )
    goto LABEL_350;
  v156 = *(_QWORD *)&QuestFollowerList->max_length;
  v157 = this;
  v158 = questRestrictionInfo;
  if ( (int)v156 >= 1 )
  {
    v159 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
    v160 = 0LL;
    m_Items = QuestFollowerList->m_Items;
    index = 0;
    isReleasedClassBoard = IsQuestClear_38310172;
    v360 = MasterData_object;
    v364 = QuestFollowerList;
    v375 = IsMyServantOrNpcRestriction_41192312;
    v371 = (EventUpValSetupInfo_o *)ReturnTypeByQuestId;
    do
    {
      if ( v160 >= (unsigned int)v156 )
        goto LABEL_351;
      v161 = m_Items[v160];
      if ( IsMyServantOrNpcRestriction_41192312 )
      {
        if ( !v158 )
          goto LABEL_350;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v158->fields.questId, 0LL);
        if ( !v161 )
          goto LABEL_350;
        ReturnTypeByQuestId = (__int64)FollowerInfo__getServantLeaderInfo(v161, 0, ReturnTypeByQuestId, 0LL);
        if ( ReturnTypeByQuestId )
        {
          v162 = ReturnTypeByQuestId;
          ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !ReturnTypeByQuestId )
            goto LABEL_350;
          ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                           (DataManager_o *)ReturnTypeByQuestId,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
          if ( !ReturnTypeByQuestId )
            goto LABEL_350;
          ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                  &entity,
                                  v161->fields.npcFollowerSvtId,
                                  (const MethodInfo_31B3040 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
          if ( (ReturnTypeByQuestId & 1) != 0 )
          {
            v163 = FollowerInfo__GetReturnTypeByQuestId(v158->fields.questId, 0LL);
            NpcServantIndividuality = FollowerInfo__GetNpcServantIndividuality(v161, 0, v163, 0LL);
            goto LABEL_78;
          }
          if ( !v159 )
            goto LABEL_350;
          if ( DataMasterBase_object__object__long___TryGetEntity(
                 v159,
                 &v407,
                 v161->fields.npcFollowerSvtId,
                 (const MethodInfo_31B3040 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
          {
            ReturnTypeByQuestId = (__int64)v407;
            if ( !v407 )
              goto LABEL_350;
            if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v407, 0LL) )
            {
              ReturnTypeByQuestId = (__int64)v407;
              if ( !v407 )
                goto LABEL_350;
              NpcServantIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                          (NpcServantFollowerEntity_o *)v407,
                                          0LL);
LABEL_78:
              ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality_41195344(
                                      v158,
                                      NpcServantIndividuality,
                                      pos,
                                      0LL);
              if ( (ReturnTypeByQuestId & 1) != 0 )
                goto LABEL_148;
              goto LABEL_81;
            }
          }
          v169 = *(_QWORD *)(v162 + 48);
          v168 = *(_QWORD *)(v162 + 56);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v117);
          *(_QWORD *)&v411.fields.currentCryptoKey = v169;
          *(_QWORD *)&v411.fields.fakeValue = v168;
          v170 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v411, 0LL);
          ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                  v158,
                                  v170,
                                  *(_DWORD *)(v162 + 64),
                                  *(_DWORD *)(v162 + 164),
                                  pos,
                                  0,
                                  0LL);
          IsMyServantOrNpcRestriction_41192312 = v375;
          v159 = (DataMasterBase_TMaster__TEntity__PKType__o *)v371;
          if ( (ReturnTypeByQuestId & 1) != 0 )
            goto LABEL_148;
        }
      }
      else if ( !v161 )
      {
        goto LABEL_350;
      }
LABEL_81:
      if ( !v161->fields.isFixedNpc && (!followerClassId || !v161->fields.isMySvtOrNpc) )
      {
        if ( !MasterData_object )
          goto LABEL_350;
        if ( NpcFollowerMaster__TryGetEntity(
               (NpcFollowerMaster_o *)MasterData_object,
               &v410,
               v161->fields.userId,
               questId,
               questPhase,
               0LL) )
        {
          ReturnTypeByQuestId = (__int64)v410;
          if ( !v410 )
            goto LABEL_350;
          IsRecommendedFollower = NpcFollowerEntity__IsRecommendedFollower(v410, 0LL);
        }
        else
        {
          IsRecommendedFollower = 0;
        }
        v171 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                              System_Collections_Generic_List_ClassBoardInfo__TypeInfo,
                                                              v117,
                                                              v165,
                                                              v166);
        System_Collections_Generic_List_object____ctor(
          v171,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
        if ( !v159 )
          goto LABEL_350;
        ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetEntity(
                                v159,
                                &v409,
                                v161->fields.npcFollowerSvtId,
                                (const MethodInfo_31B3040 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
        if ( (ReturnTypeByQuestId & 1) != 0 )
        {
          if ( !v409 )
            goto LABEL_350;
          ReturnTypeByQuestId = NpcServantFollowerEntity__IsNotClassBoard((int32_t)v409[7].monitor, 0LL);
          if ( (ReturnTypeByQuestId & 1) != 0
            || (ReturnTypeByQuestId = QuestPhaseEntity__IsNotClassBoard(v143, 0LL), (ReturnTypeByQuestId & 1) != 0) )
          {
            v172 = 1;
LABEL_126:
            if ( !v171 )
              goto LABEL_350;
LABEL_127:
            v195 = System_Collections_Generic_List_object___ToArray(
                     v171,
                     (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
            v161->fields.userClassBoardInfo = (struct ClassBoardInfo_array *)v195;
            sub_1BCA784(&v161->fields.userClassBoardInfo, v195);
            v199 = FollowerSelectItemListViewManager_TypeInfo;
            if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v196);
              v199 = FollowerSelectItemListViewManager_TypeInfo;
            }
            v200 = v199->static_fields->followerClassId;
            setupInfo = this->fields.setupInfo;
            if ( (v172 & 1) != 0 )
              classBoardMaxDictionary = 0LL;
            else
              classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
            isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
            isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
            isBonusFilterEnable = this->fields.isBonusFilterEnable;
            classBoardMaxNumDictionary = classBoardMaxDictionary;
            v158 = questRestrictionInfo;
            v206 = (FollowerSelectItemListViewItem_o *)sub_1BCAA2C(
                                                         FollowerSelectItemListViewItem_TypeInfo,
                                                         v196,
                                                         v197,
                                                         v198);
            FollowerSelectItemListViewItem___ctor(
              v206,
              index,
              0,
              v161,
              v200,
              friendPointUpVal,
              friendPointUpMaxVal,
              friendPointCampaignEntityList,
              isBonusFilterEnable,
              isServantBonusFilterEnable,
              isServantEquipBonusFilterEnable,
              IsRecommendedFollower,
              setupInfo,
              questRestrictionInfo,
              0,
              0,
              0,
              classBoardMaxNumDictionary,
              isReleasedClassBoard,
              0,
              0LL);
            ReturnTypeByQuestId = (__int64)*p_mixItemList;
            if ( !*p_mixItemList )
              goto LABEL_350;
            v207 = *(_QWORD *)(ReturnTypeByQuestId + 16);
            v157 = this;
            QuestFollowerList = v364;
            IsMyServantOrNpcRestriction_41192312 = v375;
            v208 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            v159 = (DataMasterBase_TMaster__TEntity__PKType__o *)v371;
            ++*(_DWORD *)(ReturnTypeByQuestId + 28);
            if ( !v207 )
              goto LABEL_350;
            v209 = *(int *)(ReturnTypeByQuestId + 24);
            MasterData_object = v360;
            if ( (unsigned int)v209 >= *(_DWORD *)(v207 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                (Il2CppObject *)v206,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v208[4] + 192LL) + 112LL));
            }
            else
            {
              v210 = v207 + 8 * v209;
              *(_DWORD *)(ReturnTypeByQuestId + 24) = v209 + 1;
              *(_QWORD *)(v210 + 32) = v206;
              sub_1BCA784(v210 + 32, v206);
            }
            ReturnTypeByQuestId = (__int64)*p_originalItemList;
            if ( !*p_originalItemList )
              goto LABEL_350;
            v211 = *(_QWORD *)(ReturnTypeByQuestId + 16);
            v212 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++*(_DWORD *)(ReturnTypeByQuestId + 28);
            if ( !v211 )
              goto LABEL_350;
            v213 = *(int *)(ReturnTypeByQuestId + 24);
            if ( (unsigned int)v213 >= *(_DWORD *)(v211 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                (Il2CppObject *)v206,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v212[4] + 192LL) + 112LL));
            }
            else
            {
              v214 = v211 + 8 * v213;
              *(_DWORD *)(ReturnTypeByQuestId + 24) = v213 + 1;
              *(_QWORD *)(v214 + 32) = v206;
              sub_1BCA784(v214 + 32, v206);
            }
            ReturnTypeByQuestId = (__int64)*p_recommendItemList;
            if ( !*p_recommendItemList )
              goto LABEL_350;
            v215 = *(_QWORD *)(ReturnTypeByQuestId + 16);
            v216 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++*(_DWORD *)(ReturnTypeByQuestId + 28);
            if ( !v215 )
              goto LABEL_350;
            v217 = *(int *)(ReturnTypeByQuestId + 24);
            if ( (unsigned int)v217 >= *(_DWORD *)(v215 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                (Il2CppObject *)v206,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v216[4] + 192LL) + 112LL));
            }
            else
            {
              v218 = v215 + 8 * v217;
              *(_DWORD *)(ReturnTypeByQuestId + 24) = v217 + 1;
              *(_QWORD *)(v218 + 32) = v206;
              ReturnTypeByQuestId = sub_1BCA784(v218 + 32, v206);
            }
            ++index;
            goto LABEL_148;
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v117);
          v357 = IsRecommendedFollower;
          ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
          if ( !v158 )
            goto LABEL_350;
          v173 = (ClassBoardClassMaster_o *)ReturnTypeByQuestId;
          v174 = v143;
          v175 = FollowerInfo__GetReturnTypeByQuestId(v158->fields.questId, 0LL);
          ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v161, 0, v175, 0LL);
          ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
          if ( !ServantLeaderInfo )
            goto LABEL_350;
          v177 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
          v179 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
          v178 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v117);
          *(_QWORD *)&v412.fields.currentCryptoKey = v179;
          *(_QWORD *)&v412.fields.fakeValue = v178;
          ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v412, 0LL);
          if ( !v177 )
            goto LABEL_350;
          ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                           v177,
                                           ReturnTypeByQuestId,
                                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !ReturnTypeByQuestId )
            goto LABEL_350;
          v143 = v174;
          IsRecommendedFollower = v357;
          if ( !v173 )
            goto LABEL_350;
          ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(
                               v173,
                               *(_DWORD *)(ReturnTypeByQuestId + 80),
                               0LL);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v181);
          ReturnTypeByQuestId = NetworkManager__get_UserId(0LL);
          if ( !Master_object )
            goto LABEL_350;
          ReturnTypeByQuestId = UserClassBoardSquareMaster__TryGetEntity(
                                  (UserClassBoardSquareMaster_o *)Master_object,
                                  &v406,
                                  ReturnTypeByQuestId,
                                  ClassBoardBaseId,
                                  0LL);
          if ( (ReturnTypeByQuestId & 1) != 0 )
          {
            v185 = (ClassBoardInfo_o *)sub_1BCAA2C(ClassBoardInfo_TypeInfo, v117, v183, v184);
            ClassBoardInfo___ctor(v185, 0LL);
            if ( !v185 )
              goto LABEL_350;
            v185->fields.classBoardBaseId = ClassBoardBaseId;
            if ( !v406 )
              goto LABEL_350;
            ReturnTypeByQuestId = (__int64)v406->fields.classBoardSquareIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_350;
            v186 = v143;
            v187 = ClassBoardBaseId;
            v188 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
            v185->fields.squareIds = (struct System_Int32_array *)sub_1BCA91C(v188, int___TypeInfo);
            v189 = sub_1BCA91C(v188, int___TypeInfo);
            sub_1BCA784(&v185->fields.squareIds, v189);
            OpenClassIdArrayFromBaseId = ClassBoardClassMaster__GetOpenClassIdArrayFromBaseId(v173, v187, 0LL);
            v185->fields.releasedClassIds = OpenClassIdArrayFromBaseId;
            ReturnTypeByQuestId = sub_1BCA784(&v185->fields.releasedClassIds, OpenClassIdArrayFromBaseId);
            if ( !v171 )
              goto LABEL_350;
            items = v171->fields._items;
            IsRecommendedFollower = v357;
            v192 = Method_System_Collections_Generic_List_ClassBoardInfo__Add__;
            ++v171->fields._version;
            if ( !items )
              goto LABEL_350;
            size = v171->fields._size;
            v143 = v186;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v171,
                (Il2CppObject *)v185,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
            }
            else
            {
              v194 = &items->obj.klass + size;
              v171->fields._size = size + 1;
              v194[4] = (Il2CppClass *)v185;
              sub_1BCA784(v194 + 4, v185);
            }
            v172 = 0;
            goto LABEL_127;
          }
        }
        v172 = 0;
        goto LABEL_126;
      }
LABEL_148:
      LODWORD(v156) = QuestFollowerList->max_length;
      ++v160;
    }
    while ( (__int64)v160 < (int)v156 );
  }
  if ( v158 && QuestRestrictionInfo__IsMyServantOrNpcRestriction(v158, 0LL) )
  {
    ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_350;
    v219 = *(_DWORD *)(ReturnTypeByQuestId + 48);
    ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_350;
    v220 = v219 >= 1
        && !QuestRestrictionInfo__IsSelectableNormalSupport(
              questRestrictionInfo,
              *(_DWORD *)(ReturnTypeByQuestId + 52),
              0LL);
    v157 = this;
  }
  else
  {
    v220 = 0;
  }
  v157->fields.isRefreshBtnHide = v220;
  if ( !v220 && !v143->fields.isNpcOnly )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v117);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_350;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v405,
                            (const MethodInfo_31B30C8 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    v221 = this;
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v405 )
        goto LABEL_350;
      klass = v405[1].klass;
      if ( klass )
      {
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
        {
          v224 = 0LL;
          do
          {
            if ( (unsigned int)v224 >= namespaze )
              goto LABEL_351;
            v225 = &klass->_1.image + (int)v224;
            ReturnTypeByQuestId = (__int64)v225[4];
            posa = (FollowerInfo_o **)(v225 + 4);
            if ( !ReturnTypeByQuestId )
              goto LABEL_350;
            FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0LL);
            if ( (unsigned int)v224 >= LODWORD(klass->_1.namespaze) )
              goto LABEL_351;
            if ( !*posa )
              goto LABEL_350;
            ReturnTypeByQuestId = (__int64)(*posa)->fields.mainSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_350;
            v361 = *(_QWORD *)(ReturnTypeByQuestId + 24);
            v226 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
            if ( v226 )
            {
              v228 = v226;
              v229 = sub_1BCA91C(v226, int___TypeInfo);
              if ( !v229 )
              {
                sub_1BCACFC(v228);
LABEL_352:
                sub_1BCACFC(v224);
LABEL_353:
                v347 = sub_1BCAA60();
                sub_1BCA908(v347, 0LL);
              }
            }
            else
            {
              v229 = 0LL;
            }
            v230 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v227);
              v230 = BalanceConfig_TypeInfo;
            }
            v231 = v230->static_fields;
            FixMainSupportDeckNum = v231->FixMainSupportDeckNum;
            FixEventSupportDeckNum = v231->FixEventSupportDeckNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v227);
            ReturnTypeByQuestId = System_Math__Max_63220196(FixMainSupportDeckNum, FixEventSupportDeckNum, 0LL);
            v372 = (EventUpValSetupInfo_o *)v229;
            if ( (int)v361 >= 1 )
            {
              deckPriority = ReturnTypeByQuestId;
              v237 = 0LL;
              v358 = v229 + 32;
              do
              {
                if ( !*p_originalItemList )
                  goto LABEL_350;
                if ( (unsigned int)v224 >= LODWORD(klass->_1.namespaze) )
                  goto LABEL_351;
                if ( !v229 )
                  goto LABEL_350;
                if ( v237 >= *(unsigned int *)(v229 + 24) )
                  goto LABEL_351;
                v397 = (*p_originalItemList)->fields._size;
                followerClassIdc = v221->fields.setupInfo;
                v238 = v221->fields.classBoardMaxDictionary;
                v239 = *(_DWORD *)(v358 + 4 * v237);
                indexc = *posa;
                v240 = v221->fields.isServantEquipBonusFilterEnable;
                v241 = v221->fields.isServantBonusFilterEnable;
                v368 = v221->fields.isBonusFilterEnable;
                v242 = (FollowerSelectItemListViewItem_o *)sub_1BCAA2C(
                                                             FollowerSelectItemListViewItem_TypeInfo,
                                                             v117,
                                                             v234,
                                                             v235);
                FollowerSelectItemListViewItem___ctor(
                  v242,
                  v397,
                  0,
                  indexc,
                  0,
                  friendPointUpVal,
                  friendPointUpMaxVal,
                  friendPointCampaignEntityList,
                  v368,
                  v241,
                  v240,
                  0,
                  followerClassIdc,
                  questRestrictionInfo,
                  1,
                  v239,
                  deckPriority,
                  v238,
                  1,
                  0,
                  0LL);
                ReturnTypeByQuestId = (__int64)v221->fields.originalItemList;
                if ( !ReturnTypeByQuestId )
                  goto LABEL_350;
                v243 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v244 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v243 )
                  goto LABEL_350;
                v245 = *(int *)(ReturnTypeByQuestId + 24);
                v229 = (__int64)v372;
                if ( (unsigned int)v245 >= *(_DWORD *)(v243 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    (Il2CppObject *)v242,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v244[4] + 192LL) + 112LL));
                }
                else
                {
                  v246 = v243 + 8 * v245;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v245 + 1;
                  *(_QWORD *)(v246 + 32) = v242;
                  ReturnTypeByQuestId = sub_1BCA784(v246 + 32, v242);
                }
                ++v237;
                --deckPriority;
              }
              while ( (unsigned int)v361 != v237 );
            }
            followerClassIda = 0;
            v369 = v229 + 32;
            v365 = (int)v224;
            while ( 1 )
            {
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v117);
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              }
              v247 = *(struct BalanceConfig_StaticFields **)(ReturnTypeByQuestId + 184);
              if ( followerClassIda >= v247->SupportDeckMemberMax )
                break;
              if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
              {
                j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId, v117);
                v247 = BalanceConfig_TypeInfo->static_fields;
              }
              v249 = v247->FixMainSupportDeckNum;
              v248 = v247->FixEventSupportDeckNum;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v117);
              ReturnTypeByQuestId = System_Math__Max_63220196(v249, v248, 0LL);
              if ( (int)v361 >= 1 )
              {
                v252 = ReturnTypeByQuestId;
                v253 = 0LL;
                while ( *p_mixItemList )
                {
                  ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                  v254 = (*p_mixItemList)->fields._size;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v117);
                    ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( (unsigned int)v224 >= LODWORD(klass->_1.namespaze) )
                    goto LABEL_351;
                  if ( !v229 )
                    goto LABEL_350;
                  if ( v253 >= *(unsigned int *)(v229 + 24) )
                    goto LABEL_351;
                  v398 = v254;
                  v255 = klass;
                  v256 = v221->fields.setupInfo;
                  indexd = *posa;
                  v257 = v221->fields.isServantEquipBonusFilterEnable;
                  v258 = this->fields.classBoardMaxDictionary;
                  v259 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 164LL);
                  v260 = v221->fields.isServantBonusFilterEnable;
                  v261 = v221->fields.isBonusFilterEnable;
                  supportDeckId = *(_DWORD *)(v369 + 4 * v253);
                  v221 = this;
                  v262 = (FollowerSelectItemListViewItem_o *)sub_1BCAA2C(
                                                               FollowerSelectItemListViewItem_TypeInfo,
                                                               v117,
                                                               v250,
                                                               v251);
                  FollowerSelectItemListViewItem___ctor(
                    v262,
                    v398,
                    v259 - followerClassIda,
                    indexd,
                    followerClassIda,
                    friendPointUpVal,
                    friendPointUpMaxVal,
                    friendPointCampaignEntityList,
                    v261,
                    v260,
                    v257,
                    0,
                    v256,
                    questRestrictionInfo,
                    1,
                    supportDeckId,
                    v252,
                    v258,
                    1,
                    0,
                    0LL);
                  ReturnTypeByQuestId = (__int64)this->fields.mixItemList;
                  if ( !ReturnTypeByQuestId )
                    goto LABEL_350;
                  v263 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                  v264 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                  if ( !v263 )
                    goto LABEL_350;
                  v265 = *(int *)(ReturnTypeByQuestId + 24);
                  if ( (unsigned int)v265 >= *(_DWORD *)(v263 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                      (Il2CppObject *)v262,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v264[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v266 = v263 + 8 * v265;
                    *(_DWORD *)(ReturnTypeByQuestId + 24) = v265 + 1;
                    *(_QWORD *)(v266 + 32) = v262;
                    ReturnTypeByQuestId = sub_1BCA784(v266 + 32, v262);
                  }
                  v229 = (__int64)v372;
                  LODWORD(v224) = v365;
                  ++v253;
                  klass = v255;
                  --v252;
                  if ( (unsigned int)v361 == v253 )
                    goto LABEL_218;
                }
                goto LABEL_350;
              }
LABEL_218:
              ++followerClassIda;
            }
            namespaze = (int)klass->_1.namespaze;
            v224 = (Il2CppObject *)(unsigned int)((_DWORD)v224 + 1);
          }
          while ( (int)v224 < namespaze );
        }
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v117);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_350;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v404,
                            (const MethodInfo_31B30C8 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v404 )
        goto LABEL_350;
      v267 = v404[1].klass;
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_350;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !ReturnTypeByQuestId )
        goto LABEL_350;
      ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                       questId,
                                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_350;
      HasFlag_40199512 = QuestEntity__HasFlag_40199512(
                           (QuestEntity_o *)ReturnTypeByQuestId,
                           0x8000000LL,
                           questPhase,
                           0LL);
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_350;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserFollowMaster___);
      v351 = (UserFollowMaster_o *)ReturnTypeByQuestId;
      if ( !v267 )
        goto LABEL_350;
      namespaze_low = (unsigned __int64)v267->_1.namespaze;
      if ( (int)namespaze_low >= 1 )
      {
        v269 = 0LL;
        v359 = 0;
        v366 = v267;
        do
        {
          namespaze_low = (unsigned int)namespaze_low;
          if ( HasFlag_40199512 )
          {
            if ( v269 >= (unsigned int)namespaze_low )
              goto LABEL_351;
            v270 = *((_QWORD *)&v267->_1.byval_arg.data + v269);
            if ( !v270 )
              goto LABEL_350;
            if ( *(_DWORD *)(v270 + 36) == 5 )
            {
              ReturnTypeByQuestId = (__int64)v351;
              if ( !v351 )
                goto LABEL_350;
              ReturnTypeByQuestId = UserFollowMaster__IsFollowUser(v351, *(_QWORD *)(v270 + 16), 0LL);
              if ( (ReturnTypeByQuestId & 1) == 0 )
                goto LABEL_296;
              namespaze_low = LODWORD(v267->_1.namespaze);
            }
          }
          else
          {
            if ( v269 >= (unsigned int)namespaze_low )
              goto LABEL_351;
            v271 = *((_QWORD *)&v267->_1.byval_arg.data + v269);
            if ( !v271 )
              goto LABEL_350;
            if ( *(_DWORD *)(v271 + 36) == 5 )
              goto LABEL_296;
          }
          if ( v269 >= namespaze_low )
            goto LABEL_351;
          v272 = &v267->_1.image + v269;
          ReturnTypeByQuestId = (__int64)v272[4];
          posb = (FollowerInfo_o **)(v272 + 4);
          if ( !ReturnTypeByQuestId )
            goto LABEL_350;
          FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0LL);
          ReturnTypeByQuestId = sub_1BCA888(int___TypeInfo, 0LL);
          if ( v269 >= LODWORD(v267->_1.namespaze) )
            goto LABEL_351;
          v273 = *posb;
          if ( !*posb )
            goto LABEL_350;
          if ( v353 )
          {
            ReturnTypeByQuestId = (__int64)v273->fields.eventSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_350;
          }
          else
          {
            ReturnTypeByQuestId = (__int64)v273->fields.mainSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_350;
          }
          followerClassIdb = *(unsigned int *)(ReturnTypeByQuestId + 24);
          v274 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
          if ( v274 )
          {
            v224 = v274;
            v276 = sub_1BCA91C(v274, int___TypeInfo);
            if ( !v276 )
              goto LABEL_352;
          }
          else
          {
            v276 = 0LL;
          }
          v277 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v275);
            v277 = BalanceConfig_TypeInfo;
          }
          v278 = v277->static_fields;
          v280 = v278->FixMainSupportDeckNum;
          v279 = v278->FixEventSupportDeckNum;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v275);
          ReturnTypeByQuestId = System_Math__Max_63220196(v280, v279, 0LL);
          v376 = v276;
          if ( (int)followerClassIdb >= 1 )
          {
            v283 = ReturnTypeByQuestId;
            v284 = 0LL;
            v362 = v276 + 32;
            while ( 1 )
            {
              if ( !*p_originalItemList )
                goto LABEL_350;
              if ( v269 >= LODWORD(v267->_1.namespaze) )
                break;
              if ( !v276 )
                goto LABEL_350;
              if ( v284 >= *(unsigned int *)(v276 + 24) )
                break;
              v399 = (*p_originalItemList)->fields._size;
              v373 = v221->fields.setupInfo;
              v285 = v221->fields.classBoardMaxDictionary;
              v286 = *(_DWORD *)(v362 + 4 * v284);
              indexe = *posb;
              v287 = v221->fields.isServantEquipBonusFilterEnable;
              v288 = v221->fields.isServantBonusFilterEnable;
              v289 = v221->fields.isBonusFilterEnable;
              v290 = (FollowerSelectItemListViewItem_o *)sub_1BCAA2C(
                                                           FollowerSelectItemListViewItem_TypeInfo,
                                                           v117,
                                                           v281,
                                                           v282);
              FollowerSelectItemListViewItem___ctor(
                v290,
                v399,
                0,
                indexe,
                0,
                friendPointUpVal,
                friendPointUpMaxVal,
                friendPointCampaignEntityList,
                v289,
                v288,
                v287,
                0,
                v373,
                questRestrictionInfo,
                0,
                v286,
                v283,
                v285,
                1,
                0,
                0LL);
              ReturnTypeByQuestId = (__int64)v221->fields.originalItemList;
              if ( !ReturnTypeByQuestId )
                goto LABEL_350;
              v291 = *(_QWORD *)(ReturnTypeByQuestId + 16);
              v292 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++*(_DWORD *)(ReturnTypeByQuestId + 28);
              if ( !v291 )
                goto LABEL_350;
              v293 = *(int *)(ReturnTypeByQuestId + 24);
              v276 = v376;
              if ( (unsigned int)v293 >= *(_DWORD *)(v291 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                  (Il2CppObject *)v290,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v292[4] + 192LL) + 112LL));
              }
              else
              {
                v294 = v291 + 8 * v293;
                *(_DWORD *)(ReturnTypeByQuestId + 24) = v293 + 1;
                *(_QWORD *)(v294 + 32) = v290;
                ReturnTypeByQuestId = sub_1BCA784(v294 + 32, v290);
              }
              ++v284;
              --v283;
              if ( followerClassIdb == v284 )
                goto LABEL_270;
            }
LABEL_351:
            sub_1BCAA44(ReturnTypeByQuestId, v117);
          }
LABEL_270:
          indexa = 0;
          v370 = v269;
          v374 = (EventUpValSetupInfo_o *)(v276 + 32);
          while ( 1 )
          {
            ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v117);
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            }
            v295 = *(struct BalanceConfig_StaticFields **)(ReturnTypeByQuestId + 184);
            if ( indexa >= v295->SupportDeckMemberMax )
              break;
            if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
            {
              j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId, v117);
              v295 = BalanceConfig_TypeInfo->static_fields;
            }
            v297 = v295->FixMainSupportDeckNum;
            v296 = v295->FixEventSupportDeckNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v117);
            ReturnTypeByQuestId = System_Math__Max_63220196(v297, v296, 0LL);
            if ( (int)followerClassIdb >= 1 )
            {
              v300 = ReturnTypeByQuestId;
              v301 = 0LL;
              while ( *p_mixItemList )
              {
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                v302 = (*p_mixItemList)->fields._size;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v117);
                  ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                }
                if ( v269 >= LODWORD(v267->_1.namespaze) )
                  goto LABEL_351;
                if ( !v276 )
                  goto LABEL_350;
                if ( v301 >= *(unsigned int *)(v276 + 24) )
                  goto LABEL_351;
                v303 = v221->fields.setupInfo;
                v304 = v302;
                v400 = *posb;
                v305 = v221->fields.isServantEquipBonusFilterEnable;
                v306 = this->fields.classBoardMaxDictionary;
                v307 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 164LL);
                v308 = v221->fields.isServantBonusFilterEnable;
                v309 = v221->fields.isBonusFilterEnable;
                supportDeckIda = *((_DWORD *)&v374->klass + v301);
                v221 = this;
                v310 = (FollowerSelectItemListViewItem_o *)sub_1BCAA2C(
                                                             FollowerSelectItemListViewItem_TypeInfo,
                                                             v117,
                                                             v298,
                                                             v299);
                FollowerSelectItemListViewItem___ctor(
                  v310,
                  v304,
                  v307 - indexa,
                  v400,
                  indexa,
                  friendPointUpVal,
                  friendPointUpMaxVal,
                  friendPointCampaignEntityList,
                  v309,
                  v308,
                  v305,
                  0,
                  v303,
                  questRestrictionInfo,
                  0,
                  supportDeckIda,
                  v300,
                  v306,
                  1,
                  0,
                  0LL);
                ReturnTypeByQuestId = (__int64)this->fields.mixItemList;
                if ( !ReturnTypeByQuestId )
                  goto LABEL_350;
                v311 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v312 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v311 )
                  goto LABEL_350;
                v313 = *(int *)(ReturnTypeByQuestId + 24);
                if ( (unsigned int)v313 >= *(_DWORD *)(v311 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    (Il2CppObject *)v310,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v312[4] + 192LL) + 112LL));
                }
                else
                {
                  v314 = v311 + 8 * v313;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v313 + 1;
                  *(_QWORD *)(v314 + 32) = v310;
                  ReturnTypeByQuestId = sub_1BCA784(v314 + 32, v310);
                }
                v267 = v366;
                v269 = v370;
                v276 = v376;
                ++v301;
                --v300;
                if ( followerClassIdb == v301 )
                  goto LABEL_292;
              }
              goto LABEL_350;
            }
LABEL_292:
            ++indexa;
          }
          if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
          {
            j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId, v117);
            v295 = BalanceConfig_TypeInfo->static_fields;
          }
          if ( ++v359 >= v295->SupportListMax )
            break;
LABEL_296:
          LODWORD(namespaze_low) = v267->_1.namespaze;
          ++v269;
        }
        while ( (__int64)v269 < (int)namespaze_low );
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v117);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_350;
    if ( DataMasterBase_object__object__long___TryGetSingleEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
           &v403,
           (const MethodInfo_31B30C8 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    {
      ReturnTypeByQuestId = (__int64)v403;
      if ( !v403 )
        goto LABEL_350;
      ReturnTypeByQuestId = UserRecommendFollowerEntity__IsEnableSupport(
                              (UserRecommendFollowerEntity_o *)v403,
                              questId,
                              questPhase,
                              0LL);
      if ( (ReturnTypeByQuestId & 1) != 0 )
      {
        if ( !v403 )
          goto LABEL_350;
        v315 = v403[1].klass;
        ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_350;
        ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !ReturnTypeByQuestId )
          goto LABEL_350;
        ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                         questId,
                                         (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_350;
        v401 = QuestEntity__HasFlag_40199512((QuestEntity_o *)ReturnTypeByQuestId, 0x8000000LL, questPhase, 0LL);
        ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_350;
        ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserFollowMaster___);
        v385 = (UserFollowMaster_o *)ReturnTypeByQuestId;
        if ( !v315 )
          goto LABEL_350;
        v316 = (unsigned __int64)v315->_1.namespaze;
        if ( (int)v316 >= 1 )
        {
          v317 = 0LL;
          p_byval_arg = &v315->_1.byval_arg;
          indexb = v315;
          do
          {
            v316 = (unsigned int)v316;
            if ( v401 )
            {
              if ( v317 >= (unsigned int)v316 )
                goto LABEL_351;
              v319 = *((_QWORD *)&p_byval_arg->data + v317);
              if ( !v319 )
                goto LABEL_350;
              if ( *(_DWORD *)(v319 + 36) == 5 )
              {
                ReturnTypeByQuestId = (__int64)v385;
                if ( !v385 )
                  goto LABEL_350;
                ReturnTypeByQuestId = UserFollowMaster__IsFollowUser(v385, *(_QWORD *)(v319 + 16), 0LL);
                if ( (ReturnTypeByQuestId & 1) == 0 )
                  goto LABEL_344;
                v316 = LODWORD(v315->_1.namespaze);
              }
            }
            else
            {
              if ( v317 >= (unsigned int)v316 )
                goto LABEL_351;
              v320 = *((_QWORD *)&p_byval_arg->data + v317);
              if ( !v320 )
                goto LABEL_350;
              if ( *(_DWORD *)(v320 + 36) == 5 )
                goto LABEL_344;
            }
            if ( v317 >= v316 )
              goto LABEL_351;
            v321 = *((_QWORD *)&p_byval_arg->data + v317);
            ReturnTypeByQuestId = sub_1BCA888(ServantLeaderInfo___TypeInfo, 1LL);
            if ( v317 >= LODWORD(v315->_1.namespaze) )
              goto LABEL_351;
            v322 = *((_QWORD *)&p_byval_arg->data + v317);
            if ( !v322 )
              goto LABEL_350;
            v323 = *(_QWORD *)(v322 + 56);
            if ( !v323 )
              goto LABEL_350;
            if ( !*(_DWORD *)(v323 + 24) )
              goto LABEL_351;
            v324 = *(_QWORD *)(v323 + 32);
            if ( !v324 )
              goto LABEL_350;
            v325 = ReturnTypeByQuestId;
            if ( !ReturnTypeByQuestId )
              goto LABEL_350;
            v326 = *(_QWORD *)(v324 + 56);
            if ( v326 )
            {
              ReturnTypeByQuestId = sub_1BCA91C(v326, *(_QWORD *)(*(_QWORD *)ReturnTypeByQuestId + 64LL));
              if ( !ReturnTypeByQuestId )
                goto LABEL_353;
            }
            if ( !*(_DWORD *)(v325 + 24) )
              goto LABEL_351;
            *(_QWORD *)(v325 + 32) = v326;
            ReturnTypeByQuestId = sub_1BCA784(v325 + 32, v326);
            if ( !v321 )
              goto LABEL_350;
            *(_QWORD *)(v321 + 40) = v325;
            ReturnTypeByQuestId = sub_1BCA784(v321 + 40, v325);
            if ( v317 >= LODWORD(v315->_1.namespaze) )
              goto LABEL_351;
            ReturnTypeByQuestId = *((_QWORD *)&p_byval_arg->data + v317);
            if ( !ReturnTypeByQuestId )
              goto LABEL_350;
            FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0LL);
            if ( !*p_recommendItemList )
              goto LABEL_350;
            if ( v317 >= LODWORD(v315->_1.namespaze) )
              goto LABEL_351;
            v329 = (FollowerInfo_o *)*((_QWORD *)&p_byval_arg->data + v317);
            v330 = (*p_recommendItemList)->fields._size;
            v331 = this->fields.isBonusFilterEnable;
            v332 = this->fields.isServantBonusFilterEnable;
            v333 = this->fields.isServantEquipBonusFilterEnable;
            v334 = this->fields.setupInfo;
            v335 = this->fields.classBoardMaxDictionary;
            v336 = (FollowerSelectItemListViewItem_o *)sub_1BCAA2C(
                                                         FollowerSelectItemListViewItem_TypeInfo,
                                                         v117,
                                                         v327,
                                                         v328);
            FollowerSelectItemListViewItem___ctor(
              v336,
              v330,
              0,
              v329,
              0,
              friendPointUpVal,
              friendPointUpMaxVal,
              friendPointCampaignEntityList,
              v331,
              v332,
              v333,
              0,
              v334,
              questRestrictionInfo,
              0,
              0,
              0,
              v335,
              1,
              1,
              0LL);
            ReturnTypeByQuestId = (__int64)this->fields.recommendItemList;
            if ( !ReturnTypeByQuestId )
              goto LABEL_350;
            v337 = *(_QWORD *)(ReturnTypeByQuestId + 16);
            v338 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++*(_DWORD *)(ReturnTypeByQuestId + 28);
            if ( !v337 )
              goto LABEL_350;
            v339 = *(int *)(ReturnTypeByQuestId + 24);
            if ( (unsigned int)v339 >= *(_DWORD *)(v337 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                (Il2CppObject *)v336,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v338[4] + 192LL) + 112LL));
            }
            else
            {
              v340 = v337 + 8 * v339;
              *(_DWORD *)(ReturnTypeByQuestId + 24) = v339 + 1;
              *(_QWORD *)(v340 + 32) = v336;
              sub_1BCA784(v340 + 32, v336);
            }
            ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v117);
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            }
            v315 = indexb;
            if ( (__int64)v317 >= *(int *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 692LL) )
              break;
LABEL_344:
            LODWORD(v316) = v315->_1.namespaze;
            ++v317;
          }
          while ( (__int64)v317 < (int)v316 );
        }
      }
    }
  }
LABEL_345:
  ReturnTypeByQuestId = (__int64)this->fields.refreshButtonObject;
  if ( !ReturnTypeByQuestId )
    goto LABEL_350;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)ReturnTypeByQuestId,
    !this->fields.isRefreshBtnHide,
    0LL);
  v343 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v341);
    v343 = FollowerSelectItemListViewManager_TypeInfo;
  }
  FollowerSelectItemListViewManager__SetEmptyMessage(this, v343->static_fields->followerClassId, v342);
  FollowerSelectItemListViewManager__SortClass(
    this,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    v344);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  FollowerSelectItemListViewManager__SetFilterButtonImage(this, v345);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_350;
  scrollView->fields.smoothDragStart = 1;
}


void __fastcall FollowerSelectItemListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  FollowerSelectItemListViewManager_c *v7; // x0
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v9; // x8

  if ( (byte_4B1138A & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerSelectItemListViewManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_6869/*"FollowerSelectClass"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_6872/*"FollowerSelectOldClass"*/, v5, v6);
    byte_4B1138A = 1;
  }
  v7 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v1);
    v7 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v7->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT
    || (v7 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))LIST_VIEW_SORT->fields.m_target)(
                                                      LIST_VIEW_SORT->fields.original_method_info,
                                                      1LL,
                                                      *(_QWORD *)&LIST_VIEW_SORT->fields.extra_arg)) == 0LL
    || (ListViewSort__DeleteContinueData((ListViewSort_o *)v7, 0LL),
        (v9 = FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT) == 0LL)
    || (v7 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v9->fields.m_target)(
                                                      v9->fields.original_method_info,
                                                      0LL,
                                                      *(_QWORD *)&v9->fields.extra_arg)) == 0LL )
  {
    sub_1BCAA3C(v7, v1);
  }
  ListViewSort__DeleteContinueData((ListViewSort_o *)v7, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6869/*"FollowerSelectClass"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6872/*"FollowerSelectOldClass"*/, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FollowerSelectItemListViewManager__DestroyList_31420664(this, 0LL, v2);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList_31420664(
        FollowerSelectItemListViewManager_o *this,
        BattleSetupInfo_o *battleSetupInfo,
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  EventQuestMaster_o *ReturnTypeByQuestId; // x0
  const MethodInfo *v26; // x1
  FollowerSelectItemListViewManager_c *v27; // x8
  unsigned int v28; // w20
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct ListViewSort_o *v30; // x0
  const MethodInfo *v31; // x4
  struct ListViewSort_o *sort; // x8
  __int64 v33; // x1
  System_Int32_array *OngoingQuestTargetEventIds; // x0
  int32_t questId; // w20
  int32_t questPhase; // w21
  System_Int32_array *v37; // x22
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  EventUpValSetupInfo_o *v41; // x23
  struct EventUpValSetupInfo_o **p_setupInfo; // x0
  EventUpValSetupInfo_o *v43; // x1
  struct ListViewSort_o *v44; // x8
  FollowerSelectItemListViewManager_o *v45; // x0
  int monitor; // w20
  const MethodInfo *v47; // x1
  FollowerSelectItemListViewManager_c *v48; // x0
  FollowerSelectItemListViewManager_o *v49; // x0
  int monitor_high; // w20
  __int64 v51; // x1
  FollowerSelectItemListViewManager_c *v52; // x0
  ClassButtonControlComponent_o *classButtonControl; // x20
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  ClassButtonControlComponent_CallbackFunc_o *v57; // x21
  ClassButtonControlComponent_o *v58; // x20
  const MethodInfo *v59; // x2
  struct EventUpValSetupInfo_o *setupInfo; // x8
  System_Int32_array *v61; // x1
  UILabel_o *bonusFilterKindLabel; // x20

  if ( (byte_4B11399 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassButtonControlComponent_CallbackFunc_TypeInfo, battleSetupInfo, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventQuestMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&EventUpValSetupInfo_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v11, v12);
    sub_1BCA7E0(&FollowerSelectItemListViewManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&int___TypeInfo, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_11812/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_6869/*"FollowerSelectClass"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_6872/*"FollowerSelectOldClass"*/, v23, v24);
    byte_4B11399 = 1;
  }
  if ( battleSetupInfo )
  {
    this->fields.questId = BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
    this->fields.questPhase = battleSetupInfo->fields.questPhase;
    ReturnTypeByQuestId = (EventQuestMaster_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                  battleSetupInfo->fields.questId,
                                                  0LL);
    v27 = FollowerSelectItemListViewManager_TypeInfo;
    v28 = (unsigned int)ReturnTypeByQuestId;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v26);
      v27 = FollowerSelectItemListViewManager_TypeInfo;
    }
    LIST_VIEW_SORT = v27->static_fields->LIST_VIEW_SORT;
    if ( !LIST_VIEW_SORT )
      goto LABEL_47;
    v30 = (struct ListViewSort_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))LIST_VIEW_SORT->fields.m_target)(
                                     LIST_VIEW_SORT->fields.original_method_info,
                                     v28,
                                     *(_QWORD *)&LIST_VIEW_SORT->fields.extra_arg);
    this->fields.sort = v30;
    ReturnTypeByQuestId = (EventQuestMaster_o *)sub_1BCA784(&this->fields.sort, v30);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_47;
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                                                                                   this,
                                                                                   this->fields.questId,
                                                                                   this->fields.questPhase,
                                                                                   sort->fields.isRequestLoad,
                                                                                   v31);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33);
    ReturnTypeByQuestId = (EventQuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventQuestMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_47;
    OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                   ReturnTypeByQuestId,
                                   this->fields.questId,
                                   this->fields.questPhase,
                                   0LL,
                                   0LL);
    questId = this->fields.questId;
    questPhase = this->fields.questPhase;
    v37 = OngoingQuestTargetEventIds;
    v41 = (EventUpValSetupInfo_o *)sub_1BCAA2C(EventUpValSetupInfo_TypeInfo, v38, v39, v40);
    EventUpValSetupInfo___ctor_39629568(v41, v37, 0, questId, questPhase, 0LL);
    p_setupInfo = &this->fields.setupInfo;
    this->fields.setupInfo = v41;
    v43 = v41;
  }
  else
  {
    p_setupInfo = &this->fields.setupInfo;
    v43 = 0LL;
    this->fields.setupInfo = 0LL;
  }
  sub_1BCA784(p_setupInfo, v43);
  this->fields.questRestrictionInfo = 0LL;
  sub_1BCA784(&this->fields.questRestrictionInfo, 0LL);
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.sort;
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  ListViewSort__Load((ListViewSort_o *)ReturnTypeByQuestId, 0LL);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.sort;
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  ListViewSort__Save((ListViewSort_o *)ReturnTypeByQuestId, 0LL);
  v44 = this->fields.sort;
  if ( !v44 )
    goto LABEL_47;
  if ( v44->fields.isRequestSave )
  {
    v45 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v26);
      v45 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor = (int)v45->fields.sort->monitor;
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(v45, v26) )
    {
      v48 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v47);
        v48 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6869/*"FollowerSelectClass"*/, v48->static_fields->followerClassId, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
    v49 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v47);
      v49 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor_high = HIDWORD(v49->fields.sort->monitor);
    if ( monitor_high != FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(v49, v47) )
    {
      v52 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v51);
        v52 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(
        (System_String_o *)StringLiteral_6872/*"FollowerSelectOldClass"*/,
        v52->static_fields->oldFollowerClassId,
        0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
  this->fields.originalItemList = 0LL;
  sub_1BCA784(&this->fields.originalItemList, 0LL);
  this->fields.mixItemList = 0LL;
  sub_1BCA784(&this->fields.mixItemList, 0LL);
  this->fields.recommendItemList = 0LL;
  sub_1BCA784(&this->fields.recommendItemList, 0LL);
  classButtonControl = this->fields.classButtonControl;
  v57 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                        ClassButtonControlComponent_CallbackFunc_TypeInfo,
                                                        v54,
                                                        v55,
                                                        v56);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v57,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_47;
  ClassButtonControlComponent__init(classButtonControl, v57, this->fields.questId, this->fields.questPhase, 0, 0LL);
  this->fields.isInput = 0;
  ReturnTypeByQuestId = (EventQuestMaster_o *)FollowerSelectItemListViewManager_TypeInfo;
  v58 = this->fields.classButtonControl;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v26);
  if ( !v58 )
    goto LABEL_47;
  ClassButtonControlComponent__setCursor(
    v58,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  setupInfo = this->fields.setupInfo;
  v61 = setupInfo ? setupInfo->fields.eventIdList : (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, v61, v59);
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.bonusFilterKindButton;
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  ReturnTypeByQuestId = (EventQuestMaster_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)ReturnTypeByQuestId,
                                                0LL);
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)ReturnTypeByQuestId,
    this->fields.isBonusFilterEnable,
    0LL);
  if ( this->fields.isBonusFilterEnable )
  {
    bonusFilterKindLabel = this->fields.bonusFilterKindLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
    ReturnTypeByQuestId = (EventQuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11812/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/, 0LL);
    if ( bonusFilterKindLabel )
    {
      UILabel__set_text(bonusFilterKindLabel, (System_String_o *)ReturnTypeByQuestId, 0LL);
      goto LABEL_43;
    }
LABEL_47:
    sub_1BCAA3C(ReturnTypeByQuestId, v26);
  }
LABEL_43:
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.tutorialListViewObject;
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  ((void (__fastcall *)(EventQuestMaster_o *, Il2CppMethodPointer))ReturnTypeByQuestId->klass->vtable._4_getList.method)(
    ReturnTypeByQuestId,
    ReturnTypeByQuestId->klass->vtable._5_ForForceDerived.methodPtr);
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.tutorialListViewObject;
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  ReturnTypeByQuestId = (EventQuestMaster_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)ReturnTypeByQuestId,
                                                0LL);
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ReturnTypeByQuestId, 0, 0LL);
  this->fields.isGetRecommendSupport = 0;
}


void __fastcall FollowerSelectItemListViewManager__EndClassCompatibilityMenu(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B113A7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B113A7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__EndCloseClassBoardEffectListDialog(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B113B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B113B8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  CommonUI__CloseClassBoardEffectListDialog((CommonUI_o *)Instance, 0LL, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  ListViewSort_o *sort; // x0
  Il2CppObject *Instance; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Action_o *v16; // x21

  if ( (byte_4B113A9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B113A9 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    FollowerSelectItemListViewManager__SetFilterButtonImage(this, v9);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_8;
    ListViewSort__Save(sort, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
  System_Action___ctor(
    v16,
    (Il2CppObject *)this,
    Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__,
    0LL);
  if ( !Instance )
LABEL_8:
    sub_1BCAA3C(sort, v10);
  CommonUI__CloseServantBonusFilterSelectMenu((CommonUI_o *)Instance, v16, 0LL);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v17; // x20
  int32_t result; // w0
  struct System_Int32_array *classIds; // x8
  struct System_Int32_array *v20; // x8
  Il2CppObject *v21; // x8

  if ( (byte_4B11394 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    byte_4B11394 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_17;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  if ( !Entity )
    return defaultValue;
  v17 = Entity;
  result = QuestPhaseEntity__GetAdvantageClassId(Entity, 0LL);
  if ( result != -1 )
    return result;
  classIds = v17->fields.classIds;
  if ( !classIds || !*(_QWORD *)&classIds->max_length )
    return defaultValue;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v20 = v17->fields.classIds;
  if ( !v20 )
    goto LABEL_17;
  if ( !v20->max_length )
    sub_1BCAA44(Instance, v15);
  if ( !Instance )
LABEL_17:
    sub_1BCAA3C(Instance, v15);
  v21 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          v20->m_Items[1],
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  result = defaultValue;
  if ( v21 )
    return HIDWORD(v21[4].klass);
  return result;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  FollowerSelectItemListViewManager_c *v3; // x0

  if ( (byte_4B1139D & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerSelectItemListViewManager_TypeInfo, method, v2);
    byte_4B1139D = 1;
  }
  v3 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, method);
    v3 = FollowerSelectItemListViewManager_TypeInfo;
  }
  return v3->static_fields->followerClassId;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetDisplayItemNum(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8

  if ( (byte_4B113B9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method, v2);
    byte_4B113B9 = 1;
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int32_t PlayerPrefsFollowerClassId; // w21
  FollowerSelectItemListViewManager_c *v17; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  _BOOL8 v21; // x0
  _BOOL8 AdvantageClassAuto; // x0
  const MethodInfo *v23; // x3
  int32_t AdvantageClassId; // w22
  _BOOL8 IsSameQuestAndPhase; // x0
  const MethodInfo *v26; // x4
  RecommendSupportQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B11392 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_RecommendSupportQuestMaster___, v8, v9);
    sub_1BCA7E0(&FollowerSelectItemListViewManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&OptionManager_TypeInfo, v12, v13);
    this = (FollowerSelectItemListViewManager_o *)sub_1BCA7E0(
                                                    &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                    v14,
                                                    v15);
    byte_4B11392 = 1;
  }
  entity = 0LL;
  if ( isInitialize )
  {
    PlayerPrefsFollowerClassId = FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(
                                   this,
                                   *(const MethodInfo **)&questId);
  }
  else
  {
    v17 = FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, *(_QWORD *)&questId);
      v17 = FollowerSelectItemListViewManager_TypeInfo;
    }
    PlayerPrefsFollowerClassId = v17->static_fields->followerClassId;
  }
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, *(_QWORD *)&questId);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(PlayerPrefsFollowerClassId, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_RecommendSupportQuestMaster___)) == 0LL )
    {
      sub_1BCAA3C(Instance, v20);
    }
    v21 = RecommendSupportQuestMaster__TryGetEntity(
            (RecommendSupportQuestMaster_o *)Instance,
            &entity,
            questId,
            questPhase,
            0LL);
    if ( !v21 )
      PlayerPrefsFollowerClassId = FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(
                                     (FollowerSelectItemListViewManager_o *)v21,
                                     v18);
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v18);
  AdvantageClassAuto = OptionManager__GetAdvantageClassAuto(0LL);
  AdvantageClassId = PlayerPrefsFollowerClassId;
  if ( AdvantageClassAuto )
  {
    IsSameQuestAndPhase = FollowerSelectItemListViewManager__IsSameQuestAndPhase(
                            (FollowerSelectItemListViewManager_o *)AdvantageClassAuto,
                            questId,
                            questPhase,
                            v23);
    AdvantageClassId = PlayerPrefsFollowerClassId;
    if ( !IsSameQuestAndPhase )
      AdvantageClassId = FollowerSelectItemListViewManager__GetAdvantageClassId(
                           (FollowerSelectItemListViewManager_o *)IsSameQuestAndPhase,
                           questId,
                           questPhase,
                           PlayerPrefsFollowerClassId,
                           v26);
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
  __int64 v6; // x2
  FollowerSelectItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B1139B & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerSelectItemListViewItem_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    byte_4B1139B = 1;
  }
  result = (FollowerSelectItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (FollowerSelectItemListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != FollowerSelectItemListViewItem_TypeInfo )
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


int32_t __fastcall FollowerSelectItemListViewManager__GetItemCount(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_List_ListViewItem__o *mixItemList; // x8

  if ( (byte_4B113B4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method, v2);
    byte_4B113B4 = 1;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v12; // w22
  Il2CppObject *Item; // x0
  FollowerSelectItemListViewItem_o *v14; // x23
  __int64 methodPtr_low; // x10

  if ( (byte_4B113B5 & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerSelectItemListViewItem_TypeInfo, userId, userSvtId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9, v10);
    byte_4B113B5 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1BCAA3C(itemList, userId);
  v12 = 0;
  while ( v12 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v12,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      v14 = (FollowerSelectItemListViewItem_o *)Item;
      methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (FollowerSelectItemListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo
        && FollowerSelectItemListViewItem__get_FollowerId((FollowerSelectItemListViewItem_o *)Item, 0LL) == userId )
      {
        itemList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                  v14,
                                                                  0LL);
        if ( !itemList )
          goto LABEL_13;
        if ( itemList[1].klass == (System_Collections_Generic_List_object__c *)userSvtId )
          return v12;
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v12;
    if ( !itemList )
      goto LABEL_13;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerSelectItemListViewManager__GetItemIndex_31432644(
        FollowerSelectItemListViewManager_o *this,
        int64_t userId,
        int32_t classId,
        int32_t deckId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v14; // w23
  Il2CppObject *Item; // x0
  FollowerSelectItemListViewItem_o *v16; // x24
  __int64 methodPtr_low; // x10

  if ( (byte_4B113B6 & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerSelectItemListViewItem_TypeInfo, userId, *(_QWORD *)&classId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11, v12);
    byte_4B113B6 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1BCAA3C(itemList, userId);
  v14 = 0;
  while ( v14 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v14,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      v16 = (FollowerSelectItemListViewItem_o *)Item;
      methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (FollowerSelectItemListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo
        && FollowerSelectItemListViewItem__get_FollowerId((FollowerSelectItemListViewItem_o *)Item, 0LL) == userId
        && FollowerSelectItemListViewItem__get_SelectClassId(v16, 0LL) == classId
        && v16->fields.supportDeckId == deckId )
      {
        return v14;
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v14;
    if ( !itemList )
      goto LABEL_13;
  }
  return -1;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11396 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6869/*"FollowerSelectClass"*/, method, v2);
    byte_4B11396 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6869/*"FollowerSelectClass"*/, 0, 0LL);
}


int32_t __fastcall FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11397 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6872/*"FollowerSelectOldClass"*/, method, v2);
    byte_4B11397 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6872/*"FollowerSelectOldClass"*/, 0, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  FollowerSelectItemListViewManager_c *v3; // x0
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v5; // x8

  if ( (byte_4B1138B & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerSelectItemListViewManager_TypeInfo, v1, v2);
    byte_4B1138B = 1;
  }
  v3 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v1);
    v3 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v3->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT
    || (v3 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))LIST_VIEW_SORT->fields.m_target)(
                                                      LIST_VIEW_SORT->fields.original_method_info,
                                                      1LL,
                                                      *(_QWORD *)&LIST_VIEW_SORT->fields.extra_arg)) == 0LL
    || (ListViewSort__InitLoad((ListViewSort_o *)v3, 0LL),
        (v5 = FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT) == 0LL)
    || (v3 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v5->fields.m_target)(
                                                      v5->fields.original_method_info,
                                                      0LL,
                                                      *(_QWORD *)&v5->fields.extra_arg)) == 0LL )
  {
    sub_1BCAA3C(v3, v1);
  }
  ListViewSort__InitLoad((ListViewSort_o *)v3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerSelectItemListViewManager__IsSameQuestAndPhase(
        FollowerSelectItemListViewManager_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  FollowerSelectItemListViewManager_c *v8; // x0
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
  struct FollowerSelectItemListViewManager_StaticFields *v10; // x8
  __int64 v13; // x1

  if ( (byte_4B11393 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleData_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    sub_1BCA7E0(&FollowerSelectItemListViewManager_TypeInfo, v6, v7);
    byte_4B11393 = 1;
  }
  v8 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, *(_QWORD *)&questId);
    v8 = FollowerSelectItemListViewManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  if ( static_fields->lastSelectedQuestId == -1 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8, *(_QWORD *)&questId);
      v8 = FollowerSelectItemListViewManager_TypeInfo;
      static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
    }
    if ( static_fields->lastSelectedQuestPhase == -1 )
    {
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, *(_QWORD *)&questId);
      if ( BattleData__getSavedQuestId(0LL) == questId )
      {
        if ( !BattleData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v13);
        return BattleData__getSavedQuestPhase(0LL) == questPhase;
      }
      return 0;
    }
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8, *(_QWORD *)&questId);
    v8 = FollowerSelectItemListViewManager_TypeInfo;
  }
  v10 = v8->static_fields;
  if ( v10->lastSelectedQuestId != questId )
    return 0;
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8, *(_QWORD *)&questId);
    v10 = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  }
  return v10->lastSelectedQuestPhase == questPhase;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__ModifyList(
        FollowerSelectItemListViewManager_o *this,
        int32_t friendPointUpVal,
        int32_t friendPointUpMaxVal,
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
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w25
  int32_t v17; // w22
  __int64 methodPtr_low; // x10
  FollowerSelectItemListViewManager_c *v19; // x0
  int32_t followerClassId; // w22
  int v21; // w25
  int32_t v22; // w22
  __int64 v23; // x10
  int v24; // w25
  int32_t v25; // w22
  __int64 v26; // x10

  if ( (byte_4B11398 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&friendPointUpVal, *(_QWORD *)&friendPointUpMaxVal);
    sub_1BCA7E0(&FollowerSelectItemListViewItem_TypeInfo, v7, v8);
    sub_1BCA7E0(&FollowerSelectItemListViewManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v13, v14);
    byte_4B11398 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_34;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v17 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v17,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (FollowerSelectItemListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != FollowerSelectItemListViewItem_TypeInfo )
      {
        break;
      }
      FollowerSelectItemListViewItem__Modify(
        (FollowerSelectItemListViewItem_o *)itemList,
        friendPointUpVal,
        friendPointUpMaxVal,
        0LL);
      if ( size == ++v17 )
        goto LABEL_12;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_34:
    sub_1BCAA3C(itemList, *(_QWORD *)&friendPointUpVal);
  }
LABEL_12:
  v19 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, *(_QWORD *)&friendPointUpVal);
    v19 = FollowerSelectItemListViewManager_TypeInfo;
  }
  followerClassId = v19->static_fields->followerClassId;
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, *(_QWORD *)&friendPointUpVal);
  if ( ClassButtonControlComponent__IsMixSupportGroupType(followerClassId, 0LL) )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.originalItemList;
    if ( !itemList )
      goto LABEL_34;
    v21 = itemList->fields._size;
    if ( v21 >= 1 )
    {
      v22 = 0;
      do
      {
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemList,
                                                                  v22,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          break;
        v23 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v23
          || (FollowerSelectItemListViewItem_c *)itemList->klass->_2.typeHierarchy[v23 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          break;
        }
        FollowerSelectItemListViewItem__Modify(
          (FollowerSelectItemListViewItem_o *)itemList,
          friendPointUpVal,
          friendPointUpMaxVal,
          0LL);
        if ( v21 == ++v22 )
          return;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.originalItemList;
      }
      while ( itemList );
      goto LABEL_34;
    }
  }
  else
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.mixItemList;
    if ( !itemList )
      goto LABEL_34;
    v24 = itemList->fields._size;
    if ( v24 >= 1 )
    {
      v25 = 0;
      do
      {
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemList,
                                                                  v25,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          break;
        v26 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v26
          || (FollowerSelectItemListViewItem_c *)itemList->klass->_2.typeHierarchy[v26 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          break;
        }
        FollowerSelectItemListViewItem__Modify(
          (FollowerSelectItemListViewItem_o *)itemList,
          friendPointUpVal,
          friendPointUpMaxVal,
          0LL);
        if ( v24 == ++v25 )
          return;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.mixItemList;
      }
      while ( itemList );
      goto LABEL_34;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__OnChangeClass(
        FollowerSelectItemListViewManager_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 IsRecommendSupportGroupType; // x0
  __int64 v10; // x1
  int v11; // w21
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t oldCursor; // w22
  const MethodInfo *v14; // x2
  struct ClassButtonControlComponent_o *v15; // x8
  int32_t v16; // w23
  FollowerSelectItemListViewManager_c *v17; // x0
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  const MethodInfo *v20; // x2

  if ( (byte_4B113AF & 1) == 0 )
  {
    sub_1BCA7E0(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classPos, method);
    sub_1BCA7E0(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v5, v6);
    sub_1BCA7E0(&FollowerSelectItemListViewManager_TypeInfo, v7, v8);
    byte_4B113AF = 1;
  }
  if ( this->fields.isInput )
  {
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classPos);
    IsRecommendSupportGroupType = ClassButtonControlComponent__IsRecommendSupportGroupType(classPos, 0LL);
    if ( this->fields.classButtonControl )
    {
      v11 = IsRecommendSupportGroupType;
      IsRecommendSupportGroupType = ClassButtonControlComponent__getChangeCursorPos(
                                      this->fields.classButtonControl,
                                      0LL);
      if ( (IsRecommendSupportGroupType & 0x80000000) == 0 )
      {
        classButtonControl = this->fields.classButtonControl;
        if ( !classButtonControl )
          goto LABEL_22;
        oldCursor = classButtonControl->fields.oldCursor;
        if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, v10);
        IsRecommendSupportGroupType = ClassButtonControlComponent__IsRecommendSupportGroupType(oldCursor, 0LL);
        if ( ((v11 | (unsigned int)IsRecommendSupportGroupType) & 1) != 0 )
          FollowerSelectItemListViewManager__SetEmptyMessage(this, classPos, v14);
      }
      v15 = this->fields.classButtonControl;
      if ( v15 )
      {
        v16 = v15->fields.oldCursor;
        v17 = FollowerSelectItemListViewManager_TypeInfo;
        if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v10);
          v17 = FollowerSelectItemListViewManager_TypeInfo;
        }
        v17->static_fields->oldFollowerClassId = v16;
        v18 = Method_FollowerSelectItemListViewManager_OnChangeClass__;
        if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnChangeClass__ + 83) & 2) != 0 )
          v18 = (_QWORD *)sub_1BCA7F8(Method_FollowerSelectItemListViewManager_OnChangeClass__);
        v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v18, v18[4]);
        OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
        if ( (v11 & 1) != 0 )
          FollowerSelectItemListViewManager__OnClickRecommend(this, classPos, v20);
        else
          FollowerSelectItemListViewManager__SortClass(this, classPos, v20);
        return;
      }
    }
LABEL_22:
    sub_1BCAA3C(IsRecommendSupportGroupType, v10);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickBonusFilterKind(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  _BOOL4 isServantBonusFilterEnable; // w24
  _BOOL4 isServantEquipBonusFilterEnable; // w25
  System_Int32_array *equipBonusFilterEventIds; // x20
  ListViewSort_o *sort; // x21
  CommonUI_o *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  ServantBonusFilterSelectMenu_CallbackFunc_o *v21; // x23
  __int64 v22; // x0
  __int64 v23; // x1

  if ( (byte_4B113A8 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__, v4, v5);
    sub_1BCA7E0(&Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B113A8 = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
    isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
    equipBonusFilterEventIds = this->fields.equipBonusFilterEventIds;
    sort = this->fields.sort;
    v17 = (CommonUI_o *)Instance;
    v21 = (ServantBonusFilterSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                           ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo,
                                                           v18,
                                                           v19,
                                                           v20);
    ServantBonusFilterSelectMenu_CallbackFunc___ctor(
      v21,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__,
      0LL);
    if ( !v17 )
      sub_1BCAA3C(v22, v23);
    CommonUI__OpenServantBonusFilterSelectMenu(
      v17,
      0,
      isServantBonusFilterEnable,
      isServantEquipBonusFilterEnable,
      equipBonusFilterEventIds,
      sort,
      v21,
      0LL);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickChangeSkill(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x1
  __int64 displaySkill; // x8
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x20
  int32_t v15; // w21
  const MethodInfo *v16; // x2

  if ( (byte_4B113B3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FollowerSelectItemListViewManager_OnClickChangeSkill__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v6, v7);
    byte_4B113B3 = 1;
  }
  if ( this->fields.isInput )
  {
    v8 = Method_FollowerSelectItemListViewManager_OnClickChangeSkill__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickChangeSkill__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_FollowerSelectItemListViewManager_OnClickChangeSkill__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    displaySkill = this->fields.displaySkill;
    if ( (unsigned int)displaySkill <= 2 )
      this->fields.displaySkill = dword_C0B704[displaySkill];
    ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                                this,
                                                                v10);
    if ( !ObjectList )
      goto LABEL_14;
    v14 = ObjectList;
    if ( ObjectList->fields._size >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    v14,
                                                                    v15,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
        if ( !ObjectList )
          break;
        FollowerSelectItemListViewObject__ChangeDisplaySkill(
          (FollowerSelectItemListViewObject_o *)ObjectList,
          this->fields.displaySkill,
          v16);
        if ( ++v15 >= v14->fields._size )
          return;
      }
LABEL_14:
      sub_1BCAA3C(ObjectList, v13);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickClassComparibility(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Action_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1

  if ( (byte_4B113A6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__, v4, v5);
    sub_1BCA7E0(&Method_FollowerSelectItemListViewManager_OnClickClassComparibility__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B113A6 = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_FollowerSelectItemListViewManager_OnClickClassComparibility__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickClassComparibility__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_FollowerSelectItemListViewManager_OnClickClassComparibility__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
    System_Action___ctor(
      v16,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__,
      0LL);
    if ( !Instance )
      sub_1BCAA3C(v17, v18);
    CommonUI__OpenClassCompatibilityMenu((CommonUI_o *)Instance, v16, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__OnClickRecommend(
        FollowerSelectItemListViewManager_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  FollowerSelectItemListViewManager_c *v13; // x0
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B113B0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___, *(_QWORD *)&classPos, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(
      &Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__,
      v7,
      v8);
    sub_1BCA7E0(&FollowerSelectItemListViewManager_TypeInfo, v9, v10);
    byte_4B113B0 = 1;
  }
  entity = 0LL;
  if ( this->fields.isGetRecommendSupport )
    goto LABEL_4;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&classPos);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
  if ( !Master_object )
    goto LABEL_16;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          (const MethodInfo_31B30C8 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    goto LABEL_12;
  Master_object = entity;
  if ( !entity )
LABEL_16:
    sub_1BCAA3C(Master_object, v12);
  if ( UserRecommendFollowerEntity__IsEnableSupport(
         (UserRecommendFollowerEntity_o *)entity,
         this->fields.questId,
         this->fields.questPhase,
         0LL) )
  {
LABEL_4:
    FollowerSelectItemListViewManager__SortClass(this, classPos, method);
    return;
  }
LABEL_12:
  v13 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v12);
    v13 = FollowerSelectItemListViewManager_TypeInfo;
  }
  v13->static_fields->followerClassId = classPos;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1BCA784(&this->fields.callbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      14LL,
      0xFFFFFFFFLL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickRefresh(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w19
  __int64 v9; // x1

  if ( (byte_4B113A5 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassButtonControlComponent_TypeInfo, method, v2);
    byte_4B113A5 = 1;
  }
  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0LL;
      v5 = sub_1BCA784(&this->fields.callbackFunc, 0LL);
      classButtonControl = this->fields.classButtonControl;
      if ( !classButtonControl )
        sub_1BCAA3C(v5, v6);
      currentCursor = classButtonControl->fields.currentCursor;
      if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, v6);
      if ( ClassButtonControlComponent__IsRecommendSupportGroupType(currentCursor, 0LL) )
        v9 = 13LL;
      else
        v9 = 7LL;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        v9,
        0xFFFFFFFFLL,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickSelectListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    v5 = sub_1BCA784(&this->fields.callbackFunc, 0LL);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1BCAA3C(v5, v6);
      Index = ListViewObject__get_Index(obj, 0LL);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        0LL,
        Index,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4B113AD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__, method, v2);
    byte_4B113AD = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCAA3C(v6, v7);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickSortKind(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  _BOOL8 IsRecommendSupportGroupType; // x0
  __int64 v15; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w20
  struct ListViewSort_o *sort; // x8
  int v19; // w9
  Il2CppObject *Instance; // x0
  ListViewSort_o *v21; // x20
  CommonUI_o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  OtherUserSortDialog_CallbackFunc_o *v26; // x22

  if ( (byte_4B113AB & 1) == 0 )
  {
    sub_1BCA7E0(&OtherUserSortDialog_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&ClassButtonControlComponent_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_FollowerSelectItemListViewManager_CloseSortDialog__, v6, v7);
    sub_1BCA7E0(&Method_FollowerSelectItemListViewManager_OnClickSortKind__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    byte_4B113AB = 1;
  }
  if ( this->fields.isInput )
  {
    v12 = Method_FollowerSelectItemListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1BCA7F8(Method_FollowerSelectItemListViewManager_OnClickSortKind__);
    v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
    classButtonControl = this->fields.classButtonControl;
    if ( classButtonControl )
    {
      currentCursor = classButtonControl->fields.currentCursor;
      if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, v15);
      IsRecommendSupportGroupType = ClassButtonControlComponent__IsRecommendSupportGroupType(currentCursor, 0LL);
      if ( IsRecommendSupportGroupType )
      {
        sort = this->fields.sort;
        if ( sort )
        {
          if ( sort->fields.otherSortKind == 11 )
            v19 = 29;
          else
            v19 = 11;
          sort->fields.otherSortKind = v19;
          ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
          return;
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v21 = this->fields.sort;
        v22 = (CommonUI_o *)Instance;
        v26 = (OtherUserSortDialog_CallbackFunc_o *)sub_1BCAA2C(
                                                      OtherUserSortDialog_CallbackFunc_TypeInfo,
                                                      v23,
                                                      v24,
                                                      v25);
        OtherUserSortDialog_CallbackFunc___ctor(
          v26,
          (Il2CppObject *)this,
          Method_FollowerSelectItemListViewManager_CloseSortDialog__,
          0LL);
        if ( v22 )
        {
          CommonUI__OpenOtherUserSortDialog(v22, 0, v21, v26, 0LL);
          return;
        }
      }
    }
    sub_1BCAA3C(IsRecommendSupportGroupType, v15);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickSupportListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    v5 = sub_1BCA784(&this->fields.callbackFunc, 0LL);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1BCAA3C(v5, v6);
      Index = ListViewObject__get_Index(obj, 0LL);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        5LL,
        Index,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
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
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    v5 = sub_1BCA784(&this->fields.callbackFunc, 0LL);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1BCAA3C(v5, v6);
      Index = ListViewObject__get_Index(obj, 0LL);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        1LL,
        Index,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OnLongPushServantEquip(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    v5 = sub_1BCA784(&this->fields.callbackFunc, 0LL);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1BCAA3C(v5, v6);
      Index = ListViewObject__get_Index(obj, 0LL);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        6LL,
        Index,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__OnLongPushSkill(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        int32_t kind,
        const MethodInfo *method)
{
  UnityEngine_Component_o *tutorialListViewObject; // x0
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x22
  unsigned int Index; // w0

  if ( (byte_4B113A4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12707/*"ScrollViewEnabled"*/, obj, *(_QWORD *)&kind);
    byte_4B113A4 = 1;
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
        (System_String_o *)StringLiteral_12707/*"ScrollViewEnabled"*/,
        0.1,
        0LL);
    }
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    tutorialListViewObject = (UnityEngine_Component_o *)sub_1BCA784(&this->fields.callbackFunc, 0LL);
    if ( callbackFunc )
    {
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
          callbackFunc->fields.original_method_info,
          (unsigned int)kind,
          Index,
          *(_QWORD *)&callbackFunc->fields.extra_arg);
        return;
      }
LABEL_14:
      sub_1BCAA3C(tutorialListViewObject, obj);
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
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  __int64 v7; // x1
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  UnityEngine_Component_o *tutorialListViewObject; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B113A3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B113A3 = 1;
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
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
        goto LABEL_15;
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
              goto LABEL_15;
            tutorialListViewObject = (UnityEngine_Component_o *)this->fields.scrollView;
            if ( tutorialListViewObject )
            {
              UIScrollView__UpdatePosition((UIScrollView_o *)tutorialListViewObject, 0LL);
              this->fields.isScrollRefresh = 1;
LABEL_15:
              callbackFunc2 = this->fields.callbackFunc2;
              this->fields.callbackFunc2 = 0LL;
              sub_1BCA784(&this->fields.callbackFunc2, 0LL);
              if ( callbackFunc2 )
                ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
                  callbackFunc2->fields.original_method_info,
                  *(_QWORD *)&callbackFunc2->fields.extra_arg);
              return;
            }
          }
        }
      }
      sub_1BCAA3C(tutorialListViewObject, v9);
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
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_object__o *itemList; // x21
  int32_t Index; // w0
  Il2CppObject *Item; // x0
  FollowerSelectItemListViewItem_o *v30; // x20
  __int64 methodPtr_low; // x10
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  __int64 v36; // x1
  Il2CppObject *Master_object; // x21
  int32_t scrollView; // w22
  __int64 v39; // x2
  __int64 v40; // x3
  struct FollowerInfo_o *followerInfo; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v44; // w20
  unsigned int v45; // w24
  ClassBoardInfo_o *v46; // x21
  long double inited; // q0
  _QWORD *v48; // x22
  __int64 v49; // x8
  __int64 v50; // x0
  __int64 v51; // x0
  struct System_Int32_array **v52; // x8
  struct System_Int32_array *v53; // x1
  __int64 v54; // x1
  long double v55; // q0
  _QWORD *v56; // x22
  __int64 v57; // x8
  __int64 v58; // x0
  __int64 v59; // x0
  struct System_Int32_array **v60; // x8
  struct System_Int32_array *v61; // x1
  Il2CppObject *Instance; // x22
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  System_Action_o *v66; // x23

  v4 = this;
  if ( (byte_4B113B7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, obj, method);
    sub_1BCA7E0(&Method_System_Array_Empty_int___, v5, v6);
    sub_1BCA7E0(&ClassBoardInfo_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&FollowerSelectItemListViewItem_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__, v19, v20);
    sub_1BCA7E0(&Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v23, v24);
    this = (FollowerSelectItemListViewManager_o *)sub_1BCA7E0(
                                                    &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                    v25,
                                                    v26);
    byte_4B113B7 = 1;
  }
  if ( v4->fields.isInput )
  {
    itemList = (System_Collections_Generic_List_object__o *)v4->fields.itemList;
    if ( itemList )
    {
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        Item = System_Collections_Generic_List_object___get_Item(
                 itemList,
                 Index,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Item )
          return;
        v30 = (FollowerSelectItemListViewItem_o *)Item;
        methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (FollowerSelectItemListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          return;
        }
        if ( BYTE3(Item[12].monitor) )
        {
          v32 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
          if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 83) & 2) != 0 )
            v32 = (_QWORD *)sub_1BCA7F8(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
          v33 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v32, v32[4]);
          OverwriteAssetSoundName__PlaySystemSe(v33, 2, 0LL);
          return;
        }
        v4->fields.isInput = 0;
        v34 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
        if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 83) & 2) != 0 )
          v34 = (_QWORD *)sub_1BCA7F8(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
        v35 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v34, v34[4]);
        OverwriteAssetSoundName__PlaySystemSe(v35, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v36);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
        this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewItem__get_SvtId(v30, 0LL);
        if ( Master_object )
        {
          this = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                          (int32_t)this,
                                                          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            scrollView = (int32_t)this->fields.scrollView;
            this = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( this )
            {
              this = (FollowerSelectItemListViewManager_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                                              (ClassBoardClassMaster_o *)this,
                                                              scrollView,
                                                              0LL);
              followerInfo = v30->fields.followerInfo;
              if ( followerInfo )
              {
                userClassBoardInfo = followerInfo->fields.userClassBoardInfo;
                if ( userClassBoardInfo )
                {
                  max_length = userClassBoardInfo->max_length;
                  v44 = (int)this;
                  if ( max_length < 1 )
                  {
LABEL_30:
                    v46 = (ClassBoardInfo_o *)sub_1BCAA2C(ClassBoardInfo_TypeInfo, obj, v39, v40);
                    ClassBoardInfo___ctor(v46, 0LL);
                    if ( v46 )
                    {
                      v46->fields.classBoardBaseId = v44;
                      v48 = Method_System_Array_Empty_int___;
                      v49 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v49 )
                      {
                        sub_1C1C718(Method_System_Array_Empty_int___, obj);
                        v49 = v48[7];
                      }
                      v50 = *(_QWORD *)(v49 + 16);
                      if ( (*(_BYTE *)(v50 + 309) & 1) == 0 )
                        v50 = sub_1C1C6BC(inited);
                      if ( !*(_DWORD *)(v50 + 224) )
                        inited = j_il2cpp_runtime_class_init_0(v50, obj);
                      v51 = *(_QWORD *)(v48[7] + 16LL);
                      if ( (*(_BYTE *)(v51 + 309) & 1) == 0 )
                        v51 = sub_1C1C6BC(inited);
                      v52 = *(struct System_Int32_array ***)(v51 + 184);
                      v53 = *v52;
                      v46->fields.squareIds = *v52;
                      sub_1BCA784(&v46->fields.squareIds, v53);
                      v56 = Method_System_Array_Empty_int___;
                      v57 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v57 )
                      {
                        sub_1C1C718(Method_System_Array_Empty_int___, v54);
                        v57 = v56[7];
                      }
                      v58 = *(_QWORD *)(v57 + 16);
                      if ( (*(_BYTE *)(v58 + 309) & 1) == 0 )
                        v58 = sub_1C1C6BC(v55);
                      if ( !*(_DWORD *)(v58 + 224) )
                        v55 = j_il2cpp_runtime_class_init_0(v58, v54);
                      v59 = *(_QWORD *)(v56[7] + 16LL);
                      if ( (*(_BYTE *)(v59 + 309) & 1) == 0 )
                        v59 = sub_1C1C6BC(v55);
                      v60 = *(struct System_Int32_array ***)(v59 + 184);
                      v61 = *v60;
                      v46->fields.releasedClassIds = *v60;
                      sub_1BCA784(&v46->fields.releasedClassIds, v61);
LABEL_48:
                      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v66 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v63, v64, v65);
                      System_Action___ctor(
                        v66,
                        (Il2CppObject *)v4,
                        Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__,
                        0LL);
                      if ( Instance )
                      {
                        CommonUI__OpenClassBoardEffectListDialog((CommonUI_o *)Instance, 1, v44, 0, v66, 1, v46, 0LL);
                        return;
                      }
                    }
                  }
                  else
                  {
                    v45 = 0;
                    while ( 1 )
                    {
                      if ( v45 >= max_length )
                        sub_1BCAA44(this, obj);
                      v46 = userClassBoardInfo->m_Items[v45];
                      if ( !v46 )
                        break;
                      if ( v46->fields.classBoardBaseId == v44 )
                      {
                        this = (FollowerSelectItemListViewManager_o *)ClassBoardInfo__IsReleasedClassId(
                                                                        v46,
                                                                        scrollView,
                                                                        0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          goto LABEL_48;
                      }
                      max_length = userClassBoardInfo->max_length;
                      if ( (int)++v45 >= max_length )
                        goto LABEL_30;
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_1BCAA3C(this, obj);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__PlayClassButtonEffect(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  ClassButtonControlComponent_o *classButtonControl; // x0

  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl )
    sub_1BCAA3C(0LL, method);
  ClassButtonControlComponent__PlayRecommendEffect(classButtonControl, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__RequestInto(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_FollowerSelectItemListViewObject__o *ObjectList; // x0
  __int64 v14; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v16; // x20
  int v17; // w24
  int32_t v18; // w21
  Il2CppObject *Item; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Action_o *v23; // x23
  const MethodInfo *v24; // x3

  if ( (byte_4B113A2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v8, v9);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v10, v11);
    byte_4B113A2 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = FollowerSelectItemListViewManager__get_ObjectList(this, v12);
  if ( !ObjectList )
LABEL_13:
    sub_1BCAA3C(ObjectList, v14);
  size = ObjectList->fields._size;
  v16 = (System_Collections_Generic_List_object__o *)ObjectList;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v17 = 0;
  v18 = 0;
  do
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v16,
             v18,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
      System_Action___ctor(v23, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v17;
      FollowerSelectItemListViewObject__Init_31425868((FollowerSelectItemListViewObject_o *)Item, 4, v23, 0.1, v24);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v18;
  }
  while ( v18 < v16->fields._size );
  if ( !v17 )
  {
LABEL_12:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
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

  if ( (byte_4B113A0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__, v7, v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v17, v18);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v19, v20);
    byte_4B113A0 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
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
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v32.fields._current;
      v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v29, v30);
      FollowerSelectItemListViewObject__Init_31425868(
        (FollowerSelectItemListViewObject_o *)current,
        mode,
        v28,
        delay,
        v31);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__RequestListObject_31424752(
        FollowerSelectItemListViewManager_o *this,
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

  if ( (byte_4B113A1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__, v7, v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v17, v18);
    byte_4B113A1 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
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
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v30.fields._current;
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v27, v28);
      FollowerSelectItemListViewObject__Init_31425256((FollowerSelectItemListViewObject_o *)current, mode, v26, v29);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


void __fastcall FollowerSelectItemListViewManager__SaveSortFilter(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  ListViewSort_o *sort; // x0
  struct ListViewSort_o *v9; // x8
  FollowerSelectItemListViewManager_o *v10; // x0
  int monitor; // w20
  const MethodInfo *v12; // x1
  FollowerSelectItemListViewManager_c *v13; // x0
  FollowerSelectItemListViewManager_o *v14; // x0
  int monitor_high; // w20
  __int64 v16; // x1
  FollowerSelectItemListViewManager_c *v17; // x0

  if ( (byte_4B1139A & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerSelectItemListViewManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6869/*"FollowerSelectClass"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_6872/*"FollowerSelectOldClass"*/, v6, v7);
    byte_4B1139A = 1;
  }
  sort = this->fields.sort;
  if ( !sort || (ListViewSort__Save(sort, 0LL), (v9 = this->fields.sort) == 0LL) )
    sub_1BCAA3C(sort, method);
  if ( v9->fields.isRequestSave )
  {
    v10 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, method);
      v10 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor = (int)v10->fields.sort->monitor;
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(v10, method) )
    {
      v13 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v12);
        v13 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6869/*"FollowerSelectClass"*/, v13->static_fields->followerClassId, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
    v14 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v12);
      v14 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor_high = HIDWORD(v14->fields.sort->monitor);
    if ( monitor_high != FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(v14, v12) )
    {
      v17 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v16);
        v17 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(
        (System_String_o *)StringLiteral_6872/*"FollowerSelectOldClass"*/,
        v17->static_fields->oldFollowerClassId,
        0LL);
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
    sub_1BCAA3C(0LL, method);
  UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__SetBonusFilterFlag(
        FollowerSelectItemListViewManager_o *this,
        System_Int32_array *eventIds,
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
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x8
  System_Collections_Generic_List_int__o *v16; // x21
  unsigned __int64 v17; // x23
  int32_t v18; // w22
  bool isBonusFilterEnable; // w27
  bool isServantBonusFilterEnable; // w27
  bool isServantEquipBonusFilterEnable; // w27
  struct System_Int32_array *v22; // x0
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1138E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventFilterMaster___, eventIds, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_int___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Remove__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B1138E = 1;
  }
  entity = 0LL;
  *(_WORD *)&this->fields.isBonusFilterEnable = 0;
  this->fields.isServantEquipBonusFilterEnable = 0;
  Instance = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)eventIds,
                                                         (const MethodInfo_2F4F4F8 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !eventIds )
    goto LABEL_22;
  v15 = *(_QWORD *)&eventIds->max_length;
  v16 = Instance;
  if ( v15 && (int)v15 >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v15 )
        sub_1BCAA44(Instance, v14);
      v18 = eventIds->m_Items[v17 + 1];
      Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventFilterMaster___);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)EventFilterMaster__TryGetEntity_39853044(
                                                             (EventFilterMaster_o *)Instance,
                                                             &entity,
                                                             v18,
                                                             0,
                                                             0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (System_Collections_Generic_List_int__o *)entity;
        if ( !entity )
          break;
        isBonusFilterEnable = this->fields.isBonusFilterEnable;
        this->fields.isBonusFilterEnable = isBonusFilterEnable | !EventFilterEntity__IsSupportFilterNoDisp(entity, 0LL);
        Instance = (System_Collections_Generic_List_int__o *)entity;
        if ( !entity )
          break;
        isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
        this->fields.isServantBonusFilterEnable = isServantBonusFilterEnable | !EventFilterEntity__IsSupportServantFilterNoDisp(
                                                                                  entity,
                                                                                  0LL);
        Instance = (System_Collections_Generic_List_int__o *)entity;
        if ( !entity )
          break;
        isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
        this->fields.isServantEquipBonusFilterEnable = isServantEquipBonusFilterEnable | !EventFilterEntity__IsSupportServantEquipFilterNoDisp(
                                                                                            entity,
                                                                                            0LL);
        Instance = (System_Collections_Generic_List_int__o *)entity;
        if ( !entity )
          break;
        Instance = (System_Collections_Generic_List_int__o *)EventFilterEntity__IsSupportServantEquipFilterNoDisp(
                                                               entity,
                                                               0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v16 )
            break;
          Instance = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Remove(
                                                                 v16,
                                                                 v18,
                                                                 (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
      else
      {
        *(_WORD *)&this->fields.isBonusFilterEnable = 257;
        this->fields.isServantEquipBonusFilterEnable = 1;
      }
      LODWORD(v15) = eventIds->max_length;
      if ( (__int64)++v17 >= (int)v15 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1BCAA3C(Instance, v14);
  }
LABEL_20:
  if ( !v16 )
    goto LABEL_22;
  v22 = System_Collections_Generic_List_int___ToArray(
          v16,
          (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.equipBonusFilterEventIds = v22;
  sub_1BCA784(&this->fields.equipBonusFilterEventIds, v22);
}


void __fastcall FollowerSelectItemListViewManager__SetClassBoardInfo(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  BalanceConfig_c *v34; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  UISprite_o *classInfoSprite; // x20
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x0
  System_Collections_Generic_Dictionary_int__int__o **p_classBoardMaxDictionary; // x20
  __int64 v42; // x1
  System_Collections_Generic_Dictionary_int__int__o *v43; // x19
  System_Collections_ObjectModel_Collection_T__o *Master_object; // x0
  __int64 v45; // x1
  __int64 v46; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v49; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v52; // x8
  __int64 v53; // x9
  int32_t *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x0
  ClassBoardBaseEntity_c *v57; // x1
  __int64 v58; // x21
  __int64 methodPtr_low; // x9
  Il2CppObject *v60; // x0
  __int64 v61; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v63; // x1
  System_Collections_Generic_IEnumerator_T__c *v64; // x8
  __int64 v65; // x9
  int32_t *v66; // x10
  __int64 v67; // x0

  if ( (byte_4B11390 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v4, v5);
    sub_1BCA7E0(&ClassBoardBaseEntity_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&CondType_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v14, v15);
    sub_1BCA7E0(&DataManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Clear__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v24, v25);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v28, v29);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v30, v31);
    sub_1BCA7E0(&StringLiteral_17850/*"buttontxt_formation_20"*/, v32, v33);
    byte_4B11390 = 1;
  }
  v34 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v34 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v34->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  if ( CondType__IsQuestClear_38310172(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v36);
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17850/*"buttontxt_formation_20"*/, 0LL);
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = &this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_31FD3F4 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v43 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v36,
                                                                 v37,
                                                                 v38);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v43,
      (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *p_classBoardMaxDictionary = v43;
    sub_1BCA784(p_classBoardMaxDictionary, v43);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v42);
  Master_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object
    || (Master_object = (System_Collections_ObjectModel_Collection_T__o *)Master_object[1].monitor) == 0LL )
  {
    sub_1BCAA3C(Master_object, v45);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Master_object,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v46);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v49 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v49;
        p_offset += 4;
        if ( !v49 )
          goto LABEL_23;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_23:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v52 = Enumerator->klass;
    v53 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v54 = &v52->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v54 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_30;
      }
      v55 = (__int64)&v52->vtable[*v54].method;
    }
    else
    {
LABEL_30:
      v55 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v56 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v55)(
            Enumerator,
            *(_QWORD *)(v55 + 8));
    v58 = v56;
    if ( v56 )
    {
      v57 = ClassBoardBaseEntity_TypeInfo;
      methodPtr_low = LOBYTE(ClassBoardBaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v56 + 304LL) < (unsigned int)methodPtr_low
        || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v56 + 200LL) + 8 * methodPtr_low - 8) != ClassBoardBaseEntity_TypeInfo )
      {
        v60 = (Il2CppObject *)sub_1BCACFC(v56);
LABEL_50:
        sub_1BCAA3C(v60, v61);
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v57);
    v60 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v58 )
      goto LABEL_50;
    if ( !v60 )
      sub_1BCAA3C(0LL, v61);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                            (ClassBoardSquareMaster_o *)v60,
                            *(_DWORD *)(v58 + 16),
                            0LL);
    if ( OtherThanNoneEntity )
    {
      if ( !*p_classBoardMaxDictionary )
        sub_1BCAA3C(OtherThanNoneEntity, v63);
      System_Collections_Generic_Dictionary_int__int___Add(
        *p_classBoardMaxDictionary,
        *(_DWORD *)(v58 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v64 = Enumerator->klass;
  v65 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v66 = &v64->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
    {
      --v65;
      v66 += 4;
      if ( !v65 )
        goto LABEL_46;
    }
    v67 = (__int64)&v64->vtable[*v66].method;
  }
  else
  {
LABEL_46:
    v67 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v67)(Enumerator, *(_QWORD *)(v67 + 8));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__SetClassId(
        FollowerSelectItemListViewManager_o *this,
        int32_t followerClassId,
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
  __int64 v19; // x1
  __int64 v20; // x2
  FollowerSelectItemListViewManager_c *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Collections_Generic_IEnumerable_T__o *mixItemList; // x21
  System_Collections_Generic_List_object__o *v26; // x22
  __int64 v27; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 methodPtr_low; // x10
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_IEnumerable_T__o *recommendItemList; // x21
  System_Collections_Generic_List_object__o *v34; // x22
  __int64 v35; // x10
  System_Collections_Generic_IEnumerable_T__o *originalItemList; // x21
  System_Collections_Generic_List_object__o *v37; // x22
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x20
  __int64 v39; // x10
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B1139E & 1) == 0 )
  {
    sub_1BCA7E0(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&followerClassId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10);
    sub_1BCA7E0(&FollowerSelectItemListViewItem_TypeInfo, v11, v12);
    sub_1BCA7E0(&FollowerSelectItemListViewManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem___ctor___76788512, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_ListViewItem__TypeInfo, v19, v20);
    byte_4B1139E = 1;
  }
  v21 = FollowerSelectItemListViewManager_TypeInfo;
  memset(&v41, 0, sizeof(v41));
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, *(_QWORD *)&followerClassId);
    v21 = FollowerSelectItemListViewManager_TypeInfo;
  }
  v21->static_fields->followerClassId = followerClassId;
  if ( this->fields.mixItemList && this->fields.originalItemList )
  {
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, *(_QWORD *)&followerClassId);
    if ( ClassButtonControlComponent__IsMixSupportGroupType(followerClassId, 0LL) )
    {
      mixItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.mixItemList;
      v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                           v22,
                                                           v23,
                                                           v24);
      System_Collections_Generic_List_object____ctor_56235344(
        v26,
        mixItemList,
        (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_ListViewItem___ctor___76788512);
      this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v26;
      sub_1BCA784(&this->fields.itemList, v26);
      itemList = this->fields.itemList;
      if ( itemList )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v40,
          (System_Collections_Generic_List_object__o *)itemList,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v41 = v40;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v41,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( v41.fields._current )
          {
            methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(v41.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
              && (FollowerSelectItemListViewItem_c *)v41.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo )
            {
              FollowerSelectItemListViewItem__UpdateRestriction(
                (FollowerSelectItemListViewItem_o *)v41.fields._current,
                0LL);
            }
          }
        }
LABEL_34:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v41,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        return;
      }
    }
    else
    {
      if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, v22);
      if ( ClassButtonControlComponent__IsRecommendSupportGroupType(followerClassId, 0LL) )
      {
        recommendItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.recommendItemList;
        v34 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                             v30,
                                                             v31,
                                                             v32);
        System_Collections_Generic_List_object____ctor_56235344(
          v34,
          recommendItemList,
          (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_ListViewItem___ctor___76788512);
        this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v34;
        sub_1BCA784(&this->fields.itemList, v34);
        itemList = this->fields.itemList;
        if ( itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v40,
            (System_Collections_Generic_List_object__o *)itemList,
            (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v41 = v40;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v41,
                    (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v41.fields._current )
            {
              v35 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(v41.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v35
                && (FollowerSelectItemListViewItem_c *)v41.fields._current->klass->_2.typeHierarchy[v35 - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__UpdateRestriction(
                  (FollowerSelectItemListViewItem_o *)v41.fields._current,
                  0LL);
              }
            }
          }
          goto LABEL_34;
        }
      }
      else
      {
        originalItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.originalItemList;
        v37 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                             v30,
                                                             v31,
                                                             v32);
        System_Collections_Generic_List_object____ctor_56235344(
          v37,
          originalItemList,
          (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_ListViewItem___ctor___76788512);
        this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v37;
        p_itemList = &this->fields.itemList;
        sub_1BCA784(p_itemList, v37);
        itemList = *p_itemList;
        if ( *p_itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v40,
            (System_Collections_Generic_List_object__o *)itemList,
            (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v41 = v40;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v41,
                    (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v41.fields._current )
            {
              v39 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(v41.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v39
                && (FollowerSelectItemListViewItem_c *)v41.fields._current->klass->_2.typeHierarchy[v39 - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__SetClassId(
                  (FollowerSelectItemListViewItem_o *)v41.fields._current,
                  followerClassId,
                  0LL);
              }
            }
          }
          goto LABEL_34;
        }
      }
    }
    sub_1BCAA3C(itemList, v27);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__SetEmptyMessage(
        FollowerSelectItemListViewManager_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  System_String_o **v12; // x8
  System_String_o *v13; // x20
  UILabel_o *emptyMessageLabel; // x19
  System_String_o *v15; // x0
  __int64 v16; // x1

  if ( (byte_4B11395 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classId, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_11138/*"RECOMMEND_SERVANT_EMPTY"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v9, v10);
    byte_4B11395 = 1;
  }
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classId);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(classId, 0LL) )
    v12 = (System_String_o **)&StringLiteral_11138/*"RECOMMEND_SERVANT_EMPTY"*/;
  else
    v12 = (System_String_o **)&StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  v13 = *v12;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
  v15 = LocalizationManager__Get(v13, 0LL);
  if ( !emptyMessageLabel )
    sub_1BCAA3C(v15, v16);
  UILabel__set_text(emptyMessageLabel, v15, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__SetFilterButtonImage(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ListViewSort_o *sort; // x0
  UISprite_o *bonusFilterSprite; // x19
  System_String_o **v8; // x8

  if ( (byte_4B113AA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17711/*"btn_sefilter_2_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17710/*"btn_sefilter_2"*/, v4, v5);
    byte_4B113AA = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (bonusFilterSprite = this->fields.bonusFilterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !bonusFilterSprite) )
  {
    sub_1BCAA3C(sort, method);
  }
  v8 = (System_String_o **)&StringLiteral_17710/*"btn_sefilter_2"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v8 = (System_String_o **)&StringLiteral_17711/*"btn_sefilter_2_on"*/;
  UISprite__set_spriteName(bonusFilterSprite, *v8, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__SetMode(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        FollowerSelectItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1BCA784(&this->fields.callbackFunc, callback);
  FollowerSelectItemListViewManager__SetMode_31424000(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__SetMode_31424000(
        FollowerSelectItemListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *ClippingObjectList; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x19
  int32_t v18; // w20
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  __int64 *v21; // x8
  const MethodInfo *v22; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w21
  Il2CppObject *Item; // x22
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Action_o *v30; // x23
  const MethodInfo *v31; // x3
  struct FollowerSelectItemListViewObject_o *tutorialListViewObject; // x23
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x2

  if ( (byte_4B1139F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v9, v10);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_11448/*"RequestInto"*/, v13, v14);
    byte_4B1139F = 1;
  }
  if ( mode != 3 )
  {
    this->fields.initMode = mode;
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
    ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
    if ( mode == 1 )
    {
      v21 = &StringLiteral_11448/*"RequestInto"*/;
    }
    else
    {
      if ( mode != 4 )
      {
        if ( mode == 2 )
          FollowerSelectItemListViewManager__RequestListObject_31424752(this, 3, v20);
        return;
      }
      ListViewManager__set_IsInput((ListViewManager_o *)this, 1, 0LL);
      ClippingObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ClippingObjectList(
                                                                          this,
                                                                          v22);
      if ( !ClippingObjectList )
        goto LABEL_31;
      size = ClippingObjectList->fields._size;
      v24 = ClippingObjectList;
      if ( size >= 1 )
      {
        this->fields.callbackCount = size;
        v25 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v24,
                   v25,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
          v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v28, v29);
          System_Action___ctor(v30, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
            break;
          if ( v25 )
          {
            FollowerSelectItemListViewObject__Init_31425256((FollowerSelectItemListViewObject_o *)Item, 2, v30, v31);
          }
          else
          {
            FollowerSelectItemListViewObject__Init_31425256((FollowerSelectItemListViewObject_o *)Item, 0, v30, v31);
            ClippingObjectList = (System_Collections_Generic_List_object__o *)this->fields.tutorialListViewObject;
            if ( !ClippingObjectList )
              break;
            ClippingObjectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)ClippingObjectList,
                                                                                0LL);
            if ( !ClippingObjectList )
              break;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ClippingObjectList, 1, 0LL);
            ClippingObjectList = (System_Collections_Generic_List_object__o *)this->fields.tutorialListViewObject;
            if ( !ClippingObjectList )
              break;
            ClippingObjectList[1].klass = (System_Collections_Generic_List_object__c *)this;
            sub_1BCA784(&ClippingObjectList[1], this);
            tutorialListViewObject = this->fields.tutorialListViewObject;
            ClippingObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewObject__GetItem(
                                                                                (FollowerSelectItemListViewObject_o *)Item,
                                                                                v33);
            if ( !tutorialListViewObject )
              break;
            ((void (__fastcall *)(struct FollowerSelectItemListViewObject_o *, System_Collections_Generic_List_object__o *, Il2CppMethodPointer))tutorialListViewObject->klass->vtable._5_SetItem.method)(
              tutorialListViewObject,
              ClippingObjectList,
              tutorialListViewObject->klass->vtable._6_SetItem.methodPtr);
            ClippingObjectList = (System_Collections_Generic_List_object__o *)this->fields.tutorialListViewObject;
            if ( !ClippingObjectList )
              break;
            FollowerSelectItemListViewObject__Init_31422516(
              (FollowerSelectItemListViewObject_o *)ClippingObjectList,
              6,
              v34);
          }
          if ( ++v25 >= v24->fields._size )
            return;
        }
LABEL_31:
        sub_1BCAA3C(ClippingObjectList, v16);
      }
      this->fields.callbackCount = 1;
      v21 = &StringLiteral_10069/*"OnMoveEnd"*/;
    }
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)*v21, 0.0, 0LL);
    return;
  }
  ClippingObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                                      this,
                                                                      *(const MethodInfo **)&mode);
  if ( !ClippingObjectList )
    goto LABEL_31;
  v17 = ClippingObjectList;
  if ( ClippingObjectList->fields._size >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      ClippingObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          v17,
                                                                          v18,
                                                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
      if ( !ClippingObjectList )
        break;
      FollowerSelectItemListViewObject__Init_31422516((FollowerSelectItemListViewObject_o *)ClippingObjectList, 5, v19);
      if ( ++v18 >= v17->fields._size )
        return;
    }
    goto LABEL_31;
  }
}


void __fastcall FollowerSelectItemListViewManager__SetMode_31424700(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BCA784(&this->fields.callbackFunc2, callback);
  FollowerSelectItemListViewManager__SetMode_31424000(this, mode, v6);
}


void __fastcall FollowerSelectItemListViewManager__SetObjectItem(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  ListViewObject_o *v7; // x0
  int32_t initMode; // w8
  int32_t v9; // w1

  if ( (byte_4B1139C & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerSelectItemListViewObject_TypeInfo, obj, item);
    byte_4B1139C = 1;
  }
  if ( obj
    && (methodPtr_low = LOBYTE(FollowerSelectItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (FollowerSelectItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
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
    sub_1BCAA3C(v7, obj);
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
  FollowerSelectItemListViewObject__Init_31422516(
    (FollowerSelectItemListViewObject_o *)v7,
    v9,
    (const MethodInfo *)item);
}


void __fastcall FollowerSelectItemListViewManager__SetSortButtonImage(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  ListViewSort_o *sort; // x0
  __int64 v20; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w20
  bool IsRecommendSupportGroupType; // w20
  UILabel_o *sortKindLabel; // x21
  UnityEngine_Object_o *sortOrderSprite; // x21
  struct ListViewSort_o *v26; // x8
  __int64 v27; // x9
  int v28; // w9
  System_String_o **v29; // x8
  struct ListViewSort_o *v30; // x8
  System_String_o **v31; // x9
  System_String_o **v32; // x10
  System_String_o **v33; // x8
  System_String_o **v34; // x8

  if ( (byte_4B113AE & 1) == 0 )
  {
    sub_1BCA7E0(&ClassButtonControlComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_17718/*"btn_sort_up"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17806/*"btn_txt_up"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17761/*"btn_txt_new"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17751/*"btn_txt_down"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17768/*"btn_txt_old"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_17715/*"btn_sort_down"*/, v16, v17);
    byte_4B113AE = 1;
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL);
  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl )
    goto LABEL_39;
  currentCursor = classButtonControl->fields.currentCursor;
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, v20);
  IsRecommendSupportGroupType = ClassButtonControlComponent__IsRecommendSupportGroupType(currentCursor, 0LL);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_39;
    sortKindLabel = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, IsRecommendSupportGroupType, 0LL);
    if ( !sortKindLabel )
      goto LABEL_39;
    UILabel__set_text(sortKindLabel, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v26 = this->fields.sort;
    if ( v26 )
    {
      v27 = 56LL;
      if ( IsRecommendSupportGroupType )
        v27 = 152LL;
      v28 = *(_DWORD *)((char *)&v26->klass + v27);
      if ( v28 == 11 || v28 == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v29 = (System_String_o **)(v26->fields.isAscendingOrder ? &StringLiteral_17768/*"btn_txt_old"*/ : &StringLiteral_17761/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v29, 0LL);
          v30 = this->fields.sort;
          if ( v30 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v31 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
              v32 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
LABEL_35:
              if ( v30->fields.isAscendingOrder )
                v34 = v31;
              else
                v34 = v32;
              UISprite__set_spriteName((UISprite_o *)sort, *v34, 0LL);
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
          v33 = (System_String_o **)(v26->fields.isAscendingOrder ? &StringLiteral_17806/*"btn_txt_up"*/ : &StringLiteral_17751/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v33, 0LL);
          v30 = this->fields.sort;
          if ( v30 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v31 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
              v32 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_39:
    sub_1BCAA3C(sort, v20);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__SortClass(
        FollowerSelectItemListViewManager_o *this,
        int32_t classPos,
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
  __int64 v19; // x1
  __int64 v20; // x2
  FollowerSelectItemListViewManager_c *v21; // x0
  __int64 v22; // x1
  FollowerSelectItemListViewManager_c *v23; // x0
  int32_t followerClassId; // w21
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Collections_Generic_List_object__o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x20
  int size; // w25
  int32_t v35; // w22
  int v36; // w26
  Il2CppObject *v37; // x23
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  System_Collections_Generic_List_object__o *v43; // x22
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  if ( (byte_4B113B1 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classPos, method);
    sub_1BCA7E0(&FollowerSelectItemListViewItem_TypeInfo, v5, v6);
    sub_1BCA7E0(&FollowerSelectItemListViewManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem___ctor___76788512, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_ListViewItem__TypeInfo, v19, v20);
    byte_4B113B1 = 1;
  }
  v21 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, *(_QWORD *)&classPos);
    v21 = FollowerSelectItemListViewManager_TypeInfo;
  }
  if ( v21->static_fields->followerClassId != classPos )
  {
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classPos);
    if ( !ClassButtonControlComponent__IsMixSupportGroupType(classPos, 0LL) )
    {
      v23 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, v22);
        v23 = FollowerSelectItemListViewManager_TypeInfo;
      }
      followerClassId = v23->static_fields->followerClassId;
      if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, v22);
      ClassButtonControlComponent__IsMixSupportGroupType(followerClassId, 0LL);
    }
  }
  FollowerSelectItemListViewManager__SetClassId(this, classPos, method);
  v28 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                       v25,
                                                       v26,
                                                       v27);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  p_itemList = &this->fields.itemList;
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_43;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v35 = 0;
    v36 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v35,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      v37 = (Il2CppObject *)itemList;
      methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (FollowerSelectItemListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != FollowerSelectItemListViewItem_TypeInfo )
      {
        break;
      }
      itemList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewItem__get_SvtId(
                                                                (FollowerSelectItemListViewItem_o *)itemList,
                                                                0LL);
      if ( (int)itemList >= 1 )
      {
        HIDWORD(v37[1].klass) = v36;
        if ( !v28 )
          break;
        items = v28->fields._items;
        v40 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v28->fields._version;
        if ( !items )
          break;
        v41 = v28->fields._size;
        if ( (unsigned int)v41 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v28,
            v37,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + v41;
          v28->fields._size = v41 + 1;
          v42[4] = (Il2CppClass *)v37;
          sub_1BCA784(v42 + 4, v37);
        }
        ++v36;
      }
      if ( size == ++v35 )
        goto LABEL_30;
      itemList = (System_Collections_Generic_List_object__o *)*p_itemList;
    }
    while ( *p_itemList );
LABEL_43:
    sub_1BCAA3C(itemList, v29);
  }
LABEL_30:
  v43 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                       v29,
                                                       v30,
                                                       v31);
  System_Collections_Generic_List_object____ctor_56235344(
    v43,
    (System_Collections_Generic_IEnumerable_T__o *)v28,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_ListViewItem___ctor___76788512);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v43;
  sub_1BCA784(&this->fields.itemList, v43);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.sort;
  if ( !itemList )
    goto LABEL_43;
  if ( LODWORD(itemList[1].fields._items) == 11 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( (!questRestrictionInfo || !questRestrictionInfo->fields.isRestriction)
      && this->fields.isBonusFilterEnable
      && !ListViewSort__GetFilter((ListViewSort_o *)itemList, 18, 0LL) )
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.sort;
      if ( !itemList )
        goto LABEL_43;
      if ( !ListViewSort__GetFilter((ListViewSort_o *)itemList, 19, 0LL) )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.sort;
        if ( !itemList )
          goto LABEL_43;
        if ( ListViewSort__GetFilter((ListViewSort_o *)itemList, 40, 0LL) )
        {
          itemList = (System_Collections_Generic_List_object__o *)this->fields.sort;
          if ( !itemList )
            goto LABEL_43;
          ListViewSort__GetFilter((ListViewSort_o *)itemList, 41, 0LL);
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


void __fastcall FollowerSelectItemListViewManager__UpdateRefreshButtonInfo(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  FollowerSelectItemListViewManager_o *v3; // x19
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
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w20
  __int64 v24; // x1
  int64_t RefreshRemain; // x0
  __int64 v26; // x20
  __int64 v27; // x1
  Il2CppObject *v28; // x21
  __int64 v29; // x1
  Il2CppObject *v30; // x21
  UIWidget_o *refreshButtonSprite; // x21
  __int64 v32; // x1
  int64_t Time; // x0
  int64_t v34; // x21
  UILabel_o *refreshRemainLabel; // x22
  Il2CppObject *v36; // x0
  __int64 v37; // x1
  Il2CppObject *Component_object; // x20
  __int64 v39; // x1
  Il2CppObject *v40; // x20
  __int64 v41; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4B113B2 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassButtonControlComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&FollowerListRequest_TypeInfo, v4, v5);
    sub_1BCA7E0(&FollowerRecommendSupportListRequest_TypeInfo, v6, v7);
    sub_1BCA7E0(&FollowerSelectItemListViewManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, v10, v11);
    sub_1BCA7E0(&long_TypeInfo, v12, v13);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_25238/*"{0}"*/, v18, v19);
    this = (FollowerSelectItemListViewManager_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v20, v21);
    byte_4B113B2 = 1;
  }
  classButtonControl = v3->fields.classButtonControl;
  if ( !classButtonControl )
    goto LABEL_59;
  currentCursor = classButtonControl->fields.currentCursor;
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, method);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(currentCursor, 0LL) )
  {
    if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo, v24);
    RefreshRemain = FollowerRecommendSupportListRequest__GetRefreshRemain(0LL);
  }
  else
  {
    if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo, v24);
    RefreshRemain = FollowerListRequest__getRefreshRemain(0LL);
  }
  v26 = RefreshRemain;
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
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
    this = (FollowerSelectItemListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                    (UnityEngine_Object_o *)Component_object,
                                                    0LL,
                                                    0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_59;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0LL);
    }
    else
    {
      this = (FollowerSelectItemListViewManager_o *)v3->fields.refreshButtonSprite;
      if ( !this )
        goto LABEL_59;
      v42.fields.r = 1.0;
      v42.fields.g = 1.0;
      v42.fields.b = 1.0;
      v42.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this, v42, 0LL);
    }
    this = (FollowerSelectItemListViewManager_o *)v3->fields.refreshTitleObject;
    if ( this )
    {
      v40 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)this,
              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
      this = (FollowerSelectItemListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                      (UnityEngine_Object_o *)v40,
                                                      0LL,
                                                      0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v40 )
          goto LABEL_59;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v40, 1, 0LL);
      }
      else
      {
        this = (FollowerSelectItemListViewManager_o *)v3->fields.refreshTitleSprite;
        if ( !this )
          goto LABEL_59;
        v43.fields.r = 1.0;
        v43.fields.g = 1.0;
        v43.fields.b = 1.0;
        v43.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v43, 0LL);
      }
      this = (FollowerSelectItemListViewManager_o *)v3->fields.refreshRemainLabel;
      if ( this )
      {
        this = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (FollowerSelectItemListViewManager_o *)v3->fields.refreshRemainLabel;
          if ( this )
          {
            UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_59:
    sub_1BCAA3C(this, method);
  }
  this = (FollowerSelectItemListViewManager_o *)v3->fields.refreshButtonObject;
  if ( !this )
    goto LABEL_59;
  v28 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  this = (FollowerSelectItemListViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v28 )
      goto LABEL_59;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v28, 0, 0LL);
  }
  this = (FollowerSelectItemListViewManager_o *)v3->fields.refreshTitleObject;
  if ( !this )
    goto LABEL_59;
  v30 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  this = (FollowerSelectItemListViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v30, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v30 )
      goto LABEL_59;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v30, 0, 0LL);
  }
  refreshButtonSprite = (UIWidget_o *)v3->fields.refreshButtonSprite;
  this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, method);
    this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
  }
  if ( !refreshButtonSprite )
    goto LABEL_59;
  UIWidget__set_color(refreshButtonSprite, *(UnityEngine_Color_o *)&this->fields.sort->fields.FILTER_DEFAULT_VALUE, 0LL);
  this = (FollowerSelectItemListViewManager_o *)v3->fields.refreshTitleSprite;
  if ( !this )
    goto LABEL_59;
  UIWidget__set_color(
    (UIWidget_o *)this,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->REFRESH_DARK_COLOR,
    0LL);
  v3->fields.isRefreshClear = 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v32);
  Time = NetworkManager__getTime(0LL);
  if ( v3->fields.refreshCheckTime != Time )
  {
    v34 = Time;
    this = (FollowerSelectItemListViewManager_o *)v3->fields.refreshRemainLabel;
    if ( this )
    {
      this = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        refreshRemainLabel = v3->fields.refreshRemainLabel;
        v41 = v26;
        v36 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v41);
        this = (FollowerSelectItemListViewManager_o *)System_String__Format(
                                                        (System_String_o *)StringLiteral_25238/*"{0}"*/,
                                                        v36,
                                                        0LL);
        if ( refreshRemainLabel )
        {
          UILabel__set_text(refreshRemainLabel, (System_String_o *)this, 0LL);
          v3->fields.refreshCheckTime = v34;
          return;
        }
      }
    }
    goto LABEL_59;
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

  if ( (byte_4B11386 & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B11386 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1BCACFC(v7);
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

  if ( (byte_4B11388 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B11388 = 1;
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
  v10 = (FollowerSelectItemListViewManager_o *)sub_1BCACFC(v7);
  FollowerSelectItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_FollowerSelectItemListViewObject__o *__fastcall FollowerSelectItemListViewManager__get_ClippingObjectList(
        FollowerSelectItemListViewManager_o *this,
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
  _BOOL8 v33; // x0
  __int64 v34; // x1
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B1138D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B1138D = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v41 = v40;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v41.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)FollowerSelectItemListViewObject__GetItem(
                                 (FollowerSelectItemListViewObject_o *)Component_object,
                                 v29);
      if ( !Item )
        sub_1BCAA3C(0LL, v32);
      if ( Item->fields.isTermination )
      {
        v33 = ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, Item, 0LL);
        if ( v33 )
        {
          if ( !v21 )
            sub_1BCAA3C(v33, v34);
          items = v21->fields._items;
          v36 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1BCAA3C(v33, v34);
          size = v21->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v30,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v21 )
          sub_1BCAA3C(Item, v32);
        items = v21->fields._items;
        v36 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(Item, v32);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v38 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v38[4] = (Il2CppClass *)v30;
        sub_1BCA784(v38 + 4, v30);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FollowerSelectItemListViewObject__o *)v21;
}


System_Collections_Generic_List_FollowerSelectItemListViewObject__o *__fastcall FollowerSelectItemListViewManager__get_ObjectList(
        FollowerSelectItemListViewManager_o *this,
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
  Il2CppObject *v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1138C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B1138C = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v29 = Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v31 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v29;
        sub_1BCA784(v33 + 4, v29);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FollowerSelectItemListViewObject__o *)v21;
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

  if ( (byte_4B11387 & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B11387 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1BCACFC(v7);
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

  if ( (byte_4B11389 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B11389 = 1;
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
  v10 = (const MethodInfo *)sub_1BCACFC(v7);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A05590;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A05538;
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
  __int64 v10; // x2
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = result;
  v14 = kind;
  if ( (byte_4B113BB & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&result);
    sub_1BCA7E0(&FollowerSelectItemListViewManager_ResultKind_TypeInfo, v9, v10);
    byte_4B113BB = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(FollowerSelectItemListViewManager_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall FollowerSelectItemListViewManager_CallbackFunc__EndInvoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall FollowerSelectItemListViewManager_CallbackFunc__Invoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
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


void __fastcall FollowerSelectItemListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B113BC & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerSelectItemListViewManager___c_TypeInfo, v1, v2);
    byte_4B113BC = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(FollowerSelectItemListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  FollowerSelectItemListViewManager___c_TypeInfo->static_fields->__9 = (struct FollowerSelectItemListViewManager___c_o *)v4;
  sub_1BCA784(FollowerSelectItemListViewManager___c_TypeInfo->static_fields, v4);
}


void __fastcall FollowerSelectItemListViewManager___c___ctor(
        FollowerSelectItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ListViewSort_o *__fastcall FollowerSelectItemListViewManager___c____cctor_b__133_0(
        FollowerSelectItemListViewManager___c_o *this,
        int32_t questType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 *v9; // x8
  System_String_o *v10; // x19
  ListViewSort_o *v11; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_NotImplementedException_o *v17; // x19
  __int64 v18; // x1
  __int64 v19; // x0

  if ( (byte_4B113BD & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_TypeInfo, *(_QWORD *)&questType, method);
    sub_1BCA7E0(&StringLiteral_6870/*"FollowerSelectEventQuest"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_6871/*"FollowerSelectMainQuest"*/, v7, v8);
    byte_4B113BD = 1;
  }
  if ( questType )
  {
    if ( questType != 1 )
    {
      v13 = sub_1BCA7F4(&System_NotImplementedException_TypeInfo, *(_QWORD *)&questType);
      v17 = (System_NotImplementedException_o *)sub_1BCAA2C(v13, v14, v15, v16);
      System_NotImplementedException___ctor(v17, 0LL);
      v19 = sub_1BCA7F4(&Method_FollowerSelectItemListViewManager___c___cctor_b__133_0__, v18);
      sub_1BCA908(v17, v19);
    }
    v9 = &StringLiteral_6870/*"FollowerSelectEventQuest"*/;
  }
  else
  {
    v9 = &StringLiteral_6871/*"FollowerSelectMainQuest"*/;
  }
  v10 = (System_String_o *)*v9;
  v11 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, *(_QWORD *)&questType, method, v3);
  ListViewSort___ctor_41480716(v11, v10, 11, 0, 0LL);
  return v11;
}