void __fastcall FollowerSelectItemListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerSelectItemListViewManager___c_c *v5; // x0
  Il2CppObject *v6; // x19
  System_Func_T__TResult__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8

  if ( (byte_48E6AC2 & 1) == 0 )
  {
    sub_1B00CCC(&FollowerSelectItemListViewManager_TypeInfo, v1);
    sub_1B00CCC(&System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo, v2);
    sub_1B00CCC(&Method_FollowerSelectItemListViewManager___c___cctor_b__124_0__, v3);
    sub_1B00CCC(&FollowerSelectItemListViewManager___c_TypeInfo, v4);
    byte_48E6AC2 = 1;
  }
  v5 = FollowerSelectItemListViewManager___c_TypeInfo;
  if ( !FollowerSelectItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager___c_TypeInfo);
    v5 = FollowerSelectItemListViewManager___c_TypeInfo;
  }
  v6 = (Il2CppObject *)v5->static_fields->__9;
  v7 = (System_Func_T__TResult__o *)sub_1B00F18(System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo);
  System_Func_Int32Enum__object____ctor(v7, v6, Method_FollowerSelectItemListViewManager___c___cctor_b__124_0__, 0LL);
  FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT = (struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)v7;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)FollowerSelectItemListViewManager_TypeInfo->static_fields,
    (int32_t)v7,
    v8,
    v9);
  static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->lastSelectedQuestId = -1LL;
  static_fields->REFRESH_DARK_COLOR = (struct UnityEngine_Color_o)xmmword_B70F20;
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

  if ( (byte_48E6A9B & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, method);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1B00CCC(&StringLiteral_17238/*"btn_bg_12"*/, v4);
    sub_1B00CCC(&StringLiteral_17291/*"btn_sefilter_2"*/, v5);
    sub_1B00CCC(&StringLiteral_17428/*"buttontxt_formation_19"*/, v6);
    byte_48E6A9B = 1;
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
  AtlasManager__SetEventSprite(changeSkillButtonSprite, (System_String_o *)StringLiteral_17428/*"buttontxt_formation_19"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.bonusFilterSprite, (System_String_o *)StringLiteral_17291/*"btn_sefilter_2"*/, 0LL);
  changeSkillButton = (UnityEngine_Component_o *)this->fields.bonusFilterSprite;
  if ( !changeSkillButton
    || (changeSkillButton = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))changeSkillButton->klass[2]._1.typeMetadataHandle)(
                                                         changeSkillButton,
                                                         changeSkillButton->klass[2]._1.interopData),
        !sortKindButton)
    || (Component_object = UnityEngine_Component__GetComponent_object_(
                             sortKindButton,
                             (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        changeSkillButton = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(
                                                         (UISprite_o *)Component_object,
                                                         (System_String_o *)StringLiteral_17238/*"btn_bg_12"*/,
                                                         0LL),
        !Component_object) )
  {
LABEL_11:
    sub_1B00F28(changeSkillButton, method);
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
    sub_1B00F28(classButtonControl, *(_QWORD *)&classPos);
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

  if ( (byte_48E6AB5 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isResult);
    byte_48E6AB5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v6);
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
  System_Collections_Generic_List_object__o *v54; // x25
  int32_t v55; // w2
  int32_t v56; // w3
  System_Collections_Generic_List_object__o *v57; // x25
  int32_t v58; // w2
  int32_t v59; // w3
  __int64 ReturnTypeByQuestId; // x0
  __int64 v61; // x1
  FollowerSelectItemListViewManager_c *v62; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct ListViewSort_o *v64; // x0
  struct ListViewSort_o **p_sort; // x27
  int32_t v66; // w2
  int32_t v67; // w3
  const MethodInfo *v68; // x4
  int32_t InitialDisplayClass; // w0
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
  System_Int32_array *OngoingQuestTargetEventIds; // x26
  EventUpValSetupInfo_o *v72; // x25
  int32_t v73; // w2
  int32_t v74; // w3
  __int64 v75; // x8
  __int64 v76; // x25
  unsigned __int64 v77; // x20
  int32_t v78; // w0
  ClassButtonControlComponent_o *classButtonControl; // x25
  FollowerSelectItemListViewManager_o *v80; // x20
  ClassButtonControlComponent_CallbackFunc_o *v81; // x27
  ClassButtonControlComponent_o *v82; // x25
  const MethodInfo *v83; // x2
  QuestPhaseEntity_o *v84; // x19
  __int64 v85; // x0
  __int64 v86; // x0
  Il2CppObject *MasterData_object; // x22
  FollowerInfo_array *QuestFollowerList; // x23
  int v89; // w20
  QuestRestrictionInfo_o *v90; // x8
  bool IsMyServantOrNpcRestriction_39169208; // w0
  bool v92; // w24
  BalanceConfig_c *v93; // x0
  int32_t ClassBoardReleaseQuestId; // w25
  bool IsQuestClear_36399468; // w25
  __int64 v96; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v97; // x28
  unsigned __int64 v98; // x21
  bool v99; // w10
  FollowerInfo_o **m_Items; // x25
  FollowerInfo_o *v101; // x26
  __int64 v102; // x27
  int32_t v103; // w0
  System_Int32_array *NpcServantIndividuality; // x1
  QuestRestrictionInfo_o *v105; // x0
  bool IsRecommendedFollower; // w22
  __int64 v107; // x25
  __int64 v108; // x28
  int32_t v109; // w0
  System_Collections_Generic_List_object__o *v110; // x27
  char v111; // w20
  ClassBoardClassMaster_o *v112; // x20
  int32_t v113; // w0
  ServantLeaderInfo_o *ServantLeaderInfo; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v115; // x25
  __int64 v116; // x28
  __int64 v117; // x29
  int32_t ClassBoardBaseId; // w24
  Il2CppObject *Master_object; // x25
  __int64 v120; // x23
  Il2CppObject *v121; // x25
  int32_t v122; // w0
  int32_t v123; // w2
  int32_t v124; // w3
  System_Int32_array *OpenClassIdArrayFromBaseId; // x0
  int32_t v126; // w2
  int32_t v127; // w3
  int32_t v128; // w2
  int32_t v129; // w3
  struct System_Object_array *items; // x8
  _QWORD *v131; // x9
  __int64 size; // x10
  Il2CppClass **v133; // x0
  System_Object_array *v134; // x0
  int32_t v135; // w2
  int32_t v136; // w3
  FollowerSelectItemListViewManager_c *v137; // x0
  bool v138; // w29
  int32_t v139; // w25
  EventUpValSetupInfo_o *setupInfo; // x22
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary; // x20
  bool isServantEquipBonusFilterEnable; // w23
  bool isServantBonusFilterEnable; // w24
  bool isBonusFilterEnable; // w28
  FollowerSelectItemListViewItem_o *v145; // x27
  int32_t v146; // w2
  int32_t v147; // w3
  __int64 v148; // x8
  _QWORD *v149; // x9
  __int64 v150; // x10
  __int64 v151; // x8
  int32_t v152; // w2
  int32_t v153; // w3
  __int64 v154; // x8
  _QWORD *v155; // x9
  __int64 v156; // x10
  __int64 v157; // x8
  int v158; // w20
  bool v159; // w8
  Il2CppClass *klass; // x23
  int v161; // w8
  unsigned int v162; // w26
  void **v163; // x8
  Il2CppObject *v164; // x0
  Il2CppObject *v165; // x25
  BalanceConfig_c *v166; // x0
  struct BalanceConfig_StaticFields *v167; // x9
  int32_t v168; // w25
  int32_t v169; // w27
  __int64 v170; // x10
  int32_t deckPriority; // w25
  unsigned __int64 v172; // x21
  System_Collections_Generic_Dictionary_int__int__o *v173; // x19
  int32_t v174; // w22
  bool v175; // w29
  bool v176; // w24
  bool v177; // w27
  FollowerSelectItemListViewItem_o *v178; // x28
  int32_t v179; // w2
  int32_t v180; // w3
  __int64 v181; // x8
  _QWORD *v182; // x9
  __int64 v183; // x10
  __int64 v184; // x8
  struct BalanceConfig_StaticFields *v185; // x8
  int32_t v186; // w25
  int32_t v187; // w28
  int32_t v188; // w28
  unsigned __int64 v189; // x22
  int32_t v190; // w21
  Il2CppClass *v191; // x21
  EventUpValSetupInfo_o *v192; // x23
  bool v193; // w26
  System_Collections_Generic_Dictionary_int__int__o *v194; // x19
  int v195; // w24
  bool v196; // w27
  bool v197; // w29
  FollowerSelectItemListViewItem_o *v198; // x25
  int32_t v199; // w2
  int32_t v200; // w3
  __int64 v201; // x8
  _QWORD *v202; // x9
  __int64 v203; // x10
  __int64 v204; // x8
  Il2CppClass *v205; // x24
  unsigned __int64 namespaze; // x8
  unsigned __int64 v207; // x28
  __int64 v208; // x9
  __int64 v209; // x9
  void **v210; // x8
  FollowerInfo_o *v211; // x8
  Il2CppObject *v212; // x0
  __int64 v213; // x21
  BalanceConfig_c *v214; // x0
  struct BalanceConfig_StaticFields *v215; // x9
  int32_t FixEventSupportDeckNum; // w25
  int32_t FixMainSupportDeckNum; // w26
  int32_t v218; // w27
  unsigned __int64 v219; // x22
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x23
  int32_t v221; // w29
  bool v222; // w21
  bool v223; // w26
  bool v224; // w19
  FollowerSelectItemListViewItem_o *v225; // x25
  int32_t v226; // w2
  int32_t v227; // w3
  __int64 v228; // x8
  _QWORD *v229; // x9
  __int64 v230; // x10
  __int64 v231; // x8
  struct BalanceConfig_StaticFields *v232; // x8
  int32_t v233; // w25
  int32_t v234; // w26
  int32_t v235; // w27
  unsigned __int64 v236; // x23
  int32_t v237; // w22
  EventUpValSetupInfo_o *v238; // x19
  int32_t v239; // w21
  bool v240; // w28
  System_Collections_Generic_Dictionary_int__int__o *v241; // x24
  int v242; // w22
  bool v243; // w29
  bool v244; // w26
  FollowerSelectItemListViewItem_o *v245; // x25
  int32_t v246; // w2
  int32_t v247; // w3
  __int64 v248; // x8
  _QWORD *v249; // x9
  __int64 v250; // x10
  __int64 v251; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v253; // x2
  FollowerSelectItemListViewManager_c *v254; // x0
  const MethodInfo *v255; // x1
  struct UIScrollView_o *scrollView; // x8
  FollowerSelectItemListViewManager_o *v257; // x0
  int32_t v258; // w1
  int32_t v259; // w2
  bool v260; // w3
  const MethodInfo *v261; // x4
  int32_t supportDeckId; // [xsp+38h] [xbp-158h]
  int32_t supportDeckIda; // [xsp+38h] [xbp-158h]
  const MethodInfo *v264; // [xsp+58h] [xbp-138h]
  QuestPhaseEntity_o *v265; // [xsp+68h] [xbp-128h]
  unsigned int v266; // [xsp+74h] [xbp-11Ch]
  bool phaseCnta; // [xsp+78h] [xbp-118h]
  int32_t keya; // [xsp+7Ch] [xbp-114h]
  bool v271; // [xsp+80h] [xbp-110h]
  __int64 v272; // [xsp+80h] [xbp-110h]
  __int64 v273; // [xsp+80h] [xbp-110h]
  struct System_Collections_Generic_List_ListViewItem__o **p_originalItemList; // [xsp+88h] [xbp-108h]
  FollowerInfo_array *v275; // [xsp+90h] [xbp-100h]
  unsigned int v276; // [xsp+90h] [xbp-100h]
  Il2CppClass *v277; // [xsp+90h] [xbp-100h]
  Il2CppObject *v278; // [xsp+98h] [xbp-F8h]
  __int64 v279; // [xsp+98h] [xbp-F8h]
  unsigned __int64 v280; // [xsp+98h] [xbp-F8h]
  bool isReleasedClassBoard; // [xsp+A0h] [xbp-F0h]
  EventUpValSetupInfo_o *v282; // [xsp+A0h] [xbp-F0h]
  EventUpValSetupInfo_o *v283; // [xsp+A0h] [xbp-F0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v284; // [xsp+A8h] [xbp-E8h]
  FollowerInfo_o **v285; // [xsp+A8h] [xbp-E8h]
  __int64 v286; // [xsp+A8h] [xbp-E8h]
  FollowerInfo_o **v287; // [xsp+B0h] [xbp-E0h]
  __int64 v288; // [xsp+B0h] [xbp-E0h]
  FollowerInfo_o **v289; // [xsp+B0h] [xbp-E0h]
  int32_t pos; // [xsp+B8h] [xbp-D8h]
  EventUpValSetupInfo_o *posc; // [xsp+B8h] [xbp-D8h]
  int32_t posa; // [xsp+B8h] [xbp-D8h]
  __int64 posb; // [xsp+B8h] [xbp-D8h]
  struct System_Collections_Generic_List_ListViewItem__o **p_mixItemList; // [xsp+C0h] [xbp-D0h]
  _BOOL4 followerClassId; // [xsp+E0h] [xbp-B0h]
  FollowerInfo_o *followerClassIdb; // [xsp+E0h] [xbp-B0h]
  FollowerInfo_o *followerClassIdc; // [xsp+E0h] [xbp-B0h]
  FollowerInfo_o *followerClassIdd; // [xsp+E0h] [xbp-B0h]
  int32_t followerClassIda; // [xsp+E0h] [xbp-B0h]
  int32_t index; // [xsp+E8h] [xbp-A8h]
  int32_t indexa; // [xsp+E8h] [xbp-A8h]
  int32_t indexb; // [xsp+E8h] [xbp-A8h]
  int32_t indexc; // [xsp+E8h] [xbp-A8h]
  FollowerInfo_o *indexd; // [xsp+E8h] [xbp-A8h]
  Il2CppObject *v310; // [xsp+F8h] [xbp-98h] BYREF
  Il2CppObject *v311; // [xsp+100h] [xbp-90h] BYREF
  UserClassBoardSquareEntity_o *v312; // [xsp+108h] [xbp-88h] BYREF
  Il2CppObject *v313; // [xsp+110h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+118h] [xbp-78h] BYREF
  Il2CppObject *v315; // [xsp+120h] [xbp-70h] BYREF
  NpcFollowerEntity_o *v316; // [xsp+128h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v317; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v318; // 0:x0.16

  if ( (byte_48E6A9D & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, *(_QWORD *)&questId);
    sub_1B00CCC(&ClassButtonControlComponent_CallbackFunc_TypeInfo, v8);
    sub_1B00CCC(&ClassBoardInfo_TypeInfo, v9);
    sub_1B00CCC(&CondType_TypeInfo, v10);
    sub_1B00CCC(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v11);
    sub_1B00CCC(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___, v12);
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestMaster___, v13);
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v14);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserFollowMaster___, v15);
    sub_1B00CCC(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v16);
    sub_1B00CCC(&Method_DataManager_GetMaster_EventQuestMaster___, v17);
    sub_1B00CCC(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v18);
    sub_1B00CCC(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, v19);
    sub_1B00CCC(&Method_DataManager_GetMaster_ServantMaster___, v20);
    sub_1B00CCC(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, v21);
    sub_1B00CCC(&Method_DataManager_GetMaster_UserFollowerMaster___, v22);
    sub_1B00CCC(&DataManager_TypeInfo, v23);
    sub_1B00CCC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v24);
    sub_1B00CCC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v25);
    sub_1B00CCC(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v26);
    sub_1B00CCC(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v27);
    sub_1B00CCC(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v28);
    sub_1B00CCC(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v29);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Contains_int___, v30);
    sub_1B00CCC(&EventUpValSetupInfo_TypeInfo, v31);
    sub_1B00CCC(&FollowerSelectItemListViewItem_TypeInfo, v32);
    sub_1B00CCC(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v33);
    sub_1B00CCC(&FollowerSelectItemListViewManager_TypeInfo, v34);
    sub_1B00CCC(&int___TypeInfo, v35);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v36);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ClassBoardInfo__Add__, v37);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__, v38);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ClassBoardInfo___ctor__, v39);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v40);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v41);
    sub_1B00CCC(&System_Collections_Generic_List_ListViewItem__TypeInfo, v42);
    sub_1B00CCC(&System_Collections_Generic_List_ClassBoardInfo__TypeInfo, v43);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v44);
    sub_1B00CCC(&System_Math_TypeInfo, v45);
    sub_1B00CCC(&NetworkManager_TypeInfo, v46);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v47);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v48);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v49);
    sub_1B00CCC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v50);
    sub_1B00CCC(&StringLiteral_3271/*"BonusFilterEventId"*/, v51);
    sub_1B00CCC(&StringLiteral_11582/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v52);
    sub_1B00CCC(&StringLiteral_1/*""*/, v53);
    byte_48E6A9D = 1;
  }
  v315 = 0LL;
  v316 = 0LL;
  v313 = 0LL;
  entity = 0LL;
  v311 = 0LL;
  v312 = 0LL;
  v310 = 0LL;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    questPhase,
    friendPointUpVal);
  v54 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v54,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.mixItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v54;
  p_mixItemList = &this->fields.mixItemList;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.mixItemList, (int32_t)v54, v55, v56);
  v57 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v57,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.originalItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v57;
  p_originalItemList = &this->fields.originalItemList;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.originalItemList, (int32_t)v57, v58, v59);
  ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0LL);
  v266 = ReturnTypeByQuestId;
  v62 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v62 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v62->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT )
    goto LABEL_296;
  v64 = (struct ListViewSort_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))LIST_VIEW_SORT->fields.m_target)(
                                   LIST_VIEW_SORT->fields.original_method_info,
                                   v266,
                                   *(_QWORD *)&LIST_VIEW_SORT->fields.extra_arg);
  this->fields.sort = v64;
  p_sort = &this->fields.sort;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)v64, v66, v67);
  if ( !this->fields.sort )
    goto LABEL_296;
  InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                          this,
                          questId,
                          questPhase,
                          this->fields.sort->fields.isRequestLoad,
                          v68);
  static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  static_fields->followerClassId = InitialDisplayClass;
  static_fields->lastSelectedQuestId = questId;
  static_fields->lastSelectedQuestPhase = questPhase;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_296;
  OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                 (EventQuestMaster_o *)ReturnTypeByQuestId,
                                 questId,
                                 questPhase,
                                 0LL,
                                 0LL);
  v72 = (EventUpValSetupInfo_o *)sub_1B00F18(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_37684336(v72, OngoingQuestTargetEventIds, 0, questId, questPhase, 0LL);
  this->fields.setupInfo = v72;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)v72, v73, v74);
  if ( !OngoingQuestTargetEventIds )
    goto LABEL_296;
  if ( *(_QWORD *)&OngoingQuestTargetEventIds->max_length )
  {
    ReturnTypeByQuestId = (__int64)UnityEngine_PlayerPrefs__GetString_68035932(
                                     (System_String_o *)StringLiteral_3271/*"BonusFilterEventId"*/,
                                     0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_296;
    if ( *(int *)(ReturnTypeByQuestId + 16) < 1 )
      goto LABEL_20;
    ReturnTypeByQuestId = (__int64)System_String__Split((System_String_o *)ReturnTypeByQuestId, 0x2Cu, 0, 0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_296;
    v75 = *(_QWORD *)(ReturnTypeByQuestId + 24);
    v76 = ReturnTypeByQuestId;
    if ( (int)v75 < 1 )
    {
LABEL_20:
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_296;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 18, 0, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_296;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 19, 0, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_296;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 20, 0, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_296;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 40, 1, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_296;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 41, 1, 0LL);
    }
    else
    {
      v77 = 0LL;
      while ( 1 )
      {
        if ( v77 >= (unsigned int)v75 )
          goto LABEL_297;
        v78 = System_Int32__Parse(*(System_String_o **)(v76 + 32 + 8 * v77), 0LL);
        ReturnTypeByQuestId = System_Linq_Enumerable__Contains_int_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)OngoingQuestTargetEventIds,
                                v78,
                                (const MethodInfo_2D7A61C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (ReturnTypeByQuestId & 1) != 0 )
          break;
        LODWORD(v75) = *(_DWORD *)(v76 + 24);
        if ( (__int64)++v77 >= (int)v75 )
          goto LABEL_20;
      }
    }
  }
  ReturnTypeByQuestId = (__int64)*p_sort;
  if ( !*p_sort )
    goto LABEL_296;
  ListViewSort__Load((ListViewSort_o *)ReturnTypeByQuestId, 0LL);
  classButtonControl = this->fields.classButtonControl;
  v80 = this;
  v81 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1B00F18(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v81,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_296;
  ClassButtonControlComponent__init(classButtonControl, v81, questId, questPhase, 0, 0LL);
  this->fields.isInput = 0;
  v82 = this->fields.classButtonControl;
  ReturnTypeByQuestId = (__int64)FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  if ( !v82 )
    goto LABEL_296;
  ClassButtonControlComponent__setCursor(
    v82,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, OngoingQuestTargetEventIds, v83);
  ReturnTypeByQuestId = (__int64)this->fields.bonusFilterKindButton;
  if ( !ReturnTypeByQuestId )
    goto LABEL_296;
  ReturnTypeByQuestId = (__int64)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)ReturnTypeByQuestId,
                                   0LL);
  if ( !ReturnTypeByQuestId )
    goto LABEL_296;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)ReturnTypeByQuestId,
    this->fields.isBonusFilterEnable,
    0LL);
  if ( this->fields.isBonusFilterEnable )
  {
    ReturnTypeByQuestId = (__int64)this->fields.bonusFilterKindLabel;
    if ( !ReturnTypeByQuestId )
      goto LABEL_296;
    UILabel__set_text((UILabel_o *)ReturnTypeByQuestId, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  this->fields.isRefreshBtnHide = 0;
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId
    || (ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0 )
  {
LABEL_296:
    sub_1B00F28(ReturnTypeByQuestId, v61);
  }
  v84 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)ReturnTypeByQuestId, questId, questPhase, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v84 )
    goto LABEL_288;
  v85 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v85 + 309) & 1) == 0 )
    v85 = sub_1B52BA8(v85);
  v86 = *(_QWORD *)(*(_QWORD *)(v85 + 192) + 16LL);
  if ( (*(_BYTE *)(v86 + 309) & 1) == 0 )
    v86 = sub_1B52BA8(v86);
  ReturnTypeByQuestId = **(_QWORD **)(v86 + 184);
  if ( !ReturnTypeByQuestId )
    goto LABEL_296;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ReturnTypeByQuestId,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_296;
  ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_296;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)ReturnTypeByQuestId,
                        questId,
                        questPhase,
                        0LL);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_296;
  v89 = *(_DWORD *)(ReturnTypeByQuestId + 48);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_296;
  pos = *(_DWORD *)(ReturnTypeByQuestId + 52);
  v90 = questRestrictionInfo;
  if ( v89 < 1 )
  {
    v92 = 0;
  }
  else
  {
    if ( !questRestrictionInfo )
    {
      v92 = 0;
      followerClassId = 0;
      goto LABEL_56;
    }
    IsMyServantOrNpcRestriction_39169208 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_39169208(
                                             questRestrictionInfo,
                                             pos,
                                             0LL);
    v90 = questRestrictionInfo;
    v92 = IsMyServantOrNpcRestriction_39169208;
  }
  followerClassId = 0;
  if ( v90 && v89 <= 0 )
    followerClassId = QuestRestrictionInfo__IsMyServantOrNpcRestriction(v90, 0LL);
LABEL_56:
  v93 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v93 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v93->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_36399468 = CondType__IsQuestClear_36399468(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  if ( !QuestFollowerList )
    goto LABEL_296;
  v96 = *(_QWORD *)&QuestFollowerList->max_length;
  v80 = this;
  if ( (int)v96 >= 1 )
  {
    v97 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
    v98 = 0LL;
    v99 = IsQuestClear_36399468;
    m_Items = QuestFollowerList->m_Items;
    index = 0;
    isReleasedClassBoard = v99;
    v275 = QuestFollowerList;
    v278 = MasterData_object;
    v271 = v92;
    v284 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
    v287 = QuestFollowerList->m_Items;
    do
    {
      if ( v98 >= (unsigned int)v96 )
        goto LABEL_297;
      v101 = m_Items[v98];
      if ( v92 )
      {
        if ( !questRestrictionInfo )
          goto LABEL_296;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
        if ( !v101 )
          goto LABEL_296;
        ReturnTypeByQuestId = (__int64)FollowerInfo__getServantLeaderInfo(v101, 0, ReturnTypeByQuestId, 0LL);
        if ( ReturnTypeByQuestId )
        {
          v102 = ReturnTypeByQuestId;
          ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !ReturnTypeByQuestId )
            goto LABEL_296;
          ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                           (DataManager_o *)ReturnTypeByQuestId,
                                           (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
          if ( !ReturnTypeByQuestId )
            goto LABEL_296;
          ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                  &entity,
                                  v101->fields.npcFollowerSvtId,
                                  (const MethodInfo_2FE6C4C *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
          if ( (ReturnTypeByQuestId & 1) != 0 )
          {
            v103 = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
            NpcServantIndividuality = FollowerInfo__GetNpcServantIndividuality(v101, 0, v103, 0LL);
            v105 = questRestrictionInfo;
            goto LABEL_74;
          }
          if ( !v97 )
            goto LABEL_296;
          if ( DataMasterBase_object__object__long___TryGetEntity(
                 v97,
                 &v313,
                 v101->fields.npcFollowerSvtId,
                 (const MethodInfo_2FE6C4C *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
          {
            ReturnTypeByQuestId = (__int64)v313;
            if ( !v313 )
              goto LABEL_296;
            if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v313, 0LL) )
            {
              ReturnTypeByQuestId = (__int64)v313;
              if ( !v313 )
                goto LABEL_296;
              NpcServantIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                          (NpcServantFollowerEntity_o *)v313,
                                          0LL);
              v105 = questRestrictionInfo;
LABEL_74:
              ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality_39172216(
                                      v105,
                                      NpcServantIndividuality,
                                      pos,
                                      0LL);
              if ( (ReturnTypeByQuestId & 1) != 0 )
                goto LABEL_139;
              goto LABEL_77;
            }
          }
          v108 = *(_QWORD *)(v102 + 48);
          v107 = *(_QWORD *)(v102 + 56);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v317.fields.currentCryptoKey = v108;
          *(_QWORD *)&v317.fields.fakeValue = v107;
          v109 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v317, 0LL);
          ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                  questRestrictionInfo,
                                  v109,
                                  *(_DWORD *)(v102 + 64),
                                  *(_DWORD *)(v102 + 164),
                                  pos,
                                  0,
                                  0LL);
          v97 = v284;
          m_Items = v287;
          if ( (ReturnTypeByQuestId & 1) != 0 )
            goto LABEL_139;
        }
      }
      else if ( !v101 )
      {
        goto LABEL_296;
      }
LABEL_77:
      if ( !v101->fields.isFixedNpc && (!followerClassId || !v101->fields.isMySvtOrNpc) )
      {
        if ( !MasterData_object )
          goto LABEL_296;
        if ( NpcFollowerMaster__TryGetEntity(
               (NpcFollowerMaster_o *)MasterData_object,
               &v316,
               v101->fields.userId,
               questId,
               questPhase,
               0LL) )
        {
          ReturnTypeByQuestId = (__int64)v316;
          if ( !v316 )
            goto LABEL_296;
          IsRecommendedFollower = NpcFollowerEntity__IsRecommendedFollower(v316, 0LL);
        }
        else
        {
          IsRecommendedFollower = 0;
        }
        v110 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_ClassBoardInfo__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v110,
          (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
        if ( !v97 )
          goto LABEL_296;
        ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetEntity(
                                v97,
                                &v315,
                                v101->fields.npcFollowerSvtId,
                                (const MethodInfo_2FE6C4C *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
        if ( (ReturnTypeByQuestId & 1) != 0 )
        {
          if ( !v315 )
            goto LABEL_296;
          ReturnTypeByQuestId = NpcServantFollowerEntity__IsNotClassBoard((int32_t)v315[7].monitor, 0LL);
          if ( (ReturnTypeByQuestId & 1) != 0
            || (ReturnTypeByQuestId = QuestPhaseEntity__IsNotClassBoard(v84, 0LL), (ReturnTypeByQuestId & 1) != 0) )
          {
            v111 = 1;
LABEL_122:
            if ( !v110 )
              goto LABEL_296;
LABEL_123:
            v134 = System_Collections_Generic_List_object___ToArray(
                     v110,
                     (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
            v101->fields.userClassBoardInfo = (struct ClassBoardInfo_array *)v134;
            sub_1B00C70(
              (ServantStatusBattleListViewItem_o *)&v101->fields.userClassBoardInfo,
              (int32_t)v134,
              v135,
              v136);
            v137 = FollowerSelectItemListViewManager_TypeInfo;
            v138 = IsRecommendedFollower;
            if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
              v137 = FollowerSelectItemListViewManager_TypeInfo;
            }
            v139 = v137->static_fields->followerClassId;
            setupInfo = this->fields.setupInfo;
            if ( (v111 & 1) != 0 )
              classBoardMaxNumDictionary = 0LL;
            else
              classBoardMaxNumDictionary = this->fields.classBoardMaxDictionary;
            isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
            isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
            isBonusFilterEnable = this->fields.isBonusFilterEnable;
            v145 = (FollowerSelectItemListViewItem_o *)sub_1B00F18(FollowerSelectItemListViewItem_TypeInfo);
            FollowerSelectItemListViewItem___ctor(
              v145,
              index,
              0,
              v101,
              v139,
              friendPointUpVal,
              friendPointUpMaxVal,
              friendPointCampaignEntityList,
              isBonusFilterEnable,
              isServantBonusFilterEnable,
              isServantEquipBonusFilterEnable,
              v138,
              setupInfo,
              questRestrictionInfo,
              0,
              0,
              0,
              classBoardMaxNumDictionary,
              isReleasedClassBoard,
              v264);
            ReturnTypeByQuestId = (__int64)*p_mixItemList;
            if ( !*p_mixItemList )
              goto LABEL_296;
            v148 = *(_QWORD *)(ReturnTypeByQuestId + 16);
            v80 = this;
            QuestFollowerList = v275;
            MasterData_object = v278;
            v92 = v271;
            v149 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            m_Items = v287;
            ++*(_DWORD *)(ReturnTypeByQuestId + 28);
            if ( !v148 )
              goto LABEL_296;
            v150 = *(int *)(ReturnTypeByQuestId + 24);
            v97 = v284;
            if ( (unsigned int)v150 >= *(_DWORD *)(v148 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                (Il2CppObject *)v145,
                *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
            }
            else
            {
              v151 = v148 + 8 * v150;
              *(_DWORD *)(ReturnTypeByQuestId + 24) = v150 + 1;
              *(_QWORD *)(v151 + 32) = v145;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)(v151 + 32), (int32_t)v145, v146, v147);
            }
            ReturnTypeByQuestId = (__int64)*p_originalItemList;
            if ( !*p_originalItemList )
              goto LABEL_296;
            v154 = *(_QWORD *)(ReturnTypeByQuestId + 16);
            v155 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++*(_DWORD *)(ReturnTypeByQuestId + 28);
            if ( !v154 )
              goto LABEL_296;
            v156 = *(int *)(ReturnTypeByQuestId + 24);
            if ( (unsigned int)v156 >= *(_DWORD *)(v154 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                (Il2CppObject *)v145,
                *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v155[4] + 192LL) + 112LL));
            }
            else
            {
              v157 = v154 + 8 * v156;
              *(_DWORD *)(ReturnTypeByQuestId + 24) = v156 + 1;
              *(_QWORD *)(v157 + 32) = v145;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)(v157 + 32), (int32_t)v145, v152, v153);
            }
            ++index;
            goto LABEL_139;
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
          if ( !questRestrictionInfo )
            goto LABEL_296;
          v112 = (ClassBoardClassMaster_o *)ReturnTypeByQuestId;
          v113 = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
          ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v101, 0, v113, 0LL);
          ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ServantMaster___);
          if ( !ServantLeaderInfo )
            goto LABEL_296;
          v115 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
          v117 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
          v116 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v318.fields.currentCryptoKey = v117;
          *(_QWORD *)&v318.fields.fakeValue = v116;
          ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v318, 0LL);
          if ( !v115 )
            goto LABEL_296;
          ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                           v115,
                                           ReturnTypeByQuestId,
                                           (const MethodInfo_2FE6A4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !ReturnTypeByQuestId || !v112 )
            goto LABEL_296;
          ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(
                               v112,
                               *(_DWORD *)(ReturnTypeByQuestId + 80),
                               0LL);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          ReturnTypeByQuestId = NetworkManager__get_UserId(0LL);
          if ( !Master_object )
            goto LABEL_296;
          ReturnTypeByQuestId = UserClassBoardSquareMaster__TryGetEntity(
                                  (UserClassBoardSquareMaster_o *)Master_object,
                                  &v312,
                                  ReturnTypeByQuestId,
                                  ClassBoardBaseId,
                                  0LL);
          if ( (ReturnTypeByQuestId & 1) != 0 )
          {
            v120 = sub_1B00F18(ClassBoardInfo_TypeInfo);
            ClassBoardInfo___ctor((ClassBoardInfo_o *)v120, 0LL);
            if ( !v120 )
              goto LABEL_296;
            *(_DWORD *)(v120 + 16) = ClassBoardBaseId;
            if ( !v312 )
              goto LABEL_296;
            ReturnTypeByQuestId = (__int64)v312->fields.classBoardSquareIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_296;
            v121 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
            *(_QWORD *)(v120 + 24) = sub_1B00E08(v121, int___TypeInfo);
            v122 = sub_1B00E08(v121, int___TypeInfo);
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v120 + 24), v122, v123, v124);
            OpenClassIdArrayFromBaseId = ClassBoardClassMaster__GetOpenClassIdArrayFromBaseId(
                                           v112,
                                           ClassBoardBaseId,
                                           0LL);
            *(_QWORD *)(v120 + 32) = OpenClassIdArrayFromBaseId;
            sub_1B00C70(
              (ServantStatusBattleListViewItem_o *)(v120 + 32),
              (int32_t)OpenClassIdArrayFromBaseId,
              v126,
              v127);
            if ( !v110 )
              goto LABEL_296;
            items = v110->fields._items;
            v131 = Method_System_Collections_Generic_List_ClassBoardInfo__Add__;
            ++v110->fields._version;
            if ( !items )
              goto LABEL_296;
            size = v110->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v110,
                (Il2CppObject *)v120,
                *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
            }
            else
            {
              v133 = &items->obj.klass + size;
              v110->fields._size = size + 1;
              v133[4] = (Il2CppClass *)v120;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)(v133 + 4), v120, v128, v129);
            }
            v111 = 0;
            goto LABEL_123;
          }
        }
        v111 = 0;
        goto LABEL_122;
      }
LABEL_139:
      LODWORD(v96) = QuestFollowerList->max_length;
      ++v98;
    }
    while ( (__int64)v98 < (int)v96 );
  }
  if ( questRestrictionInfo && QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL) )
  {
    ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_296;
    v158 = *(_DWORD *)(ReturnTypeByQuestId + 48);
    ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_296;
    v159 = v158 >= 1
        && !QuestRestrictionInfo__IsSelectableNormalSupport(
              questRestrictionInfo,
              *(_DWORD *)(ReturnTypeByQuestId + 52),
              0LL);
    v80 = this;
  }
  else
  {
    v159 = 0;
  }
  v80->fields.isRefreshBtnHide = v159;
  if ( v159 || v84->fields.isNpcOnly )
    goto LABEL_288;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_296;
  ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                          &v311,
                          (const MethodInfo_2FE6CD4 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
  if ( (ReturnTypeByQuestId & 1) == 0 )
    goto LABEL_211;
  if ( !v311 )
    goto LABEL_296;
  klass = v311[1].klass;
  if ( !klass || (v161 = (int)klass->_1.namespaze, v161 < 1) )
  {
LABEL_211:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_296;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v310,
                            (const MethodInfo_2FE6CD4 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v310 )
        goto LABEL_296;
      v205 = v310[1].klass;
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_296;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !ReturnTypeByQuestId )
        goto LABEL_296;
      ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                       questId,
                                       (const MethodInfo_2FE6A4C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_296;
      phaseCnta = QuestEntity__HasFlag_38221784((QuestEntity_o *)ReturnTypeByQuestId, 0x8000000LL, questPhase, 0LL);
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_296;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserFollowMaster___);
      v265 = (QuestPhaseEntity_o *)ReturnTypeByQuestId;
      if ( !v205 )
        goto LABEL_296;
      namespaze = (unsigned __int64)v205->_1.namespaze;
      if ( (int)namespaze >= 1 )
      {
        v207 = 0LL;
        keya = 0;
        v277 = v205;
        do
        {
          namespaze = (unsigned int)namespaze;
          if ( phaseCnta )
          {
            if ( v207 >= (unsigned int)namespaze )
              goto LABEL_297;
            v208 = *((_QWORD *)&v205->_1.byval_arg.data + v207);
            if ( !v208 )
              goto LABEL_296;
            if ( *(_DWORD *)(v208 + 36) == 5 )
            {
              ReturnTypeByQuestId = (__int64)v265;
              if ( !v265 )
                goto LABEL_296;
              ReturnTypeByQuestId = UserFollowMaster__IsFollowUser(
                                      (UserFollowMaster_o *)v265,
                                      *(_QWORD *)(v208 + 16),
                                      0LL);
              if ( (ReturnTypeByQuestId & 1) == 0 )
                goto LABEL_287;
              namespaze = LODWORD(v205->_1.namespaze);
            }
          }
          else
          {
            if ( v207 >= (unsigned int)namespaze )
              goto LABEL_297;
            v209 = *((_QWORD *)&v205->_1.byval_arg.data + v207);
            if ( !v209 )
              goto LABEL_296;
            if ( *(_DWORD *)(v209 + 36) == 5 )
              goto LABEL_287;
          }
          if ( v207 >= namespaze )
            goto LABEL_297;
          v210 = &v205->_1.image + v207;
          ReturnTypeByQuestId = (__int64)v210[4];
          v289 = (FollowerInfo_o **)(v210 + 4);
          if ( !ReturnTypeByQuestId )
            goto LABEL_296;
          FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0LL);
          ReturnTypeByQuestId = sub_1B00D74(int___TypeInfo, 0LL);
          if ( v207 >= LODWORD(v205->_1.namespaze) )
            goto LABEL_297;
          v211 = *v289;
          if ( !*v289 )
            goto LABEL_296;
          if ( v266 )
          {
            ReturnTypeByQuestId = (__int64)v211->fields.eventSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_296;
          }
          else
          {
            ReturnTypeByQuestId = (__int64)v211->fields.mainSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_296;
          }
          posb = *(unsigned int *)(ReturnTypeByQuestId + 24);
          v212 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
          if ( v212 )
          {
            v165 = v212;
            v213 = sub_1B00E08(v212, int___TypeInfo);
            if ( !v213 )
              goto LABEL_298;
          }
          else
          {
            v213 = 0LL;
          }
          v214 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v214 = BalanceConfig_TypeInfo;
          }
          v215 = v214->static_fields;
          FixMainSupportDeckNum = v215->FixMainSupportDeckNum;
          FixEventSupportDeckNum = v215->FixEventSupportDeckNum;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          ReturnTypeByQuestId = System_Math__Max_61144256(FixMainSupportDeckNum, FixEventSupportDeckNum, 0LL);
          v286 = v213;
          if ( (int)posb >= 1 )
          {
            v218 = ReturnTypeByQuestId;
            v219 = 0LL;
            v273 = v213 + 32;
            while ( 1 )
            {
              if ( !*p_originalItemList )
                goto LABEL_296;
              if ( v207 >= LODWORD(v205->_1.namespaze) )
                break;
              if ( !v213 )
                goto LABEL_296;
              if ( v219 >= *(unsigned int *)(v213 + 24) )
                break;
              indexc = (*p_originalItemList)->fields._size;
              v282 = v80->fields.setupInfo;
              classBoardMaxDictionary = v80->fields.classBoardMaxDictionary;
              v221 = *(_DWORD *)(v273 + 4 * v219);
              followerClassIdd = *v289;
              v222 = v80->fields.isServantEquipBonusFilterEnable;
              v223 = v80->fields.isServantBonusFilterEnable;
              v224 = v80->fields.isBonusFilterEnable;
              v225 = (FollowerSelectItemListViewItem_o *)sub_1B00F18(FollowerSelectItemListViewItem_TypeInfo);
              FollowerSelectItemListViewItem___ctor(
                v225,
                indexc,
                0,
                followerClassIdd,
                0,
                friendPointUpVal,
                friendPointUpMaxVal,
                friendPointCampaignEntityList,
                v224,
                v223,
                v222,
                0,
                v282,
                questRestrictionInfo,
                0,
                v221,
                v218,
                classBoardMaxDictionary,
                1,
                v264);
              ReturnTypeByQuestId = (__int64)v80->fields.originalItemList;
              if ( !ReturnTypeByQuestId )
                goto LABEL_296;
              v228 = *(_QWORD *)(ReturnTypeByQuestId + 16);
              v229 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++*(_DWORD *)(ReturnTypeByQuestId + 28);
              if ( !v228 )
                goto LABEL_296;
              v230 = *(int *)(ReturnTypeByQuestId + 24);
              v213 = v286;
              if ( (unsigned int)v230 >= *(_DWORD *)(v228 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                  (Il2CppObject *)v225,
                  *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v229[4] + 192LL) + 112LL));
              }
              else
              {
                v231 = v228 + 8 * v230;
                *(_DWORD *)(ReturnTypeByQuestId + 24) = v230 + 1;
                *(_QWORD *)(v231 + 32) = v225;
                sub_1B00C70((ServantStatusBattleListViewItem_o *)(v231 + 32), (int32_t)v225, v226, v227);
              }
              ++v219;
              --v218;
              if ( posb == v219 )
                goto LABEL_261;
            }
LABEL_297:
            sub_1B00F30(ReturnTypeByQuestId, v61);
          }
LABEL_261:
          followerClassIda = 0;
          v280 = v207;
          v283 = (EventUpValSetupInfo_o *)(v213 + 32);
          while ( 1 )
          {
            ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            }
            v232 = *(struct BalanceConfig_StaticFields **)(ReturnTypeByQuestId + 184);
            if ( followerClassIda >= v232->SupportDeckMemberMax )
              break;
            if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
            {
              j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId);
              v232 = BalanceConfig_TypeInfo->static_fields;
            }
            v234 = v232->FixMainSupportDeckNum;
            v233 = v232->FixEventSupportDeckNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            ReturnTypeByQuestId = System_Math__Max_61144256(v234, v233, 0LL);
            if ( (int)posb >= 1 )
            {
              v235 = ReturnTypeByQuestId;
              v236 = 0LL;
              while ( *p_mixItemList )
              {
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                v237 = (*p_mixItemList)->fields._size;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                }
                if ( v207 >= LODWORD(v205->_1.namespaze) )
                  goto LABEL_297;
                if ( !v213 )
                  goto LABEL_296;
                if ( v236 >= *(unsigned int *)(v213 + 24) )
                  goto LABEL_297;
                v238 = v80->fields.setupInfo;
                v239 = v237;
                indexd = *v289;
                v240 = v80->fields.isServantEquipBonusFilterEnable;
                v241 = this->fields.classBoardMaxDictionary;
                v242 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 164LL);
                v243 = v80->fields.isServantBonusFilterEnable;
                v244 = v80->fields.isBonusFilterEnable;
                supportDeckIda = *((_DWORD *)&v283->klass + v236);
                v80 = this;
                v245 = (FollowerSelectItemListViewItem_o *)sub_1B00F18(FollowerSelectItemListViewItem_TypeInfo);
                FollowerSelectItemListViewItem___ctor(
                  v245,
                  v239,
                  v242 - followerClassIda,
                  indexd,
                  followerClassIda,
                  friendPointUpVal,
                  friendPointUpMaxVal,
                  friendPointCampaignEntityList,
                  v244,
                  v243,
                  v240,
                  0,
                  v238,
                  questRestrictionInfo,
                  0,
                  supportDeckIda,
                  v235,
                  v241,
                  1,
                  v264);
                ReturnTypeByQuestId = (__int64)this->fields.mixItemList;
                if ( !ReturnTypeByQuestId )
                  goto LABEL_296;
                v248 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v249 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v248 )
                  goto LABEL_296;
                v250 = *(int *)(ReturnTypeByQuestId + 24);
                if ( (unsigned int)v250 >= *(_DWORD *)(v248 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    (Il2CppObject *)v245,
                    *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v249[4] + 192LL) + 112LL));
                }
                else
                {
                  v251 = v248 + 8 * v250;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v250 + 1;
                  *(_QWORD *)(v251 + 32) = v245;
                  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v251 + 32), (int32_t)v245, v246, v247);
                }
                v205 = v277;
                v207 = v280;
                v213 = v286;
                ++v236;
                --v235;
                if ( posb == v236 )
                  goto LABEL_283;
              }
              goto LABEL_296;
            }
LABEL_283:
            ++followerClassIda;
          }
          if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
          {
            j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId);
            v232 = BalanceConfig_TypeInfo->static_fields;
          }
          if ( ++keya >= v232->SupportListMax )
            break;
LABEL_287:
          LODWORD(namespaze) = v205->_1.namespaze;
          ++v207;
        }
        while ( (__int64)v207 < (int)namespaze );
      }
    }
LABEL_288:
    ReturnTypeByQuestId = (__int64)v80->fields.refreshButtonObject;
    if ( !ReturnTypeByQuestId )
      goto LABEL_296;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)ReturnTypeByQuestId,
      !v80->fields.isRefreshBtnHide,
      0LL);
    emptyMessageLabel = v80->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11582/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
    if ( !emptyMessageLabel )
      goto LABEL_296;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)ReturnTypeByQuestId, 0LL);
    v254 = FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v254 = FollowerSelectItemListViewManager_TypeInfo;
    }
    FollowerSelectItemListViewManager__SortClass(this, v254->static_fields->followerClassId, v253);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    FollowerSelectItemListViewManager__SetFilterButtonImage(this, v255);
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_296;
    scrollView->fields.smoothDragStart = 1;
    return;
  }
  v162 = 0;
  while ( 1 )
  {
    if ( v162 >= v161 )
      goto LABEL_297;
    v163 = &klass->_1.image + (int)v162;
    ReturnTypeByQuestId = (__int64)v163[4];
    v285 = (FollowerInfo_o **)(v163 + 4);
    if ( !ReturnTypeByQuestId )
      goto LABEL_296;
    FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0LL);
    if ( v162 >= LODWORD(klass->_1.namespaze) )
      goto LABEL_297;
    if ( !*v285 )
      goto LABEL_296;
    ReturnTypeByQuestId = (__int64)(*v285)->fields.mainSupportDeckIds;
    if ( !ReturnTypeByQuestId )
      goto LABEL_296;
    v272 = *(_QWORD *)(ReturnTypeByQuestId + 24);
    v164 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
    if ( !v164 )
    {
      v288 = 0LL;
      goto LABEL_171;
    }
    v165 = v164;
    v288 = sub_1B00E08(v164, int___TypeInfo);
    if ( !v288 )
      break;
LABEL_171:
    v166 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v166 = BalanceConfig_TypeInfo;
    }
    v167 = v166->static_fields;
    v169 = v167->FixMainSupportDeckNum;
    v168 = v167->FixEventSupportDeckNum;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    ReturnTypeByQuestId = System_Math__Max_61144256(v169, v168, 0LL);
    v170 = v288;
    if ( (int)v272 >= 1 )
    {
      deckPriority = ReturnTypeByQuestId;
      v172 = 0LL;
      do
      {
        if ( !*p_originalItemList )
          goto LABEL_296;
        if ( v162 >= LODWORD(klass->_1.namespaze) )
          goto LABEL_297;
        if ( !v170 )
          goto LABEL_296;
        if ( v172 >= *(unsigned int *)(v170 + 24) )
          goto LABEL_297;
        indexa = (*p_originalItemList)->fields._size;
        posc = v80->fields.setupInfo;
        v173 = v80->fields.classBoardMaxDictionary;
        v174 = *(_DWORD *)(v288 + 32 + 4 * v172);
        followerClassIdb = *v285;
        v175 = v80->fields.isServantEquipBonusFilterEnable;
        v176 = v80->fields.isServantBonusFilterEnable;
        v177 = v80->fields.isBonusFilterEnable;
        v178 = (FollowerSelectItemListViewItem_o *)sub_1B00F18(FollowerSelectItemListViewItem_TypeInfo);
        FollowerSelectItemListViewItem___ctor(
          v178,
          indexa,
          0,
          followerClassIdb,
          0,
          friendPointUpVal,
          friendPointUpMaxVal,
          friendPointCampaignEntityList,
          v177,
          v176,
          v175,
          0,
          posc,
          questRestrictionInfo,
          1,
          v174,
          deckPriority,
          v173,
          1,
          v264);
        ReturnTypeByQuestId = (__int64)v80->fields.originalItemList;
        if ( !ReturnTypeByQuestId )
          goto LABEL_296;
        v181 = *(_QWORD *)(ReturnTypeByQuestId + 16);
        v182 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(ReturnTypeByQuestId + 28);
        if ( !v181 )
          goto LABEL_296;
        v183 = *(int *)(ReturnTypeByQuestId + 24);
        if ( (unsigned int)v183 >= *(_DWORD *)(v181 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
            (Il2CppObject *)v178,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v182[4] + 192LL) + 112LL));
        }
        else
        {
          v184 = v181 + 8 * v183;
          *(_DWORD *)(ReturnTypeByQuestId + 24) = v183 + 1;
          *(_QWORD *)(v184 + 32) = v178;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v184 + 32), (int32_t)v178, v179, v180);
        }
        v170 = v288;
        ++v172;
        --deckPriority;
      }
      while ( (unsigned int)v272 != v172 );
    }
    posa = 0;
    v279 = v170 + 32;
    v276 = v162;
    while ( 1 )
    {
      ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
      }
      v185 = *(struct BalanceConfig_StaticFields **)(ReturnTypeByQuestId + 184);
      if ( posa >= v185->SupportDeckMemberMax )
        break;
      if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
      {
        j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId);
        v185 = BalanceConfig_TypeInfo->static_fields;
      }
      v187 = v185->FixMainSupportDeckNum;
      v186 = v185->FixEventSupportDeckNum;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      ReturnTypeByQuestId = System_Math__Max_61144256(v187, v186, 0LL);
      if ( (int)v272 >= 1 )
      {
        v188 = ReturnTypeByQuestId;
        v189 = 0LL;
        while ( *p_mixItemList )
        {
          ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
          v190 = (*p_mixItemList)->fields._size;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
          }
          if ( v162 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_297;
          if ( !v288 )
            goto LABEL_296;
          if ( v189 >= *(unsigned int *)(v288 + 24) )
            goto LABEL_297;
          indexb = v190;
          v191 = klass;
          v192 = v80->fields.setupInfo;
          followerClassIdc = *v285;
          v193 = v80->fields.isServantEquipBonusFilterEnable;
          v194 = this->fields.classBoardMaxDictionary;
          v195 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 164LL);
          v196 = v80->fields.isServantBonusFilterEnable;
          v197 = v80->fields.isBonusFilterEnable;
          supportDeckId = *(_DWORD *)(v279 + 4 * v189);
          v80 = this;
          v198 = (FollowerSelectItemListViewItem_o *)sub_1B00F18(FollowerSelectItemListViewItem_TypeInfo);
          FollowerSelectItemListViewItem___ctor(
            v198,
            indexb,
            v195 - posa,
            followerClassIdc,
            posa,
            friendPointUpVal,
            friendPointUpMaxVal,
            friendPointCampaignEntityList,
            v197,
            v196,
            v193,
            0,
            v192,
            questRestrictionInfo,
            1,
            supportDeckId,
            v188,
            v194,
            1,
            v264);
          ReturnTypeByQuestId = (__int64)this->fields.mixItemList;
          if ( !ReturnTypeByQuestId )
            goto LABEL_296;
          v201 = *(_QWORD *)(ReturnTypeByQuestId + 16);
          v202 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++*(_DWORD *)(ReturnTypeByQuestId + 28);
          if ( !v201 )
            goto LABEL_296;
          v203 = *(int *)(ReturnTypeByQuestId + 24);
          if ( (unsigned int)v203 >= *(_DWORD *)(v201 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
              (Il2CppObject *)v198,
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v202[4] + 192LL) + 112LL));
          }
          else
          {
            v204 = v201 + 8 * v203;
            *(_DWORD *)(ReturnTypeByQuestId + 24) = v203 + 1;
            *(_QWORD *)(v204 + 32) = v198;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v204 + 32), (int32_t)v198, v199, v200);
          }
          v162 = v276;
          ++v189;
          klass = v191;
          --v188;
          if ( (unsigned int)v272 == v189 )
            goto LABEL_209;
        }
        goto LABEL_296;
      }
LABEL_209:
      ++posa;
    }
    v161 = (int)klass->_1.namespaze;
    if ( (int)++v162 >= v161 )
      goto LABEL_211;
  }
  sub_1B011E8(v165);
LABEL_298:
  sub_1B011E8(v165);
  FollowerSelectItemListViewManager__GetInitialDisplayClass(v257, v258, v259, v260, v261);
}


void __fastcall FollowerSelectItemListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  FollowerSelectItemListViewManager_c *v3; // x0
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v5; // x8

  if ( (byte_48E6A96 & 1) == 0 )
  {
    sub_1B00CCC(&FollowerSelectItemListViewManager_TypeInfo, v1);
    sub_1B00CCC(&StringLiteral_6683/*"FollowerSelectClass"*/, v2);
    byte_48E6A96 = 1;
  }
  v3 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v3 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v3->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT
    || (v3 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))LIST_VIEW_SORT->fields.m_target)(
                                                      LIST_VIEW_SORT->fields.original_method_info,
                                                      1LL,
                                                      *(_QWORD *)&LIST_VIEW_SORT->fields.extra_arg)) == 0LL
    || (ListViewSort__DeleteContinueData((ListViewSort_o *)v3, 0LL),
        (v5 = FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT) == 0LL)
    || (v3 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v5->fields.m_target)(
                                                      v5->fields.original_method_info,
                                                      0LL,
                                                      *(_QWORD *)&v5->fields.extra_arg)) == 0LL )
  {
    sub_1B00F28(v3, v1);
  }
  ListViewSort__DeleteContinueData((ListViewSort_o *)v3, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6683/*"FollowerSelectClass"*/, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FollowerSelectItemListViewManager__DestroyList_44999712(this, 0LL, v2);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList_44999712(
        FollowerSelectItemListViewManager_o *this,
        BattleSetupInfo_o *battleSetupInfo,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  EventQuestMaster_o *ReturnTypeByQuestId; // x0
  const MethodInfo *v16; // x1
  FollowerSelectItemListViewManager_c *v17; // x8
  unsigned int v18; // w20
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct ListViewSort_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x4
  struct ListViewSort_o *sort; // x8
  System_Int32_array *OngoingQuestTargetEventIds; // x0
  int32_t questId; // w20
  int32_t questPhase; // w21
  System_Int32_array *v28; // x22
  EventUpValSetupInfo_o *v29; // x23
  struct EventUpValSetupInfo_o **p_setupInfo; // x0
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  struct ListViewSort_o *v36; // x8
  FollowerSelectItemListViewManager_o *v37; // x0
  int monitor; // w20
  FollowerSelectItemListViewManager_c *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  ClassButtonControlComponent_o *classButtonControl; // x20
  ClassButtonControlComponent_CallbackFunc_o *v43; // x21
  ClassButtonControlComponent_o *v44; // x20
  const MethodInfo *v45; // x2
  struct EventUpValSetupInfo_o *setupInfo; // x8
  System_Int32_array *v47; // x1
  UILabel_o *bonusFilterKindLabel; // x20

  if ( (byte_48E6AA3 & 1) == 0 )
  {
    sub_1B00CCC(&ClassButtonControlComponent_CallbackFunc_TypeInfo, battleSetupInfo);
    sub_1B00CCC(&Method_DataManager_GetMaster_EventQuestMaster___, v6);
    sub_1B00CCC(&DataManager_TypeInfo, v7);
    sub_1B00CCC(&EventUpValSetupInfo_TypeInfo, v8);
    sub_1B00CCC(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v9);
    sub_1B00CCC(&FollowerSelectItemListViewManager_TypeInfo, v10);
    sub_1B00CCC(&int___TypeInfo, v11);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v12);
    sub_1B00CCC(&StringLiteral_11484/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/, v13);
    sub_1B00CCC(&StringLiteral_6683/*"FollowerSelectClass"*/, v14);
    byte_48E6AA3 = 1;
  }
  if ( battleSetupInfo )
  {
    this->fields.questId = BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
    this->fields.questPhase = battleSetupInfo->fields.questPhase;
    ReturnTypeByQuestId = (EventQuestMaster_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                  battleSetupInfo->fields.questId,
                                                  0LL);
    v17 = FollowerSelectItemListViewManager_TypeInfo;
    v18 = (unsigned int)ReturnTypeByQuestId;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v17 = FollowerSelectItemListViewManager_TypeInfo;
    }
    LIST_VIEW_SORT = v17->static_fields->LIST_VIEW_SORT;
    if ( !LIST_VIEW_SORT )
      goto LABEL_41;
    v20 = (struct ListViewSort_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))LIST_VIEW_SORT->fields.m_target)(
                                     LIST_VIEW_SORT->fields.original_method_info,
                                     v18,
                                     *(_QWORD *)&LIST_VIEW_SORT->fields.extra_arg);
    this->fields.sort = v20;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)v20, v21, v22);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                                                                                   this,
                                                                                   this->fields.questId,
                                                                                   this->fields.questPhase,
                                                                                   sort->fields.isRequestLoad,
                                                                                   v23);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (EventQuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_EventQuestMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_41;
    OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                   ReturnTypeByQuestId,
                                   this->fields.questId,
                                   this->fields.questPhase,
                                   0LL,
                                   0LL);
    questId = this->fields.questId;
    questPhase = this->fields.questPhase;
    v28 = OngoingQuestTargetEventIds;
    v29 = (EventUpValSetupInfo_o *)sub_1B00F18(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_37684336(v29, v28, 0, questId, questPhase, 0LL);
    p_setupInfo = &this->fields.setupInfo;
    this->fields.setupInfo = v29;
    v31 = (int)v29;
  }
  else
  {
    p_setupInfo = &this->fields.setupInfo;
    v31 = 0;
    this->fields.setupInfo = 0LL;
  }
  sub_1B00C70((ServantStatusBattleListViewItem_o *)p_setupInfo, v31, (int32_t)method, v3);
  this->fields.questRestrictionInfo = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo, 0, v32, v33);
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.sort;
  if ( !ReturnTypeByQuestId )
    goto LABEL_41;
  ListViewSort__Load((ListViewSort_o *)ReturnTypeByQuestId, 0LL);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.sort;
  if ( !ReturnTypeByQuestId )
    goto LABEL_41;
  ListViewSort__Save((ListViewSort_o *)ReturnTypeByQuestId, 0LL);
  v36 = this->fields.sort;
  if ( !v36 )
    goto LABEL_41;
  if ( v36->fields.isRequestSave )
  {
    v37 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v37 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor = (int)v37->fields.sort->monitor;
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(v37, v16) )
    {
      v39 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v39 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6683/*"FollowerSelectClass"*/, v39->static_fields->followerClassId, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
  this->fields.originalItemList = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.originalItemList, 0, v34, v35);
  this->fields.mixItemList = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.mixItemList, 0, v40, v41);
  classButtonControl = this->fields.classButtonControl;
  v43 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1B00F18(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v43,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_41;
  ClassButtonControlComponent__init(classButtonControl, v43, this->fields.questId, this->fields.questPhase, 0, 0LL);
  this->fields.isInput = 0;
  ReturnTypeByQuestId = (EventQuestMaster_o *)FollowerSelectItemListViewManager_TypeInfo;
  v44 = this->fields.classButtonControl;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  if ( !v44 )
    goto LABEL_41;
  ClassButtonControlComponent__setCursor(
    v44,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  setupInfo = this->fields.setupInfo;
  v47 = setupInfo ? setupInfo->fields.eventIdList : (System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, v47, v45);
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.bonusFilterKindButton;
  if ( !ReturnTypeByQuestId )
    goto LABEL_41;
  ReturnTypeByQuestId = (EventQuestMaster_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)ReturnTypeByQuestId,
                                                0LL);
  if ( !ReturnTypeByQuestId )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)ReturnTypeByQuestId,
    this->fields.isBonusFilterEnable,
    0LL);
  if ( this->fields.isBonusFilterEnable )
  {
    bonusFilterKindLabel = this->fields.bonusFilterKindLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ReturnTypeByQuestId = (EventQuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11484/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/, 0LL);
    if ( bonusFilterKindLabel )
    {
      UILabel__set_text(bonusFilterKindLabel, (System_String_o *)ReturnTypeByQuestId, 0LL);
      goto LABEL_37;
    }
LABEL_41:
    sub_1B00F28(ReturnTypeByQuestId, v16);
  }
LABEL_37:
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.tutorialListViewObject;
  if ( !ReturnTypeByQuestId )
    goto LABEL_41;
  ((void (__fastcall *)(EventQuestMaster_o *, Il2CppMethodPointer))ReturnTypeByQuestId->klass->vtable._4_getList.method)(
    ReturnTypeByQuestId,
    ReturnTypeByQuestId->klass->vtable._5_ForForceDerived.methodPtr);
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.tutorialListViewObject;
  if ( !ReturnTypeByQuestId )
    goto LABEL_41;
  ReturnTypeByQuestId = (EventQuestMaster_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)ReturnTypeByQuestId,
                                                0LL);
  if ( !ReturnTypeByQuestId )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ReturnTypeByQuestId, 0, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__EndClassCompatibilityMenu(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_48E6AB0 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_48E6AB0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v3);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__EndCloseClassBoardEffectListDialog(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_48E6AC0 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_48E6AC0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v4);
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
  __int64 v8; // x1
  ListViewSort_o *sort; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v11; // x21

  if ( (byte_48E6AB2 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, isDecide);
    sub_1B00CCC(&Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_48E6AB2 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__,
    0LL);
  if ( !Instance )
LABEL_8:
    sub_1B00F28(sort, v8);
  CommonUI__CloseServantBonusFilterSelectMenu((CommonUI_o *)Instance, v11, 0LL);
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
  __int64 v12; // x1
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v14; // x20
  int32_t result; // w0
  struct System_Int32_array *classIds; // x8
  struct System_Int32_array *v17; // x8
  Il2CppObject *v18; // x8

  if ( (byte_48E6AA0 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, *(_QWORD *)&questId);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantClassMaster___, v8);
    sub_1B00CCC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v9);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_48E6AA0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_17;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  if ( !Entity )
    return defaultValue;
  v14 = Entity;
  result = QuestPhaseEntity__GetAdvantageClassId(Entity, 0LL);
  if ( result != -1 )
    return result;
  classIds = v14->fields.classIds;
  if ( !classIds || !*(_QWORD *)&classIds->max_length )
    return defaultValue;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v17 = v14->fields.classIds;
  if ( !v17 )
    goto LABEL_17;
  if ( !v17->max_length )
    sub_1B00F30(Instance, v12);
  if ( !Instance )
LABEL_17:
    sub_1B00F28(Instance, v12);
  v18 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          v17->m_Items[1],
          (const MethodInfo_2FE6A4C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  result = defaultValue;
  if ( v18 )
    return HIDWORD(v18[4].klass);
  return result;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_c *v2; // x0

  if ( (byte_48E6AA7 & 1) == 0 )
  {
    sub_1B00CCC(&FollowerSelectItemListViewManager_TypeInfo, method);
    byte_48E6AA7 = 1;
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

  if ( (byte_48E6AC1 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    byte_48E6AC1 = 1;
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

  if ( (byte_48E6A9E & 1) == 0 )
  {
    sub_1B00CCC(&FollowerSelectItemListViewManager_TypeInfo, *(_QWORD *)&questId);
    this = (FollowerSelectItemListViewManager_o *)sub_1B00CCC(&OptionManager_TypeInfo, v8);
    byte_48E6A9E = 1;
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
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v10 = FollowerSelectItemListViewManager_TypeInfo;
    }
    PlayerPrefsFollowerClassId = v10->static_fields->followerClassId;
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
  FollowerSelectItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_48E6AA5 & 1) == 0 )
  {
    sub_1B00CCC(&FollowerSelectItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_48E6AA5 = 1;
  }
  result = (FollowerSelectItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_48E6ABC & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    byte_48E6ABC = 1;
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
  FollowerSelectItemListViewItem_o *Item; // x0
  __int64 methodPtr_low; // x10
  struct FollowerInfo_o *followerInfo; // x8

  if ( (byte_48E6ABD & 1) == 0 )
  {
    sub_1B00CCC(&FollowerSelectItemListViewItem_TypeInfo, userId);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    byte_48E6ABD = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1B00F28(itemList, userId);
  v10 = 0;
  while ( v10 < itemList->fields._size )
  {
    Item = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                 itemList,
                                                 v10,
                                                 (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
            return v10;
        }
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v10;
    if ( !itemList )
      goto LABEL_15;
  }
  return 0;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetItemIndex_45010076(
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
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8
  int monitor_high; // w8

  if ( (byte_48E6ABE & 1) == 0 )
  {
    sub_1B00CCC(&FollowerSelectItemListViewItem_TypeInfo, userId);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    byte_48E6ABE = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_17:
    sub_1B00F28(itemList, userId);
  v12 = 0;
  while ( v12 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v12,
             (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
            return v12;
        }
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v12;
    if ( !itemList )
      goto LABEL_17;
  }
  return -1;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_48E6AA1 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_6683/*"FollowerSelectClass"*/, method);
    byte_48E6AA1 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6683/*"FollowerSelectClass"*/, 0, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewManager_c *v2; // x0
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v4; // x8

  if ( (byte_48E6A97 & 1) == 0 )
  {
    sub_1B00CCC(&FollowerSelectItemListViewManager_TypeInfo, v1);
    byte_48E6A97 = 1;
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
    sub_1B00F28(v2, v1);
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

  if ( (byte_48E6A9F & 1) == 0 )
  {
    sub_1B00CCC(&BattleData_TypeInfo, *(_QWORD *)&questId);
    sub_1B00CCC(&FollowerSelectItemListViewManager_TypeInfo, v6);
    byte_48E6A9F = 1;
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
  const MethodInfo *v14; // x3
  __int64 methodPtr_low; // x10
  FollowerSelectItemListViewManager_c *v16; // x0
  int32_t followerClassId; // w22
  int v18; // w25
  int32_t v19; // w22
  const MethodInfo *v20; // x3
  __int64 v21; // x10
  int v22; // w25
  int32_t v23; // w22
  const MethodInfo *v24; // x3
  __int64 v25; // x10

  if ( (byte_48E6AA2 & 1) == 0 )
  {
    sub_1B00CCC(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&friendPointUpVal);
    sub_1B00CCC(&FollowerSelectItemListViewItem_TypeInfo, v7);
    sub_1B00CCC(&FollowerSelectItemListViewManager_TypeInfo, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    byte_48E6AA2 = 1;
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
                                                                (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        v14);
      if ( size == ++v13 )
        goto LABEL_12;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_34:
    sub_1B00F28(itemList, *(_QWORD *)&friendPointUpVal);
  }
LABEL_12:
  v16 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v16 = FollowerSelectItemListViewManager_TypeInfo;
  }
  followerClassId = v16->static_fields->followerClassId;
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsMixSupportGroupType(followerClassId, 0LL) )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.originalItemList;
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
                                                                  (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    v22 = itemList->fields._size;
    if ( v22 >= 1 )
    {
      v23 = 0;
      do
      {
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemList,
                                                                  v23,
                                                                  (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          break;
        v25 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v25
          || (FollowerSelectItemListViewItem_c *)itemList->klass->_2.typeHierarchy[v25 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          break;
        }
        FollowerSelectItemListViewItem__Modify(
          (FollowerSelectItemListViewItem_o *)itemList,
          friendPointUpVal,
          friendPointUpMaxVal,
          v24);
        if ( v22 == ++v23 )
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
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_48E6AB8 & 1) == 0 )
  {
    sub_1B00CCC(&Method_FollowerSelectItemListViewManager_OnChangeClass__, *(_QWORD *)&classPos);
    byte_48E6AB8 = 1;
  }
  if ( this->fields.isInput )
  {
    v5 = Method_FollowerSelectItemListViewManager_OnChangeClass__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnChangeClass__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B00CE4(Method_FollowerSelectItemListViewManager_OnChangeClass__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    FollowerSelectItemListViewManager__SortClass(this, classPos, v7);
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
  ServantBonusFilterSelectMenu_CallbackFunc_o *v14; // x23
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_48E6AB1 & 1) == 0 )
  {
    sub_1B00CCC(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__, v3);
    sub_1B00CCC(&Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_48E6AB1 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B00CE4(Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
    isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
    equipBonusFilterEventIds = this->fields.equipBonusFilterEventIds;
    sort = this->fields.sort;
    v13 = (CommonUI_o *)Instance;
    v14 = (ServantBonusFilterSelectMenu_CallbackFunc_o *)sub_1B00F18(ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantBonusFilterSelectMenu_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__,
      0LL);
    if ( !v13 )
      sub_1B00F28(v15, v16);
    CommonUI__OpenServantBonusFilterSelectMenu(
      v13,
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
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  __int64 displaySkill; // x8
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w21
  const MethodInfo *v13; // x2

  if ( (byte_48E6ABB & 1) == 0 )
  {
    sub_1B00CCC(&Method_FollowerSelectItemListViewManager_OnClickChangeSkill__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v4);
    byte_48E6ABB = 1;
  }
  if ( this->fields.isInput )
  {
    v5 = Method_FollowerSelectItemListViewManager_OnClickChangeSkill__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickChangeSkill__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B00CE4(Method_FollowerSelectItemListViewManager_OnClickChangeSkill__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    displaySkill = this->fields.displaySkill;
    if ( (unsigned int)displaySkill <= 2 )
      this->fields.displaySkill = dword_BAA2F8[displaySkill];
    ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                                this,
                                                                v7);
    if ( !ObjectList )
      goto LABEL_14;
    v11 = ObjectList;
    if ( ObjectList->fields._size >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    v11,
                                                                    v12,
                                                                    (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
        if ( !ObjectList )
          break;
        FollowerSelectItemListViewObject__ChangeDisplaySkill(
          (FollowerSelectItemListViewObject_o *)ObjectList,
          this->fields.displaySkill,
          v13);
        if ( ++v12 >= v11->fields._size )
          return;
      }
LABEL_14:
      sub_1B00F28(ObjectList, v10);
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
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_48E6AAF & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__, v3);
    sub_1B00CCC(&Method_FollowerSelectItemListViewManager_OnClickClassComparibility__, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_48E6AAF = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_FollowerSelectItemListViewManager_OnClickClassComparibility__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickClassComparibility__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B00CE4(Method_FollowerSelectItemListViewManager_OnClickClassComparibility__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__,
      0LL);
    if ( !Instance )
      sub_1B00F28(v10, v11);
    CommonUI__OpenClassCompatibilityMenu((CommonUI_o *)Instance, v9, 0LL);
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
  int32_t v2; // w2
  int32_t v3; // w3
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x19
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
      p_callbackFunc->klass = 0LL;
      sub_1B00C70(p_callbackFunc, 0, v2, v3);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        7LL,
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
  int32_t v3; // w3
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1B00F28(v6, v7);
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

  if ( (byte_48E6AB6 & 1) == 0 )
  {
    sub_1B00CCC(&Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__, method);
    byte_48E6AB6 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B00CE4(Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B00F28(v5, v6);
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
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  OtherUserSortDialog_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_48E6AB4 & 1) == 0 )
  {
    sub_1B00CCC(&OtherUserSortDialog_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FollowerSelectItemListViewManager_CloseSortDialog__, v3);
    sub_1B00CCC(&Method_FollowerSelectItemListViewManager_OnClickSortKind__, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_48E6AB4 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_FollowerSelectItemListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B00CE4(Method_FollowerSelectItemListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (OtherUserSortDialog_CallbackFunc_o *)sub_1B00F18(OtherUserSortDialog_CallbackFunc_TypeInfo);
    OtherUserSortDialog_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_CloseSortDialog__,
      0LL);
    if ( !v10 )
      sub_1B00F28(v12, v13);
    CommonUI__OpenOtherUserSortDialog(v10, 0, sort, v11, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickSupportListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1B00F28(v6, v7);
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
  int32_t v3; // w3
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1B00F28(v6, v7);
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
  int32_t v3; // w3
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1B00F28(v6, v7);
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
  int32_t v8; // w2
  int32_t v9; // w3
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x22
  unsigned int Index; // w0

  if ( (byte_48E6AAE & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_12344/*"ScrollViewEnabled"*/, obj);
    byte_48E6AAE = 1;
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
        (System_String_o *)StringLiteral_12344/*"ScrollViewEnabled"*/,
        0.1,
        0LL);
    }
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v8, v9);
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
      sub_1B00F28(tutorialListViewObject, obj);
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
  int32_t v8; // w2
  int32_t v9; // w3
  UnityEngine_Component_o *tutorialListViewObject; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_48E6AAD & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E6AAD = 1;
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
              sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
              if ( callbackFunc2 )
                ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
                  callbackFunc2->fields.original_method_info,
                  *(_QWORD *)&callbackFunc2->fields.extra_arg);
              return;
            }
          }
        }
      }
      sub_1B00F28(tutorialListViewObject, v7);
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
  const MethodInfo *v26; // x1
  int32_t scrollView; // w22
  struct FollowerInfo_o *followerInfo; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v31; // w20
  unsigned int v32; // w24
  __int64 v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  _QWORD *v36; // x22
  __int64 v37; // x8
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 *v40; // x8
  __int64 v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  _QWORD *v44; // x22
  __int64 v45; // x8
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 *v48; // x8
  __int64 v49; // x1
  Il2CppObject *Instance; // x22
  System_Action_o *v51; // x23

  v4 = this;
  if ( (byte_48E6ABF & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, obj);
    sub_1B00CCC(&Method_System_Array_Empty_int___, v5);
    sub_1B00CCC(&ClassBoardInfo_TypeInfo, v6);
    sub_1B00CCC(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v7);
    sub_1B00CCC(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_1B00CCC(&DataManager_TypeInfo, v9);
    sub_1B00CCC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B00CCC(&FollowerSelectItemListViewItem_TypeInfo, v11);
    sub_1B00CCC(&Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__, v12);
    sub_1B00CCC(&Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14);
    this = (FollowerSelectItemListViewManager_o *)sub_1B00CCC(
                                                    &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                    v15);
    byte_48E6ABF = 1;
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
                 (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
            v21 = (_QWORD *)sub_1B00CE4(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
          v22 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v21, v21[4]);
          OverwriteAssetSoundName__PlaySystemSe(v22, 2, 0LL);
          return;
        }
        v4->fields.isInput = 0;
        v23 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
        if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 83) & 2) != 0 )
          v23 = (_QWORD *)sub_1B00CE4(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
        v24 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v23, v23[4]);
        OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ServantMaster___);
        this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewItem__get_SvtId(v19, v26);
        if ( Master_object )
        {
          this = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                          (int32_t)this,
                                                          (const MethodInfo_2FE6A4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            scrollView = (int32_t)this->fields.scrollView;
            this = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
                  v31 = (int)this;
                  if ( max_length < 1 )
                  {
LABEL_30:
                    v33 = sub_1B00F18(ClassBoardInfo_TypeInfo);
                    ClassBoardInfo___ctor((ClassBoardInfo_o *)v33, 0LL);
                    if ( v33 )
                    {
                      *(_DWORD *)(v33 + 16) = v31;
                      v36 = Method_System_Array_Empty_int___;
                      v37 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v37 )
                      {
                        sub_1B52C04(Method_System_Array_Empty_int___);
                        v37 = v36[7];
                      }
                      v38 = *(_QWORD *)(v37 + 16);
                      if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
                        v38 = sub_1B52BA8(v38);
                      if ( !*(_DWORD *)(v38 + 224) )
                        j_il2cpp_runtime_class_init_0(v38);
                      v39 = *(_QWORD *)(v36[7] + 16LL);
                      if ( (*(_BYTE *)(v39 + 309) & 1) == 0 )
                        v39 = sub_1B52BA8(v39);
                      v40 = *(__int64 **)(v39 + 184);
                      v41 = *v40;
                      *(_QWORD *)(v33 + 24) = *v40;
                      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v33 + 24), v41, v34, v35);
                      v44 = Method_System_Array_Empty_int___;
                      v45 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v45 )
                      {
                        sub_1B52C04(Method_System_Array_Empty_int___);
                        v45 = v44[7];
                      }
                      v46 = *(_QWORD *)(v45 + 16);
                      if ( (*(_BYTE *)(v46 + 309) & 1) == 0 )
                        v46 = sub_1B52BA8(v46);
                      if ( !*(_DWORD *)(v46 + 224) )
                        j_il2cpp_runtime_class_init_0(v46);
                      v47 = *(_QWORD *)(v44[7] + 16LL);
                      if ( (*(_BYTE *)(v47 + 309) & 1) == 0 )
                        v47 = sub_1B52BA8(v47);
                      v48 = *(__int64 **)(v47 + 184);
                      v49 = *v48;
                      *(_QWORD *)(v33 + 32) = *v48;
                      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v33 + 32), v49, v42, v43);
LABEL_48:
                      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v51 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
                      System_Action___ctor(
                        v51,
                        (Il2CppObject *)v4,
                        Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__,
                        0LL);
                      if ( Instance )
                      {
                        CommonUI__OpenClassBoardEffectListDialog(
                          (CommonUI_o *)Instance,
                          1,
                          v31,
                          0,
                          v51,
                          1,
                          (ClassBoardInfo_o *)v33,
                          0LL);
                        return;
                      }
                    }
                  }
                  else
                  {
                    v32 = 0;
                    while ( 1 )
                    {
                      if ( v32 >= max_length )
                        sub_1B00F30(this, obj);
                      v33 = (__int64)userClassBoardInfo->m_Items[v32];
                      if ( !v33 )
                        break;
                      if ( *(_DWORD *)(v33 + 16) == v31 )
                      {
                        this = (FollowerSelectItemListViewManager_o *)ClassBoardInfo__IsReleasedClassId(
                                                                        (ClassBoardInfo_o *)v33,
                                                                        scrollView,
                                                                        0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          goto LABEL_48;
                      }
                      max_length = userClassBoardInfo->max_length;
                      if ( (int)++v32 >= max_length )
                        goto LABEL_30;
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_1B00F28(this, obj);
    }
  }
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
  __int64 v9; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v11; // x20
  int v12; // w24
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v15; // x23
  const MethodInfo *v16; // x3

  if ( (byte_48E6AAC & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v5);
    sub_1B00CCC(&StringLiteral_9825/*"OnMoveEnd"*/, v6);
    byte_48E6AAC = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = FollowerSelectItemListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_13:
    sub_1B00F28(ObjectList, v9);
  size = ObjectList->fields._size;
  v11 = (System_Collections_Generic_List_object__o *)ObjectList;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v12 = 0;
  v13 = 0;
  do
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v11,
             v13,
             (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v15 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v12;
      FollowerSelectItemListViewObject__Init_45004332((FollowerSelectItemListViewObject_o *)Item, 4, v15, 0.1, v16);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v13;
  }
  while ( v13 < v11->fields._size );
  if ( !v12 )
  {
LABEL_12:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9825/*"OnMoveEnd"*/,
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
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_48E6AAA & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__, v9);
    sub_1B00CCC(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v12);
    sub_1B00CCC(&StringLiteral_9825/*"OnMoveEnd"*/, v13);
    byte_48E6AAA = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B00F28(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9825/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B00F28(v19, v20);
      FollowerSelectItemListViewObject__Init_45004332(
        (FollowerSelectItemListViewObject_o *)current,
        mode,
        v18,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__RequestListObject_45003216(
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
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_48E6AAB & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__, v7);
    sub_1B00CCC(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v10);
    sub_1B00CCC(&StringLiteral_9825/*"OnMoveEnd"*/, v11);
    byte_48E6AAB = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B00F28(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9825/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B00F28(v17, v18);
      FollowerSelectItemListViewObject__Init_45003720((FollowerSelectItemListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


void __fastcall FollowerSelectItemListViewManager__SaveSortFilter(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  struct ListViewSort_o *v5; // x8
  FollowerSelectItemListViewManager_o *v6; // x0
  int monitor; // w20
  FollowerSelectItemListViewManager_c *v8; // x0

  if ( (byte_48E6AA4 & 1) == 0 )
  {
    sub_1B00CCC(&FollowerSelectItemListViewManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_6683/*"FollowerSelectClass"*/, v3);
    byte_48E6AA4 = 1;
  }
  sort = this->fields.sort;
  if ( !sort || (ListViewSort__Save(sort, 0LL), (v5 = this->fields.sort) == 0LL) )
    sub_1B00F28(sort, method);
  if ( v5->fields.isRequestSave )
  {
    v6 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v6 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor = (int)v6->fields.sort->monitor;
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(v6, method) )
    {
      v8 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v8 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6683/*"FollowerSelectClass"*/, v8->static_fields->followerClassId, 0LL);
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
    sub_1B00F28(0LL, method);
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
  __int64 v11; // x8
  System_Collections_Generic_List_int__o *v12; // x21
  unsigned __int64 v13; // x23
  int32_t v14; // w22
  bool isBonusFilterEnable; // w27
  bool isServantBonusFilterEnable; // w27
  bool isServantEquipBonusFilterEnable; // w27
  struct System_Int32_array *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_48E6A9A & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventFilterMaster___, eventIds);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToList_int___, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Remove__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_48E6A9A = 1;
  }
  entity = 0LL;
  *(_WORD *)&this->fields.isBonusFilterEnable = 0;
  this->fields.isServantEquipBonusFilterEnable = 0;
  Instance = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)eventIds,
                                                         (const MethodInfo_2D9AD68 *)Method_System_Linq_Enumerable_ToList_int___);
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
        sub_1B00F30(Instance, v10);
      v14 = eventIds->m_Items[v13 + 1];
      Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventFilterMaster___);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)EventFilterMaster__TryGetEntity_37895528(
                                                             (EventFilterMaster_o *)Instance,
                                                             &entity,
                                                             v14,
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
          if ( !v12 )
            break;
          Instance = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Remove(
                                                                 v12,
                                                                 v14,
                                                                 (const MethodInfo_33A5EA8 *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
      else
      {
        *(_WORD *)&this->fields.isBonusFilterEnable = 257;
        this->fields.isServantEquipBonusFilterEnable = 1;
      }
      LODWORD(v11) = eventIds->max_length;
      if ( (__int64)++v13 >= (int)v11 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B00F28(Instance, v10);
  }
LABEL_20:
  if ( !v12 )
    goto LABEL_22;
  v18 = System_Collections_Generic_List_int___ToArray(
          v12,
          (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.equipBonusFilterEventIds = v18;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.equipBonusFilterEventIds, (int32_t)v18, v19, v20);
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
  UISprite_o *classInfoSprite; // x20
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x0
  ServantStatusBattleListViewItem_o *p_classBoardMaxDictionary; // x20
  System_Collections_Generic_Dictionary_int__int__o *v23; // x19
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_ObjectModel_Collection_T__o *Master_object; // x0
  __int64 v27; // x1
  __int64 v28; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x21
  __int64 methodPtr_low; // x9
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v44; // x1
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 v48; // x0

  if ( (byte_48E6A9C & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, method);
    sub_1B00CCC(&BalanceConfig_TypeInfo, v3);
    sub_1B00CCC(&ClassBoardBaseEntity_TypeInfo, v4);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5);
    sub_1B00CCC(&CondType_TypeInfo, v6);
    sub_1B00CCC(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v7);
    sub_1B00CCC(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v8);
    sub_1B00CCC(&DataManager_TypeInfo, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__int__Clear__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v12);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v14);
    sub_1B00CCC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1B00CCC(&StringLiteral_17429/*"buttontxt_formation_20"*/, v17);
    byte_48E6A9C = 1;
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
  if ( CondType__IsQuestClear_36399468(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17429/*"buttontxt_formation_20"*/, 0LL);
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = (ServantStatusBattleListViewItem_o *)&this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_302DBDC *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v23 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B00F18(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v23,
      (const MethodInfo_302D098 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    p_classBoardMaxDictionary->klass = (ServantStatusBattleListViewItem_c *)v23;
    sub_1B00C70(p_classBoardMaxDictionary, (int32_t)v23, v24, v25);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object
    || (Master_object = (System_Collections_ObjectModel_Collection_T__o *)Master_object[1].monitor) == 0LL )
  {
    sub_1B00F28(Master_object, v27);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Master_object,
                 (const MethodInfo_2F83C88 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B00F28(0LL, v28);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v31;
        p_offset += 4;
        if ( !v31 )
          goto LABEL_23;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_23:
      p_method = sub_1B52CAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v34 = Enumerator->klass;
    v35 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v36 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_30;
      }
      v37 = (__int64)&v34->vtable[*v36].method;
    }
    else
    {
LABEL_30:
      v37 = sub_1B52CAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v38 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
            Enumerator,
            *(_QWORD *)(v37 + 8));
    v39 = v38;
    if ( v38 )
    {
      methodPtr_low = LOBYTE(ClassBoardBaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v38 + 304LL) < (unsigned int)methodPtr_low
        || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v38 + 200LL) + 8 * methodPtr_low - 8) != ClassBoardBaseEntity_TypeInfo )
      {
        sub_1B011E8(v38);
LABEL_50:
        sub_1B00F28(v41, v42);
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v41 = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v39 )
      goto LABEL_50;
    if ( !v41 )
      sub_1B00F28(0LL, v42);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                            (ClassBoardSquareMaster_o *)v41,
                            *(_DWORD *)(v39 + 16),
                            0LL);
    if ( OtherThanNoneEntity )
    {
      if ( !p_classBoardMaxDictionary->klass )
        sub_1B00F28(OtherThanNoneEntity, v44);
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)p_classBoardMaxDictionary->klass,
        *(_DWORD *)(v39 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_302DA5C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v45 = Enumerator->klass;
  v46 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_46;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_46:
    v48 = sub_1B52CAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(Enumerator, *(_QWORD *)(v48 + 8));
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
  System_Collections_Generic_IEnumerable_T__o *mixItemList; // x21
  System_Collections_Generic_List_object__o *v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  const MethodInfo *v20; // x1
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerable_T__o *originalItemList; // x21
  System_Collections_Generic_List_object__o *v23; // x22
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  const MethodInfo *v27; // x2
  __int64 v28; // x10
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_48E6AA8 & 1) == 0 )
  {
    sub_1B00CCC(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&followerClassId);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_1B00CCC(&FollowerSelectItemListViewItem_TypeInfo, v8);
    sub_1B00CCC(&FollowerSelectItemListViewManager_TypeInfo, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem___ctor___74530888, v11);
    sub_1B00CCC(&System_Collections_Generic_List_ListViewItem__TypeInfo, v12);
    byte_48E6AA8 = 1;
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
      v15 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_ListViewItem__TypeInfo);
      System_Collections_Generic_List_object____ctor_54268612(
        v15,
        mixItemList,
        (const MethodInfo_33C12C4 *)Method_System_Collections_Generic_List_ListViewItem___ctor___74530888);
      this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v15;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.itemList, (int32_t)v15, v16, v17);
      itemList = this->fields.itemList;
      if ( itemList )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v29,
          (System_Collections_Generic_List_object__o *)itemList,
          (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v30 = v29;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v30,
                  (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( v30.fields._current )
          {
            methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(v30.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
              && (FollowerSelectItemListViewItem_c *)v30.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo )
            {
              FollowerSelectItemListViewItem__UpdateRestriction(
                (FollowerSelectItemListViewItem_o *)v30.fields._current,
                v20);
            }
          }
        }
LABEL_24:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v30,
          (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        return;
      }
    }
    else
    {
      originalItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.originalItemList;
      v23 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_ListViewItem__TypeInfo);
      System_Collections_Generic_List_object____ctor_54268612(
        v23,
        originalItemList,
        (const MethodInfo_33C12C4 *)Method_System_Collections_Generic_List_ListViewItem___ctor___74530888);
      this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v23;
      p_itemList = &this->fields.itemList;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)p_itemList, (int32_t)v23, v25, v26);
      itemList = *p_itemList;
      if ( *p_itemList )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v29,
          (System_Collections_Generic_List_object__o *)itemList,
          (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v30 = v29;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v30,
                  (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( v30.fields._current )
          {
            v28 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(v30.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v28
              && (FollowerSelectItemListViewItem_c *)v30.fields._current->klass->_2.typeHierarchy[v28 - 1] == FollowerSelectItemListViewItem_TypeInfo )
            {
              FollowerSelectItemListViewItem__AnalyzeEntity(
                (FollowerSelectItemListViewItem_o *)v30.fields._current,
                followerClassId,
                v27);
            }
          }
        }
        goto LABEL_24;
      }
    }
    sub_1B00F28(itemList, v18);
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

  if ( (byte_48E6AB3 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_17292/*"btn_sefilter_2_on"*/, method);
    sub_1B00CCC(&StringLiteral_17291/*"btn_sefilter_2"*/, v3);
    byte_48E6AB3 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (bonusFilterSprite = this->fields.bonusFilterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !bonusFilterSprite) )
  {
    sub_1B00F28(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17291/*"btn_sefilter_2"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17292/*"btn_sefilter_2_on"*/;
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
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  FollowerSelectItemListViewManager__SetMode_45002464(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__SetMode_45002464(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  char *ClippingObjectList; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  int32_t v13; // w20
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  __int64 *v16; // x8
  const MethodInfo *v17; // x1
  int32_t v18; // w8
  System_Collections_Generic_List_object__o *v19; // x20
  int32_t v20; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v22; // x23
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  int32_t v25; // w3
  struct FollowerSelectItemListViewObject_o *tutorialListViewObject; // x23
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2

  if ( (byte_48E6AA9 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B00CCC(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v7);
    sub_1B00CCC(&StringLiteral_9825/*"OnMoveEnd"*/, v8);
    sub_1B00CCC(&StringLiteral_11124/*"RequestInto"*/, v9);
    byte_48E6AA9 = 1;
  }
  if ( mode != 3 )
  {
    this->fields.initMode = mode;
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
    ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
    if ( mode == 1 )
    {
      v16 = &StringLiteral_11124/*"RequestInto"*/;
    }
    else
    {
      if ( mode != 4 )
      {
        if ( mode == 2 )
          FollowerSelectItemListViewManager__RequestListObject_45003216(this, 3, v15);
        return;
      }
      ListViewManager__set_IsInput((ListViewManager_o *)this, 1, 0LL);
      ClippingObjectList = (char *)FollowerSelectItemListViewManager__get_ClippingObjectList(this, v17);
      if ( !ClippingObjectList )
        goto LABEL_31;
      v18 = *((_DWORD *)ClippingObjectList + 6);
      v19 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
      if ( v18 >= 1 )
      {
        this->fields.callbackCount = v18;
        v20 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v19,
                   v20,
                   (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
          v22 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
          System_Action___ctor(v22, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
            break;
          if ( v20 )
          {
            FollowerSelectItemListViewObject__Init_45003720((FollowerSelectItemListViewObject_o *)Item, 2, v22, v23);
          }
          else
          {
            FollowerSelectItemListViewObject__Init_45003720((FollowerSelectItemListViewObject_o *)Item, 0, v22, v23);
            ClippingObjectList = (char *)this->fields.tutorialListViewObject;
            if ( !ClippingObjectList )
              break;
            ClippingObjectList = (char *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)ClippingObjectList,
                                           0LL);
            if ( !ClippingObjectList )
              break;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ClippingObjectList, 1, 0LL);
            ClippingObjectList = (char *)this->fields.tutorialListViewObject;
            if ( !ClippingObjectList )
              break;
            *((_QWORD *)ClippingObjectList + 5) = this;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(ClippingObjectList + 40), (int32_t)this, v24, v25);
            tutorialListViewObject = this->fields.tutorialListViewObject;
            ClippingObjectList = (char *)FollowerSelectItemListViewObject__GetItem(
                                           (FollowerSelectItemListViewObject_o *)Item,
                                           v27);
            if ( !tutorialListViewObject )
              break;
            ((void (__fastcall *)(struct FollowerSelectItemListViewObject_o *, char *, Il2CppMethodPointer))tutorialListViewObject->klass->vtable._5_SetItem.method)(
              tutorialListViewObject,
              ClippingObjectList,
              tutorialListViewObject->klass->vtable._6_SetItem.methodPtr);
            ClippingObjectList = (char *)this->fields.tutorialListViewObject;
            if ( !ClippingObjectList )
              break;
            FollowerSelectItemListViewObject__Init_45001324(
              (FollowerSelectItemListViewObject_o *)ClippingObjectList,
              6,
              v28);
          }
          if ( ++v20 >= v19->fields._size )
            return;
        }
LABEL_31:
        sub_1B00F28(ClippingObjectList, v11);
      }
      this->fields.callbackCount = 1;
      v16 = &StringLiteral_9825/*"OnMoveEnd"*/;
    }
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)*v16, 0.0, 0LL);
    return;
  }
  ClippingObjectList = (char *)FollowerSelectItemListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ClippingObjectList )
    goto LABEL_31;
  v12 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
  if ( *((int *)ClippingObjectList + 6) >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      ClippingObjectList = (char *)System_Collections_Generic_List_object___get_Item(
                                     v12,
                                     v13,
                                     (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
      if ( !ClippingObjectList )
        break;
      FollowerSelectItemListViewObject__Init_45001324((FollowerSelectItemListViewObject_o *)ClippingObjectList, 5, v14);
      if ( ++v13 >= v12->fields._size )
        return;
    }
    goto LABEL_31;
  }
}


void __fastcall FollowerSelectItemListViewManager__SetMode_45003164(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  FollowerSelectItemListViewManager__SetMode_45002464(this, mode, v6);
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

  if ( (byte_48E6AA6 & 1) == 0 )
  {
    sub_1B00CCC(&FollowerSelectItemListViewObject_TypeInfo, obj);
    byte_48E6AA6 = 1;
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
    sub_1B00F28(v7, obj);
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
  FollowerSelectItemListViewObject__Init_45001324(
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
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  __int64 v10; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *sortKindLabel; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  System_String_o **v16; // x8
  struct ListViewSort_o *v17; // x8
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  System_String_o **v21; // x8

  if ( (byte_48E6AB7 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_17299/*"btn_sort_up"*/, v3);
    sub_1B00CCC(&StringLiteral_17386/*"btn_txt_up"*/, v4);
    sub_1B00CCC(&StringLiteral_17342/*"btn_txt_new"*/, v5);
    sub_1B00CCC(&StringLiteral_17332/*"btn_txt_down"*/, v6);
    sub_1B00CCC(&StringLiteral_17349/*"btn_txt_old"*/, v7);
    sub_1B00CCC(&StringLiteral_17296/*"btn_sort_down"*/, v8);
    byte_48E6AB7 = 1;
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    sortKindLabel = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !sortKindLabel )
      goto LABEL_34;
    UILabel__set_text(sortKindLabel, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v14 = this->fields.sort;
    if ( v14 )
    {
      sortKind = v14->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17349/*"btn_txt_old"*/ : &StringLiteral_17342/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17296/*"btn_sort_down"*/;
              v19 = (System_String_o **)&StringLiteral_17299/*"btn_sort_up"*/;
LABEL_30:
              if ( v17->fields.isAscendingOrder )
                v21 = v18;
              else
                v21 = v19;
              UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
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
          v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17386/*"btn_txt_up"*/ : &StringLiteral_17332/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17299/*"btn_sort_up"*/;
              v19 = (System_String_o **)&StringLiteral_17296/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1B00F28(sort, v10);
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
  System_Collections_Generic_List_object__o *v16; // x21
  const MethodInfo *v17; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x20
  int size; // w25
  int32_t v21; // w22
  int v22; // w26
  Il2CppObject *v23; // x23
  __int64 methodPtr_low; // x10
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_List_object__o *v31; // x22
  int32_t v32; // w2
  int32_t v33; // w3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  if ( (byte_48E6AB9 & 1) == 0 )
  {
    sub_1B00CCC(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classPos);
    sub_1B00CCC(&FollowerSelectItemListViewItem_TypeInfo, v5);
    sub_1B00CCC(&FollowerSelectItemListViewManager_TypeInfo, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem___ctor___74530888, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1B00CCC(&System_Collections_Generic_List_ListViewItem__TypeInfo, v12);
    byte_48E6AB9 = 1;
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
  v16 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  p_itemList = &this->fields.itemList;
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_43;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v21 = 0;
    v22 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v21,
                                                                (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      v23 = (Il2CppObject *)itemList;
      methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (FollowerSelectItemListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != FollowerSelectItemListViewItem_TypeInfo )
      {
        break;
      }
      itemList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewItem__get_SvtId(
                                                                (FollowerSelectItemListViewItem_o *)itemList,
                                                                v17);
      if ( (int)itemList >= 1 )
      {
        HIDWORD(v23[1].klass) = v22;
        if ( !v16 )
          break;
        items = v16->fields._items;
        v28 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v16->fields._version;
        if ( !items )
          break;
        v29 = v16->fields._size;
        if ( (unsigned int)v29 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            v23,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + v29;
          v16->fields._size = v29 + 1;
          v30[4] = (Il2CppClass *)v23;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v23, v25, v26);
        }
        ++v22;
      }
      if ( size == ++v21 )
        goto LABEL_30;
      itemList = (System_Collections_Generic_List_object__o *)*p_itemList;
    }
    while ( *p_itemList );
LABEL_43:
    sub_1B00F28(itemList, v17);
  }
LABEL_30:
  v31 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor_54268612(
    v31,
    (System_Collections_Generic_IEnumerable_T__o *)v16,
    (const MethodInfo_33C12C4 *)Method_System_Collections_Generic_List_ListViewItem___ctor___74530888);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v31;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.itemList, (int32_t)v31, v32, v33);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t RefreshRemain; // x0
  __int64 v11; // x1
  __int64 v12; // x20
  UnityEngine_GameObject_o *refreshButtonObject; // x0
  Il2CppObject *v14; // x21
  Il2CppObject *v15; // x21
  UIWidget_o *refreshButtonSprite; // x21
  int64_t Time; // x0
  int64_t v18; // x21
  UILabel_o *refreshRemainLabel; // x22
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  Il2CppObject *Component_object; // x20
  Il2CppObject *v25; // x20
  __int64 v26; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_48E6ABA & 1) == 0 )
  {
    sub_1B00CCC(&FollowerListRequest_TypeInfo, method);
    sub_1B00CCC(&FollowerSelectItemListViewManager_TypeInfo, v3);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, v4);
    sub_1B00CCC(&long_TypeInfo, v5);
    sub_1B00CCC(&NetworkManager_TypeInfo, v6);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v7);
    sub_1B00CCC(&StringLiteral_24618/*"{0}"*/, v8);
    sub_1B00CCC(&StringLiteral_1/*""*/, v9);
    byte_48E6ABA = 1;
  }
  if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
  RefreshRemain = FollowerListRequest__getRefreshRemain(0LL);
  if ( RefreshRemain <= 0 )
  {
    if ( !this->fields.isRefreshClear )
      return;
    refreshButtonObject = this->fields.refreshButtonObject;
    this->fields.isRefreshClear = 0;
    if ( !refreshButtonObject )
      goto LABEL_51;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         refreshButtonObject,
                         (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    refreshButtonObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                        (UnityEngine_Object_o *)Component_object,
                                                        0LL,
                                                        0LL);
    if ( ((unsigned __int8)refreshButtonObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_51;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0LL);
    }
    else
    {
      refreshButtonObject = (UnityEngine_GameObject_o *)this->fields.refreshButtonSprite;
      if ( !refreshButtonObject )
        goto LABEL_51;
      v27.fields.r = 1.0;
      v27.fields.g = 1.0;
      v27.fields.b = 1.0;
      v27.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)refreshButtonObject, v27, 0LL);
    }
    refreshButtonObject = this->fields.refreshTitleObject;
    if ( refreshButtonObject )
    {
      v25 = UnityEngine_GameObject__GetComponent_object_(
              refreshButtonObject,
              (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      refreshButtonObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                          (UnityEngine_Object_o *)v25,
                                                          0LL,
                                                          0LL);
      if ( ((unsigned __int8)refreshButtonObject & 1) != 0 )
      {
        if ( !v25 )
          goto LABEL_51;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v25, 1, 0LL);
      }
      else
      {
        refreshButtonObject = (UnityEngine_GameObject_o *)this->fields.refreshTitleSprite;
        if ( !refreshButtonObject )
          goto LABEL_51;
        v28.fields.r = 1.0;
        v28.fields.g = 1.0;
        v28.fields.b = 1.0;
        v28.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)refreshButtonObject, v28, 0LL);
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
LABEL_51:
    sub_1B00F28(refreshButtonObject, v11);
  }
  v12 = RefreshRemain;
  refreshButtonObject = this->fields.refreshButtonObject;
  if ( !refreshButtonObject )
    goto LABEL_51;
  v14 = UnityEngine_GameObject__GetComponent_object_(
          refreshButtonObject,
          (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  refreshButtonObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                      (UnityEngine_Object_o *)v14,
                                                      0LL,
                                                      0LL);
  if ( ((unsigned __int8)refreshButtonObject & 1) != 0 )
  {
    if ( !v14 )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v14, 0, 0LL);
  }
  refreshButtonObject = this->fields.refreshTitleObject;
  if ( !refreshButtonObject )
    goto LABEL_51;
  v15 = UnityEngine_GameObject__GetComponent_object_(
          refreshButtonObject,
          (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  refreshButtonObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                      (UnityEngine_Object_o *)v15,
                                                      0LL,
                                                      0LL);
  if ( ((unsigned __int8)refreshButtonObject & 1) != 0 )
  {
    if ( !v15 )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v15, 0, 0LL);
  }
  refreshButtonSprite = (UIWidget_o *)this->fields.refreshButtonSprite;
  refreshButtonObject = (UnityEngine_GameObject_o *)FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    refreshButtonObject = (UnityEngine_GameObject_o *)FollowerSelectItemListViewManager_TypeInfo;
  }
  if ( !refreshButtonSprite )
    goto LABEL_51;
  UIWidget__set_color(
    refreshButtonSprite,
    *(UnityEngine_Color_o *)(*(_QWORD *)&refreshButtonObject[7].fields.m_CachedPtr + 20LL),
    0LL);
  refreshButtonObject = (UnityEngine_GameObject_o *)this->fields.refreshTitleSprite;
  if ( !refreshButtonObject )
    goto LABEL_51;
  UIWidget__set_color(
    (UIWidget_o *)refreshButtonObject,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->REFRESH_DARK_COLOR,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( this->fields.refreshCheckTime != Time )
  {
    v18 = Time;
    refreshButtonObject = (UnityEngine_GameObject_o *)this->fields.refreshRemainLabel;
    this->fields.isRefreshClear = 1;
    if ( refreshButtonObject )
    {
      refreshButtonObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)refreshButtonObject, 0LL);
      if ( refreshButtonObject )
      {
        UnityEngine_GameObject__SetActive(refreshButtonObject, 1, 0LL);
        refreshRemainLabel = this->fields.refreshRemainLabel;
        v26 = v12;
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v26, v20, v21, v22);
        refreshButtonObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                            (System_String_o *)StringLiteral_24618/*"{0}"*/,
                                                            v23,
                                                            0LL);
        if ( refreshRemainLabel )
        {
          UILabel__set_text(refreshRemainLabel, (System_String_o *)refreshButtonObject, 0LL);
          this->fields.refreshCheckTime = v18;
          return;
        }
      }
    }
    goto LABEL_51;
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

  if ( (byte_48E6A92 & 1) == 0 )
  {
    sub_1B00CCC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_48E6A92 = 1;
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
    v8 = sub_1B3C1BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B011E8(v7);
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

  if ( (byte_48E6A94 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, value);
    byte_48E6A94 = 1;
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
    v8 = sub_1B3C1BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B011E8(v7);
  FollowerSelectItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_FollowerSelectItemListViewObject__o *__fastcall FollowerSelectItemListViewManager__get_ClippingObjectList(
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_48E6A99 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__, v8);
    sub_1B00CCC(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo, v9);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v10);
    byte_48E6A99 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B00F28(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B00F28(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1B00F28(0LL, v18);
      Item = (ListViewItem_o *)FollowerSelectItemListViewObject__GetItem(
                                 (FollowerSelectItemListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1B00F28(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_39433736((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1B00F28(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1B00F28(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1B00F28(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1B00F28(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FollowerSelectItemListViewObject__o *)v11;
}


System_Collections_Generic_List_FollowerSelectItemListViewObject__o *__fastcall FollowerSelectItemListViewManager__get_ObjectList(
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_48E6A98 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__, v8);
    sub_1B00CCC(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo, v9);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v10);
    byte_48E6A98 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B00F28(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B00F28(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1B00F28(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B00F28(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FollowerSelectItemListViewObject__o *)v11;
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

  if ( (byte_48E6A93 & 1) == 0 )
  {
    sub_1B00CCC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_48E6A93 = 1;
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
    v8 = sub_1B3C1BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B011E8(v7);
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

  if ( (byte_48E6A95 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, value);
    byte_48E6A95 = 1;
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
    v8 = sub_1B3C1BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B011E8(v7);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B00D8C(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B00F44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B00DF4(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1950758;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1950700;
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
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = result;
  v16 = kind;
  if ( (byte_48E6AC3 & 1) == 0 )
  {
    sub_1B00CCC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B00CCC(&FollowerSelectItemListViewManager_ResultKind_TypeInfo, v9);
    byte_48E6AC3 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             FollowerSelectItemListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1B00C80(this, v14, callback, object);
}


void __fastcall FollowerSelectItemListViewManager_CallbackFunc__EndInvoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B00C84(result, 0LL, method);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E6AC4 & 1) == 0 )
  {
    sub_1B00CCC(&FollowerSelectItemListViewManager___c_TypeInfo, v1);
    byte_48E6AC4 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(FollowerSelectItemListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FollowerSelectItemListViewManager___c_TypeInfo->static_fields->__9 = (struct FollowerSelectItemListViewManager___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)FollowerSelectItemListViewManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  System_NotImplementedException_o *v11; // x19
  __int64 v12; // x0

  if ( (byte_48E6AC5 & 1) == 0 )
  {
    sub_1B00CCC(&ListViewSort_TypeInfo, *(_QWORD *)&questType);
    sub_1B00CCC(&StringLiteral_6684/*"FollowerSelectEventQuest"*/, v4);
    sub_1B00CCC(&StringLiteral_6685/*"FollowerSelectMainQuest"*/, v5);
    byte_48E6AC5 = 1;
  }
  if ( questType )
  {
    if ( questType != 1 )
    {
      v10 = sub_1B00CE0(&System_NotImplementedException_TypeInfo);
      v11 = (System_NotImplementedException_o *)sub_1B00F18(v10);
      System_NotImplementedException___ctor(v11, 0LL);
      v12 = sub_1B00CE0(&Method_FollowerSelectItemListViewManager___c___cctor_b__124_0__);
      sub_1B00DF4(v11, v12);
    }
    v6 = &StringLiteral_6684/*"FollowerSelectEventQuest"*/;
  }
  else
  {
    v6 = &StringLiteral_6685/*"FollowerSelectMainQuest"*/;
  }
  v7 = (System_String_o *)*v6;
  v8 = (ListViewSort_o *)sub_1B00F18(ListViewSort_TypeInfo);
  ListViewSort___ctor_39464988(v8, v7, 11, 0, 0LL);
  return v8;
}