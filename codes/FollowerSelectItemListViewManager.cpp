void FollowerSelectItemListViewManager___cctor(const MethodInfo *method)
{
  FollowerSelectItemListViewManager___c_c *v1; // x0
  Il2CppObject *v2; // x19
  System_Func_T__TResult__o *v3; // x20
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4E71FA8 & 1) == 0 )
  {
    sub_1D0F0B4(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1D0F0B4(&System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo);
    sub_1D0F0B4(&Method_FollowerSelectItemListViewManager___c___cctor_b__136_0__);
    sub_1D0F0B4(&FollowerSelectItemListViewManager___c_TypeInfo);
    byte_4E71FA8 = 1;
  }
  v1 = FollowerSelectItemListViewManager___c_TypeInfo;
  if ( !FollowerSelectItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager___c_TypeInfo);
    v1 = FollowerSelectItemListViewManager___c_TypeInfo;
  }
  v2 = (Il2CppObject *)v1->static_fields->__9;
  v3 = (System_Func_T__TResult__o *)sub_1D0F300(System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo);
  System_Func_Int32Enum__object____ctor(v3, v2, Method_FollowerSelectItemListViewManager___c___cctor_b__136_0__, 0);
  FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT = (struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)v3;
  sub_1D0F058(FollowerSelectItemListViewManager_TypeInfo->static_fields, v3);
  static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->lastSelectedQuestId = -1;
  static_fields->REFRESH_DARK_COLOR = (struct UnityEngine_Color_o)xmmword_D359B0;
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

  if ( (byte_4E71F7C & 1) == 0 )
  {
    sub_1D0F0B4(&AtlasManager_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1D0F0B4(&StringLiteral_17704/*"btn_bg_12"*/);
    sub_1D0F0B4(&StringLiteral_17776/*"btn_sefilter_2"*/);
    sub_1D0F0B4(&StringLiteral_17934/*"buttontxt_formation_19"*/);
    byte_4E71F7C = 1;
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
  AtlasManager__SetEventSprite(changeSkillButtonSprite, (System_String_o *)StringLiteral_17934/*"buttontxt_formation_19"*/, 0);
  AtlasManager__SetEventSprite(this->fields.bonusFilterSprite, (System_String_o *)StringLiteral_17776/*"btn_sefilter_2"*/, 0);
  changeSkillButton = (UnityEngine_Component_o *)this->fields.bonusFilterSprite;
  if ( !changeSkillButton
    || (changeSkillButton = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))changeSkillButton->klass[2]._1.parent)(
                                                         changeSkillButton,
                                                         changeSkillButton->klass[2]._1.generic_class),
        !sortKindButton)
    || (Component_object = UnityEngine_Component__GetComponent_object_(
                             sortKindButton,
                             (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        changeSkillButton = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(
                                                         (UISprite_o *)Component_object,
                                                         (System_String_o *)StringLiteral_17704/*"btn_bg_12"*/,
                                                         0),
        !Component_object) )
  {
LABEL_11:
    sub_1D0F30C(changeSkillButton, method);
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
    sub_1D0F30C(classButtonControl, *(_QWORD *)&classPos);
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

  if ( (byte_4E71F9A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E71F9A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1D0F30C(0, v6);
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
  System_Collections_Generic_List_object__o *v11; // x21
  System_Collections_Generic_List_object__o *v12; // x21
  System_Collections_Generic_List_object__o *v13; // x21
  System_Collections_Generic_List_object__o *v14; // x21
  __int64 ReturnTypeByQuestId; // x0
  __int64 v16; // x1
  FollowerSelectItemListViewManager_c *v17; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct ListViewSort_o *v19; // x0
  struct ListViewSort_o **p_sort; // x21
  int32_t v21; // w29
  ClassButtonControlComponent_o *classButtonControl; // x22
  ClassButtonControlComponent_CallbackFunc_o *v23; // x27
  const MethodInfo *v24; // x4
  int32_t InitialDisplayClass; // w22
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
  System_Int32_array *OngoingQuestTargetEventIds; // x22
  EventUpValSetupInfo_o *v28; // x27
  __int64 v29; // x8
  __int64 v30; // x29
  unsigned __int64 v31; // x19
  int32_t v32; // w0
  ClassButtonControlComponent_o *v33; // x21
  const MethodInfo *v34; // x2
  FollowerSelectItemListViewManager_o *v35; // x19
  QuestPhaseEntity_o *v36; // x22
  bool IsNoneSupportFriendPoint; // w21
  _BOOL4 v38; // w23
  bool v39; // w22
  __int64 v40; // x21
  struct EventUpValSetupInfo_o *setupInfo; // x1
  long double v42; // q0
  __int64 v43; // x0
  int32_t v44; // w28
  __int64 v45; // x0
  Il2CppObject *MasterData_object; // x27
  FollowerInfo_array *QuestFollowerList; // x26
  int v48; // w19
  bool IsMyServantOrNpcRestriction_44806932; // w21
  BalanceConfig_c *v50; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  bool IsQuestClear_41684364; // w20
  int max_length; // w8
  QuestRestrictionInfo_o *v54; // x19
  int32_t v55; // w25
  int v56; // w23
  FollowerInfo_o *v57; // x29
  ServantLeaderInfo_o *ServantLeaderInfo; // x20
  int32_t v59; // w0
  System_Int32_array *v60; // x22
  int32_t Rarity; // w0
  System_Collections_Generic_List_object__o *v62; // x22
  char v63; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // x0
  __int64 v65; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v66; // x20
  __int64 v67; // x19
  int32_t ClassBoardBaseId; // w27
  Il2CppObject *v69; // x20
  ClassBoardInfo_o *v70; // x20
  Il2CppObject *v71; // x19
  __int64 v72; // x0
  System_Int32_array *OpenClassIdArrayFromBaseId; // x0
  struct System_Object_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  Il2CppClass **v77; // x0
  System_Object_array *v78; // x0
  FollowerSelectItemListViewManager_c *v79; // x0
  int32_t followerClassId; // w27
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v81; // x22
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x19
  FollowerSelectItemListViewItem_o *v83; // x20
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
  bool v96; // w8
  FollowerSelectItemListViewManager_o *v97; // x28
  int namespaze; // w8
  unsigned int i; // w25
  void **v100; // x9
  _QWORD *v101; // x8
  Il2CppObject *v102; // x0
  Il2CppObject *v103; // x21
  __int64 v104; // x20
  BalanceConfig_c *v105; // x0
  struct BalanceConfig_StaticFields *v106; // x9
  int32_t FixEventSupportDeckNum; // w21
  int32_t FixMainSupportDeckNum; // w22
  int32_t deckPriority; // w21
  unsigned __int64 v110; // x23
  int32_t v111; // w26
  System_Collections_Generic_Dictionary_int__int__o *v112; // x24
  FollowerInfo_o *v113; // x27
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v114; // x29
  int32_t v115; // w25
  FollowerSelectItemListViewItem_o *v116; // x22
  __int64 v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  __int64 v120; // x8
  int32_t j; // w21
  struct BalanceConfig_StaticFields *v122; // x8
  int32_t v123; // w22
  int32_t v124; // w26
  int32_t v125; // w22
  unsigned __int64 v126; // x24
  int32_t v127; // w26
  FollowerInfo_o *v128; // x27
  int v129; // w25
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v130; // x23
  int32_t v131; // w19
  FollowerSelectItemListViewItem_o *v132; // x29
  __int64 v133; // x8
  _QWORD *v134; // x9
  __int64 v135; // x10
  __int64 v136; // x8
  Il2CppClass *v137; // x22
  const char *v138; // x8
  int v139; // w23
  unsigned __int64 v140; // x24
  FollowerInfo_o *v141; // x25
  Il2CppObject *v142; // x0
  __int64 v143; // x29
  BalanceConfig_c *v144; // x0
  struct BalanceConfig_StaticFields *v145; // x9
  int32_t v146; // w20
  int32_t v147; // w21
  int32_t v148; // w26
  unsigned __int64 v149; // x24
  int32_t v150; // w21
  int32_t v151; // w28
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v152; // x23
  System_Collections_Generic_Dictionary_int__int__o *v153; // x27
  FollowerSelectItemListViewItem_o *v154; // x20
  __int64 v155; // x8
  _QWORD *v156; // x9
  __int64 v157; // x10
  __int64 v158; // x8
  int32_t v159; // w21
  BalanceConfig_c *v160; // x0
  struct BalanceConfig_StaticFields *v161; // x8
  int32_t v162; // w20
  int32_t v163; // w26
  unsigned __int64 v164; // x28
  int32_t v165; // w27
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v166; // x23
  int v167; // w19
  System_Collections_Generic_Dictionary_int__int__o *v168; // x22
  FollowerSelectItemListViewItem_o *v169; // x20
  __int64 v170; // x8
  _QWORD *v171; // x9
  __int64 v172; // x10
  __int64 v173; // x8
  bool isGrandServantRestriction; // w19
  struct ServantLeaderInfo_array *userSvtGrandHash; // x24
  int v176; // w8
  unsigned int v177; // w27
  ServantLeaderInfo_o *v178; // x9
  int32_t v179; // w23
  System_Collections_Generic_Dictionary_int__int__o *v180; // x22
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *followerSelectItemOption; // x21
  int32_t grandGraphId; // w25
  FollowerSelectItemListViewItem_o *v183; // x20
  __int64 v184; // x8
  _QWORD *v185; // x9
  __int64 v186; // x10
  __int64 v187; // x8
  _BOOL4 v188; // w24
  Il2CppClass *v189; // x19
  bool v190; // w20
  const char *v191; // x8
  signed __int64 k; // x25
  __int64 v193; // x22
  __int64 v194; // x23
  bool v195; // w27
  int32_t v196; // w29
  __int64 v197; // x8
  __int64 v198; // x8
  __int64 v199; // x10
  __int64 v200; // x8
  int v201; // w9
  bool v202; // w24
  __int64 v203; // x10
  int v204; // w11
  __int64 v205; // x12
  __int64 v206; // x8
  __int64 v207; // x8
  __int64 v208; // x24
  int32_t v209; // w24
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v210; // x26
  System_Collections_Generic_Dictionary_int__int__o *v211; // x21
  FollowerSelectItemListViewItem_o *v212; // x23
  __int64 v213; // x8
  _QWORD *v214; // x9
  __int64 v215; // x10
  __int64 v216; // x8
  const MethodInfo *v217; // x2
  FollowerSelectItemListViewManager_c *v218; // x0
  const MethodInfo *v219; // x2
  const MethodInfo *v220; // x1
  struct UIScrollView_o *scrollView; // x8
  __int64 v222; // x0
  int32_t supportDeckId; // [xsp+0h] [xbp-170h]
  int32_t supportDeckIda; // [xsp+0h] [xbp-170h]
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary; // [xsp+10h] [xbp-160h]
  UserFollowMaster_o *v226; // [xsp+50h] [xbp-120h]
  ClassBoardClassMaster_o *Master_object; // [xsp+58h] [xbp-118h]
  ClassBoardClassMaster_o *v228; // [xsp+58h] [xbp-118h]
  struct System_Collections_Generic_List_ListViewItem__o **p_recommendItemList; // [xsp+60h] [xbp-110h]
  _BOOL4 v230; // [xsp+6Ch] [xbp-104h]
  unsigned int v231; // [xsp+70h] [xbp-100h]
  int pos; // [xsp+7Ch] [xbp-F4h]
  Il2CppObject *v236; // [xsp+88h] [xbp-E8h]
  __int64 v237; // [xsp+88h] [xbp-E8h]
  bool HasFlag_43847172; // [xsp+88h] [xbp-E8h]
  struct System_Collections_Generic_List_ListViewItem__o **p_originalItemList; // [xsp+90h] [xbp-E0h]
  bool isReleasedClassBoard; // [xsp+98h] [xbp-D8h]
  bool v241[8]; // [xsp+98h] [xbp-D8h]
  QuestPhaseEntity_o *v242; // [xsp+A0h] [xbp-D0h]
  int v243; // [xsp+A0h] [xbp-D0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v244; // [xsp+A8h] [xbp-C8h]
  unsigned int v245; // [xsp+A8h] [xbp-C8h]
  bool followerInfo; // [xsp+B0h] [xbp-C0h]
  FollowerInfo_o *followerInfoa; // [xsp+B0h] [xbp-C0h]
  FollowerInfo_o *followerInfob; // [xsp+B0h] [xbp-C0h]
  _BOOL4 IsMyServantOrNpcRestriction; // [xsp+B8h] [xbp-B8h]
  Il2CppClass *klass; // [xsp+B8h] [xbp-B8h]
  __int64 v251; // [xsp+B8h] [xbp-B8h]
  struct System_Collections_Generic_List_ListViewItem__o **p_mixItemList; // [xsp+C0h] [xbp-B0h]
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o **p_followerSelectItemOption; // [xsp+C8h] [xbp-A8h]
  UserFollowMaster_o *v254; // [xsp+C8h] [xbp-A8h]
  Il2CppObject *v256; // [xsp+D8h] [xbp-98h] BYREF
  Il2CppObject *v257; // [xsp+E0h] [xbp-90h] BYREF
  Il2CppObject *v258; // [xsp+E8h] [xbp-88h] BYREF
  UserClassBoardSquareEntity_o *v259; // [xsp+F0h] [xbp-80h] BYREF
  bool isWhole; // [xsp+FCh] [xbp-74h] BYREF
  Il2CppObject *v261; // [xsp+100h] [xbp-70h] BYREF
  NpcFollowerEntity_o *entity; // [xsp+108h] [xbp-68h] BYREF

  if ( (byte_4E71F7E & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&ClassBoardInfo_TypeInfo);
    sub_1D0F0B4(&ClassButtonControlComponent_TypeInfo);
    sub_1D0F0B4(&CondType_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserFollowerMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1D0F0B4(&EventUpValSetupInfo_TypeInfo);
    sub_1D0F0B4(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1D0F0B4(&Method_FollowerSelectItemListViewManager_OnChangeClass__);
    sub_1D0F0B4(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1D0F0B4(&FollowerSelectItemListViewManager_FollowerSelectItemOption_TypeInfo);
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ClassBoardInfo__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1D0F0B4(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_ClassBoardInfo__TypeInfo);
    sub_1D0F0B4(&System_Math_TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&ServantLeaderInfo___TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1D0F0B4(&StringLiteral_3225/*"BonusFilterEventId"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E71F7E = 1;
  }
  v261 = 0;
  entity = 0;
  isWhole = 0;
  v258 = 0;
  v259 = 0;
  v256 = 0;
  v257 = 0;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1D0F058(&this->fields.questRestrictionInfo, questRestrictionInfo);
  v11 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.mixItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v11;
  p_mixItemList = &this->fields.mixItemList;
  sub_1D0F058(&this->fields.mixItemList, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.originalItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v12;
  p_originalItemList = &this->fields.originalItemList;
  sub_1D0F058(&this->fields.originalItemList, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.recommendItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v13;
  p_recommendItemList = &this->fields.recommendItemList;
  sub_1D0F058(&this->fields.recommendItemList, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.grandItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v14;
  sub_1D0F058(&this->fields.grandItemList, v14);
  ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0);
  v17 = FollowerSelectItemListViewManager_TypeInfo;
  v231 = ReturnTypeByQuestId;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v17 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v17->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT )
    goto LABEL_359;
  v19 = (struct ListViewSort_o *)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))LIST_VIEW_SORT->fields.invoke_impl)(
                                   LIST_VIEW_SORT->fields.method_code,
                                   v231,
                                   LIST_VIEW_SORT->fields.method);
  this->fields.sort = v19;
  p_sort = &this->fields.sort;
  sub_1D0F058(&this->fields.sort, v19);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_359;
  v21 = *(_DWORD *)(ReturnTypeByQuestId + 84);
  classButtonControl = this->fields.classButtonControl;
  v23 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1D0F300(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v23,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0);
  if ( !classButtonControl )
    goto LABEL_359;
  pos = v21;
  ClassButtonControlComponent__init(classButtonControl, v23, questId, questPhase, questRestrictionInfo, v21, 0);
  if ( !*p_sort )
    goto LABEL_359;
  InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                          this,
                          questId,
                          questPhase,
                          (*p_sort)->fields.isRequestLoad,
                          v24);
  static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  static_fields->followerClassId = InitialDisplayClass;
  static_fields->lastSelectedQuestId = questId;
  static_fields->lastSelectedQuestPhase = questPhase;
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(InitialDisplayClass, 0) )
    this->fields.isGetRecommendSupport = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_359;
  OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                 (EventQuestMaster_o *)ReturnTypeByQuestId,
                                 questId,
                                 questPhase,
                                 0,
                                 0);
  v28 = (EventUpValSetupInfo_o *)sub_1D0F300(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_43111788(v28, OngoingQuestTargetEventIds, 0, questId, questPhase, 0);
  this->fields.setupInfo = v28;
  sub_1D0F058(&this->fields.setupInfo, v28);
  ReturnTypeByQuestId = (__int64)this->fields.sort;
  if ( !ReturnTypeByQuestId )
    goto LABEL_359;
  ListViewSort__Load((ListViewSort_o *)ReturnTypeByQuestId, 0);
  if ( !OngoingQuestTargetEventIds )
    goto LABEL_359;
  if ( OngoingQuestTargetEventIds->max_length )
  {
    ReturnTypeByQuestId = (__int64)UnityEngine_PlayerPrefs__GetString_73317788((System_String_o *)StringLiteral_3225/*"BonusFilterEventId"*/, 0);
    if ( !ReturnTypeByQuestId )
      goto LABEL_359;
    if ( *(int *)(ReturnTypeByQuestId + 16) < 1 )
      goto LABEL_27;
    ReturnTypeByQuestId = (__int64)System_String__Split((System_String_o *)ReturnTypeByQuestId, 0x2Cu, 0, 0);
    if ( !ReturnTypeByQuestId )
      goto LABEL_359;
    v29 = *(_QWORD *)(ReturnTypeByQuestId + 24);
    v30 = ReturnTypeByQuestId;
    if ( (int)v29 < 1 )
    {
LABEL_27:
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_359;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 18, 0, 0);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_359;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 19, 0, 0);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_359;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 20, 0, 0);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_359;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 40, 1, 0);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_359;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 41, 1, 0);
    }
    else
    {
      v31 = 0;
      while ( 1 )
      {
        if ( v31 >= (unsigned int)v29 )
          goto LABEL_360;
        v32 = System_Int32__Parse(*(System_String_o **)(v30 + 32 + 8 * v31), 0);
        ReturnTypeByQuestId = System_Linq_Enumerable__Contains_int_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)OngoingQuestTargetEventIds,
                                v32,
                                (const MethodInfo_326C62C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (ReturnTypeByQuestId & 1) != 0 )
          break;
        LODWORD(v29) = *(_DWORD *)(v30 + 24);
        if ( (__int64)++v31 >= (int)v29 )
          goto LABEL_27;
      }
    }
  }
  this->fields.isInput = 0;
  ReturnTypeByQuestId = (__int64)FollowerSelectItemListViewManager_TypeInfo;
  v33 = this->fields.classButtonControl;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  if ( !v33 )
    goto LABEL_359;
  ClassButtonControlComponent__setCursor(
    v33,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, OngoingQuestTargetEventIds, v34);
  ReturnTypeByQuestId = (__int64)this->fields.bonusFilterKindButton;
  if ( !ReturnTypeByQuestId )
    goto LABEL_359;
  ReturnTypeByQuestId = (__int64)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)ReturnTypeByQuestId,
                                   0);
  if ( !ReturnTypeByQuestId )
    goto LABEL_359;
  v35 = this;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)ReturnTypeByQuestId,
    this->fields.isBonusFilterEnable,
    0);
  if ( this->fields.isBonusFilterEnable )
  {
    ReturnTypeByQuestId = (__int64)this->fields.bonusFilterKindLabel;
    if ( !ReturnTypeByQuestId )
      goto LABEL_359;
    UILabel__set_text((UILabel_o *)ReturnTypeByQuestId, (System_String_o *)StringLiteral_1/*""*/, 0);
    v35 = this;
  }
  v35->fields.isRefreshBtnHide = 0;
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_359;
  ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_359;
  v36 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)ReturnTypeByQuestId, questId, questPhase, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !v36 )
    goto LABEL_354;
  IsNoneSupportFriendPoint = QuestPhaseEntity__IsNoneSupportFriendPoint(v36, 0);
  ReturnTypeByQuestId = QuestPhaseEntity__IsUseGrandBoard(v36, 0);
  v242 = v36;
  if ( (ReturnTypeByQuestId & 1) != 0 )
  {
    if ( !questRestrictionInfo )
      goto LABEL_359;
    v38 = QuestRestrictionInfo__get_ActiveGrandBoardCount(questRestrictionInfo, 0) < 1
       || QuestRestrictionInfo__IsGrandSelectableSupport(questRestrictionInfo, 0);
  }
  else
  {
    v38 = 0;
  }
  v39 = IsNoneSupportFriendPoint;
  v40 = sub_1D0F300(FollowerSelectItemListViewManager_FollowerSelectItemOption_TypeInfo);
  *(_BYTE *)(v40 + 64) = 1;
  System_Object___ctor((Il2CppObject *)v40, 0);
  *(_DWORD *)(v40 + 16) = friendPointUpVal;
  *(_DWORD *)(v40 + 20) = friendPointUpMaxVal;
  *(_QWORD *)(v40 + 24) = friendPointCampaignEntityList;
  sub_1D0F058(v40 + 24, friendPointCampaignEntityList);
  *(_BYTE *)(v40 + 32) = this->fields.isBonusFilterEnable;
  *(_BYTE *)(v40 + 33) = this->fields.isServantBonusFilterEnable;
  *(_BYTE *)(v40 + 34) = this->fields.isServantEquipBonusFilterEnable;
  setupInfo = this->fields.setupInfo;
  *(_QWORD *)(v40 + 40) = setupInfo;
  sub_1D0F058(v40 + 40, setupInfo);
  *(_QWORD *)(v40 + 48) = questRestrictionInfo;
  sub_1D0F058(v40 + 48, questRestrictionInfo);
  *(_BYTE *)(v40 + 65) = v39;
  v230 = v38;
  *(_BYTE *)(v40 + 66) = v38;
  this->fields.followerSelectItemOption = (struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *)v40;
  p_followerSelectItemOption = &this->fields.followerSelectItemOption;
  sub_1D0F058(&this->fields.followerSelectItemOption, v40);
  v43 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
    v43 = sub_1CE513C(v42);
  v44 = questPhase;
  v45 = *(_QWORD *)(*(_QWORD *)(v43 + 192) + 16LL);
  if ( (*(_BYTE *)(v45 + 309) & 1) == 0 )
    v45 = sub_1CE513C(v42);
  ReturnTypeByQuestId = **(_QWORD **)(v45 + 184);
  if ( !ReturnTypeByQuestId
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)ReturnTypeByQuestId,
                              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_NpcFollowerMaster___),
        (ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_NpcFollowerMaster___)) == 0
    || (QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                              (NpcFollowerMaster_o *)ReturnTypeByQuestId,
                              questId,
                              questPhase,
                              0),
        (ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
  {
LABEL_359:
    sub_1D0F30C(ReturnTypeByQuestId, v16);
  }
  v48 = *(_DWORD *)(ReturnTypeByQuestId + 80);
  if ( v48 < 1 )
  {
    IsMyServantOrNpcRestriction_44806932 = 0;
    goto LABEL_62;
  }
  if ( questRestrictionInfo )
  {
    IsMyServantOrNpcRestriction_44806932 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_44806932(
                                             questRestrictionInfo,
                                             pos,
                                             0);
LABEL_62:
    IsMyServantOrNpcRestriction = 0;
    if ( questRestrictionInfo && v48 <= 0 )
      IsMyServantOrNpcRestriction = QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0);
    goto LABEL_66;
  }
  IsMyServantOrNpcRestriction_44806932 = 0;
  IsMyServantOrNpcRestriction = 0;
LABEL_66:
  v50 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v50 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v50->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_41684364 = CondType__IsQuestClear_41684364(ClassBoardReleaseQuestId, -1, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v244 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
  if ( !QuestFollowerList )
    goto LABEL_359;
  max_length = QuestFollowerList->max_length;
  v54 = questRestrictionInfo;
  if ( max_length >= 1 )
  {
    v55 = 0;
    v56 = 0;
    isReleasedClassBoard = IsQuestClear_41684364;
    v236 = MasterData_object;
    do
    {
      if ( v56 >= (unsigned int)max_length )
        goto LABEL_360;
      if ( !v54 )
        goto LABEL_359;
      v57 = QuestFollowerList->m_Items[v56];
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v54->fields.questId, 0);
      if ( !v57 )
        goto LABEL_359;
      ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v57, 0, ReturnTypeByQuestId, 0);
      v59 = FollowerInfo__GetReturnTypeByQuestId(v54->fields.questId, 0);
      ReturnTypeByQuestId = (__int64)FollowerInfo__GetNpcServantIndividualityFull(v57, 0, v59, 0);
      if ( !ServantLeaderInfo )
        goto LABEL_359;
      v60 = (System_Int32_array *)ReturnTypeByQuestId;
      Rarity = ServantLeaderInfo__getRarity(ServantLeaderInfo, 0);
      ReturnTypeByQuestId = QuestRestrictionInfo__IsRestriction_44788504(
                              v54,
                              &isWhole,
                              v60,
                              Rarity,
                              ServantLeaderInfo->fields.lv,
                              pos,
                              3,
                              0);
      if ( (ReturnTypeByQuestId & 1) != 0 )
        goto LABEL_141;
      if ( IsMyServantOrNpcRestriction_44806932 )
      {
        ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality_44810060(
                                questRestrictionInfo,
                                v60,
                                pos,
                                0);
        if ( (ReturnTypeByQuestId & 1) != 0 )
          goto LABEL_141;
      }
      if ( v57->fields.isFixedNpc )
        goto LABEL_141;
      v54 = questRestrictionInfo;
      if ( IsMyServantOrNpcRestriction && v57->fields.isMySvtOrNpc )
        goto LABEL_142;
      if ( !MasterData_object )
        goto LABEL_359;
      if ( NpcFollowerMaster__TryGetEntity(
             (NpcFollowerMaster_o *)MasterData_object,
             &entity,
             v57->fields.userId,
             questId,
             v44,
             0) )
      {
        ReturnTypeByQuestId = (__int64)entity;
        if ( !entity )
          goto LABEL_359;
        followerInfo = NpcFollowerEntity__IsRecommendedFollower(entity, 0);
      }
      else
      {
        followerInfo = 0;
      }
      v62 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ClassBoardInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v62,
        (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
      if ( !v244 )
        goto LABEL_359;
      ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetEntity(
                              v244,
                              &v261,
                              v57->fields.npcFollowerSvtId,
                              (const MethodInfo_3538378 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
      if ( (ReturnTypeByQuestId & 1) != 0 )
      {
        if ( !v261 )
          goto LABEL_359;
        ReturnTypeByQuestId = NpcServantFollowerEntity__IsNotClassBoard((int32_t)v261[7].monitor, 0);
        if ( (ReturnTypeByQuestId & 1) != 0
          || (ReturnTypeByQuestId = QuestPhaseEntity__IsNotClassBoard(v242, 0), (ReturnTypeByQuestId & 1) != 0) )
        {
          v63 = 1;
          goto LABEL_119;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
        *(_QWORD *)&v64.fields.currentCryptoKey = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantMaster___);
        v65 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        *(_QWORD *)&v64.fields.fakeValue = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
        v66 = *(DataMasterBase_TMaster__TEntity__PKType__o **)&v64.fields.currentCryptoKey;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          v67 = *(_QWORD *)&v64.fields.fakeValue;
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v64.fields.fakeValue = v67;
        }
        *(_QWORD *)&v64.fields.currentCryptoKey = v65;
        ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v64, 0);
        if ( !v66 )
          goto LABEL_359;
        ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         v66,
                                         ReturnTypeByQuestId,
                                         (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !ReturnTypeByQuestId || !Master_object )
          goto LABEL_359;
        ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(
                             Master_object,
                             *(_DWORD *)(ReturnTypeByQuestId + 80),
                             0);
        v69 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4E710BF )
        {
          sub_1D0F0B4(&NetworkManager_TypeInfo);
          byte_4E710BF = 1;
        }
        ReturnTypeByQuestId = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          ReturnTypeByQuestId = (__int64)NetworkManager_TypeInfo;
        }
        if ( !v69 )
          goto LABEL_359;
        ReturnTypeByQuestId = UserClassBoardSquareMaster__TryGetEntity(
                                (UserClassBoardSquareMaster_o *)v69,
                                &v259,
                                *(_QWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 64LL),
                                ClassBoardBaseId,
                                0);
        if ( (ReturnTypeByQuestId & 1) != 0 )
        {
          v70 = (ClassBoardInfo_o *)sub_1D0F300(ClassBoardInfo_TypeInfo);
          ClassBoardInfo___ctor(v70, 0);
          if ( !v70 )
            goto LABEL_359;
          v70->fields.classBoardBaseId = ClassBoardBaseId;
          if ( !v259 )
            goto LABEL_359;
          ReturnTypeByQuestId = (__int64)v259->fields.classBoardSquareIds;
          if ( !ReturnTypeByQuestId )
            goto LABEL_359;
          v71 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0);
          v70->fields.squareIds = (struct System_Int32_array *)sub_1D0F1F0(v71, int___TypeInfo);
          v72 = sub_1D0F1F0(v71, int___TypeInfo);
          sub_1D0F058(&v70->fields.squareIds, v72);
          OpenClassIdArrayFromBaseId = ClassBoardClassMaster__GetOpenClassIdArrayFromBaseId(
                                         Master_object,
                                         ClassBoardBaseId,
                                         0);
          v70->fields.releasedClassIds = OpenClassIdArrayFromBaseId;
          ReturnTypeByQuestId = sub_1D0F058(&v70->fields.releasedClassIds, OpenClassIdArrayFromBaseId);
          if ( !v62 )
            goto LABEL_359;
          items = v62->fields._items;
          v75 = Method_System_Collections_Generic_List_ClassBoardInfo__Add__;
          ++v62->fields._version;
          if ( !items )
            goto LABEL_359;
          size = v62->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v62,
              (Il2CppObject *)v70,
              *(const MethodInfo_395C410 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
          }
          else
          {
            v77 = &items->obj.klass + size;
            v62->fields._size = size + 1;
            v77[4] = (Il2CppClass *)v70;
            sub_1D0F058(v77 + 4, v70);
          }
          v63 = 0;
          v44 = questPhase;
          goto LABEL_120;
        }
      }
      v63 = 0;
LABEL_119:
      if ( !v62 )
        goto LABEL_359;
LABEL_120:
      v78 = System_Collections_Generic_List_object___ToArray(
              v62,
              (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
      v57->fields.userClassBoardInfo = (struct ClassBoardInfo_array *)v78;
      sub_1D0F058(&v57->fields.userClassBoardInfo, v78);
      v79 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v79 = FollowerSelectItemListViewManager_TypeInfo;
      }
      followerClassId = v79->static_fields->followerClassId;
      v81 = *p_followerSelectItemOption;
      if ( (v63 & 1) != 0 )
        classBoardMaxDictionary = 0;
      else
        classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
      v83 = (FollowerSelectItemListViewItem_o *)sub_1D0F300(FollowerSelectItemListViewItem_TypeInfo);
      FollowerSelectItemListViewItem___ctor(
        v83,
        v55,
        0,
        v57,
        followerClassId,
        followerInfo,
        v81,
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
        goto LABEL_359;
      v84 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      MasterData_object = v236;
      v85 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v84 )
        goto LABEL_359;
      v86 = *(int *)(ReturnTypeByQuestId + 24);
      if ( (unsigned int)v86 >= *(_DWORD *)(v84 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v83,
          *(const MethodInfo_395C410 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
      }
      else
      {
        v87 = v84 + 8 * v86;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v86 + 1;
        *(_QWORD *)(v87 + 32) = v83;
        sub_1D0F058(v87 + 32, v83);
      }
      ReturnTypeByQuestId = (__int64)*p_originalItemList;
      if ( !*p_originalItemList )
        goto LABEL_359;
      v88 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      v89 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v88 )
        goto LABEL_359;
      v90 = *(int *)(ReturnTypeByQuestId + 24);
      if ( (unsigned int)v90 >= *(_DWORD *)(v88 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v83,
          *(const MethodInfo_395C410 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
      }
      else
      {
        v91 = v88 + 8 * v90;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v90 + 1;
        *(_QWORD *)(v91 + 32) = v83;
        sub_1D0F058(v91 + 32, v83);
      }
      ReturnTypeByQuestId = (__int64)*p_recommendItemList;
      if ( !*p_recommendItemList )
        goto LABEL_359;
      v92 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      v93 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v92 )
        goto LABEL_359;
      v94 = *(int *)(ReturnTypeByQuestId + 24);
      if ( (unsigned int)v94 >= *(_DWORD *)(v92 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v83,
          *(const MethodInfo_395C410 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
      }
      else
      {
        v95 = v92 + 8 * v94;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v94 + 1;
        *(_QWORD *)(v95 + 32) = v83;
        ReturnTypeByQuestId = sub_1D0F058(v95 + 32, v83);
      }
      ++v55;
LABEL_141:
      v54 = questRestrictionInfo;
LABEL_142:
      max_length = QuestFollowerList->max_length;
      ++v56;
    }
    while ( v56 < max_length );
  }
  if ( !v54 || !QuestRestrictionInfo__IsMyServantOrNpcRestriction(v54, 0) )
    goto LABEL_151;
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_359;
  if ( *(int *)(ReturnTypeByQuestId + 80) >= 1 )
    v96 = !QuestRestrictionInfo__IsSelectableNormalSupport(questRestrictionInfo, pos, 0);
  else
LABEL_151:
    v96 = 0;
  this->fields.isRefreshBtnHide = v96;
  if ( !v96 && !v242->fields.isNpcOnly )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    v97 = this;
    if ( !ReturnTypeByQuestId )
      goto LABEL_359;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v258,
                            (const MethodInfo_3538458 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v258 )
        goto LABEL_359;
      klass = v258[1].klass;
      if ( klass )
      {
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
        {
          for ( i = 0; (int)i < namespaze; ++i )
          {
            if ( i >= namespaze )
              goto LABEL_360;
            v100 = &klass->_1.image + (int)i;
            v101 = v100[4];
            followerInfoa = (FollowerInfo_o *)(v100 + 4);
            if ( !v101 )
              goto LABEL_359;
            ReturnTypeByQuestId = v101[15];
            if ( !ReturnTypeByQuestId )
              goto LABEL_359;
            v237 = *(_QWORD *)(ReturnTypeByQuestId + 24);
            v102 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0);
            if ( v102 )
            {
              v103 = v102;
              v104 = sub_1D0F1F0(v102, int___TypeInfo);
              if ( !v104 )
              {
                sub_1D0F6A8(v103);
LABEL_361:
                sub_1D0F6A8(v104);
LABEL_362:
                v222 = sub_1D0F330();
                sub_1D0F1DC(v222, 0);
              }
            }
            else
            {
              v104 = 0;
            }
            v105 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v105 = BalanceConfig_TypeInfo;
            }
            v106 = v105->static_fields;
            FixMainSupportDeckNum = v106->FixMainSupportDeckNum;
            FixEventSupportDeckNum = v106->FixEventSupportDeckNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            ReturnTypeByQuestId = System_Math__Max_67084744(FixMainSupportDeckNum, FixEventSupportDeckNum, 0);
            v245 = i;
            if ( (int)v237 >= 1 )
            {
              deckPriority = ReturnTypeByQuestId;
              v110 = 0;
              do
              {
                if ( !*p_originalItemList )
                  goto LABEL_359;
                if ( i >= LODWORD(klass->_1.namespaze) )
                  goto LABEL_360;
                if ( !v104 )
                  goto LABEL_359;
                if ( v110 >= *(unsigned int *)(v104 + 24) )
                  goto LABEL_360;
                v111 = (*p_originalItemList)->fields._size;
                v112 = v97->fields.classBoardMaxDictionary;
                v113 = (FollowerInfo_o *)followerInfoa->klass;
                v114 = *p_followerSelectItemOption;
                v115 = *(_DWORD *)(v104 + 32 + 4 * v110);
                v116 = (FollowerSelectItemListViewItem_o *)sub_1D0F300(FollowerSelectItemListViewItem_TypeInfo);
                FollowerSelectItemListViewItem___ctor(
                  v116,
                  v111,
                  0,
                  v113,
                  0,
                  0,
                  v114,
                  1,
                  v115,
                  deckPriority,
                  v112,
                  1,
                  0,
                  0,
                  0,
                  0,
                  0);
                ReturnTypeByQuestId = (__int64)v97->fields.originalItemList;
                if ( !ReturnTypeByQuestId )
                  goto LABEL_359;
                v117 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v118 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v117 )
                  goto LABEL_359;
                v119 = *(int *)(ReturnTypeByQuestId + 24);
                i = v245;
                if ( (unsigned int)v119 >= *(_DWORD *)(v117 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    (Il2CppObject *)v116,
                    *(const MethodInfo_395C410 **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
                }
                else
                {
                  v120 = v117 + 8 * v119;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v119 + 1;
                  *(_QWORD *)(v120 + 32) = v116;
                  ReturnTypeByQuestId = sub_1D0F058(v120 + 32, v116);
                }
                ++v110;
                --deckPriority;
              }
              while ( (unsigned int)v237 != v110 );
            }
            for ( j = 0; ; ++j )
            {
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              }
              v122 = *(struct BalanceConfig_StaticFields **)(ReturnTypeByQuestId + 184);
              if ( j >= v122->SupportDeckMemberMax )
                break;
              if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
              {
                j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId);
                v122 = BalanceConfig_TypeInfo->static_fields;
              }
              v124 = v122->FixMainSupportDeckNum;
              v123 = v122->FixEventSupportDeckNum;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              ReturnTypeByQuestId = System_Math__Max_67084744(v124, v123, 0);
              if ( (int)v237 >= 1 )
              {
                v125 = ReturnTypeByQuestId;
                v126 = 0;
                while ( *p_mixItemList )
                {
                  ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                  v127 = (*p_mixItemList)->fields._size;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( i >= LODWORD(klass->_1.namespaze) )
                    goto LABEL_360;
                  if ( !v104 )
                    goto LABEL_359;
                  if ( v126 >= *(unsigned int *)(v104 + 24) )
                    goto LABEL_360;
                  v128 = (FollowerInfo_o *)followerInfoa->klass;
                  v129 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 180LL);
                  v130 = *p_followerSelectItemOption;
                  v131 = *(_DWORD *)(v104 + 32 + 4 * v126);
                  classBoardMaxNumDictionary = this->fields.classBoardMaxDictionary;
                  v97 = this;
                  v132 = (FollowerSelectItemListViewItem_o *)sub_1D0F300(FollowerSelectItemListViewItem_TypeInfo);
                  FollowerSelectItemListViewItem___ctor(
                    v132,
                    v127,
                    v129 - j,
                    v128,
                    j,
                    0,
                    v130,
                    1,
                    v131,
                    v125,
                    classBoardMaxNumDictionary,
                    1,
                    0,
                    0,
                    0,
                    0,
                    0);
                  ReturnTypeByQuestId = (__int64)this->fields.mixItemList;
                  if ( !ReturnTypeByQuestId )
                    goto LABEL_359;
                  v133 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                  v134 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                  if ( !v133 )
                    goto LABEL_359;
                  v135 = *(int *)(ReturnTypeByQuestId + 24);
                  if ( (unsigned int)v135 >= *(_DWORD *)(v133 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                      (Il2CppObject *)v132,
                      *(const MethodInfo_395C410 **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v136 = v133 + 8 * v135;
                    *(_DWORD *)(ReturnTypeByQuestId + 24) = v135 + 1;
                    *(_QWORD *)(v136 + 32) = v132;
                    ReturnTypeByQuestId = sub_1D0F058(v136 + 32, v132);
                  }
                  i = v245;
                  ++v126;
                  --v125;
                  if ( (unsigned int)v237 == v126 )
                    goto LABEL_207;
                }
                goto LABEL_359;
              }
LABEL_207:
              ;
            }
            namespaze = (int)klass->_1.namespaze;
          }
        }
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_359;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v257,
                            (const MethodInfo_3538458 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v257 )
        goto LABEL_359;
      v137 = v257[1].klass;
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_359;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !ReturnTypeByQuestId )
        goto LABEL_359;
      ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                       questId,
                                       (const MethodInfo_3535B7C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_359;
      HasFlag_43847172 = QuestEntity__HasFlag_43847172((QuestEntity_o *)ReturnTypeByQuestId, 0x8000000, questPhase, 0);
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_359;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserFollowMaster___);
      v226 = (UserFollowMaster_o *)ReturnTypeByQuestId;
      if ( !v137 )
        goto LABEL_359;
      v138 = v137->_1.namespaze;
      if ( (int)v138 >= 1 )
      {
        v139 = 0;
        v140 = 0;
        v228 = (ClassBoardClassMaster_o *)v137;
        do
        {
          if ( v140 >= (unsigned int)v138 )
            goto LABEL_360;
          v141 = (FollowerInfo_o *)*((_QWORD *)&v137->_1.byval_arg.data + v140);
          if ( HasFlag_43847172 )
          {
            if ( !v141 )
              goto LABEL_359;
            if ( v141->fields.type == 5 )
            {
              ReturnTypeByQuestId = (__int64)v226;
              if ( !v226 )
                goto LABEL_359;
              ReturnTypeByQuestId = UserFollowMaster__IsFollowUser(v226, v141->fields.userId, 0);
              if ( (ReturnTypeByQuestId & 1) == 0 )
                goto LABEL_296;
            }
          }
          else
          {
            if ( !v141 )
              goto LABEL_359;
            if ( v141->fields.type == 5 )
              goto LABEL_296;
          }
          sub_1D0F15C(int___TypeInfo, 0);
          if ( v231 )
          {
            ReturnTypeByQuestId = (__int64)v141->fields.eventSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_359;
          }
          else
          {
            ReturnTypeByQuestId = (__int64)v141->fields.mainSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_359;
          }
          v251 = *(unsigned int *)(ReturnTypeByQuestId + 24);
          v142 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0);
          if ( v142 )
          {
            v104 = (__int64)v142;
            v143 = sub_1D0F1F0(v142, int___TypeInfo);
            if ( !v143 )
              goto LABEL_361;
          }
          else
          {
            v143 = 0;
          }
          v144 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v144 = BalanceConfig_TypeInfo;
          }
          v145 = v144->static_fields;
          v147 = v145->FixMainSupportDeckNum;
          v146 = v145->FixEventSupportDeckNum;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          *(_QWORD *)v241 = v140;
          v243 = v139;
          ReturnTypeByQuestId = System_Math__Max_67084744(v147, v146, 0);
          v148 = ReturnTypeByQuestId;
          if ( (int)v251 >= 1 )
          {
            v149 = 0;
            while ( 1 )
            {
              if ( !*p_originalItemList || !v143 )
                goto LABEL_359;
              if ( v149 >= *(unsigned int *)(v143 + 24) )
                break;
              v150 = (*p_originalItemList)->fields._size;
              v151 = *(_DWORD *)(v143 + 32 + 4 * v149);
              v152 = *p_followerSelectItemOption;
              v153 = this->fields.classBoardMaxDictionary;
              v154 = (FollowerSelectItemListViewItem_o *)sub_1D0F300(FollowerSelectItemListViewItem_TypeInfo);
              supportDeckId = v151;
              v97 = this;
              FollowerSelectItemListViewItem___ctor(
                v154,
                v150,
                0,
                v141,
                0,
                0,
                v152,
                0,
                supportDeckId,
                v148,
                v153,
                1,
                0,
                0,
                0,
                0,
                0);
              ReturnTypeByQuestId = (__int64)this->fields.originalItemList;
              if ( !ReturnTypeByQuestId )
                goto LABEL_359;
              v155 = *(_QWORD *)(ReturnTypeByQuestId + 16);
              v156 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++*(_DWORD *)(ReturnTypeByQuestId + 28);
              if ( !v155 )
                goto LABEL_359;
              v157 = *(int *)(ReturnTypeByQuestId + 24);
              if ( (unsigned int)v157 >= *(_DWORD *)(v155 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                  (Il2CppObject *)v154,
                  *(const MethodInfo_395C410 **)(*(_QWORD *)(v156[4] + 192LL) + 112LL));
              }
              else
              {
                v158 = v155 + 8 * v157;
                *(_DWORD *)(ReturnTypeByQuestId + 24) = v157 + 1;
                *(_QWORD *)(v158 + 32) = v154;
                ReturnTypeByQuestId = sub_1D0F058(v158 + 32, v154);
              }
              ++v149;
              --v148;
              if ( v251 == v149 )
                goto LABEL_253;
            }
LABEL_360:
            sub_1D0F314(ReturnTypeByQuestId);
          }
LABEL_253:
          v159 = 0;
          followerInfob = v141;
          while ( 1 )
          {
            v160 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v160 = BalanceConfig_TypeInfo;
            }
            v161 = v160->static_fields;
            if ( v159 >= v161->SupportDeckMemberMax )
              break;
            if ( !v160->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v160);
              v161 = BalanceConfig_TypeInfo->static_fields;
            }
            v163 = v161->FixMainSupportDeckNum;
            v162 = v161->FixEventSupportDeckNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            ReturnTypeByQuestId = System_Math__Max_67084744(v163, v162, 0);
            v148 = ReturnTypeByQuestId;
            if ( (int)v251 >= 1 )
            {
              v164 = 0;
              while ( *p_mixItemList )
              {
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                v165 = (*p_mixItemList)->fields._size;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                }
                if ( !v143 )
                  break;
                if ( v164 >= *(unsigned int *)(v143 + 24) )
                  goto LABEL_360;
                v166 = *p_followerSelectItemOption;
                v167 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 180LL);
                v168 = this->fields.classBoardMaxDictionary;
                supportDeckIda = *(_DWORD *)(v143 + 32 + 4 * v164);
                v141 = followerInfob;
                v169 = (FollowerSelectItemListViewItem_o *)sub_1D0F300(FollowerSelectItemListViewItem_TypeInfo);
                FollowerSelectItemListViewItem___ctor(
                  v169,
                  v165,
                  v167 - v159,
                  followerInfob,
                  v159,
                  0,
                  v166,
                  0,
                  supportDeckIda,
                  v148,
                  v168,
                  1,
                  0,
                  0,
                  0,
                  0,
                  0);
                ReturnTypeByQuestId = (__int64)this->fields.mixItemList;
                if ( !ReturnTypeByQuestId )
                  break;
                v170 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v171 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v170 )
                  break;
                v172 = *(int *)(ReturnTypeByQuestId + 24);
                if ( (unsigned int)v172 >= *(_DWORD *)(v170 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    (Il2CppObject *)v169,
                    *(const MethodInfo_395C410 **)(*(_QWORD *)(v171[4] + 192LL) + 112LL));
                }
                else
                {
                  v173 = v170 + 8 * v172;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v172 + 1;
                  *(_QWORD *)(v173 + 32) = v169;
                  ReturnTypeByQuestId = sub_1D0F058(v173 + 32, v169);
                }
                ++v164;
                --v148;
                if ( v251 == v164 )
                  goto LABEL_274;
              }
              goto LABEL_359;
            }
LABEL_274:
            v97 = this;
            ++v159;
          }
          if ( v230 )
          {
            ReturnTypeByQuestId = BasicHelper__IsNullOrEmpty(
                                    (System_Collections_ICollection_o *)v141->fields.userSvtGrandHash,
                                    0);
            if ( (ReturnTypeByQuestId & 1) == 0 )
            {
              v16 = (unsigned int)pos;
              if ( pos < 1 )
              {
                isGrandServantRestriction = 0;
              }
              else
              {
                ReturnTypeByQuestId = (__int64)questRestrictionInfo;
                if ( !questRestrictionInfo )
                  goto LABEL_359;
                ReturnTypeByQuestId = QuestRestrictionInfo__IsGrandServantRestriction(questRestrictionInfo, pos, 0);
                isGrandServantRestriction = ReturnTypeByQuestId & 1;
              }
              userSvtGrandHash = v141->fields.userSvtGrandHash;
              if ( !userSvtGrandHash )
                goto LABEL_359;
              v176 = userSvtGrandHash->max_length;
              if ( v176 >= 1 )
              {
                v177 = 0;
                while ( v177 < v176 )
                {
                  if ( !*p_mixItemList )
                    goto LABEL_359;
                  v178 = userSvtGrandHash->m_Items[v177];
                  if ( !v178 )
                    goto LABEL_359;
                  v179 = (*p_mixItemList)->fields._size;
                  v180 = v97->fields.classBoardMaxDictionary;
                  followerSelectItemOption = v97->fields.followerSelectItemOption;
                  grandGraphId = v178->fields.grandGraphId;
                  v183 = (FollowerSelectItemListViewItem_o *)sub_1D0F300(FollowerSelectItemListViewItem_TypeInfo);
                  FollowerSelectItemListViewItem___ctor(
                    v183,
                    v179,
                    0,
                    followerInfob,
                    0,
                    0,
                    followerSelectItemOption,
                    0,
                    0,
                    v148,
                    v180,
                    1,
                    0,
                    1,
                    grandGraphId,
                    isGrandServantRestriction,
                    0);
                  ReturnTypeByQuestId = (__int64)v97->fields.grandItemList;
                  if ( !ReturnTypeByQuestId )
                    goto LABEL_359;
                  v184 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                  v185 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                  if ( !v184 )
                    goto LABEL_359;
                  v186 = *(int *)(ReturnTypeByQuestId + 24);
                  if ( (unsigned int)v186 >= *(_DWORD *)(v184 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                      (Il2CppObject *)v183,
                      *(const MethodInfo_395C410 **)(*(_QWORD *)(v185[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v187 = v184 + 8 * v186;
                    *(_DWORD *)(ReturnTypeByQuestId + 24) = v186 + 1;
                    *(_QWORD *)(v187 + 32) = v183;
                    ReturnTypeByQuestId = sub_1D0F058(v187 + 32, v183);
                  }
                  v176 = userSvtGrandHash->max_length;
                  if ( (int)++v177 >= v176 )
                    goto LABEL_293;
                }
                goto LABEL_360;
              }
            }
          }
LABEL_293:
          ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
          }
          v137 = (Il2CppClass *)v228;
          v140 = *(_QWORD *)v241;
          v139 = v243 + 1;
          if ( v243 + 1 >= *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 716LL) )
            break;
LABEL_296:
          LODWORD(v138) = v137->_1.namespaze;
          ++v140;
        }
        while ( (__int64)v140 < (int)v138 );
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    v188 = v230;
    if ( !ReturnTypeByQuestId )
      goto LABEL_359;
    if ( DataMasterBase_object__object__long___TryGetSingleEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
           &v256,
           (const MethodInfo_3538458 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    {
      ReturnTypeByQuestId = (__int64)v256;
      if ( !v256 )
        goto LABEL_359;
      ReturnTypeByQuestId = UserRecommendFollowerEntity__IsEnableSupport(
                              (UserRecommendFollowerEntity_o *)v256,
                              questId,
                              questPhase,
                              0);
      if ( (ReturnTypeByQuestId & 1) != 0 )
      {
        if ( !v256 )
          goto LABEL_359;
        v189 = v256[1].klass;
        ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_359;
        ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !ReturnTypeByQuestId )
          goto LABEL_359;
        ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                         questId,
                                         (const MethodInfo_3535B7C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_359;
        v190 = QuestEntity__HasFlag_43847172((QuestEntity_o *)ReturnTypeByQuestId, 0x8000000, questPhase, 0);
        ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_359;
        ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserFollowMaster___);
        v254 = (UserFollowMaster_o *)ReturnTypeByQuestId;
        if ( !v189 )
          goto LABEL_359;
        v191 = v189->_1.namespaze;
        if ( (int)v191 >= 1 )
        {
          for ( k = 0; k < (int)v191; ++k )
          {
            if ( k >= (unsigned __int64)(unsigned int)v191 )
              goto LABEL_360;
            v193 = *((_QWORD *)&v189->_1.byval_arg.data + k);
            if ( v190 )
            {
              if ( !v193 )
                goto LABEL_359;
              if ( *(_DWORD *)(v193 + 36) == 5 )
              {
                ReturnTypeByQuestId = (__int64)v254;
                if ( !v254 )
                  goto LABEL_359;
                ReturnTypeByQuestId = UserFollowMaster__IsFollowUser(v254, *(_QWORD *)(v193 + 16), 0);
                if ( (ReturnTypeByQuestId & 1) == 0 )
                  goto LABEL_353;
              }
            }
            else
            {
              if ( !v193 )
                goto LABEL_359;
              if ( *(_DWORD *)(v193 + 36) == 5 )
                goto LABEL_353;
            }
            if ( v188
              && (ReturnTypeByQuestId = BasicHelper__IsNullOrEmpty(
                                          *(System_Collections_ICollection_o **)(v193 + 144),
                                          0),
                  (ReturnTypeByQuestId & 1) == 0) )
            {
              v197 = *(_QWORD *)(v193 + 56);
              if ( !v197 )
                goto LABEL_359;
              if ( !*(_DWORD *)(v197 + 24) )
                goto LABEL_360;
              v198 = *(_QWORD *)(v197 + 32);
              if ( !v198 )
                goto LABEL_359;
              v199 = *(_QWORD *)(v198 + 56);
              if ( !v199 )
                goto LABEL_359;
              v200 = *(_QWORD *)(v193 + 144);
              if ( !v200 )
                goto LABEL_359;
              v201 = *(_DWORD *)(v200 + 24);
              v202 = v201 < 1;
              if ( v201 < 1 )
              {
LABEL_334:
                v196 = 0;
              }
              else
              {
                v203 = *(_QWORD *)(v199 + 40);
                v204 = 0;
                while ( 1 )
                {
                  if ( v201 == v204 )
                    goto LABEL_360;
                  v205 = *(_QWORD *)(v200 + 8LL * v204 + 32);
                  if ( !v205 )
                    goto LABEL_359;
                  if ( v203 == *(_QWORD *)(v205 + 40) )
                    break;
                  v202 = v201 == ++v204;
                  if ( v201 == v204 )
                    goto LABEL_334;
                }
                v196 = *(_DWORD *)(v205 + 268);
              }
              ReturnTypeByQuestId = sub_1D0F15C(ServantLeaderInfo___TypeInfo, 1);
              v194 = ReturnTypeByQuestId;
              v195 = !v202;
            }
            else
            {
              ReturnTypeByQuestId = sub_1D0F15C(ServantLeaderInfo___TypeInfo, 1);
              v194 = ReturnTypeByQuestId;
              v195 = 0;
              v196 = 0;
            }
            v206 = *(_QWORD *)(v193 + 56);
            if ( !v206 )
              goto LABEL_359;
            if ( !*(_DWORD *)(v206 + 24) )
              goto LABEL_360;
            v207 = *(_QWORD *)(v206 + 32);
            if ( !v207 || !v194 )
              goto LABEL_359;
            v208 = *(_QWORD *)(v207 + 56);
            if ( v208 )
            {
              ReturnTypeByQuestId = sub_1D0F1F0(v208, *(_QWORD *)(*(_QWORD *)v194 + 64LL));
              if ( !ReturnTypeByQuestId )
                goto LABEL_362;
            }
            if ( !*(_DWORD *)(v194 + 24) )
              goto LABEL_360;
            *(_QWORD *)(v194 + 32) = v208;
            sub_1D0F058(v194 + 32, v208);
            *(_QWORD *)(v193 + 40) = v194;
            ReturnTypeByQuestId = sub_1D0F058(v193 + 40, v194);
            if ( !*p_recommendItemList )
              goto LABEL_359;
            v209 = (*p_recommendItemList)->fields._size;
            v210 = this->fields.followerSelectItemOption;
            v211 = this->fields.classBoardMaxDictionary;
            v212 = (FollowerSelectItemListViewItem_o *)sub_1D0F300(FollowerSelectItemListViewItem_TypeInfo);
            FollowerSelectItemListViewItem___ctor(
              v212,
              v209,
              0,
              (FollowerInfo_o *)v193,
              0,
              0,
              v210,
              0,
              0,
              0,
              v211,
              1,
              1,
              v195,
              v196,
              0,
              0);
            ReturnTypeByQuestId = (__int64)this->fields.recommendItemList;
            if ( !ReturnTypeByQuestId )
              goto LABEL_359;
            v213 = *(_QWORD *)(ReturnTypeByQuestId + 16);
            v188 = v230;
            v214 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++*(_DWORD *)(ReturnTypeByQuestId + 28);
            if ( !v213 )
              goto LABEL_359;
            v215 = *(int *)(ReturnTypeByQuestId + 24);
            if ( (unsigned int)v215 >= *(_DWORD *)(v213 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                (Il2CppObject *)v212,
                *(const MethodInfo_395C410 **)(*(_QWORD *)(v214[4] + 192LL) + 112LL));
            }
            else
            {
              v216 = v213 + 8 * v215;
              *(_DWORD *)(ReturnTypeByQuestId + 24) = v215 + 1;
              *(_QWORD *)(v216 + 32) = v212;
              sub_1D0F058(v216 + 32, v212);
            }
            ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            }
            if ( k >= *(int *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 716LL) )
              break;
LABEL_353:
            LODWORD(v191) = v189->_1.namespaze;
          }
        }
      }
    }
  }
LABEL_354:
  ReturnTypeByQuestId = (__int64)this->fields.refreshButtonObject;
  if ( !ReturnTypeByQuestId )
    goto LABEL_359;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ReturnTypeByQuestId, !this->fields.isRefreshBtnHide, 0);
  v218 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v218 = FollowerSelectItemListViewManager_TypeInfo;
  }
  FollowerSelectItemListViewManager__SetEmptyMessage(this, v218->static_fields->followerClassId, v217);
  FollowerSelectItemListViewManager__SortClass(
    this,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    v219);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  FollowerSelectItemListViewManager__SetFilterButtonImage(this, v220);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_359;
  scrollView->fields.smoothDragStart = 1;
}


void FollowerSelectItemListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewManager_c *v2; // x0
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v4; // x8

  if ( (byte_4E71F77 & 1) == 0 )
  {
    sub_1D0F0B4(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_6854/*"FollowerSelectClass"*/);
    sub_1D0F0B4(&StringLiteral_6857/*"FollowerSelectOldClass"*/);
    byte_4E71F77 = 1;
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
    sub_1D0F30C(v2, v1);
  }
  ListViewSort__DeleteContinueData((ListViewSort_o *)v2, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6854/*"FollowerSelectClass"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6857/*"FollowerSelectOldClass"*/, 0);
}


void FollowerSelectItemListViewManager__DestroyList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FollowerSelectItemListViewManager__DestroyList_33802796(this, 0, v2);
}


void FollowerSelectItemListViewManager__DestroyList_33802796(
        FollowerSelectItemListViewManager_o *this,
        BattleSetupInfo_o *battleSetupInfo,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *v5; // x1
  EventQuestMaster_o *ReturnTypeByQuestId; // x0
  const MethodInfo *v7; // x1
  FollowerSelectItemListViewManager_c *v8; // x8
  unsigned int v9; // w20
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct ListViewSort_o *v11; // x0
  System_Int32_array *OngoingQuestTargetEventIds; // x0
  int32_t questId; // w20
  int32_t questPhase; // w21
  System_Int32_array *v15; // x22
  EventUpValSetupInfo_o *v16; // x23
  void *p_setupInfo; // x0
  EventUpValSetupInfo_o *v18; // x1
  ClassButtonControlComponent_o *classButtonControl; // x20
  ClassButtonControlComponent_CallbackFunc_o *v20; // x21
  const MethodInfo *v21; // x4
  struct ListViewSort_o *sort; // x8
  int32_t InitialDisplayClass; // w0
  FollowerSelectItemListViewManager_c *v24; // x8
  int32_t v25; // w20
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
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

  if ( (byte_4E71F86 & 1) == 0 )
  {
    sub_1D0F0B4(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&EventUpValSetupInfo_TypeInfo);
    sub_1D0F0B4(&Method_FollowerSelectItemListViewManager_OnChangeClass__);
    sub_1D0F0B4(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_11877/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/);
    sub_1D0F0B4(&StringLiteral_6854/*"FollowerSelectClass"*/);
    sub_1D0F0B4(&StringLiteral_6857/*"FollowerSelectOldClass"*/);
    byte_4E71F86 = 1;
  }
  if ( battleSetupInfo )
  {
    this->fields.questId = BattleSetupInfo__TargetQuestId(battleSetupInfo, 0);
    this->fields.questPhase = *(_DWORD *)((char *)&off_18 + (_QWORD)battleSetupInfo);
    v5 = *(struct QuestRestrictionInfo_o **)((char *)&qword_58 + (_QWORD)battleSetupInfo);
    this->fields.questRestrictionInfo = v5;
    sub_1D0F058(&this->fields.questRestrictionInfo, v5);
    ReturnTypeByQuestId = (EventQuestMaster_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                  *(int *)((char *)&dword_14 + (_QWORD)battleSetupInfo),
                                                  0);
    v8 = FollowerSelectItemListViewManager_TypeInfo;
    v9 = (unsigned int)ReturnTypeByQuestId;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v8 = FollowerSelectItemListViewManager_TypeInfo;
    }
    LIST_VIEW_SORT = v8->static_fields->LIST_VIEW_SORT;
    if ( !LIST_VIEW_SORT )
      goto LABEL_49;
    v11 = (struct ListViewSort_o *)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))LIST_VIEW_SORT->fields.invoke_impl)(
                                     LIST_VIEW_SORT->fields.method_code,
                                     v9,
                                     LIST_VIEW_SORT->fields.method);
    this->fields.sort = v11;
    sub_1D0F058(&this->fields.sort, v11);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (EventQuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_EventQuestMaster___);
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
    v15 = OngoingQuestTargetEventIds;
    v16 = (EventUpValSetupInfo_o *)sub_1D0F300(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_43111788(v16, v15, 0, questId, questPhase, 0);
    p_setupInfo = &this->fields.setupInfo;
    this->fields.setupInfo = v16;
    v18 = v16;
  }
  else
  {
    this->fields.setupInfo = 0;
    sub_1D0F058(&this->fields.setupInfo, 0);
    p_setupInfo = &this->fields.questRestrictionInfo;
    v18 = 0;
    this->fields.questRestrictionInfo = 0;
  }
  sub_1D0F058(p_setupInfo, v18);
  classButtonControl = this->fields.classButtonControl;
  v20 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1D0F300(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v20,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0);
  if ( !classButtonControl )
    goto LABEL_49;
  ClassButtonControlComponent__init(
    classButtonControl,
    v20,
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
                          v21);
  v24 = FollowerSelectItemListViewManager_TypeInfo;
  v25 = InitialDisplayClass;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v24 = FollowerSelectItemListViewManager_TypeInfo;
  }
  static_fields = v24->static_fields;
  static_fields->followerClassId = v25;
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
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(v28, v7) )
    {
      v31 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v31 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6854/*"FollowerSelectClass"*/, v31->static_fields->followerClassId, 0);
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
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6857/*"FollowerSelectOldClass"*/, v34->static_fields->oldFollowerClassId, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
  }
  this->fields.originalItemList = 0;
  sub_1D0F058(&this->fields.originalItemList, 0);
  this->fields.mixItemList = 0;
  sub_1D0F058(&this->fields.mixItemList, 0);
  this->fields.recommendItemList = 0;
  sub_1D0F058(&this->fields.recommendItemList, 0);
  this->fields.grandItemList = 0;
  sub_1D0F058(&this->fields.grandItemList, 0);
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
  v38 = setupInfo ? setupInfo->fields.eventIdList : (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
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
    ReturnTypeByQuestId = (EventQuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11877/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/, 0);
    if ( bonusFilterKindLabel )
    {
      UILabel__set_text(bonusFilterKindLabel, (System_String_o *)ReturnTypeByQuestId, 0);
      goto LABEL_45;
    }
LABEL_49:
    sub_1D0F30C(ReturnTypeByQuestId, v7);
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
  sub_1D0F058(&this->fields.followerSelectItemOption, 0);
}


void FollowerSelectItemListViewManager__EndClassCompatibilityMenu(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4E71F95 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E71F95 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1D0F30C(0, v3);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0, 0);
}


void FollowerSelectItemListViewManager__EndCloseClassBoardEffectListDialog(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4E71FA6 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E71FA6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1D0F30C(0, v4);
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

  if ( (byte_4E71F97 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E71F97 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__,
    0);
  if ( !Instance )
LABEL_8:
    sub_1D0F30C(sort, v6);
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

  if ( (byte_4E71F81 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E71F81 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v14 = v11->fields.classIds;
  if ( !v14 )
    goto LABEL_17;
  if ( !LODWORD(v14->max_length) )
    sub_1D0F314(Instance);
  if ( !Instance )
LABEL_17:
    sub_1D0F30C(Instance, v9);
  v15 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          v14->m_Items[0],
          (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  result = defaultValue;
  if ( v15 )
    return HIDWORD(v15[4].klass);
  return result;
}


int32_t FollowerSelectItemListViewManager__GetClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_c *v2; // x0

  if ( (byte_4E71F8A & 1) == 0 )
  {
    sub_1D0F0B4(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4E71F8A = 1;
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

  if ( (byte_4E71FA7 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4E71FA7 = 1;
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
  QuestPhaseEntity_o *Entity; // x0
  int32_t AdvantageClassId; // w0
  _BOOL8 v17; // x0
  const MethodInfo *v18; // x1
  _BOOL8 AdvantageClassAuto; // x0
  const MethodInfo *v20; // x4
  bool v21; // w8
  int32_t v22; // w22
  RecommendSupportQuestEntity_o *v24; // [xsp+0h] [xbp-40h] BYREF
  int32_t enableCount[2]; // [xsp+8h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_4E71F7F & 1) == 0 )
  {
    sub_1D0F0B4(&ClassButtonControlComponent_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_RecommendSupportQuestMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1D0F0B4(&OptionManager_TypeInfo);
    this = (FollowerSelectItemListViewManager_o *)sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E71F7F = 1;
  }
  v24 = 0;
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
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
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
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsSameQuestAndPhase = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
    sub_1D0F30C(IsSameQuestAndPhase, v12);
  }
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(followerClassId, 0) )
  {
    IsSameQuestAndPhase = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsSameQuestAndPhase )
      goto LABEL_34;
    IsSameQuestAndPhase = DataManager__GetMasterData_object_(
                            (DataManager_o *)IsSameQuestAndPhase,
                            (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_RecommendSupportQuestMaster___);
    if ( !IsSameQuestAndPhase )
      goto LABEL_34;
    v17 = RecommendSupportQuestMaster__TryGetEntity(
            (RecommendSupportQuestMaster_o *)IsSameQuestAndPhase,
            &v24,
            questId,
            questPhase,
            0);
    if ( !v17 )
      followerClassId = FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(
                          (FollowerSelectItemListViewManager_o *)v17,
                          v18);
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  AdvantageClassAuto = OptionManager__GetAdvantageClassAuto(0);
  v21 = v14 | ~AdvantageClassAuto;
  v22 = followerClassId;
  if ( !v21 )
    v22 = FollowerSelectItemListViewManager__GetAdvantageClassId(
            (FollowerSelectItemListViewManager_o *)AdvantageClassAuto,
            questId,
            questPhase,
            followerClassId,
            v20);
  if ( ServantClassEntity__IsValidClassOnSellectSupport(v22, 0) )
    return v22;
  return followerClassId;
}


FollowerSelectItemListViewItem_o *FollowerSelectItemListViewManager__GetItem(
        FollowerSelectItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4E71F88 & 1) == 0 )
  {
    sub_1D0F0B4(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4E71F88 = 1;
  }
  result = (FollowerSelectItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4E71FA2 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4E71FA2 = 1;
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

  if ( (byte_4E71FA3 & 1) == 0 )
  {
    sub_1D0F0B4(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4E71FA3 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1D0F30C(itemList, userId);
  v8 = 0;
  while ( v8 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v8,
             (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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


int32_t FollowerSelectItemListViewManager__GetItemIndex_33815324(
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

  if ( (byte_4E71FA4 & 1) == 0 )
  {
    sub_1D0F0B4(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4E71FA4 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_1D0F30C(itemList, userId);
  v12 = 0;
  while ( v12 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v12,
             (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  if ( (byte_4E71F83 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_6854/*"FollowerSelectClass"*/);
    byte_4E71F83 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6854/*"FollowerSelectClass"*/, 0, 0);
}


int32_t FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4E71F84 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_6857/*"FollowerSelectOldClass"*/);
    byte_4E71F84 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6857/*"FollowerSelectOldClass"*/, 0, 0);
}


void FollowerSelectItemListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewManager_c *v2; // x0
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v4; // x8

  if ( (byte_4E71F78 & 1) == 0 )
  {
    sub_1D0F0B4(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4E71F78 = 1;
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
    sub_1D0F30C(v2, v1);
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

  if ( (byte_4E71F80 & 1) == 0 )
  {
    sub_1D0F0B4(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4E71F80 = 1;
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
      return 0;
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
  if ( (byte_4E71F85 & 1) == 0 )
  {
    sub_1D0F0B4(&ClassButtonControlComponent_TypeInfo);
    sub_1D0F0B4(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1D0F0B4(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (FollowerSelectItemListViewManager_o *)sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4E71F85 = 1;
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
                                                      (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (FollowerSelectItemListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != FollowerSelectItemListViewItem_TypeInfo )
      {
        break;
      }
      FollowerSelectItemListViewItem__Modify((FollowerSelectItemListViewItem_o *)this, 0);
      if ( m_CancellationTokenSource == ++v9 )
        goto LABEL_13;
      this = (FollowerSelectItemListViewManager_o *)v6->fields.itemList;
    }
    while ( this );
LABEL_35:
    sub_1D0F30C(this, *(_QWORD *)&friendPointUpVal);
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
                                                        (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !this )
          break;
        v15 = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
        if ( this->klass->_2.naturalAligment < (unsigned int)v15
          || (FollowerSelectItemListViewItem_c *)this->klass->_2.typeHierarchy[v15 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          break;
        }
        FollowerSelectItemListViewItem__Modify((FollowerSelectItemListViewItem_o *)this, 0);
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
                                                        (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !this )
          break;
        v18 = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
        if ( this->klass->_2.naturalAligment < (unsigned int)v18
          || (FollowerSelectItemListViewItem_c *)this->klass->_2.typeHierarchy[v18 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          break;
        }
        FollowerSelectItemListViewItem__Modify((FollowerSelectItemListViewItem_o *)this, 0);
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

  if ( (byte_4E71F9D & 1) == 0 )
  {
    sub_1D0F0B4(&ClassButtonControlComponent_TypeInfo);
    sub_1D0F0B4(&Method_FollowerSelectItemListViewManager_OnChangeClass__);
    sub_1D0F0B4(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4E71F9D = 1;
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
          v14 = (_QWORD *)sub_1D0F0CC(Method_FollowerSelectItemListViewManager_OnChangeClass__);
        v15 = (System_Reflection_MethodBase_o *)sub_1D0F098(v14, v14[4]);
        OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
        if ( (v7 & 1) != 0 )
          FollowerSelectItemListViewManager__OnClickRecommend(this, classPos, v16);
        else
          FollowerSelectItemListViewManager__SortClass(this, classPos, v16);
        return;
      }
    }
LABEL_22:
    sub_1D0F30C(IsRecommendSupportGroupType, v6);
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

  if ( (byte_4E71F96 & 1) == 0 )
  {
    sub_1D0F0B4(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__);
    sub_1D0F0B4(&Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E71F96 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
    isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
    equipBonusFilterEventIds = this->fields.equipBonusFilterEventIds;
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantBonusFilterSelectMenu_CallbackFunc_o *)sub_1D0F300(ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantBonusFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__,
      0);
    if ( !v10 )
      sub_1D0F30C(v12, v13);
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
  const MethodInfo *v11; // x2

  if ( (byte_4E71FA1 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_FollowerSelectItemListViewManager_OnClickChangeSkill__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    byte_4E71FA1 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickChangeSkill__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickChangeSkill__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_FollowerSelectItemListViewManager_OnClickChangeSkill__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    displaySkill = this->fields.displaySkill;
    if ( (unsigned int)displaySkill <= 2 )
      this->fields.displaySkill = dword_D682C4[displaySkill];
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
                                                                    (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
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
      sub_1D0F30C(ObjectList, v8);
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

  if ( (byte_4E71F94 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__);
    sub_1D0F0B4(&Method_FollowerSelectItemListViewManager_OnClickClassComparibility__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E71F94 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickClassComparibility__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickClassComparibility__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_FollowerSelectItemListViewManager_OnClickClassComparibility__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    System_Action___ctor(
      v6,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__,
      0);
    if ( !Instance )
      sub_1D0F30C(v7, v8);
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

  if ( (byte_4E71F9E & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__);
    sub_1D0F0B4(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4E71F9E = 1;
  }
  entity = 0;
  if ( this->fields.isGetRecommendSupport )
    goto LABEL_4;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
  if ( !Master_object )
    goto LABEL_16;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          (const MethodInfo_3538458 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    goto LABEL_12;
  Master_object = entity;
  if ( !entity )
LABEL_16:
    sub_1D0F30C(Master_object, v6);
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
    sub_1D0F058(&this->fields.callbackFunc, 0);
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

  if ( (byte_4E71F93 & 1) == 0 )
  {
    sub_1D0F0B4(&ClassButtonControlComponent_TypeInfo);
    byte_4E71F93 = 1;
  }
  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0;
      v4 = sub_1D0F058(&this->fields.callbackFunc, 0);
      classButtonControl = this->fields.classButtonControl;
      if ( !classButtonControl )
        sub_1D0F30C(v4, v5);
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
    v5 = sub_1D0F058(&this->fields.callbackFunc, 0);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1D0F30C(v5, v6);
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

  if ( (byte_4E71F9B & 1) == 0 )
  {
    sub_1D0F0B4(&Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__);
    byte_4E71F9B = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1D0F30C(v5, v6);
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

  if ( (byte_4E71F99 & 1) == 0 )
  {
    sub_1D0F0B4(&OtherUserSortDialog_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&ClassButtonControlComponent_TypeInfo);
    sub_1D0F0B4(&Method_FollowerSelectItemListViewManager_CloseSortDialog__);
    sub_1D0F0B4(&Method_FollowerSelectItemListViewManager_OnClickSortKind__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E71F99 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_FollowerSelectItemListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v12 = this->fields.sort;
        v13 = (CommonUI_o *)Instance;
        v14 = (OtherUserSortDialog_CallbackFunc_o *)sub_1D0F300(OtherUserSortDialog_CallbackFunc_TypeInfo);
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
    sub_1D0F30C(IsRecommendSupportGroupType, v6);
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
    v5 = sub_1D0F058(&this->fields.callbackFunc, 0);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1D0F30C(v5, v6);
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
    v5 = sub_1D0F058(&this->fields.callbackFunc, 0);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1D0F30C(v5, v6);
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

  if ( (byte_4E71F91 & 1) == 0 )
  {
    sub_1D0F0B4(&FollowerSelectItemListViewObject_TypeInfo);
    byte_4E71F91 = 1;
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
    v8 = sub_1D0F058(&this->fields.callbackFunc, 0);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1D0F30C(v8, v9);
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

  if ( (byte_4E71F92 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_12834/*"ScrollViewEnabled"*/);
    byte_4E71F92 = 1;
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
        (System_String_o *)StringLiteral_12834/*"ScrollViewEnabled"*/,
        0.1,
        0);
    }
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    tutorialListViewObject = (UnityEngine_Component_o *)sub_1D0F058(&this->fields.callbackFunc, 0);
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
      sub_1D0F30C(tutorialListViewObject, obj);
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

  if ( (byte_4E71F90 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E71F90 = 1;
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
              sub_1D0F058(&this->fields.callbackFunc2, 0);
              if ( callbackFunc2 )
                ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
                  callbackFunc2->fields.method_code,
                  callbackFunc2->fields.method);
              return;
            }
          }
        }
      }
      sub_1D0F30C(tutorialListViewObject, v7);
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
  int32_t scrollView; // w24
  int32_t v16; // w21
  FollowerSelectItemListViewManager_o *v17; // x25
  struct FollowerInfo_o *followerInfo; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x27
  int max_length; // w8
  unsigned int v21; // w28
  ClassBoardInfo_o *v22; // x22
  ClassBoardInfo_o *v23; // x23
  ClassBoardInfo_o *v24; // x26
  long double inited; // q0
  _QWORD *v26; // x24
  __int64 v27; // x8
  __int64 v28; // x0
  __int64 v29; // x0
  struct System_Int32_array **v30; // x8
  struct System_Int32_array *v31; // x1
  long double v32; // q0
  _QWORD *v33; // x24
  __int64 v34; // x8
  __int64 v35; // x0
  __int64 v36; // x0
  struct System_Int32_array **v37; // x8
  struct System_Int32_array *v38; // x1
  Il2CppObject *Instance; // x24
  System_Action_o *v40; // x25
  struct FollowerInfo_o *v41; // x8

  v4 = this;
  if ( (byte_4E71FA5 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_System_Array_Empty_int___);
    sub_1D0F0B4(&ClassBoardInfo_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Any_int___);
    sub_1D0F0B4(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1D0F0B4(&Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__);
    sub_1D0F0B4(&Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (FollowerSelectItemListViewManager_o *)sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E71FA5 = 1;
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
                 (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
            v10 = (_QWORD *)sub_1D0F0CC(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
          v11 = (System_Reflection_MethodBase_o *)sub_1D0F098(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0, 0);
          return;
        }
        v4->fields.isInput = 0;
        v12 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
        if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 83) & 2) != 0 )
          v12 = (_QWORD *)sub_1D0F0CC(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
        v13 = (System_Reflection_MethodBase_o *)sub_1D0F098(v12, v12[4]);
        OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantMaster___);
        this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewItem__get_SvtId(v8, 0);
        if ( Master_object )
        {
          this = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                          (int32_t)this,
                                                          (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            scrollView = (int32_t)this->fields.scrollView;
            this = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( this )
            {
              this = (FollowerSelectItemListViewManager_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                                              (ClassBoardClassMaster_o *)this,
                                                              scrollView,
                                                              0);
              v16 = (int)this;
              if ( (_DWORD)this )
              {
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                this = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
                if ( !this )
                  goto LABEL_67;
                this = (FollowerSelectItemListViewManager_o *)ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
                                                                (ClassBoardBaseMaster_o *)this,
                                                                v16,
                                                                0);
                v17 = this;
              }
              else
              {
                v17 = 0;
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
                    v23 = 0;
                    v22 = 0;
LABEL_45:
                    if ( !v23 )
                    {
                      v23 = (ClassBoardInfo_o *)sub_1D0F300(ClassBoardInfo_TypeInfo);
                      ClassBoardInfo___ctor(v23, 0);
                      if ( !v23 )
                        goto LABEL_67;
                      v23->fields.classBoardBaseId = v16;
                      v26 = Method_System_Array_Empty_int___;
                      v27 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v27 )
                      {
                        sub_1CE5198(Method_System_Array_Empty_int___);
                        v27 = v26[7];
                      }
                      v28 = *(_QWORD *)(v27 + 16);
                      if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
                        v28 = sub_1CE513C(inited);
                      if ( !*(_DWORD *)(v28 + 224) )
                        inited = j_il2cpp_runtime_class_init_0(v28);
                      v29 = *(_QWORD *)(v26[7] + 16LL);
                      if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
                        v29 = sub_1CE513C(inited);
                      v30 = *(struct System_Int32_array ***)(v29 + 184);
                      v31 = *v30;
                      v23->fields.squareIds = *v30;
                      sub_1D0F058(&v23->fields.squareIds, v31);
                      v33 = Method_System_Array_Empty_int___;
                      v34 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v34 )
                      {
                        sub_1CE5198(Method_System_Array_Empty_int___);
                        v34 = v33[7];
                      }
                      v35 = *(_QWORD *)(v34 + 16);
                      if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
                        v35 = sub_1CE513C(v32);
                      if ( !*(_DWORD *)(v35 + 224) )
                        v32 = j_il2cpp_runtime_class_init_0(v35);
                      v36 = *(_QWORD *)(v33[7] + 16LL);
                      if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
                        v36 = sub_1CE513C(v32);
                      v37 = *(struct System_Int32_array ***)(v36 + 184);
                      v38 = *v37;
                      v23->fields.releasedClassIds = *v37;
                      sub_1D0F058(&v23->fields.releasedClassIds, v38);
                    }
LABEL_64:
                    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    v40 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
                    System_Action___ctor(
                      v40,
                      (Il2CppObject *)v4,
                      Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__,
                      0);
                    v41 = v8->fields.followerInfo;
                    if ( v41 && Instance )
                    {
                      CommonUI__OpenClassBoardEffectListDialog(
                        (CommonUI_o *)Instance,
                        1,
                        v16,
                        0,
                        v40,
                        1,
                        v23,
                        v22,
                        v8->fields._IsGrandSupport_k__BackingField,
                        v41->fields.followerClassStatistics,
                        0,
                        0);
                      return;
                    }
                  }
                  else
                  {
                    v21 = 0;
                    v22 = 0;
                    v23 = 0;
                    while ( 1 )
                    {
                      if ( v21 >= max_length )
                        sub_1D0F314(this);
                      v24 = userClassBoardInfo->m_Items[v21];
                      if ( !v24 )
                        break;
                      if ( v24->fields.classBoardBaseId == v16 )
                      {
                        this = (FollowerSelectItemListViewManager_o *)ClassBoardInfo__IsReleasedClassId(
                                                                        v24,
                                                                        scrollView,
                                                                        0);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          v23 = v24;
                      }
                      if ( v17 )
                      {
                        if ( LODWORD(v17->fields.m_CachedPtr) == v24->fields.classBoardBaseId )
                        {
                          this = (FollowerSelectItemListViewManager_o *)System_Linq_Enumerable__Any_int_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)v24->fields.squareIds,
                                                                          (const MethodInfo_325CB7C *)Method_System_Linq_Enumerable_Any_int___);
                          if ( ((unsigned __int8)this & 1) != 0 )
                            v22 = v24;
                        }
                      }
                      if ( v23 && v22 )
                        goto LABEL_64;
                      max_length = userClassBoardInfo->max_length;
                      if ( (int)++v21 >= max_length )
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
      sub_1D0F30C(this, obj);
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
    sub_1D0F30C(0, method);
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

  if ( (byte_4E71F8F & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    sub_1D0F0B4(&StringLiteral_10060/*"OnMoveEnd"*/);
    byte_4E71F8F = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
  ObjectList = FollowerSelectItemListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_1D0F30C(ObjectList, v5);
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
             (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0) )
    {
      v11 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      FollowerSelectItemListViewObject__Init_33808380((FollowerSelectItemListViewObject_o *)Item, 4, v11, 0.1, v12);
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
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
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
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4E71F8D & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__);
    sub_1D0F0B4(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1D0F0B4(&StringLiteral_10060/*"OnMoveEnd"*/);
    byte_4E71F8D = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1D0F30C(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1D0F30C(v12, v13);
      FollowerSelectItemListViewObject__Init_33808380(
        (FollowerSelectItemListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewManager__RequestListObject_33807264(
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

  if ( (byte_4E71F8E & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__);
    sub_1D0F0B4(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1D0F0B4(&StringLiteral_10060/*"OnMoveEnd"*/);
    byte_4E71F8E = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1D0F30C(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1D0F30C(v10, v11);
      FollowerSelectItemListViewObject__Init_33807768((FollowerSelectItemListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
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

  if ( (byte_4E71F87 & 1) == 0 )
  {
    sub_1D0F0B4(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_6854/*"FollowerSelectClass"*/);
    sub_1D0F0B4(&StringLiteral_6857/*"FollowerSelectOldClass"*/);
    byte_4E71F87 = 1;
  }
  sort = this->fields.sort;
  if ( !sort || (ListViewSort__Save(sort, 0), (v4 = this->fields.sort) == 0) )
    sub_1D0F30C(sort, method);
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
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6854/*"FollowerSelectClass"*/, v8->static_fields->followerClassId, 0);
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
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6857/*"FollowerSelectOldClass"*/, v11->static_fields->oldFollowerClassId, 0);
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
    sub_1D0F30C(0, method);
  UnityEngine_Behaviour__set_enabled(scrollView, 1, 0);
}


void FollowerSelectItemListViewManager__SetBonusFilterFlag(
        FollowerSelectItemListViewManager_o *this,
        System_Int32_array *eventIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // x8
  System_Collections_Generic_List_int__o *v8; // x21
  unsigned __int64 v9; // x23
  int32_t v10; // w22
  bool isBonusFilterEnable; // w27
  bool isServantBonusFilterEnable; // w27
  bool isServantEquipBonusFilterEnable; // w27
  struct System_Int32_array *v14; // x0
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4E71F7B & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventFilterMaster___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E71F7B = 1;
  }
  entity = 0;
  *(_WORD *)&this->fields.isBonusFilterEnable = 0;
  this->fields.isServantEquipBonusFilterEnable = 0;
  Instance = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)eventIds,
                                                         (const MethodInfo_3295130 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !eventIds )
    goto LABEL_22;
  max_length = eventIds->max_length;
  v8 = Instance;
  if ( max_length && (int)max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1D0F314(Instance);
      v10 = eventIds->m_Items[v9];
      Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventFilterMaster___);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)EventFilterMaster__TryGetEntity_43360428(
                                                             (EventFilterMaster_o *)Instance,
                                                             &entity,
                                                             v10,
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
          if ( !v8 )
            break;
          Instance = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Remove(
                                                                 v8,
                                                                 v10,
                                                                 (const MethodInfo_39408E8 *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
      else
      {
        *(_WORD *)&this->fields.isBonusFilterEnable = 257;
        this->fields.isServantEquipBonusFilterEnable = 1;
      }
      LODWORD(max_length) = eventIds->max_length;
      if ( (__int64)++v9 >= (int)max_length )
        goto LABEL_20;
    }
LABEL_22:
    sub_1D0F30C(Instance, v6);
  }
LABEL_20:
  if ( !v8 )
    goto LABEL_22;
  v14 = System_Collections_Generic_List_int___ToArray(
          v8,
          (const MethodInfo_3940EA4 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.equipBonusFilterEventIds = v14;
  sub_1D0F058(&this->fields.equipBonusFilterEventIds, v14);
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

  if ( (byte_4E71F7D & 1) == 0 )
  {
    sub_1D0F0B4(&AtlasManager_TypeInfo);
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
    sub_1D0F0B4(&CondType_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__getEntityList__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__int__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    sub_1D0F0B4(&StringLiteral_17935/*"buttontxt_formation_20"*/);
    byte_4E71F7D = 1;
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
  if ( CondType__IsQuestClear_41684364(ClassBoardReleaseQuestId, -1, 0, 0) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17935/*"buttontxt_formation_20"*/, 0);
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = &this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_359F730 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1D0F300(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v8,
      (const MethodInfo_359EBEC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *p_classBoardMaxDictionary = v8;
    sub_1D0F058(p_classBoardMaxDictionary, v8);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object
    || (Master_object = (System_Collections_ObjectModel_Collection_T__o *)Master_object[1].fields.items) == 0 )
  {
    sub_1D0F30C(Master_object, v10);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Master_object,
                 (const MethodInfo_34CD418 *)Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1D0F30C(0, v11);
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
      v16 = sub_1CE5430(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v20 = sub_1CE5430(Enumerator, System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v22 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v21 )
      sub_1D0F30C(v22, v23);
    if ( !v22 )
      sub_1D0F30C(0, v23);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                            (ClassBoardSquareMaster_o *)v22,
                            *(_DWORD *)(v21 + 16),
                            0);
    if ( OtherThanNoneEntity )
    {
      if ( !*p_classBoardMaxDictionary )
        sub_1D0F30C(OtherThanNoneEntity, v25);
      System_Collections_Generic_Dictionary_int__int___Add(
        *p_classBoardMaxDictionary,
        *(_DWORD *)(v21 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_359F5B0 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
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
    v29 = sub_1CE5430(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
}


void FollowerSelectItemListViewManager__SetClassId(
        FollowerSelectItemListViewManager_o *this,
        int32_t followerClassId,
        const MethodInfo *method)
{
  __int64 v5; // x19
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v7; // x1
  FollowerSelectItemListViewManager_c *v8; // x0
  int32_t v9; // w21
  System_Collections_Generic_IEnumerable_T__o *mixItemList; // x21
  System_Collections_Generic_List_object__o *v11; // x22
  __int64 naturalAligment; // x10
  int32_t v13; // w21
  System_Collections_Generic_IEnumerable_T__o *recommendItemList; // x21
  System_Collections_Generic_List_object__o *v15; // x22
  __int64 v16; // x10
  System_Collections_Generic_IEnumerable_T__o *originalItemList; // x21
  System_Collections_Generic_List_object__o *v18; // x22
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v20; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x20
  System_Func_object__bool__o *v22; // x23
  __int64 v23; // x10
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4E71F8B & 1) == 0 )
  {
    sub_1D0F0B4(&ClassButtonControlComponent_TypeInfo);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_OfType_FollowerSelectItemListViewItem___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_FollowerSelectItemListViewItem___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1D0F0B4(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1D0F0B4(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1D0F0B4(&System_Func_FollowerSelectItemListViewItem__bool__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__AddRange__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem___ctor___80320536);
    sub_1D0F0B4(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1D0F0B4(&Method_FollowerSelectItemListViewManager___c__DisplayClass84_0__SetClassId_b__0__);
    sub_1D0F0B4(&FollowerSelectItemListViewManager___c__DisplayClass84_0_TypeInfo);
    byte_4E71F8B = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v5 = sub_1D0F300(FollowerSelectItemListViewManager___c__DisplayClass84_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_42;
  *(_DWORD *)(v5 + 16) = followerClassId;
  v8 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v8 = FollowerSelectItemListViewManager_TypeInfo;
  }
  v8->static_fields->followerClassId = followerClassId;
  if ( this->fields.mixItemList && this->fields.originalItemList && this->fields.grandItemList )
  {
    v9 = *(_DWORD *)(v5 + 16);
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    if ( ClassButtonControlComponent__IsMixSupportGroupType(v9, 0) )
    {
      mixItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.mixItemList;
      v11 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ListViewItem__TypeInfo);
      System_Collections_Generic_List_object____ctor_60144900(
        v11,
        mixItemList,
        (const MethodInfo_395BD04 *)Method_System_Collections_Generic_List_ListViewItem___ctor___80320536);
      this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v11;
      sub_1D0F058(&this->fields.itemList, v11);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( itemList )
      {
        System_Collections_Generic_List_object___AddRange(
          itemList,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.grandItemList,
          (const MethodInfo_395C61C *)Method_System_Collections_Generic_List_ListViewItem__AddRange__);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v24,
            itemList,
            (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v25 = v24;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v25,
                    (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v25.fields._current )
            {
              naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
              if ( v25.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
                && (FollowerSelectItemListViewItem_c *)v25.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__UpdateRestriction(
                  (FollowerSelectItemListViewItem_o *)v25.fields._current,
                  0);
              }
            }
          }
LABEL_40:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v25,
            (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
      }
    }
    else
    {
      v13 = *(_DWORD *)(v5 + 16);
      if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      if ( ClassButtonControlComponent__IsRecommendSupportGroupType(v13, 0) )
      {
        recommendItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.recommendItemList;
        v15 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor_60144900(
          v15,
          recommendItemList,
          (const MethodInfo_395BD04 *)Method_System_Collections_Generic_List_ListViewItem___ctor___80320536);
        this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v15;
        sub_1D0F058(&this->fields.itemList, v15);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v24,
            itemList,
            (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v25 = v24;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v25,
                    (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v25.fields._current )
            {
              v16 = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
              if ( v25.fields._current->klass->_2.naturalAligment >= (unsigned int)v16
                && (FollowerSelectItemListViewItem_c *)v25.fields._current->klass->_2.typeHierarchy[v16 - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__UpdateRestriction(
                  (FollowerSelectItemListViewItem_o *)v25.fields._current,
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
        v18 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor_60144900(
          v18,
          originalItemList,
          (const MethodInfo_395BD04 *)Method_System_Collections_Generic_List_ListViewItem___ctor___80320536);
        this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v18;
        p_itemList = &this->fields.itemList;
        sub_1D0F058(&this->fields.itemList, v18);
        if ( *(_DWORD *)(v5 + 16) )
        {
          v20 = this->fields.itemList;
          v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                       (System_Collections_IEnumerable_o *)this->fields.grandItemList,
                                                                       (const MethodInfo_327EA84 *)Method_System_Linq_Enumerable_OfType_FollowerSelectItemListViewItem___);
          v22 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_FollowerSelectItemListViewItem__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v22,
            (Il2CppObject *)v5,
            Method_FollowerSelectItemListViewManager___c__DisplayClass84_0__SetClassId_b__0__,
            0);
          itemList = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Where_object_(
                                                                    v21,
                                                                    (System_Func_TSource__bool__o *)v22,
                                                                    (const MethodInfo_329781C *)Method_System_Linq_Enumerable_Where_FollowerSelectItemListViewItem___);
          if ( !v20 )
            goto LABEL_42;
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)v20,
            (System_Collections_Generic_IEnumerable_T__o *)itemList,
            (const MethodInfo_395C61C *)Method_System_Collections_Generic_List_ListViewItem__AddRange__);
        }
        itemList = (System_Collections_Generic_List_object__o *)*p_itemList;
        if ( *p_itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v24,
            itemList,
            (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v25 = v24;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v25,
                    (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v25.fields._current )
            {
              v23 = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
              if ( v25.fields._current->klass->_2.naturalAligment >= (unsigned int)v23
                && (FollowerSelectItemListViewItem_c *)v25.fields._current->klass->_2.typeHierarchy[v23 - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__SetClassId(
                  (FollowerSelectItemListViewItem_o *)v25.fields._current,
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
    sub_1D0F30C(itemList, v7);
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

  if ( (byte_4E71F82 & 1) == 0 )
  {
    sub_1D0F0B4(&ClassButtonControlComponent_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_11184/*"RECOMMEND_SERVANT_EMPTY"*/);
    sub_1D0F0B4(&StringLiteral_11978/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4E71F82 = 1;
  }
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(classId, 0) )
    v5 = (System_String_o **)&StringLiteral_11184/*"RECOMMEND_SERVANT_EMPTY"*/;
  else
    v5 = (System_String_o **)&StringLiteral_11978/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  v6 = *v5;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get(v6, 0);
  if ( !emptyMessageLabel )
    sub_1D0F30C(v8, v9);
  UILabel__set_text(emptyMessageLabel, v8, 0);
}


void FollowerSelectItemListViewManager__SetFilterButtonImage(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *bonusFilterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4E71F98 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_17777/*"btn_sefilter_2_on"*/);
    sub_1D0F0B4(&StringLiteral_17776/*"btn_sefilter_2"*/);
    byte_4E71F98 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (bonusFilterSprite = this->fields.bonusFilterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !bonusFilterSprite) )
  {
    sub_1D0F30C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17776/*"btn_sefilter_2"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17777/*"btn_sefilter_2_on"*/;
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
  sub_1D0F058(&this->fields.callbackFunc, callback);
  FollowerSelectItemListViewManager__SetMode_33806512(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewManager__SetMode_33806512(
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

  if ( (byte_4E71F8C & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    sub_1D0F0B4(&StringLiteral_10060/*"OnMoveEnd"*/);
    sub_1D0F0B4(&StringLiteral_11513/*"RequestInto"*/);
    byte_4E71F8C = 1;
  }
  if ( mode != 3 )
  {
    this->fields.initMode = mode;
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
    ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
    if ( mode == 1 )
    {
      v11 = &StringLiteral_11513/*"RequestInto"*/;
    }
    else
    {
      if ( mode != 4 )
      {
        if ( mode == 2 )
          FollowerSelectItemListViewManager__RequestListObject_33807264(this, 3, v10);
        return;
      }
      ListViewManager__set_IsInput((ListViewManager_o *)this, 1, 0);
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
                   (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
          v17 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
          System_Action___ctor(v17, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0);
          if ( !Item )
            break;
          if ( v15 )
          {
            FollowerSelectItemListViewObject__Init_33807768((FollowerSelectItemListViewObject_o *)Item, 2, v17, v18);
          }
          else
          {
            FollowerSelectItemListViewObject__Init_33807768((FollowerSelectItemListViewObject_o *)Item, 0, v17, v18);
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
            sub_1D0F058(&ClippingObjectList[1], this);
            tutorialListViewObject = this->fields.tutorialListViewObject;
            ClippingObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewObject__GetItem(
                                                                                (FollowerSelectItemListViewObject_o *)Item,
                                                                                v20);
            if ( !tutorialListViewObject )
              break;
            ((void (__fastcall *)(struct FollowerSelectItemListViewObject_o *, System_Collections_Generic_List_object__o *, const MethodInfo *))tutorialListViewObject->klass->vtable._5_SetItem.methodPtr)(
              tutorialListViewObject,
              ClippingObjectList,
              tutorialListViewObject->klass->vtable._5_SetItem.method);
            ClippingObjectList = (System_Collections_Generic_List_object__o *)this->fields.tutorialListViewObject;
            if ( !ClippingObjectList )
              break;
            FollowerSelectItemListViewObject__Init_33804728(
              (FollowerSelectItemListViewObject_o *)ClippingObjectList,
              6,
              v21);
          }
          if ( ++v15 >= v14->fields._size )
            return;
        }
LABEL_31:
        sub_1D0F30C(ClippingObjectList, v6);
      }
      this->fields.callbackCount = 1;
      v11 = &StringLiteral_10060/*"OnMoveEnd"*/;
    }
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)*v11, 0.0, 0);
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
                                                                          (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
      if ( !ClippingObjectList )
        break;
      FollowerSelectItemListViewObject__Init_33804728((FollowerSelectItemListViewObject_o *)ClippingObjectList, 5, v9);
      if ( ++v8 >= v7->fields._size )
        return;
    }
    goto LABEL_31;
  }
}


void FollowerSelectItemListViewManager__SetMode_33807212(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1D0F058(&this->fields.callbackFunc2, callback);
  FollowerSelectItemListViewManager__SetMode_33806512(this, mode, v6);
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

  if ( (byte_4E71F89 & 1) == 0 )
  {
    sub_1D0F0B4(&FollowerSelectItemListViewObject_TypeInfo);
    byte_4E71F89 = 1;
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
    sub_1D0F30C(v7, obj);
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
  FollowerSelectItemListViewObject__Init_33804728(
    (FollowerSelectItemListViewObject_o *)v7,
    v9,
    (const MethodInfo *)item);
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

  if ( (byte_4E71F9C & 1) == 0 )
  {
    sub_1D0F0B4(&ClassButtonControlComponent_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_17784/*"btn_sort_up"*/);
    sub_1D0F0B4(&StringLiteral_17887/*"btn_txt_up"*/);
    sub_1D0F0B4(&StringLiteral_17837/*"btn_txt_new"*/);
    sub_1D0F0B4(&StringLiteral_17827/*"btn_txt_down"*/);
    sub_1D0F0B4(&StringLiteral_17844/*"btn_txt_old"*/);
    sub_1D0F0B4(&StringLiteral_17781/*"btn_sort_down"*/);
    byte_4E71F9C = 1;
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
          v14 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_17844/*"btn_txt_old"*/ : &StringLiteral_17837/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
          v15 = this->fields.sort;
          if ( v15 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v16 = (System_String_o **)&StringLiteral_17781/*"btn_sort_down"*/;
              v17 = (System_String_o **)&StringLiteral_17784/*"btn_sort_up"*/;
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
          v18 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_17887/*"btn_txt_up"*/ : &StringLiteral_17827/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v18, 0);
          v15 = this->fields.sort;
          if ( v15 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v16 = (System_String_o **)&StringLiteral_17784/*"btn_sort_up"*/;
              v17 = (System_String_o **)&StringLiteral_17781/*"btn_sort_down"*/;
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_39:
    sub_1D0F30C(sort, v5);
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
  System_Collections_Generic_List_object__o *Instance; // x0
  __int64 v10; // x1
  int32_t klass_high; // w22
  int v12; // w28
  Il2CppObject *current; // x23
  __int64 naturalAligment; // x10
  QuestRestrictionInfo_o *SvtId; // x0
  __int64 v16; // x1
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *followerSelectItemOption; // x8
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4E71F9F & 1) == 0 )
  {
    sub_1D0F0B4(&ClassButtonControlComponent_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1D0F0B4(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1D0F0B4(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1D0F0B4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4E71F9F = 1;
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
  v8 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  Instance = (System_Collections_Generic_List_object__o *)SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  klass_high = HIDWORD(Instance[2].klass);
  Instance = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_51;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    Instance,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v12 = 0;
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v24.fields._current;
    if ( v24.fields._current )
    {
      naturalAligment = FollowerSelectItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( v24.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (FollowerSelectItemListViewItem_c *)v24.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == FollowerSelectItemListViewItem_TypeInfo )
      {
        SvtId = (QuestRestrictionInfo_o *)FollowerSelectItemListViewItem__get_SvtId(
                                            (FollowerSelectItemListViewItem_o *)v24.fields._current,
                                            0);
        if ( (int)SvtId >= 1 && !LOBYTE(current[16].monitor) )
        {
          followerSelectItemOption = this->fields.followerSelectItemOption;
          if ( !followerSelectItemOption )
            sub_1D0F30C(SvtId, v16);
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
              HIDWORD(current[1].klass) = v12;
              if ( !v8 )
                sub_1D0F30C(SvtId, v16);
              items = v8->fields._items;
              v19 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++v8->fields._version;
              if ( !items )
                sub_1D0F30C(SvtId, v16);
              size = v8->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  current,
                  *(const MethodInfo_395C410 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
              }
              else
              {
                v21 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v21[4] = (Il2CppClass *)current;
                sub_1D0F058(v21 + 4, current);
              }
              ++v12;
            }
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v8;
  sub_1D0F058(&this->fields.itemList, v8);
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
            goto LABEL_40;
          }
LABEL_51:
          sub_1D0F30C(Instance, v10);
        }
      }
    }
  }
LABEL_40:
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
  Il2CppObject *v13; // x0
  Il2CppObject *Component_object; // x20
  Il2CppObject *v15; // x20
  int64_t v16; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4E71FA0 & 1) == 0 )
  {
    sub_1D0F0B4(&ClassButtonControlComponent_TypeInfo);
    sub_1D0F0B4(&FollowerListRequest_TypeInfo);
    sub_1D0F0B4(&FollowerRecommendSupportListRequest_TypeInfo);
    sub_1D0F0B4(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1D0F0B4(&long_TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_25624/*"{0}"*/);
    this = (FollowerSelectItemListViewManager_o *)sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E71FA0 = 1;
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
                         (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
      v17.fields.r = 1.0;
      v17.fields.g = 1.0;
      v17.fields.b = 1.0;
      v17.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this, v17, 0);
    }
    this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshTitleObject;
    if ( this )
    {
      v15 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)this,
              (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (FollowerSelectItemListViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v15 )
          goto LABEL_59;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v15, 1, 0);
      }
      else
      {
        this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshTitleSprite;
        if ( !this )
          goto LABEL_59;
        v18.fields.r = 1.0;
        v18.fields.g = 1.0;
        v18.fields.b = 1.0;
        v18.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v18, 0);
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
    sub_1D0F30C(this, method);
  }
  this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshButtonObject;
  if ( !this )
    goto LABEL_59;
  v7 = UnityEngine_GameObject__GetComponent_object_(
         (UnityEngine_GameObject_o *)this,
         (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
         (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
        v16 = v6;
        v13 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v16);
        this = (FollowerSelectItemListViewManager_o *)System_String__Format(
                                                        (System_String_o *)StringLiteral_25624/*"{0}"*/,
                                                        v13,
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

  if ( (byte_4E71F73 & 1) == 0 )
  {
    sub_1D0F0B4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    byte_4E71F73 = 1;
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
    v8 = sub_1D6AE88(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1D0F6A8(v7);
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

  if ( (byte_4E71F75 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    byte_4E71F75 = 1;
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
    v8 = sub_1D6AE88(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1D0F6A8(v7);
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

  if ( (byte_4E71F7A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E71F7A = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v3 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1D0F30C(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1D0F30C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1D0F30C(0, v10);
      Item = (ListViewItem_o *)FollowerSelectItemListViewObject__GetItem(
                                 (FollowerSelectItemListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1D0F30C(0, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_45173204((ListViewManager_o *)this, Item, 0);
        if ( v14 )
        {
          if ( !v3 )
            sub_1D0F30C(v14, v15);
          items = v3->fields._items;
          v17 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1D0F30C(v14, v15);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1D0F30C(Item, v13);
        items = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1D0F30C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v19 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v11;
        sub_1D0F058(v19 + 4, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4E71F79 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E71F79 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1D0F30C(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1D0F30C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1D0F30C(Component_object, Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1D0F30C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_395C410 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1D0F058(v14 + 4, v10);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4E71F74 & 1) == 0 )
  {
    sub_1D0F0B4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    byte_4E71F74 = 1;
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
    v8 = sub_1D6AE88(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1D0F6A8(v7);
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

  if ( (byte_4E71F76 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    byte_4E71F76 = 1;
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
    v8 = sub_1D6AE88(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1D0F6A8(v7);
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
  sub_1D0F058(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1D0F174(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1D0F328(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1D0F1DC(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1B34FFC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B34F9C;
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
  _QWORD v11[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v12; // [xsp+10h] [xbp-60h]
  int32_t v13; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v14; // [xsp+38h] [xbp-38h] BYREF
  int32_t v15; // [xsp+3Ch] [xbp-34h] BYREF

  v14 = result;
  v15 = kind;
  v13 = param;
  if ( (byte_4E71FA9 & 1) == 0 )
  {
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&FollowerSelectItemListViewManager_ResultKind_TypeInfo);
    byte_4E71FA9 = 1;
  }
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(FollowerSelectItemListViewManager_ResultKind_TypeInfo, &v15);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1D0F068(this, v11, callback, object);
}


void FollowerSelectItemListViewManager_CallbackFunc__EndInvoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1D0F06C(result, 0, method);
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

  if ( (byte_4E71FAA & 1) == 0 )
  {
    sub_1D0F0B4(&FollowerSelectItemListViewManager___c_TypeInfo);
    byte_4E71FAA = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(FollowerSelectItemListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FollowerSelectItemListViewManager___c_TypeInfo->static_fields->__9 = (struct FollowerSelectItemListViewManager___c_o *)v1;
  sub_1D0F058(FollowerSelectItemListViewManager___c_TypeInfo->static_fields, v1);
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

  if ( (byte_4E71FAB & 1) == 0 )
  {
    sub_1D0F0B4(&ListViewSort_TypeInfo);
    sub_1D0F0B4(&StringLiteral_6855/*"FollowerSelectEventQuest"*/);
    sub_1D0F0B4(&StringLiteral_6856/*"FollowerSelectMainQuest"*/);
    byte_4E71FAB = 1;
  }
  if ( questType )
  {
    if ( questType != 1 )
    {
      v8 = sub_1D0F0C8(&System_NotImplementedException_TypeInfo);
      v9 = (System_NotImplementedException_o *)sub_1D0F300(v8);
      System_NotImplementedException___ctor(v9, 0);
      v10 = sub_1D0F0C8(&Method_FollowerSelectItemListViewManager___c___cctor_b__136_0__);
      sub_1D0F1DC(v9, v10);
    }
    v4 = &StringLiteral_6855/*"FollowerSelectEventQuest"*/;
  }
  else
  {
    v4 = &StringLiteral_6856/*"FollowerSelectMainQuest"*/;
  }
  v5 = (System_String_o *)*v4;
  v6 = (ListViewSort_o *)sub_1D0F300(ListViewSort_TypeInfo);
  ListViewSort___ctor_45192800(v6, v5, 11, 0, 0);
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
    sub_1D0F30C(this, 0);
  return FollowerSelectItemListViewItem__get_GrandFollowerClassId(x, 0) == this->fields.followerClassId;
}