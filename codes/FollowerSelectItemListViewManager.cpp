void FollowerSelectItemListViewManager___cctor(const MethodInfo *method)
{
  FollowerSelectItemListViewManager___c_c *v1; // x0
  Il2CppObject *v2; // x19
  System_Func_T__TResult__o *v3; // x20
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4C3252C & 1) == 0 )
  {
    sub_1C32C20(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C32C20(&System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo);
    sub_1C32C20(&Method_FollowerSelectItemListViewManager___c___cctor_b__136_0__);
    sub_1C32C20(&FollowerSelectItemListViewManager___c_TypeInfo);
    byte_4C3252C = 1;
  }
  v1 = FollowerSelectItemListViewManager___c_TypeInfo;
  if ( !FollowerSelectItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager___c_TypeInfo);
    v1 = FollowerSelectItemListViewManager___c_TypeInfo;
  }
  v2 = (Il2CppObject *)v1->static_fields->__9;
  v3 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo);
  System_Func_Int32Enum__object____ctor(v3, v2, Method_FollowerSelectItemListViewManager___c___cctor_b__136_0__, 0);
  FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT = (struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)v3;
  sub_1C32BC4(FollowerSelectItemListViewManager_TypeInfo->static_fields, v3);
  static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->lastSelectedQuestId = -1;
  static_fields->REFRESH_DARK_COLOR = (struct UnityEngine_Color_o)xmmword_C0CF10;
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
  UISprite_o *changeSkillButtonSprite; // x21
  Il2CppObject *Component_object; // x19

  if ( (byte_4C32500 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C32C20(&StringLiteral_17442/*"btn_bg_12"*/);
    sub_1C32C20(&StringLiteral_17513/*"btn_sefilter_2"*/);
    sub_1C32C20(&StringLiteral_17662/*"buttontxt_formation_19"*/);
    byte_4C32500 = 1;
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
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(changeSkillButtonSprite, (System_String_o *)StringLiteral_17662/*"buttontxt_formation_19"*/, 0);
  AtlasManager__SetEventSprite(this->fields.bonusFilterSprite, (System_String_o *)StringLiteral_17513/*"btn_sefilter_2"*/, 0);
  changeSkillButton = (UnityEngine_Component_o *)this->fields.bonusFilterSprite;
  if ( !changeSkillButton
    || (changeSkillButton = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))changeSkillButton->klass[2]._1.parent)(
                                                         changeSkillButton,
                                                         changeSkillButton->klass[2]._1.generic_class),
        !sortKindButton)
    || (Component_object = UnityEngine_Component__GetComponent_object_(
                             sortKindButton,
                             (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        changeSkillButton = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(
                                                         (UISprite_o *)Component_object,
                                                         (System_String_o *)StringLiteral_17442/*"btn_bg_12"*/,
                                                         0),
        !Component_object) )
  {
LABEL_11:
    sub_1C32E7C(changeSkillButton);
  }
  ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[33].methodPtr)(
    Component_object,
    Component_object->klass->vtable[33].method);
}


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
    sub_1C32E7C(classButtonControl);
  }
  return sort->fields.sortKind != 11;
}


void FollowerSelectItemListViewManager__CloseSortDialog(
        FollowerSelectItemListViewManager_o *this,
        bool isResult,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3251E & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3251E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__CloseOtherUserSortDialog((CommonUI_o *)Instance, 0, 0);
  if ( isResult )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


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
  System_Collections_Generic_List_object__o *v15; // x20
  System_Collections_Generic_List_object__o *v16; // x20
  System_Collections_Generic_List_object__o *v17; // x20
  System_Collections_Generic_List_object__o *v18; // x20
  __int64 ReturnTypeByQuestId; // x0
  FollowerSelectItemListViewManager_c *v20; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct ListViewSort_o *v22; // x0
  struct ListViewSort_o **p_sort; // x20
  ClassButtonControlComponent_o *classButtonControl; // x22
  ClassButtonControlComponent_CallbackFunc_o *v25; // x27
  const MethodInfo *v26; // x4
  int32_t InitialDisplayClass; // w22
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
  System_Int32_array *OngoingQuestTargetEventIds; // x22
  EventUpValSetupInfo_o *v30; // x27
  __int64 v31; // x8
  __int64 v32; // x27
  unsigned __int64 v33; // x19
  int32_t v34; // w0
  ClassButtonControlComponent_o *v35; // x20
  const MethodInfo *v36; // x2
  QuestPhaseEntity_o *v37; // x20
  bool IsNoneSupportFriendPoint; // w22
  QuestPhaseEntity_o *v39; // x29
  bool IsUseGrandBoard; // w23
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v41; // x20
  struct EventUpValSetupInfo_o *setupInfo; // x1
  long double v43; // q0
  __int64 v44; // x0
  __int64 v45; // x0
  Il2CppObject *MasterData_object; // x26
  FollowerInfo_array *QuestFollowerList; // x25
  int v48; // w19
  BalanceConfig_c *v49; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  bool IsQuestClear_40225464; // w20
  int max_length; // w8
  int32_t v53; // w19
  int v54; // w21
  FollowerInfo_o *v55; // x29
  ServantLeaderInfo_o *ServantLeaderInfo; // x20
  int32_t v57; // w0
  System_Int32_array *v58; // x22
  int32_t Rarity; // w0
  System_Collections_Generic_List_object__o *v60; // x22
  char v61; // w19
  Il2CppObject *v62; // x0
  __int64 v63; // x23
  __int64 v64; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v65; // x20
  int32_t ClassBoardBaseId; // w23
  Il2CppObject *v67; // x20
  ClassBoardInfo_o *v68; // x19
  Il2CppObject *v69; // x26
  __int64 v70; // x0
  System_Int32_array *OpenClassIdArrayFromBaseId; // x0
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x0
  System_Object_array *v76; // x0
  FollowerSelectItemListViewManager_c *v77; // x0
  int32_t followerClassId; // w26
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v79; // x22
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x19
  FollowerSelectItemListViewItem_o *v81; // x20
  __int64 v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  __int64 v85; // x8
  __int64 v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  __int64 v89; // x8
  __int64 v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  __int64 v93; // x8
  int v94; // w19
  bool v95; // w8
  FollowerSelectItemListViewManager_o *v96; // x27
  Il2CppClass *klass; // x24
  int namespaze; // w8
  unsigned int v99; // w26
  void **v100; // x8
  Il2CppObject *v101; // x0
  Il2CppObject *v102; // x21
  __int64 v103; // x20
  BalanceConfig_c *v104; // x0
  struct BalanceConfig_StaticFields *v105; // x9
  int32_t FixEventSupportDeckNum; // w21
  int32_t FixMainSupportDeckNum; // w22
  int32_t deckPriority; // w21
  unsigned __int64 v109; // x23
  int32_t v110; // w25
  System_Collections_Generic_Dictionary_int__int__o *v111; // x24
  FollowerInfo_o *v112; // x26
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v113; // x28
  int32_t v114; // w29
  FollowerSelectItemListViewItem_o *v115; // x22
  __int64 v116; // x8
  _QWORD *v117; // x9
  __int64 v118; // x10
  __int64 v119; // x8
  int32_t i; // w21
  struct BalanceConfig_StaticFields *v121; // x8
  int32_t v122; // w22
  int32_t v123; // w25
  int32_t v124; // w22
  unsigned __int64 v125; // x23
  int32_t v126; // w25
  FollowerInfo_o *v127; // x28
  int v128; // w24
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v129; // x29
  int32_t v130; // w19
  FollowerSelectItemListViewItem_o *v131; // x26
  __int64 v132; // x8
  _QWORD *v133; // x9
  __int64 v134; // x10
  __int64 v135; // x8
  Il2CppClass *v136; // x20
  const char *v137; // x8
  int v138; // w22
  unsigned __int64 v139; // x23
  FollowerInfo_o *v140; // x24
  Il2CppObject *v141; // x0
  __int64 v142; // x26
  BalanceConfig_c *v143; // x0
  struct BalanceConfig_StaticFields *v144; // x9
  int32_t v145; // w21
  int32_t v146; // w25
  int32_t v147; // w25
  unsigned __int64 v148; // x20
  int32_t v149; // w21
  int32_t v150; // w27
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v151; // x29
  System_Collections_Generic_Dictionary_int__int__o *v152; // x23
  FollowerSelectItemListViewItem_o *v153; // x28
  __int64 v154; // x8
  _QWORD *v155; // x9
  __int64 v156; // x10
  __int64 v157; // x8
  int32_t v158; // w28
  BalanceConfig_c *v159; // x0
  struct BalanceConfig_StaticFields *v160; // x8
  int32_t v161; // w21
  int32_t v162; // w25
  unsigned __int64 v163; // x27
  int32_t v164; // w21
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v165; // x20
  int v166; // w19
  System_Collections_Generic_Dictionary_int__int__o *v167; // x22
  FollowerSelectItemListViewItem_o *v168; // x29
  __int64 v169; // x8
  _QWORD *v170; // x9
  __int64 v171; // x10
  __int64 v172; // x8
  struct ServantLeaderInfo_array *userSvtGrandHash; // x19
  int v174; // w8
  unsigned int v175; // w23
  ServantLeaderInfo_o *v176; // x9
  int32_t v177; // w21
  System_Collections_Generic_Dictionary_int__int__o *v178; // x22
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *followerSelectItemOption; // x20
  int32_t grandGraphId; // w24
  FollowerSelectItemListViewItem_o *v181; // x26
  __int64 v182; // x8
  _QWORD *v183; // x9
  __int64 v184; // x10
  __int64 v185; // x8
  Il2CppClass *v186; // x19
  bool v187; // w20
  unsigned __int64 namespaze_low; // x8
  unsigned __int64 v189; // x24
  Il2CppType *p_byval_arg; // x27
  __int64 v191; // x9
  __int64 v192; // x9
  __int64 v193; // x22
  __int64 v194; // x8
  __int64 v195; // x8
  __int64 v196; // x8
  __int64 v197; // x23
  __int64 v198; // x25
  int32_t v199; // w23
  FollowerInfo_o *v200; // x26
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v201; // x25
  System_Collections_Generic_Dictionary_int__int__o *v202; // x28
  FollowerSelectItemListViewItem_o *v203; // x22
  __int64 v204; // x8
  _QWORD *v205; // x9
  __int64 v206; // x10
  __int64 v207; // x8
  const MethodInfo *v208; // x2
  FollowerSelectItemListViewManager_c *v209; // x0
  const MethodInfo *v210; // x2
  const MethodInfo *v211; // x1
  struct UIScrollView_o *scrollView; // x8
  __int64 v213; // x0
  int32_t supportDeckId; // [xsp+0h] [xbp-170h]
  int32_t supportDeckIda; // [xsp+0h] [xbp-170h]
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary; // [xsp+10h] [xbp-160h]
  const MethodInfo *v217; // [xsp+38h] [xbp-138h]
  ClassBoardClassMaster_o *Master_object; // [xsp+48h] [xbp-128h]
  QuestPhaseEntity_o *v219; // [xsp+50h] [xbp-120h]
  UserFollowMaster_o *v220; // [xsp+58h] [xbp-118h]
  UserFollowMaster_o *v221; // [xsp+58h] [xbp-118h]
  bool isReleasedClassBoard; // [xsp+60h] [xbp-110h]
  bool v223[8]; // [xsp+60h] [xbp-110h]
  bool v224; // [xsp+6Ch] [xbp-104h]
  struct System_Collections_Generic_List_ListViewItem__o **p_recommendItemList; // [xsp+70h] [xbp-100h]
  unsigned int v226; // [xsp+7Ch] [xbp-F4h]
  int32_t phaseCnt; // [xsp+80h] [xbp-F0h]
  int32_t questIda; // [xsp+84h] [xbp-ECh]
  DataMasterBase_TMaster__TEntity__PKType__o *v229; // [xsp+88h] [xbp-E8h]
  __int64 v230; // [xsp+88h] [xbp-E8h]
  bool HasFlag_42367412; // [xsp+88h] [xbp-E8h]
  struct System_Collections_Generic_List_ListViewItem__o **p_originalItemList; // [xsp+90h] [xbp-E0h]
  bool IsRecommendedFollower; // [xsp+98h] [xbp-D8h]
  unsigned __int64 v234; // [xsp+98h] [xbp-D8h]
  int32_t pos; // [xsp+A0h] [xbp-D0h]
  Il2CppClass *posa; // [xsp+A0h] [xbp-D0h]
  int posb; // [xsp+A0h] [xbp-D0h]
  _BOOL4 IsMyServantOrNpcRestriction; // [xsp+A8h] [xbp-C8h]
  int32_t index; // [xsp+B0h] [xbp-C0h]
  unsigned int indexa; // [xsp+B0h] [xbp-C0h]
  FollowerInfo_o *indexb; // [xsp+B0h] [xbp-C0h]
  bool IsMyServantOrNpcRestriction_43340352; // [xsp+B8h] [xbp-B8h]
  FollowerInfo_o **v243; // [xsp+B8h] [xbp-B8h]
  __int64 v244; // [xsp+B8h] [xbp-B8h]
  struct System_Collections_Generic_List_ListViewItem__o **p_mixItemList; // [xsp+C0h] [xbp-B0h]
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o **p_followerSelectItemOption; // [xsp+C8h] [xbp-A8h]
  UserFollowMaster_o *v247; // [xsp+C8h] [xbp-A8h]
  FollowerSelectItemListViewManager_o *v248; // [xsp+D0h] [xbp-A0h]
  Il2CppObject *v249; // [xsp+D8h] [xbp-98h] BYREF
  Il2CppObject *v250; // [xsp+E0h] [xbp-90h] BYREF
  Il2CppObject *v251; // [xsp+E8h] [xbp-88h] BYREF
  UserClassBoardSquareEntity_o *v252; // [xsp+F0h] [xbp-80h] BYREF
  bool isWhole; // [xsp+FCh] [xbp-74h] BYREF
  Il2CppObject *v254; // [xsp+100h] [xbp-70h] BYREF
  NpcFollowerEntity_o *entity; // [xsp+108h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v256; // 0:x0.16

  if ( (byte_4C32502 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_1C32C20(&ClassBoardInfo_TypeInfo);
    sub_1C32C20(&ClassButtonControlComponent_TypeInfo);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserFollowerMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__);
    sub_1C32C20(&Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C32C20(&EventUpValSetupInfo_TypeInfo);
    sub_1C32C20(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C32C20(&Method_FollowerSelectItemListViewManager_OnChangeClass__);
    sub_1C32C20(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C32C20(&FollowerSelectItemListViewManager_FollowerSelectItemOption_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C32C20(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_ClassBoardInfo__TypeInfo);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&ServantLeaderInfo___TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C32C20(&StringLiteral_3195/*"BonusFilterEventId"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C32502 = 1;
  }
  v254 = 0;
  entity = 0;
  isWhole = 0;
  v251 = 0;
  v252 = 0;
  v249 = 0;
  v250 = 0;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C32BC4(&this->fields.questRestrictionInfo, questRestrictionInfo);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.mixItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v15;
  p_mixItemList = &this->fields.mixItemList;
  sub_1C32BC4(&this->fields.mixItemList, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.originalItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v16;
  p_originalItemList = &this->fields.originalItemList;
  sub_1C32BC4(&this->fields.originalItemList, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.recommendItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v17;
  p_recommendItemList = &this->fields.recommendItemList;
  sub_1C32BC4(&this->fields.recommendItemList, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.grandItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v18;
  sub_1C32BC4(&this->fields.grandItemList, v18);
  ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0);
  v20 = FollowerSelectItemListViewManager_TypeInfo;
  v226 = ReturnTypeByQuestId;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v20 = FollowerSelectItemListViewManager_TypeInfo;
  }
  phaseCnt = questPhase;
  questIda = questId;
  LIST_VIEW_SORT = v20->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT )
    goto LABEL_343;
  v22 = (struct ListViewSort_o *)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))LIST_VIEW_SORT->fields.invoke_impl)(
                                   LIST_VIEW_SORT->fields.method_code,
                                   v226,
                                   LIST_VIEW_SORT->fields.method);
  this->fields.sort = v22;
  p_sort = &this->fields.sort;
  sub_1C32BC4(&this->fields.sort, v22);
  classButtonControl = this->fields.classButtonControl;
  v25 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C32E6C(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  v248 = this;
  ClassButtonControlComponent_CallbackFunc___ctor(
    v25,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0);
  if ( !classButtonControl )
    goto LABEL_343;
  ClassButtonControlComponent__init(classButtonControl, v25, questIda, questPhase, questRestrictionInfo, 0);
  if ( !*p_sort )
    goto LABEL_343;
  InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                          this,
                          questIda,
                          questPhase,
                          (*p_sort)->fields.isRequestLoad,
                          v26);
  static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  static_fields->followerClassId = InitialDisplayClass;
  static_fields->lastSelectedQuestId = questIda;
  static_fields->lastSelectedQuestPhase = questPhase;
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(InitialDisplayClass, 0) )
    this->fields.isGetRecommendSupport = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                 (EventQuestMaster_o *)ReturnTypeByQuestId,
                                 questIda,
                                 questPhase,
                                 0,
                                 0);
  v30 = (EventUpValSetupInfo_o *)sub_1C32E6C(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_41638188(v30, OngoingQuestTargetEventIds, 0, questIda, questPhase, 0);
  this->fields.setupInfo = v30;
  ReturnTypeByQuestId = sub_1C32BC4(&this->fields.setupInfo, v30);
  if ( !OngoingQuestTargetEventIds )
    goto LABEL_343;
  if ( OngoingQuestTargetEventIds->max_length )
  {
    ReturnTypeByQuestId = (__int64)UnityEngine_PlayerPrefs__GetString_71182452((System_String_o *)StringLiteral_3195/*"BonusFilterEventId"*/, 0);
    if ( !ReturnTypeByQuestId )
      goto LABEL_343;
    if ( *(int *)(ReturnTypeByQuestId + 16) < 1 )
      goto LABEL_25;
    ReturnTypeByQuestId = (__int64)System_String__Split((System_String_o *)ReturnTypeByQuestId, 0x2Cu, 0, 0);
    if ( !ReturnTypeByQuestId )
      goto LABEL_343;
    v31 = *(_QWORD *)(ReturnTypeByQuestId + 24);
    v32 = ReturnTypeByQuestId;
    if ( (int)v31 < 1 )
    {
LABEL_25:
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_343;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 18, 0, 0);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_343;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 19, 0, 0);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_343;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 20, 0, 0);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_343;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 40, 1, 0);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_343;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 41, 1, 0);
    }
    else
    {
      v33 = 0;
      while ( 1 )
      {
        if ( v33 >= (unsigned int)v31 )
          goto LABEL_344;
        v34 = System_Int32__Parse(*(System_String_o **)(v32 + 32 + 8 * v33), 0);
        ReturnTypeByQuestId = System_Linq_Enumerable__Contains_int_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)OngoingQuestTargetEventIds,
                                v34,
                                (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (ReturnTypeByQuestId & 1) != 0 )
          break;
        LODWORD(v31) = *(_DWORD *)(v32 + 24);
        if ( (__int64)++v33 >= (int)v31 )
          goto LABEL_25;
      }
    }
  }
  ReturnTypeByQuestId = (__int64)*p_sort;
  if ( !*p_sort )
    goto LABEL_343;
  ListViewSort__Load((ListViewSort_o *)ReturnTypeByQuestId, 0);
  this->fields.isInput = 0;
  ReturnTypeByQuestId = (__int64)FollowerSelectItemListViewManager_TypeInfo;
  v35 = this->fields.classButtonControl;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  if ( !v35 )
    goto LABEL_343;
  ClassButtonControlComponent__setCursor(
    v35,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, OngoingQuestTargetEventIds, v36);
  ReturnTypeByQuestId = (__int64)this->fields.bonusFilterKindButton;
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  ReturnTypeByQuestId = (__int64)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)ReturnTypeByQuestId,
                                   0);
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)ReturnTypeByQuestId,
    this->fields.isBonusFilterEnable,
    0);
  if ( this->fields.isBonusFilterEnable )
  {
    ReturnTypeByQuestId = (__int64)this->fields.bonusFilterKindLabel;
    if ( !ReturnTypeByQuestId )
      goto LABEL_343;
    UILabel__set_text((UILabel_o *)ReturnTypeByQuestId, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  this->fields.isRefreshBtnHide = 0;
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId
    || (ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0 )
  {
LABEL_343:
    sub_1C32E7C(ReturnTypeByQuestId);
  }
  v37 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)ReturnTypeByQuestId, questIda, questPhase, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !v37 )
    goto LABEL_338;
  IsNoneSupportFriendPoint = QuestPhaseEntity__IsNoneSupportFriendPoint(v37, 0);
  v39 = v37;
  IsUseGrandBoard = QuestPhaseEntity__IsUseGrandBoard(v37, 0);
  v41 = (FollowerSelectItemListViewManager_FollowerSelectItemOption_o *)sub_1C32E6C(FollowerSelectItemListViewManager_FollowerSelectItemOption_TypeInfo);
  FollowerSelectItemListViewManager_FollowerSelectItemOption___ctor(v41, 0);
  if ( !v41 )
    goto LABEL_343;
  v41->fields.friendPointUpVal = friendPointUpVal;
  v41->fields.friendPointUpMaxVal = friendPointUpMaxVal;
  v41->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  v224 = IsUseGrandBoard;
  sub_1C32BC4(&v41->fields.friendPointCampaignEntityList, friendPointCampaignEntityList);
  v41->fields.isBonusFilterEnable = this->fields.isBonusFilterEnable;
  v41->fields.isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
  v41->fields.isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
  setupInfo = this->fields.setupInfo;
  v41->fields.setupInfo = setupInfo;
  sub_1C32BC4(&v41->fields.setupInfo, setupInfo);
  v41->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C32BC4(&v41->fields.questRestrictionInfo, questRestrictionInfo);
  v41->fields.isNoneSupportFriendPoint = IsNoneSupportFriendPoint;
  v41->fields.isUseGrandBoard = IsUseGrandBoard;
  this->fields.followerSelectItemOption = v41;
  p_followerSelectItemOption = &this->fields.followerSelectItemOption;
  sub_1C32BC4(&this->fields.followerSelectItemOption, v41);
  v219 = v39;
  v44 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v44 + 309) & 1) == 0 )
    v44 = sub_1C83334(v43);
  v45 = *(_QWORD *)(*(_QWORD *)(v44 + 192) + 16LL);
  if ( (*(_BYTE *)(v45 + 309) & 1) == 0 )
    v45 = sub_1C83334(v43);
  ReturnTypeByQuestId = **(_QWORD **)(v45 + 184);
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ReturnTypeByQuestId,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)ReturnTypeByQuestId,
                        questIda,
                        phaseCnt,
                        0);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  v48 = *(_DWORD *)(ReturnTypeByQuestId + 56);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  pos = *(_DWORD *)(ReturnTypeByQuestId + 60);
  if ( v48 < 1 )
  {
    IsMyServantOrNpcRestriction_43340352 = 0;
    goto LABEL_57;
  }
  if ( questRestrictionInfo )
  {
    IsMyServantOrNpcRestriction_43340352 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43340352(
                                             questRestrictionInfo,
                                             pos,
                                             0);
LABEL_57:
    IsMyServantOrNpcRestriction = 0;
    if ( questRestrictionInfo && v48 <= 0 )
      IsMyServantOrNpcRestriction = QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0);
    goto LABEL_61;
  }
  IsMyServantOrNpcRestriction_43340352 = 0;
  IsMyServantOrNpcRestriction = 0;
LABEL_61:
  v49 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v49 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v49->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_40225464 = CondType__IsQuestClear_40225464(ClassBoardReleaseQuestId, -1, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v229 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
  if ( !QuestFollowerList )
    goto LABEL_343;
  max_length = QuestFollowerList->max_length;
  v53 = pos;
  if ( max_length >= 1 )
  {
    v54 = 0;
    index = 0;
    isReleasedClassBoard = IsQuestClear_40225464;
    v220 = (UserFollowMaster_o *)MasterData_object;
    do
    {
      if ( v54 >= (unsigned int)max_length )
        goto LABEL_344;
      if ( !questRestrictionInfo )
        goto LABEL_343;
      v55 = QuestFollowerList->m_Items[v54];
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
      if ( !v55 )
        goto LABEL_343;
      ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v55, 0, ReturnTypeByQuestId, 0);
      v57 = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
      ReturnTypeByQuestId = (__int64)FollowerInfo__GetNpcServantIndividualityFull(v55, 0, v57, 0);
      if ( !ServantLeaderInfo )
        goto LABEL_343;
      v58 = (System_Int32_array *)ReturnTypeByQuestId;
      Rarity = ServantLeaderInfo__getRarity(ServantLeaderInfo, 0);
      ReturnTypeByQuestId = QuestRestrictionInfo__IsRestriction_43321380(
                              questRestrictionInfo,
                              &isWhole,
                              v58,
                              Rarity,
                              ServantLeaderInfo->fields.lv,
                              v53,
                              3,
                              0);
      if ( (ReturnTypeByQuestId & 1) != 0 )
        goto LABEL_136;
      if ( IsMyServantOrNpcRestriction_43340352 )
      {
        ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality_43343396(
                                questRestrictionInfo,
                                v58,
                                v53,
                                0);
        if ( (ReturnTypeByQuestId & 1) != 0 )
          goto LABEL_136;
      }
      if ( v55->fields.isFixedNpc || IsMyServantOrNpcRestriction && v55->fields.isMySvtOrNpc )
        goto LABEL_136;
      if ( !MasterData_object )
        goto LABEL_343;
      if ( NpcFollowerMaster__TryGetEntity(
             (NpcFollowerMaster_o *)MasterData_object,
             &entity,
             v55->fields.userId,
             questIda,
             phaseCnt,
             0) )
      {
        ReturnTypeByQuestId = (__int64)entity;
        if ( !entity )
          goto LABEL_343;
        IsRecommendedFollower = NpcFollowerEntity__IsRecommendedFollower(entity, 0);
      }
      else
      {
        IsRecommendedFollower = 0;
      }
      v60 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ClassBoardInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v60,
        (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
      if ( !v229 )
        goto LABEL_343;
      ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetEntity(
                              v229,
                              &v254,
                              v55->fields.npcFollowerSvtId,
                              (const MethodInfo_3398DE0 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
      if ( (ReturnTypeByQuestId & 1) != 0 )
      {
        if ( !v254 )
          goto LABEL_343;
        ReturnTypeByQuestId = NpcServantFollowerEntity__IsNotClassBoard((int32_t)v254[7].monitor, 0);
        if ( (ReturnTypeByQuestId & 1) != 0
          || (ReturnTypeByQuestId = QuestPhaseEntity__IsNotClassBoard(v219, 0), (ReturnTypeByQuestId & 1) != 0) )
        {
          v61 = 1;
          goto LABEL_114;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
        v62 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
        v64 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        v63 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
        v65 = (DataMasterBase_TMaster__TEntity__PKType__o *)v62;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v256.fields.currentCryptoKey = v64;
        *(_QWORD *)&v256.fields.fakeValue = v63;
        ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v256, 0);
        if ( !v65 )
          goto LABEL_343;
        ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         v65,
                                         ReturnTypeByQuestId,
                                         (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !ReturnTypeByQuestId || !Master_object )
          goto LABEL_343;
        ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(
                             Master_object,
                             *(_DWORD *)(ReturnTypeByQuestId + 80),
                             0);
        v67 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C31812 )
        {
          sub_1C32C20(&NetworkManager_TypeInfo);
          byte_4C31812 = 1;
        }
        ReturnTypeByQuestId = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          ReturnTypeByQuestId = (__int64)NetworkManager_TypeInfo;
        }
        if ( !v67 )
          goto LABEL_343;
        ReturnTypeByQuestId = UserClassBoardSquareMaster__TryGetEntity(
                                (UserClassBoardSquareMaster_o *)v67,
                                &v252,
                                *(_QWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 64LL),
                                ClassBoardBaseId,
                                0);
        if ( (ReturnTypeByQuestId & 1) != 0 )
        {
          v68 = (ClassBoardInfo_o *)sub_1C32E6C(ClassBoardInfo_TypeInfo);
          ClassBoardInfo___ctor(v68, 0);
          if ( !v68 )
            goto LABEL_343;
          v68->fields.classBoardBaseId = ClassBoardBaseId;
          if ( !v252 )
            goto LABEL_343;
          ReturnTypeByQuestId = (__int64)v252->fields.classBoardSquareIds;
          if ( !ReturnTypeByQuestId )
            goto LABEL_343;
          v69 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0);
          v68->fields.squareIds = (struct System_Int32_array *)sub_1C32D5C(v69, int___TypeInfo);
          v70 = sub_1C32D5C(v69, int___TypeInfo);
          sub_1C32BC4(&v68->fields.squareIds, v70);
          OpenClassIdArrayFromBaseId = ClassBoardClassMaster__GetOpenClassIdArrayFromBaseId(
                                         Master_object,
                                         ClassBoardBaseId,
                                         0);
          v68->fields.releasedClassIds = OpenClassIdArrayFromBaseId;
          ReturnTypeByQuestId = sub_1C32BC4(&v68->fields.releasedClassIds, OpenClassIdArrayFromBaseId);
          if ( !v60 )
            goto LABEL_343;
          items = v60->fields._items;
          v73 = Method_System_Collections_Generic_List_ClassBoardInfo__Add__;
          ++v60->fields._version;
          if ( !items )
            goto LABEL_343;
          size = v60->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v60,
              (Il2CppObject *)v68,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
          }
          else
          {
            v75 = &items->obj.klass + size;
            v60->fields._size = size + 1;
            v75[4] = (Il2CppClass *)v68;
            sub_1C32BC4(v75 + 4, v68);
          }
          v61 = 0;
          goto LABEL_115;
        }
      }
      v61 = 0;
LABEL_114:
      if ( !v60 )
        goto LABEL_343;
LABEL_115:
      v76 = System_Collections_Generic_List_object___ToArray(
              v60,
              (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
      v55->fields.userClassBoardInfo = (struct ClassBoardInfo_array *)v76;
      sub_1C32BC4(&v55->fields.userClassBoardInfo, v76);
      v77 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v77 = FollowerSelectItemListViewManager_TypeInfo;
      }
      followerClassId = v77->static_fields->followerClassId;
      v79 = *p_followerSelectItemOption;
      if ( (v61 & 1) != 0 )
        classBoardMaxDictionary = 0;
      else
        classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
      v81 = (FollowerSelectItemListViewItem_o *)sub_1C32E6C(FollowerSelectItemListViewItem_TypeInfo);
      FollowerSelectItemListViewItem___ctor(
        v81,
        index,
        0,
        v55,
        followerClassId,
        IsRecommendedFollower,
        v79,
        0,
        0,
        0,
        classBoardMaxDictionary,
        isReleasedClassBoard,
        0,
        0,
        0,
        v217);
      ReturnTypeByQuestId = (__int64)*p_mixItemList;
      if ( !*p_mixItemList )
        goto LABEL_343;
      v82 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      MasterData_object = (Il2CppObject *)v220;
      v53 = pos;
      v83 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v82 )
        goto LABEL_343;
      v84 = *(int *)(ReturnTypeByQuestId + 24);
      if ( (unsigned int)v84 >= *(_DWORD *)(v82 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v81,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
      }
      else
      {
        v85 = v82 + 8 * v84;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v84 + 1;
        *(_QWORD *)(v85 + 32) = v81;
        sub_1C32BC4(v85 + 32, v81);
      }
      ReturnTypeByQuestId = (__int64)*p_originalItemList;
      if ( !*p_originalItemList )
        goto LABEL_343;
      v86 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      v87 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v86 )
        goto LABEL_343;
      v88 = *(int *)(ReturnTypeByQuestId + 24);
      if ( (unsigned int)v88 >= *(_DWORD *)(v86 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v81,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
      }
      else
      {
        v89 = v86 + 8 * v88;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v88 + 1;
        *(_QWORD *)(v89 + 32) = v81;
        sub_1C32BC4(v89 + 32, v81);
      }
      ReturnTypeByQuestId = (__int64)*p_recommendItemList;
      if ( !*p_recommendItemList )
        goto LABEL_343;
      v90 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      v91 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v90 )
        goto LABEL_343;
      v92 = *(int *)(ReturnTypeByQuestId + 24);
      if ( (unsigned int)v92 >= *(_DWORD *)(v90 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v81,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
      }
      else
      {
        v93 = v90 + 8 * v92;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v92 + 1;
        *(_QWORD *)(v93 + 32) = v81;
        ReturnTypeByQuestId = sub_1C32BC4(v93 + 32, v81);
      }
      ++index;
LABEL_136:
      max_length = QuestFollowerList->max_length;
      ++v54;
    }
    while ( v54 < max_length );
  }
  if ( !questRestrictionInfo || !QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0) )
    goto LABEL_146;
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  v94 = *(_DWORD *)(ReturnTypeByQuestId + 56);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  if ( v94 >= 1 )
    v95 = !QuestRestrictionInfo__IsSelectableNormalSupport(
             questRestrictionInfo,
             *(_DWORD *)(ReturnTypeByQuestId + 60),
             0);
  else
LABEL_146:
    v95 = 0;
  this->fields.isRefreshBtnHide = v95;
  if ( !v95 && !v219->fields.isNpcOnly )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_343;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v251,
                            (const MethodInfo_3398EC0 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    v96 = this;
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v251 )
        goto LABEL_343;
      klass = v251[1].klass;
      if ( klass )
      {
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
        {
          v99 = 0;
          posa = v251[1].klass;
          do
          {
            if ( v99 >= namespaze )
              goto LABEL_344;
            v100 = &klass->_1.image + (int)v99;
            ReturnTypeByQuestId = (__int64)v100[4];
            v243 = (FollowerInfo_o **)(v100 + 4);
            if ( !ReturnTypeByQuestId )
              goto LABEL_343;
            FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0);
            if ( v99 >= LODWORD(klass->_1.namespaze) )
              goto LABEL_344;
            if ( !*v243 )
              goto LABEL_343;
            ReturnTypeByQuestId = (__int64)(*v243)->fields.mainSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_343;
            v230 = *(_QWORD *)(ReturnTypeByQuestId + 24);
            v101 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0);
            if ( v101 )
            {
              v102 = v101;
              v103 = sub_1C32D5C(v101, int___TypeInfo);
              if ( !v103 )
              {
                sub_1C3313C(v102);
LABEL_345:
                sub_1C3313C(v102);
LABEL_346:
                v213 = sub_1C32EA0();
                sub_1C32D48(v213, 0);
              }
            }
            else
            {
              v103 = 0;
            }
            v104 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v104 = BalanceConfig_TypeInfo;
            }
            v105 = v104->static_fields;
            FixMainSupportDeckNum = v105->FixMainSupportDeckNum;
            FixEventSupportDeckNum = v105->FixEventSupportDeckNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            ReturnTypeByQuestId = System_Math__Max_65041976(FixMainSupportDeckNum, FixEventSupportDeckNum, 0);
            indexa = v99;
            if ( (int)v230 >= 1 )
            {
              deckPriority = ReturnTypeByQuestId;
              v109 = 0;
              do
              {
                if ( !*p_originalItemList )
                  goto LABEL_343;
                if ( v99 >= LODWORD(klass->_1.namespaze) )
                  goto LABEL_344;
                if ( !v103 )
                  goto LABEL_343;
                if ( v109 >= *(unsigned int *)(v103 + 24) )
                  goto LABEL_344;
                v110 = (*p_originalItemList)->fields._size;
                v111 = v96->fields.classBoardMaxDictionary;
                v112 = *v243;
                v113 = *p_followerSelectItemOption;
                v114 = *(_DWORD *)(v103 + 32 + 4 * v109);
                v115 = (FollowerSelectItemListViewItem_o *)sub_1C32E6C(FollowerSelectItemListViewItem_TypeInfo);
                FollowerSelectItemListViewItem___ctor(
                  v115,
                  v110,
                  0,
                  v112,
                  0,
                  0,
                  v113,
                  1,
                  v114,
                  deckPriority,
                  v111,
                  1,
                  0,
                  0,
                  0,
                  v217);
                ReturnTypeByQuestId = (__int64)v96->fields.originalItemList;
                if ( !ReturnTypeByQuestId )
                  goto LABEL_343;
                v116 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v117 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v116 )
                  goto LABEL_343;
                v118 = *(int *)(ReturnTypeByQuestId + 24);
                klass = posa;
                v99 = indexa;
                if ( (unsigned int)v118 >= *(_DWORD *)(v116 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    (Il2CppObject *)v115,
                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
                }
                else
                {
                  v119 = v116 + 8 * v118;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v118 + 1;
                  *(_QWORD *)(v119 + 32) = v115;
                  ReturnTypeByQuestId = sub_1C32BC4(v119 + 32, v115);
                }
                ++v109;
                --deckPriority;
              }
              while ( (unsigned int)v230 != v109 );
            }
            for ( i = 0; ; ++i )
            {
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              }
              v121 = *(struct BalanceConfig_StaticFields **)(ReturnTypeByQuestId + 184);
              if ( i >= v121->SupportDeckMemberMax )
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
              ReturnTypeByQuestId = System_Math__Max_65041976(v123, v122, 0);
              if ( (int)v230 >= 1 )
              {
                v124 = ReturnTypeByQuestId;
                v125 = 0;
                while ( *p_mixItemList )
                {
                  ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                  v126 = (*p_mixItemList)->fields._size;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( v99 >= LODWORD(klass->_1.namespaze) )
                    goto LABEL_344;
                  if ( !v103 )
                    goto LABEL_343;
                  if ( v125 >= *(unsigned int *)(v103 + 24) )
                    goto LABEL_344;
                  v127 = *v243;
                  v128 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 180LL);
                  v129 = *p_followerSelectItemOption;
                  v130 = *(_DWORD *)(v103 + 32 + 4 * v125);
                  classBoardMaxNumDictionary = v248->fields.classBoardMaxDictionary;
                  v96 = v248;
                  v131 = (FollowerSelectItemListViewItem_o *)sub_1C32E6C(FollowerSelectItemListViewItem_TypeInfo);
                  FollowerSelectItemListViewItem___ctor(
                    v131,
                    v126,
                    v128 - i,
                    v127,
                    i,
                    0,
                    v129,
                    1,
                    v130,
                    v124,
                    classBoardMaxNumDictionary,
                    1,
                    0,
                    0,
                    0,
                    v217);
                  ReturnTypeByQuestId = (__int64)v248->fields.mixItemList;
                  if ( !ReturnTypeByQuestId )
                    goto LABEL_343;
                  v132 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                  v133 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                  if ( !v132 )
                    goto LABEL_343;
                  v134 = *(int *)(ReturnTypeByQuestId + 24);
                  if ( (unsigned int)v134 >= *(_DWORD *)(v132 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                      (Il2CppObject *)v131,
                      *(const MethodInfo_37987BC **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v135 = v132 + 8 * v134;
                    *(_DWORD *)(ReturnTypeByQuestId + 24) = v134 + 1;
                    *(_QWORD *)(v135 + 32) = v131;
                    ReturnTypeByQuestId = sub_1C32BC4(v135 + 32, v131);
                  }
                  klass = posa;
                  v99 = indexa;
                  ++v125;
                  --v124;
                  if ( (unsigned int)v230 == v125 )
                    goto LABEL_204;
                }
                goto LABEL_343;
              }
LABEL_204:
              ;
            }
            namespaze = (int)klass->_1.namespaze;
            ++v99;
          }
          while ( (int)v99 < namespaze );
        }
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_343;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v250,
                            (const MethodInfo_3398EC0 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v250 )
        goto LABEL_343;
      v136 = v250[1].klass;
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_343;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !ReturnTypeByQuestId )
        goto LABEL_343;
      ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                       questIda,
                                       (const MethodInfo_3396838 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_343;
      HasFlag_42367412 = QuestEntity__HasFlag_42367412((QuestEntity_o *)ReturnTypeByQuestId, 0x8000000, phaseCnt, 0);
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_343;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserFollowMaster___);
      v221 = (UserFollowMaster_o *)ReturnTypeByQuestId;
      if ( !v136 )
        goto LABEL_343;
      v137 = v136->_1.namespaze;
      if ( (int)v137 >= 1 )
      {
        v138 = 0;
        v139 = 0;
        *(_QWORD *)v223 = v136;
        do
        {
          if ( v139 >= (unsigned int)v137 )
            goto LABEL_344;
          v140 = (FollowerInfo_o *)*((_QWORD *)&v136->_1.byval_arg.data + v139);
          if ( HasFlag_42367412 )
          {
            if ( !v140 )
              goto LABEL_343;
            if ( v140->fields.type == 5 )
            {
              ReturnTypeByQuestId = (__int64)v221;
              if ( !v221 )
                goto LABEL_343;
              ReturnTypeByQuestId = UserFollowMaster__IsFollowUser(v221, v140->fields.userId, 0);
              if ( (ReturnTypeByQuestId & 1) == 0 )
                goto LABEL_289;
            }
          }
          else
          {
            if ( !v140 )
              goto LABEL_343;
            if ( v140->fields.type == 5 )
              goto LABEL_289;
          }
          FollowerInfo__ChangeLimitCountBySpoilerProtection(v140, 0);
          sub_1C32CC8(int___TypeInfo, 0);
          posb = v138;
          v234 = v139;
          if ( v226 )
          {
            ReturnTypeByQuestId = (__int64)v140->fields.eventSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_343;
          }
          else
          {
            ReturnTypeByQuestId = (__int64)v140->fields.mainSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_343;
          }
          v244 = *(unsigned int *)(ReturnTypeByQuestId + 24);
          v141 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0);
          if ( v141 )
          {
            v102 = v141;
            v142 = sub_1C32D5C(v141, int___TypeInfo);
            if ( !v142 )
              goto LABEL_345;
          }
          else
          {
            v142 = 0;
          }
          v143 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v143 = BalanceConfig_TypeInfo;
          }
          v144 = v143->static_fields;
          v146 = v144->FixMainSupportDeckNum;
          v145 = v144->FixEventSupportDeckNum;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          ReturnTypeByQuestId = System_Math__Max_65041976(v146, v145, 0);
          v147 = ReturnTypeByQuestId;
          if ( (int)v244 >= 1 )
          {
            v148 = 0;
            while ( 1 )
            {
              if ( !*p_originalItemList || !v142 )
                goto LABEL_343;
              if ( v148 >= *(unsigned int *)(v142 + 24) )
                break;
              v149 = (*p_originalItemList)->fields._size;
              v150 = *(_DWORD *)(v142 + 32 + 4 * v148);
              v151 = *p_followerSelectItemOption;
              v152 = v248->fields.classBoardMaxDictionary;
              v153 = (FollowerSelectItemListViewItem_o *)sub_1C32E6C(FollowerSelectItemListViewItem_TypeInfo);
              supportDeckId = v150;
              v96 = v248;
              FollowerSelectItemListViewItem___ctor(
                v153,
                v149,
                0,
                v140,
                0,
                0,
                v151,
                0,
                supportDeckId,
                v147,
                v152,
                1,
                0,
                0,
                0,
                v217);
              ReturnTypeByQuestId = (__int64)v248->fields.originalItemList;
              if ( !ReturnTypeByQuestId )
                goto LABEL_343;
              v154 = *(_QWORD *)(ReturnTypeByQuestId + 16);
              v155 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++*(_DWORD *)(ReturnTypeByQuestId + 28);
              if ( !v154 )
                goto LABEL_343;
              v156 = *(int *)(ReturnTypeByQuestId + 24);
              if ( (unsigned int)v156 >= *(_DWORD *)(v154 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                  (Il2CppObject *)v153,
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v155[4] + 192LL) + 112LL));
              }
              else
              {
                v157 = v154 + 8 * v156;
                *(_DWORD *)(ReturnTypeByQuestId + 24) = v156 + 1;
                *(_QWORD *)(v157 + 32) = v153;
                ReturnTypeByQuestId = sub_1C32BC4(v157 + 32, v153);
              }
              ++v148;
              --v147;
              if ( v244 == v148 )
                goto LABEL_250;
            }
LABEL_344:
            sub_1C32E84(ReturnTypeByQuestId);
          }
LABEL_250:
          v158 = 0;
          indexb = v140;
          while ( 1 )
          {
            v159 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v159 = BalanceConfig_TypeInfo;
            }
            v160 = v159->static_fields;
            if ( v158 >= v160->SupportDeckMemberMax )
              break;
            if ( !v159->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v159);
              v160 = BalanceConfig_TypeInfo->static_fields;
            }
            v162 = v160->FixMainSupportDeckNum;
            v161 = v160->FixEventSupportDeckNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            ReturnTypeByQuestId = System_Math__Max_65041976(v162, v161, 0);
            v147 = ReturnTypeByQuestId;
            if ( (int)v244 >= 1 )
            {
              v163 = 0;
              while ( *p_mixItemList )
              {
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                v164 = (*p_mixItemList)->fields._size;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                }
                if ( !v142 )
                  break;
                if ( v163 >= *(unsigned int *)(v142 + 24) )
                  goto LABEL_344;
                v165 = *p_followerSelectItemOption;
                v166 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 180LL);
                v167 = v248->fields.classBoardMaxDictionary;
                supportDeckIda = *(_DWORD *)(v142 + 32 + 4 * v163);
                v140 = indexb;
                v168 = (FollowerSelectItemListViewItem_o *)sub_1C32E6C(FollowerSelectItemListViewItem_TypeInfo);
                FollowerSelectItemListViewItem___ctor(
                  v168,
                  v164,
                  v166 - v158,
                  indexb,
                  v158,
                  0,
                  v165,
                  0,
                  supportDeckIda,
                  v147,
                  v167,
                  1,
                  0,
                  0,
                  0,
                  v217);
                ReturnTypeByQuestId = (__int64)v248->fields.mixItemList;
                if ( !ReturnTypeByQuestId )
                  break;
                v169 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v170 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v169 )
                  break;
                v171 = *(int *)(ReturnTypeByQuestId + 24);
                if ( (unsigned int)v171 >= *(_DWORD *)(v169 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    (Il2CppObject *)v168,
                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v170[4] + 192LL) + 112LL));
                }
                else
                {
                  v172 = v169 + 8 * v171;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v171 + 1;
                  *(_QWORD *)(v172 + 32) = v168;
                  ReturnTypeByQuestId = sub_1C32BC4(v172 + 32, v168);
                }
                ++v163;
                --v147;
                if ( v244 == v163 )
                  goto LABEL_271;
              }
              goto LABEL_343;
            }
LABEL_271:
            v96 = v248;
            ++v158;
          }
          if ( v224 )
          {
            ReturnTypeByQuestId = BasicHelper__IsNullOrEmpty(
                                    (System_Collections_ICollection_o *)v140->fields.userSvtGrandHash,
                                    0);
            if ( (ReturnTypeByQuestId & 1) == 0 )
            {
              userSvtGrandHash = v140->fields.userSvtGrandHash;
              if ( !userSvtGrandHash )
                goto LABEL_343;
              v174 = userSvtGrandHash->max_length;
              if ( v174 >= 1 )
              {
                v175 = 0;
                while ( v175 < v174 )
                {
                  if ( !*p_mixItemList )
                    goto LABEL_343;
                  v176 = userSvtGrandHash->m_Items[v175];
                  if ( !v176 )
                    goto LABEL_343;
                  v177 = (*p_mixItemList)->fields._size;
                  v178 = v96->fields.classBoardMaxDictionary;
                  followerSelectItemOption = v96->fields.followerSelectItemOption;
                  grandGraphId = v176->fields.grandGraphId;
                  v181 = (FollowerSelectItemListViewItem_o *)sub_1C32E6C(FollowerSelectItemListViewItem_TypeInfo);
                  FollowerSelectItemListViewItem___ctor(
                    v181,
                    v177,
                    0,
                    indexb,
                    0,
                    0,
                    followerSelectItemOption,
                    0,
                    0,
                    v147,
                    v178,
                    1,
                    0,
                    1,
                    grandGraphId,
                    v217);
                  ReturnTypeByQuestId = (__int64)v96->fields.grandItemList;
                  if ( !ReturnTypeByQuestId )
                    goto LABEL_343;
                  v182 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                  v183 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                  if ( !v182 )
                    goto LABEL_343;
                  v184 = *(int *)(ReturnTypeByQuestId + 24);
                  if ( (unsigned int)v184 >= *(_DWORD *)(v182 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                      (Il2CppObject *)v181,
                      *(const MethodInfo_37987BC **)(*(_QWORD *)(v183[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v185 = v182 + 8 * v184;
                    *(_DWORD *)(ReturnTypeByQuestId + 24) = v184 + 1;
                    *(_QWORD *)(v185 + 32) = v181;
                    ReturnTypeByQuestId = sub_1C32BC4(v185 + 32, v181);
                  }
                  v174 = userSvtGrandHash->max_length;
                  if ( (int)++v175 >= v174 )
                    goto LABEL_286;
                }
                goto LABEL_344;
              }
            }
          }
LABEL_286:
          ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
          }
          v136 = *(Il2CppClass **)v223;
          v139 = v234;
          v138 = posb + 1;
          if ( posb + 1 >= *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 724LL) )
            break;
LABEL_289:
          LODWORD(v137) = v136->_1.namespaze;
          ++v139;
        }
        while ( (__int64)v139 < (int)v137 );
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_343;
    if ( DataMasterBase_object__object__long___TryGetSingleEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
           &v249,
           (const MethodInfo_3398EC0 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    {
      ReturnTypeByQuestId = (__int64)v249;
      if ( !v249 )
        goto LABEL_343;
      ReturnTypeByQuestId = UserRecommendFollowerEntity__IsEnableSupport(
                              (UserRecommendFollowerEntity_o *)v249,
                              questIda,
                              phaseCnt,
                              0);
      if ( (ReturnTypeByQuestId & 1) != 0 )
      {
        if ( !v249 )
          goto LABEL_343;
        v186 = v249[1].klass;
        ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_343;
        ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !ReturnTypeByQuestId )
          goto LABEL_343;
        ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                         questIda,
                                         (const MethodInfo_3396838 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_343;
        v187 = QuestEntity__HasFlag_42367412((QuestEntity_o *)ReturnTypeByQuestId, 0x8000000, phaseCnt, 0);
        ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_343;
        ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserFollowMaster___);
        v247 = (UserFollowMaster_o *)ReturnTypeByQuestId;
        if ( !v186 )
          goto LABEL_343;
        namespaze_low = (unsigned __int64)v186->_1.namespaze;
        if ( (int)namespaze_low >= 1 )
        {
          v189 = 0;
          p_byval_arg = &v186->_1.byval_arg;
          do
          {
            namespaze_low = (unsigned int)namespaze_low;
            if ( v187 )
            {
              if ( v189 >= (unsigned int)namespaze_low )
                goto LABEL_344;
              v191 = *((_QWORD *)&p_byval_arg->data + v189);
              if ( !v191 )
                goto LABEL_343;
              if ( *(_DWORD *)(v191 + 36) == 5 )
              {
                ReturnTypeByQuestId = (__int64)v247;
                if ( !v247 )
                  goto LABEL_343;
                ReturnTypeByQuestId = UserFollowMaster__IsFollowUser(v247, *(_QWORD *)(v191 + 16), 0);
                if ( (ReturnTypeByQuestId & 1) == 0 )
                  goto LABEL_337;
                namespaze_low = LODWORD(v186->_1.namespaze);
              }
            }
            else
            {
              if ( v189 >= (unsigned int)namespaze_low )
                goto LABEL_344;
              v192 = *((_QWORD *)&p_byval_arg->data + v189);
              if ( !v192 )
                goto LABEL_343;
              if ( *(_DWORD *)(v192 + 36) == 5 )
                goto LABEL_337;
            }
            if ( v189 >= namespaze_low )
              goto LABEL_344;
            v193 = *((_QWORD *)&p_byval_arg->data + v189);
            ReturnTypeByQuestId = sub_1C32CC8(ServantLeaderInfo___TypeInfo, 1);
            if ( v189 >= LODWORD(v186->_1.namespaze) )
              goto LABEL_344;
            v194 = *((_QWORD *)&p_byval_arg->data + v189);
            if ( !v194 )
              goto LABEL_343;
            v195 = *(_QWORD *)(v194 + 56);
            if ( !v195 )
              goto LABEL_343;
            if ( !*(_DWORD *)(v195 + 24) )
              goto LABEL_344;
            v196 = *(_QWORD *)(v195 + 32);
            if ( !v196 )
              goto LABEL_343;
            v197 = ReturnTypeByQuestId;
            if ( !ReturnTypeByQuestId )
              goto LABEL_343;
            v198 = *(_QWORD *)(v196 + 56);
            if ( v198 )
            {
              ReturnTypeByQuestId = sub_1C32D5C(v198, *(_QWORD *)(*(_QWORD *)ReturnTypeByQuestId + 64LL));
              if ( !ReturnTypeByQuestId )
                goto LABEL_346;
            }
            if ( !*(_DWORD *)(v197 + 24) )
              goto LABEL_344;
            *(_QWORD *)(v197 + 32) = v198;
            ReturnTypeByQuestId = sub_1C32BC4(v197 + 32, v198);
            if ( !v193 )
              goto LABEL_343;
            *(_QWORD *)(v193 + 40) = v197;
            ReturnTypeByQuestId = sub_1C32BC4(v193 + 40, v197);
            if ( v189 >= LODWORD(v186->_1.namespaze) )
              goto LABEL_344;
            ReturnTypeByQuestId = *((_QWORD *)&p_byval_arg->data + v189);
            if ( !ReturnTypeByQuestId )
              goto LABEL_343;
            FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0);
            if ( !*p_recommendItemList )
              goto LABEL_343;
            if ( v189 >= LODWORD(v186->_1.namespaze) )
              goto LABEL_344;
            v199 = (*p_recommendItemList)->fields._size;
            v200 = (FollowerInfo_o *)*((_QWORD *)&p_byval_arg->data + v189);
            v201 = v248->fields.followerSelectItemOption;
            v202 = v248->fields.classBoardMaxDictionary;
            v203 = (FollowerSelectItemListViewItem_o *)sub_1C32E6C(FollowerSelectItemListViewItem_TypeInfo);
            FollowerSelectItemListViewItem___ctor(v203, v199, 0, v200, 0, 0, v201, 0, 0, 0, v202, 1, 1, 0, 0, v217);
            ReturnTypeByQuestId = (__int64)v248->fields.recommendItemList;
            if ( !ReturnTypeByQuestId )
              goto LABEL_343;
            v204 = *(_QWORD *)(ReturnTypeByQuestId + 16);
            v205 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++*(_DWORD *)(ReturnTypeByQuestId + 28);
            if ( !v204 )
              goto LABEL_343;
            v206 = *(int *)(ReturnTypeByQuestId + 24);
            if ( (unsigned int)v206 >= *(_DWORD *)(v204 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                (Il2CppObject *)v203,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v205[4] + 192LL) + 112LL));
            }
            else
            {
              v207 = v204 + 8 * v206;
              *(_DWORD *)(ReturnTypeByQuestId + 24) = v206 + 1;
              *(_QWORD *)(v207 + 32) = v203;
              sub_1C32BC4(v207 + 32, v203);
            }
            ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            }
            if ( (__int64)v189 >= *(int *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 724LL) )
              break;
LABEL_337:
            LODWORD(namespaze_low) = v186->_1.namespaze;
            ++v189;
          }
          while ( (__int64)v189 < (int)namespaze_low );
        }
      }
    }
  }
LABEL_338:
  ReturnTypeByQuestId = (__int64)v248->fields.refreshButtonObject;
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ReturnTypeByQuestId, !v248->fields.isRefreshBtnHide, 0);
  v209 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v209 = FollowerSelectItemListViewManager_TypeInfo;
  }
  FollowerSelectItemListViewManager__SetEmptyMessage(v248, v209->static_fields->followerClassId, v208);
  FollowerSelectItemListViewManager__SortClass(
    v248,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    v210);
  ListViewManager__SortItem((ListViewManager_o *)v248, -1, 0, -1, 0);
  FollowerSelectItemListViewManager__SetFilterButtonImage(v248, v211);
  scrollView = v248->fields.scrollView;
  if ( !scrollView )
    goto LABEL_343;
  scrollView->fields.smoothDragStart = 1;
}


void FollowerSelectItemListViewManager__DeleteContinueData(const MethodInfo *method)
{
  FollowerSelectItemListViewManager_c *v1; // x0
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v3; // x8

  if ( (byte_4C324FB & 1) == 0 )
  {
    sub_1C32C20(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C32C20(&StringLiteral_6781/*"FollowerSelectClass"*/);
    sub_1C32C20(&StringLiteral_6784/*"FollowerSelectOldClass"*/);
    byte_4C324FB = 1;
  }
  v1 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v1 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v1->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT
    || (v1 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))LIST_VIEW_SORT->fields.invoke_impl)(
                                                      LIST_VIEW_SORT->fields.method_code,
                                                      1,
                                                      LIST_VIEW_SORT->fields.method)) == 0
    || (ListViewSort__DeleteContinueData((ListViewSort_o *)v1, 0),
        (v3 = FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT) == 0)
    || (v1 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))v3->fields.invoke_impl)(
                                                      v3->fields.method_code,
                                                      0,
                                                      v3->fields.method)) == 0 )
  {
    sub_1C32E7C(v1);
  }
  ListViewSort__DeleteContinueData((ListViewSort_o *)v1, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6781/*"FollowerSelectClass"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6784/*"FollowerSelectOldClass"*/, 0);
}


void FollowerSelectItemListViewManager__DestroyList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FollowerSelectItemListViewManager__DestroyList_32553936(this, 0, v2);
}


void FollowerSelectItemListViewManager__DestroyList_32553936(
        FollowerSelectItemListViewManager_o *this,
        BattleSetupInfo_o *battleSetupInfo,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  EventQuestMaster_o *ReturnTypeByQuestId; // x0
  FollowerSelectItemListViewManager_c *v7; // x8
  unsigned int v8; // w20
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct ListViewSort_o *v10; // x0
  System_Int32_array *OngoingQuestTargetEventIds; // x0
  int32_t questId; // w20
  int32_t questPhase; // w21
  System_Int32_array *v14; // x22
  EventUpValSetupInfo_o *v15; // x23
  void *p_setupInfo; // x0
  EventUpValSetupInfo_o *v17; // x1
  ClassButtonControlComponent_o *classButtonControl; // x20
  ClassButtonControlComponent_CallbackFunc_o *v19; // x21
  const MethodInfo *v20; // x4
  struct ListViewSort_o *sort; // x8
  int32_t InitialDisplayClass; // w0
  FollowerSelectItemListViewManager_c *v23; // x8
  int32_t v24; // w20
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
  const MethodInfo *v26; // x1
  struct ListViewSort_o *v27; // x8
  FollowerSelectItemListViewManager_o *v28; // x0
  int monitor; // w20
  const MethodInfo *v30; // x1
  FollowerSelectItemListViewManager_c *v31; // x0
  FollowerSelectItemListViewManager_o *v32; // x0
  int monitor_high; // w20
  FollowerSelectItemListViewManager_c *v34; // x0
  ClassButtonControlComponent_o *v35; // x20
  const MethodInfo *v36; // x2
  struct EventUpValSetupInfo_o *setupInfo; // x8
  System_Int32_array *v38; // x1
  UILabel_o *bonusFilterKindLabel; // x20

  if ( (byte_4C3250A & 1) == 0 )
  {
    sub_1C32C20(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&EventUpValSetupInfo_TypeInfo);
    sub_1C32C20(&Method_FollowerSelectItemListViewManager_OnChangeClass__);
    sub_1C32C20(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_11706/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/);
    sub_1C32C20(&StringLiteral_6781/*"FollowerSelectClass"*/);
    sub_1C32C20(&StringLiteral_6784/*"FollowerSelectOldClass"*/);
    byte_4C3250A = 1;
  }
  if ( battleSetupInfo )
  {
    this->fields.questId = BattleSetupInfo__TargetQuestId(battleSetupInfo, 0);
    this->fields.questPhase = battleSetupInfo->fields.questPhase;
    questRestrictionInfo = battleSetupInfo->fields.questRestrictionInfo;
    this->fields.questRestrictionInfo = questRestrictionInfo;
    sub_1C32BC4(&this->fields.questRestrictionInfo, questRestrictionInfo);
    ReturnTypeByQuestId = (EventQuestMaster_o *)FollowerInfo__GetReturnTypeByQuestId(battleSetupInfo->fields.questId, 0);
    v7 = FollowerSelectItemListViewManager_TypeInfo;
    v8 = (unsigned int)ReturnTypeByQuestId;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v7 = FollowerSelectItemListViewManager_TypeInfo;
    }
    LIST_VIEW_SORT = v7->static_fields->LIST_VIEW_SORT;
    if ( !LIST_VIEW_SORT )
      goto LABEL_49;
    v10 = (struct ListViewSort_o *)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))LIST_VIEW_SORT->fields.invoke_impl)(
                                     LIST_VIEW_SORT->fields.method_code,
                                     v8,
                                     LIST_VIEW_SORT->fields.method);
    this->fields.sort = v10;
    sub_1C32BC4(&this->fields.sort, v10);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (EventQuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventQuestMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_49;
    OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                   ReturnTypeByQuestId,
                                   this->fields.questId,
                                   this->fields.questPhase,
                                   0,
                                   0);
    questId = this->fields.questId;
    questPhase = this->fields.questPhase;
    v14 = OngoingQuestTargetEventIds;
    v15 = (EventUpValSetupInfo_o *)sub_1C32E6C(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_41638188(v15, v14, 0, questId, questPhase, 0);
    p_setupInfo = &this->fields.setupInfo;
    this->fields.setupInfo = v15;
    v17 = v15;
  }
  else
  {
    this->fields.setupInfo = 0;
    sub_1C32BC4(&this->fields.setupInfo, 0);
    p_setupInfo = &this->fields.questRestrictionInfo;
    v17 = 0;
    this->fields.questRestrictionInfo = 0;
  }
  sub_1C32BC4(p_setupInfo, v17);
  classButtonControl = this->fields.classButtonControl;
  v19 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C32E6C(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0);
  if ( !classButtonControl )
    goto LABEL_49;
  ClassButtonControlComponent__init(
    classButtonControl,
    v19,
    this->fields.questId,
    this->fields.questPhase,
    this->fields.questRestrictionInfo,
    0);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_49;
  InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                          this,
                          this->fields.questId,
                          this->fields.questPhase,
                          sort->fields.isRequestLoad,
                          v20);
  v23 = FollowerSelectItemListViewManager_TypeInfo;
  v24 = InitialDisplayClass;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v23 = FollowerSelectItemListViewManager_TypeInfo;
  }
  static_fields = v23->static_fields;
  static_fields->followerClassId = v24;
  *(_QWORD *)&static_fields->lastSelectedQuestId = *(_QWORD *)&this->fields.questId;
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.sort;
  if ( !ReturnTypeByQuestId )
    goto LABEL_49;
  ListViewSort__Load((ListViewSort_o *)ReturnTypeByQuestId, 0);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.sort;
  if ( !ReturnTypeByQuestId )
    goto LABEL_49;
  ListViewSort__Save((ListViewSort_o *)ReturnTypeByQuestId, 0);
  v27 = this->fields.sort;
  if ( !v27 )
    goto LABEL_49;
  if ( v27->fields.isRequestSave )
  {
    v28 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v28 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor = (int)v28->fields.sort->monitor;
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(v28, v26) )
    {
      v31 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v31 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6781/*"FollowerSelectClass"*/, v31->static_fields->followerClassId, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
    v32 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v32 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor_high = HIDWORD(v32->fields.sort->monitor);
    if ( monitor_high != FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(v32, v30) )
    {
      v34 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v34 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6784/*"FollowerSelectOldClass"*/, v34->static_fields->oldFollowerClassId, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
  }
  this->fields.originalItemList = 0;
  sub_1C32BC4(&this->fields.originalItemList, 0);
  this->fields.mixItemList = 0;
  sub_1C32BC4(&this->fields.mixItemList, 0);
  this->fields.recommendItemList = 0;
  sub_1C32BC4(&this->fields.recommendItemList, 0);
  this->fields.grandItemList = 0;
  sub_1C32BC4(&this->fields.grandItemList, 0);
  this->fields.isInput = 0;
  ReturnTypeByQuestId = (EventQuestMaster_o *)FollowerSelectItemListViewManager_TypeInfo;
  v35 = this->fields.classButtonControl;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  if ( !v35 )
    goto LABEL_49;
  ClassButtonControlComponent__setCursor(
    v35,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0);
  setupInfo = this->fields.setupInfo;
  v38 = setupInfo ? setupInfo->fields.eventIdList : (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, v38, v36);
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
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ReturnTypeByQuestId = (EventQuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11706/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/, 0);
    if ( bonusFilterKindLabel )
    {
      UILabel__set_text(bonusFilterKindLabel, (System_String_o *)ReturnTypeByQuestId, 0);
      goto LABEL_45;
    }
LABEL_49:
    sub_1C32E7C(ReturnTypeByQuestId);
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
  sub_1C32BC4(&this->fields.followerSelectItemOption, 0);
}


void FollowerSelectItemListViewManager__EndClassCompatibilityMenu(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C32519 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C32519 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0, 0);
}


void FollowerSelectItemListViewManager__EndCloseClassBoardEffectListDialog(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3252A & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3252A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
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
  ListViewSort_o *sort; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4C3251B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3251B = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__,
    0);
  if ( !Instance )
LABEL_8:
    sub_1C32E7C(sort);
  CommonUI__CloseServantBonusFilterSelectMenu((CommonUI_o *)Instance, v8, 0);
}


int32_t FollowerSelectItemListViewManager__GetAdvantageClassId(
        FollowerSelectItemListViewManager_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t defaultValue,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v10; // x20
  int32_t result; // w0
  struct System_Int32_array *classIds; // x8
  struct System_Int32_array *v13; // x8
  Il2CppObject *v14; // x8

  if ( (byte_4C32505 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C32505 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_17;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0);
  if ( !Entity )
    return defaultValue;
  v10 = Entity;
  result = QuestPhaseEntity__GetAdvantageClassId(Entity, 0);
  if ( result != -1 )
    return result;
  classIds = v10->fields.classIds;
  if ( !classIds || !classIds->max_length )
    return defaultValue;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v13 = v10->fields.classIds;
  if ( !v13 )
    goto LABEL_17;
  if ( !LODWORD(v13->max_length) )
    sub_1C32E84(Instance);
  if ( !Instance )
LABEL_17:
    sub_1C32E7C(Instance);
  v14 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          v13->m_Items[0],
          (const MethodInfo_3396838 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  result = defaultValue;
  if ( v14 )
    return HIDWORD(v14[4].klass);
  return result;
}


int32_t FollowerSelectItemListViewManager__GetClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_c *v2; // x0

  if ( (byte_4C3250E & 1) == 0 )
  {
    sub_1C32C20(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4C3250E = 1;
  }
  v2 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v2 = FollowerSelectItemListViewManager_TypeInfo;
  }
  return v2->static_fields->followerClassId;
}


int32_t FollowerSelectItemListViewManager__GetDisplayItemNum(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8

  if ( (byte_4C3252B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4C3252B = 1;
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
  int32_t PlayerPrefsFollowerClassId; // w21
  FollowerSelectItemListViewManager_c *v10; // x0
  Il2CppObject *classButtonControl; // x0
  _BOOL8 HasDisableClassTabs; // x0
  const MethodInfo *v13; // x3
  QuestPhaseEntity_o *Entity; // x0
  int32_t AdvantageClassId; // w0
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x1
  _BOOL8 AdvantageClassAuto; // x0
  const MethodInfo *v19; // x3
  int32_t v20; // w22
  _BOOL8 IsSameQuestAndPhase; // x0
  const MethodInfo *v22; // x4
  RecommendSupportQuestEntity_o *v24; // [xsp+0h] [xbp-40h] BYREF
  int32_t enableCount[2]; // [xsp+8h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_4C32503 & 1) == 0 )
  {
    sub_1C32C20(&ClassButtonControlComponent_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_RecommendSupportQuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    this = (FollowerSelectItemListViewManager_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C32503 = 1;
  }
  v24 = 0;
  *(_QWORD *)enableCount = 0;
  if ( isInitialize )
  {
    PlayerPrefsFollowerClassId = FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(
                                   this,
                                   *(const MethodInfo **)&questId);
  }
  else
  {
    v10 = FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v10 = FollowerSelectItemListViewManager_TypeInfo;
    }
    PlayerPrefsFollowerClassId = v10->static_fields->followerClassId;
  }
  classButtonControl = (Il2CppObject *)v8->fields.classButtonControl;
  if ( !classButtonControl )
    goto LABEL_35;
  HasDisableClassTabs = ClassButtonControlComponent__HasDisableClassTabs(
                          (ClassButtonControlComponent_o *)classButtonControl,
                          &enableCount[1],
                          enableCount,
                          0);
  if ( HasDisableClassTabs )
  {
    if ( FollowerSelectItemListViewManager__IsSameQuestAndPhase(
           (FollowerSelectItemListViewManager_o *)HasDisableClassTabs,
           questId,
           questPhase,
           v13) )
    {
      return PlayerPrefsFollowerClassId;
    }
    if ( enableCount[0] == 1 )
      PlayerPrefsFollowerClassId = enableCount[1];
    else
      PlayerPrefsFollowerClassId = 9;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    classButtonControl = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( classButtonControl )
    {
      Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)classButtonControl, questId, questPhase, 0);
      if ( Entity )
      {
        AdvantageClassId = QuestPhaseEntity__GetAdvantageClassId(Entity, 0);
        if ( AdvantageClassId != -1 )
          return AdvantageClassId;
      }
      return PlayerPrefsFollowerClassId;
    }
LABEL_35:
    sub_1C32E7C(classButtonControl);
  }
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(PlayerPrefsFollowerClassId, 0) )
  {
    classButtonControl = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !classButtonControl )
      goto LABEL_35;
    classButtonControl = DataManager__GetMasterData_object_(
                           (DataManager_o *)classButtonControl,
                           (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_RecommendSupportQuestMaster___);
    if ( !classButtonControl )
      goto LABEL_35;
    v16 = RecommendSupportQuestMaster__TryGetEntity(
            (RecommendSupportQuestMaster_o *)classButtonControl,
            &v24,
            questId,
            questPhase,
            0);
    if ( !v16 )
      PlayerPrefsFollowerClassId = FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(
                                     (FollowerSelectItemListViewManager_o *)v16,
                                     v17);
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  AdvantageClassAuto = OptionManager__GetAdvantageClassAuto(0);
  v20 = PlayerPrefsFollowerClassId;
  if ( AdvantageClassAuto )
  {
    IsSameQuestAndPhase = FollowerSelectItemListViewManager__IsSameQuestAndPhase(
                            (FollowerSelectItemListViewManager_o *)AdvantageClassAuto,
                            questId,
                            questPhase,
                            v19);
    v20 = PlayerPrefsFollowerClassId;
    if ( !IsSameQuestAndPhase )
      v20 = FollowerSelectItemListViewManager__GetAdvantageClassId(
              (FollowerSelectItemListViewManager_o *)IsSameQuestAndPhase,
              questId,
              questPhase,
              PlayerPrefsFollowerClassId,
              v22);
  }
  if ( ServantClassEntity__IsValidClassOnSellectSupport(v20, 0) )
    return v20;
  return PlayerPrefsFollowerClassId;
}


FollowerSelectItemListViewItem_o *FollowerSelectItemListViewManager__GetItem(
        FollowerSelectItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C3250C & 1) == 0 )
  {
    sub_1C32C20(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C3250C = 1;
  }
  result = (FollowerSelectItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4C32526 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4C32526 = 1;
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
  FollowerSelectItemListViewItem_o *Item; // x0
  const MethodInfo *v10; // x1
  __int64 naturalAligment; // x10
  struct FollowerInfo_o *followerInfo; // x8

  if ( (byte_4C32527 & 1) == 0 )
  {
    sub_1C32C20(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C32527 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1C32E7C(itemList);
  v8 = 0;
  while ( v8 < itemList->fields._size )
  {
    Item = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                 itemList,
                                                 v8,
                                                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (FollowerSelectItemListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo )
      {
        followerInfo = Item->fields.followerInfo;
        if ( followerInfo )
          followerInfo = (struct FollowerInfo_o *)followerInfo->fields.userId;
        if ( followerInfo == (struct FollowerInfo_o *)userId )
        {
          itemList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                    Item,
                                                                    v10);
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


int32_t FollowerSelectItemListViewManager__GetItemIndex_32562660(
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
  __int64 naturalAligment; // x10
  _QWORD *monitor; // x8
  int klass_high; // w8

  if ( (byte_4C32528 & 1) == 0 )
  {
    sub_1C32C20(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C32528 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_20:
    sub_1C32E7C(itemList);
  v12 = 0;
  while ( v12 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v12,
             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (FollowerSelectItemListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo )
      {
        monitor = Item[7].monitor;
        if ( monitor )
          monitor = (_QWORD *)monitor[2];
        if ( monitor == (_QWORD *)userId )
        {
          if ( grandGraphId < 1 )
          {
            klass_high = HIDWORD(Item[8].klass);
            if ( klass_high )
              klass_high = (int)Item[8].klass;
            if ( klass_high == classId && LODWORD(Item[17].klass) == deckId )
              return v12;
          }
          else if ( LODWORD(Item[15].monitor) == grandGraphId )
          {
            return v12;
          }
        }
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v12;
    if ( !itemList )
      goto LABEL_20;
  }
  return -1;
}


int32_t FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C32507 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_6781/*"FollowerSelectClass"*/);
    byte_4C32507 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6781/*"FollowerSelectClass"*/, 0, 0);
}


int32_t FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C32508 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_6784/*"FollowerSelectOldClass"*/);
    byte_4C32508 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6784/*"FollowerSelectOldClass"*/, 0, 0);
}


void FollowerSelectItemListViewManager__InitLoad(const MethodInfo *method)
{
  FollowerSelectItemListViewManager_c *v1; // x0
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v3; // x8

  if ( (byte_4C324FC & 1) == 0 )
  {
    sub_1C32C20(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4C324FC = 1;
  }
  v1 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v1 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v1->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT
    || (v1 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))LIST_VIEW_SORT->fields.invoke_impl)(
                                                      LIST_VIEW_SORT->fields.method_code,
                                                      1,
                                                      LIST_VIEW_SORT->fields.method)) == 0
    || (ListViewSort__InitLoad((ListViewSort_o *)v1, 0),
        (v3 = FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT) == 0)
    || (v1 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))v3->fields.invoke_impl)(
                                                      v3->fields.method_code,
                                                      0,
                                                      v3->fields.method)) == 0 )
  {
    sub_1C32E7C(v1);
  }
  ListViewSort__InitLoad((ListViewSort_o *)v1, 0);
}


bool FollowerSelectItemListViewManager__IsSameQuestAndPhase(
        FollowerSelectItemListViewManager_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_c *v6; // x0
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
  struct FollowerSelectItemListViewManager_StaticFields *v8; // x8

  if ( (byte_4C32504 & 1) == 0 )
  {
    sub_1C32C20(&BattleData_TypeInfo);
    sub_1C32C20(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4C32504 = 1;
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
      if ( BattleData__getSavedQuestId(0) == questId )
      {
        if ( !BattleData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
        return BattleData__getSavedQuestPhase(0) == questPhase;
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


void FollowerSelectItemListViewManager__ModifyList(
        FollowerSelectItemListViewManager_o *this,
        int32_t friendPointUpVal,
        int32_t friendPointUpMaxVal,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *v6; // x19
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *followerSelectItemOption; // x8
  int m_CancellationTokenSource; // w23
  int32_t v9; // w20
  const MethodInfo *v10; // x1
  __int64 naturalAligment; // x10
  FollowerSelectItemListViewManager_c *v12; // x0
  int32_t followerClassId; // w20
  int v14; // w23
  int32_t v15; // w20
  const MethodInfo *v16; // x1
  __int64 v17; // x10
  int v18; // w23
  int32_t v19; // w20
  const MethodInfo *v20; // x1
  __int64 v21; // x10

  v6 = this;
  if ( (byte_4C32509 & 1) == 0 )
  {
    sub_1C32C20(&ClassButtonControlComponent_TypeInfo);
    sub_1C32C20(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C32C20(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (FollowerSelectItemListViewManager_o *)sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C32509 = 1;
  }
  followerSelectItemOption = v6->fields.followerSelectItemOption;
  if ( !followerSelectItemOption )
    goto LABEL_35;
  followerSelectItemOption->fields.friendPointUpVal = friendPointUpVal;
  followerSelectItemOption->fields.friendPointUpMaxVal = friendPointUpMaxVal;
  this = (FollowerSelectItemListViewManager_o *)v6->fields.itemList;
  if ( !this )
    goto LABEL_35;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v9 = 0;
    do
    {
      this = (FollowerSelectItemListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)this,
                                                      v9,
                                                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (FollowerSelectItemListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != FollowerSelectItemListViewItem_TypeInfo )
      {
        break;
      }
      FollowerSelectItemListViewItem__Modify((FollowerSelectItemListViewItem_o *)this, v10);
      if ( m_CancellationTokenSource == ++v9 )
        goto LABEL_13;
      this = (FollowerSelectItemListViewManager_o *)v6->fields.itemList;
    }
    while ( this );
LABEL_35:
    sub_1C32E7C(this);
  }
LABEL_13:
  v12 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v12 = FollowerSelectItemListViewManager_TypeInfo;
  }
  followerClassId = v12->static_fields->followerClassId;
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsMixSupportGroupType(followerClassId, 0) )
  {
    this = (FollowerSelectItemListViewManager_o *)v6->fields.originalItemList;
    if ( !this )
      goto LABEL_35;
    v14 = (int)this->fields.m_CancellationTokenSource;
    if ( v14 >= 1 )
    {
      v15 = 0;
      do
      {
        this = (FollowerSelectItemListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this,
                                                        v15,
                                                        (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !this )
          break;
        v17 = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
        if ( this->klass->_2.naturalAligment < (unsigned int)v17
          || (FollowerSelectItemListViewItem_c *)this->klass->_2.typeHierarchy[v17 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          break;
        }
        FollowerSelectItemListViewItem__Modify((FollowerSelectItemListViewItem_o *)this, v16);
        if ( v14 == ++v15 )
          return;
        this = (FollowerSelectItemListViewManager_o *)v6->fields.originalItemList;
      }
      while ( this );
      goto LABEL_35;
    }
  }
  else
  {
    this = (FollowerSelectItemListViewManager_o *)v6->fields.mixItemList;
    if ( !this )
      goto LABEL_35;
    v18 = (int)this->fields.m_CancellationTokenSource;
    if ( v18 >= 1 )
    {
      v19 = 0;
      do
      {
        this = (FollowerSelectItemListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this,
                                                        v19,
                                                        (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !this )
          break;
        v21 = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
        if ( this->klass->_2.naturalAligment < (unsigned int)v21
          || (FollowerSelectItemListViewItem_c *)this->klass->_2.typeHierarchy[v21 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          break;
        }
        FollowerSelectItemListViewItem__Modify((FollowerSelectItemListViewItem_o *)this, v20);
        if ( v18 == ++v19 )
          return;
        this = (FollowerSelectItemListViewManager_o *)v6->fields.mixItemList;
      }
      while ( this );
      goto LABEL_35;
    }
  }
}


void FollowerSelectItemListViewManager__OnChangeClass(
        FollowerSelectItemListViewManager_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 IsRecommendSupportGroupType; // x0
  int v6; // w21
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t oldCursor; // w22
  const MethodInfo *v9; // x2
  struct ClassButtonControlComponent_o *v10; // x8
  int32_t v11; // w23
  FollowerSelectItemListViewManager_c *v12; // x0
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  const MethodInfo *v15; // x2

  if ( (byte_4C32521 & 1) == 0 )
  {
    sub_1C32C20(&ClassButtonControlComponent_TypeInfo);
    sub_1C32C20(&Method_FollowerSelectItemListViewManager_OnChangeClass__);
    sub_1C32C20(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4C32521 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    IsRecommendSupportGroupType = ClassButtonControlComponent__IsRecommendSupportGroupType(classPos, 0);
    if ( this->fields.classButtonControl )
    {
      v6 = IsRecommendSupportGroupType;
      IsRecommendSupportGroupType = ClassButtonControlComponent__getChangeCursorPos(this->fields.classButtonControl, 0);
      if ( (IsRecommendSupportGroupType & 0x80000000) == 0 )
      {
        classButtonControl = this->fields.classButtonControl;
        if ( !classButtonControl )
          goto LABEL_22;
        oldCursor = classButtonControl->fields.oldCursor;
        if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
        IsRecommendSupportGroupType = ClassButtonControlComponent__IsRecommendSupportGroupType(oldCursor, 0);
        if ( ((v6 | (unsigned int)IsRecommendSupportGroupType) & 1) != 0 )
          FollowerSelectItemListViewManager__SetEmptyMessage(this, classPos, v9);
      }
      v10 = this->fields.classButtonControl;
      if ( v10 )
      {
        v11 = v10->fields.oldCursor;
        v12 = FollowerSelectItemListViewManager_TypeInfo;
        if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
          v12 = FollowerSelectItemListViewManager_TypeInfo;
        }
        v12->static_fields->oldFollowerClassId = v11;
        v13 = Method_FollowerSelectItemListViewManager_OnChangeClass__;
        if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnChangeClass__ + 83) & 2) != 0 )
          v13 = (_QWORD *)sub_1C32C38(Method_FollowerSelectItemListViewManager_OnChangeClass__);
        v14 = (System_Reflection_MethodBase_o *)sub_1C32C04(v13, v13[4]);
        OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
        if ( (v6 & 1) != 0 )
          FollowerSelectItemListViewManager__OnClickRecommend(this, classPos, v15);
        else
          FollowerSelectItemListViewManager__SortClass(this, classPos, v15);
        return;
      }
    }
LABEL_22:
    sub_1C32E7C(IsRecommendSupportGroupType);
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
  _BOOL4 isServantEquipBonusFilterEnable; // w25
  System_Int32_array *equipBonusFilterEventIds; // x20
  ListViewSort_o *sort; // x21
  CommonUI_o *v10; // x22
  ServantBonusFilterSelectMenu_CallbackFunc_o *v11; // x23
  __int64 v12; // x0

  if ( (byte_4C3251A & 1) == 0 )
  {
    sub_1C32C20(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__);
    sub_1C32C20(&Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3251A = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
    isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
    equipBonusFilterEventIds = this->fields.equipBonusFilterEventIds;
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantBonusFilterSelectMenu_CallbackFunc_o *)sub_1C32E6C(ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantBonusFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__,
      0);
    if ( !v10 )
      sub_1C32E7C(v12);
    CommonUI__OpenServantBonusFilterSelectMenu(
      v10,
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
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w21

  if ( (byte_4C32525 & 1) == 0 )
  {
    sub_1C32C20(&Method_FollowerSelectItemListViewManager_OnClickChangeSkill__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    byte_4C32525 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickChangeSkill__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickChangeSkill__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_FollowerSelectItemListViewManager_OnClickChangeSkill__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    displaySkill = this->fields.displaySkill;
    if ( (unsigned int)displaySkill <= 2 )
      this->fields.displaySkill = dword_C44794[displaySkill];
    ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                                this,
                                                                v5);
    if ( !ObjectList )
      goto LABEL_14;
    v8 = ObjectList;
    if ( ObjectList->fields._size >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    v8,
                                                                    v9,
                                                                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
        if ( !ObjectList )
          break;
        FollowerSelectItemListViewObject__ChangeDisplaySkill(
          (FollowerSelectItemListViewObject_o *)ObjectList,
          this->fields.displaySkill,
          0);
        if ( ++v9 >= v8->fields._size )
          return;
      }
LABEL_14:
      sub_1C32E7C(ObjectList);
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

  if ( (byte_4C32518 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__);
    sub_1C32C20(&Method_FollowerSelectItemListViewManager_OnClickClassComparibility__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C32518 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickClassComparibility__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickClassComparibility__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_FollowerSelectItemListViewManager_OnClickClassComparibility__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v6,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__,
      0);
    if ( !Instance )
      sub_1C32E7C(v7);
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


void FollowerSelectItemListViewManager__OnClickRecommend(
        FollowerSelectItemListViewManager_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  FollowerSelectItemListViewManager_c *v6; // x0
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C32522 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__);
    sub_1C32C20(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4C32522 = 1;
  }
  entity = 0;
  if ( this->fields.isGetRecommendSupport )
    goto LABEL_4;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
  if ( !Master_object )
    goto LABEL_16;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          (const MethodInfo_3398EC0 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    goto LABEL_12;
  Master_object = entity;
  if ( !entity )
LABEL_16:
    sub_1C32E7C(Master_object);
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
  v6 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v6 = FollowerSelectItemListViewManager_TypeInfo;
  }
  v6->static_fields->followerClassId = classPos;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_1C32BC4(&this->fields.callbackFunc, 0);
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
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v4; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w19
  __int64 v7; // x1

  if ( (byte_4C32517 & 1) == 0 )
  {
    sub_1C32C20(&ClassButtonControlComponent_TypeInfo);
    byte_4C32517 = 1;
  }
  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0;
      v4 = sub_1C32BC4(&this->fields.callbackFunc, 0);
      classButtonControl = this->fields.classButtonControl;
      if ( !classButtonControl )
        sub_1C32E7C(v4);
      currentCursor = classButtonControl->fields.currentCursor;
      if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      if ( ClassButtonControlComponent__IsRecommendSupportGroupType(currentCursor, 0) )
        v7 = 13;
      else
        v7 = 7;
      ((void (__fastcall *)(intptr_t, __int64, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        v7,
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
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  unsigned int Index; // w0

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    v5 = sub_1C32BC4(&this->fields.callbackFunc, 0);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1C32E7C(v5);
      Index = ListViewObject__get_Index(obj, 0);
      ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
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
  struct ListViewSort_o *sort; // x8

  if ( (byte_4C3251F & 1) == 0 )
  {
    sub_1C32C20(&Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__);
    byte_4C3251F = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C32E7C(v5);
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
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w20
  struct ListViewSort_o *sort; // x8
  int v9; // w9
  Il2CppObject *Instance; // x0
  ListViewSort_o *v11; // x20
  CommonUI_o *v12; // x21
  OtherUserSortDialog_CallbackFunc_o *v13; // x22

  if ( (byte_4C3251D & 1) == 0 )
  {
    sub_1C32C20(&OtherUserSortDialog_CallbackFunc_TypeInfo);
    sub_1C32C20(&ClassButtonControlComponent_TypeInfo);
    sub_1C32C20(&Method_FollowerSelectItemListViewManager_CloseSortDialog__);
    sub_1C32C20(&Method_FollowerSelectItemListViewManager_OnClickSortKind__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3251D = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_FollowerSelectItemListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    classButtonControl = this->fields.classButtonControl;
    if ( classButtonControl )
    {
      currentCursor = classButtonControl->fields.currentCursor;
      if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      IsRecommendSupportGroupType = ClassButtonControlComponent__IsRecommendSupportGroupType(currentCursor, 0);
      if ( IsRecommendSupportGroupType )
      {
        sort = this->fields.sort;
        if ( sort )
        {
          if ( sort->fields.otherSortKind == 11 )
            v9 = 29;
          else
            v9 = 11;
          sort->fields.otherSortKind = v9;
          ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
          return;
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v11 = this->fields.sort;
        v12 = (CommonUI_o *)Instance;
        v13 = (OtherUserSortDialog_CallbackFunc_o *)sub_1C32E6C(OtherUserSortDialog_CallbackFunc_TypeInfo);
        OtherUserSortDialog_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_FollowerSelectItemListViewManager_CloseSortDialog__,
          0);
        if ( v12 )
        {
          CommonUI__OpenOtherUserSortDialog(v12, 0, v11, v13, 0);
          return;
        }
      }
    }
    sub_1C32E7C(IsRecommendSupportGroupType);
  }
}


void FollowerSelectItemListViewManager__OnClickSupportListView(
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
    this->fields.callbackFunc = 0;
    v5 = sub_1C32BC4(&this->fields.callbackFunc, 0);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1C32E7C(v5);
      Index = ListViewObject__get_Index(obj, 0);
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
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
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  unsigned int Index; // w0

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    v5 = sub_1C32BC4(&this->fields.callbackFunc, 0);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1C32E7C(v5);
      Index = ListViewObject__get_Index(obj, 0);
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
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
  __int64 naturalAligment; // x10
  ListViewObject_o *v6; // x22
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x21
  __int64 v8; // x0
  __int64 Index; // x2
  __int64 dispObject_low; // x3

  if ( (byte_4C32515 & 1) == 0 )
  {
    sub_1C32C20(&FollowerSelectItemListViewObject_TypeInfo);
    byte_4C32515 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( obj
      && (naturalAligment = FollowerSelectItemListViewObject_TypeInfo->_2.naturalAligment,
          obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      v6 = (FollowerSelectItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewObject_TypeInfo
         ? obj
         : 0LL;
    }
    else
    {
      v6 = 0;
    }
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    v8 = sub_1C32BC4(&this->fields.callbackFunc, 0);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1C32E7C(v8);
      Index = (unsigned int)ListViewObject__get_Index(obj, 0);
      if ( v6 )
        dispObject_low = LODWORD(v6[1].fields.dispObject);
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
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x22
  unsigned int Index; // w0

  if ( (byte_4C32516 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_12648/*"ScrollViewEnabled"*/);
    byte_4C32516 = 1;
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
        (System_String_o *)StringLiteral_12648/*"ScrollViewEnabled"*/,
        0.1,
        0);
    }
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    tutorialListViewObject = (UnityEngine_Component_o *)sub_1C32BC4(&this->fields.callbackFunc, 0);
    if ( callbackFunc )
    {
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0);
        ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          (unsigned int)kind,
          Index,
          0,
          callbackFunc->fields.method);
        return;
      }
LABEL_14:
      sub_1C32E7C(tutorialListViewObject);
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
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Component_o *tutorialListViewObject; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C32514 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C32514 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
              sub_1C32BC4(&this->fields.callbackFunc2, 0);
              if ( callbackFunc2 )
                ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
                  callbackFunc2->fields.method_code,
                  callbackFunc2->fields.method);
              return;
            }
          }
        }
      }
      sub_1C32E7C(tutorialListViewObject);
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
  Il2CppObject *Master_object; // x21
  const MethodInfo *v15; // x1
  int32_t scrollView; // w24
  int32_t v17; // w21
  FollowerSelectItemListViewManager_o *v18; // x25
  struct FollowerInfo_o *followerInfo; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x27
  int max_length; // w8
  unsigned int v22; // w28
  ClassBoardInfo_o *v23; // x22
  ClassBoardInfo_o *v24; // x23
  ClassBoardInfo_o *v25; // x26
  long double inited; // q0
  _QWORD *v27; // x24
  __int64 v28; // x8
  __int64 v29; // x0
  __int64 v30; // x0
  struct System_Int32_array **v31; // x8
  struct System_Int32_array *v32; // x1
  long double v33; // q0
  _QWORD *v34; // x24
  __int64 v35; // x8
  __int64 v36; // x0
  __int64 v37; // x0
  struct System_Int32_array **v38; // x8
  struct System_Int32_array *v39; // x1
  Il2CppObject *Instance; // x24
  System_Action_o *v41; // x25
  struct FollowerInfo_o *v42; // x8

  v4 = this;
  if ( (byte_4C32529 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Array_Empty_int___);
    sub_1C32C20(&ClassBoardInfo_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C32C20(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C32C20(&Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__);
    sub_1C32C20(&Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (FollowerSelectItemListViewManager_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C32529 = 1;
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
                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
            v10 = (_QWORD *)sub_1C32C38(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
          v11 = (System_Reflection_MethodBase_o *)sub_1C32C04(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0, 0);
          return;
        }
        v4->fields.isInput = 0;
        v12 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
        if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 83) & 2) != 0 )
          v12 = (_QWORD *)sub_1C32C38(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
        v13 = (System_Reflection_MethodBase_o *)sub_1C32C04(v12, v12[4]);
        OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
        this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewItem__get_SvtId(v8, v15);
        if ( Master_object )
        {
          this = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                          (int32_t)this,
                                                          (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            scrollView = (int32_t)this->fields.scrollView;
            this = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( this )
            {
              this = (FollowerSelectItemListViewManager_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                                              (ClassBoardClassMaster_o *)this,
                                                              scrollView,
                                                              0);
              v17 = (int)this;
              if ( (_DWORD)this )
              {
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                this = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
                if ( !this )
                  goto LABEL_67;
                this = (FollowerSelectItemListViewManager_o *)ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
                                                                (ClassBoardBaseMaster_o *)this,
                                                                v17,
                                                                0);
                v18 = this;
              }
              else
              {
                v18 = 0;
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
                    v24 = 0;
                    v23 = 0;
LABEL_45:
                    if ( !v24 )
                    {
                      v24 = (ClassBoardInfo_o *)sub_1C32E6C(ClassBoardInfo_TypeInfo);
                      ClassBoardInfo___ctor(v24, 0);
                      if ( !v24 )
                        goto LABEL_67;
                      v24->fields.classBoardBaseId = v17;
                      v27 = Method_System_Array_Empty_int___;
                      v28 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v28 )
                      {
                        sub_1C83390(Method_System_Array_Empty_int___);
                        v28 = v27[7];
                      }
                      v29 = *(_QWORD *)(v28 + 16);
                      if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
                        v29 = sub_1C83334(inited);
                      if ( !*(_DWORD *)(v29 + 224) )
                        inited = j_il2cpp_runtime_class_init_0(v29);
                      v30 = *(_QWORD *)(v27[7] + 16LL);
                      if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
                        v30 = sub_1C83334(inited);
                      v31 = *(struct System_Int32_array ***)(v30 + 184);
                      v32 = *v31;
                      v24->fields.squareIds = *v31;
                      sub_1C32BC4(&v24->fields.squareIds, v32);
                      v34 = Method_System_Array_Empty_int___;
                      v35 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v35 )
                      {
                        sub_1C83390(Method_System_Array_Empty_int___);
                        v35 = v34[7];
                      }
                      v36 = *(_QWORD *)(v35 + 16);
                      if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
                        v36 = sub_1C83334(v33);
                      if ( !*(_DWORD *)(v36 + 224) )
                        v33 = j_il2cpp_runtime_class_init_0(v36);
                      v37 = *(_QWORD *)(v34[7] + 16LL);
                      if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
                        v37 = sub_1C83334(v33);
                      v38 = *(struct System_Int32_array ***)(v37 + 184);
                      v39 = *v38;
                      v24->fields.releasedClassIds = *v38;
                      sub_1C32BC4(&v24->fields.releasedClassIds, v39);
                    }
LABEL_64:
                    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    v41 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
                    System_Action___ctor(
                      v41,
                      (Il2CppObject *)v4,
                      Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__,
                      0);
                    v42 = v8->fields.followerInfo;
                    if ( v42 && Instance )
                    {
                      CommonUI__OpenClassBoardEffectListDialog(
                        (CommonUI_o *)Instance,
                        1,
                        v17,
                        0,
                        v41,
                        1,
                        v24,
                        v23,
                        v8->fields._IsGrandSupport_k__BackingField,
                        v42->fields.followerClassStatistics,
                        0,
                        0);
                      return;
                    }
                  }
                  else
                  {
                    v22 = 0;
                    v23 = 0;
                    v24 = 0;
                    while ( 1 )
                    {
                      if ( v22 >= max_length )
                        sub_1C32E84(this);
                      v25 = userClassBoardInfo->m_Items[v22];
                      if ( !v25 )
                        break;
                      if ( v25->fields.classBoardBaseId == v17 )
                      {
                        this = (FollowerSelectItemListViewManager_o *)ClassBoardInfo__IsReleasedClassId(
                                                                        v25,
                                                                        scrollView,
                                                                        0);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          v24 = v25;
                      }
                      if ( v18 )
                      {
                        if ( LODWORD(v18->fields.m_CachedPtr) == v25->fields.classBoardBaseId )
                        {
                          this = (FollowerSelectItemListViewManager_o *)System_Linq_Enumerable__Any_int_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)v25->fields.squareIds,
                                                                          (const MethodInfo_30E8A38 *)Method_System_Linq_Enumerable_Any_int___);
                          if ( ((unsigned __int8)this & 1) != 0 )
                            v23 = v25;
                        }
                      }
                      if ( v24 && v23 )
                        goto LABEL_64;
                      max_length = userClassBoardInfo->max_length;
                      if ( (int)++v22 >= max_length )
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
      sub_1C32E7C(this);
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
    sub_1C32E7C(0);
  ClassButtonControlComponent__PlayRecommendEffect(classButtonControl, 0);
}


void FollowerSelectItemListViewManager__RequestInto(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_FollowerSelectItemListViewObject__o *ObjectList; // x0
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v6; // x20
  int v7; // w24
  int32_t v8; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v10; // x23

  if ( (byte_4C32513 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    sub_1C32C20(&StringLiteral_9941/*"OnMoveEnd"*/);
    byte_4C32513 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
  ObjectList = FollowerSelectItemListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_1C32E7C(ObjectList);
  size = ObjectList->fields._size;
  v6 = (System_Collections_Generic_List_object__o *)ObjectList;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v7 = 0;
  v8 = 0;
  do
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v6,
             v8,
             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0) )
    {
      v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        goto LABEL_13;
      ++v7;
      FollowerSelectItemListViewObject__Init_32638928((FollowerSelectItemListViewObject_o *)Item, 4, v10, 0.1, 0);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v8;
  }
  while ( v8 < v6->fields._size );
  if ( !v7 )
  {
LABEL_12:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      0.0,
      0);
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
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C32511 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__);
    sub_1C32C20(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1C32C20(&StringLiteral_9941/*"OnMoveEnd"*/);
    byte_4C32511 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C32E7C(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      ObjectList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v12.fields._current;
      v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C32E7C(v11);
      FollowerSelectItemListViewObject__Init_32638928(
        (FollowerSelectItemListViewObject_o *)current,
        mode,
        v10,
        delay,
        0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewManager__RequestListObject_32626480(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C32512 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__);
    sub_1C32C20(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1C32C20(&StringLiteral_9941/*"OnMoveEnd"*/);
    byte_4C32512 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C32E7C(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      ObjectList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v10.fields._current;
      v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C32E7C(v9);
      FollowerSelectItemListViewObject__Init_32639028((FollowerSelectItemListViewObject_o *)current, mode, v8, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


void FollowerSelectItemListViewManager__SaveSortFilter(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *v5; // x8
  FollowerSelectItemListViewManager_o *v6; // x0
  int monitor; // w20
  const MethodInfo *v8; // x1
  FollowerSelectItemListViewManager_c *v9; // x0
  FollowerSelectItemListViewManager_o *v10; // x0
  int monitor_high; // w20
  FollowerSelectItemListViewManager_c *v12; // x0

  if ( (byte_4C3250B & 1) == 0 )
  {
    sub_1C32C20(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C32C20(&StringLiteral_6781/*"FollowerSelectClass"*/);
    sub_1C32C20(&StringLiteral_6784/*"FollowerSelectOldClass"*/);
    byte_4C3250B = 1;
  }
  sort = this->fields.sort;
  if ( !sort || (ListViewSort__Save(sort, 0), (v5 = this->fields.sort) == 0) )
    sub_1C32E7C(sort);
  if ( v5->fields.isRequestSave )
  {
    v6 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v6 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor = (int)v6->fields.sort->monitor;
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(v6, v4) )
    {
      v9 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v9 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6781/*"FollowerSelectClass"*/, v9->static_fields->followerClassId, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
    v10 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v10 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor_high = HIDWORD(v10->fields.sort->monitor);
    if ( monitor_high != FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(v10, v8) )
    {
      v12 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v12 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6784/*"FollowerSelectOldClass"*/, v12->static_fields->oldFollowerClassId, 0);
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
    sub_1C32E7C(0);
  UnityEngine_Behaviour__set_enabled(scrollView, 1, 0);
}


void FollowerSelectItemListViewManager__SetBonusFilterFlag(
        FollowerSelectItemListViewManager_o *this,
        System_Int32_array *eventIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *Instance; // x0
  il2cpp_array_size_t max_length; // x8
  System_Collections_Generic_List_int__o *v7; // x21
  unsigned __int64 v8; // x23
  int32_t v9; // w22
  bool isBonusFilterEnable; // w27
  bool isServantBonusFilterEnable; // w27
  bool isServantEquipBonusFilterEnable; // w27
  struct System_Int32_array *v13; // x0
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C324FF & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventFilterMaster___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C324FF = 1;
  }
  entity = 0;
  *(_WORD *)&this->fields.isBonusFilterEnable = 0;
  this->fields.isServantEquipBonusFilterEnable = 0;
  Instance = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)eventIds,
                                                         (const MethodInfo_31214BC *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !eventIds )
    goto LABEL_22;
  max_length = eventIds->max_length;
  v7 = Instance;
  if ( max_length && (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C32E84(Instance);
      v9 = eventIds->m_Items[v8];
      Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventFilterMaster___);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)EventFilterMaster__TryGetEntity_41887420(
                                                             (EventFilterMaster_o *)Instance,
                                                             &entity,
                                                             v9,
                                                             0,
                                                             0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (System_Collections_Generic_List_int__o *)entity;
        if ( !entity )
          break;
        isBonusFilterEnable = this->fields.isBonusFilterEnable;
        this->fields.isBonusFilterEnable = isBonusFilterEnable | !EventFilterEntity__IsSupportFilterNoDisp(entity, 0);
        Instance = (System_Collections_Generic_List_int__o *)entity;
        if ( !entity )
          break;
        isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
        this->fields.isServantBonusFilterEnable = isServantBonusFilterEnable
                                                | !EventFilterEntity__IsSupportServantFilterNoDisp(entity, 0);
        Instance = (System_Collections_Generic_List_int__o *)entity;
        if ( !entity )
          break;
        isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
        this->fields.isServantEquipBonusFilterEnable = isServantEquipBonusFilterEnable
                                                     | !EventFilterEntity__IsSupportServantEquipFilterNoDisp(entity, 0);
        Instance = (System_Collections_Generic_List_int__o *)entity;
        if ( !entity )
          break;
        Instance = (System_Collections_Generic_List_int__o *)EventFilterEntity__IsSupportServantEquipFilterNoDisp(
                                                               entity,
                                                               0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v7 )
            break;
          Instance = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Remove(
                                                                 v7,
                                                                 v9,
                                                                 (const MethodInfo_377CC94 *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
      else
      {
        *(_WORD *)&this->fields.isBonusFilterEnable = 257;
        this->fields.isServantEquipBonusFilterEnable = 1;
      }
      LODWORD(max_length) = eventIds->max_length;
      if ( (__int64)++v8 >= (int)max_length )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C32E7C(Instance);
  }
LABEL_20:
  if ( !v7 )
    goto LABEL_22;
  v13 = System_Collections_Generic_List_int___ToArray(
          v7,
          (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.equipBonusFilterEventIds = v13;
  sub_1C32BC4(&this->fields.equipBonusFilterEventIds, v13);
}


void FollowerSelectItemListViewManager__SetClassBoardInfo(
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
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x21
  Il2CppObject *v20; // x0
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_4C32501 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__getEntityList__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&StringLiteral_17663/*"buttontxt_formation_20"*/);
    byte_4C32501 = 1;
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
  if ( CondType__IsQuestClear_40225464(ClassBoardReleaseQuestId, -1, 0, 0) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17663/*"buttontxt_formation_20"*/, 0);
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = &this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_33E73E4 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v8,
      (const MethodInfo_33E68A0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *p_classBoardMaxDictionary = v8;
    sub_1C32BC4(p_classBoardMaxDictionary, v8);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object
    || (Master_object = (System_Collections_ObjectModel_Collection_T__o *)Master_object[1].fields.items) == 0 )
  {
    sub_1C32E7C(Master_object);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Master_object,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_23;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_23:
      v14 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_30;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_30:
      v18 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v20 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v19 )
      sub_1C32E7C(v20);
    if ( !v20 )
      sub_1C32E7C(0);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                            (ClassBoardSquareMaster_o *)v20,
                            *(_DWORD *)(v19 + 16),
                            0);
    if ( OtherThanNoneEntity )
    {
      if ( !*p_classBoardMaxDictionary )
        sub_1C32E7C(OtherThanNoneEntity);
      System_Collections_Generic_Dictionary_int__int___Add(
        *p_classBoardMaxDictionary,
        *(_DWORD *)(v19 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_33E7264 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_43;
    }
    v25 = (__int64)&v22->vtable[*v24];
  }
  else
  {
LABEL_43:
    v25 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
}


void FollowerSelectItemListViewManager__SetClassId(
        FollowerSelectItemListViewManager_o *this,
        int32_t followerClassId,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager___c__DisplayClass84_0_o *v5; // x19
  System_Collections_Generic_List_object__o *itemList; // x0
  FollowerSelectItemListViewManager_c *v7; // x0
  int32_t v8; // w21
  System_Collections_Generic_IEnumerable_T__o *mixItemList; // x21
  System_Collections_Generic_List_object__o *v10; // x22
  const MethodInfo *v11; // x1
  __int64 naturalAligment; // x10
  int32_t v13; // w21
  System_Collections_Generic_IEnumerable_T__o *recommendItemList; // x21
  System_Collections_Generic_List_object__o *v15; // x22
  const MethodInfo *v16; // x1
  __int64 v17; // x10
  System_Collections_Generic_IEnumerable_T__o *originalItemList; // x21
  System_Collections_Generic_List_object__o *v19; // x22
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v21; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x20
  System_Func_object__bool__o *v23; // x23
  const MethodInfo *v24; // x2
  __int64 v25; // x10
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C3250F & 1) == 0 )
  {
    sub_1C32C20(&ClassButtonControlComponent_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_OfType_FollowerSelectItemListViewItem___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_FollowerSelectItemListViewItem___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C32C20(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C32C20(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C32C20(&System_Func_FollowerSelectItemListViewItem__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem___ctor___78011328);
    sub_1C32C20(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C32C20(&Method_FollowerSelectItemListViewManager___c__DisplayClass84_0__SetClassId_b__0__);
    sub_1C32C20(&FollowerSelectItemListViewManager___c__DisplayClass84_0_TypeInfo);
    byte_4C3250F = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v5 = (FollowerSelectItemListViewManager___c__DisplayClass84_0_o *)sub_1C32E6C(FollowerSelectItemListViewManager___c__DisplayClass84_0_TypeInfo);
  FollowerSelectItemListViewManager___c__DisplayClass84_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_42;
  v5->fields.followerClassId = followerClassId;
  v7 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v7 = FollowerSelectItemListViewManager_TypeInfo;
  }
  v7->static_fields->followerClassId = followerClassId;
  if ( this->fields.mixItemList && this->fields.originalItemList && this->fields.grandItemList )
  {
    v8 = v5->fields.followerClassId;
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    if ( ClassButtonControlComponent__IsMixSupportGroupType(v8, 0) )
    {
      mixItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.mixItemList;
      v10 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ListViewItem__TypeInfo);
      System_Collections_Generic_List_object____ctor_58294448(
        v10,
        mixItemList,
        (const MethodInfo_37980B0 *)Method_System_Collections_Generic_List_ListViewItem___ctor___78011328);
      this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v10;
      sub_1C32BC4(&this->fields.itemList, v10);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( itemList )
      {
        System_Collections_Generic_List_object___AddRange(
          itemList,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.grandItemList,
          (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_ListViewItem__AddRange__);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v26,
            itemList,
            (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v27 = v26;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v27,
                    (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v27.fields._current )
            {
              naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
              if ( v27.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
                && (FollowerSelectItemListViewItem_c *)v27.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__UpdateRestriction(
                  (FollowerSelectItemListViewItem_o *)v27.fields._current,
                  v11);
              }
            }
          }
LABEL_40:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v27,
            (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
      }
    }
    else
    {
      v13 = v5->fields.followerClassId;
      if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      if ( ClassButtonControlComponent__IsRecommendSupportGroupType(v13, 0) )
      {
        recommendItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.recommendItemList;
        v15 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor_58294448(
          v15,
          recommendItemList,
          (const MethodInfo_37980B0 *)Method_System_Collections_Generic_List_ListViewItem___ctor___78011328);
        this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v15;
        sub_1C32BC4(&this->fields.itemList, v15);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v26,
            itemList,
            (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v27 = v26;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v27,
                    (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v27.fields._current )
            {
              v17 = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
              if ( v27.fields._current->klass->_2.naturalAligment >= (unsigned int)v17
                && (FollowerSelectItemListViewItem_c *)v27.fields._current->klass->_2.typeHierarchy[v17 - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__UpdateRestriction(
                  (FollowerSelectItemListViewItem_o *)v27.fields._current,
                  v16);
              }
            }
          }
          goto LABEL_40;
        }
      }
      else
      {
        originalItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.originalItemList;
        v19 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor_58294448(
          v19,
          originalItemList,
          (const MethodInfo_37980B0 *)Method_System_Collections_Generic_List_ListViewItem___ctor___78011328);
        this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v19;
        p_itemList = &this->fields.itemList;
        sub_1C32BC4(&this->fields.itemList, v19);
        if ( v5->fields.followerClassId )
        {
          v21 = this->fields.itemList;
          v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                       (System_Collections_IEnumerable_o *)this->fields.grandItemList,
                                                                       (const MethodInfo_310C5CC *)Method_System_Linq_Enumerable_OfType_FollowerSelectItemListViewItem___);
          v23 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_FollowerSelectItemListViewItem__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v23,
            (Il2CppObject *)v5,
            Method_FollowerSelectItemListViewManager___c__DisplayClass84_0__SetClassId_b__0__,
            0);
          itemList = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Where_object_(
                                                                    v22,
                                                                    (System_Func_TSource__bool__o *)v23,
                                                                    (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_FollowerSelectItemListViewItem___);
          if ( !v21 )
            goto LABEL_42;
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)v21,
            (System_Collections_Generic_IEnumerable_T__o *)itemList,
            (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_ListViewItem__AddRange__);
        }
        itemList = (System_Collections_Generic_List_object__o *)*p_itemList;
        if ( *p_itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v26,
            itemList,
            (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v27 = v26;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v27,
                    (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v27.fields._current )
            {
              v25 = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
              if ( v27.fields._current->klass->_2.naturalAligment >= (unsigned int)v25
                && (FollowerSelectItemListViewItem_c *)v27.fields._current->klass->_2.typeHierarchy[v25 - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__AnalyzeEntity(
                  (FollowerSelectItemListViewItem_o *)v27.fields._current,
                  v5->fields.followerClassId,
                  v24);
              }
            }
          }
          goto LABEL_40;
        }
      }
    }
LABEL_42:
    sub_1C32E7C(itemList);
  }
}


void FollowerSelectItemListViewManager__SetEmptyMessage(
        FollowerSelectItemListViewManager_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  System_String_o **v5; // x8
  System_String_o *v6; // x20
  UILabel_o *emptyMessageLabel; // x19
  System_String_o *v8; // x0

  if ( (byte_4C32506 & 1) == 0 )
  {
    sub_1C32C20(&ClassButtonControlComponent_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_11024/*"RECOMMEND_SERVANT_EMPTY"*/);
    sub_1C32C20(&StringLiteral_11807/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4C32506 = 1;
  }
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(classId, 0) )
    v5 = (System_String_o **)&StringLiteral_11024/*"RECOMMEND_SERVANT_EMPTY"*/;
  else
    v5 = (System_String_o **)&StringLiteral_11807/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  v6 = *v5;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get(v6, 0);
  if ( !emptyMessageLabel )
    sub_1C32E7C(v8);
  UILabel__set_text(emptyMessageLabel, v8, 0);
}


void FollowerSelectItemListViewManager__SetFilterButtonImage(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *bonusFilterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4C3251C & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17514/*"btn_sefilter_2_on"*/);
    sub_1C32C20(&StringLiteral_17513/*"btn_sefilter_2"*/);
    byte_4C3251C = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (bonusFilterSprite = this->fields.bonusFilterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !bonusFilterSprite) )
  {
    sub_1C32E7C(sort);
  }
  v5 = (System_String_o **)&StringLiteral_17513/*"btn_sefilter_2"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17514/*"btn_sefilter_2_on"*/;
  UISprite__set_spriteName(bonusFilterSprite, *v5, 0);
}


void FollowerSelectItemListViewManager__SetMode(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        FollowerSelectItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C32BC4(&this->fields.callbackFunc, callback);
  FollowerSelectItemListViewManager__SetMode_32625760(this, mode, v6);
}


void FollowerSelectItemListViewManager__SetMode_32576640(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C32BC4(&this->fields.callbackFunc2, callback);
  FollowerSelectItemListViewManager__SetMode_32625760(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewManager__SetMode_32625760(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ClippingObjectList; // x0
  System_Collections_Generic_List_object__o *v6; // x19
  int32_t v7; // w20
  const MethodInfo *v8; // x2
  __int64 *v9; // x8
  const MethodInfo *v10; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v15; // x23
  struct FollowerSelectItemListViewObject_o *tutorialListViewObject; // x23

  if ( (byte_4C32510 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    sub_1C32C20(&StringLiteral_9941/*"OnMoveEnd"*/);
    sub_1C32C20(&StringLiteral_11345/*"RequestInto"*/);
    byte_4C32510 = 1;
  }
  if ( mode != 3 )
  {
    this->fields.initMode = mode;
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
    ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
    if ( mode == 1 )
    {
      v9 = &StringLiteral_11345/*"RequestInto"*/;
    }
    else
    {
      if ( mode != 4 )
      {
        if ( mode == 2 )
          FollowerSelectItemListViewManager__RequestListObject_32626480(this, 3, v8);
        return;
      }
      ListViewManager__set_IsInput((ListViewManager_o *)this, 1, 0);
      ClippingObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ClippingObjectList(
                                                                          this,
                                                                          v10);
      if ( !ClippingObjectList )
        goto LABEL_31;
      size = ClippingObjectList->fields._size;
      v12 = ClippingObjectList;
      if ( size >= 1 )
      {
        this->fields.callbackCount = size;
        v13 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v12,
                   v13,
                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
          v15 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(v15, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0);
          if ( !Item )
            break;
          if ( v13 )
          {
            FollowerSelectItemListViewObject__Init_32639028((FollowerSelectItemListViewObject_o *)Item, 2, v15, 0);
          }
          else
          {
            FollowerSelectItemListViewObject__Init_32639028((FollowerSelectItemListViewObject_o *)Item, 0, v15, 0);
            ClippingObjectList = (System_Collections_Generic_List_object__o *)this->fields.tutorialListViewObject;
            if ( !ClippingObjectList )
              break;
            ClippingObjectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)ClippingObjectList,
                                                                                0);
            if ( !ClippingObjectList )
              break;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ClippingObjectList, 1, 0);
            ClippingObjectList = (System_Collections_Generic_List_object__o *)this->fields.tutorialListViewObject;
            if ( !ClippingObjectList )
              break;
            ClippingObjectList[1].klass = (System_Collections_Generic_List_object__c *)this;
            sub_1C32BC4(&ClippingObjectList[1], this);
            tutorialListViewObject = this->fields.tutorialListViewObject;
            ClippingObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewObject__GetItem(
                                                                                (FollowerSelectItemListViewObject_o *)Item,
                                                                                0);
            if ( !tutorialListViewObject )
              break;
            ((void (__fastcall *)(struct FollowerSelectItemListViewObject_o *, System_Collections_Generic_List_object__o *, const MethodInfo *))tutorialListViewObject->klass->vtable._5_SetItem.methodPtr)(
              tutorialListViewObject,
              ClippingObjectList,
              tutorialListViewObject->klass->vtable._5_SetItem.method);
            ClippingObjectList = (System_Collections_Generic_List_object__o *)this->fields.tutorialListViewObject;
            if ( !ClippingObjectList )
              break;
            FollowerSelectItemListViewObject__Init_32636708(
              (FollowerSelectItemListViewObject_o *)ClippingObjectList,
              6,
              0);
          }
          if ( ++v13 >= v12->fields._size )
            return;
        }
LABEL_31:
        sub_1C32E7C(ClippingObjectList);
      }
      this->fields.callbackCount = 1;
      v9 = &StringLiteral_9941/*"OnMoveEnd"*/;
    }
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)*v9, 0.0, 0);
    return;
  }
  ClippingObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                                      this,
                                                                      *(const MethodInfo **)&mode);
  if ( !ClippingObjectList )
    goto LABEL_31;
  v6 = ClippingObjectList;
  if ( ClippingObjectList->fields._size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      ClippingObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          v6,
                                                                          v7,
                                                                          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
      if ( !ClippingObjectList )
        break;
      FollowerSelectItemListViewObject__Init_32636708((FollowerSelectItemListViewObject_o *)ClippingObjectList, 5, 0);
      if ( ++v7 >= v6->fields._size )
        return;
    }
    goto LABEL_31;
  }
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

  if ( (byte_4C3250D & 1) == 0 )
  {
    sub_1C32C20(&FollowerSelectItemListViewObject_TypeInfo);
    byte_4C3250D = 1;
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
    sub_1C32E7C(v7);
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
  FollowerSelectItemListViewObject__Init_32636708((FollowerSelectItemListViewObject_o *)v7, v9, 0);
}


void FollowerSelectItemListViewManager__SetSortButtonImage(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  ListViewSort_o *sort; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w20
  bool IsRecommendSupportGroupType; // w20
  UILabel_o *sortKindLabel; // x21
  UnityEngine_Object_o *sortOrderSprite; // x21
  struct ListViewSort_o *v10; // x8
  __int64 v11; // x9
  int v12; // w9
  System_String_o **v13; // x8
  struct ListViewSort_o *v14; // x8
  System_String_o **v15; // x9
  System_String_o **v16; // x10
  System_String_o **v17; // x8
  System_String_o **v18; // x8

  if ( (byte_4C32520 & 1) == 0 )
  {
    sub_1C32C20(&ClassButtonControlComponent_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_17521/*"btn_sort_up"*/);
    sub_1C32C20(&StringLiteral_17619/*"btn_txt_up"*/);
    sub_1C32C20(&StringLiteral_17570/*"btn_txt_new"*/);
    sub_1C32C20(&StringLiteral_17560/*"btn_txt_down"*/);
    sub_1C32C20(&StringLiteral_17577/*"btn_txt_old"*/);
    sub_1C32C20(&StringLiteral_17518/*"btn_sort_down"*/);
    byte_4C32520 = 1;
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0, 0);
  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl )
    goto LABEL_39;
  currentCursor = classButtonControl->fields.currentCursor;
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  IsRecommendSupportGroupType = ClassButtonControlComponent__IsRecommendSupportGroupType(currentCursor, 0);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_39;
    sortKindLabel = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, IsRecommendSupportGroupType, 0);
    if ( !sortKindLabel )
      goto LABEL_39;
    UILabel__set_text(sortKindLabel, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v10 = this->fields.sort;
    if ( v10 )
    {
      v11 = 56;
      if ( IsRecommendSupportGroupType )
        v11 = 152;
      v12 = *(_DWORD *)((char *)&v10->klass + v11);
      if ( v12 == 11 || v12 == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v13 = (System_String_o **)(v10->fields.isAscendingOrder ? &StringLiteral_17577/*"btn_txt_old"*/ : &StringLiteral_17570/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v13, 0);
          v14 = this->fields.sort;
          if ( v14 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v15 = (System_String_o **)&StringLiteral_17518/*"btn_sort_down"*/;
              v16 = (System_String_o **)&StringLiteral_17521/*"btn_sort_up"*/;
LABEL_35:
              if ( v14->fields.isAscendingOrder )
                v18 = v15;
              else
                v18 = v16;
              UISprite__set_spriteName((UISprite_o *)sort, *v18, 0);
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
          v17 = (System_String_o **)(v10->fields.isAscendingOrder ? &StringLiteral_17619/*"btn_txt_up"*/ : &StringLiteral_17560/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v17, 0);
          v14 = this->fields.sort;
          if ( v14 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v15 = (System_String_o **)&StringLiteral_17521/*"btn_sort_up"*/;
              v16 = (System_String_o **)&StringLiteral_17518/*"btn_sort_down"*/;
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_39:
    sub_1C32E7C(sort);
  }
}


void FollowerSelectItemListViewManager__SortClass(
        FollowerSelectItemListViewManager_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_c *v5; // x0
  FollowerSelectItemListViewManager_c *v6; // x0
  int32_t followerClassId; // w21
  System_Collections_Generic_List_object__o *v8; // x20
  System_Collections_Generic_List_object__o *itemList; // x0
  int v10; // w27
  const MethodInfo *v11; // x1
  Il2CppObject *current; // x22
  __int64 naturalAligment; // x10
  __int64 SvtId; // x0
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *followerSelectItemOption; // x8
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C32523 & 1) == 0 )
  {
    sub_1C32C20(&ClassButtonControlComponent_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C32C20(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C32C20(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    byte_4C32523 = 1;
  }
  v5 = FollowerSelectItemListViewManager_TypeInfo;
  memset(&v22, 0, sizeof(v22));
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v5 = FollowerSelectItemListViewManager_TypeInfo;
  }
  if ( v5->static_fields->followerClassId != classPos )
  {
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    if ( !ClassButtonControlComponent__IsMixSupportGroupType(classPos, 0) )
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
      ClassButtonControlComponent__IsMixSupportGroupType(followerClassId, 0);
    }
  }
  FollowerSelectItemListViewManager__SetClassId(this, classPos, method);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_45;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    itemList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v10 = 0;
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v22.fields._current;
    if ( v22.fields._current )
    {
      naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( v22.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (FollowerSelectItemListViewItem_c *)v22.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo )
      {
        SvtId = FollowerSelectItemListViewItem__get_SvtId((FollowerSelectItemListViewItem_o *)v22.fields._current, v11);
        if ( (int)SvtId >= 1 && !LOBYTE(current[16].monitor) )
        {
          followerSelectItemOption = this->fields.followerSelectItemOption;
          if ( !followerSelectItemOption )
            sub_1C32E7C(SvtId);
          if ( !followerSelectItemOption->fields.isUseGrandBoard
            || BYTE5(current[15].klass)
            || !BYTE6(current[15].klass) )
          {
            HIDWORD(current[1].klass) = v10;
            if ( !v8 )
              sub_1C32E7C(SvtId);
            items = v8->fields._items;
            v17 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++v8->fields._version;
            if ( !items )
              sub_1C32E7C(SvtId);
            size = v8->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                current,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v19 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v19[4] = (Il2CppClass *)current;
              sub_1C32BC4(v19 + 4, current);
            }
            ++v10;
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v8;
  sub_1C32BC4(&this->fields.itemList, v8);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.sort;
  if ( !itemList )
    goto LABEL_45;
  if ( LODWORD(itemList[1].fields._items) == 11 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( (!questRestrictionInfo || !questRestrictionInfo->fields.isRestriction)
      && this->fields.isBonusFilterEnable
      && !ListViewSort__GetFilter((ListViewSort_o *)itemList, 18, 0) )
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.sort;
      if ( !itemList )
        goto LABEL_45;
      if ( !ListViewSort__GetFilter((ListViewSort_o *)itemList, 19, 0) )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.sort;
        if ( !itemList )
          goto LABEL_45;
        if ( ListViewSort__GetFilter((ListViewSort_o *)itemList, 40, 0) )
        {
          itemList = (System_Collections_Generic_List_object__o *)this->fields.sort;
          if ( itemList )
          {
            ListViewSort__GetFilter((ListViewSort_o *)itemList, 41, 0);
            goto LABEL_34;
          }
LABEL_45:
          sub_1C32E7C(itemList);
        }
      }
    }
  }
LABEL_34:
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
  FollowerSelectItemListViewManager_o *v2; // x19
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w20
  int64_t RefreshRemain; // x0
  int64_t v6; // x20
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x21
  UIWidget_o *refreshButtonSprite; // x21
  int64_t Time; // x0
  int64_t v11; // x21
  UILabel_o *refreshRemainLabel; // x22
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  Il2CppObject *v19; // x0
  Il2CppObject *Component_object; // x20
  Il2CppObject *v21; // x20
  int64_t v22; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4C32524 & 1) == 0 )
  {
    sub_1C32C20(&ClassButtonControlComponent_TypeInfo);
    sub_1C32C20(&FollowerListRequest_TypeInfo);
    sub_1C32C20(&FollowerRecommendSupportListRequest_TypeInfo);
    sub_1C32C20(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_25096/*"{0}"*/);
    this = (FollowerSelectItemListViewManager_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C32524 = 1;
  }
  classButtonControl = v2->fields.classButtonControl;
  if ( !classButtonControl )
    goto LABEL_59;
  currentCursor = classButtonControl->fields.currentCursor;
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(currentCursor, 0) )
  {
    if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
    RefreshRemain = FollowerRecommendSupportListRequest__GetRefreshRemain(0);
  }
  else
  {
    if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    RefreshRemain = FollowerListRequest__getRefreshRemain(0);
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
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshButtonSprite;
      if ( !this )
        goto LABEL_59;
      v23.fields.r = 1.0;
      v23.fields.g = 1.0;
      v23.fields.b = 1.0;
      v23.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this, v23, 0);
    }
    this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshTitleObject;
    if ( this )
    {
      v21 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)this,
              (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (FollowerSelectItemListViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v21 )
          goto LABEL_59;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v21, 1, 0);
      }
      else
      {
        this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshTitleSprite;
        if ( !this )
          goto LABEL_59;
        v24.fields.r = 1.0;
        v24.fields.g = 1.0;
        v24.fields.b = 1.0;
        v24.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v24, 0);
      }
      this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshRemainLabel;
      if ( this )
      {
        this = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshRemainLabel;
          if ( this )
          {
            UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
            return;
          }
        }
      }
    }
LABEL_59:
    sub_1C32E7C(this);
  }
  this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshButtonObject;
  if ( !this )
    goto LABEL_59;
  v7 = UnityEngine_GameObject__GetComponent_object_(
         (UnityEngine_GameObject_o *)this,
         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FollowerSelectItemListViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v7 )
      goto LABEL_59;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v7, 0, 0);
  }
  this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshTitleObject;
  if ( !this )
    goto LABEL_59;
  v8 = UnityEngine_GameObject__GetComponent_object_(
         (UnityEngine_GameObject_o *)this,
         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FollowerSelectItemListViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v8 )
      goto LABEL_59;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v8, 0, 0);
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
  UIWidget__set_color(refreshButtonSprite, *(UnityEngine_Color_o *)&this->fields.sort->fields.FILTER_DEFAULT_VALUE, 0);
  this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshTitleSprite;
  if ( !this )
    goto LABEL_59;
  UIWidget__set_color(
    (UIWidget_o *)this,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->REFRESH_DARK_COLOR,
    0);
  v2->fields.isRefreshClear = 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( v2->fields.refreshCheckTime != Time )
  {
    v11 = Time;
    this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshRemainLabel;
    if ( this )
    {
      this = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        refreshRemainLabel = v2->fields.refreshRemainLabel;
        v22 = v6;
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v22, v13, v14, v15, v16, v17, v18);
        this = (FollowerSelectItemListViewManager_o *)System_String__Format(
                                                        (System_String_o *)StringLiteral_25096/*"{0}"*/,
                                                        v19,
                                                        0);
        if ( refreshRemainLabel )
        {
          UILabel__set_text(refreshRemainLabel, (System_String_o *)this, 0);
          v2->fields.refreshCheckTime = v11;
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
  struct FollowerSelectItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  FollowerSelectItemListViewManager_o *v10; // x0
  FollowerSelectItemListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C324F7 & 1) == 0 )
  {
    sub_1C32C20(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    byte_4C324F7 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (FollowerSelectItemListViewManager_CallbackFunc_c *)v7->klass != FollowerSelectItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C6CE78(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1C3313C(v7);
  FollowerSelectItemListViewManager__remove_callbackFunc(v10, v11, v12);
}


void FollowerSelectItemListViewManager__add_callbackFunc2(
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

  if ( (byte_4C324F9 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    byte_4C324F9 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C6CE78(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1C3313C(v7);
  FollowerSelectItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_FollowerSelectItemListViewObject__o *FollowerSelectItemListViewManager__get_ClippingObjectList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  Il2CppObject *v8; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v10; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C324FE & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
    sub_1C32C20(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C324FE = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C32E7C(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v8 = Component_object;
      if ( !Component_object )
        sub_1C32E7C(0);
      Item = (ListViewItem_o *)FollowerSelectItemListViewObject__GetItem(
                                 (FollowerSelectItemListViewObject_o *)Component_object,
                                 0);
      if ( !Item )
        sub_1C32E7C(0);
      if ( Item->fields.isTermination )
      {
        v10 = ListViewManager__ClippingItem_43718444((ListViewManager_o *)this, Item, 0);
        if ( v10 )
        {
          if ( !v3 )
            sub_1C32E7C(v10);
          items = v3->fields._items;
          v12 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C32E7C(v10);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v8,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C32E7C(Item);
        items = v3->fields._items;
        v12 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C32E7C(Item);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v8;
        sub_1C32BC4(v14 + 4, v8);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FollowerSelectItemListViewObject__o *)v3;
}


System_Collections_Generic_List_FollowerSelectItemListViewObject__o *FollowerSelectItemListViewManager__get_ObjectList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  Il2CppObject *v8; // x1
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  Il2CppClass **v12; // x0
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C324FD & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
    sub_1C32C20(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C324FD = 1;
  }
  memset(&v15, 0, sizeof(v15));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v15 = v14;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v15.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C32E7C(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v8 = Component_object;
      if ( !v3 )
        sub_1C32E7C(Component_object);
      items = v3->fields._items;
      v10 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C32E7C(Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
      }
      else
      {
        v12 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v12[4] = (Il2CppClass *)v8;
        sub_1C32BC4(v12 + 4, v8);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FollowerSelectItemListViewObject__o *)v3;
}


void FollowerSelectItemListViewManager__remove_callbackFunc(
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

  if ( (byte_4C324F8 & 1) == 0 )
  {
    sub_1C32C20(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    byte_4C324F8 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (FollowerSelectItemListViewManager_CallbackFunc_c *)v7->klass != FollowerSelectItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C6CE78(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1C3313C(v7);
  FollowerSelectItemListViewManager__add_callbackFunc2(v10, v11, v12);
}


void FollowerSelectItemListViewManager__remove_callbackFunc2(
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

  if ( (byte_4C324FA & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    byte_4C324FA = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C6CE78(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1C3313C(v7);
  FollowerSelectItemListViewManager__DeleteContinueData(v10);
}


void FollowerSelectItemListViewManager_CallbackFunc___ctor(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6F51C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6F4BC;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *FollowerSelectItemListViewManager_CallbackFunc__BeginInvoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        int32_t param,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v7; // x7
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  _QWORD v24[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v25; // [xsp+10h] [xbp-60h]
  int32_t v26; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v27; // [xsp+38h] [xbp-38h] BYREF
  int32_t v28; // [xsp+3Ch] [xbp-34h] BYREF

  v27 = result;
  v28 = kind;
  v26 = param;
  if ( (byte_4C3252E & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&FollowerSelectItemListViewManager_ResultKind_TypeInfo);
    byte_4C3252E = 1;
  }
  v25 = 0u;
  v24[0] = j_il2cpp_value_box_0(
             FollowerSelectItemListViewManager_ResultKind_TypeInfo,
             &v28,
             *(_QWORD *)&result,
             *(_QWORD *)&param,
             callback,
             object,
             method,
             v7);
  v24[1] = j_il2cpp_value_box_0(int_TypeInfo, &v27, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)&v25 = j_il2cpp_value_box_0(int_TypeInfo, &v26, v17, v18, v19, v20, v21, v22);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v24, callback, object);
}


void FollowerSelectItemListViewManager_CallbackFunc__EndInvoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
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

  if ( (byte_4C3252F & 1) == 0 )
  {
    sub_1C32C20(&FollowerSelectItemListViewManager___c_TypeInfo);
    byte_4C3252F = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(FollowerSelectItemListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FollowerSelectItemListViewManager___c_TypeInfo->static_fields->__9 = (struct FollowerSelectItemListViewManager___c_o *)v1;
  sub_1C32BC4(FollowerSelectItemListViewManager___c_TypeInfo->static_fields, v1);
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

  if ( (byte_4C32530 & 1) == 0 )
  {
    sub_1C32C20(&ListViewSort_TypeInfo);
    sub_1C32C20(&StringLiteral_6782/*"FollowerSelectEventQuest"*/);
    sub_1C32C20(&StringLiteral_6783/*"FollowerSelectMainQuest"*/);
    byte_4C32530 = 1;
  }
  if ( questType )
  {
    if ( questType != 1 )
    {
      v8 = sub_1C32C34(&System_NotImplementedException_TypeInfo);
      v9 = (System_NotImplementedException_o *)sub_1C32E6C(v8);
      System_NotImplementedException___ctor(v9, 0);
      v10 = sub_1C32C34(&Method_FollowerSelectItemListViewManager___c___cctor_b__136_0__);
      sub_1C32D48(v9, v10);
    }
    v4 = &StringLiteral_6782/*"FollowerSelectEventQuest"*/;
  }
  else
  {
    v4 = &StringLiteral_6783/*"FollowerSelectMainQuest"*/;
  }
  v5 = (System_String_o *)*v4;
  v6 = (ListViewSort_o *)sub_1C32E6C(ListViewSort_TypeInfo);
  ListViewSort___ctor_43736460(v6, v5, 11, 0, 0);
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
    sub_1C32E7C(this);
  return FollowerSelectItemListViewItem__get_GrandFollowerClassId(x, 0) == this->fields.followerClassId;
}