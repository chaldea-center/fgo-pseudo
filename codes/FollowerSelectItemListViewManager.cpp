void __fastcall FollowerSelectItemListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  FollowerSelectItemListViewManager___c_c *v6; // x0
  Il2CppObject *v7; // x19
  System_Func_T__TResult__o *v8; // x20
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8

  if ( (byte_49F77DC & 1) == 0 )
  {
    sub_1B640C8(&FollowerSelectItemListViewManager_TypeInfo, v1);
    sub_1B640C8(&System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo, v3);
    sub_1B640C8(&Method_FollowerSelectItemListViewManager___c___cctor_b__133_0__, v4);
    sub_1B640C8(&FollowerSelectItemListViewManager___c_TypeInfo, v5);
    byte_49F77DC = 1;
  }
  v6 = FollowerSelectItemListViewManager___c_TypeInfo;
  if ( !FollowerSelectItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager___c_TypeInfo);
    v6 = FollowerSelectItemListViewManager___c_TypeInfo;
  }
  v7 = (Il2CppObject *)v6->static_fields->__9;
  v8 = (System_Func_T__TResult__o *)sub_1B64314(
                                      System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo,
                                      v1,
                                      v2);
  System_Func_Int32Enum__object____ctor(v8, v7, Method_FollowerSelectItemListViewManager___c___cctor_b__133_0__, 0LL);
  FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT = (struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)v8;
  sub_1B6406C(FollowerSelectItemListViewManager_TypeInfo->static_fields);
  static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->lastSelectedQuestId = -1LL;
  static_fields->REFRESH_DARK_COLOR = (struct UnityEngine_Color_o)xmmword_BA32F0;
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
  Il2CppObject *Component_object; // x19

  if ( (byte_49F77B1 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1B640C8(&StringLiteral_17406/*"btn_bg_12"*/, v4);
    sub_1B640C8(&StringLiteral_17463/*"btn_sefilter_2"*/, v5);
    sub_1B640C8(&StringLiteral_17600/*"buttontxt_formation_19"*/, v6);
    byte_49F77B1 = 1;
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
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(changeSkillButtonSprite, (System_String_o *)StringLiteral_17600/*"buttontxt_formation_19"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.bonusFilterSprite, (System_String_o *)StringLiteral_17463/*"btn_sefilter_2"*/, 0LL);
  changeSkillButton = (UnityEngine_Component_o *)this->fields.bonusFilterSprite;
  if ( !changeSkillButton
    || (changeSkillButton = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))changeSkillButton->klass[2]._1.typeMetadataHandle)(
                                                         changeSkillButton,
                                                         changeSkillButton->klass[2]._1.interopData),
        !sortKindButton)
    || (Component_object = UnityEngine_Component__GetComponent_object_(
                             sortKindButton,
                             (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        changeSkillButton = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(
                                                         (UISprite_o *)Component_object,
                                                         (System_String_o *)StringLiteral_17406/*"btn_bg_12"*/,
                                                         0LL),
        !Component_object) )
  {
LABEL_11:
    sub_1B64324(changeSkillButton);
  }
  ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Component_object->klass->vtable[33].method)(
    Component_object,
    Component_object->klass->vtable[34].methodPtr);
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
    sub_1B64324(classButtonControl);
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

  if ( (byte_49F77CE & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isResult);
    byte_49F77CE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  __int64 v57; // x2
  System_Collections_Generic_List_object__o *v58; // x24
  __int64 v59; // x1
  __int64 v60; // x2
  System_Collections_Generic_List_object__o *v61; // x24
  __int64 v62; // x1
  __int64 v63; // x2
  System_Collections_Generic_List_object__o *v64; // x24
  __int64 ReturnTypeByQuestId; // x0
  FollowerSelectItemListViewManager_c *v66; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct ListViewSort_o **p_sort; // x24
  const MethodInfo *v69; // x4
  int32_t InitialDisplayClass; // w25
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
  System_Int32_array *OngoingQuestTargetEventIds; // x25
  __int64 v73; // x1
  __int64 v74; // x2
  EventUpValSetupInfo_o *v75; // x26
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x8
  __int64 v80; // x26
  unsigned __int64 v81; // x20
  int32_t v82; // w0
  ClassButtonControlComponent_o *classButtonControl; // x24
  __int64 v84; // x1
  __int64 v85; // x2
  ClassButtonControlComponent_CallbackFunc_o *v86; // x26
  ClassButtonControlComponent_o *v87; // x24
  const MethodInfo *v88; // x2
  QuestPhaseEntity_o *v89; // x29
  __int64 v90; // x0
  __int64 v91; // x0
  Il2CppObject *MasterData_object; // x23
  FollowerInfo_array *QuestFollowerList; // x27
  int v94; // w20
  QuestRestrictionInfo_o *v95; // x19
  bool IsMyServantOrNpcRestriction_40118712; // w26
  BalanceConfig_c *v97; // x0
  int32_t ClassBoardReleaseQuestId; // w24
  bool IsQuestClear_37285996; // w24
  __int64 v100; // x8
  FollowerSelectItemListViewManager_o *v101; // x19
  QuestRestrictionInfo_o *v102; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v103; // x28
  unsigned __int64 v104; // x21
  FollowerInfo_o *v105; // x24
  __int64 v106; // x25
  int32_t v107; // w0
  System_Int32_array *NpcServantIndividuality; // x0
  __int64 v109; // x1
  __int64 v110; // x2
  bool IsRecommendedFollower; // w19
  __int64 v112; // x26
  __int64 v113; // x28
  int32_t v114; // w0
  System_Collections_Generic_List_object__o *v115; // x25
  char v116; // w20
  ClassBoardClassMaster_o *v117; // x27
  QuestPhaseEntity_o *v118; // x19
  int32_t v119; // w0
  ServantLeaderInfo_o *ServantLeaderInfo; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v121; // x28
  __int64 v122; // x26
  __int64 v123; // x29
  int32_t ClassBoardBaseId; // w26
  Il2CppObject *Master_object; // x28
  __int64 v126; // x1
  __int64 v127; // x2
  ClassBoardInfo_o *v128; // x20
  QuestPhaseEntity_o *v129; // x23
  int32_t v130; // w29
  Il2CppObject *v131; // x26
  struct System_Object_array *items; // x8
  _QWORD *v133; // x9
  __int64 size; // x10
  Il2CppClass **v135; // x0
  __int64 v136; // x1
  __int64 v137; // x2
  FollowerSelectItemListViewManager_c *v138; // x0
  int32_t v139; // w28
  EventUpValSetupInfo_o *setupInfo; // x22
  struct System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x20
  bool isServantEquipBonusFilterEnable; // w23
  bool isServantBonusFilterEnable; // w26
  bool isBonusFilterEnable; // w27
  FollowerSelectItemListViewItem_o *v145; // x25
  __int64 v146; // x8
  _QWORD *v147; // x9
  __int64 v148; // x10
  __int64 v149; // x8
  __int64 v150; // x8
  _QWORD *v151; // x9
  __int64 v152; // x10
  __int64 v153; // x8
  __int64 v154; // x8
  _QWORD *v155; // x9
  __int64 v156; // x10
  __int64 v157; // x8
  int v158; // w20
  bool v159; // w8
  FollowerSelectItemListViewManager_o *v160; // x20
  Il2CppClass *klass; // x23
  int namespaze; // w8
  Il2CppObject *v163; // x24
  void **v164; // x8
  Il2CppObject *v165; // x0
  Il2CppObject *v166; // x25
  __int64 v167; // x27
  BalanceConfig_c *v168; // x0
  struct BalanceConfig_StaticFields *v169; // x9
  int32_t FixEventSupportDeckNum; // w25
  int32_t FixMainSupportDeckNum; // w26
  int32_t deckPriority; // w28
  unsigned __int64 v173; // x21
  System_Collections_Generic_Dictionary_int__int__o *v174; // x25
  int32_t v175; // w22
  bool v176; // w29
  bool v177; // w27
  FollowerSelectItemListViewItem_o *v178; // x26
  __int64 v179; // x8
  _QWORD *v180; // x9
  __int64 v181; // x10
  __int64 v182; // x8
  struct BalanceConfig_StaticFields *v183; // x8
  int32_t v184; // w26
  int32_t v185; // w28
  int32_t v186; // w26
  unsigned __int64 v187; // x22
  int32_t v188; // w21
  Il2CppClass *v189; // x21
  EventUpValSetupInfo_o *v190; // x23
  bool v191; // w24
  System_Collections_Generic_Dictionary_int__int__o *v192; // x19
  int v193; // w27
  bool v194; // w25
  bool v195; // w29
  FollowerSelectItemListViewItem_o *v196; // x28
  __int64 v197; // x8
  _QWORD *v198; // x9
  __int64 v199; // x10
  __int64 v200; // x8
  Il2CppClass *v201; // x26
  unsigned __int64 namespaze_low; // x8
  unsigned __int64 v203; // x27
  __int64 v204; // x9
  __int64 v205; // x9
  void **v206; // x8
  FollowerInfo_o *v207; // x8
  Il2CppObject *v208; // x0
  __int64 v209; // x21
  BalanceConfig_c *v210; // x0
  struct BalanceConfig_StaticFields *v211; // x9
  int32_t v212; // w24
  int32_t v213; // w25
  int32_t v214; // w25
  unsigned __int64 v215; // x22
  System_Collections_Generic_Dictionary_int__int__o *v216; // x23
  int32_t v217; // w29
  bool v218; // w21
  bool v219; // w28
  bool v220; // w19
  FollowerSelectItemListViewItem_o *v221; // x24
  __int64 v222; // x8
  _QWORD *v223; // x9
  __int64 v224; // x10
  __int64 v225; // x8
  struct BalanceConfig_StaticFields *v226; // x8
  int32_t v227; // w24
  int32_t v228; // w25
  int32_t v229; // w25
  unsigned __int64 v230; // x23
  int32_t v231; // w22
  EventUpValSetupInfo_o *v232; // x19
  int32_t v233; // w21
  bool v234; // w26
  System_Collections_Generic_Dictionary_int__int__o *v235; // x27
  int v236; // w22
  bool v237; // w29
  bool v238; // w24
  FollowerSelectItemListViewItem_o *v239; // x28
  __int64 v240; // x8
  _QWORD *v241; // x9
  __int64 v242; // x10
  __int64 v243; // x8
  Il2CppClass *v244; // x19
  unsigned __int64 v245; // x8
  unsigned __int64 v246; // x22
  Il2CppType *p_byval_arg; // x20
  __int64 v248; // x9
  __int64 v249; // x9
  __int64 v250; // x26
  __int64 v251; // x8
  __int64 v252; // x8
  __int64 v253; // x8
  __int64 v254; // x27
  __int64 v255; // x28
  FollowerInfo_o *v256; // x27
  int32_t v257; // w21
  bool v258; // w19
  bool v259; // w28
  bool v260; // w25
  EventUpValSetupInfo_o *v261; // x29
  System_Collections_Generic_Dictionary_int__int__o *v262; // x24
  FollowerSelectItemListViewItem_o *v263; // x26
  __int64 v264; // x8
  _QWORD *v265; // x9
  __int64 v266; // x10
  __int64 v267; // x8
  const MethodInfo *v268; // x2
  FollowerSelectItemListViewManager_c *v269; // x0
  const MethodInfo *v270; // x2
  const MethodInfo *v271; // x1
  struct UIScrollView_o *scrollView; // x8
  __int64 v273; // x0
  int32_t supportDeckId; // [xsp+38h] [xbp-178h]
  int32_t supportDeckIda; // [xsp+38h] [xbp-178h]
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary; // [xsp+48h] [xbp-168h]
  UserFollowMaster_o *v277; // [xsp+70h] [xbp-140h]
  bool HasFlag_39149148; // [xsp+78h] [xbp-138h]
  unsigned int v279; // [xsp+7Ch] [xbp-134h]
  struct System_Collections_Generic_List_ListViewItem__o **p_recommendItemList; // [xsp+80h] [xbp-130h]
  bool v283; // [xsp+90h] [xbp-120h]
  __int64 v284; // [xsp+90h] [xbp-120h]
  int v285; // [xsp+90h] [xbp-120h]
  Il2CppObject *v286; // [xsp+98h] [xbp-118h]
  __int64 v287; // [xsp+98h] [xbp-118h]
  __int64 v288; // [xsp+98h] [xbp-118h]
  struct System_Collections_Generic_List_ListViewItem__o **p_originalItemList; // [xsp+A0h] [xbp-110h]
  FollowerInfo_array *v290; // [xsp+A8h] [xbp-108h]
  int v291; // [xsp+A8h] [xbp-108h]
  Il2CppClass *v292; // [xsp+A8h] [xbp-108h]
  bool isReleasedClassBoard; // [xsp+B0h] [xbp-100h]
  bool v294; // [xsp+B0h] [xbp-100h]
  __int64 v295; // [xsp+B0h] [xbp-100h]
  unsigned __int64 v296; // [xsp+B0h] [xbp-100h]
  EventUpValSetupInfo_o *v297; // [xsp+B8h] [xbp-F8h]
  EventUpValSetupInfo_o *v298; // [xsp+B8h] [xbp-F8h]
  EventUpValSetupInfo_o *v299; // [xsp+B8h] [xbp-F8h]
  bool v300; // [xsp+C0h] [xbp-F0h]
  __int64 v301; // [xsp+C0h] [xbp-F0h]
  __int64 v302; // [xsp+C0h] [xbp-F0h]
  int32_t pos; // [xsp+C8h] [xbp-E8h]
  FollowerInfo_o **posa; // [xsp+C8h] [xbp-E8h]
  FollowerInfo_o **posb; // [xsp+C8h] [xbp-E8h]
  _BOOL4 followerClassId; // [xsp+D0h] [xbp-E0h]
  EventUpValSetupInfo_o *followerClassIdc; // [xsp+D0h] [xbp-E0h]
  int32_t followerClassIda; // [xsp+D0h] [xbp-E0h]
  __int64 followerClassIdb; // [xsp+D0h] [xbp-E0h]
  struct System_Collections_Generic_List_ListViewItem__o **p_mixItemList; // [xsp+D8h] [xbp-D8h]
  UserFollowMaster_o *v311; // [xsp+D8h] [xbp-D8h]
  int32_t index; // [xsp+F8h] [xbp-B8h]
  FollowerInfo_o *indexc; // [xsp+F8h] [xbp-B8h]
  FollowerInfo_o *indexd; // [xsp+F8h] [xbp-B8h]
  FollowerInfo_o *indexe; // [xsp+F8h] [xbp-B8h]
  int32_t indexa; // [xsp+F8h] [xbp-B8h]
  Il2CppClass *indexb; // [xsp+F8h] [xbp-B8h]
  FollowerInfo_o **m_Items; // [xsp+100h] [xbp-B0h]
  int32_t v323; // [xsp+100h] [xbp-B0h]
  int32_t v324; // [xsp+100h] [xbp-B0h]
  int32_t v325; // [xsp+100h] [xbp-B0h]
  FollowerInfo_o *v326; // [xsp+100h] [xbp-B0h]
  bool v327; // [xsp+100h] [xbp-B0h]
  Il2CppObject *v329; // [xsp+110h] [xbp-A0h] BYREF
  Il2CppObject *v330; // [xsp+118h] [xbp-98h] BYREF
  Il2CppObject *v331; // [xsp+120h] [xbp-90h] BYREF
  UserClassBoardSquareEntity_o *v332; // [xsp+128h] [xbp-88h] BYREF
  Il2CppObject *v333; // [xsp+130h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+138h] [xbp-78h] BYREF
  Il2CppObject *v335; // [xsp+140h] [xbp-70h] BYREF
  NpcFollowerEntity_o *v336; // [xsp+148h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v337; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v338; // 0:x0.16

  if ( (byte_49F77B3 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&questId);
    sub_1B640C8(&ClassButtonControlComponent_CallbackFunc_TypeInfo, v8);
    sub_1B640C8(&ClassBoardInfo_TypeInfo, v9);
    sub_1B640C8(&ClassButtonControlComponent_TypeInfo, v10);
    sub_1B640C8(&CondType_TypeInfo, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, v14);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v15);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserFollowMaster___, v16);
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v17);
    sub_1B640C8(&Method_DataManager_GetMaster_EventQuestMaster___, v18);
    sub_1B640C8(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v19);
    sub_1B640C8(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, v20);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v21);
    sub_1B640C8(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, v22);
    sub_1B640C8(&Method_DataManager_GetMaster_UserFollowerMaster___, v23);
    sub_1B640C8(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___, v24);
    sub_1B640C8(&DataManager_TypeInfo, v25);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v26);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27);
    sub_1B640C8(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v28);
    sub_1B640C8(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v29);
    sub_1B640C8(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v30);
    sub_1B640C8(
      &Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__,
      v31);
    sub_1B640C8(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v32);
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, v33);
    sub_1B640C8(&EventUpValSetupInfo_TypeInfo, v34);
    sub_1B640C8(&FollowerSelectItemListViewItem_TypeInfo, v35);
    sub_1B640C8(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v36);
    sub_1B640C8(&FollowerSelectItemListViewManager_TypeInfo, v37);
    sub_1B640C8(&int___TypeInfo, v38);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v39);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardInfo__Add__, v40);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__, v41);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardInfo___ctor__, v42);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v43);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v44);
    sub_1B640C8(&System_Collections_Generic_List_ListViewItem__TypeInfo, v45);
    sub_1B640C8(&System_Collections_Generic_List_ClassBoardInfo__TypeInfo, v46);
    sub_1B640C8(&System_Math_TypeInfo, v47);
    sub_1B640C8(&NetworkManager_TypeInfo, v48);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v49);
    sub_1B640C8(&ServantLeaderInfo___TypeInfo, v50);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v51);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v52);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v53);
    sub_1B640C8(&StringLiteral_3289/*"BonusFilterEventId"*/, v54);
    sub_1B640C8(&StringLiteral_1/*""*/, v55);
    byte_49F77B3 = 1;
  }
  v335 = 0LL;
  v336 = 0LL;
  v333 = 0LL;
  entity = 0LL;
  v331 = 0LL;
  v332 = 0LL;
  v329 = 0LL;
  v330 = 0LL;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B6406C(&this->fields.questRestrictionInfo);
  v58 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                       v56,
                                                       v57);
  System_Collections_Generic_List_object____ctor(
    v58,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.mixItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v58;
  p_mixItemList = &this->fields.mixItemList;
  sub_1B6406C(&this->fields.mixItemList);
  v61 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                       v59,
                                                       v60);
  System_Collections_Generic_List_object____ctor(
    v61,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.originalItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v61;
  p_originalItemList = &this->fields.originalItemList;
  sub_1B6406C(&this->fields.originalItemList);
  v64 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                       v62,
                                                       v63);
  System_Collections_Generic_List_object____ctor(
    v64,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.recommendItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v64;
  p_recommendItemList = &this->fields.recommendItemList;
  sub_1B6406C(&this->fields.recommendItemList);
  ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0LL);
  v66 = FollowerSelectItemListViewManager_TypeInfo;
  v279 = ReturnTypeByQuestId;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    ReturnTypeByQuestId = j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v66 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v66->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT )
    goto LABEL_352;
  this->fields.sort = (struct ListViewSort_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))LIST_VIEW_SORT->fields.m_target)(
                                                 LIST_VIEW_SORT->fields.original_method_info,
                                                 v279,
                                                 *(_QWORD *)&LIST_VIEW_SORT->fields.extra_arg);
  p_sort = &this->fields.sort;
  ReturnTypeByQuestId = sub_1B6406C(&this->fields.sort);
  if ( !this->fields.sort )
    goto LABEL_352;
  InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                          this,
                          questId,
                          questPhase,
                          this->fields.sort->fields.isRequestLoad,
                          v69);
  static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  static_fields->followerClassId = InitialDisplayClass;
  static_fields->lastSelectedQuestId = questId;
  static_fields->lastSelectedQuestPhase = questPhase;
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(InitialDisplayClass, 0LL) )
    this->fields.isGetRecommendSupport = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_352;
  OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                 (EventQuestMaster_o *)ReturnTypeByQuestId,
                                 questId,
                                 questPhase,
                                 0LL,
                                 0LL);
  v75 = (EventUpValSetupInfo_o *)sub_1B64314(EventUpValSetupInfo_TypeInfo, v73, v74);
  EventUpValSetupInfo___ctor_38592760(v75, OngoingQuestTargetEventIds, 0, questId, questPhase, 0LL);
  this->fields.setupInfo = v75;
  ReturnTypeByQuestId = sub_1B6406C(&this->fields.setupInfo);
  if ( !OngoingQuestTargetEventIds )
    goto LABEL_352;
  if ( *(_QWORD *)&OngoingQuestTargetEventIds->max_length )
  {
    ReturnTypeByQuestId = (__int64)UnityEngine_PlayerPrefs__GetString_69086012(
                                     (System_String_o *)StringLiteral_3289/*"BonusFilterEventId"*/,
                                     0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_352;
    if ( *(int *)(ReturnTypeByQuestId + 16) < 1 )
      goto LABEL_24;
    ReturnTypeByQuestId = (__int64)System_String__Split((System_String_o *)ReturnTypeByQuestId, 0x2Cu, 0, 0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_352;
    v79 = *(_QWORD *)(ReturnTypeByQuestId + 24);
    v80 = ReturnTypeByQuestId;
    if ( (int)v79 < 1 )
    {
LABEL_24:
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_352;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 18, 0, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_352;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 19, 0, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_352;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 20, 0, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_352;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 40, 1, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_352;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 41, 1, 0LL);
    }
    else
    {
      v81 = 0LL;
      while ( 1 )
      {
        if ( v81 >= (unsigned int)v79 )
          goto LABEL_353;
        v82 = System_Int32__Parse(*(System_String_o **)(v80 + 32 + 8 * v81), 0LL);
        ReturnTypeByQuestId = System_Linq_Enumerable__Contains_int_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)OngoingQuestTargetEventIds,
                                v82,
                                (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (ReturnTypeByQuestId & 1) != 0 )
          break;
        LODWORD(v79) = *(_DWORD *)(v80 + 24);
        if ( (__int64)++v81 >= (int)v79 )
          goto LABEL_24;
      }
    }
  }
  ReturnTypeByQuestId = (__int64)*p_sort;
  if ( !*p_sort )
    goto LABEL_352;
  ListViewSort__Load((ListViewSort_o *)ReturnTypeByQuestId, 0LL);
  classButtonControl = this->fields.classButtonControl;
  v86 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1B64314(
                                                        ClassButtonControlComponent_CallbackFunc_TypeInfo,
                                                        v84,
                                                        v85);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v86,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_352;
  ClassButtonControlComponent__init(classButtonControl, v86, questId, questPhase, 0, 0LL);
  this->fields.isInput = 0;
  ReturnTypeByQuestId = (__int64)FollowerSelectItemListViewManager_TypeInfo;
  v87 = this->fields.classButtonControl;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    ReturnTypeByQuestId = j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  if ( !v87 )
    goto LABEL_352;
  ClassButtonControlComponent__setCursor(
    v87,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, OngoingQuestTargetEventIds, v88);
  ReturnTypeByQuestId = (__int64)this->fields.bonusFilterKindButton;
  if ( !ReturnTypeByQuestId )
    goto LABEL_352;
  ReturnTypeByQuestId = (__int64)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)ReturnTypeByQuestId,
                                   0LL);
  if ( !ReturnTypeByQuestId )
    goto LABEL_352;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)ReturnTypeByQuestId,
    this->fields.isBonusFilterEnable,
    0LL);
  if ( this->fields.isBonusFilterEnable )
  {
    ReturnTypeByQuestId = (__int64)this->fields.bonusFilterKindLabel;
    if ( !ReturnTypeByQuestId )
      goto LABEL_352;
    UILabel__set_text((UILabel_o *)ReturnTypeByQuestId, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  this->fields.isRefreshBtnHide = 0;
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId
    || (ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0 )
  {
LABEL_352:
    sub_1B64324(ReturnTypeByQuestId);
  }
  v89 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)ReturnTypeByQuestId, questId, questPhase, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v89 )
    goto LABEL_347;
  v90 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v90 + 309) & 1) == 0 )
    v90 = sub_1BB5FA4();
  v91 = *(_QWORD *)(*(_QWORD *)(v90 + 192) + 16LL);
  if ( (*(_BYTE *)(v91 + 309) & 1) == 0 )
    v91 = sub_1BB5FA4();
  ReturnTypeByQuestId = **(_QWORD **)(v91 + 184);
  if ( !ReturnTypeByQuestId )
    goto LABEL_352;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ReturnTypeByQuestId,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_352;
  ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_352;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)ReturnTypeByQuestId,
                        questId,
                        questPhase,
                        0LL);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_352;
  v94 = *(_DWORD *)(ReturnTypeByQuestId + 48);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_352;
  pos = *(_DWORD *)(ReturnTypeByQuestId + 52);
  if ( v94 < 1 )
  {
    v95 = questRestrictionInfo;
    IsMyServantOrNpcRestriction_40118712 = 0;
    goto LABEL_56;
  }
  v95 = questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    IsMyServantOrNpcRestriction_40118712 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40118712(
                                             questRestrictionInfo,
                                             pos,
                                             0LL);
LABEL_56:
    followerClassId = 0;
    if ( v95 && v94 <= 0 )
      followerClassId = QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL);
    goto LABEL_60;
  }
  IsMyServantOrNpcRestriction_40118712 = 0;
  followerClassId = 0;
LABEL_60:
  v97 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v97 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v97->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_37285996 = CondType__IsQuestClear_37285996(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  if ( !QuestFollowerList )
    goto LABEL_352;
  v100 = *(_QWORD *)&QuestFollowerList->max_length;
  v101 = this;
  v102 = questRestrictionInfo;
  if ( (int)v100 >= 1 )
  {
    v103 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
    v104 = 0LL;
    m_Items = QuestFollowerList->m_Items;
    index = 0;
    isReleasedClassBoard = IsQuestClear_37285996;
    v286 = MasterData_object;
    v290 = QuestFollowerList;
    v300 = IsMyServantOrNpcRestriction_40118712;
    v297 = (EventUpValSetupInfo_o *)ReturnTypeByQuestId;
    do
    {
      if ( v104 >= (unsigned int)v100 )
        goto LABEL_353;
      v105 = m_Items[v104];
      if ( IsMyServantOrNpcRestriction_40118712 )
      {
        if ( !v102 )
          goto LABEL_352;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v102->fields.questId, 0LL);
        if ( !v105 )
          goto LABEL_352;
        ReturnTypeByQuestId = (__int64)FollowerInfo__getServantLeaderInfo(v105, 0, ReturnTypeByQuestId, 0LL);
        if ( ReturnTypeByQuestId )
        {
          v106 = ReturnTypeByQuestId;
          ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !ReturnTypeByQuestId )
            goto LABEL_352;
          ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                           (DataManager_o *)ReturnTypeByQuestId,
                                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
          if ( !ReturnTypeByQuestId )
            goto LABEL_352;
          ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                  &entity,
                                  v105->fields.npcFollowerSvtId,
                                  (const MethodInfo_30D40A4 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
          if ( (ReturnTypeByQuestId & 1) != 0 )
          {
            v107 = FollowerInfo__GetReturnTypeByQuestId(v102->fields.questId, 0LL);
            NpcServantIndividuality = FollowerInfo__GetNpcServantIndividuality(v105, 0, v107, 0LL);
            goto LABEL_78;
          }
          if ( !v103 )
            goto LABEL_352;
          if ( DataMasterBase_object__object__long___TryGetEntity(
                 v103,
                 &v333,
                 v105->fields.npcFollowerSvtId,
                 (const MethodInfo_30D40A4 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
          {
            ReturnTypeByQuestId = (__int64)v333;
            if ( !v333 )
              goto LABEL_352;
            if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v333, 0LL) )
            {
              ReturnTypeByQuestId = (__int64)v333;
              if ( !v333 )
                goto LABEL_352;
              NpcServantIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                          (NpcServantFollowerEntity_o *)v333,
                                          0LL);
LABEL_78:
              ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality_40121688(
                                      v102,
                                      NpcServantIndividuality,
                                      pos,
                                      0LL);
              if ( (ReturnTypeByQuestId & 1) != 0 )
                goto LABEL_148;
              goto LABEL_81;
            }
          }
          v113 = *(_QWORD *)(v106 + 48);
          v112 = *(_QWORD *)(v106 + 56);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v337.fields.currentCryptoKey = v113;
          *(_QWORD *)&v337.fields.fakeValue = v112;
          v114 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v337, 0LL);
          ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                  v102,
                                  v114,
                                  *(_DWORD *)(v106 + 64),
                                  *(_DWORD *)(v106 + 164),
                                  pos,
                                  0,
                                  0LL);
          IsMyServantOrNpcRestriction_40118712 = v300;
          v103 = (DataMasterBase_TMaster__TEntity__PKType__o *)v297;
          if ( (ReturnTypeByQuestId & 1) != 0 )
            goto LABEL_148;
        }
      }
      else if ( !v105 )
      {
        goto LABEL_352;
      }
LABEL_81:
      if ( !v105->fields.isFixedNpc && (!followerClassId || !v105->fields.isMySvtOrNpc) )
      {
        if ( !MasterData_object )
          goto LABEL_352;
        if ( NpcFollowerMaster__TryGetEntity(
               (NpcFollowerMaster_o *)MasterData_object,
               &v336,
               v105->fields.userId,
               questId,
               questPhase,
               0LL) )
        {
          ReturnTypeByQuestId = (__int64)v336;
          if ( !v336 )
            goto LABEL_352;
          IsRecommendedFollower = NpcFollowerEntity__IsRecommendedFollower(v336, 0LL);
        }
        else
        {
          IsRecommendedFollower = 0;
        }
        v115 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                              System_Collections_Generic_List_ClassBoardInfo__TypeInfo,
                                                              v109,
                                                              v110);
        System_Collections_Generic_List_object____ctor(
          v115,
          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
        if ( !v103 )
          goto LABEL_352;
        ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetEntity(
                                v103,
                                &v335,
                                v105->fields.npcFollowerSvtId,
                                (const MethodInfo_30D40A4 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
        if ( (ReturnTypeByQuestId & 1) != 0 )
        {
          if ( !v335 )
            goto LABEL_352;
          ReturnTypeByQuestId = NpcServantFollowerEntity__IsNotClassBoard((int32_t)v335[7].monitor, 0LL);
          if ( (ReturnTypeByQuestId & 1) != 0
            || (ReturnTypeByQuestId = QuestPhaseEntity__IsNotClassBoard(v89, 0LL), (ReturnTypeByQuestId & 1) != 0) )
          {
            v116 = 1;
LABEL_126:
            if ( !v115 )
              goto LABEL_352;
LABEL_127:
            v105->fields.userClassBoardInfo = (struct ClassBoardInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                                               v115,
                                                                               (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
            sub_1B6406C(&v105->fields.userClassBoardInfo);
            v138 = FollowerSelectItemListViewManager_TypeInfo;
            if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
              v138 = FollowerSelectItemListViewManager_TypeInfo;
            }
            v139 = v138->static_fields->followerClassId;
            setupInfo = this->fields.setupInfo;
            if ( (v116 & 1) != 0 )
              classBoardMaxDictionary = 0LL;
            else
              classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
            isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
            isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
            isBonusFilterEnable = this->fields.isBonusFilterEnable;
            classBoardMaxNumDictionary = classBoardMaxDictionary;
            v102 = questRestrictionInfo;
            v145 = (FollowerSelectItemListViewItem_o *)sub_1B64314(FollowerSelectItemListViewItem_TypeInfo, v136, v137);
            FollowerSelectItemListViewItem___ctor(
              v145,
              index,
              0,
              v105,
              v139,
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
              goto LABEL_352;
            v146 = *(_QWORD *)(ReturnTypeByQuestId + 16);
            v101 = this;
            QuestFollowerList = v290;
            IsMyServantOrNpcRestriction_40118712 = v300;
            v147 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            v103 = (DataMasterBase_TMaster__TEntity__PKType__o *)v297;
            ++*(_DWORD *)(ReturnTypeByQuestId + 28);
            if ( !v146 )
              goto LABEL_352;
            v148 = *(int *)(ReturnTypeByQuestId + 24);
            MasterData_object = v286;
            if ( (unsigned int)v148 >= *(_DWORD *)(v146 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                (Il2CppObject *)v145,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v147[4] + 192LL) + 112LL));
            }
            else
            {
              v149 = v146 + 8 * v148;
              *(_DWORD *)(ReturnTypeByQuestId + 24) = v148 + 1;
              *(_QWORD *)(v149 + 32) = v145;
              sub_1B6406C(v149 + 32);
            }
            ReturnTypeByQuestId = (__int64)*p_originalItemList;
            if ( !*p_originalItemList )
              goto LABEL_352;
            v150 = *(_QWORD *)(ReturnTypeByQuestId + 16);
            v151 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++*(_DWORD *)(ReturnTypeByQuestId + 28);
            if ( !v150 )
              goto LABEL_352;
            v152 = *(int *)(ReturnTypeByQuestId + 24);
            if ( (unsigned int)v152 >= *(_DWORD *)(v150 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                (Il2CppObject *)v145,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v151[4] + 192LL) + 112LL));
            }
            else
            {
              v153 = v150 + 8 * v152;
              *(_DWORD *)(ReturnTypeByQuestId + 24) = v152 + 1;
              *(_QWORD *)(v153 + 32) = v145;
              sub_1B6406C(v153 + 32);
            }
            ReturnTypeByQuestId = (__int64)*p_recommendItemList;
            if ( !*p_recommendItemList )
              goto LABEL_352;
            v154 = *(_QWORD *)(ReturnTypeByQuestId + 16);
            v155 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++*(_DWORD *)(ReturnTypeByQuestId + 28);
            if ( !v154 )
              goto LABEL_352;
            v156 = *(int *)(ReturnTypeByQuestId + 24);
            if ( (unsigned int)v156 >= *(_DWORD *)(v154 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                (Il2CppObject *)v145,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v155[4] + 192LL) + 112LL));
            }
            else
            {
              v157 = v154 + 8 * v156;
              *(_DWORD *)(ReturnTypeByQuestId + 24) = v156 + 1;
              *(_QWORD *)(v157 + 32) = v145;
              ReturnTypeByQuestId = sub_1B6406C(v157 + 32);
            }
            ++index;
            goto LABEL_148;
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v283 = IsRecommendedFollower;
          ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
          if ( !v102 )
            goto LABEL_352;
          v117 = (ClassBoardClassMaster_o *)ReturnTypeByQuestId;
          v118 = v89;
          v119 = FollowerInfo__GetReturnTypeByQuestId(v102->fields.questId, 0LL);
          ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v105, 0, v119, 0LL);
          ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
          if ( !ServantLeaderInfo )
            goto LABEL_352;
          v121 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
          v123 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
          v122 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v338.fields.currentCryptoKey = v123;
          *(_QWORD *)&v338.fields.fakeValue = v122;
          ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v338, 0LL);
          if ( !v121 )
            goto LABEL_352;
          ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                           v121,
                                           ReturnTypeByQuestId,
                                           (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !ReturnTypeByQuestId )
            goto LABEL_352;
          v89 = v118;
          IsRecommendedFollower = v283;
          if ( !v117 )
            goto LABEL_352;
          ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(
                               v117,
                               *(_DWORD *)(ReturnTypeByQuestId + 80),
                               0LL);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          ReturnTypeByQuestId = NetworkManager__get_UserId(0LL);
          if ( !Master_object )
            goto LABEL_352;
          ReturnTypeByQuestId = UserClassBoardSquareMaster__TryGetEntity(
                                  (UserClassBoardSquareMaster_o *)Master_object,
                                  &v332,
                                  ReturnTypeByQuestId,
                                  ClassBoardBaseId,
                                  0LL);
          if ( (ReturnTypeByQuestId & 1) != 0 )
          {
            v128 = (ClassBoardInfo_o *)sub_1B64314(ClassBoardInfo_TypeInfo, v126, v127);
            ClassBoardInfo___ctor(v128, 0LL);
            if ( !v128 )
              goto LABEL_352;
            v128->fields.classBoardBaseId = ClassBoardBaseId;
            if ( !v332 )
              goto LABEL_352;
            ReturnTypeByQuestId = (__int64)v332->fields.classBoardSquareIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_352;
            v129 = v89;
            v130 = ClassBoardBaseId;
            v131 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
            v128->fields.squareIds = (struct System_Int32_array *)sub_1B64204(v131, int___TypeInfo);
            sub_1B64204(v131, int___TypeInfo);
            sub_1B6406C(&v128->fields.squareIds);
            v128->fields.releasedClassIds = ClassBoardClassMaster__GetOpenClassIdArrayFromBaseId(v117, v130, 0LL);
            ReturnTypeByQuestId = sub_1B6406C(&v128->fields.releasedClassIds);
            if ( !v115 )
              goto LABEL_352;
            items = v115->fields._items;
            IsRecommendedFollower = v283;
            v133 = Method_System_Collections_Generic_List_ClassBoardInfo__Add__;
            ++v115->fields._version;
            if ( !items )
              goto LABEL_352;
            size = v115->fields._size;
            v89 = v129;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v115,
                (Il2CppObject *)v128,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
            }
            else
            {
              v135 = &items->obj.klass + size;
              v115->fields._size = size + 1;
              v135[4] = (Il2CppClass *)v128;
              sub_1B6406C(v135 + 4);
            }
            v116 = 0;
            goto LABEL_127;
          }
        }
        v116 = 0;
        goto LABEL_126;
      }
LABEL_148:
      LODWORD(v100) = QuestFollowerList->max_length;
      ++v104;
    }
    while ( (__int64)v104 < (int)v100 );
  }
  if ( v102 && QuestRestrictionInfo__IsMyServantOrNpcRestriction(v102, 0LL) )
  {
    ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_352;
    v158 = *(_DWORD *)(ReturnTypeByQuestId + 48);
    ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_352;
    v159 = v158 >= 1
        && !QuestRestrictionInfo__IsSelectableNormalSupport(
              questRestrictionInfo,
              *(_DWORD *)(ReturnTypeByQuestId + 52),
              0LL);
    v101 = this;
  }
  else
  {
    v159 = 0;
  }
  v101->fields.isRefreshBtnHide = v159;
  if ( !v159 && !v89->fields.isNpcOnly )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_352;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v331,
                            (const MethodInfo_30D412C *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    v160 = this;
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v331 )
        goto LABEL_352;
      klass = v331[1].klass;
      if ( klass )
      {
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
        {
          v163 = 0LL;
          do
          {
            if ( (unsigned int)v163 >= namespaze )
              goto LABEL_353;
            v164 = &klass->_1.image + (int)v163;
            ReturnTypeByQuestId = (__int64)v164[4];
            posa = (FollowerInfo_o **)(v164 + 4);
            if ( !ReturnTypeByQuestId )
              goto LABEL_352;
            FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0LL);
            if ( (unsigned int)v163 >= LODWORD(klass->_1.namespaze) )
              goto LABEL_353;
            if ( !*posa )
              goto LABEL_352;
            ReturnTypeByQuestId = (__int64)(*posa)->fields.mainSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_352;
            v287 = *(_QWORD *)(ReturnTypeByQuestId + 24);
            v165 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
            if ( v165 )
            {
              v166 = v165;
              v167 = sub_1B64204(v165, int___TypeInfo);
              if ( !v167 )
              {
                sub_1B645E4(v166);
LABEL_354:
                sub_1B645E4(v163);
LABEL_355:
                v273 = sub_1B64348();
                sub_1B641F0(v273, 0LL);
              }
            }
            else
            {
              v167 = 0LL;
            }
            v168 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v168 = BalanceConfig_TypeInfo;
            }
            v169 = v168->static_fields;
            FixMainSupportDeckNum = v169->FixMainSupportDeckNum;
            FixEventSupportDeckNum = v169->FixEventSupportDeckNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            ReturnTypeByQuestId = System_Math__Max_62194036(FixMainSupportDeckNum, FixEventSupportDeckNum, 0LL);
            v301 = v167;
            if ( (int)v287 >= 1 )
            {
              deckPriority = ReturnTypeByQuestId;
              v173 = 0LL;
              v284 = v167 + 32;
              do
              {
                if ( !*p_originalItemList )
                  goto LABEL_352;
                if ( (unsigned int)v163 >= LODWORD(klass->_1.namespaze) )
                  goto LABEL_353;
                if ( !v167 )
                  goto LABEL_352;
                if ( v173 >= *(unsigned int *)(v167 + 24) )
                  goto LABEL_353;
                v323 = (*p_originalItemList)->fields._size;
                followerClassIdc = v160->fields.setupInfo;
                v174 = v160->fields.classBoardMaxDictionary;
                v175 = *(_DWORD *)(v284 + 4 * v173);
                indexc = *posa;
                v176 = v160->fields.isServantEquipBonusFilterEnable;
                v177 = v160->fields.isServantBonusFilterEnable;
                v294 = v160->fields.isBonusFilterEnable;
                v178 = (FollowerSelectItemListViewItem_o *)sub_1B64314(
                                                             FollowerSelectItemListViewItem_TypeInfo,
                                                             v76,
                                                             v77);
                FollowerSelectItemListViewItem___ctor(
                  v178,
                  v323,
                  0,
                  indexc,
                  0,
                  friendPointUpVal,
                  friendPointUpMaxVal,
                  friendPointCampaignEntityList,
                  v294,
                  v177,
                  v176,
                  0,
                  followerClassIdc,
                  questRestrictionInfo,
                  1,
                  v175,
                  deckPriority,
                  v174,
                  1,
                  0,
                  0LL);
                ReturnTypeByQuestId = (__int64)v160->fields.originalItemList;
                if ( !ReturnTypeByQuestId )
                  goto LABEL_352;
                v179 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v180 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v179 )
                  goto LABEL_352;
                v181 = *(int *)(ReturnTypeByQuestId + 24);
                v167 = v301;
                if ( (unsigned int)v181 >= *(_DWORD *)(v179 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    (Il2CppObject *)v178,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v180[4] + 192LL) + 112LL));
                }
                else
                {
                  v182 = v179 + 8 * v181;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v181 + 1;
                  *(_QWORD *)(v182 + 32) = v178;
                  ReturnTypeByQuestId = sub_1B6406C(v182 + 32);
                }
                ++v173;
                --deckPriority;
              }
              while ( (unsigned int)v287 != v173 );
            }
            followerClassIda = 0;
            v295 = v167 + 32;
            v291 = (int)v163;
            while ( 1 )
            {
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              }
              v183 = *(struct BalanceConfig_StaticFields **)(ReturnTypeByQuestId + 184);
              if ( followerClassIda >= v183->SupportDeckMemberMax )
                break;
              if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
              {
                j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId);
                v183 = BalanceConfig_TypeInfo->static_fields;
              }
              v185 = v183->FixMainSupportDeckNum;
              v184 = v183->FixEventSupportDeckNum;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              ReturnTypeByQuestId = System_Math__Max_62194036(v185, v184, 0LL);
              if ( (int)v287 >= 1 )
              {
                v186 = ReturnTypeByQuestId;
                v187 = 0LL;
                while ( *p_mixItemList )
                {
                  ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                  v188 = (*p_mixItemList)->fields._size;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( (unsigned int)v163 >= LODWORD(klass->_1.namespaze) )
                    goto LABEL_353;
                  if ( !v167 )
                    goto LABEL_352;
                  if ( v187 >= *(unsigned int *)(v167 + 24) )
                    goto LABEL_353;
                  v324 = v188;
                  v189 = klass;
                  v190 = v160->fields.setupInfo;
                  indexd = *posa;
                  v191 = v160->fields.isServantEquipBonusFilterEnable;
                  v192 = this->fields.classBoardMaxDictionary;
                  v193 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 164LL);
                  v194 = v160->fields.isServantBonusFilterEnable;
                  v195 = v160->fields.isBonusFilterEnable;
                  supportDeckId = *(_DWORD *)(v295 + 4 * v187);
                  v160 = this;
                  v196 = (FollowerSelectItemListViewItem_o *)sub_1B64314(
                                                               FollowerSelectItemListViewItem_TypeInfo,
                                                               v76,
                                                               v77);
                  FollowerSelectItemListViewItem___ctor(
                    v196,
                    v324,
                    v193 - followerClassIda,
                    indexd,
                    followerClassIda,
                    friendPointUpVal,
                    friendPointUpMaxVal,
                    friendPointCampaignEntityList,
                    v195,
                    v194,
                    v191,
                    0,
                    v190,
                    questRestrictionInfo,
                    1,
                    supportDeckId,
                    v186,
                    v192,
                    1,
                    0,
                    0LL);
                  ReturnTypeByQuestId = (__int64)this->fields.mixItemList;
                  if ( !ReturnTypeByQuestId )
                    goto LABEL_352;
                  v197 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                  v198 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                  if ( !v197 )
                    goto LABEL_352;
                  v199 = *(int *)(ReturnTypeByQuestId + 24);
                  if ( (unsigned int)v199 >= *(_DWORD *)(v197 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                      (Il2CppObject *)v196,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v198[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v200 = v197 + 8 * v199;
                    *(_DWORD *)(ReturnTypeByQuestId + 24) = v199 + 1;
                    *(_QWORD *)(v200 + 32) = v196;
                    ReturnTypeByQuestId = sub_1B6406C(v200 + 32);
                  }
                  v167 = v301;
                  LODWORD(v163) = v291;
                  ++v187;
                  klass = v189;
                  --v186;
                  if ( (unsigned int)v287 == v187 )
                    goto LABEL_218;
                }
                goto LABEL_352;
              }
LABEL_218:
              ++followerClassIda;
            }
            namespaze = (int)klass->_1.namespaze;
            v163 = (Il2CppObject *)(unsigned int)((_DWORD)v163 + 1);
          }
          while ( (int)v163 < namespaze );
        }
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_352;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v330,
                            (const MethodInfo_30D412C *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v330 )
        goto LABEL_352;
      v201 = v330[1].klass;
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_352;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !ReturnTypeByQuestId )
        goto LABEL_352;
      ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                       questId,
                                       (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_352;
      HasFlag_39149148 = QuestEntity__HasFlag_39149148(
                           (QuestEntity_o *)ReturnTypeByQuestId,
                           0x8000000LL,
                           questPhase,
                           0LL);
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_352;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserFollowMaster___);
      v277 = (UserFollowMaster_o *)ReturnTypeByQuestId;
      if ( !v201 )
        goto LABEL_352;
      namespaze_low = (unsigned __int64)v201->_1.namespaze;
      if ( (int)namespaze_low >= 1 )
      {
        v203 = 0LL;
        v285 = 0;
        v292 = v201;
        do
        {
          namespaze_low = (unsigned int)namespaze_low;
          if ( HasFlag_39149148 )
          {
            if ( v203 >= (unsigned int)namespaze_low )
              goto LABEL_353;
            v204 = *((_QWORD *)&v201->_1.byval_arg.data + v203);
            if ( !v204 )
              goto LABEL_352;
            if ( *(_DWORD *)(v204 + 36) == 5 )
            {
              ReturnTypeByQuestId = (__int64)v277;
              if ( !v277 )
                goto LABEL_352;
              ReturnTypeByQuestId = UserFollowMaster__IsFollowUser(v277, *(_QWORD *)(v204 + 16), 0LL);
              if ( (ReturnTypeByQuestId & 1) == 0 )
                goto LABEL_296;
              namespaze_low = LODWORD(v201->_1.namespaze);
            }
          }
          else
          {
            if ( v203 >= (unsigned int)namespaze_low )
              goto LABEL_353;
            v205 = *((_QWORD *)&v201->_1.byval_arg.data + v203);
            if ( !v205 )
              goto LABEL_352;
            if ( *(_DWORD *)(v205 + 36) == 5 )
              goto LABEL_296;
          }
          if ( v203 >= namespaze_low )
            goto LABEL_353;
          v206 = &v201->_1.image + v203;
          ReturnTypeByQuestId = (__int64)v206[4];
          posb = (FollowerInfo_o **)(v206 + 4);
          if ( !ReturnTypeByQuestId )
            goto LABEL_352;
          FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0LL);
          ReturnTypeByQuestId = sub_1B64170(int___TypeInfo, 0LL);
          if ( v203 >= LODWORD(v201->_1.namespaze) )
            goto LABEL_353;
          v207 = *posb;
          if ( !*posb )
            goto LABEL_352;
          if ( v279 )
          {
            ReturnTypeByQuestId = (__int64)v207->fields.eventSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_352;
          }
          else
          {
            ReturnTypeByQuestId = (__int64)v207->fields.mainSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_352;
          }
          followerClassIdb = *(unsigned int *)(ReturnTypeByQuestId + 24);
          v208 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
          if ( v208 )
          {
            v163 = v208;
            v209 = sub_1B64204(v208, int___TypeInfo);
            if ( !v209 )
              goto LABEL_354;
          }
          else
          {
            v209 = 0LL;
          }
          v210 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v210 = BalanceConfig_TypeInfo;
          }
          v211 = v210->static_fields;
          v213 = v211->FixMainSupportDeckNum;
          v212 = v211->FixEventSupportDeckNum;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          ReturnTypeByQuestId = System_Math__Max_62194036(v213, v212, 0LL);
          v302 = v209;
          if ( (int)followerClassIdb >= 1 )
          {
            v214 = ReturnTypeByQuestId;
            v215 = 0LL;
            v288 = v209 + 32;
            while ( 1 )
            {
              if ( !*p_originalItemList )
                goto LABEL_352;
              if ( v203 >= LODWORD(v201->_1.namespaze) )
                break;
              if ( !v209 )
                goto LABEL_352;
              if ( v215 >= *(unsigned int *)(v209 + 24) )
                break;
              v325 = (*p_originalItemList)->fields._size;
              v298 = v160->fields.setupInfo;
              v216 = v160->fields.classBoardMaxDictionary;
              v217 = *(_DWORD *)(v288 + 4 * v215);
              indexe = *posb;
              v218 = v160->fields.isServantEquipBonusFilterEnable;
              v219 = v160->fields.isServantBonusFilterEnable;
              v220 = v160->fields.isBonusFilterEnable;
              v221 = (FollowerSelectItemListViewItem_o *)sub_1B64314(FollowerSelectItemListViewItem_TypeInfo, v76, v77);
              FollowerSelectItemListViewItem___ctor(
                v221,
                v325,
                0,
                indexe,
                0,
                friendPointUpVal,
                friendPointUpMaxVal,
                friendPointCampaignEntityList,
                v220,
                v219,
                v218,
                0,
                v298,
                questRestrictionInfo,
                0,
                v217,
                v214,
                v216,
                1,
                0,
                0LL);
              ReturnTypeByQuestId = (__int64)v160->fields.originalItemList;
              if ( !ReturnTypeByQuestId )
                goto LABEL_352;
              v222 = *(_QWORD *)(ReturnTypeByQuestId + 16);
              v223 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++*(_DWORD *)(ReturnTypeByQuestId + 28);
              if ( !v222 )
                goto LABEL_352;
              v224 = *(int *)(ReturnTypeByQuestId + 24);
              v209 = v302;
              if ( (unsigned int)v224 >= *(_DWORD *)(v222 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                  (Il2CppObject *)v221,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v223[4] + 192LL) + 112LL));
              }
              else
              {
                v225 = v222 + 8 * v224;
                *(_DWORD *)(ReturnTypeByQuestId + 24) = v224 + 1;
                *(_QWORD *)(v225 + 32) = v221;
                ReturnTypeByQuestId = sub_1B6406C(v225 + 32);
              }
              ++v215;
              --v214;
              if ( followerClassIdb == v215 )
                goto LABEL_270;
            }
LABEL_353:
            sub_1B6432C(ReturnTypeByQuestId, v76, v77, v78);
          }
LABEL_270:
          indexa = 0;
          v296 = v203;
          v299 = (EventUpValSetupInfo_o *)(v209 + 32);
          while ( 1 )
          {
            ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            }
            v226 = *(struct BalanceConfig_StaticFields **)(ReturnTypeByQuestId + 184);
            if ( indexa >= v226->SupportDeckMemberMax )
              break;
            if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
            {
              j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId);
              v226 = BalanceConfig_TypeInfo->static_fields;
            }
            v228 = v226->FixMainSupportDeckNum;
            v227 = v226->FixEventSupportDeckNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            ReturnTypeByQuestId = System_Math__Max_62194036(v228, v227, 0LL);
            if ( (int)followerClassIdb >= 1 )
            {
              v229 = ReturnTypeByQuestId;
              v230 = 0LL;
              while ( *p_mixItemList )
              {
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                v231 = (*p_mixItemList)->fields._size;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                }
                if ( v203 >= LODWORD(v201->_1.namespaze) )
                  goto LABEL_353;
                if ( !v209 )
                  goto LABEL_352;
                if ( v230 >= *(unsigned int *)(v209 + 24) )
                  goto LABEL_353;
                v232 = v160->fields.setupInfo;
                v233 = v231;
                v326 = *posb;
                v234 = v160->fields.isServantEquipBonusFilterEnable;
                v235 = this->fields.classBoardMaxDictionary;
                v236 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 164LL);
                v237 = v160->fields.isServantBonusFilterEnable;
                v238 = v160->fields.isBonusFilterEnable;
                supportDeckIda = *((_DWORD *)&v299->klass + v230);
                v160 = this;
                v239 = (FollowerSelectItemListViewItem_o *)sub_1B64314(
                                                             FollowerSelectItemListViewItem_TypeInfo,
                                                             v76,
                                                             v77);
                FollowerSelectItemListViewItem___ctor(
                  v239,
                  v233,
                  v236 - indexa,
                  v326,
                  indexa,
                  friendPointUpVal,
                  friendPointUpMaxVal,
                  friendPointCampaignEntityList,
                  v238,
                  v237,
                  v234,
                  0,
                  v232,
                  questRestrictionInfo,
                  0,
                  supportDeckIda,
                  v229,
                  v235,
                  1,
                  0,
                  0LL);
                ReturnTypeByQuestId = (__int64)this->fields.mixItemList;
                if ( !ReturnTypeByQuestId )
                  goto LABEL_352;
                v240 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v241 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v240 )
                  goto LABEL_352;
                v242 = *(int *)(ReturnTypeByQuestId + 24);
                if ( (unsigned int)v242 >= *(_DWORD *)(v240 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    (Il2CppObject *)v239,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v241[4] + 192LL) + 112LL));
                }
                else
                {
                  v243 = v240 + 8 * v242;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v242 + 1;
                  *(_QWORD *)(v243 + 32) = v239;
                  ReturnTypeByQuestId = sub_1B6406C(v243 + 32);
                }
                v201 = v292;
                v203 = v296;
                v209 = v302;
                ++v230;
                --v229;
                if ( followerClassIdb == v230 )
                  goto LABEL_292;
              }
              goto LABEL_352;
            }
LABEL_292:
            ++indexa;
          }
          if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
          {
            ReturnTypeByQuestId = j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId);
            v226 = BalanceConfig_TypeInfo->static_fields;
          }
          if ( ++v285 >= v226->SupportListMax )
            break;
LABEL_296:
          LODWORD(namespaze_low) = v201->_1.namespaze;
          ++v203;
        }
        while ( (__int64)v203 < (int)namespaze_low );
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_352;
    if ( DataMasterBase_object__object__long___TryGetSingleEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
           &v329,
           (const MethodInfo_30D412C *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    {
      ReturnTypeByQuestId = (__int64)v329;
      if ( !v329 )
        goto LABEL_352;
      if ( UserRecommendFollowerEntity__IsEnableData((UserRecommendFollowerEntity_o *)v329, 0LL) )
      {
        ReturnTypeByQuestId = (__int64)v329;
        if ( !v329 )
          goto LABEL_352;
        ReturnTypeByQuestId = UserRecommendFollowerEntity__IsEnableQuest(
                                (UserRecommendFollowerEntity_o *)v329,
                                questId,
                                questPhase,
                                0LL);
        if ( (ReturnTypeByQuestId & 1) != 0 )
        {
          if ( !v329 )
            goto LABEL_352;
          v244 = v329[1].klass;
          ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !ReturnTypeByQuestId )
            goto LABEL_352;
          ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                           (DataManager_o *)ReturnTypeByQuestId,
                                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !ReturnTypeByQuestId )
            goto LABEL_352;
          ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                           questId,
                                           (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !ReturnTypeByQuestId )
            goto LABEL_352;
          v327 = QuestEntity__HasFlag_39149148((QuestEntity_o *)ReturnTypeByQuestId, 0x8000000LL, questPhase, 0LL);
          ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !ReturnTypeByQuestId )
            goto LABEL_352;
          ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                           (DataManager_o *)ReturnTypeByQuestId,
                                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserFollowMaster___);
          v311 = (UserFollowMaster_o *)ReturnTypeByQuestId;
          if ( !v244 )
            goto LABEL_352;
          v245 = (unsigned __int64)v244->_1.namespaze;
          if ( (int)v245 >= 1 )
          {
            v246 = 0LL;
            p_byval_arg = &v244->_1.byval_arg;
            indexb = v244;
            do
            {
              v245 = (unsigned int)v245;
              if ( v327 )
              {
                if ( v246 >= (unsigned int)v245 )
                  goto LABEL_353;
                v248 = *((_QWORD *)&p_byval_arg->data + v246);
                if ( !v248 )
                  goto LABEL_352;
                if ( *(_DWORD *)(v248 + 36) == 5 )
                {
                  ReturnTypeByQuestId = (__int64)v311;
                  if ( !v311 )
                    goto LABEL_352;
                  ReturnTypeByQuestId = UserFollowMaster__IsFollowUser(v311, *(_QWORD *)(v248 + 16), 0LL);
                  if ( (ReturnTypeByQuestId & 1) == 0 )
                    goto LABEL_346;
                  v245 = LODWORD(v244->_1.namespaze);
                }
              }
              else
              {
                if ( v246 >= (unsigned int)v245 )
                  goto LABEL_353;
                v249 = *((_QWORD *)&p_byval_arg->data + v246);
                if ( !v249 )
                  goto LABEL_352;
                if ( *(_DWORD *)(v249 + 36) == 5 )
                  goto LABEL_346;
              }
              if ( v246 >= v245 )
                goto LABEL_353;
              v250 = *((_QWORD *)&p_byval_arg->data + v246);
              ReturnTypeByQuestId = sub_1B64170(ServantLeaderInfo___TypeInfo, 1LL);
              if ( v246 >= LODWORD(v244->_1.namespaze) )
                goto LABEL_353;
              v251 = *((_QWORD *)&p_byval_arg->data + v246);
              if ( !v251 )
                goto LABEL_352;
              v252 = *(_QWORD *)(v251 + 56);
              if ( !v252 )
                goto LABEL_352;
              if ( !*(_DWORD *)(v252 + 24) )
                goto LABEL_353;
              v253 = *(_QWORD *)(v252 + 32);
              if ( !v253 )
                goto LABEL_352;
              v254 = ReturnTypeByQuestId;
              if ( !ReturnTypeByQuestId )
                goto LABEL_352;
              v255 = *(_QWORD *)(v253 + 56);
              if ( v255 )
              {
                ReturnTypeByQuestId = sub_1B64204(v255, *(_QWORD *)(*(_QWORD *)ReturnTypeByQuestId + 64LL));
                if ( !ReturnTypeByQuestId )
                  goto LABEL_355;
              }
              if ( !*(_DWORD *)(v254 + 24) )
                goto LABEL_353;
              *(_QWORD *)(v254 + 32) = v255;
              ReturnTypeByQuestId = sub_1B6406C(v254 + 32);
              if ( !v250 )
                goto LABEL_352;
              *(_QWORD *)(v250 + 40) = v254;
              ReturnTypeByQuestId = sub_1B6406C(v250 + 40);
              if ( v246 >= LODWORD(v244->_1.namespaze) )
                goto LABEL_353;
              ReturnTypeByQuestId = *((_QWORD *)&p_byval_arg->data + v246);
              if ( !ReturnTypeByQuestId )
                goto LABEL_352;
              FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0LL);
              if ( !*p_recommendItemList )
                goto LABEL_352;
              if ( v246 >= LODWORD(v244->_1.namespaze) )
                goto LABEL_353;
              v256 = (FollowerInfo_o *)*((_QWORD *)&p_byval_arg->data + v246);
              v257 = (*p_recommendItemList)->fields._size;
              v258 = this->fields.isBonusFilterEnable;
              v259 = this->fields.isServantBonusFilterEnable;
              v260 = this->fields.isServantEquipBonusFilterEnable;
              v261 = this->fields.setupInfo;
              v262 = this->fields.classBoardMaxDictionary;
              v263 = (FollowerSelectItemListViewItem_o *)sub_1B64314(FollowerSelectItemListViewItem_TypeInfo, v76, v77);
              FollowerSelectItemListViewItem___ctor(
                v263,
                v257,
                0,
                v256,
                0,
                friendPointUpVal,
                friendPointUpMaxVal,
                friendPointCampaignEntityList,
                v258,
                v259,
                v260,
                0,
                v261,
                questRestrictionInfo,
                0,
                0,
                0,
                v262,
                1,
                1,
                0LL);
              ReturnTypeByQuestId = (__int64)this->fields.recommendItemList;
              if ( !ReturnTypeByQuestId )
                goto LABEL_352;
              v264 = *(_QWORD *)(ReturnTypeByQuestId + 16);
              v265 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++*(_DWORD *)(ReturnTypeByQuestId + 28);
              if ( !v264 )
                goto LABEL_352;
              v266 = *(int *)(ReturnTypeByQuestId + 24);
              if ( (unsigned int)v266 >= *(_DWORD *)(v264 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                  (Il2CppObject *)v263,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v265[4] + 192LL) + 112LL));
              }
              else
              {
                v267 = v264 + 8 * v266;
                *(_DWORD *)(ReturnTypeByQuestId + 24) = v266 + 1;
                *(_QWORD *)(v267 + 32) = v263;
                sub_1B6406C(v267 + 32);
              }
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              }
              v244 = indexb;
              if ( (__int64)v246 >= *(int *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 684LL) )
                break;
LABEL_346:
              LODWORD(v245) = v244->_1.namespaze;
              ++v246;
            }
            while ( (__int64)v246 < (int)v245 );
          }
        }
      }
    }
  }
LABEL_347:
  ReturnTypeByQuestId = (__int64)this->fields.refreshButtonObject;
  if ( !ReturnTypeByQuestId )
    goto LABEL_352;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)ReturnTypeByQuestId,
    !this->fields.isRefreshBtnHide,
    0LL);
  v269 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v269 = FollowerSelectItemListViewManager_TypeInfo;
  }
  FollowerSelectItemListViewManager__SetEmptyMessage(this, v269->static_fields->followerClassId, v268);
  FollowerSelectItemListViewManager__SortClass(
    this,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    v270);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  FollowerSelectItemListViewManager__SetFilterButtonImage(this, v271);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_352;
  scrollView->fields.smoothDragStart = 1;
}


void __fastcall FollowerSelectItemListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  FollowerSelectItemListViewManager_c *v4; // x0
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v6; // x8

  if ( (byte_49F77AC & 1) == 0 )
  {
    sub_1B640C8(&FollowerSelectItemListViewManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_6720/*"FollowerSelectClass"*/, v2);
    sub_1B640C8(&StringLiteral_6723/*"FollowerSelectOldClass"*/, v3);
    byte_49F77AC = 1;
  }
  v4 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v4 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v4->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT
    || (v4 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))LIST_VIEW_SORT->fields.m_target)(
                                                      LIST_VIEW_SORT->fields.original_method_info,
                                                      1LL,
                                                      *(_QWORD *)&LIST_VIEW_SORT->fields.extra_arg)) == 0LL
    || (ListViewSort__DeleteContinueData((ListViewSort_o *)v4, 0LL),
        (v6 = FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT) == 0LL)
    || (v4 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v6->fields.m_target)(
                                                      v6->fields.original_method_info,
                                                      0LL,
                                                      *(_QWORD *)&v6->fields.extra_arg)) == 0LL )
  {
    sub_1B64324(v4);
  }
  ListViewSort__DeleteContinueData((ListViewSort_o *)v4, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6720/*"FollowerSelectClass"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6723/*"FollowerSelectOldClass"*/, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FollowerSelectItemListViewManager__DestroyList_30590488(this, 0LL, v2);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList_30590488(
        FollowerSelectItemListViewManager_o *this,
        BattleSetupInfo_o *battleSetupInfo,
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
  __int64 ReturnTypeByQuestId; // x0
  FollowerSelectItemListViewManager_c *v16; // x8
  unsigned int v17; // w20
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  const MethodInfo *v19; // x4
  struct ListViewSort_o *sort; // x8
  System_Int32_array *OngoingQuestTargetEventIds; // x0
  int32_t questId; // w20
  int32_t questPhase; // w21
  System_Int32_array *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  EventUpValSetupInfo_o *v27; // x23
  struct EventUpValSetupInfo_o **p_setupInfo; // x0
  const MethodInfo *v29; // x1
  struct ListViewSort_o *v30; // x8
  FollowerSelectItemListViewManager_o *v31; // x0
  int monitor; // w20
  const MethodInfo *v33; // x1
  FollowerSelectItemListViewManager_c *v34; // x0
  FollowerSelectItemListViewManager_o *v35; // x0
  int monitor_high; // w20
  FollowerSelectItemListViewManager_c *v37; // x0
  ClassButtonControlComponent_o *classButtonControl; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  ClassButtonControlComponent_CallbackFunc_o *v41; // x21
  ClassButtonControlComponent_o *v42; // x20
  const MethodInfo *v43; // x2
  struct EventUpValSetupInfo_o *setupInfo; // x8
  System_Int32_array *v45; // x1
  UILabel_o *bonusFilterKindLabel; // x20

  if ( (byte_49F77BB & 1) == 0 )
  {
    sub_1B640C8(&ClassButtonControlComponent_CallbackFunc_TypeInfo, battleSetupInfo);
    sub_1B640C8(&Method_DataManager_GetMaster_EventQuestMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&EventUpValSetupInfo_TypeInfo, v7);
    sub_1B640C8(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v8);
    sub_1B640C8(&FollowerSelectItemListViewManager_TypeInfo, v9);
    sub_1B640C8(&int___TypeInfo, v10);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_11619/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/, v12);
    sub_1B640C8(&StringLiteral_6720/*"FollowerSelectClass"*/, v13);
    sub_1B640C8(&StringLiteral_6723/*"FollowerSelectOldClass"*/, v14);
    byte_49F77BB = 1;
  }
  if ( battleSetupInfo )
  {
    this->fields.questId = BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
    this->fields.questPhase = *(_DWORD *)((char *)&off_18 + (_QWORD)battleSetupInfo);
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(
                            *(int *)((char *)&dword_14 + (_QWORD)battleSetupInfo),
                            0LL);
    v16 = FollowerSelectItemListViewManager_TypeInfo;
    v17 = ReturnTypeByQuestId;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      ReturnTypeByQuestId = j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v16 = FollowerSelectItemListViewManager_TypeInfo;
    }
    LIST_VIEW_SORT = v16->static_fields->LIST_VIEW_SORT;
    if ( !LIST_VIEW_SORT )
      goto LABEL_47;
    this->fields.sort = (struct ListViewSort_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))LIST_VIEW_SORT->fields.m_target)(
                                                   LIST_VIEW_SORT->fields.original_method_info,
                                                   v17,
                                                   *(_QWORD *)&LIST_VIEW_SORT->fields.extra_arg);
    ReturnTypeByQuestId = sub_1B6406C(&this->fields.sort);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_47;
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                                                                                   this,
                                                                                   this->fields.questId,
                                                                                   this->fields.questPhase,
                                                                                   sort->fields.isRequestLoad,
                                                                                   v19);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventQuestMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_47;
    OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                   (EventQuestMaster_o *)ReturnTypeByQuestId,
                                   this->fields.questId,
                                   this->fields.questPhase,
                                   0LL,
                                   0LL);
    questId = this->fields.questId;
    questPhase = this->fields.questPhase;
    v24 = OngoingQuestTargetEventIds;
    v27 = (EventUpValSetupInfo_o *)sub_1B64314(EventUpValSetupInfo_TypeInfo, v25, v26);
    EventUpValSetupInfo___ctor_38592760(v27, v24, 0, questId, questPhase, 0LL);
    p_setupInfo = &this->fields.setupInfo;
    this->fields.setupInfo = v27;
  }
  else
  {
    p_setupInfo = &this->fields.setupInfo;
    this->fields.setupInfo = 0LL;
  }
  sub_1B6406C(p_setupInfo);
  this->fields.questRestrictionInfo = 0LL;
  sub_1B6406C(&this->fields.questRestrictionInfo);
  ReturnTypeByQuestId = (__int64)this->fields.sort;
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  ListViewSort__Load((ListViewSort_o *)ReturnTypeByQuestId, 0LL);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ReturnTypeByQuestId = (__int64)this->fields.sort;
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  ListViewSort__Save((ListViewSort_o *)ReturnTypeByQuestId, 0LL);
  v30 = this->fields.sort;
  if ( !v30 )
    goto LABEL_47;
  if ( v30->fields.isRequestSave )
  {
    v31 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v31 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor = (int)v31->fields.sort->monitor;
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(v31, v29) )
    {
      v34 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v34 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6720/*"FollowerSelectClass"*/, v34->static_fields->followerClassId, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
    v35 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v35 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor_high = HIDWORD(v35->fields.sort->monitor);
    if ( monitor_high != FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(v35, v33) )
    {
      v37 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v37 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(
        (System_String_o *)StringLiteral_6723/*"FollowerSelectOldClass"*/,
        v37->static_fields->oldFollowerClassId,
        0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
  this->fields.originalItemList = 0LL;
  sub_1B6406C(&this->fields.originalItemList);
  this->fields.mixItemList = 0LL;
  sub_1B6406C(&this->fields.mixItemList);
  this->fields.recommendItemList = 0LL;
  sub_1B6406C(&this->fields.recommendItemList);
  classButtonControl = this->fields.classButtonControl;
  v41 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1B64314(
                                                        ClassButtonControlComponent_CallbackFunc_TypeInfo,
                                                        v39,
                                                        v40);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v41,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_47;
  ClassButtonControlComponent__init(classButtonControl, v41, this->fields.questId, this->fields.questPhase, 0, 0LL);
  this->fields.isInput = 0;
  ReturnTypeByQuestId = (__int64)FollowerSelectItemListViewManager_TypeInfo;
  v42 = this->fields.classButtonControl;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    ReturnTypeByQuestId = j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  if ( !v42 )
    goto LABEL_47;
  ClassButtonControlComponent__setCursor(
    v42,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  setupInfo = this->fields.setupInfo;
  v45 = setupInfo ? setupInfo->fields.eventIdList : (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, v45, v43);
  ReturnTypeByQuestId = (__int64)this->fields.bonusFilterKindButton;
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  ReturnTypeByQuestId = (__int64)UnityEngine_Component__get_gameObject(
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11619/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/, 0LL);
    if ( bonusFilterKindLabel )
    {
      UILabel__set_text(bonusFilterKindLabel, (System_String_o *)ReturnTypeByQuestId, 0LL);
      goto LABEL_43;
    }
LABEL_47:
    sub_1B64324(ReturnTypeByQuestId);
  }
LABEL_43:
  ReturnTypeByQuestId = (__int64)this->fields.tutorialListViewObject;
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ReturnTypeByQuestId + 376LL))(
    ReturnTypeByQuestId,
    *(_QWORD *)(*(_QWORD *)ReturnTypeByQuestId + 384LL));
  ReturnTypeByQuestId = (__int64)this->fields.tutorialListViewObject;
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  ReturnTypeByQuestId = (__int64)UnityEngine_Component__get_gameObject(
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
  Il2CppObject *Instance; // x0

  if ( (byte_49F77C9 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49F77C9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__EndCloseClassBoardEffectListDialog(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F77DA & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49F77DA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  ListViewSort_o *sort; // x0
  Il2CppObject *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_49F77CB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49F77CB = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(
    v12,
    (Il2CppObject *)this,
    Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__,
    0LL);
  if ( !Instance )
LABEL_8:
    sub_1B64324(sort);
  CommonUI__CloseServantBonusFilterSelectMenu((CommonUI_o *)Instance, v12, 0LL);
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
  Il2CppObject *Instance; // x0
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v13; // x20
  int32_t result; // w0
  struct System_Int32_array *classIds; // x8
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  struct System_Int32_array *v19; // x8
  Il2CppObject *v20; // x8

  if ( (byte_49F77B6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, *(_QWORD *)&questId);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantClassMaster___, v8);
    sub_1B640C8(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49F77B6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v19 = v13->fields.classIds;
  if ( !v19 )
    goto LABEL_17;
  if ( !v19->max_length )
    sub_1B6432C(Instance, v16, v17, v18);
  if ( !Instance )
LABEL_17:
    sub_1B64324(Instance);
  v20 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          v19->m_Items[1],
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  result = defaultValue;
  if ( v20 )
    return HIDWORD(v20[4].klass);
  return result;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_c *v2; // x0

  if ( (byte_49F77BF & 1) == 0 )
  {
    sub_1B640C8(&FollowerSelectItemListViewManager_TypeInfo, method);
    byte_49F77BF = 1;
  }
  v2 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_49F77DB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    byte_49F77DB = 1;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t PlayerPrefsFollowerClassId; // w21
  FollowerSelectItemListViewManager_c *v13; // x0
  Il2CppObject *Instance; // x0
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x1
  _BOOL8 AdvantageClassAuto; // x0
  const MethodInfo *v18; // x3
  int32_t AdvantageClassId; // w22
  _BOOL8 IsSameQuestAndPhase; // x0
  const MethodInfo *v21; // x4
  RecommendSupportQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F77B4 & 1) == 0 )
  {
    sub_1B640C8(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&questId);
    sub_1B640C8(&Method_DataManager_GetMasterData_RecommendSupportQuestMaster___, v8);
    sub_1B640C8(&FollowerSelectItemListViewManager_TypeInfo, v9);
    sub_1B640C8(&OptionManager_TypeInfo, v10);
    this = (FollowerSelectItemListViewManager_o *)sub_1B640C8(
                                                    &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                    v11);
    byte_49F77B4 = 1;
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
    v13 = FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v13 = FollowerSelectItemListViewManager_TypeInfo;
    }
    PlayerPrefsFollowerClassId = v13->static_fields->followerClassId;
  }
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(PlayerPrefsFollowerClassId, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_RecommendSupportQuestMaster___)) == 0LL )
    {
      sub_1B64324(Instance);
    }
    v15 = RecommendSupportQuestMaster__TryGetEntity(
            (RecommendSupportQuestMaster_o *)Instance,
            &entity,
            questId,
            questPhase,
            0LL);
    if ( !v15 )
      PlayerPrefsFollowerClassId = FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(
                                     (FollowerSelectItemListViewManager_o *)v15,
                                     v16);
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  AdvantageClassAuto = OptionManager__GetAdvantageClassAuto(0LL);
  AdvantageClassId = PlayerPrefsFollowerClassId;
  if ( AdvantageClassAuto )
  {
    IsSameQuestAndPhase = FollowerSelectItemListViewManager__IsSameQuestAndPhase(
                            (FollowerSelectItemListViewManager_o *)AdvantageClassAuto,
                            questId,
                            questPhase,
                            v18);
    AdvantageClassId = PlayerPrefsFollowerClassId;
    if ( !IsSameQuestAndPhase )
      AdvantageClassId = FollowerSelectItemListViewManager__GetAdvantageClassId(
                           (FollowerSelectItemListViewManager_o *)IsSameQuestAndPhase,
                           questId,
                           questPhase,
                           PlayerPrefsFollowerClassId,
                           v21);
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
  FollowerSelectItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49F77BD & 1) == 0 )
  {
    sub_1B640C8(&FollowerSelectItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_49F77BD = 1;
  }
  result = (FollowerSelectItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  struct System_Collections_Generic_List_ListViewItem__o *mixItemList; // x8

  if ( (byte_49F77D6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    byte_49F77D6 = 1;
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
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v10; // w22
  Il2CppObject *Item; // x0
  FollowerSelectItemListViewItem_o *v12; // x23
  __int64 methodPtr_low; // x10

  if ( (byte_49F77D7 & 1) == 0 )
  {
    sub_1B640C8(&FollowerSelectItemListViewItem_TypeInfo, userId);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    byte_49F77D7 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1B64324(itemList);
  v10 = 0;
  while ( v10 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v10,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      v12 = (FollowerSelectItemListViewItem_o *)Item;
      methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (FollowerSelectItemListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo
        && FollowerSelectItemListViewItem__get_FollowerId((FollowerSelectItemListViewItem_o *)Item, 0LL) == userId )
      {
        itemList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                  v12,
                                                                  0LL);
        if ( !itemList )
          goto LABEL_13;
        if ( itemList[1].klass == (System_Collections_Generic_List_object__c *)userSvtId )
          return v10;
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v10;
    if ( !itemList )
      goto LABEL_13;
  }
  return 0;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetItemIndex_30602488(
        FollowerSelectItemListViewManager_o *this,
        int64_t userId,
        int32_t classId,
        int32_t deckId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v12; // w23
  Il2CppObject *Item; // x0
  FollowerSelectItemListViewItem_o *v14; // x24
  __int64 methodPtr_low; // x10

  if ( (byte_49F77D8 & 1) == 0 )
  {
    sub_1B640C8(&FollowerSelectItemListViewItem_TypeInfo, userId);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    byte_49F77D8 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1B64324(itemList);
  v12 = 0;
  while ( v12 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v12,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      v14 = (FollowerSelectItemListViewItem_o *)Item;
      methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (FollowerSelectItemListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo
        && FollowerSelectItemListViewItem__get_FollowerId((FollowerSelectItemListViewItem_o *)Item, 0LL) == userId
        && FollowerSelectItemListViewItem__get_SelectClassId(v14, 0LL) == classId
        && v14->fields.supportDeckId == deckId )
      {
        return v12;
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v12;
    if ( !itemList )
      goto LABEL_13;
  }
  return -1;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_49F77B8 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_6720/*"FollowerSelectClass"*/, method);
    byte_49F77B8 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6720/*"FollowerSelectClass"*/, 0, 0LL);
}


int32_t __fastcall FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_49F77B9 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_6723/*"FollowerSelectOldClass"*/, method);
    byte_49F77B9 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6723/*"FollowerSelectOldClass"*/, 0, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewManager_c *v2; // x0
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v4; // x8

  if ( (byte_49F77AD & 1) == 0 )
  {
    sub_1B640C8(&FollowerSelectItemListViewManager_TypeInfo, v1);
    byte_49F77AD = 1;
  }
  v2 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v2 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v2->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT
    || (v2 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))LIST_VIEW_SORT->fields.m_target)(
                                                      LIST_VIEW_SORT->fields.original_method_info,
                                                      1LL,
                                                      *(_QWORD *)&LIST_VIEW_SORT->fields.extra_arg)) == 0LL
    || (ListViewSort__InitLoad((ListViewSort_o *)v2, 0LL),
        (v4 = FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT) == 0LL)
    || (v2 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v4->fields.m_target)(
                                                      v4->fields.original_method_info,
                                                      0LL,
                                                      *(_QWORD *)&v4->fields.extra_arg)) == 0LL )
  {
    sub_1B64324(v2);
  }
  ListViewSort__InitLoad((ListViewSort_o *)v2, 0LL);
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

  if ( (byte_49F77B5 & 1) == 0 )
  {
    sub_1B640C8(&BattleData_TypeInfo, *(_QWORD *)&questId);
    sub_1B640C8(&FollowerSelectItemListViewManager_TypeInfo, v6);
    byte_49F77B5 = 1;
  }
  v7 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v7 = FollowerSelectItemListViewManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( static_fields->lastSelectedQuestId == -1 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = FollowerSelectItemListViewManager_TypeInfo;
      static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
    }
    if ( static_fields->lastSelectedQuestPhase == -1 )
    {
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      if ( BattleData__getSavedQuestId(0LL) == questId )
      {
        if ( !BattleData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
        return BattleData__getSavedQuestPhase(0LL) == questPhase;
      }
      return 0;
    }
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = FollowerSelectItemListViewManager_TypeInfo;
  }
  v9 = v7->static_fields;
  if ( v9->lastSelectedQuestId != questId )
    return 0;
  if ( !v7->_2.cctor_finished )
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
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w25
  int32_t v13; // w22
  __int64 methodPtr_low; // x10
  FollowerSelectItemListViewManager_c *v15; // x0
  int32_t followerClassId; // w22
  int v17; // w25
  int32_t v18; // w22
  __int64 v19; // x10
  int v20; // w25
  int32_t v21; // w22
  __int64 v22; // x10

  if ( (byte_49F77BA & 1) == 0 )
  {
    sub_1B640C8(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&friendPointUpVal);
    sub_1B640C8(&FollowerSelectItemListViewItem_TypeInfo, v7);
    sub_1B640C8(&FollowerSelectItemListViewManager_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    byte_49F77BA = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_34;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v13 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v13,
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      if ( size == ++v13 )
        goto LABEL_12;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_34:
    sub_1B64324(itemList);
  }
LABEL_12:
  v15 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v15 = FollowerSelectItemListViewManager_TypeInfo;
  }
  followerClassId = v15->static_fields->followerClassId;
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsMixSupportGroupType(followerClassId, 0LL) )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.originalItemList;
    if ( !itemList )
      goto LABEL_34;
    v17 = itemList->fields._size;
    if ( v17 >= 1 )
    {
      v18 = 0;
      do
      {
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemList,
                                                                  v18,
                                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          break;
        v19 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v19
          || (FollowerSelectItemListViewItem_c *)itemList->klass->_2.typeHierarchy[v19 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          break;
        }
        FollowerSelectItemListViewItem__Modify(
          (FollowerSelectItemListViewItem_o *)itemList,
          friendPointUpVal,
          friendPointUpMaxVal,
          0LL);
        if ( v17 == ++v18 )
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
    v20 = itemList->fields._size;
    if ( v20 >= 1 )
    {
      v21 = 0;
      do
      {
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemList,
                                                                  v21,
                                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          break;
        v22 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v22
          || (FollowerSelectItemListViewItem_c *)itemList->klass->_2.typeHierarchy[v22 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          break;
        }
        FollowerSelectItemListViewItem__Modify(
          (FollowerSelectItemListViewItem_o *)itemList,
          friendPointUpVal,
          friendPointUpMaxVal,
          0LL);
        if ( v20 == ++v21 )
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
  __int64 v6; // x1
  __int64 IsRecommendSupportGroupType; // x0
  int v8; // w21
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t oldCursor; // w22
  const MethodInfo *v11; // x2
  struct ClassButtonControlComponent_o *v12; // x8
  int32_t v13; // w23
  FollowerSelectItemListViewManager_c *v14; // x0
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  const MethodInfo *v17; // x2

  if ( (byte_49F77D1 & 1) == 0 )
  {
    sub_1B640C8(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classPos);
    sub_1B640C8(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v5);
    sub_1B640C8(&FollowerSelectItemListViewManager_TypeInfo, v6);
    byte_49F77D1 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    IsRecommendSupportGroupType = ClassButtonControlComponent__IsRecommendSupportGroupType(classPos, 0LL);
    if ( this->fields.classButtonControl )
    {
      v8 = IsRecommendSupportGroupType;
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
          j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
        IsRecommendSupportGroupType = ClassButtonControlComponent__IsRecommendSupportGroupType(oldCursor, 0LL);
        if ( ((v8 | (unsigned int)IsRecommendSupportGroupType) & 1) != 0 )
          FollowerSelectItemListViewManager__SetEmptyMessage(this, classPos, v11);
      }
      v12 = this->fields.classButtonControl;
      if ( v12 )
      {
        v13 = v12->fields.oldCursor;
        v14 = FollowerSelectItemListViewManager_TypeInfo;
        if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
          v14 = FollowerSelectItemListViewManager_TypeInfo;
        }
        v14->static_fields->oldFollowerClassId = v13;
        v15 = Method_FollowerSelectItemListViewManager_OnChangeClass__;
        if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnChangeClass__ + 83) & 2) != 0 )
          v15 = (_QWORD *)sub_1B640E0();
        v16 = (System_Reflection_MethodBase_o *)sub_1B640AC(v15, v15[4]);
        OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
        if ( (v8 & 1) != 0 )
          FollowerSelectItemListViewManager__OnClickRecommend(this, classPos, v17);
        else
          FollowerSelectItemListViewManager__SortClass(this, classPos, v17);
        return;
      }
    }
LABEL_22:
    sub_1B64324(IsRecommendSupportGroupType);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickBonusFilterKind(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  _BOOL4 isServantBonusFilterEnable; // w24
  _BOOL4 isServantEquipBonusFilterEnable; // w25
  System_Int32_array *equipBonusFilterEventIds; // x20
  ListViewSort_o *sort; // x21
  CommonUI_o *v13; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  ServantBonusFilterSelectMenu_CallbackFunc_o *v16; // x23
  __int64 v17; // x0

  if ( (byte_49F77CA & 1) == 0 )
  {
    sub_1B640C8(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__, v3);
    sub_1B640C8(&Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49F77CA = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0();
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
    isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
    equipBonusFilterEventIds = this->fields.equipBonusFilterEventIds;
    sort = this->fields.sort;
    v13 = (CommonUI_o *)Instance;
    v16 = (ServantBonusFilterSelectMenu_CallbackFunc_o *)sub_1B64314(
                                                           ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo,
                                                           v14,
                                                           v15);
    ServantBonusFilterSelectMenu_CallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__,
      0LL);
    if ( !v13 )
      sub_1B64324(v17);
    CommonUI__OpenServantBonusFilterSelectMenu(
      v13,
      0,
      isServantBonusFilterEnable,
      isServantEquipBonusFilterEnable,
      equipBonusFilterEventIds,
      sort,
      v16,
      0LL);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickChangeSkill(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  __int64 displaySkill; // x8
  System_Collections_Generic_List_object__o *ObjectList; // x0
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w21
  const MethodInfo *v12; // x2

  if ( (byte_49F77D5 & 1) == 0 )
  {
    sub_1B640C8(&Method_FollowerSelectItemListViewManager_OnClickChangeSkill__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v4);
    byte_49F77D5 = 1;
  }
  if ( this->fields.isInput )
  {
    v5 = Method_FollowerSelectItemListViewManager_OnClickChangeSkill__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickChangeSkill__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0();
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    displaySkill = this->fields.displaySkill;
    if ( (unsigned int)displaySkill <= 2 )
      this->fields.displaySkill = dword_BDB54C[displaySkill];
    ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                                this,
                                                                v7);
    if ( !ObjectList )
      goto LABEL_14;
    v10 = ObjectList;
    if ( ObjectList->fields._size >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    v10,
                                                                    v11,
                                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
        if ( !ObjectList )
          break;
        FollowerSelectItemListViewObject__ChangeDisplaySkill(
          (FollowerSelectItemListViewObject_o *)ObjectList,
          this->fields.displaySkill,
          v12);
        if ( ++v11 >= v10->fields._size )
          return;
      }
LABEL_14:
      sub_1B64324(ObjectList);
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
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_49F77C8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__, v3);
    sub_1B640C8(&Method_FollowerSelectItemListViewManager_OnClickClassComparibility__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49F77C8 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_FollowerSelectItemListViewManager_OnClickClassComparibility__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickClassComparibility__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0();
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__,
      0LL);
    if ( !Instance )
      sub_1B64324(v12);
    CommonUI__OpenClassCompatibilityMenu((CommonUI_o *)Instance, v11, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  FollowerSelectItemListViewManager_c *v9; // x0
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F77D2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___, *(_QWORD *)&classPos);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(
      &Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__,
      v6);
    sub_1B640C8(&FollowerSelectItemListViewManager_TypeInfo, v7);
    byte_49F77D2 = 1;
  }
  entity = 0LL;
  if ( this->fields.isGetRecommendSupport )
    goto LABEL_4;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
  if ( !Master_object )
    goto LABEL_18;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          (const MethodInfo_30D412C *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    goto LABEL_13;
  Master_object = entity;
  if ( !entity )
    goto LABEL_18;
  if ( !UserRecommendFollowerEntity__IsEnableData((UserRecommendFollowerEntity_o *)entity, 0LL) )
    goto LABEL_13;
  Master_object = entity;
  if ( !entity )
LABEL_18:
    sub_1B64324(Master_object);
  if ( UserRecommendFollowerEntity__IsEnableQuest(
         (UserRecommendFollowerEntity_o *)entity,
         this->fields.questId,
         this->fields.questPhase,
         0LL) )
  {
LABEL_4:
    FollowerSelectItemListViewManager__SortClass(this, classPos, method);
    return;
  }
LABEL_13:
  v9 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v9 = FollowerSelectItemListViewManager_TypeInfo;
  }
  v9->static_fields->followerClassId = classPos;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1B6406C(&this->fields.callbackFunc);
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
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v4; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w19
  __int64 v7; // x1

  if ( (byte_49F77C7 & 1) == 0 )
  {
    sub_1B640C8(&ClassButtonControlComponent_TypeInfo, method);
    byte_49F77C7 = 1;
  }
  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0LL;
      v4 = sub_1B6406C(&this->fields.callbackFunc);
      classButtonControl = this->fields.classButtonControl;
      if ( !classButtonControl )
        sub_1B64324(v4);
      currentCursor = classButtonControl->fields.currentCursor;
      if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      if ( ClassButtonControlComponent__IsRecommendSupportGroupType(currentCursor, 0LL) )
        v7 = 13LL;
      else
        v7 = 7LL;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        v7,
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
  unsigned int Index; // w0

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    v5 = sub_1B6406C(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1B64324(v5);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  struct ListViewSort_o *sort; // x8

  if ( (byte_49F77CF & 1) == 0 )
  {
    sub_1B640C8(&Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__, method);
    byte_49F77CF = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0();
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64324(v5);
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
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  _BOOL8 IsRecommendSupportGroupType; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w20
  struct ListViewSort_o *sort; // x8
  int v13; // w9
  Il2CppObject *Instance; // x0
  ListViewSort_o *v15; // x20
  CommonUI_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  OtherUserSortDialog_CallbackFunc_o *v19; // x22

  if ( (byte_49F77CD & 1) == 0 )
  {
    sub_1B640C8(&OtherUserSortDialog_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&ClassButtonControlComponent_TypeInfo, v3);
    sub_1B640C8(&Method_FollowerSelectItemListViewManager_CloseSortDialog__, v4);
    sub_1B640C8(&Method_FollowerSelectItemListViewManager_OnClickSortKind__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49F77CD = 1;
  }
  if ( this->fields.isInput )
  {
    v7 = Method_FollowerSelectItemListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B640E0();
    v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    classButtonControl = this->fields.classButtonControl;
    if ( classButtonControl )
    {
      currentCursor = classButtonControl->fields.currentCursor;
      if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      IsRecommendSupportGroupType = ClassButtonControlComponent__IsRecommendSupportGroupType(currentCursor, 0LL);
      if ( IsRecommendSupportGroupType )
      {
        sort = this->fields.sort;
        if ( sort )
        {
          if ( sort->fields.otherSortKind == 11 )
            v13 = 29;
          else
            v13 = 11;
          sort->fields.otherSortKind = v13;
          ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
          return;
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v15 = this->fields.sort;
        v16 = (CommonUI_o *)Instance;
        v19 = (OtherUserSortDialog_CallbackFunc_o *)sub_1B64314(OtherUserSortDialog_CallbackFunc_TypeInfo, v17, v18);
        OtherUserSortDialog_CallbackFunc___ctor(
          v19,
          (Il2CppObject *)this,
          Method_FollowerSelectItemListViewManager_CloseSortDialog__,
          0LL);
        if ( v16 )
        {
          CommonUI__OpenOtherUserSortDialog(v16, 0, v15, v19, 0LL);
          return;
        }
      }
    }
    sub_1B64324(IsRecommendSupportGroupType);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickSupportListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  unsigned int Index; // w0

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    v5 = sub_1B6406C(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1B64324(v5);
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
  unsigned int Index; // w0

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    v5 = sub_1B6406C(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1B64324(v5);
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
  unsigned int Index; // w0

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    v5 = sub_1B6406C(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1B64324(v5);
      Index = ListViewObject__get_Index(obj, 0LL);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        6LL,
        Index,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
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
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x22
  unsigned int Index; // w0

  if ( (byte_49F77C6 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_12493/*"ScrollViewEnabled"*/, obj);
    byte_49F77C6 = 1;
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
        (System_String_o *)StringLiteral_12493/*"ScrollViewEnabled"*/,
        0.1,
        0LL);
    }
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    tutorialListViewObject = (UnityEngine_Component_o *)sub_1B6406C(&this->fields.callbackFunc);
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
      sub_1B64324(tutorialListViewObject);
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
  UnityEngine_Component_o *tutorialListViewObject; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_49F77C5 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F77C5 = 1;
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
              sub_1B6406C(&this->fields.callbackFunc2);
              if ( callbackFunc2 )
                ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
                  callbackFunc2->fields.original_method_info,
                  *(_QWORD *)&callbackFunc2->fields.extra_arg);
              return;
            }
          }
        }
      }
      sub_1B64324(tutorialListViewObject);
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
  System_Collections_Generic_List_object__o *itemList; // x21
  int32_t Index; // w0
  Il2CppObject *Item; // x0
  FollowerSelectItemListViewItem_o *v19; // x20
  __int64 methodPtr_low; // x10
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  Il2CppObject *Master_object; // x21
  int32_t scrollView; // w22
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  struct FollowerInfo_o *followerInfo; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v33; // w20
  unsigned int v34; // w24
  ClassBoardInfo_o *v35; // x21
  _QWORD *v36; // x22
  __int64 v37; // x8
  __int64 v38; // x0
  __int64 v39; // x0
  _QWORD *v40; // x22
  __int64 v41; // x8
  __int64 v42; // x0
  __int64 v43; // x0
  Il2CppObject *Instance; // x22
  __int64 v45; // x1
  __int64 v46; // x2
  System_Action_o *v47; // x23

  v4 = this;
  if ( (byte_49F77D9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, obj);
    sub_1B640C8(&Method_System_Array_Empty_int___, v5);
    sub_1B640C8(&ClassBoardInfo_TypeInfo, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B640C8(&FollowerSelectItemListViewItem_TypeInfo, v11);
    sub_1B640C8(&Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__, v12);
    sub_1B640C8(&Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14);
    this = (FollowerSelectItemListViewManager_o *)sub_1B640C8(
                                                    &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                    v15);
    byte_49F77D9 = 1;
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
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Item )
          return;
        v19 = (FollowerSelectItemListViewItem_o *)Item;
        methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (FollowerSelectItemListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          return;
        }
        if ( BYTE3(Item[12].monitor) )
        {
          v21 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
          if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 83) & 2) != 0 )
            v21 = (_QWORD *)sub_1B640E0();
          v22 = (System_Reflection_MethodBase_o *)sub_1B640AC(v21, v21[4]);
          OverwriteAssetSoundName__PlaySystemSe(v22, 2, 0LL);
          return;
        }
        v4->fields.isInput = 0;
        v23 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
        if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 83) & 2) != 0 )
          v23 = (_QWORD *)sub_1B640E0();
        v24 = (System_Reflection_MethodBase_o *)sub_1B640AC(v23, v23[4]);
        OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
        this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewItem__get_SvtId(v19, 0LL);
        if ( Master_object )
        {
          this = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                          (int32_t)this,
                                                          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            scrollView = (int32_t)this->fields.scrollView;
            this = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( this )
            {
              this = (FollowerSelectItemListViewManager_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                                              (ClassBoardClassMaster_o *)this,
                                                              scrollView,
                                                              0LL);
              followerInfo = v19->fields.followerInfo;
              if ( followerInfo )
              {
                userClassBoardInfo = followerInfo->fields.userClassBoardInfo;
                if ( userClassBoardInfo )
                {
                  max_length = userClassBoardInfo->max_length;
                  v33 = (int)this;
                  if ( max_length < 1 )
                  {
LABEL_30:
                    v35 = (ClassBoardInfo_o *)sub_1B64314(ClassBoardInfo_TypeInfo, v27, v28);
                    ClassBoardInfo___ctor(v35, 0LL);
                    if ( v35 )
                    {
                      v35->fields.classBoardBaseId = v33;
                      v36 = Method_System_Array_Empty_int___;
                      v37 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v37 )
                      {
                        sub_1BB6000(Method_System_Array_Empty_int___);
                        v37 = v36[7];
                      }
                      v38 = *(_QWORD *)(v37 + 16);
                      if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
                        v38 = sub_1BB5FA4();
                      if ( !*(_DWORD *)(v38 + 224) )
                        j_il2cpp_runtime_class_init_0(v38);
                      v39 = *(_QWORD *)(v36[7] + 16LL);
                      if ( (*(_BYTE *)(v39 + 309) & 1) == 0 )
                        v39 = sub_1BB5FA4();
                      v35->fields.squareIds = **(struct System_Int32_array ***)(v39 + 184);
                      sub_1B6406C(&v35->fields.squareIds);
                      v40 = Method_System_Array_Empty_int___;
                      v41 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v41 )
                      {
                        sub_1BB6000(Method_System_Array_Empty_int___);
                        v41 = v40[7];
                      }
                      v42 = *(_QWORD *)(v41 + 16);
                      if ( (*(_BYTE *)(v42 + 309) & 1) == 0 )
                        v42 = sub_1BB5FA4();
                      if ( !*(_DWORD *)(v42 + 224) )
                        j_il2cpp_runtime_class_init_0(v42);
                      v43 = *(_QWORD *)(v40[7] + 16LL);
                      if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
                        v43 = sub_1BB5FA4();
                      v35->fields.releasedClassIds = **(struct System_Int32_array ***)(v43 + 184);
                      sub_1B6406C(&v35->fields.releasedClassIds);
LABEL_48:
                      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v47 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v45, v46);
                      System_Action___ctor(
                        v47,
                        (Il2CppObject *)v4,
                        Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__,
                        0LL);
                      if ( Instance )
                      {
                        CommonUI__OpenClassBoardEffectListDialog((CommonUI_o *)Instance, 1, v33, 0, v47, 1, v35, 0LL);
                        return;
                      }
                    }
                  }
                  else
                  {
                    v34 = 0;
                    while ( 1 )
                    {
                      if ( v34 >= max_length )
                        sub_1B6432C(this, v27, v28, v29);
                      v35 = userClassBoardInfo->m_Items[v34];
                      if ( !v35 )
                        break;
                      if ( v35->fields.classBoardBaseId == v33 )
                      {
                        this = (FollowerSelectItemListViewManager_o *)ClassBoardInfo__IsReleasedClassId(
                                                                        v35,
                                                                        scrollView,
                                                                        0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          goto LABEL_48;
                      }
                      max_length = userClassBoardInfo->max_length;
                      if ( (int)++v34 >= max_length )
                        goto LABEL_30;
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_1B64324(this);
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
    sub_1B64324(0LL);
  ClassButtonControlComponent__PlayRecommendEffect(classButtonControl, 0LL);
}


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
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v10; // x20
  int v11; // w24
  int32_t v12; // w21
  Il2CppObject *Item; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x23
  const MethodInfo *v17; // x3

  if ( (byte_49F77C4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v5);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v6);
    byte_49F77C4 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = FollowerSelectItemListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_13:
    sub_1B64324(ObjectList);
  size = ObjectList->fields._size;
  v10 = (System_Collections_Generic_List_object__o *)ObjectList;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v11 = 0;
  v12 = 0;
  do
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v10,
             v12,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v11;
      FollowerSelectItemListViewObject__Init_30595692((FollowerSelectItemListViewObject_o *)Item, 4, v16, 0.1, v17);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v12;
  }
  while ( v12 < v10->fields._size );
  if ( !v11 )
  {
LABEL_12:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F77C2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__, v9);
    sub_1B640C8(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v12);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v13);
    byte_49F77C2 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
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
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v20);
      FollowerSelectItemListViewObject__Init_30595692(
        (FollowerSelectItemListViewObject_o *)current,
        mode,
        v19,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__RequestListObject_30594576(
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F77C3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__, v7);
    sub_1B640C8(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v10);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v11);
    byte_49F77C3 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
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
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v18);
      FollowerSelectItemListViewObject__Init_30595080((FollowerSelectItemListViewObject_o *)current, mode, v17, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


void __fastcall FollowerSelectItemListViewManager__SaveSortFilter(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ListViewSort_o *sort; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *v7; // x8
  FollowerSelectItemListViewManager_o *v8; // x0
  int monitor; // w20
  const MethodInfo *v10; // x1
  FollowerSelectItemListViewManager_c *v11; // x0
  FollowerSelectItemListViewManager_o *v12; // x0
  int monitor_high; // w20
  FollowerSelectItemListViewManager_c *v14; // x0

  if ( (byte_49F77BC & 1) == 0 )
  {
    sub_1B640C8(&FollowerSelectItemListViewManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_6720/*"FollowerSelectClass"*/, v3);
    sub_1B640C8(&StringLiteral_6723/*"FollowerSelectOldClass"*/, v4);
    byte_49F77BC = 1;
  }
  sort = this->fields.sort;
  if ( !sort || (ListViewSort__Save(sort, 0LL), (v7 = this->fields.sort) == 0LL) )
    sub_1B64324(sort);
  if ( v7->fields.isRequestSave )
  {
    v8 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v8 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor = (int)v8->fields.sort->monitor;
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(v8, v6) )
    {
      v11 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v11 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6720/*"FollowerSelectClass"*/, v11->static_fields->followerClassId, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
    v12 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v12 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor_high = HIDWORD(v12->fields.sort->monitor);
    if ( monitor_high != FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(v12, v10) )
    {
      v14 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v14 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(
        (System_String_o *)StringLiteral_6723/*"FollowerSelectOldClass"*/,
        v14->static_fields->oldFollowerClassId,
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
    sub_1B64324(0LL);
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
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x8
  System_Collections_Generic_List_int__o *v14; // x21
  unsigned __int64 v15; // x23
  int32_t v16; // w22
  bool isBonusFilterEnable; // w27
  bool isServantBonusFilterEnable; // w27
  bool isServantEquipBonusFilterEnable; // w27
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F77B0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventFilterMaster___, eventIds);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_int___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Remove__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49F77B0 = 1;
  }
  entity = 0LL;
  *(_WORD *)&this->fields.isBonusFilterEnable = 0;
  this->fields.isServantEquipBonusFilterEnable = 0;
  Instance = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)eventIds,
                                                         (const MethodInfo_2E74DB0 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !eventIds )
    goto LABEL_22;
  v13 = *(_QWORD *)&eventIds->max_length;
  v14 = Instance;
  if ( v13 && (int)v13 >= 1 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)v13 )
        sub_1B6432C(Instance, v10, v11, v12);
      v16 = eventIds->m_Items[v15 + 1];
      Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventFilterMaster___);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)EventFilterMaster__TryGetEntity_38812140(
                                                             (EventFilterMaster_o *)Instance,
                                                             &entity,
                                                             v16,
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
          if ( !v14 )
            break;
          Instance = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Remove(
                                                                 v14,
                                                                 v16,
                                                                 (const MethodInfo_3491478 *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
      else
      {
        *(_WORD *)&this->fields.isBonusFilterEnable = 257;
        this->fields.isServantEquipBonusFilterEnable = 1;
      }
      LODWORD(v13) = eventIds->max_length;
      if ( (__int64)++v15 >= (int)v13 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B64324(Instance);
  }
LABEL_20:
  if ( !v14 )
    goto LABEL_22;
  this->fields.equipBonusFilterEventIds = System_Collections_Generic_List_int___ToArray(
                                            v14,
                                            (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  sub_1B6406C(&this->fields.equipBonusFilterEventIds);
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
  System_Collections_Generic_Dictionary_int__int__o **p_classBoardMaxDictionary; // x20
  System_Collections_Generic_Dictionary_int__int__o *v25; // x19
  System_Collections_ObjectModel_Collection_T__o *Master_object; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x21
  __int64 methodPtr_low; // x9
  Il2CppObject *v39; // x0
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0

  if ( (byte_49F77B2 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&BalanceConfig_TypeInfo, v3);
    sub_1B640C8(&ClassBoardBaseEntity_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5);
    sub_1B640C8(&CondType_TypeInfo, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Clear__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_1B640C8(&System_IDisposable_TypeInfo, v14);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1B640C8(&StringLiteral_17601/*"buttontxt_formation_20"*/, v17);
    byte_49F77B2 = 1;
  }
  v18 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v18->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_37285996(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17601/*"buttontxt_formation_20"*/, 0LL);
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = &this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_311B034 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v25 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v20,
                                                                 v21);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v25,
      (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *p_classBoardMaxDictionary = v25;
    sub_1B6406C(p_classBoardMaxDictionary);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object
    || (Master_object = (System_Collections_ObjectModel_Collection_T__o *)Master_object[1].monitor) == 0LL )
  {
    sub_1B64324(Master_object);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Master_object,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v29;
        p_offset += 4;
        if ( !v29 )
          goto LABEL_23;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_23:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v32 = Enumerator->klass;
    v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v34 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_30;
      }
      v35 = (__int64)&v32->vtable[*v34].method;
    }
    else
    {
LABEL_30:
      v35 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
            Enumerator,
            *(_QWORD *)(v35 + 8));
    v37 = v36;
    if ( v36 )
    {
      methodPtr_low = LOBYTE(ClassBoardBaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v36 + 304LL) < (unsigned int)methodPtr_low
        || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v36 + 200LL) + 8 * methodPtr_low - 8) != ClassBoardBaseEntity_TypeInfo )
      {
        v39 = (Il2CppObject *)sub_1B645E4(v36);
LABEL_50:
        sub_1B64324(v39);
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v39 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v37 )
      goto LABEL_50;
    if ( !v39 )
      sub_1B64324(0LL);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                            (ClassBoardSquareMaster_o *)v39,
                            *(_DWORD *)(v37 + 16),
                            0LL);
    if ( OtherThanNoneEntity )
    {
      if ( !*p_classBoardMaxDictionary )
        sub_1B64324(OtherThanNoneEntity);
      System_Collections_Generic_Dictionary_int__int___Add(
        *p_classBoardMaxDictionary,
        *(_DWORD *)(v37 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v41 = Enumerator->klass;
  v42 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_46;
    }
    v44 = (__int64)&v41->vtable[*v43].method;
  }
  else
  {
LABEL_46:
    v44 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(Enumerator, *(_QWORD *)(v44 + 8));
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
  System_Collections_Generic_List_object__o *v17; // x22
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 methodPtr_low; // x10
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_IEnumerable_T__o *recommendItemList; // x21
  System_Collections_Generic_List_object__o *v23; // x22
  __int64 v24; // x10
  System_Collections_Generic_IEnumerable_T__o *originalItemList; // x21
  System_Collections_Generic_List_object__o *v26; // x22
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x20
  __int64 v28; // x10
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49F77C0 & 1) == 0 )
  {
    sub_1B640C8(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&followerClassId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_1B640C8(&FollowerSelectItemListViewItem_TypeInfo, v8);
    sub_1B640C8(&FollowerSelectItemListViewManager_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem___ctor___75658256, v11);
    sub_1B640C8(&System_Collections_Generic_List_ListViewItem__TypeInfo, v12);
    byte_49F77C0 = 1;
  }
  v13 = FollowerSelectItemListViewManager_TypeInfo;
  memset(&v30, 0, sizeof(v30));
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v13 = FollowerSelectItemListViewManager_TypeInfo;
  }
  v13->static_fields->followerClassId = followerClassId;
  if ( this->fields.mixItemList && this->fields.originalItemList )
  {
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    if ( ClassButtonControlComponent__IsMixSupportGroupType(followerClassId, 0LL) )
    {
      mixItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.mixItemList;
      v17 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                           v14,
                                                           v15);
      System_Collections_Generic_List_object____ctor_55234504(
        v17,
        mixItemList,
        (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_ListViewItem___ctor___75658256);
      this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v17;
      sub_1B6406C(&this->fields.itemList);
      itemList = this->fields.itemList;
      if ( itemList )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v29,
          (System_Collections_Generic_List_object__o *)itemList,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v30 = v29;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v30,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( v30.fields._current )
          {
            methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(v30.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
              && (FollowerSelectItemListViewItem_c *)v30.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo )
            {
              FollowerSelectItemListViewItem__UpdateRestriction(
                (FollowerSelectItemListViewItem_o *)v30.fields._current,
                0LL);
            }
          }
        }
LABEL_34:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v30,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        return;
      }
    }
    else
    {
      if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      if ( ClassButtonControlComponent__IsRecommendSupportGroupType(followerClassId, 0LL) )
      {
        recommendItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.recommendItemList;
        v23 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                             System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                             v20,
                                                             v21);
        System_Collections_Generic_List_object____ctor_55234504(
          v23,
          recommendItemList,
          (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_ListViewItem___ctor___75658256);
        this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v23;
        sub_1B6406C(&this->fields.itemList);
        itemList = this->fields.itemList;
        if ( itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v29,
            (System_Collections_Generic_List_object__o *)itemList,
            (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v30 = v29;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v30,
                    (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v30.fields._current )
            {
              v24 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(v30.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v24
                && (FollowerSelectItemListViewItem_c *)v30.fields._current->klass->_2.typeHierarchy[v24 - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__UpdateRestriction(
                  (FollowerSelectItemListViewItem_o *)v30.fields._current,
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
        v26 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                             System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                             v20,
                                                             v21);
        System_Collections_Generic_List_object____ctor_55234504(
          v26,
          originalItemList,
          (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_ListViewItem___ctor___75658256);
        this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v26;
        p_itemList = &this->fields.itemList;
        sub_1B6406C(p_itemList);
        itemList = *p_itemList;
        if ( *p_itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v29,
            (System_Collections_Generic_List_object__o *)itemList,
            (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v30 = v29;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v30,
                    (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v30.fields._current )
            {
              v28 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(v30.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v28
                && (FollowerSelectItemListViewItem_c *)v30.fields._current->klass->_2.typeHierarchy[v28 - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__SetClassId(
                  (FollowerSelectItemListViewItem_o *)v30.fields._current,
                  followerClassId,
                  0LL);
              }
            }
          }
          goto LABEL_34;
        }
      }
    }
    sub_1B64324(itemList);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__SetEmptyMessage(
        FollowerSelectItemListViewManager_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o **v8; // x8
  System_String_o *v9; // x20
  UILabel_o *emptyMessageLabel; // x19
  System_String_o *v11; // x0

  if ( (byte_49F77B7 & 1) == 0 )
  {
    sub_1B640C8(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classId);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_10950/*"RECOMMEND_SERVANT_EMPTY"*/, v6);
    sub_1B640C8(&StringLiteral_11717/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v7);
    byte_49F77B7 = 1;
  }
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(classId, 0LL) )
    v8 = (System_String_o **)&StringLiteral_10950/*"RECOMMEND_SERVANT_EMPTY"*/;
  else
    v8 = (System_String_o **)&StringLiteral_11717/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  v9 = *v8;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get(v9, 0LL);
  if ( !emptyMessageLabel )
    sub_1B64324(v11);
  UILabel__set_text(emptyMessageLabel, v11, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__SetFilterButtonImage(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *bonusFilterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_49F77CC & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17464/*"btn_sefilter_2_on"*/, method);
    sub_1B640C8(&StringLiteral_17463/*"btn_sefilter_2"*/, v3);
    byte_49F77CC = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (bonusFilterSprite = this->fields.bonusFilterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !bonusFilterSprite) )
  {
    sub_1B64324(sort);
  }
  v6 = (System_String_o **)&StringLiteral_17463/*"btn_sefilter_2"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17464/*"btn_sefilter_2_on"*/;
  UISprite__set_spriteName(bonusFilterSprite, *v6, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__SetMode(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        FollowerSelectItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B6406C(&this->fields.callbackFunc);
  FollowerSelectItemListViewManager__SetMode_30593824(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__SetMode_30593824(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *ClippingObjectList; // x0
  System_Collections_Generic_List_object__o *v11; // x19
  int32_t v12; // w20
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  __int64 *v15; // x8
  const MethodInfo *v16; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w21
  Il2CppObject *Item; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  System_Action_o *v23; // x23
  const MethodInfo *v24; // x3
  struct FollowerSelectItemListViewObject_o *tutorialListViewObject; // x23
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x2

  if ( (byte_49F77C1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v7);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v8);
    sub_1B640C8(&StringLiteral_11257/*"RequestInto"*/, v9);
    byte_49F77C1 = 1;
  }
  if ( mode != 3 )
  {
    this->fields.initMode = mode;
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
    ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
    if ( mode == 1 )
    {
      v15 = &StringLiteral_11257/*"RequestInto"*/;
    }
    else
    {
      if ( mode != 4 )
      {
        if ( mode == 2 )
          FollowerSelectItemListViewManager__RequestListObject_30594576(this, 3, v14);
        return;
      }
      ListViewManager__set_IsInput((ListViewManager_o *)this, 1, 0LL);
      ClippingObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ClippingObjectList(
                                                                          this,
                                                                          v16);
      if ( !ClippingObjectList )
        goto LABEL_31;
      size = ClippingObjectList->fields._size;
      v18 = ClippingObjectList;
      if ( size >= 1 )
      {
        this->fields.callbackCount = size;
        v19 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v18,
                   v19,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
          v23 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v21, v22);
          System_Action___ctor(v23, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
            break;
          if ( v19 )
          {
            FollowerSelectItemListViewObject__Init_30595080((FollowerSelectItemListViewObject_o *)Item, 2, v23, v24);
          }
          else
          {
            FollowerSelectItemListViewObject__Init_30595080((FollowerSelectItemListViewObject_o *)Item, 0, v23, v24);
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
            sub_1B6406C(&ClippingObjectList[1]);
            tutorialListViewObject = this->fields.tutorialListViewObject;
            ClippingObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewObject__GetItem(
                                                                                (FollowerSelectItemListViewObject_o *)Item,
                                                                                v26);
            if ( !tutorialListViewObject )
              break;
            ((void (__fastcall *)(struct FollowerSelectItemListViewObject_o *, System_Collections_Generic_List_object__o *, Il2CppMethodPointer))tutorialListViewObject->klass->vtable._5_SetItem.method)(
              tutorialListViewObject,
              ClippingObjectList,
              tutorialListViewObject->klass->vtable._6_SetItem.methodPtr);
            ClippingObjectList = (System_Collections_Generic_List_object__o *)this->fields.tutorialListViewObject;
            if ( !ClippingObjectList )
              break;
            FollowerSelectItemListViewObject__Init_30592340(
              (FollowerSelectItemListViewObject_o *)ClippingObjectList,
              6,
              v27);
          }
          if ( ++v19 >= v18->fields._size )
            return;
        }
LABEL_31:
        sub_1B64324(ClippingObjectList);
      }
      this->fields.callbackCount = 1;
      v15 = &StringLiteral_9890/*"OnMoveEnd"*/;
    }
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)*v15, 0.0, 0LL);
    return;
  }
  ClippingObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                                      this,
                                                                      *(const MethodInfo **)&mode);
  if ( !ClippingObjectList )
    goto LABEL_31;
  v11 = ClippingObjectList;
  if ( ClippingObjectList->fields._size >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      ClippingObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          v11,
                                                                          v12,
                                                                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
      if ( !ClippingObjectList )
        break;
      FollowerSelectItemListViewObject__Init_30592340((FollowerSelectItemListViewObject_o *)ClippingObjectList, 5, v13);
      if ( ++v12 >= v11->fields._size )
        return;
    }
    goto LABEL_31;
  }
}


void __fastcall FollowerSelectItemListViewManager__SetMode_30594524(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B6406C(&this->fields.callbackFunc2);
  FollowerSelectItemListViewManager__SetMode_30593824(this, mode, v6);
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

  if ( (byte_49F77BE & 1) == 0 )
  {
    sub_1B640C8(&FollowerSelectItemListViewObject_TypeInfo, obj);
    byte_49F77BE = 1;
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
    sub_1B64324(v7);
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
  FollowerSelectItemListViewObject__Init_30592340(
    (FollowerSelectItemListViewObject_o *)v7,
    v9,
    (const MethodInfo *)item);
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
  __int64 v9; // x1
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  ListViewSort_o *sort; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w20
  bool IsRecommendSupportGroupType; // w20
  UILabel_o *sortKindLabel; // x21
  UnityEngine_Object_o *sortOrderSprite; // x21
  struct ListViewSort_o *v17; // x8
  __int64 v18; // x9
  int v19; // w9
  System_String_o **v20; // x8
  struct ListViewSort_o *v21; // x8
  System_String_o **v22; // x9
  System_String_o **v23; // x10
  System_String_o **v24; // x8
  System_String_o **v25; // x8

  if ( (byte_49F77D0 & 1) == 0 )
  {
    sub_1B640C8(&ClassButtonControlComponent_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_17471/*"btn_sort_up"*/, v4);
    sub_1B640C8(&StringLiteral_17558/*"btn_txt_up"*/, v5);
    sub_1B640C8(&StringLiteral_17514/*"btn_txt_new"*/, v6);
    sub_1B640C8(&StringLiteral_17504/*"btn_txt_down"*/, v7);
    sub_1B640C8(&StringLiteral_17521/*"btn_txt_old"*/, v8);
    sub_1B640C8(&StringLiteral_17468/*"btn_sort_down"*/, v9);
    byte_49F77D0 = 1;
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL);
  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl )
    goto LABEL_39;
  currentCursor = classButtonControl->fields.currentCursor;
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v17 = this->fields.sort;
    if ( v17 )
    {
      v18 = 56LL;
      if ( IsRecommendSupportGroupType )
        v18 = 152LL;
      v19 = *(_DWORD *)((char *)&v17->klass + v18);
      if ( v19 == 11 || v19 == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v20 = (System_String_o **)(v17->fields.isAscendingOrder ? &StringLiteral_17521/*"btn_txt_old"*/ : &StringLiteral_17514/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
          v21 = this->fields.sort;
          if ( v21 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v22 = (System_String_o **)&StringLiteral_17468/*"btn_sort_down"*/;
              v23 = (System_String_o **)&StringLiteral_17471/*"btn_sort_up"*/;
LABEL_35:
              if ( v21->fields.isAscendingOrder )
                v25 = v22;
              else
                v25 = v23;
              UISprite__set_spriteName((UISprite_o *)sort, *v25, 0LL);
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
          v24 = (System_String_o **)(v17->fields.isAscendingOrder ? &StringLiteral_17558/*"btn_txt_up"*/ : &StringLiteral_17504/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v24, 0LL);
          v21 = this->fields.sort;
          if ( v21 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v22 = (System_String_o **)&StringLiteral_17471/*"btn_sort_up"*/;
              v23 = (System_String_o **)&StringLiteral_17468/*"btn_sort_down"*/;
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_39:
    sub_1B64324(sort);
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
  System_Collections_Generic_List_object__o *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x20
  int size; // w25
  int32_t v24; // w22
  int v25; // w26
  Il2CppObject *v26; // x23
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  System_Collections_Generic_List_object__o *v32; // x22
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  if ( (byte_49F77D3 & 1) == 0 )
  {
    sub_1B640C8(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classPos);
    sub_1B640C8(&FollowerSelectItemListViewItem_TypeInfo, v5);
    sub_1B640C8(&FollowerSelectItemListViewManager_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem___ctor___75658256, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1B640C8(&System_Collections_Generic_List_ListViewItem__TypeInfo, v12);
    byte_49F77D3 = 1;
  }
  v13 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v13 = FollowerSelectItemListViewManager_TypeInfo;
  }
  if ( v13->static_fields->followerClassId != classPos )
  {
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    if ( !ClassButtonControlComponent__IsMixSupportGroupType(classPos, 0LL) )
    {
      v14 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v14 = FollowerSelectItemListViewManager_TypeInfo;
      }
      followerClassId = v14->static_fields->followerClassId;
      if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      ClassButtonControlComponent__IsMixSupportGroupType(followerClassId, 0LL);
    }
  }
  FollowerSelectItemListViewManager__SetClassId(this, classPos, method);
  v18 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                       v16,
                                                       v17);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  p_itemList = &this->fields.itemList;
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_43;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v24 = 0;
    v25 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v24,
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      v26 = (Il2CppObject *)itemList;
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
        HIDWORD(v26[1].klass) = v25;
        if ( !v18 )
          break;
        items = v18->fields._items;
        v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v18->fields._version;
        if ( !items )
          break;
        v30 = v18->fields._size;
        if ( (unsigned int)v30 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            v26,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + v30;
          v18->fields._size = v30 + 1;
          v31[4] = (Il2CppClass *)v26;
          sub_1B6406C(v31 + 4);
        }
        ++v25;
      }
      if ( size == ++v24 )
        goto LABEL_30;
      itemList = (System_Collections_Generic_List_object__o *)*p_itemList;
    }
    while ( *p_itemList );
LABEL_43:
    sub_1B64324(itemList);
  }
LABEL_30:
  v32 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor_55234504(
    v32,
    (System_Collections_Generic_IEnumerable_T__o *)v18,
    (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_ListViewItem___ctor___75658256);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v32;
  sub_1B6406C(&this->fields.itemList);
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
  FollowerSelectItemListViewManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w20
  int64_t RefreshRemain; // x0
  __int64 v15; // x20
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x21
  UIWidget_o *refreshButtonSprite; // x21
  int64_t Time; // x0
  int64_t v20; // x21
  UILabel_o *refreshRemainLabel; // x22
  Il2CppObject *v22; // x0
  Il2CppObject *Component_object; // x20
  Il2CppObject *v24; // x20
  __int64 v25; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_49F77D4 & 1) == 0 )
  {
    sub_1B640C8(&ClassButtonControlComponent_TypeInfo, method);
    sub_1B640C8(&FollowerListRequest_TypeInfo, v3);
    sub_1B640C8(&FollowerRecommendSupportListRequest_TypeInfo, v4);
    sub_1B640C8(&FollowerSelectItemListViewManager_TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, v6);
    sub_1B640C8(&long_TypeInfo, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_24883/*"{0}"*/, v10);
    this = (FollowerSelectItemListViewManager_o *)sub_1B640C8(&StringLiteral_1/*""*/, v11);
    byte_49F77D4 = 1;
  }
  classButtonControl = v2->fields.classButtonControl;
  if ( !classButtonControl )
    goto LABEL_59;
  currentCursor = classButtonControl->fields.currentCursor;
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(currentCursor, 0LL) )
  {
    if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
    RefreshRemain = FollowerRecommendSupportListRequest__GetRefreshRemain(0LL);
  }
  else
  {
    if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    RefreshRemain = FollowerListRequest__getRefreshRemain(0LL);
  }
  v15 = RefreshRemain;
  if ( RefreshRemain <= 0 )
  {
    if ( !v2->fields.isRefreshClear )
      return;
    this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshButtonObject;
    v2->fields.isRefreshClear = 0;
    if ( !this )
      goto LABEL_59;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshButtonSprite;
      if ( !this )
        goto LABEL_59;
      v26.fields.r = 1.0;
      v26.fields.g = 1.0;
      v26.fields.b = 1.0;
      v26.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this, v26, 0LL);
    }
    this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshTitleObject;
    if ( this )
    {
      v24 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)this,
              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (FollowerSelectItemListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                      (UnityEngine_Object_o *)v24,
                                                      0LL,
                                                      0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v24 )
          goto LABEL_59;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v24, 1, 0LL);
      }
      else
      {
        this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshTitleSprite;
        if ( !this )
          goto LABEL_59;
        v27.fields.r = 1.0;
        v27.fields.g = 1.0;
        v27.fields.b = 1.0;
        v27.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v27, 0LL);
      }
      this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshRemainLabel;
      if ( this )
      {
        this = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshRemainLabel;
          if ( this )
          {
            UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_59:
    sub_1B64324(this);
  }
  this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshButtonObject;
  if ( !this )
    goto LABEL_59;
  v16 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FollowerSelectItemListViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v16 )
      goto LABEL_59;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v16, 0, 0LL);
  }
  this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshTitleObject;
  if ( !this )
    goto LABEL_59;
  v17 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FollowerSelectItemListViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v17 )
      goto LABEL_59;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v17, 0, 0LL);
  }
  refreshButtonSprite = (UIWidget_o *)v2->fields.refreshButtonSprite;
  this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
  }
  if ( !refreshButtonSprite )
    goto LABEL_59;
  UIWidget__set_color(refreshButtonSprite, *(UnityEngine_Color_o *)&this->fields.sort->fields.FILTER_DEFAULT_VALUE, 0LL);
  this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshTitleSprite;
  if ( !this )
    goto LABEL_59;
  UIWidget__set_color(
    (UIWidget_o *)this,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->REFRESH_DARK_COLOR,
    0LL);
  v2->fields.isRefreshClear = 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( v2->fields.refreshCheckTime != Time )
  {
    v20 = Time;
    this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshRemainLabel;
    if ( this )
    {
      this = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        refreshRemainLabel = v2->fields.refreshRemainLabel;
        v25 = v15;
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v25);
        this = (FollowerSelectItemListViewManager_o *)System_String__Format(
                                                        (System_String_o *)StringLiteral_24883/*"{0}"*/,
                                                        v22,
                                                        0LL);
        if ( refreshRemainLabel )
        {
          UILabel__set_text(refreshRemainLabel, (System_String_o *)this, 0LL);
          v2->fields.refreshCheckTime = v20;
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

  if ( (byte_49F77A8 & 1) == 0 )
  {
    sub_1B640C8(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_49F77A8 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1B645E4(v7);
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

  if ( (byte_49F77AA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F77AA = 1;
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
  v10 = (FollowerSelectItemListViewManager_o *)sub_1B645E4(v7);
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
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *v18; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v20; // x0
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49F77AF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49F77AF = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v18 = Component_object;
      if ( !Component_object )
        sub_1B64324(0LL);
      Item = (ListViewItem_o *)FollowerSelectItemListViewObject__GetItem(
                                 (FollowerSelectItemListViewObject_o *)Component_object,
                                 v17);
      if ( !Item )
        sub_1B64324(0LL);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_40389508((ListViewManager_o *)this, Item, 0LL);
        if ( v20 )
        {
          if ( !v12 )
            sub_1B64324(v20);
          items = v12->fields._items;
          v22 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
          ++v12->fields._version;
          if ( !items )
            sub_1B64324(v20);
          size = v12->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v18,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v12 )
          sub_1B64324(Item);
        items = v12->fields._items;
        v22 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1B64324(Item);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v24 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v18;
        sub_1B6406C(v24 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  Il2CppObject *v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49F77AE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49F77AE = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v17 = Component_object;
      if ( !v12 )
        sub_1B64324(Component_object);
      items = v12->fields._items;
      v19 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B64324(Component_object);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          Component_object,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v17;
        sub_1B6406C(v21 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_49F77A9 & 1) == 0 )
  {
    sub_1B640C8(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_49F77A9 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1B645E4(v7);
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

  if ( (byte_49F77AB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F77AB = 1;
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
  v10 = (const MethodInfo *)sub_1B645E4(v7);
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
  sub_1B6406C(&this->fields.method);
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
  this->fields.m_target = (Il2CppObject *)sub_19A4960;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A4908;
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
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+28h] [xbp-38h] BYREF
  int32_t v13; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_49F77DD & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&FollowerSelectItemListViewManager_ResultKind_TypeInfo, v9);
    byte_49F77DD = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(FollowerSelectItemListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v11, callback, object);
}


void __fastcall FollowerSelectItemListViewManager_CallbackFunc__EndInvoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  Il2CppObject *v3; // x19

  if ( (byte_49F77DE & 1) == 0 )
  {
    sub_1B640C8(&FollowerSelectItemListViewManager___c_TypeInfo, v1);
    byte_49F77DE = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(FollowerSelectItemListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  FollowerSelectItemListViewManager___c_TypeInfo->static_fields->__9 = (struct FollowerSelectItemListViewManager___c_o *)v3;
  sub_1B6406C(FollowerSelectItemListViewManager___c_TypeInfo->static_fields);
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

  if ( (byte_49F77DF & 1) == 0 )
  {
    sub_1B640C8(&ListViewSort_TypeInfo, *(_QWORD *)&questType);
    sub_1B640C8(&StringLiteral_6721/*"FollowerSelectEventQuest"*/, v4);
    sub_1B640C8(&StringLiteral_6722/*"FollowerSelectMainQuest"*/, v5);
    byte_49F77DF = 1;
  }
  if ( questType )
  {
    if ( questType != 1 )
    {
      v10 = sub_1B640DC(&System_NotImplementedException_TypeInfo);
      v13 = (System_NotImplementedException_o *)sub_1B64314(v10, v11, v12);
      System_NotImplementedException___ctor(v13, 0LL);
      v14 = sub_1B640DC(&Method_FollowerSelectItemListViewManager___c___cctor_b__133_0__);
      sub_1B641F0(v13, v14);
    }
    v6 = &StringLiteral_6721/*"FollowerSelectEventQuest"*/;
  }
  else
  {
    v6 = &StringLiteral_6722/*"FollowerSelectMainQuest"*/;
  }
  v7 = (System_String_o *)*v6;
  v8 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, *(_QWORD *)&questType, method);
  ListViewSort___ctor_40426136(v8, v7, 11, 0, 0LL);
  return v8;
}