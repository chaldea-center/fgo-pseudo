void __fastcall FollowerSelectItemListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  FollowerSelectItemListViewManager___c_c *v7; // x0
  Il2CppObject *v8; // x19
  System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v9; // x20
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  FollowerSelectItemListViewManager_c *v17; // x8
  float v18; // s4
  float v19; // s5
  float v20; // s6
  float v21; // s7
  struct UnityEngine_Color_o v22; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42175A2 & 1) == 0 )
  {
    sub_B0D8A4(&FollowerSelectItemListViewManager_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort___ctor__, v3);
    sub_B0D8A4(&System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo, v4);
    sub_B0D8A4(&Method_FollowerSelectItemListViewManager___c___cctor_b__124_0__, v5);
    sub_B0D8A4(&FollowerSelectItemListViewManager___c_TypeInfo, v6);
    byte_42175A2 = 1;
  }
  v7 = FollowerSelectItemListViewManager___c_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager___c_TypeInfo);
    v7 = FollowerSelectItemListViewManager___c_TypeInfo;
  }
  v8 = (Il2CppObject *)v7->static_fields->__9;
  v9 = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)sub_B0D974(
                                                                               System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo,
                                                                               v1,
                                                                               v2);
  System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort____ctor(
    v9,
    v8,
    Method_FollowerSelectItemListViewManager___c___cctor_b__124_0__,
    (const MethodInfo_2615B28 *)Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort___ctor__);
  static_fields = (BattleServantConfConponent_o *)FollowerSelectItemListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v9;
  sub_B0D840(static_fields, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
  v17 = FollowerSelectItemListViewManager_TypeInfo;
  v23.fields.a = 1.0;
  FollowerSelectItemListViewManager_TypeInfo->static_fields->lastSelectedQuestId = -1;
  v17->static_fields->lastSelectedQuestPhase = -1;
  v23.fields.r = 0.30196;
  v22 = (struct UnityEngine_Color_o)0LL;
  v23.fields.g = 0.30196;
  v23.fields.b = 0.30196;
  UnityEngine_Color___ctor(v23, v18, v19, v20, v21, (const MethodInfo *)&v22);
  FollowerSelectItemListViewManager_TypeInfo->static_fields->REFRESH_DARK_COLOR = v22;
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

  if ( (byte_421757B & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_B0D8A4(&StringLiteral_17013/*"btn_bg_12"*/, v4);
    sub_B0D8A4(&StringLiteral_17064/*"btn_sefilter_2"*/, v5);
    sub_B0D8A4(&StringLiteral_17197/*"buttontxt_formation_19"*/, v6);
    byte_421757B = 1;
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
  AtlasManager__SetEventSprite(changeSkillButtonSprite, (System_String_o *)StringLiteral_17197/*"buttontxt_formation_19"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.bonusFilterSprite, (System_String_o *)StringLiteral_17064/*"btn_sefilter_2"*/, 0LL);
  changeSkillButton = (UnityEngine_Component_o *)this->fields.bonusFilterSprite;
  if ( !changeSkillButton
    || (changeSkillButton = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))changeSkillButton->klass[2]._1.typeMetadataHandle)(
                                                         changeSkillButton,
                                                         changeSkillButton->klass[2]._1.interopData),
        !sortKindButton)
    || (Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    sortKindButton,
                                    (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        changeSkillButton = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(
                                                         (UISprite_o *)Component_WebViewObject,
                                                         (System_String_o *)StringLiteral_17013/*"btn_bg_12"*/,
                                                         0LL),
        !Component_WebViewObject) )
  {
LABEL_12:
    sub_B0D97C(changeSkillButton);
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
    sub_B0D97C(classButtonControl);
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

  if ( (byte_4217595 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isResult);
    byte_4217595 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v61; // x21
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  __int64 v68; // x1
  __int64 v69; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v70; // x21
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  FollowerSelectItemListViewManager_c *v77; // x8
  __int64 LIST_VIEW_SORT; // x0
  struct ListViewSort_o *v79; // x0
  struct ListViewSort_o **p_sort; // x27
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  const MethodInfo *v87; // x4
  int32_t InitialDisplayClass; // w0
  FollowerSelectItemListViewManager_c *v89; // x8
  System_Int32_array *OngoingQuestTargetEventIds; // x26
  __int64 v91; // x1
  __int64 v92; // x2
  EventUpValSetupInfo_o *v93; // x21
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_String_o *v100; // x21
  __int64 v101; // x8
  __int64 v102; // x25
  unsigned __int64 v103; // x20
  int32_t v104; // w0
  ClassButtonControlComponent_o *classButtonControl; // x21
  __int64 v106; // x1
  __int64 v107; // x2
  ClassButtonControlComponent_CallbackFunc_o *v108; // x25
  ClassButtonControlComponent_o *v109; // x21
  const MethodInfo *v110; // x2
  QuestPhaseEntity_o *v111; // x20
  __int64 v112; // x21
  __int64 v113; // x21
  NpcFollowerMaster_o *MasterData_WarQuestSelectionMaster; // x24
  FollowerInfo_array *QuestFollowerList; // x27
  int v116; // w20
  bool IsMyServantOrNpcRestriction_30625648; // w20
  bool v118; // cc
  BalanceConfig_c *v119; // x0
  int32_t ClassBoardReleaseQuestId; // w21
  bool IsQuestClear_25410236; // w25
  __int64 v122; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v123; // x21
  unsigned __int64 v124; // x22
  bool v125; // w10
  FollowerInfo_o **m_Items; // x25
  FollowerInfo_o *v127; // x26
  __int64 v128; // x28
  int32_t ReturnTypeByQuestId; // w0
  System_Int32_array *NpcServantIndividuality; // x0
  __int64 v131; // x1
  __int64 v132; // x2
  bool IsRecommendedFollower; // w24
  __int64 v134; // x21
  __int64 v135; // x25
  int32_t v136; // w0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v137; // x28
  char v138; // w20
  int32_t v139; // w0
  ServantLeaderInfo_o *ServantLeaderInfo; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v141; // x25
  __int64 v142; // x19
  __int64 v143; // x21
  int32_t v144; // w21
  int32_t ClassBoardBaseId; // w19
  UserClassBoardSquareMaster_o *Master_WarQuestSelectionMaster; // x21
  __int64 v147; // x1
  __int64 v148; // x2
  __int64 v149; // x25
  Il2CppObject *v150; // x0
  System_Int32_array **v151; // x0
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  System_Int32_array **v158; // x0
  System_String_array **v159; // x2
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  __int64 v165; // x1
  __int64 v166; // x2
  FollowerSelectItemListViewManager_c *v167; // x0
  _BOOL4 v168; // w8
  _BOOL4 v169; // w9
  int32_t v170; // w28
  EventUpValSetupInfo_o *setupInfo; // x21
  bool v172; // w19
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x20
  bool isServantEquipBonusFilterEnable; // w23
  bool isServantBonusFilterEnable; // w24
  bool isBonusFilterEnable; // w27
  FollowerSelectItemListViewItem_o *v177; // x25
  int v178; // w20
  bool v179; // w8
  int64_t userId; // x27
  int v181; // w8
  unsigned int v182; // w22
  int64_t v183; // x8
  Il2CppObject *v184; // x0
  Il2CppObject *v185; // x21
  __int64 v186; // x20
  BalanceConfig_c *v187; // x0
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t FixEventSupportDeckNum; // w21
  int32_t FixMainSupportDeckNum; // w25
  __int64 v191; // x1
  __int64 v192; // x2
  __int64 v193; // x9
  unsigned int *v194; // x10
  int32_t deckPriority; // w24
  unsigned __int64 v196; // x20
  System_Collections_Generic_Dictionary_int__int__o *v197; // x21
  int32_t v198; // w22
  bool v199; // w28
  bool v200; // w26
  FollowerSelectItemListViewItem_o *v201; // x25
  struct BalanceConfig_StaticFields *v202; // x8
  int32_t v203; // w21
  int32_t v204; // w25
  __int64 v205; // x1
  __int64 v206; // x2
  int32_t v207; // w28
  unsigned __int64 v208; // x26
  int32_t v209; // w24
  bool v210; // w27
  int v211; // w20
  bool v212; // w25
  bool v213; // w22
  FollowerSelectItemListViewItem_o *v214; // x21
  int64_t v215; // x20
  unsigned __int64 v216; // x8
  unsigned __int64 v217; // x19
  __int64 v218; // x9
  __int64 v219; // x9
  unsigned __int64 v220; // x8
  FollowerInfo_o *v221; // x8
  Il2CppObject *v222; // x0
  __int64 v223; // x22
  BalanceConfig_c *v224; // x0
  struct BalanceConfig_StaticFields *v225; // x9
  int32_t v226; // w21
  int32_t v227; // w25
  __int64 v228; // x1
  __int64 v229; // x2
  int32_t v230; // w26
  unsigned __int64 v231; // x24
  System_Collections_Generic_Dictionary_int__int__o *v232; // x27
  int32_t v233; // w28
  bool v234; // w22
  bool v235; // w25
  bool v236; // w19
  FollowerSelectItemListViewItem_o *v237; // x21
  struct BalanceConfig_StaticFields *v238; // x8
  int32_t v239; // w21
  int32_t v240; // w25
  __int64 v241; // x1
  __int64 v242; // x2
  int32_t v243; // w26
  unsigned __int64 v244; // x28
  int32_t v245; // w21
  bool v246; // w27
  System_Collections_Generic_Dictionary_int__int__o *v247; // x20
  int v248; // w24
  bool v249; // w25
  int32_t v250; // w19
  bool v251; // w22
  FollowerSelectItemListViewItem_o *v252; // x21
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v254; // x2
  FollowerSelectItemListViewManager_c *v255; // x0
  const MethodInfo *v256; // x1
  struct UIScrollView_o *scrollView; // x8
  __int64 v258; // x0
  FollowerSelectItemListViewManager_o *v259; // x0
  int32_t v260; // w1
  int32_t v261; // w2
  bool v262; // w3
  const MethodInfo *v263; // x4
  int32_t supportDeckId; // [xsp+38h] [xbp-168h]
  int32_t supportDeckIda; // [xsp+38h] [xbp-168h]
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary; // [xsp+48h] [xbp-158h]
  const MethodInfo *v267; // [xsp+58h] [xbp-148h]
  int32_t arg; // [xsp+6Ch] [xbp-134h]
  UserFollowMaster_o *questIdb; // [xsp+70h] [xbp-130h]
  bool questPhaseb; // [xsp+7Ch] [xbp-124h]
  __int64 v273; // [xsp+80h] [xbp-120h]
  int32_t v274; // [xsp+80h] [xbp-120h]
  __int64 v275; // [xsp+88h] [xbp-118h]
  __int64 v276; // [xsp+88h] [xbp-118h]
  struct System_Collections_Generic_List_ListViewItem__o **p_originalItemList; // [xsp+90h] [xbp-110h]
  QuestPhaseEntity_o *v278; // [xsp+98h] [xbp-108h]
  QuestPhaseEntity_o *v279; // [xsp+98h] [xbp-108h]
  QuestPhaseEntity_o *v280; // [xsp+98h] [xbp-108h]
  bool isReleasedClassBoard; // [xsp+A0h] [xbp-100h]
  bool v282; // [xsp+A0h] [xbp-100h]
  __int64 v283; // [xsp+A0h] [xbp-100h]
  __int64 v284; // [xsp+A0h] [xbp-100h]
  __int64 v285; // [xsp+A0h] [xbp-100h]
  bool v286; // [xsp+A8h] [xbp-F8h]
  signed __int64 v287; // [xsp+A8h] [xbp-F8h]
  signed __int64 v288; // [xsp+A8h] [xbp-F8h]
  FollowerInfo_array *v289; // [xsp+B0h] [xbp-F0h]
  unsigned int *v290; // [xsp+B0h] [xbp-F0h]
  unsigned int *v291; // [xsp+B0h] [xbp-F0h]
  NpcFollowerMaster_o *v292; // [xsp+B8h] [xbp-E8h]
  unsigned int v293; // [xsp+B8h] [xbp-E8h]
  __int64 v294; // [xsp+B8h] [xbp-E8h]
  FollowerInfo_o **v295; // [xsp+C0h] [xbp-E0h]
  __int64 v296; // [xsp+C0h] [xbp-E0h]
  unsigned __int64 v297; // [xsp+C0h] [xbp-E0h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v298; // [xsp+C8h] [xbp-D8h]
  FollowerInfo_o **v299; // [xsp+C8h] [xbp-D8h]
  FollowerInfo_o **v300; // [xsp+C8h] [xbp-D8h]
  _BOOL4 followerClassId; // [xsp+D0h] [xbp-D0h]
  EventUpValSetupInfo_o *followerClassIdc; // [xsp+D0h] [xbp-D0h]
  int32_t followerClassIda; // [xsp+D0h] [xbp-D0h]
  EventUpValSetupInfo_o *followerClassIdd; // [xsp+D0h] [xbp-D0h]
  int32_t followerClassIdb; // [xsp+D0h] [xbp-D0h]
  struct System_Collections_Generic_List_ListViewItem__o **p_mixItemList; // [xsp+D8h] [xbp-C8h]
  QuestRestrictionInfo_o *v307; // [xsp+E0h] [xbp-C0h]
  int32_t v311; // [xsp+F8h] [xbp-A8h]
  FollowerInfo_o *v312; // [xsp+F8h] [xbp-A8h]
  EventUpValSetupInfo_o *v313; // [xsp+F8h] [xbp-A8h]
  FollowerInfo_o *v314; // [xsp+F8h] [xbp-A8h]
  EventUpValSetupInfo_o *v315; // [xsp+F8h] [xbp-A8h]
  int32_t v316; // [xsp+100h] [xbp-A0h]
  int32_t size; // [xsp+100h] [xbp-A0h]
  FollowerInfo_o *v318; // [xsp+100h] [xbp-A0h]
  int32_t v319; // [xsp+100h] [xbp-A0h]
  FollowerInfo_o *v320; // [xsp+100h] [xbp-A0h]
  FollowerSelectItemListViewManager_o *v321; // [xsp+108h] [xbp-98h]
  UserGameEntity_o *v322; // [xsp+110h] [xbp-90h] BYREF
  UserGameEntity_o *v323; // [xsp+118h] [xbp-88h] BYREF
  UserClassBoardSquareEntity_o *v324; // [xsp+120h] [xbp-80h] BYREF
  UserServantEntity_o *v325; // [xsp+128h] [xbp-78h] BYREF
  UserServantEntity_o *entity; // [xsp+130h] [xbp-70h] BYREF
  UserServantEntity_o *v327; // [xsp+138h] [xbp-68h] BYREF
  NpcFollowerEntity_o *v328; // [xsp+140h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v329; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v330; // 0:x0.16

  v8 = questRestrictionInfo;
  if ( (byte_421757D & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&questId);
    sub_B0D8A4(&ClassButtonControlComponent_CallbackFunc_TypeInfo, v10);
    sub_B0D8A4(&char___TypeInfo, v11);
    sub_B0D8A4(&ClassBoardInfo_TypeInfo, v12);
    sub_B0D8A4(&CondType_TypeInfo, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserFollowMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v19);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventQuestMaster___, v20);
    sub_B0D8A4(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v21);
    sub_B0D8A4(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, v22);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v23);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, v24);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserFollowerMaster___, v25);
    sub_B0D8A4(&DataManager_TypeInfo, v26);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v27);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v28);
    sub_B0D8A4(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v29);
    sub_B0D8A4(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v30);
    sub_B0D8A4(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v31);
    sub_B0D8A4(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v32);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, v33);
    sub_B0D8A4(&EventUpValSetupInfo_TypeInfo, v34);
    sub_B0D8A4(&FollowerSelectItemListViewItem_TypeInfo, v35);
    sub_B0D8A4(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v36);
    sub_B0D8A4(&FollowerSelectItemListViewManager_TypeInfo, v37);
    sub_B0D8A4(&Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__, v38);
    sub_B0D8A4(&int___TypeInfo, v39);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardInfo__Add__, v40);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v41);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__, v42);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardInfo___ctor__, v43);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v44);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v45);
    sub_B0D8A4(&System_Collections_Generic_List_ClassBoardInfo__TypeInfo, v46);
    sub_B0D8A4(&System_Collections_Generic_List_ListViewItem__TypeInfo, v47);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v48);
    sub_B0D8A4(&System_Math_TypeInfo, v49);
    sub_B0D8A4(&NetworkManager_TypeInfo, v50);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v51);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v52);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v53);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v54);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v55);
    sub_B0D8A4(&StringLiteral_2849/*"BonusFilterEventId"*/, v56);
    sub_B0D8A4(&StringLiteral_11913/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v57);
    sub_B0D8A4(&StringLiteral_1/*""*/, v58);
    byte_421757D = 1;
  }
  v327 = 0LL;
  v328 = 0LL;
  v325 = 0LL;
  entity = 0LL;
  v323 = 0LL;
  v324 = 0LL;
  v322 = 0LL;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  this->fields.questRestrictionInfo = v8;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)v8,
    *(System_String_array ***)&questPhase,
    *(System_String_array ***)&friendPointUpVal,
    *(System_Boolean_array ***)&friendPointUpMaxVal,
    (System_Int32_array **)friendPointCampaignEntityList,
    (System_Int32_array *)questRestrictionInfo,
    (System_Int32_array *)method);
  v61 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                                                                  v59,
                                                                                                  v60);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v61,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.mixItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v61;
  p_mixItemList = &this->fields.mixItemList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mixItemList,
    (System_Int32_array **)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v70 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                                                                  v68,
                                                                                                  v69);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v70,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.originalItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v70;
  p_originalItemList = &this->fields.originalItemList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.originalItemList,
    (System_Int32_array **)v70,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  arg = FollowerInfo__GetReturnTypeByQuestId(questId, 0LL);
  v77 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v77 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = (__int64)v77->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT )
    goto LABEL_305;
  v79 = System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort___Invoke(
          (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)LIST_VIEW_SORT,
          arg,
          (const MethodInfo_2615B3C *)Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__);
  this->fields.sort = v79;
  p_sort = &this->fields.sort;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v79,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  if ( !this->fields.sort )
    goto LABEL_305;
  InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                          this,
                          questId,
                          questPhase,
                          this->fields.sort->fields.isRequestLoad,
                          v87);
  v89 = FollowerSelectItemListViewManager_TypeInfo;
  FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId = InitialDisplayClass;
  v89->static_fields->lastSelectedQuestId = questId;
  v89->static_fields->lastSelectedQuestPhase = questPhase;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  LIST_VIEW_SORT = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !LIST_VIEW_SORT )
    goto LABEL_305;
  OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                 (EventQuestMaster_o *)LIST_VIEW_SORT,
                                 questId,
                                 questPhase,
                                 0LL);
  v93 = (EventUpValSetupInfo_o *)sub_B0D974(EventUpValSetupInfo_TypeInfo, v91, v92);
  EventUpValSetupInfo___ctor_25655088(v93, OngoingQuestTargetEventIds, 0, questId, questPhase, 0LL);
  this->fields.setupInfo = v93;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)v93,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
  if ( !OngoingQuestTargetEventIds )
    goto LABEL_305;
  if ( *(_QWORD *)&OngoingQuestTargetEventIds->max_length )
  {
    LIST_VIEW_SORT = (__int64)UnityEngine_PlayerPrefs__GetString_34963268((System_String_o *)StringLiteral_2849/*"BonusFilterEventId"*/, 0LL);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    v100 = (System_String_o *)LIST_VIEW_SORT;
    if ( *(int *)(LIST_VIEW_SORT + 16) < 1 )
      goto LABEL_24;
    LIST_VIEW_SORT = sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    if ( !*(_DWORD *)(LIST_VIEW_SORT + 24) )
      goto LABEL_306;
    *(_WORD *)(LIST_VIEW_SORT + 32) = 44;
    LIST_VIEW_SORT = (__int64)System_String__Split(v100, (System_Char_array *)LIST_VIEW_SORT, 0LL);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    v101 = *(_QWORD *)(LIST_VIEW_SORT + 24);
    v102 = LIST_VIEW_SORT;
    if ( (int)v101 < 1 )
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
      v103 = 0LL;
      while ( 1 )
      {
        if ( v103 >= (unsigned int)v101 )
          goto LABEL_306;
        v104 = System_Int32__Parse(*(System_String_o **)(v102 + 32 + 8 * v103), 0LL);
        LIST_VIEW_SORT = System_Linq_Enumerable__Contains_int_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)OngoingQuestTargetEventIds,
                           v104,
                           (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (LIST_VIEW_SORT & 1) != 0 )
          break;
        LODWORD(v101) = *(_DWORD *)(v102 + 24);
        if ( (__int64)++v103 >= (int)v101 )
          goto LABEL_24;
      }
    }
  }
  LIST_VIEW_SORT = (__int64)*p_sort;
  if ( !*p_sort )
    goto LABEL_305;
  ListViewSort__Load((ListViewSort_o *)LIST_VIEW_SORT, 0LL);
  classButtonControl = this->fields.classButtonControl;
  v108 = (ClassButtonControlComponent_CallbackFunc_o *)sub_B0D974(
                                                         ClassButtonControlComponent_CallbackFunc_TypeInfo,
                                                         v106,
                                                         v107);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v108,
    (Il2CppObject *)this,
    Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_305;
  ClassButtonControlComponent__init(classButtonControl, v108, questId, questPhase, 0, 0LL);
  this->fields.isInput = 0;
  v109 = this->fields.classButtonControl;
  LIST_VIEW_SORT = (__int64)FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  }
  if ( !v109 )
    goto LABEL_305;
  ClassButtonControlComponent__setCursor(
    v109,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, OngoingQuestTargetEventIds, v110);
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
  LIST_VIEW_SORT = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LIST_VIEW_SORT
    || (LIST_VIEW_SORT = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)LIST_VIEW_SORT,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0 )
  {
LABEL_305:
    sub_B0D97C(LIST_VIEW_SORT);
  }
  v111 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)LIST_VIEW_SORT, questId, questPhase, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v278 = v111;
  if ( v111 )
  {
    v112 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v112 + 306) & 1) == 0 )
      sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v113 = **(_QWORD **)(v112 + 192);
    if ( (*(_BYTE *)(v113 + 306) & 1) == 0 )
      sub_AA65A4(v113);
    LIST_VIEW_SORT = **(_QWORD **)(v113 + 184);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    MasterData_WarQuestSelectionMaster = (NpcFollowerMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)LIST_VIEW_SORT,
                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
    LIST_VIEW_SORT = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    LIST_VIEW_SORT = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)LIST_VIEW_SORT,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
    LIST_VIEW_SORT = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    v116 = *(_DWORD *)(LIST_VIEW_SORT + 48);
    LIST_VIEW_SORT = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    v311 = *(_DWORD *)(LIST_VIEW_SORT + 52);
    if ( v8 && v116 >= 1 )
    {
      IsMyServantOrNpcRestriction_30625648 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_30625648(v8, v311, 0LL);
      followerClassId = 0;
    }
    else if ( v8 )
    {
      v118 = v116 <= 0;
      IsMyServantOrNpcRestriction_30625648 = 0;
      followerClassId = 0;
      if ( v118 )
      {
        IsMyServantOrNpcRestriction_30625648 = 0;
        followerClassId = QuestRestrictionInfo__IsMyServantOrNpcRestriction(v8, 0LL);
      }
    }
    else
    {
      followerClassId = 0;
      IsMyServantOrNpcRestriction_30625648 = 0;
    }
    v119 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v119 = BalanceConfig_TypeInfo;
    }
    ClassBoardReleaseQuestId = v119->static_fields->ClassBoardReleaseQuestId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_25410236 = CondType__IsQuestClear_25410236(ClassBoardReleaseQuestId, -1, 0, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    LIST_VIEW_SORT = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    if ( !QuestFollowerList )
      goto LABEL_305;
    v122 = *(_QWORD *)&QuestFollowerList->max_length;
    v321 = this;
    v307 = v8;
    if ( (int)v122 >= 1 )
    {
      v123 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)LIST_VIEW_SORT;
      v124 = 0LL;
      v125 = IsQuestClear_25410236;
      m_Items = QuestFollowerList->m_Items;
      v316 = 0;
      isReleasedClassBoard = v125;
      v289 = QuestFollowerList;
      v292 = MasterData_WarQuestSelectionMaster;
      v286 = IsMyServantOrNpcRestriction_30625648;
      v295 = QuestFollowerList->m_Items;
      v298 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)LIST_VIEW_SORT;
      do
      {
        if ( v124 >= (unsigned int)v122 )
          goto LABEL_306;
        v127 = m_Items[v124];
        if ( IsMyServantOrNpcRestriction_30625648 )
        {
          if ( !v8 )
            goto LABEL_305;
          LIST_VIEW_SORT = FollowerInfo__GetReturnTypeByQuestId(v8->fields.questId, 0LL);
          if ( !v127 )
            goto LABEL_305;
          LIST_VIEW_SORT = (__int64)FollowerInfo__getServantLeaderInfo(v127, 0, LIST_VIEW_SORT, 0LL);
          if ( LIST_VIEW_SORT )
          {
            v128 = LIST_VIEW_SORT;
            LIST_VIEW_SORT = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !LIST_VIEW_SORT )
              goto LABEL_305;
            LIST_VIEW_SORT = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)LIST_VIEW_SORT,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
            if ( !LIST_VIEW_SORT )
              goto LABEL_305;
            LIST_VIEW_SORT = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)LIST_VIEW_SORT,
                               &entity,
                               v127->fields.npcFollowerSvtId,
                               (const MethodInfo_2669E58 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
            if ( (LIST_VIEW_SORT & 1) != 0 )
            {
              ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v8->fields.questId, 0LL);
              NpcServantIndividuality = FollowerInfo__GetNpcServantIndividuality(v127, 0, ReturnTypeByQuestId, 0LL);
              goto LABEL_85;
            }
            if ( !v123 )
              goto LABEL_305;
            if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                   v123,
                   &v325,
                   v127->fields.npcFollowerSvtId,
                   (const MethodInfo_2669E58 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
            {
              LIST_VIEW_SORT = (__int64)v325;
              if ( !v325 )
                goto LABEL_305;
              if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v325, 0LL) )
              {
                LIST_VIEW_SORT = (__int64)v325;
                if ( !v325 )
                  goto LABEL_305;
                NpcServantIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                            (NpcServantFollowerEntity_o *)v325,
                                            0LL);
LABEL_85:
                LIST_VIEW_SORT = QuestRestrictionInfo__IsRestrictionServantIndividuality_30628808(
                                   v8,
                                   NpcServantIndividuality,
                                   v311,
                                   0LL);
                if ( (LIST_VIEW_SORT & 1) != 0 )
                  goto LABEL_145;
                goto LABEL_88;
              }
            }
            v135 = *(_QWORD *)(v128 + 48);
            v134 = *(_QWORD *)(v128 + 56);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v329.fields.currentCryptoKey = v135;
            *(_QWORD *)&v329.fields.fakeValue = v134;
            v136 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v329, 0LL);
            LIST_VIEW_SORT = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                               v8,
                               v136,
                               *(_DWORD *)(v128 + 64),
                               *(_DWORD *)(v128 + 164),
                               v311,
                               0,
                               0LL);
            m_Items = v295;
            v123 = v298;
            if ( (LIST_VIEW_SORT & 1) != 0 )
              goto LABEL_145;
          }
        }
        else if ( !v127 )
        {
          goto LABEL_305;
        }
LABEL_88:
        if ( !v127->fields.isFixedNpc && (!followerClassId || !v127->fields.isMySvtOrNpc) )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_305;
          if ( NpcFollowerMaster__TryGetEntity(
                 MasterData_WarQuestSelectionMaster,
                 &v328,
                 v127->fields.userId,
                 questId,
                 questPhase,
                 0LL) )
          {
            LIST_VIEW_SORT = (__int64)v328;
            if ( !v328 )
              goto LABEL_305;
            IsRecommendedFollower = NpcFollowerEntity__IsRecommendedFollower(v328, 0LL);
          }
          else
          {
            IsRecommendedFollower = 0;
          }
          v137 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_ClassBoardInfo__TypeInfo, v131, v132);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v137,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
          if ( !v123 )
            goto LABEL_305;
          LIST_VIEW_SORT = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                             v123,
                             &v327,
                             v127->fields.npcFollowerSvtId,
                             (const MethodInfo_2669E58 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
          if ( (LIST_VIEW_SORT & 1) != 0 )
          {
            if ( !v327 )
              goto LABEL_305;
            LIST_VIEW_SORT = NpcServantFollowerEntity__IsNotClassBoard(
                               v327->fields.imageLimitCount.fields.fakeValue,
                               0LL);
            if ( (LIST_VIEW_SORT & 1) != 0
              || (LIST_VIEW_SORT = QuestPhaseEntity__IsNotClassBoard(v278, 0LL), (LIST_VIEW_SORT & 1) != 0) )
            {
              v138 = 1;
LABEL_135:
              if ( !v137 )
                goto LABEL_305;
LABEL_136:
              v158 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v137,
                                              (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
              v127->fields.userClassBoardInfo = (struct ClassBoardInfo_array *)v158;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v127->fields.userClassBoardInfo,
                v158,
                v159,
                v160,
                v161,
                v162,
                v163,
                v164);
              v167 = FollowerSelectItemListViewManager_TypeInfo;
              if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
                v167 = FollowerSelectItemListViewManager_TypeInfo;
              }
              v168 = this->fields.isBonusFilterEnable;
              v169 = this->fields.isServantBonusFilterEnable;
              v170 = v167->static_fields->followerClassId;
              setupInfo = this->fields.setupInfo;
              v172 = IsRecommendedFollower;
              if ( (v138 & 1) != 0 )
                classBoardMaxDictionary = 0LL;
              else
                classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
              isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
              isServantBonusFilterEnable = v169;
              isBonusFilterEnable = v168;
              v177 = (FollowerSelectItemListViewItem_o *)sub_B0D974(FollowerSelectItemListViewItem_TypeInfo, v165, v166);
              FollowerSelectItemListViewItem___ctor(
                v177,
                v316,
                0,
                v127,
                v170,
                friendPointUpVal,
                friendPointUpMaxVal,
                friendPointCampaignEntityList,
                isBonusFilterEnable,
                isServantBonusFilterEnable,
                isServantEquipBonusFilterEnable,
                v172,
                setupInfo,
                v307,
                0,
                0,
                0,
                classBoardMaxDictionary,
                isReleasedClassBoard,
                v267);
              LIST_VIEW_SORT = (__int64)*p_mixItemList;
              if ( !*p_mixItemList )
                goto LABEL_305;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)LIST_VIEW_SORT,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v177,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
              QuestFollowerList = v289;
              MasterData_WarQuestSelectionMaster = v292;
              IsMyServantOrNpcRestriction_30625648 = v286;
              v123 = v298;
              LIST_VIEW_SORT = (__int64)*p_originalItemList;
              if ( !*p_originalItemList )
                goto LABEL_305;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)LIST_VIEW_SORT,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v177,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
              ++v316;
              this = v321;
              v8 = v307;
              m_Items = v295;
              goto LABEL_145;
            }
            if ( !v8 )
              goto LABEL_305;
            v139 = FollowerInfo__GetReturnTypeByQuestId(v8->fields.questId, 0LL);
            ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v127, 0, v139, 0LL);
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            LIST_VIEW_SORT = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
            if ( !ServantLeaderInfo )
              goto LABEL_305;
            v141 = (DataMasterBase_WarMaster__WarEntity__int__o *)LIST_VIEW_SORT;
            v142 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
            v143 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v330.fields.currentCryptoKey = v142;
            *(_QWORD *)&v330.fields.fakeValue = v143;
            LIST_VIEW_SORT = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v330, 0LL);
            if ( !v141 )
              goto LABEL_305;
            LIST_VIEW_SORT = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v141,
                                        LIST_VIEW_SORT,
                                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !LIST_VIEW_SORT )
              goto LABEL_305;
            v144 = *(_DWORD *)(LIST_VIEW_SORT + 80);
            LIST_VIEW_SORT = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( !LIST_VIEW_SORT )
              goto LABEL_305;
            ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(
                                 (ClassBoardClassMaster_o *)LIST_VIEW_SORT,
                                 v144,
                                 0LL);
            Master_WarQuestSelectionMaster = (UserClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
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
                               &v324,
                               LIST_VIEW_SORT,
                               ClassBoardBaseId,
                               0LL);
            if ( (LIST_VIEW_SORT & 1) != 0 )
            {
              v149 = sub_B0D974(ClassBoardInfo_TypeInfo, v147, v148);
              ClassBoardInfo___ctor((ClassBoardInfo_o *)v149, 0LL);
              if ( !v149 )
                goto LABEL_305;
              *(_DWORD *)(v149 + 16) = ClassBoardBaseId;
              if ( !v324 )
                goto LABEL_305;
              LIST_VIEW_SORT = (__int64)v324->fields.classBoardSquareIds;
              if ( !LIST_VIEW_SORT )
                goto LABEL_305;
              v150 = System_Array__Clone((System_Array_o *)LIST_VIEW_SORT, 0LL);
              v151 = (System_Int32_array **)sub_B0D964(v150, int___TypeInfo);
              *(_QWORD *)(v149 + 24) = v151;
              sub_B0D840((BattleServantConfConponent_o *)(v149 + 24), v151, v152, v153, v154, v155, v156, v157);
              if ( !v137 )
                goto LABEL_305;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v137,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v149,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ClassBoardInfo__Add__);
              v138 = 0;
              goto LABEL_136;
            }
          }
          v138 = 0;
          goto LABEL_135;
        }
LABEL_145:
        LODWORD(v122) = QuestFollowerList->max_length;
        ++v124;
      }
      while ( (__int64)v124 < (int)v122 );
    }
    if ( !v8 || !QuestRestrictionInfo__IsMyServantOrNpcRestriction(v8, 0LL) )
      goto LABEL_155;
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    LIST_VIEW_SORT = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    v178 = *(_DWORD *)(LIST_VIEW_SORT + 48);
    LIST_VIEW_SORT = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !LIST_VIEW_SORT )
      goto LABEL_305;
    if ( v178 >= 1 )
      v179 = !QuestRestrictionInfo__IsSelectableNormalSupport(v8, *(_DWORD *)(LIST_VIEW_SORT + 52), 0LL);
    else
LABEL_155:
      v179 = 0;
    this->fields.isRefreshBtnHide = v179;
    if ( !v179 && !v278->fields.isNpcOnly )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      LIST_VIEW_SORT = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
      if ( !LIST_VIEW_SORT )
        goto LABEL_305;
      LIST_VIEW_SORT = DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                         (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)LIST_VIEW_SORT,
                         &v323,
                         (const MethodInfo_2669EE4 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
      if ( (LIST_VIEW_SORT & 1) != 0 )
      {
        if ( !v323 )
          goto LABEL_305;
        userId = v323->fields.userId;
        if ( userId )
        {
          v181 = *(_DWORD *)(userId + 24);
          if ( v181 >= 1 )
          {
            v182 = 0;
            v279 = (QuestPhaseEntity_o *)v323->fields.userId;
            do
            {
              if ( v182 >= v181 )
                goto LABEL_306;
              v183 = userId + 8LL * (int)v182;
              LIST_VIEW_SORT = *(_QWORD *)(v183 + 32);
              v299 = (FollowerInfo_o **)(v183 + 32);
              if ( !LIST_VIEW_SORT )
                goto LABEL_305;
              FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)LIST_VIEW_SORT, 0LL);
              if ( v182 >= *(_DWORD *)(userId + 24) )
                goto LABEL_306;
              if ( !*v299 )
                goto LABEL_305;
              LIST_VIEW_SORT = (__int64)(*v299)->fields.mainSupportDeckIds;
              if ( !LIST_VIEW_SORT )
                goto LABEL_305;
              v275 = *(_QWORD *)(LIST_VIEW_SORT + 24);
              v184 = System_Array__Clone((System_Array_o *)LIST_VIEW_SORT, 0LL);
              if ( v184 )
              {
                v185 = v184;
                v186 = sub_B0D964(v184, int___TypeInfo);
                if ( !v186 )
                {
LABEL_307:
                  sub_B0DC70(v185);
                  FollowerSelectItemListViewManager__GetInitialDisplayClass(v259, v260, v261, v262, v263);
                  return;
                }
              }
              else
              {
                v186 = 0LL;
              }
              v187 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v187 = BalanceConfig_TypeInfo;
              }
              static_fields = v187->static_fields;
              FixMainSupportDeckNum = static_fields->FixMainSupportDeckNum;
              FixEventSupportDeckNum = static_fields->FixEventSupportDeckNum;
              if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_Math_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              }
              LIST_VIEW_SORT = System_Math__Max_44559528(FixMainSupportDeckNum, FixEventSupportDeckNum, 0LL);
              v293 = v182;
              v296 = v186;
              if ( (int)v275 <= 0 )
              {
                v287 = (int)v275;
                v290 = (unsigned int *)(v186 + 24);
              }
              else
              {
                v193 = v186;
                v194 = (unsigned int *)(v186 + 24);
                deckPriority = LIST_VIEW_SORT;
                v196 = 0LL;
                v287 = (int)v275;
                v290 = v194;
                v273 = v193 + 32;
                do
                {
                  if ( !*p_originalItemList )
                    goto LABEL_305;
                  if ( v182 >= *(_DWORD *)(userId + 24) )
                    goto LABEL_306;
                  if ( !v296 )
                    goto LABEL_305;
                  if ( v196 >= *v290 )
                    goto LABEL_306;
                  size = (*p_originalItemList)->fields._size;
                  followerClassIdc = this->fields.setupInfo;
                  v197 = this->fields.classBoardMaxDictionary;
                  v198 = *(_DWORD *)(v273 + 4 * v196);
                  v312 = *v299;
                  v199 = this->fields.isServantEquipBonusFilterEnable;
                  v200 = this->fields.isServantBonusFilterEnable;
                  v282 = this->fields.isBonusFilterEnable;
                  v201 = (FollowerSelectItemListViewItem_o *)sub_B0D974(
                                                               FollowerSelectItemListViewItem_TypeInfo,
                                                               v191,
                                                               v192);
                  FollowerSelectItemListViewItem___ctor(
                    v201,
                    size,
                    0,
                    v312,
                    0,
                    friendPointUpVal,
                    friendPointUpMaxVal,
                    friendPointCampaignEntityList,
                    v282,
                    v200,
                    v199,
                    0,
                    followerClassIdc,
                    v8,
                    1,
                    v198,
                    deckPriority,
                    v197,
                    1,
                    v267);
                  LIST_VIEW_SORT = (__int64)this->fields.originalItemList;
                  if ( !LIST_VIEW_SORT )
                    goto LABEL_305;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)LIST_VIEW_SORT,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v201,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                  v182 = v293;
                  ++v196;
                  --deckPriority;
                }
                while ( (__int64)v196 < (int)v275 );
                v186 = v296;
              }
              followerClassIda = 0;
              v283 = v186 + 32;
              while ( 1 )
              {
                LIST_VIEW_SORT = (__int64)BalanceConfig_TypeInfo;
                if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  LIST_VIEW_SORT = (__int64)BalanceConfig_TypeInfo;
                }
                v202 = *(struct BalanceConfig_StaticFields **)(LIST_VIEW_SORT + 184);
                if ( followerClassIda >= v202->SupportDeckMemberMax )
                  break;
                if ( (*(_BYTE *)(LIST_VIEW_SORT + 307) & 4) != 0 && !*(_DWORD *)(LIST_VIEW_SORT + 224) )
                {
                  j_il2cpp_runtime_class_init_0(LIST_VIEW_SORT);
                  v202 = BalanceConfig_TypeInfo->static_fields;
                }
                v204 = v202->FixMainSupportDeckNum;
                v203 = v202->FixEventSupportDeckNum;
                if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !System_Math_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                }
                LIST_VIEW_SORT = System_Math__Max_44559528(v204, v203, 0LL);
                if ( (int)v275 >= 1 )
                {
                  v207 = LIST_VIEW_SORT;
                  v208 = 0LL;
                  do
                  {
                    if ( !*p_mixItemList )
                      goto LABEL_305;
                    v209 = (*p_mixItemList)->fields._size;
                    LIST_VIEW_SORT = (__int64)BalanceConfig_TypeInfo;
                    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      LIST_VIEW_SORT = (__int64)BalanceConfig_TypeInfo;
                    }
                    if ( v182 >= *(_DWORD *)(userId + 24) )
                      goto LABEL_306;
                    if ( !v186 )
                      goto LABEL_305;
                    if ( v208 >= *v290 )
                      goto LABEL_306;
                    v313 = this->fields.setupInfo;
                    v318 = *v299;
                    v210 = this->fields.isServantEquipBonusFilterEnable;
                    v211 = *(_DWORD *)(*(_QWORD *)(LIST_VIEW_SORT + 184) + 164LL);
                    v212 = this->fields.isServantBonusFilterEnable;
                    v213 = this->fields.isBonusFilterEnable;
                    classBoardMaxNumDictionary = v321->fields.classBoardMaxDictionary;
                    v8 = v307;
                    supportDeckId = *(_DWORD *)(v283 + 4 * v208);
                    this = v321;
                    v214 = (FollowerSelectItemListViewItem_o *)sub_B0D974(
                                                                 FollowerSelectItemListViewItem_TypeInfo,
                                                                 v205,
                                                                 v206);
                    FollowerSelectItemListViewItem___ctor(
                      v214,
                      v209,
                      v211 - followerClassIda,
                      v318,
                      followerClassIda,
                      friendPointUpVal,
                      friendPointUpMaxVal,
                      friendPointCampaignEntityList,
                      v213,
                      v212,
                      v210,
                      0,
                      v313,
                      v307,
                      1,
                      supportDeckId,
                      v207,
                      classBoardMaxNumDictionary,
                      1,
                      v267);
                    LIST_VIEW_SORT = (__int64)v321->fields.mixItemList;
                    if ( !LIST_VIEW_SORT )
                      goto LABEL_305;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)LIST_VIEW_SORT,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v214,
                      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                    userId = (int64_t)v279;
                    v182 = v293;
                    v186 = v296;
                    ++v208;
                    --v207;
                  }
                  while ( (__int64)v208 < v287 );
                }
                ++followerClassIda;
              }
              v181 = *(_DWORD *)(userId + 24);
              ++v182;
            }
            while ( (int)v182 < v181 );
          }
        }
      }
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      LIST_VIEW_SORT = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserFollowerMaster___);
      if ( !LIST_VIEW_SORT )
        goto LABEL_305;
      LIST_VIEW_SORT = DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                         (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)LIST_VIEW_SORT,
                         &v322,
                         (const MethodInfo_2669EE4 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
      if ( (LIST_VIEW_SORT & 1) != 0 )
      {
        if ( !v322 )
          goto LABEL_305;
        v215 = v322->fields.userId;
        LIST_VIEW_SORT = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !LIST_VIEW_SORT )
          goto LABEL_305;
        LIST_VIEW_SORT = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)LIST_VIEW_SORT,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !LIST_VIEW_SORT )
          goto LABEL_305;
        LIST_VIEW_SORT = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)LIST_VIEW_SORT,
                                    questId,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !LIST_VIEW_SORT )
          goto LABEL_305;
        questPhaseb = QuestEntity__HasFlag_23244236((QuestEntity_o *)LIST_VIEW_SORT, 0x8000000LL, questPhase, 0LL);
        LIST_VIEW_SORT = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !LIST_VIEW_SORT )
          goto LABEL_305;
        LIST_VIEW_SORT = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)LIST_VIEW_SORT,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserFollowMaster___);
        questIdb = (UserFollowMaster_o *)LIST_VIEW_SORT;
        if ( !v215 )
          goto LABEL_305;
        v216 = *(_QWORD *)(v215 + 24);
        if ( (int)v216 >= 1 )
        {
          v217 = 0LL;
          v274 = 0;
          v280 = (QuestPhaseEntity_o *)v215;
          do
          {
            v216 = (unsigned int)v216;
            if ( questPhaseb )
            {
              if ( v217 >= (unsigned int)v216 )
                goto LABEL_306;
              v218 = *(_QWORD *)(v215 + 8 * v217 + 32);
              if ( !v218 )
                goto LABEL_305;
              if ( *(_DWORD *)(v218 + 36) == 5 )
              {
                LIST_VIEW_SORT = (__int64)questIdb;
                if ( !questIdb )
                  goto LABEL_305;
                LIST_VIEW_SORT = UserFollowMaster__IsFollowUser(questIdb, *(_QWORD *)(v218 + 16), 0LL);
                if ( (LIST_VIEW_SORT & 1) == 0 )
                  goto LABEL_294;
                v216 = *(unsigned int *)(v215 + 24);
              }
            }
            else
            {
              if ( v217 >= (unsigned int)v216 )
                goto LABEL_306;
              v219 = *(_QWORD *)(v215 + 8 * v217 + 32);
              if ( !v219 )
                goto LABEL_305;
              if ( *(_DWORD *)(v219 + 36) == 5 )
                goto LABEL_294;
            }
            if ( v217 >= v216 )
              goto LABEL_306;
            v220 = v215 + 8 * v217;
            LIST_VIEW_SORT = *(_QWORD *)(v220 + 32);
            v300 = (FollowerInfo_o **)(v220 + 32);
            if ( !LIST_VIEW_SORT )
              goto LABEL_305;
            FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)LIST_VIEW_SORT, 0LL);
            LIST_VIEW_SORT = sub_B0D8BC(int___TypeInfo, 0LL);
            if ( v217 >= *(unsigned int *)(v215 + 24) )
              goto LABEL_306;
            v221 = *v300;
            if ( !*v300 )
              goto LABEL_305;
            if ( arg )
            {
              LIST_VIEW_SORT = (__int64)v221->fields.eventSupportDeckIds;
              if ( !LIST_VIEW_SORT )
                goto LABEL_305;
            }
            else
            {
              LIST_VIEW_SORT = (__int64)v221->fields.mainSupportDeckIds;
              if ( !LIST_VIEW_SORT )
                goto LABEL_305;
            }
            v276 = *(_QWORD *)(LIST_VIEW_SORT + 24);
            v222 = System_Array__Clone((System_Array_o *)LIST_VIEW_SORT, 0LL);
            if ( v222 )
            {
              v185 = v222;
              v223 = sub_B0D964(v222, int___TypeInfo);
              if ( !v223 )
                goto LABEL_307;
            }
            else
            {
              v223 = 0LL;
            }
            v224 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v224 = BalanceConfig_TypeInfo;
            }
            v225 = v224->static_fields;
            v227 = v225->FixMainSupportDeckNum;
            v226 = v225->FixEventSupportDeckNum;
            if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Math_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            }
            LIST_VIEW_SORT = System_Math__Max_44559528(v227, v226, 0LL);
            v294 = v223;
            v297 = v217;
            if ( (int)v276 > 0 )
            {
              v230 = LIST_VIEW_SORT;
              v231 = 0LL;
              v288 = (int)v276;
              v291 = (unsigned int *)(v223 + 24);
              v284 = v223 + 32;
              while ( 1 )
              {
                if ( !*p_originalItemList )
                  goto LABEL_305;
                if ( v217 >= *(unsigned int *)(v215 + 24) )
                  break;
                if ( !v223 )
                  goto LABEL_305;
                if ( v231 >= *v291 )
                  break;
                v319 = (*p_originalItemList)->fields._size;
                followerClassIdd = this->fields.setupInfo;
                v232 = this->fields.classBoardMaxDictionary;
                v233 = *(_DWORD *)(v284 + 4 * v231);
                v314 = *v300;
                v234 = this->fields.isServantEquipBonusFilterEnable;
                v235 = this->fields.isServantBonusFilterEnable;
                v236 = this->fields.isBonusFilterEnable;
                v237 = (FollowerSelectItemListViewItem_o *)sub_B0D974(
                                                             FollowerSelectItemListViewItem_TypeInfo,
                                                             v228,
                                                             v229);
                FollowerSelectItemListViewItem___ctor(
                  v237,
                  v319,
                  0,
                  v314,
                  0,
                  friendPointUpVal,
                  friendPointUpMaxVal,
                  friendPointCampaignEntityList,
                  v236,
                  v235,
                  v234,
                  0,
                  followerClassIdd,
                  v307,
                  0,
                  v233,
                  v230,
                  v232,
                  1,
                  v267);
                LIST_VIEW_SORT = (__int64)this->fields.originalItemList;
                if ( !LIST_VIEW_SORT )
                  goto LABEL_305;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)LIST_VIEW_SORT,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v237,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                v223 = v294;
                v217 = v297;
                ++v231;
                --v230;
                if ( (__int64)v231 >= (int)v276 )
                  goto LABEL_267;
              }
LABEL_306:
              v258 = sub_B0D9A8(LIST_VIEW_SORT);
              sub_B0D948(v258, 0LL);
            }
            v288 = (int)v276;
            v291 = (unsigned int *)(v223 + 24);
LABEL_267:
            followerClassIdb = 0;
            v285 = v223 + 32;
            while ( 1 )
            {
              LIST_VIEW_SORT = (__int64)BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                LIST_VIEW_SORT = (__int64)BalanceConfig_TypeInfo;
              }
              v238 = *(struct BalanceConfig_StaticFields **)(LIST_VIEW_SORT + 184);
              if ( followerClassIdb >= v238->SupportDeckMemberMax )
                break;
              if ( (*(_BYTE *)(LIST_VIEW_SORT + 307) & 4) != 0 && !*(_DWORD *)(LIST_VIEW_SORT + 224) )
              {
                j_il2cpp_runtime_class_init_0(LIST_VIEW_SORT);
                v238 = BalanceConfig_TypeInfo->static_fields;
              }
              v240 = v238->FixMainSupportDeckNum;
              v239 = v238->FixEventSupportDeckNum;
              if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_Math_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              }
              LIST_VIEW_SORT = System_Math__Max_44559528(v240, v239, 0LL);
              if ( (int)v276 >= 1 )
              {
                v243 = LIST_VIEW_SORT;
                v244 = 0LL;
                while ( *p_mixItemList )
                {
                  v245 = (*p_mixItemList)->fields._size;
                  LIST_VIEW_SORT = (__int64)BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    LIST_VIEW_SORT = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( v217 >= *(unsigned int *)(v215 + 24) )
                    goto LABEL_306;
                  if ( !v223 )
                    goto LABEL_305;
                  if ( v244 >= *v291 )
                    goto LABEL_306;
                  v315 = this->fields.setupInfo;
                  v320 = *v300;
                  v246 = this->fields.isServantEquipBonusFilterEnable;
                  v247 = v321->fields.classBoardMaxDictionary;
                  v248 = *(_DWORD *)(*(_QWORD *)(LIST_VIEW_SORT + 184) + 164LL);
                  v249 = this->fields.isServantBonusFilterEnable;
                  v250 = v245;
                  v251 = this->fields.isBonusFilterEnable;
                  supportDeckIda = *(_DWORD *)(v285 + 4 * v244);
                  this = v321;
                  v252 = (FollowerSelectItemListViewItem_o *)sub_B0D974(
                                                               FollowerSelectItemListViewItem_TypeInfo,
                                                               v241,
                                                               v242);
                  FollowerSelectItemListViewItem___ctor(
                    v252,
                    v250,
                    v248 - followerClassIdb,
                    v320,
                    followerClassIdb,
                    friendPointUpVal,
                    friendPointUpMaxVal,
                    friendPointCampaignEntityList,
                    v251,
                    v249,
                    v246,
                    0,
                    v315,
                    v307,
                    0,
                    supportDeckIda,
                    v243,
                    v247,
                    1,
                    v267);
                  LIST_VIEW_SORT = (__int64)v321->fields.mixItemList;
                  if ( !LIST_VIEW_SORT )
                    goto LABEL_305;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)LIST_VIEW_SORT,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v252,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                  v215 = (int64_t)v280;
                  v223 = v294;
                  v217 = v297;
                  ++v244;
                  --v243;
                  if ( (__int64)v244 >= v288 )
                    goto LABEL_285;
                }
                goto LABEL_305;
              }
LABEL_285:
              ++followerClassIdb;
            }
            ++v274;
            if ( (*(_BYTE *)(LIST_VIEW_SORT + 307) & 4) != 0 && !*(_DWORD *)(LIST_VIEW_SORT + 224) )
            {
              j_il2cpp_runtime_class_init_0(LIST_VIEW_SORT);
              v238 = BalanceConfig_TypeInfo->static_fields;
            }
            if ( v274 >= v238->SupportListMax )
              break;
LABEL_294:
            LODWORD(v216) = *(_DWORD *)(v215 + 24);
            ++v217;
          }
          while ( (__int64)v217 < (int)v216 );
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
  LIST_VIEW_SORT = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11913/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_305;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)LIST_VIEW_SORT, 0LL);
  v255 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v255 = FollowerSelectItemListViewManager_TypeInfo;
  }
  FollowerSelectItemListViewManager__SortClass(this, v255->static_fields->followerClassId, v254);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  FollowerSelectItemListViewManager__SetFilterButtonImage(this, v256);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_305;
  BYTE2(scrollView->fields.scrollWheelFactor) = 1;
}


void __fastcall FollowerSelectItemListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  FollowerSelectItemListViewManager_c *v4; // x0
  System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x0

  if ( (byte_4217576 & 1) == 0 )
  {
    sub_B0D8A4(&FollowerSelectItemListViewManager_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__, v2);
    sub_B0D8A4(&StringLiteral_6749/*"FollowerSelectClass"*/, v3);
    byte_4217576 = 1;
  }
  v4 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v4 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v4->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT
    || (LIST_VIEW_SORT = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort___Invoke(
                                                                                                 LIST_VIEW_SORT,
                                                                                                 1,
                                                                                                 (const MethodInfo_2615B3C *)Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__)) == 0LL
    || (ListViewSort__DeleteContinueData((ListViewSort_o *)LIST_VIEW_SORT, 0LL),
        (LIST_VIEW_SORT = FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT) == 0LL)
    || (LIST_VIEW_SORT = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort___Invoke(
                                                                                                 LIST_VIEW_SORT,
                                                                                                 0,
                                                                                                 (const MethodInfo_2615B3C *)Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__)) == 0LL )
  {
    sub_B0D97C(LIST_VIEW_SORT);
  }
  ListViewSort__DeleteContinueData((ListViewSort_o *)LIST_VIEW_SORT, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6749/*"FollowerSelectClass"*/, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FollowerSelectItemListViewManager__DestroyList_29687052(this, 0LL, v2);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList_29687052(
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  EventQuestMaster_o *ReturnTypeByQuestId; // x0
  const MethodInfo *v21; // x4
  struct ListViewSort_o *sort; // x8
  struct ListViewSort_o **p_sort; // x20
  int32_t questPhase; // w2
  int32_t InitialDisplayClass; // w22
  FollowerSelectItemListViewManager_c *v26; // x8
  System_Int32_array **v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array *OngoingQuestTargetEventIds; // x0
  int32_t questId; // w21
  int32_t v36; // w22
  System_Int32_array *v37; // x23
  __int64 v38; // x1
  __int64 v39; // x2
  EventUpValSetupInfo_o *v40; // x24
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  const MethodInfo *v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  FollowerSelectItemListViewManager_o *v60; // x0
  int monitor; // w21
  FollowerSelectItemListViewManager_c *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  ClassButtonControlComponent_o *classButtonControl; // x20
  __int64 v70; // x1
  __int64 v71; // x2
  ClassButtonControlComponent_CallbackFunc_o *v72; // x21
  ClassButtonControlComponent_o *v73; // x20
  const MethodInfo *v74; // x2
  struct EventUpValSetupInfo_o *setupInfo; // x8
  System_Int32_array *v76; // x1
  UILabel_o *bonusFilterKindLabel; // x20

  if ( (byte_4217583 & 1) == 0 )
  {
    sub_B0D8A4(&ClassButtonControlComponent_CallbackFunc_TypeInfo, battleSetupInfo);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventQuestMaster___, v10);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    sub_B0D8A4(&EventUpValSetupInfo_TypeInfo, v12);
    sub_B0D8A4(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v13);
    sub_B0D8A4(&FollowerSelectItemListViewManager_TypeInfo, v14);
    sub_B0D8A4(&Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__, v15);
    sub_B0D8A4(&int___TypeInfo, v16);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_11817/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/, v18);
    sub_B0D8A4(&StringLiteral_6749/*"FollowerSelectClass"*/, v19);
    byte_4217583 = 1;
  }
  if ( battleSetupInfo )
  {
    ReturnTypeByQuestId = (EventQuestMaster_o *)BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
    p_sort = &this->fields.sort;
    sort = this->fields.sort;
    this->fields.questId = (int)ReturnTypeByQuestId;
    questPhase = battleSetupInfo->fields.questPhase;
    this->fields.questPhase = questPhase;
    if ( !sort )
      goto LABEL_47;
    InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                            this,
                            (int32_t)ReturnTypeByQuestId,
                            questPhase,
                            sort->fields.isRequestLoad,
                            v21);
    v26 = FollowerSelectItemListViewManager_TypeInfo;
    if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v26 = FollowerSelectItemListViewManager_TypeInfo;
    }
    v26->static_fields->followerClassId = InitialDisplayClass;
    ReturnTypeByQuestId = (EventQuestMaster_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                  battleSetupInfo->fields.questId,
                                                  0LL);
    if ( !FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT )
      goto LABEL_47;
    v27 = (System_Int32_array **)System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort___Invoke(
                                   FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT,
                                   (int32_t)ReturnTypeByQuestId,
                                   (const MethodInfo_2615B3C *)Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__);
    *p_sort = (struct ListViewSort_o *)v27;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.sort, v27, v28, v29, v30, v31, v32, v33);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (EventQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventQuestMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_47;
    OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                   ReturnTypeByQuestId,
                                   this->fields.questId,
                                   this->fields.questPhase,
                                   0LL);
    questId = this->fields.questId;
    v36 = this->fields.questPhase;
    v37 = OngoingQuestTargetEventIds;
    v40 = (EventUpValSetupInfo_o *)sub_B0D974(EventUpValSetupInfo_TypeInfo, v38, v39);
    EventUpValSetupInfo___ctor_25655088(v40, v37, 0, questId, v36, 0LL);
    this->fields.setupInfo = v40;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.setupInfo,
      (System_Int32_array **)v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  else
  {
    this->fields.setupInfo = 0LL;
    sub_B0D840(
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v47, v48, v49, v50, v51, v52);
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.sort;
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  ListViewSort__Load((ListViewSort_o *)ReturnTypeByQuestId, 0LL);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.sort;
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  ListViewSort__Save((ListViewSort_o *)ReturnTypeByQuestId, 0LL);
  if ( !*p_sort )
    goto LABEL_47;
  if ( (*p_sort)->fields.isRequestSave )
  {
    v60 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v60 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor = (int)v60->fields.itemList->monitor;
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(v60, v53) )
    {
      v62 = FollowerSelectItemListViewManager_TypeInfo;
      if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v62 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6749/*"FollowerSelectClass"*/, v62->static_fields->followerClassId, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
  this->fields.originalItemList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.originalItemList, 0LL, v54, v55, v56, v57, v58, v59);
  this->fields.mixItemList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.mixItemList, 0LL, v63, v64, v65, v66, v67, v68);
  classButtonControl = this->fields.classButtonControl;
  v72 = (ClassButtonControlComponent_CallbackFunc_o *)sub_B0D974(
                                                        ClassButtonControlComponent_CallbackFunc_TypeInfo,
                                                        v70,
                                                        v71);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v72,
    (Il2CppObject *)this,
    Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_47;
  ClassButtonControlComponent__init(classButtonControl, v72, this->fields.questId, this->fields.questPhase, 0, 0LL);
  this->fields.isInput = 0;
  v73 = this->fields.classButtonControl;
  ReturnTypeByQuestId = (EventQuestMaster_o *)FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  }
  if ( !v73 )
    goto LABEL_47;
  ClassButtonControlComponent__setCursor(
    v73,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  setupInfo = this->fields.setupInfo;
  v76 = setupInfo ? setupInfo->fields.eventIdList : (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, v76, v74);
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
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    ReturnTypeByQuestId = (EventQuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11817/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/, 0LL);
    if ( bonusFilterKindLabel )
    {
      UILabel__set_text(bonusFilterKindLabel, (System_String_o *)ReturnTypeByQuestId, 0LL);
      goto LABEL_43;
    }
LABEL_47:
    sub_B0D97C(ReturnTypeByQuestId);
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
}


void __fastcall FollowerSelectItemListViewManager__EndClassCompatibilityMenu(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4217590 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4217590 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseClassCompatibilityMenu(Instance, 0LL, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__EndCloseClassBoardEffectListDialog(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_42175A0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_42175A0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  System_Action_o *v12; // x21

  if ( (byte_4217592 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4217592 = 1;
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(
    v12,
    (Il2CppObject *)this,
    Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__,
    0LL);
  if ( !Instance )
LABEL_8:
    sub_B0D97C(sort);
  CommonUI__CloseServantBonusFilterSelectMenu(Instance, v12, 0LL);
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
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v13; // x20
  int32_t result; // w0
  struct System_Int32_array *classIds; // x8
  struct System_Int32_array *v16; // x8
  WarEntity_o *v17; // x8
  __int64 v18; // x0

  if ( (byte_4217580 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantClassMaster___, v8);
    sub_B0D8A4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4217580 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_17;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  if ( !Entity )
    return defaultValue;
  v13 = Entity;
  result = QuestPhaseEntity__GetAdvantageClassId(Entity, 0LL);
  if ( result != -1 )
    return result;
  classIds = v13->fields.classIds;
  if ( !classIds || !*(_QWORD *)&classIds->max_length )
    return defaultValue;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v16 = v13->fields.classIds;
  if ( !v16 )
    goto LABEL_17;
  if ( !v16->max_length )
  {
    v18 = sub_B0D9A8(Instance);
    sub_B0D948(v18, 0LL);
  }
  if ( !Instance )
LABEL_17:
    sub_B0D97C(Instance);
  v17 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          v16->m_Items[1],
          (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  result = defaultValue;
  if ( v17 )
    return *(&v17->fields.flag + 1);
  return result;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_c *v2; // x0

  if ( (byte_4217587 & 1) == 0 )
  {
    sub_B0D8A4(&FollowerSelectItemListViewManager_TypeInfo, method);
    byte_4217587 = 1;
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

  if ( (byte_42175A1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    byte_42175A1 = 1;
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

  if ( (byte_421757E & 1) == 0 )
  {
    sub_B0D8A4(&FollowerSelectItemListViewManager_TypeInfo, *(_QWORD *)&questId);
    this = (FollowerSelectItemListViewManager_o *)sub_B0D8A4(&OptionManager_TypeInfo, v8);
    byte_421757E = 1;
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

  if ( (byte_4217585 & 1) == 0 )
  {
    sub_B0D8A4(&FollowerSelectItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4217585 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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

  if ( (byte_421759C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    byte_421759C = 1;
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
  if ( (byte_421759D & 1) == 0 )
  {
    sub_B0D8A4(&FollowerSelectItemListViewItem_TypeInfo, userId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    this = (FollowerSelectItemListViewManager_o *)sub_B0D8A4(
                                                    &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                    v8);
    byte_421759D = 1;
  }
  itemList = v6->fields.itemList;
  if ( !itemList )
LABEL_17:
    sub_B0D97C(this);
  v10 = 0LL;
  while ( (__int64)v10 < itemList->fields._size )
  {
    if ( v10 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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


int32_t __fastcall FollowerSelectItemListViewManager__GetItemIndex_29697916(
        FollowerSelectItemListViewManager_o *this,
        int64_t userId,
        int32_t classId,
        int32_t deckId,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *v8; // x22
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  unsigned __int64 v12; // x23
  ListViewItem_o *v13; // x8
  __int64 v14; // x11
  ListViewItem_c *klass; // x9
  int monitor_high; // w9

  v8 = this;
  if ( (byte_421759E & 1) == 0 )
  {
    sub_B0D8A4(&FollowerSelectItemListViewItem_TypeInfo, userId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    this = (FollowerSelectItemListViewManager_o *)sub_B0D8A4(
                                                    &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                    v10);
    byte_421759E = 1;
  }
  itemList = v8->fields.itemList;
  if ( !itemList )
LABEL_19:
    sub_B0D97C(this);
  v12 = 0LL;
  while ( (__int64)v12 < itemList->fields._size )
  {
    if ( v12 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v13 = itemList->fields._items->m_Items[v12];
    if ( v13 )
    {
      v14 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v13->klass->_2.bitflags2 + 1) >= (unsigned int)v14
        && (FollowerSelectItemListViewItem_c *)v13->klass->_2.typeHierarchy[v14 - 1] == FollowerSelectItemListViewItem_TypeInfo )
      {
        klass = v13[1].klass;
        if ( klass )
          klass = (ListViewItem_c *)klass->_1.name;
        if ( klass == (ListViewItem_c *)userId )
        {
          monitor_high = HIDWORD(v13[1].monitor);
          if ( monitor_high )
            monitor_high = (int)v13[1].monitor;
          if ( monitor_high == classId && HIDWORD(v13[2].fields.sortValue0) == deckId )
            return v12;
        }
      }
    }
    itemList = v8->fields.itemList;
    ++v12;
    if ( !itemList )
      goto LABEL_19;
  }
  LODWORD(v12) = -1;
  return v12;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4217581 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6749/*"FollowerSelectClass"*/, method);
    byte_4217581 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6749/*"FollowerSelectClass"*/, 0, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  FollowerSelectItemListViewManager_c *v3; // x0
  System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x0

  if ( (byte_4217577 & 1) == 0 )
  {
    sub_B0D8A4(&FollowerSelectItemListViewManager_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__, v2);
    byte_4217577 = 1;
  }
  v3 = FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v3 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v3->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT
    || (LIST_VIEW_SORT = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort___Invoke(
                                                                                                 LIST_VIEW_SORT,
                                                                                                 1,
                                                                                                 (const MethodInfo_2615B3C *)Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__)) == 0LL
    || (ListViewSort__InitLoad((ListViewSort_o *)LIST_VIEW_SORT, 0LL),
        (LIST_VIEW_SORT = FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT) == 0LL)
    || (LIST_VIEW_SORT = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort___Invoke(
                                                                                                 LIST_VIEW_SORT,
                                                                                                 0,
                                                                                                 (const MethodInfo_2615B3C *)Method_System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__Invoke__)) == 0LL )
  {
    sub_B0D97C(LIST_VIEW_SORT);
  }
  ListViewSort__InitLoad((ListViewSort_o *)LIST_VIEW_SORT, 0LL);
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

  if ( (byte_421757F & 1) == 0 )
  {
    sub_B0D8A4(&BattleData_TypeInfo, *(_QWORD *)&questId);
    sub_B0D8A4(&FollowerSelectItemListViewManager_TypeInfo, v6);
    byte_421757F = 1;
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
  if ( (byte_4217582 & 1) == 0 )
  {
    sub_B0D8A4(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&friendPointUpVal);
    sub_B0D8A4(&FollowerSelectItemListViewItem_TypeInfo, v7);
    sub_B0D8A4(&FollowerSelectItemListViewManager_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    this = (FollowerSelectItemListViewManager_o *)sub_B0D8A4(
                                                    &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                    v10);
    byte_4217582 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
    sub_B0D97C(this);
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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

  if ( (byte_4217598 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, *(_QWORD *)&classPos);
    byte_4217598 = 1;
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
  _BOOL4 isServantBonusFilterEnable; // w24
  _BOOL4 isServantEquipBonusFilterEnable; // w25
  System_Int32_array *equipBonusFilterEventIds; // x20
  ListViewSort_o *sort; // x21
  CommonUI_o *v11; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  ServantBonusFilterSelectMenu_CallbackFunc_o *v14; // x23
  __int64 v15; // x0

  if ( (byte_4217591 & 1) == 0 )
  {
    sub_B0D8A4(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4217591 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
    isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
    equipBonusFilterEventIds = this->fields.equipBonusFilterEventIds;
    sort = this->fields.sort;
    v11 = (CommonUI_o *)Instance;
    v14 = (ServantBonusFilterSelectMenu_CallbackFunc_o *)sub_B0D974(
                                                           ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo,
                                                           v12,
                                                           v13);
    ServantBonusFilterSelectMenu_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__,
      0LL);
    if ( !v11 )
      sub_B0D97C(v15);
    CommonUI__OpenServantBonusFilterSelectMenu(
      v11,
      0,
      isServantBonusFilterEnable,
      isServantEquipBonusFilterEnable,
      equipBonusFilterEventIds,
      sort,
      v14,
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

  if ( (byte_421759B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_421759B = 1;
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
      this->fields.displaySkill = dword_3215258[displaySkill];
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        ObjectList = (System_Collections_Generic_List_FollowerSelectItemListViewObject__o *)v10->fields._items->m_Items[v11];
        if ( !ObjectList )
          break;
        FollowerSelectItemListViewObject__ChangeDisplaySkill(
          (FollowerSelectItemListViewObject_o *)ObjectList,
          this->fields.displaySkill,
          v8);
        size = v10->fields._size;
        if ( (int)++v11 >= size )
          return;
      }
LABEL_17:
      sub_B0D97C(ObjectList);
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
  System_Action_o *v9; // x21
  __int64 v10; // x0

  if ( (byte_421758F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_421758F = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__,
      0LL);
    if ( !Instance )
      sub_B0D97C(v10);
    CommonUI__OpenClassCompatibilityMenu(Instance, v9, 0LL);
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
      sub_B0D840(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
  int32_t Index; // w2

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B0D840(
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
        sub_B0D97C(v10);
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
  struct ListViewSort_o *sort; // x8

  if ( (byte_4217596 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4217596 = 1;
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
      sub_B0D97C(v3);
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
  OtherUserSortDialog_CallbackFunc_o *v11; // x22
  __int64 v12; // x0

  if ( (byte_4217594 & 1) == 0 )
  {
    sub_B0D8A4(&OtherUserSortDialog_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FollowerSelectItemListViewManager_CloseSortDialog__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4217594 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v11 = (OtherUserSortDialog_CallbackFunc_o *)sub_B0D974(OtherUserSortDialog_CallbackFunc_TypeInfo, v9, v10);
    OtherUserSortDialog_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_CloseSortDialog__,
      0LL);
    if ( !v8 )
      sub_B0D97C(v12);
    CommonUI__OpenOtherUserSortDialog(v8, 0, sort, v11, 0LL);
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
  int32_t Index; // w2

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B0D840(
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
        sub_B0D97C(v10);
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
  int32_t Index; // w2

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B0D840(
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
        sub_B0D97C(v10);
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
  int32_t Index; // w2

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B0D840(
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
        sub_B0D97C(v10);
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

  if ( (byte_421758E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12672/*"ScrollViewEnabled"*/, obj);
    byte_421758E = 1;
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
        (System_String_o *)StringLiteral_12672/*"ScrollViewEnabled"*/,
        0.1,
        0LL);
    }
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v8, v9, v10, v11, v12, v13);
    if ( callbackFunc )
    {
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        FollowerSelectItemListViewManager_CallbackFunc__Invoke(callbackFunc, kind, Index, 0LL);
        return;
      }
LABEL_14:
      sub_B0D97C(tutorialListViewObject);
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
  UnityEngine_Component_o *tutorialListViewObject; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_421758D & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421758D = 1;
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
              sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
              if ( callbackFunc2 )
                System_Action__Invoke(callbackFunc2, 0LL);
              return;
            }
          }
        }
      }
      sub_B0D97C(tutorialListViewObject);
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
  __int64 v28; // x1
  __int64 v29; // x2
  struct FollowerInfo_o *followerInfo; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x8
  int max_length; // w9
  unsigned int v33; // w10
  __int64 v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  _QWORD **v41; // x23
  __int64 v42; // x22
  __int16 v43; // w8
  __int64 v44; // x22
  __int64 v45; // x22
  __int64 v46; // x22
  System_Int32_array ***v47; // x8
  System_Int32_array **v48; // x1
  CommonUI_o *Instance; // x22
  __int64 v50; // x1
  __int64 v51; // x2
  System_Action_o *v52; // x23
  __int64 v53; // x0

  v4 = this;
  if ( (byte_421759F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, obj);
    sub_B0D8A4(&Method_System_Array_Empty_int___, v5);
    sub_B0D8A4(&ClassBoardInfo_TypeInfo, v6);
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B0D8A4(&FollowerSelectItemListViewItem_TypeInfo, v11);
    sub_B0D8A4(&Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__, v12);
    sub_B0D8A4(&Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14);
    this = (FollowerSelectItemListViewManager_o *)sub_B0D8A4(
                                                    &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                    v15);
    byte_421759F = 1;
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
            v20 = (_QWORD *)sub_B0D8AC(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
          v21 = (System_Reflection_MethodBase_o *)sub_B0D888(v20, v20[3]);
          OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0LL);
          return;
        }
        v4->fields.isInput = 0;
        v22 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
        if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 75) & 2) != 0 )
          v22 = (_QWORD *)sub_B0D8AC(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
        v23 = (System_Reflection_MethodBase_o *)sub_B0D888(v22, v22[3]);
        OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
        this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewItem__get_SvtId(v18, v25);
        if ( Master_WarQuestSelectionMaster )
        {
          this = (FollowerSelectItemListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                          Master_WarQuestSelectionMaster,
                                                          (int32_t)this,
                                                          (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            scrollBar = (int32_t)this->fields.scrollBar;
            this = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( this )
            {
              ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(
                                   (ClassBoardClassMaster_o *)this,
                                   scrollBar,
                                   0LL);
              this = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
                  v34 = sub_B0D974(ClassBoardInfo_TypeInfo, v28, v29);
                  ClassBoardInfo___ctor((ClassBoardInfo_o *)v34, 0LL);
                  if ( v34 )
                  {
                    *(_DWORD *)(v34 + 16) = ClassBoardBaseId;
                    v41 = (_QWORD **)Method_System_Array_Empty_int___;
                    v42 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
                    v43 = *(_WORD *)(v42 + 306);
                    if ( (v43 & 1) == 0 )
                    {
                      sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
                      v43 = *(_WORD *)(v42 + 306);
                    }
                    if ( (v43 & 0x400) != 0 )
                    {
                      v44 = *v41[6];
                      if ( (*(_BYTE *)(v44 + 306) & 1) == 0 )
                        sub_AA65A4(*v41[6]);
                      if ( !*(_DWORD *)(v44 + 224) )
                      {
                        v45 = *v41[6];
                        if ( (*(_BYTE *)(v45 + 306) & 1) == 0 )
                          sub_AA65A4(*v41[6]);
                        j_il2cpp_runtime_class_init_0(v45);
                      }
                    }
                    v46 = *v41[6];
                    if ( (*(_BYTE *)(v46 + 306) & 1) == 0 )
                      sub_AA65A4(*v41[6]);
                    v47 = *(System_Int32_array ****)(v46 + 184);
                    v48 = *v47;
                    *(_QWORD *)(v34 + 24) = *v47;
                    sub_B0D840((BattleServantConfConponent_o *)(v34 + 24), v48, v35, v36, v37, v38, v39, v40);
LABEL_47:
                    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    v52 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v50, v51);
                    System_Action___ctor(
                      v52,
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
                        v52,
                        1,
                        (ClassBoardInfo_o *)v34,
                        0LL);
                      return;
                    }
                  }
                }
                else
                {
                  v33 = 0;
                  while ( 1 )
                  {
                    if ( v33 >= max_length )
                    {
                      v53 = sub_B0D9A8(this);
                      sub_B0D948(v53, 0LL);
                    }
                    v34 = (__int64)userClassBoardInfo->m_Items[v33];
                    if ( !v34 )
                      break;
                    if ( *(_DWORD *)(v34 + 16) == ClassBoardBaseId )
                      goto LABEL_47;
                    if ( (int)++v33 >= max_length )
                      goto LABEL_34;
                  }
                }
              }
            }
          }
        }
      }
LABEL_49:
      sub_B0D97C(this);
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
  System_Action_o *v16; // x22
  const MethodInfo *v17; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_421758C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v5);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v6);
    byte_421758C = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = FollowerSelectItemListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_15:
    sub_B0D97C(ObjectList);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v13 = v9->fields._items->m_Items[v11];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v13, 0LL) )
    {
      v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v13 )
        goto LABEL_15;
      ++v12;
      zero = UnityEngine_Vector3__get_zero(0LL);
      FollowerSelectItemListViewObject__Init(v13, 4, v16, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v17);
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
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
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
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_421758A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__, v9);
    sub_B0D8A4(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v12);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v13);
    byte_421758A = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      FollowerSelectItemListViewObject__Init(
        (FollowerSelectItemListViewObject_o *)current,
        mode,
        v19,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__RequestListObject_29690896(
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
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_421758B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__, v7);
    sub_B0D8A4(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v10);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v11);
    byte_421758B = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      FollowerSelectItemListViewObject__Init(
        (FollowerSelectItemListViewObject_o *)current,
        mode,
        v17,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


void __fastcall FollowerSelectItemListViewManager__SaveSortFilter(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  const MethodInfo *v5; // x1
  struct ListViewSort_o *v6; // x8
  FollowerSelectItemListViewManager_o *v7; // x0
  int monitor; // w20
  FollowerSelectItemListViewManager_c *v9; // x0

  if ( (byte_4217584 & 1) == 0 )
  {
    sub_B0D8A4(&FollowerSelectItemListViewManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_6749/*"FollowerSelectClass"*/, v3);
    byte_4217584 = 1;
  }
  sort = this->fields.sort;
  if ( !sort || (ListViewSort__Save(sort, 0LL), (v6 = this->fields.sort) == 0LL) )
    sub_B0D97C(sort);
  if ( v6->fields.isRequestSave )
  {
    v7 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v7 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor = (int)v7->fields.itemList->monitor;
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(v7, v5) )
    {
      v9 = FollowerSelectItemListViewManager_TypeInfo;
      if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v9 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6749/*"FollowerSelectClass"*/, v9->static_fields->followerClassId, 0LL);
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
    sub_B0D97C(0LL);
  UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__SetBonusFilterFlag(
        FollowerSelectItemListViewManager_o *this,
        System_Int32_array *eventIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v11; // x8
  System_Collections_Generic_List_int__o *v12; // x21
  unsigned __int64 v13; // x23
  int32_t v14; // w22
  bool isBonusFilterEnable; // w28
  bool isServantBonusFilterEnable; // w28
  bool isServantEquipBonusFilterEnable; // w28
  struct System_Int32_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_421757A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventFilterMaster___, eventIds);
    sub_B0D8A4(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_int___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Remove__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_421757A = 1;
  }
  entity = 0LL;
  *(_WORD *)&this->fields.isBonusFilterEnable = 256;
  this->fields.isServantEquipBonusFilterEnable = 1;
  Instance = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)eventIds,
                                                         (const MethodInfo_1B58FA0 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !eventIds )
    goto LABEL_22;
  v11 = *(_QWORD *)&eventIds->max_length;
  v12 = Instance;
  if ( v11 && (int)v11 >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v11 )
      {
        v25 = sub_B0D9A8(Instance);
        sub_B0D948(v25, 0LL);
      }
      v14 = eventIds->m_Items[v13 + 1];
      Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventFilterMaster___);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                                             &entity,
                                                             v14,
                                                             (const MethodInfo_2669C30 *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__);
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
          if ( !v12 )
            break;
          Instance = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Remove(
                                                                 v12,
                                                                 v14,
                                                                 (const MethodInfo_2FB187C *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
      else
      {
        this->fields.isBonusFilterEnable = 1;
      }
      LODWORD(v11) = eventIds->max_length;
      if ( (__int64)++v13 >= (int)v11 )
        goto LABEL_20;
    }
LABEL_22:
    sub_B0D97C(Instance);
  }
LABEL_20:
  if ( !v12 )
    goto LABEL_22;
  v18 = System_Collections_Generic_List_int___ToArray(
          v12,
          (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.equipBonusFilterEventIds = v18;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.equipBonusFilterEventIds,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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
  UISprite_o *classInfoSprite; // x20
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x0
  BattleServantConfConponent_o *p_classBoardMaxDictionary; // x20
  System_Collections_Generic_Dictionary_int__int__o *v25; // x19
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x21
  __int64 v44; // x9
  ClassBoardSquareMaster_o *v45; // x0
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  unsigned __int64 v48; // x10
  int32_t *v49; // x11
  __int64 v50; // x0

  if ( (byte_421757C & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v3);
    sub_B0D8A4(&ClassBoardBaseEntity_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5);
    sub_B0D8A4(&CondType_TypeInfo, v6);
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v8);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__Clear__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v14);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_17198/*"buttontxt_formation_20"*/, v17);
    byte_421757C = 1;
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
  if ( CondType__IsQuestClear_25410236(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17198/*"buttontxt_formation_20"*/, 0LL);
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = (BattleServantConfConponent_o *)&this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_2E69A20 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v25 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B0D974(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v20,
                                                                 v21);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v25,
      (const MethodInfo_2E68CB0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    p_classBoardMaxDictionary->klass = (BattleServantConfConponent_c *)v25;
    sub_B0D840(p_classBoardMaxDictionary, (System_Int32_array **)v25, v26, v27, v28, v29, v30, v31);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster[1].klass) == 0LL )
  {
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 Master_WarQuestSelectionMaster,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v35;
        p_offset += 4;
        if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v38 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v40 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_34;
      }
      v41 = (__int64)&v38->vtable[*v40].method;
    }
    else
    {
LABEL_34:
      v41 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v42 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
            Enumerator,
            *(_QWORD *)(v41 + 8));
    v43 = v42;
    if ( v42 )
    {
      v44 = *(&ClassBoardBaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v42 + 300LL) < (unsigned int)v44
        || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v42 + 200LL) + 8 * v44 - 8) != ClassBoardBaseEntity_TypeInfo )
      {
        sub_B0DC70(v42);
LABEL_55:
        sub_B0D97C(v45);
      }
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v45 = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v43 )
      goto LABEL_55;
    if ( !v45 )
      sub_B0D97C(0LL);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(v45, *(_DWORD *)(v43 + 16), 0LL);
    if ( OtherThanNoneEntity )
    {
      if ( !p_classBoardMaxDictionary->klass )
        sub_B0D97C(OtherThanNoneEntity);
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)p_classBoardMaxDictionary->klass,
        *(_DWORD *)(v43 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_2E69854 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v47 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v48 = 0LL;
    v49 = &v47->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      ++v48;
      v49 += 4;
      if ( v48 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_51;
    }
    v50 = (__int64)&v47->vtable[*v49].method;
  }
  else
  {
LABEL_51:
    v50 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(Enumerator, *(_QWORD *)(v50 + 8));
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
  System_Collections_Generic_IEnumerable_T__o *mixItemList; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  const MethodInfo *v25; // x1
  __int64 v26; // x10
  System_Collections_Generic_IEnumerable_T__o *originalItemList; // x22
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v28; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x2
  __int64 v36; // x10
  int v37; // w19
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-78h] BYREF
  int v39[2]; // [xsp+20h] [xbp-60h]
  int v40; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_4217588 & 1) == 0 )
  {
    sub_B0D8A4(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&followerClassId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_B0D8A4(&FollowerSelectItemListViewItem_TypeInfo, v8);
    sub_B0D8A4(&FollowerSelectItemListViewManager_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem___ctor___67885840, v11);
    sub_B0D8A4(&System_Collections_Generic_List_ListViewItem__TypeInfo, v12);
    byte_4217588 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v40 = 0;
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
      v17 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                              System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                                              v14,
                                                                              v15);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v17,
        mixItemList,
        (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_ListViewItem___ctor___67885840);
      this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v17;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.itemList,
        (System_Int32_array **)v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      itemList = this->fields.itemList;
      if ( itemList )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v38,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v41 = v38;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v41,
                  (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( v41.fields.current )
          {
            v26 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v41.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v26
              && (FollowerSelectItemListViewItem_c *)v41.fields.current->klass->_2.typeHierarchy[v26 - 1] == FollowerSelectItemListViewItem_TypeInfo )
            {
              FollowerSelectItemListViewItem__UpdateRestriction(
                (FollowerSelectItemListViewItem_o *)v41.fields.current,
                v25);
            }
          }
        }
        v39[0] = 190;
        v40 = 1;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v41,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        v40 = 0;
        return;
      }
LABEL_31:
      sub_B0D97C(itemList);
    }
    originalItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.originalItemList;
    v28 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                            System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                                            v14,
                                                                            v15);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v28,
      originalItemList,
      (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_ListViewItem___ctor___67885840);
    this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v28;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.itemList,
      (System_Int32_array **)v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_31;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v38,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v41 = v38;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v41,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( v41.fields.current )
      {
        v36 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v41.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v36
          && (FollowerSelectItemListViewItem_c *)v41.fields.current->klass->_2.typeHierarchy[v36 - 1] == FollowerSelectItemListViewItem_TypeInfo )
        {
          FollowerSelectItemListViewItem__AnalyzeEntity(
            (FollowerSelectItemListViewItem_o *)v41.fields.current,
            followerClassId,
            v35);
        }
      }
    }
    v39[0] = 190;
    v37 = ++v40;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v41,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v37 && v39[v37 - 1] == 190 )
      v40 = v37 - 1;
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

  if ( (byte_4217593 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17065/*"btn_sefilter_2_on"*/, method);
    sub_B0D8A4(&StringLiteral_17064/*"btn_sefilter_2"*/, v3);
    byte_4217593 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (bonusFilterSprite = this->fields.bonusFilterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !bonusFilterSprite) )
  {
    sub_B0D97C(sort);
  }
  v6 = (System_String_o **)&StringLiteral_17064/*"btn_sefilter_2"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17065/*"btn_sefilter_2_on"*/;
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  FollowerSelectItemListViewManager__SetMode_29690048(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__SetMode_29690048(
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
  int v11; // w8
  char *v12; // x19
  unsigned int v13; // w22
  FollowerSelectItemListViewObject_o *v14; // x21
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  __int64 *v17; // x8
  const MethodInfo *v18; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  int32_t v21; // w8
  char *v22; // x20
  int v23; // w8
  __int64 v24; // x23
  FollowerSelectItemListViewObject_o *v25; // x21
  System_Action_o *v26; // x22
  const MethodInfo *v27; // x3
  int v28; // s1
  int32_t v31; // w1
  FollowerSelectItemListViewObject_o *v32; // x0
  System_Action_o *v33; // x2
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct FollowerSelectItemListViewObject_o *tutorialListViewObject; // x22
  const MethodInfo *v41; // x1
  struct FollowerSelectItemListViewObject_o *v42; // x21

  if ( (byte_4217589 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v7);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v8);
    sub_B0D8A4(&StringLiteral_11456/*"RequestInto"*/, v9);
    byte_4217589 = 1;
  }
  if ( mode == 3 )
  {
    ObjectList = (char *)FollowerSelectItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
    if ( !ObjectList )
      goto LABEL_38;
    v11 = *((_DWORD *)ObjectList + 6);
    v12 = ObjectList;
    if ( v11 >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v11 <= v13 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v14 = *(FollowerSelectItemListViewObject_o **)(*((_QWORD *)v12 + 2) + 8LL * (int)v13 + 32);
        if ( !v14 )
          break;
        UnityEngine_Vector3__get_zero(0LL);
        if ( (byte_42175AC & 1) == 0 )
        {
          sub_B0D8A4(&FollowerSelectItemListViewItem_TypeInfo, v15);
          byte_42175AC = 1;
        }
        FollowerSelectItemListViewObject__SetupDisp(v14, v15);
        v11 = *((_DWORD *)v12 + 6);
        if ( (int)++v13 >= v11 )
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
    v17 = &StringLiteral_11456/*"RequestInto"*/;
LABEL_37:
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)*v17, 0.0, 0LL);
    return;
  }
  if ( mode != 4 )
  {
    if ( mode == 2 )
      FollowerSelectItemListViewManager__RequestListObject_29690896(this, 3, v16);
    return;
  }
  ListViewManager__set_IsInput((ListViewManager_o *)this, 1, 0LL);
  ObjectList = (char *)FollowerSelectItemListViewManager__get_ClippingObjectList(this, v18);
  if ( !ObjectList )
    goto LABEL_38;
  v21 = *((_DWORD *)ObjectList + 6);
  v22 = ObjectList;
  if ( v21 < 1 )
  {
    this->fields.callbackCount = 1;
    v17 = &StringLiteral_10060/*"OnMoveEnd"*/;
    goto LABEL_37;
  }
  this->fields.callbackCount = v21;
  v23 = *((_DWORD *)ObjectList + 6);
  if ( v23 >= 1 )
  {
    v24 = 0LL;
    while ( 1 )
    {
      if ( v23 <= (unsigned int)v24 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v25 = *(FollowerSelectItemListViewObject_o **)(*((_QWORD *)v22 + 2) + 8 * v24 + 32);
      v26 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v19, v20);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v25 )
        break;
      *(UnityEngine_Vector3_o *)(&v28 - 1) = UnityEngine_Vector3__get_zero(0LL);
      if ( (_DWORD)v24 )
      {
        v31 = 2;
        v32 = v25;
        v33 = v26;
      }
      else
      {
        FollowerSelectItemListViewObject__Init(v25, 0, v26, 0.0, *(UnityEngine_Vector3_o *)&v28, v27);
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
        sub_B0D840(
          (BattleServantConfConponent_o *)(ObjectList + 32),
          (System_Int32_array **)this,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
        tutorialListViewObject = this->fields.tutorialListViewObject;
        ObjectList = (char *)FollowerSelectItemListViewObject__GetItem(v25, v41);
        if ( !tutorialListViewObject )
          break;
        ObjectList = (char *)((__int64 (__fastcall *)(struct FollowerSelectItemListViewObject_o *, char *, Il2CppMethodPointer))tutorialListViewObject->klass->vtable._5_SetItem.method)(
                               tutorialListViewObject,
                               ObjectList,
                               tutorialListViewObject->klass->vtable._6_SetItem.methodPtr);
        v42 = this->fields.tutorialListViewObject;
        if ( !v42 )
          break;
        *(UnityEngine_Vector3_o *)(&v28 - 1) = UnityEngine_Vector3__get_zero(0LL);
        v31 = 6;
        v32 = v42;
        v33 = 0LL;
      }
      FollowerSelectItemListViewObject__Init(v32, v31, v33, 0.0, *(UnityEngine_Vector3_o *)&v28, v27);
      v23 = *((_DWORD *)v22 + 6);
      if ( (int)++v24 >= v23 )
        return;
    }
LABEL_38:
    sub_B0D97C(ObjectList);
  }
}


void __fastcall FollowerSelectItemListViewManager__SetMode_29690840(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  FollowerSelectItemListViewManager__SetMode_29690048(this, mode, v10);
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
  if ( (byte_4217586 & 1) == 0 )
  {
    this = (FollowerSelectItemListViewManager_o *)sub_B0D8A4(&FollowerSelectItemListViewObject_TypeInfo, obj);
    byte_4217586 = 1;
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
    sub_B0D97C(this);
  }
  if ( !v4 )
    goto LABEL_19;
  UnityEngine_Vector3__get_zero(0LL);
  if ( (byte_42175AC & 1) == 0 )
  {
    sub_B0D8A4(&FollowerSelectItemListViewItem_TypeInfo, v13);
    byte_42175AC = 1;
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
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v13; // x8
  int32_t sortKind; // w9
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  struct ListViewSort_o *v21; // x8
  System_String_o **v22; // x8

  if ( (byte_4217597 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17072/*"btn_sort_up"*/, v3);
    sub_B0D8A4(&StringLiteral_17156/*"btn_txt_up"*/, v4);
    sub_B0D8A4(&StringLiteral_17112/*"btn_txt_new"*/, v5);
    sub_B0D8A4(&StringLiteral_17102/*"btn_txt_down"*/, v6);
    sub_B0D8A4(&StringLiteral_17119/*"btn_txt_old"*/, v7);
    sub_B0D8A4(&StringLiteral_17069/*"btn_sort_down"*/, v8);
    byte_4217597 = 1;
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
    v13 = this->fields.sort;
    if ( v13 )
    {
      sortKind = v13->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v15 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17119/*"btn_txt_old"*/ : &StringLiteral_17112/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
          v16 = this->fields.sort;
          if ( v16 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v16->fields.isAscendingOrder;
              v18 = (System_String_o **)&StringLiteral_17069/*"btn_sort_down"*/;
              v19 = (System_String_o **)&StringLiteral_17072/*"btn_sort_up"*/;
LABEL_32:
              if ( isAscendingOrder )
                v22 = v18;
              else
                v22 = v19;
              UISprite__set_spriteName((UISprite_o *)sort, *v22, 0LL);
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
          v20 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17156/*"btn_txt_up"*/ : &StringLiteral_17102/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
          v21 = this->fields.sort;
          if ( v21 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v21->fields.isAscendingOrder;
              v18 = (System_String_o **)&StringLiteral_17072/*"btn_sort_up"*/;
              v19 = (System_String_o **)&StringLiteral_17069/*"btn_sort_down"*/;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_36:
    sub_B0D97C(sort);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x21
  struct ListViewSort_o *SvtId; // x0
  const MethodInfo *v20; // x1
  __int64 v21; // x2
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  signed __int64 size; // x24
  int32_t v25; // w25
  unsigned __int64 v26; // x26
  FollowerSelectItemListViewItem_o *v27; // x22
  __int64 v28; // x10
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v29; // x22
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  if ( (byte_4217599 & 1) == 0 )
  {
    sub_B0D8A4(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classPos);
    sub_B0D8A4(&FollowerSelectItemListViewItem_TypeInfo, v5);
    sub_B0D8A4(&FollowerSelectItemListViewManager_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem___ctor___67885840, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_ListViewItem__TypeInfo, v12);
    byte_4217599 = 1;
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
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  p_itemList = &this->fields.itemList;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_45;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v25 = 0;
    v26 = 0LL;
    do
    {
      if ( v26 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v27 = (FollowerSelectItemListViewItem_o *)itemList->fields._items->m_Items[v26];
      if ( !v27 )
        break;
      v28 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (FollowerSelectItemListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != FollowerSelectItemListViewItem_TypeInfo )
      {
        break;
      }
      SvtId = (struct ListViewSort_o *)FollowerSelectItemListViewItem__get_SvtId(v27, v20);
      if ( (int)SvtId >= 1 )
      {
        v27->fields.index = v25;
        if ( !v18 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v18,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v25;
      }
      if ( (__int64)++v26 >= size )
        goto LABEL_32;
      itemList = *p_itemList;
    }
    while ( *p_itemList );
LABEL_45:
    sub_B0D97C(SvtId);
  }
LABEL_32:
  v29 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                          System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                                          v20,
                                                                          v21);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v29,
    (System_Collections_Generic_IEnumerable_T__o *)v18,
    (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_ListViewItem___ctor___67885840);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v29;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
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
  __int64 v11; // x20
  UnityEngine_GameObject_o *refreshButtonObject; // x0
  UnityEngine_Object_o *v13; // x21
  UnityEngine_Object_o *v14; // x21
  UIWidget_o *v15; // x21
  int64_t Time; // x0
  int64_t v17; // x21
  UILabel_o *refreshRemainLabel; // x22
  Il2CppObject *v19; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UIWidget_o *refreshButtonSprite; // x20
  int v22; // s0
  UnityEngine_Object_o *v26; // x20
  UIWidget_o *refreshTitleSprite; // x20
  int v28; // s0
  __int64 v32; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_421759A & 1) == 0 )
  {
    sub_B0D8A4(&FollowerListRequest_TypeInfo, method);
    sub_B0D8A4(&FollowerSelectItemListViewManager_TypeInfo, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, v4);
    sub_B0D8A4(&long_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_23617/*"{0}"*/, v8);
    sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    byte_421759A = 1;
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
                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
      *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_white(0LL);
      if ( !refreshButtonSprite )
        goto LABEL_58;
      UIWidget__set_color(refreshButtonSprite, *(UnityEngine_Color_o *)&v22, 0LL);
    }
    refreshButtonObject = this->fields.refreshTitleObject;
    if ( refreshButtonObject )
    {
      v26 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      refreshButtonObject,
                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      refreshButtonObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
      if ( ((unsigned __int8)refreshButtonObject & 1) != 0 )
      {
        if ( !v26 )
          goto LABEL_58;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v26, 1, 0LL);
      }
      else
      {
        refreshTitleSprite = (UIWidget_o *)this->fields.refreshTitleSprite;
        *(UnityEngine_Color_o *)&v28 = UnityEngine_Color__get_white(0LL);
        if ( !refreshTitleSprite )
          goto LABEL_58;
        UIWidget__set_color(refreshTitleSprite, *(UnityEngine_Color_o *)&v28, 0LL);
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
    sub_B0D97C(refreshButtonObject);
  }
  v11 = RefreshRemain;
  refreshButtonObject = this->fields.refreshButtonObject;
  if ( !refreshButtonObject )
    goto LABEL_58;
  v13 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  refreshButtonObject,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  refreshButtonObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
  if ( ((unsigned __int8)refreshButtonObject & 1) != 0 )
  {
    if ( !v13 )
      goto LABEL_58;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v13, 0, 0LL);
  }
  refreshButtonObject = this->fields.refreshTitleObject;
  if ( !refreshButtonObject )
    goto LABEL_58;
  v14 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  refreshButtonObject,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
  v15 = (UIWidget_o *)this->fields.refreshButtonSprite;
  refreshButtonObject = (UnityEngine_GameObject_o *)FollowerSelectItemListViewManager_TypeInfo;
  if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    refreshButtonObject = (UnityEngine_GameObject_o *)FollowerSelectItemListViewManager_TypeInfo;
  }
  if ( !v15 )
    goto LABEL_58;
  UIWidget__set_color(v15, *(UnityEngine_Color_o *)(*(_QWORD *)&refreshButtonObject[7].fields.m_CachedPtr + 20LL), 0LL);
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
    v17 = Time;
    refreshButtonObject = (UnityEngine_GameObject_o *)this->fields.refreshRemainLabel;
    this->fields.isRefreshClear = 1;
    if ( refreshButtonObject )
    {
      refreshButtonObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)refreshButtonObject, 0LL);
      if ( refreshButtonObject )
      {
        UnityEngine_GameObject__SetActive(refreshButtonObject, 1, 0LL);
        refreshRemainLabel = this->fields.refreshRemainLabel;
        v32 = v11;
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v32);
        refreshButtonObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                            (System_String_o *)StringLiteral_23617/*"{0}"*/,
                                                            v19,
                                                            0LL);
        if ( refreshRemainLabel )
        {
          UILabel__set_text(refreshRemainLabel, (System_String_o *)refreshButtonObject, 0LL);
          this->fields.refreshCheckTime = v17;
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

  if ( (byte_4217572 & 1) == 0 )
  {
    sub_B0D8A4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4217572 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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

  if ( (byte_4217574 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4217574 = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
  FollowerSelectItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_FollowerSelectItemListViewObject__o *__fastcall FollowerSelectItemListViewManager__get_ClippingObjectList(
        FollowerSelectItemListViewManager_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  FollowerSelectItemListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v17; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4217579 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4217579 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (FollowerSelectItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        (UnityEngine_GameObject_o *)current,
                                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B0D97C(0LL);
      Item = (ListViewItem_o *)FollowerSelectItemListViewObject__GetItem(Component_srcLineSprite, v17);
      if ( !Item )
        sub_B0D97C(0LL);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_23719204((ListViewManager_o *)this, Item, 0LL);
        if ( v20 )
        {
          if ( !v12 )
            sub_B0D97C(v20);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v12 )
          sub_B0D97C(Item);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v18,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FollowerSelectItemListViewObject__o *)v12;
}


System_Collections_Generic_List_FollowerSelectItemListViewObject__o *__fastcall FollowerSelectItemListViewManager__get_ObjectList(
        FollowerSelectItemListViewManager_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4217578 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4217578 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      if ( !v12 )
        sub_B0D97C(Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FollowerSelectItemListViewObject__o *)v12;
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

  if ( (byte_4217573 & 1) == 0 )
  {
    sub_B0D8A4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4217573 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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

  if ( (byte_4217575 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4217575 = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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
  sub_B0D840(p_method, object);
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
  if ( (byte_4210F53 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&FollowerSelectItemListViewManager_ResultKind_TypeInfo, v9);
    byte_4210F53 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(FollowerSelectItemListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B0D848(this, v11, callback, object);
}


void __fastcall FollowerSelectItemListViewManager_CallbackFunc__EndInvoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
        sub_B0D960(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B0D8D4(v22) & 1) == 0 )
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
      v24 = sub_B0D8CC(v22);
      v25 = sub_B0DCD0(v22);
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
            v18 = sub_AA67A0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B0D954(v17, v22);
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
            v16 = sub_AA67A0(v21, class_0, v10);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct FollowerSelectItemListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4210F51 & 1) == 0 )
  {
    sub_B0D8A4(&FollowerSelectItemListViewManager___c_TypeInfo, v1);
    byte_4210F51 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(FollowerSelectItemListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = FollowerSelectItemListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FollowerSelectItemListViewManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall FollowerSelectItemListViewManager___c___ctor(
        FollowerSelectItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ListViewSort_o *__fastcall FollowerSelectItemListViewManager___c____cctor_b__124_0(
        FollowerSelectItemListViewManager___c_o *this,
        int32_t questType,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 *v6; // x8
  System_String_o *v7; // x19
  ListViewSort_o *v8; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_NotImplementedException_o *v13; // x19
  __int64 v14; // x0

  if ( (byte_4210F52 & 1) == 0 )
  {
    sub_B0D8A4(&ListViewSort_TypeInfo, *(_QWORD *)&questType);
    sub_B0D8A4(&StringLiteral_6750/*"FollowerSelectEventQuest"*/, v4);
    sub_B0D8A4(&StringLiteral_6751/*"FollowerSelectMainQuest"*/, v5);
    byte_4210F52 = 1;
  }
  if ( questType )
  {
    if ( questType != 1 )
    {
      v10 = sub_B0D8A8(&System_NotImplementedException_TypeInfo);
      v13 = (System_NotImplementedException_o *)sub_B0D974(v10, v11, v12);
      System_NotImplementedException___ctor(v13, 0LL);
      v14 = sub_B0D8A8(&Method_FollowerSelectItemListViewManager___c___cctor_b__124_0__);
      sub_B0D948(v13, v14);
    }
    v6 = &StringLiteral_6750/*"FollowerSelectEventQuest"*/;
  }
  else
  {
    v6 = &StringLiteral_6751/*"FollowerSelectMainQuest"*/;
  }
  v7 = (System_String_o *)*v6;
  v8 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, *(_QWORD *)&questType, method);
  ListViewSort___ctor_32823364(v8, v7, 11, 0, 0LL);
  return v8;
}