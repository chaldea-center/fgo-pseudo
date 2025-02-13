void __fastcall FollowerSelectItemListViewManager___cctor(const MethodInfo *method)
{
  FollowerSelectItemListViewManager___c_c *v1; // x0
  Il2CppObject *v2; // x19
  System_Func_T__TResult__o *v3; // x20
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4BD75F5 & 1) == 0 )
  {
    sub_1C21E38(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C21E38(&System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo);
    sub_1C21E38(&Method_FollowerSelectItemListViewManager___c___cctor_b__133_0__);
    sub_1C21E38(&FollowerSelectItemListViewManager___c_TypeInfo);
    byte_4BD75F5 = 1;
  }
  v1 = FollowerSelectItemListViewManager___c_TypeInfo;
  if ( !FollowerSelectItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager___c_TypeInfo);
    v1 = FollowerSelectItemListViewManager___c_TypeInfo;
  }
  v2 = (Il2CppObject *)v1->static_fields->__9;
  v3 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo);
  System_Func_Int32Enum__object____ctor(v3, v2, Method_FollowerSelectItemListViewManager___c___cctor_b__133_0__, 0LL);
  FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT = (struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)v3;
  sub_1C21DDC(FollowerSelectItemListViewManager_TypeInfo->static_fields, v3);
  static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->lastSelectedQuestId = -1LL;
  static_fields->REFRESH_DARK_COLOR = (struct UnityEngine_Color_o)xmmword_BFE5F0;
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

  if ( (byte_4BD75CA & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C21E38(&StringLiteral_17765/*"btn_bg_12"*/);
    sub_1C21E38(&StringLiteral_17826/*"btn_sefilter_2"*/);
    sub_1C21E38(&StringLiteral_17968/*"buttontxt_formation_19"*/);
    byte_4BD75CA = 1;
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
  AtlasManager__SetEventSprite(changeSkillButtonSprite, (System_String_o *)StringLiteral_17968/*"buttontxt_formation_19"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.bonusFilterSprite, (System_String_o *)StringLiteral_17826/*"btn_sefilter_2"*/, 0LL);
  changeSkillButton = (UnityEngine_Component_o *)this->fields.bonusFilterSprite;
  if ( !changeSkillButton
    || (changeSkillButton = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))changeSkillButton->klass[2]._1.typeMetadataHandle)(
                                                         changeSkillButton,
                                                         changeSkillButton->klass[2]._1.interopData),
        !sortKindButton)
    || (Component_object = UnityEngine_Component__GetComponent_object_(
                             sortKindButton,
                             (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        changeSkillButton = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(
                                                         (UISprite_o *)Component_object,
                                                         (System_String_o *)StringLiteral_17765/*"btn_bg_12"*/,
                                                         0LL),
        !Component_object) )
  {
LABEL_11:
    sub_1C22094(changeSkillButton, method);
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
    sub_1C22094(classButtonControl, *(_QWORD *)&classPos);
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

  if ( (byte_4BD75E7 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD75E7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v6);
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
  System_Collections_Generic_List_object__o *v9; // x21
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_Generic_List_object__o *v11; // x21
  __int64 ReturnTypeByQuestId; // x0
  __int64 v13; // x1
  FollowerSelectItemListViewManager_c *v14; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct ListViewSort_o *v16; // x0
  struct ListViewSort_o **p_sort; // x24
  const MethodInfo *v18; // x4
  int32_t InitialDisplayClass; // w21
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
  System_Int32_array *OngoingQuestTargetEventIds; // x25
  EventUpValSetupInfo_o *v22; // x21
  __int64 v23; // x8
  __int64 v24; // x21
  unsigned __int64 v25; // x20
  int32_t v26; // w0
  ClassButtonControlComponent_o *classButtonControl; // x21
  ClassButtonControlComponent_CallbackFunc_o *v28; // x24
  ClassButtonControlComponent_o *v29; // x21
  const MethodInfo *v30; // x2
  QuestPhaseEntity_o *v31; // x21
  long double v32; // q0
  __int64 v33; // x8
  __int64 v34; // x0
  Il2CppObject *MasterData_object; // x23
  FollowerInfo_array *QuestFollowerList; // x24
  int v37; // w20
  int32_t v38; // w28
  QuestRestrictionInfo_o *v39; // x21
  bool IsMyServantOrNpcRestriction_41736952; // w29
  BalanceConfig_c *v41; // x0
  int32_t ClassBoardReleaseQuestId; // w21
  bool IsQuestClear_38834244; // w21
  int max_length; // w8
  QuestRestrictionInfo_o *v45; // x20
  int v46; // w22
  FollowerInfo_o *v47; // x26
  ServantLeaderInfo_o *ServantLeaderInfo; // x25
  int32_t v49; // w0
  System_Int32_array *v50; // x21
  int32_t Rarity; // w0
  DataMasterBase_TMaster__TEntity__PKType__o *v52; // x20
  bool IsRecommendedFollower; // w23
  System_Collections_Generic_List_object__o *v54; // x29
  char v55; // w20
  Il2CppObject *v56; // x0
  __int64 v57; // x25
  __int64 v58; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v59; // x21
  int32_t ClassBoardBaseId; // w28
  Il2CppObject *v61; // x21
  ClassBoardInfo_o *v62; // x25
  Il2CppObject *v63; // x21
  __int64 v64; // x0
  System_Int32_array *OpenClassIdArrayFromBaseId; // x0
  struct System_Object_array *items; // x8
  _QWORD *v67; // x9
  __int64 size; // x10
  Il2CppClass **v69; // x0
  System_Object_array *v70; // x0
  FollowerSelectItemListViewManager_c *v71; // x0
  bool v72; // w19
  _BOOL4 v73; // w8
  _BOOL4 v74; // w9
  int32_t followerClassId; // w21
  EventUpValSetupInfo_o *v76; // x23
  struct System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x20
  bool isServantEquipBonusFilterEnable; // w27
  bool v79; // w28
  bool isBonusFilterEnable; // w29
  FollowerSelectItemListViewItem_o *v81; // x25
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
  QuestPhaseEntity_o *v94; // x19
  int v95; // w20
  bool v96; // w8
  QuestRestrictionInfo_o *v97; // x19
  Il2CppClass *klass; // x20
  int namespaze; // w8
  unsigned int v100; // w24
  void **v101; // x8
  Il2CppObject *v102; // x0
  Il2CppObject *v103; // x21
  __int64 v104; // x28
  BalanceConfig_c *v105; // x0
  struct BalanceConfig_StaticFields *v106; // x9
  int32_t FixEventSupportDeckNum; // w21
  int32_t FixMainSupportDeckNum; // w25
  int32_t deckPriority; // w25
  unsigned __int64 v110; // x22
  System_Collections_Generic_Dictionary_int__int__o *v111; // x21
  int32_t v112; // w23
  bool v113; // w28
  bool v114; // w29
  FollowerSelectItemListViewItem_o *v115; // x26
  __int64 v116; // x8
  _QWORD *v117; // x9
  __int64 v118; // x10
  __int64 v119; // x8
  struct BalanceConfig_StaticFields *v120; // x8
  int32_t v121; // w21
  int32_t v122; // w26
  int32_t v123; // w26
  unsigned __int64 v124; // x23
  int32_t v125; // w19
  int32_t v126; // w22
  bool v127; // w24
  bool v128; // w25
  int32_t v129; // w20
  bool v130; // w28
  int v131; // w29
  FollowerSelectItemListViewItem_o *v132; // x21
  __int64 v133; // x8
  _QWORD *v134; // x9
  __int64 v135; // x10
  __int64 v136; // x8
  Il2CppClass *v137; // x26
  unsigned __int64 namespaze_low; // x8
  unsigned __int64 v139; // x29
  __int64 v140; // x9
  __int64 v141; // x9
  void **v142; // x8
  FollowerInfo_o *v143; // x8
  Il2CppObject *v144; // x0
  __int64 v145; // x19
  BalanceConfig_c *v146; // x0
  struct BalanceConfig_StaticFields *v147; // x9
  int32_t v148; // w21
  int32_t v149; // w24
  int32_t v150; // w24
  unsigned __int64 v151; // x20
  System_Collections_Generic_Dictionary_int__int__o *v152; // x23
  int32_t v153; // w28
  bool v154; // w22
  bool v155; // w25
  bool v156; // w19
  FollowerSelectItemListViewItem_o *v157; // x21
  __int64 v158; // x8
  _QWORD *v159; // x9
  __int64 v160; // x10
  __int64 v161; // x8
  struct BalanceConfig_StaticFields *v162; // x8
  int32_t v163; // w21
  int32_t v164; // w24
  int32_t v165; // w24
  unsigned __int64 v166; // x20
  int32_t v167; // w21
  _BOOL4 v168; // w10
  _BOOL4 v169; // w11
  FollowerInfo_o *v170; // x22
  _BOOL4 v171; // w9
  EventUpValSetupInfo_o *v172; // x19
  int32_t v173; // w27
  bool v174; // w26
  System_Collections_Generic_Dictionary_int__int__o *v175; // x29
  int v176; // w23
  bool v177; // w25
  bool v178; // w28
  FollowerSelectItemListViewItem_o *v179; // x0
  int32_t v180; // w1
  Il2CppObject *v181; // x21
  __int64 v182; // x8
  _QWORD *v183; // x9
  __int64 v184; // x10
  __int64 v185; // x8
  Il2CppClass *v186; // x20
  unsigned __int64 v187; // x8
  unsigned __int64 v188; // x23
  Il2CppType *p_byval_arg; // x28
  __int64 v190; // x9
  __int64 v191; // x9
  __int64 v192; // x26
  __int64 v193; // x8
  __int64 v194; // x8
  __int64 v195; // x8
  __int64 v196; // x21
  __int64 v197; // x27
  int32_t v198; // w22
  FollowerInfo_o *v199; // x26
  bool v200; // w19
  bool v201; // w25
  EventUpValSetupInfo_o *v202; // x29
  System_Collections_Generic_Dictionary_int__int__o *v203; // x24
  FollowerSelectItemListViewItem_o *v204; // x21
  __int64 v205; // x8
  _QWORD *v206; // x9
  __int64 v207; // x10
  __int64 v208; // x8
  const MethodInfo *v209; // x2
  FollowerSelectItemListViewManager_c *v210; // x0
  const MethodInfo *v211; // x2
  const MethodInfo *v212; // x1
  struct UIScrollView_o *scrollView; // x8
  __int64 v214; // x0
  bool isServantBonusFilterEnable; // [xsp+8h] [xbp-1B8h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+20h] [xbp-1A0h]
  int32_t supportDeckId; // [xsp+38h] [xbp-188h]
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary; // [xsp+48h] [xbp-178h]
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionarya; // [xsp+48h] [xbp-178h]
  UserFollowMaster_o *v220; // [xsp+78h] [xbp-148h]
  struct System_Collections_Generic_List_ListViewItem__o **p_recommendItemList; // [xsp+80h] [xbp-140h]
  unsigned int v222; // [xsp+8Ch] [xbp-134h]
  __int64 v225; // [xsp+98h] [xbp-128h]
  bool HasFlag_40740584; // [xsp+98h] [xbp-128h]
  __int64 v227; // [xsp+A0h] [xbp-120h]
  int v228; // [xsp+A0h] [xbp-120h]
  struct System_Collections_Generic_List_ListViewItem__o **p_originalItemList; // [xsp+A8h] [xbp-118h]
  ClassBoardClassMaster_o *Master_object; // [xsp+B0h] [xbp-110h]
  bool v231; // [xsp+B0h] [xbp-110h]
  ClassBoardClassMaster_o *v232; // [xsp+B0h] [xbp-110h]
  EventUpValSetupInfo_o *v233; // [xsp+B8h] [xbp-108h]
  Il2CppClass *v234; // [xsp+B8h] [xbp-108h]
  EventUpValSetupInfo_o *v235; // [xsp+B8h] [xbp-108h]
  bool v236; // [xsp+C0h] [xbp-100h]
  unsigned int v237; // [xsp+C0h] [xbp-100h]
  Il2CppClass *v238; // [xsp+C0h] [xbp-100h]
  int32_t v239; // [xsp+C8h] [xbp-F8h]
  EventUpValSetupInfo_o *v240; // [xsp+C8h] [xbp-F8h]
  EventUpValSetupInfo_o *v241; // [xsp+C8h] [xbp-F8h]
  EventUpValSetupInfo_o *v242; // [xsp+C8h] [xbp-F8h]
  bool isReleasedClassBoard; // [xsp+D0h] [xbp-F0h]
  FollowerInfo_o *v244; // [xsp+D0h] [xbp-F0h]
  FollowerInfo_o *v245; // [xsp+D0h] [xbp-F0h]
  QuestPhaseEntity_o *v246; // [xsp+D8h] [xbp-E8h]
  QuestPhaseEntity_o *v247; // [xsp+D8h] [xbp-E8h]
  QuestPhaseEntity_o *v248; // [xsp+D8h] [xbp-E8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v249; // [xsp+E0h] [xbp-E0h]
  FollowerInfo_o **v250; // [xsp+E0h] [xbp-E0h]
  FollowerInfo_o **v251; // [xsp+E0h] [xbp-E0h]
  _BOOL4 followerInfo; // [xsp+E8h] [xbp-D8h]
  FollowerInfo_o *followerInfoc; // [xsp+E8h] [xbp-D8h]
  int32_t followerInfoa; // [xsp+E8h] [xbp-D8h]
  FollowerInfo_o *followerInfob; // [xsp+E8h] [xbp-D8h]
  struct System_Collections_Generic_List_ListViewItem__o **p_mixItemList; // [xsp+F0h] [xbp-D0h]
  UserFollowMaster_o *v257; // [xsp+F0h] [xbp-D0h]
  bool IsNoneSupportFriendPoint; // [xsp+104h] [xbp-BCh]
  int32_t index; // [xsp+118h] [xbp-A8h]
  int32_t indexc; // [xsp+118h] [xbp-A8h]
  FollowerInfo_o *indexd; // [xsp+118h] [xbp-A8h]
  int32_t indexe; // [xsp+118h] [xbp-A8h]
  int32_t indexa; // [xsp+118h] [xbp-A8h]
  bool indexb; // [xsp+118h] [xbp-A8h]
  FollowerSelectItemListViewManager_o *v269; // [xsp+120h] [xbp-A0h]
  Il2CppObject *v270; // [xsp+128h] [xbp-98h] BYREF
  Il2CppObject *v271; // [xsp+130h] [xbp-90h] BYREF
  Il2CppObject *v272; // [xsp+138h] [xbp-88h] BYREF
  UserClassBoardSquareEntity_o *v273; // [xsp+140h] [xbp-80h] BYREF
  bool isWhole; // [xsp+14Ch] [xbp-74h] BYREF
  Il2CppObject *v275; // [xsp+150h] [xbp-70h] BYREF
  NpcFollowerEntity_o *entity; // [xsp+158h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v277; // 0:x0.16

  if ( (byte_4BD75CC & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&ClassBoardInfo_TypeInfo);
    sub_1C21E38(&ClassButtonControlComponent_TypeInfo);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserFollowerMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    sub_1C21E38(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__);
    sub_1C21E38(&Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&EventUpValSetupInfo_TypeInfo);
    sub_1C21E38(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C21E38(&Method_FollowerSelectItemListViewManager_OnChangeClass__);
    sub_1C21E38(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_ClassBoardInfo__TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&ServantLeaderInfo___TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&StringLiteral_3358/*"BonusFilterEventId"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD75CC = 1;
  }
  v275 = 0LL;
  entity = 0LL;
  isWhole = 0;
  v272 = 0LL;
  v273 = 0LL;
  v270 = 0LL;
  v271 = 0LL;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C21DDC(&this->fields.questRestrictionInfo, questRestrictionInfo);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.mixItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v9;
  p_mixItemList = &this->fields.mixItemList;
  sub_1C21DDC(&this->fields.mixItemList, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.originalItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v10;
  p_originalItemList = &this->fields.originalItemList;
  sub_1C21DDC(&this->fields.originalItemList, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.recommendItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v11;
  p_recommendItemList = &this->fields.recommendItemList;
  sub_1C21DDC(&this->fields.recommendItemList, v11);
  ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0LL);
  v14 = FollowerSelectItemListViewManager_TypeInfo;
  v222 = ReturnTypeByQuestId;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v14 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v14->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT )
    goto LABEL_336;
  v16 = (struct ListViewSort_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))LIST_VIEW_SORT->fields.m_target)(
                                   LIST_VIEW_SORT->fields.original_method_info,
                                   v222,
                                   *(_QWORD *)&LIST_VIEW_SORT->fields.extra_arg);
  this->fields.sort = v16;
  p_sort = &this->fields.sort;
  ReturnTypeByQuestId = sub_1C21DDC(&this->fields.sort, v16);
  if ( !this->fields.sort )
    goto LABEL_336;
  InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                          this,
                          questId,
                          questPhase,
                          this->fields.sort->fields.isRequestLoad,
                          v18);
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
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_336;
  OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                 (EventQuestMaster_o *)ReturnTypeByQuestId,
                                 questId,
                                 questPhase,
                                 0LL,
                                 0LL);
  v22 = (EventUpValSetupInfo_o *)sub_1C22084(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_40169720(v22, OngoingQuestTargetEventIds, 0, questId, questPhase, 0LL);
  this->fields.setupInfo = v22;
  ReturnTypeByQuestId = sub_1C21DDC(&this->fields.setupInfo, v22);
  if ( !OngoingQuestTargetEventIds )
    goto LABEL_336;
  if ( *(_QWORD *)&OngoingQuestTargetEventIds->max_length )
  {
    ReturnTypeByQuestId = (__int64)UnityEngine_PlayerPrefs__GetString_70827888(
                                     (System_String_o *)StringLiteral_3358/*"BonusFilterEventId"*/,
                                     0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_336;
    if ( *(int *)(ReturnTypeByQuestId + 16) < 1 )
      goto LABEL_24;
    ReturnTypeByQuestId = (__int64)System_String__Split((System_String_o *)ReturnTypeByQuestId, 0x2Cu, 0, 0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_336;
    v23 = *(_QWORD *)(ReturnTypeByQuestId + 24);
    v24 = ReturnTypeByQuestId;
    if ( (int)v23 < 1 )
    {
LABEL_24:
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_336;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 18, 0, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_336;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 19, 0, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_336;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 20, 0, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_336;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 40, 1, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_336;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 41, 1, 0LL);
    }
    else
    {
      v25 = 0LL;
      while ( 1 )
      {
        if ( v25 >= (unsigned int)v23 )
          goto LABEL_337;
        v26 = System_Int32__Parse(*(System_String_o **)(v24 + 32 + 8 * v25), 0LL);
        ReturnTypeByQuestId = System_Linq_Enumerable__Contains_int_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)OngoingQuestTargetEventIds,
                                v26,
                                (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (ReturnTypeByQuestId & 1) != 0 )
          break;
        LODWORD(v23) = *(_DWORD *)(v24 + 24);
        if ( (__int64)++v25 >= (int)v23 )
          goto LABEL_24;
      }
    }
  }
  ReturnTypeByQuestId = (__int64)*p_sort;
  if ( !*p_sort )
    goto LABEL_336;
  ListViewSort__Load((ListViewSort_o *)ReturnTypeByQuestId, 0LL);
  classButtonControl = this->fields.classButtonControl;
  v28 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C22084(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_336;
  ClassButtonControlComponent__init(classButtonControl, v28, questId, questPhase, 0, 0LL);
  this->fields.isInput = 0;
  ReturnTypeByQuestId = (__int64)FollowerSelectItemListViewManager_TypeInfo;
  v29 = this->fields.classButtonControl;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  if ( !v29 )
    goto LABEL_336;
  ClassButtonControlComponent__setCursor(
    v29,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, OngoingQuestTargetEventIds, v30);
  ReturnTypeByQuestId = (__int64)this->fields.bonusFilterKindButton;
  if ( !ReturnTypeByQuestId )
    goto LABEL_336;
  ReturnTypeByQuestId = (__int64)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)ReturnTypeByQuestId,
                                   0LL);
  if ( !ReturnTypeByQuestId )
    goto LABEL_336;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)ReturnTypeByQuestId,
    this->fields.isBonusFilterEnable,
    0LL);
  if ( this->fields.isBonusFilterEnable )
  {
    ReturnTypeByQuestId = (__int64)this->fields.bonusFilterKindLabel;
    if ( !ReturnTypeByQuestId )
      goto LABEL_336;
    UILabel__set_text((UILabel_o *)ReturnTypeByQuestId, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  this->fields.isRefreshBtnHide = 0;
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId
    || (ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0 )
  {
LABEL_336:
    sub_1C22094(ReturnTypeByQuestId, v13);
  }
  v31 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)ReturnTypeByQuestId, questId, questPhase, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v31 )
    goto LABEL_331;
  IsNoneSupportFriendPoint = QuestPhaseEntity__IsNoneSupportFriendPoint(v31, 0LL);
  v33 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
    v33 = sub_1C73D14(v32);
  v34 = *(_QWORD *)(*(_QWORD *)(v33 + 192) + 16LL);
  if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
    v34 = sub_1C73D14(v32);
  ReturnTypeByQuestId = **(_QWORD **)(v34 + 184);
  if ( !ReturnTypeByQuestId )
    goto LABEL_336;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ReturnTypeByQuestId,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_336;
  v246 = v31;
  ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_336;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)ReturnTypeByQuestId,
                        questId,
                        questPhase,
                        0LL);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_336;
  v37 = *(_DWORD *)(ReturnTypeByQuestId + 48);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_336;
  v38 = *(_DWORD *)(ReturnTypeByQuestId + 52);
  if ( v37 < 1 )
  {
    v39 = questRestrictionInfo;
    IsMyServantOrNpcRestriction_41736952 = 0;
  }
  else
  {
    v39 = questRestrictionInfo;
    if ( !questRestrictionInfo )
    {
      IsMyServantOrNpcRestriction_41736952 = 0;
      followerInfo = 0;
      goto LABEL_60;
    }
    IsMyServantOrNpcRestriction_41736952 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41736952(
                                             questRestrictionInfo,
                                             v38,
                                             0LL);
  }
  followerInfo = 0;
  if ( v39 && v37 <= 0 )
    followerInfo = QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL);
LABEL_60:
  v41 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v41 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v41->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_38834244 = CondType__IsQuestClear_38834244(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v249 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
  if ( !QuestFollowerList )
    goto LABEL_336;
  max_length = QuestFollowerList->max_length;
  v45 = questRestrictionInfo;
  v269 = this;
  if ( max_length >= 1 )
  {
    v46 = 0;
    index = 0;
    isReleasedClassBoard = IsQuestClear_38834244;
    v233 = (EventUpValSetupInfo_o *)MasterData_object;
    v239 = v38;
    v236 = IsMyServantOrNpcRestriction_41736952;
    do
    {
      if ( v46 >= (unsigned int)max_length )
        goto LABEL_337;
      if ( !v45 )
        goto LABEL_336;
      v47 = QuestFollowerList->m_Items[v46];
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v45->fields.questId, 0LL);
      if ( !v47 )
        goto LABEL_336;
      ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v47, 0, ReturnTypeByQuestId, 0LL);
      v49 = FollowerInfo__GetReturnTypeByQuestId(v45->fields.questId, 0LL);
      ReturnTypeByQuestId = (__int64)FollowerInfo__GetNpcServantIndividualityFull(v47, 0, v49, 0LL);
      if ( !ServantLeaderInfo )
        goto LABEL_336;
      v50 = (System_Int32_array *)ReturnTypeByQuestId;
      Rarity = ServantLeaderInfo__getRarity(ServantLeaderInfo, 0LL);
      ReturnTypeByQuestId = QuestRestrictionInfo__IsRestriction_41718544(
                              v45,
                              &isWhole,
                              v50,
                              Rarity,
                              ServantLeaderInfo->fields.lv,
                              v38,
                              3,
                              0LL);
      if ( (ReturnTypeByQuestId & 1) != 0 )
        goto LABEL_135;
      if ( IsMyServantOrNpcRestriction_41736952 )
      {
        ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality_41739952(v45, v50, v38, 0LL);
        if ( (ReturnTypeByQuestId & 1) != 0 )
          goto LABEL_135;
      }
      if ( v47->fields.isFixedNpc || followerInfo && v47->fields.isMySvtOrNpc )
        goto LABEL_135;
      if ( !MasterData_object )
        goto LABEL_336;
      if ( NpcFollowerMaster__TryGetEntity(
             (NpcFollowerMaster_o *)MasterData_object,
             &entity,
             v47->fields.userId,
             questId,
             questPhase,
             0LL) )
      {
        ReturnTypeByQuestId = (__int64)entity;
        v52 = v249;
        if ( !entity )
          goto LABEL_336;
        IsRecommendedFollower = NpcFollowerEntity__IsRecommendedFollower(entity, 0LL);
      }
      else
      {
        v52 = v249;
        IsRecommendedFollower = 0;
      }
      v54 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ClassBoardInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v54,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
      if ( !v52 )
        goto LABEL_336;
      ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetEntity(
                              v52,
                              &v275,
                              v47->fields.npcFollowerSvtId,
                              (const MethodInfo_325E370 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
      if ( (ReturnTypeByQuestId & 1) != 0 )
      {
        if ( !v275 )
          goto LABEL_336;
        ReturnTypeByQuestId = NpcServantFollowerEntity__IsNotClassBoard((int32_t)v275[7].monitor, 0LL);
        if ( (ReturnTypeByQuestId & 1) != 0
          || (ReturnTypeByQuestId = QuestPhaseEntity__IsNotClassBoard(v246, 0LL), (ReturnTypeByQuestId & 1) != 0) )
        {
          v55 = 1;
          goto LABEL_113;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
        v56 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
        v58 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        v57 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
        v59 = (DataMasterBase_TMaster__TEntity__PKType__o *)v56;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v277.fields.currentCryptoKey = v58;
        *(_QWORD *)&v277.fields.fakeValue = v57;
        ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v277, 0LL);
        if ( !v59 )
          goto LABEL_336;
        ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         v59,
                                         ReturnTypeByQuestId,
                                         (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !ReturnTypeByQuestId || !Master_object )
          goto LABEL_336;
        ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(
                             Master_object,
                             *(_DWORD *)(ReturnTypeByQuestId + 80),
                             0LL);
        v61 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4BD6FF5 )
        {
          sub_1C21E38(&NetworkManager_TypeInfo);
          byte_4BD6FF5 = 1;
        }
        ReturnTypeByQuestId = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          ReturnTypeByQuestId = (__int64)NetworkManager_TypeInfo;
        }
        if ( !v61 )
          goto LABEL_336;
        ReturnTypeByQuestId = UserClassBoardSquareMaster__TryGetEntity(
                                (UserClassBoardSquareMaster_o *)v61,
                                &v273,
                                *(_QWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 64LL),
                                ClassBoardBaseId,
                                0LL);
        if ( (ReturnTypeByQuestId & 1) != 0 )
        {
          v62 = (ClassBoardInfo_o *)sub_1C22084(ClassBoardInfo_TypeInfo);
          ClassBoardInfo___ctor(v62, 0LL);
          if ( !v62 )
            goto LABEL_336;
          v62->fields.classBoardBaseId = ClassBoardBaseId;
          if ( !v273 )
            goto LABEL_336;
          ReturnTypeByQuestId = (__int64)v273->fields.classBoardSquareIds;
          if ( !ReturnTypeByQuestId )
            goto LABEL_336;
          v63 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
          v62->fields.squareIds = (struct System_Int32_array *)sub_1C21F74(v63, int___TypeInfo);
          v64 = sub_1C21F74(v63, int___TypeInfo);
          sub_1C21DDC(&v62->fields.squareIds, v64);
          OpenClassIdArrayFromBaseId = ClassBoardClassMaster__GetOpenClassIdArrayFromBaseId(
                                         Master_object,
                                         ClassBoardBaseId,
                                         0LL);
          v62->fields.releasedClassIds = OpenClassIdArrayFromBaseId;
          ReturnTypeByQuestId = sub_1C21DDC(&v62->fields.releasedClassIds, OpenClassIdArrayFromBaseId);
          if ( !v54 )
            goto LABEL_336;
          items = v54->fields._items;
          v67 = Method_System_Collections_Generic_List_ClassBoardInfo__Add__;
          ++v54->fields._version;
          if ( !items )
            goto LABEL_336;
          size = v54->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v54,
              (Il2CppObject *)v62,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
          }
          else
          {
            v69 = &items->obj.klass + size;
            v54->fields._size = size + 1;
            v69[4] = (Il2CppClass *)v62;
            sub_1C21DDC(v69 + 4, v62);
          }
          v55 = 0;
          goto LABEL_114;
        }
      }
      v55 = 0;
LABEL_113:
      if ( !v54 )
        goto LABEL_336;
LABEL_114:
      v70 = System_Collections_Generic_List_object___ToArray(
              v54,
              (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
      v47->fields.userClassBoardInfo = (struct ClassBoardInfo_array *)v70;
      sub_1C21DDC(&v47->fields.userClassBoardInfo, v70);
      v71 = FollowerSelectItemListViewManager_TypeInfo;
      v72 = IsRecommendedFollower;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v71 = FollowerSelectItemListViewManager_TypeInfo;
      }
      v73 = this->fields.isBonusFilterEnable;
      v74 = this->fields.isServantBonusFilterEnable;
      followerClassId = v71->static_fields->followerClassId;
      v76 = this->fields.setupInfo;
      if ( (v55 & 1) != 0 )
        classBoardMaxDictionary = 0LL;
      else
        classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
      isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
      v79 = v74;
      isBonusFilterEnable = v73;
      classBoardMaxNumDictionary = classBoardMaxDictionary;
      v45 = questRestrictionInfo;
      v81 = (FollowerSelectItemListViewItem_o *)sub_1C22084(FollowerSelectItemListViewItem_TypeInfo);
      FollowerSelectItemListViewItem___ctor(
        v81,
        index,
        0,
        v47,
        followerClassId,
        friendPointUpVal,
        friendPointUpMaxVal,
        friendPointCampaignEntityList,
        isBonusFilterEnable,
        v79,
        isServantEquipBonusFilterEnable,
        v72,
        v76,
        questRestrictionInfo,
        0,
        0,
        0,
        classBoardMaxNumDictionary,
        isReleasedClassBoard,
        0,
        IsNoneSupportFriendPoint,
        0LL);
      ReturnTypeByQuestId = (__int64)*p_mixItemList;
      if ( !*p_mixItemList )
        goto LABEL_336;
      v82 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      v38 = v239;
      IsMyServantOrNpcRestriction_41736952 = v236;
      v83 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v82 )
        goto LABEL_336;
      v84 = *(int *)(ReturnTypeByQuestId + 24);
      this = v269;
      MasterData_object = (Il2CppObject *)v233;
      if ( (unsigned int)v84 >= *(_DWORD *)(v82 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v81,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
      }
      else
      {
        v85 = v82 + 8 * v84;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v84 + 1;
        *(_QWORD *)(v85 + 32) = v81;
        sub_1C21DDC(v85 + 32, v81);
      }
      ReturnTypeByQuestId = (__int64)*p_originalItemList;
      if ( !*p_originalItemList )
        goto LABEL_336;
      v86 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      v87 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v86 )
        goto LABEL_336;
      v88 = *(int *)(ReturnTypeByQuestId + 24);
      if ( (unsigned int)v88 >= *(_DWORD *)(v86 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v81,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
      }
      else
      {
        v89 = v86 + 8 * v88;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v88 + 1;
        *(_QWORD *)(v89 + 32) = v81;
        sub_1C21DDC(v89 + 32, v81);
      }
      ReturnTypeByQuestId = (__int64)*p_recommendItemList;
      if ( !*p_recommendItemList )
        goto LABEL_336;
      v90 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      v91 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v90 )
        goto LABEL_336;
      v92 = *(int *)(ReturnTypeByQuestId + 24);
      if ( (unsigned int)v92 >= *(_DWORD *)(v90 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v81,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
      }
      else
      {
        v93 = v90 + 8 * v92;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v92 + 1;
        *(_QWORD *)(v93 + 32) = v81;
        ReturnTypeByQuestId = sub_1C21DDC(v93 + 32, v81);
      }
      ++index;
LABEL_135:
      max_length = QuestFollowerList->max_length;
      ++v46;
    }
    while ( v46 < max_length );
  }
  if ( v45 )
  {
    v94 = v246;
    if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction(v45, 0LL) )
    {
      ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_336;
      v95 = *(_DWORD *)(ReturnTypeByQuestId + 48);
      ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_336;
      if ( v95 >= 1 )
      {
        v96 = !QuestRestrictionInfo__IsSelectableNormalSupport(
                 questRestrictionInfo,
                 *(_DWORD *)(ReturnTypeByQuestId + 52),
                 0LL);
        goto LABEL_147;
      }
    }
  }
  else
  {
    v94 = v246;
  }
  v96 = 0;
LABEL_147:
  this->fields.isRefreshBtnHide = v96;
  if ( !v96 && !v94->fields.isNpcOnly )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_336;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v272,
                            (const MethodInfo_325E450 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    v97 = questRestrictionInfo;
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v272 )
        goto LABEL_336;
      klass = v272[1].klass;
      if ( klass )
      {
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
        {
          v100 = 0;
          v234 = v272[1].klass;
          do
          {
            if ( v100 >= namespaze )
              goto LABEL_337;
            v101 = &klass->_1.image + (int)v100;
            ReturnTypeByQuestId = (__int64)v101[4];
            v250 = (FollowerInfo_o **)(v101 + 4);
            if ( !ReturnTypeByQuestId )
              goto LABEL_336;
            FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0LL);
            if ( v100 >= LODWORD(klass->_1.namespaze) )
              goto LABEL_337;
            if ( !*v250 )
              goto LABEL_336;
            ReturnTypeByQuestId = (__int64)(*v250)->fields.mainSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_336;
            v227 = *(_QWORD *)(ReturnTypeByQuestId + 24);
            v102 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
            if ( v102 )
            {
              v103 = v102;
              v104 = sub_1C21F74(v102, int___TypeInfo);
              if ( !v104 )
              {
                sub_1C22354(v103);
LABEL_338:
                sub_1C22354(v103);
LABEL_339:
                v214 = sub_1C220B8();
                sub_1C21F60(v214, 0LL);
              }
            }
            else
            {
              v104 = 0LL;
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
            ReturnTypeByQuestId = System_Math__Max_63934620(FixMainSupportDeckNum, FixEventSupportDeckNum, 0LL);
            v247 = (QuestPhaseEntity_o *)v104;
            if ( (int)v227 >= 1 )
            {
              deckPriority = ReturnTypeByQuestId;
              v110 = 0LL;
              v225 = v104 + 32;
              do
              {
                if ( !*p_originalItemList )
                  goto LABEL_336;
                if ( v100 >= LODWORD(klass->_1.namespaze) )
                  goto LABEL_337;
                if ( !v104 )
                  goto LABEL_336;
                if ( v110 >= *(unsigned int *)(v104 + 24) )
                  goto LABEL_337;
                indexc = (*p_originalItemList)->fields._size;
                v240 = this->fields.setupInfo;
                v111 = this->fields.classBoardMaxDictionary;
                v112 = *(_DWORD *)(v225 + 4 * v110);
                followerInfoc = *v250;
                v113 = this->fields.isServantEquipBonusFilterEnable;
                v114 = this->fields.isServantBonusFilterEnable;
                v231 = this->fields.isBonusFilterEnable;
                v115 = (FollowerSelectItemListViewItem_o *)sub_1C22084(FollowerSelectItemListViewItem_TypeInfo);
                FollowerSelectItemListViewItem___ctor(
                  v115,
                  indexc,
                  0,
                  followerInfoc,
                  0,
                  friendPointUpVal,
                  friendPointUpMaxVal,
                  friendPointCampaignEntityList,
                  v231,
                  v114,
                  v113,
                  0,
                  v240,
                  v97,
                  1,
                  v112,
                  deckPriority,
                  v111,
                  1,
                  0,
                  IsNoneSupportFriendPoint,
                  0LL);
                ReturnTypeByQuestId = (__int64)this->fields.originalItemList;
                if ( !ReturnTypeByQuestId )
                  goto LABEL_336;
                v116 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v117 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v116 )
                  goto LABEL_336;
                v118 = *(int *)(ReturnTypeByQuestId + 24);
                v104 = (__int64)v247;
                if ( (unsigned int)v118 >= *(_DWORD *)(v116 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    (Il2CppObject *)v115,
                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
                }
                else
                {
                  v119 = v116 + 8 * v118;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v118 + 1;
                  *(_QWORD *)(v119 + 32) = v115;
                  ReturnTypeByQuestId = sub_1C21DDC(v119 + 32, v115);
                }
                ++v110;
                --deckPriority;
              }
              while ( (unsigned int)v227 != v110 );
            }
            followerInfoa = 0;
            v241 = (EventUpValSetupInfo_o *)(v104 + 32);
            v237 = v100;
            while ( 1 )
            {
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              }
              v120 = *(struct BalanceConfig_StaticFields **)(ReturnTypeByQuestId + 184);
              if ( followerInfoa >= v120->SupportDeckMemberMax )
                break;
              if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
              {
                j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId);
                v120 = BalanceConfig_TypeInfo->static_fields;
              }
              v122 = v120->FixMainSupportDeckNum;
              v121 = v120->FixEventSupportDeckNum;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              ReturnTypeByQuestId = System_Math__Max_63934620(v122, v121, 0LL);
              if ( (int)v227 >= 1 )
              {
                v123 = ReturnTypeByQuestId;
                v124 = 0LL;
                while ( *p_mixItemList )
                {
                  ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                  v125 = (*p_mixItemList)->fields._size;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( v100 >= LODWORD(klass->_1.namespaze) )
                    goto LABEL_337;
                  if ( !v104 )
                    goto LABEL_336;
                  if ( v124 >= *(unsigned int *)(v104 + 24) )
                    goto LABEL_337;
                  v126 = v125;
                  indexd = *v250;
                  v127 = this->fields.isServantEquipBonusFilterEnable;
                  v128 = this->fields.isServantBonusFilterEnable;
                  v129 = *((_DWORD *)&v241->klass + v124);
                  v130 = this->fields.isBonusFilterEnable;
                  v131 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 164LL);
                  classBoardMaxNumDictionarya = v269->fields.classBoardMaxDictionary;
                  v97 = questRestrictionInfo;
                  setupInfo = v269->fields.setupInfo;
                  this = v269;
                  v132 = (FollowerSelectItemListViewItem_o *)sub_1C22084(FollowerSelectItemListViewItem_TypeInfo);
                  FollowerSelectItemListViewItem___ctor(
                    v132,
                    v126,
                    v131 - followerInfoa,
                    indexd,
                    followerInfoa,
                    friendPointUpVal,
                    friendPointUpMaxVal,
                    friendPointCampaignEntityList,
                    v130,
                    v128,
                    v127,
                    0,
                    setupInfo,
                    questRestrictionInfo,
                    1,
                    v129,
                    v123,
                    classBoardMaxNumDictionarya,
                    1,
                    0,
                    IsNoneSupportFriendPoint,
                    0LL);
                  ReturnTypeByQuestId = (__int64)v269->fields.mixItemList;
                  if ( !ReturnTypeByQuestId )
                    goto LABEL_336;
                  v133 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                  v134 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                  if ( !v133 )
                    goto LABEL_336;
                  v135 = *(int *)(ReturnTypeByQuestId + 24);
                  if ( (unsigned int)v135 >= *(_DWORD *)(v133 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                      (Il2CppObject *)v132,
                      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v136 = v133 + 8 * v135;
                    *(_DWORD *)(ReturnTypeByQuestId + 24) = v135 + 1;
                    *(_QWORD *)(v136 + 32) = v132;
                    ReturnTypeByQuestId = sub_1C21DDC(v136 + 32, v132);
                  }
                  v104 = (__int64)v247;
                  klass = v234;
                  v100 = v237;
                  ++v124;
                  --v123;
                  if ( (unsigned int)v227 == v124 )
                    goto LABEL_204;
                }
                goto LABEL_336;
              }
LABEL_204:
              ++followerInfoa;
            }
            namespaze = (int)klass->_1.namespaze;
            ++v100;
          }
          while ( (int)v100 < namespaze );
        }
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_336;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v271,
                            (const MethodInfo_325E450 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v271 )
        goto LABEL_336;
      v137 = v271[1].klass;
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_336;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !ReturnTypeByQuestId )
        goto LABEL_336;
      ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                       questId,
                                       (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_336;
      HasFlag_40740584 = QuestEntity__HasFlag_40740584(
                           (QuestEntity_o *)ReturnTypeByQuestId,
                           0x8000000LL,
                           questPhase,
                           0LL);
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_336;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserFollowMaster___);
      v220 = (UserFollowMaster_o *)ReturnTypeByQuestId;
      if ( !v137 )
        goto LABEL_336;
      namespaze_low = (unsigned __int64)v137->_1.namespaze;
      if ( (int)namespaze_low >= 1 )
      {
        v139 = 0LL;
        v228 = 0;
        v238 = v137;
        do
        {
          namespaze_low = (unsigned int)namespaze_low;
          if ( HasFlag_40740584 )
          {
            if ( v139 >= (unsigned int)namespaze_low )
              goto LABEL_337;
            v140 = *((_QWORD *)&v137->_1.byval_arg.data + v139);
            if ( !v140 )
              goto LABEL_336;
            if ( *(_DWORD *)(v140 + 36) == 5 )
            {
              ReturnTypeByQuestId = (__int64)v220;
              if ( !v220 )
                goto LABEL_336;
              ReturnTypeByQuestId = UserFollowMaster__IsFollowUser(v220, *(_QWORD *)(v140 + 16), 0LL);
              if ( (ReturnTypeByQuestId & 1) == 0 )
                goto LABEL_282;
              namespaze_low = LODWORD(v137->_1.namespaze);
            }
          }
          else
          {
            if ( v139 >= (unsigned int)namespaze_low )
              goto LABEL_337;
            v141 = *((_QWORD *)&v137->_1.byval_arg.data + v139);
            if ( !v141 )
              goto LABEL_336;
            if ( *(_DWORD *)(v141 + 36) == 5 )
              goto LABEL_282;
          }
          if ( v139 >= namespaze_low )
            goto LABEL_337;
          v142 = &v137->_1.image + v139;
          ReturnTypeByQuestId = (__int64)v142[4];
          v251 = (FollowerInfo_o **)(v142 + 4);
          if ( !ReturnTypeByQuestId )
            goto LABEL_336;
          FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0LL);
          ReturnTypeByQuestId = sub_1C21EE0(int___TypeInfo, 0LL);
          if ( v139 >= LODWORD(v137->_1.namespaze) )
            goto LABEL_337;
          v143 = *v251;
          if ( !*v251 )
            goto LABEL_336;
          if ( v222 )
          {
            ReturnTypeByQuestId = (__int64)v143->fields.eventSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_336;
          }
          else
          {
            ReturnTypeByQuestId = (__int64)v143->fields.mainSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_336;
          }
          followerInfob = (FollowerInfo_o *)*(unsigned int *)(ReturnTypeByQuestId + 24);
          v144 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
          if ( v144 )
          {
            v103 = v144;
            v145 = sub_1C21F74(v144, int___TypeInfo);
            if ( !v145 )
              goto LABEL_338;
          }
          else
          {
            v145 = 0LL;
          }
          v146 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v146 = BalanceConfig_TypeInfo;
          }
          v147 = v146->static_fields;
          v149 = v147->FixMainSupportDeckNum;
          v148 = v147->FixEventSupportDeckNum;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          ReturnTypeByQuestId = System_Math__Max_63934620(v149, v148, 0LL);
          v248 = (QuestPhaseEntity_o *)v145;
          if ( (int)followerInfob >= 1 )
          {
            v150 = ReturnTypeByQuestId;
            v151 = 0LL;
            v232 = (ClassBoardClassMaster_o *)(v145 + 32);
            while ( 1 )
            {
              if ( !*p_originalItemList )
                goto LABEL_336;
              if ( v139 >= LODWORD(v137->_1.namespaze) )
                break;
              if ( !v145 )
                goto LABEL_336;
              if ( v151 >= *(unsigned int *)(v145 + 24) )
                break;
              indexe = (*p_originalItemList)->fields._size;
              v235 = this->fields.setupInfo;
              v152 = this->fields.classBoardMaxDictionary;
              v153 = *((_DWORD *)&v232->klass + v151);
              v244 = *v251;
              v154 = this->fields.isServantEquipBonusFilterEnable;
              v155 = this->fields.isServantBonusFilterEnable;
              v156 = this->fields.isBonusFilterEnable;
              v157 = (FollowerSelectItemListViewItem_o *)sub_1C22084(FollowerSelectItemListViewItem_TypeInfo);
              FollowerSelectItemListViewItem___ctor(
                v157,
                indexe,
                0,
                v244,
                0,
                friendPointUpVal,
                friendPointUpMaxVal,
                friendPointCampaignEntityList,
                v156,
                v155,
                v154,
                0,
                v235,
                questRestrictionInfo,
                0,
                v153,
                v150,
                v152,
                1,
                0,
                IsNoneSupportFriendPoint,
                0LL);
              ReturnTypeByQuestId = (__int64)this->fields.originalItemList;
              if ( !ReturnTypeByQuestId )
                goto LABEL_336;
              v158 = *(_QWORD *)(ReturnTypeByQuestId + 16);
              v159 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++*(_DWORD *)(ReturnTypeByQuestId + 28);
              if ( !v158 )
                goto LABEL_336;
              v160 = *(int *)(ReturnTypeByQuestId + 24);
              v145 = (__int64)v248;
              if ( (unsigned int)v160 >= *(_DWORD *)(v158 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                  (Il2CppObject *)v157,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
              }
              else
              {
                v161 = v158 + 8 * v160;
                *(_DWORD *)(ReturnTypeByQuestId + 24) = v160 + 1;
                *(_QWORD *)(v161 + 32) = v157;
                ReturnTypeByQuestId = sub_1C21DDC(v161 + 32, v157);
              }
              ++v151;
              --v150;
              if ( followerInfob == (FollowerInfo_o *)v151 )
                goto LABEL_256;
            }
LABEL_337:
            sub_1C2209C(ReturnTypeByQuestId, v13);
          }
LABEL_256:
          indexa = 0;
          v242 = (EventUpValSetupInfo_o *)v139;
          v245 = (FollowerInfo_o *)(v145 + 32);
          while ( 1 )
          {
            ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            }
            v162 = *(struct BalanceConfig_StaticFields **)(ReturnTypeByQuestId + 184);
            if ( indexa >= v162->SupportDeckMemberMax )
              break;
            if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
            {
              j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId);
              v162 = BalanceConfig_TypeInfo->static_fields;
            }
            v164 = v162->FixMainSupportDeckNum;
            v163 = v162->FixEventSupportDeckNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            ReturnTypeByQuestId = System_Math__Max_63934620(v164, v163, 0LL);
            if ( (int)followerInfob >= 1 )
            {
              v165 = ReturnTypeByQuestId;
              v166 = 0LL;
              while ( *p_mixItemList )
              {
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                v167 = (*p_mixItemList)->fields._size;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                }
                if ( v139 >= LODWORD(v137->_1.namespaze) )
                  goto LABEL_337;
                if ( !v145 )
                  goto LABEL_336;
                if ( v166 >= *(unsigned int *)(v145 + 24) )
                  goto LABEL_337;
                v168 = this->fields.isServantBonusFilterEnable;
                v169 = this->fields.isServantEquipBonusFilterEnable;
                v170 = *v251;
                v171 = this->fields.isBonusFilterEnable;
                v172 = this->fields.setupInfo;
                v173 = *((_DWORD *)&v245->klass + v166);
                v174 = v169;
                v175 = v269->fields.classBoardMaxDictionary;
                v176 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 164LL);
                v177 = v168;
                v178 = v171;
                v179 = (FollowerSelectItemListViewItem_o *)sub_1C22084(FollowerSelectItemListViewItem_TypeInfo);
                supportDeckId = v173;
                this = v269;
                v180 = v167;
                v181 = (Il2CppObject *)v179;
                FollowerSelectItemListViewItem___ctor(
                  v179,
                  v180,
                  v176 - indexa,
                  v170,
                  indexa,
                  friendPointUpVal,
                  friendPointUpMaxVal,
                  friendPointCampaignEntityList,
                  v178,
                  v177,
                  v174,
                  0,
                  v172,
                  questRestrictionInfo,
                  0,
                  supportDeckId,
                  v165,
                  v175,
                  1,
                  0,
                  IsNoneSupportFriendPoint,
                  0LL);
                ReturnTypeByQuestId = (__int64)v269->fields.mixItemList;
                if ( !ReturnTypeByQuestId )
                  goto LABEL_336;
                v182 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v183 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v182 )
                  goto LABEL_336;
                v184 = *(int *)(ReturnTypeByQuestId + 24);
                if ( (unsigned int)v184 >= *(_DWORD *)(v182 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    v181,
                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v183[4] + 192LL) + 112LL));
                }
                else
                {
                  v185 = v182 + 8 * v184;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v184 + 1;
                  *(_QWORD *)(v185 + 32) = v181;
                  ReturnTypeByQuestId = sub_1C21DDC(v185 + 32, v181);
                }
                v137 = v238;
                v139 = (unsigned __int64)v242;
                v145 = (__int64)v248;
                ++v166;
                --v165;
                if ( followerInfob == (FollowerInfo_o *)v166 )
                  goto LABEL_278;
              }
              goto LABEL_336;
            }
LABEL_278:
            ++indexa;
          }
          if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
          {
            j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId);
            v162 = BalanceConfig_TypeInfo->static_fields;
          }
          if ( ++v228 >= v162->SupportListMax )
            break;
LABEL_282:
          LODWORD(namespaze_low) = v137->_1.namespaze;
          ++v139;
        }
        while ( (__int64)v139 < (int)namespaze_low );
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_336;
    if ( DataMasterBase_object__object__long___TryGetSingleEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
           &v270,
           (const MethodInfo_325E450 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    {
      ReturnTypeByQuestId = (__int64)v270;
      if ( !v270 )
        goto LABEL_336;
      ReturnTypeByQuestId = UserRecommendFollowerEntity__IsEnableSupport(
                              (UserRecommendFollowerEntity_o *)v270,
                              questId,
                              questPhase,
                              0LL);
      if ( (ReturnTypeByQuestId & 1) != 0 )
      {
        if ( !v270 )
          goto LABEL_336;
        v186 = v270[1].klass;
        ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_336;
        ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !ReturnTypeByQuestId )
          goto LABEL_336;
        ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                         questId,
                                         (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_336;
        indexb = QuestEntity__HasFlag_40740584((QuestEntity_o *)ReturnTypeByQuestId, 0x8000000LL, questPhase, 0LL);
        ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_336;
        ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserFollowMaster___);
        v257 = (UserFollowMaster_o *)ReturnTypeByQuestId;
        if ( !v186 )
          goto LABEL_336;
        v187 = (unsigned __int64)v186->_1.namespaze;
        if ( (int)v187 >= 1 )
        {
          v188 = 0LL;
          p_byval_arg = &v186->_1.byval_arg;
          do
          {
            v187 = (unsigned int)v187;
            if ( indexb )
            {
              if ( v188 >= (unsigned int)v187 )
                goto LABEL_337;
              v190 = *((_QWORD *)&p_byval_arg->data + v188);
              if ( !v190 )
                goto LABEL_336;
              if ( *(_DWORD *)(v190 + 36) == 5 )
              {
                ReturnTypeByQuestId = (__int64)v257;
                if ( !v257 )
                  goto LABEL_336;
                ReturnTypeByQuestId = UserFollowMaster__IsFollowUser(v257, *(_QWORD *)(v190 + 16), 0LL);
                if ( (ReturnTypeByQuestId & 1) == 0 )
                  goto LABEL_330;
                v187 = LODWORD(v186->_1.namespaze);
              }
            }
            else
            {
              if ( v188 >= (unsigned int)v187 )
                goto LABEL_337;
              v191 = *((_QWORD *)&p_byval_arg->data + v188);
              if ( !v191 )
                goto LABEL_336;
              if ( *(_DWORD *)(v191 + 36) == 5 )
                goto LABEL_330;
            }
            if ( v188 >= v187 )
              goto LABEL_337;
            v192 = *((_QWORD *)&p_byval_arg->data + v188);
            ReturnTypeByQuestId = sub_1C21EE0(ServantLeaderInfo___TypeInfo, 1LL);
            if ( v188 >= LODWORD(v186->_1.namespaze) )
              goto LABEL_337;
            v193 = *((_QWORD *)&p_byval_arg->data + v188);
            if ( !v193 )
              goto LABEL_336;
            v194 = *(_QWORD *)(v193 + 56);
            if ( !v194 )
              goto LABEL_336;
            if ( !*(_DWORD *)(v194 + 24) )
              goto LABEL_337;
            v195 = *(_QWORD *)(v194 + 32);
            if ( !v195 )
              goto LABEL_336;
            v196 = ReturnTypeByQuestId;
            if ( !ReturnTypeByQuestId )
              goto LABEL_336;
            v197 = *(_QWORD *)(v195 + 56);
            if ( v197 )
            {
              ReturnTypeByQuestId = sub_1C21F74(v197, *(_QWORD *)(*(_QWORD *)ReturnTypeByQuestId + 64LL));
              if ( !ReturnTypeByQuestId )
                goto LABEL_339;
            }
            if ( !*(_DWORD *)(v196 + 24) )
              goto LABEL_337;
            *(_QWORD *)(v196 + 32) = v197;
            ReturnTypeByQuestId = sub_1C21DDC(v196 + 32, v197);
            if ( !v192 )
              goto LABEL_336;
            *(_QWORD *)(v192 + 40) = v196;
            ReturnTypeByQuestId = sub_1C21DDC(v192 + 40, v196);
            if ( v188 >= LODWORD(v186->_1.namespaze) )
              goto LABEL_337;
            ReturnTypeByQuestId = *((_QWORD *)&p_byval_arg->data + v188);
            if ( !ReturnTypeByQuestId )
              goto LABEL_336;
            FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0LL);
            if ( !*p_recommendItemList )
              goto LABEL_336;
            if ( v188 >= LODWORD(v186->_1.namespaze) )
              goto LABEL_337;
            v198 = (*p_recommendItemList)->fields._size;
            v199 = (FollowerInfo_o *)*((_QWORD *)&p_byval_arg->data + v188);
            v200 = v269->fields.isBonusFilterEnable;
            v201 = v269->fields.isServantEquipBonusFilterEnable;
            v202 = v269->fields.setupInfo;
            v203 = v269->fields.classBoardMaxDictionary;
            isServantBonusFilterEnable = v269->fields.isServantBonusFilterEnable;
            this = v269;
            v204 = (FollowerSelectItemListViewItem_o *)sub_1C22084(FollowerSelectItemListViewItem_TypeInfo);
            FollowerSelectItemListViewItem___ctor(
              v204,
              v198,
              0,
              v199,
              0,
              friendPointUpVal,
              friendPointUpMaxVal,
              friendPointCampaignEntityList,
              v200,
              isServantBonusFilterEnable,
              v201,
              0,
              v202,
              questRestrictionInfo,
              0,
              0,
              0,
              v203,
              1,
              1,
              IsNoneSupportFriendPoint,
              0LL);
            ReturnTypeByQuestId = (__int64)v269->fields.recommendItemList;
            if ( !ReturnTypeByQuestId )
              goto LABEL_336;
            v205 = *(_QWORD *)(ReturnTypeByQuestId + 16);
            v206 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++*(_DWORD *)(ReturnTypeByQuestId + 28);
            if ( !v205 )
              goto LABEL_336;
            v207 = *(int *)(ReturnTypeByQuestId + 24);
            if ( (unsigned int)v207 >= *(_DWORD *)(v205 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                (Il2CppObject *)v204,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v206[4] + 192LL) + 112LL));
            }
            else
            {
              v208 = v205 + 8 * v207;
              *(_DWORD *)(ReturnTypeByQuestId + 24) = v207 + 1;
              *(_QWORD *)(v208 + 32) = v204;
              sub_1C21DDC(v208 + 32, v204);
            }
            ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            }
            if ( (__int64)v188 >= *(int *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 700LL) )
              break;
LABEL_330:
            LODWORD(v187) = v186->_1.namespaze;
            ++v188;
          }
          while ( (__int64)v188 < (int)v187 );
        }
      }
    }
  }
LABEL_331:
  ReturnTypeByQuestId = (__int64)this->fields.refreshButtonObject;
  if ( !ReturnTypeByQuestId )
    goto LABEL_336;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)ReturnTypeByQuestId,
    !this->fields.isRefreshBtnHide,
    0LL);
  v210 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v210 = FollowerSelectItemListViewManager_TypeInfo;
  }
  FollowerSelectItemListViewManager__SetEmptyMessage(this, v210->static_fields->followerClassId, v209);
  FollowerSelectItemListViewManager__SortClass(
    this,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    v211);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  FollowerSelectItemListViewManager__SetFilterButtonImage(this, v212);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_336;
  scrollView->fields.smoothDragStart = 1;
}


void __fastcall FollowerSelectItemListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewManager_c *v2; // x0
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v4; // x8

  if ( (byte_4BD75C5 & 1) == 0 )
  {
    sub_1C21E38(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C21E38(&StringLiteral_6920/*"FollowerSelectClass"*/);
    sub_1C21E38(&StringLiteral_6923/*"FollowerSelectOldClass"*/);
    byte_4BD75C5 = 1;
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
    sub_1C22094(v2, v1);
  }
  ListViewSort__DeleteContinueData((ListViewSort_o *)v2, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6920/*"FollowerSelectClass"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6923/*"FollowerSelectOldClass"*/, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FollowerSelectItemListViewManager__DestroyList_31777872(this, 0LL, v2);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList_31777872(
        FollowerSelectItemListViewManager_o *this,
        BattleSetupInfo_o *battleSetupInfo,
        const MethodInfo *method)
{
  EventQuestMaster_o *ReturnTypeByQuestId; // x0
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

  if ( (byte_4BD75D4 & 1) == 0 )
  {
    sub_1C21E38(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&EventUpValSetupInfo_TypeInfo);
    sub_1C21E38(&Method_FollowerSelectItemListViewManager_OnChangeClass__);
    sub_1C21E38(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11892/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/);
    sub_1C21E38(&StringLiteral_6920/*"FollowerSelectClass"*/);
    sub_1C21E38(&StringLiteral_6923/*"FollowerSelectOldClass"*/);
    byte_4BD75D4 = 1;
  }
  if ( battleSetupInfo )
  {
    this->fields.questId = BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
    this->fields.questPhase = battleSetupInfo->fields.questPhase;
    ReturnTypeByQuestId = (EventQuestMaster_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                  battleSetupInfo->fields.questId,
                                                  0LL);
    v7 = FollowerSelectItemListViewManager_TypeInfo;
    v8 = (unsigned int)ReturnTypeByQuestId;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
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
    ReturnTypeByQuestId = (EventQuestMaster_o *)sub_1C21DDC(&this->fields.sort, v10);
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
    ReturnTypeByQuestId = (EventQuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventQuestMaster___);
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
    v16 = OngoingQuestTargetEventIds;
    v17 = (EventUpValSetupInfo_o *)sub_1C22084(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_40169720(v17, v16, 0, questId, questPhase, 0LL);
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
  sub_1C21DDC(p_setupInfo, v19);
  this->fields.questRestrictionInfo = 0LL;
  sub_1C21DDC(&this->fields.questRestrictionInfo, 0LL);
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.sort;
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  ListViewSort__Load((ListViewSort_o *)ReturnTypeByQuestId, 0LL);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.sort;
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
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6920/*"FollowerSelectClass"*/, v24->static_fields->followerClassId, 0LL);
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
        (System_String_o *)StringLiteral_6923/*"FollowerSelectOldClass"*/,
        v27->static_fields->oldFollowerClassId,
        0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
  this->fields.originalItemList = 0LL;
  sub_1C21DDC(&this->fields.originalItemList, 0LL);
  this->fields.mixItemList = 0LL;
  sub_1C21DDC(&this->fields.mixItemList, 0LL);
  this->fields.recommendItemList = 0LL;
  sub_1C21DDC(&this->fields.recommendItemList, 0LL);
  classButtonControl = this->fields.classButtonControl;
  v29 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C22084(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v29,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_47;
  ClassButtonControlComponent__init(classButtonControl, v29, this->fields.questId, this->fields.questPhase, 0, 0LL);
  this->fields.isInput = 0;
  ReturnTypeByQuestId = (EventQuestMaster_o *)FollowerSelectItemListViewManager_TypeInfo;
  v30 = this->fields.classButtonControl;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  if ( !v30 )
    goto LABEL_47;
  ClassButtonControlComponent__setCursor(
    v30,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  setupInfo = this->fields.setupInfo;
  v33 = setupInfo ? setupInfo->fields.eventIdList : (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, v33, v31);
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ReturnTypeByQuestId = (EventQuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/, 0LL);
    if ( bonusFilterKindLabel )
    {
      UILabel__set_text(bonusFilterKindLabel, (System_String_o *)ReturnTypeByQuestId, 0LL);
      goto LABEL_43;
    }
LABEL_47:
    sub_1C22094(ReturnTypeByQuestId, v6);
  }
LABEL_43:
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.tutorialListViewObject;
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  ((void (__fastcall *)(EventQuestMaster_o *, Il2CppMethodPointer))ReturnTypeByQuestId->klass->vtable._4_ForForceDerived.method)(
    ReturnTypeByQuestId,
    ReturnTypeByQuestId->klass->vtable._5_preProcess.methodPtr);
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
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BD75E2 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD75E2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__EndCloseClassBoardEffectListDialog(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BD75F3 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD75F3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
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

  if ( (byte_4BD75E4 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD75E4 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__,
    0LL);
  if ( !Instance )
LABEL_8:
    sub_1C22094(sort, v6);
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

  if ( (byte_4BD75CF & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD75CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v14 = v11->fields.classIds;
  if ( !v14 )
    goto LABEL_17;
  if ( !v14->max_length )
    sub_1C2209C(Instance, v9);
  if ( !Instance )
LABEL_17:
    sub_1C22094(Instance, v9);
  v15 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          v14->m_Items[1],
          (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
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

  if ( (byte_4BD75D8 & 1) == 0 )
  {
    sub_1C21E38(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4BD75D8 = 1;
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

  if ( (byte_4BD75F4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4BD75F4 = 1;
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

  if ( (byte_4BD75CD & 1) == 0 )
  {
    sub_1C21E38(&ClassButtonControlComponent_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_RecommendSupportQuestMaster___);
    sub_1C21E38(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    this = (FollowerSelectItemListViewManager_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD75CD = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_RecommendSupportQuestMaster___)) == 0LL )
    {
      sub_1C22094(Instance, v11);
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

  if ( (byte_4BD75D6 & 1) == 0 )
  {
    sub_1C21E38(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4BD75D6 = 1;
  }
  result = (FollowerSelectItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4BD75EF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4BD75EF = 1;
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
  Il2CppObject *Item; // x0
  FollowerSelectItemListViewItem_o *v10; // x23
  __int64 methodPtr_low; // x10

  if ( (byte_4BD75F0 & 1) == 0 )
  {
    sub_1C21E38(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4BD75F0 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1C22094(itemList, userId);
  v8 = 0;
  while ( v8 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v8,
             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      v10 = (FollowerSelectItemListViewItem_o *)Item;
      methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (FollowerSelectItemListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo
        && FollowerSelectItemListViewItem__get_FollowerId((FollowerSelectItemListViewItem_o *)Item, 0LL) == userId )
      {
        itemList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                  v10,
                                                                  0LL);
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


int32_t __fastcall FollowerSelectItemListViewManager__GetItemIndex_31789876(
        FollowerSelectItemListViewManager_o *this,
        int64_t userId,
        int32_t classId,
        int32_t deckId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v10; // w23
  Il2CppObject *Item; // x0
  FollowerSelectItemListViewItem_o *v12; // x24
  __int64 methodPtr_low; // x10

  if ( (byte_4BD75F1 & 1) == 0 )
  {
    sub_1C21E38(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4BD75F1 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1C22094(itemList, userId);
  v10 = 0;
  while ( v10 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v10,
             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      v12 = (FollowerSelectItemListViewItem_o *)Item;
      methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (FollowerSelectItemListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo
        && FollowerSelectItemListViewItem__get_FollowerId((FollowerSelectItemListViewItem_o *)Item, 0LL) == userId
        && FollowerSelectItemListViewItem__get_SelectClassId(v12, 0LL) == classId
        && v12->fields.supportDeckId == deckId )
      {
        return v10;
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v10;
    if ( !itemList )
      goto LABEL_13;
  }
  return -1;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BD75D1 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_6920/*"FollowerSelectClass"*/);
    byte_4BD75D1 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6920/*"FollowerSelectClass"*/, 0, 0LL);
}


int32_t __fastcall FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BD75D2 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_6923/*"FollowerSelectOldClass"*/);
    byte_4BD75D2 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6923/*"FollowerSelectOldClass"*/, 0, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewManager_c *v2; // x0
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v4; // x8

  if ( (byte_4BD75C6 & 1) == 0 )
  {
    sub_1C21E38(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4BD75C6 = 1;
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
    sub_1C22094(v2, v1);
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

  if ( (byte_4BD75CE & 1) == 0 )
  {
    sub_1C21E38(&BattleData_TypeInfo);
    sub_1C21E38(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4BD75CE = 1;
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
  __int64 methodPtr_low; // x10
  FollowerSelectItemListViewManager_c *v11; // x0
  int32_t followerClassId; // w22
  int v13; // w25
  int32_t v14; // w22
  __int64 v15; // x10
  int v16; // w25
  int32_t v17; // w22
  __int64 v18; // x10

  if ( (byte_4BD75D3 & 1) == 0 )
  {
    sub_1C21E38(&ClassButtonControlComponent_TypeInfo);
    sub_1C21E38(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C21E38(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4BD75D3 = 1;
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
                                                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      if ( size == ++v9 )
        goto LABEL_12;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_34:
    sub_1C22094(itemList, *(_QWORD *)&friendPointUpVal);
  }
LABEL_12:
  v11 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v11 = FollowerSelectItemListViewManager_TypeInfo;
  }
  followerClassId = v11->static_fields->followerClassId;
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsMixSupportGroupType(followerClassId, 0LL) )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.originalItemList;
    if ( !itemList )
      goto LABEL_34;
    v13 = itemList->fields._size;
    if ( v13 >= 1 )
    {
      v14 = 0;
      do
      {
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemList,
                                                                  v14,
                                                                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          break;
        v15 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v15
          || (FollowerSelectItemListViewItem_c *)itemList->klass->_2.typeHierarchy[v15 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          break;
        }
        FollowerSelectItemListViewItem__Modify(
          (FollowerSelectItemListViewItem_o *)itemList,
          friendPointUpVal,
          friendPointUpMaxVal,
          0LL);
        if ( v13 == ++v14 )
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
    v16 = itemList->fields._size;
    if ( v16 >= 1 )
    {
      v17 = 0;
      do
      {
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemList,
                                                                  v17,
                                                                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          break;
        v18 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v18
          || (FollowerSelectItemListViewItem_c *)itemList->klass->_2.typeHierarchy[v18 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          break;
        }
        FollowerSelectItemListViewItem__Modify(
          (FollowerSelectItemListViewItem_o *)itemList,
          friendPointUpVal,
          friendPointUpMaxVal,
          0LL);
        if ( v16 == ++v17 )
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

  if ( (byte_4BD75EA & 1) == 0 )
  {
    sub_1C21E38(&ClassButtonControlComponent_TypeInfo);
    sub_1C21E38(&Method_FollowerSelectItemListViewManager_OnChangeClass__);
    sub_1C21E38(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4BD75EA = 1;
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
          v14 = (_QWORD *)sub_1C21E50(Method_FollowerSelectItemListViewManager_OnChangeClass__);
        v15 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v14, v14[4]);
        OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0LL);
        if ( (v7 & 1) != 0 )
          FollowerSelectItemListViewManager__OnClickRecommend(this, classPos, v16);
        else
          FollowerSelectItemListViewManager__SortClass(this, classPos, v16);
        return;
      }
    }
LABEL_22:
    sub_1C22094(IsRecommendSupportGroupType, v6);
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

  if ( (byte_4BD75E3 & 1) == 0 )
  {
    sub_1C21E38(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__);
    sub_1C21E38(&Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD75E3 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
    isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
    equipBonusFilterEventIds = this->fields.equipBonusFilterEventIds;
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantBonusFilterSelectMenu_CallbackFunc_o *)sub_1C22084(ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantBonusFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__,
      0LL);
    if ( !v10 )
      sub_1C22094(v12, v13);
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

  if ( (byte_4BD75EE & 1) == 0 )
  {
    sub_1C21E38(&Method_FollowerSelectItemListViewManager_OnClickChangeSkill__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    byte_4BD75EE = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickChangeSkill__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickChangeSkill__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_FollowerSelectItemListViewManager_OnClickChangeSkill__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    displaySkill = this->fields.displaySkill;
    if ( (unsigned int)displaySkill <= 2 )
      this->fields.displaySkill = dword_C375BC[displaySkill];
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
                                                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
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
      sub_1C22094(ObjectList, v8);
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

  if ( (byte_4BD75E1 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__);
    sub_1C21E38(&Method_FollowerSelectItemListViewManager_OnClickClassComparibility__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD75E1 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickClassComparibility__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickClassComparibility__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_FollowerSelectItemListViewManager_OnClickClassComparibility__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v6,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__,
      0LL);
    if ( !Instance )
      sub_1C22094(v7, v8);
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

  if ( (byte_4BD75EB & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__);
    sub_1C21E38(&FollowerSelectItemListViewManager_TypeInfo);
    byte_4BD75EB = 1;
  }
  entity = 0LL;
  if ( this->fields.isGetRecommendSupport )
    goto LABEL_4;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
  if ( !Master_object )
    goto LABEL_16;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          (const MethodInfo_325E450 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    goto LABEL_12;
  Master_object = entity;
  if ( !entity )
LABEL_16:
    sub_1C22094(Master_object, v6);
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
    sub_1C21DDC(&this->fields.callbackFunc, 0LL);
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

  if ( (byte_4BD75E0 & 1) == 0 )
  {
    sub_1C21E38(&ClassButtonControlComponent_TypeInfo);
    byte_4BD75E0 = 1;
  }
  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0LL;
      v4 = sub_1C21DDC(&this->fields.callbackFunc, 0LL);
      classButtonControl = this->fields.classButtonControl;
      if ( !classButtonControl )
        sub_1C22094(v4, v5);
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
    v5 = sub_1C21DDC(&this->fields.callbackFunc, 0LL);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1C22094(v5, v6);
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

  if ( (byte_4BD75E8 & 1) == 0 )
  {
    sub_1C21E38(&Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__);
    byte_4BD75E8 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C22094(v5, v6);
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

  if ( (byte_4BD75E6 & 1) == 0 )
  {
    sub_1C21E38(&OtherUserSortDialog_CallbackFunc_TypeInfo);
    sub_1C21E38(&ClassButtonControlComponent_TypeInfo);
    sub_1C21E38(&Method_FollowerSelectItemListViewManager_CloseSortDialog__);
    sub_1C21E38(&Method_FollowerSelectItemListViewManager_OnClickSortKind__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD75E6 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_FollowerSelectItemListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v12 = this->fields.sort;
        v13 = (CommonUI_o *)Instance;
        v14 = (OtherUserSortDialog_CallbackFunc_o *)sub_1C22084(OtherUserSortDialog_CallbackFunc_TypeInfo);
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
    sub_1C22094(IsRecommendSupportGroupType, v6);
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
    v5 = sub_1C21DDC(&this->fields.callbackFunc, 0LL);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1C22094(v5, v6);
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
    v5 = sub_1C21DDC(&this->fields.callbackFunc, 0LL);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1C22094(v5, v6);
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
    v5 = sub_1C21DDC(&this->fields.callbackFunc, 0LL);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1C22094(v5, v6);
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

  if ( (byte_4BD75DF & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_12796/*"ScrollViewEnabled"*/);
    byte_4BD75DF = 1;
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
        (System_String_o *)StringLiteral_12796/*"ScrollViewEnabled"*/,
        0.1,
        0LL);
    }
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    tutorialListViewObject = (UnityEngine_Component_o *)sub_1C21DDC(&this->fields.callbackFunc, 0LL);
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
      sub_1C22094(tutorialListViewObject, obj);
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

  if ( (byte_4BD75DE & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD75DE = 1;
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
              sub_1C21DDC(&this->fields.callbackFunc2, 0LL);
              if ( callbackFunc2 )
                ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
                  callbackFunc2->fields.original_method_info,
                  *(_QWORD *)&callbackFunc2->fields.extra_arg);
              return;
            }
          }
        }
      }
      sub_1C22094(tutorialListViewObject, v7);
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
  int32_t scrollView; // w22
  struct FollowerInfo_o *followerInfo; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v19; // w20
  unsigned int v20; // w24
  ClassBoardInfo_o *v21; // x21
  long double inited; // q0
  _QWORD *v23; // x22
  __int64 v24; // x8
  __int64 v25; // x0
  __int64 v26; // x0
  struct System_Int32_array **v27; // x8
  struct System_Int32_array *v28; // x1
  long double v29; // q0
  _QWORD *v30; // x22
  __int64 v31; // x8
  __int64 v32; // x0
  __int64 v33; // x0
  struct System_Int32_array **v34; // x8
  struct System_Int32_array *v35; // x1
  Il2CppObject *Instance; // x22
  System_Action_o *v37; // x23

  v4 = this;
  if ( (byte_4BD75F2 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Array_Empty_int___);
    sub_1C21E38(&ClassBoardInfo_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C21E38(&Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__);
    sub_1C21E38(&Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (FollowerSelectItemListViewManager_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD75F2 = 1;
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
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
            v10 = (_QWORD *)sub_1C21E50(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
          v11 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0, 0LL);
          return;
        }
        v4->fields.isInput = 0;
        v12 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
        if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 83) & 2) != 0 )
          v12 = (_QWORD *)sub_1C21E50(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
        v13 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v12, v12[4]);
        OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
        this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewItem__get_SvtId(v8, 0LL);
        if ( Master_object )
        {
          this = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                          (int32_t)this,
                                                          (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            scrollView = (int32_t)this->fields.scrollView;
            this = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
                  v19 = (int)this;
                  if ( max_length < 1 )
                  {
LABEL_30:
                    v21 = (ClassBoardInfo_o *)sub_1C22084(ClassBoardInfo_TypeInfo);
                    ClassBoardInfo___ctor(v21, 0LL);
                    if ( v21 )
                    {
                      v21->fields.classBoardBaseId = v19;
                      v23 = Method_System_Array_Empty_int___;
                      v24 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v24 )
                      {
                        sub_1C73D70(Method_System_Array_Empty_int___);
                        v24 = v23[7];
                      }
                      v25 = *(_QWORD *)(v24 + 16);
                      if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
                        v25 = sub_1C73D14(inited);
                      if ( !*(_DWORD *)(v25 + 224) )
                        inited = j_il2cpp_runtime_class_init_0(v25);
                      v26 = *(_QWORD *)(v23[7] + 16LL);
                      if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
                        v26 = sub_1C73D14(inited);
                      v27 = *(struct System_Int32_array ***)(v26 + 184);
                      v28 = *v27;
                      v21->fields.squareIds = *v27;
                      sub_1C21DDC(&v21->fields.squareIds, v28);
                      v30 = Method_System_Array_Empty_int___;
                      v31 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v31 )
                      {
                        sub_1C73D70(Method_System_Array_Empty_int___);
                        v31 = v30[7];
                      }
                      v32 = *(_QWORD *)(v31 + 16);
                      if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
                        v32 = sub_1C73D14(v29);
                      if ( !*(_DWORD *)(v32 + 224) )
                        v29 = j_il2cpp_runtime_class_init_0(v32);
                      v33 = *(_QWORD *)(v30[7] + 16LL);
                      if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
                        v33 = sub_1C73D14(v29);
                      v34 = *(struct System_Int32_array ***)(v33 + 184);
                      v35 = *v34;
                      v21->fields.releasedClassIds = *v34;
                      sub_1C21DDC(&v21->fields.releasedClassIds, v35);
LABEL_48:
                      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v37 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                      System_Action___ctor(
                        v37,
                        (Il2CppObject *)v4,
                        Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__,
                        0LL);
                      if ( Instance )
                      {
                        CommonUI__OpenClassBoardEffectListDialog((CommonUI_o *)Instance, 1, v19, 0, v37, 1, v21, 0LL);
                        return;
                      }
                    }
                  }
                  else
                  {
                    v20 = 0;
                    while ( 1 )
                    {
                      if ( v20 >= max_length )
                        sub_1C2209C(this, obj);
                      v21 = userClassBoardInfo->m_Items[v20];
                      if ( !v21 )
                        break;
                      if ( v21->fields.classBoardBaseId == v19 )
                      {
                        this = (FollowerSelectItemListViewManager_o *)ClassBoardInfo__IsReleasedClassId(
                                                                        v21,
                                                                        scrollView,
                                                                        0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          goto LABEL_48;
                      }
                      max_length = userClassBoardInfo->max_length;
                      if ( (int)++v20 >= max_length )
                        goto LABEL_30;
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_1C22094(this, obj);
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
    sub_1C22094(0LL, method);
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

  if ( (byte_4BD75DD & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    sub_1C21E38(&StringLiteral_10133/*"OnMoveEnd"*/);
    byte_4BD75DD = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = FollowerSelectItemListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_1C22094(ObjectList, v5);
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
             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      FollowerSelectItemListViewObject__Init_31783076((FollowerSelectItemListViewObject_o *)Item, 4, v11, 0.1, v12);
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
      (System_String_o *)StringLiteral_10133/*"OnMoveEnd"*/,
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

  if ( (byte_4BD75DB & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__);
    sub_1C21E38(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1C21E38(&StringLiteral_10133/*"OnMoveEnd"*/);
    byte_4BD75DB = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C22094(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10133/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C22094(v12, v13);
      FollowerSelectItemListViewObject__Init_31783076(
        (FollowerSelectItemListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__RequestListObject_31781960(
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

  if ( (byte_4BD75DC & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__);
    sub_1C21E38(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1C21E38(&StringLiteral_10133/*"OnMoveEnd"*/);
    byte_4BD75DC = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C22094(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10133/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C22094(v10, v11);
      FollowerSelectItemListViewObject__Init_31782464((FollowerSelectItemListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
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

  if ( (byte_4BD75D5 & 1) == 0 )
  {
    sub_1C21E38(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C21E38(&StringLiteral_6920/*"FollowerSelectClass"*/);
    sub_1C21E38(&StringLiteral_6923/*"FollowerSelectOldClass"*/);
    byte_4BD75D5 = 1;
  }
  sort = this->fields.sort;
  if ( !sort || (ListViewSort__Save(sort, 0LL), (v4 = this->fields.sort) == 0LL) )
    sub_1C22094(sort, method);
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
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6920/*"FollowerSelectClass"*/, v8->static_fields->followerClassId, 0LL);
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
        (System_String_o *)StringLiteral_6923/*"FollowerSelectOldClass"*/,
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
    sub_1C22094(0LL, method);
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

  if ( (byte_4BD75C9 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventFilterMaster___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD75C9 = 1;
  }
  entity = 0LL;
  *(_WORD *)&this->fields.isBonusFilterEnable = 0;
  this->fields.isServantEquipBonusFilterEnable = 0;
  Instance = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)eventIds,
                                                         (const MethodInfo_2FED35C *)Method_System_Linq_Enumerable_ToList_int___);
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
        sub_1C2209C(Instance, v6);
      v10 = eventIds->m_Items[v9 + 1];
      Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventFilterMaster___);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)EventFilterMaster__TryGetEntity_40386752(
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
                                                                 (const MethodInfo_363358C *)Method_System_Collections_Generic_List_int__Remove__);
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
    sub_1C22094(Instance, v6);
  }
LABEL_20:
  if ( !v8 )
    goto LABEL_22;
  v14 = System_Collections_Generic_List_int___ToArray(
          v8,
          (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.equipBonusFilterEventIds = v14;
  sub_1C21DDC(&this->fields.equipBonusFilterEventIds, v14);
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
  __int64 v21; // x21
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4BD75CB & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__getEntityList__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&StringLiteral_17969/*"buttontxt_formation_20"*/);
    byte_4BD75CB = 1;
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
  if ( CondType__IsQuestClear_38834244(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17969/*"buttontxt_formation_20"*/, 0LL);
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = &this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_32AD0FC *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v8,
      (const MethodInfo_32AC5B8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *p_classBoardMaxDictionary = v8;
    sub_1C21DDC(p_classBoardMaxDictionary, v8);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object
    || (Master_object = (System_Collections_ObjectModel_Collection_T__o *)Master_object[1].fields.items) == 0LL )
  {
    sub_1C22094(Master_object, v10);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Master_object,
                 (const MethodInfo_31F66A4 *)Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C22094(0LL, v11);
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
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo )
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
      v20 = sub_1C73E18(Enumerator, System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, 0LL);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v22 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v21 )
      sub_1C22094(v22, v23);
    if ( !v22 )
      sub_1C22094(0LL, v23);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                            (ClassBoardSquareMaster_o *)v22,
                            *(_DWORD *)(v21 + 16),
                            0LL);
    if ( OtherThanNoneEntity )
    {
      if ( !*p_classBoardMaxDictionary )
        sub_1C22094(OtherThanNoneEntity, v25);
      System_Collections_Generic_Dictionary_int__int___Add(
        *p_classBoardMaxDictionary,
        *(_DWORD *)(v21 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_32ACF7C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_43;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_43:
    v29 = sub_1C73E18(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
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
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerable_T__o *recommendItemList; // x21
  System_Collections_Generic_List_object__o *v12; // x22
  __int64 v13; // x10
  System_Collections_Generic_IEnumerable_T__o *originalItemList; // x21
  System_Collections_Generic_List_object__o *v15; // x22
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x20
  __int64 v17; // x10
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BD75D9 & 1) == 0 )
  {
    sub_1C21E38(&ClassButtonControlComponent_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C21E38(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C21E38(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem___ctor___77577696);
    sub_1C21E38(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    byte_4BD75D9 = 1;
  }
  v5 = FollowerSelectItemListViewManager_TypeInfo;
  memset(&v19, 0, sizeof(v19));
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
      v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ListViewItem__TypeInfo);
      System_Collections_Generic_List_object____ctor_56945064(
        v7,
        mixItemList,
        (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_ListViewItem___ctor___77577696);
      this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v7;
      sub_1C21DDC(&this->fields.itemList, v7);
      itemList = this->fields.itemList;
      if ( itemList )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v18,
          (System_Collections_Generic_List_object__o *)itemList,
          (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v19 = v18;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v19,
                  (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( v19.fields._current )
          {
            methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(v19.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
              && (FollowerSelectItemListViewItem_c *)v19.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo )
            {
              FollowerSelectItemListViewItem__UpdateRestriction(
                (FollowerSelectItemListViewItem_o *)v19.fields._current,
                0LL);
            }
          }
        }
LABEL_34:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v19,
          (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
        v12 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor_56945064(
          v12,
          recommendItemList,
          (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_ListViewItem___ctor___77577696);
        this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v12;
        sub_1C21DDC(&this->fields.itemList, v12);
        itemList = this->fields.itemList;
        if ( itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v18,
            (System_Collections_Generic_List_object__o *)itemList,
            (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v19 = v18;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v19,
                    (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v19.fields._current )
            {
              v13 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(v19.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v13
                && (FollowerSelectItemListViewItem_c *)v19.fields._current->klass->_2.typeHierarchy[v13 - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__UpdateRestriction(
                  (FollowerSelectItemListViewItem_o *)v19.fields._current,
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
        v15 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor_56945064(
          v15,
          originalItemList,
          (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_ListViewItem___ctor___77577696);
        this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v15;
        p_itemList = &this->fields.itemList;
        sub_1C21DDC(p_itemList, v15);
        itemList = *p_itemList;
        if ( *p_itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v18,
            (System_Collections_Generic_List_object__o *)itemList,
            (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v19 = v18;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v19,
                    (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v19.fields._current )
            {
              v17 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(v19.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v17
                && (FollowerSelectItemListViewItem_c *)v19.fields._current->klass->_2.typeHierarchy[v17 - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__SetClassId(
                  (FollowerSelectItemListViewItem_o *)v19.fields._current,
                  followerClassId,
                  0LL);
              }
            }
          }
          goto LABEL_34;
        }
      }
    }
    sub_1C22094(itemList, v8);
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

  if ( (byte_4BD75D0 & 1) == 0 )
  {
    sub_1C21E38(&ClassButtonControlComponent_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11215/*"RECOMMEND_SERVANT_EMPTY"*/);
    sub_1C21E38(&StringLiteral_11990/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4BD75D0 = 1;
  }
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(classId, 0LL) )
    v5 = (System_String_o **)&StringLiteral_11215/*"RECOMMEND_SERVANT_EMPTY"*/;
  else
    v5 = (System_String_o **)&StringLiteral_11990/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  v6 = *v5;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get(v6, 0LL);
  if ( !emptyMessageLabel )
    sub_1C22094(v8, v9);
  UILabel__set_text(emptyMessageLabel, v8, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__SetFilterButtonImage(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *bonusFilterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4BD75E5 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_17827/*"btn_sefilter_2_on"*/);
    sub_1C21E38(&StringLiteral_17826/*"btn_sefilter_2"*/);
    byte_4BD75E5 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (bonusFilterSprite = this->fields.bonusFilterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !bonusFilterSprite) )
  {
    sub_1C22094(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17826/*"btn_sefilter_2"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17827/*"btn_sefilter_2_on"*/;
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
  sub_1C21DDC(&this->fields.callbackFunc, callback);
  FollowerSelectItemListViewManager__SetMode_31781208(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__SetMode_31781208(
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

  if ( (byte_4BD75DA & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_FollowerSelectItemListViewManager_OnMoveEnd__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    sub_1C21E38(&StringLiteral_10133/*"OnMoveEnd"*/);
    sub_1C21E38(&StringLiteral_11527/*"RequestInto"*/);
    byte_4BD75DA = 1;
  }
  if ( mode != 3 )
  {
    this->fields.initMode = mode;
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
    ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
    if ( mode == 1 )
    {
      v11 = &StringLiteral_11527/*"RequestInto"*/;
    }
    else
    {
      if ( mode != 4 )
      {
        if ( mode == 2 )
          FollowerSelectItemListViewManager__RequestListObject_31781960(this, 3, v10);
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
                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
          v17 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(v17, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
            break;
          if ( v15 )
          {
            FollowerSelectItemListViewObject__Init_31782464((FollowerSelectItemListViewObject_o *)Item, 2, v17, v18);
          }
          else
          {
            FollowerSelectItemListViewObject__Init_31782464((FollowerSelectItemListViewObject_o *)Item, 0, v17, v18);
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
            sub_1C21DDC(&ClippingObjectList[1], this);
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
            FollowerSelectItemListViewObject__Init_31779724(
              (FollowerSelectItemListViewObject_o *)ClippingObjectList,
              6,
              v21);
          }
          if ( ++v15 >= v14->fields._size )
            return;
        }
LABEL_31:
        sub_1C22094(ClippingObjectList, v6);
      }
      this->fields.callbackCount = 1;
      v11 = &StringLiteral_10133/*"OnMoveEnd"*/;
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
                                                                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
      if ( !ClippingObjectList )
        break;
      FollowerSelectItemListViewObject__Init_31779724((FollowerSelectItemListViewObject_o *)ClippingObjectList, 5, v9);
      if ( ++v8 >= v7->fields._size )
        return;
    }
    goto LABEL_31;
  }
}


void __fastcall FollowerSelectItemListViewManager__SetMode_31781908(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C21DDC(&this->fields.callbackFunc2, callback);
  FollowerSelectItemListViewManager__SetMode_31781208(this, mode, v6);
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

  if ( (byte_4BD75D7 & 1) == 0 )
  {
    sub_1C21E38(&FollowerSelectItemListViewObject_TypeInfo);
    byte_4BD75D7 = 1;
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
    sub_1C22094(v7, obj);
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
  FollowerSelectItemListViewObject__Init_31779724(
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

  if ( (byte_4BD75E9 & 1) == 0 )
  {
    sub_1C21E38(&ClassButtonControlComponent_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_17834/*"btn_sort_up"*/);
    sub_1C21E38(&StringLiteral_17925/*"btn_txt_up"*/);
    sub_1C21E38(&StringLiteral_17878/*"btn_txt_new"*/);
    sub_1C21E38(&StringLiteral_17868/*"btn_txt_down"*/);
    sub_1C21E38(&StringLiteral_17885/*"btn_txt_old"*/);
    sub_1C21E38(&StringLiteral_17831/*"btn_sort_down"*/);
    byte_4BD75E9 = 1;
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
          v14 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_17885/*"btn_txt_old"*/ : &StringLiteral_17878/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v14, 0LL);
          v15 = this->fields.sort;
          if ( v15 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v16 = (System_String_o **)&StringLiteral_17831/*"btn_sort_down"*/;
              v17 = (System_String_o **)&StringLiteral_17834/*"btn_sort_up"*/;
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
          v18 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_17925/*"btn_txt_up"*/ : &StringLiteral_17868/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v18, 0LL);
          v15 = this->fields.sort;
          if ( v15 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v16 = (System_String_o **)&StringLiteral_17834/*"btn_sort_up"*/;
              v17 = (System_String_o **)&StringLiteral_17831/*"btn_sort_down"*/;
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_39:
    sub_1C22094(sort, v5);
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
  __int64 v9; // x1
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

  if ( (byte_4BD75EC & 1) == 0 )
  {
    sub_1C21E38(&ClassButtonControlComponent_TypeInfo);
    sub_1C21E38(&FollowerSelectItemListViewItem_TypeInfo);
    sub_1C21E38(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem___ctor___77577696);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    byte_4BD75EC = 1;
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
  v8 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
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
                                                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
                                                                0LL);
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
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + v19;
          v8->fields._size = v19 + 1;
          v20[4] = (Il2CppClass *)v15;
          sub_1C21DDC(v20 + 4, v15);
        }
        ++v14;
      }
      if ( size == ++v13 )
        goto LABEL_30;
      itemList = (System_Collections_Generic_List_object__o *)*p_itemList;
    }
    while ( *p_itemList );
LABEL_43:
    sub_1C22094(itemList, v9);
  }
LABEL_30:
  v21 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor_56945064(
    v21,
    (System_Collections_Generic_IEnumerable_T__o *)v8,
    (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_ListViewItem___ctor___77577696);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v21;
  sub_1C21DDC(&this->fields.itemList, v21);
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
  if ( (byte_4BD75ED & 1) == 0 )
  {
    sub_1C21E38(&ClassButtonControlComponent_TypeInfo);
    sub_1C21E38(&FollowerListRequest_TypeInfo);
    sub_1C21E38(&FollowerRecommendSupportListRequest_TypeInfo);
    sub_1C21E38(&FollowerSelectItemListViewManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_25427/*"{0}"*/);
    this = (FollowerSelectItemListViewManager_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD75ED = 1;
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
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
              (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
    sub_1C22094(this, method);
  }
  this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshButtonObject;
  if ( !this )
    goto LABEL_59;
  v7 = UnityEngine_GameObject__GetComponent_object_(
         (UnityEngine_GameObject_o *)this,
         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
                                                        (System_String_o *)StringLiteral_25427/*"{0}"*/,
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

  if ( (byte_4BD75C1 & 1) == 0 )
  {
    sub_1C21E38(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    byte_4BD75C1 = 1;
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
    v8 = sub_1C5D328(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1C22354(v7);
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

  if ( (byte_4BD75C3 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    byte_4BD75C3 = 1;
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
    v8 = sub_1C5D328(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1C22354(v7);
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

  if ( (byte_4BD75C8 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
    sub_1C21E38(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD75C8 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C22094(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1C22094(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C22094(0LL, v10);
      Item = (ListViewItem_o *)FollowerSelectItemListViewObject__GetItem(
                                 (FollowerSelectItemListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C22094(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_42012552((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_1C22094(v14, v15);
          items = v3->fields._items;
          v17 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C22094(v14, v15);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C22094(Item, v13);
        items = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C22094(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v19 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v11;
        sub_1C21DDC(v19 + 4, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4BD75C7 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
    sub_1C21E38(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD75C7 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C22094(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1C22094(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C22094(Component_object, Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C22094(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C21DDC(v14 + 4, v10);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4BD75C2 & 1) == 0 )
  {
    sub_1C21E38(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    byte_4BD75C2 = 1;
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
    v8 = sub_1C5D328(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1C22354(v7);
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

  if ( (byte_4BD75C4 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    byte_4BD75C4 = 1;
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
    v8 = sub_1C5D328(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1C22354(v7);
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
  sub_1C21DDC(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A5B838;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A5B7E0;
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
  if ( (byte_4BD75F6 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&FollowerSelectItemListViewManager_ResultKind_TypeInfo);
    byte_4BD75F6 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(
             FollowerSelectItemListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&result,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1C21DEC(this, v13, callback, object);
}


void __fastcall FollowerSelectItemListViewManager_CallbackFunc__EndInvoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
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

  if ( (byte_4BD75F7 & 1) == 0 )
  {
    sub_1C21E38(&FollowerSelectItemListViewManager___c_TypeInfo);
    byte_4BD75F7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(FollowerSelectItemListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  FollowerSelectItemListViewManager___c_TypeInfo->static_fields->__9 = (struct FollowerSelectItemListViewManager___c_o *)v1;
  sub_1C21DDC(FollowerSelectItemListViewManager___c_TypeInfo->static_fields, v1);
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

  if ( (byte_4BD75F8 & 1) == 0 )
  {
    sub_1C21E38(&ListViewSort_TypeInfo);
    sub_1C21E38(&StringLiteral_6921/*"FollowerSelectEventQuest"*/);
    sub_1C21E38(&StringLiteral_6922/*"FollowerSelectMainQuest"*/);
    byte_4BD75F8 = 1;
  }
  if ( questType )
  {
    if ( questType != 1 )
    {
      v8 = sub_1C21E4C(&System_NotImplementedException_TypeInfo);
      v9 = (System_NotImplementedException_o *)sub_1C22084(v8);
      System_NotImplementedException___ctor(v9, 0LL);
      v10 = sub_1C21E4C(&Method_FollowerSelectItemListViewManager___c___cctor_b__133_0__);
      sub_1C21F60(v9, v10);
    }
    v4 = &StringLiteral_6921/*"FollowerSelectEventQuest"*/;
  }
  else
  {
    v4 = &StringLiteral_6922/*"FollowerSelectMainQuest"*/;
  }
  v5 = (System_String_o *)*v4;
  v6 = (ListViewSort_o *)sub_1C22084(ListViewSort_TypeInfo);
  ListViewSort___ctor_42029876(v6, v5, 11, 0, 0LL);
  return v6;
}