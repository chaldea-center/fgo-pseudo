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

  if ( (byte_4B61CDC & 1) == 0 )
  {
    sub_1BE4ACC(&FollowerSelectItemListViewManager_TypeInfo, v1);
    sub_1BE4ACC(&System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo, v2);
    sub_1BE4ACC(&Method_FollowerSelectItemListViewManager___c___cctor_b__133_0__, v3);
    sub_1BE4ACC(&FollowerSelectItemListViewManager___c_TypeInfo, v4);
    byte_4B61CDC = 1;
  }
  v5 = FollowerSelectItemListViewManager___c_TypeInfo;
  if ( !FollowerSelectItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager___c_TypeInfo);
    v5 = FollowerSelectItemListViewManager___c_TypeInfo;
  }
  v6 = (Il2CppObject *)v5->static_fields->__9;
  v7 = (System_Func_T__TResult__o *)sub_1BE4D18(System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo);
  System_Func_Int32Enum__object____ctor(v7, v6, Method_FollowerSelectItemListViewManager___c___cctor_b__133_0__, 0LL);
  FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT = (struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)v7;
  sub_1BE4A70(FollowerSelectItemListViewManager_TypeInfo->static_fields);
  static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->lastSelectedQuestId = -1LL;
  static_fields->REFRESH_DARK_COLOR = (struct UnityEngine_Color_o)xmmword_BE2210;
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

  if ( (byte_4B61CB1 & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, method);
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1BE4ACC(&StringLiteral_17696/*"btn_bg_12"*/, v4);
    sub_1BE4ACC(&StringLiteral_17757/*"btn_sefilter_2"*/, v5);
    sub_1BE4ACC(&StringLiteral_17899/*"buttontxt_formation_19"*/, v6);
    byte_4B61CB1 = 1;
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
  AtlasManager__SetEventSprite(changeSkillButtonSprite, (System_String_o *)StringLiteral_17899/*"buttontxt_formation_19"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.bonusFilterSprite, (System_String_o *)StringLiteral_17757/*"btn_sefilter_2"*/, 0LL);
  changeSkillButton = (UnityEngine_Component_o *)this->fields.bonusFilterSprite;
  if ( !changeSkillButton
    || (changeSkillButton = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))changeSkillButton->klass[2]._1.typeMetadataHandle)(
                                                         changeSkillButton,
                                                         changeSkillButton->klass[2]._1.interopData),
        !sortKindButton)
    || (Component_object = UnityEngine_Component__GetComponent_object_(
                             sortKindButton,
                             (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        changeSkillButton = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(
                                                         (UISprite_o *)Component_object,
                                                         (System_String_o *)StringLiteral_17696/*"btn_bg_12"*/,
                                                         0LL),
        !Component_object) )
  {
LABEL_11:
    sub_1BE4D28(changeSkillButton, method);
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
    sub_1BE4D28(classButtonControl, *(_QWORD *)&classPos);
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

  if ( (byte_4B61CCE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isResult);
    byte_4B61CCE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v6);
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
  System_Collections_Generic_List_object__o *v54; // x24
  System_Collections_Generic_List_object__o *v55; // x24
  System_Collections_Generic_List_object__o *v56; // x24
  __int64 ReturnTypeByQuestId; // x0
  __int64 v58; // x1
  FollowerSelectItemListViewManager_c *v59; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct ListViewSort_o **p_sort; // x24
  const MethodInfo *v62; // x4
  int32_t InitialDisplayClass; // w25
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
  System_Int32_array *OngoingQuestTargetEventIds; // x25
  EventUpValSetupInfo_o *v66; // x26
  __int64 v67; // x8
  __int64 v68; // x26
  unsigned __int64 v69; // x20
  int32_t v70; // w0
  ClassButtonControlComponent_o *classButtonControl; // x24
  ClassButtonControlComponent_CallbackFunc_o *v72; // x26
  ClassButtonControlComponent_o *v73; // x24
  const MethodInfo *v74; // x2
  QuestPhaseEntity_o *v75; // x20
  long double v76; // q0
  __int64 v77; // x0
  __int64 v78; // x0
  Il2CppObject *MasterData_object; // x23
  FollowerInfo_array *QuestFollowerList; // x29
  int v81; // w20
  int32_t v82; // w27
  QuestRestrictionInfo_o *v83; // x19
  bool IsMyServantOrNpcRestriction_41431712; // w28
  BalanceConfig_c *v85; // x0
  int32_t ClassBoardReleaseQuestId; // w24
  bool IsQuestClear_38498148; // w24
  int max_length; // w8
  FollowerSelectItemListViewManager_o *v89; // x19
  QuestRestrictionInfo_o *v90; // x20
  int v91; // w21
  FollowerInfo_o *v92; // x26
  ServantLeaderInfo_o *ServantLeaderInfo; // x24
  int32_t v94; // w0
  System_Int32_array *v95; // x25
  int32_t Rarity; // w0
  DataMasterBase_TMaster__TEntity__PKType__o *v97; // x19
  bool IsRecommendedFollower; // w23
  System_Collections_Generic_List_object__o *v99; // x25
  char v100; // w20
  Il2CppObject *Master_object; // x20
  Il2CppObject *v102; // x0
  __int64 v103; // x19
  __int64 v104; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v105; // x24
  int32_t ClassBoardBaseId; // w27
  Il2CppObject *v107; // x24
  ClassBoardInfo_o *v108; // x19
  Il2CppObject *v109; // x28
  struct System_Object_array *items; // x8
  _QWORD *v111; // x9
  __int64 size; // x10
  Il2CppClass **v113; // x0
  FollowerSelectItemListViewManager_c *v114; // x0
  bool v115; // w19
  int32_t v116; // w25
  EventUpValSetupInfo_o *setupInfo; // x22
  struct System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x20
  bool isServantEquipBonusFilterEnable; // w23
  bool isServantBonusFilterEnable; // w27
  bool isBonusFilterEnable; // w28
  FollowerSelectItemListViewItem_o *v122; // x24
  __int64 v123; // x8
  _QWORD *v124; // x9
  __int64 v125; // x10
  __int64 v126; // x8
  __int64 v127; // x8
  _QWORD *v128; // x9
  __int64 v129; // x10
  __int64 v130; // x8
  __int64 v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  __int64 v134; // x8
  int v135; // w20
  bool v136; // w8
  FollowerSelectItemListViewManager_o *v137; // x20
  Il2CppClass *klass; // x23
  int namespaze; // w8
  Il2CppObject *v140; // x24
  void **v141; // x8
  Il2CppObject *v142; // x0
  Il2CppObject *v143; // x25
  __int64 v144; // x27
  BalanceConfig_c *v145; // x0
  struct BalanceConfig_StaticFields *v146; // x9
  int32_t FixEventSupportDeckNum; // w25
  int32_t FixMainSupportDeckNum; // w26
  int32_t deckPriority; // w28
  unsigned __int64 v150; // x21
  System_Collections_Generic_Dictionary_int__int__o *v151; // x25
  int32_t v152; // w22
  bool v153; // w29
  bool v154; // w27
  FollowerSelectItemListViewItem_o *v155; // x26
  __int64 v156; // x8
  _QWORD *v157; // x9
  __int64 v158; // x10
  __int64 v159; // x8
  struct BalanceConfig_StaticFields *v160; // x8
  int32_t v161; // w26
  int32_t v162; // w28
  int32_t v163; // w26
  unsigned __int64 v164; // x22
  int32_t v165; // w21
  Il2CppClass *v166; // x21
  EventUpValSetupInfo_o *v167; // x23
  bool v168; // w24
  System_Collections_Generic_Dictionary_int__int__o *v169; // x19
  int v170; // w27
  bool v171; // w25
  bool v172; // w29
  FollowerSelectItemListViewItem_o *v173; // x28
  __int64 v174; // x8
  _QWORD *v175; // x9
  __int64 v176; // x10
  __int64 v177; // x8
  Il2CppClass *v178; // x26
  unsigned __int64 namespaze_low; // x8
  unsigned __int64 v180; // x27
  __int64 v181; // x9
  __int64 v182; // x9
  void **v183; // x8
  FollowerInfo_o *v184; // x8
  Il2CppObject *v185; // x0
  __int64 v186; // x21
  BalanceConfig_c *v187; // x0
  struct BalanceConfig_StaticFields *v188; // x9
  int32_t v189; // w24
  int32_t v190; // w25
  int32_t v191; // w25
  unsigned __int64 v192; // x22
  System_Collections_Generic_Dictionary_int__int__o *v193; // x23
  int32_t v194; // w29
  bool v195; // w21
  bool v196; // w28
  bool v197; // w19
  FollowerSelectItemListViewItem_o *v198; // x24
  __int64 v199; // x8
  _QWORD *v200; // x9
  __int64 v201; // x10
  __int64 v202; // x8
  struct BalanceConfig_StaticFields *v203; // x8
  int32_t v204; // w24
  int32_t v205; // w25
  int32_t v206; // w25
  unsigned __int64 v207; // x23
  int32_t v208; // w22
  EventUpValSetupInfo_o *v209; // x19
  int32_t v210; // w21
  bool v211; // w26
  System_Collections_Generic_Dictionary_int__int__o *v212; // x27
  int v213; // w22
  bool v214; // w29
  bool v215; // w24
  FollowerSelectItemListViewItem_o *v216; // x28
  __int64 v217; // x8
  _QWORD *v218; // x9
  __int64 v219; // x10
  __int64 v220; // x8
  Il2CppClass *v221; // x19
  unsigned __int64 v222; // x8
  unsigned __int64 v223; // x22
  Il2CppType *p_byval_arg; // x20
  __int64 v225; // x9
  __int64 v226; // x9
  __int64 v227; // x26
  __int64 v228; // x8
  __int64 v229; // x8
  __int64 v230; // x8
  __int64 v231; // x27
  __int64 v232; // x28
  FollowerInfo_o *v233; // x27
  int32_t v234; // w21
  bool v235; // w19
  bool v236; // w28
  bool v237; // w25
  EventUpValSetupInfo_o *v238; // x29
  System_Collections_Generic_Dictionary_int__int__o *v239; // x24
  FollowerSelectItemListViewItem_o *v240; // x26
  __int64 v241; // x8
  _QWORD *v242; // x9
  __int64 v243; // x10
  __int64 v244; // x8
  const MethodInfo *v245; // x2
  FollowerSelectItemListViewManager_c *v246; // x0
  const MethodInfo *v247; // x2
  const MethodInfo *v248; // x1
  struct UIScrollView_o *scrollView; // x8
  __int64 v250; // x0
  int32_t supportDeckId; // [xsp+38h] [xbp-178h]
  int32_t supportDeckIda; // [xsp+38h] [xbp-178h]
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary; // [xsp+48h] [xbp-168h]
  UserFollowMaster_o *v254; // [xsp+70h] [xbp-140h]
  bool HasFlag_40415172; // [xsp+7Ch] [xbp-134h]
  struct System_Collections_Generic_List_ListViewItem__o **p_recommendItemList; // [xsp+80h] [xbp-130h]
  unsigned int v257; // [xsp+8Ch] [xbp-124h]
  __int64 v260; // [xsp+98h] [xbp-118h]
  int v261; // [xsp+98h] [xbp-118h]
  __int64 v262; // [xsp+A0h] [xbp-110h]
  __int64 v263; // [xsp+A0h] [xbp-110h]
  struct System_Collections_Generic_List_ListViewItem__o **p_originalItemList; // [xsp+A8h] [xbp-108h]
  Il2CppObject *v265; // [xsp+B0h] [xbp-100h]
  int v266; // [xsp+B0h] [xbp-100h]
  Il2CppClass *v267; // [xsp+B0h] [xbp-100h]
  bool v268; // [xsp+B8h] [xbp-F8h]
  bool v269; // [xsp+B8h] [xbp-F8h]
  __int64 v270; // [xsp+B8h] [xbp-F8h]
  unsigned __int64 v271; // [xsp+B8h] [xbp-F8h]
  int32_t v272; // [xsp+C0h] [xbp-F0h]
  EventUpValSetupInfo_o *v273; // [xsp+C0h] [xbp-F0h]
  EventUpValSetupInfo_o *v274; // [xsp+C0h] [xbp-F0h]
  bool isReleasedClassBoard; // [xsp+C8h] [xbp-E8h]
  __int64 v276; // [xsp+C8h] [xbp-E8h]
  __int64 v277; // [xsp+C8h] [xbp-E8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v278; // [xsp+D0h] [xbp-E0h]
  FollowerInfo_o **v279; // [xsp+D0h] [xbp-E0h]
  FollowerInfo_o **v280; // [xsp+D0h] [xbp-E0h]
  QuestPhaseEntity_o *followerClassId; // [xsp+D8h] [xbp-D8h]
  EventUpValSetupInfo_o *followerClassIdc; // [xsp+D8h] [xbp-D8h]
  int32_t followerClassIda; // [xsp+D8h] [xbp-D8h]
  __int64 followerClassIdb; // [xsp+D8h] [xbp-D8h]
  struct System_Collections_Generic_List_ListViewItem__o **p_mixItemList; // [xsp+E0h] [xbp-D0h]
  UserFollowMaster_o *v286; // [xsp+E0h] [xbp-D0h]
  _BOOL4 IsMyServantOrNpcRestriction; // [xsp+100h] [xbp-B0h]
  FollowerInfo_o *v292; // [xsp+100h] [xbp-B0h]
  FollowerInfo_o *v293; // [xsp+100h] [xbp-B0h]
  FollowerInfo_o *v294; // [xsp+100h] [xbp-B0h]
  int32_t v295; // [xsp+100h] [xbp-B0h]
  Il2CppClass *v296; // [xsp+100h] [xbp-B0h]
  int32_t index; // [xsp+108h] [xbp-A8h]
  int32_t indexb; // [xsp+108h] [xbp-A8h]
  int32_t indexc; // [xsp+108h] [xbp-A8h]
  int32_t indexd; // [xsp+108h] [xbp-A8h]
  FollowerInfo_o *indexe; // [xsp+108h] [xbp-A8h]
  bool indexa; // [xsp+108h] [xbp-A8h]
  Il2CppObject *v304; // [xsp+118h] [xbp-98h] BYREF
  Il2CppObject *v305; // [xsp+120h] [xbp-90h] BYREF
  Il2CppObject *v306; // [xsp+128h] [xbp-88h] BYREF
  UserClassBoardSquareEntity_o *v307; // [xsp+130h] [xbp-80h] BYREF
  bool isWhole; // [xsp+13Ch] [xbp-74h] BYREF
  Il2CppObject *v309; // [xsp+140h] [xbp-70h] BYREF
  NpcFollowerEntity_o *entity; // [xsp+148h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v311; // 0:x0.16

  if ( (byte_4B61CB3 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, *(_QWORD *)&questId);
    sub_1BE4ACC(&ClassButtonControlComponent_CallbackFunc_TypeInfo, v8);
    sub_1BE4ACC(&ClassBoardInfo_TypeInfo, v9);
    sub_1BE4ACC(&ClassButtonControlComponent_TypeInfo, v10);
    sub_1BE4ACC(&CondType_TypeInfo, v11);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v12);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_QuestMaster___, v13);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v14);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserFollowMaster___, v15);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v16);
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventQuestMaster___, v17);
    sub_1BE4ACC(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v18);
    sub_1BE4ACC(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, v19);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantMaster___, v20);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, v21);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserFollowerMaster___, v22);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___, v23);
    sub_1BE4ACC(&DataManager_TypeInfo, v24);
    sub_1BE4ACC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v25);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v26);
    sub_1BE4ACC(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v27);
    sub_1BE4ACC(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v28);
    sub_1BE4ACC(
      &Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__,
      v29);
    sub_1BE4ACC(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v30);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Contains_int___, v31);
    sub_1BE4ACC(&EventUpValSetupInfo_TypeInfo, v32);
    sub_1BE4ACC(&FollowerSelectItemListViewItem_TypeInfo, v33);
    sub_1BE4ACC(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v34);
    sub_1BE4ACC(&FollowerSelectItemListViewManager_TypeInfo, v35);
    sub_1BE4ACC(&int___TypeInfo, v36);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v37);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardInfo__Add__, v38);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__, v39);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardInfo___ctor__, v40);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v41);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v42);
    sub_1BE4ACC(&System_Collections_Generic_List_ListViewItem__TypeInfo, v43);
    sub_1BE4ACC(&System_Collections_Generic_List_ClassBoardInfo__TypeInfo, v44);
    sub_1BE4ACC(&System_Math_TypeInfo, v45);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v46);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v47);
    sub_1BE4ACC(&ServantLeaderInfo___TypeInfo, v48);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v49);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v50);
    sub_1BE4ACC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v51);
    sub_1BE4ACC(&StringLiteral_3343/*"BonusFilterEventId"*/, v52);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v53);
    byte_4B61CB3 = 1;
  }
  v309 = 0LL;
  entity = 0LL;
  isWhole = 0;
  v306 = 0LL;
  v307 = 0LL;
  v304 = 0LL;
  v305 = 0LL;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BE4A70(&this->fields.questRestrictionInfo);
  v54 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v54,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.mixItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v54;
  p_mixItemList = &this->fields.mixItemList;
  sub_1BE4A70(&this->fields.mixItemList);
  v55 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v55,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.originalItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v55;
  p_originalItemList = &this->fields.originalItemList;
  sub_1BE4A70(&this->fields.originalItemList);
  v56 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v56,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.recommendItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v56;
  p_recommendItemList = &this->fields.recommendItemList;
  sub_1BE4A70(&this->fields.recommendItemList);
  ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0LL);
  v59 = FollowerSelectItemListViewManager_TypeInfo;
  v257 = ReturnTypeByQuestId;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v59 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v59->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT )
    goto LABEL_337;
  this->fields.sort = (struct ListViewSort_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))LIST_VIEW_SORT->fields.m_target)(
                                                 LIST_VIEW_SORT->fields.original_method_info,
                                                 v257,
                                                 *(_QWORD *)&LIST_VIEW_SORT->fields.extra_arg);
  p_sort = &this->fields.sort;
  ReturnTypeByQuestId = sub_1BE4A70(&this->fields.sort);
  if ( !this->fields.sort )
    goto LABEL_337;
  InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                          this,
                          questId,
                          questPhase,
                          this->fields.sort->fields.isRequestLoad,
                          v62);
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
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_337;
  OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                 (EventQuestMaster_o *)ReturnTypeByQuestId,
                                 questId,
                                 questPhase,
                                 0LL,
                                 0LL);
  v66 = (EventUpValSetupInfo_o *)sub_1BE4D18(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_39826336(v66, OngoingQuestTargetEventIds, 0, questId, questPhase, 0LL);
  this->fields.setupInfo = v66;
  ReturnTypeByQuestId = sub_1BE4A70(&this->fields.setupInfo);
  if ( !OngoingQuestTargetEventIds )
    goto LABEL_337;
  if ( *(_QWORD *)&OngoingQuestTargetEventIds->max_length )
  {
    ReturnTypeByQuestId = (__int64)UnityEngine_PlayerPrefs__GetString_70410276(
                                     (System_String_o *)StringLiteral_3343/*"BonusFilterEventId"*/,
                                     0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_337;
    if ( *(int *)(ReturnTypeByQuestId + 16) < 1 )
      goto LABEL_24;
    ReturnTypeByQuestId = (__int64)System_String__Split((System_String_o *)ReturnTypeByQuestId, 0x2Cu, 0, 0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_337;
    v67 = *(_QWORD *)(ReturnTypeByQuestId + 24);
    v68 = ReturnTypeByQuestId;
    if ( (int)v67 < 1 )
    {
LABEL_24:
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_337;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 18, 0, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_337;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 19, 0, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_337;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 20, 0, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_337;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 40, 1, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_337;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 41, 1, 0LL);
    }
    else
    {
      v69 = 0LL;
      while ( 1 )
      {
        if ( v69 >= (unsigned int)v67 )
          goto LABEL_338;
        v70 = System_Int32__Parse(*(System_String_o **)(v68 + 32 + 8 * v69), 0LL);
        ReturnTypeByQuestId = System_Linq_Enumerable__Contains_int_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)OngoingQuestTargetEventIds,
                                v70,
                                (const MethodInfo_2F713FC *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (ReturnTypeByQuestId & 1) != 0 )
          break;
        LODWORD(v67) = *(_DWORD *)(v68 + 24);
        if ( (__int64)++v69 >= (int)v67 )
          goto LABEL_24;
      }
    }
  }
  ReturnTypeByQuestId = (__int64)*p_sort;
  if ( !*p_sort )
    goto LABEL_337;
  ListViewSort__Load((ListViewSort_o *)ReturnTypeByQuestId, 0LL);
  classButtonControl = this->fields.classButtonControl;
  v72 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1BE4D18(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v72,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_337;
  ClassButtonControlComponent__init(classButtonControl, v72, questId, questPhase, 0, 0LL);
  this->fields.isInput = 0;
  ReturnTypeByQuestId = (__int64)FollowerSelectItemListViewManager_TypeInfo;
  v73 = this->fields.classButtonControl;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  if ( !v73 )
    goto LABEL_337;
  ClassButtonControlComponent__setCursor(
    v73,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, OngoingQuestTargetEventIds, v74);
  ReturnTypeByQuestId = (__int64)this->fields.bonusFilterKindButton;
  if ( !ReturnTypeByQuestId )
    goto LABEL_337;
  ReturnTypeByQuestId = (__int64)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)ReturnTypeByQuestId,
                                   0LL);
  if ( !ReturnTypeByQuestId )
    goto LABEL_337;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)ReturnTypeByQuestId,
    this->fields.isBonusFilterEnable,
    0LL);
  if ( this->fields.isBonusFilterEnable )
  {
    ReturnTypeByQuestId = (__int64)this->fields.bonusFilterKindLabel;
    if ( !ReturnTypeByQuestId )
      goto LABEL_337;
    UILabel__set_text((UILabel_o *)ReturnTypeByQuestId, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  this->fields.isRefreshBtnHide = 0;
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId
    || (ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0 )
  {
LABEL_337:
    sub_1BE4D28(ReturnTypeByQuestId, v58);
  }
  v75 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)ReturnTypeByQuestId, questId, questPhase, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  followerClassId = v75;
  if ( !v75 )
    goto LABEL_332;
  v77 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v77 + 309) & 1) == 0 )
    v77 = sub_1C369A8(v76);
  v78 = *(_QWORD *)(*(_QWORD *)(v77 + 192) + 16LL);
  if ( (*(_BYTE *)(v78 + 309) & 1) == 0 )
    v78 = sub_1C369A8(v76);
  ReturnTypeByQuestId = **(_QWORD **)(v78 + 184);
  if ( !ReturnTypeByQuestId )
    goto LABEL_337;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ReturnTypeByQuestId,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_337;
  ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_337;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)ReturnTypeByQuestId,
                        questId,
                        questPhase,
                        0LL);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_337;
  v81 = *(_DWORD *)(ReturnTypeByQuestId + 48);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_337;
  v82 = *(_DWORD *)(ReturnTypeByQuestId + 52);
  if ( v81 < 1 )
  {
    v83 = questRestrictionInfo;
    IsMyServantOrNpcRestriction_41431712 = 0;
    goto LABEL_56;
  }
  v83 = questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    IsMyServantOrNpcRestriction_41431712 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41431712(
                                             questRestrictionInfo,
                                             v82,
                                             0LL);
LABEL_56:
    IsMyServantOrNpcRestriction = 0;
    if ( v83 && v81 <= 0 )
      IsMyServantOrNpcRestriction = QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL);
    goto LABEL_60;
  }
  IsMyServantOrNpcRestriction_41431712 = 0;
  IsMyServantOrNpcRestriction = 0;
LABEL_60:
  v85 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v85 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v85->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_38498148 = CondType__IsQuestClear_38498148(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v278 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
  if ( !QuestFollowerList )
    goto LABEL_337;
  max_length = QuestFollowerList->max_length;
  v89 = this;
  v90 = questRestrictionInfo;
  if ( max_length >= 1 )
  {
    v91 = 0;
    index = 0;
    isReleasedClassBoard = IsQuestClear_38498148;
    v265 = MasterData_object;
    v272 = v82;
    v268 = IsMyServantOrNpcRestriction_41431712;
    do
    {
      if ( v91 >= (unsigned int)max_length )
        goto LABEL_338;
      if ( !v90 )
        goto LABEL_337;
      v92 = QuestFollowerList->m_Items[v91];
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v90->fields.questId, 0LL);
      if ( !v92 )
        goto LABEL_337;
      ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v92, 0, ReturnTypeByQuestId, 0LL);
      v94 = FollowerInfo__GetReturnTypeByQuestId(v90->fields.questId, 0LL);
      ReturnTypeByQuestId = (__int64)FollowerInfo__GetNpcServantIndividualityFull(v92, 0, v94, 0LL);
      if ( !ServantLeaderInfo )
        goto LABEL_337;
      v95 = (System_Int32_array *)ReturnTypeByQuestId;
      Rarity = ServantLeaderInfo__getRarity(ServantLeaderInfo, 0LL);
      ReturnTypeByQuestId = QuestRestrictionInfo__IsRestriction_41413064(
                              v90,
                              &isWhole,
                              v95,
                              Rarity,
                              ServantLeaderInfo->fields.lv,
                              v82,
                              3,
                              0LL);
      if ( (ReturnTypeByQuestId & 1) != 0 )
        goto LABEL_135;
      if ( IsMyServantOrNpcRestriction_41431712 )
      {
        ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality_41434744(v90, v95, v82, 0LL);
        if ( (ReturnTypeByQuestId & 1) != 0 )
          goto LABEL_135;
      }
      if ( v92->fields.isFixedNpc || IsMyServantOrNpcRestriction && v92->fields.isMySvtOrNpc )
        goto LABEL_135;
      if ( !MasterData_object )
        goto LABEL_337;
      if ( NpcFollowerMaster__TryGetEntity(
             (NpcFollowerMaster_o *)MasterData_object,
             &entity,
             v92->fields.userId,
             questId,
             questPhase,
             0LL) )
      {
        ReturnTypeByQuestId = (__int64)entity;
        v97 = v278;
        if ( !entity )
          goto LABEL_337;
        IsRecommendedFollower = NpcFollowerEntity__IsRecommendedFollower(entity, 0LL);
      }
      else
      {
        v97 = v278;
        IsRecommendedFollower = 0;
      }
      v99 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ClassBoardInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v99,
        (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
      if ( !v97 )
        goto LABEL_337;
      ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetEntity(
                              v97,
                              &v309,
                              v92->fields.npcFollowerSvtId,
                              (const MethodInfo_31FD9C4 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
      if ( (ReturnTypeByQuestId & 1) != 0 )
      {
        if ( !v309 )
          goto LABEL_337;
        ReturnTypeByQuestId = NpcServantFollowerEntity__IsNotClassBoard((int32_t)v309[7].monitor, 0LL);
        if ( (ReturnTypeByQuestId & 1) != 0
          || (ReturnTypeByQuestId = QuestPhaseEntity__IsNotClassBoard(followerClassId, 0LL),
              (ReturnTypeByQuestId & 1) != 0) )
        {
          v100 = 1;
          goto LABEL_113;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
        v102 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantMaster___);
        v104 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        v103 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
        v105 = (DataMasterBase_TMaster__TEntity__PKType__o *)v102;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v311.fields.currentCryptoKey = v104;
        *(_QWORD *)&v311.fields.fakeValue = v103;
        ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v311, 0LL);
        if ( !v105 )
          goto LABEL_337;
        ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         v105,
                                         ReturnTypeByQuestId,
                                         (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !ReturnTypeByQuestId || !Master_object )
          goto LABEL_337;
        ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(
                             (ClassBoardClassMaster_o *)Master_object,
                             *(_DWORD *)(ReturnTypeByQuestId + 80),
                             0LL);
        v107 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B61717 )
        {
          sub_1BE4ACC(&NetworkManager_TypeInfo, v58);
          byte_4B61717 = 1;
        }
        ReturnTypeByQuestId = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          ReturnTypeByQuestId = (__int64)NetworkManager_TypeInfo;
        }
        if ( !v107 )
          goto LABEL_337;
        ReturnTypeByQuestId = UserClassBoardSquareMaster__TryGetEntity(
                                (UserClassBoardSquareMaster_o *)v107,
                                &v307,
                                *(_QWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 64LL),
                                ClassBoardBaseId,
                                0LL);
        if ( (ReturnTypeByQuestId & 1) != 0 )
        {
          v108 = (ClassBoardInfo_o *)sub_1BE4D18(ClassBoardInfo_TypeInfo);
          ClassBoardInfo___ctor(v108, 0LL);
          if ( !v108 )
            goto LABEL_337;
          v108->fields.classBoardBaseId = ClassBoardBaseId;
          if ( !v307 )
            goto LABEL_337;
          ReturnTypeByQuestId = (__int64)v307->fields.classBoardSquareIds;
          if ( !ReturnTypeByQuestId )
            goto LABEL_337;
          v109 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
          v108->fields.squareIds = (struct System_Int32_array *)sub_1BE4C08(v109, int___TypeInfo);
          sub_1BE4C08(v109, int___TypeInfo);
          sub_1BE4A70(&v108->fields.squareIds);
          v108->fields.releasedClassIds = ClassBoardClassMaster__GetOpenClassIdArrayFromBaseId(
                                            (ClassBoardClassMaster_o *)Master_object,
                                            ClassBoardBaseId,
                                            0LL);
          ReturnTypeByQuestId = sub_1BE4A70(&v108->fields.releasedClassIds);
          if ( !v99 )
            goto LABEL_337;
          items = v99->fields._items;
          v111 = Method_System_Collections_Generic_List_ClassBoardInfo__Add__;
          ++v99->fields._version;
          if ( !items )
            goto LABEL_337;
          size = v99->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v99,
              (Il2CppObject *)v108,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
          }
          else
          {
            v113 = &items->obj.klass + size;
            v99->fields._size = size + 1;
            v113[4] = (Il2CppClass *)v108;
            sub_1BE4A70(v113 + 4);
          }
          v100 = 0;
          goto LABEL_114;
        }
      }
      v100 = 0;
LABEL_113:
      if ( !v99 )
        goto LABEL_337;
LABEL_114:
      v92->fields.userClassBoardInfo = (struct ClassBoardInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                                        v99,
                                                                        (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
      sub_1BE4A70(&v92->fields.userClassBoardInfo);
      v114 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v114 = FollowerSelectItemListViewManager_TypeInfo;
      }
      v115 = IsRecommendedFollower;
      v116 = v114->static_fields->followerClassId;
      setupInfo = this->fields.setupInfo;
      if ( (v100 & 1) != 0 )
        classBoardMaxDictionary = 0LL;
      else
        classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
      isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
      isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
      isBonusFilterEnable = this->fields.isBonusFilterEnable;
      classBoardMaxNumDictionary = classBoardMaxDictionary;
      v90 = questRestrictionInfo;
      v122 = (FollowerSelectItemListViewItem_o *)sub_1BE4D18(FollowerSelectItemListViewItem_TypeInfo);
      FollowerSelectItemListViewItem___ctor(
        v122,
        index,
        0,
        v92,
        v116,
        friendPointUpVal,
        friendPointUpMaxVal,
        friendPointCampaignEntityList,
        isBonusFilterEnable,
        isServantBonusFilterEnable,
        isServantEquipBonusFilterEnable,
        v115,
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
        goto LABEL_337;
      v123 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      v89 = this;
      v82 = v272;
      IsMyServantOrNpcRestriction_41431712 = v268;
      v124 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v123 )
        goto LABEL_337;
      v125 = *(int *)(ReturnTypeByQuestId + 24);
      MasterData_object = v265;
      if ( (unsigned int)v125 >= *(_DWORD *)(v123 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v122,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
      }
      else
      {
        v126 = v123 + 8 * v125;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v125 + 1;
        *(_QWORD *)(v126 + 32) = v122;
        sub_1BE4A70(v126 + 32);
      }
      ReturnTypeByQuestId = (__int64)*p_originalItemList;
      if ( !*p_originalItemList )
        goto LABEL_337;
      v127 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      v128 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v127 )
        goto LABEL_337;
      v129 = *(int *)(ReturnTypeByQuestId + 24);
      if ( (unsigned int)v129 >= *(_DWORD *)(v127 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v122,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
      }
      else
      {
        v130 = v127 + 8 * v129;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v129 + 1;
        *(_QWORD *)(v130 + 32) = v122;
        sub_1BE4A70(v130 + 32);
      }
      ReturnTypeByQuestId = (__int64)*p_recommendItemList;
      if ( !*p_recommendItemList )
        goto LABEL_337;
      v131 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      v132 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v131 )
        goto LABEL_337;
      v133 = *(int *)(ReturnTypeByQuestId + 24);
      if ( (unsigned int)v133 >= *(_DWORD *)(v131 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v122,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
      }
      else
      {
        v134 = v131 + 8 * v133;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v133 + 1;
        *(_QWORD *)(v134 + 32) = v122;
        ReturnTypeByQuestId = sub_1BE4A70(v134 + 32);
      }
      ++index;
LABEL_135:
      max_length = QuestFollowerList->max_length;
      ++v91;
    }
    while ( v91 < max_length );
  }
  if ( v90 && QuestRestrictionInfo__IsMyServantOrNpcRestriction(v90, 0LL) )
  {
    ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_337;
    v135 = *(_DWORD *)(ReturnTypeByQuestId + 48);
    ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_337;
    v136 = v135 >= 1
        && !QuestRestrictionInfo__IsSelectableNormalSupport(
              questRestrictionInfo,
              *(_DWORD *)(ReturnTypeByQuestId + 52),
              0LL);
    v89 = this;
  }
  else
  {
    v136 = 0;
  }
  v89->fields.isRefreshBtnHide = v136;
  if ( !v136 && !followerClassId->fields.isNpcOnly )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_337;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v306,
                            (const MethodInfo_31FDA4C *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    v137 = this;
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v306 )
        goto LABEL_337;
      klass = v306[1].klass;
      if ( klass )
      {
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
        {
          v140 = 0LL;
          do
          {
            if ( (unsigned int)v140 >= namespaze )
              goto LABEL_338;
            v141 = &klass->_1.image + (int)v140;
            ReturnTypeByQuestId = (__int64)v141[4];
            v279 = (FollowerInfo_o **)(v141 + 4);
            if ( !ReturnTypeByQuestId )
              goto LABEL_337;
            FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0LL);
            if ( (unsigned int)v140 >= LODWORD(klass->_1.namespaze) )
              goto LABEL_338;
            if ( !*v279 )
              goto LABEL_337;
            ReturnTypeByQuestId = (__int64)(*v279)->fields.mainSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_337;
            v262 = *(_QWORD *)(ReturnTypeByQuestId + 24);
            v142 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
            if ( v142 )
            {
              v143 = v142;
              v144 = sub_1BE4C08(v142, int___TypeInfo);
              if ( !v144 )
              {
                sub_1BE4FE8(v143);
LABEL_339:
                sub_1BE4FE8(v140);
LABEL_340:
                v250 = sub_1BE4D4C();
                sub_1BE4BF4(v250, 0LL);
              }
            }
            else
            {
              v144 = 0LL;
            }
            v145 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v145 = BalanceConfig_TypeInfo;
            }
            v146 = v145->static_fields;
            FixMainSupportDeckNum = v146->FixMainSupportDeckNum;
            FixEventSupportDeckNum = v146->FixEventSupportDeckNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            ReturnTypeByQuestId = System_Math__Max_63517952(FixMainSupportDeckNum, FixEventSupportDeckNum, 0LL);
            v276 = v144;
            if ( (int)v262 >= 1 )
            {
              deckPriority = ReturnTypeByQuestId;
              v150 = 0LL;
              v260 = v144 + 32;
              do
              {
                if ( !*p_originalItemList )
                  goto LABEL_337;
                if ( (unsigned int)v140 >= LODWORD(klass->_1.namespaze) )
                  goto LABEL_338;
                if ( !v144 )
                  goto LABEL_337;
                if ( v150 >= *(unsigned int *)(v144 + 24) )
                  goto LABEL_338;
                indexb = (*p_originalItemList)->fields._size;
                followerClassIdc = v137->fields.setupInfo;
                v151 = v137->fields.classBoardMaxDictionary;
                v152 = *(_DWORD *)(v260 + 4 * v150);
                v292 = *v279;
                v153 = v137->fields.isServantEquipBonusFilterEnable;
                v154 = v137->fields.isServantBonusFilterEnable;
                v269 = v137->fields.isBonusFilterEnable;
                v155 = (FollowerSelectItemListViewItem_o *)sub_1BE4D18(FollowerSelectItemListViewItem_TypeInfo);
                FollowerSelectItemListViewItem___ctor(
                  v155,
                  indexb,
                  0,
                  v292,
                  0,
                  friendPointUpVal,
                  friendPointUpMaxVal,
                  friendPointCampaignEntityList,
                  v269,
                  v154,
                  v153,
                  0,
                  followerClassIdc,
                  questRestrictionInfo,
                  1,
                  v152,
                  deckPriority,
                  v151,
                  1,
                  0,
                  0LL);
                ReturnTypeByQuestId = (__int64)v137->fields.originalItemList;
                if ( !ReturnTypeByQuestId )
                  goto LABEL_337;
                v156 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v157 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v156 )
                  goto LABEL_337;
                v158 = *(int *)(ReturnTypeByQuestId + 24);
                v144 = v276;
                if ( (unsigned int)v158 >= *(_DWORD *)(v156 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    (Il2CppObject *)v155,
                    *(const MethodInfo_35EC224 **)(*(_QWORD *)(v157[4] + 192LL) + 112LL));
                }
                else
                {
                  v159 = v156 + 8 * v158;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v158 + 1;
                  *(_QWORD *)(v159 + 32) = v155;
                  ReturnTypeByQuestId = sub_1BE4A70(v159 + 32);
                }
                ++v150;
                --deckPriority;
              }
              while ( (unsigned int)v262 != v150 );
            }
            followerClassIda = 0;
            v270 = v144 + 32;
            v266 = (int)v140;
            while ( 1 )
            {
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              }
              v160 = *(struct BalanceConfig_StaticFields **)(ReturnTypeByQuestId + 184);
              if ( followerClassIda >= v160->SupportDeckMemberMax )
                break;
              if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
              {
                j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId);
                v160 = BalanceConfig_TypeInfo->static_fields;
              }
              v162 = v160->FixMainSupportDeckNum;
              v161 = v160->FixEventSupportDeckNum;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              ReturnTypeByQuestId = System_Math__Max_63517952(v162, v161, 0LL);
              if ( (int)v262 >= 1 )
              {
                v163 = ReturnTypeByQuestId;
                v164 = 0LL;
                while ( *p_mixItemList )
                {
                  ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                  v165 = (*p_mixItemList)->fields._size;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( (unsigned int)v140 >= LODWORD(klass->_1.namespaze) )
                    goto LABEL_338;
                  if ( !v144 )
                    goto LABEL_337;
                  if ( v164 >= *(unsigned int *)(v144 + 24) )
                    goto LABEL_338;
                  indexc = v165;
                  v166 = klass;
                  v167 = v137->fields.setupInfo;
                  v293 = *v279;
                  v168 = v137->fields.isServantEquipBonusFilterEnable;
                  v169 = this->fields.classBoardMaxDictionary;
                  v170 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 164LL);
                  v171 = v137->fields.isServantBonusFilterEnable;
                  v172 = v137->fields.isBonusFilterEnable;
                  supportDeckId = *(_DWORD *)(v270 + 4 * v164);
                  v137 = this;
                  v173 = (FollowerSelectItemListViewItem_o *)sub_1BE4D18(FollowerSelectItemListViewItem_TypeInfo);
                  FollowerSelectItemListViewItem___ctor(
                    v173,
                    indexc,
                    v170 - followerClassIda,
                    v293,
                    followerClassIda,
                    friendPointUpVal,
                    friendPointUpMaxVal,
                    friendPointCampaignEntityList,
                    v172,
                    v171,
                    v168,
                    0,
                    v167,
                    questRestrictionInfo,
                    1,
                    supportDeckId,
                    v163,
                    v169,
                    1,
                    0,
                    0LL);
                  ReturnTypeByQuestId = (__int64)this->fields.mixItemList;
                  if ( !ReturnTypeByQuestId )
                    goto LABEL_337;
                  v174 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                  v175 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                  if ( !v174 )
                    goto LABEL_337;
                  v176 = *(int *)(ReturnTypeByQuestId + 24);
                  if ( (unsigned int)v176 >= *(_DWORD *)(v174 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                      (Il2CppObject *)v173,
                      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v175[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v177 = v174 + 8 * v176;
                    *(_DWORD *)(ReturnTypeByQuestId + 24) = v176 + 1;
                    *(_QWORD *)(v177 + 32) = v173;
                    ReturnTypeByQuestId = sub_1BE4A70(v177 + 32);
                  }
                  v144 = v276;
                  LODWORD(v140) = v266;
                  ++v164;
                  klass = v166;
                  --v163;
                  if ( (unsigned int)v262 == v164 )
                    goto LABEL_205;
                }
                goto LABEL_337;
              }
LABEL_205:
              ++followerClassIda;
            }
            namespaze = (int)klass->_1.namespaze;
            v140 = (Il2CppObject *)(unsigned int)((_DWORD)v140 + 1);
          }
          while ( (int)v140 < namespaze );
        }
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_337;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v305,
                            (const MethodInfo_31FDA4C *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v305 )
        goto LABEL_337;
      v178 = v305[1].klass;
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_337;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !ReturnTypeByQuestId )
        goto LABEL_337;
      ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                       questId,
                                       (const MethodInfo_31FD7C4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_337;
      HasFlag_40415172 = QuestEntity__HasFlag_40415172(
                           (QuestEntity_o *)ReturnTypeByQuestId,
                           0x8000000LL,
                           questPhase,
                           0LL);
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_337;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserFollowMaster___);
      v254 = (UserFollowMaster_o *)ReturnTypeByQuestId;
      if ( !v178 )
        goto LABEL_337;
      namespaze_low = (unsigned __int64)v178->_1.namespaze;
      if ( (int)namespaze_low >= 1 )
      {
        v180 = 0LL;
        v261 = 0;
        v267 = v178;
        do
        {
          namespaze_low = (unsigned int)namespaze_low;
          if ( HasFlag_40415172 )
          {
            if ( v180 >= (unsigned int)namespaze_low )
              goto LABEL_338;
            v181 = *((_QWORD *)&v178->_1.byval_arg.data + v180);
            if ( !v181 )
              goto LABEL_337;
            if ( *(_DWORD *)(v181 + 36) == 5 )
            {
              ReturnTypeByQuestId = (__int64)v254;
              if ( !v254 )
                goto LABEL_337;
              ReturnTypeByQuestId = UserFollowMaster__IsFollowUser(v254, *(_QWORD *)(v181 + 16), 0LL);
              if ( (ReturnTypeByQuestId & 1) == 0 )
                goto LABEL_283;
              namespaze_low = LODWORD(v178->_1.namespaze);
            }
          }
          else
          {
            if ( v180 >= (unsigned int)namespaze_low )
              goto LABEL_338;
            v182 = *((_QWORD *)&v178->_1.byval_arg.data + v180);
            if ( !v182 )
              goto LABEL_337;
            if ( *(_DWORD *)(v182 + 36) == 5 )
              goto LABEL_283;
          }
          if ( v180 >= namespaze_low )
            goto LABEL_338;
          v183 = &v178->_1.image + v180;
          ReturnTypeByQuestId = (__int64)v183[4];
          v280 = (FollowerInfo_o **)(v183 + 4);
          if ( !ReturnTypeByQuestId )
            goto LABEL_337;
          FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0LL);
          ReturnTypeByQuestId = sub_1BE4B74(int___TypeInfo, 0LL);
          if ( v180 >= LODWORD(v178->_1.namespaze) )
            goto LABEL_338;
          v184 = *v280;
          if ( !*v280 )
            goto LABEL_337;
          if ( v257 )
          {
            ReturnTypeByQuestId = (__int64)v184->fields.eventSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_337;
          }
          else
          {
            ReturnTypeByQuestId = (__int64)v184->fields.mainSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_337;
          }
          followerClassIdb = *(unsigned int *)(ReturnTypeByQuestId + 24);
          v185 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
          if ( v185 )
          {
            v140 = v185;
            v186 = sub_1BE4C08(v185, int___TypeInfo);
            if ( !v186 )
              goto LABEL_339;
          }
          else
          {
            v186 = 0LL;
          }
          v187 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v187 = BalanceConfig_TypeInfo;
          }
          v188 = v187->static_fields;
          v190 = v188->FixMainSupportDeckNum;
          v189 = v188->FixEventSupportDeckNum;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          ReturnTypeByQuestId = System_Math__Max_63517952(v190, v189, 0LL);
          v277 = v186;
          if ( (int)followerClassIdb >= 1 )
          {
            v191 = ReturnTypeByQuestId;
            v192 = 0LL;
            v263 = v186 + 32;
            while ( 1 )
            {
              if ( !*p_originalItemList )
                goto LABEL_337;
              if ( v180 >= LODWORD(v178->_1.namespaze) )
                break;
              if ( !v186 )
                goto LABEL_337;
              if ( v192 >= *(unsigned int *)(v186 + 24) )
                break;
              indexd = (*p_originalItemList)->fields._size;
              v273 = v137->fields.setupInfo;
              v193 = v137->fields.classBoardMaxDictionary;
              v194 = *(_DWORD *)(v263 + 4 * v192);
              v294 = *v280;
              v195 = v137->fields.isServantEquipBonusFilterEnable;
              v196 = v137->fields.isServantBonusFilterEnable;
              v197 = v137->fields.isBonusFilterEnable;
              v198 = (FollowerSelectItemListViewItem_o *)sub_1BE4D18(FollowerSelectItemListViewItem_TypeInfo);
              FollowerSelectItemListViewItem___ctor(
                v198,
                indexd,
                0,
                v294,
                0,
                friendPointUpVal,
                friendPointUpMaxVal,
                friendPointCampaignEntityList,
                v197,
                v196,
                v195,
                0,
                v273,
                questRestrictionInfo,
                0,
                v194,
                v191,
                v193,
                1,
                0,
                0LL);
              ReturnTypeByQuestId = (__int64)v137->fields.originalItemList;
              if ( !ReturnTypeByQuestId )
                goto LABEL_337;
              v199 = *(_QWORD *)(ReturnTypeByQuestId + 16);
              v200 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++*(_DWORD *)(ReturnTypeByQuestId + 28);
              if ( !v199 )
                goto LABEL_337;
              v201 = *(int *)(ReturnTypeByQuestId + 24);
              v186 = v277;
              if ( (unsigned int)v201 >= *(_DWORD *)(v199 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                  (Il2CppObject *)v198,
                  *(const MethodInfo_35EC224 **)(*(_QWORD *)(v200[4] + 192LL) + 112LL));
              }
              else
              {
                v202 = v199 + 8 * v201;
                *(_DWORD *)(ReturnTypeByQuestId + 24) = v201 + 1;
                *(_QWORD *)(v202 + 32) = v198;
                ReturnTypeByQuestId = sub_1BE4A70(v202 + 32);
              }
              ++v192;
              --v191;
              if ( followerClassIdb == v192 )
                goto LABEL_257;
            }
LABEL_338:
            sub_1BE4D30(ReturnTypeByQuestId, v58);
          }
LABEL_257:
          v295 = 0;
          v271 = v180;
          v274 = (EventUpValSetupInfo_o *)(v186 + 32);
          while ( 1 )
          {
            ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            }
            v203 = *(struct BalanceConfig_StaticFields **)(ReturnTypeByQuestId + 184);
            if ( v295 >= v203->SupportDeckMemberMax )
              break;
            if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
            {
              j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId);
              v203 = BalanceConfig_TypeInfo->static_fields;
            }
            v205 = v203->FixMainSupportDeckNum;
            v204 = v203->FixEventSupportDeckNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            ReturnTypeByQuestId = System_Math__Max_63517952(v205, v204, 0LL);
            if ( (int)followerClassIdb >= 1 )
            {
              v206 = ReturnTypeByQuestId;
              v207 = 0LL;
              while ( *p_mixItemList )
              {
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                v208 = (*p_mixItemList)->fields._size;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                }
                if ( v180 >= LODWORD(v178->_1.namespaze) )
                  goto LABEL_338;
                if ( !v186 )
                  goto LABEL_337;
                if ( v207 >= *(unsigned int *)(v186 + 24) )
                  goto LABEL_338;
                v209 = v137->fields.setupInfo;
                v210 = v208;
                indexe = *v280;
                v211 = v137->fields.isServantEquipBonusFilterEnable;
                v212 = this->fields.classBoardMaxDictionary;
                v213 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 164LL);
                v214 = v137->fields.isServantBonusFilterEnable;
                v215 = v137->fields.isBonusFilterEnable;
                supportDeckIda = *((_DWORD *)&v274->klass + v207);
                v137 = this;
                v216 = (FollowerSelectItemListViewItem_o *)sub_1BE4D18(FollowerSelectItemListViewItem_TypeInfo);
                FollowerSelectItemListViewItem___ctor(
                  v216,
                  v210,
                  v213 - v295,
                  indexe,
                  v295,
                  friendPointUpVal,
                  friendPointUpMaxVal,
                  friendPointCampaignEntityList,
                  v215,
                  v214,
                  v211,
                  0,
                  v209,
                  questRestrictionInfo,
                  0,
                  supportDeckIda,
                  v206,
                  v212,
                  1,
                  0,
                  0LL);
                ReturnTypeByQuestId = (__int64)this->fields.mixItemList;
                if ( !ReturnTypeByQuestId )
                  goto LABEL_337;
                v217 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v218 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v217 )
                  goto LABEL_337;
                v219 = *(int *)(ReturnTypeByQuestId + 24);
                if ( (unsigned int)v219 >= *(_DWORD *)(v217 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    (Il2CppObject *)v216,
                    *(const MethodInfo_35EC224 **)(*(_QWORD *)(v218[4] + 192LL) + 112LL));
                }
                else
                {
                  v220 = v217 + 8 * v219;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v219 + 1;
                  *(_QWORD *)(v220 + 32) = v216;
                  ReturnTypeByQuestId = sub_1BE4A70(v220 + 32);
                }
                v178 = v267;
                v180 = v271;
                v186 = v277;
                ++v207;
                --v206;
                if ( followerClassIdb == v207 )
                  goto LABEL_279;
              }
              goto LABEL_337;
            }
LABEL_279:
            ++v295;
          }
          if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
          {
            j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId);
            v203 = BalanceConfig_TypeInfo->static_fields;
          }
          if ( ++v261 >= v203->SupportListMax )
            break;
LABEL_283:
          LODWORD(namespaze_low) = v178->_1.namespaze;
          ++v180;
        }
        while ( (__int64)v180 < (int)namespaze_low );
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_337;
    if ( DataMasterBase_object__object__long___TryGetSingleEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
           &v304,
           (const MethodInfo_31FDA4C *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    {
      ReturnTypeByQuestId = (__int64)v304;
      if ( !v304 )
        goto LABEL_337;
      ReturnTypeByQuestId = UserRecommendFollowerEntity__IsEnableSupport(
                              (UserRecommendFollowerEntity_o *)v304,
                              questId,
                              questPhase,
                              0LL);
      if ( (ReturnTypeByQuestId & 1) != 0 )
      {
        if ( !v304 )
          goto LABEL_337;
        v221 = v304[1].klass;
        ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_337;
        ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !ReturnTypeByQuestId )
          goto LABEL_337;
        ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                         questId,
                                         (const MethodInfo_31FD7C4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_337;
        indexa = QuestEntity__HasFlag_40415172((QuestEntity_o *)ReturnTypeByQuestId, 0x8000000LL, questPhase, 0LL);
        ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_337;
        ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserFollowMaster___);
        v286 = (UserFollowMaster_o *)ReturnTypeByQuestId;
        if ( !v221 )
          goto LABEL_337;
        v222 = (unsigned __int64)v221->_1.namespaze;
        if ( (int)v222 >= 1 )
        {
          v223 = 0LL;
          p_byval_arg = &v221->_1.byval_arg;
          v296 = v221;
          do
          {
            v222 = (unsigned int)v222;
            if ( indexa )
            {
              if ( v223 >= (unsigned int)v222 )
                goto LABEL_338;
              v225 = *((_QWORD *)&p_byval_arg->data + v223);
              if ( !v225 )
                goto LABEL_337;
              if ( *(_DWORD *)(v225 + 36) == 5 )
              {
                ReturnTypeByQuestId = (__int64)v286;
                if ( !v286 )
                  goto LABEL_337;
                ReturnTypeByQuestId = UserFollowMaster__IsFollowUser(v286, *(_QWORD *)(v225 + 16), 0LL);
                if ( (ReturnTypeByQuestId & 1) == 0 )
                  goto LABEL_331;
                v222 = LODWORD(v221->_1.namespaze);
              }
            }
            else
            {
              if ( v223 >= (unsigned int)v222 )
                goto LABEL_338;
              v226 = *((_QWORD *)&p_byval_arg->data + v223);
              if ( !v226 )
                goto LABEL_337;
              if ( *(_DWORD *)(v226 + 36) == 5 )
                goto LABEL_331;
            }
            if ( v223 >= v222 )
              goto LABEL_338;
            v227 = *((_QWORD *)&p_byval_arg->data + v223);
            ReturnTypeByQuestId = sub_1BE4B74(ServantLeaderInfo___TypeInfo, 1LL);
            if ( v223 >= LODWORD(v221->_1.namespaze) )
              goto LABEL_338;
            v228 = *((_QWORD *)&p_byval_arg->data + v223);
            if ( !v228 )
              goto LABEL_337;
            v229 = *(_QWORD *)(v228 + 56);
            if ( !v229 )
              goto LABEL_337;
            if ( !*(_DWORD *)(v229 + 24) )
              goto LABEL_338;
            v230 = *(_QWORD *)(v229 + 32);
            if ( !v230 )
              goto LABEL_337;
            v231 = ReturnTypeByQuestId;
            if ( !ReturnTypeByQuestId )
              goto LABEL_337;
            v232 = *(_QWORD *)(v230 + 56);
            if ( v232 )
            {
              ReturnTypeByQuestId = sub_1BE4C08(v232, *(_QWORD *)(*(_QWORD *)ReturnTypeByQuestId + 64LL));
              if ( !ReturnTypeByQuestId )
                goto LABEL_340;
            }
            if ( !*(_DWORD *)(v231 + 24) )
              goto LABEL_338;
            *(_QWORD *)(v231 + 32) = v232;
            ReturnTypeByQuestId = sub_1BE4A70(v231 + 32);
            if ( !v227 )
              goto LABEL_337;
            *(_QWORD *)(v227 + 40) = v231;
            ReturnTypeByQuestId = sub_1BE4A70(v227 + 40);
            if ( v223 >= LODWORD(v221->_1.namespaze) )
              goto LABEL_338;
            ReturnTypeByQuestId = *((_QWORD *)&p_byval_arg->data + v223);
            if ( !ReturnTypeByQuestId )
              goto LABEL_337;
            FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0LL);
            if ( !*p_recommendItemList )
              goto LABEL_337;
            if ( v223 >= LODWORD(v221->_1.namespaze) )
              goto LABEL_338;
            v233 = (FollowerInfo_o *)*((_QWORD *)&p_byval_arg->data + v223);
            v234 = (*p_recommendItemList)->fields._size;
            v235 = this->fields.isBonusFilterEnable;
            v236 = this->fields.isServantBonusFilterEnable;
            v237 = this->fields.isServantEquipBonusFilterEnable;
            v238 = this->fields.setupInfo;
            v239 = this->fields.classBoardMaxDictionary;
            v240 = (FollowerSelectItemListViewItem_o *)sub_1BE4D18(FollowerSelectItemListViewItem_TypeInfo);
            FollowerSelectItemListViewItem___ctor(
              v240,
              v234,
              0,
              v233,
              0,
              friendPointUpVal,
              friendPointUpMaxVal,
              friendPointCampaignEntityList,
              v235,
              v236,
              v237,
              0,
              v238,
              questRestrictionInfo,
              0,
              0,
              0,
              v239,
              1,
              1,
              0LL);
            ReturnTypeByQuestId = (__int64)this->fields.recommendItemList;
            if ( !ReturnTypeByQuestId )
              goto LABEL_337;
            v241 = *(_QWORD *)(ReturnTypeByQuestId + 16);
            v242 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++*(_DWORD *)(ReturnTypeByQuestId + 28);
            if ( !v241 )
              goto LABEL_337;
            v243 = *(int *)(ReturnTypeByQuestId + 24);
            if ( (unsigned int)v243 >= *(_DWORD *)(v241 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                (Il2CppObject *)v240,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v242[4] + 192LL) + 112LL));
            }
            else
            {
              v244 = v241 + 8 * v243;
              *(_DWORD *)(ReturnTypeByQuestId + 24) = v243 + 1;
              *(_QWORD *)(v244 + 32) = v240;
              sub_1BE4A70(v244 + 32);
            }
            ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            }
            v221 = v296;
            if ( (__int64)v223 >= *(int *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 692LL) )
              break;
LABEL_331:
            LODWORD(v222) = v221->_1.namespaze;
            ++v223;
          }
          while ( (__int64)v223 < (int)v222 );
        }
      }
    }
  }
LABEL_332:
  ReturnTypeByQuestId = (__int64)this->fields.refreshButtonObject;
  if ( !ReturnTypeByQuestId )
    goto LABEL_337;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)ReturnTypeByQuestId,
    !this->fields.isRefreshBtnHide,
    0LL);
  v246 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v246 = FollowerSelectItemListViewManager_TypeInfo;
  }
  FollowerSelectItemListViewManager__SetEmptyMessage(this, v246->static_fields->followerClassId, v245);
  FollowerSelectItemListViewManager__SortClass(
    this,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    v247);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  FollowerSelectItemListViewManager__SetFilterButtonImage(this, v248);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_337;
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

  if ( (byte_4B61CAC & 1) == 0 )
  {
    sub_1BE4ACC(&FollowerSelectItemListViewManager_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_6887/*"FollowerSelectClass"*/, v2);
    sub_1BE4ACC(&StringLiteral_6890/*"FollowerSelectOldClass"*/, v3);
    byte_4B61CAC = 1;
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
    sub_1BE4D28(v4, v1);
  }
  ListViewSort__DeleteContinueData((ListViewSort_o *)v4, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6887/*"FollowerSelectClass"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6890/*"FollowerSelectOldClass"*/, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FollowerSelectItemListViewManager__DestroyList_31530332(this, 0LL, v2);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList_31530332(
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

  if ( (byte_4B61CBB & 1) == 0 )
  {
    sub_1BE4ACC(&ClassButtonControlComponent_CallbackFunc_TypeInfo, battleSetupInfo);
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventQuestMaster___, v5);
    sub_1BE4ACC(&DataManager_TypeInfo, v6);
    sub_1BE4ACC(&EventUpValSetupInfo_TypeInfo, v7);
    sub_1BE4ACC(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v8);
    sub_1BE4ACC(&FollowerSelectItemListViewManager_TypeInfo, v9);
    sub_1BE4ACC(&int___TypeInfo, v10);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v11);
    sub_1BE4ACC(&StringLiteral_11844/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/, v12);
    sub_1BE4ACC(&StringLiteral_6887/*"FollowerSelectClass"*/, v13);
    sub_1BE4ACC(&StringLiteral_6890/*"FollowerSelectOldClass"*/, v14);
    byte_4B61CBB = 1;
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
    ReturnTypeByQuestId = (EventQuestMaster_o *)sub_1BE4A70(&this->fields.sort);
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
    ReturnTypeByQuestId = (EventQuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventQuestMaster___);
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
    v26 = (EventUpValSetupInfo_o *)sub_1BE4D18(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_39826336(v26, v25, 0, questId, questPhase, 0LL);
    p_setupInfo = &this->fields.setupInfo;
    this->fields.setupInfo = v26;
  }
  else
  {
    p_setupInfo = &this->fields.setupInfo;
    this->fields.setupInfo = 0LL;
  }
  sub_1BE4A70(p_setupInfo);
  this->fields.questRestrictionInfo = 0LL;
  sub_1BE4A70(&this->fields.questRestrictionInfo);
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
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6887/*"FollowerSelectClass"*/, v32->static_fields->followerClassId, 0LL);
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
        (System_String_o *)StringLiteral_6890/*"FollowerSelectOldClass"*/,
        v35->static_fields->oldFollowerClassId,
        0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
  this->fields.originalItemList = 0LL;
  sub_1BE4A70(&this->fields.originalItemList);
  this->fields.mixItemList = 0LL;
  sub_1BE4A70(&this->fields.mixItemList);
  this->fields.recommendItemList = 0LL;
  sub_1BE4A70(&this->fields.recommendItemList);
  classButtonControl = this->fields.classButtonControl;
  v37 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1BE4D18(ClassButtonControlComponent_CallbackFunc_TypeInfo);
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
  v41 = setupInfo ? setupInfo->fields.eventIdList : (System_Int32_array *)sub_1BE4B74(int___TypeInfo, 0LL);
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
    ReturnTypeByQuestId = (EventQuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11844/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/, 0LL);
    if ( bonusFilterKindLabel )
    {
      UILabel__set_text(bonusFilterKindLabel, (System_String_o *)ReturnTypeByQuestId, 0LL);
      goto LABEL_43;
    }
LABEL_47:
    sub_1BE4D28(ReturnTypeByQuestId, v16);
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

  if ( (byte_4B61CC9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B61CC9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v3);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__EndCloseClassBoardEffectListDialog(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B61CDA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B61CDA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v4);
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

  if ( (byte_4B61CCB & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B61CCB = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__,
    0LL);
  if ( !Instance )
LABEL_8:
    sub_1BE4D28(sort, v8);
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

  if ( (byte_4B61CB6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, *(_QWORD *)&questId);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantClassMaster___, v8);
    sub_1BE4ACC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v9);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B61CB6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v17 = v14->fields.classIds;
  if ( !v17 )
    goto LABEL_17;
  if ( !v17->max_length )
    sub_1BE4D30(Instance, v12);
  if ( !Instance )
LABEL_17:
    sub_1BE4D28(Instance, v12);
  v18 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          v17->m_Items[1],
          (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
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

  if ( (byte_4B61CBF & 1) == 0 )
  {
    sub_1BE4ACC(&FollowerSelectItemListViewManager_TypeInfo, method);
    byte_4B61CBF = 1;
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

  if ( (byte_4B61CDB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    byte_4B61CDB = 1;
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

  if ( (byte_4B61CB4 & 1) == 0 )
  {
    sub_1BE4ACC(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&questId);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_RecommendSupportQuestMaster___, v8);
    sub_1BE4ACC(&FollowerSelectItemListViewManager_TypeInfo, v9);
    sub_1BE4ACC(&OptionManager_TypeInfo, v10);
    this = (FollowerSelectItemListViewManager_o *)sub_1BE4ACC(
                                                    &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                    v11);
    byte_4B61CB4 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_RecommendSupportQuestMaster___)) == 0LL )
    {
      sub_1BE4D28(Instance, v15);
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

  if ( (byte_4B61CBD & 1) == 0 )
  {
    sub_1BE4ACC(&FollowerSelectItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4B61CBD = 1;
  }
  result = (FollowerSelectItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4B61CD6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    byte_4B61CD6 = 1;
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

  if ( (byte_4B61CD7 & 1) == 0 )
  {
    sub_1BE4ACC(&FollowerSelectItemListViewItem_TypeInfo, userId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    byte_4B61CD7 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1BE4D28(itemList, userId);
  v10 = 0;
  while ( v10 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v10,
             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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


int32_t __fastcall FollowerSelectItemListViewManager__GetItemIndex_31542312(
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

  if ( (byte_4B61CD8 & 1) == 0 )
  {
    sub_1BE4ACC(&FollowerSelectItemListViewItem_TypeInfo, userId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    byte_4B61CD8 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1BE4D28(itemList, userId);
  v12 = 0;
  while ( v12 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v12,
             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  if ( (byte_4B61CB8 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_6887/*"FollowerSelectClass"*/, method);
    byte_4B61CB8 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6887/*"FollowerSelectClass"*/, 0, 0LL);
}


int32_t __fastcall FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B61CB9 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_6890/*"FollowerSelectOldClass"*/, method);
    byte_4B61CB9 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6890/*"FollowerSelectOldClass"*/, 0, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewManager_c *v2; // x0
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v4; // x8

  if ( (byte_4B61CAD & 1) == 0 )
  {
    sub_1BE4ACC(&FollowerSelectItemListViewManager_TypeInfo, v1);
    byte_4B61CAD = 1;
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
    sub_1BE4D28(v2, v1);
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

  if ( (byte_4B61CB5 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleData_TypeInfo, *(_QWORD *)&questId);
    sub_1BE4ACC(&FollowerSelectItemListViewManager_TypeInfo, v6);
    byte_4B61CB5 = 1;
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

  if ( (byte_4B61CBA & 1) == 0 )
  {
    sub_1BE4ACC(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&friendPointUpVal);
    sub_1BE4ACC(&FollowerSelectItemListViewItem_TypeInfo, v7);
    sub_1BE4ACC(&FollowerSelectItemListViewManager_TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    byte_4B61CBA = 1;
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
                                                                (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1BE4D28(itemList, *(_QWORD *)&friendPointUpVal);
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
                                                                  (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
                                                                  (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4B61CD1 & 1) == 0 )
  {
    sub_1BE4ACC(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classPos);
    sub_1BE4ACC(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v5);
    sub_1BE4ACC(&FollowerSelectItemListViewManager_TypeInfo, v6);
    byte_4B61CD1 = 1;
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
          v16 = (_QWORD *)sub_1BE4AE4(Method_FollowerSelectItemListViewManager_OnChangeClass__);
        v17 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v16, v16[4]);
        OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
        if ( (v9 & 1) != 0 )
          FollowerSelectItemListViewManager__OnClickRecommend(this, classPos, v18);
        else
          FollowerSelectItemListViewManager__SortClass(this, classPos, v18);
        return;
      }
    }
LABEL_22:
    sub_1BE4D28(IsRecommendSupportGroupType, v8);
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

  if ( (byte_4B61CCA & 1) == 0 )
  {
    sub_1BE4ACC(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__, v3);
    sub_1BE4ACC(&Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B61CCA = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BE4AE4(Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
    isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
    equipBonusFilterEventIds = this->fields.equipBonusFilterEventIds;
    sort = this->fields.sort;
    v13 = (CommonUI_o *)Instance;
    v14 = (ServantBonusFilterSelectMenu_CallbackFunc_o *)sub_1BE4D18(ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantBonusFilterSelectMenu_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__,
      0LL);
    if ( !v13 )
      sub_1BE4D28(v15, v16);
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

  if ( (byte_4B61CD5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_FollowerSelectItemListViewManager_OnClickChangeSkill__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v4);
    byte_4B61CD5 = 1;
  }
  if ( this->fields.isInput )
  {
    v5 = Method_FollowerSelectItemListViewManager_OnClickChangeSkill__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickChangeSkill__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_FollowerSelectItemListViewManager_OnClickChangeSkill__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    displaySkill = this->fields.displaySkill;
    if ( (unsigned int)displaySkill <= 2 )
      this->fields.displaySkill = dword_C1AC58[displaySkill];
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
                                                                    (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
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
      sub_1BE4D28(ObjectList, v10);
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

  if ( (byte_4B61CC8 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__, v3);
    sub_1BE4ACC(&Method_FollowerSelectItemListViewManager_OnClickClassComparibility__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B61CC8 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_FollowerSelectItemListViewManager_OnClickClassComparibility__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickClassComparibility__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BE4AE4(Method_FollowerSelectItemListViewManager_OnClickClassComparibility__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__,
      0LL);
    if ( !Instance )
      sub_1BE4D28(v10, v11);
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

  if ( (byte_4B61CD2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___, *(_QWORD *)&classPos);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(
      &Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__,
      v6);
    sub_1BE4ACC(&FollowerSelectItemListViewManager_TypeInfo, v7);
    byte_4B61CD2 = 1;
  }
  entity = 0LL;
  if ( this->fields.isGetRecommendSupport )
    goto LABEL_4;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
  if ( !Master_object )
    goto LABEL_16;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          (const MethodInfo_31FDA4C *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    goto LABEL_12;
  Master_object = entity;
  if ( !entity )
LABEL_16:
    sub_1BE4D28(Master_object, v9);
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
    sub_1BE4A70(&this->fields.callbackFunc);
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

  if ( (byte_4B61CC7 & 1) == 0 )
  {
    sub_1BE4ACC(&ClassButtonControlComponent_TypeInfo, method);
    byte_4B61CC7 = 1;
  }
  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0LL;
      v4 = sub_1BE4A70(&this->fields.callbackFunc);
      classButtonControl = this->fields.classButtonControl;
      if ( !classButtonControl )
        sub_1BE4D28(v4, v5);
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
    v5 = sub_1BE4A70(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1BE4D28(v5, v6);
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

  if ( (byte_4B61CCF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__, method);
    byte_4B61CCF = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B61CCD & 1) == 0 )
  {
    sub_1BE4ACC(&OtherUserSortDialog_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&ClassButtonControlComponent_TypeInfo, v3);
    sub_1BE4ACC(&Method_FollowerSelectItemListViewManager_CloseSortDialog__, v4);
    sub_1BE4ACC(&Method_FollowerSelectItemListViewManager_OnClickSortKind__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B61CCD = 1;
  }
  if ( this->fields.isInput )
  {
    v7 = Method_FollowerSelectItemListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BE4AE4(Method_FollowerSelectItemListViewManager_OnClickSortKind__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v7, v7[4]);
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v16 = this->fields.sort;
        v17 = (CommonUI_o *)Instance;
        v18 = (OtherUserSortDialog_CallbackFunc_o *)sub_1BE4D18(OtherUserSortDialog_CallbackFunc_TypeInfo);
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
    sub_1BE4D28(IsRecommendSupportGroupType, v10);
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
    v5 = sub_1BE4A70(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1BE4D28(v5, v6);
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
    v5 = sub_1BE4A70(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1BE4D28(v5, v6);
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
    v5 = sub_1BE4A70(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1BE4D28(v5, v6);
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

  if ( (byte_4B61CC6 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_12744/*"ScrollViewEnabled"*/, obj);
    byte_4B61CC6 = 1;
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
        (System_String_o *)StringLiteral_12744/*"ScrollViewEnabled"*/,
        0.1,
        0LL);
    }
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    tutorialListViewObject = (UnityEngine_Component_o *)sub_1BE4A70(&this->fields.callbackFunc);
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
      sub_1BE4D28(tutorialListViewObject, obj);
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

  if ( (byte_4B61CC5 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B61CC5 = 1;
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
              sub_1BE4A70(&this->fields.callbackFunc2);
              if ( callbackFunc2 )
                ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
                  callbackFunc2->fields.original_method_info,
                  *(_QWORD *)&callbackFunc2->fields.extra_arg);
              return;
            }
          }
        }
      }
      sub_1BE4D28(tutorialListViewObject, v7);
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
  struct FollowerInfo_o *followerInfo; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v30; // w20
  unsigned int v31; // w24
  ClassBoardInfo_o *v32; // x21
  long double inited; // q0
  _QWORD *v34; // x22
  __int64 v35; // x8
  __int64 v36; // x0
  __int64 v37; // x0
  long double v38; // q0
  _QWORD *v39; // x22
  __int64 v40; // x8
  __int64 v41; // x0
  __int64 v42; // x0
  Il2CppObject *Instance; // x22
  System_Action_o *v44; // x23

  v4 = this;
  if ( (byte_4B61CD9 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, obj);
    sub_1BE4ACC(&Method_System_Array_Empty_int___, v5);
    sub_1BE4ACC(&ClassBoardInfo_TypeInfo, v6);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_1BE4ACC(&DataManager_TypeInfo, v9);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1BE4ACC(&FollowerSelectItemListViewItem_TypeInfo, v11);
    sub_1BE4ACC(&Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__, v12);
    sub_1BE4ACC(&Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14);
    this = (FollowerSelectItemListViewManager_o *)sub_1BE4ACC(
                                                    &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                    v15);
    byte_4B61CD9 = 1;
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
                 (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
            v21 = (_QWORD *)sub_1BE4AE4(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
          v22 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v21, v21[4]);
          OverwriteAssetSoundName__PlaySystemSe(v22, 2, 0LL);
          return;
        }
        v4->fields.isInput = 0;
        v23 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
        if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 83) & 2) != 0 )
          v23 = (_QWORD *)sub_1BE4AE4(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
        v24 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v23, v23[4]);
        OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantMaster___);
        this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewItem__get_SvtId(v19, 0LL);
        if ( Master_object )
        {
          this = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                          (int32_t)this,
                                                          (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            scrollView = (int32_t)this->fields.scrollView;
            this = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
                  v30 = (int)this;
                  if ( max_length < 1 )
                  {
LABEL_30:
                    v32 = (ClassBoardInfo_o *)sub_1BE4D18(ClassBoardInfo_TypeInfo);
                    ClassBoardInfo___ctor(v32, 0LL);
                    if ( v32 )
                    {
                      v32->fields.classBoardBaseId = v30;
                      v34 = Method_System_Array_Empty_int___;
                      v35 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v35 )
                      {
                        sub_1C36A04(Method_System_Array_Empty_int___);
                        v35 = v34[7];
                      }
                      v36 = *(_QWORD *)(v35 + 16);
                      if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
                        v36 = sub_1C369A8(inited);
                      if ( !*(_DWORD *)(v36 + 224) )
                        inited = j_il2cpp_runtime_class_init_0(v36);
                      v37 = *(_QWORD *)(v34[7] + 16LL);
                      if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
                        v37 = sub_1C369A8(inited);
                      v32->fields.squareIds = **(struct System_Int32_array ***)(v37 + 184);
                      sub_1BE4A70(&v32->fields.squareIds);
                      v39 = Method_System_Array_Empty_int___;
                      v40 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v40 )
                      {
                        sub_1C36A04(Method_System_Array_Empty_int___);
                        v40 = v39[7];
                      }
                      v41 = *(_QWORD *)(v40 + 16);
                      if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
                        v41 = sub_1C369A8(v38);
                      if ( !*(_DWORD *)(v41 + 224) )
                        v38 = j_il2cpp_runtime_class_init_0(v41);
                      v42 = *(_QWORD *)(v39[7] + 16LL);
                      if ( (*(_BYTE *)(v42 + 309) & 1) == 0 )
                        v42 = sub_1C369A8(v38);
                      v32->fields.releasedClassIds = **(struct System_Int32_array ***)(v42 + 184);
                      sub_1BE4A70(&v32->fields.releasedClassIds);
LABEL_48:
                      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v44 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
                      System_Action___ctor(
                        v44,
                        (Il2CppObject *)v4,
                        Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__,
                        0LL);
                      if ( Instance )
                      {
                        CommonUI__OpenClassBoardEffectListDialog((CommonUI_o *)Instance, 1, v30, 0, v44, 1, v32, 0LL);
                        return;
                      }
                    }
                  }
                  else
                  {
                    v31 = 0;
                    while ( 1 )
                    {
                      if ( v31 >= max_length )
                        sub_1BE4D30(this, obj);
                      v32 = userClassBoardInfo->m_Items[v31];
                      if ( !v32 )
                        break;
                      if ( v32->fields.classBoardBaseId == v30 )
                      {
                        this = (FollowerSelectItemListViewManager_o *)ClassBoardInfo__IsReleasedClassId(
                                                                        v32,
                                                                        scrollView,
                                                                        0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          goto LABEL_48;
                      }
                      max_length = userClassBoardInfo->max_length;
                      if ( (int)++v31 >= max_length )
                        goto LABEL_30;
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_1BE4D28(this, obj);
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
    sub_1BE4D28(0LL, method);
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

  if ( (byte_4B61CC4 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v5);
    sub_1BE4ACC(&StringLiteral_10092/*"OnMoveEnd"*/, v6);
    byte_4B61CC4 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = FollowerSelectItemListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_13:
    sub_1BE4D28(ObjectList, v9);
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
             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v15 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v12;
      FollowerSelectItemListViewObject__Init_31535536((FollowerSelectItemListViewObject_o *)Item, 4, v15, 0.1, v16);
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
      (System_String_o *)StringLiteral_10092/*"OnMoveEnd"*/,
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

  if ( (byte_4B61CC2 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__, v9);
    sub_1BE4ACC(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v12);
    sub_1BE4ACC(&StringLiteral_10092/*"OnMoveEnd"*/, v13);
    byte_4B61CC2 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BE4D28(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10092/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BE4D28(v19, v20);
      FollowerSelectItemListViewObject__Init_31535536(
        (FollowerSelectItemListViewObject_o *)current,
        mode,
        v18,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__RequestListObject_31534420(
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

  if ( (byte_4B61CC3 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__, v7);
    sub_1BE4ACC(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v10);
    sub_1BE4ACC(&StringLiteral_10092/*"OnMoveEnd"*/, v11);
    byte_4B61CC3 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BE4D28(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10092/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BE4D28(v17, v18);
      FollowerSelectItemListViewObject__Init_31534924((FollowerSelectItemListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
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

  if ( (byte_4B61CBC & 1) == 0 )
  {
    sub_1BE4ACC(&FollowerSelectItemListViewManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_6887/*"FollowerSelectClass"*/, v3);
    sub_1BE4ACC(&StringLiteral_6890/*"FollowerSelectOldClass"*/, v4);
    byte_4B61CBC = 1;
  }
  sort = this->fields.sort;
  if ( !sort || (ListViewSort__Save(sort, 0LL), (v6 = this->fields.sort) == 0LL) )
    sub_1BE4D28(sort, method);
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
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6887/*"FollowerSelectClass"*/, v10->static_fields->followerClassId, 0LL);
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
        (System_String_o *)StringLiteral_6890/*"FollowerSelectOldClass"*/,
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
    sub_1BE4D28(0LL, method);
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

  if ( (byte_4B61CB0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventFilterMaster___, eventIds);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToList_int___, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Remove__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B61CB0 = 1;
  }
  entity = 0LL;
  *(_WORD *)&this->fields.isBonusFilterEnable = 0;
  this->fields.isServantEquipBonusFilterEnable = 0;
  Instance = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)eventIds,
                                                         (const MethodInfo_2F965C4 *)Method_System_Linq_Enumerable_ToList_int___);
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
        sub_1BE4D30(Instance, v10);
      v14 = eventIds->m_Items[v13 + 1];
      Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventFilterMaster___);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)EventFilterMaster__TryGetEntity_40057224(
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
                                                                 (const MethodInfo_35D06FC *)Method_System_Collections_Generic_List_int__Remove__);
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
    sub_1BE4D28(Instance, v10);
  }
LABEL_20:
  if ( !v12 )
    goto LABEL_22;
  this->fields.equipBonusFilterEventIds = System_Collections_Generic_List_int___ToArray(
                                            v12,
                                            (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  sub_1BE4A70(&this->fields.equipBonusFilterEventIds);
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

  if ( (byte_4B61CB2 & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, method);
    sub_1BE4ACC(&BalanceConfig_TypeInfo, v3);
    sub_1BE4ACC(&ClassBoardBaseEntity_TypeInfo, v4);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5);
    sub_1BE4ACC(&CondType_TypeInfo, v6);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v8);
    sub_1BE4ACC(&DataManager_TypeInfo, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__int__Clear__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v14);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1BE4ACC(&StringLiteral_17900/*"buttontxt_formation_20"*/, v17);
    byte_4B61CB2 = 1;
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
  if ( CondType__IsQuestClear_38498148(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17900/*"buttontxt_formation_20"*/, 0LL);
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = &this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_3247D78 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v23 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v23,
      (const MethodInfo_3247234 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *p_classBoardMaxDictionary = v23;
    sub_1BE4A70(p_classBoardMaxDictionary);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object
    || (Master_object = (System_Collections_ObjectModel_Collection_T__o *)Master_object[1].monitor) == 0LL )
  {
    sub_1BE4D28(Master_object, v25);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Master_object,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v26);
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
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v35 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
        v39 = (Il2CppObject *)sub_1BE4FE8(v36);
LABEL_50:
        sub_1BE4D28(v39, v40);
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v39 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v37 )
      goto LABEL_50;
    if ( !v39 )
      sub_1BE4D28(0LL, v40);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                            (ClassBoardSquareMaster_o *)v39,
                            *(_DWORD *)(v37 + 16),
                            0LL);
    if ( OtherThanNoneEntity )
    {
      if ( !*p_classBoardMaxDictionary )
        sub_1BE4D28(OtherThanNoneEntity, v42);
      System_Collections_Generic_Dictionary_int__int___Add(
        *p_classBoardMaxDictionary,
        *(_DWORD *)(v37 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_3247BF8 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
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
    v46 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
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
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerable_T__o *recommendItemList; // x21
  System_Collections_Generic_List_object__o *v20; // x22
  __int64 v21; // x10
  System_Collections_Generic_IEnumerable_T__o *originalItemList; // x21
  System_Collections_Generic_List_object__o *v23; // x22
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x20
  __int64 v25; // x10
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B61CC0 & 1) == 0 )
  {
    sub_1BE4ACC(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&followerClassId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_1BE4ACC(&FollowerSelectItemListViewItem_TypeInfo, v8);
    sub_1BE4ACC(&FollowerSelectItemListViewManager_TypeInfo, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem___ctor___77110096, v11);
    sub_1BE4ACC(&System_Collections_Generic_List_ListViewItem__TypeInfo, v12);
    byte_4B61CC0 = 1;
  }
  v13 = FollowerSelectItemListViewManager_TypeInfo;
  memset(&v27, 0, sizeof(v27));
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
      v15 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ListViewItem__TypeInfo);
      System_Collections_Generic_List_object____ctor_56539928(
        v15,
        mixItemList,
        (const MethodInfo_35EBB18 *)Method_System_Collections_Generic_List_ListViewItem___ctor___77110096);
      this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v15;
      sub_1BE4A70(&this->fields.itemList);
      itemList = this->fields.itemList;
      if ( itemList )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v26,
          (System_Collections_Generic_List_object__o *)itemList,
          (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v27 = v26;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v27,
                  (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( v27.fields._current )
          {
            methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(v27.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
              && (FollowerSelectItemListViewItem_c *)v27.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo )
            {
              FollowerSelectItemListViewItem__UpdateRestriction(
                (FollowerSelectItemListViewItem_o *)v27.fields._current,
                0LL);
            }
          }
        }
LABEL_34:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v27,
          (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
        v20 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor_56539928(
          v20,
          recommendItemList,
          (const MethodInfo_35EBB18 *)Method_System_Collections_Generic_List_ListViewItem___ctor___77110096);
        this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v20;
        sub_1BE4A70(&this->fields.itemList);
        itemList = this->fields.itemList;
        if ( itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v26,
            (System_Collections_Generic_List_object__o *)itemList,
            (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v27 = v26;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v27,
                    (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v27.fields._current )
            {
              v21 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(v27.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v21
                && (FollowerSelectItemListViewItem_c *)v27.fields._current->klass->_2.typeHierarchy[v21 - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__UpdateRestriction(
                  (FollowerSelectItemListViewItem_o *)v27.fields._current,
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
        v23 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor_56539928(
          v23,
          originalItemList,
          (const MethodInfo_35EBB18 *)Method_System_Collections_Generic_List_ListViewItem___ctor___77110096);
        this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v23;
        p_itemList = &this->fields.itemList;
        sub_1BE4A70(p_itemList);
        itemList = *p_itemList;
        if ( *p_itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v26,
            (System_Collections_Generic_List_object__o *)itemList,
            (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v27 = v26;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v27,
                    (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v27.fields._current )
            {
              v25 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(v27.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v25
                && (FollowerSelectItemListViewItem_c *)v27.fields._current->klass->_2.typeHierarchy[v25 - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__SetClassId(
                  (FollowerSelectItemListViewItem_o *)v27.fields._current,
                  followerClassId,
                  0LL);
              }
            }
          }
          goto LABEL_34;
        }
      }
    }
    sub_1BE4D28(itemList, v16);
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

  if ( (byte_4B61CB7 & 1) == 0 )
  {
    sub_1BE4ACC(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classId);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_11168/*"RECOMMEND_SERVANT_EMPTY"*/, v6);
    sub_1BE4ACC(&StringLiteral_11942/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v7);
    byte_4B61CB7 = 1;
  }
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(classId, 0LL) )
    v8 = (System_String_o **)&StringLiteral_11168/*"RECOMMEND_SERVANT_EMPTY"*/;
  else
    v8 = (System_String_o **)&StringLiteral_11942/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  v9 = *v8;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get(v9, 0LL);
  if ( !emptyMessageLabel )
    sub_1BE4D28(v11, v12);
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

  if ( (byte_4B61CCC & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_17758/*"btn_sefilter_2_on"*/, method);
    sub_1BE4ACC(&StringLiteral_17757/*"btn_sefilter_2"*/, v3);
    byte_4B61CCC = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (bonusFilterSprite = this->fields.bonusFilterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !bonusFilterSprite) )
  {
    sub_1BE4D28(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17757/*"btn_sefilter_2"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17758/*"btn_sefilter_2_on"*/;
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
  sub_1BE4A70(&this->fields.callbackFunc);
  FollowerSelectItemListViewManager__SetMode_31533668(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__SetMode_31533668(
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

  if ( (byte_4B61CC1 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BE4ACC(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v7);
    sub_1BE4ACC(&StringLiteral_10092/*"OnMoveEnd"*/, v8);
    sub_1BE4ACC(&StringLiteral_11479/*"RequestInto"*/, v9);
    byte_4B61CC1 = 1;
  }
  if ( mode != 3 )
  {
    this->fields.initMode = mode;
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
    ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
    if ( mode == 1 )
    {
      v16 = &StringLiteral_11479/*"RequestInto"*/;
    }
    else
    {
      if ( mode != 4 )
      {
        if ( mode == 2 )
          FollowerSelectItemListViewManager__RequestListObject_31534420(this, 3, v15);
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
                   (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
          v22 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
          System_Action___ctor(v22, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
            break;
          if ( v20 )
          {
            FollowerSelectItemListViewObject__Init_31534924((FollowerSelectItemListViewObject_o *)Item, 2, v22, v23);
          }
          else
          {
            FollowerSelectItemListViewObject__Init_31534924((FollowerSelectItemListViewObject_o *)Item, 0, v22, v23);
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
            sub_1BE4A70(&ClippingObjectList[1]);
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
            FollowerSelectItemListViewObject__Init_31532184(
              (FollowerSelectItemListViewObject_o *)ClippingObjectList,
              6,
              v26);
          }
          if ( ++v20 >= v19->fields._size )
            return;
        }
LABEL_31:
        sub_1BE4D28(ClippingObjectList, v11);
      }
      this->fields.callbackCount = 1;
      v16 = &StringLiteral_10092/*"OnMoveEnd"*/;
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
                                                                          (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
      if ( !ClippingObjectList )
        break;
      FollowerSelectItemListViewObject__Init_31532184((FollowerSelectItemListViewObject_o *)ClippingObjectList, 5, v14);
      if ( ++v13 >= v12->fields._size )
        return;
    }
    goto LABEL_31;
  }
}


void __fastcall FollowerSelectItemListViewManager__SetMode_31534368(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BE4A70(&this->fields.callbackFunc2);
  FollowerSelectItemListViewManager__SetMode_31533668(this, mode, v6);
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

  if ( (byte_4B61CBE & 1) == 0 )
  {
    sub_1BE4ACC(&FollowerSelectItemListViewObject_TypeInfo, obj);
    byte_4B61CBE = 1;
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
    sub_1BE4D28(v7, obj);
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
  FollowerSelectItemListViewObject__Init_31532184(
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

  if ( (byte_4B61CD0 & 1) == 0 )
  {
    sub_1BE4ACC(&ClassButtonControlComponent_TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    sub_1BE4ACC(&StringLiteral_17765/*"btn_sort_up"*/, v4);
    sub_1BE4ACC(&StringLiteral_17856/*"btn_txt_up"*/, v5);
    sub_1BE4ACC(&StringLiteral_17809/*"btn_txt_new"*/, v6);
    sub_1BE4ACC(&StringLiteral_17799/*"btn_txt_down"*/, v7);
    sub_1BE4ACC(&StringLiteral_17816/*"btn_txt_old"*/, v8);
    sub_1BE4ACC(&StringLiteral_17762/*"btn_sort_down"*/, v9);
    byte_4B61CD0 = 1;
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
          v21 = (System_String_o **)(v18->fields.isAscendingOrder ? &StringLiteral_17816/*"btn_txt_old"*/ : &StringLiteral_17809/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
          v22 = this->fields.sort;
          if ( v22 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v23 = (System_String_o **)&StringLiteral_17762/*"btn_sort_down"*/;
              v24 = (System_String_o **)&StringLiteral_17765/*"btn_sort_up"*/;
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
          v25 = (System_String_o **)(v18->fields.isAscendingOrder ? &StringLiteral_17856/*"btn_txt_up"*/ : &StringLiteral_17799/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v25, 0LL);
          v22 = this->fields.sort;
          if ( v22 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v23 = (System_String_o **)&StringLiteral_17765/*"btn_sort_up"*/;
              v24 = (System_String_o **)&StringLiteral_17762/*"btn_sort_down"*/;
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_39:
    sub_1BE4D28(sort, v12);
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
  __int64 v17; // x1
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

  if ( (byte_4B61CD3 & 1) == 0 )
  {
    sub_1BE4ACC(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classPos);
    sub_1BE4ACC(&FollowerSelectItemListViewItem_TypeInfo, v5);
    sub_1BE4ACC(&FollowerSelectItemListViewManager_TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem___ctor___77110096, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1BE4ACC(&System_Collections_Generic_List_ListViewItem__TypeInfo, v12);
    byte_4B61CD3 = 1;
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
  v16 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
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
                                                                (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
                                                                0LL);
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
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + v27;
          v16->fields._size = v27 + 1;
          v28[4] = (Il2CppClass *)v23;
          sub_1BE4A70(v28 + 4);
        }
        ++v22;
      }
      if ( size == ++v21 )
        goto LABEL_30;
      itemList = (System_Collections_Generic_List_object__o *)*p_itemList;
    }
    while ( *p_itemList );
LABEL_43:
    sub_1BE4D28(itemList, v17);
  }
LABEL_30:
  v29 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor_56539928(
    v29,
    (System_Collections_Generic_IEnumerable_T__o *)v16,
    (const MethodInfo_35EBB18 *)Method_System_Collections_Generic_List_ListViewItem___ctor___77110096);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v29;
  sub_1BE4A70(&this->fields.itemList);
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
  if ( (byte_4B61CD4 & 1) == 0 )
  {
    sub_1BE4ACC(&ClassButtonControlComponent_TypeInfo, method);
    sub_1BE4ACC(&FollowerListRequest_TypeInfo, v3);
    sub_1BE4ACC(&FollowerRecommendSupportListRequest_TypeInfo, v4);
    sub_1BE4ACC(&FollowerSelectItemListViewManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, v6);
    sub_1BE4ACC(&long_TypeInfo, v7);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v8);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v9);
    sub_1BE4ACC(&StringLiteral_25327/*"{0}"*/, v10);
    this = (FollowerSelectItemListViewManager_o *)sub_1BE4ACC(&StringLiteral_1/*""*/, v11);
    byte_4B61CD4 = 1;
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
                         (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
              (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
    sub_1BE4D28(this, method);
  }
  this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshButtonObject;
  if ( !this )
    goto LABEL_59;
  v16 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
          (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
                                                        (System_String_o *)StringLiteral_25327/*"{0}"*/,
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

  if ( (byte_4B61CA8 & 1) == 0 )
  {
    sub_1BE4ACC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B61CA8 = 1;
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
    v8 = sub_1C1FFBC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1BE4FE8(v7);
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

  if ( (byte_4B61CAA & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, value);
    byte_4B61CAA = 1;
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
    v8 = sub_1C1FFBC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1BE4FE8(v7);
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

  if ( (byte_4B61CAF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo, v9);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    byte_4B61CAF = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BE4D28(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v30 = v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v30.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BE4D28(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BE4D28(0LL, v18);
      Item = (ListViewItem_o *)FollowerSelectItemListViewObject__GetItem(
                                 (FollowerSelectItemListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1BE4D28(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_41702652((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_1BE4D28(v22, v23);
          items = v11->fields._items;
          v25 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BE4D28(v22, v23);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BE4D28(Item, v21);
        items = v11->fields._items;
        v25 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BE4D28(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v27 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v19;
        sub_1BE4A70(v27 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4B61CAE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo, v9);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    byte_4B61CAE = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BE4D28(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BE4D28(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v18 = Component_object;
      if ( !v11 )
        sub_1BE4D28(Component_object, Component_object);
      items = v11->fields._items;
      v20 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BE4D28(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_1BE4A70(v22 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4B61CA9 & 1) == 0 )
  {
    sub_1BE4ACC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B61CA9 = 1;
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
    v8 = sub_1C1FFBC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1BE4FE8(v7);
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

  if ( (byte_4B61CAB & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, value);
    byte_4B61CAB = 1;
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
    v8 = sub_1C1FFBC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1BE4FE8(v7);
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
  sub_1BE4A70(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A1F360;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A1F308;
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
  if ( (byte_4B61CDD & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1BE4ACC(&FollowerSelectItemListViewManager_ResultKind_TypeInfo, v9);
    byte_4B61CDD = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             FollowerSelectItemListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v14, callback, object);
}


void __fastcall FollowerSelectItemListViewManager_CallbackFunc__EndInvoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
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

  if ( (byte_4B61CDE & 1) == 0 )
  {
    sub_1BE4ACC(&FollowerSelectItemListViewManager___c_TypeInfo, v1);
    byte_4B61CDE = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(FollowerSelectItemListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FollowerSelectItemListViewManager___c_TypeInfo->static_fields->__9 = (struct FollowerSelectItemListViewManager___c_o *)v2;
  sub_1BE4A70(FollowerSelectItemListViewManager___c_TypeInfo->static_fields);
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

  if ( (byte_4B61CDF & 1) == 0 )
  {
    sub_1BE4ACC(&ListViewSort_TypeInfo, *(_QWORD *)&questType);
    sub_1BE4ACC(&StringLiteral_6888/*"FollowerSelectEventQuest"*/, v4);
    sub_1BE4ACC(&StringLiteral_6889/*"FollowerSelectMainQuest"*/, v5);
    byte_4B61CDF = 1;
  }
  if ( questType )
  {
    if ( questType != 1 )
    {
      v10 = sub_1BE4AE0(&System_NotImplementedException_TypeInfo);
      v11 = (System_NotImplementedException_o *)sub_1BE4D18(v10);
      System_NotImplementedException___ctor(v11, 0LL);
      v12 = sub_1BE4AE0(&Method_FollowerSelectItemListViewManager___c___cctor_b__133_0__);
      sub_1BE4BF4(v11, v12);
    }
    v6 = &StringLiteral_6888/*"FollowerSelectEventQuest"*/;
  }
  else
  {
    v6 = &StringLiteral_6889/*"FollowerSelectMainQuest"*/;
  }
  v7 = (System_String_o *)*v6;
  v8 = (ListViewSort_o *)sub_1BE4D18(ListViewSort_TypeInfo);
  ListViewSort___ctor_41720260(v8, v7, 11, 0, 0LL);
  return v8;
}