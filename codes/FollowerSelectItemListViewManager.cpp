void FollowerSelectItemListViewManager___cctor(const MethodInfo *method)
{
  FollowerSelectItemListViewManager___c_c *v1; // x0
  Il2CppObject *v2; // x19
  System_Func_T__TResult__o *v3; // x20
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4D2B389 & 1) == 0 )
  {
    sub_1C93AD4(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C93AD4(&System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo);
    sub_1C93AD4(&Method_FollowerSelectItemListViewManager___c___cctor_b__136_0__);
    sub_1C93AD4(&FollowerSelectItemListViewManager___c_TypeInfo);
    byte_4D2B389 = 1;
  }
  v1 = FollowerSelectItemListViewManager___c_TypeInfo;
  if ( !FollowerSelectItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager___c_TypeInfo);
    v1 = FollowerSelectItemListViewManager___c_TypeInfo;
  }
  v2 = (Il2CppObject *)v1->static_fields->__9;
  v3 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo);
  System_Func_Int32Enum__object____ctor(v3, v2, Method_FollowerSelectItemListViewManager___c___cctor_b__136_0__, 0);
  FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT = (struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)v3;
  sub_1C93A78(FollowerSelectItemListViewManager_TypeInfo->static_fields, v3);
  static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->lastSelectedQuestId = -1;
  static_fields->REFRESH_DARK_COLOR = (struct UnityEngine_Color_o)xmmword_D00F20;
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

  if ( (byte_4D2B35D & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C93AD4(&StringLiteral_17575/*"btn_bg_12"*/);
    sub_1C93AD4(&StringLiteral_17646/*"btn_sefilter_2"*/);
    sub_1C93AD4(&StringLiteral_17803/*"buttontxt_formation_19"*/);
    byte_4D2B35D = 1;
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
  AtlasManager__SetEventSprite(changeSkillButtonSprite, (System_String_o *)StringLiteral_17803/*"buttontxt_formation_19"*/, 0);
  AtlasManager__SetEventSprite(this->fields.bonusFilterSprite, (System_String_o *)StringLiteral_17646/*"btn_sefilter_2"*/, 0);
  changeSkillButton = (UnityEngine_Component_o *)this->fields.bonusFilterSprite;
  if ( !changeSkillButton
    || (changeSkillButton = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))changeSkillButton->klass[2]._1.parent)(
                                                         changeSkillButton,
                                                         changeSkillButton->klass[2]._1.generic_class),
        !sortKindButton)
    || (Component_object = UnityEngine_Component__GetComponent_object_(
                             sortKindButton,
                             (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UISprite___),
        changeSkillButton = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(
                                                         (UISprite_o *)Component_object,
                                                         (System_String_o *)StringLiteral_17575/*"btn_bg_12"*/,
                                                         0),
        !Component_object) )
  {
LABEL_11:
    sub_1C93D2C(changeSkillButton, method);
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
    sub_1C93D2C(classButtonControl, *(_QWORD *)&classPos);
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

  if ( (byte_4D2B37B & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B37B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v6);
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
  int32_t v21; // w28
  ClassButtonControlComponent_o *classButtonControl; // x22
  ClassButtonControlComponent_CallbackFunc_o *v23; // x27
  const MethodInfo *v24; // x4
  int32_t InitialDisplayClass; // w22
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
  System_Int32_array *OngoingQuestTargetEventIds; // x22
  EventUpValSetupInfo_o *v28; // x27
  __int64 v29; // x8
  __int64 v30; // x28
  unsigned __int64 v31; // x19
  int32_t v32; // w0
  ClassButtonControlComponent_o *v33; // x21
  const MethodInfo *v34; // x2
  FollowerSelectItemListViewManager_o *v35; // x19
  QuestPhaseEntity_o *v36; // x25
  bool IsNoneSupportFriendPoint; // w22
  __int64 v38; // x21
  struct EventUpValSetupInfo_o *setupInfo; // x1
  long double v40; // q0
  __int64 v41; // x0
  int32_t v42; // w29
  __int64 v43; // x0
  Il2CppObject *MasterData_object; // x27
  FollowerInfo_array *QuestFollowerList; // x20
  int v46; // w19
  QuestRestrictionInfo_o *v47; // x22
  bool IsMyServantOrNpcRestriction_44136444; // w21
  BalanceConfig_c *v49; // x0
  int32_t ClassBoardReleaseQuestId; // w22
  bool IsQuestClear_41038904; // w22
  int max_length; // w8
  QuestRestrictionInfo_o *v53; // x19
  int v54; // w23
  FollowerInfo_o *v55; // x28
  ServantLeaderInfo_o *ServantLeaderInfo; // x26
  int32_t v57; // w0
  System_Int32_array *v58; // x22
  int32_t Rarity; // w0
  System_Collections_Generic_List_object__o *v60; // x22
  char v61; // w19
  Il2CppObject *v62; // x0
  __int64 v63; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v64; // x26
  __int64 v65; // x19
  int32_t ClassBoardBaseId; // w27
  Il2CppObject *v67; // x26
  ClassBoardInfo_o *v68; // x19
  int32_t v69; // w25
  int32_t v70; // w29
  Il2CppObject *v71; // x27
  __int64 v72; // x0
  System_Int32_array *OpenClassIdArrayFromBaseId; // x0
  struct System_Object_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  Il2CppClass **v77; // x0
  System_Object_array *v78; // x0
  FollowerSelectItemListViewManager_c *v79; // x0
  int32_t followerClassId; // w27
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v81; // x26
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x19
  FollowerSelectItemListViewItem_o *v83; // x22
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
  QuestPhaseEntity_o *v96; // x20
  bool v97; // w8
  FollowerSelectItemListViewManager_o *v98; // x29
  Il2CppClass *klass; // x25
  int namespaze; // w8
  unsigned int v101; // w27
  void **v102; // x8
  Il2CppObject *v103; // x0
  Il2CppObject *v104; // x21
  __int64 v105; // x20
  BalanceConfig_c *v106; // x0
  struct BalanceConfig_StaticFields *v107; // x9
  int32_t FixEventSupportDeckNum; // w21
  int32_t FixMainSupportDeckNum; // w22
  int32_t deckPriority; // w21
  unsigned __int64 v111; // x23
  int32_t v112; // w26
  System_Collections_Generic_Dictionary_int__int__o *v113; // x24
  FollowerInfo_o *v114; // x27
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v115; // x28
  int32_t v116; // w25
  FollowerSelectItemListViewItem_o *v117; // x22
  __int64 v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  __int64 v121; // x8
  int32_t i; // w21
  struct BalanceConfig_StaticFields *v123; // x8
  int32_t v124; // w22
  int32_t v125; // w26
  int32_t v126; // w22
  unsigned __int64 v127; // x24
  int32_t v128; // w26
  FollowerInfo_o *v129; // x27
  int v130; // w25
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v131; // x23
  int32_t v132; // w19
  FollowerSelectItemListViewItem_o *v133; // x28
  __int64 v134; // x8
  _QWORD *v135; // x9
  __int64 v136; // x10
  __int64 v137; // x8
  Il2CppClass *v138; // x22
  const char *v139; // x8
  int v140; // w23
  unsigned __int64 v141; // x24
  FollowerInfo_o *v142; // x25
  Il2CppObject *v143; // x0
  __int64 v144; // x28
  BalanceConfig_c *v145; // x0
  struct BalanceConfig_StaticFields *v146; // x9
  int32_t v147; // w20
  int32_t v148; // w21
  int32_t v149; // w26
  unsigned __int64 v150; // x24
  int32_t v151; // w21
  int32_t v152; // w29
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v153; // x23
  System_Collections_Generic_Dictionary_int__int__o *v154; // x27
  FollowerSelectItemListViewItem_o *v155; // x20
  __int64 v156; // x8
  _QWORD *v157; // x9
  __int64 v158; // x10
  __int64 v159; // x8
  int32_t v160; // w21
  BalanceConfig_c *v161; // x0
  struct BalanceConfig_StaticFields *v162; // x8
  int32_t v163; // w20
  int32_t v164; // w26
  unsigned __int64 v165; // x29
  int32_t v166; // w27
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v167; // x23
  int v168; // w19
  System_Collections_Generic_Dictionary_int__int__o *v169; // x22
  FollowerSelectItemListViewItem_o *v170; // x20
  __int64 v171; // x8
  _QWORD *v172; // x9
  __int64 v173; // x10
  __int64 v174; // x8
  bool isGrandServantRestriction; // w19
  struct ServantLeaderInfo_array *userSvtGrandHash; // x24
  int v177; // w8
  unsigned int v178; // w27
  ServantLeaderInfo_o *v179; // x9
  int32_t v180; // w23
  System_Collections_Generic_Dictionary_int__int__o *v181; // x22
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *followerSelectItemOption; // x21
  int32_t grandGraphId; // w25
  FollowerSelectItemListViewItem_o *v184; // x20
  __int64 v185; // x8
  _QWORD *v186; // x9
  __int64 v187; // x10
  __int64 v188; // x8
  Il2CppClass *v189; // x19
  bool v190; // w20
  unsigned __int64 namespaze_low; // x8
  unsigned __int64 v192; // x25
  Il2CppType *p_byval_arg; // x27
  __int64 v194; // x9
  __int64 v195; // x9
  __int64 v196; // x22
  __int64 v197; // x8
  __int64 v198; // x8
  __int64 v199; // x8
  __int64 v200; // x23
  __int64 v201; // x24
  int32_t v202; // w23
  FollowerInfo_o *v203; // x24
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v204; // x26
  System_Collections_Generic_Dictionary_int__int__o *v205; // x28
  FollowerSelectItemListViewItem_o *v206; // x22
  __int64 v207; // x8
  _QWORD *v208; // x9
  __int64 v209; // x10
  __int64 v210; // x8
  const MethodInfo *v211; // x2
  FollowerSelectItemListViewManager_c *v212; // x0
  const MethodInfo *v213; // x2
  const MethodInfo *v214; // x1
  struct UIScrollView_o *scrollView; // x8
  __int64 v216; // x0
  int32_t supportDeckId; // [xsp+0h] [xbp-170h]
  int32_t supportDeckIda; // [xsp+0h] [xbp-170h]
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary; // [xsp+10h] [xbp-160h]
  ClassBoardClassMaster_o *Master_object; // [xsp+50h] [xbp-120h]
  ClassBoardClassMaster_o *v221; // [xsp+50h] [xbp-120h]
  Il2CppObject *v222; // [xsp+58h] [xbp-118h]
  Il2CppClass *v223; // [xsp+58h] [xbp-118h]
  bool IsUseGrandBoard; // [xsp+64h] [xbp-10Ch]
  struct System_Collections_Generic_List_ListViewItem__o **p_recommendItemList; // [xsp+68h] [xbp-108h]
  unsigned int v226; // [xsp+70h] [xbp-100h]
  int pos; // [xsp+84h] [xbp-ECh]
  bool isReleasedClassBoard; // [xsp+88h] [xbp-E8h]
  bool v232[8]; // [xsp+88h] [xbp-E8h]
  bool HasFlag_43185356; // [xsp+88h] [xbp-E8h]
  struct System_Collections_Generic_List_ListViewItem__o **p_originalItemList; // [xsp+90h] [xbp-E0h]
  QuestPhaseEntity_o *v235; // [xsp+98h] [xbp-D8h]
  QuestPhaseEntity_o *v236; // [xsp+98h] [xbp-D8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v237; // [xsp+A0h] [xbp-D0h]
  Il2CppClass *v238; // [xsp+A0h] [xbp-D0h]
  int v239; // [xsp+A0h] [xbp-D0h]
  bool IsRecommendedFollower; // [xsp+A8h] [xbp-C8h]
  _BOOL4 followerInfo; // [xsp+B0h] [xbp-C0h]
  unsigned int followerInfoa; // [xsp+B0h] [xbp-C0h]
  FollowerInfo_o *followerInfob; // [xsp+B0h] [xbp-C0h]
  int32_t index; // [xsp+B8h] [xbp-B8h]
  int32_t indexa[2]; // [xsp+B8h] [xbp-B8h]
  int32_t indexb[2]; // [xsp+B8h] [xbp-B8h]
  struct System_Collections_Generic_List_ListViewItem__o **p_mixItemList; // [xsp+C0h] [xbp-B0h]
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o **p_followerSelectItemOption; // [xsp+C8h] [xbp-A8h]
  UserFollowMaster_o *v249; // [xsp+C8h] [xbp-A8h]
  Il2CppObject *v251; // [xsp+D8h] [xbp-98h] BYREF
  Il2CppObject *v252; // [xsp+E0h] [xbp-90h] BYREF
  Il2CppObject *v253; // [xsp+E8h] [xbp-88h] BYREF
  UserClassBoardSquareEntity_o *v254; // [xsp+F0h] [xbp-80h] BYREF
  bool isWhole; // [xsp+FCh] [xbp-74h] BYREF
  Il2CppObject *v256; // [xsp+100h] [xbp-70h] BYREF
  NpcFollowerEntity_o *entity; // [xsp+108h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v258; // 0:x0.16

  if ( (byte_4D2B35F & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_1C93AD4(&ClassBoardInfo_TypeInfo);
    sub_1C93AD4(&ClassButtonControlComponent_TypeInfo);
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserFollowerMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    sub_1C93AD4(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__);
    sub_1C93AD4(&Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C93AD4(&EventUpValSetupInfo_TypeInfo);
    sub_1C93AD4(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C93AD4(&Method_FollowerSelectItemListViewManager_OnChangeClass__);
    sub_1C93AD4(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C93AD4(&FollowerSelectItemListViewManager_FollowerSelectItemOption_TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_ClassBoardInfo__TypeInfo);
    sub_1C93AD4(&System_Math_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&ServantLeaderInfo___TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C93AD4(&StringLiteral_3210/*"BonusFilterEventId"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2B35F = 1;
  }
  v256 = 0;
  entity = 0;
  isWhole = 0;
  v253 = 0;
  v254 = 0;
  v251 = 0;
  v252 = 0;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C93A78(&this->fields.questRestrictionInfo, questRestrictionInfo);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.mixItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v11;
  p_mixItemList = &this->fields.mixItemList;
  sub_1C93A78(&this->fields.mixItemList, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.originalItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v12;
  p_originalItemList = &this->fields.originalItemList;
  sub_1C93A78(&this->fields.originalItemList, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.recommendItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v13;
  p_recommendItemList = &this->fields.recommendItemList;
  sub_1C93A78(&this->fields.recommendItemList, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.grandItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v14;
  sub_1C93A78(&this->fields.grandItemList, v14);
  ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0);
  v17 = FollowerSelectItemListViewManager_TypeInfo;
  v226 = ReturnTypeByQuestId;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v17 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v17->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT )
    goto LABEL_346;
  v19 = (struct ListViewSort_o *)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))LIST_VIEW_SORT->fields.invoke_impl)(
                                   LIST_VIEW_SORT->fields.method_code,
                                   v226,
                                   LIST_VIEW_SORT->fields.method);
  this->fields.sort = v19;
  p_sort = &this->fields.sort;
  sub_1C93A78(&this->fields.sort, v19);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_346;
  v21 = *(_DWORD *)(ReturnTypeByQuestId + 84);
  classButtonControl = this->fields.classButtonControl;
  v23 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C93D20(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v23,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0);
  if ( !classButtonControl )
    goto LABEL_346;
  pos = v21;
  ClassButtonControlComponent__init(classButtonControl, v23, questId, questPhase, questRestrictionInfo, v21, 0);
  if ( !*p_sort )
    goto LABEL_346;
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
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_346;
  OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                 (EventQuestMaster_o *)ReturnTypeByQuestId,
                                 questId,
                                 questPhase,
                                 0,
                                 0);
  v28 = (EventUpValSetupInfo_o *)sub_1C93D20(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_42466312(v28, OngoingQuestTargetEventIds, 0, questId, questPhase, 0);
  this->fields.setupInfo = v28;
  sub_1C93A78(&this->fields.setupInfo, v28);
  ReturnTypeByQuestId = (__int64)this->fields.sort;
  if ( !ReturnTypeByQuestId )
    goto LABEL_346;
  ListViewSort__Load((ListViewSort_o *)ReturnTypeByQuestId, 0);
  if ( !OngoingQuestTargetEventIds )
    goto LABEL_346;
  if ( OngoingQuestTargetEventIds->max_length )
  {
    ReturnTypeByQuestId = (__int64)UnityEngine_PlayerPrefs__GetString_72078212((System_String_o *)StringLiteral_3210/*"BonusFilterEventId"*/, 0);
    if ( !ReturnTypeByQuestId )
      goto LABEL_346;
    if ( *(int *)(ReturnTypeByQuestId + 16) < 1 )
      goto LABEL_27;
    ReturnTypeByQuestId = (__int64)System_String__Split((System_String_o *)ReturnTypeByQuestId, 0x2Cu, 0, 0);
    if ( !ReturnTypeByQuestId )
      goto LABEL_346;
    v29 = *(_QWORD *)(ReturnTypeByQuestId + 24);
    v30 = ReturnTypeByQuestId;
    if ( (int)v29 < 1 )
    {
LABEL_27:
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_346;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 18, 0, 0);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_346;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 19, 0, 0);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_346;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 20, 0, 0);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_346;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 40, 1, 0);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_346;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 41, 1, 0);
    }
    else
    {
      v31 = 0;
      while ( 1 )
      {
        if ( v31 >= (unsigned int)v29 )
          goto LABEL_347;
        v32 = System_Int32__Parse(*(System_String_o **)(v30 + 32 + 8 * v31), 0);
        ReturnTypeByQuestId = System_Linq_Enumerable__Contains_int_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)OngoingQuestTargetEventIds,
                                v32,
                                (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___);
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
    goto LABEL_346;
  ClassButtonControlComponent__setCursor(
    v33,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, OngoingQuestTargetEventIds, v34);
  ReturnTypeByQuestId = (__int64)this->fields.bonusFilterKindButton;
  if ( !ReturnTypeByQuestId )
    goto LABEL_346;
  ReturnTypeByQuestId = (__int64)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)ReturnTypeByQuestId,
                                   0);
  if ( !ReturnTypeByQuestId )
    goto LABEL_346;
  v35 = this;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)ReturnTypeByQuestId,
    this->fields.isBonusFilterEnable,
    0);
  if ( this->fields.isBonusFilterEnable )
  {
    ReturnTypeByQuestId = (__int64)this->fields.bonusFilterKindLabel;
    if ( !ReturnTypeByQuestId )
      goto LABEL_346;
    UILabel__set_text((UILabel_o *)ReturnTypeByQuestId, (System_String_o *)StringLiteral_1/*""*/, 0);
    v35 = this;
  }
  v35->fields.isRefreshBtnHide = 0;
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId
    || (ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0 )
  {
LABEL_346:
    sub_1C93D2C(ReturnTypeByQuestId, v16);
  }
  v36 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)ReturnTypeByQuestId, questId, questPhase, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !v36 )
    goto LABEL_341;
  IsNoneSupportFriendPoint = QuestPhaseEntity__IsNoneSupportFriendPoint(v36, 0);
  IsUseGrandBoard = QuestPhaseEntity__IsUseGrandBoard(v36, 0);
  v38 = sub_1C93D20(FollowerSelectItemListViewManager_FollowerSelectItemOption_TypeInfo);
  *(_BYTE *)(v38 + 64) = 1;
  System_Object___ctor((Il2CppObject *)v38, 0);
  *(_DWORD *)(v38 + 16) = friendPointUpVal;
  *(_DWORD *)(v38 + 20) = friendPointUpMaxVal;
  *(_QWORD *)(v38 + 24) = friendPointCampaignEntityList;
  sub_1C93A78(v38 + 24, friendPointCampaignEntityList);
  *(_BYTE *)(v38 + 32) = this->fields.isBonusFilterEnable;
  *(_BYTE *)(v38 + 33) = this->fields.isServantBonusFilterEnable;
  *(_BYTE *)(v38 + 34) = this->fields.isServantEquipBonusFilterEnable;
  setupInfo = this->fields.setupInfo;
  *(_QWORD *)(v38 + 40) = setupInfo;
  sub_1C93A78(v38 + 40, setupInfo);
  *(_QWORD *)(v38 + 48) = questRestrictionInfo;
  sub_1C93A78(v38 + 48, questRestrictionInfo);
  *(_BYTE *)(v38 + 65) = IsNoneSupportFriendPoint;
  *(_BYTE *)(v38 + 66) = IsUseGrandBoard;
  this->fields.followerSelectItemOption = (struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *)v38;
  p_followerSelectItemOption = &this->fields.followerSelectItemOption;
  sub_1C93A78(&this->fields.followerSelectItemOption, v38);
  v41 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
    v41 = sub_1C69B68(v40);
  v42 = questPhase;
  v43 = *(_QWORD *)(*(_QWORD *)(v41 + 192) + 16LL);
  if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
    v43 = sub_1C69B68(v40);
  ReturnTypeByQuestId = **(_QWORD **)(v43 + 184);
  if ( !ReturnTypeByQuestId )
    goto LABEL_346;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ReturnTypeByQuestId,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_346;
  ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_346;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)ReturnTypeByQuestId,
                        questId,
                        questPhase,
                        0);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_346;
  v46 = *(_DWORD *)(ReturnTypeByQuestId + 80);
  if ( v46 < 1 )
  {
    v47 = questRestrictionInfo;
    IsMyServantOrNpcRestriction_44136444 = 0;
  }
  else
  {
    v47 = questRestrictionInfo;
    if ( !questRestrictionInfo )
    {
      IsMyServantOrNpcRestriction_44136444 = 0;
      followerInfo = 0;
      goto LABEL_60;
    }
    IsMyServantOrNpcRestriction_44136444 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_44136444(
                                             questRestrictionInfo,
                                             pos,
                                             0);
  }
  followerInfo = 0;
  if ( v47 && v46 <= 0 )
    followerInfo = QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0);
LABEL_60:
  v49 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v49 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v49->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  v235 = v36;
  IsQuestClear_41038904 = CondType__IsQuestClear_41038904(ClassBoardReleaseQuestId, -1, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v237 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
  if ( !QuestFollowerList )
    goto LABEL_346;
  max_length = QuestFollowerList->max_length;
  v53 = questRestrictionInfo;
  if ( max_length >= 1 )
  {
    index = 0;
    isReleasedClassBoard = IsQuestClear_41038904;
    v54 = 0;
    v222 = MasterData_object;
    do
    {
      if ( v54 >= (unsigned int)max_length )
        goto LABEL_347;
      if ( !v53 )
        goto LABEL_346;
      v55 = QuestFollowerList->m_Items[v54];
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v53->fields.questId, 0);
      if ( !v55 )
        goto LABEL_346;
      ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v55, 0, ReturnTypeByQuestId, 0);
      v57 = FollowerInfo__GetReturnTypeByQuestId(v53->fields.questId, 0);
      ReturnTypeByQuestId = (__int64)FollowerInfo__GetNpcServantIndividualityFull(v55, 0, v57, 0);
      if ( !ServantLeaderInfo )
        goto LABEL_346;
      v58 = (System_Int32_array *)ReturnTypeByQuestId;
      Rarity = ServantLeaderInfo__getRarity(ServantLeaderInfo, 0);
      ReturnTypeByQuestId = QuestRestrictionInfo__IsRestriction_44117492(
                              v53,
                              &isWhole,
                              v58,
                              Rarity,
                              ServantLeaderInfo->fields.lv,
                              pos,
                              3,
                              0);
      if ( (ReturnTypeByQuestId & 1) != 0 )
        goto LABEL_135;
      if ( IsMyServantOrNpcRestriction_44136444 )
      {
        ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality_44139672(v53, v58, pos, 0);
        if ( (ReturnTypeByQuestId & 1) != 0 )
          goto LABEL_135;
      }
      if ( v55->fields.isFixedNpc || followerInfo && v55->fields.isMySvtOrNpc )
        goto LABEL_135;
      if ( !MasterData_object )
        goto LABEL_346;
      if ( NpcFollowerMaster__TryGetEntity(
             (NpcFollowerMaster_o *)MasterData_object,
             &entity,
             v55->fields.userId,
             questId,
             v42,
             0) )
      {
        ReturnTypeByQuestId = (__int64)entity;
        if ( !entity )
          goto LABEL_346;
        IsRecommendedFollower = NpcFollowerEntity__IsRecommendedFollower(entity, 0);
      }
      else
      {
        IsRecommendedFollower = 0;
      }
      v60 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ClassBoardInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v60,
        (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
      if ( !v237 )
        goto LABEL_346;
      ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetEntity(
                              v237,
                              &v256,
                              v55->fields.npcFollowerSvtId,
                              (const MethodInfo_3465A70 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
      if ( (ReturnTypeByQuestId & 1) != 0 )
      {
        if ( !v256 )
          goto LABEL_346;
        ReturnTypeByQuestId = NpcServantFollowerEntity__IsNotClassBoard((int32_t)v256[7].monitor, 0);
        if ( (ReturnTypeByQuestId & 1) != 0
          || (ReturnTypeByQuestId = QuestPhaseEntity__IsNotClassBoard(v235, 0), (ReturnTypeByQuestId & 1) != 0) )
        {
          v61 = 1;
          goto LABEL_113;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
        v62 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantMaster___);
        v63 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        *(_QWORD *)&v258.fields.fakeValue = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
        v64 = (DataMasterBase_TMaster__TEntity__PKType__o *)v62;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          v65 = *(_QWORD *)&v258.fields.fakeValue;
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v258.fields.fakeValue = v65;
        }
        *(_QWORD *)&v258.fields.currentCryptoKey = v63;
        ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v258, 0);
        if ( !v64 )
          goto LABEL_346;
        ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         v64,
                                         ReturnTypeByQuestId,
                                         (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !ReturnTypeByQuestId || !Master_object )
          goto LABEL_346;
        ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(
                             Master_object,
                             *(_DWORD *)(ReturnTypeByQuestId + 80),
                             0);
        v67 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4D2A55B )
        {
          sub_1C93AD4(&NetworkManager_TypeInfo);
          byte_4D2A55B = 1;
        }
        ReturnTypeByQuestId = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          ReturnTypeByQuestId = (__int64)NetworkManager_TypeInfo;
        }
        if ( !v67 )
          goto LABEL_346;
        ReturnTypeByQuestId = UserClassBoardSquareMaster__TryGetEntity(
                                (UserClassBoardSquareMaster_o *)v67,
                                &v254,
                                *(_QWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 64LL),
                                ClassBoardBaseId,
                                0);
        if ( (ReturnTypeByQuestId & 1) != 0 )
        {
          v68 = (ClassBoardInfo_o *)sub_1C93D20(ClassBoardInfo_TypeInfo);
          ClassBoardInfo___ctor(v68, 0);
          if ( !v68 )
            goto LABEL_346;
          v68->fields.classBoardBaseId = ClassBoardBaseId;
          if ( !v254 )
            goto LABEL_346;
          ReturnTypeByQuestId = (__int64)v254->fields.classBoardSquareIds;
          if ( !ReturnTypeByQuestId )
            goto LABEL_346;
          v69 = v42;
          v70 = ClassBoardBaseId;
          v71 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0);
          v68->fields.squareIds = (struct System_Int32_array *)sub_1C93C10(v71, int___TypeInfo);
          v72 = sub_1C93C10(v71, int___TypeInfo);
          sub_1C93A78(&v68->fields.squareIds, v72);
          OpenClassIdArrayFromBaseId = ClassBoardClassMaster__GetOpenClassIdArrayFromBaseId(Master_object, v70, 0);
          v68->fields.releasedClassIds = OpenClassIdArrayFromBaseId;
          ReturnTypeByQuestId = sub_1C93A78(&v68->fields.releasedClassIds, OpenClassIdArrayFromBaseId);
          if ( !v60 )
            goto LABEL_346;
          items = v60->fields._items;
          v75 = Method_System_Collections_Generic_List_ClassBoardInfo__Add__;
          ++v60->fields._version;
          if ( !items )
            goto LABEL_346;
          v42 = v69;
          size = v60->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v60,
              (Il2CppObject *)v68,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
          }
          else
          {
            v77 = &items->obj.klass + size;
            v60->fields._size = size + 1;
            v77[4] = (Il2CppClass *)v68;
            sub_1C93A78(v77 + 4, v68);
          }
          v61 = 0;
          goto LABEL_114;
        }
      }
      v61 = 0;
LABEL_113:
      if ( !v60 )
        goto LABEL_346;
LABEL_114:
      v78 = System_Collections_Generic_List_object___ToArray(
              v60,
              (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
      v55->fields.userClassBoardInfo = (struct ClassBoardInfo_array *)v78;
      sub_1C93A78(&v55->fields.userClassBoardInfo, v78);
      v79 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v79 = FollowerSelectItemListViewManager_TypeInfo;
      }
      followerClassId = v79->static_fields->followerClassId;
      v81 = *p_followerSelectItemOption;
      if ( (v61 & 1) != 0 )
        classBoardMaxDictionary = 0;
      else
        classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
      v83 = (FollowerSelectItemListViewItem_o *)sub_1C93D20(FollowerSelectItemListViewItem_TypeInfo);
      FollowerSelectItemListViewItem___ctor(
        v83,
        index,
        0,
        v55,
        followerClassId,
        IsRecommendedFollower,
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
        goto LABEL_346;
      v84 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      v85 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      v53 = questRestrictionInfo;
      MasterData_object = v222;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v84 )
        goto LABEL_346;
      v86 = *(int *)(ReturnTypeByQuestId + 24);
      if ( (unsigned int)v86 >= *(_DWORD *)(v84 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v83,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
      }
      else
      {
        v87 = v84 + 8 * v86;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v86 + 1;
        *(_QWORD *)(v87 + 32) = v83;
        sub_1C93A78(v87 + 32, v83);
      }
      ReturnTypeByQuestId = (__int64)*p_originalItemList;
      if ( !*p_originalItemList )
        goto LABEL_346;
      v88 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      v89 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v88 )
        goto LABEL_346;
      v90 = *(int *)(ReturnTypeByQuestId + 24);
      if ( (unsigned int)v90 >= *(_DWORD *)(v88 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v83,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
      }
      else
      {
        v91 = v88 + 8 * v90;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v90 + 1;
        *(_QWORD *)(v91 + 32) = v83;
        sub_1C93A78(v91 + 32, v83);
      }
      ReturnTypeByQuestId = (__int64)*p_recommendItemList;
      if ( !*p_recommendItemList )
        goto LABEL_346;
      v92 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      v93 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v92 )
        goto LABEL_346;
      v94 = *(int *)(ReturnTypeByQuestId + 24);
      if ( (unsigned int)v94 >= *(_DWORD *)(v92 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v83,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
      }
      else
      {
        v95 = v92 + 8 * v94;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v94 + 1;
        *(_QWORD *)(v95 + 32) = v83;
        ReturnTypeByQuestId = sub_1C93A78(v95 + 32, v83);
      }
      ++index;
LABEL_135:
      max_length = QuestFollowerList->max_length;
      ++v54;
    }
    while ( v54 < max_length );
  }
  if ( v53 )
  {
    v96 = v235;
    if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction(v53, 0) )
    {
      ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_346;
      if ( *(int *)(ReturnTypeByQuestId + 80) >= 1 )
      {
        v97 = !QuestRestrictionInfo__IsSelectableNormalSupport(v53, pos, 0);
        goto LABEL_146;
      }
    }
  }
  else
  {
    v96 = v235;
  }
  v97 = 0;
LABEL_146:
  this->fields.isRefreshBtnHide = v97;
  if ( !v97 && !v96->fields.isNpcOnly )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    v98 = this;
    if ( !ReturnTypeByQuestId )
      goto LABEL_346;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v253,
                            (const MethodInfo_3465B50 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v253 )
        goto LABEL_346;
      klass = v253[1].klass;
      if ( klass )
      {
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
        {
          v101 = 0;
          v238 = v253[1].klass;
          do
          {
            if ( v101 >= namespaze )
              goto LABEL_347;
            v102 = &klass->_1.image + (int)v101;
            ReturnTypeByQuestId = (__int64)v102[4];
            *(_QWORD *)indexa = v102 + 4;
            if ( !ReturnTypeByQuestId )
              goto LABEL_346;
            FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0);
            if ( v101 >= LODWORD(klass->_1.namespaze) )
              goto LABEL_347;
            if ( !**(_QWORD **)indexa )
              goto LABEL_346;
            ReturnTypeByQuestId = *(_QWORD *)(**(_QWORD **)indexa + 120LL);
            if ( !ReturnTypeByQuestId )
              goto LABEL_346;
            *(_QWORD *)v232 = *(_QWORD *)(ReturnTypeByQuestId + 24);
            v103 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0);
            if ( v103 )
            {
              v104 = v103;
              v105 = sub_1C93C10(v103, int___TypeInfo);
              if ( !v105 )
              {
                sub_1C940C8(v104);
LABEL_348:
                sub_1C940C8(v105);
LABEL_349:
                v216 = sub_1C93D50();
                sub_1C93BFC(v216, 0);
              }
            }
            else
            {
              v105 = 0;
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
            ReturnTypeByQuestId = System_Math__Max_65947544(FixMainSupportDeckNum, FixEventSupportDeckNum, 0);
            followerInfoa = v101;
            if ( *(int *)v232 >= 1 )
            {
              deckPriority = ReturnTypeByQuestId;
              v111 = 0;
              do
              {
                if ( !*p_originalItemList )
                  goto LABEL_346;
                if ( v101 >= LODWORD(klass->_1.namespaze) )
                  goto LABEL_347;
                if ( !v105 )
                  goto LABEL_346;
                if ( v111 >= *(unsigned int *)(v105 + 24) )
                  goto LABEL_347;
                v112 = (*p_originalItemList)->fields._size;
                v113 = v98->fields.classBoardMaxDictionary;
                v114 = **(FollowerInfo_o ***)indexa;
                v115 = *p_followerSelectItemOption;
                v116 = *(_DWORD *)(v105 + 32 + 4 * v111);
                v117 = (FollowerSelectItemListViewItem_o *)sub_1C93D20(FollowerSelectItemListViewItem_TypeInfo);
                FollowerSelectItemListViewItem___ctor(
                  v117,
                  v112,
                  0,
                  v114,
                  0,
                  0,
                  v115,
                  1,
                  v116,
                  deckPriority,
                  v113,
                  1,
                  0,
                  0,
                  0,
                  0,
                  0);
                ReturnTypeByQuestId = (__int64)v98->fields.originalItemList;
                if ( !ReturnTypeByQuestId )
                  goto LABEL_346;
                v118 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v119 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v118 )
                  goto LABEL_346;
                v120 = *(int *)(ReturnTypeByQuestId + 24);
                klass = v238;
                v101 = followerInfoa;
                if ( (unsigned int)v120 >= *(_DWORD *)(v118 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    (Il2CppObject *)v117,
                    *(const MethodInfo_387999C **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
                }
                else
                {
                  v121 = v118 + 8 * v120;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v120 + 1;
                  *(_QWORD *)(v121 + 32) = v117;
                  ReturnTypeByQuestId = sub_1C93A78(v121 + 32, v117);
                }
                ++v111;
                --deckPriority;
              }
              while ( *(unsigned int *)v232 != v111 );
            }
            for ( i = 0; ; ++i )
            {
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              }
              v123 = *(struct BalanceConfig_StaticFields **)(ReturnTypeByQuestId + 184);
              if ( i >= v123->SupportDeckMemberMax )
                break;
              if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
              {
                j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId);
                v123 = BalanceConfig_TypeInfo->static_fields;
              }
              v125 = v123->FixMainSupportDeckNum;
              v124 = v123->FixEventSupportDeckNum;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              ReturnTypeByQuestId = System_Math__Max_65947544(v125, v124, 0);
              if ( *(int *)v232 >= 1 )
              {
                v126 = ReturnTypeByQuestId;
                v127 = 0;
                while ( *p_mixItemList )
                {
                  ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                  v128 = (*p_mixItemList)->fields._size;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( v101 >= LODWORD(klass->_1.namespaze) )
                    goto LABEL_347;
                  if ( !v105 )
                    goto LABEL_346;
                  if ( v127 >= *(unsigned int *)(v105 + 24) )
                    goto LABEL_347;
                  v129 = **(FollowerInfo_o ***)indexa;
                  v130 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 180LL);
                  v131 = *p_followerSelectItemOption;
                  v132 = *(_DWORD *)(v105 + 32 + 4 * v127);
                  classBoardMaxNumDictionary = this->fields.classBoardMaxDictionary;
                  v98 = this;
                  v133 = (FollowerSelectItemListViewItem_o *)sub_1C93D20(FollowerSelectItemListViewItem_TypeInfo);
                  FollowerSelectItemListViewItem___ctor(
                    v133,
                    v128,
                    v130 - i,
                    v129,
                    i,
                    0,
                    v131,
                    1,
                    v132,
                    v126,
                    classBoardMaxNumDictionary,
                    1,
                    0,
                    0,
                    0,
                    0,
                    0);
                  ReturnTypeByQuestId = (__int64)this->fields.mixItemList;
                  if ( !ReturnTypeByQuestId )
                    goto LABEL_346;
                  v134 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                  v135 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                  if ( !v134 )
                    goto LABEL_346;
                  v136 = *(int *)(ReturnTypeByQuestId + 24);
                  if ( (unsigned int)v136 >= *(_DWORD *)(v134 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                      (Il2CppObject *)v133,
                      *(const MethodInfo_387999C **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v137 = v134 + 8 * v136;
                    *(_DWORD *)(ReturnTypeByQuestId + 24) = v136 + 1;
                    *(_QWORD *)(v137 + 32) = v133;
                    ReturnTypeByQuestId = sub_1C93A78(v137 + 32, v133);
                  }
                  klass = v238;
                  v101 = followerInfoa;
                  ++v127;
                  --v126;
                  if ( *(unsigned int *)v232 == v127 )
                    goto LABEL_203;
                }
                goto LABEL_346;
              }
LABEL_203:
              ;
            }
            namespaze = (int)klass->_1.namespaze;
            ++v101;
          }
          while ( (int)v101 < namespaze );
        }
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_346;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v252,
                            (const MethodInfo_3465B50 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v252 )
        goto LABEL_346;
      v138 = v252[1].klass;
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_346;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !ReturnTypeByQuestId )
        goto LABEL_346;
      ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                       questId,
                                       (const MethodInfo_3463274 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_346;
      HasFlag_43185356 = QuestEntity__HasFlag_43185356((QuestEntity_o *)ReturnTypeByQuestId, 0x8000000, questPhase, 0);
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_346;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserFollowMaster___);
      v221 = (ClassBoardClassMaster_o *)ReturnTypeByQuestId;
      if ( !v138 )
        goto LABEL_346;
      v139 = v138->_1.namespaze;
      if ( (int)v139 >= 1 )
      {
        v140 = 0;
        v141 = 0;
        v223 = v138;
        do
        {
          if ( v141 >= (unsigned int)v139 )
            goto LABEL_347;
          v142 = (FollowerInfo_o *)*((_QWORD *)&v138->_1.byval_arg.data + v141);
          if ( HasFlag_43185356 )
          {
            if ( !v142 )
              goto LABEL_346;
            if ( v142->fields.type == 5 )
            {
              ReturnTypeByQuestId = (__int64)v221;
              if ( !v221 )
                goto LABEL_346;
              ReturnTypeByQuestId = UserFollowMaster__IsFollowUser((UserFollowMaster_o *)v221, v142->fields.userId, 0);
              if ( (ReturnTypeByQuestId & 1) == 0 )
                goto LABEL_292;
            }
          }
          else
          {
            if ( !v142 )
              goto LABEL_346;
            if ( v142->fields.type == 5 )
              goto LABEL_292;
          }
          FollowerInfo__ChangeLimitCountBySpoilerProtection(v142, 0);
          sub_1C93B7C(int___TypeInfo, 0);
          if ( v226 )
          {
            ReturnTypeByQuestId = (__int64)v142->fields.eventSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_346;
          }
          else
          {
            ReturnTypeByQuestId = (__int64)v142->fields.mainSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_346;
          }
          *(_QWORD *)indexb = *(unsigned int *)(ReturnTypeByQuestId + 24);
          v143 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0);
          if ( v143 )
          {
            v105 = (__int64)v143;
            v144 = sub_1C93C10(v143, int___TypeInfo);
            if ( !v144 )
              goto LABEL_348;
          }
          else
          {
            v144 = 0;
          }
          v145 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v145 = BalanceConfig_TypeInfo;
          }
          v146 = v145->static_fields;
          v148 = v146->FixMainSupportDeckNum;
          v147 = v146->FixEventSupportDeckNum;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v236 = (QuestPhaseEntity_o *)v141;
          v239 = v140;
          ReturnTypeByQuestId = System_Math__Max_65947544(v148, v147, 0);
          v149 = ReturnTypeByQuestId;
          if ( indexb[0] >= 1 )
          {
            v150 = 0;
            while ( 1 )
            {
              if ( !*p_originalItemList || !v144 )
                goto LABEL_346;
              if ( v150 >= *(unsigned int *)(v144 + 24) )
                break;
              v151 = (*p_originalItemList)->fields._size;
              v152 = *(_DWORD *)(v144 + 32 + 4 * v150);
              v153 = *p_followerSelectItemOption;
              v154 = this->fields.classBoardMaxDictionary;
              v155 = (FollowerSelectItemListViewItem_o *)sub_1C93D20(FollowerSelectItemListViewItem_TypeInfo);
              supportDeckId = v152;
              v98 = this;
              FollowerSelectItemListViewItem___ctor(
                v155,
                v151,
                0,
                v142,
                0,
                0,
                v153,
                0,
                supportDeckId,
                v149,
                v154,
                1,
                0,
                0,
                0,
                0,
                0);
              ReturnTypeByQuestId = (__int64)this->fields.originalItemList;
              if ( !ReturnTypeByQuestId )
                goto LABEL_346;
              v156 = *(_QWORD *)(ReturnTypeByQuestId + 16);
              v157 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++*(_DWORD *)(ReturnTypeByQuestId + 28);
              if ( !v156 )
                goto LABEL_346;
              v158 = *(int *)(ReturnTypeByQuestId + 24);
              if ( (unsigned int)v158 >= *(_DWORD *)(v156 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                  (Il2CppObject *)v155,
                  *(const MethodInfo_387999C **)(*(_QWORD *)(v157[4] + 192LL) + 112LL));
              }
              else
              {
                v159 = v156 + 8 * v158;
                *(_DWORD *)(ReturnTypeByQuestId + 24) = v158 + 1;
                *(_QWORD *)(v159 + 32) = v155;
                ReturnTypeByQuestId = sub_1C93A78(v159 + 32, v155);
              }
              ++v150;
              --v149;
              if ( *(_QWORD *)indexb == v150 )
                goto LABEL_249;
            }
LABEL_347:
            sub_1C93D34(ReturnTypeByQuestId);
          }
LABEL_249:
          v160 = 0;
          followerInfob = v142;
          while ( 1 )
          {
            v161 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v161 = BalanceConfig_TypeInfo;
            }
            v162 = v161->static_fields;
            if ( v160 >= v162->SupportDeckMemberMax )
              break;
            if ( !v161->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v161);
              v162 = BalanceConfig_TypeInfo->static_fields;
            }
            v164 = v162->FixMainSupportDeckNum;
            v163 = v162->FixEventSupportDeckNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            ReturnTypeByQuestId = System_Math__Max_65947544(v164, v163, 0);
            v149 = ReturnTypeByQuestId;
            if ( indexb[0] >= 1 )
            {
              v165 = 0;
              while ( *p_mixItemList )
              {
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                v166 = (*p_mixItemList)->fields._size;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                }
                if ( !v144 )
                  break;
                if ( v165 >= *(unsigned int *)(v144 + 24) )
                  goto LABEL_347;
                v167 = *p_followerSelectItemOption;
                v168 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 180LL);
                v169 = this->fields.classBoardMaxDictionary;
                supportDeckIda = *(_DWORD *)(v144 + 32 + 4 * v165);
                v142 = followerInfob;
                v170 = (FollowerSelectItemListViewItem_o *)sub_1C93D20(FollowerSelectItemListViewItem_TypeInfo);
                FollowerSelectItemListViewItem___ctor(
                  v170,
                  v166,
                  v168 - v160,
                  followerInfob,
                  v160,
                  0,
                  v167,
                  0,
                  supportDeckIda,
                  v149,
                  v169,
                  1,
                  0,
                  0,
                  0,
                  0,
                  0);
                ReturnTypeByQuestId = (__int64)this->fields.mixItemList;
                if ( !ReturnTypeByQuestId )
                  break;
                v171 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v172 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v171 )
                  break;
                v173 = *(int *)(ReturnTypeByQuestId + 24);
                if ( (unsigned int)v173 >= *(_DWORD *)(v171 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    (Il2CppObject *)v170,
                    *(const MethodInfo_387999C **)(*(_QWORD *)(v172[4] + 192LL) + 112LL));
                }
                else
                {
                  v174 = v171 + 8 * v173;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v173 + 1;
                  *(_QWORD *)(v174 + 32) = v170;
                  ReturnTypeByQuestId = sub_1C93A78(v174 + 32, v170);
                }
                ++v165;
                --v149;
                if ( *(_QWORD *)indexb == v165 )
                  goto LABEL_270;
              }
              goto LABEL_346;
            }
LABEL_270:
            v98 = this;
            ++v160;
          }
          if ( IsUseGrandBoard )
          {
            ReturnTypeByQuestId = BasicHelper__IsNullOrEmpty(
                                    (System_Collections_ICollection_o *)v142->fields.userSvtGrandHash,
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
                  goto LABEL_346;
                ReturnTypeByQuestId = QuestRestrictionInfo__IsGrandServantRestriction(questRestrictionInfo, pos, 0);
                isGrandServantRestriction = ReturnTypeByQuestId & 1;
              }
              userSvtGrandHash = v142->fields.userSvtGrandHash;
              if ( !userSvtGrandHash )
                goto LABEL_346;
              v177 = userSvtGrandHash->max_length;
              if ( v177 >= 1 )
              {
                v178 = 0;
                while ( v178 < v177 )
                {
                  if ( !*p_mixItemList )
                    goto LABEL_346;
                  v179 = userSvtGrandHash->m_Items[v178];
                  if ( !v179 )
                    goto LABEL_346;
                  v180 = (*p_mixItemList)->fields._size;
                  v181 = v98->fields.classBoardMaxDictionary;
                  followerSelectItemOption = v98->fields.followerSelectItemOption;
                  grandGraphId = v179->fields.grandGraphId;
                  v184 = (FollowerSelectItemListViewItem_o *)sub_1C93D20(FollowerSelectItemListViewItem_TypeInfo);
                  FollowerSelectItemListViewItem___ctor(
                    v184,
                    v180,
                    0,
                    followerInfob,
                    0,
                    0,
                    followerSelectItemOption,
                    0,
                    0,
                    v149,
                    v181,
                    1,
                    0,
                    1,
                    grandGraphId,
                    isGrandServantRestriction,
                    0);
                  ReturnTypeByQuestId = (__int64)v98->fields.grandItemList;
                  if ( !ReturnTypeByQuestId )
                    goto LABEL_346;
                  v185 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                  v186 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                  if ( !v185 )
                    goto LABEL_346;
                  v187 = *(int *)(ReturnTypeByQuestId + 24);
                  if ( (unsigned int)v187 >= *(_DWORD *)(v185 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                      (Il2CppObject *)v184,
                      *(const MethodInfo_387999C **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v188 = v185 + 8 * v187;
                    *(_DWORD *)(ReturnTypeByQuestId + 24) = v187 + 1;
                    *(_QWORD *)(v188 + 32) = v184;
                    ReturnTypeByQuestId = sub_1C93A78(v188 + 32, v184);
                  }
                  v177 = userSvtGrandHash->max_length;
                  if ( (int)++v178 >= v177 )
                    goto LABEL_289;
                }
                goto LABEL_347;
              }
            }
          }
LABEL_289:
          ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
          }
          v138 = v223;
          v141 = (unsigned __int64)v236;
          v140 = v239 + 1;
          if ( v239 + 1 >= *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 724LL) )
            break;
LABEL_292:
          LODWORD(v139) = v138->_1.namespaze;
          ++v141;
        }
        while ( (__int64)v141 < (int)v139 );
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_346;
    if ( DataMasterBase_object__object__long___TryGetSingleEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
           &v251,
           (const MethodInfo_3465B50 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    {
      ReturnTypeByQuestId = (__int64)v251;
      if ( !v251 )
        goto LABEL_346;
      ReturnTypeByQuestId = UserRecommendFollowerEntity__IsEnableSupport(
                              (UserRecommendFollowerEntity_o *)v251,
                              questId,
                              questPhase,
                              0);
      if ( (ReturnTypeByQuestId & 1) != 0 )
      {
        if ( !v251 )
          goto LABEL_346;
        v189 = v251[1].klass;
        ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_346;
        ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !ReturnTypeByQuestId )
          goto LABEL_346;
        ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                         questId,
                                         (const MethodInfo_3463274 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_346;
        v190 = QuestEntity__HasFlag_43185356((QuestEntity_o *)ReturnTypeByQuestId, 0x8000000, questPhase, 0);
        ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_346;
        ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserFollowMaster___);
        v249 = (UserFollowMaster_o *)ReturnTypeByQuestId;
        if ( !v189 )
          goto LABEL_346;
        namespaze_low = (unsigned __int64)v189->_1.namespaze;
        if ( (int)namespaze_low >= 1 )
        {
          v192 = 0;
          p_byval_arg = &v189->_1.byval_arg;
          do
          {
            namespaze_low = (unsigned int)namespaze_low;
            if ( v190 )
            {
              if ( v192 >= (unsigned int)namespaze_low )
                goto LABEL_347;
              v194 = *((_QWORD *)&p_byval_arg->data + v192);
              if ( !v194 )
                goto LABEL_346;
              if ( *(_DWORD *)(v194 + 36) == 5 )
              {
                ReturnTypeByQuestId = (__int64)v249;
                if ( !v249 )
                  goto LABEL_346;
                ReturnTypeByQuestId = UserFollowMaster__IsFollowUser(v249, *(_QWORD *)(v194 + 16), 0);
                if ( (ReturnTypeByQuestId & 1) == 0 )
                  goto LABEL_340;
                namespaze_low = LODWORD(v189->_1.namespaze);
              }
            }
            else
            {
              if ( v192 >= (unsigned int)namespaze_low )
                goto LABEL_347;
              v195 = *((_QWORD *)&p_byval_arg->data + v192);
              if ( !v195 )
                goto LABEL_346;
              if ( *(_DWORD *)(v195 + 36) == 5 )
                goto LABEL_340;
            }
            if ( v192 >= namespaze_low )
              goto LABEL_347;
            v196 = *((_QWORD *)&p_byval_arg->data + v192);
            ReturnTypeByQuestId = sub_1C93B7C(ServantLeaderInfo___TypeInfo, 1);
            if ( v192 >= LODWORD(v189->_1.namespaze) )
              goto LABEL_347;
            v197 = *((_QWORD *)&p_byval_arg->data + v192);
            if ( !v197 )
              goto LABEL_346;
            v198 = *(_QWORD *)(v197 + 56);
            if ( !v198 )
              goto LABEL_346;
            if ( !*(_DWORD *)(v198 + 24) )
              goto LABEL_347;
            v199 = *(_QWORD *)(v198 + 32);
            if ( !v199 )
              goto LABEL_346;
            v200 = ReturnTypeByQuestId;
            if ( !ReturnTypeByQuestId )
              goto LABEL_346;
            v201 = *(_QWORD *)(v199 + 56);
            if ( v201 )
            {
              ReturnTypeByQuestId = sub_1C93C10(v201, *(_QWORD *)(*(_QWORD *)ReturnTypeByQuestId + 64LL));
              if ( !ReturnTypeByQuestId )
                goto LABEL_349;
            }
            if ( !*(_DWORD *)(v200 + 24) )
              goto LABEL_347;
            *(_QWORD *)(v200 + 32) = v201;
            ReturnTypeByQuestId = sub_1C93A78(v200 + 32, v201);
            if ( !v196 )
              goto LABEL_346;
            *(_QWORD *)(v196 + 40) = v200;
            ReturnTypeByQuestId = sub_1C93A78(v196 + 40, v200);
            if ( v192 >= LODWORD(v189->_1.namespaze) )
              goto LABEL_347;
            ReturnTypeByQuestId = *((_QWORD *)&p_byval_arg->data + v192);
            if ( !ReturnTypeByQuestId )
              goto LABEL_346;
            FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0);
            if ( !*p_recommendItemList )
              goto LABEL_346;
            if ( v192 >= LODWORD(v189->_1.namespaze) )
              goto LABEL_347;
            v202 = (*p_recommendItemList)->fields._size;
            v203 = (FollowerInfo_o *)*((_QWORD *)&p_byval_arg->data + v192);
            v204 = this->fields.followerSelectItemOption;
            v205 = this->fields.classBoardMaxDictionary;
            v206 = (FollowerSelectItemListViewItem_o *)sub_1C93D20(FollowerSelectItemListViewItem_TypeInfo);
            FollowerSelectItemListViewItem___ctor(v206, v202, 0, v203, 0, 0, v204, 0, 0, 0, v205, 1, 1, 0, 0, 0, 0);
            ReturnTypeByQuestId = (__int64)this->fields.recommendItemList;
            if ( !ReturnTypeByQuestId )
              goto LABEL_346;
            v207 = *(_QWORD *)(ReturnTypeByQuestId + 16);
            v208 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++*(_DWORD *)(ReturnTypeByQuestId + 28);
            if ( !v207 )
              goto LABEL_346;
            v209 = *(int *)(ReturnTypeByQuestId + 24);
            if ( (unsigned int)v209 >= *(_DWORD *)(v207 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                (Il2CppObject *)v206,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v208[4] + 192LL) + 112LL));
            }
            else
            {
              v210 = v207 + 8 * v209;
              *(_DWORD *)(ReturnTypeByQuestId + 24) = v209 + 1;
              *(_QWORD *)(v210 + 32) = v206;
              sub_1C93A78(v210 + 32, v206);
            }
            ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            }
            if ( (__int64)v192 >= *(int *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 724LL) )
              break;
LABEL_340:
            LODWORD(namespaze_low) = v189->_1.namespaze;
            ++v192;
          }
          while ( (__int64)v192 < (int)namespaze_low );
        }
      }
    }
  }
LABEL_341:
  ReturnTypeByQuestId = (__int64)this->fields.refreshButtonObject;
  if ( !ReturnTypeByQuestId )
    goto LABEL_346;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ReturnTypeByQuestId, !this->fields.isRefreshBtnHide, 0);
  v212 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v212 = FollowerSelectItemListViewManager_TypeInfo;
  }
  FollowerSelectItemListViewManager__SetEmptyMessage(this, v212->static_fields->followerClassId, v211);
  FollowerSelectItemListViewManager__SortClass(
    this,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    v213);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  FollowerSelectItemListViewManager__SetFilterButtonImage(this, v214);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_346;
  scrollView->fields.smoothDragStart = 1;
}


void FollowerSelectItemListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewManager_c *v2; // x0
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v4; // x8

  if ( (byte_4D2B358 & 1) == 0 )
  {
    sub_1C93AD4(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_6812/*"FollowerSelectClass"*/);
    sub_1C93AD4(&StringLiteral_6815/*"FollowerSelectOldClass"*/);
    byte_4D2B358 = 1;
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
    sub_1C93D2C(v2, v1);
  }
  ListViewSort__DeleteContinueData((ListViewSort_o *)v2, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6812/*"FollowerSelectClass"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6815/*"FollowerSelectOldClass"*/, 0);
}


void FollowerSelectItemListViewManager__DestroyList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FollowerSelectItemListViewManager__DestroyList_33215524(this, 0, v2);
}


void FollowerSelectItemListViewManager__DestroyList_33215524(
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

  if ( (byte_4D2B367 & 1) == 0 )
  {
    sub_1C93AD4(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&EventUpValSetupInfo_TypeInfo);
    sub_1C93AD4(&Method_FollowerSelectItemListViewManager_OnChangeClass__);
    sub_1C93AD4(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_11794/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/);
    sub_1C93AD4(&StringLiteral_6812/*"FollowerSelectClass"*/);
    sub_1C93AD4(&StringLiteral_6815/*"FollowerSelectOldClass"*/);
    byte_4D2B367 = 1;
  }
  if ( battleSetupInfo )
  {
    this->fields.questId = BattleSetupInfo__TargetQuestId(battleSetupInfo, 0);
    this->fields.questPhase = *(_DWORD *)((char *)&off_18 + (_QWORD)battleSetupInfo);
    v5 = *(struct QuestRestrictionInfo_o **)((char *)&qword_58 + (_QWORD)battleSetupInfo);
    this->fields.questRestrictionInfo = v5;
    sub_1C93A78(&this->fields.questRestrictionInfo, v5);
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
    sub_1C93A78(&this->fields.sort, v11);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (EventQuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventQuestMaster___);
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
    v16 = (EventUpValSetupInfo_o *)sub_1C93D20(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_42466312(v16, v15, 0, questId, questPhase, 0);
    p_setupInfo = &this->fields.setupInfo;
    this->fields.setupInfo = v16;
    v18 = v16;
  }
  else
  {
    this->fields.setupInfo = 0;
    sub_1C93A78(&this->fields.setupInfo, 0);
    p_setupInfo = &this->fields.questRestrictionInfo;
    v18 = 0;
    this->fields.questRestrictionInfo = 0;
  }
  sub_1C93A78(p_setupInfo, v18);
  classButtonControl = this->fields.classButtonControl;
  v20 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C93D20(ClassButtonControlComponent_CallbackFunc_TypeInfo);
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
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6812/*"FollowerSelectClass"*/, v31->static_fields->followerClassId, 0);
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
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6815/*"FollowerSelectOldClass"*/, v34->static_fields->oldFollowerClassId, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
  }
  this->fields.originalItemList = 0;
  sub_1C93A78(&this->fields.originalItemList, 0);
  this->fields.mixItemList = 0;
  sub_1C93A78(&this->fields.mixItemList, 0);
  this->fields.recommendItemList = 0;
  sub_1C93A78(&this->fields.recommendItemList, 0);
  this->fields.grandItemList = 0;
  sub_1C93A78(&this->fields.grandItemList, 0);
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
  v38 = setupInfo ? setupInfo->fields.eventIdList : (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
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
    ReturnTypeByQuestId = (EventQuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11794/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/, 0);
    if ( bonusFilterKindLabel )
    {
      UILabel__set_text(bonusFilterKindLabel, (System_String_o *)ReturnTypeByQuestId, 0);
      goto LABEL_45;
    }
LABEL_49:
    sub_1C93D2C(ReturnTypeByQuestId, v7);
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
  sub_1C93A78(&this->fields.followerSelectItemOption, 0);
}


void FollowerSelectItemListViewManager__EndClassCompatibilityMenu(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D2B376 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B376 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v3);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0, 0);
}


void FollowerSelectItemListViewManager__EndCloseClassBoardEffectListDialog(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D2B387 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B387 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
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

  if ( (byte_4D2B378 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B378 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__,
    0);
  if ( !Instance )
LABEL_8:
    sub_1C93D2C(sort, v6);
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

  if ( (byte_4D2B362 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2B362 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v14 = v11->fields.classIds;
  if ( !v14 )
    goto LABEL_17;
  if ( !LODWORD(v14->max_length) )
    sub_1C93D34(Instance);
  if ( !Instance )
LABEL_17:
    sub_1C93D2C(Instance, v9);
  v15 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          v14->m_Items[0],
          (const MethodInfo_3463274 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
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

  if ( (byte_4D2B36B & 1) == 0 )
  {
    sub_1C93AD4(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4D2B36B = 1;
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

  if ( (byte_4D2B388 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4D2B388 = 1;
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
  __int64 enableCount; // [xsp+8h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_4D2B360 & 1) == 0 )
  {
    sub_1C93AD4(&ClassButtonControlComponent_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_RecommendSupportQuestMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C93AD4(&OptionManager_TypeInfo);
    this = (FollowerSelectItemListViewManager_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2B360 = 1;
  }
  v24 = 0;
  enableCount = 0;
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
  if ( ClassButtonControlComponent__HasDisableClassTabs(
         classButtonControl,
         (int32_t *)&enableCount + 1,
         (int32_t *)&enableCount,
         0) )
  {
    if ( (v14 & 1) != 0 )
      return followerClassId;
    if ( (_DWORD)enableCount == 1 )
      followerClassId = HIDWORD(enableCount);
    else
      followerClassId = 9;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsSameQuestAndPhase = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
    sub_1C93D2C(IsSameQuestAndPhase, v12);
  }
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(followerClassId, 0) )
  {
    IsSameQuestAndPhase = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsSameQuestAndPhase )
      goto LABEL_34;
    IsSameQuestAndPhase = DataManager__GetMasterData_object_(
                            (DataManager_o *)IsSameQuestAndPhase,
                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_RecommendSupportQuestMaster___);
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

  if ( (byte_4D2B369 & 1) == 0 )
  {
    sub_1C93AD4(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4D2B369 = 1;
  }
  result = (FollowerSelectItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4D2B383 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4D2B383 = 1;
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

  if ( (byte_4D2B384 & 1) == 0 )
  {
    sub_1C93AD4(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4D2B384 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1C93D2C(itemList, userId);
  v8 = 0;
  while ( v8 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v8,
             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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


int32_t FollowerSelectItemListViewManager__GetItemIndex_33228056(
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

  if ( (byte_4D2B385 & 1) == 0 )
  {
    sub_1C93AD4(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4D2B385 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_1C93D2C(itemList, userId);
  v12 = 0;
  while ( v12 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v12,
             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  if ( (byte_4D2B364 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_6812/*"FollowerSelectClass"*/);
    byte_4D2B364 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6812/*"FollowerSelectClass"*/, 0, 0);
}


int32_t FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2B365 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_6815/*"FollowerSelectOldClass"*/);
    byte_4D2B365 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6815/*"FollowerSelectOldClass"*/, 0, 0);
}


void FollowerSelectItemListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewManager_c *v2; // x0
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v4; // x8

  if ( (byte_4D2B359 & 1) == 0 )
  {
    sub_1C93AD4(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4D2B359 = 1;
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
    sub_1C93D2C(v2, v1);
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

  if ( (byte_4D2B361 & 1) == 0 )
  {
    sub_1C93AD4(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4D2B361 = 1;
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
  if ( (byte_4D2B366 & 1) == 0 )
  {
    sub_1C93AD4(&ClassButtonControlComponent_TypeInfo);
    sub_1C93AD4(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C93AD4(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (FollowerSelectItemListViewManager_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4D2B366 = 1;
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
                                                      (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C93D2C(this, *(_QWORD *)&friendPointUpVal);
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
                                                        (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
                                                        (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4D2B37E & 1) == 0 )
  {
    sub_1C93AD4(&ClassButtonControlComponent_TypeInfo);
    sub_1C93AD4(&Method_FollowerSelectItemListViewManager_OnChangeClass__);
    sub_1C93AD4(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4D2B37E = 1;
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
          v14 = (_QWORD *)sub_1C93AEC(Method_FollowerSelectItemListViewManager_OnChangeClass__);
        v15 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v14, v14[4]);
        OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
        if ( (v7 & 1) != 0 )
          FollowerSelectItemListViewManager__OnClickRecommend(this, classPos, v16);
        else
          FollowerSelectItemListViewManager__SortClass(this, classPos, v16);
        return;
      }
    }
LABEL_22:
    sub_1C93D2C(IsRecommendSupportGroupType, v6);
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

  if ( (byte_4D2B377 & 1) == 0 )
  {
    sub_1C93AD4(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__);
    sub_1C93AD4(&Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B377 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
    isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
    equipBonusFilterEventIds = this->fields.equipBonusFilterEventIds;
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantBonusFilterSelectMenu_CallbackFunc_o *)sub_1C93D20(ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantBonusFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__,
      0);
    if ( !v10 )
      sub_1C93D2C(v12, v13);
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

  if ( (byte_4D2B382 & 1) == 0 )
  {
    sub_1C93AD4(&Method_FollowerSelectItemListViewManager_OnClickChangeSkill__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    byte_4D2B382 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickChangeSkill__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickChangeSkill__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_FollowerSelectItemListViewManager_OnClickChangeSkill__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    displaySkill = this->fields.displaySkill;
    if ( (unsigned int)displaySkill <= 2 )
      this->fields.displaySkill = dword_D335C4[displaySkill];
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
                                                                    (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
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
      sub_1C93D2C(ObjectList, v8);
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

  if ( (byte_4D2B375 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__);
    sub_1C93AD4(&Method_FollowerSelectItemListViewManager_OnClickClassComparibility__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B375 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickClassComparibility__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickClassComparibility__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_FollowerSelectItemListViewManager_OnClickClassComparibility__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v6,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__,
      0);
    if ( !Instance )
      sub_1C93D2C(v7, v8);
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

  if ( (byte_4D2B37F & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__);
    sub_1C93AD4(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4D2B37F = 1;
  }
  entity = 0;
  if ( this->fields.isGetRecommendSupport )
    goto LABEL_4;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
  if ( !Master_object )
    goto LABEL_16;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          (const MethodInfo_3465B50 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    goto LABEL_12;
  Master_object = entity;
  if ( !entity )
LABEL_16:
    sub_1C93D2C(Master_object, v6);
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
    sub_1C93A78(&this->fields.callbackFunc, 0);
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

  if ( (byte_4D2B374 & 1) == 0 )
  {
    sub_1C93AD4(&ClassButtonControlComponent_TypeInfo);
    byte_4D2B374 = 1;
  }
  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0;
      v4 = sub_1C93A78(&this->fields.callbackFunc, 0);
      classButtonControl = this->fields.classButtonControl;
      if ( !classButtonControl )
        sub_1C93D2C(v4, v5);
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
    v5 = sub_1C93A78(&this->fields.callbackFunc, 0);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2B37C & 1) == 0 )
  {
    sub_1C93AD4(&Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__);
    byte_4D2B37C = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2B37A & 1) == 0 )
  {
    sub_1C93AD4(&OtherUserSortDialog_CallbackFunc_TypeInfo);
    sub_1C93AD4(&ClassButtonControlComponent_TypeInfo);
    sub_1C93AD4(&Method_FollowerSelectItemListViewManager_CloseSortDialog__);
    sub_1C93AD4(&Method_FollowerSelectItemListViewManager_OnClickSortKind__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B37A = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_FollowerSelectItemListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v12 = this->fields.sort;
        v13 = (CommonUI_o *)Instance;
        v14 = (OtherUserSortDialog_CallbackFunc_o *)sub_1C93D20(OtherUserSortDialog_CallbackFunc_TypeInfo);
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
    sub_1C93D2C(IsRecommendSupportGroupType, v6);
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
    v5 = sub_1C93A78(&this->fields.callbackFunc, 0);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1C93D2C(v5, v6);
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
    v5 = sub_1C93A78(&this->fields.callbackFunc, 0);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2B372 & 1) == 0 )
  {
    sub_1C93AD4(&FollowerSelectItemListViewObject_TypeInfo);
    byte_4D2B372 = 1;
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
    v8 = sub_1C93A78(&this->fields.callbackFunc, 0);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1C93D2C(v8, v9);
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

  if ( (byte_4D2B373 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_12747/*"ScrollViewEnabled"*/);
    byte_4D2B373 = 1;
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
        (System_String_o *)StringLiteral_12747/*"ScrollViewEnabled"*/,
        0.1,
        0);
    }
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    tutorialListViewObject = (UnityEngine_Component_o *)sub_1C93A78(&this->fields.callbackFunc, 0);
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
      sub_1C93D2C(tutorialListViewObject, obj);
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

  if ( (byte_4D2B371 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B371 = 1;
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
              sub_1C93A78(&this->fields.callbackFunc2, 0);
              if ( callbackFunc2 )
                ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
                  callbackFunc2->fields.method_code,
                  callbackFunc2->fields.method);
              return;
            }
          }
        }
      }
      sub_1C93D2C(tutorialListViewObject, v7);
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
  if ( (byte_4D2B386 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Array_Empty_int___);
    sub_1C93AD4(&ClassBoardInfo_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C93AD4(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C93AD4(&Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__);
    sub_1C93AD4(&Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (FollowerSelectItemListViewManager_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B386 = 1;
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
                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
            v10 = (_QWORD *)sub_1C93AEC(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
          v11 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0, 0);
          return;
        }
        v4->fields.isInput = 0;
        v12 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
        if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 83) & 2) != 0 )
          v12 = (_QWORD *)sub_1C93AEC(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
        v13 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v12, v12[4]);
        OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantMaster___);
        this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewItem__get_SvtId(v8, 0);
        if ( Master_object )
        {
          this = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                          (int32_t)this,
                                                          (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            scrollView = (int32_t)this->fields.scrollView;
            this = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
                this = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
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
                      v23 = (ClassBoardInfo_o *)sub_1C93D20(ClassBoardInfo_TypeInfo);
                      ClassBoardInfo___ctor(v23, 0);
                      if ( !v23 )
                        goto LABEL_67;
                      v23->fields.classBoardBaseId = v16;
                      v26 = Method_System_Array_Empty_int___;
                      v27 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v27 )
                      {
                        sub_1C69BC4(Method_System_Array_Empty_int___);
                        v27 = v26[7];
                      }
                      v28 = *(_QWORD *)(v27 + 16);
                      if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
                        v28 = sub_1C69B68(inited);
                      if ( !*(_DWORD *)(v28 + 224) )
                        inited = j_il2cpp_runtime_class_init_0(v28);
                      v29 = *(_QWORD *)(v26[7] + 16LL);
                      if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
                        v29 = sub_1C69B68(inited);
                      v30 = *(struct System_Int32_array ***)(v29 + 184);
                      v31 = *v30;
                      v23->fields.squareIds = *v30;
                      sub_1C93A78(&v23->fields.squareIds, v31);
                      v33 = Method_System_Array_Empty_int___;
                      v34 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v34 )
                      {
                        sub_1C69BC4(Method_System_Array_Empty_int___);
                        v34 = v33[7];
                      }
                      v35 = *(_QWORD *)(v34 + 16);
                      if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
                        v35 = sub_1C69B68(v32);
                      if ( !*(_DWORD *)(v35 + 224) )
                        v32 = j_il2cpp_runtime_class_init_0(v35);
                      v36 = *(_QWORD *)(v33[7] + 16LL);
                      if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
                        v36 = sub_1C69B68(v32);
                      v37 = *(struct System_Int32_array ***)(v36 + 184);
                      v38 = *v37;
                      v23->fields.releasedClassIds = *v37;
                      sub_1C93A78(&v23->fields.releasedClassIds, v38);
                    }
LABEL_64:
                    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    v40 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
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
                        sub_1C93D34(this);
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
                                                                          (const MethodInfo_31B01E4 *)Method_System_Linq_Enumerable_Any_int___);
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
      sub_1C93D2C(this, obj);
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
    sub_1C93D2C(0, method);
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

  if ( (byte_4D2B370 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D2B370 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
  ObjectList = FollowerSelectItemListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_1C93D2C(ObjectList, v5);
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
             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0) )
    {
      v11 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      FollowerSelectItemListViewObject__Init_33221108((FollowerSelectItemListViewObject_o *)Item, 4, v11, 0.1, v12);
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
      (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
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

  if ( (byte_4D2B36E & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__);
    sub_1C93AD4(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D2B36E = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C93D2C(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C93D2C(v12, v13);
      FollowerSelectItemListViewObject__Init_33221108(
        (FollowerSelectItemListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewManager__RequestListObject_33219992(
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

  if ( (byte_4D2B36F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__);
    sub_1C93AD4(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D2B36F = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C93D2C(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C93D2C(v10, v11);
      FollowerSelectItemListViewObject__Init_33220496((FollowerSelectItemListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
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

  if ( (byte_4D2B368 & 1) == 0 )
  {
    sub_1C93AD4(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_6812/*"FollowerSelectClass"*/);
    sub_1C93AD4(&StringLiteral_6815/*"FollowerSelectOldClass"*/);
    byte_4D2B368 = 1;
  }
  sort = this->fields.sort;
  if ( !sort || (ListViewSort__Save(sort, 0), (v4 = this->fields.sort) == 0) )
    sub_1C93D2C(sort, method);
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
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6812/*"FollowerSelectClass"*/, v8->static_fields->followerClassId, 0);
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
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6815/*"FollowerSelectOldClass"*/, v11->static_fields->oldFollowerClassId, 0);
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
    sub_1C93D2C(0, method);
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

  if ( (byte_4D2B35C & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventFilterMaster___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2B35C = 1;
  }
  entity = 0;
  *(_WORD *)&this->fields.isBonusFilterEnable = 0;
  this->fields.isServantEquipBonusFilterEnable = 0;
  Instance = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)eventIds,
                                                         (const MethodInfo_31E8BD0 *)Method_System_Linq_Enumerable_ToList_int___);
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
        sub_1C93D34(Instance);
      v10 = eventIds->m_Items[v9];
      Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventFilterMaster___);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)EventFilterMaster__TryGetEntity_42713324(
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
                                                                 (const MethodInfo_385DE74 *)Method_System_Collections_Generic_List_int__Remove__);
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
    sub_1C93D2C(Instance, v6);
  }
LABEL_20:
  if ( !v8 )
    goto LABEL_22;
  v14 = System_Collections_Generic_List_int___ToArray(
          v8,
          (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.equipBonusFilterEventIds = v14;
  sub_1C93A78(&this->fields.equipBonusFilterEventIds, v14);
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

  if ( (byte_4D2B35E & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__getEntityList__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&StringLiteral_17804/*"buttontxt_formation_20"*/);
    byte_4D2B35E = 1;
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
  if ( CondType__IsQuestClear_41038904(ClassBoardReleaseQuestId, -1, 0, 0) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17804/*"buttontxt_formation_20"*/, 0);
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = &this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_34B444C *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v8,
      (const MethodInfo_34B3908 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *p_classBoardMaxDictionary = v8;
    sub_1C93A78(p_classBoardMaxDictionary, v8);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object
    || (Master_object = (System_Collections_ObjectModel_Collection_T__o *)Master_object[1].fields.items) == 0 )
  {
    sub_1C93D2C(Master_object, v10);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Master_object,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v11);
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
      v16 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v20 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v22 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v21 )
      sub_1C93D2C(v22, v23);
    if ( !v22 )
      sub_1C93D2C(0, v23);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                            (ClassBoardSquareMaster_o *)v22,
                            *(_DWORD *)(v21 + 16),
                            0);
    if ( OtherThanNoneEntity )
    {
      if ( !*p_classBoardMaxDictionary )
        sub_1C93D2C(OtherThanNoneEntity, v25);
      System_Collections_Generic_Dictionary_int__int___Add(
        *p_classBoardMaxDictionary,
        *(_DWORD *)(v21 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_34B42CC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
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
    v29 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
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

  if ( (byte_4D2B36C & 1) == 0 )
  {
    sub_1C93AD4(&ClassButtonControlComponent_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OfType_FollowerSelectItemListViewItem___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_FollowerSelectItemListViewItem___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C93AD4(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C93AD4(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C93AD4(&System_Func_FollowerSelectItemListViewItem__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem___ctor___79009648);
    sub_1C93AD4(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C93AD4(&Method_FollowerSelectItemListViewManager___c__DisplayClass84_0__SetClassId_b__0__);
    sub_1C93AD4(&FollowerSelectItemListViewManager___c__DisplayClass84_0_TypeInfo);
    byte_4D2B36C = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v5 = sub_1C93D20(FollowerSelectItemListViewManager___c__DisplayClass84_0_TypeInfo);
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
      v11 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ListViewItem__TypeInfo);
      System_Collections_Generic_List_object____ctor_59216528(
        v11,
        mixItemList,
        (const MethodInfo_3879290 *)Method_System_Collections_Generic_List_ListViewItem___ctor___79009648);
      this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v11;
      sub_1C93A78(&this->fields.itemList, v11);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( itemList )
      {
        System_Collections_Generic_List_object___AddRange(
          itemList,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.grandItemList,
          (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_ListViewItem__AddRange__);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v24,
            itemList,
            (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v25 = v24;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v25,
                    (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
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
            (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
        v15 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor_59216528(
          v15,
          recommendItemList,
          (const MethodInfo_3879290 *)Method_System_Collections_Generic_List_ListViewItem___ctor___79009648);
        this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v15;
        sub_1C93A78(&this->fields.itemList, v15);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v24,
            itemList,
            (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v25 = v24;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v25,
                    (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
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
        v18 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor_59216528(
          v18,
          originalItemList,
          (const MethodInfo_3879290 *)Method_System_Collections_Generic_List_ListViewItem___ctor___79009648);
        this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v18;
        p_itemList = &this->fields.itemList;
        sub_1C93A78(&this->fields.itemList, v18);
        if ( *(_DWORD *)(v5 + 16) )
        {
          v20 = this->fields.itemList;
          v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                       (System_Collections_IEnumerable_o *)this->fields.grandItemList,
                                                                       (const MethodInfo_31D3358 *)Method_System_Linq_Enumerable_OfType_FollowerSelectItemListViewItem___);
          v22 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_FollowerSelectItemListViewItem__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v22,
            (Il2CppObject *)v5,
            Method_FollowerSelectItemListViewManager___c__DisplayClass84_0__SetClassId_b__0__,
            0);
          itemList = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Where_object_(
                                                                    v21,
                                                                    (System_Func_TSource__bool__o *)v22,
                                                                    (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_FollowerSelectItemListViewItem___);
          if ( !v20 )
            goto LABEL_42;
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)v20,
            (System_Collections_Generic_IEnumerable_T__o *)itemList,
            (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_ListViewItem__AddRange__);
        }
        itemList = (System_Collections_Generic_List_object__o *)*p_itemList;
        if ( *p_itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v24,
            itemList,
            (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v25 = v24;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v25,
                    (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
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
    sub_1C93D2C(itemList, v7);
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

  if ( (byte_4D2B363 & 1) == 0 )
  {
    sub_1C93AD4(&ClassButtonControlComponent_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_11104/*"RECOMMEND_SERVANT_EMPTY"*/);
    sub_1C93AD4(&StringLiteral_11895/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4D2B363 = 1;
  }
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(classId, 0) )
    v5 = (System_String_o **)&StringLiteral_11104/*"RECOMMEND_SERVANT_EMPTY"*/;
  else
    v5 = (System_String_o **)&StringLiteral_11895/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  v6 = *v5;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get(v6, 0);
  if ( !emptyMessageLabel )
    sub_1C93D2C(v8, v9);
  UILabel__set_text(emptyMessageLabel, v8, 0);
}


void FollowerSelectItemListViewManager__SetFilterButtonImage(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *bonusFilterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4D2B379 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17647/*"btn_sefilter_2_on"*/);
    sub_1C93AD4(&StringLiteral_17646/*"btn_sefilter_2"*/);
    byte_4D2B379 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (bonusFilterSprite = this->fields.bonusFilterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !bonusFilterSprite) )
  {
    sub_1C93D2C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17646/*"btn_sefilter_2"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17647/*"btn_sefilter_2_on"*/;
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
  sub_1C93A78(&this->fields.callbackFunc, callback);
  FollowerSelectItemListViewManager__SetMode_33219240(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewManager__SetMode_33219240(
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

  if ( (byte_4D2B36D & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    sub_1C93AD4(&StringLiteral_11432/*"RequestInto"*/);
    byte_4D2B36D = 1;
  }
  if ( mode != 3 )
  {
    this->fields.initMode = mode;
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
    ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
    if ( mode == 1 )
    {
      v11 = &StringLiteral_11432/*"RequestInto"*/;
    }
    else
    {
      if ( mode != 4 )
      {
        if ( mode == 2 )
          FollowerSelectItemListViewManager__RequestListObject_33219992(this, 3, v10);
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
                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
          v17 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(v17, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0);
          if ( !Item )
            break;
          if ( v15 )
          {
            FollowerSelectItemListViewObject__Init_33220496((FollowerSelectItemListViewObject_o *)Item, 2, v17, v18);
          }
          else
          {
            FollowerSelectItemListViewObject__Init_33220496((FollowerSelectItemListViewObject_o *)Item, 0, v17, v18);
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
            sub_1C93A78(&ClippingObjectList[1], this);
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
            FollowerSelectItemListViewObject__Init_33217456(
              (FollowerSelectItemListViewObject_o *)ClippingObjectList,
              6,
              v21);
          }
          if ( ++v15 >= v14->fields._size )
            return;
        }
LABEL_31:
        sub_1C93D2C(ClippingObjectList, v6);
      }
      this->fields.callbackCount = 1;
      v11 = &StringLiteral_9998/*"OnMoveEnd"*/;
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
                                                                          (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
      if ( !ClippingObjectList )
        break;
      FollowerSelectItemListViewObject__Init_33217456((FollowerSelectItemListViewObject_o *)ClippingObjectList, 5, v9);
      if ( ++v8 >= v7->fields._size )
        return;
    }
    goto LABEL_31;
  }
}


void FollowerSelectItemListViewManager__SetMode_33219940(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C93A78(&this->fields.callbackFunc2, callback);
  FollowerSelectItemListViewManager__SetMode_33219240(this, mode, v6);
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

  if ( (byte_4D2B36A & 1) == 0 )
  {
    sub_1C93AD4(&FollowerSelectItemListViewObject_TypeInfo);
    byte_4D2B36A = 1;
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
    sub_1C93D2C(v7, obj);
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
  FollowerSelectItemListViewObject__Init_33217456(
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

  if ( (byte_4D2B37D & 1) == 0 )
  {
    sub_1C93AD4(&ClassButtonControlComponent_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_17654/*"btn_sort_up"*/);
    sub_1C93AD4(&StringLiteral_17756/*"btn_txt_up"*/);
    sub_1C93AD4(&StringLiteral_17707/*"btn_txt_new"*/);
    sub_1C93AD4(&StringLiteral_17697/*"btn_txt_down"*/);
    sub_1C93AD4(&StringLiteral_17714/*"btn_txt_old"*/);
    sub_1C93AD4(&StringLiteral_17651/*"btn_sort_down"*/);
    byte_4D2B37D = 1;
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
          v14 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_17714/*"btn_txt_old"*/ : &StringLiteral_17707/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
          v15 = this->fields.sort;
          if ( v15 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v16 = (System_String_o **)&StringLiteral_17651/*"btn_sort_down"*/;
              v17 = (System_String_o **)&StringLiteral_17654/*"btn_sort_up"*/;
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
          v18 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_17756/*"btn_txt_up"*/ : &StringLiteral_17697/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v18, 0);
          v15 = this->fields.sort;
          if ( v15 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v16 = (System_String_o **)&StringLiteral_17654/*"btn_sort_up"*/;
              v17 = (System_String_o **)&StringLiteral_17651/*"btn_sort_down"*/;
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_39:
    sub_1C93D2C(sort, v5);
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

  if ( (byte_4D2B380 & 1) == 0 )
  {
    sub_1C93AD4(&ClassButtonControlComponent_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C93AD4(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C93AD4(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D2B380 = 1;
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
  v8 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  Instance = (System_Collections_Generic_List_object__o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  klass_high = HIDWORD(Instance[2].klass);
  Instance = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_51;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    Instance,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v12 = 0;
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
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
            sub_1C93D2C(SvtId, v16);
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
                sub_1C93D2C(SvtId, v16);
              items = v8->fields._items;
              v19 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++v8->fields._version;
              if ( !items )
                sub_1C93D2C(SvtId, v16);
              size = v8->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  current,
                  *(const MethodInfo_387999C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
              }
              else
              {
                v21 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v21[4] = (Il2CppClass *)current;
                sub_1C93A78(v21 + 4, current);
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
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v8;
  sub_1C93A78(&this->fields.itemList, v8);
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
          sub_1C93D2C(Instance, v10);
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
  if ( (byte_4D2B381 & 1) == 0 )
  {
    sub_1C93AD4(&ClassButtonControlComponent_TypeInfo);
    sub_1C93AD4(&FollowerListRequest_TypeInfo);
    sub_1C93AD4(&FollowerRecommendSupportListRequest_TypeInfo);
    sub_1C93AD4(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1C93AD4(&long_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_25426/*"{0}"*/);
    this = (FollowerSelectItemListViewManager_o *)sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2B381 = 1;
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
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
              (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
    sub_1C93D2C(this, method);
  }
  this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshButtonObject;
  if ( !this )
    goto LABEL_59;
  v7 = UnityEngine_GameObject__GetComponent_object_(
         (UnityEngine_GameObject_o *)this,
         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
                                                        (System_String_o *)StringLiteral_25426/*"{0}"*/,
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

  if ( (byte_4D2B354 & 1) == 0 )
  {
    sub_1C93AD4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    byte_4D2B354 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1C940C8(v7);
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

  if ( (byte_4D2B356 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2B356 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1C940C8(v7);
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

  if ( (byte_4D2B35B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B35B = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C93D2C(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C93D2C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C93D2C(0, v10);
      Item = (ListViewItem_o *)FollowerSelectItemListViewObject__GetItem(
                                 (FollowerSelectItemListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C93D2C(0, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_44503492((ListViewManager_o *)this, Item, 0);
        if ( v14 )
        {
          if ( !v3 )
            sub_1C93D2C(v14, v15);
          items = v3->fields._items;
          v17 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C93D2C(v14, v15);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C93D2C(Item, v13);
        items = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C93D2C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v19 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v11;
        sub_1C93A78(v19 + 4, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4D2B35A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B35A = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C93D2C(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C93D2C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C93D2C(Component_object, Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C93D2C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C93A78(v14 + 4, v10);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4D2B355 & 1) == 0 )
  {
    sub_1C93AD4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    byte_4D2B355 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1C940C8(v7);
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

  if ( (byte_4D2B357 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2B357 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1C940C8(v7);
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
  sub_1C93A78(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC05B4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC0554;
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
  if ( (byte_4D2B38A & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&FollowerSelectItemListViewManager_ResultKind_TypeInfo);
    byte_4D2B38A = 1;
  }
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(FollowerSelectItemListViewManager_ResultKind_TypeInfo, &v15);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return sub_1C93A88(this, v11, callback, object);
}


void FollowerSelectItemListViewManager_CallbackFunc__EndInvoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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

  if ( (byte_4D2B38B & 1) == 0 )
  {
    sub_1C93AD4(&FollowerSelectItemListViewManager___c_TypeInfo);
    byte_4D2B38B = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(FollowerSelectItemListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FollowerSelectItemListViewManager___c_TypeInfo->static_fields->__9 = (struct FollowerSelectItemListViewManager___c_o *)v1;
  sub_1C93A78(FollowerSelectItemListViewManager___c_TypeInfo->static_fields, v1);
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

  if ( (byte_4D2B38C & 1) == 0 )
  {
    sub_1C93AD4(&ListViewSort_TypeInfo);
    sub_1C93AD4(&StringLiteral_6813/*"FollowerSelectEventQuest"*/);
    sub_1C93AD4(&StringLiteral_6814/*"FollowerSelectMainQuest"*/);
    byte_4D2B38C = 1;
  }
  if ( questType )
  {
    if ( questType != 1 )
    {
      v8 = sub_1C93AE8(&System_NotImplementedException_TypeInfo);
      v9 = (System_NotImplementedException_o *)sub_1C93D20(v8);
      System_NotImplementedException___ctor(v9, 0);
      v10 = sub_1C93AE8(&Method_FollowerSelectItemListViewManager___c___cctor_b__136_0__);
      sub_1C93BFC(v9, v10);
    }
    v4 = &StringLiteral_6813/*"FollowerSelectEventQuest"*/;
  }
  else
  {
    v4 = &StringLiteral_6814/*"FollowerSelectMainQuest"*/;
  }
  v5 = (System_String_o *)*v4;
  v6 = (ListViewSort_o *)sub_1C93D20(ListViewSort_TypeInfo);
  ListViewSort___ctor_44521036(v6, v5, 11, 0, 0);
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
    sub_1C93D2C(this, 0);
  return FollowerSelectItemListViewItem__get_GrandFollowerClassId(x, 0) == this->fields.followerClassId;
}