void FollowerSelectItemListViewManager___cctor(const MethodInfo *method)
{
  FollowerSelectItemListViewManager___c_c *v1; // x0
  Il2CppObject *v2; // x19
  System_Func_T__TResult__o *v3; // x20
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4C21E5D & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C2D490(&System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo);
    sub_1C2D490(&Method_FollowerSelectItemListViewManager___c___cctor_b__136_0__);
    sub_1C2D490(&FollowerSelectItemListViewManager___c_TypeInfo);
    byte_4C21E5D = 1;
  }
  v1 = FollowerSelectItemListViewManager___c_TypeInfo;
  if ( !FollowerSelectItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager___c_TypeInfo);
    v1 = FollowerSelectItemListViewManager___c_TypeInfo;
  }
  v2 = (Il2CppObject *)v1->static_fields->__9;
  v3 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo);
  System_Func_Int32Enum__object____ctor(v3, v2, Method_FollowerSelectItemListViewManager___c___cctor_b__136_0__, 0);
  FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT = (struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)v3;
  sub_1C2D434(FollowerSelectItemListViewManager_TypeInfo->static_fields);
  static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->lastSelectedQuestId = -1;
  static_fields->REFRESH_DARK_COLOR = (struct UnityEngine_Color_o)xmmword_C09B30;
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

  if ( (byte_4C21E31 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C2D490(&StringLiteral_17438/*"btn_bg_12"*/);
    sub_1C2D490(&StringLiteral_17509/*"btn_sefilter_2"*/);
    sub_1C2D490(&StringLiteral_17658/*"buttontxt_formation_19"*/);
    byte_4C21E31 = 1;
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
  AtlasManager__SetEventSprite(changeSkillButtonSprite, (System_String_o *)StringLiteral_17658/*"buttontxt_formation_19"*/, 0);
  AtlasManager__SetEventSprite(this->fields.bonusFilterSprite, (System_String_o *)StringLiteral_17509/*"btn_sefilter_2"*/, 0);
  changeSkillButton = (UnityEngine_Component_o *)this->fields.bonusFilterSprite;
  if ( !changeSkillButton
    || (changeSkillButton = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))changeSkillButton->klass[2]._1.parent)(
                                                         changeSkillButton,
                                                         changeSkillButton->klass[2]._1.generic_class),
        !sortKindButton)
    || (Component_object = UnityEngine_Component__GetComponent_object_(
                             sortKindButton,
                             (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        changeSkillButton = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(
                                                         (UISprite_o *)Component_object,
                                                         (System_String_o *)StringLiteral_17438/*"btn_bg_12"*/,
                                                         0),
        !Component_object) )
  {
LABEL_11:
    sub_1C2D6EC(changeSkillButton, method);
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
    sub_1C2D6EC(classButtonControl, *(_QWORD *)&classPos);
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

  if ( (byte_4C21E4F & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21E4F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v6);
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
  __int64 v20; // x1
  FollowerSelectItemListViewManager_c *v21; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct ListViewSort_o **p_sort; // x20
  ClassButtonControlComponent_o *classButtonControl; // x22
  ClassButtonControlComponent_CallbackFunc_o *v25; // x27
  const MethodInfo *v26; // x4
  int32_t InitialDisplayClass; // w22
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
  System_Int32_array *OngoingQuestTargetEventIds; // x22
  EventUpValSetupInfo_o *v30; // x27
  __int64 v31; // x2
  __int64 v32; // x8
  __int64 v33; // x27
  unsigned __int64 v34; // x19
  int32_t v35; // w0
  ClassButtonControlComponent_o *v36; // x20
  const MethodInfo *v37; // x2
  QuestPhaseEntity_o *v38; // x20
  bool IsNoneSupportFriendPoint; // w22
  QuestPhaseEntity_o *v40; // x29
  bool IsUseGrandBoard; // w23
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v42; // x20
  long double v43; // q0
  __int64 v44; // x0
  __int64 v45; // x0
  Il2CppObject *MasterData_object; // x26
  FollowerInfo_array *QuestFollowerList; // x25
  int v48; // w19
  BalanceConfig_c *v49; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  bool IsQuestClear_40102980; // w20
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
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  Il2CppClass **v73; // x0
  FollowerSelectItemListViewManager_c *v74; // x0
  int32_t followerClassId; // w26
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v76; // x22
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x19
  FollowerSelectItemListViewItem_o *v78; // x20
  __int64 v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  __int64 v82; // x8
  __int64 v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  __int64 v86; // x8
  __int64 v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  __int64 v90; // x8
  int v91; // w19
  bool v92; // w8
  FollowerSelectItemListViewManager_o *v93; // x27
  Il2CppClass *klass; // x24
  int namespaze; // w8
  unsigned int v96; // w26
  void **v97; // x8
  Il2CppObject *v98; // x0
  Il2CppObject *v99; // x21
  __int64 v100; // x20
  BalanceConfig_c *v101; // x0
  struct BalanceConfig_StaticFields *v102; // x9
  int32_t FixEventSupportDeckNum; // w21
  int32_t FixMainSupportDeckNum; // w22
  int32_t deckPriority; // w21
  unsigned __int64 v106; // x23
  int32_t v107; // w25
  System_Collections_Generic_Dictionary_int__int__o *v108; // x24
  FollowerInfo_o *v109; // x26
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v110; // x28
  int32_t v111; // w29
  FollowerSelectItemListViewItem_o *v112; // x22
  __int64 v113; // x8
  _QWORD *v114; // x9
  __int64 v115; // x10
  __int64 v116; // x8
  int32_t i; // w21
  struct BalanceConfig_StaticFields *v118; // x8
  int32_t v119; // w22
  int32_t v120; // w25
  int32_t v121; // w22
  unsigned __int64 v122; // x23
  int32_t v123; // w25
  FollowerInfo_o *v124; // x28
  int v125; // w24
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v126; // x29
  int32_t v127; // w19
  FollowerSelectItemListViewItem_o *v128; // x26
  __int64 v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  __int64 v132; // x8
  Il2CppClass *v133; // x20
  const char *v134; // x8
  int v135; // w22
  unsigned __int64 v136; // x23
  FollowerInfo_o *v137; // x24
  Il2CppObject *v138; // x0
  __int64 v139; // x26
  BalanceConfig_c *v140; // x0
  struct BalanceConfig_StaticFields *v141; // x9
  int32_t v142; // w21
  int32_t v143; // w25
  int32_t v144; // w25
  unsigned __int64 v145; // x20
  int32_t v146; // w21
  int32_t v147; // w27
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v148; // x29
  System_Collections_Generic_Dictionary_int__int__o *v149; // x23
  FollowerSelectItemListViewItem_o *v150; // x28
  __int64 v151; // x8
  _QWORD *v152; // x9
  __int64 v153; // x10
  __int64 v154; // x8
  int32_t v155; // w28
  BalanceConfig_c *v156; // x0
  struct BalanceConfig_StaticFields *v157; // x8
  int32_t v158; // w21
  int32_t v159; // w25
  unsigned __int64 v160; // x27
  int32_t v161; // w21
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v162; // x20
  int v163; // w19
  System_Collections_Generic_Dictionary_int__int__o *v164; // x22
  FollowerSelectItemListViewItem_o *v165; // x29
  __int64 v166; // x8
  _QWORD *v167; // x9
  __int64 v168; // x10
  __int64 v169; // x8
  struct ServantLeaderInfo_array *userSvtGrandHash; // x19
  int v171; // w8
  unsigned int v172; // w23
  ServantLeaderInfo_o *v173; // x9
  int32_t v174; // w21
  System_Collections_Generic_Dictionary_int__int__o *v175; // x22
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *followerSelectItemOption; // x20
  int32_t grandGraphId; // w24
  FollowerSelectItemListViewItem_o *v178; // x26
  __int64 v179; // x8
  _QWORD *v180; // x9
  __int64 v181; // x10
  __int64 v182; // x8
  Il2CppClass *v183; // x19
  bool v184; // w20
  unsigned __int64 namespaze_low; // x8
  unsigned __int64 v186; // x24
  Il2CppType *p_byval_arg; // x27
  __int64 v188; // x9
  __int64 v189; // x9
  __int64 v190; // x22
  __int64 v191; // x8
  __int64 v192; // x8
  __int64 v193; // x8
  __int64 v194; // x23
  __int64 v195; // x25
  int32_t v196; // w23
  FollowerInfo_o *v197; // x26
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v198; // x25
  System_Collections_Generic_Dictionary_int__int__o *v199; // x28
  FollowerSelectItemListViewItem_o *v200; // x22
  __int64 v201; // x8
  _QWORD *v202; // x9
  __int64 v203; // x10
  __int64 v204; // x8
  const MethodInfo *v205; // x2
  FollowerSelectItemListViewManager_c *v206; // x0
  const MethodInfo *v207; // x2
  const MethodInfo *v208; // x1
  struct UIScrollView_o *scrollView; // x8
  __int64 v210; // x0
  int32_t supportDeckId; // [xsp+0h] [xbp-170h]
  int32_t supportDeckIda; // [xsp+0h] [xbp-170h]
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary; // [xsp+10h] [xbp-160h]
  const MethodInfo *v214; // [xsp+38h] [xbp-138h]
  ClassBoardClassMaster_o *Master_object; // [xsp+48h] [xbp-128h]
  QuestPhaseEntity_o *v216; // [xsp+50h] [xbp-120h]
  UserFollowMaster_o *v217; // [xsp+58h] [xbp-118h]
  UserFollowMaster_o *v218; // [xsp+58h] [xbp-118h]
  bool isReleasedClassBoard; // [xsp+60h] [xbp-110h]
  bool v220[8]; // [xsp+60h] [xbp-110h]
  bool v221; // [xsp+6Ch] [xbp-104h]
  struct System_Collections_Generic_List_ListViewItem__o **p_recommendItemList; // [xsp+70h] [xbp-100h]
  unsigned int v223; // [xsp+7Ch] [xbp-F4h]
  int32_t phaseCnt; // [xsp+80h] [xbp-F0h]
  int32_t questIda; // [xsp+84h] [xbp-ECh]
  DataMasterBase_TMaster__TEntity__PKType__o *v226; // [xsp+88h] [xbp-E8h]
  __int64 v227; // [xsp+88h] [xbp-E8h]
  bool HasFlag_42234640; // [xsp+88h] [xbp-E8h]
  struct System_Collections_Generic_List_ListViewItem__o **p_originalItemList; // [xsp+90h] [xbp-E0h]
  bool IsRecommendedFollower; // [xsp+98h] [xbp-D8h]
  unsigned __int64 v231; // [xsp+98h] [xbp-D8h]
  int32_t pos; // [xsp+A0h] [xbp-D0h]
  Il2CppClass *posa; // [xsp+A0h] [xbp-D0h]
  int posb; // [xsp+A0h] [xbp-D0h]
  _BOOL4 IsMyServantOrNpcRestriction; // [xsp+A8h] [xbp-C8h]
  int32_t index; // [xsp+B0h] [xbp-C0h]
  unsigned int indexa; // [xsp+B0h] [xbp-C0h]
  FollowerInfo_o *indexb; // [xsp+B0h] [xbp-C0h]
  bool IsMyServantOrNpcRestriction_43206784; // [xsp+B8h] [xbp-B8h]
  FollowerInfo_o **v240; // [xsp+B8h] [xbp-B8h]
  __int64 v241; // [xsp+B8h] [xbp-B8h]
  struct System_Collections_Generic_List_ListViewItem__o **p_mixItemList; // [xsp+C0h] [xbp-B0h]
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o **p_followerSelectItemOption; // [xsp+C8h] [xbp-A8h]
  UserFollowMaster_o *v244; // [xsp+C8h] [xbp-A8h]
  FollowerSelectItemListViewManager_o *v245; // [xsp+D0h] [xbp-A0h]
  Il2CppObject *v246; // [xsp+D8h] [xbp-98h] BYREF
  Il2CppObject *v247; // [xsp+E0h] [xbp-90h] BYREF
  Il2CppObject *v248; // [xsp+E8h] [xbp-88h] BYREF
  UserClassBoardSquareEntity_o *v249; // [xsp+F0h] [xbp-80h] BYREF
  bool isWhole; // [xsp+FCh] [xbp-74h] BYREF
  Il2CppObject *v251; // [xsp+100h] [xbp-70h] BYREF
  NpcFollowerEntity_o *entity; // [xsp+108h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v253; // 0:x0.16

  if ( (byte_4C21E33 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_1C2D490(&ClassBoardInfo_TypeInfo);
    sub_1C2D490(&ClassButtonControlComponent_TypeInfo);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserFollowerMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__);
    sub_1C2D490(&Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&EventUpValSetupInfo_TypeInfo);
    sub_1C2D490(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C2D490(&Method_FollowerSelectItemListViewManager_OnChangeClass__);
    sub_1C2D490(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C2D490(&FollowerSelectItemListViewManager_FollowerSelectItemOption_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_ClassBoardInfo__TypeInfo);
    sub_1C2D490(&System_Math_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&ServantLeaderInfo___TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&StringLiteral_3192/*"BonusFilterEventId"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C21E33 = 1;
  }
  v251 = 0;
  entity = 0;
  isWhole = 0;
  v248 = 0;
  v249 = 0;
  v246 = 0;
  v247 = 0;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C2D434(&this->fields.questRestrictionInfo);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.mixItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v15;
  p_mixItemList = &this->fields.mixItemList;
  sub_1C2D434(&this->fields.mixItemList);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.originalItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v16;
  p_originalItemList = &this->fields.originalItemList;
  sub_1C2D434(&this->fields.originalItemList);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.recommendItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v17;
  p_recommendItemList = &this->fields.recommendItemList;
  sub_1C2D434(&this->fields.recommendItemList);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.grandItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v18;
  sub_1C2D434(&this->fields.grandItemList);
  ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0);
  v21 = FollowerSelectItemListViewManager_TypeInfo;
  v223 = ReturnTypeByQuestId;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v21 = FollowerSelectItemListViewManager_TypeInfo;
  }
  phaseCnt = questPhase;
  questIda = questId;
  LIST_VIEW_SORT = v21->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT )
    goto LABEL_343;
  this->fields.sort = (struct ListViewSort_o *)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))LIST_VIEW_SORT->fields.invoke_impl)(
                                                 LIST_VIEW_SORT->fields.method_code,
                                                 v223,
                                                 LIST_VIEW_SORT->fields.method);
  p_sort = &this->fields.sort;
  sub_1C2D434(&this->fields.sort);
  classButtonControl = this->fields.classButtonControl;
  v25 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C2D6DC(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  v245 = this;
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
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                 (EventQuestMaster_o *)ReturnTypeByQuestId,
                                 questIda,
                                 questPhase,
                                 0,
                                 0);
  v30 = (EventUpValSetupInfo_o *)sub_1C2D6DC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_41515380(v30, OngoingQuestTargetEventIds, 0, questIda, questPhase, 0);
  this->fields.setupInfo = v30;
  ReturnTypeByQuestId = sub_1C2D434(&this->fields.setupInfo);
  if ( !OngoingQuestTargetEventIds )
    goto LABEL_343;
  if ( OngoingQuestTargetEventIds->max_length )
  {
    ReturnTypeByQuestId = (__int64)UnityEngine_PlayerPrefs__GetString_71122516((System_String_o *)StringLiteral_3192/*"BonusFilterEventId"*/, 0);
    if ( !ReturnTypeByQuestId )
      goto LABEL_343;
    if ( *(int *)(ReturnTypeByQuestId + 16) < 1 )
      goto LABEL_25;
    ReturnTypeByQuestId = (__int64)System_String__Split((System_String_o *)ReturnTypeByQuestId, 0x2Cu, 0, 0);
    if ( !ReturnTypeByQuestId )
      goto LABEL_343;
    v32 = *(_QWORD *)(ReturnTypeByQuestId + 24);
    v33 = ReturnTypeByQuestId;
    if ( (int)v32 < 1 )
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
      v34 = 0;
      while ( 1 )
      {
        if ( v34 >= (unsigned int)v32 )
          goto LABEL_344;
        v35 = System_Int32__Parse(*(System_String_o **)(v33 + 32 + 8 * v34), 0);
        ReturnTypeByQuestId = System_Linq_Enumerable__Contains_int_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)OngoingQuestTargetEventIds,
                                v35,
                                (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (ReturnTypeByQuestId & 1) != 0 )
          break;
        LODWORD(v32) = *(_DWORD *)(v33 + 24);
        if ( (__int64)++v34 >= (int)v32 )
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
  v36 = this->fields.classButtonControl;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  if ( !v36 )
    goto LABEL_343;
  ClassButtonControlComponent__setCursor(
    v36,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, OngoingQuestTargetEventIds, v37);
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
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId
    || (ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0 )
  {
LABEL_343:
    sub_1C2D6EC(ReturnTypeByQuestId, v20);
  }
  v38 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)ReturnTypeByQuestId, questIda, questPhase, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !v38 )
    goto LABEL_338;
  IsNoneSupportFriendPoint = QuestPhaseEntity__IsNoneSupportFriendPoint(v38, 0);
  v40 = v38;
  IsUseGrandBoard = QuestPhaseEntity__IsUseGrandBoard(v38, 0);
  v42 = (FollowerSelectItemListViewManager_FollowerSelectItemOption_o *)sub_1C2D6DC(FollowerSelectItemListViewManager_FollowerSelectItemOption_TypeInfo);
  FollowerSelectItemListViewManager_FollowerSelectItemOption___ctor(v42, 0);
  if ( !v42 )
    goto LABEL_343;
  v42->fields.friendPointUpVal = friendPointUpVal;
  v42->fields.friendPointUpMaxVal = friendPointUpMaxVal;
  v42->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  v221 = IsUseGrandBoard;
  sub_1C2D434(&v42->fields.friendPointCampaignEntityList);
  v42->fields.isBonusFilterEnable = this->fields.isBonusFilterEnable;
  v42->fields.isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
  v42->fields.isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
  v42->fields.setupInfo = this->fields.setupInfo;
  sub_1C2D434(&v42->fields.setupInfo);
  v42->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C2D434(&v42->fields.questRestrictionInfo);
  v42->fields.isNoneSupportFriendPoint = IsNoneSupportFriendPoint;
  v42->fields.isUseGrandBoard = IsUseGrandBoard;
  this->fields.followerSelectItemOption = v42;
  p_followerSelectItemOption = &this->fields.followerSelectItemOption;
  sub_1C2D434(&this->fields.followerSelectItemOption);
  v216 = v40;
  v44 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v44 + 309) & 1) == 0 )
    v44 = sub_1C7DBA4(v43);
  v45 = *(_QWORD *)(*(_QWORD *)(v44 + 192) + 16LL);
  if ( (*(_BYTE *)(v45 + 309) & 1) == 0 )
    v45 = sub_1C7DBA4(v43);
  ReturnTypeByQuestId = **(_QWORD **)(v45 + 184);
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ReturnTypeByQuestId,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)ReturnTypeByQuestId,
                        questIda,
                        phaseCnt,
                        0);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  v48 = *(_DWORD *)(ReturnTypeByQuestId + 56);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  pos = *(_DWORD *)(ReturnTypeByQuestId + 60);
  if ( v48 < 1 )
  {
    IsMyServantOrNpcRestriction_43206784 = 0;
    goto LABEL_57;
  }
  if ( questRestrictionInfo )
  {
    IsMyServantOrNpcRestriction_43206784 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43206784(
                                             questRestrictionInfo,
                                             pos,
                                             0);
LABEL_57:
    IsMyServantOrNpcRestriction = 0;
    if ( questRestrictionInfo && v48 <= 0 )
      IsMyServantOrNpcRestriction = QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0);
    goto LABEL_61;
  }
  IsMyServantOrNpcRestriction_43206784 = 0;
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
  IsQuestClear_40102980 = CondType__IsQuestClear_40102980(ClassBoardReleaseQuestId, -1, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v226 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
  if ( !QuestFollowerList )
    goto LABEL_343;
  max_length = QuestFollowerList->max_length;
  v53 = pos;
  if ( max_length >= 1 )
  {
    v54 = 0;
    index = 0;
    isReleasedClassBoard = IsQuestClear_40102980;
    v217 = (UserFollowMaster_o *)MasterData_object;
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
      ReturnTypeByQuestId = QuestRestrictionInfo__IsRestriction_43187812(
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
      if ( IsMyServantOrNpcRestriction_43206784 )
      {
        ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality_43209828(
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
      v60 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ClassBoardInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v60,
        (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
      if ( !v226 )
        goto LABEL_343;
      ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetEntity(
                              v226,
                              &v251,
                              v55->fields.npcFollowerSvtId,
                              (const MethodInfo_338A340 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
      if ( (ReturnTypeByQuestId & 1) != 0 )
      {
        if ( !v251 )
          goto LABEL_343;
        ReturnTypeByQuestId = NpcServantFollowerEntity__IsNotClassBoard((int32_t)v251[7].monitor, 0);
        if ( (ReturnTypeByQuestId & 1) != 0
          || (ReturnTypeByQuestId = QuestPhaseEntity__IsNotClassBoard(v216, 0), (ReturnTypeByQuestId & 1) != 0) )
        {
          v61 = 1;
          goto LABEL_114;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
        v62 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
        v64 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        v63 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
        v65 = (DataMasterBase_TMaster__TEntity__PKType__o *)v62;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v253.fields.currentCryptoKey = v64;
        *(_QWORD *)&v253.fields.fakeValue = v63;
        ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v253, 0);
        if ( !v65 )
          goto LABEL_343;
        ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         v65,
                                         ReturnTypeByQuestId,
                                         (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !ReturnTypeByQuestId || !Master_object )
          goto LABEL_343;
        ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(
                             Master_object,
                             *(_DWORD *)(ReturnTypeByQuestId + 80),
                             0);
        v67 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C211E1 )
        {
          sub_1C2D490(&NetworkManager_TypeInfo);
          byte_4C211E1 = 1;
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
                                &v249,
                                *(_QWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 64LL),
                                ClassBoardBaseId,
                                0);
        if ( (ReturnTypeByQuestId & 1) != 0 )
        {
          v68 = (ClassBoardInfo_o *)sub_1C2D6DC(ClassBoardInfo_TypeInfo);
          ClassBoardInfo___ctor(v68, 0);
          if ( !v68 )
            goto LABEL_343;
          v68->fields.classBoardBaseId = ClassBoardBaseId;
          if ( !v249 )
            goto LABEL_343;
          ReturnTypeByQuestId = (__int64)v249->fields.classBoardSquareIds;
          if ( !ReturnTypeByQuestId )
            goto LABEL_343;
          v69 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0);
          v68->fields.squareIds = (struct System_Int32_array *)sub_1C2D5CC(v69, int___TypeInfo);
          sub_1C2D5CC(v69, int___TypeInfo);
          sub_1C2D434(&v68->fields.squareIds);
          v68->fields.releasedClassIds = ClassBoardClassMaster__GetOpenClassIdArrayFromBaseId(
                                           Master_object,
                                           ClassBoardBaseId,
                                           0);
          ReturnTypeByQuestId = sub_1C2D434(&v68->fields.releasedClassIds);
          if ( !v60 )
            goto LABEL_343;
          items = v60->fields._items;
          v71 = Method_System_Collections_Generic_List_ClassBoardInfo__Add__;
          ++v60->fields._version;
          if ( !items )
            goto LABEL_343;
          size = v60->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v60,
              (Il2CppObject *)v68,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
          }
          else
          {
            v73 = &items->obj.klass + size;
            v60->fields._size = size + 1;
            v73[4] = (Il2CppClass *)v68;
            sub_1C2D434(v73 + 4);
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
      v55->fields.userClassBoardInfo = (struct ClassBoardInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                                        v60,
                                                                        (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
      sub_1C2D434(&v55->fields.userClassBoardInfo);
      v74 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v74 = FollowerSelectItemListViewManager_TypeInfo;
      }
      followerClassId = v74->static_fields->followerClassId;
      v76 = *p_followerSelectItemOption;
      if ( (v61 & 1) != 0 )
        classBoardMaxDictionary = 0;
      else
        classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
      v78 = (FollowerSelectItemListViewItem_o *)sub_1C2D6DC(FollowerSelectItemListViewItem_TypeInfo);
      FollowerSelectItemListViewItem___ctor(
        v78,
        index,
        0,
        v55,
        followerClassId,
        IsRecommendedFollower,
        v76,
        0,
        0,
        0,
        classBoardMaxDictionary,
        isReleasedClassBoard,
        0,
        0,
        0,
        v214);
      ReturnTypeByQuestId = (__int64)*p_mixItemList;
      if ( !*p_mixItemList )
        goto LABEL_343;
      v79 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      MasterData_object = (Il2CppObject *)v217;
      v53 = pos;
      v80 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v79 )
        goto LABEL_343;
      v81 = *(int *)(ReturnTypeByQuestId + 24);
      if ( (unsigned int)v81 >= *(_DWORD *)(v79 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v78,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
      }
      else
      {
        v82 = v79 + 8 * v81;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v81 + 1;
        *(_QWORD *)(v82 + 32) = v78;
        sub_1C2D434(v82 + 32);
      }
      ReturnTypeByQuestId = (__int64)*p_originalItemList;
      if ( !*p_originalItemList )
        goto LABEL_343;
      v83 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      v84 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v83 )
        goto LABEL_343;
      v85 = *(int *)(ReturnTypeByQuestId + 24);
      if ( (unsigned int)v85 >= *(_DWORD *)(v83 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v78,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
      }
      else
      {
        v86 = v83 + 8 * v85;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v85 + 1;
        *(_QWORD *)(v86 + 32) = v78;
        sub_1C2D434(v86 + 32);
      }
      ReturnTypeByQuestId = (__int64)*p_recommendItemList;
      if ( !*p_recommendItemList )
        goto LABEL_343;
      v87 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      v88 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v87 )
        goto LABEL_343;
      v89 = *(int *)(ReturnTypeByQuestId + 24);
      if ( (unsigned int)v89 >= *(_DWORD *)(v87 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v78,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
      }
      else
      {
        v90 = v87 + 8 * v89;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v89 + 1;
        *(_QWORD *)(v90 + 32) = v78;
        ReturnTypeByQuestId = sub_1C2D434(v90 + 32);
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
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  v91 = *(_DWORD *)(ReturnTypeByQuestId + 56);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  if ( v91 >= 1 )
    v92 = !QuestRestrictionInfo__IsSelectableNormalSupport(
             questRestrictionInfo,
             *(_DWORD *)(ReturnTypeByQuestId + 60),
             0);
  else
LABEL_146:
    v92 = 0;
  this->fields.isRefreshBtnHide = v92;
  if ( !v92 && !v216->fields.isNpcOnly )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_343;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v248,
                            (const MethodInfo_338A420 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    v93 = this;
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v248 )
        goto LABEL_343;
      klass = v248[1].klass;
      if ( klass )
      {
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
        {
          v96 = 0;
          posa = v248[1].klass;
          do
          {
            if ( v96 >= namespaze )
              goto LABEL_344;
            v97 = &klass->_1.image + (int)v96;
            ReturnTypeByQuestId = (__int64)v97[4];
            v240 = (FollowerInfo_o **)(v97 + 4);
            if ( !ReturnTypeByQuestId )
              goto LABEL_343;
            FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0);
            if ( v96 >= LODWORD(klass->_1.namespaze) )
              goto LABEL_344;
            if ( !*v240 )
              goto LABEL_343;
            ReturnTypeByQuestId = (__int64)(*v240)->fields.mainSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_343;
            v227 = *(_QWORD *)(ReturnTypeByQuestId + 24);
            v98 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0);
            if ( v98 )
            {
              v99 = v98;
              v100 = sub_1C2D5CC(v98, int___TypeInfo);
              if ( !v100 )
              {
                sub_1C2D9AC(v99);
LABEL_345:
                sub_1C2D9AC(v99);
LABEL_346:
                v210 = sub_1C2D710();
                sub_1C2D5B8(v210, 0);
              }
            }
            else
            {
              v100 = 0;
            }
            v101 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v101 = BalanceConfig_TypeInfo;
            }
            v102 = v101->static_fields;
            FixMainSupportDeckNum = v102->FixMainSupportDeckNum;
            FixEventSupportDeckNum = v102->FixEventSupportDeckNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            ReturnTypeByQuestId = System_Math__Max_64982040(FixMainSupportDeckNum, FixEventSupportDeckNum, 0);
            indexa = v96;
            if ( (int)v227 >= 1 )
            {
              deckPriority = ReturnTypeByQuestId;
              v106 = 0;
              do
              {
                if ( !*p_originalItemList )
                  goto LABEL_343;
                if ( v96 >= LODWORD(klass->_1.namespaze) )
                  goto LABEL_344;
                if ( !v100 )
                  goto LABEL_343;
                if ( v106 >= *(unsigned int *)(v100 + 24) )
                  goto LABEL_344;
                v107 = (*p_originalItemList)->fields._size;
                v108 = v93->fields.classBoardMaxDictionary;
                v109 = *v240;
                v110 = *p_followerSelectItemOption;
                v111 = *(_DWORD *)(v100 + 32 + 4 * v106);
                v112 = (FollowerSelectItemListViewItem_o *)sub_1C2D6DC(FollowerSelectItemListViewItem_TypeInfo);
                FollowerSelectItemListViewItem___ctor(
                  v112,
                  v107,
                  0,
                  v109,
                  0,
                  0,
                  v110,
                  1,
                  v111,
                  deckPriority,
                  v108,
                  1,
                  0,
                  0,
                  0,
                  v214);
                ReturnTypeByQuestId = (__int64)v93->fields.originalItemList;
                if ( !ReturnTypeByQuestId )
                  goto LABEL_343;
                v113 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v114 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v113 )
                  goto LABEL_343;
                v115 = *(int *)(ReturnTypeByQuestId + 24);
                klass = posa;
                v96 = indexa;
                if ( (unsigned int)v115 >= *(_DWORD *)(v113 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    (Il2CppObject *)v112,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
                }
                else
                {
                  v116 = v113 + 8 * v115;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v115 + 1;
                  *(_QWORD *)(v116 + 32) = v112;
                  ReturnTypeByQuestId = sub_1C2D434(v116 + 32);
                }
                ++v106;
                --deckPriority;
              }
              while ( (unsigned int)v227 != v106 );
            }
            for ( i = 0; ; ++i )
            {
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              }
              v118 = *(struct BalanceConfig_StaticFields **)(ReturnTypeByQuestId + 184);
              if ( i >= v118->SupportDeckMemberMax )
                break;
              if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
              {
                j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId);
                v118 = BalanceConfig_TypeInfo->static_fields;
              }
              v120 = v118->FixMainSupportDeckNum;
              v119 = v118->FixEventSupportDeckNum;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              ReturnTypeByQuestId = System_Math__Max_64982040(v120, v119, 0);
              if ( (int)v227 >= 1 )
              {
                v121 = ReturnTypeByQuestId;
                v122 = 0;
                while ( *p_mixItemList )
                {
                  ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                  v123 = (*p_mixItemList)->fields._size;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( v96 >= LODWORD(klass->_1.namespaze) )
                    goto LABEL_344;
                  if ( !v100 )
                    goto LABEL_343;
                  if ( v122 >= *(unsigned int *)(v100 + 24) )
                    goto LABEL_344;
                  v124 = *v240;
                  v125 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 180LL);
                  v126 = *p_followerSelectItemOption;
                  v127 = *(_DWORD *)(v100 + 32 + 4 * v122);
                  classBoardMaxNumDictionary = v245->fields.classBoardMaxDictionary;
                  v93 = v245;
                  v128 = (FollowerSelectItemListViewItem_o *)sub_1C2D6DC(FollowerSelectItemListViewItem_TypeInfo);
                  FollowerSelectItemListViewItem___ctor(
                    v128,
                    v123,
                    v125 - i,
                    v124,
                    i,
                    0,
                    v126,
                    1,
                    v127,
                    v121,
                    classBoardMaxNumDictionary,
                    1,
                    0,
                    0,
                    0,
                    v214);
                  ReturnTypeByQuestId = (__int64)v245->fields.mixItemList;
                  if ( !ReturnTypeByQuestId )
                    goto LABEL_343;
                  v129 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                  v130 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                  if ( !v129 )
                    goto LABEL_343;
                  v131 = *(int *)(ReturnTypeByQuestId + 24);
                  if ( (unsigned int)v131 >= *(_DWORD *)(v129 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                      (Il2CppObject *)v128,
                      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v132 = v129 + 8 * v131;
                    *(_DWORD *)(ReturnTypeByQuestId + 24) = v131 + 1;
                    *(_QWORD *)(v132 + 32) = v128;
                    ReturnTypeByQuestId = sub_1C2D434(v132 + 32);
                  }
                  klass = posa;
                  v96 = indexa;
                  ++v122;
                  --v121;
                  if ( (unsigned int)v227 == v122 )
                    goto LABEL_204;
                }
                goto LABEL_343;
              }
LABEL_204:
              ;
            }
            namespaze = (int)klass->_1.namespaze;
            ++v96;
          }
          while ( (int)v96 < namespaze );
        }
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_343;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v247,
                            (const MethodInfo_338A420 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v247 )
        goto LABEL_343;
      v133 = v247[1].klass;
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_343;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !ReturnTypeByQuestId )
        goto LABEL_343;
      ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                       questIda,
                                       (const MethodInfo_3387D98 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_343;
      HasFlag_42234640 = QuestEntity__HasFlag_42234640((QuestEntity_o *)ReturnTypeByQuestId, 0x8000000, phaseCnt, 0);
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_343;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserFollowMaster___);
      v218 = (UserFollowMaster_o *)ReturnTypeByQuestId;
      if ( !v133 )
        goto LABEL_343;
      v134 = v133->_1.namespaze;
      if ( (int)v134 >= 1 )
      {
        v135 = 0;
        v136 = 0;
        *(_QWORD *)v220 = v133;
        do
        {
          if ( v136 >= (unsigned int)v134 )
            goto LABEL_344;
          v137 = (FollowerInfo_o *)*((_QWORD *)&v133->_1.byval_arg.data + v136);
          if ( HasFlag_42234640 )
          {
            if ( !v137 )
              goto LABEL_343;
            if ( v137->fields.type == 5 )
            {
              ReturnTypeByQuestId = (__int64)v218;
              if ( !v218 )
                goto LABEL_343;
              ReturnTypeByQuestId = UserFollowMaster__IsFollowUser(v218, v137->fields.userId, 0);
              if ( (ReturnTypeByQuestId & 1) == 0 )
                goto LABEL_289;
            }
          }
          else
          {
            if ( !v137 )
              goto LABEL_343;
            if ( v137->fields.type == 5 )
              goto LABEL_289;
          }
          FollowerInfo__ChangeLimitCountBySpoilerProtection(v137, 0);
          sub_1C2D538(int___TypeInfo, 0);
          posb = v135;
          v231 = v136;
          if ( v223 )
          {
            ReturnTypeByQuestId = (__int64)v137->fields.eventSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_343;
          }
          else
          {
            ReturnTypeByQuestId = (__int64)v137->fields.mainSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_343;
          }
          v241 = *(unsigned int *)(ReturnTypeByQuestId + 24);
          v138 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0);
          if ( v138 )
          {
            v99 = v138;
            v139 = sub_1C2D5CC(v138, int___TypeInfo);
            if ( !v139 )
              goto LABEL_345;
          }
          else
          {
            v139 = 0;
          }
          v140 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v140 = BalanceConfig_TypeInfo;
          }
          v141 = v140->static_fields;
          v143 = v141->FixMainSupportDeckNum;
          v142 = v141->FixEventSupportDeckNum;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          ReturnTypeByQuestId = System_Math__Max_64982040(v143, v142, 0);
          v144 = ReturnTypeByQuestId;
          if ( (int)v241 >= 1 )
          {
            v145 = 0;
            while ( 1 )
            {
              if ( !*p_originalItemList || !v139 )
                goto LABEL_343;
              if ( v145 >= *(unsigned int *)(v139 + 24) )
                break;
              v146 = (*p_originalItemList)->fields._size;
              v147 = *(_DWORD *)(v139 + 32 + 4 * v145);
              v148 = *p_followerSelectItemOption;
              v149 = v245->fields.classBoardMaxDictionary;
              v150 = (FollowerSelectItemListViewItem_o *)sub_1C2D6DC(FollowerSelectItemListViewItem_TypeInfo);
              supportDeckId = v147;
              v93 = v245;
              FollowerSelectItemListViewItem___ctor(
                v150,
                v146,
                0,
                v137,
                0,
                0,
                v148,
                0,
                supportDeckId,
                v144,
                v149,
                1,
                0,
                0,
                0,
                v214);
              ReturnTypeByQuestId = (__int64)v245->fields.originalItemList;
              if ( !ReturnTypeByQuestId )
                goto LABEL_343;
              v151 = *(_QWORD *)(ReturnTypeByQuestId + 16);
              v152 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++*(_DWORD *)(ReturnTypeByQuestId + 28);
              if ( !v151 )
                goto LABEL_343;
              v153 = *(int *)(ReturnTypeByQuestId + 24);
              if ( (unsigned int)v153 >= *(_DWORD *)(v151 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                  (Il2CppObject *)v150,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
              }
              else
              {
                v154 = v151 + 8 * v153;
                *(_DWORD *)(ReturnTypeByQuestId + 24) = v153 + 1;
                *(_QWORD *)(v154 + 32) = v150;
                ReturnTypeByQuestId = sub_1C2D434(v154 + 32);
              }
              ++v145;
              --v144;
              if ( v241 == v145 )
                goto LABEL_250;
            }
LABEL_344:
            sub_1C2D6F4(ReturnTypeByQuestId, v20, v31);
          }
LABEL_250:
          v155 = 0;
          indexb = v137;
          while ( 1 )
          {
            v156 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v156 = BalanceConfig_TypeInfo;
            }
            v157 = v156->static_fields;
            if ( v155 >= v157->SupportDeckMemberMax )
              break;
            if ( !v156->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v156);
              v157 = BalanceConfig_TypeInfo->static_fields;
            }
            v159 = v157->FixMainSupportDeckNum;
            v158 = v157->FixEventSupportDeckNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            ReturnTypeByQuestId = System_Math__Max_64982040(v159, v158, 0);
            v144 = ReturnTypeByQuestId;
            if ( (int)v241 >= 1 )
            {
              v160 = 0;
              while ( *p_mixItemList )
              {
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                v161 = (*p_mixItemList)->fields._size;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                }
                if ( !v139 )
                  break;
                if ( v160 >= *(unsigned int *)(v139 + 24) )
                  goto LABEL_344;
                v162 = *p_followerSelectItemOption;
                v163 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 180LL);
                v164 = v245->fields.classBoardMaxDictionary;
                supportDeckIda = *(_DWORD *)(v139 + 32 + 4 * v160);
                v137 = indexb;
                v165 = (FollowerSelectItemListViewItem_o *)sub_1C2D6DC(FollowerSelectItemListViewItem_TypeInfo);
                FollowerSelectItemListViewItem___ctor(
                  v165,
                  v161,
                  v163 - v155,
                  indexb,
                  v155,
                  0,
                  v162,
                  0,
                  supportDeckIda,
                  v144,
                  v164,
                  1,
                  0,
                  0,
                  0,
                  v214);
                ReturnTypeByQuestId = (__int64)v245->fields.mixItemList;
                if ( !ReturnTypeByQuestId )
                  break;
                v166 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v167 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v166 )
                  break;
                v168 = *(int *)(ReturnTypeByQuestId + 24);
                if ( (unsigned int)v168 >= *(_DWORD *)(v166 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    (Il2CppObject *)v165,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v167[4] + 192LL) + 112LL));
                }
                else
                {
                  v169 = v166 + 8 * v168;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v168 + 1;
                  *(_QWORD *)(v169 + 32) = v165;
                  ReturnTypeByQuestId = sub_1C2D434(v169 + 32);
                }
                ++v160;
                --v144;
                if ( v241 == v160 )
                  goto LABEL_271;
              }
              goto LABEL_343;
            }
LABEL_271:
            v93 = v245;
            ++v155;
          }
          if ( v221 )
          {
            ReturnTypeByQuestId = BasicHelper__IsNullOrEmpty(
                                    (System_Collections_ICollection_o *)v137->fields.userSvtGrandHash,
                                    0);
            if ( (ReturnTypeByQuestId & 1) == 0 )
            {
              userSvtGrandHash = v137->fields.userSvtGrandHash;
              if ( !userSvtGrandHash )
                goto LABEL_343;
              v171 = userSvtGrandHash->max_length;
              if ( v171 >= 1 )
              {
                v172 = 0;
                while ( v172 < v171 )
                {
                  if ( !*p_mixItemList )
                    goto LABEL_343;
                  v173 = userSvtGrandHash->m_Items[v172];
                  if ( !v173 )
                    goto LABEL_343;
                  v174 = (*p_mixItemList)->fields._size;
                  v175 = v93->fields.classBoardMaxDictionary;
                  followerSelectItemOption = v93->fields.followerSelectItemOption;
                  grandGraphId = v173->fields.grandGraphId;
                  v178 = (FollowerSelectItemListViewItem_o *)sub_1C2D6DC(FollowerSelectItemListViewItem_TypeInfo);
                  FollowerSelectItemListViewItem___ctor(
                    v178,
                    v174,
                    0,
                    indexb,
                    0,
                    0,
                    followerSelectItemOption,
                    0,
                    0,
                    v144,
                    v175,
                    1,
                    0,
                    1,
                    grandGraphId,
                    v214);
                  ReturnTypeByQuestId = (__int64)v93->fields.grandItemList;
                  if ( !ReturnTypeByQuestId )
                    goto LABEL_343;
                  v179 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                  v180 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                  if ( !v179 )
                    goto LABEL_343;
                  v181 = *(int *)(ReturnTypeByQuestId + 24);
                  if ( (unsigned int)v181 >= *(_DWORD *)(v179 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                      (Il2CppObject *)v178,
                      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v180[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v182 = v179 + 8 * v181;
                    *(_DWORD *)(ReturnTypeByQuestId + 24) = v181 + 1;
                    *(_QWORD *)(v182 + 32) = v178;
                    ReturnTypeByQuestId = sub_1C2D434(v182 + 32);
                  }
                  v171 = userSvtGrandHash->max_length;
                  if ( (int)++v172 >= v171 )
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
          v133 = *(Il2CppClass **)v220;
          v136 = v231;
          v135 = posb + 1;
          if ( posb + 1 >= *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 724LL) )
            break;
LABEL_289:
          LODWORD(v134) = v133->_1.namespaze;
          ++v136;
        }
        while ( (__int64)v136 < (int)v134 );
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_343;
    if ( DataMasterBase_object__object__long___TryGetSingleEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
           &v246,
           (const MethodInfo_338A420 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    {
      ReturnTypeByQuestId = (__int64)v246;
      if ( !v246 )
        goto LABEL_343;
      ReturnTypeByQuestId = UserRecommendFollowerEntity__IsEnableSupport(
                              (UserRecommendFollowerEntity_o *)v246,
                              questIda,
                              phaseCnt,
                              0);
      if ( (ReturnTypeByQuestId & 1) != 0 )
      {
        if ( !v246 )
          goto LABEL_343;
        v183 = v246[1].klass;
        ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_343;
        ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !ReturnTypeByQuestId )
          goto LABEL_343;
        ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                         questIda,
                                         (const MethodInfo_3387D98 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_343;
        v184 = QuestEntity__HasFlag_42234640((QuestEntity_o *)ReturnTypeByQuestId, 0x8000000, phaseCnt, 0);
        ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_343;
        ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserFollowMaster___);
        v244 = (UserFollowMaster_o *)ReturnTypeByQuestId;
        if ( !v183 )
          goto LABEL_343;
        namespaze_low = (unsigned __int64)v183->_1.namespaze;
        if ( (int)namespaze_low >= 1 )
        {
          v186 = 0;
          p_byval_arg = &v183->_1.byval_arg;
          do
          {
            namespaze_low = (unsigned int)namespaze_low;
            if ( v184 )
            {
              if ( v186 >= (unsigned int)namespaze_low )
                goto LABEL_344;
              v188 = *((_QWORD *)&p_byval_arg->data + v186);
              if ( !v188 )
                goto LABEL_343;
              if ( *(_DWORD *)(v188 + 36) == 5 )
              {
                ReturnTypeByQuestId = (__int64)v244;
                if ( !v244 )
                  goto LABEL_343;
                ReturnTypeByQuestId = UserFollowMaster__IsFollowUser(v244, *(_QWORD *)(v188 + 16), 0);
                if ( (ReturnTypeByQuestId & 1) == 0 )
                  goto LABEL_337;
                namespaze_low = LODWORD(v183->_1.namespaze);
              }
            }
            else
            {
              if ( v186 >= (unsigned int)namespaze_low )
                goto LABEL_344;
              v189 = *((_QWORD *)&p_byval_arg->data + v186);
              if ( !v189 )
                goto LABEL_343;
              if ( *(_DWORD *)(v189 + 36) == 5 )
                goto LABEL_337;
            }
            if ( v186 >= namespaze_low )
              goto LABEL_344;
            v190 = *((_QWORD *)&p_byval_arg->data + v186);
            ReturnTypeByQuestId = sub_1C2D538(ServantLeaderInfo___TypeInfo, 1);
            if ( v186 >= LODWORD(v183->_1.namespaze) )
              goto LABEL_344;
            v191 = *((_QWORD *)&p_byval_arg->data + v186);
            if ( !v191 )
              goto LABEL_343;
            v192 = *(_QWORD *)(v191 + 56);
            if ( !v192 )
              goto LABEL_343;
            if ( !*(_DWORD *)(v192 + 24) )
              goto LABEL_344;
            v193 = *(_QWORD *)(v192 + 32);
            if ( !v193 )
              goto LABEL_343;
            v194 = ReturnTypeByQuestId;
            if ( !ReturnTypeByQuestId )
              goto LABEL_343;
            v195 = *(_QWORD *)(v193 + 56);
            if ( v195 )
            {
              ReturnTypeByQuestId = sub_1C2D5CC(v195, *(_QWORD *)(*(_QWORD *)ReturnTypeByQuestId + 64LL));
              if ( !ReturnTypeByQuestId )
                goto LABEL_346;
            }
            if ( !*(_DWORD *)(v194 + 24) )
              goto LABEL_344;
            *(_QWORD *)(v194 + 32) = v195;
            ReturnTypeByQuestId = sub_1C2D434(v194 + 32);
            if ( !v190 )
              goto LABEL_343;
            *(_QWORD *)(v190 + 40) = v194;
            ReturnTypeByQuestId = sub_1C2D434(v190 + 40);
            if ( v186 >= LODWORD(v183->_1.namespaze) )
              goto LABEL_344;
            ReturnTypeByQuestId = *((_QWORD *)&p_byval_arg->data + v186);
            if ( !ReturnTypeByQuestId )
              goto LABEL_343;
            FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0);
            if ( !*p_recommendItemList )
              goto LABEL_343;
            if ( v186 >= LODWORD(v183->_1.namespaze) )
              goto LABEL_344;
            v196 = (*p_recommendItemList)->fields._size;
            v197 = (FollowerInfo_o *)*((_QWORD *)&p_byval_arg->data + v186);
            v198 = v245->fields.followerSelectItemOption;
            v199 = v245->fields.classBoardMaxDictionary;
            v200 = (FollowerSelectItemListViewItem_o *)sub_1C2D6DC(FollowerSelectItemListViewItem_TypeInfo);
            FollowerSelectItemListViewItem___ctor(v200, v196, 0, v197, 0, 0, v198, 0, 0, 0, v199, 1, 1, 0, 0, v214);
            ReturnTypeByQuestId = (__int64)v245->fields.recommendItemList;
            if ( !ReturnTypeByQuestId )
              goto LABEL_343;
            v201 = *(_QWORD *)(ReturnTypeByQuestId + 16);
            v202 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++*(_DWORD *)(ReturnTypeByQuestId + 28);
            if ( !v201 )
              goto LABEL_343;
            v203 = *(int *)(ReturnTypeByQuestId + 24);
            if ( (unsigned int)v203 >= *(_DWORD *)(v201 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                (Il2CppObject *)v200,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v202[4] + 192LL) + 112LL));
            }
            else
            {
              v204 = v201 + 8 * v203;
              *(_DWORD *)(ReturnTypeByQuestId + 24) = v203 + 1;
              *(_QWORD *)(v204 + 32) = v200;
              sub_1C2D434(v204 + 32);
            }
            ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            }
            if ( (__int64)v186 >= *(int *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 724LL) )
              break;
LABEL_337:
            LODWORD(namespaze_low) = v183->_1.namespaze;
            ++v186;
          }
          while ( (__int64)v186 < (int)namespaze_low );
        }
      }
    }
  }
LABEL_338:
  ReturnTypeByQuestId = (__int64)v245->fields.refreshButtonObject;
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ReturnTypeByQuestId, !v245->fields.isRefreshBtnHide, 0);
  v206 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v206 = FollowerSelectItemListViewManager_TypeInfo;
  }
  FollowerSelectItemListViewManager__SetEmptyMessage(v245, v206->static_fields->followerClassId, v205);
  FollowerSelectItemListViewManager__SortClass(
    v245,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    v207);
  ListViewManager__SortItem((ListViewManager_o *)v245, -1, 0, -1, 0);
  FollowerSelectItemListViewManager__SetFilterButtonImage(v245, v208);
  scrollView = v245->fields.scrollView;
  if ( !scrollView )
    goto LABEL_343;
  scrollView->fields.smoothDragStart = 1;
}


void FollowerSelectItemListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewManager_c *v2; // x0
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v4; // x8

  if ( (byte_4C21E2C & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C2D490(&StringLiteral_6776/*"FollowerSelectClass"*/);
    sub_1C2D490(&StringLiteral_6779/*"FollowerSelectOldClass"*/);
    byte_4C21E2C = 1;
  }
  v2 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v2 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v2->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT
    || (v2 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))LIST_VIEW_SORT->fields.invoke_impl)(
                                                      LIST_VIEW_SORT->fields.method_code,
                                                      1,
                                                      LIST_VIEW_SORT->fields.method)) == 0
    || (ListViewSort__DeleteContinueData((ListViewSort_o *)v2, 0),
        (v4 = FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT) == 0)
    || (v2 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))v4->fields.invoke_impl)(
                                                      v4->fields.method_code,
                                                      0,
                                                      v4->fields.method)) == 0 )
  {
    sub_1C2D6EC(v2, v1);
  }
  ListViewSort__DeleteContinueData((ListViewSort_o *)v2, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6776/*"FollowerSelectClass"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6779/*"FollowerSelectOldClass"*/, 0);
}


void FollowerSelectItemListViewManager__DestroyList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FollowerSelectItemListViewManager__DestroyList_32440444(this, 0, v2);
}


void FollowerSelectItemListViewManager__DestroyList_32440444(
        FollowerSelectItemListViewManager_o *this,
        BattleSetupInfo_o *battleSetupInfo,
        const MethodInfo *method)
{
  EventQuestMaster_o *ReturnTypeByQuestId; // x0
  const MethodInfo *v6; // x1
  FollowerSelectItemListViewManager_c *v7; // x8
  unsigned int v8; // w20
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  System_Int32_array *OngoingQuestTargetEventIds; // x0
  int32_t questId; // w20
  int32_t questPhase; // w21
  System_Int32_array *v13; // x22
  EventUpValSetupInfo_o *v14; // x23
  void *p_setupInfo; // x0
  ClassButtonControlComponent_o *classButtonControl; // x20
  ClassButtonControlComponent_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x4
  struct ListViewSort_o *sort; // x8
  int32_t InitialDisplayClass; // w0
  FollowerSelectItemListViewManager_c *v21; // x8
  int32_t v22; // w20
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
  struct ListViewSort_o *v24; // x8
  FollowerSelectItemListViewManager_o *v25; // x0
  int monitor; // w20
  const MethodInfo *v27; // x1
  FollowerSelectItemListViewManager_c *v28; // x0
  FollowerSelectItemListViewManager_o *v29; // x0
  int monitor_high; // w20
  FollowerSelectItemListViewManager_c *v31; // x0
  ClassButtonControlComponent_o *v32; // x20
  const MethodInfo *v33; // x2
  struct EventUpValSetupInfo_o *setupInfo; // x8
  System_Int32_array *v35; // x1
  UILabel_o *bonusFilterKindLabel; // x20

  if ( (byte_4C21E3B & 1) == 0 )
  {
    sub_1C2D490(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&EventUpValSetupInfo_TypeInfo);
    sub_1C2D490(&Method_FollowerSelectItemListViewManager_OnChangeClass__);
    sub_1C2D490(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11700/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/);
    sub_1C2D490(&StringLiteral_6776/*"FollowerSelectClass"*/);
    sub_1C2D490(&StringLiteral_6779/*"FollowerSelectOldClass"*/);
    byte_4C21E3B = 1;
  }
  if ( battleSetupInfo )
  {
    this->fields.questId = BattleSetupInfo__TargetQuestId(battleSetupInfo, 0);
    this->fields.questPhase = battleSetupInfo->fields.questPhase;
    this->fields.questRestrictionInfo = battleSetupInfo->fields.questRestrictionInfo;
    sub_1C2D434(&this->fields.questRestrictionInfo);
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
    this->fields.sort = (struct ListViewSort_o *)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))LIST_VIEW_SORT->fields.invoke_impl)(
                                                   LIST_VIEW_SORT->fields.method_code,
                                                   v8,
                                                   LIST_VIEW_SORT->fields.method);
    sub_1C2D434(&this->fields.sort);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (EventQuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventQuestMaster___);
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
    v13 = OngoingQuestTargetEventIds;
    v14 = (EventUpValSetupInfo_o *)sub_1C2D6DC(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_41515380(v14, v13, 0, questId, questPhase, 0);
    p_setupInfo = &this->fields.setupInfo;
    this->fields.setupInfo = v14;
  }
  else
  {
    this->fields.setupInfo = 0;
    sub_1C2D434(&this->fields.setupInfo);
    p_setupInfo = &this->fields.questRestrictionInfo;
    this->fields.questRestrictionInfo = 0;
  }
  sub_1C2D434(p_setupInfo);
  classButtonControl = this->fields.classButtonControl;
  v17 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C2D6DC(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0);
  if ( !classButtonControl )
    goto LABEL_49;
  ClassButtonControlComponent__init(
    classButtonControl,
    v17,
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
                          v18);
  v21 = FollowerSelectItemListViewManager_TypeInfo;
  v22 = InitialDisplayClass;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v21 = FollowerSelectItemListViewManager_TypeInfo;
  }
  static_fields = v21->static_fields;
  static_fields->followerClassId = v22;
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
  v24 = this->fields.sort;
  if ( !v24 )
    goto LABEL_49;
  if ( v24->fields.isRequestSave )
  {
    v25 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v25 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor = (int)v25->fields.sort->monitor;
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(v25, v6) )
    {
      v28 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v28 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6776/*"FollowerSelectClass"*/, v28->static_fields->followerClassId, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
    v29 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v29 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor_high = HIDWORD(v29->fields.sort->monitor);
    if ( monitor_high != FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(v29, v27) )
    {
      v31 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v31 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6779/*"FollowerSelectOldClass"*/, v31->static_fields->oldFollowerClassId, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
  }
  this->fields.originalItemList = 0;
  sub_1C2D434(&this->fields.originalItemList);
  this->fields.mixItemList = 0;
  sub_1C2D434(&this->fields.mixItemList);
  this->fields.recommendItemList = 0;
  sub_1C2D434(&this->fields.recommendItemList);
  this->fields.grandItemList = 0;
  sub_1C2D434(&this->fields.grandItemList);
  this->fields.isInput = 0;
  ReturnTypeByQuestId = (EventQuestMaster_o *)FollowerSelectItemListViewManager_TypeInfo;
  v32 = this->fields.classButtonControl;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  if ( !v32 )
    goto LABEL_49;
  ClassButtonControlComponent__setCursor(
    v32,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0);
  setupInfo = this->fields.setupInfo;
  v35 = setupInfo ? setupInfo->fields.eventIdList : (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, v35, v33);
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
    ReturnTypeByQuestId = (EventQuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11700/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/, 0);
    if ( bonusFilterKindLabel )
    {
      UILabel__set_text(bonusFilterKindLabel, (System_String_o *)ReturnTypeByQuestId, 0);
      goto LABEL_45;
    }
LABEL_49:
    sub_1C2D6EC(ReturnTypeByQuestId, v6);
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
  sub_1C2D434(&this->fields.followerSelectItemOption);
}


void FollowerSelectItemListViewManager__EndClassCompatibilityMenu(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C21E4A & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21E4A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0, 0);
}


void FollowerSelectItemListViewManager__EndCloseClassBoardEffectListDialog(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C21E5B & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21E5B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
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

  if ( (byte_4C21E4C & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21E4C = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__,
    0);
  if ( !Instance )
LABEL_8:
    sub_1C2D6EC(sort, v6);
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
  __int64 v14; // x2
  struct System_Int32_array *v15; // x8
  Il2CppObject *v16; // x8

  if ( (byte_4C21E36 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C21E36 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v15 = v11->fields.classIds;
  if ( !v15 )
    goto LABEL_17;
  if ( !LODWORD(v15->max_length) )
    sub_1C2D6F4(Instance, v9, v14);
  if ( !Instance )
LABEL_17:
    sub_1C2D6EC(Instance, v9);
  v16 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          v15->m_Items[0],
          (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  result = defaultValue;
  if ( v16 )
    return HIDWORD(v16[4].klass);
  return result;
}


int32_t FollowerSelectItemListViewManager__GetClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_c *v2; // x0

  if ( (byte_4C21E3F & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4C21E3F = 1;
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

  if ( (byte_4C21E5C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4C21E5C = 1;
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
  if ( (byte_4C21E34 & 1) == 0 )
  {
    sub_1C2D490(&ClassButtonControlComponent_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_RecommendSupportQuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C2D490(&OptionManager_TypeInfo);
    this = (FollowerSelectItemListViewManager_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C21E34 = 1;
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
    classButtonControl = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
    sub_1C2D6EC(classButtonControl, *(_QWORD *)&questId);
  }
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(PlayerPrefsFollowerClassId, 0) )
  {
    classButtonControl = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !classButtonControl )
      goto LABEL_35;
    classButtonControl = DataManager__GetMasterData_object_(
                           (DataManager_o *)classButtonControl,
                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_RecommendSupportQuestMaster___);
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

  if ( (byte_4C21E3D & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C21E3D = 1;
  }
  result = (FollowerSelectItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4C21E57 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4C21E57 = 1;
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
  __int64 naturalAligment; // x10
  struct FollowerInfo_o *followerInfo; // x8

  if ( (byte_4C21E58 & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C21E58 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1C2D6EC(itemList, userId);
  v8 = 0;
  while ( v8 < itemList->fields._size )
  {
    Item = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                 itemList,
                                                 v8,
                                                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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


int32_t FollowerSelectItemListViewManager__GetItemIndex_32450348(
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

  if ( (byte_4C21E59 & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C21E59 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_20:
    sub_1C2D6EC(itemList, userId);
  v12 = 0;
  while ( v12 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v12,
             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  if ( (byte_4C21E38 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6776/*"FollowerSelectClass"*/);
    byte_4C21E38 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6776/*"FollowerSelectClass"*/, 0, 0);
}


int32_t FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C21E39 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6779/*"FollowerSelectOldClass"*/);
    byte_4C21E39 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6779/*"FollowerSelectOldClass"*/, 0, 0);
}


void FollowerSelectItemListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewManager_c *v2; // x0
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v4; // x8

  if ( (byte_4C21E2D & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4C21E2D = 1;
  }
  v2 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v2 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v2->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT
    || (v2 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))LIST_VIEW_SORT->fields.invoke_impl)(
                                                      LIST_VIEW_SORT->fields.method_code,
                                                      1,
                                                      LIST_VIEW_SORT->fields.method)) == 0
    || (ListViewSort__InitLoad((ListViewSort_o *)v2, 0),
        (v4 = FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT) == 0)
    || (v2 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))v4->fields.invoke_impl)(
                                                      v4->fields.method_code,
                                                      0,
                                                      v4->fields.method)) == 0 )
  {
    sub_1C2D6EC(v2, v1);
  }
  ListViewSort__InitLoad((ListViewSort_o *)v2, 0);
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

  if ( (byte_4C21E35 & 1) == 0 )
  {
    sub_1C2D490(&BattleData_TypeInfo);
    sub_1C2D490(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4C21E35 = 1;
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


// local variable allocation has failed, the output may be wrong!
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
  __int64 naturalAligment; // x10
  FollowerSelectItemListViewManager_c *v11; // x0
  int32_t followerClassId; // w20
  int v13; // w23
  int32_t v14; // w20
  __int64 v15; // x10
  int v16; // w23
  int32_t v17; // w20
  __int64 v18; // x10

  v6 = this;
  if ( (byte_4C21E3A & 1) == 0 )
  {
    sub_1C2D490(&ClassButtonControlComponent_TypeInfo);
    sub_1C2D490(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C2D490(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (FollowerSelectItemListViewManager_o *)sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C21E3A = 1;
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
                                                      (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (FollowerSelectItemListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != FollowerSelectItemListViewItem_TypeInfo )
      {
        break;
      }
      FollowerSelectItemListViewItem__Modify(
        (FollowerSelectItemListViewItem_o *)this,
        *(const MethodInfo **)&friendPointUpVal);
      if ( m_CancellationTokenSource == ++v9 )
        goto LABEL_13;
      this = (FollowerSelectItemListViewManager_o *)v6->fields.itemList;
    }
    while ( this );
LABEL_35:
    sub_1C2D6EC(this, *(_QWORD *)&friendPointUpVal);
  }
LABEL_13:
  v11 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v11 = FollowerSelectItemListViewManager_TypeInfo;
  }
  followerClassId = v11->static_fields->followerClassId;
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsMixSupportGroupType(followerClassId, 0) )
  {
    this = (FollowerSelectItemListViewManager_o *)v6->fields.originalItemList;
    if ( !this )
      goto LABEL_35;
    v13 = (int)this->fields.m_CancellationTokenSource;
    if ( v13 >= 1 )
    {
      v14 = 0;
      do
      {
        this = (FollowerSelectItemListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this,
                                                        v14,
                                                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !this )
          break;
        v15 = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
        if ( this->klass->_2.naturalAligment < (unsigned int)v15
          || (FollowerSelectItemListViewItem_c *)this->klass->_2.typeHierarchy[v15 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          break;
        }
        FollowerSelectItemListViewItem__Modify(
          (FollowerSelectItemListViewItem_o *)this,
          *(const MethodInfo **)&friendPointUpVal);
        if ( v13 == ++v14 )
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
    v16 = (int)this->fields.m_CancellationTokenSource;
    if ( v16 >= 1 )
    {
      v17 = 0;
      do
      {
        this = (FollowerSelectItemListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this,
                                                        v17,
                                                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !this )
          break;
        v18 = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
        if ( this->klass->_2.naturalAligment < (unsigned int)v18
          || (FollowerSelectItemListViewItem_c *)this->klass->_2.typeHierarchy[v18 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          break;
        }
        FollowerSelectItemListViewItem__Modify(
          (FollowerSelectItemListViewItem_o *)this,
          *(const MethodInfo **)&friendPointUpVal);
        if ( v16 == ++v17 )
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

  if ( (byte_4C21E52 & 1) == 0 )
  {
    sub_1C2D490(&ClassButtonControlComponent_TypeInfo);
    sub_1C2D490(&Method_FollowerSelectItemListViewManager_OnChangeClass__);
    sub_1C2D490(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4C21E52 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
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
        if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
        IsRecommendSupportGroupType = ClassButtonControlComponent__IsRecommendSupportGroupType(oldCursor, 0);
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
          v14 = (_QWORD *)sub_1C2D4A8(Method_FollowerSelectItemListViewManager_OnChangeClass__);
        v15 = (System_Reflection_MethodBase_o *)sub_1C2D474(v14, v14[4]);
        OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
        if ( (v7 & 1) != 0 )
          FollowerSelectItemListViewManager__OnClickRecommend(this, classPos, v16);
        else
          FollowerSelectItemListViewManager__SortClass(this, classPos, v16);
        return;
      }
    }
LABEL_22:
    sub_1C2D6EC(IsRecommendSupportGroupType, v6);
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
  __int64 v13; // x1

  if ( (byte_4C21E4B & 1) == 0 )
  {
    sub_1C2D490(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__);
    sub_1C2D490(&Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21E4B = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
    isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
    equipBonusFilterEventIds = this->fields.equipBonusFilterEventIds;
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantBonusFilterSelectMenu_CallbackFunc_o *)sub_1C2D6DC(ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantBonusFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__,
      0);
    if ( !v10 )
      sub_1C2D6EC(v12, v13);
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
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w21

  if ( (byte_4C21E56 & 1) == 0 )
  {
    sub_1C2D490(&Method_FollowerSelectItemListViewManager_OnClickChangeSkill__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    byte_4C21E56 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickChangeSkill__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickChangeSkill__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_FollowerSelectItemListViewManager_OnClickChangeSkill__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    displaySkill = this->fields.displaySkill;
    if ( (unsigned int)displaySkill <= 2 )
      this->fields.displaySkill = dword_C41378[displaySkill];
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
                                                                    (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
        if ( !ObjectList )
          break;
        FollowerSelectItemListViewObject__ChangeDisplaySkill(
          (FollowerSelectItemListViewObject_o *)ObjectList,
          this->fields.displaySkill,
          0);
        if ( ++v10 >= v9->fields._size )
          return;
      }
LABEL_14:
      sub_1C2D6EC(ObjectList, v8);
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

  if ( (byte_4C21E49 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__);
    sub_1C2D490(&Method_FollowerSelectItemListViewManager_OnClickClassComparibility__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21E49 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickClassComparibility__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickClassComparibility__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_FollowerSelectItemListViewManager_OnClickClassComparibility__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v6,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__,
      0);
    if ( !Instance )
      sub_1C2D6EC(v7, v8);
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
  __int64 v6; // x1
  FollowerSelectItemListViewManager_c *v7; // x0
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C21E53 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__);
    sub_1C2D490(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4C21E53 = 1;
  }
  entity = 0;
  if ( this->fields.isGetRecommendSupport )
    goto LABEL_4;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
  if ( !Master_object )
    goto LABEL_16;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          (const MethodInfo_338A420 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    goto LABEL_12;
  Master_object = entity;
  if ( !entity )
LABEL_16:
    sub_1C2D6EC(Master_object, v6);
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
    this->fields.callbackFunc = 0;
    sub_1C2D434(&this->fields.callbackFunc);
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
  __int64 v5; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w19
  __int64 v8; // x1

  if ( (byte_4C21E48 & 1) == 0 )
  {
    sub_1C2D490(&ClassButtonControlComponent_TypeInfo);
    byte_4C21E48 = 1;
  }
  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0;
      v4 = sub_1C2D434(&this->fields.callbackFunc);
      classButtonControl = this->fields.classButtonControl;
      if ( !classButtonControl )
        sub_1C2D6EC(v4, v5);
      currentCursor = classButtonControl->fields.currentCursor;
      if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      if ( ClassButtonControlComponent__IsRecommendSupportGroupType(currentCursor, 0) )
        v8 = 13;
      else
        v8 = 7;
      ((void (__fastcall *)(intptr_t, __int64, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        v8,
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
  __int64 v6; // x1
  unsigned int Index; // w0

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    v5 = sub_1C2D434(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1C2D6EC(v5, v6);
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
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4C21E50 & 1) == 0 )
  {
    sub_1C2D490(&Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__);
    byte_4C21E50 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C2D6EC(v5, v6);
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
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w20
  struct ListViewSort_o *sort; // x8
  int v10; // w9
  Il2CppObject *Instance; // x0
  ListViewSort_o *v12; // x20
  CommonUI_o *v13; // x21
  OtherUserSortDialog_CallbackFunc_o *v14; // x22

  if ( (byte_4C21E4E & 1) == 0 )
  {
    sub_1C2D490(&OtherUserSortDialog_CallbackFunc_TypeInfo);
    sub_1C2D490(&ClassButtonControlComponent_TypeInfo);
    sub_1C2D490(&Method_FollowerSelectItemListViewManager_CloseSortDialog__);
    sub_1C2D490(&Method_FollowerSelectItemListViewManager_OnClickSortKind__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21E4E = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_FollowerSelectItemListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
            v10 = 29;
          else
            v10 = 11;
          sort->fields.otherSortKind = v10;
          ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
          return;
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v12 = this->fields.sort;
        v13 = (CommonUI_o *)Instance;
        v14 = (OtherUserSortDialog_CallbackFunc_o *)sub_1C2D6DC(OtherUserSortDialog_CallbackFunc_TypeInfo);
        OtherUserSortDialog_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          Method_FollowerSelectItemListViewManager_CloseSortDialog__,
          0);
        if ( v13 )
        {
          CommonUI__OpenOtherUserSortDialog(v13, 0, v12, v14, 0);
          return;
        }
      }
    }
    sub_1C2D6EC(IsRecommendSupportGroupType, v6);
  }
}


void FollowerSelectItemListViewManager__OnClickSupportListView(
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
    this->fields.callbackFunc = 0;
    v5 = sub_1C2D434(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1C2D6EC(v5, v6);
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
  __int64 v6; // x1
  unsigned int Index; // w0

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    v5 = sub_1C2D434(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1C2D6EC(v5, v6);
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
  __int64 v9; // x1
  __int64 Index; // x2
  __int64 dispObject_low; // x3

  if ( (byte_4C21E46 & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewObject_TypeInfo);
    byte_4C21E46 = 1;
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
    v8 = sub_1C2D434(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1C2D6EC(v8, v9);
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

  if ( (byte_4C21E47 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_12644/*"ScrollViewEnabled"*/);
    byte_4C21E47 = 1;
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
        (System_String_o *)StringLiteral_12644/*"ScrollViewEnabled"*/,
        0.1,
        0);
    }
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    tutorialListViewObject = (UnityEngine_Component_o *)sub_1C2D434(&this->fields.callbackFunc);
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
      sub_1C2D6EC(tutorialListViewObject, obj);
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
  __int64 v7; // x1
  UnityEngine_Component_o *tutorialListViewObject; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C21E45 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21E45 = 1;
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
              sub_1C2D434(&this->fields.callbackFunc2);
              if ( callbackFunc2 )
                ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
                  callbackFunc2->fields.method_code,
                  callbackFunc2->fields.method);
              return;
            }
          }
        }
      }
      sub_1C2D6EC(tutorialListViewObject, v7);
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
  __int64 v17; // x2
  int32_t v18; // w21
  FollowerSelectItemListViewManager_o *v19; // x25
  struct FollowerInfo_o *followerInfo; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x27
  int max_length; // w8
  unsigned int v23; // w28
  ClassBoardInfo_o *v24; // x22
  ClassBoardInfo_o *v25; // x23
  ClassBoardInfo_o *v26; // x26
  long double inited; // q0
  _QWORD *v28; // x24
  __int64 v29; // x8
  __int64 v30; // x0
  __int64 v31; // x0
  long double v32; // q0
  _QWORD *v33; // x24
  __int64 v34; // x8
  __int64 v35; // x0
  __int64 v36; // x0
  Il2CppObject *Instance; // x24
  System_Action_o *v38; // x25
  struct FollowerInfo_o *v39; // x8

  v4 = this;
  if ( (byte_4C21E5A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Array_Empty_int___);
    sub_1C2D490(&ClassBoardInfo_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C2D490(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C2D490(&Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__);
    sub_1C2D490(&Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (FollowerSelectItemListViewManager_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21E5A = 1;
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
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
            v10 = (_QWORD *)sub_1C2D4A8(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
          v11 = (System_Reflection_MethodBase_o *)sub_1C2D474(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0, 0);
          return;
        }
        v4->fields.isInput = 0;
        v12 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
        if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 83) & 2) != 0 )
          v12 = (_QWORD *)sub_1C2D4A8(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
        v13 = (System_Reflection_MethodBase_o *)sub_1C2D474(v12, v12[4]);
        OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
        this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewItem__get_SvtId(v8, v15);
        if ( Master_object )
        {
          this = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                          (int32_t)this,
                                                          (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            scrollView = (int32_t)this->fields.scrollView;
            this = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( this )
            {
              this = (FollowerSelectItemListViewManager_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                                              (ClassBoardClassMaster_o *)this,
                                                              scrollView,
                                                              0);
              v18 = (int)this;
              if ( (_DWORD)this )
              {
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                this = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
                if ( !this )
                  goto LABEL_67;
                this = (FollowerSelectItemListViewManager_o *)ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
                                                                (ClassBoardBaseMaster_o *)this,
                                                                v18,
                                                                0);
                v19 = this;
              }
              else
              {
                v19 = 0;
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
                    v25 = 0;
                    v24 = 0;
LABEL_45:
                    if ( !v25 )
                    {
                      v25 = (ClassBoardInfo_o *)sub_1C2D6DC(ClassBoardInfo_TypeInfo);
                      ClassBoardInfo___ctor(v25, 0);
                      if ( !v25 )
                        goto LABEL_67;
                      v25->fields.classBoardBaseId = v18;
                      v28 = Method_System_Array_Empty_int___;
                      v29 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v29 )
                      {
                        sub_1C7DC00(Method_System_Array_Empty_int___);
                        v29 = v28[7];
                      }
                      v30 = *(_QWORD *)(v29 + 16);
                      if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
                        v30 = sub_1C7DBA4(inited);
                      if ( !*(_DWORD *)(v30 + 224) )
                        inited = j_il2cpp_runtime_class_init_0(v30);
                      v31 = *(_QWORD *)(v28[7] + 16LL);
                      if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
                        v31 = sub_1C7DBA4(inited);
                      v25->fields.squareIds = **(struct System_Int32_array ***)(v31 + 184);
                      sub_1C2D434(&v25->fields.squareIds);
                      v33 = Method_System_Array_Empty_int___;
                      v34 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v34 )
                      {
                        sub_1C7DC00(Method_System_Array_Empty_int___);
                        v34 = v33[7];
                      }
                      v35 = *(_QWORD *)(v34 + 16);
                      if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
                        v35 = sub_1C7DBA4(v32);
                      if ( !*(_DWORD *)(v35 + 224) )
                        v32 = j_il2cpp_runtime_class_init_0(v35);
                      v36 = *(_QWORD *)(v33[7] + 16LL);
                      if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
                        v36 = sub_1C7DBA4(v32);
                      v25->fields.releasedClassIds = **(struct System_Int32_array ***)(v36 + 184);
                      sub_1C2D434(&v25->fields.releasedClassIds);
                    }
LABEL_64:
                    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    v38 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                    System_Action___ctor(
                      v38,
                      (Il2CppObject *)v4,
                      Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__,
                      0);
                    v39 = v8->fields.followerInfo;
                    if ( v39 && Instance )
                    {
                      CommonUI__OpenClassBoardEffectListDialog(
                        (CommonUI_o *)Instance,
                        1,
                        v18,
                        0,
                        v38,
                        1,
                        v25,
                        v24,
                        v8->fields._IsGrandSupport_k__BackingField,
                        v39->fields.followerClassStatistics,
                        0,
                        0);
                      return;
                    }
                  }
                  else
                  {
                    v23 = 0;
                    v24 = 0;
                    v25 = 0;
                    while ( 1 )
                    {
                      if ( v23 >= max_length )
                        sub_1C2D6F4(this, obj, v17);
                      v26 = userClassBoardInfo->m_Items[v23];
                      if ( !v26 )
                        break;
                      if ( v26->fields.classBoardBaseId == v18 )
                      {
                        this = (FollowerSelectItemListViewManager_o *)ClassBoardInfo__IsReleasedClassId(
                                                                        v26,
                                                                        scrollView,
                                                                        0);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          v25 = v26;
                      }
                      if ( v19 )
                      {
                        if ( LODWORD(v19->fields.m_CachedPtr) == v26->fields.classBoardBaseId )
                        {
                          this = (FollowerSelectItemListViewManager_o *)System_Linq_Enumerable__Any_int_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)v26->fields.squareIds,
                                                                          (const MethodInfo_30D9F98 *)Method_System_Linq_Enumerable_Any_int___);
                          if ( ((unsigned __int8)this & 1) != 0 )
                            v24 = v26;
                        }
                      }
                      if ( v25 && v24 )
                        goto LABEL_64;
                      max_length = userClassBoardInfo->max_length;
                      if ( (int)++v23 >= max_length )
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
      sub_1C2D6EC(this, obj);
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
    sub_1C2D6EC(0, method);
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

  if ( (byte_4C21E44 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C21E44 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
  ObjectList = FollowerSelectItemListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_1C2D6EC(ObjectList, v5);
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
             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0) )
    {
      v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      FollowerSelectItemListViewObject__Init_32525448((FollowerSelectItemListViewObject_o *)Item, 4, v11, 0.1, 0);
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
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
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
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C21E42 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__);
    sub_1C2D490(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C21E42 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2D6EC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v14.fields._current;
      v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v12, v13);
      FollowerSelectItemListViewObject__Init_32525448(
        (FollowerSelectItemListViewObject_o *)current,
        mode,
        v11,
        delay,
        0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewManager__RequestListObject_32513000(
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
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C21E43 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__);
    sub_1C2D490(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C21E43 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2D6EC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v12.fields._current;
      v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v10, v11);
      FollowerSelectItemListViewObject__Init_32525548((FollowerSelectItemListViewObject_o *)current, mode, v9, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


void FollowerSelectItemListViewManager__SaveSortFilter(
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

  if ( (byte_4C21E3C & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C2D490(&StringLiteral_6776/*"FollowerSelectClass"*/);
    sub_1C2D490(&StringLiteral_6779/*"FollowerSelectOldClass"*/);
    byte_4C21E3C = 1;
  }
  sort = this->fields.sort;
  if ( !sort || (ListViewSort__Save(sort, 0), (v4 = this->fields.sort) == 0) )
    sub_1C2D6EC(sort, method);
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
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6776/*"FollowerSelectClass"*/, v8->static_fields->followerClassId, 0);
      UnityEngine_PlayerPrefs__Save(0);
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
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6779/*"FollowerSelectOldClass"*/, v11->static_fields->oldFollowerClassId, 0);
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
    sub_1C2D6EC(0, method);
  UnityEngine_Behaviour__set_enabled(scrollView, 1, 0);
}


void FollowerSelectItemListViewManager__SetBonusFilterFlag(
        FollowerSelectItemListViewManager_o *this,
        System_Int32_array *eventIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  il2cpp_array_size_t max_length; // x8
  System_Collections_Generic_List_int__o *v9; // x21
  unsigned __int64 v10; // x23
  int32_t v11; // w22
  bool isBonusFilterEnable; // w27
  bool isServantBonusFilterEnable; // w27
  bool isServantEquipBonusFilterEnable; // w27
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C21E30 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventFilterMaster___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C21E30 = 1;
  }
  entity = 0;
  *(_WORD *)&this->fields.isBonusFilterEnable = 0;
  this->fields.isServantEquipBonusFilterEnable = 0;
  Instance = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)eventIds,
                                                         (const MethodInfo_3112A1C *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !eventIds )
    goto LABEL_22;
  max_length = eventIds->max_length;
  v9 = Instance;
  if ( max_length && (int)max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C2D6F4(Instance, v6, v7);
      v11 = eventIds->m_Items[v10];
      Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventFilterMaster___);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)EventFilterMaster__TryGetEntity_41757732(
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
          if ( !v9 )
            break;
          Instance = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Remove(
                                                                 v9,
                                                                 v11,
                                                                 (const MethodInfo_376E05C *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
      else
      {
        *(_WORD *)&this->fields.isBonusFilterEnable = 257;
        this->fields.isServantEquipBonusFilterEnable = 1;
      }
      LODWORD(max_length) = eventIds->max_length;
      if ( (__int64)++v10 >= (int)max_length )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C2D6EC(Instance, v6);
  }
LABEL_20:
  if ( !v9 )
    goto LABEL_22;
  this->fields.equipBonusFilterEventIds = System_Collections_Generic_List_int___ToArray(
                                            v9,
                                            (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
  sub_1C2D434(&this->fields.equipBonusFilterEventIds);
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
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x21
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4C21E32 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__getEntityList__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&StringLiteral_17659/*"buttontxt_formation_20"*/);
    byte_4C21E32 = 1;
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
  if ( CondType__IsQuestClear_40102980(ClassBoardReleaseQuestId, -1, 0, 0) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17659/*"buttontxt_formation_20"*/, 0);
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = &this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_33D8944 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v8,
      (const MethodInfo_33D7E00 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *p_classBoardMaxDictionary = v8;
    sub_1C2D434(p_classBoardMaxDictionary);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object
    || (Master_object = (System_Collections_ObjectModel_Collection_T__o *)Master_object[1].fields.items) == 0 )
  {
    sub_1C2D6EC(Master_object, v10);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Master_object,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_23;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_23:
      v16 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8))
        & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_30;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_30:
      v20 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v22 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v21 )
      sub_1C2D6EC(v22, v23);
    if ( !v22 )
      sub_1C2D6EC(0, v23);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                            (ClassBoardSquareMaster_o *)v22,
                            *(_DWORD *)(v21 + 16),
                            0);
    if ( OtherThanNoneEntity )
    {
      if ( !*p_classBoardMaxDictionary )
        sub_1C2D6EC(OtherThanNoneEntity, v25);
      System_Collections_Generic_Dictionary_int__int___Add(
        *p_classBoardMaxDictionary,
        *(_DWORD *)(v21 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_33D87C4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_43;
    }
    v29 = (__int64)&v26->vtable[*v28];
  }
  else
  {
LABEL_43:
    v29 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
}


void FollowerSelectItemListViewManager__SetClassId(
        FollowerSelectItemListViewManager_o *this,
        int32_t followerClassId,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager___c__DisplayClass84_0_o *v5; // x19
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v7; // x1
  FollowerSelectItemListViewManager_c *v8; // x0
  int32_t v9; // w21
  System_Collections_Generic_IEnumerable_T__o *mixItemList; // x21
  System_Collections_Generic_List_object__o *v11; // x22
  const MethodInfo *v12; // x1
  __int64 naturalAligment; // x10
  int32_t v14; // w21
  System_Collections_Generic_IEnumerable_T__o *recommendItemList; // x21
  System_Collections_Generic_List_object__o *v16; // x22
  const MethodInfo *v17; // x1
  __int64 v18; // x10
  System_Collections_Generic_IEnumerable_T__o *originalItemList; // x21
  System_Collections_Generic_List_object__o *v20; // x22
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v22; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x20
  System_Func_object__bool__o *v24; // x23
  const MethodInfo *v25; // x2
  __int64 v26; // x10
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C21E40 & 1) == 0 )
  {
    sub_1C2D490(&ClassButtonControlComponent_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_OfType_FollowerSelectItemListViewItem___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_FollowerSelectItemListViewItem___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C2D490(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C2D490(&System_Func_FollowerSelectItemListViewItem__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem___ctor___77946024);
    sub_1C2D490(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C2D490(&Method_FollowerSelectItemListViewManager___c__DisplayClass84_0__SetClassId_b__0__);
    sub_1C2D490(&FollowerSelectItemListViewManager___c__DisplayClass84_0_TypeInfo);
    byte_4C21E40 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v5 = (FollowerSelectItemListViewManager___c__DisplayClass84_0_o *)sub_1C2D6DC(FollowerSelectItemListViewManager___c__DisplayClass84_0_TypeInfo);
  FollowerSelectItemListViewManager___c__DisplayClass84_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_42;
  v5->fields.followerClassId = followerClassId;
  v8 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v8 = FollowerSelectItemListViewManager_TypeInfo;
  }
  v8->static_fields->followerClassId = followerClassId;
  if ( this->fields.mixItemList && this->fields.originalItemList && this->fields.grandItemList )
  {
    v9 = v5->fields.followerClassId;
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    if ( ClassButtonControlComponent__IsMixSupportGroupType(v9, 0) )
    {
      mixItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.mixItemList;
      v11 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ListViewItem__TypeInfo);
      System_Collections_Generic_List_object____ctor_58233976(
        v11,
        mixItemList,
        (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_ListViewItem___ctor___77946024);
      this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v11;
      sub_1C2D434(&this->fields.itemList);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( itemList )
      {
        System_Collections_Generic_List_object___AddRange(
          itemList,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.grandItemList,
          (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_ListViewItem__AddRange__);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v27,
            itemList,
            (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v28 = v27;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v28,
                    (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v28.fields._current )
            {
              naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
              if ( v28.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
                && (FollowerSelectItemListViewItem_c *)v28.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__UpdateRestriction(
                  (FollowerSelectItemListViewItem_o *)v28.fields._current,
                  v12);
              }
            }
          }
LABEL_40:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v28,
            (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
      }
    }
    else
    {
      v14 = v5->fields.followerClassId;
      if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      if ( ClassButtonControlComponent__IsRecommendSupportGroupType(v14, 0) )
      {
        recommendItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.recommendItemList;
        v16 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor_58233976(
          v16,
          recommendItemList,
          (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_ListViewItem___ctor___77946024);
        this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v16;
        sub_1C2D434(&this->fields.itemList);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v27,
            itemList,
            (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v28 = v27;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v28,
                    (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v28.fields._current )
            {
              v18 = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
              if ( v28.fields._current->klass->_2.naturalAligment >= (unsigned int)v18
                && (FollowerSelectItemListViewItem_c *)v28.fields._current->klass->_2.typeHierarchy[v18 - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__UpdateRestriction(
                  (FollowerSelectItemListViewItem_o *)v28.fields._current,
                  v17);
              }
            }
          }
          goto LABEL_40;
        }
      }
      else
      {
        originalItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.originalItemList;
        v20 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor_58233976(
          v20,
          originalItemList,
          (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_ListViewItem___ctor___77946024);
        this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v20;
        p_itemList = &this->fields.itemList;
        sub_1C2D434(&this->fields.itemList);
        if ( v5->fields.followerClassId )
        {
          v22 = this->fields.itemList;
          v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                       (System_Collections_IEnumerable_o *)this->fields.grandItemList,
                                                                       (const MethodInfo_30FDB2C *)Method_System_Linq_Enumerable_OfType_FollowerSelectItemListViewItem___);
          v24 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_FollowerSelectItemListViewItem__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v24,
            (Il2CppObject *)v5,
            Method_FollowerSelectItemListViewManager___c__DisplayClass84_0__SetClassId_b__0__,
            0);
          itemList = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Where_object_(
                                                                    v23,
                                                                    (System_Func_TSource__bool__o *)v24,
                                                                    (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_FollowerSelectItemListViewItem___);
          if ( !v22 )
            goto LABEL_42;
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)v22,
            (System_Collections_Generic_IEnumerable_T__o *)itemList,
            (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_ListViewItem__AddRange__);
        }
        itemList = (System_Collections_Generic_List_object__o *)*p_itemList;
        if ( *p_itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v27,
            itemList,
            (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v28 = v27;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v28,
                    (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v28.fields._current )
            {
              v26 = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
              if ( v28.fields._current->klass->_2.naturalAligment >= (unsigned int)v26
                && (FollowerSelectItemListViewItem_c *)v28.fields._current->klass->_2.typeHierarchy[v26 - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__AnalyzeEntity(
                  (FollowerSelectItemListViewItem_o *)v28.fields._current,
                  v5->fields.followerClassId,
                  v25);
              }
            }
          }
          goto LABEL_40;
        }
      }
    }
LABEL_42:
    sub_1C2D6EC(itemList, v7);
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
  __int64 v9; // x1

  if ( (byte_4C21E37 & 1) == 0 )
  {
    sub_1C2D490(&ClassButtonControlComponent_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11018/*"RECOMMEND_SERVANT_EMPTY"*/);
    sub_1C2D490(&StringLiteral_11801/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4C21E37 = 1;
  }
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(classId, 0) )
    v5 = (System_String_o **)&StringLiteral_11018/*"RECOMMEND_SERVANT_EMPTY"*/;
  else
    v5 = (System_String_o **)&StringLiteral_11801/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  v6 = *v5;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get(v6, 0);
  if ( !emptyMessageLabel )
    sub_1C2D6EC(v8, v9);
  UILabel__set_text(emptyMessageLabel, v8, 0);
}


void FollowerSelectItemListViewManager__SetFilterButtonImage(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *bonusFilterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4C21E4D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17510/*"btn_sefilter_2_on"*/);
    sub_1C2D490(&StringLiteral_17509/*"btn_sefilter_2"*/);
    byte_4C21E4D = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (bonusFilterSprite = this->fields.bonusFilterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !bonusFilterSprite) )
  {
    sub_1C2D6EC(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17509/*"btn_sefilter_2"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17510/*"btn_sefilter_2_on"*/;
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
  sub_1C2D434(&this->fields.callbackFunc);
  FollowerSelectItemListViewManager__SetMode_32512280(this, mode, v6);
}


void FollowerSelectItemListViewManager__SetMode_32463160(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C2D434(&this->fields.callbackFunc2);
  FollowerSelectItemListViewManager__SetMode_32512280(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewManager__SetMode_32512280(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ClippingObjectList; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x19
  int32_t v8; // w20
  const MethodInfo *v9; // x2
  __int64 *v10; // x8
  const MethodInfo *v11; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v16; // x23
  struct FollowerSelectItemListViewObject_o *tutorialListViewObject; // x23

  if ( (byte_4C21E41 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    sub_1C2D490(&StringLiteral_11339/*"RequestInto"*/);
    byte_4C21E41 = 1;
  }
  if ( mode != 3 )
  {
    this->fields.initMode = mode;
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
    ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
    if ( mode == 1 )
    {
      v10 = &StringLiteral_11339/*"RequestInto"*/;
    }
    else
    {
      if ( mode != 4 )
      {
        if ( mode == 2 )
          FollowerSelectItemListViewManager__RequestListObject_32513000(this, 3, v9);
        return;
      }
      ListViewManager__set_IsInput((ListViewManager_o *)this, 1, 0);
      ClippingObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ClippingObjectList(
                                                                          this,
                                                                          v11);
      if ( !ClippingObjectList )
        goto LABEL_31;
      size = ClippingObjectList->fields._size;
      v13 = ClippingObjectList;
      if ( size >= 1 )
      {
        this->fields.callbackCount = size;
        v14 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v13,
                   v14,
                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
          v16 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(v16, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0);
          if ( !Item )
            break;
          if ( v14 )
          {
            FollowerSelectItemListViewObject__Init_32525548((FollowerSelectItemListViewObject_o *)Item, 2, v16, 0);
          }
          else
          {
            FollowerSelectItemListViewObject__Init_32525548((FollowerSelectItemListViewObject_o *)Item, 0, v16, 0);
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
            sub_1C2D434(&ClippingObjectList[1]);
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
            FollowerSelectItemListViewObject__Init_32523228(
              (FollowerSelectItemListViewObject_o *)ClippingObjectList,
              6,
              0);
          }
          if ( ++v14 >= v13->fields._size )
            return;
        }
LABEL_31:
        sub_1C2D6EC(ClippingObjectList, v6);
      }
      this->fields.callbackCount = 1;
      v10 = &StringLiteral_9936/*"OnMoveEnd"*/;
    }
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)*v10, 0.0, 0);
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
                                                                          (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
      if ( !ClippingObjectList )
        break;
      FollowerSelectItemListViewObject__Init_32523228((FollowerSelectItemListViewObject_o *)ClippingObjectList, 5, 0);
      if ( ++v8 >= v7->fields._size )
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

  if ( (byte_4C21E3E & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewObject_TypeInfo);
    byte_4C21E3E = 1;
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
    sub_1C2D6EC(v7, obj);
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
  FollowerSelectItemListViewObject__Init_32523228((FollowerSelectItemListViewObject_o *)v7, v9, 0);
}


void FollowerSelectItemListViewManager__SetSortButtonImage(
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

  if ( (byte_4C21E51 & 1) == 0 )
  {
    sub_1C2D490(&ClassButtonControlComponent_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_17517/*"btn_sort_up"*/);
    sub_1C2D490(&StringLiteral_17615/*"btn_txt_up"*/);
    sub_1C2D490(&StringLiteral_17566/*"btn_txt_new"*/);
    sub_1C2D490(&StringLiteral_17556/*"btn_txt_down"*/);
    sub_1C2D490(&StringLiteral_17573/*"btn_txt_old"*/);
    sub_1C2D490(&StringLiteral_17514/*"btn_sort_down"*/);
    byte_4C21E51 = 1;
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
    v11 = this->fields.sort;
    if ( v11 )
    {
      v12 = 56;
      if ( IsRecommendSupportGroupType )
        v12 = 152;
      v13 = *(_DWORD *)((char *)&v11->klass + v12);
      if ( v13 == 11 || v13 == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v14 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_17573/*"btn_txt_old"*/ : &StringLiteral_17566/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
          v15 = this->fields.sort;
          if ( v15 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v16 = (System_String_o **)&StringLiteral_17514/*"btn_sort_down"*/;
              v17 = (System_String_o **)&StringLiteral_17517/*"btn_sort_up"*/;
LABEL_35:
              if ( v15->fields.isAscendingOrder )
                v19 = v16;
              else
                v19 = v17;
              UISprite__set_spriteName((UISprite_o *)sort, *v19, 0);
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
          v18 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_17615/*"btn_txt_up"*/ : &StringLiteral_17556/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v18, 0);
          v15 = this->fields.sort;
          if ( v15 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v16 = (System_String_o **)&StringLiteral_17517/*"btn_sort_up"*/;
              v17 = (System_String_o **)&StringLiteral_17514/*"btn_sort_down"*/;
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_39:
    sub_1C2D6EC(sort, v5);
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
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int v11; // w27
  const MethodInfo *v12; // x1
  Il2CppObject *current; // x22
  __int64 naturalAligment; // x10
  __int64 SvtId; // x0
  __int64 v16; // x1
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *followerSelectItemOption; // x8
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C21E54 & 1) == 0 )
  {
    sub_1C2D490(&ClassButtonControlComponent_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C2D490(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    byte_4C21E54 = 1;
  }
  v5 = FollowerSelectItemListViewManager_TypeInfo;
  memset(&v24, 0, sizeof(v24));
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
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_45;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    itemList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v11 = 0;
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v24.fields._current;
    if ( v24.fields._current )
    {
      naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( v24.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (FollowerSelectItemListViewItem_c *)v24.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo )
      {
        SvtId = FollowerSelectItemListViewItem__get_SvtId((FollowerSelectItemListViewItem_o *)v24.fields._current, v12);
        if ( (int)SvtId >= 1 && !LOBYTE(current[16].monitor) )
        {
          followerSelectItemOption = this->fields.followerSelectItemOption;
          if ( !followerSelectItemOption )
            sub_1C2D6EC(SvtId, v16);
          if ( !followerSelectItemOption->fields.isUseGrandBoard
            || BYTE5(current[15].klass)
            || !BYTE6(current[15].klass) )
          {
            HIDWORD(current[1].klass) = v11;
            if ( !v8 )
              sub_1C2D6EC(SvtId, v16);
            items = v8->fields._items;
            v19 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++v8->fields._version;
            if ( !items )
              sub_1C2D6EC(SvtId, v16);
            size = v8->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                current,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v21 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v21[4] = (Il2CppClass *)current;
              sub_1C2D434(v21 + 4);
            }
            ++v11;
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v8;
  sub_1C2D434(&this->fields.itemList);
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
          sub_1C2D6EC(itemList, v9);
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
  Il2CppObject *v16; // x0
  Il2CppObject *Component_object; // x20
  Il2CppObject *v18; // x20
  int64_t v19; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4C21E55 & 1) == 0 )
  {
    sub_1C2D490(&ClassButtonControlComponent_TypeInfo);
    sub_1C2D490(&FollowerListRequest_TypeInfo);
    sub_1C2D490(&FollowerRecommendSupportListRequest_TypeInfo);
    sub_1C2D490(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_25078/*"{0}"*/);
    this = (FollowerSelectItemListViewManager_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C21E55 = 1;
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
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
      v20.fields.r = 1.0;
      v20.fields.g = 1.0;
      v20.fields.b = 1.0;
      v20.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this, v20, 0);
    }
    this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshTitleObject;
    if ( this )
    {
      v18 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)this,
              (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (FollowerSelectItemListViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v18 )
          goto LABEL_59;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v18, 1, 0);
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
        UIWidget__set_color((UIWidget_o *)this, v21, 0);
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
    sub_1C2D6EC(this, method);
  }
  this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshButtonObject;
  if ( !this )
    goto LABEL_59;
  v7 = UnityEngine_GameObject__GetComponent_object_(
         (UnityEngine_GameObject_o *)this,
         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
        v19 = v6;
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v19, v13, v14, v15);
        this = (FollowerSelectItemListViewManager_o *)System_String__Format(
                                                        (System_String_o *)StringLiteral_25078/*"{0}"*/,
                                                        v16,
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

  if ( (byte_4C21E28 & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    byte_4C21E28 = 1;
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
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1C2D9AC(v7);
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

  if ( (byte_4C21E2A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C21E2A = 1;
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
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1C2D9AC(v7);
  FollowerSelectItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_FollowerSelectItemListViewObject__o *FollowerSelectItemListViewManager__get_ClippingObjectList(
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
  __int64 v10; // x1
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

  if ( (byte_4C21E2F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21E2F = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C2D6EC(0, v10);
      Item = (ListViewItem_o *)FollowerSelectItemListViewObject__GetItem(
                                 (FollowerSelectItemListViewObject_o *)Component_object,
                                 0);
      if ( !Item )
        sub_1C2D6EC(0, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_43582756((ListViewManager_o *)this, Item, 0);
        if ( v14 )
        {
          if ( !v3 )
            sub_1C2D6EC(v14, v15);
          items = v3->fields._items;
          v17 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C2D6EC(v14, v15);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C2D6EC(Item, v13);
        items = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C2D6EC(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v19 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v11;
        sub_1C2D434(v19 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FollowerSelectItemListViewObject__o *)v3;
}


System_Collections_Generic_List_FollowerSelectItemListViewObject__o *FollowerSelectItemListViewManager__get_ObjectList(
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

  if ( (byte_4C21E2E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21E2E = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C2D6EC(Component_object, Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C2D6EC(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C2D434(v14 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C21E29 & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    byte_4C21E29 = 1;
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
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1C2D9AC(v7);
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

  if ( (byte_4C21E2B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C21E2B = 1;
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
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1C2D9AC(v7);
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
  sub_1C2D434(&this->fields.m_target);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A69DF4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A69D94;
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
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  _QWORD v17[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v18; // [xsp+10h] [xbp-60h]
  int32_t v19; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v20; // [xsp+38h] [xbp-38h] BYREF
  int32_t v21; // [xsp+3Ch] [xbp-34h] BYREF

  v20 = result;
  v21 = kind;
  v19 = param;
  if ( (byte_4C21E5F & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&FollowerSelectItemListViewManager_ResultKind_TypeInfo);
    byte_4C21E5F = 1;
  }
  v18 = 0u;
  v17[0] = j_il2cpp_value_box_0(
             FollowerSelectItemListViewManager_ResultKind_TypeInfo,
             &v21,
             *(_QWORD *)&result,
             *(_QWORD *)&param,
             callback);
  v17[1] = j_il2cpp_value_box_0(int_TypeInfo, &v20, v10, v11, v12);
  *(_QWORD *)&v18 = j_il2cpp_value_box_0(int_TypeInfo, &v19, v13, v14, v15);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v17, callback, object);
}


void FollowerSelectItemListViewManager_CallbackFunc__EndInvoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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

  if ( (byte_4C21E60 & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewManager___c_TypeInfo);
    byte_4C21E60 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(FollowerSelectItemListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FollowerSelectItemListViewManager___c_TypeInfo->static_fields->__9 = (struct FollowerSelectItemListViewManager___c_o *)v1;
  sub_1C2D434(FollowerSelectItemListViewManager___c_TypeInfo->static_fields);
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

  if ( (byte_4C21E61 & 1) == 0 )
  {
    sub_1C2D490(&ListViewSort_TypeInfo);
    sub_1C2D490(&StringLiteral_6777/*"FollowerSelectEventQuest"*/);
    sub_1C2D490(&StringLiteral_6778/*"FollowerSelectMainQuest"*/);
    byte_4C21E61 = 1;
  }
  if ( questType )
  {
    if ( questType != 1 )
    {
      v8 = sub_1C2D4A4(&System_NotImplementedException_TypeInfo);
      v9 = (System_NotImplementedException_o *)sub_1C2D6DC(v8);
      System_NotImplementedException___ctor(v9, 0);
      v10 = sub_1C2D4A4(&Method_FollowerSelectItemListViewManager___c___cctor_b__136_0__);
      sub_1C2D5B8(v9, v10);
    }
    v4 = &StringLiteral_6777/*"FollowerSelectEventQuest"*/;
  }
  else
  {
    v4 = &StringLiteral_6778/*"FollowerSelectMainQuest"*/;
  }
  v5 = (System_String_o *)*v4;
  v6 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
  ListViewSort___ctor_43600724(v6, v5, 11, 0, 0);
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
    sub_1C2D6EC(this, 0);
  return FollowerSelectItemListViewItem__get_GrandFollowerClassId(x, 0) == this->fields.followerClassId;
}