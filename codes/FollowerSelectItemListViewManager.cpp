void __fastcall FollowerSelectItemListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerSelectItemListViewManager___c_c *v5; // x0
  Il2CppObject *v6; // x19
  System_Func_T__TResult__o *v7; // x20
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4AB0FCC & 1) == 0 )
  {
    sub_1BAB41C(&FollowerSelectItemListViewManager_TypeInfo, v1);
    sub_1BAB41C(&System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo, v2);
    sub_1BAB41C(&Method_FollowerSelectItemListViewManager___c___cctor_b__133_0__, v3);
    sub_1BAB41C(&FollowerSelectItemListViewManager___c_TypeInfo, v4);
    byte_4AB0FCC = 1;
  }
  v5 = FollowerSelectItemListViewManager___c_TypeInfo;
  if ( !FollowerSelectItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager___c_TypeInfo);
    v5 = FollowerSelectItemListViewManager___c_TypeInfo;
  }
  v6 = (Il2CppObject *)v5->static_fields->__9;
  v7 = (System_Func_T__TResult__o *)sub_1BAB668(System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo);
  System_Func_Int32Enum__object____ctor(v7, v6, Method_FollowerSelectItemListViewManager___c___cctor_b__133_0__, 0LL);
  FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT = (struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)v7;
  sub_1BAB3C0(FollowerSelectItemListViewManager_TypeInfo->static_fields);
  static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->lastSelectedQuestId = -1LL;
  static_fields->REFRESH_DARK_COLOR = (struct UnityEngine_Color_o)xmmword_BC35F0;
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

  if ( (byte_4AB0FA1 & 1) == 0 )
  {
    sub_1BAB41C(&AtlasManager_TypeInfo, method);
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1BAB41C(&StringLiteral_17506/*"btn_bg_12"*/, v4);
    sub_1BAB41C(&StringLiteral_17563/*"btn_sefilter_2"*/, v5);
    sub_1BAB41C(&StringLiteral_17701/*"buttontxt_formation_19"*/, v6);
    byte_4AB0FA1 = 1;
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
  AtlasManager__SetEventSprite(changeSkillButtonSprite, (System_String_o *)StringLiteral_17701/*"buttontxt_formation_19"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.bonusFilterSprite, (System_String_o *)StringLiteral_17563/*"btn_sefilter_2"*/, 0LL);
  changeSkillButton = (UnityEngine_Component_o *)this->fields.bonusFilterSprite;
  if ( !changeSkillButton
    || (changeSkillButton = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))changeSkillButton->klass[2]._1.typeMetadataHandle)(
                                                         changeSkillButton,
                                                         changeSkillButton->klass[2]._1.interopData),
        !sortKindButton)
    || (Component_object = UnityEngine_Component__GetComponent_object_(
                             sortKindButton,
                             (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        changeSkillButton = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(
                                                         (UISprite_o *)Component_object,
                                                         (System_String_o *)StringLiteral_17506/*"btn_bg_12"*/,
                                                         0LL),
        !Component_object) )
  {
LABEL_11:
    sub_1BAB678(changeSkillButton, method);
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
    sub_1BAB678(classButtonControl, *(_QWORD *)&classPos);
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

  if ( (byte_4AB0FBE & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isResult);
    byte_4AB0FBE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v6);
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
  System_Collections_Generic_List_object__o *v56; // x24
  System_Collections_Generic_List_object__o *v57; // x24
  System_Collections_Generic_List_object__o *v58; // x24
  __int64 ReturnTypeByQuestId; // x0
  __int64 v60; // x1
  FollowerSelectItemListViewManager_c *v61; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct ListViewSort_o **p_sort; // x24
  const MethodInfo *v64; // x4
  int32_t InitialDisplayClass; // w25
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
  System_Int32_array *OngoingQuestTargetEventIds; // x25
  EventUpValSetupInfo_o *v68; // x26
  __int64 v69; // x8
  __int64 v70; // x26
  unsigned __int64 v71; // x20
  int32_t v72; // w0
  ClassButtonControlComponent_o *classButtonControl; // x24
  ClassButtonControlComponent_CallbackFunc_o *v74; // x26
  ClassButtonControlComponent_o *v75; // x24
  const MethodInfo *v76; // x2
  QuestPhaseEntity_o *v77; // x29
  long double v78; // q0
  __int64 v79; // x0
  __int64 v80; // x0
  Il2CppObject *MasterData_object; // x23
  FollowerInfo_array *QuestFollowerList; // x27
  int v83; // w20
  QuestRestrictionInfo_o *v84; // x19
  bool IsMyServantOrNpcRestriction_40849320; // w26
  BalanceConfig_c *v86; // x0
  int32_t ClassBoardReleaseQuestId; // w24
  bool IsQuestClear_37980612; // w24
  __int64 v89; // x8
  FollowerSelectItemListViewManager_o *v90; // x19
  QuestRestrictionInfo_o *v91; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v92; // x28
  unsigned __int64 v93; // x21
  FollowerInfo_o *v94; // x24
  __int64 v95; // x25
  int32_t v96; // w0
  System_Int32_array *NpcServantIndividuality; // x0
  bool IsRecommendedFollower; // w19
  __int64 v99; // x26
  __int64 v100; // x28
  int32_t v101; // w0
  System_Collections_Generic_List_object__o *v102; // x25
  char v103; // w20
  ClassBoardClassMaster_o *v104; // x27
  QuestPhaseEntity_o *v105; // x19
  int32_t v106; // w0
  ServantLeaderInfo_o *ServantLeaderInfo; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v108; // x28
  __int64 v109; // x26
  __int64 v110; // x29
  int32_t ClassBoardBaseId; // w26
  Il2CppObject *Master_object; // x28
  ClassBoardInfo_o *v113; // x20
  QuestPhaseEntity_o *v114; // x23
  int32_t v115; // w29
  Il2CppObject *v116; // x26
  struct System_Object_array *items; // x8
  _QWORD *v118; // x9
  __int64 size; // x10
  Il2CppClass **v120; // x0
  FollowerSelectItemListViewManager_c *v121; // x0
  int32_t v122; // w28
  EventUpValSetupInfo_o *setupInfo; // x22
  struct System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x20
  bool isServantEquipBonusFilterEnable; // w23
  bool isServantBonusFilterEnable; // w26
  bool isBonusFilterEnable; // w27
  FollowerSelectItemListViewItem_o *v128; // x25
  __int64 v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  __int64 v132; // x8
  __int64 v133; // x8
  _QWORD *v134; // x9
  __int64 v135; // x10
  __int64 v136; // x8
  __int64 v137; // x8
  _QWORD *v138; // x9
  __int64 v139; // x10
  __int64 v140; // x8
  int v141; // w20
  bool v142; // w8
  FollowerSelectItemListViewManager_o *v143; // x20
  Il2CppClass *klass; // x23
  int namespaze; // w8
  Il2CppObject *v146; // x24
  void **v147; // x8
  Il2CppObject *v148; // x0
  Il2CppObject *v149; // x25
  __int64 v150; // x27
  BalanceConfig_c *v151; // x0
  struct BalanceConfig_StaticFields *v152; // x9
  int32_t FixEventSupportDeckNum; // w25
  int32_t FixMainSupportDeckNum; // w26
  int32_t deckPriority; // w28
  unsigned __int64 v156; // x21
  System_Collections_Generic_Dictionary_int__int__o *v157; // x25
  int32_t v158; // w22
  bool v159; // w29
  bool v160; // w27
  FollowerSelectItemListViewItem_o *v161; // x26
  __int64 v162; // x8
  _QWORD *v163; // x9
  __int64 v164; // x10
  __int64 v165; // x8
  struct BalanceConfig_StaticFields *v166; // x8
  int32_t v167; // w26
  int32_t v168; // w28
  int32_t v169; // w26
  unsigned __int64 v170; // x22
  int32_t v171; // w21
  Il2CppClass *v172; // x21
  EventUpValSetupInfo_o *v173; // x23
  bool v174; // w24
  System_Collections_Generic_Dictionary_int__int__o *v175; // x19
  int v176; // w27
  bool v177; // w25
  bool v178; // w29
  FollowerSelectItemListViewItem_o *v179; // x28
  __int64 v180; // x8
  _QWORD *v181; // x9
  __int64 v182; // x10
  __int64 v183; // x8
  Il2CppClass *v184; // x26
  unsigned __int64 namespaze_low; // x8
  unsigned __int64 v186; // x27
  __int64 v187; // x9
  __int64 v188; // x9
  void **v189; // x8
  FollowerInfo_o *v190; // x8
  Il2CppObject *v191; // x0
  __int64 v192; // x21
  BalanceConfig_c *v193; // x0
  struct BalanceConfig_StaticFields *v194; // x9
  int32_t v195; // w24
  int32_t v196; // w25
  int32_t v197; // w25
  unsigned __int64 v198; // x22
  System_Collections_Generic_Dictionary_int__int__o *v199; // x23
  int32_t v200; // w29
  bool v201; // w21
  bool v202; // w28
  bool v203; // w19
  FollowerSelectItemListViewItem_o *v204; // x24
  __int64 v205; // x8
  _QWORD *v206; // x9
  __int64 v207; // x10
  __int64 v208; // x8
  struct BalanceConfig_StaticFields *v209; // x8
  int32_t v210; // w24
  int32_t v211; // w25
  int32_t v212; // w25
  unsigned __int64 v213; // x23
  int32_t v214; // w22
  EventUpValSetupInfo_o *v215; // x19
  int32_t v216; // w21
  bool v217; // w26
  System_Collections_Generic_Dictionary_int__int__o *v218; // x27
  int v219; // w22
  bool v220; // w29
  bool v221; // w24
  FollowerSelectItemListViewItem_o *v222; // x28
  __int64 v223; // x8
  _QWORD *v224; // x9
  __int64 v225; // x10
  __int64 v226; // x8
  Il2CppClass *v227; // x19
  unsigned __int64 v228; // x8
  unsigned __int64 v229; // x22
  Il2CppType *p_byval_arg; // x20
  __int64 v231; // x9
  __int64 v232; // x9
  __int64 v233; // x26
  __int64 v234; // x8
  __int64 v235; // x8
  __int64 v236; // x8
  __int64 v237; // x27
  __int64 v238; // x28
  FollowerInfo_o *v239; // x27
  int32_t v240; // w21
  bool v241; // w19
  bool v242; // w28
  bool v243; // w25
  EventUpValSetupInfo_o *v244; // x29
  System_Collections_Generic_Dictionary_int__int__o *v245; // x24
  FollowerSelectItemListViewItem_o *v246; // x26
  __int64 v247; // x8
  _QWORD *v248; // x9
  __int64 v249; // x10
  __int64 v250; // x8
  const MethodInfo *v251; // x2
  FollowerSelectItemListViewManager_c *v252; // x0
  const MethodInfo *v253; // x2
  const MethodInfo *v254; // x1
  struct UIScrollView_o *scrollView; // x8
  __int64 v256; // x0
  int32_t supportDeckId; // [xsp+38h] [xbp-178h]
  int32_t supportDeckIda; // [xsp+38h] [xbp-178h]
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary; // [xsp+48h] [xbp-168h]
  const MethodInfo *v260; // [xsp+60h] [xbp-150h]
  UserFollowMaster_o *v261; // [xsp+70h] [xbp-140h]
  bool HasFlag_39862760; // [xsp+78h] [xbp-138h]
  unsigned int v263; // [xsp+7Ch] [xbp-134h]
  struct System_Collections_Generic_List_ListViewItem__o **p_recommendItemList; // [xsp+80h] [xbp-130h]
  bool v267; // [xsp+90h] [xbp-120h]
  __int64 v268; // [xsp+90h] [xbp-120h]
  int v269; // [xsp+90h] [xbp-120h]
  Il2CppObject *v270; // [xsp+98h] [xbp-118h]
  __int64 v271; // [xsp+98h] [xbp-118h]
  __int64 v272; // [xsp+98h] [xbp-118h]
  struct System_Collections_Generic_List_ListViewItem__o **p_originalItemList; // [xsp+A0h] [xbp-110h]
  FollowerInfo_array *v274; // [xsp+A8h] [xbp-108h]
  int v275; // [xsp+A8h] [xbp-108h]
  Il2CppClass *v276; // [xsp+A8h] [xbp-108h]
  bool isReleasedClassBoard; // [xsp+B0h] [xbp-100h]
  bool v278; // [xsp+B0h] [xbp-100h]
  __int64 v279; // [xsp+B0h] [xbp-100h]
  unsigned __int64 v280; // [xsp+B0h] [xbp-100h]
  EventUpValSetupInfo_o *v281; // [xsp+B8h] [xbp-F8h]
  EventUpValSetupInfo_o *v282; // [xsp+B8h] [xbp-F8h]
  EventUpValSetupInfo_o *v283; // [xsp+B8h] [xbp-F8h]
  bool v284; // [xsp+C0h] [xbp-F0h]
  __int64 v285; // [xsp+C0h] [xbp-F0h]
  __int64 v286; // [xsp+C0h] [xbp-F0h]
  int32_t pos; // [xsp+C8h] [xbp-E8h]
  FollowerInfo_o **posa; // [xsp+C8h] [xbp-E8h]
  FollowerInfo_o **posb; // [xsp+C8h] [xbp-E8h]
  _BOOL4 followerClassId; // [xsp+D0h] [xbp-E0h]
  EventUpValSetupInfo_o *followerClassIdc; // [xsp+D0h] [xbp-E0h]
  int32_t followerClassIda; // [xsp+D0h] [xbp-E0h]
  __int64 followerClassIdb; // [xsp+D0h] [xbp-E0h]
  struct System_Collections_Generic_List_ListViewItem__o **p_mixItemList; // [xsp+D8h] [xbp-D8h]
  UserFollowMaster_o *v295; // [xsp+D8h] [xbp-D8h]
  int32_t index; // [xsp+F8h] [xbp-B8h]
  FollowerInfo_o *indexc; // [xsp+F8h] [xbp-B8h]
  FollowerInfo_o *indexd; // [xsp+F8h] [xbp-B8h]
  FollowerInfo_o *indexe; // [xsp+F8h] [xbp-B8h]
  int32_t indexa; // [xsp+F8h] [xbp-B8h]
  Il2CppClass *indexb; // [xsp+F8h] [xbp-B8h]
  FollowerInfo_o **m_Items; // [xsp+100h] [xbp-B0h]
  int32_t v307; // [xsp+100h] [xbp-B0h]
  int32_t v308; // [xsp+100h] [xbp-B0h]
  int32_t v309; // [xsp+100h] [xbp-B0h]
  FollowerInfo_o *v310; // [xsp+100h] [xbp-B0h]
  bool v311; // [xsp+100h] [xbp-B0h]
  Il2CppObject *v313; // [xsp+110h] [xbp-A0h] BYREF
  Il2CppObject *v314; // [xsp+118h] [xbp-98h] BYREF
  Il2CppObject *v315; // [xsp+120h] [xbp-90h] BYREF
  UserClassBoardSquareEntity_o *v316; // [xsp+128h] [xbp-88h] BYREF
  Il2CppObject *v317; // [xsp+130h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+138h] [xbp-78h] BYREF
  Il2CppObject *v319; // [xsp+140h] [xbp-70h] BYREF
  NpcFollowerEntity_o *v320; // [xsp+148h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v321; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v322; // 0:x0.16

  if ( (byte_4AB0FA3 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, *(_QWORD *)&questId);
    sub_1BAB41C(&ClassButtonControlComponent_CallbackFunc_TypeInfo, v8);
    sub_1BAB41C(&ClassBoardInfo_TypeInfo, v9);
    sub_1BAB41C(&ClassButtonControlComponent_TypeInfo, v10);
    sub_1BAB41C(&CondType_TypeInfo, v11);
    sub_1BAB41C(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v12);
    sub_1BAB41C(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___, v13);
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestMaster___, v14);
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v15);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserFollowMaster___, v16);
    sub_1BAB41C(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v17);
    sub_1BAB41C(&Method_DataManager_GetMaster_EventQuestMaster___, v18);
    sub_1BAB41C(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v19);
    sub_1BAB41C(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, v20);
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantMaster___, v21);
    sub_1BAB41C(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, v22);
    sub_1BAB41C(&Method_DataManager_GetMaster_UserFollowerMaster___, v23);
    sub_1BAB41C(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___, v24);
    sub_1BAB41C(&DataManager_TypeInfo, v25);
    sub_1BAB41C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v26);
    sub_1BAB41C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27);
    sub_1BAB41C(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v28);
    sub_1BAB41C(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v29);
    sub_1BAB41C(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v30);
    sub_1BAB41C(
      &Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__,
      v31);
    sub_1BAB41C(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v32);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Contains_int___, v33);
    sub_1BAB41C(&EventUpValSetupInfo_TypeInfo, v34);
    sub_1BAB41C(&FollowerSelectItemListViewItem_TypeInfo, v35);
    sub_1BAB41C(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v36);
    sub_1BAB41C(&FollowerSelectItemListViewManager_TypeInfo, v37);
    sub_1BAB41C(&int___TypeInfo, v38);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v39);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ClassBoardInfo__Add__, v40);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__, v41);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ClassBoardInfo___ctor__, v42);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v43);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v44);
    sub_1BAB41C(&System_Collections_Generic_List_ListViewItem__TypeInfo, v45);
    sub_1BAB41C(&System_Collections_Generic_List_ClassBoardInfo__TypeInfo, v46);
    sub_1BAB41C(&System_Math_TypeInfo, v47);
    sub_1BAB41C(&NetworkManager_TypeInfo, v48);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v49);
    sub_1BAB41C(&ServantLeaderInfo___TypeInfo, v50);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v51);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v52);
    sub_1BAB41C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v53);
    sub_1BAB41C(&StringLiteral_3307/*"BonusFilterEventId"*/, v54);
    sub_1BAB41C(&StringLiteral_1/*""*/, v55);
    byte_4AB0FA3 = 1;
  }
  v319 = 0LL;
  v320 = 0LL;
  v317 = 0LL;
  entity = 0LL;
  v315 = 0LL;
  v316 = 0LL;
  v313 = 0LL;
  v314 = 0LL;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BAB3C0(&this->fields.questRestrictionInfo);
  v56 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v56,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.mixItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v56;
  p_mixItemList = &this->fields.mixItemList;
  sub_1BAB3C0(&this->fields.mixItemList);
  v57 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v57,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.originalItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v57;
  p_originalItemList = &this->fields.originalItemList;
  sub_1BAB3C0(&this->fields.originalItemList);
  v58 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v58,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.recommendItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v58;
  p_recommendItemList = &this->fields.recommendItemList;
  sub_1BAB3C0(&this->fields.recommendItemList);
  ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0LL);
  v61 = FollowerSelectItemListViewManager_TypeInfo;
  v263 = ReturnTypeByQuestId;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v61 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v61->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT )
    goto LABEL_352;
  this->fields.sort = (struct ListViewSort_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))LIST_VIEW_SORT->fields.m_target)(
                                                 LIST_VIEW_SORT->fields.original_method_info,
                                                 v263,
                                                 *(_QWORD *)&LIST_VIEW_SORT->fields.extra_arg);
  p_sort = &this->fields.sort;
  ReturnTypeByQuestId = sub_1BAB3C0(&this->fields.sort);
  if ( !this->fields.sort )
    goto LABEL_352;
  InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                          this,
                          questId,
                          questPhase,
                          this->fields.sort->fields.isRequestLoad,
                          v64);
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
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_352;
  OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                 (EventQuestMaster_o *)ReturnTypeByQuestId,
                                 questId,
                                 questPhase,
                                 0LL,
                                 0LL);
  v68 = (EventUpValSetupInfo_o *)sub_1BAB668(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_39297716(v68, OngoingQuestTargetEventIds, 0, questId, questPhase, 0LL);
  this->fields.setupInfo = v68;
  ReturnTypeByQuestId = sub_1BAB3C0(&this->fields.setupInfo);
  if ( !OngoingQuestTargetEventIds )
    goto LABEL_352;
  if ( *(_QWORD *)&OngoingQuestTargetEventIds->max_length )
  {
    ReturnTypeByQuestId = (__int64)UnityEngine_PlayerPrefs__GetString_69758896(
                                     (System_String_o *)StringLiteral_3307/*"BonusFilterEventId"*/,
                                     0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_352;
    if ( *(int *)(ReturnTypeByQuestId + 16) < 1 )
      goto LABEL_24;
    ReturnTypeByQuestId = (__int64)System_String__Split((System_String_o *)ReturnTypeByQuestId, 0x2Cu, 0, 0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_352;
    v69 = *(_QWORD *)(ReturnTypeByQuestId + 24);
    v70 = ReturnTypeByQuestId;
    if ( (int)v69 < 1 )
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
      v71 = 0LL;
      while ( 1 )
      {
        if ( v71 >= (unsigned int)v69 )
          goto LABEL_353;
        v72 = System_Int32__Parse(*(System_String_o **)(v70 + 32 + 8 * v71), 0LL);
        ReturnTypeByQuestId = System_Linq_Enumerable__Contains_int_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)OngoingQuestTargetEventIds,
                                v72,
                                (const MethodInfo_2EDD8B4 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (ReturnTypeByQuestId & 1) != 0 )
          break;
        LODWORD(v69) = *(_DWORD *)(v70 + 24);
        if ( (__int64)++v71 >= (int)v69 )
          goto LABEL_24;
      }
    }
  }
  ReturnTypeByQuestId = (__int64)*p_sort;
  if ( !*p_sort )
    goto LABEL_352;
  ListViewSort__Load((ListViewSort_o *)ReturnTypeByQuestId, 0LL);
  classButtonControl = this->fields.classButtonControl;
  v74 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1BAB668(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v74,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_352;
  ClassButtonControlComponent__init(classButtonControl, v74, questId, questPhase, 0, 0LL);
  this->fields.isInput = 0;
  ReturnTypeByQuestId = (__int64)FollowerSelectItemListViewManager_TypeInfo;
  v75 = this->fields.classButtonControl;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  if ( !v75 )
    goto LABEL_352;
  ClassButtonControlComponent__setCursor(
    v75,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, OngoingQuestTargetEventIds, v76);
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
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId
    || (ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0 )
  {
LABEL_352:
    sub_1BAB678(ReturnTypeByQuestId, v60);
  }
  v77 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)ReturnTypeByQuestId, questId, questPhase, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v77 )
    goto LABEL_347;
  v79 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v79 + 309) & 1) == 0 )
    v79 = sub_1BFD2F8(v78);
  v80 = *(_QWORD *)(*(_QWORD *)(v79 + 192) + 16LL);
  if ( (*(_BYTE *)(v80 + 309) & 1) == 0 )
    v80 = sub_1BFD2F8(v78);
  ReturnTypeByQuestId = **(_QWORD **)(v80 + 184);
  if ( !ReturnTypeByQuestId )
    goto LABEL_352;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ReturnTypeByQuestId,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_352;
  ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_352;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)ReturnTypeByQuestId,
                        questId,
                        questPhase,
                        0LL);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_352;
  v83 = *(_DWORD *)(ReturnTypeByQuestId + 48);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_352;
  pos = *(_DWORD *)(ReturnTypeByQuestId + 52);
  if ( v83 < 1 )
  {
    v84 = questRestrictionInfo;
    IsMyServantOrNpcRestriction_40849320 = 0;
    goto LABEL_56;
  }
  v84 = questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    IsMyServantOrNpcRestriction_40849320 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40849320(
                                             questRestrictionInfo,
                                             pos,
                                             0LL);
LABEL_56:
    followerClassId = 0;
    if ( v84 && v83 <= 0 )
      followerClassId = QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL);
    goto LABEL_60;
  }
  IsMyServantOrNpcRestriction_40849320 = 0;
  followerClassId = 0;
LABEL_60:
  v86 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v86 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v86->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_37980612 = CondType__IsQuestClear_37980612(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  if ( !QuestFollowerList )
    goto LABEL_352;
  v89 = *(_QWORD *)&QuestFollowerList->max_length;
  v90 = this;
  v91 = questRestrictionInfo;
  if ( (int)v89 >= 1 )
  {
    v92 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
    v93 = 0LL;
    m_Items = QuestFollowerList->m_Items;
    index = 0;
    isReleasedClassBoard = IsQuestClear_37980612;
    v270 = MasterData_object;
    v274 = QuestFollowerList;
    v284 = IsMyServantOrNpcRestriction_40849320;
    v281 = (EventUpValSetupInfo_o *)ReturnTypeByQuestId;
    do
    {
      if ( v93 >= (unsigned int)v89 )
        goto LABEL_353;
      v94 = m_Items[v93];
      if ( IsMyServantOrNpcRestriction_40849320 )
      {
        if ( !v91 )
          goto LABEL_352;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v91->fields.questId, 0LL);
        if ( !v94 )
          goto LABEL_352;
        ReturnTypeByQuestId = (__int64)FollowerInfo__getServantLeaderInfo(v94, 0, ReturnTypeByQuestId, 0LL);
        if ( ReturnTypeByQuestId )
        {
          v95 = ReturnTypeByQuestId;
          ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !ReturnTypeByQuestId )
            goto LABEL_352;
          ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                           (DataManager_o *)ReturnTypeByQuestId,
                                           (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
          if ( !ReturnTypeByQuestId )
            goto LABEL_352;
          ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                  &entity,
                                  v94->fields.npcFollowerSvtId,
                                  (const MethodInfo_3163F90 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
          if ( (ReturnTypeByQuestId & 1) != 0 )
          {
            v96 = FollowerInfo__GetReturnTypeByQuestId(v91->fields.questId, 0LL);
            NpcServantIndividuality = FollowerInfo__GetNpcServantIndividuality(v94, 0, v96, 0LL);
            goto LABEL_78;
          }
          if ( !v92 )
            goto LABEL_352;
          if ( DataMasterBase_object__object__long___TryGetEntity(
                 v92,
                 &v317,
                 v94->fields.npcFollowerSvtId,
                 (const MethodInfo_3163F90 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
          {
            ReturnTypeByQuestId = (__int64)v317;
            if ( !v317 )
              goto LABEL_352;
            if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v317, 0LL) )
            {
              ReturnTypeByQuestId = (__int64)v317;
              if ( !v317 )
                goto LABEL_352;
              NpcServantIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                          (NpcServantFollowerEntity_o *)v317,
                                          0LL);
LABEL_78:
              ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality_40852352(
                                      v91,
                                      NpcServantIndividuality,
                                      pos,
                                      0LL);
              if ( (ReturnTypeByQuestId & 1) != 0 )
                goto LABEL_148;
              goto LABEL_81;
            }
          }
          v100 = *(_QWORD *)(v95 + 48);
          v99 = *(_QWORD *)(v95 + 56);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v321.fields.currentCryptoKey = v100;
          *(_QWORD *)&v321.fields.fakeValue = v99;
          v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v321, 0LL);
          ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                  v91,
                                  v101,
                                  *(_DWORD *)(v95 + 64),
                                  *(_DWORD *)(v95 + 164),
                                  pos,
                                  0,
                                  0LL);
          IsMyServantOrNpcRestriction_40849320 = v284;
          v92 = (DataMasterBase_TMaster__TEntity__PKType__o *)v281;
          if ( (ReturnTypeByQuestId & 1) != 0 )
            goto LABEL_148;
        }
      }
      else if ( !v94 )
      {
        goto LABEL_352;
      }
LABEL_81:
      if ( !v94->fields.isFixedNpc && (!followerClassId || !v94->fields.isMySvtOrNpc) )
      {
        if ( !MasterData_object )
          goto LABEL_352;
        if ( NpcFollowerMaster__TryGetEntity(
               (NpcFollowerMaster_o *)MasterData_object,
               &v320,
               v94->fields.userId,
               questId,
               questPhase,
               0LL) )
        {
          ReturnTypeByQuestId = (__int64)v320;
          if ( !v320 )
            goto LABEL_352;
          IsRecommendedFollower = NpcFollowerEntity__IsRecommendedFollower(v320, 0LL);
        }
        else
        {
          IsRecommendedFollower = 0;
        }
        v102 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ClassBoardInfo__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v102,
          (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
        if ( !v92 )
          goto LABEL_352;
        ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetEntity(
                                v92,
                                &v319,
                                v94->fields.npcFollowerSvtId,
                                (const MethodInfo_3163F90 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
        if ( (ReturnTypeByQuestId & 1) != 0 )
        {
          if ( !v319 )
            goto LABEL_352;
          ReturnTypeByQuestId = NpcServantFollowerEntity__IsNotClassBoard((int32_t)v319[7].monitor, 0LL);
          if ( (ReturnTypeByQuestId & 1) != 0
            || (ReturnTypeByQuestId = QuestPhaseEntity__IsNotClassBoard(v77, 0LL), (ReturnTypeByQuestId & 1) != 0) )
          {
            v103 = 1;
LABEL_126:
            if ( !v102 )
              goto LABEL_352;
LABEL_127:
            v94->fields.userClassBoardInfo = (struct ClassBoardInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                                              v102,
                                                                              (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
            sub_1BAB3C0(&v94->fields.userClassBoardInfo);
            v121 = FollowerSelectItemListViewManager_TypeInfo;
            if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
              v121 = FollowerSelectItemListViewManager_TypeInfo;
            }
            v122 = v121->static_fields->followerClassId;
            setupInfo = this->fields.setupInfo;
            if ( (v103 & 1) != 0 )
              classBoardMaxDictionary = 0LL;
            else
              classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
            isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
            isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
            isBonusFilterEnable = this->fields.isBonusFilterEnable;
            classBoardMaxNumDictionary = classBoardMaxDictionary;
            v91 = questRestrictionInfo;
            v128 = (FollowerSelectItemListViewItem_o *)sub_1BAB668(FollowerSelectItemListViewItem_TypeInfo);
            FollowerSelectItemListViewItem___ctor(
              v128,
              index,
              0,
              v94,
              v122,
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
              v260);
            ReturnTypeByQuestId = (__int64)*p_mixItemList;
            if ( !*p_mixItemList )
              goto LABEL_352;
            v129 = *(_QWORD *)(ReturnTypeByQuestId + 16);
            v90 = this;
            QuestFollowerList = v274;
            IsMyServantOrNpcRestriction_40849320 = v284;
            v130 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            v92 = (DataMasterBase_TMaster__TEntity__PKType__o *)v281;
            ++*(_DWORD *)(ReturnTypeByQuestId + 28);
            if ( !v129 )
              goto LABEL_352;
            v131 = *(int *)(ReturnTypeByQuestId + 24);
            MasterData_object = v270;
            if ( (unsigned int)v131 >= *(_DWORD *)(v129 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                (Il2CppObject *)v128,
                *(const MethodInfo_354D8BC **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
            }
            else
            {
              v132 = v129 + 8 * v131;
              *(_DWORD *)(ReturnTypeByQuestId + 24) = v131 + 1;
              *(_QWORD *)(v132 + 32) = v128;
              sub_1BAB3C0(v132 + 32);
            }
            ReturnTypeByQuestId = (__int64)*p_originalItemList;
            if ( !*p_originalItemList )
              goto LABEL_352;
            v133 = *(_QWORD *)(ReturnTypeByQuestId + 16);
            v134 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++*(_DWORD *)(ReturnTypeByQuestId + 28);
            if ( !v133 )
              goto LABEL_352;
            v135 = *(int *)(ReturnTypeByQuestId + 24);
            if ( (unsigned int)v135 >= *(_DWORD *)(v133 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                (Il2CppObject *)v128,
                *(const MethodInfo_354D8BC **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
            }
            else
            {
              v136 = v133 + 8 * v135;
              *(_DWORD *)(ReturnTypeByQuestId + 24) = v135 + 1;
              *(_QWORD *)(v136 + 32) = v128;
              sub_1BAB3C0(v136 + 32);
            }
            ReturnTypeByQuestId = (__int64)*p_recommendItemList;
            if ( !*p_recommendItemList )
              goto LABEL_352;
            v137 = *(_QWORD *)(ReturnTypeByQuestId + 16);
            v138 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++*(_DWORD *)(ReturnTypeByQuestId + 28);
            if ( !v137 )
              goto LABEL_352;
            v139 = *(int *)(ReturnTypeByQuestId + 24);
            if ( (unsigned int)v139 >= *(_DWORD *)(v137 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                (Il2CppObject *)v128,
                *(const MethodInfo_354D8BC **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
            }
            else
            {
              v140 = v137 + 8 * v139;
              *(_DWORD *)(ReturnTypeByQuestId + 24) = v139 + 1;
              *(_QWORD *)(v140 + 32) = v128;
              ReturnTypeByQuestId = sub_1BAB3C0(v140 + 32);
            }
            ++index;
            goto LABEL_148;
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v267 = IsRecommendedFollower;
          ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
          if ( !v91 )
            goto LABEL_352;
          v104 = (ClassBoardClassMaster_o *)ReturnTypeByQuestId;
          v105 = v77;
          v106 = FollowerInfo__GetReturnTypeByQuestId(v91->fields.questId, 0LL);
          ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v94, 0, v106, 0LL);
          ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantMaster___);
          if ( !ServantLeaderInfo )
            goto LABEL_352;
          v108 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
          v110 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
          v109 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v322.fields.currentCryptoKey = v110;
          *(_QWORD *)&v322.fields.fakeValue = v109;
          ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v322, 0LL);
          if ( !v108 )
            goto LABEL_352;
          ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                           v108,
                                           ReturnTypeByQuestId,
                                           (const MethodInfo_3163D90 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !ReturnTypeByQuestId )
            goto LABEL_352;
          v77 = v105;
          IsRecommendedFollower = v267;
          if ( !v104 )
            goto LABEL_352;
          ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(
                               v104,
                               *(_DWORD *)(ReturnTypeByQuestId + 80),
                               0LL);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          ReturnTypeByQuestId = NetworkManager__get_UserId(0LL);
          if ( !Master_object )
            goto LABEL_352;
          ReturnTypeByQuestId = UserClassBoardSquareMaster__TryGetEntity(
                                  (UserClassBoardSquareMaster_o *)Master_object,
                                  &v316,
                                  ReturnTypeByQuestId,
                                  ClassBoardBaseId,
                                  0LL);
          if ( (ReturnTypeByQuestId & 1) != 0 )
          {
            v113 = (ClassBoardInfo_o *)sub_1BAB668(ClassBoardInfo_TypeInfo);
            ClassBoardInfo___ctor(v113, 0LL);
            if ( !v113 )
              goto LABEL_352;
            v113->fields.classBoardBaseId = ClassBoardBaseId;
            if ( !v316 )
              goto LABEL_352;
            ReturnTypeByQuestId = (__int64)v316->fields.classBoardSquareIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_352;
            v114 = v77;
            v115 = ClassBoardBaseId;
            v116 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
            v113->fields.squareIds = (struct System_Int32_array *)sub_1BAB558(v116, int___TypeInfo);
            sub_1BAB558(v116, int___TypeInfo);
            sub_1BAB3C0(&v113->fields.squareIds);
            v113->fields.releasedClassIds = ClassBoardClassMaster__GetOpenClassIdArrayFromBaseId(v104, v115, 0LL);
            ReturnTypeByQuestId = sub_1BAB3C0(&v113->fields.releasedClassIds);
            if ( !v102 )
              goto LABEL_352;
            items = v102->fields._items;
            IsRecommendedFollower = v267;
            v118 = Method_System_Collections_Generic_List_ClassBoardInfo__Add__;
            ++v102->fields._version;
            if ( !items )
              goto LABEL_352;
            size = v102->fields._size;
            v77 = v114;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v102,
                (Il2CppObject *)v113,
                *(const MethodInfo_354D8BC **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
            }
            else
            {
              v120 = &items->obj.klass + size;
              v102->fields._size = size + 1;
              v120[4] = (Il2CppClass *)v113;
              sub_1BAB3C0(v120 + 4);
            }
            v103 = 0;
            goto LABEL_127;
          }
        }
        v103 = 0;
        goto LABEL_126;
      }
LABEL_148:
      LODWORD(v89) = QuestFollowerList->max_length;
      ++v93;
    }
    while ( (__int64)v93 < (int)v89 );
  }
  if ( v91 && QuestRestrictionInfo__IsMyServantOrNpcRestriction(v91, 0LL) )
  {
    ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_352;
    v141 = *(_DWORD *)(ReturnTypeByQuestId + 48);
    ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_352;
    v142 = v141 >= 1
        && !QuestRestrictionInfo__IsSelectableNormalSupport(
              questRestrictionInfo,
              *(_DWORD *)(ReturnTypeByQuestId + 52),
              0LL);
    v90 = this;
  }
  else
  {
    v142 = 0;
  }
  v90->fields.isRefreshBtnHide = v142;
  if ( !v142 && !v77->fields.isNpcOnly )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_352;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v315,
                            (const MethodInfo_3164018 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    v143 = this;
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v315 )
        goto LABEL_352;
      klass = v315[1].klass;
      if ( klass )
      {
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
        {
          v146 = 0LL;
          do
          {
            if ( (unsigned int)v146 >= namespaze )
              goto LABEL_353;
            v147 = &klass->_1.image + (int)v146;
            ReturnTypeByQuestId = (__int64)v147[4];
            posa = (FollowerInfo_o **)(v147 + 4);
            if ( !ReturnTypeByQuestId )
              goto LABEL_352;
            FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0LL);
            if ( (unsigned int)v146 >= LODWORD(klass->_1.namespaze) )
              goto LABEL_353;
            if ( !*posa )
              goto LABEL_352;
            ReturnTypeByQuestId = (__int64)(*posa)->fields.mainSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_352;
            v271 = *(_QWORD *)(ReturnTypeByQuestId + 24);
            v148 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
            if ( v148 )
            {
              v149 = v148;
              v150 = sub_1BAB558(v148, int___TypeInfo);
              if ( !v150 )
              {
                sub_1BAB938(v149);
LABEL_354:
                sub_1BAB938(v146);
LABEL_355:
                v256 = sub_1BAB69C();
                sub_1BAB544(v256, 0LL);
              }
            }
            else
            {
              v150 = 0LL;
            }
            v151 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v151 = BalanceConfig_TypeInfo;
            }
            v152 = v151->static_fields;
            FixMainSupportDeckNum = v152->FixMainSupportDeckNum;
            FixEventSupportDeckNum = v152->FixEventSupportDeckNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            ReturnTypeByQuestId = System_Math__Max_62866776(FixMainSupportDeckNum, FixEventSupportDeckNum, 0LL);
            v285 = v150;
            if ( (int)v271 >= 1 )
            {
              deckPriority = ReturnTypeByQuestId;
              v156 = 0LL;
              v268 = v150 + 32;
              do
              {
                if ( !*p_originalItemList )
                  goto LABEL_352;
                if ( (unsigned int)v146 >= LODWORD(klass->_1.namespaze) )
                  goto LABEL_353;
                if ( !v150 )
                  goto LABEL_352;
                if ( v156 >= *(unsigned int *)(v150 + 24) )
                  goto LABEL_353;
                v307 = (*p_originalItemList)->fields._size;
                followerClassIdc = v143->fields.setupInfo;
                v157 = v143->fields.classBoardMaxDictionary;
                v158 = *(_DWORD *)(v268 + 4 * v156);
                indexc = *posa;
                v159 = v143->fields.isServantEquipBonusFilterEnable;
                v160 = v143->fields.isServantBonusFilterEnable;
                v278 = v143->fields.isBonusFilterEnable;
                v161 = (FollowerSelectItemListViewItem_o *)sub_1BAB668(FollowerSelectItemListViewItem_TypeInfo);
                FollowerSelectItemListViewItem___ctor(
                  v161,
                  v307,
                  0,
                  indexc,
                  0,
                  friendPointUpVal,
                  friendPointUpMaxVal,
                  friendPointCampaignEntityList,
                  v278,
                  v160,
                  v159,
                  0,
                  followerClassIdc,
                  questRestrictionInfo,
                  1,
                  v158,
                  deckPriority,
                  v157,
                  1,
                  0,
                  v260);
                ReturnTypeByQuestId = (__int64)v143->fields.originalItemList;
                if ( !ReturnTypeByQuestId )
                  goto LABEL_352;
                v162 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v163 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v162 )
                  goto LABEL_352;
                v164 = *(int *)(ReturnTypeByQuestId + 24);
                v150 = v285;
                if ( (unsigned int)v164 >= *(_DWORD *)(v162 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    (Il2CppObject *)v161,
                    *(const MethodInfo_354D8BC **)(*(_QWORD *)(v163[4] + 192LL) + 112LL));
                }
                else
                {
                  v165 = v162 + 8 * v164;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v164 + 1;
                  *(_QWORD *)(v165 + 32) = v161;
                  ReturnTypeByQuestId = sub_1BAB3C0(v165 + 32);
                }
                ++v156;
                --deckPriority;
              }
              while ( (unsigned int)v271 != v156 );
            }
            followerClassIda = 0;
            v279 = v150 + 32;
            v275 = (int)v146;
            while ( 1 )
            {
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              }
              v166 = *(struct BalanceConfig_StaticFields **)(ReturnTypeByQuestId + 184);
              if ( followerClassIda >= v166->SupportDeckMemberMax )
                break;
              if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
              {
                j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId);
                v166 = BalanceConfig_TypeInfo->static_fields;
              }
              v168 = v166->FixMainSupportDeckNum;
              v167 = v166->FixEventSupportDeckNum;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              ReturnTypeByQuestId = System_Math__Max_62866776(v168, v167, 0LL);
              if ( (int)v271 >= 1 )
              {
                v169 = ReturnTypeByQuestId;
                v170 = 0LL;
                while ( *p_mixItemList )
                {
                  ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                  v171 = (*p_mixItemList)->fields._size;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( (unsigned int)v146 >= LODWORD(klass->_1.namespaze) )
                    goto LABEL_353;
                  if ( !v150 )
                    goto LABEL_352;
                  if ( v170 >= *(unsigned int *)(v150 + 24) )
                    goto LABEL_353;
                  v308 = v171;
                  v172 = klass;
                  v173 = v143->fields.setupInfo;
                  indexd = *posa;
                  v174 = v143->fields.isServantEquipBonusFilterEnable;
                  v175 = this->fields.classBoardMaxDictionary;
                  v176 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 164LL);
                  v177 = v143->fields.isServantBonusFilterEnable;
                  v178 = v143->fields.isBonusFilterEnable;
                  supportDeckId = *(_DWORD *)(v279 + 4 * v170);
                  v143 = this;
                  v179 = (FollowerSelectItemListViewItem_o *)sub_1BAB668(FollowerSelectItemListViewItem_TypeInfo);
                  FollowerSelectItemListViewItem___ctor(
                    v179,
                    v308,
                    v176 - followerClassIda,
                    indexd,
                    followerClassIda,
                    friendPointUpVal,
                    friendPointUpMaxVal,
                    friendPointCampaignEntityList,
                    v178,
                    v177,
                    v174,
                    0,
                    v173,
                    questRestrictionInfo,
                    1,
                    supportDeckId,
                    v169,
                    v175,
                    1,
                    0,
                    v260);
                  ReturnTypeByQuestId = (__int64)this->fields.mixItemList;
                  if ( !ReturnTypeByQuestId )
                    goto LABEL_352;
                  v180 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                  v181 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                  if ( !v180 )
                    goto LABEL_352;
                  v182 = *(int *)(ReturnTypeByQuestId + 24);
                  if ( (unsigned int)v182 >= *(_DWORD *)(v180 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                      (Il2CppObject *)v179,
                      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v183 = v180 + 8 * v182;
                    *(_DWORD *)(ReturnTypeByQuestId + 24) = v182 + 1;
                    *(_QWORD *)(v183 + 32) = v179;
                    ReturnTypeByQuestId = sub_1BAB3C0(v183 + 32);
                  }
                  v150 = v285;
                  LODWORD(v146) = v275;
                  ++v170;
                  klass = v172;
                  --v169;
                  if ( (unsigned int)v271 == v170 )
                    goto LABEL_218;
                }
                goto LABEL_352;
              }
LABEL_218:
              ++followerClassIda;
            }
            namespaze = (int)klass->_1.namespaze;
            v146 = (Il2CppObject *)(unsigned int)((_DWORD)v146 + 1);
          }
          while ( (int)v146 < namespaze );
        }
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_UserFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_352;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v314,
                            (const MethodInfo_3164018 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v314 )
        goto LABEL_352;
      v184 = v314[1].klass;
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_352;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !ReturnTypeByQuestId )
        goto LABEL_352;
      ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                       questId,
                                       (const MethodInfo_3163D90 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_352;
      HasFlag_39862760 = QuestEntity__HasFlag_39862760(
                           (QuestEntity_o *)ReturnTypeByQuestId,
                           0x8000000LL,
                           questPhase,
                           0LL);
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_352;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserFollowMaster___);
      v261 = (UserFollowMaster_o *)ReturnTypeByQuestId;
      if ( !v184 )
        goto LABEL_352;
      namespaze_low = (unsigned __int64)v184->_1.namespaze;
      if ( (int)namespaze_low >= 1 )
      {
        v186 = 0LL;
        v269 = 0;
        v276 = v184;
        do
        {
          namespaze_low = (unsigned int)namespaze_low;
          if ( HasFlag_39862760 )
          {
            if ( v186 >= (unsigned int)namespaze_low )
              goto LABEL_353;
            v187 = *((_QWORD *)&v184->_1.byval_arg.data + v186);
            if ( !v187 )
              goto LABEL_352;
            if ( *(_DWORD *)(v187 + 36) == 5 )
            {
              ReturnTypeByQuestId = (__int64)v261;
              if ( !v261 )
                goto LABEL_352;
              ReturnTypeByQuestId = UserFollowMaster__IsFollowUser(v261, *(_QWORD *)(v187 + 16), 0LL);
              if ( (ReturnTypeByQuestId & 1) == 0 )
                goto LABEL_296;
              namespaze_low = LODWORD(v184->_1.namespaze);
            }
          }
          else
          {
            if ( v186 >= (unsigned int)namespaze_low )
              goto LABEL_353;
            v188 = *((_QWORD *)&v184->_1.byval_arg.data + v186);
            if ( !v188 )
              goto LABEL_352;
            if ( *(_DWORD *)(v188 + 36) == 5 )
              goto LABEL_296;
          }
          if ( v186 >= namespaze_low )
            goto LABEL_353;
          v189 = &v184->_1.image + v186;
          ReturnTypeByQuestId = (__int64)v189[4];
          posb = (FollowerInfo_o **)(v189 + 4);
          if ( !ReturnTypeByQuestId )
            goto LABEL_352;
          FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0LL);
          ReturnTypeByQuestId = sub_1BAB4C4(int___TypeInfo, 0LL);
          if ( v186 >= LODWORD(v184->_1.namespaze) )
            goto LABEL_353;
          v190 = *posb;
          if ( !*posb )
            goto LABEL_352;
          if ( v263 )
          {
            ReturnTypeByQuestId = (__int64)v190->fields.eventSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_352;
          }
          else
          {
            ReturnTypeByQuestId = (__int64)v190->fields.mainSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_352;
          }
          followerClassIdb = *(unsigned int *)(ReturnTypeByQuestId + 24);
          v191 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
          if ( v191 )
          {
            v146 = v191;
            v192 = sub_1BAB558(v191, int___TypeInfo);
            if ( !v192 )
              goto LABEL_354;
          }
          else
          {
            v192 = 0LL;
          }
          v193 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v193 = BalanceConfig_TypeInfo;
          }
          v194 = v193->static_fields;
          v196 = v194->FixMainSupportDeckNum;
          v195 = v194->FixEventSupportDeckNum;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          ReturnTypeByQuestId = System_Math__Max_62866776(v196, v195, 0LL);
          v286 = v192;
          if ( (int)followerClassIdb >= 1 )
          {
            v197 = ReturnTypeByQuestId;
            v198 = 0LL;
            v272 = v192 + 32;
            while ( 1 )
            {
              if ( !*p_originalItemList )
                goto LABEL_352;
              if ( v186 >= LODWORD(v184->_1.namespaze) )
                break;
              if ( !v192 )
                goto LABEL_352;
              if ( v198 >= *(unsigned int *)(v192 + 24) )
                break;
              v309 = (*p_originalItemList)->fields._size;
              v282 = v143->fields.setupInfo;
              v199 = v143->fields.classBoardMaxDictionary;
              v200 = *(_DWORD *)(v272 + 4 * v198);
              indexe = *posb;
              v201 = v143->fields.isServantEquipBonusFilterEnable;
              v202 = v143->fields.isServantBonusFilterEnable;
              v203 = v143->fields.isBonusFilterEnable;
              v204 = (FollowerSelectItemListViewItem_o *)sub_1BAB668(FollowerSelectItemListViewItem_TypeInfo);
              FollowerSelectItemListViewItem___ctor(
                v204,
                v309,
                0,
                indexe,
                0,
                friendPointUpVal,
                friendPointUpMaxVal,
                friendPointCampaignEntityList,
                v203,
                v202,
                v201,
                0,
                v282,
                questRestrictionInfo,
                0,
                v200,
                v197,
                v199,
                1,
                0,
                v260);
              ReturnTypeByQuestId = (__int64)v143->fields.originalItemList;
              if ( !ReturnTypeByQuestId )
                goto LABEL_352;
              v205 = *(_QWORD *)(ReturnTypeByQuestId + 16);
              v206 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++*(_DWORD *)(ReturnTypeByQuestId + 28);
              if ( !v205 )
                goto LABEL_352;
              v207 = *(int *)(ReturnTypeByQuestId + 24);
              v192 = v286;
              if ( (unsigned int)v207 >= *(_DWORD *)(v205 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                  (Il2CppObject *)v204,
                  *(const MethodInfo_354D8BC **)(*(_QWORD *)(v206[4] + 192LL) + 112LL));
              }
              else
              {
                v208 = v205 + 8 * v207;
                *(_DWORD *)(ReturnTypeByQuestId + 24) = v207 + 1;
                *(_QWORD *)(v208 + 32) = v204;
                ReturnTypeByQuestId = sub_1BAB3C0(v208 + 32);
              }
              ++v198;
              --v197;
              if ( followerClassIdb == v198 )
                goto LABEL_270;
            }
LABEL_353:
            sub_1BAB680(ReturnTypeByQuestId, v60);
          }
LABEL_270:
          indexa = 0;
          v280 = v186;
          v283 = (EventUpValSetupInfo_o *)(v192 + 32);
          while ( 1 )
          {
            ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            }
            v209 = *(struct BalanceConfig_StaticFields **)(ReturnTypeByQuestId + 184);
            if ( indexa >= v209->SupportDeckMemberMax )
              break;
            if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
            {
              j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId);
              v209 = BalanceConfig_TypeInfo->static_fields;
            }
            v211 = v209->FixMainSupportDeckNum;
            v210 = v209->FixEventSupportDeckNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            ReturnTypeByQuestId = System_Math__Max_62866776(v211, v210, 0LL);
            if ( (int)followerClassIdb >= 1 )
            {
              v212 = ReturnTypeByQuestId;
              v213 = 0LL;
              while ( *p_mixItemList )
              {
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                v214 = (*p_mixItemList)->fields._size;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                }
                if ( v186 >= LODWORD(v184->_1.namespaze) )
                  goto LABEL_353;
                if ( !v192 )
                  goto LABEL_352;
                if ( v213 >= *(unsigned int *)(v192 + 24) )
                  goto LABEL_353;
                v215 = v143->fields.setupInfo;
                v216 = v214;
                v310 = *posb;
                v217 = v143->fields.isServantEquipBonusFilterEnable;
                v218 = this->fields.classBoardMaxDictionary;
                v219 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 164LL);
                v220 = v143->fields.isServantBonusFilterEnable;
                v221 = v143->fields.isBonusFilterEnable;
                supportDeckIda = *((_DWORD *)&v283->klass + v213);
                v143 = this;
                v222 = (FollowerSelectItemListViewItem_o *)sub_1BAB668(FollowerSelectItemListViewItem_TypeInfo);
                FollowerSelectItemListViewItem___ctor(
                  v222,
                  v216,
                  v219 - indexa,
                  v310,
                  indexa,
                  friendPointUpVal,
                  friendPointUpMaxVal,
                  friendPointCampaignEntityList,
                  v221,
                  v220,
                  v217,
                  0,
                  v215,
                  questRestrictionInfo,
                  0,
                  supportDeckIda,
                  v212,
                  v218,
                  1,
                  0,
                  v260);
                ReturnTypeByQuestId = (__int64)this->fields.mixItemList;
                if ( !ReturnTypeByQuestId )
                  goto LABEL_352;
                v223 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v224 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v223 )
                  goto LABEL_352;
                v225 = *(int *)(ReturnTypeByQuestId + 24);
                if ( (unsigned int)v225 >= *(_DWORD *)(v223 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    (Il2CppObject *)v222,
                    *(const MethodInfo_354D8BC **)(*(_QWORD *)(v224[4] + 192LL) + 112LL));
                }
                else
                {
                  v226 = v223 + 8 * v225;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v225 + 1;
                  *(_QWORD *)(v226 + 32) = v222;
                  ReturnTypeByQuestId = sub_1BAB3C0(v226 + 32);
                }
                v184 = v276;
                v186 = v280;
                v192 = v286;
                ++v213;
                --v212;
                if ( followerClassIdb == v213 )
                  goto LABEL_292;
              }
              goto LABEL_352;
            }
LABEL_292:
            ++indexa;
          }
          if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
          {
            j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId);
            v209 = BalanceConfig_TypeInfo->static_fields;
          }
          if ( ++v269 >= v209->SupportListMax )
            break;
LABEL_296:
          LODWORD(namespaze_low) = v184->_1.namespaze;
          ++v186;
        }
        while ( (__int64)v186 < (int)namespaze_low );
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_352;
    if ( DataMasterBase_object__object__long___TryGetSingleEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
           &v313,
           (const MethodInfo_3164018 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    {
      ReturnTypeByQuestId = (__int64)v313;
      if ( !v313 )
        goto LABEL_352;
      if ( UserRecommendFollowerEntity__IsEnableData((UserRecommendFollowerEntity_o *)v313, 0LL) )
      {
        ReturnTypeByQuestId = (__int64)v313;
        if ( !v313 )
          goto LABEL_352;
        ReturnTypeByQuestId = UserRecommendFollowerEntity__IsEnableQuest(
                                (UserRecommendFollowerEntity_o *)v313,
                                questId,
                                questPhase,
                                0LL);
        if ( (ReturnTypeByQuestId & 1) != 0 )
        {
          if ( !v313 )
            goto LABEL_352;
          v227 = v313[1].klass;
          ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !ReturnTypeByQuestId )
            goto LABEL_352;
          ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                           (DataManager_o *)ReturnTypeByQuestId,
                                           (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !ReturnTypeByQuestId )
            goto LABEL_352;
          ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                           questId,
                                           (const MethodInfo_3163D90 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !ReturnTypeByQuestId )
            goto LABEL_352;
          v311 = QuestEntity__HasFlag_39862760((QuestEntity_o *)ReturnTypeByQuestId, 0x8000000LL, questPhase, 0LL);
          ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !ReturnTypeByQuestId )
            goto LABEL_352;
          ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                           (DataManager_o *)ReturnTypeByQuestId,
                                           (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserFollowMaster___);
          v295 = (UserFollowMaster_o *)ReturnTypeByQuestId;
          if ( !v227 )
            goto LABEL_352;
          v228 = (unsigned __int64)v227->_1.namespaze;
          if ( (int)v228 >= 1 )
          {
            v229 = 0LL;
            p_byval_arg = &v227->_1.byval_arg;
            indexb = v227;
            do
            {
              v228 = (unsigned int)v228;
              if ( v311 )
              {
                if ( v229 >= (unsigned int)v228 )
                  goto LABEL_353;
                v231 = *((_QWORD *)&p_byval_arg->data + v229);
                if ( !v231 )
                  goto LABEL_352;
                if ( *(_DWORD *)(v231 + 36) == 5 )
                {
                  ReturnTypeByQuestId = (__int64)v295;
                  if ( !v295 )
                    goto LABEL_352;
                  ReturnTypeByQuestId = UserFollowMaster__IsFollowUser(v295, *(_QWORD *)(v231 + 16), 0LL);
                  if ( (ReturnTypeByQuestId & 1) == 0 )
                    goto LABEL_346;
                  v228 = LODWORD(v227->_1.namespaze);
                }
              }
              else
              {
                if ( v229 >= (unsigned int)v228 )
                  goto LABEL_353;
                v232 = *((_QWORD *)&p_byval_arg->data + v229);
                if ( !v232 )
                  goto LABEL_352;
                if ( *(_DWORD *)(v232 + 36) == 5 )
                  goto LABEL_346;
              }
              if ( v229 >= v228 )
                goto LABEL_353;
              v233 = *((_QWORD *)&p_byval_arg->data + v229);
              ReturnTypeByQuestId = sub_1BAB4C4(ServantLeaderInfo___TypeInfo, 1LL);
              if ( v229 >= LODWORD(v227->_1.namespaze) )
                goto LABEL_353;
              v234 = *((_QWORD *)&p_byval_arg->data + v229);
              if ( !v234 )
                goto LABEL_352;
              v235 = *(_QWORD *)(v234 + 56);
              if ( !v235 )
                goto LABEL_352;
              if ( !*(_DWORD *)(v235 + 24) )
                goto LABEL_353;
              v236 = *(_QWORD *)(v235 + 32);
              if ( !v236 )
                goto LABEL_352;
              v237 = ReturnTypeByQuestId;
              if ( !ReturnTypeByQuestId )
                goto LABEL_352;
              v238 = *(_QWORD *)(v236 + 56);
              if ( v238 )
              {
                ReturnTypeByQuestId = sub_1BAB558(v238, *(_QWORD *)(*(_QWORD *)ReturnTypeByQuestId + 64LL));
                if ( !ReturnTypeByQuestId )
                  goto LABEL_355;
              }
              if ( !*(_DWORD *)(v237 + 24) )
                goto LABEL_353;
              *(_QWORD *)(v237 + 32) = v238;
              ReturnTypeByQuestId = sub_1BAB3C0(v237 + 32);
              if ( !v233 )
                goto LABEL_352;
              *(_QWORD *)(v233 + 40) = v237;
              ReturnTypeByQuestId = sub_1BAB3C0(v233 + 40);
              if ( v229 >= LODWORD(v227->_1.namespaze) )
                goto LABEL_353;
              ReturnTypeByQuestId = *((_QWORD *)&p_byval_arg->data + v229);
              if ( !ReturnTypeByQuestId )
                goto LABEL_352;
              FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0LL);
              if ( !*p_recommendItemList )
                goto LABEL_352;
              if ( v229 >= LODWORD(v227->_1.namespaze) )
                goto LABEL_353;
              v239 = (FollowerInfo_o *)*((_QWORD *)&p_byval_arg->data + v229);
              v240 = (*p_recommendItemList)->fields._size;
              v241 = this->fields.isBonusFilterEnable;
              v242 = this->fields.isServantBonusFilterEnable;
              v243 = this->fields.isServantEquipBonusFilterEnable;
              v244 = this->fields.setupInfo;
              v245 = this->fields.classBoardMaxDictionary;
              v246 = (FollowerSelectItemListViewItem_o *)sub_1BAB668(FollowerSelectItemListViewItem_TypeInfo);
              FollowerSelectItemListViewItem___ctor(
                v246,
                v240,
                0,
                v239,
                0,
                friendPointUpVal,
                friendPointUpMaxVal,
                friendPointCampaignEntityList,
                v241,
                v242,
                v243,
                0,
                v244,
                questRestrictionInfo,
                0,
                0,
                0,
                v245,
                1,
                1,
                v260);
              ReturnTypeByQuestId = (__int64)this->fields.recommendItemList;
              if ( !ReturnTypeByQuestId )
                goto LABEL_352;
              v247 = *(_QWORD *)(ReturnTypeByQuestId + 16);
              v248 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++*(_DWORD *)(ReturnTypeByQuestId + 28);
              if ( !v247 )
                goto LABEL_352;
              v249 = *(int *)(ReturnTypeByQuestId + 24);
              if ( (unsigned int)v249 >= *(_DWORD *)(v247 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                  (Il2CppObject *)v246,
                  *(const MethodInfo_354D8BC **)(*(_QWORD *)(v248[4] + 192LL) + 112LL));
              }
              else
              {
                v250 = v247 + 8 * v249;
                *(_DWORD *)(ReturnTypeByQuestId + 24) = v249 + 1;
                *(_QWORD *)(v250 + 32) = v246;
                sub_1BAB3C0(v250 + 32);
              }
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              }
              v227 = indexb;
              if ( (__int64)v229 >= *(int *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 684LL) )
                break;
LABEL_346:
              LODWORD(v228) = v227->_1.namespaze;
              ++v229;
            }
            while ( (__int64)v229 < (int)v228 );
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
  v252 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v252 = FollowerSelectItemListViewManager_TypeInfo;
  }
  FollowerSelectItemListViewManager__SetEmptyMessage(this, v252->static_fields->followerClassId, v251);
  FollowerSelectItemListViewManager__SortClass(
    this,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    v253);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  FollowerSelectItemListViewManager__SetFilterButtonImage(this, v254);
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

  if ( (byte_4AB0F9C & 1) == 0 )
  {
    sub_1BAB41C(&FollowerSelectItemListViewManager_TypeInfo, v1);
    sub_1BAB41C(&StringLiteral_6750/*"FollowerSelectClass"*/, v2);
    sub_1BAB41C(&StringLiteral_6753/*"FollowerSelectOldClass"*/, v3);
    byte_4AB0F9C = 1;
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
    sub_1BAB678(v4, v1);
  }
  ListViewSort__DeleteContinueData((ListViewSort_o *)v4, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6750/*"FollowerSelectClass"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6753/*"FollowerSelectOldClass"*/, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FollowerSelectItemListViewManager__DestroyList_31158384(this, 0LL, v2);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList_31158384(
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
  EventQuestMaster_o *ReturnTypeByQuestId; // x0
  const MethodInfo *v16; // x1
  FollowerSelectItemListViewManager_c *v17; // x8
  unsigned int v18; // w20
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  const MethodInfo *v20; // x4
  struct ListViewSort_o *sort; // x8
  System_Int32_array *OngoingQuestTargetEventIds; // x0
  int32_t questId; // w20
  int32_t questPhase; // w21
  System_Int32_array *v25; // x22
  EventUpValSetupInfo_o *v26; // x23
  struct EventUpValSetupInfo_o **p_setupInfo; // x0
  struct ListViewSort_o *v28; // x8
  FollowerSelectItemListViewManager_o *v29; // x0
  int monitor; // w20
  const MethodInfo *v31; // x1
  FollowerSelectItemListViewManager_c *v32; // x0
  FollowerSelectItemListViewManager_o *v33; // x0
  int monitor_high; // w20
  FollowerSelectItemListViewManager_c *v35; // x0
  ClassButtonControlComponent_o *classButtonControl; // x20
  ClassButtonControlComponent_CallbackFunc_o *v37; // x21
  ClassButtonControlComponent_o *v38; // x20
  const MethodInfo *v39; // x2
  struct EventUpValSetupInfo_o *setupInfo; // x8
  System_Int32_array *v41; // x1
  UILabel_o *bonusFilterKindLabel; // x20

  if ( (byte_4AB0FAB & 1) == 0 )
  {
    sub_1BAB41C(&ClassButtonControlComponent_CallbackFunc_TypeInfo, battleSetupInfo);
    sub_1BAB41C(&Method_DataManager_GetMaster_EventQuestMaster___, v5);
    sub_1BAB41C(&DataManager_TypeInfo, v6);
    sub_1BAB41C(&EventUpValSetupInfo_TypeInfo, v7);
    sub_1BAB41C(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v8);
    sub_1BAB41C(&FollowerSelectItemListViewManager_TypeInfo, v9);
    sub_1BAB41C(&int___TypeInfo, v10);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v11);
    sub_1BAB41C(&StringLiteral_11683/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/, v12);
    sub_1BAB41C(&StringLiteral_6750/*"FollowerSelectClass"*/, v13);
    sub_1BAB41C(&StringLiteral_6753/*"FollowerSelectOldClass"*/, v14);
    byte_4AB0FAB = 1;
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
      goto LABEL_47;
    this->fields.sort = (struct ListViewSort_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))LIST_VIEW_SORT->fields.m_target)(
                                                   LIST_VIEW_SORT->fields.original_method_info,
                                                   v18,
                                                   *(_QWORD *)&LIST_VIEW_SORT->fields.extra_arg);
    ReturnTypeByQuestId = (EventQuestMaster_o *)sub_1BAB3C0(&this->fields.sort);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_47;
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                                                                                   this,
                                                                                   this->fields.questId,
                                                                                   this->fields.questPhase,
                                                                                   sort->fields.isRequestLoad,
                                                                                   v20);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (EventQuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_EventQuestMaster___);
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
    v25 = OngoingQuestTargetEventIds;
    v26 = (EventUpValSetupInfo_o *)sub_1BAB668(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_39297716(v26, v25, 0, questId, questPhase, 0LL);
    p_setupInfo = &this->fields.setupInfo;
    this->fields.setupInfo = v26;
  }
  else
  {
    p_setupInfo = &this->fields.setupInfo;
    this->fields.setupInfo = 0LL;
  }
  sub_1BAB3C0(p_setupInfo);
  this->fields.questRestrictionInfo = 0LL;
  sub_1BAB3C0(&this->fields.questRestrictionInfo);
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.sort;
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  ListViewSort__Load((ListViewSort_o *)ReturnTypeByQuestId, 0LL);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.sort;
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  ListViewSort__Save((ListViewSort_o *)ReturnTypeByQuestId, 0LL);
  v28 = this->fields.sort;
  if ( !v28 )
    goto LABEL_47;
  if ( v28->fields.isRequestSave )
  {
    v29 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v29 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor = (int)v29->fields.sort->monitor;
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(v29, v16) )
    {
      v32 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v32 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6750/*"FollowerSelectClass"*/, v32->static_fields->followerClassId, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
    v33 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v33 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor_high = HIDWORD(v33->fields.sort->monitor);
    if ( monitor_high != FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(v33, v31) )
    {
      v35 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v35 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(
        (System_String_o *)StringLiteral_6753/*"FollowerSelectOldClass"*/,
        v35->static_fields->oldFollowerClassId,
        0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
  this->fields.originalItemList = 0LL;
  sub_1BAB3C0(&this->fields.originalItemList);
  this->fields.mixItemList = 0LL;
  sub_1BAB3C0(&this->fields.mixItemList);
  this->fields.recommendItemList = 0LL;
  sub_1BAB3C0(&this->fields.recommendItemList);
  classButtonControl = this->fields.classButtonControl;
  v37 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1BAB668(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v37,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_47;
  ClassButtonControlComponent__init(classButtonControl, v37, this->fields.questId, this->fields.questPhase, 0, 0LL);
  this->fields.isInput = 0;
  ReturnTypeByQuestId = (EventQuestMaster_o *)FollowerSelectItemListViewManager_TypeInfo;
  v38 = this->fields.classButtonControl;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  if ( !v38 )
    goto LABEL_47;
  ClassButtonControlComponent__setCursor(
    v38,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  setupInfo = this->fields.setupInfo;
  v41 = setupInfo ? setupInfo->fields.eventIdList : (System_Int32_array *)sub_1BAB4C4(int___TypeInfo, 0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, v41, v39);
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
    ReturnTypeByQuestId = (EventQuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11683/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/, 0LL);
    if ( bonusFilterKindLabel )
    {
      UILabel__set_text(bonusFilterKindLabel, (System_String_o *)ReturnTypeByQuestId, 0LL);
      goto LABEL_43;
    }
LABEL_47:
    sub_1BAB678(ReturnTypeByQuestId, v16);
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
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4AB0FB9 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4AB0FB9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v3);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__EndCloseClassBoardEffectListDialog(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4AB0FCA & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4AB0FCA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v4);
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

  if ( (byte_4AB0FBB & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, isDecide);
    sub_1BAB41C(&Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__, v5);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4AB0FBB = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__,
    0LL);
  if ( !Instance )
LABEL_8:
    sub_1BAB678(sort, v8);
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

  if ( (byte_4AB0FA6 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, *(_QWORD *)&questId);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantClassMaster___, v8);
    sub_1BAB41C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v9);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4AB0FA6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v17 = v14->fields.classIds;
  if ( !v17 )
    goto LABEL_17;
  if ( !v17->max_length )
    sub_1BAB680(Instance, v12);
  if ( !Instance )
LABEL_17:
    sub_1BAB678(Instance, v12);
  v18 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          v17->m_Items[1],
          (const MethodInfo_3163D90 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
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

  if ( (byte_4AB0FAF & 1) == 0 )
  {
    sub_1BAB41C(&FollowerSelectItemListViewManager_TypeInfo, method);
    byte_4AB0FAF = 1;
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

  if ( (byte_4AB0FCB & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    byte_4AB0FCB = 1;
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
  __int64 v15; // x1
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x1
  _BOOL8 AdvantageClassAuto; // x0
  const MethodInfo *v19; // x3
  int32_t AdvantageClassId; // w22
  _BOOL8 IsSameQuestAndPhase; // x0
  const MethodInfo *v22; // x4
  RecommendSupportQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4AB0FA4 & 1) == 0 )
  {
    sub_1BAB41C(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&questId);
    sub_1BAB41C(&Method_DataManager_GetMasterData_RecommendSupportQuestMaster___, v8);
    sub_1BAB41C(&FollowerSelectItemListViewManager_TypeInfo, v9);
    sub_1BAB41C(&OptionManager_TypeInfo, v10);
    this = (FollowerSelectItemListViewManager_o *)sub_1BAB41C(
                                                    &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                    v11);
    byte_4AB0FA4 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_RecommendSupportQuestMaster___)) == 0LL )
    {
      sub_1BAB678(Instance, v15);
    }
    v16 = RecommendSupportQuestMaster__TryGetEntity(
            (RecommendSupportQuestMaster_o *)Instance,
            &entity,
            questId,
            questPhase,
            0LL);
    if ( !v16 )
      PlayerPrefsFollowerClassId = FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(
                                     (FollowerSelectItemListViewManager_o *)v16,
                                     v17);
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
                            v19);
    AdvantageClassId = PlayerPrefsFollowerClassId;
    if ( !IsSameQuestAndPhase )
      AdvantageClassId = FollowerSelectItemListViewManager__GetAdvantageClassId(
                           (FollowerSelectItemListViewManager_o *)IsSameQuestAndPhase,
                           questId,
                           questPhase,
                           PlayerPrefsFollowerClassId,
                           v22);
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

  if ( (byte_4AB0FAD & 1) == 0 )
  {
    sub_1BAB41C(&FollowerSelectItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4AB0FAD = 1;
  }
  result = (FollowerSelectItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4AB0FC6 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    byte_4AB0FC6 = 1;
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

  if ( (byte_4AB0FC7 & 1) == 0 )
  {
    sub_1BAB41C(&FollowerSelectItemListViewItem_TypeInfo, userId);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    byte_4AB0FC7 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1BAB678(itemList, userId);
  v10 = 0;
  while ( v10 < itemList->fields._size )
  {
    Item = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                 itemList,
                                                 v10,
                                                 (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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


int32_t __fastcall FollowerSelectItemListViewManager__GetItemIndex_31170360(
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

  if ( (byte_4AB0FC8 & 1) == 0 )
  {
    sub_1BAB41C(&FollowerSelectItemListViewItem_TypeInfo, userId);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    byte_4AB0FC8 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_17:
    sub_1BAB678(itemList, userId);
  v12 = 0;
  while ( v12 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v12,
             (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  if ( (byte_4AB0FA8 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_6750/*"FollowerSelectClass"*/, method);
    byte_4AB0FA8 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6750/*"FollowerSelectClass"*/, 0, 0LL);
}


int32_t __fastcall FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB0FA9 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_6753/*"FollowerSelectOldClass"*/, method);
    byte_4AB0FA9 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6753/*"FollowerSelectOldClass"*/, 0, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewManager_c *v2; // x0
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v4; // x8

  if ( (byte_4AB0F9D & 1) == 0 )
  {
    sub_1BAB41C(&FollowerSelectItemListViewManager_TypeInfo, v1);
    byte_4AB0F9D = 1;
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
    sub_1BAB678(v2, v1);
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

  if ( (byte_4AB0FA5 & 1) == 0 )
  {
    sub_1BAB41C(&BattleData_TypeInfo, *(_QWORD *)&questId);
    sub_1BAB41C(&FollowerSelectItemListViewManager_TypeInfo, v6);
    byte_4AB0FA5 = 1;
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

  if ( (byte_4AB0FAA & 1) == 0 )
  {
    sub_1BAB41C(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&friendPointUpVal);
    sub_1BAB41C(&FollowerSelectItemListViewItem_TypeInfo, v7);
    sub_1BAB41C(&FollowerSelectItemListViewManager_TypeInfo, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    byte_4AB0FAA = 1;
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
                                                                (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1BAB678(itemList, *(_QWORD *)&friendPointUpVal);
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
                                                                  (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
                                                                  (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 IsRecommendSupportGroupType; // x0
  __int64 v8; // x1
  int v9; // w21
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t oldCursor; // w22
  const MethodInfo *v12; // x2
  struct ClassButtonControlComponent_o *v13; // x8
  int32_t v14; // w23
  FollowerSelectItemListViewManager_c *v15; // x0
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  const MethodInfo *v18; // x2

  if ( (byte_4AB0FC1 & 1) == 0 )
  {
    sub_1BAB41C(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classPos);
    sub_1BAB41C(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v5);
    sub_1BAB41C(&FollowerSelectItemListViewManager_TypeInfo, v6);
    byte_4AB0FC1 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    IsRecommendSupportGroupType = ClassButtonControlComponent__IsRecommendSupportGroupType(classPos, 0LL);
    if ( this->fields.classButtonControl )
    {
      v9 = IsRecommendSupportGroupType;
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
        if ( ((v9 | (unsigned int)IsRecommendSupportGroupType) & 1) != 0 )
          FollowerSelectItemListViewManager__SetEmptyMessage(this, classPos, v12);
      }
      v13 = this->fields.classButtonControl;
      if ( v13 )
      {
        v14 = v13->fields.oldCursor;
        v15 = FollowerSelectItemListViewManager_TypeInfo;
        if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
          v15 = FollowerSelectItemListViewManager_TypeInfo;
        }
        v15->static_fields->oldFollowerClassId = v14;
        v16 = Method_FollowerSelectItemListViewManager_OnChangeClass__;
        if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnChangeClass__ + 83) & 2) != 0 )
          v16 = (_QWORD *)sub_1BAB434(Method_FollowerSelectItemListViewManager_OnChangeClass__);
        v17 = (System_Reflection_MethodBase_o *)sub_1BAB400(v16, v16[4]);
        OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
        if ( (v9 & 1) != 0 )
          FollowerSelectItemListViewManager__OnClickRecommend(this, classPos, v18);
        else
          FollowerSelectItemListViewManager__SortClass(this, classPos, v18);
        return;
      }
    }
LABEL_22:
    sub_1BAB678(IsRecommendSupportGroupType, v8);
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

  if ( (byte_4AB0FBA & 1) == 0 )
  {
    sub_1BAB41C(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BAB41C(&Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__, v3);
    sub_1BAB41C(&Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__, v4);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4AB0FBA = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BAB434(Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BAB400(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
    isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
    equipBonusFilterEventIds = this->fields.equipBonusFilterEventIds;
    sort = this->fields.sort;
    v13 = (CommonUI_o *)Instance;
    v14 = (ServantBonusFilterSelectMenu_CallbackFunc_o *)sub_1BAB668(ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantBonusFilterSelectMenu_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__,
      0LL);
    if ( !v13 )
      sub_1BAB678(v15, v16);
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

  if ( (byte_4AB0FC5 & 1) == 0 )
  {
    sub_1BAB41C(&Method_FollowerSelectItemListViewManager_OnClickChangeSkill__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v4);
    byte_4AB0FC5 = 1;
  }
  if ( this->fields.isInput )
  {
    v5 = Method_FollowerSelectItemListViewManager_OnClickChangeSkill__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickChangeSkill__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BAB434(Method_FollowerSelectItemListViewManager_OnClickChangeSkill__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BAB400(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    displaySkill = this->fields.displaySkill;
    if ( (unsigned int)displaySkill <= 2 )
      this->fields.displaySkill = dword_BFBF94[displaySkill];
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
                                                                    (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
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
      sub_1BAB678(ObjectList, v10);
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

  if ( (byte_4AB0FB8 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__, v3);
    sub_1BAB41C(&Method_FollowerSelectItemListViewManager_OnClickClassComparibility__, v4);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4AB0FB8 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_FollowerSelectItemListViewManager_OnClickClassComparibility__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickClassComparibility__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BAB434(Method_FollowerSelectItemListViewManager_OnClickClassComparibility__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BAB400(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__,
      0LL);
    if ( !Instance )
      sub_1BAB678(v10, v11);
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
  __int64 v9; // x1
  FollowerSelectItemListViewManager_c *v10; // x0
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4AB0FC2 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___, *(_QWORD *)&classPos);
    sub_1BAB41C(&DataManager_TypeInfo, v5);
    sub_1BAB41C(
      &Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__,
      v6);
    sub_1BAB41C(&FollowerSelectItemListViewManager_TypeInfo, v7);
    byte_4AB0FC2 = 1;
  }
  entity = 0LL;
  if ( this->fields.isGetRecommendSupport )
    goto LABEL_4;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
  if ( !Master_object )
    goto LABEL_18;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          (const MethodInfo_3164018 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    goto LABEL_13;
  Master_object = entity;
  if ( !entity )
    goto LABEL_18;
  if ( !UserRecommendFollowerEntity__IsEnableData((UserRecommendFollowerEntity_o *)entity, 0LL) )
    goto LABEL_13;
  Master_object = entity;
  if ( !entity )
LABEL_18:
    sub_1BAB678(Master_object, v9);
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
  v10 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v10 = FollowerSelectItemListViewManager_TypeInfo;
  }
  v10->static_fields->followerClassId = classPos;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1BAB3C0(&this->fields.callbackFunc);
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

  if ( (byte_4AB0FB7 & 1) == 0 )
  {
    sub_1BAB41C(&ClassButtonControlComponent_TypeInfo, method);
    byte_4AB0FB7 = 1;
  }
  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0LL;
      v4 = sub_1BAB3C0(&this->fields.callbackFunc);
      classButtonControl = this->fields.classButtonControl;
      if ( !classButtonControl )
        sub_1BAB678(v4, v5);
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
    v5 = sub_1BAB3C0(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1BAB678(v5, v6);
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

  if ( (byte_4AB0FBF & 1) == 0 )
  {
    sub_1BAB41C(&Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__, method);
    byte_4AB0FBF = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BAB434(Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BAB400(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BAB678(v5, v6);
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
  __int64 v10; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w20
  struct ListViewSort_o *sort; // x8
  int v14; // w9
  Il2CppObject *Instance; // x0
  ListViewSort_o *v16; // x20
  CommonUI_o *v17; // x21
  OtherUserSortDialog_CallbackFunc_o *v18; // x22

  if ( (byte_4AB0FBD & 1) == 0 )
  {
    sub_1BAB41C(&OtherUserSortDialog_CallbackFunc_TypeInfo, method);
    sub_1BAB41C(&ClassButtonControlComponent_TypeInfo, v3);
    sub_1BAB41C(&Method_FollowerSelectItemListViewManager_CloseSortDialog__, v4);
    sub_1BAB41C(&Method_FollowerSelectItemListViewManager_OnClickSortKind__, v5);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4AB0FBD = 1;
  }
  if ( this->fields.isInput )
  {
    v7 = Method_FollowerSelectItemListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BAB434(Method_FollowerSelectItemListViewManager_OnClickSortKind__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BAB400(v7, v7[4]);
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
            v14 = 29;
          else
            v14 = 11;
          sort->fields.otherSortKind = v14;
          ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
          return;
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v16 = this->fields.sort;
        v17 = (CommonUI_o *)Instance;
        v18 = (OtherUserSortDialog_CallbackFunc_o *)sub_1BAB668(OtherUserSortDialog_CallbackFunc_TypeInfo);
        OtherUserSortDialog_CallbackFunc___ctor(
          v18,
          (Il2CppObject *)this,
          Method_FollowerSelectItemListViewManager_CloseSortDialog__,
          0LL);
        if ( v17 )
        {
          CommonUI__OpenOtherUserSortDialog(v17, 0, v16, v18, 0LL);
          return;
        }
      }
    }
    sub_1BAB678(IsRecommendSupportGroupType, v10);
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
    v5 = sub_1BAB3C0(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1BAB678(v5, v6);
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
    v5 = sub_1BAB3C0(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1BAB678(v5, v6);
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
    v5 = sub_1BAB3C0(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1BAB678(v5, v6);
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

  if ( (byte_4AB0FB6 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_12576/*"ScrollViewEnabled"*/, obj);
    byte_4AB0FB6 = 1;
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
        (System_String_o *)StringLiteral_12576/*"ScrollViewEnabled"*/,
        0.1,
        0LL);
    }
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    tutorialListViewObject = (UnityEngine_Component_o *)sub_1BAB3C0(&this->fields.callbackFunc);
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
      sub_1BAB678(tutorialListViewObject, obj);
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

  if ( (byte_4AB0FB5 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB0FB5 = 1;
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
              sub_1BAB3C0(&this->fields.callbackFunc2);
              if ( callbackFunc2 )
                ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
                  callbackFunc2->fields.original_method_info,
                  *(_QWORD *)&callbackFunc2->fields.extra_arg);
              return;
            }
          }
        }
      }
      sub_1BAB678(tutorialListViewObject, v7);
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
  ClassBoardInfo_o *v33; // x21
  long double v34; // q0
  _QWORD *v35; // x22
  __int64 v36; // x8
  __int64 v37; // x0
  __int64 v38; // x0
  long double v39; // q0
  _QWORD *v40; // x22
  __int64 v41; // x8
  __int64 v42; // x0
  __int64 v43; // x0
  Il2CppObject *Instance; // x22
  System_Action_o *v45; // x23

  v4 = this;
  if ( (byte_4AB0FC9 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, obj);
    sub_1BAB41C(&Method_System_Array_Empty_int___, v5);
    sub_1BAB41C(&ClassBoardInfo_TypeInfo, v6);
    sub_1BAB41C(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v7);
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_1BAB41C(&DataManager_TypeInfo, v9);
    sub_1BAB41C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1BAB41C(&FollowerSelectItemListViewItem_TypeInfo, v11);
    sub_1BAB41C(&Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__, v12);
    sub_1BAB41C(&Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__, v13);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14);
    this = (FollowerSelectItemListViewManager_o *)sub_1BAB41C(
                                                    &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                    v15);
    byte_4AB0FC9 = 1;
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
                 (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
            v21 = (_QWORD *)sub_1BAB434(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
          v22 = (System_Reflection_MethodBase_o *)sub_1BAB400(v21, v21[4]);
          OverwriteAssetSoundName__PlaySystemSe(v22, 2, 0LL);
          return;
        }
        v4->fields.isInput = 0;
        v23 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
        if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 83) & 2) != 0 )
          v23 = (_QWORD *)sub_1BAB434(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
        v24 = (System_Reflection_MethodBase_o *)sub_1BAB400(v23, v23[4]);
        OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantMaster___);
        this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewItem__get_SvtId(v19, v26);
        if ( Master_object )
        {
          this = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                          (int32_t)this,
                                                          (const MethodInfo_3163D90 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            scrollView = (int32_t)this->fields.scrollView;
            this = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
                    v33 = (ClassBoardInfo_o *)sub_1BAB668(ClassBoardInfo_TypeInfo);
                    ClassBoardInfo___ctor(v33, 0LL);
                    if ( v33 )
                    {
                      v33->fields.classBoardBaseId = v31;
                      v35 = Method_System_Array_Empty_int___;
                      v36 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v36 )
                      {
                        sub_1BFD354(Method_System_Array_Empty_int___);
                        v36 = v35[7];
                      }
                      v37 = *(_QWORD *)(v36 + 16);
                      if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
                        v37 = sub_1BFD2F8(v34);
                      if ( !*(_DWORD *)(v37 + 224) )
                        *(__n128 *)&v34 = j_il2cpp_runtime_class_init_0(v37);
                      v38 = *(_QWORD *)(v35[7] + 16LL);
                      if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
                        v38 = sub_1BFD2F8(v34);
                      v33->fields.squareIds = **(struct System_Int32_array ***)(v38 + 184);
                      sub_1BAB3C0(&v33->fields.squareIds);
                      v40 = Method_System_Array_Empty_int___;
                      v41 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v41 )
                      {
                        sub_1BFD354(Method_System_Array_Empty_int___);
                        v41 = v40[7];
                      }
                      v42 = *(_QWORD *)(v41 + 16);
                      if ( (*(_BYTE *)(v42 + 309) & 1) == 0 )
                        v42 = sub_1BFD2F8(v39);
                      if ( !*(_DWORD *)(v42 + 224) )
                        *(__n128 *)&v39 = j_il2cpp_runtime_class_init_0(v42);
                      v43 = *(_QWORD *)(v40[7] + 16LL);
                      if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
                        v43 = sub_1BFD2F8(v39);
                      v33->fields.releasedClassIds = **(struct System_Int32_array ***)(v43 + 184);
                      sub_1BAB3C0(&v33->fields.releasedClassIds);
LABEL_48:
                      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v45 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
                      System_Action___ctor(
                        v45,
                        (Il2CppObject *)v4,
                        Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__,
                        0LL);
                      if ( Instance )
                      {
                        CommonUI__OpenClassBoardEffectListDialog((CommonUI_o *)Instance, 1, v31, 0, v45, 1, v33, 0LL);
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
                        sub_1BAB680(this, obj);
                      v33 = userClassBoardInfo->m_Items[v32];
                      if ( !v33 )
                        break;
                      if ( v33->fields.classBoardBaseId == v31 )
                      {
                        this = (FollowerSelectItemListViewManager_o *)ClassBoardInfo__IsReleasedClassId(
                                                                        v33,
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
      sub_1BAB678(this, obj);
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
    sub_1BAB678(0LL, method);
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
  __int64 v9; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v11; // x20
  int v12; // w24
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v15; // x23
  const MethodInfo *v16; // x3

  if ( (byte_4AB0FB4 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v5);
    sub_1BAB41C(&StringLiteral_9942/*"OnMoveEnd"*/, v6);
    byte_4AB0FB4 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = FollowerSelectItemListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_13:
    sub_1BAB678(ObjectList, v9);
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
             (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v15 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v12;
      FollowerSelectItemListViewObject__Init_31163576((FollowerSelectItemListViewObject_o *)Item, 4, v15, 0.1, v16);
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
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
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

  if ( (byte_4AB0FB2 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__, v9);
    sub_1BAB41C(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__, v11);
    sub_1BAB41C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v12);
    sub_1BAB41C(&StringLiteral_9942/*"OnMoveEnd"*/, v13);
    byte_4AB0FB2 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BAB678(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BAB678(v19, v20);
      FollowerSelectItemListViewObject__Init_31163576(
        (FollowerSelectItemListViewObject_o *)current,
        mode,
        v18,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__RequestListObject_31162460(
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

  if ( (byte_4AB0FB3 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__, v7);
    sub_1BAB41C(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v10);
    sub_1BAB41C(&StringLiteral_9942/*"OnMoveEnd"*/, v11);
    byte_4AB0FB3 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BAB678(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BAB678(v17, v18);
      FollowerSelectItemListViewObject__Init_31162964((FollowerSelectItemListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


void __fastcall FollowerSelectItemListViewManager__SaveSortFilter(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ListViewSort_o *sort; // x0
  struct ListViewSort_o *v6; // x8
  FollowerSelectItemListViewManager_o *v7; // x0
  int monitor; // w20
  const MethodInfo *v9; // x1
  FollowerSelectItemListViewManager_c *v10; // x0
  FollowerSelectItemListViewManager_o *v11; // x0
  int monitor_high; // w20
  FollowerSelectItemListViewManager_c *v13; // x0

  if ( (byte_4AB0FAC & 1) == 0 )
  {
    sub_1BAB41C(&FollowerSelectItemListViewManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_6750/*"FollowerSelectClass"*/, v3);
    sub_1BAB41C(&StringLiteral_6753/*"FollowerSelectOldClass"*/, v4);
    byte_4AB0FAC = 1;
  }
  sort = this->fields.sort;
  if ( !sort || (ListViewSort__Save(sort, 0LL), (v6 = this->fields.sort) == 0LL) )
    sub_1BAB678(sort, method);
  if ( v6->fields.isRequestSave )
  {
    v7 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v7 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor = (int)v7->fields.sort->monitor;
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(v7, method) )
    {
      v10 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v10 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6750/*"FollowerSelectClass"*/, v10->static_fields->followerClassId, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
    v11 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v11 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor_high = HIDWORD(v11->fields.sort->monitor);
    if ( monitor_high != FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(v11, v9) )
    {
      v13 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v13 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(
        (System_String_o *)StringLiteral_6753/*"FollowerSelectOldClass"*/,
        v13->static_fields->oldFollowerClassId,
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
    sub_1BAB678(0LL, method);
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
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4AB0FA0 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventFilterMaster___, eventIds);
    sub_1BAB41C(&Method_System_Linq_Enumerable_ToList_int___, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Remove__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4AB0FA0 = 1;
  }
  entity = 0LL;
  *(_WORD *)&this->fields.isBonusFilterEnable = 0;
  this->fields.isServantEquipBonusFilterEnable = 0;
  Instance = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)eventIds,
                                                         (const MethodInfo_2F00798 *)Method_System_Linq_Enumerable_ToList_int___);
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
        sub_1BAB680(Instance, v10);
      v14 = eventIds->m_Items[v13 + 1];
      Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventFilterMaster___);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)EventFilterMaster__TryGetEntity_39520100(
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
                                                                 (const MethodInfo_3531D94 *)Method_System_Collections_Generic_List_int__Remove__);
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
    sub_1BAB678(Instance, v10);
  }
LABEL_20:
  if ( !v12 )
    goto LABEL_22;
  this->fields.equipBonusFilterEventIds = System_Collections_Generic_List_int___ToArray(
                                            v12,
                                            (const MethodInfo_3532350 *)Method_System_Collections_Generic_List_int__ToArray__);
  sub_1BAB3C0(&this->fields.equipBonusFilterEventIds);
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
  System_Collections_Generic_Dictionary_int__int__o **p_classBoardMaxDictionary; // x20
  System_Collections_Generic_Dictionary_int__int__o *v23; // x19
  System_Collections_ObjectModel_Collection_T__o *Master_object; // x0
  __int64 v25; // x1
  __int64 v26; // x1
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
  __int64 v40; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v42; // x1
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0

  if ( (byte_4AB0FA2 & 1) == 0 )
  {
    sub_1BAB41C(&AtlasManager_TypeInfo, method);
    sub_1BAB41C(&BalanceConfig_TypeInfo, v3);
    sub_1BAB41C(&ClassBoardBaseEntity_TypeInfo, v4);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5);
    sub_1BAB41C(&CondType_TypeInfo, v6);
    sub_1BAB41C(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v7);
    sub_1BAB41C(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v8);
    sub_1BAB41C(&DataManager_TypeInfo, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int__Clear__, v11);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v12);
    sub_1BAB41C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_1BAB41C(&System_IDisposable_TypeInfo, v14);
    sub_1BAB41C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15);
    sub_1BAB41C(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1BAB41C(&StringLiteral_17702/*"buttontxt_formation_20"*/, v17);
    byte_4AB0FA2 = 1;
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
  if ( CondType__IsQuestClear_37980612(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17702/*"buttontxt_formation_20"*/, 0LL);
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = &this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_31AE344 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v23 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BAB668(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v23,
      (const MethodInfo_31AD800 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *p_classBoardMaxDictionary = v23;
    sub_1BAB3C0(p_classBoardMaxDictionary);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object
    || (Master_object = (System_Collections_ObjectModel_Collection_T__o *)Master_object[1].monitor) == 0LL )
  {
    sub_1BAB678(Master_object, v25);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Master_object,
                 (const MethodInfo_3100938 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BAB678(0LL, v26);
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
      p_method = sub_1BFD3FC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v35 = sub_1BFD3FC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
        v39 = (Il2CppObject *)sub_1BAB938(v36);
LABEL_50:
        sub_1BAB678(v39, v40);
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v39 = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v37 )
      goto LABEL_50;
    if ( !v39 )
      sub_1BAB678(0LL, v40);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                            (ClassBoardSquareMaster_o *)v39,
                            *(_DWORD *)(v37 + 16),
                            0LL);
    if ( OtherThanNoneEntity )
    {
      if ( !*p_classBoardMaxDictionary )
        sub_1BAB678(OtherThanNoneEntity, v42);
      System_Collections_Generic_Dictionary_int__int___Add(
        *p_classBoardMaxDictionary,
        *(_DWORD *)(v37 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_31AE1C4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v43 = Enumerator->klass;
  v44 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_46;
    }
    v46 = (__int64)&v43->vtable[*v45].method;
  }
  else
  {
LABEL_46:
    v46 = sub_1BFD3FC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(Enumerator, *(_QWORD *)(v46 + 8));
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
  __int64 v16; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  const MethodInfo *v18; // x1
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerable_T__o *recommendItemList; // x21
  System_Collections_Generic_List_object__o *v21; // x22
  const MethodInfo *v22; // x1
  __int64 v23; // x10
  System_Collections_Generic_IEnumerable_T__o *originalItemList; // x21
  System_Collections_Generic_List_object__o *v25; // x22
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x20
  const MethodInfo *v27; // x2
  __int64 v28; // x10
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4AB0FB0 & 1) == 0 )
  {
    sub_1BAB41C(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&followerClassId);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_1BAB41C(&FollowerSelectItemListViewItem_TypeInfo, v8);
    sub_1BAB41C(&FollowerSelectItemListViewManager_TypeInfo, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem___ctor___76402872, v11);
    sub_1BAB41C(&System_Collections_Generic_List_ListViewItem__TypeInfo, v12);
    byte_4AB0FB0 = 1;
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
      v15 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ListViewItem__TypeInfo);
      System_Collections_Generic_List_object____ctor_55890352(
        v15,
        mixItemList,
        (const MethodInfo_354D1B0 *)Method_System_Collections_Generic_List_ListViewItem___ctor___76402872);
      this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v15;
      sub_1BAB3C0(&this->fields.itemList);
      itemList = this->fields.itemList;
      if ( itemList )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v29,
          (System_Collections_Generic_List_object__o *)itemList,
          (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v30 = v29;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v30,
                  (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( v30.fields._current )
          {
            methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(v30.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
              && (FollowerSelectItemListViewItem_c *)v30.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo )
            {
              FollowerSelectItemListViewItem__UpdateRestriction(
                (FollowerSelectItemListViewItem_o *)v30.fields._current,
                v18);
            }
          }
        }
LABEL_34:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v30,
          (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
        v21 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor_55890352(
          v21,
          recommendItemList,
          (const MethodInfo_354D1B0 *)Method_System_Collections_Generic_List_ListViewItem___ctor___76402872);
        this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v21;
        sub_1BAB3C0(&this->fields.itemList);
        itemList = this->fields.itemList;
        if ( itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v29,
            (System_Collections_Generic_List_object__o *)itemList,
            (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v30 = v29;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v30,
                    (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v30.fields._current )
            {
              v23 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(v30.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v23
                && (FollowerSelectItemListViewItem_c *)v30.fields._current->klass->_2.typeHierarchy[v23 - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__UpdateRestriction(
                  (FollowerSelectItemListViewItem_o *)v30.fields._current,
                  v22);
              }
            }
          }
          goto LABEL_34;
        }
      }
      else
      {
        originalItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.originalItemList;
        v25 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor_55890352(
          v25,
          originalItemList,
          (const MethodInfo_354D1B0 *)Method_System_Collections_Generic_List_ListViewItem___ctor___76402872);
        this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v25;
        p_itemList = &this->fields.itemList;
        sub_1BAB3C0(p_itemList);
        itemList = *p_itemList;
        if ( *p_itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v29,
            (System_Collections_Generic_List_object__o *)itemList,
            (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v30 = v29;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v30,
                    (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
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
          goto LABEL_34;
        }
      }
    }
    sub_1BAB678(itemList, v16);
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
  __int64 v12; // x1

  if ( (byte_4AB0FA7 & 1) == 0 )
  {
    sub_1BAB41C(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classId);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_11010/*"RECOMMEND_SERVANT_EMPTY"*/, v6);
    sub_1BAB41C(&StringLiteral_11781/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v7);
    byte_4AB0FA7 = 1;
  }
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(classId, 0LL) )
    v8 = (System_String_o **)&StringLiteral_11010/*"RECOMMEND_SERVANT_EMPTY"*/;
  else
    v8 = (System_String_o **)&StringLiteral_11781/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  v9 = *v8;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get(v9, 0LL);
  if ( !emptyMessageLabel )
    sub_1BAB678(v11, v12);
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

  if ( (byte_4AB0FBC & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_17564/*"btn_sefilter_2_on"*/, method);
    sub_1BAB41C(&StringLiteral_17563/*"btn_sefilter_2"*/, v3);
    byte_4AB0FBC = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (bonusFilterSprite = this->fields.bonusFilterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !bonusFilterSprite) )
  {
    sub_1BAB678(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17563/*"btn_sefilter_2"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17564/*"btn_sefilter_2_on"*/;
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
  sub_1BAB3C0(&this->fields.callbackFunc);
  FollowerSelectItemListViewManager__SetMode_31161708(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__SetMode_31161708(
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
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  int32_t v13; // w20
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  __int64 *v16; // x8
  const MethodInfo *v17; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v19; // x20
  int32_t v20; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v22; // x23
  const MethodInfo *v23; // x3
  struct FollowerSelectItemListViewObject_o *tutorialListViewObject; // x23
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2

  if ( (byte_4AB0FB1 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BAB41C(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v7);
    sub_1BAB41C(&StringLiteral_9942/*"OnMoveEnd"*/, v8);
    sub_1BAB41C(&StringLiteral_11320/*"RequestInto"*/, v9);
    byte_4AB0FB1 = 1;
  }
  if ( mode != 3 )
  {
    this->fields.initMode = mode;
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
    ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
    if ( mode == 1 )
    {
      v16 = &StringLiteral_11320/*"RequestInto"*/;
    }
    else
    {
      if ( mode != 4 )
      {
        if ( mode == 2 )
          FollowerSelectItemListViewManager__RequestListObject_31162460(this, 3, v15);
        return;
      }
      ListViewManager__set_IsInput((ListViewManager_o *)this, 1, 0LL);
      ClippingObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ClippingObjectList(
                                                                          this,
                                                                          v17);
      if ( !ClippingObjectList )
        goto LABEL_31;
      size = ClippingObjectList->fields._size;
      v19 = ClippingObjectList;
      if ( size >= 1 )
      {
        this->fields.callbackCount = size;
        v20 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v19,
                   v20,
                   (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
          v22 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
          System_Action___ctor(v22, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
            break;
          if ( v20 )
          {
            FollowerSelectItemListViewObject__Init_31162964((FollowerSelectItemListViewObject_o *)Item, 2, v22, v23);
          }
          else
          {
            FollowerSelectItemListViewObject__Init_31162964((FollowerSelectItemListViewObject_o *)Item, 0, v22, v23);
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
            sub_1BAB3C0(&ClippingObjectList[1]);
            tutorialListViewObject = this->fields.tutorialListViewObject;
            ClippingObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewObject__GetItem(
                                                                                (FollowerSelectItemListViewObject_o *)Item,
                                                                                v25);
            if ( !tutorialListViewObject )
              break;
            ((void (__fastcall *)(struct FollowerSelectItemListViewObject_o *, System_Collections_Generic_List_object__o *, Il2CppMethodPointer))tutorialListViewObject->klass->vtable._5_SetItem.method)(
              tutorialListViewObject,
              ClippingObjectList,
              tutorialListViewObject->klass->vtable._6_SetItem.methodPtr);
            ClippingObjectList = (System_Collections_Generic_List_object__o *)this->fields.tutorialListViewObject;
            if ( !ClippingObjectList )
              break;
            FollowerSelectItemListViewObject__Init_31160236(
              (FollowerSelectItemListViewObject_o *)ClippingObjectList,
              6,
              v26);
          }
          if ( ++v20 >= v19->fields._size )
            return;
        }
LABEL_31:
        sub_1BAB678(ClippingObjectList, v11);
      }
      this->fields.callbackCount = 1;
      v16 = &StringLiteral_9942/*"OnMoveEnd"*/;
    }
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)*v16, 0.0, 0LL);
    return;
  }
  ClippingObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                                      this,
                                                                      *(const MethodInfo **)&mode);
  if ( !ClippingObjectList )
    goto LABEL_31;
  v12 = ClippingObjectList;
  if ( ClippingObjectList->fields._size >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      ClippingObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          v12,
                                                                          v13,
                                                                          (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
      if ( !ClippingObjectList )
        break;
      FollowerSelectItemListViewObject__Init_31160236((FollowerSelectItemListViewObject_o *)ClippingObjectList, 5, v14);
      if ( ++v13 >= v12->fields._size )
        return;
    }
    goto LABEL_31;
  }
}


void __fastcall FollowerSelectItemListViewManager__SetMode_31162408(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BAB3C0(&this->fields.callbackFunc2);
  FollowerSelectItemListViewManager__SetMode_31161708(this, mode, v6);
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

  if ( (byte_4AB0FAE & 1) == 0 )
  {
    sub_1BAB41C(&FollowerSelectItemListViewObject_TypeInfo, obj);
    byte_4AB0FAE = 1;
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
    sub_1BAB678(v7, obj);
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
  FollowerSelectItemListViewObject__Init_31160236(
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
  __int64 v12; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w20
  bool IsRecommendSupportGroupType; // w20
  UILabel_o *sortKindLabel; // x21
  UnityEngine_Object_o *sortOrderSprite; // x21
  struct ListViewSort_o *v18; // x8
  __int64 v19; // x9
  int v20; // w9
  System_String_o **v21; // x8
  struct ListViewSort_o *v22; // x8
  System_String_o **v23; // x9
  System_String_o **v24; // x10
  System_String_o **v25; // x8
  System_String_o **v26; // x8

  if ( (byte_4AB0FC0 & 1) == 0 )
  {
    sub_1BAB41C(&ClassButtonControlComponent_TypeInfo, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    sub_1BAB41C(&StringLiteral_17571/*"btn_sort_up"*/, v4);
    sub_1BAB41C(&StringLiteral_17659/*"btn_txt_up"*/, v5);
    sub_1BAB41C(&StringLiteral_17614/*"btn_txt_new"*/, v6);
    sub_1BAB41C(&StringLiteral_17604/*"btn_txt_down"*/, v7);
    sub_1BAB41C(&StringLiteral_17621/*"btn_txt_old"*/, v8);
    sub_1BAB41C(&StringLiteral_17568/*"btn_sort_down"*/, v9);
    byte_4AB0FC0 = 1;
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
    v18 = this->fields.sort;
    if ( v18 )
    {
      v19 = 56LL;
      if ( IsRecommendSupportGroupType )
        v19 = 152LL;
      v20 = *(_DWORD *)((char *)&v18->klass + v19);
      if ( v20 == 11 || v20 == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v21 = (System_String_o **)(v18->fields.isAscendingOrder ? &StringLiteral_17621/*"btn_txt_old"*/ : &StringLiteral_17614/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
          v22 = this->fields.sort;
          if ( v22 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v23 = (System_String_o **)&StringLiteral_17568/*"btn_sort_down"*/;
              v24 = (System_String_o **)&StringLiteral_17571/*"btn_sort_up"*/;
LABEL_35:
              if ( v22->fields.isAscendingOrder )
                v26 = v23;
              else
                v26 = v24;
              UISprite__set_spriteName((UISprite_o *)sort, *v26, 0LL);
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
          v25 = (System_String_o **)(v18->fields.isAscendingOrder ? &StringLiteral_17659/*"btn_txt_up"*/ : &StringLiteral_17604/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v25, 0LL);
          v22 = this->fields.sort;
          if ( v22 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v23 = (System_String_o **)&StringLiteral_17571/*"btn_sort_up"*/;
              v24 = (System_String_o **)&StringLiteral_17568/*"btn_sort_down"*/;
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_39:
    sub_1BAB678(sort, v12);
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
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_object__o *v29; // x22
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  if ( (byte_4AB0FC3 & 1) == 0 )
  {
    sub_1BAB41C(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classPos);
    sub_1BAB41C(&FollowerSelectItemListViewItem_TypeInfo, v5);
    sub_1BAB41C(&FollowerSelectItemListViewManager_TypeInfo, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem___ctor___76402872, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1BAB41C(&System_Collections_Generic_List_ListViewItem__TypeInfo, v12);
    byte_4AB0FC3 = 1;
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
  v16 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
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
                                                                (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        v26 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v16->fields._version;
        if ( !items )
          break;
        v27 = v16->fields._size;
        if ( (unsigned int)v27 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            v23,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + v27;
          v16->fields._size = v27 + 1;
          v28[4] = (Il2CppClass *)v23;
          sub_1BAB3C0(v28 + 4);
        }
        ++v22;
      }
      if ( size == ++v21 )
        goto LABEL_30;
      itemList = (System_Collections_Generic_List_object__o *)*p_itemList;
    }
    while ( *p_itemList );
LABEL_43:
    sub_1BAB678(itemList, v17);
  }
LABEL_30:
  v29 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor_55890352(
    v29,
    (System_Collections_Generic_IEnumerable_T__o *)v16,
    (const MethodInfo_354D1B0 *)Method_System_Collections_Generic_List_ListViewItem___ctor___76402872);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v29;
  sub_1BAB3C0(&this->fields.itemList);
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
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  Il2CppObject *Component_object; // x20
  Il2CppObject *v27; // x20
  __int64 v28; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4AB0FC4 & 1) == 0 )
  {
    sub_1BAB41C(&ClassButtonControlComponent_TypeInfo, method);
    sub_1BAB41C(&FollowerListRequest_TypeInfo, v3);
    sub_1BAB41C(&FollowerRecommendSupportListRequest_TypeInfo, v4);
    sub_1BAB41C(&FollowerSelectItemListViewManager_TypeInfo, v5);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, v6);
    sub_1BAB41C(&long_TypeInfo, v7);
    sub_1BAB41C(&NetworkManager_TypeInfo, v8);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v9);
    sub_1BAB41C(&StringLiteral_25026/*"{0}"*/, v10);
    this = (FollowerSelectItemListViewManager_o *)sub_1BAB41C(&StringLiteral_1/*""*/, v11);
    byte_4AB0FC4 = 1;
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
                         (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
      v29.fields.r = 1.0;
      v29.fields.g = 1.0;
      v29.fields.b = 1.0;
      v29.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this, v29, 0LL);
    }
    this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshTitleObject;
    if ( this )
    {
      v27 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)this,
              (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (FollowerSelectItemListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                      (UnityEngine_Object_o *)v27,
                                                      0LL,
                                                      0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v27 )
          goto LABEL_59;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v27, 1, 0LL);
      }
      else
      {
        this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshTitleSprite;
        if ( !this )
          goto LABEL_59;
        v30.fields.r = 1.0;
        v30.fields.g = 1.0;
        v30.fields.b = 1.0;
        v30.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v30, 0LL);
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
    sub_1BAB678(this, method);
  }
  this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshButtonObject;
  if ( !this )
    goto LABEL_59;
  v16 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
          (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
        v28 = v15;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v28, v22, v23, v24);
        this = (FollowerSelectItemListViewManager_o *)System_String__Format(
                                                        (System_String_o *)StringLiteral_25026/*"{0}"*/,
                                                        v25,
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

  if ( (byte_4AB0F98 & 1) == 0 )
  {
    sub_1BAB41C(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4AB0F98 = 1;
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
    v8 = sub_1BE690C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1BAB938(v7);
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

  if ( (byte_4AB0F9A & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, value);
    byte_4AB0F9A = 1;
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
    v8 = sub_1BE690C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1BAB938(v7);
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
  _BOOL8 v22; // x0
  __int64 v23; // x1
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4AB0F9F & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__, v8);
    sub_1BAB41C(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo, v9);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v10);
    byte_4AB0F9F = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BAB678(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v30 = v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v30.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BAB678(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BAB678(0LL, v18);
      Item = (ListViewItem_o *)FollowerSelectItemListViewObject__GetItem(
                                 (FollowerSelectItemListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1BAB678(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_41118488((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_1BAB678(v22, v23);
          items = v11->fields._items;
          v25 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BAB678(v22, v23);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BAB678(Item, v21);
        items = v11->fields._items;
        v25 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BAB678(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v27 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v19;
        sub_1BAB3C0(v27 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4AB0F9E & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__, v8);
    sub_1BAB41C(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo, v9);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v10);
    byte_4AB0F9E = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BAB678(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BAB678(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v18 = Component_object;
      if ( !v11 )
        sub_1BAB678(Component_object, Component_object);
      items = v11->fields._items;
      v20 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BAB678(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_1BAB3C0(v22 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4AB0F99 & 1) == 0 )
  {
    sub_1BAB41C(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4AB0F99 = 1;
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
    v8 = sub_1BE690C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1BAB938(v7);
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

  if ( (byte_4AB0F9B & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, value);
    byte_4AB0F9B = 1;
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
    v8 = sub_1BE690C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1BAB938(v7);
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
  sub_1BAB3C0(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BAB4DC(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BAB694(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BAB544(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19E7690;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19E7638;
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
  if ( (byte_4AB0FCD & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1BAB41C(&FollowerSelectItemListViewManager_ResultKind_TypeInfo, v9);
    byte_4AB0FCD = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             FollowerSelectItemListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BAB3D0(this, v14, callback, object);
}


void __fastcall FollowerSelectItemListViewManager_CallbackFunc__EndInvoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BAB3D4(result, 0LL, method);
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

  if ( (byte_4AB0FCE & 1) == 0 )
  {
    sub_1BAB41C(&FollowerSelectItemListViewManager___c_TypeInfo, v1);
    byte_4AB0FCE = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(FollowerSelectItemListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FollowerSelectItemListViewManager___c_TypeInfo->static_fields->__9 = (struct FollowerSelectItemListViewManager___c_o *)v2;
  sub_1BAB3C0(FollowerSelectItemListViewManager___c_TypeInfo->static_fields);
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
  System_NotImplementedException_o *v11; // x19
  __int64 v12; // x0

  if ( (byte_4AB0FCF & 1) == 0 )
  {
    sub_1BAB41C(&ListViewSort_TypeInfo, *(_QWORD *)&questType);
    sub_1BAB41C(&StringLiteral_6751/*"FollowerSelectEventQuest"*/, v4);
    sub_1BAB41C(&StringLiteral_6752/*"FollowerSelectMainQuest"*/, v5);
    byte_4AB0FCF = 1;
  }
  if ( questType )
  {
    if ( questType != 1 )
    {
      v10 = sub_1BAB430(&System_NotImplementedException_TypeInfo);
      v11 = (System_NotImplementedException_o *)sub_1BAB668(v10);
      System_NotImplementedException___ctor(v11, 0LL);
      v12 = sub_1BAB430(&Method_FollowerSelectItemListViewManager___c___cctor_b__133_0__);
      sub_1BAB544(v11, v12);
    }
    v6 = &StringLiteral_6751/*"FollowerSelectEventQuest"*/;
  }
  else
  {
    v6 = &StringLiteral_6752/*"FollowerSelectMainQuest"*/;
  }
  v7 = (System_String_o *)*v6;
  v8 = (ListViewSort_o *)sub_1BAB668(ListViewSort_TypeInfo);
  ListViewSort___ctor_41136084(v8, v7, 11, 0, 0LL);
  return v8;
}