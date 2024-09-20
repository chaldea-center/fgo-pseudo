void __fastcall FollowerSelectItemListViewManager___cctor(const MethodInfo *method)
{
  FollowerSelectItemListViewManager___c_c *v1; // x0
  Il2CppObject *v2; // x19
  System_Func_T__TResult__o *v3; // x20
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4A56498 & 1) == 0 )
  {
    sub_1B885B0(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1B885B0(&System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo);
    sub_1B885B0(&Method_FollowerSelectItemListViewManager___c___cctor_b__133_0__);
    sub_1B885B0(&FollowerSelectItemListViewManager___c_TypeInfo);
    byte_4A56498 = 1;
  }
  v1 = FollowerSelectItemListViewManager___c_TypeInfo;
  if ( !FollowerSelectItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager___c_TypeInfo);
    v1 = FollowerSelectItemListViewManager___c_TypeInfo;
  }
  v2 = (Il2CppObject *)v1->static_fields->__9;
  v3 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo);
  System_Func_Int32Enum__object____ctor(v3, v2, Method_FollowerSelectItemListViewManager___c___cctor_b__133_0__, 0LL);
  FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT = (struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)v3;
  sub_1B88554(FollowerSelectItemListViewManager_TypeInfo->static_fields, v3);
  static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->lastSelectedQuestId = -1LL;
  static_fields->REFRESH_DARK_COLOR = (struct UnityEngine_Color_o)xmmword_BB4AE0;
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
  Il2CppObject *Component_object; // x19

  if ( (byte_4A5646D & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1B885B0(&StringLiteral_17476/*"btn_bg_12"*/);
    sub_1B885B0(&StringLiteral_17533/*"btn_sefilter_2"*/);
    sub_1B885B0(&StringLiteral_17670/*"buttontxt_formation_19"*/);
    byte_4A5646D = 1;
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
  AtlasManager__SetEventSprite(changeSkillButtonSprite, (System_String_o *)StringLiteral_17670/*"buttontxt_formation_19"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.bonusFilterSprite, (System_String_o *)StringLiteral_17533/*"btn_sefilter_2"*/, 0LL);
  changeSkillButton = (UnityEngine_Component_o *)this->fields.bonusFilterSprite;
  if ( !changeSkillButton
    || (changeSkillButton = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))changeSkillButton->klass[2]._1.typeMetadataHandle)(
                                                         changeSkillButton,
                                                         changeSkillButton->klass[2]._1.interopData),
        !sortKindButton)
    || (Component_object = UnityEngine_Component__GetComponent_object_(
                             sortKindButton,
                             (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___),
        changeSkillButton = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(
                                                         (UISprite_o *)Component_object,
                                                         (System_String_o *)StringLiteral_17476/*"btn_bg_12"*/,
                                                         0LL),
        !Component_object) )
  {
LABEL_11:
    sub_1B8880C(changeSkillButton, method);
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
    sub_1B8880C(classButtonControl, *(_QWORD *)&classPos);
  }
  return sort->fields.sortKind != 11;
}


void __fastcall FollowerSelectItemListViewManager__CloseSortDialog(
        FollowerSelectItemListViewManager_o *this,
        bool isResult,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A5648A & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5648A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
  CommonUI__CloseOtherUserSortDialog((CommonUI_o *)Instance, 0LL, 0LL);
  if ( isResult )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


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
  System_Collections_Generic_List_object__o *v8; // x24
  System_Collections_Generic_List_object__o *v9; // x24
  System_Collections_Generic_List_object__o *v10; // x24
  __int64 ReturnTypeByQuestId; // x0
  __int64 v12; // x1
  FollowerSelectItemListViewManager_c *v13; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct ListViewSort_o *v15; // x0
  struct ListViewSort_o **p_sort; // x24
  const MethodInfo *v17; // x4
  int32_t InitialDisplayClass; // w25
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
  System_Int32_array *OngoingQuestTargetEventIds; // x25
  EventUpValSetupInfo_o *v21; // x26
  __int64 v22; // x8
  __int64 v23; // x26
  unsigned __int64 v24; // x20
  int32_t v25; // w0
  ClassButtonControlComponent_o *classButtonControl; // x24
  ClassButtonControlComponent_CallbackFunc_o *v27; // x26
  ClassButtonControlComponent_o *v28; // x24
  const MethodInfo *v29; // x2
  QuestPhaseEntity_o *v30; // x29
  __int64 v31; // x0
  __int64 v32; // x0
  Il2CppObject *MasterData_object; // x23
  FollowerInfo_array *QuestFollowerList; // x27
  int v35; // w20
  QuestRestrictionInfo_o *v36; // x19
  bool IsMyServantOrNpcRestriction_40453904; // w26
  BalanceConfig_c *v38; // x0
  int32_t ClassBoardReleaseQuestId; // w24
  bool IsQuestClear_37596684; // w24
  __int64 v41; // x8
  FollowerSelectItemListViewManager_o *v42; // x19
  QuestRestrictionInfo_o *v43; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x28
  unsigned __int64 v45; // x21
  FollowerInfo_o *v46; // x24
  __int64 v47; // x25
  int32_t v48; // w0
  System_Int32_array *NpcServantIndividuality; // x0
  bool IsRecommendedFollower; // w19
  __int64 v51; // x26
  __int64 v52; // x28
  int32_t v53; // w0
  System_Collections_Generic_List_object__o *v54; // x25
  char v55; // w20
  ClassBoardClassMaster_o *v56; // x27
  QuestPhaseEntity_o *v57; // x19
  int32_t v58; // w0
  ServantLeaderInfo_o *ServantLeaderInfo; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v60; // x28
  __int64 v61; // x26
  __int64 v62; // x29
  int32_t ClassBoardBaseId; // w26
  Il2CppObject *Master_object; // x28
  ClassBoardInfo_o *v65; // x20
  QuestPhaseEntity_o *v66; // x23
  int32_t v67; // w29
  Il2CppObject *v68; // x26
  __int64 v69; // x0
  System_Int32_array *OpenClassIdArrayFromBaseId; // x0
  struct System_Object_array *items; // x8
  _QWORD *v72; // x9
  __int64 size; // x10
  Il2CppClass **v74; // x0
  System_Object_array *v75; // x0
  FollowerSelectItemListViewManager_c *v76; // x0
  int32_t v77; // w28
  EventUpValSetupInfo_o *setupInfo; // x22
  struct System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x20
  bool isServantEquipBonusFilterEnable; // w23
  bool isServantBonusFilterEnable; // w26
  bool isBonusFilterEnable; // w27
  FollowerSelectItemListViewItem_o *v83; // x25
  __int64 v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  __int64 v87; // x8
  __int64 v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  __int64 v91; // x8
  __int64 v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  __int64 v95; // x8
  int v96; // w20
  bool v97; // w8
  FollowerSelectItemListViewManager_o *v98; // x20
  Il2CppClass *klass; // x23
  int namespaze; // w8
  Il2CppObject *v101; // x24
  void **v102; // x8
  Il2CppObject *v103; // x0
  Il2CppObject *v104; // x25
  __int64 v105; // x27
  BalanceConfig_c *v106; // x0
  struct BalanceConfig_StaticFields *v107; // x9
  int32_t FixEventSupportDeckNum; // w25
  int32_t FixMainSupportDeckNum; // w26
  int32_t deckPriority; // w28
  unsigned __int64 v111; // x21
  System_Collections_Generic_Dictionary_int__int__o *v112; // x25
  int32_t v113; // w22
  bool v114; // w29
  bool v115; // w27
  FollowerSelectItemListViewItem_o *v116; // x26
  __int64 v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  __int64 v120; // x8
  struct BalanceConfig_StaticFields *v121; // x8
  int32_t v122; // w26
  int32_t v123; // w28
  int32_t v124; // w26
  unsigned __int64 v125; // x22
  int32_t v126; // w21
  Il2CppClass *v127; // x21
  EventUpValSetupInfo_o *v128; // x23
  bool v129; // w24
  System_Collections_Generic_Dictionary_int__int__o *v130; // x19
  int v131; // w27
  bool v132; // w25
  bool v133; // w29
  FollowerSelectItemListViewItem_o *v134; // x28
  __int64 v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  __int64 v138; // x8
  Il2CppClass *v139; // x26
  unsigned __int64 namespaze_low; // x8
  unsigned __int64 v141; // x27
  __int64 v142; // x9
  __int64 v143; // x9
  void **v144; // x8
  FollowerInfo_o *v145; // x8
  Il2CppObject *v146; // x0
  __int64 v147; // x21
  BalanceConfig_c *v148; // x0
  struct BalanceConfig_StaticFields *v149; // x9
  int32_t v150; // w24
  int32_t v151; // w25
  int32_t v152; // w25
  unsigned __int64 v153; // x22
  System_Collections_Generic_Dictionary_int__int__o *v154; // x23
  int32_t v155; // w29
  bool v156; // w21
  bool v157; // w28
  bool v158; // w19
  FollowerSelectItemListViewItem_o *v159; // x24
  __int64 v160; // x8
  _QWORD *v161; // x9
  __int64 v162; // x10
  __int64 v163; // x8
  struct BalanceConfig_StaticFields *v164; // x8
  int32_t v165; // w24
  int32_t v166; // w25
  int32_t v167; // w25
  unsigned __int64 v168; // x23
  int32_t v169; // w22
  EventUpValSetupInfo_o *v170; // x19
  int32_t v171; // w21
  bool v172; // w26
  System_Collections_Generic_Dictionary_int__int__o *v173; // x27
  int v174; // w22
  bool v175; // w29
  bool v176; // w24
  FollowerSelectItemListViewItem_o *v177; // x28
  __int64 v178; // x8
  _QWORD *v179; // x9
  __int64 v180; // x10
  __int64 v181; // x8
  Il2CppClass *v182; // x19
  unsigned __int64 v183; // x8
  unsigned __int64 v184; // x22
  Il2CppType *p_byval_arg; // x20
  __int64 v186; // x9
  __int64 v187; // x9
  __int64 v188; // x26
  __int64 v189; // x8
  __int64 v190; // x8
  __int64 v191; // x8
  __int64 v192; // x27
  __int64 v193; // x28
  FollowerInfo_o *v194; // x27
  int32_t v195; // w21
  bool v196; // w19
  bool v197; // w28
  bool v198; // w25
  EventUpValSetupInfo_o *v199; // x29
  System_Collections_Generic_Dictionary_int__int__o *v200; // x24
  FollowerSelectItemListViewItem_o *v201; // x26
  __int64 v202; // x8
  _QWORD *v203; // x9
  __int64 v204; // x10
  __int64 v205; // x8
  const MethodInfo *v206; // x2
  FollowerSelectItemListViewManager_c *v207; // x0
  const MethodInfo *v208; // x2
  const MethodInfo *v209; // x1
  struct UIScrollView_o *scrollView; // x8
  __int64 v211; // x0
  int32_t supportDeckId; // [xsp+38h] [xbp-178h]
  int32_t supportDeckIda; // [xsp+38h] [xbp-178h]
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary; // [xsp+48h] [xbp-168h]
  const MethodInfo *v215; // [xsp+60h] [xbp-150h]
  UserFollowMaster_o *v216; // [xsp+70h] [xbp-140h]
  bool HasFlag_39473080; // [xsp+78h] [xbp-138h]
  unsigned int v218; // [xsp+7Ch] [xbp-134h]
  struct System_Collections_Generic_List_ListViewItem__o **p_recommendItemList; // [xsp+80h] [xbp-130h]
  bool v222; // [xsp+90h] [xbp-120h]
  __int64 v223; // [xsp+90h] [xbp-120h]
  int v224; // [xsp+90h] [xbp-120h]
  Il2CppObject *v225; // [xsp+98h] [xbp-118h]
  __int64 v226; // [xsp+98h] [xbp-118h]
  __int64 v227; // [xsp+98h] [xbp-118h]
  struct System_Collections_Generic_List_ListViewItem__o **p_originalItemList; // [xsp+A0h] [xbp-110h]
  FollowerInfo_array *v229; // [xsp+A8h] [xbp-108h]
  int v230; // [xsp+A8h] [xbp-108h]
  Il2CppClass *v231; // [xsp+A8h] [xbp-108h]
  bool isReleasedClassBoard; // [xsp+B0h] [xbp-100h]
  bool v233; // [xsp+B0h] [xbp-100h]
  __int64 v234; // [xsp+B0h] [xbp-100h]
  unsigned __int64 v235; // [xsp+B0h] [xbp-100h]
  EventUpValSetupInfo_o *v236; // [xsp+B8h] [xbp-F8h]
  EventUpValSetupInfo_o *v237; // [xsp+B8h] [xbp-F8h]
  EventUpValSetupInfo_o *v238; // [xsp+B8h] [xbp-F8h]
  bool v239; // [xsp+C0h] [xbp-F0h]
  __int64 v240; // [xsp+C0h] [xbp-F0h]
  __int64 v241; // [xsp+C0h] [xbp-F0h]
  int32_t pos; // [xsp+C8h] [xbp-E8h]
  FollowerInfo_o **posa; // [xsp+C8h] [xbp-E8h]
  FollowerInfo_o **posb; // [xsp+C8h] [xbp-E8h]
  _BOOL4 followerClassId; // [xsp+D0h] [xbp-E0h]
  EventUpValSetupInfo_o *followerClassIdc; // [xsp+D0h] [xbp-E0h]
  int32_t followerClassIda; // [xsp+D0h] [xbp-E0h]
  __int64 followerClassIdb; // [xsp+D0h] [xbp-E0h]
  struct System_Collections_Generic_List_ListViewItem__o **p_mixItemList; // [xsp+D8h] [xbp-D8h]
  UserFollowMaster_o *v250; // [xsp+D8h] [xbp-D8h]
  int32_t index; // [xsp+F8h] [xbp-B8h]
  FollowerInfo_o *indexc; // [xsp+F8h] [xbp-B8h]
  FollowerInfo_o *indexd; // [xsp+F8h] [xbp-B8h]
  FollowerInfo_o *indexe; // [xsp+F8h] [xbp-B8h]
  int32_t indexa; // [xsp+F8h] [xbp-B8h]
  Il2CppClass *indexb; // [xsp+F8h] [xbp-B8h]
  FollowerInfo_o **m_Items; // [xsp+100h] [xbp-B0h]
  int32_t v262; // [xsp+100h] [xbp-B0h]
  int32_t v263; // [xsp+100h] [xbp-B0h]
  int32_t v264; // [xsp+100h] [xbp-B0h]
  FollowerInfo_o *v265; // [xsp+100h] [xbp-B0h]
  bool v266; // [xsp+100h] [xbp-B0h]
  Il2CppObject *v268; // [xsp+110h] [xbp-A0h] BYREF
  Il2CppObject *v269; // [xsp+118h] [xbp-98h] BYREF
  Il2CppObject *v270; // [xsp+120h] [xbp-90h] BYREF
  UserClassBoardSquareEntity_o *v271; // [xsp+128h] [xbp-88h] BYREF
  Il2CppObject *v272; // [xsp+130h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+138h] [xbp-78h] BYREF
  Il2CppObject *v274; // [xsp+140h] [xbp-70h] BYREF
  NpcFollowerEntity_o *v275; // [xsp+148h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v276; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v277; // 0:x0.16

  if ( (byte_4A5646F & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&ClassBoardInfo_TypeInfo);
    sub_1B885B0(&ClassButtonControlComponent_TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserFollowerMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__);
    sub_1B885B0(&Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&EventUpValSetupInfo_TypeInfo);
    sub_1B885B0(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_FollowerSelectItemListViewManager_OnChangeClass__);
    sub_1B885B0(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_ClassBoardInfo__TypeInfo);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantLeaderInfo___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&StringLiteral_3310/*"BonusFilterEventId"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5646F = 1;
  }
  v274 = 0LL;
  v275 = 0LL;
  v272 = 0LL;
  entity = 0LL;
  v270 = 0LL;
  v271 = 0LL;
  v268 = 0LL;
  v269 = 0LL;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B88554(&this->fields.questRestrictionInfo, questRestrictionInfo);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.mixItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v8;
  p_mixItemList = &this->fields.mixItemList;
  sub_1B88554(&this->fields.mixItemList, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.originalItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v9;
  p_originalItemList = &this->fields.originalItemList;
  sub_1B88554(&this->fields.originalItemList, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.recommendItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v10;
  p_recommendItemList = &this->fields.recommendItemList;
  sub_1B88554(&this->fields.recommendItemList, v10);
  ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0LL);
  v13 = FollowerSelectItemListViewManager_TypeInfo;
  v218 = ReturnTypeByQuestId;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    ReturnTypeByQuestId = j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v13 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v13->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT )
    goto LABEL_352;
  v15 = (struct ListViewSort_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))LIST_VIEW_SORT->fields.m_target)(
                                   LIST_VIEW_SORT->fields.original_method_info,
                                   v218,
                                   *(_QWORD *)&LIST_VIEW_SORT->fields.extra_arg);
  this->fields.sort = v15;
  p_sort = &this->fields.sort;
  ReturnTypeByQuestId = sub_1B88554(&this->fields.sort, v15);
  if ( !this->fields.sort )
    goto LABEL_352;
  InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                          this,
                          questId,
                          questPhase,
                          this->fields.sort->fields.isRequestLoad,
                          v17);
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
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_352;
  OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                 (EventQuestMaster_o *)ReturnTypeByQuestId,
                                 questId,
                                 questPhase,
                                 0LL,
                                 0LL);
  v21 = (EventUpValSetupInfo_o *)sub_1B887FC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_38910068(v21, OngoingQuestTargetEventIds, 0, questId, questPhase, 0LL);
  this->fields.setupInfo = v21;
  ReturnTypeByQuestId = sub_1B88554(&this->fields.setupInfo, v21);
  if ( !OngoingQuestTargetEventIds )
    goto LABEL_352;
  if ( *(_QWORD *)&OngoingQuestTargetEventIds->max_length )
  {
    ReturnTypeByQuestId = (__int64)UnityEngine_PlayerPrefs__GetString_69417656(
                                     (System_String_o *)StringLiteral_3310/*"BonusFilterEventId"*/,
                                     0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_352;
    if ( *(int *)(ReturnTypeByQuestId + 16) < 1 )
      goto LABEL_24;
    ReturnTypeByQuestId = (__int64)System_String__Split((System_String_o *)ReturnTypeByQuestId, 0x2Cu, 0, 0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_352;
    v22 = *(_QWORD *)(ReturnTypeByQuestId + 24);
    v23 = ReturnTypeByQuestId;
    if ( (int)v22 < 1 )
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
      v24 = 0LL;
      while ( 1 )
      {
        if ( v24 >= (unsigned int)v22 )
          goto LABEL_353;
        v25 = System_Int32__Parse(*(System_String_o **)(v23 + 32 + 8 * v24), 0LL);
        ReturnTypeByQuestId = System_Linq_Enumerable__Contains_int_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)OngoingQuestTargetEventIds,
                                v25,
                                (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (ReturnTypeByQuestId & 1) != 0 )
          break;
        LODWORD(v22) = *(_DWORD *)(v23 + 24);
        if ( (__int64)++v24 >= (int)v22 )
          goto LABEL_24;
      }
    }
  }
  ReturnTypeByQuestId = (__int64)*p_sort;
  if ( !*p_sort )
    goto LABEL_352;
  ListViewSort__Load((ListViewSort_o *)ReturnTypeByQuestId, 0LL);
  classButtonControl = this->fields.classButtonControl;
  v27 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1B887FC(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_352;
  ClassButtonControlComponent__init(classButtonControl, v27, questId, questPhase, 0, 0LL);
  this->fields.isInput = 0;
  ReturnTypeByQuestId = (__int64)FollowerSelectItemListViewManager_TypeInfo;
  v28 = this->fields.classButtonControl;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    ReturnTypeByQuestId = j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  if ( !v28 )
    goto LABEL_352;
  ClassButtonControlComponent__setCursor(
    v28,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, OngoingQuestTargetEventIds, v29);
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
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId
    || (ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0 )
  {
LABEL_352:
    sub_1B8880C(ReturnTypeByQuestId, v12);
  }
  v30 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)ReturnTypeByQuestId, questId, questPhase, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v30 )
    goto LABEL_347;
  v31 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
    v31 = sub_1BDA48C();
  v32 = *(_QWORD *)(*(_QWORD *)(v31 + 192) + 16LL);
  if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
    v32 = sub_1BDA48C();
  ReturnTypeByQuestId = **(_QWORD **)(v32 + 184);
  if ( !ReturnTypeByQuestId )
    goto LABEL_352;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ReturnTypeByQuestId,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_352;
  ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_352;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)ReturnTypeByQuestId,
                        questId,
                        questPhase,
                        0LL);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_352;
  v35 = *(_DWORD *)(ReturnTypeByQuestId + 48);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_352;
  pos = *(_DWORD *)(ReturnTypeByQuestId + 52);
  if ( v35 < 1 )
  {
    v36 = questRestrictionInfo;
    IsMyServantOrNpcRestriction_40453904 = 0;
    goto LABEL_56;
  }
  v36 = questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    IsMyServantOrNpcRestriction_40453904 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40453904(
                                             questRestrictionInfo,
                                             pos,
                                             0LL);
LABEL_56:
    followerClassId = 0;
    if ( v36 && v35 <= 0 )
      followerClassId = QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL);
    goto LABEL_60;
  }
  IsMyServantOrNpcRestriction_40453904 = 0;
  followerClassId = 0;
LABEL_60:
  v38 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v38 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v38->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_37596684 = CondType__IsQuestClear_37596684(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  if ( !QuestFollowerList )
    goto LABEL_352;
  v41 = *(_QWORD *)&QuestFollowerList->max_length;
  v42 = this;
  v43 = questRestrictionInfo;
  if ( (int)v41 >= 1 )
  {
    v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
    v45 = 0LL;
    m_Items = QuestFollowerList->m_Items;
    index = 0;
    isReleasedClassBoard = IsQuestClear_37596684;
    v225 = MasterData_object;
    v229 = QuestFollowerList;
    v239 = IsMyServantOrNpcRestriction_40453904;
    v236 = (EventUpValSetupInfo_o *)ReturnTypeByQuestId;
    do
    {
      if ( v45 >= (unsigned int)v41 )
        goto LABEL_353;
      v46 = m_Items[v45];
      if ( IsMyServantOrNpcRestriction_40453904 )
      {
        if ( !v43 )
          goto LABEL_352;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v43->fields.questId, 0LL);
        if ( !v46 )
          goto LABEL_352;
        ReturnTypeByQuestId = (__int64)FollowerInfo__getServantLeaderInfo(v46, 0, ReturnTypeByQuestId, 0LL);
        if ( ReturnTypeByQuestId )
        {
          v47 = ReturnTypeByQuestId;
          ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !ReturnTypeByQuestId )
            goto LABEL_352;
          ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                           (DataManager_o *)ReturnTypeByQuestId,
                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
          if ( !ReturnTypeByQuestId )
            goto LABEL_352;
          ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                  &entity,
                                  v46->fields.npcFollowerSvtId,
                                  (const MethodInfo_311DB34 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
          if ( (ReturnTypeByQuestId & 1) != 0 )
          {
            v48 = FollowerInfo__GetReturnTypeByQuestId(v43->fields.questId, 0LL);
            NpcServantIndividuality = FollowerInfo__GetNpcServantIndividuality(v46, 0, v48, 0LL);
            goto LABEL_78;
          }
          if ( !v44 )
            goto LABEL_352;
          if ( DataMasterBase_object__object__long___TryGetEntity(
                 v44,
                 &v272,
                 v46->fields.npcFollowerSvtId,
                 (const MethodInfo_311DB34 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
          {
            ReturnTypeByQuestId = (__int64)v272;
            if ( !v272 )
              goto LABEL_352;
            if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v272, 0LL) )
            {
              ReturnTypeByQuestId = (__int64)v272;
              if ( !v272 )
                goto LABEL_352;
              NpcServantIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                          (NpcServantFollowerEntity_o *)v272,
                                          0LL);
LABEL_78:
              ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality_40456936(
                                      v43,
                                      NpcServantIndividuality,
                                      pos,
                                      0LL);
              if ( (ReturnTypeByQuestId & 1) != 0 )
                goto LABEL_148;
              goto LABEL_81;
            }
          }
          v52 = *(_QWORD *)(v47 + 48);
          v51 = *(_QWORD *)(v47 + 56);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v276.fields.currentCryptoKey = v52;
          *(_QWORD *)&v276.fields.fakeValue = v51;
          v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v276, 0LL);
          ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                  v43,
                                  v53,
                                  *(_DWORD *)(v47 + 64),
                                  *(_DWORD *)(v47 + 164),
                                  pos,
                                  0,
                                  0LL);
          IsMyServantOrNpcRestriction_40453904 = v239;
          v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)v236;
          if ( (ReturnTypeByQuestId & 1) != 0 )
            goto LABEL_148;
        }
      }
      else if ( !v46 )
      {
        goto LABEL_352;
      }
LABEL_81:
      if ( !v46->fields.isFixedNpc && (!followerClassId || !v46->fields.isMySvtOrNpc) )
      {
        if ( !MasterData_object )
          goto LABEL_352;
        if ( NpcFollowerMaster__TryGetEntity(
               (NpcFollowerMaster_o *)MasterData_object,
               &v275,
               v46->fields.userId,
               questId,
               questPhase,
               0LL) )
        {
          ReturnTypeByQuestId = (__int64)v275;
          if ( !v275 )
            goto LABEL_352;
          IsRecommendedFollower = NpcFollowerEntity__IsRecommendedFollower(v275, 0LL);
        }
        else
        {
          IsRecommendedFollower = 0;
        }
        v54 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ClassBoardInfo__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v54,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
        if ( !v44 )
          goto LABEL_352;
        ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetEntity(
                                v44,
                                &v274,
                                v46->fields.npcFollowerSvtId,
                                (const MethodInfo_311DB34 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
        if ( (ReturnTypeByQuestId & 1) != 0 )
        {
          if ( !v274 )
            goto LABEL_352;
          ReturnTypeByQuestId = NpcServantFollowerEntity__IsNotClassBoard((int32_t)v274[7].monitor, 0LL);
          if ( (ReturnTypeByQuestId & 1) != 0
            || (ReturnTypeByQuestId = QuestPhaseEntity__IsNotClassBoard(v30, 0LL), (ReturnTypeByQuestId & 1) != 0) )
          {
            v55 = 1;
LABEL_126:
            if ( !v54 )
              goto LABEL_352;
LABEL_127:
            v75 = System_Collections_Generic_List_object___ToArray(
                    v54,
                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
            v46->fields.userClassBoardInfo = (struct ClassBoardInfo_array *)v75;
            sub_1B88554(&v46->fields.userClassBoardInfo, v75);
            v76 = FollowerSelectItemListViewManager_TypeInfo;
            if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
              v76 = FollowerSelectItemListViewManager_TypeInfo;
            }
            v77 = v76->static_fields->followerClassId;
            setupInfo = this->fields.setupInfo;
            if ( (v55 & 1) != 0 )
              classBoardMaxDictionary = 0LL;
            else
              classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
            isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
            isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
            isBonusFilterEnable = this->fields.isBonusFilterEnable;
            classBoardMaxNumDictionary = classBoardMaxDictionary;
            v43 = questRestrictionInfo;
            v83 = (FollowerSelectItemListViewItem_o *)sub_1B887FC(FollowerSelectItemListViewItem_TypeInfo);
            FollowerSelectItemListViewItem___ctor(
              v83,
              index,
              0,
              v46,
              v77,
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
              v215);
            ReturnTypeByQuestId = (__int64)*p_mixItemList;
            if ( !*p_mixItemList )
              goto LABEL_352;
            v84 = *(_QWORD *)(ReturnTypeByQuestId + 16);
            v42 = this;
            QuestFollowerList = v229;
            IsMyServantOrNpcRestriction_40453904 = v239;
            v85 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)v236;
            ++*(_DWORD *)(ReturnTypeByQuestId + 28);
            if ( !v84 )
              goto LABEL_352;
            v86 = *(int *)(ReturnTypeByQuestId + 24);
            MasterData_object = v225;
            if ( (unsigned int)v86 >= *(_DWORD *)(v84 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                (Il2CppObject *)v83,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
            }
            else
            {
              v87 = v84 + 8 * v86;
              *(_DWORD *)(ReturnTypeByQuestId + 24) = v86 + 1;
              *(_QWORD *)(v87 + 32) = v83;
              sub_1B88554(v87 + 32, v83);
            }
            ReturnTypeByQuestId = (__int64)*p_originalItemList;
            if ( !*p_originalItemList )
              goto LABEL_352;
            v88 = *(_QWORD *)(ReturnTypeByQuestId + 16);
            v89 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++*(_DWORD *)(ReturnTypeByQuestId + 28);
            if ( !v88 )
              goto LABEL_352;
            v90 = *(int *)(ReturnTypeByQuestId + 24);
            if ( (unsigned int)v90 >= *(_DWORD *)(v88 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                (Il2CppObject *)v83,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
            }
            else
            {
              v91 = v88 + 8 * v90;
              *(_DWORD *)(ReturnTypeByQuestId + 24) = v90 + 1;
              *(_QWORD *)(v91 + 32) = v83;
              sub_1B88554(v91 + 32, v83);
            }
            ReturnTypeByQuestId = (__int64)*p_recommendItemList;
            if ( !*p_recommendItemList )
              goto LABEL_352;
            v92 = *(_QWORD *)(ReturnTypeByQuestId + 16);
            v93 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++*(_DWORD *)(ReturnTypeByQuestId + 28);
            if ( !v92 )
              goto LABEL_352;
            v94 = *(int *)(ReturnTypeByQuestId + 24);
            if ( (unsigned int)v94 >= *(_DWORD *)(v92 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                (Il2CppObject *)v83,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
            }
            else
            {
              v95 = v92 + 8 * v94;
              *(_DWORD *)(ReturnTypeByQuestId + 24) = v94 + 1;
              *(_QWORD *)(v95 + 32) = v83;
              ReturnTypeByQuestId = sub_1B88554(v95 + 32, v83);
            }
            ++index;
            goto LABEL_148;
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v222 = IsRecommendedFollower;
          ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
          if ( !v43 )
            goto LABEL_352;
          v56 = (ClassBoardClassMaster_o *)ReturnTypeByQuestId;
          v57 = v30;
          v58 = FollowerInfo__GetReturnTypeByQuestId(v43->fields.questId, 0LL);
          ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v46, 0, v58, 0LL);
          ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
          if ( !ServantLeaderInfo )
            goto LABEL_352;
          v60 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
          v62 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
          v61 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v277.fields.currentCryptoKey = v62;
          *(_QWORD *)&v277.fields.fakeValue = v61;
          ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v277, 0LL);
          if ( !v60 )
            goto LABEL_352;
          ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                           v60,
                                           ReturnTypeByQuestId,
                                           (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !ReturnTypeByQuestId )
            goto LABEL_352;
          v30 = v57;
          IsRecommendedFollower = v222;
          if ( !v56 )
            goto LABEL_352;
          ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(v56, *(_DWORD *)(ReturnTypeByQuestId + 80), 0LL);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          ReturnTypeByQuestId = NetworkManager__get_UserId(0LL);
          if ( !Master_object )
            goto LABEL_352;
          ReturnTypeByQuestId = UserClassBoardSquareMaster__TryGetEntity(
                                  (UserClassBoardSquareMaster_o *)Master_object,
                                  &v271,
                                  ReturnTypeByQuestId,
                                  ClassBoardBaseId,
                                  0LL);
          if ( (ReturnTypeByQuestId & 1) != 0 )
          {
            v65 = (ClassBoardInfo_o *)sub_1B887FC(ClassBoardInfo_TypeInfo);
            ClassBoardInfo___ctor(v65, 0LL);
            if ( !v65 )
              goto LABEL_352;
            v65->fields.classBoardBaseId = ClassBoardBaseId;
            if ( !v271 )
              goto LABEL_352;
            ReturnTypeByQuestId = (__int64)v271->fields.classBoardSquareIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_352;
            v66 = v30;
            v67 = ClassBoardBaseId;
            v68 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
            v65->fields.squareIds = (struct System_Int32_array *)sub_1B886EC(v68, int___TypeInfo);
            v69 = sub_1B886EC(v68, int___TypeInfo);
            sub_1B88554(&v65->fields.squareIds, v69);
            OpenClassIdArrayFromBaseId = ClassBoardClassMaster__GetOpenClassIdArrayFromBaseId(v56, v67, 0LL);
            v65->fields.releasedClassIds = OpenClassIdArrayFromBaseId;
            ReturnTypeByQuestId = sub_1B88554(&v65->fields.releasedClassIds, OpenClassIdArrayFromBaseId);
            if ( !v54 )
              goto LABEL_352;
            items = v54->fields._items;
            IsRecommendedFollower = v222;
            v72 = Method_System_Collections_Generic_List_ClassBoardInfo__Add__;
            ++v54->fields._version;
            if ( !items )
              goto LABEL_352;
            size = v54->fields._size;
            v30 = v66;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v54,
                (Il2CppObject *)v65,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
            }
            else
            {
              v74 = &items->obj.klass + size;
              v54->fields._size = size + 1;
              v74[4] = (Il2CppClass *)v65;
              sub_1B88554(v74 + 4, v65);
            }
            v55 = 0;
            goto LABEL_127;
          }
        }
        v55 = 0;
        goto LABEL_126;
      }
LABEL_148:
      LODWORD(v41) = QuestFollowerList->max_length;
      ++v45;
    }
    while ( (__int64)v45 < (int)v41 );
  }
  if ( v43 && QuestRestrictionInfo__IsMyServantOrNpcRestriction(v43, 0LL) )
  {
    ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_352;
    v96 = *(_DWORD *)(ReturnTypeByQuestId + 48);
    ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_352;
    v97 = v96 >= 1
       && !QuestRestrictionInfo__IsSelectableNormalSupport(
             questRestrictionInfo,
             *(_DWORD *)(ReturnTypeByQuestId + 52),
             0LL);
    v42 = this;
  }
  else
  {
    v97 = 0;
  }
  v42->fields.isRefreshBtnHide = v97;
  if ( !v97 && !v30->fields.isNpcOnly )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_352;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v270,
                            (const MethodInfo_311DBBC *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    v98 = this;
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v270 )
        goto LABEL_352;
      klass = v270[1].klass;
      if ( klass )
      {
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
        {
          v101 = 0LL;
          do
          {
            if ( (unsigned int)v101 >= namespaze )
              goto LABEL_353;
            v102 = &klass->_1.image + (int)v101;
            ReturnTypeByQuestId = (__int64)v102[4];
            posa = (FollowerInfo_o **)(v102 + 4);
            if ( !ReturnTypeByQuestId )
              goto LABEL_352;
            FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0LL);
            if ( (unsigned int)v101 >= LODWORD(klass->_1.namespaze) )
              goto LABEL_353;
            if ( !*posa )
              goto LABEL_352;
            ReturnTypeByQuestId = (__int64)(*posa)->fields.mainSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_352;
            v226 = *(_QWORD *)(ReturnTypeByQuestId + 24);
            v103 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
            if ( v103 )
            {
              v104 = v103;
              v105 = sub_1B886EC(v103, int___TypeInfo);
              if ( !v105 )
              {
                sub_1B88ACC(v104);
LABEL_354:
                sub_1B88ACC(v101);
LABEL_355:
                v211 = sub_1B88830();
                sub_1B886D8(v211, 0LL);
              }
            }
            else
            {
              v105 = 0LL;
            }
            v106 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v106 = BalanceConfig_TypeInfo;
            }
            v107 = v106->static_fields;
            FixMainSupportDeckNum = v107->FixMainSupportDeckNum;
            FixEventSupportDeckNum = v107->FixEventSupportDeckNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            ReturnTypeByQuestId = System_Math__Max_62525680(FixMainSupportDeckNum, FixEventSupportDeckNum, 0LL);
            v240 = v105;
            if ( (int)v226 >= 1 )
            {
              deckPriority = ReturnTypeByQuestId;
              v111 = 0LL;
              v223 = v105 + 32;
              do
              {
                if ( !*p_originalItemList )
                  goto LABEL_352;
                if ( (unsigned int)v101 >= LODWORD(klass->_1.namespaze) )
                  goto LABEL_353;
                if ( !v105 )
                  goto LABEL_352;
                if ( v111 >= *(unsigned int *)(v105 + 24) )
                  goto LABEL_353;
                v262 = (*p_originalItemList)->fields._size;
                followerClassIdc = v98->fields.setupInfo;
                v112 = v98->fields.classBoardMaxDictionary;
                v113 = *(_DWORD *)(v223 + 4 * v111);
                indexc = *posa;
                v114 = v98->fields.isServantEquipBonusFilterEnable;
                v115 = v98->fields.isServantBonusFilterEnable;
                v233 = v98->fields.isBonusFilterEnable;
                v116 = (FollowerSelectItemListViewItem_o *)sub_1B887FC(FollowerSelectItemListViewItem_TypeInfo);
                FollowerSelectItemListViewItem___ctor(
                  v116,
                  v262,
                  0,
                  indexc,
                  0,
                  friendPointUpVal,
                  friendPointUpMaxVal,
                  friendPointCampaignEntityList,
                  v233,
                  v115,
                  v114,
                  0,
                  followerClassIdc,
                  questRestrictionInfo,
                  1,
                  v113,
                  deckPriority,
                  v112,
                  1,
                  0,
                  v215);
                ReturnTypeByQuestId = (__int64)v98->fields.originalItemList;
                if ( !ReturnTypeByQuestId )
                  goto LABEL_352;
                v117 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v118 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v117 )
                  goto LABEL_352;
                v119 = *(int *)(ReturnTypeByQuestId + 24);
                v105 = v240;
                if ( (unsigned int)v119 >= *(_DWORD *)(v117 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    (Il2CppObject *)v116,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
                }
                else
                {
                  v120 = v117 + 8 * v119;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v119 + 1;
                  *(_QWORD *)(v120 + 32) = v116;
                  ReturnTypeByQuestId = sub_1B88554(v120 + 32, v116);
                }
                ++v111;
                --deckPriority;
              }
              while ( (unsigned int)v226 != v111 );
            }
            followerClassIda = 0;
            v234 = v105 + 32;
            v230 = (int)v101;
            while ( 1 )
            {
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              }
              v121 = *(struct BalanceConfig_StaticFields **)(ReturnTypeByQuestId + 184);
              if ( followerClassIda >= v121->SupportDeckMemberMax )
                break;
              if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
              {
                j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId);
                v121 = BalanceConfig_TypeInfo->static_fields;
              }
              v123 = v121->FixMainSupportDeckNum;
              v122 = v121->FixEventSupportDeckNum;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              ReturnTypeByQuestId = System_Math__Max_62525680(v123, v122, 0LL);
              if ( (int)v226 >= 1 )
              {
                v124 = ReturnTypeByQuestId;
                v125 = 0LL;
                while ( *p_mixItemList )
                {
                  ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                  v126 = (*p_mixItemList)->fields._size;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( (unsigned int)v101 >= LODWORD(klass->_1.namespaze) )
                    goto LABEL_353;
                  if ( !v105 )
                    goto LABEL_352;
                  if ( v125 >= *(unsigned int *)(v105 + 24) )
                    goto LABEL_353;
                  v263 = v126;
                  v127 = klass;
                  v128 = v98->fields.setupInfo;
                  indexd = *posa;
                  v129 = v98->fields.isServantEquipBonusFilterEnable;
                  v130 = this->fields.classBoardMaxDictionary;
                  v131 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 164LL);
                  v132 = v98->fields.isServantBonusFilterEnable;
                  v133 = v98->fields.isBonusFilterEnable;
                  supportDeckId = *(_DWORD *)(v234 + 4 * v125);
                  v98 = this;
                  v134 = (FollowerSelectItemListViewItem_o *)sub_1B887FC(FollowerSelectItemListViewItem_TypeInfo);
                  FollowerSelectItemListViewItem___ctor(
                    v134,
                    v263,
                    v131 - followerClassIda,
                    indexd,
                    followerClassIda,
                    friendPointUpVal,
                    friendPointUpMaxVal,
                    friendPointCampaignEntityList,
                    v133,
                    v132,
                    v129,
                    0,
                    v128,
                    questRestrictionInfo,
                    1,
                    supportDeckId,
                    v124,
                    v130,
                    1,
                    0,
                    v215);
                  ReturnTypeByQuestId = (__int64)this->fields.mixItemList;
                  if ( !ReturnTypeByQuestId )
                    goto LABEL_352;
                  v135 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                  v136 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                  if ( !v135 )
                    goto LABEL_352;
                  v137 = *(int *)(ReturnTypeByQuestId + 24);
                  if ( (unsigned int)v137 >= *(_DWORD *)(v135 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                      (Il2CppObject *)v134,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v138 = v135 + 8 * v137;
                    *(_DWORD *)(ReturnTypeByQuestId + 24) = v137 + 1;
                    *(_QWORD *)(v138 + 32) = v134;
                    ReturnTypeByQuestId = sub_1B88554(v138 + 32, v134);
                  }
                  v105 = v240;
                  LODWORD(v101) = v230;
                  ++v125;
                  klass = v127;
                  --v124;
                  if ( (unsigned int)v226 == v125 )
                    goto LABEL_218;
                }
                goto LABEL_352;
              }
LABEL_218:
              ++followerClassIda;
            }
            namespaze = (int)klass->_1.namespaze;
            v101 = (Il2CppObject *)(unsigned int)((_DWORD)v101 + 1);
          }
          while ( (int)v101 < namespaze );
        }
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_352;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v269,
                            (const MethodInfo_311DBBC *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v269 )
        goto LABEL_352;
      v139 = v269[1].klass;
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_352;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !ReturnTypeByQuestId )
        goto LABEL_352;
      ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                       questId,
                                       (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_352;
      HasFlag_39473080 = QuestEntity__HasFlag_39473080(
                           (QuestEntity_o *)ReturnTypeByQuestId,
                           0x8000000LL,
                           questPhase,
                           0LL);
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_352;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserFollowMaster___);
      v216 = (UserFollowMaster_o *)ReturnTypeByQuestId;
      if ( !v139 )
        goto LABEL_352;
      namespaze_low = (unsigned __int64)v139->_1.namespaze;
      if ( (int)namespaze_low >= 1 )
      {
        v141 = 0LL;
        v224 = 0;
        v231 = v139;
        do
        {
          namespaze_low = (unsigned int)namespaze_low;
          if ( HasFlag_39473080 )
          {
            if ( v141 >= (unsigned int)namespaze_low )
              goto LABEL_353;
            v142 = *((_QWORD *)&v139->_1.byval_arg.data + v141);
            if ( !v142 )
              goto LABEL_352;
            if ( *(_DWORD *)(v142 + 36) == 5 )
            {
              ReturnTypeByQuestId = (__int64)v216;
              if ( !v216 )
                goto LABEL_352;
              ReturnTypeByQuestId = UserFollowMaster__IsFollowUser(v216, *(_QWORD *)(v142 + 16), 0LL);
              if ( (ReturnTypeByQuestId & 1) == 0 )
                goto LABEL_296;
              namespaze_low = LODWORD(v139->_1.namespaze);
            }
          }
          else
          {
            if ( v141 >= (unsigned int)namespaze_low )
              goto LABEL_353;
            v143 = *((_QWORD *)&v139->_1.byval_arg.data + v141);
            if ( !v143 )
              goto LABEL_352;
            if ( *(_DWORD *)(v143 + 36) == 5 )
              goto LABEL_296;
          }
          if ( v141 >= namespaze_low )
            goto LABEL_353;
          v144 = &v139->_1.image + v141;
          ReturnTypeByQuestId = (__int64)v144[4];
          posb = (FollowerInfo_o **)(v144 + 4);
          if ( !ReturnTypeByQuestId )
            goto LABEL_352;
          FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0LL);
          ReturnTypeByQuestId = sub_1B88658(int___TypeInfo, 0LL);
          if ( v141 >= LODWORD(v139->_1.namespaze) )
            goto LABEL_353;
          v145 = *posb;
          if ( !*posb )
            goto LABEL_352;
          if ( v218 )
          {
            ReturnTypeByQuestId = (__int64)v145->fields.eventSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_352;
          }
          else
          {
            ReturnTypeByQuestId = (__int64)v145->fields.mainSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_352;
          }
          followerClassIdb = *(unsigned int *)(ReturnTypeByQuestId + 24);
          v146 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
          if ( v146 )
          {
            v101 = v146;
            v147 = sub_1B886EC(v146, int___TypeInfo);
            if ( !v147 )
              goto LABEL_354;
          }
          else
          {
            v147 = 0LL;
          }
          v148 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v148 = BalanceConfig_TypeInfo;
          }
          v149 = v148->static_fields;
          v151 = v149->FixMainSupportDeckNum;
          v150 = v149->FixEventSupportDeckNum;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          ReturnTypeByQuestId = System_Math__Max_62525680(v151, v150, 0LL);
          v241 = v147;
          if ( (int)followerClassIdb >= 1 )
          {
            v152 = ReturnTypeByQuestId;
            v153 = 0LL;
            v227 = v147 + 32;
            while ( 1 )
            {
              if ( !*p_originalItemList )
                goto LABEL_352;
              if ( v141 >= LODWORD(v139->_1.namespaze) )
                break;
              if ( !v147 )
                goto LABEL_352;
              if ( v153 >= *(unsigned int *)(v147 + 24) )
                break;
              v264 = (*p_originalItemList)->fields._size;
              v237 = v98->fields.setupInfo;
              v154 = v98->fields.classBoardMaxDictionary;
              v155 = *(_DWORD *)(v227 + 4 * v153);
              indexe = *posb;
              v156 = v98->fields.isServantEquipBonusFilterEnable;
              v157 = v98->fields.isServantBonusFilterEnable;
              v158 = v98->fields.isBonusFilterEnable;
              v159 = (FollowerSelectItemListViewItem_o *)sub_1B887FC(FollowerSelectItemListViewItem_TypeInfo);
              FollowerSelectItemListViewItem___ctor(
                v159,
                v264,
                0,
                indexe,
                0,
                friendPointUpVal,
                friendPointUpMaxVal,
                friendPointCampaignEntityList,
                v158,
                v157,
                v156,
                0,
                v237,
                questRestrictionInfo,
                0,
                v155,
                v152,
                v154,
                1,
                0,
                v215);
              ReturnTypeByQuestId = (__int64)v98->fields.originalItemList;
              if ( !ReturnTypeByQuestId )
                goto LABEL_352;
              v160 = *(_QWORD *)(ReturnTypeByQuestId + 16);
              v161 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++*(_DWORD *)(ReturnTypeByQuestId + 28);
              if ( !v160 )
                goto LABEL_352;
              v162 = *(int *)(ReturnTypeByQuestId + 24);
              v147 = v241;
              if ( (unsigned int)v162 >= *(_DWORD *)(v160 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                  (Il2CppObject *)v159,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v161[4] + 192LL) + 112LL));
              }
              else
              {
                v163 = v160 + 8 * v162;
                *(_DWORD *)(ReturnTypeByQuestId + 24) = v162 + 1;
                *(_QWORD *)(v163 + 32) = v159;
                ReturnTypeByQuestId = sub_1B88554(v163 + 32, v159);
              }
              ++v153;
              --v152;
              if ( followerClassIdb == v153 )
                goto LABEL_270;
            }
LABEL_353:
            sub_1B88814(ReturnTypeByQuestId, v12);
          }
LABEL_270:
          indexa = 0;
          v235 = v141;
          v238 = (EventUpValSetupInfo_o *)(v147 + 32);
          while ( 1 )
          {
            ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            }
            v164 = *(struct BalanceConfig_StaticFields **)(ReturnTypeByQuestId + 184);
            if ( indexa >= v164->SupportDeckMemberMax )
              break;
            if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
            {
              j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId);
              v164 = BalanceConfig_TypeInfo->static_fields;
            }
            v166 = v164->FixMainSupportDeckNum;
            v165 = v164->FixEventSupportDeckNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            ReturnTypeByQuestId = System_Math__Max_62525680(v166, v165, 0LL);
            if ( (int)followerClassIdb >= 1 )
            {
              v167 = ReturnTypeByQuestId;
              v168 = 0LL;
              while ( *p_mixItemList )
              {
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                v169 = (*p_mixItemList)->fields._size;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                }
                if ( v141 >= LODWORD(v139->_1.namespaze) )
                  goto LABEL_353;
                if ( !v147 )
                  goto LABEL_352;
                if ( v168 >= *(unsigned int *)(v147 + 24) )
                  goto LABEL_353;
                v170 = v98->fields.setupInfo;
                v171 = v169;
                v265 = *posb;
                v172 = v98->fields.isServantEquipBonusFilterEnable;
                v173 = this->fields.classBoardMaxDictionary;
                v174 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 164LL);
                v175 = v98->fields.isServantBonusFilterEnable;
                v176 = v98->fields.isBonusFilterEnable;
                supportDeckIda = *((_DWORD *)&v238->klass + v168);
                v98 = this;
                v177 = (FollowerSelectItemListViewItem_o *)sub_1B887FC(FollowerSelectItemListViewItem_TypeInfo);
                FollowerSelectItemListViewItem___ctor(
                  v177,
                  v171,
                  v174 - indexa,
                  v265,
                  indexa,
                  friendPointUpVal,
                  friendPointUpMaxVal,
                  friendPointCampaignEntityList,
                  v176,
                  v175,
                  v172,
                  0,
                  v170,
                  questRestrictionInfo,
                  0,
                  supportDeckIda,
                  v167,
                  v173,
                  1,
                  0,
                  v215);
                ReturnTypeByQuestId = (__int64)this->fields.mixItemList;
                if ( !ReturnTypeByQuestId )
                  goto LABEL_352;
                v178 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v179 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v178 )
                  goto LABEL_352;
                v180 = *(int *)(ReturnTypeByQuestId + 24);
                if ( (unsigned int)v180 >= *(_DWORD *)(v178 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    (Il2CppObject *)v177,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
                }
                else
                {
                  v181 = v178 + 8 * v180;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v180 + 1;
                  *(_QWORD *)(v181 + 32) = v177;
                  ReturnTypeByQuestId = sub_1B88554(v181 + 32, v177);
                }
                v139 = v231;
                v141 = v235;
                v147 = v241;
                ++v168;
                --v167;
                if ( followerClassIdb == v168 )
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
            v164 = BalanceConfig_TypeInfo->static_fields;
          }
          if ( ++v224 >= v164->SupportListMax )
            break;
LABEL_296:
          LODWORD(namespaze_low) = v139->_1.namespaze;
          ++v141;
        }
        while ( (__int64)v141 < (int)namespaze_low );
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_352;
    if ( DataMasterBase_object__object__long___TryGetSingleEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
           &v268,
           (const MethodInfo_311DBBC *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    {
      ReturnTypeByQuestId = (__int64)v268;
      if ( !v268 )
        goto LABEL_352;
      if ( UserRecommendFollowerEntity__IsEnableData((UserRecommendFollowerEntity_o *)v268, 0LL) )
      {
        ReturnTypeByQuestId = (__int64)v268;
        if ( !v268 )
          goto LABEL_352;
        ReturnTypeByQuestId = UserRecommendFollowerEntity__IsEnableQuest(
                                (UserRecommendFollowerEntity_o *)v268,
                                questId,
                                questPhase,
                                0LL);
        if ( (ReturnTypeByQuestId & 1) != 0 )
        {
          if ( !v268 )
            goto LABEL_352;
          v182 = v268[1].klass;
          ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !ReturnTypeByQuestId )
            goto LABEL_352;
          ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                           (DataManager_o *)ReturnTypeByQuestId,
                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !ReturnTypeByQuestId )
            goto LABEL_352;
          ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                           questId,
                                           (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !ReturnTypeByQuestId )
            goto LABEL_352;
          v266 = QuestEntity__HasFlag_39473080((QuestEntity_o *)ReturnTypeByQuestId, 0x8000000LL, questPhase, 0LL);
          ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !ReturnTypeByQuestId )
            goto LABEL_352;
          ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                           (DataManager_o *)ReturnTypeByQuestId,
                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserFollowMaster___);
          v250 = (UserFollowMaster_o *)ReturnTypeByQuestId;
          if ( !v182 )
            goto LABEL_352;
          v183 = (unsigned __int64)v182->_1.namespaze;
          if ( (int)v183 >= 1 )
          {
            v184 = 0LL;
            p_byval_arg = &v182->_1.byval_arg;
            indexb = v182;
            do
            {
              v183 = (unsigned int)v183;
              if ( v266 )
              {
                if ( v184 >= (unsigned int)v183 )
                  goto LABEL_353;
                v186 = *((_QWORD *)&p_byval_arg->data + v184);
                if ( !v186 )
                  goto LABEL_352;
                if ( *(_DWORD *)(v186 + 36) == 5 )
                {
                  ReturnTypeByQuestId = (__int64)v250;
                  if ( !v250 )
                    goto LABEL_352;
                  ReturnTypeByQuestId = UserFollowMaster__IsFollowUser(v250, *(_QWORD *)(v186 + 16), 0LL);
                  if ( (ReturnTypeByQuestId & 1) == 0 )
                    goto LABEL_346;
                  v183 = LODWORD(v182->_1.namespaze);
                }
              }
              else
              {
                if ( v184 >= (unsigned int)v183 )
                  goto LABEL_353;
                v187 = *((_QWORD *)&p_byval_arg->data + v184);
                if ( !v187 )
                  goto LABEL_352;
                if ( *(_DWORD *)(v187 + 36) == 5 )
                  goto LABEL_346;
              }
              if ( v184 >= v183 )
                goto LABEL_353;
              v188 = *((_QWORD *)&p_byval_arg->data + v184);
              ReturnTypeByQuestId = sub_1B88658(ServantLeaderInfo___TypeInfo, 1LL);
              if ( v184 >= LODWORD(v182->_1.namespaze) )
                goto LABEL_353;
              v189 = *((_QWORD *)&p_byval_arg->data + v184);
              if ( !v189 )
                goto LABEL_352;
              v190 = *(_QWORD *)(v189 + 56);
              if ( !v190 )
                goto LABEL_352;
              if ( !*(_DWORD *)(v190 + 24) )
                goto LABEL_353;
              v191 = *(_QWORD *)(v190 + 32);
              if ( !v191 )
                goto LABEL_352;
              v192 = ReturnTypeByQuestId;
              if ( !ReturnTypeByQuestId )
                goto LABEL_352;
              v193 = *(_QWORD *)(v191 + 56);
              if ( v193 )
              {
                ReturnTypeByQuestId = sub_1B886EC(v193, *(_QWORD *)(*(_QWORD *)ReturnTypeByQuestId + 64LL));
                if ( !ReturnTypeByQuestId )
                  goto LABEL_355;
              }
              if ( !*(_DWORD *)(v192 + 24) )
                goto LABEL_353;
              *(_QWORD *)(v192 + 32) = v193;
              ReturnTypeByQuestId = sub_1B88554(v192 + 32, v193);
              if ( !v188 )
                goto LABEL_352;
              *(_QWORD *)(v188 + 40) = v192;
              ReturnTypeByQuestId = sub_1B88554(v188 + 40, v192);
              if ( v184 >= LODWORD(v182->_1.namespaze) )
                goto LABEL_353;
              ReturnTypeByQuestId = *((_QWORD *)&p_byval_arg->data + v184);
              if ( !ReturnTypeByQuestId )
                goto LABEL_352;
              FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0LL);
              if ( !*p_recommendItemList )
                goto LABEL_352;
              if ( v184 >= LODWORD(v182->_1.namespaze) )
                goto LABEL_353;
              v194 = (FollowerInfo_o *)*((_QWORD *)&p_byval_arg->data + v184);
              v195 = (*p_recommendItemList)->fields._size;
              v196 = this->fields.isBonusFilterEnable;
              v197 = this->fields.isServantBonusFilterEnable;
              v198 = this->fields.isServantEquipBonusFilterEnable;
              v199 = this->fields.setupInfo;
              v200 = this->fields.classBoardMaxDictionary;
              v201 = (FollowerSelectItemListViewItem_o *)sub_1B887FC(FollowerSelectItemListViewItem_TypeInfo);
              FollowerSelectItemListViewItem___ctor(
                v201,
                v195,
                0,
                v194,
                0,
                friendPointUpVal,
                friendPointUpMaxVal,
                friendPointCampaignEntityList,
                v196,
                v197,
                v198,
                0,
                v199,
                questRestrictionInfo,
                0,
                0,
                0,
                v200,
                1,
                1,
                v215);
              ReturnTypeByQuestId = (__int64)this->fields.recommendItemList;
              if ( !ReturnTypeByQuestId )
                goto LABEL_352;
              v202 = *(_QWORD *)(ReturnTypeByQuestId + 16);
              v203 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++*(_DWORD *)(ReturnTypeByQuestId + 28);
              if ( !v202 )
                goto LABEL_352;
              v204 = *(int *)(ReturnTypeByQuestId + 24);
              if ( (unsigned int)v204 >= *(_DWORD *)(v202 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                  (Il2CppObject *)v201,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v203[4] + 192LL) + 112LL));
              }
              else
              {
                v205 = v202 + 8 * v204;
                *(_DWORD *)(ReturnTypeByQuestId + 24) = v204 + 1;
                *(_QWORD *)(v205 + 32) = v201;
                sub_1B88554(v205 + 32, v201);
              }
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              }
              v182 = indexb;
              if ( (__int64)v184 >= *(int *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 684LL) )
                break;
LABEL_346:
              LODWORD(v183) = v182->_1.namespaze;
              ++v184;
            }
            while ( (__int64)v184 < (int)v183 );
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
  v207 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v207 = FollowerSelectItemListViewManager_TypeInfo;
  }
  FollowerSelectItemListViewManager__SetEmptyMessage(this, v207->static_fields->followerClassId, v206);
  FollowerSelectItemListViewManager__SortClass(
    this,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    v208);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  FollowerSelectItemListViewManager__SetFilterButtonImage(this, v209);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_352;
  scrollView->fields.smoothDragStart = 1;
}


void __fastcall FollowerSelectItemListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewManager_c *v2; // x0
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v4; // x8

  if ( (byte_4A56468 & 1) == 0 )
  {
    sub_1B885B0(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_6748/*"FollowerSelectClass"*/);
    sub_1B885B0(&StringLiteral_6751/*"FollowerSelectOldClass"*/);
    byte_4A56468 = 1;
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
    || (ListViewSort__DeleteContinueData((ListViewSort_o *)v2, 0LL),
        (v4 = FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT) == 0LL)
    || (v2 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v4->fields.m_target)(
                                                      v4->fields.original_method_info,
                                                      0LL,
                                                      *(_QWORD *)&v4->fields.extra_arg)) == 0LL )
  {
    sub_1B8880C(v2, v1);
  }
  ListViewSort__DeleteContinueData((ListViewSort_o *)v2, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6748/*"FollowerSelectClass"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6751/*"FollowerSelectOldClass"*/, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FollowerSelectItemListViewManager__DestroyList_30846608(this, 0LL, v2);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList_30846608(
        FollowerSelectItemListViewManager_o *this,
        BattleSetupInfo_o *battleSetupInfo,
        const MethodInfo *method)
{
  __int64 ReturnTypeByQuestId; // x0
  const MethodInfo *v6; // x1
  FollowerSelectItemListViewManager_c *v7; // x8
  unsigned int v8; // w20
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct ListViewSort_o *v10; // x0
  const MethodInfo *v11; // x4
  struct ListViewSort_o *sort; // x8
  System_Int32_array *OngoingQuestTargetEventIds; // x0
  int32_t questId; // w20
  int32_t questPhase; // w21
  System_Int32_array *v16; // x22
  EventUpValSetupInfo_o *v17; // x23
  struct EventUpValSetupInfo_o **p_setupInfo; // x0
  EventUpValSetupInfo_o *v19; // x1
  struct ListViewSort_o *v20; // x8
  FollowerSelectItemListViewManager_o *v21; // x0
  int monitor; // w20
  const MethodInfo *v23; // x1
  FollowerSelectItemListViewManager_c *v24; // x0
  FollowerSelectItemListViewManager_o *v25; // x0
  int monitor_high; // w20
  FollowerSelectItemListViewManager_c *v27; // x0
  ClassButtonControlComponent_o *classButtonControl; // x20
  ClassButtonControlComponent_CallbackFunc_o *v29; // x21
  ClassButtonControlComponent_o *v30; // x20
  const MethodInfo *v31; // x2
  struct EventUpValSetupInfo_o *setupInfo; // x8
  System_Int32_array *v33; // x1
  UILabel_o *bonusFilterKindLabel; // x20

  if ( (byte_4A56477 & 1) == 0 )
  {
    sub_1B885B0(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&EventUpValSetupInfo_TypeInfo);
    sub_1B885B0(&Method_FollowerSelectItemListViewManager_OnChangeClass__);
    sub_1B885B0(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11674/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/);
    sub_1B885B0(&StringLiteral_6748/*"FollowerSelectClass"*/);
    sub_1B885B0(&StringLiteral_6751/*"FollowerSelectOldClass"*/);
    byte_4A56477 = 1;
  }
  if ( battleSetupInfo )
  {
    this->fields.questId = BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
    this->fields.questPhase = battleSetupInfo->fields.questPhase;
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(battleSetupInfo->fields.questId, 0LL);
    v7 = FollowerSelectItemListViewManager_TypeInfo;
    v8 = ReturnTypeByQuestId;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      ReturnTypeByQuestId = j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v7 = FollowerSelectItemListViewManager_TypeInfo;
    }
    LIST_VIEW_SORT = v7->static_fields->LIST_VIEW_SORT;
    if ( !LIST_VIEW_SORT )
      goto LABEL_47;
    v10 = (struct ListViewSort_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))LIST_VIEW_SORT->fields.m_target)(
                                     LIST_VIEW_SORT->fields.original_method_info,
                                     v8,
                                     *(_QWORD *)&LIST_VIEW_SORT->fields.extra_arg);
    this->fields.sort = v10;
    ReturnTypeByQuestId = sub_1B88554(&this->fields.sort, v10);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_47;
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                                                                                   this,
                                                                                   this->fields.questId,
                                                                                   this->fields.questPhase,
                                                                                   sort->fields.isRequestLoad,
                                                                                   v11);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventQuestMaster___);
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
    v16 = OngoingQuestTargetEventIds;
    v17 = (EventUpValSetupInfo_o *)sub_1B887FC(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_38910068(v17, v16, 0, questId, questPhase, 0LL);
    p_setupInfo = &this->fields.setupInfo;
    this->fields.setupInfo = v17;
    v19 = v17;
  }
  else
  {
    p_setupInfo = &this->fields.setupInfo;
    v19 = 0LL;
    this->fields.setupInfo = 0LL;
  }
  sub_1B88554(p_setupInfo, v19);
  this->fields.questRestrictionInfo = 0LL;
  sub_1B88554(&this->fields.questRestrictionInfo, 0LL);
  ReturnTypeByQuestId = (__int64)this->fields.sort;
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  ListViewSort__Load((ListViewSort_o *)ReturnTypeByQuestId, 0LL);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ReturnTypeByQuestId = (__int64)this->fields.sort;
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  ListViewSort__Save((ListViewSort_o *)ReturnTypeByQuestId, 0LL);
  v20 = this->fields.sort;
  if ( !v20 )
    goto LABEL_47;
  if ( v20->fields.isRequestSave )
  {
    v21 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v21 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor = (int)v21->fields.sort->monitor;
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(v21, v6) )
    {
      v24 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v24 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6748/*"FollowerSelectClass"*/, v24->static_fields->followerClassId, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
    v25 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v25 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor_high = HIDWORD(v25->fields.sort->monitor);
    if ( monitor_high != FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(v25, v23) )
    {
      v27 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v27 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(
        (System_String_o *)StringLiteral_6751/*"FollowerSelectOldClass"*/,
        v27->static_fields->oldFollowerClassId,
        0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
  this->fields.originalItemList = 0LL;
  sub_1B88554(&this->fields.originalItemList, 0LL);
  this->fields.mixItemList = 0LL;
  sub_1B88554(&this->fields.mixItemList, 0LL);
  this->fields.recommendItemList = 0LL;
  sub_1B88554(&this->fields.recommendItemList, 0LL);
  classButtonControl = this->fields.classButtonControl;
  v29 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1B887FC(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v29,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_47;
  ClassButtonControlComponent__init(classButtonControl, v29, this->fields.questId, this->fields.questPhase, 0, 0LL);
  this->fields.isInput = 0;
  ReturnTypeByQuestId = (__int64)FollowerSelectItemListViewManager_TypeInfo;
  v30 = this->fields.classButtonControl;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    ReturnTypeByQuestId = j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  if ( !v30 )
    goto LABEL_47;
  ClassButtonControlComponent__setCursor(
    v30,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  setupInfo = this->fields.setupInfo;
  v33 = setupInfo ? setupInfo->fields.eventIdList : (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, v33, v31);
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
    ReturnTypeByQuestId = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11674/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/, 0LL);
    if ( bonusFilterKindLabel )
    {
      UILabel__set_text(bonusFilterKindLabel, (System_String_o *)ReturnTypeByQuestId, 0LL);
      goto LABEL_43;
    }
LABEL_47:
    sub_1B8880C(ReturnTypeByQuestId, v6);
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
  __int64 v3; // x1

  if ( (byte_4A56485 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56485 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__EndCloseClassBoardEffectListDialog(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A56496 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56496 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CommonUI__CloseClassBoardEffectListDialog((CommonUI_o *)Instance, 0LL, 0LL);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x21

  if ( (byte_4A56487 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56487 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__,
    0LL);
  if ( !Instance )
LABEL_8:
    sub_1B8880C(sort, v6);
  CommonUI__CloseServantBonusFilterSelectMenu((CommonUI_o *)Instance, v9, 0LL);
}


int32_t __fastcall FollowerSelectItemListViewManager__GetAdvantageClassId(
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

  if ( (byte_4A56472 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56472 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v14 = v11->fields.classIds;
  if ( !v14 )
    goto LABEL_17;
  if ( !v14->max_length )
    sub_1B88814(Instance, v9);
  if ( !Instance )
LABEL_17:
    sub_1B8880C(Instance, v9);
  v15 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          v14->m_Items[1],
          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  result = defaultValue;
  if ( v15 )
    return HIDWORD(v15[4].klass);
  return result;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_c *v2; // x0

  if ( (byte_4A5647B & 1) == 0 )
  {
    sub_1B885B0(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4A5647B = 1;
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

  if ( (byte_4A56497 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4A56497 = 1;
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
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  _BOOL8 AdvantageClassAuto; // x0
  const MethodInfo *v15; // x3
  int32_t AdvantageClassId; // w22
  _BOOL8 IsSameQuestAndPhase; // x0
  const MethodInfo *v18; // x4
  RecommendSupportQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A56470 & 1) == 0 )
  {
    sub_1B885B0(&ClassButtonControlComponent_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_RecommendSupportQuestMaster___);
    sub_1B885B0(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    this = (FollowerSelectItemListViewManager_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56470 = 1;
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
    v9 = FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v9 = FollowerSelectItemListViewManager_TypeInfo;
    }
    PlayerPrefsFollowerClassId = v9->static_fields->followerClassId;
  }
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(PlayerPrefsFollowerClassId, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_RecommendSupportQuestMaster___)) == 0LL )
    {
      sub_1B8880C(Instance, v11);
    }
    v12 = RecommendSupportQuestMaster__TryGetEntity(
            (RecommendSupportQuestMaster_o *)Instance,
            &entity,
            questId,
            questPhase,
            0LL);
    if ( !v12 )
      PlayerPrefsFollowerClassId = FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(
                                     (FollowerSelectItemListViewManager_o *)v12,
                                     v13);
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
                            v15);
    AdvantageClassId = PlayerPrefsFollowerClassId;
    if ( !IsSameQuestAndPhase )
      AdvantageClassId = FollowerSelectItemListViewManager__GetAdvantageClassId(
                           (FollowerSelectItemListViewManager_o *)IsSameQuestAndPhase,
                           questId,
                           questPhase,
                           PlayerPrefsFollowerClassId,
                           v18);
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
  FollowerSelectItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A56479 & 1) == 0 )
  {
    sub_1B885B0(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A56479 = 1;
  }
  result = (FollowerSelectItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4A56492 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4A56492 = 1;
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
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v8; // w22
  FollowerSelectItemListViewItem_o *Item; // x0
  __int64 methodPtr_low; // x10
  struct FollowerInfo_o *followerInfo; // x8

  if ( (byte_4A56493 & 1) == 0 )
  {
    sub_1B885B0(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A56493 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1B8880C(itemList, userId);
  v8 = 0;
  while ( v8 < itemList->fields._size )
  {
    Item = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                 itemList,
                                                 v8,
                                                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (FollowerSelectItemListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo )
      {
        followerInfo = Item->fields.followerInfo;
        if ( followerInfo )
          followerInfo = (struct FollowerInfo_o *)followerInfo->fields.userId;
        if ( followerInfo == (struct FollowerInfo_o *)userId )
        {
          itemList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                    Item,
                                                                    (const MethodInfo *)userId);
          if ( !itemList )
            goto LABEL_15;
          if ( itemList[1].klass == (System_Collections_Generic_List_object__c *)userSvtId )
            return v8;
        }
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v8;
    if ( !itemList )
      goto LABEL_15;
  }
  return 0;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetItemIndex_30858584(
        FollowerSelectItemListViewManager_o *this,
        int64_t userId,
        int32_t classId,
        int32_t deckId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v10; // w23
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8
  int monitor_high; // w8

  if ( (byte_4A56494 & 1) == 0 )
  {
    sub_1B885B0(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A56494 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_17:
    sub_1B8880C(itemList, userId);
  v10 = 0;
  while ( v10 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v10,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (FollowerSelectItemListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo )
      {
        klass = Item[7].klass;
        if ( klass )
          klass = (Il2CppClass *)klass->_1.name;
        if ( klass == (Il2CppClass *)userId )
        {
          monitor_high = HIDWORD(Item[7].monitor);
          if ( monitor_high )
            monitor_high = (int)Item[7].monitor;
          if ( monitor_high == classId && HIDWORD(Item[16].klass) == deckId )
            return v10;
        }
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v10;
    if ( !itemList )
      goto LABEL_17;
  }
  return -1;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A56474 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6748/*"FollowerSelectClass"*/);
    byte_4A56474 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6748/*"FollowerSelectClass"*/, 0, 0LL);
}


int32_t __fastcall FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A56475 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6751/*"FollowerSelectOldClass"*/);
    byte_4A56475 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6751/*"FollowerSelectOldClass"*/, 0, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewManager_c *v2; // x0
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v4; // x8

  if ( (byte_4A56469 & 1) == 0 )
  {
    sub_1B885B0(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4A56469 = 1;
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
    sub_1B8880C(v2, v1);
  }
  ListViewSort__InitLoad((ListViewSort_o *)v2, 0LL);
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

  if ( (byte_4A56471 & 1) == 0 )
  {
    sub_1B885B0(&BattleData_TypeInfo);
    sub_1B885B0(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4A56471 = 1;
  }
  v6 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v6 = FollowerSelectItemListViewManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  if ( static_fields->lastSelectedQuestId == -1 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = FollowerSelectItemListViewManager_TypeInfo;
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
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = FollowerSelectItemListViewManager_TypeInfo;
  }
  v8 = v6->static_fields;
  if ( v8->lastSelectedQuestId != questId )
    return 0;
  if ( !v6->_2.cctor_finished )
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
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w25
  int32_t v9; // w22
  const MethodInfo *v10; // x3
  __int64 methodPtr_low; // x10
  FollowerSelectItemListViewManager_c *v12; // x0
  int32_t followerClassId; // w22
  int v14; // w25
  int32_t v15; // w22
  const MethodInfo *v16; // x3
  __int64 v17; // x10
  int v18; // w25
  int32_t v19; // w22
  const MethodInfo *v20; // x3
  __int64 v21; // x10

  if ( (byte_4A56476 & 1) == 0 )
  {
    sub_1B885B0(&ClassButtonControlComponent_TypeInfo);
    sub_1B885B0(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1B885B0(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A56476 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_34;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v9,
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        v10);
      if ( size == ++v9 )
        goto LABEL_12;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_34:
    sub_1B8880C(itemList, *(_QWORD *)&friendPointUpVal);
  }
LABEL_12:
  v12 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v12 = FollowerSelectItemListViewManager_TypeInfo;
  }
  followerClassId = v12->static_fields->followerClassId;
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsMixSupportGroupType(followerClassId, 0LL) )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.originalItemList;
    if ( !itemList )
      goto LABEL_34;
    v14 = itemList->fields._size;
    if ( v14 >= 1 )
    {
      v15 = 0;
      do
      {
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemList,
                                                                  v15,
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          break;
        v17 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v17
          || (FollowerSelectItemListViewItem_c *)itemList->klass->_2.typeHierarchy[v17 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          break;
        }
        FollowerSelectItemListViewItem__Modify(
          (FollowerSelectItemListViewItem_o *)itemList,
          friendPointUpVal,
          friendPointUpMaxVal,
          v16);
        if ( v14 == ++v15 )
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
    v18 = itemList->fields._size;
    if ( v18 >= 1 )
    {
      v19 = 0;
      do
      {
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemList,
                                                                  v19,
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          break;
        v21 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v21
          || (FollowerSelectItemListViewItem_c *)itemList->klass->_2.typeHierarchy[v21 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          break;
        }
        FollowerSelectItemListViewItem__Modify(
          (FollowerSelectItemListViewItem_o *)itemList,
          friendPointUpVal,
          friendPointUpMaxVal,
          v20);
        if ( v18 == ++v19 )
          return;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.mixItemList;
      }
      while ( itemList );
      goto LABEL_34;
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OnChangeClass(
        FollowerSelectItemListViewManager_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 IsRecommendSupportGroupType; // x0
  __int64 v6; // x1
  int v7; // w21
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t oldCursor; // w22
  const MethodInfo *v10; // x2
  struct ClassButtonControlComponent_o *v11; // x8
  int32_t v12; // w23
  FollowerSelectItemListViewManager_c *v13; // x0
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  const MethodInfo *v16; // x2

  if ( (byte_4A5648D & 1) == 0 )
  {
    sub_1B885B0(&ClassButtonControlComponent_TypeInfo);
    sub_1B885B0(&Method_FollowerSelectItemListViewManager_OnChangeClass__);
    sub_1B885B0(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4A5648D = 1;
  }
  if ( this->fields.isInput )
  {
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    IsRecommendSupportGroupType = ClassButtonControlComponent__IsRecommendSupportGroupType(classPos, 0LL);
    if ( this->fields.classButtonControl )
    {
      v7 = IsRecommendSupportGroupType;
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
        if ( ((v7 | (unsigned int)IsRecommendSupportGroupType) & 1) != 0 )
          FollowerSelectItemListViewManager__SetEmptyMessage(this, classPos, v10);
      }
      v11 = this->fields.classButtonControl;
      if ( v11 )
      {
        v12 = v11->fields.oldCursor;
        v13 = FollowerSelectItemListViewManager_TypeInfo;
        if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
          v13 = FollowerSelectItemListViewManager_TypeInfo;
        }
        v13->static_fields->oldFollowerClassId = v12;
        v14 = Method_FollowerSelectItemListViewManager_OnChangeClass__;
        if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnChangeClass__ + 83) & 2) != 0 )
          v14 = (_QWORD *)sub_1B885C8();
        v15 = (System_Reflection_MethodBase_o *)sub_1B88594(v14, v14[4]);
        OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
        if ( (v7 & 1) != 0 )
          FollowerSelectItemListViewManager__OnClickRecommend(this, classPos, v16);
        else
          FollowerSelectItemListViewManager__SortClass(this, classPos, v16);
        return;
      }
    }
LABEL_22:
    sub_1B8880C(IsRecommendSupportGroupType, v6);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickBonusFilterKind(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  _BOOL4 isServantBonusFilterEnable; // w24
  _BOOL4 isServantEquipBonusFilterEnable; // w25
  System_Int32_array *equipBonusFilterEventIds; // x20
  ListViewSort_o *sort; // x21
  CommonUI_o *v10; // x22
  ServantBonusFilterSelectMenu_CallbackFunc_o *v11; // x23
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4A56486 & 1) == 0 )
  {
    sub_1B885B0(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__);
    sub_1B885B0(&Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56486 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
    isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
    equipBonusFilterEventIds = this->fields.equipBonusFilterEventIds;
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantBonusFilterSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantBonusFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__,
      0LL);
    if ( !v10 )
      sub_1B8880C(v12, v13);
    CommonUI__OpenServantBonusFilterSelectMenu(
      v10,
      0,
      isServantBonusFilterEnable,
      isServantEquipBonusFilterEnable,
      equipBonusFilterEventIds,
      sort,
      v11,
      0LL);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickChangeSkill(
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

  if ( (byte_4A56491 & 1) == 0 )
  {
    sub_1B885B0(&Method_FollowerSelectItemListViewManager_OnClickChangeSkill__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    byte_4A56491 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickChangeSkill__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickChangeSkill__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    displaySkill = this->fields.displaySkill;
    if ( (unsigned int)displaySkill <= 2 )
      this->fields.displaySkill = dword_BECEE4[displaySkill];
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
                                                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
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
      sub_1B8880C(ObjectList, v8);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickClassComparibility(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A56484 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__);
    sub_1B885B0(&Method_FollowerSelectItemListViewManager_OnClickClassComparibility__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56484 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickClassComparibility__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickClassComparibility__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v6,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__,
      0LL);
    if ( !Instance )
      sub_1B8880C(v7, v8);
    CommonUI__OpenClassCompatibilityMenu((CommonUI_o *)Instance, v6, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall FollowerSelectItemListViewManager__OnClickRecommend(
        FollowerSelectItemListViewManager_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  FollowerSelectItemListViewManager_c *v7; // x0
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5648E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__);
    sub_1B885B0(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4A5648E = 1;
  }
  entity = 0LL;
  if ( this->fields.isGetRecommendSupport )
    goto LABEL_4;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
  if ( !Master_object )
    goto LABEL_18;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          (const MethodInfo_311DBBC *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    goto LABEL_13;
  Master_object = entity;
  if ( !entity )
    goto LABEL_18;
  if ( !UserRecommendFollowerEntity__IsEnableData((UserRecommendFollowerEntity_o *)entity, 0LL) )
    goto LABEL_13;
  Master_object = entity;
  if ( !entity )
LABEL_18:
    sub_1B8880C(Master_object, v6);
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
  v7 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v7 = FollowerSelectItemListViewManager_TypeInfo;
  }
  v7->static_fields->followerClassId = classPos;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1B88554(&this->fields.callbackFunc, 0LL);
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
  __int64 v5; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w19
  __int64 v8; // x1

  if ( (byte_4A56483 & 1) == 0 )
  {
    sub_1B885B0(&ClassButtonControlComponent_TypeInfo);
    byte_4A56483 = 1;
  }
  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0LL;
      v4 = sub_1B88554(&this->fields.callbackFunc, 0LL);
      classButtonControl = this->fields.classButtonControl;
      if ( !classButtonControl )
        sub_1B8880C(v4, v5);
      currentCursor = classButtonControl->fields.currentCursor;
      if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      if ( ClassButtonControlComponent__IsRecommendSupportGroupType(currentCursor, 0LL) )
        v8 = 13LL;
      else
        v8 = 7LL;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        v8,
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
    v5 = sub_1B88554(&this->fields.callbackFunc, 0LL);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1B8880C(v5, v6);
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
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4A5648B & 1) == 0 )
  {
    sub_1B885B0(&Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__);
    byte_4A5648B = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B8880C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickSortKind(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  _BOOL8 IsRecommendSupportGroupType; // x0
  __int64 v6; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w20
  struct ListViewSort_o *sort; // x8
  int v10; // w9
  Il2CppObject *Instance; // x0
  ListViewSort_o *v12; // x20
  CommonUI_o *v13; // x21
  OtherUserSortDialog_CallbackFunc_o *v14; // x22

  if ( (byte_4A56489 & 1) == 0 )
  {
    sub_1B885B0(&OtherUserSortDialog_CallbackFunc_TypeInfo);
    sub_1B885B0(&ClassButtonControlComponent_TypeInfo);
    sub_1B885B0(&Method_FollowerSelectItemListViewManager_CloseSortDialog__);
    sub_1B885B0(&Method_FollowerSelectItemListViewManager_OnClickSortKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56489 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
            v10 = 29;
          else
            v10 = 11;
          sort->fields.otherSortKind = v10;
          ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
          return;
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v12 = this->fields.sort;
        v13 = (CommonUI_o *)Instance;
        v14 = (OtherUserSortDialog_CallbackFunc_o *)sub_1B887FC(OtherUserSortDialog_CallbackFunc_TypeInfo);
        OtherUserSortDialog_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          Method_FollowerSelectItemListViewManager_CloseSortDialog__,
          0LL);
        if ( v13 )
        {
          CommonUI__OpenOtherUserSortDialog(v13, 0, v12, v14, 0LL);
          return;
        }
      }
    }
    sub_1B8880C(IsRecommendSupportGroupType, v6);
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
    v5 = sub_1B88554(&this->fields.callbackFunc, 0LL);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1B8880C(v5, v6);
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
    v5 = sub_1B88554(&this->fields.callbackFunc, 0LL);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1B8880C(v5, v6);
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
    v5 = sub_1B88554(&this->fields.callbackFunc, 0LL);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1B8880C(v5, v6);
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

  if ( (byte_4A56482 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12549/*"ScrollViewEnabled"*/);
    byte_4A56482 = 1;
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
        (System_String_o *)StringLiteral_12549/*"ScrollViewEnabled"*/,
        0.1,
        0LL);
    }
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    tutorialListViewObject = (UnityEngine_Component_o *)sub_1B88554(&this->fields.callbackFunc, 0LL);
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
      sub_1B8880C(tutorialListViewObject, obj);
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
  UnityEngine_Component_o *tutorialListViewObject; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4A56481 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56481 = 1;
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
              sub_1B88554(&this->fields.callbackFunc2, 0LL);
              if ( callbackFunc2 )
                ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
                  callbackFunc2->fields.original_method_info,
                  *(_QWORD *)&callbackFunc2->fields.extra_arg);
              return;
            }
          }
        }
      }
      sub_1B8880C(tutorialListViewObject, v7);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OpenSupportClassBoard(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *v4; // x19
  System_Collections_Generic_List_object__o *itemList; // x21
  int32_t Index; // w0
  Il2CppObject *Item; // x0
  FollowerSelectItemListViewItem_o *v8; // x20
  __int64 methodPtr_low; // x10
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  Il2CppObject *Master_object; // x21
  const MethodInfo *v15; // x1
  int32_t scrollView; // w22
  struct FollowerInfo_o *followerInfo; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v20; // w20
  unsigned int v21; // w24
  ClassBoardInfo_o *v22; // x21
  _QWORD *v23; // x22
  __int64 v24; // x8
  __int64 v25; // x0
  __int64 v26; // x0
  struct System_Int32_array **v27; // x8
  struct System_Int32_array *v28; // x1
  _QWORD *v29; // x22
  __int64 v30; // x8
  __int64 v31; // x0
  __int64 v32; // x0
  struct System_Int32_array **v33; // x8
  struct System_Int32_array *v34; // x1
  Il2CppObject *Instance; // x22
  System_Action_o *v36; // x23

  v4 = this;
  if ( (byte_4A56495 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&ClassBoardInfo_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__);
    sub_1B885B0(&Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (FollowerSelectItemListViewManager_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56495 = 1;
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
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Item )
          return;
        v8 = (FollowerSelectItemListViewItem_o *)Item;
        methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (FollowerSelectItemListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          return;
        }
        if ( BYTE3(Item[12].monitor) )
        {
          v10 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
          if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 83) & 2) != 0 )
            v10 = (_QWORD *)sub_1B885C8();
          v11 = (System_Reflection_MethodBase_o *)sub_1B88594(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0LL);
          return;
        }
        v4->fields.isInput = 0;
        v12 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
        if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 83) & 2) != 0 )
          v12 = (_QWORD *)sub_1B885C8();
        v13 = (System_Reflection_MethodBase_o *)sub_1B88594(v12, v12[4]);
        OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
        this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewItem__get_SvtId(v8, v15);
        if ( Master_object )
        {
          this = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                          (int32_t)this,
                                                          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            scrollView = (int32_t)this->fields.scrollView;
            this = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( this )
            {
              this = (FollowerSelectItemListViewManager_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                                              (ClassBoardClassMaster_o *)this,
                                                              scrollView,
                                                              0LL);
              followerInfo = v8->fields.followerInfo;
              if ( followerInfo )
              {
                userClassBoardInfo = followerInfo->fields.userClassBoardInfo;
                if ( userClassBoardInfo )
                {
                  max_length = userClassBoardInfo->max_length;
                  v20 = (int)this;
                  if ( max_length < 1 )
                  {
LABEL_30:
                    v22 = (ClassBoardInfo_o *)sub_1B887FC(ClassBoardInfo_TypeInfo);
                    ClassBoardInfo___ctor(v22, 0LL);
                    if ( v22 )
                    {
                      v22->fields.classBoardBaseId = v20;
                      v23 = Method_System_Array_Empty_int___;
                      v24 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v24 )
                      {
                        sub_1BDA4E8(Method_System_Array_Empty_int___);
                        v24 = v23[7];
                      }
                      v25 = *(_QWORD *)(v24 + 16);
                      if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
                        v25 = sub_1BDA48C();
                      if ( !*(_DWORD *)(v25 + 224) )
                        j_il2cpp_runtime_class_init_0(v25);
                      v26 = *(_QWORD *)(v23[7] + 16LL);
                      if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
                        v26 = sub_1BDA48C();
                      v27 = *(struct System_Int32_array ***)(v26 + 184);
                      v28 = *v27;
                      v22->fields.squareIds = *v27;
                      sub_1B88554(&v22->fields.squareIds, v28);
                      v29 = Method_System_Array_Empty_int___;
                      v30 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v30 )
                      {
                        sub_1BDA4E8(Method_System_Array_Empty_int___);
                        v30 = v29[7];
                      }
                      v31 = *(_QWORD *)(v30 + 16);
                      if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
                        v31 = sub_1BDA48C();
                      if ( !*(_DWORD *)(v31 + 224) )
                        j_il2cpp_runtime_class_init_0(v31);
                      v32 = *(_QWORD *)(v29[7] + 16LL);
                      if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
                        v32 = sub_1BDA48C();
                      v33 = *(struct System_Int32_array ***)(v32 + 184);
                      v34 = *v33;
                      v22->fields.releasedClassIds = *v33;
                      sub_1B88554(&v22->fields.releasedClassIds, v34);
LABEL_48:
                      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v36 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                      System_Action___ctor(
                        v36,
                        (Il2CppObject *)v4,
                        Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__,
                        0LL);
                      if ( Instance )
                      {
                        CommonUI__OpenClassBoardEffectListDialog((CommonUI_o *)Instance, 1, v20, 0, v36, 1, v22, 0LL);
                        return;
                      }
                    }
                  }
                  else
                  {
                    v21 = 0;
                    while ( 1 )
                    {
                      if ( v21 >= max_length )
                        sub_1B88814(this, obj);
                      v22 = userClassBoardInfo->m_Items[v21];
                      if ( !v22 )
                        break;
                      if ( v22->fields.classBoardBaseId == v20 )
                      {
                        this = (FollowerSelectItemListViewManager_o *)ClassBoardInfo__IsReleasedClassId(
                                                                        v22,
                                                                        scrollView,
                                                                        0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          goto LABEL_48;
                      }
                      max_length = userClassBoardInfo->max_length;
                      if ( (int)++v21 >= max_length )
                        goto LABEL_30;
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_1B8880C(this, obj);
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
    sub_1B8880C(0LL, method);
  ClassButtonControlComponent__PlayRecommendEffect(classButtonControl, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__RequestInto(
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

  if ( (byte_4A56480 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A56480 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = FollowerSelectItemListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_1B8880C(ObjectList, v5);
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
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      FollowerSelectItemListViewObject__Init_30851800((FollowerSelectItemListViewObject_o *)Item, 4, v11, 0.1, v12);
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
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5647E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__);
    sub_1B885B0(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5647E = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v12, v13);
      FollowerSelectItemListViewObject__Init_30851800(
        (FollowerSelectItemListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__RequestListObject_30850684(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5647F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__);
    sub_1B885B0(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5647F = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v10, v11);
      FollowerSelectItemListViewObject__Init_30851188((FollowerSelectItemListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
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
  const MethodInfo *v7; // x1
  FollowerSelectItemListViewManager_c *v8; // x0
  FollowerSelectItemListViewManager_o *v9; // x0
  int monitor_high; // w20
  FollowerSelectItemListViewManager_c *v11; // x0

  if ( (byte_4A56478 & 1) == 0 )
  {
    sub_1B885B0(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_6748/*"FollowerSelectClass"*/);
    sub_1B885B0(&StringLiteral_6751/*"FollowerSelectOldClass"*/);
    byte_4A56478 = 1;
  }
  sort = this->fields.sort;
  if ( !sort || (ListViewSort__Save(sort, 0LL), (v4 = this->fields.sort) == 0LL) )
    sub_1B8880C(sort, method);
  if ( v4->fields.isRequestSave )
  {
    v5 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v5 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor = (int)v5->fields.sort->monitor;
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(v5, method) )
    {
      v8 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v8 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6748/*"FollowerSelectClass"*/, v8->static_fields->followerClassId, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
    v9 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v9 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor_high = HIDWORD(v9->fields.sort->monitor);
    if ( monitor_high != FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(v9, v7) )
    {
      v11 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v11 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(
        (System_String_o *)StringLiteral_6751/*"FollowerSelectOldClass"*/,
        v11->static_fields->oldFollowerClassId,
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
    sub_1B8880C(0LL, method);
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
  bool isBonusFilterEnable; // w27
  bool isServantBonusFilterEnable; // w27
  bool isServantEquipBonusFilterEnable; // w27
  struct System_Int32_array *v14; // x0
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5646C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventFilterMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5646C = 1;
  }
  entity = 0LL;
  *(_WORD *)&this->fields.isBonusFilterEnable = 0;
  this->fields.isServantEquipBonusFilterEnable = 0;
  Instance = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)eventIds,
                                                         (const MethodInfo_2EBBD90 *)Method_System_Linq_Enumerable_ToList_int___);
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
        sub_1B88814(Instance, v6);
      v10 = eventIds->m_Items[v9 + 1];
      Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventFilterMaster___);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)EventFilterMaster__TryGetEntity_39132904(
                                                             (EventFilterMaster_o *)Instance,
                                                             &entity,
                                                             v10,
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
          if ( !v8 )
            break;
          Instance = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Remove(
                                                                 v8,
                                                                 v10,
                                                                 (const MethodInfo_34E1D0C *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
      else
      {
        *(_WORD *)&this->fields.isBonusFilterEnable = 257;
        this->fields.isServantEquipBonusFilterEnable = 1;
      }
      LODWORD(v7) = eventIds->max_length;
      if ( (__int64)++v9 >= (int)v7 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B8880C(Instance, v6);
  }
LABEL_20:
  if ( !v8 )
    goto LABEL_22;
  v14 = System_Collections_Generic_List_int___ToArray(
          v8,
          (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.equipBonusFilterEventIds = v14;
  sub_1B88554(&this->fields.equipBonusFilterEventIds, v14);
}


void __fastcall FollowerSelectItemListViewManager__SetClassBoardInfo(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classInfoSprite; // x20
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x0
  System_Collections_Generic_Dictionary_int__int__o **p_classBoardMaxDictionary; // x20
  System_Collections_Generic_Dictionary_int__int__o *v8; // x19
  System_Collections_ObjectModel_Collection_T__o *Master_object; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x21
  __int64 methodPtr_low; // x9
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v27; // x1
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4A5646E & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&ClassBoardBaseEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&StringLiteral_17671/*"buttontxt_formation_20"*/);
    byte_4A5646E = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v3->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_37596684(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17671/*"buttontxt_formation_20"*/, 0LL);
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = &this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_3165008 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v8,
      (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *p_classBoardMaxDictionary = v8;
    sub_1B88554(p_classBoardMaxDictionary, v8);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object
    || (Master_object = (System_Collections_ObjectModel_Collection_T__o *)Master_object[1].monitor) == 0LL )
  {
    sub_1B8880C(Master_object, v10);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Master_object,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_23;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_23:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_30;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_30:
      v20 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8));
    v22 = v21;
    if ( v21 )
    {
      methodPtr_low = LOBYTE(ClassBoardBaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 304LL) < (unsigned int)methodPtr_low
        || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * methodPtr_low - 8) != ClassBoardBaseEntity_TypeInfo )
      {
        v24 = (Il2CppObject *)sub_1B88ACC(v21);
LABEL_50:
        sub_1B8880C(v24, v25);
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v24 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v22 )
      goto LABEL_50;
    if ( !v24 )
      sub_1B8880C(0LL, v25);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                            (ClassBoardSquareMaster_o *)v24,
                            *(_DWORD *)(v22 + 16),
                            0LL);
    if ( OtherThanNoneEntity )
    {
      if ( !*p_classBoardMaxDictionary )
        sub_1B8880C(OtherThanNoneEntity, v27);
      System_Collections_Generic_Dictionary_int__int___Add(
        *p_classBoardMaxDictionary,
        *(_DWORD *)(v22 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_46;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_46:
    v31 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
}


void __fastcall FollowerSelectItemListViewManager__SetClassId(
        FollowerSelectItemListViewManager_o *this,
        int32_t followerClassId,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_c *v5; // x0
  System_Collections_Generic_IEnumerable_T__o *mixItemList; // x21
  System_Collections_Generic_List_object__o *v7; // x22
  __int64 v8; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  const MethodInfo *v10; // x1
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerable_T__o *recommendItemList; // x21
  System_Collections_Generic_List_object__o *v13; // x22
  const MethodInfo *v14; // x1
  __int64 v15; // x10
  System_Collections_Generic_IEnumerable_T__o *originalItemList; // x21
  System_Collections_Generic_List_object__o *v17; // x22
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x20
  const MethodInfo *v19; // x2
  __int64 v20; // x10
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5647C & 1) == 0 )
  {
    sub_1B885B0(&ClassButtonControlComponent_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1B885B0(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem___ctor___76037576);
    sub_1B885B0(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    byte_4A5647C = 1;
  }
  v5 = FollowerSelectItemListViewManager_TypeInfo;
  memset(&v22, 0, sizeof(v22));
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v5 = FollowerSelectItemListViewManager_TypeInfo;
  }
  v5->static_fields->followerClassId = followerClassId;
  if ( this->fields.mixItemList && this->fields.originalItemList )
  {
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    if ( ClassButtonControlComponent__IsMixSupportGroupType(followerClassId, 0LL) )
    {
      mixItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.mixItemList;
      v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ListViewItem__TypeInfo);
      System_Collections_Generic_List_object____ctor_55562536(
        v7,
        mixItemList,
        (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_ListViewItem___ctor___76037576);
      this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v7;
      sub_1B88554(&this->fields.itemList, v7);
      itemList = this->fields.itemList;
      if ( itemList )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v21,
          (System_Collections_Generic_List_object__o *)itemList,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v22 = v21;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v22,
                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( v22.fields._current )
          {
            methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(v22.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
              && (FollowerSelectItemListViewItem_c *)v22.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo )
            {
              FollowerSelectItemListViewItem__UpdateRestriction(
                (FollowerSelectItemListViewItem_o *)v22.fields._current,
                v10);
            }
          }
        }
LABEL_34:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v22,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
        v13 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor_55562536(
          v13,
          recommendItemList,
          (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_ListViewItem___ctor___76037576);
        this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v13;
        sub_1B88554(&this->fields.itemList, v13);
        itemList = this->fields.itemList;
        if ( itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v21,
            (System_Collections_Generic_List_object__o *)itemList,
            (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v22 = v21;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v22,
                    (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v22.fields._current )
            {
              v15 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(v22.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v15
                && (FollowerSelectItemListViewItem_c *)v22.fields._current->klass->_2.typeHierarchy[v15 - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__UpdateRestriction(
                  (FollowerSelectItemListViewItem_o *)v22.fields._current,
                  v14);
              }
            }
          }
          goto LABEL_34;
        }
      }
      else
      {
        originalItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.originalItemList;
        v17 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor_55562536(
          v17,
          originalItemList,
          (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_ListViewItem___ctor___76037576);
        this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v17;
        p_itemList = &this->fields.itemList;
        sub_1B88554(p_itemList, v17);
        itemList = *p_itemList;
        if ( *p_itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v21,
            (System_Collections_Generic_List_object__o *)itemList,
            (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v22 = v21;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v22,
                    (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v22.fields._current )
            {
              v20 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(v22.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v20
                && (FollowerSelectItemListViewItem_c *)v22.fields._current->klass->_2.typeHierarchy[v20 - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__AnalyzeEntity(
                  (FollowerSelectItemListViewItem_o *)v22.fields._current,
                  followerClassId,
                  v19);
              }
            }
          }
          goto LABEL_34;
        }
      }
    }
    sub_1B8880C(itemList, v8);
  }
}


void __fastcall FollowerSelectItemListViewManager__SetEmptyMessage(
        FollowerSelectItemListViewManager_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  System_String_o **v5; // x8
  System_String_o *v6; // x20
  UILabel_o *emptyMessageLabel; // x19
  System_String_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_4A56473 & 1) == 0 )
  {
    sub_1B885B0(&ClassButtonControlComponent_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11002/*"RECOMMEND_SERVANT_EMPTY"*/);
    sub_1B885B0(&StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4A56473 = 1;
  }
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(classId, 0LL) )
    v5 = (System_String_o **)&StringLiteral_11002/*"RECOMMEND_SERVANT_EMPTY"*/;
  else
    v5 = (System_String_o **)&StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  v6 = *v5;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get(v6, 0LL);
  if ( !emptyMessageLabel )
    sub_1B8880C(v8, v9);
  UILabel__set_text(emptyMessageLabel, v8, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__SetFilterButtonImage(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *bonusFilterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4A56488 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17534/*"btn_sefilter_2_on"*/);
    sub_1B885B0(&StringLiteral_17533/*"btn_sefilter_2"*/);
    byte_4A56488 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (bonusFilterSprite = this->fields.bonusFilterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !bonusFilterSprite) )
  {
    sub_1B8880C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17533/*"btn_sefilter_2"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17534/*"btn_sefilter_2_on"*/;
  UISprite__set_spriteName(bonusFilterSprite, *v5, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__SetMode(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        FollowerSelectItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B88554(&this->fields.callbackFunc, callback);
  FollowerSelectItemListViewManager__SetMode_30849932(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__SetMode_30849932(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ClippingObjectList; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x19
  int32_t v8; // w20
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  __int64 *v11; // x8
  const MethodInfo *v12; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v14; // x20
  int32_t v15; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v17; // x23
  const MethodInfo *v18; // x3
  struct FollowerSelectItemListViewObject_o *tutorialListViewObject; // x23
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2

  if ( (byte_4A5647D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    sub_1B885B0(&StringLiteral_11311/*"RequestInto"*/);
    byte_4A5647D = 1;
  }
  if ( mode != 3 )
  {
    this->fields.initMode = mode;
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
    ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
    if ( mode == 1 )
    {
      v11 = &StringLiteral_11311/*"RequestInto"*/;
    }
    else
    {
      if ( mode != 4 )
      {
        if ( mode == 2 )
          FollowerSelectItemListViewManager__RequestListObject_30850684(this, 3, v10);
        return;
      }
      ListViewManager__set_IsInput((ListViewManager_o *)this, 1, 0LL);
      ClippingObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ClippingObjectList(
                                                                          this,
                                                                          v12);
      if ( !ClippingObjectList )
        goto LABEL_31;
      size = ClippingObjectList->fields._size;
      v14 = ClippingObjectList;
      if ( size >= 1 )
      {
        this->fields.callbackCount = size;
        v15 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v14,
                   v15,
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
          v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(v17, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
            break;
          if ( v15 )
          {
            FollowerSelectItemListViewObject__Init_30851188((FollowerSelectItemListViewObject_o *)Item, 2, v17, v18);
          }
          else
          {
            FollowerSelectItemListViewObject__Init_30851188((FollowerSelectItemListViewObject_o *)Item, 0, v17, v18);
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
            sub_1B88554(&ClippingObjectList[1], this);
            tutorialListViewObject = this->fields.tutorialListViewObject;
            ClippingObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewObject__GetItem(
                                                                                (FollowerSelectItemListViewObject_o *)Item,
                                                                                v20);
            if ( !tutorialListViewObject )
              break;
            ((void (__fastcall *)(struct FollowerSelectItemListViewObject_o *, System_Collections_Generic_List_object__o *, Il2CppMethodPointer))tutorialListViewObject->klass->vtable._5_SetItem.method)(
              tutorialListViewObject,
              ClippingObjectList,
              tutorialListViewObject->klass->vtable._6_SetItem.methodPtr);
            ClippingObjectList = (System_Collections_Generic_List_object__o *)this->fields.tutorialListViewObject;
            if ( !ClippingObjectList )
              break;
            FollowerSelectItemListViewObject__Init_30848460(
              (FollowerSelectItemListViewObject_o *)ClippingObjectList,
              6,
              v21);
          }
          if ( ++v15 >= v14->fields._size )
            return;
        }
LABEL_31:
        sub_1B8880C(ClippingObjectList, v6);
      }
      this->fields.callbackCount = 1;
      v11 = &StringLiteral_9935/*"OnMoveEnd"*/;
    }
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)*v11, 0.0, 0LL);
    return;
  }
  ClippingObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                                      this,
                                                                      *(const MethodInfo **)&mode);
  if ( !ClippingObjectList )
    goto LABEL_31;
  v7 = ClippingObjectList;
  if ( ClippingObjectList->fields._size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      ClippingObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          v7,
                                                                          v8,
                                                                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
      if ( !ClippingObjectList )
        break;
      FollowerSelectItemListViewObject__Init_30848460((FollowerSelectItemListViewObject_o *)ClippingObjectList, 5, v9);
      if ( ++v8 >= v7->fields._size )
        return;
    }
    goto LABEL_31;
  }
}


void __fastcall FollowerSelectItemListViewManager__SetMode_30850632(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B88554(&this->fields.callbackFunc2, callback);
  FollowerSelectItemListViewManager__SetMode_30849932(this, mode, v6);
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

  if ( (byte_4A5647A & 1) == 0 )
  {
    sub_1B885B0(&FollowerSelectItemListViewObject_TypeInfo);
    byte_4A5647A = 1;
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
    sub_1B8880C(v7, obj);
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
  FollowerSelectItemListViewObject__Init_30848460(
    (FollowerSelectItemListViewObject_o *)v7,
    v9,
    (const MethodInfo *)item);
}


void __fastcall FollowerSelectItemListViewManager__SetSortButtonImage(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  ListViewSort_o *sort; // x0
  __int64 v5; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w20
  bool IsRecommendSupportGroupType; // w20
  UILabel_o *sortKindLabel; // x21
  UnityEngine_Object_o *sortOrderSprite; // x21
  struct ListViewSort_o *v11; // x8
  __int64 v12; // x9
  int v13; // w9
  System_String_o **v14; // x8
  struct ListViewSort_o *v15; // x8
  System_String_o **v16; // x9
  System_String_o **v17; // x10
  System_String_o **v18; // x8
  System_String_o **v19; // x8

  if ( (byte_4A5648C & 1) == 0 )
  {
    sub_1B885B0(&ClassButtonControlComponent_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17541/*"btn_sort_up"*/);
    sub_1B885B0(&StringLiteral_17628/*"btn_txt_up"*/);
    sub_1B885B0(&StringLiteral_17584/*"btn_txt_new"*/);
    sub_1B885B0(&StringLiteral_17574/*"btn_txt_down"*/);
    sub_1B885B0(&StringLiteral_17591/*"btn_txt_old"*/);
    sub_1B885B0(&StringLiteral_17538/*"btn_sort_down"*/);
    byte_4A5648C = 1;
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
    v11 = this->fields.sort;
    if ( v11 )
    {
      v12 = 56LL;
      if ( IsRecommendSupportGroupType )
        v12 = 152LL;
      v13 = *(_DWORD *)((char *)&v11->klass + v12);
      if ( v13 == 11 || v13 == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v14 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_17591/*"btn_txt_old"*/ : &StringLiteral_17584/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v14, 0LL);
          v15 = this->fields.sort;
          if ( v15 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v16 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
              v17 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
LABEL_35:
              if ( v15->fields.isAscendingOrder )
                v19 = v16;
              else
                v19 = v17;
              UISprite__set_spriteName((UISprite_o *)sort, *v19, 0LL);
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
          v18 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_17628/*"btn_txt_up"*/ : &StringLiteral_17574/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v18, 0LL);
          v15 = this->fields.sort;
          if ( v15 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v16 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
              v17 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_39:
    sub_1B8880C(sort, v5);
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
  System_Collections_Generic_List_object__o *v8; // x21
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x20
  int size; // w25
  int32_t v13; // w22
  int v14; // w26
  Il2CppObject *v15; // x23
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_object__o *v21; // x22
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  if ( (byte_4A5648F & 1) == 0 )
  {
    sub_1B885B0(&ClassButtonControlComponent_TypeInfo);
    sub_1B885B0(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1B885B0(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem___ctor___76037576);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    byte_4A5648F = 1;
  }
  v5 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v5 = FollowerSelectItemListViewManager_TypeInfo;
  }
  if ( v5->static_fields->followerClassId != classPos )
  {
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    if ( !ClassButtonControlComponent__IsMixSupportGroupType(classPos, 0LL) )
    {
      v6 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v6 = FollowerSelectItemListViewManager_TypeInfo;
      }
      followerClassId = v6->static_fields->followerClassId;
      if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      ClassButtonControlComponent__IsMixSupportGroupType(followerClassId, 0LL);
    }
  }
  FollowerSelectItemListViewManager__SetClassId(this, classPos, method);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  p_itemList = &this->fields.itemList;
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_43;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v13 = 0;
    v14 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v13,
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      v15 = (Il2CppObject *)itemList;
      methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (FollowerSelectItemListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != FollowerSelectItemListViewItem_TypeInfo )
      {
        break;
      }
      itemList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewItem__get_SvtId(
                                                                (FollowerSelectItemListViewItem_o *)itemList,
                                                                v9);
      if ( (int)itemList >= 1 )
      {
        HIDWORD(v15[1].klass) = v14;
        if ( !v8 )
          break;
        items = v8->fields._items;
        v18 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v8->fields._version;
        if ( !items )
          break;
        v19 = v8->fields._size;
        if ( (unsigned int)v19 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            v15,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + v19;
          v8->fields._size = v19 + 1;
          v20[4] = (Il2CppClass *)v15;
          sub_1B88554(v20 + 4, v15);
        }
        ++v14;
      }
      if ( size == ++v13 )
        goto LABEL_30;
      itemList = (System_Collections_Generic_List_object__o *)*p_itemList;
    }
    while ( *p_itemList );
LABEL_43:
    sub_1B8880C(itemList, v9);
  }
LABEL_30:
  v21 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor_55562536(
    v21,
    (System_Collections_Generic_IEnumerable_T__o *)v8,
    (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_ListViewItem___ctor___76037576);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v21;
  sub_1B88554(&this->fields.itemList, v21);
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
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w20
  int64_t RefreshRemain; // x0
  __int64 v6; // x20
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x21
  UIWidget_o *refreshButtonSprite; // x21
  int64_t Time; // x0
  int64_t v11; // x21
  UILabel_o *refreshRemainLabel; // x22
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  Il2CppObject *Component_object; // x20
  Il2CppObject *v18; // x20
  __int64 v19; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4A56490 & 1) == 0 )
  {
    sub_1B885B0(&ClassButtonControlComponent_TypeInfo);
    sub_1B885B0(&FollowerListRequest_TypeInfo);
    sub_1B885B0(&FollowerRecommendSupportListRequest_TypeInfo);
    sub_1B885B0(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_24983/*"{0}"*/);
    this = (FollowerSelectItemListViewManager_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A56490 = 1;
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
  v6 = RefreshRemain;
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
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
      v20.fields.r = 1.0;
      v20.fields.g = 1.0;
      v20.fields.b = 1.0;
      v20.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this, v20, 0LL);
    }
    this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshTitleObject;
    if ( this )
    {
      v18 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)this,
              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (FollowerSelectItemListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                      (UnityEngine_Object_o *)v18,
                                                      0LL,
                                                      0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v18 )
          goto LABEL_59;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v18, 1, 0LL);
      }
      else
      {
        this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshTitleSprite;
        if ( !this )
          goto LABEL_59;
        v21.fields.r = 1.0;
        v21.fields.g = 1.0;
        v21.fields.b = 1.0;
        v21.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v21, 0LL);
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
    sub_1B8880C(this, method);
  }
  this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshButtonObject;
  if ( !this )
    goto LABEL_59;
  v7 = UnityEngine_GameObject__GetComponent_object_(
         (UnityEngine_GameObject_o *)this,
         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FollowerSelectItemListViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v7 )
      goto LABEL_59;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v7, 0, 0LL);
  }
  this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshTitleObject;
  if ( !this )
    goto LABEL_59;
  v8 = UnityEngine_GameObject__GetComponent_object_(
         (UnityEngine_GameObject_o *)this,
         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FollowerSelectItemListViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v8 )
      goto LABEL_59;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v8, 0, 0LL);
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
    v11 = Time;
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
        v19 = v6;
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v19, v13, v14, v15);
        this = (FollowerSelectItemListViewManager_o *)System_String__Format(
                                                        (System_String_o *)StringLiteral_24983/*"{0}"*/,
                                                        v16,
                                                        0LL);
        if ( refreshRemainLabel )
        {
          UILabel__set_text(refreshRemainLabel, (System_String_o *)this, 0LL);
          v2->fields.refreshCheckTime = v11;
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

  if ( (byte_4A56464 & 1) == 0 )
  {
    sub_1B885B0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    byte_4A56464 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1B88ACC(v7);
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

  if ( (byte_4A56466 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A56466 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1B88ACC(v7);
  FollowerSelectItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_FollowerSelectItemListViewObject__o *__fastcall FollowerSelectItemListViewManager__get_ClippingObjectList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5646B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5646B = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)FollowerSelectItemListViewObject__GetItem(
                                 (FollowerSelectItemListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_1B8880C(v14, v15);
          items = v3->fields._items;
          v17 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v14, v15);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v19 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v11;
        sub_1B88554(v19 + 4, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FollowerSelectItemListViewObject__o *)v3;
}


System_Collections_Generic_List_FollowerSelectItemListViewObject__o *__fastcall FollowerSelectItemListViewManager__get_ObjectList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5646A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5646A = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1B88554(v14 + 4, v10);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4A56465 & 1) == 0 )
  {
    sub_1B885B0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    byte_4A56465 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1B88ACC(v7);
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

  if ( (byte_4A56467 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A56467 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1B88ACC(v7);
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
  sub_1B88554(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C7154;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C70FC;
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
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_4A56499 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&FollowerSelectItemListViewManager_ResultKind_TypeInfo);
    byte_4A56499 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(
             FollowerSelectItemListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&result,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall FollowerSelectItemListViewManager_CallbackFunc__EndInvoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  Il2CppObject *v1; // x19

  if ( (byte_4A5649A & 1) == 0 )
  {
    sub_1B885B0(&FollowerSelectItemListViewManager___c_TypeInfo);
    byte_4A5649A = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(FollowerSelectItemListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  FollowerSelectItemListViewManager___c_TypeInfo->static_fields->__9 = (struct FollowerSelectItemListViewManager___c_o *)v1;
  sub_1B88554(FollowerSelectItemListViewManager___c_TypeInfo->static_fields, v1);
}


void __fastcall FollowerSelectItemListViewManager___c___ctor(
        FollowerSelectItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


ListViewSort_o *__fastcall FollowerSelectItemListViewManager___c____cctor_b__133_0(
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

  if ( (byte_4A5649B & 1) == 0 )
  {
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&StringLiteral_6749/*"FollowerSelectEventQuest"*/);
    sub_1B885B0(&StringLiteral_6750/*"FollowerSelectMainQuest"*/);
    byte_4A5649B = 1;
  }
  if ( questType )
  {
    if ( questType != 1 )
    {
      v8 = sub_1B885C4(&System_NotImplementedException_TypeInfo);
      v9 = (System_NotImplementedException_o *)sub_1B887FC(v8);
      System_NotImplementedException___ctor(v9, 0LL);
      v10 = sub_1B885C4(&Method_FollowerSelectItemListViewManager___c___cctor_b__133_0__);
      sub_1B886D8(v9, v10);
    }
    v4 = &StringLiteral_6749/*"FollowerSelectEventQuest"*/;
  }
  else
  {
    v4 = &StringLiteral_6750/*"FollowerSelectMainQuest"*/;
  }
  v5 = (System_String_o *)*v4;
  v6 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v6, v5, 11, 0, 0LL);
  return v6;
}