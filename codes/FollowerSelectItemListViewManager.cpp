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

  if ( (byte_4AFCBD6 & 1) == 0 )
  {
    sub_1BC3008(&FollowerSelectItemListViewManager_TypeInfo, v1);
    sub_1BC3008(&System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo, v2);
    sub_1BC3008(&Method_FollowerSelectItemListViewManager___c___cctor_b__136_0__, v3);
    sub_1BC3008(&FollowerSelectItemListViewManager___c_TypeInfo, v4);
    byte_4AFCBD6 = 1;
  }
  v5 = FollowerSelectItemListViewManager___c_TypeInfo;
  if ( !FollowerSelectItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager___c_TypeInfo);
    v5 = FollowerSelectItemListViewManager___c_TypeInfo;
  }
  v6 = (Il2CppObject *)v5->static_fields->__9;
  v7 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo);
  System_Func_Int32Enum__object____ctor(v7, v6, Method_FollowerSelectItemListViewManager___c___cctor_b__136_0__, 0LL);
  FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT = (struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)v7;
  sub_1BC2FAC(FollowerSelectItemListViewManager_TypeInfo->static_fields);
  static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->lastSelectedQuestId = -1LL;
  static_fields->REFRESH_DARK_COLOR = (struct UnityEngine_Color_o)xmmword_BDE980;
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

  if ( (byte_4AFCBAA & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1BC3008(&StringLiteral_17293/*"btn_bg_12"*/, v4);
    sub_1BC3008(&StringLiteral_17360/*"btn_sefilter_2"*/, v5);
    sub_1BC3008(&StringLiteral_17506/*"buttontxt_formation_19"*/, v6);
    byte_4AFCBAA = 1;
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
  AtlasManager__SetEventSprite(changeSkillButtonSprite, (System_String_o *)StringLiteral_17506/*"buttontxt_formation_19"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.bonusFilterSprite, (System_String_o *)StringLiteral_17360/*"btn_sefilter_2"*/, 0LL);
  changeSkillButton = (UnityEngine_Component_o *)this->fields.bonusFilterSprite;
  if ( !changeSkillButton
    || (changeSkillButton = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))changeSkillButton->klass[2]._1.typeMetadataHandle)(
                                                         changeSkillButton,
                                                         changeSkillButton->klass[2]._1.interopData),
        !sortKindButton)
    || (Component_object = UnityEngine_Component__GetComponent_object_(
                             sortKindButton,
                             (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        changeSkillButton = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(
                                                         (UISprite_o *)Component_object,
                                                         (System_String_o *)StringLiteral_17293/*"btn_bg_12"*/,
                                                         0LL),
        !Component_object) )
  {
LABEL_11:
    sub_1BC3264(changeSkillButton, method);
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
    sub_1BC3264(classButtonControl, *(_QWORD *)&classPos);
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

  if ( (byte_4AFCBC8 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isResult);
    byte_4AFCBC8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v6);
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
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  System_Collections_Generic_List_object__o *v62; // x20
  System_Collections_Generic_List_object__o *v63; // x20
  System_Collections_Generic_List_object__o *v64; // x20
  System_Collections_Generic_List_object__o *v65; // x20
  __int64 ReturnTypeByQuestId; // x0
  __int64 v67; // x1
  FollowerSelectItemListViewManager_c *v68; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct ListViewSort_o **p_sort; // x20
  ClassButtonControlComponent_o *classButtonControl; // x22
  ClassButtonControlComponent_CallbackFunc_o *v72; // x27
  const MethodInfo *v73; // x4
  int32_t InitialDisplayClass; // w22
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
  System_Int32_array *OngoingQuestTargetEventIds; // x22
  EventUpValSetupInfo_o *v77; // x27
  __int64 v78; // x2
  __int64 v79; // x8
  __int64 v80; // x27
  unsigned __int64 v81; // x19
  int32_t v82; // w0
  ClassButtonControlComponent_o *v83; // x20
  const MethodInfo *v84; // x2
  QuestPhaseEntity_o *v85; // x20
  bool IsNoneSupportFriendPoint; // w22
  QuestPhaseEntity_o *v87; // x29
  bool IsUseGrandBoard; // w23
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v89; // x20
  long double v90; // q0
  __int64 v91; // x0
  __int64 v92; // x0
  Il2CppObject *MasterData_object; // x26
  FollowerInfo_array *QuestFollowerList; // x25
  int v95; // w19
  BalanceConfig_c *v96; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  bool IsQuestClear_39366056; // w20
  int max_length; // w8
  int32_t v100; // w19
  int v101; // w21
  FollowerInfo_o *v102; // x29
  ServantLeaderInfo_o *ServantLeaderInfo; // x20
  int32_t v104; // w0
  System_Int32_array *v105; // x22
  int32_t Rarity; // w0
  System_Collections_Generic_List_object__o *v107; // x22
  char v108; // w19
  Il2CppObject *v109; // x0
  __int64 v110; // x23
  __int64 v111; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v112; // x20
  int32_t ClassBoardBaseId; // w23
  Il2CppObject *v114; // x20
  ClassBoardInfo_o *v115; // x19
  Il2CppObject *v116; // x26
  struct System_Object_array *items; // x8
  _QWORD *v118; // x9
  __int64 size; // x10
  Il2CppClass **v120; // x0
  FollowerSelectItemListViewManager_c *v121; // x0
  int32_t followerClassId; // w26
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v123; // x22
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x19
  FollowerSelectItemListViewItem_o *v125; // x20
  __int64 v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  __int64 v129; // x8
  __int64 v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  __int64 v133; // x8
  __int64 v134; // x8
  _QWORD *v135; // x9
  __int64 v136; // x10
  __int64 v137; // x8
  int v138; // w19
  bool v139; // w8
  FollowerSelectItemListViewManager_o *v140; // x27
  Il2CppClass *klass; // x24
  int namespaze; // w8
  unsigned int v143; // w26
  void **v144; // x8
  Il2CppObject *v145; // x0
  Il2CppObject *v146; // x21
  __int64 v147; // x20
  BalanceConfig_c *v148; // x0
  struct BalanceConfig_StaticFields *v149; // x9
  int32_t FixEventSupportDeckNum; // w21
  int32_t FixMainSupportDeckNum; // w22
  int32_t deckPriority; // w21
  unsigned __int64 v153; // x23
  int32_t v154; // w25
  System_Collections_Generic_Dictionary_int__int__o *v155; // x24
  FollowerInfo_o *v156; // x26
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v157; // x28
  int32_t v158; // w29
  FollowerSelectItemListViewItem_o *v159; // x22
  __int64 v160; // x8
  _QWORD *v161; // x9
  __int64 v162; // x10
  __int64 v163; // x8
  int32_t i; // w21
  struct BalanceConfig_StaticFields *v165; // x8
  int32_t v166; // w22
  int32_t v167; // w25
  int32_t v168; // w22
  unsigned __int64 v169; // x23
  int32_t v170; // w25
  FollowerInfo_o *v171; // x28
  int v172; // w24
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v173; // x29
  int32_t v174; // w19
  FollowerSelectItemListViewItem_o *v175; // x26
  __int64 v176; // x8
  _QWORD *v177; // x9
  __int64 v178; // x10
  __int64 v179; // x8
  Il2CppClass *v180; // x20
  const char *v181; // x8
  int32_t v182; // w22
  unsigned __int64 v183; // x23
  FollowerInfo_o *v184; // x24
  Il2CppObject *v185; // x0
  __int64 v186; // x26
  BalanceConfig_c *v187; // x0
  struct BalanceConfig_StaticFields *v188; // x9
  int32_t v189; // w21
  int32_t v190; // w25
  int32_t v191; // w25
  unsigned __int64 v192; // x20
  int32_t v193; // w21
  int32_t v194; // w27
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v195; // x29
  System_Collections_Generic_Dictionary_int__int__o *v196; // x23
  FollowerSelectItemListViewItem_o *v197; // x28
  __int64 v198; // x8
  _QWORD *v199; // x9
  __int64 v200; // x10
  __int64 v201; // x8
  int32_t v202; // w28
  BalanceConfig_c *v203; // x0
  struct BalanceConfig_StaticFields *v204; // x8
  int32_t v205; // w21
  int32_t v206; // w25
  unsigned __int64 v207; // x27
  int32_t v208; // w21
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v209; // x20
  int v210; // w19
  System_Collections_Generic_Dictionary_int__int__o *v211; // x22
  FollowerSelectItemListViewItem_o *v212; // x29
  __int64 v213; // x8
  _QWORD *v214; // x9
  __int64 v215; // x10
  __int64 v216; // x8
  struct ServantLeaderInfo_array *userSvtGrandHash; // x19
  int v218; // w8
  unsigned int v219; // w23
  ServantLeaderInfo_o *v220; // x9
  int32_t v221; // w21
  System_Collections_Generic_Dictionary_int__int__o *v222; // x22
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *followerSelectItemOption; // x20
  int32_t grandGraphId; // w24
  FollowerSelectItemListViewItem_o *v225; // x26
  __int64 v226; // x8
  _QWORD *v227; // x9
  __int64 v228; // x10
  __int64 v229; // x8
  Il2CppClass *v230; // x19
  bool v231; // w20
  unsigned __int64 namespaze_low; // x8
  unsigned __int64 v233; // x24
  Il2CppType *p_byval_arg; // x27
  __int64 v235; // x9
  __int64 v236; // x9
  __int64 v237; // x22
  __int64 v238; // x8
  __int64 v239; // x8
  __int64 v240; // x8
  __int64 v241; // x23
  __int64 v242; // x25
  int32_t v243; // w23
  FollowerInfo_o *v244; // x26
  FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v245; // x25
  System_Collections_Generic_Dictionary_int__int__o *v246; // x28
  FollowerSelectItemListViewItem_o *v247; // x22
  __int64 v248; // x8
  _QWORD *v249; // x9
  __int64 v250; // x10
  __int64 v251; // x8
  const MethodInfo *v252; // x2
  FollowerSelectItemListViewManager_c *v253; // x0
  const MethodInfo *v254; // x2
  const MethodInfo *v255; // x1
  struct UIScrollView_o *scrollView; // x8
  __int64 v257; // x0
  int32_t supportDeckId; // [xsp+0h] [xbp-170h]
  int32_t supportDeckIda; // [xsp+0h] [xbp-170h]
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary; // [xsp+10h] [xbp-160h]
  const MethodInfo *v261; // [xsp+38h] [xbp-138h]
  ClassBoardClassMaster_o *Master_object; // [xsp+48h] [xbp-128h]
  QuestPhaseEntity_o *v263; // [xsp+50h] [xbp-120h]
  UserFollowMaster_o *v264; // [xsp+58h] [xbp-118h]
  UserFollowMaster_o *v265; // [xsp+58h] [xbp-118h]
  bool isReleasedClassBoard; // [xsp+60h] [xbp-110h]
  Il2CppClass *v267; // [xsp+60h] [xbp-110h]
  bool v268; // [xsp+6Ch] [xbp-104h]
  struct System_Collections_Generic_List_ListViewItem__o **p_recommendItemList; // [xsp+70h] [xbp-100h]
  unsigned int v270; // [xsp+7Ch] [xbp-F4h]
  int32_t phaseCnt; // [xsp+80h] [xbp-F0h]
  int32_t questIda; // [xsp+84h] [xbp-ECh]
  DataMasterBase_TMaster__TEntity__PKType__o *v273; // [xsp+88h] [xbp-E8h]
  __int64 v274; // [xsp+88h] [xbp-E8h]
  bool HasFlag_41373164; // [xsp+88h] [xbp-E8h]
  struct System_Collections_Generic_List_ListViewItem__o **p_originalItemList; // [xsp+90h] [xbp-E0h]
  bool IsRecommendedFollower; // [xsp+98h] [xbp-D8h]
  unsigned __int64 v278; // [xsp+98h] [xbp-D8h]
  int32_t pos; // [xsp+A0h] [xbp-D0h]
  Il2CppClass *posa; // [xsp+A0h] [xbp-D0h]
  int32_t posb; // [xsp+A0h] [xbp-D0h]
  _BOOL4 IsMyServantOrNpcRestriction; // [xsp+A8h] [xbp-C8h]
  int32_t index; // [xsp+B0h] [xbp-C0h]
  int32_t indexa; // [xsp+B0h] [xbp-C0h]
  FollowerInfo_o *indexb; // [xsp+B0h] [xbp-C0h]
  bool IsMyServantOrNpcRestriction_42413184; // [xsp+B8h] [xbp-B8h]
  FollowerInfo_o **v287; // [xsp+B8h] [xbp-B8h]
  __int64 v288; // [xsp+B8h] [xbp-B8h]
  struct System_Collections_Generic_List_ListViewItem__o **p_mixItemList; // [xsp+C0h] [xbp-B0h]
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o **p_followerSelectItemOption; // [xsp+C8h] [xbp-A8h]
  UserFollowMaster_o *v291; // [xsp+C8h] [xbp-A8h]
  FollowerSelectItemListViewManager_o *v292; // [xsp+D0h] [xbp-A0h]
  Il2CppObject *v293; // [xsp+D8h] [xbp-98h] BYREF
  Il2CppObject *v294; // [xsp+E0h] [xbp-90h] BYREF
  Il2CppObject *v295; // [xsp+E8h] [xbp-88h] BYREF
  UserClassBoardSquareEntity_o *v296; // [xsp+F0h] [xbp-80h] BYREF
  bool isWhole; // [xsp+FCh] [xbp-74h] BYREF
  Il2CppObject *v298; // [xsp+100h] [xbp-70h] BYREF
  NpcFollowerEntity_o *entity; // [xsp+108h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v300; // 0:x0.16

  if ( (byte_4AFCBAC & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&questId);
    sub_1BC3008(&ClassButtonControlComponent_CallbackFunc_TypeInfo, v15);
    sub_1BC3008(&ClassBoardInfo_TypeInfo, v16);
    sub_1BC3008(&ClassButtonControlComponent_TypeInfo, v17);
    sub_1BC3008(&CondType_TypeInfo, v18);
    sub_1BC3008(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v19);
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestMaster___, v20);
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v21);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserFollowMaster___, v22);
    sub_1BC3008(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v23);
    sub_1BC3008(&Method_DataManager_GetMaster_EventQuestMaster___, v24);
    sub_1BC3008(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v25);
    sub_1BC3008(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, v26);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantMaster___, v27);
    sub_1BC3008(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, v28);
    sub_1BC3008(&Method_DataManager_GetMaster_UserFollowerMaster___, v29);
    sub_1BC3008(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___, v30);
    sub_1BC3008(&DataManager_TypeInfo, v31);
    sub_1BC3008(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v32);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v33);
    sub_1BC3008(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v34);
    sub_1BC3008(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v35);
    sub_1BC3008(
      &Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__,
      v36);
    sub_1BC3008(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v37);
    sub_1BC3008(&Method_System_Linq_Enumerable_Contains_int___, v38);
    sub_1BC3008(&EventUpValSetupInfo_TypeInfo, v39);
    sub_1BC3008(&FollowerSelectItemListViewItem_TypeInfo, v40);
    sub_1BC3008(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v41);
    sub_1BC3008(&FollowerSelectItemListViewManager_TypeInfo, v42);
    sub_1BC3008(&FollowerSelectItemListViewManager_FollowerSelectItemOption_TypeInfo, v43);
    sub_1BC3008(&int___TypeInfo, v44);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__Add__, v45);
    sub_1BC3008(&Method_System_Collections_Generic_List_ClassBoardInfo__Add__, v46);
    sub_1BC3008(&Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__, v47);
    sub_1BC3008(&Method_System_Collections_Generic_List_ClassBoardInfo___ctor__, v48);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v49);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v50);
    sub_1BC3008(&System_Collections_Generic_List_ListViewItem__TypeInfo, v51);
    sub_1BC3008(&System_Collections_Generic_List_ClassBoardInfo__TypeInfo, v52);
    sub_1BC3008(&System_Math_TypeInfo, v53);
    sub_1BC3008(&NetworkManager_TypeInfo, v54);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v55);
    sub_1BC3008(&ServantLeaderInfo___TypeInfo, v56);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v57);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v58);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v59);
    sub_1BC3008(&StringLiteral_3170/*"BonusFilterEventId"*/, v60);
    sub_1BC3008(&StringLiteral_1/*""*/, v61);
    byte_4AFCBAC = 1;
  }
  v298 = 0LL;
  entity = 0LL;
  isWhole = 0;
  v295 = 0LL;
  v296 = 0LL;
  v293 = 0LL;
  v294 = 0LL;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BC2FAC(&this->fields.questRestrictionInfo);
  v62 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v62,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.mixItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v62;
  p_mixItemList = &this->fields.mixItemList;
  sub_1BC2FAC(&this->fields.mixItemList);
  v63 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v63,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.originalItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v63;
  p_originalItemList = &this->fields.originalItemList;
  sub_1BC2FAC(&this->fields.originalItemList);
  v64 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v64,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.recommendItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v64;
  p_recommendItemList = &this->fields.recommendItemList;
  sub_1BC2FAC(&this->fields.recommendItemList);
  v65 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v65,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.grandItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v65;
  sub_1BC2FAC(&this->fields.grandItemList);
  ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0LL);
  v68 = FollowerSelectItemListViewManager_TypeInfo;
  v270 = ReturnTypeByQuestId;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v68 = FollowerSelectItemListViewManager_TypeInfo;
  }
  phaseCnt = questPhase;
  questIda = questId;
  LIST_VIEW_SORT = v68->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT )
    goto LABEL_343;
  this->fields.sort = (struct ListViewSort_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))LIST_VIEW_SORT->fields.m_target)(
                                                 LIST_VIEW_SORT->fields.original_method_info,
                                                 v270,
                                                 *(_QWORD *)&LIST_VIEW_SORT->fields.extra_arg);
  p_sort = &this->fields.sort;
  sub_1BC2FAC(&this->fields.sort);
  classButtonControl = this->fields.classButtonControl;
  v72 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1BC3254(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  v292 = this;
  ClassButtonControlComponent_CallbackFunc___ctor(
    v72,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_343;
  ClassButtonControlComponent__init(classButtonControl, v72, questIda, questPhase, questRestrictionInfo, 0LL);
  if ( !*p_sort )
    goto LABEL_343;
  InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                          this,
                          questIda,
                          questPhase,
                          (*p_sort)->fields.isRequestLoad,
                          v73);
  static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  static_fields->followerClassId = InitialDisplayClass;
  static_fields->lastSelectedQuestId = questIda;
  static_fields->lastSelectedQuestPhase = questPhase;
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(InitialDisplayClass, 0LL) )
    this->fields.isGetRecommendSupport = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                 (EventQuestMaster_o *)ReturnTypeByQuestId,
                                 questIda,
                                 questPhase,
                                 0LL,
                                 0LL);
  v77 = (EventUpValSetupInfo_o *)sub_1BC3254(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_40756148(v77, OngoingQuestTargetEventIds, 0, questIda, questPhase, 0LL);
  this->fields.setupInfo = v77;
  ReturnTypeByQuestId = sub_1BC2FAC(&this->fields.setupInfo);
  if ( !OngoingQuestTargetEventIds )
    goto LABEL_343;
  if ( *(_QWORD *)&OngoingQuestTargetEventIds->max_length )
  {
    ReturnTypeByQuestId = (__int64)UnityEngine_PlayerPrefs__GetString_69993112(
                                     (System_String_o *)StringLiteral_3170/*"BonusFilterEventId"*/,
                                     0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_343;
    if ( *(int *)(ReturnTypeByQuestId + 16) < 1 )
      goto LABEL_25;
    ReturnTypeByQuestId = (__int64)System_String__Split((System_String_o *)ReturnTypeByQuestId, 0x2Cu, 0, 0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_343;
    v79 = *(_QWORD *)(ReturnTypeByQuestId + 24);
    v80 = ReturnTypeByQuestId;
    if ( (int)v79 < 1 )
    {
LABEL_25:
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_343;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 18, 0, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_343;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 19, 0, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_343;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 20, 0, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_343;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 40, 1, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_343;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 41, 1, 0LL);
    }
    else
    {
      v81 = 0LL;
      while ( 1 )
      {
        if ( v81 >= (unsigned int)v79 )
          goto LABEL_344;
        v82 = System_Int32__Parse(*(System_String_o **)(v80 + 32 + 8 * v81), 0LL);
        ReturnTypeByQuestId = System_Linq_Enumerable__Contains_int_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)OngoingQuestTargetEventIds,
                                v82,
                                (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (ReturnTypeByQuestId & 1) != 0 )
          break;
        LODWORD(v79) = *(_DWORD *)(v80 + 24);
        if ( (__int64)++v81 >= (int)v79 )
          goto LABEL_25;
      }
    }
  }
  ReturnTypeByQuestId = (__int64)*p_sort;
  if ( !*p_sort )
    goto LABEL_343;
  ListViewSort__Load((ListViewSort_o *)ReturnTypeByQuestId, 0LL);
  this->fields.isInput = 0;
  ReturnTypeByQuestId = (__int64)FollowerSelectItemListViewManager_TypeInfo;
  v83 = this->fields.classButtonControl;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  if ( !v83 )
    goto LABEL_343;
  ClassButtonControlComponent__setCursor(
    v83,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, OngoingQuestTargetEventIds, v84);
  ReturnTypeByQuestId = (__int64)this->fields.bonusFilterKindButton;
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  ReturnTypeByQuestId = (__int64)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)ReturnTypeByQuestId,
                                   0LL);
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)ReturnTypeByQuestId,
    this->fields.isBonusFilterEnable,
    0LL);
  if ( this->fields.isBonusFilterEnable )
  {
    ReturnTypeByQuestId = (__int64)this->fields.bonusFilterKindLabel;
    if ( !ReturnTypeByQuestId )
      goto LABEL_343;
    UILabel__set_text((UILabel_o *)ReturnTypeByQuestId, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  this->fields.isRefreshBtnHide = 0;
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId
    || (ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0 )
  {
LABEL_343:
    sub_1BC3264(ReturnTypeByQuestId, v67);
  }
  v85 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)ReturnTypeByQuestId, questIda, questPhase, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v85 )
    goto LABEL_338;
  IsNoneSupportFriendPoint = QuestPhaseEntity__IsNoneSupportFriendPoint(v85, 0LL);
  v87 = v85;
  IsUseGrandBoard = QuestPhaseEntity__IsUseGrandBoard(v85, 0LL);
  v89 = (FollowerSelectItemListViewManager_FollowerSelectItemOption_o *)sub_1BC3254(FollowerSelectItemListViewManager_FollowerSelectItemOption_TypeInfo);
  FollowerSelectItemListViewManager_FollowerSelectItemOption___ctor(v89, 0LL);
  if ( !v89 )
    goto LABEL_343;
  v89->fields.friendPointUpVal = friendPointUpVal;
  v89->fields.friendPointUpMaxVal = friendPointUpMaxVal;
  v89->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  v268 = IsUseGrandBoard;
  sub_1BC2FAC(&v89->fields.friendPointCampaignEntityList);
  v89->fields.isBonusFilterEnable = this->fields.isBonusFilterEnable;
  v89->fields.isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
  v89->fields.isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
  v89->fields.setupInfo = this->fields.setupInfo;
  sub_1BC2FAC(&v89->fields.setupInfo);
  v89->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BC2FAC(&v89->fields.questRestrictionInfo);
  v89->fields.isNoneSupportFriendPoint = IsNoneSupportFriendPoint;
  v89->fields.isUseGrandBoard = IsUseGrandBoard;
  this->fields.followerSelectItemOption = v89;
  p_followerSelectItemOption = &this->fields.followerSelectItemOption;
  sub_1BC2FAC(&this->fields.followerSelectItemOption);
  v263 = v87;
  v91 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v91 + 309) & 1) == 0 )
    v91 = sub_1C1346C(v90);
  v92 = *(_QWORD *)(*(_QWORD *)(v91 + 192) + 16LL);
  if ( (*(_BYTE *)(v92 + 309) & 1) == 0 )
    v92 = sub_1C1346C(v90);
  ReturnTypeByQuestId = **(_QWORD **)(v92 + 184);
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ReturnTypeByQuestId,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)ReturnTypeByQuestId,
                        questIda,
                        phaseCnt,
                        0LL);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  v95 = *(_DWORD *)(ReturnTypeByQuestId + 56);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  pos = *(_DWORD *)(ReturnTypeByQuestId + 60);
  if ( v95 < 1 )
  {
    IsMyServantOrNpcRestriction_42413184 = 0;
    goto LABEL_57;
  }
  if ( questRestrictionInfo )
  {
    IsMyServantOrNpcRestriction_42413184 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_42413184(
                                             questRestrictionInfo,
                                             pos,
                                             0LL);
LABEL_57:
    IsMyServantOrNpcRestriction = 0;
    if ( questRestrictionInfo && v95 <= 0 )
      IsMyServantOrNpcRestriction = QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL);
    goto LABEL_61;
  }
  IsMyServantOrNpcRestriction_42413184 = 0;
  IsMyServantOrNpcRestriction = 0;
LABEL_61:
  v96 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v96 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v96->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_39366056 = CondType__IsQuestClear_39366056(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v273 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
  if ( !QuestFollowerList )
    goto LABEL_343;
  max_length = QuestFollowerList->max_length;
  v100 = pos;
  if ( max_length >= 1 )
  {
    v101 = 0;
    index = 0;
    isReleasedClassBoard = IsQuestClear_39366056;
    v264 = (UserFollowMaster_o *)MasterData_object;
    do
    {
      if ( v101 >= (unsigned int)max_length )
        goto LABEL_344;
      if ( !questRestrictionInfo )
        goto LABEL_343;
      v102 = QuestFollowerList->m_Items[v101];
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
      if ( !v102 )
        goto LABEL_343;
      ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v102, 0, ReturnTypeByQuestId, 0LL);
      v104 = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
      ReturnTypeByQuestId = (__int64)FollowerInfo__GetNpcServantIndividualityFull(v102, 0, v104, 0LL);
      if ( !ServantLeaderInfo )
        goto LABEL_343;
      v105 = (System_Int32_array *)ReturnTypeByQuestId;
      Rarity = ServantLeaderInfo__getRarity(ServantLeaderInfo, 0LL);
      ReturnTypeByQuestId = QuestRestrictionInfo__IsRestriction_42394212(
                              questRestrictionInfo,
                              &isWhole,
                              v105,
                              Rarity,
                              ServantLeaderInfo->fields.lv,
                              v100,
                              3,
                              0LL);
      if ( (ReturnTypeByQuestId & 1) != 0 )
        goto LABEL_136;
      if ( IsMyServantOrNpcRestriction_42413184 )
      {
        ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality_42416260(
                                questRestrictionInfo,
                                v105,
                                v100,
                                0LL);
        if ( (ReturnTypeByQuestId & 1) != 0 )
          goto LABEL_136;
      }
      if ( v102->fields.isFixedNpc || IsMyServantOrNpcRestriction && v102->fields.isMySvtOrNpc )
        goto LABEL_136;
      if ( !MasterData_object )
        goto LABEL_343;
      if ( NpcFollowerMaster__TryGetEntity(
             (NpcFollowerMaster_o *)MasterData_object,
             &entity,
             v102->fields.userId,
             questIda,
             phaseCnt,
             0LL) )
      {
        ReturnTypeByQuestId = (__int64)entity;
        if ( !entity )
          goto LABEL_343;
        IsRecommendedFollower = NpcFollowerEntity__IsRecommendedFollower(entity, 0LL);
      }
      else
      {
        IsRecommendedFollower = 0;
      }
      v107 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ClassBoardInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v107,
        (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
      if ( !v273 )
        goto LABEL_343;
      ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetEntity(
                              v273,
                              &v298,
                              v102->fields.npcFollowerSvtId,
                              (const MethodInfo_32B1618 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
      if ( (ReturnTypeByQuestId & 1) != 0 )
      {
        if ( !v298 )
          goto LABEL_343;
        ReturnTypeByQuestId = NpcServantFollowerEntity__IsNotClassBoard((int32_t)v298[7].monitor, 0LL);
        if ( (ReturnTypeByQuestId & 1) != 0
          || (ReturnTypeByQuestId = QuestPhaseEntity__IsNotClassBoard(v263, 0LL), (ReturnTypeByQuestId & 1) != 0) )
        {
          v108 = 1;
          goto LABEL_114;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
        v109 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantMaster___);
        v111 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        v110 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
        v112 = (DataMasterBase_TMaster__TEntity__PKType__o *)v109;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v300.fields.currentCryptoKey = v111;
        *(_QWORD *)&v300.fields.fakeValue = v110;
        ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v300, 0LL);
        if ( !v112 )
          goto LABEL_343;
        ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         v112,
                                         ReturnTypeByQuestId,
                                         (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !ReturnTypeByQuestId || !Master_object )
          goto LABEL_343;
        ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(
                             Master_object,
                             *(_DWORD *)(ReturnTypeByQuestId + 80),
                             0LL);
        v114 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4AFC1F1 )
        {
          sub_1BC3008(&NetworkManager_TypeInfo, v67);
          byte_4AFC1F1 = 1;
        }
        ReturnTypeByQuestId = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          ReturnTypeByQuestId = (__int64)NetworkManager_TypeInfo;
        }
        if ( !v114 )
          goto LABEL_343;
        ReturnTypeByQuestId = UserClassBoardSquareMaster__TryGetEntity(
                                (UserClassBoardSquareMaster_o *)v114,
                                &v296,
                                *(_QWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 64LL),
                                ClassBoardBaseId,
                                0LL);
        if ( (ReturnTypeByQuestId & 1) != 0 )
        {
          v115 = (ClassBoardInfo_o *)sub_1BC3254(ClassBoardInfo_TypeInfo);
          ClassBoardInfo___ctor(v115, 0LL);
          if ( !v115 )
            goto LABEL_343;
          v115->fields.classBoardBaseId = ClassBoardBaseId;
          if ( !v296 )
            goto LABEL_343;
          ReturnTypeByQuestId = (__int64)v296->fields.classBoardSquareIds;
          if ( !ReturnTypeByQuestId )
            goto LABEL_343;
          v116 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
          v115->fields.squareIds = (struct System_Int32_array *)sub_1BC3144(v116, int___TypeInfo);
          sub_1BC3144(v116, int___TypeInfo);
          sub_1BC2FAC(&v115->fields.squareIds);
          v115->fields.releasedClassIds = ClassBoardClassMaster__GetOpenClassIdArrayFromBaseId(
                                            Master_object,
                                            ClassBoardBaseId,
                                            0LL);
          ReturnTypeByQuestId = sub_1BC2FAC(&v115->fields.releasedClassIds);
          if ( !v107 )
            goto LABEL_343;
          items = v107->fields._items;
          v118 = Method_System_Collections_Generic_List_ClassBoardInfo__Add__;
          ++v107->fields._version;
          if ( !items )
            goto LABEL_343;
          size = v107->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v107,
              (Il2CppObject *)v115,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
          }
          else
          {
            v120 = &items->obj.klass + size;
            v107->fields._size = size + 1;
            v120[4] = (Il2CppClass *)v115;
            sub_1BC2FAC(v120 + 4);
          }
          v108 = 0;
          goto LABEL_115;
        }
      }
      v108 = 0;
LABEL_114:
      if ( !v107 )
        goto LABEL_343;
LABEL_115:
      v102->fields.userClassBoardInfo = (struct ClassBoardInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                                         v107,
                                                                         (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
      sub_1BC2FAC(&v102->fields.userClassBoardInfo);
      v121 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v121 = FollowerSelectItemListViewManager_TypeInfo;
      }
      followerClassId = v121->static_fields->followerClassId;
      v123 = *p_followerSelectItemOption;
      if ( (v108 & 1) != 0 )
        classBoardMaxDictionary = 0LL;
      else
        classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
      v125 = (FollowerSelectItemListViewItem_o *)sub_1BC3254(FollowerSelectItemListViewItem_TypeInfo);
      FollowerSelectItemListViewItem___ctor(
        v125,
        index,
        0,
        v102,
        followerClassId,
        IsRecommendedFollower,
        v123,
        0,
        0,
        0,
        classBoardMaxDictionary,
        isReleasedClassBoard,
        0,
        0,
        0,
        v261);
      ReturnTypeByQuestId = (__int64)*p_mixItemList;
      if ( !*p_mixItemList )
        goto LABEL_343;
      v126 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      MasterData_object = (Il2CppObject *)v264;
      v100 = pos;
      v127 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v126 )
        goto LABEL_343;
      v128 = *(int *)(ReturnTypeByQuestId + 24);
      if ( (unsigned int)v128 >= *(_DWORD *)(v126 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v125,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
      }
      else
      {
        v129 = v126 + 8 * v128;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v128 + 1;
        *(_QWORD *)(v129 + 32) = v125;
        sub_1BC2FAC(v129 + 32);
      }
      ReturnTypeByQuestId = (__int64)*p_originalItemList;
      if ( !*p_originalItemList )
        goto LABEL_343;
      v130 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      v131 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v130 )
        goto LABEL_343;
      v132 = *(int *)(ReturnTypeByQuestId + 24);
      if ( (unsigned int)v132 >= *(_DWORD *)(v130 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v125,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
      }
      else
      {
        v133 = v130 + 8 * v132;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v132 + 1;
        *(_QWORD *)(v133 + 32) = v125;
        sub_1BC2FAC(v133 + 32);
      }
      ReturnTypeByQuestId = (__int64)*p_recommendItemList;
      if ( !*p_recommendItemList )
        goto LABEL_343;
      v134 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      v135 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v134 )
        goto LABEL_343;
      v136 = *(int *)(ReturnTypeByQuestId + 24);
      if ( (unsigned int)v136 >= *(_DWORD *)(v134 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v125,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
      }
      else
      {
        v137 = v134 + 8 * v136;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v136 + 1;
        *(_QWORD *)(v137 + 32) = v125;
        ReturnTypeByQuestId = sub_1BC2FAC(v137 + 32);
      }
      ++index;
LABEL_136:
      max_length = QuestFollowerList->max_length;
      ++v101;
    }
    while ( v101 < max_length );
  }
  if ( !questRestrictionInfo || !QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL) )
    goto LABEL_146;
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  v138 = *(_DWORD *)(ReturnTypeByQuestId + 56);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  if ( v138 >= 1 )
    v139 = !QuestRestrictionInfo__IsSelectableNormalSupport(
              questRestrictionInfo,
              *(_DWORD *)(ReturnTypeByQuestId + 60),
              0LL);
  else
LABEL_146:
    v139 = 0;
  this->fields.isRefreshBtnHide = v139;
  if ( !v139 && !v263->fields.isNpcOnly )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_343;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v295,
                            (const MethodInfo_32B16F8 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    v140 = this;
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v295 )
        goto LABEL_343;
      klass = v295[1].klass;
      if ( klass )
      {
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
        {
          v143 = 0;
          posa = v295[1].klass;
          do
          {
            if ( v143 >= namespaze )
              goto LABEL_344;
            v144 = &klass->_1.image + (int)v143;
            ReturnTypeByQuestId = (__int64)v144[4];
            v287 = (FollowerInfo_o **)(v144 + 4);
            if ( !ReturnTypeByQuestId )
              goto LABEL_343;
            FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0LL);
            if ( v143 >= LODWORD(klass->_1.namespaze) )
              goto LABEL_344;
            if ( !*v287 )
              goto LABEL_343;
            ReturnTypeByQuestId = (__int64)(*v287)->fields.mainSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_343;
            v274 = *(_QWORD *)(ReturnTypeByQuestId + 24);
            v145 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
            if ( v145 )
            {
              v146 = v145;
              v147 = sub_1BC3144(v145, int___TypeInfo);
              if ( !v147 )
              {
                sub_1BC3524(v146);
LABEL_345:
                sub_1BC3524(v146);
LABEL_346:
                v257 = sub_1BC3288();
                sub_1BC3130(v257, 0LL);
              }
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
            FixMainSupportDeckNum = v149->FixMainSupportDeckNum;
            FixEventSupportDeckNum = v149->FixEventSupportDeckNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            ReturnTypeByQuestId = System_Math__Max_63870684(FixMainSupportDeckNum, FixEventSupportDeckNum, 0LL);
            indexa = v143;
            if ( (int)v274 >= 1 )
            {
              deckPriority = ReturnTypeByQuestId;
              v153 = 0LL;
              do
              {
                if ( !*p_originalItemList )
                  goto LABEL_343;
                if ( v143 >= LODWORD(klass->_1.namespaze) )
                  goto LABEL_344;
                if ( !v147 )
                  goto LABEL_343;
                if ( v153 >= *(unsigned int *)(v147 + 24) )
                  goto LABEL_344;
                v154 = (*p_originalItemList)->fields._size;
                v155 = v140->fields.classBoardMaxDictionary;
                v156 = *v287;
                v157 = *p_followerSelectItemOption;
                v158 = *(_DWORD *)(v147 + 32 + 4 * v153);
                v159 = (FollowerSelectItemListViewItem_o *)sub_1BC3254(FollowerSelectItemListViewItem_TypeInfo);
                FollowerSelectItemListViewItem___ctor(
                  v159,
                  v154,
                  0,
                  v156,
                  0,
                  0,
                  v157,
                  1,
                  v158,
                  deckPriority,
                  v155,
                  1,
                  0,
                  0,
                  0,
                  v261);
                ReturnTypeByQuestId = (__int64)v140->fields.originalItemList;
                if ( !ReturnTypeByQuestId )
                  goto LABEL_343;
                v160 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v161 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v160 )
                  goto LABEL_343;
                v162 = *(int *)(ReturnTypeByQuestId + 24);
                klass = posa;
                v143 = indexa;
                if ( (unsigned int)v162 >= *(_DWORD *)(v160 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    (Il2CppObject *)v159,
                    *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v161[4] + 192LL) + 112LL));
                }
                else
                {
                  v163 = v160 + 8 * v162;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v162 + 1;
                  *(_QWORD *)(v163 + 32) = v159;
                  ReturnTypeByQuestId = sub_1BC2FAC(v163 + 32);
                }
                ++v153;
                --deckPriority;
              }
              while ( (unsigned int)v274 != v153 );
            }
            for ( i = 0; ; ++i )
            {
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              }
              v165 = *(struct BalanceConfig_StaticFields **)(ReturnTypeByQuestId + 184);
              if ( i >= v165->SupportDeckMemberMax )
                break;
              if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
              {
                j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId);
                v165 = BalanceConfig_TypeInfo->static_fields;
              }
              v167 = v165->FixMainSupportDeckNum;
              v166 = v165->FixEventSupportDeckNum;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              ReturnTypeByQuestId = System_Math__Max_63870684(v167, v166, 0LL);
              if ( (int)v274 >= 1 )
              {
                v168 = ReturnTypeByQuestId;
                v169 = 0LL;
                while ( *p_mixItemList )
                {
                  ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                  v170 = (*p_mixItemList)->fields._size;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( v143 >= LODWORD(klass->_1.namespaze) )
                    goto LABEL_344;
                  if ( !v147 )
                    goto LABEL_343;
                  if ( v169 >= *(unsigned int *)(v147 + 24) )
                    goto LABEL_344;
                  v171 = *v287;
                  v172 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 180LL);
                  v173 = *p_followerSelectItemOption;
                  v174 = *(_DWORD *)(v147 + 32 + 4 * v169);
                  classBoardMaxNumDictionary = v292->fields.classBoardMaxDictionary;
                  v140 = v292;
                  v175 = (FollowerSelectItemListViewItem_o *)sub_1BC3254(FollowerSelectItemListViewItem_TypeInfo);
                  FollowerSelectItemListViewItem___ctor(
                    v175,
                    v170,
                    v172 - i,
                    v171,
                    i,
                    0,
                    v173,
                    1,
                    v174,
                    v168,
                    classBoardMaxNumDictionary,
                    1,
                    0,
                    0,
                    0,
                    v261);
                  ReturnTypeByQuestId = (__int64)v292->fields.mixItemList;
                  if ( !ReturnTypeByQuestId )
                    goto LABEL_343;
                  v176 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                  v177 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                  if ( !v176 )
                    goto LABEL_343;
                  v178 = *(int *)(ReturnTypeByQuestId + 24);
                  if ( (unsigned int)v178 >= *(_DWORD *)(v176 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                      (Il2CppObject *)v175,
                      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v177[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v179 = v176 + 8 * v178;
                    *(_DWORD *)(ReturnTypeByQuestId + 24) = v178 + 1;
                    *(_QWORD *)(v179 + 32) = v175;
                    ReturnTypeByQuestId = sub_1BC2FAC(v179 + 32);
                  }
                  klass = posa;
                  v143 = indexa;
                  ++v169;
                  --v168;
                  if ( (unsigned int)v274 == v169 )
                    goto LABEL_204;
                }
                goto LABEL_343;
              }
LABEL_204:
              ;
            }
            namespaze = (int)klass->_1.namespaze;
            ++v143;
          }
          while ( (int)v143 < namespaze );
        }
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_343;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v294,
                            (const MethodInfo_32B16F8 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v294 )
        goto LABEL_343;
      v180 = v294[1].klass;
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_343;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !ReturnTypeByQuestId )
        goto LABEL_343;
      ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                       questIda,
                                       (const MethodInfo_32AF070 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_343;
      HasFlag_41373164 = QuestEntity__HasFlag_41373164((QuestEntity_o *)ReturnTypeByQuestId, 0x8000000LL, phaseCnt, 0LL);
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_343;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserFollowMaster___);
      v265 = (UserFollowMaster_o *)ReturnTypeByQuestId;
      if ( !v180 )
        goto LABEL_343;
      v181 = v180->_1.namespaze;
      if ( (int)v181 >= 1 )
      {
        v182 = 0;
        v183 = 0LL;
        v267 = v180;
        do
        {
          if ( v183 >= (unsigned int)v181 )
            goto LABEL_344;
          v184 = (FollowerInfo_o *)*((_QWORD *)&v180->_1.byval_arg.data + v183);
          if ( HasFlag_41373164 )
          {
            if ( !v184 )
              goto LABEL_343;
            if ( v184->fields.type == 5 )
            {
              ReturnTypeByQuestId = (__int64)v265;
              if ( !v265 )
                goto LABEL_343;
              ReturnTypeByQuestId = UserFollowMaster__IsFollowUser(v265, v184->fields.userId, 0LL);
              if ( (ReturnTypeByQuestId & 1) == 0 )
                goto LABEL_289;
            }
          }
          else
          {
            if ( !v184 )
              goto LABEL_343;
            if ( v184->fields.type == 5 )
              goto LABEL_289;
          }
          FollowerInfo__ChangeLimitCountBySpoilerProtection(v184, 0LL);
          sub_1BC30B0(int___TypeInfo, 0LL);
          posb = v182;
          v278 = v183;
          if ( v270 )
          {
            ReturnTypeByQuestId = (__int64)v184->fields.eventSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_343;
          }
          else
          {
            ReturnTypeByQuestId = (__int64)v184->fields.mainSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_343;
          }
          v288 = *(unsigned int *)(ReturnTypeByQuestId + 24);
          v185 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
          if ( v185 )
          {
            v146 = v185;
            v186 = sub_1BC3144(v185, int___TypeInfo);
            if ( !v186 )
              goto LABEL_345;
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
          ReturnTypeByQuestId = System_Math__Max_63870684(v190, v189, 0LL);
          v191 = ReturnTypeByQuestId;
          if ( (int)v288 >= 1 )
          {
            v192 = 0LL;
            while ( 1 )
            {
              if ( !*p_originalItemList || !v186 )
                goto LABEL_343;
              if ( v192 >= *(unsigned int *)(v186 + 24) )
                break;
              v193 = (*p_originalItemList)->fields._size;
              v194 = *(_DWORD *)(v186 + 32 + 4 * v192);
              v195 = *p_followerSelectItemOption;
              v196 = v292->fields.classBoardMaxDictionary;
              v197 = (FollowerSelectItemListViewItem_o *)sub_1BC3254(FollowerSelectItemListViewItem_TypeInfo);
              supportDeckId = v194;
              v140 = v292;
              FollowerSelectItemListViewItem___ctor(
                v197,
                v193,
                0,
                v184,
                0,
                0,
                v195,
                0,
                supportDeckId,
                v191,
                v196,
                1,
                0,
                0,
                0,
                v261);
              ReturnTypeByQuestId = (__int64)v292->fields.originalItemList;
              if ( !ReturnTypeByQuestId )
                goto LABEL_343;
              v198 = *(_QWORD *)(ReturnTypeByQuestId + 16);
              v199 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++*(_DWORD *)(ReturnTypeByQuestId + 28);
              if ( !v198 )
                goto LABEL_343;
              v200 = *(int *)(ReturnTypeByQuestId + 24);
              if ( (unsigned int)v200 >= *(_DWORD *)(v198 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                  (Il2CppObject *)v197,
                  *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v199[4] + 192LL) + 112LL));
              }
              else
              {
                v201 = v198 + 8 * v200;
                *(_DWORD *)(ReturnTypeByQuestId + 24) = v200 + 1;
                *(_QWORD *)(v201 + 32) = v197;
                ReturnTypeByQuestId = sub_1BC2FAC(v201 + 32);
              }
              ++v192;
              --v191;
              if ( v288 == v192 )
                goto LABEL_250;
            }
LABEL_344:
            sub_1BC326C(ReturnTypeByQuestId, v67, v78);
          }
LABEL_250:
          v202 = 0;
          indexb = v184;
          while ( 1 )
          {
            v203 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v203 = BalanceConfig_TypeInfo;
            }
            v204 = v203->static_fields;
            if ( v202 >= v204->SupportDeckMemberMax )
              break;
            if ( !v203->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v203);
              v204 = BalanceConfig_TypeInfo->static_fields;
            }
            v206 = v204->FixMainSupportDeckNum;
            v205 = v204->FixEventSupportDeckNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            ReturnTypeByQuestId = System_Math__Max_63870684(v206, v205, 0LL);
            v191 = ReturnTypeByQuestId;
            if ( (int)v288 >= 1 )
            {
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
                if ( !v186 )
                  break;
                if ( v207 >= *(unsigned int *)(v186 + 24) )
                  goto LABEL_344;
                v209 = *p_followerSelectItemOption;
                v210 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 180LL);
                v211 = v292->fields.classBoardMaxDictionary;
                supportDeckIda = *(_DWORD *)(v186 + 32 + 4 * v207);
                v184 = indexb;
                v212 = (FollowerSelectItemListViewItem_o *)sub_1BC3254(FollowerSelectItemListViewItem_TypeInfo);
                FollowerSelectItemListViewItem___ctor(
                  v212,
                  v208,
                  v210 - v202,
                  indexb,
                  v202,
                  0,
                  v209,
                  0,
                  supportDeckIda,
                  v191,
                  v211,
                  1,
                  0,
                  0,
                  0,
                  v261);
                ReturnTypeByQuestId = (__int64)v292->fields.mixItemList;
                if ( !ReturnTypeByQuestId )
                  break;
                v213 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v214 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v213 )
                  break;
                v215 = *(int *)(ReturnTypeByQuestId + 24);
                if ( (unsigned int)v215 >= *(_DWORD *)(v213 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    (Il2CppObject *)v212,
                    *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v214[4] + 192LL) + 112LL));
                }
                else
                {
                  v216 = v213 + 8 * v215;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v215 + 1;
                  *(_QWORD *)(v216 + 32) = v212;
                  ReturnTypeByQuestId = sub_1BC2FAC(v216 + 32);
                }
                ++v207;
                --v191;
                if ( v288 == v207 )
                  goto LABEL_271;
              }
              goto LABEL_343;
            }
LABEL_271:
            v140 = v292;
            ++v202;
          }
          if ( v268 )
          {
            ReturnTypeByQuestId = BasicHelper__IsNullOrEmpty(
                                    (System_Collections_ICollection_o *)v184->fields.userSvtGrandHash,
                                    0LL);
            if ( (ReturnTypeByQuestId & 1) == 0 )
            {
              userSvtGrandHash = v184->fields.userSvtGrandHash;
              if ( !userSvtGrandHash )
                goto LABEL_343;
              v218 = userSvtGrandHash->max_length;
              if ( v218 >= 1 )
              {
                v219 = 0;
                while ( v219 < v218 )
                {
                  if ( !*p_mixItemList )
                    goto LABEL_343;
                  v220 = userSvtGrandHash->m_Items[v219];
                  if ( !v220 )
                    goto LABEL_343;
                  v221 = (*p_mixItemList)->fields._size;
                  v222 = v140->fields.classBoardMaxDictionary;
                  followerSelectItemOption = v140->fields.followerSelectItemOption;
                  grandGraphId = v220->fields.grandGraphId;
                  v225 = (FollowerSelectItemListViewItem_o *)sub_1BC3254(FollowerSelectItemListViewItem_TypeInfo);
                  FollowerSelectItemListViewItem___ctor(
                    v225,
                    v221,
                    0,
                    indexb,
                    0,
                    0,
                    followerSelectItemOption,
                    0,
                    0,
                    v191,
                    v222,
                    1,
                    0,
                    1,
                    grandGraphId,
                    v261);
                  ReturnTypeByQuestId = (__int64)v140->fields.grandItemList;
                  if ( !ReturnTypeByQuestId )
                    goto LABEL_343;
                  v226 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                  v227 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                  if ( !v226 )
                    goto LABEL_343;
                  v228 = *(int *)(ReturnTypeByQuestId + 24);
                  if ( (unsigned int)v228 >= *(_DWORD *)(v226 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                      (Il2CppObject *)v225,
                      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v227[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v229 = v226 + 8 * v228;
                    *(_DWORD *)(ReturnTypeByQuestId + 24) = v228 + 1;
                    *(_QWORD *)(v229 + 32) = v225;
                    ReturnTypeByQuestId = sub_1BC2FAC(v229 + 32);
                  }
                  v218 = userSvtGrandHash->max_length;
                  if ( (int)++v219 >= v218 )
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
          v180 = v267;
          v183 = v278;
          v182 = posb + 1;
          if ( posb + 1 >= *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 724LL) )
            break;
LABEL_289:
          LODWORD(v181) = v180->_1.namespaze;
          ++v183;
        }
        while ( (__int64)v183 < (int)v181 );
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_343;
    if ( DataMasterBase_object__object__long___TryGetSingleEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
           &v293,
           (const MethodInfo_32B16F8 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    {
      ReturnTypeByQuestId = (__int64)v293;
      if ( !v293 )
        goto LABEL_343;
      ReturnTypeByQuestId = UserRecommendFollowerEntity__IsEnableSupport(
                              (UserRecommendFollowerEntity_o *)v293,
                              questIda,
                              phaseCnt,
                              0LL);
      if ( (ReturnTypeByQuestId & 1) != 0 )
      {
        if ( !v293 )
          goto LABEL_343;
        v230 = v293[1].klass;
        ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_343;
        ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !ReturnTypeByQuestId )
          goto LABEL_343;
        ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                         questIda,
                                         (const MethodInfo_32AF070 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_343;
        v231 = QuestEntity__HasFlag_41373164((QuestEntity_o *)ReturnTypeByQuestId, 0x8000000LL, phaseCnt, 0LL);
        ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_343;
        ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserFollowMaster___);
        v291 = (UserFollowMaster_o *)ReturnTypeByQuestId;
        if ( !v230 )
          goto LABEL_343;
        namespaze_low = (unsigned __int64)v230->_1.namespaze;
        if ( (int)namespaze_low >= 1 )
        {
          v233 = 0LL;
          p_byval_arg = &v230->_1.byval_arg;
          do
          {
            namespaze_low = (unsigned int)namespaze_low;
            if ( v231 )
            {
              if ( v233 >= (unsigned int)namespaze_low )
                goto LABEL_344;
              v235 = *((_QWORD *)&p_byval_arg->data + v233);
              if ( !v235 )
                goto LABEL_343;
              if ( *(_DWORD *)(v235 + 36) == 5 )
              {
                ReturnTypeByQuestId = (__int64)v291;
                if ( !v291 )
                  goto LABEL_343;
                ReturnTypeByQuestId = UserFollowMaster__IsFollowUser(v291, *(_QWORD *)(v235 + 16), 0LL);
                if ( (ReturnTypeByQuestId & 1) == 0 )
                  goto LABEL_337;
                namespaze_low = LODWORD(v230->_1.namespaze);
              }
            }
            else
            {
              if ( v233 >= (unsigned int)namespaze_low )
                goto LABEL_344;
              v236 = *((_QWORD *)&p_byval_arg->data + v233);
              if ( !v236 )
                goto LABEL_343;
              if ( *(_DWORD *)(v236 + 36) == 5 )
                goto LABEL_337;
            }
            if ( v233 >= namespaze_low )
              goto LABEL_344;
            v237 = *((_QWORD *)&p_byval_arg->data + v233);
            ReturnTypeByQuestId = sub_1BC30B0(ServantLeaderInfo___TypeInfo, 1LL);
            if ( v233 >= LODWORD(v230->_1.namespaze) )
              goto LABEL_344;
            v238 = *((_QWORD *)&p_byval_arg->data + v233);
            if ( !v238 )
              goto LABEL_343;
            v239 = *(_QWORD *)(v238 + 56);
            if ( !v239 )
              goto LABEL_343;
            if ( !*(_DWORD *)(v239 + 24) )
              goto LABEL_344;
            v240 = *(_QWORD *)(v239 + 32);
            if ( !v240 )
              goto LABEL_343;
            v241 = ReturnTypeByQuestId;
            if ( !ReturnTypeByQuestId )
              goto LABEL_343;
            v242 = *(_QWORD *)(v240 + 56);
            if ( v242 )
            {
              ReturnTypeByQuestId = sub_1BC3144(v242, *(_QWORD *)(*(_QWORD *)ReturnTypeByQuestId + 64LL));
              if ( !ReturnTypeByQuestId )
                goto LABEL_346;
            }
            if ( !*(_DWORD *)(v241 + 24) )
              goto LABEL_344;
            *(_QWORD *)(v241 + 32) = v242;
            ReturnTypeByQuestId = sub_1BC2FAC(v241 + 32);
            if ( !v237 )
              goto LABEL_343;
            *(_QWORD *)(v237 + 40) = v241;
            ReturnTypeByQuestId = sub_1BC2FAC(v237 + 40);
            if ( v233 >= LODWORD(v230->_1.namespaze) )
              goto LABEL_344;
            ReturnTypeByQuestId = *((_QWORD *)&p_byval_arg->data + v233);
            if ( !ReturnTypeByQuestId )
              goto LABEL_343;
            FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0LL);
            if ( !*p_recommendItemList )
              goto LABEL_343;
            if ( v233 >= LODWORD(v230->_1.namespaze) )
              goto LABEL_344;
            v243 = (*p_recommendItemList)->fields._size;
            v244 = (FollowerInfo_o *)*((_QWORD *)&p_byval_arg->data + v233);
            v245 = v292->fields.followerSelectItemOption;
            v246 = v292->fields.classBoardMaxDictionary;
            v247 = (FollowerSelectItemListViewItem_o *)sub_1BC3254(FollowerSelectItemListViewItem_TypeInfo);
            FollowerSelectItemListViewItem___ctor(v247, v243, 0, v244, 0, 0, v245, 0, 0, 0, v246, 1, 1, 0, 0, v261);
            ReturnTypeByQuestId = (__int64)v292->fields.recommendItemList;
            if ( !ReturnTypeByQuestId )
              goto LABEL_343;
            v248 = *(_QWORD *)(ReturnTypeByQuestId + 16);
            v249 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++*(_DWORD *)(ReturnTypeByQuestId + 28);
            if ( !v248 )
              goto LABEL_343;
            v250 = *(int *)(ReturnTypeByQuestId + 24);
            if ( (unsigned int)v250 >= *(_DWORD *)(v248 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                (Il2CppObject *)v247,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v249[4] + 192LL) + 112LL));
            }
            else
            {
              v251 = v248 + 8 * v250;
              *(_DWORD *)(ReturnTypeByQuestId + 24) = v250 + 1;
              *(_QWORD *)(v251 + 32) = v247;
              sub_1BC2FAC(v251 + 32);
            }
            ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            }
            if ( (__int64)v233 >= *(int *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 724LL) )
              break;
LABEL_337:
            LODWORD(namespaze_low) = v230->_1.namespaze;
            ++v233;
          }
          while ( (__int64)v233 < (int)namespaze_low );
        }
      }
    }
  }
LABEL_338:
  ReturnTypeByQuestId = (__int64)v292->fields.refreshButtonObject;
  if ( !ReturnTypeByQuestId )
    goto LABEL_343;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)ReturnTypeByQuestId,
    !v292->fields.isRefreshBtnHide,
    0LL);
  v253 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v253 = FollowerSelectItemListViewManager_TypeInfo;
  }
  FollowerSelectItemListViewManager__SetEmptyMessage(v292, v253->static_fields->followerClassId, v252);
  FollowerSelectItemListViewManager__SortClass(
    v292,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    v254);
  ListViewManager__SortItem((ListViewManager_o *)v292, -1, 0, -1, 0LL);
  FollowerSelectItemListViewManager__SetFilterButtonImage(v292, v255);
  scrollView = v292->fields.scrollView;
  if ( !scrollView )
    goto LABEL_343;
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

  if ( (byte_4AFCBA5 & 1) == 0 )
  {
    sub_1BC3008(&FollowerSelectItemListViewManager_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_6725/*"FollowerSelectClass"*/, v2);
    sub_1BC3008(&StringLiteral_6728/*"FollowerSelectOldClass"*/, v3);
    byte_4AFCBA5 = 1;
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
    sub_1BC3264(v4, v1);
  }
  ListViewSort__DeleteContinueData((ListViewSort_o *)v4, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6725/*"FollowerSelectClass"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6728/*"FollowerSelectOldClass"*/, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FollowerSelectItemListViewManager__DestroyList_31704696(this, 0LL, v2);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList_31704696(
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
  System_Int32_array *OngoingQuestTargetEventIds; // x0
  int32_t questId; // w20
  int32_t questPhase; // w21
  System_Int32_array *v23; // x22
  EventUpValSetupInfo_o *v24; // x23
  void *p_setupInfo; // x0
  ClassButtonControlComponent_o *classButtonControl; // x20
  ClassButtonControlComponent_CallbackFunc_o *v27; // x21
  const MethodInfo *v28; // x4
  struct ListViewSort_o *sort; // x8
  int32_t InitialDisplayClass; // w0
  FollowerSelectItemListViewManager_c *v31; // x8
  int32_t v32; // w20
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
  struct ListViewSort_o *v34; // x8
  FollowerSelectItemListViewManager_o *v35; // x0
  int monitor; // w20
  const MethodInfo *v37; // x1
  FollowerSelectItemListViewManager_c *v38; // x0
  FollowerSelectItemListViewManager_o *v39; // x0
  int monitor_high; // w20
  FollowerSelectItemListViewManager_c *v41; // x0
  ClassButtonControlComponent_o *v42; // x20
  const MethodInfo *v43; // x2
  struct EventUpValSetupInfo_o *setupInfo; // x8
  System_Int32_array *v45; // x1
  UILabel_o *bonusFilterKindLabel; // x20

  if ( (byte_4AFCBB4 & 1) == 0 )
  {
    sub_1BC3008(&ClassButtonControlComponent_CallbackFunc_TypeInfo, battleSetupInfo);
    sub_1BC3008(&Method_DataManager_GetMaster_EventQuestMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&EventUpValSetupInfo_TypeInfo, v7);
    sub_1BC3008(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v8);
    sub_1BC3008(&FollowerSelectItemListViewManager_TypeInfo, v9);
    sub_1BC3008(&int___TypeInfo, v10);
    sub_1BC3008(&LocalizationManager_TypeInfo, v11);
    sub_1BC3008(&StringLiteral_11591/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/, v12);
    sub_1BC3008(&StringLiteral_6725/*"FollowerSelectClass"*/, v13);
    sub_1BC3008(&StringLiteral_6728/*"FollowerSelectOldClass"*/, v14);
    byte_4AFCBB4 = 1;
  }
  if ( battleSetupInfo )
  {
    this->fields.questId = BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
    this->fields.questPhase = battleSetupInfo->fields.questPhase;
    this->fields.questRestrictionInfo = battleSetupInfo->fields.questRestrictionInfo;
    sub_1BC2FAC(&this->fields.questRestrictionInfo);
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
      goto LABEL_49;
    this->fields.sort = (struct ListViewSort_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))LIST_VIEW_SORT->fields.m_target)(
                                                   LIST_VIEW_SORT->fields.original_method_info,
                                                   v18,
                                                   *(_QWORD *)&LIST_VIEW_SORT->fields.extra_arg);
    sub_1BC2FAC(&this->fields.sort);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (EventQuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventQuestMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_49;
    OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                   ReturnTypeByQuestId,
                                   this->fields.questId,
                                   this->fields.questPhase,
                                   0LL,
                                   0LL);
    questId = this->fields.questId;
    questPhase = this->fields.questPhase;
    v23 = OngoingQuestTargetEventIds;
    v24 = (EventUpValSetupInfo_o *)sub_1BC3254(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_40756148(v24, v23, 0, questId, questPhase, 0LL);
    p_setupInfo = &this->fields.setupInfo;
    this->fields.setupInfo = v24;
  }
  else
  {
    this->fields.setupInfo = 0LL;
    sub_1BC2FAC(&this->fields.setupInfo);
    p_setupInfo = &this->fields.questRestrictionInfo;
    this->fields.questRestrictionInfo = 0LL;
  }
  sub_1BC2FAC(p_setupInfo);
  classButtonControl = this->fields.classButtonControl;
  v27 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1BC3254(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_49;
  ClassButtonControlComponent__init(
    classButtonControl,
    v27,
    this->fields.questId,
    this->fields.questPhase,
    this->fields.questRestrictionInfo,
    0LL);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_49;
  InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                          this,
                          this->fields.questId,
                          this->fields.questPhase,
                          sort->fields.isRequestLoad,
                          v28);
  v31 = FollowerSelectItemListViewManager_TypeInfo;
  v32 = InitialDisplayClass;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v31 = FollowerSelectItemListViewManager_TypeInfo;
  }
  static_fields = v31->static_fields;
  static_fields->followerClassId = v32;
  *(_QWORD *)&static_fields->lastSelectedQuestId = *(_QWORD *)&this->fields.questId;
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.sort;
  if ( !ReturnTypeByQuestId )
    goto LABEL_49;
  ListViewSort__Load((ListViewSort_o *)ReturnTypeByQuestId, 0LL);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.sort;
  if ( !ReturnTypeByQuestId )
    goto LABEL_49;
  ListViewSort__Save((ListViewSort_o *)ReturnTypeByQuestId, 0LL);
  v34 = this->fields.sort;
  if ( !v34 )
    goto LABEL_49;
  if ( v34->fields.isRequestSave )
  {
    v35 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v35 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor = (int)v35->fields.sort->monitor;
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(v35, v16) )
    {
      v38 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v38 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6725/*"FollowerSelectClass"*/, v38->static_fields->followerClassId, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
    v39 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v39 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor_high = HIDWORD(v39->fields.sort->monitor);
    if ( monitor_high != FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(v39, v37) )
    {
      v41 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v41 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(
        (System_String_o *)StringLiteral_6728/*"FollowerSelectOldClass"*/,
        v41->static_fields->oldFollowerClassId,
        0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
  this->fields.originalItemList = 0LL;
  sub_1BC2FAC(&this->fields.originalItemList);
  this->fields.mixItemList = 0LL;
  sub_1BC2FAC(&this->fields.mixItemList);
  this->fields.recommendItemList = 0LL;
  sub_1BC2FAC(&this->fields.recommendItemList);
  this->fields.grandItemList = 0LL;
  sub_1BC2FAC(&this->fields.grandItemList);
  this->fields.isInput = 0;
  ReturnTypeByQuestId = (EventQuestMaster_o *)FollowerSelectItemListViewManager_TypeInfo;
  v42 = this->fields.classButtonControl;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  if ( !v42 )
    goto LABEL_49;
  ClassButtonControlComponent__setCursor(
    v42,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  setupInfo = this->fields.setupInfo;
  v45 = setupInfo ? setupInfo->fields.eventIdList : (System_Int32_array *)sub_1BC30B0(int___TypeInfo, 0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, v45, v43);
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.bonusFilterKindButton;
  if ( !ReturnTypeByQuestId )
    goto LABEL_49;
  ReturnTypeByQuestId = (EventQuestMaster_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)ReturnTypeByQuestId,
                                                0LL);
  if ( !ReturnTypeByQuestId )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)ReturnTypeByQuestId,
    this->fields.isBonusFilterEnable,
    0LL);
  if ( this->fields.isBonusFilterEnable )
  {
    bonusFilterKindLabel = this->fields.bonusFilterKindLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ReturnTypeByQuestId = (EventQuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11591/*"SERVANT_SORT_BONUS_FILTER_BUTTON_TITLE"*/, 0LL);
    if ( bonusFilterKindLabel )
    {
      UILabel__set_text(bonusFilterKindLabel, (System_String_o *)ReturnTypeByQuestId, 0LL);
      goto LABEL_45;
    }
LABEL_49:
    sub_1BC3264(ReturnTypeByQuestId, v16);
  }
LABEL_45:
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.tutorialListViewObject;
  if ( !ReturnTypeByQuestId )
    goto LABEL_49;
  ((void (__fastcall *)(EventQuestMaster_o *, Il2CppMethodPointer))ReturnTypeByQuestId->klass->vtable._4_ForForceDerived.method)(
    ReturnTypeByQuestId,
    ReturnTypeByQuestId->klass->vtable._5_preProcess.methodPtr);
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.tutorialListViewObject;
  if ( !ReturnTypeByQuestId )
    goto LABEL_49;
  ReturnTypeByQuestId = (EventQuestMaster_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)ReturnTypeByQuestId,
                                                0LL);
  if ( !ReturnTypeByQuestId )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ReturnTypeByQuestId, 0, 0LL);
  this->fields.isGetRecommendSupport = 0;
  this->fields.followerSelectItemOption = 0LL;
  sub_1BC2FAC(&this->fields.followerSelectItemOption);
}


void __fastcall FollowerSelectItemListViewManager__EndClassCompatibilityMenu(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4AFCBC3 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4AFCBC3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v3);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__EndCloseClassBoardEffectListDialog(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4AFCBD4 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4AFCBD4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v4);
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

  if ( (byte_4AFCBC5 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isDecide);
    sub_1BC3008(&Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4AFCBC5 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__,
    0LL);
  if ( !Instance )
LABEL_8:
    sub_1BC3264(sort, v8);
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
  __int64 v17; // x2
  struct System_Int32_array *v18; // x8
  Il2CppObject *v19; // x8

  if ( (byte_4AFCBAF & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestPhaseMaster___, *(_QWORD *)&questId);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantClassMaster___, v8);
    sub_1BC3008(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4AFCBAF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v18 = v14->fields.classIds;
  if ( !v18 )
    goto LABEL_17;
  if ( !v18->max_length )
    sub_1BC326C(Instance, v12, v17);
  if ( !Instance )
LABEL_17:
    sub_1BC3264(Instance, v12);
  v19 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          v18->m_Items[1],
          (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  result = defaultValue;
  if ( v19 )
    return HIDWORD(v19[4].klass);
  return result;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_c *v2; // x0

  if ( (byte_4AFCBB8 & 1) == 0 )
  {
    sub_1BC3008(&FollowerSelectItemListViewManager_TypeInfo, method);
    byte_4AFCBB8 = 1;
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

  if ( (byte_4AFCBD5 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    byte_4AFCBD5 = 1;
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
  FollowerSelectItemListViewManager_o *v8; // x22
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t PlayerPrefsFollowerClassId; // w21
  FollowerSelectItemListViewManager_c *v16; // x0
  Il2CppObject *classButtonControl; // x0
  _BOOL8 HasDisableClassTabs; // x0
  const MethodInfo *v19; // x3
  QuestPhaseEntity_o *Entity; // x0
  int32_t AdvantageClassId; // w0
  _BOOL8 v22; // x0
  const MethodInfo *v23; // x1
  _BOOL8 AdvantageClassAuto; // x0
  const MethodInfo *v25; // x3
  int32_t v26; // w22
  _BOOL8 IsSameQuestAndPhase; // x0
  const MethodInfo *v28; // x4
  RecommendSupportQuestEntity_o *v30; // [xsp+0h] [xbp-40h] BYREF
  __int64 enableCount; // [xsp+8h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_4AFCBAD & 1) == 0 )
  {
    sub_1BC3008(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&questId);
    sub_1BC3008(&Method_DataManager_GetMasterData_RecommendSupportQuestMaster___, v9);
    sub_1BC3008(&Method_DataManager_GetMaster_QuestPhaseMaster___, v10);
    sub_1BC3008(&DataManager_TypeInfo, v11);
    sub_1BC3008(&FollowerSelectItemListViewManager_TypeInfo, v12);
    sub_1BC3008(&OptionManager_TypeInfo, v13);
    this = (FollowerSelectItemListViewManager_o *)sub_1BC3008(
                                                    &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                    v14);
    byte_4AFCBAD = 1;
  }
  v30 = 0LL;
  enableCount = 0LL;
  if ( isInitialize )
  {
    PlayerPrefsFollowerClassId = FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(
                                   this,
                                   *(const MethodInfo **)&questId);
  }
  else
  {
    v16 = FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v16 = FollowerSelectItemListViewManager_TypeInfo;
    }
    PlayerPrefsFollowerClassId = v16->static_fields->followerClassId;
  }
  classButtonControl = (Il2CppObject *)v8->fields.classButtonControl;
  if ( !classButtonControl )
    goto LABEL_35;
  HasDisableClassTabs = ClassButtonControlComponent__HasDisableClassTabs(
                          (ClassButtonControlComponent_o *)classButtonControl,
                          (int32_t *)&enableCount + 1,
                          (int32_t *)&enableCount,
                          0LL);
  if ( HasDisableClassTabs )
  {
    if ( FollowerSelectItemListViewManager__IsSameQuestAndPhase(
           (FollowerSelectItemListViewManager_o *)HasDisableClassTabs,
           questId,
           questPhase,
           v19) )
    {
      return PlayerPrefsFollowerClassId;
    }
    if ( (_DWORD)enableCount == 1 )
      PlayerPrefsFollowerClassId = HIDWORD(enableCount);
    else
      PlayerPrefsFollowerClassId = 9;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    classButtonControl = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( classButtonControl )
    {
      Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)classButtonControl, questId, questPhase, 0LL);
      if ( Entity )
      {
        AdvantageClassId = QuestPhaseEntity__GetAdvantageClassId(Entity, 0LL);
        if ( AdvantageClassId != -1 )
          return AdvantageClassId;
      }
      return PlayerPrefsFollowerClassId;
    }
LABEL_35:
    sub_1BC3264(classButtonControl, *(_QWORD *)&questId);
  }
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(PlayerPrefsFollowerClassId, 0LL) )
  {
    classButtonControl = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !classButtonControl )
      goto LABEL_35;
    classButtonControl = DataManager__GetMasterData_object_(
                           (DataManager_o *)classButtonControl,
                           (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_RecommendSupportQuestMaster___);
    if ( !classButtonControl )
      goto LABEL_35;
    v22 = RecommendSupportQuestMaster__TryGetEntity(
            (RecommendSupportQuestMaster_o *)classButtonControl,
            &v30,
            questId,
            questPhase,
            0LL);
    if ( !v22 )
      PlayerPrefsFollowerClassId = FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(
                                     (FollowerSelectItemListViewManager_o *)v22,
                                     v23);
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  AdvantageClassAuto = OptionManager__GetAdvantageClassAuto(0LL);
  v26 = PlayerPrefsFollowerClassId;
  if ( AdvantageClassAuto )
  {
    IsSameQuestAndPhase = FollowerSelectItemListViewManager__IsSameQuestAndPhase(
                            (FollowerSelectItemListViewManager_o *)AdvantageClassAuto,
                            questId,
                            questPhase,
                            v25);
    v26 = PlayerPrefsFollowerClassId;
    if ( !IsSameQuestAndPhase )
      v26 = FollowerSelectItemListViewManager__GetAdvantageClassId(
              (FollowerSelectItemListViewManager_o *)IsSameQuestAndPhase,
              questId,
              questPhase,
              PlayerPrefsFollowerClassId,
              v28);
  }
  if ( ServantClassEntity__IsValidClassOnSellectSupport(v26, 0LL) )
    return v26;
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

  if ( (byte_4AFCBB6 & 1) == 0 )
  {
    sub_1BC3008(&FollowerSelectItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4AFCBB6 = 1;
  }
  result = (FollowerSelectItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4AFCBD0 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    byte_4AFCBD0 = 1;
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

  if ( (byte_4AFCBD1 & 1) == 0 )
  {
    sub_1BC3008(&FollowerSelectItemListViewItem_TypeInfo, userId);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    byte_4AFCBD1 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1BC3264(itemList, userId);
  v10 = 0;
  while ( v10 < itemList->fields._size )
  {
    Item = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                 itemList,
                                                 v10,
                                                 (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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


int32_t __fastcall FollowerSelectItemListViewManager__GetItemIndex_31729064(
        FollowerSelectItemListViewManager_o *this,
        int64_t userId,
        int32_t classId,
        int32_t deckId,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v14; // w24
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8
  int monitor_high; // w8

  if ( (byte_4AFCBD2 & 1) == 0 )
  {
    sub_1BC3008(&FollowerSelectItemListViewItem_TypeInfo, userId);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    byte_4AFCBD2 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_20:
    sub_1BC3264(itemList, userId);
  v14 = 0;
  while ( v14 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v14,
             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
          if ( grandGraphId < 1 )
          {
            monitor_high = HIDWORD(Item[7].monitor);
            if ( monitor_high )
              monitor_high = (int)Item[7].monitor;
            if ( monitor_high == classId && LODWORD(Item[16].monitor) == deckId )
              return v14;
          }
          else if ( LODWORD(Item[15].klass) == grandGraphId )
          {
            return v14;
          }
        }
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v14;
    if ( !itemList )
      goto LABEL_20;
  }
  return -1;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AFCBB1 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_6725/*"FollowerSelectClass"*/, method);
    byte_4AFCBB1 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6725/*"FollowerSelectClass"*/, 0, 0LL);
}


int32_t __fastcall FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AFCBB2 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_6728/*"FollowerSelectOldClass"*/, method);
    byte_4AFCBB2 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6728/*"FollowerSelectOldClass"*/, 0, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewManager_c *v2; // x0
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v4; // x8

  if ( (byte_4AFCBA6 & 1) == 0 )
  {
    sub_1BC3008(&FollowerSelectItemListViewManager_TypeInfo, v1);
    byte_4AFCBA6 = 1;
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
    sub_1BC3264(v2, v1);
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

  if ( (byte_4AFCBAE & 1) == 0 )
  {
    sub_1BC3008(&BattleData_TypeInfo, *(_QWORD *)&questId);
    sub_1BC3008(&FollowerSelectItemListViewManager_TypeInfo, v6);
    byte_4AFCBAE = 1;
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
  FollowerSelectItemListViewManager_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *followerSelectItemOption; // x8
  int m_CancellationTokenSource; // w23
  int32_t v13; // w20
  __int64 methodPtr_low; // x10
  FollowerSelectItemListViewManager_c *v15; // x0
  int32_t followerClassId; // w20
  int v17; // w23
  int32_t v18; // w20
  __int64 v19; // x10
  int v20; // w23
  int32_t v21; // w20
  __int64 v22; // x10

  v6 = this;
  if ( (byte_4AFCBB3 & 1) == 0 )
  {
    sub_1BC3008(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&friendPointUpVal);
    sub_1BC3008(&FollowerSelectItemListViewItem_TypeInfo, v7);
    sub_1BC3008(&FollowerSelectItemListViewManager_TypeInfo, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    this = (FollowerSelectItemListViewManager_o *)sub_1BC3008(
                                                    &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                    v10);
    byte_4AFCBB3 = 1;
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
    v13 = 0;
    do
    {
      this = (FollowerSelectItemListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)this,
                                                      v13,
                                                      (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (FollowerSelectItemListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != FollowerSelectItemListViewItem_TypeInfo )
      {
        break;
      }
      FollowerSelectItemListViewItem__Modify(
        (FollowerSelectItemListViewItem_o *)this,
        *(const MethodInfo **)&friendPointUpVal);
      if ( m_CancellationTokenSource == ++v13 )
        goto LABEL_13;
      this = (FollowerSelectItemListViewManager_o *)v6->fields.itemList;
    }
    while ( this );
LABEL_35:
    sub_1BC3264(this, *(_QWORD *)&friendPointUpVal);
  }
LABEL_13:
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
    this = (FollowerSelectItemListViewManager_o *)v6->fields.originalItemList;
    if ( !this )
      goto LABEL_35;
    v17 = (int)this->fields.m_CancellationTokenSource;
    if ( v17 >= 1 )
    {
      v18 = 0;
      do
      {
        this = (FollowerSelectItemListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this,
                                                        v18,
                                                        (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !this )
          break;
        v19 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v19
          || (FollowerSelectItemListViewItem_c *)this->klass->_2.typeHierarchy[v19 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          break;
        }
        FollowerSelectItemListViewItem__Modify(
          (FollowerSelectItemListViewItem_o *)this,
          *(const MethodInfo **)&friendPointUpVal);
        if ( v17 == ++v18 )
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
    v20 = (int)this->fields.m_CancellationTokenSource;
    if ( v20 >= 1 )
    {
      v21 = 0;
      do
      {
        this = (FollowerSelectItemListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this,
                                                        v21,
                                                        (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !this )
          break;
        v22 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v22
          || (FollowerSelectItemListViewItem_c *)this->klass->_2.typeHierarchy[v22 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          break;
        }
        FollowerSelectItemListViewItem__Modify(
          (FollowerSelectItemListViewItem_o *)this,
          *(const MethodInfo **)&friendPointUpVal);
        if ( v20 == ++v21 )
          return;
        this = (FollowerSelectItemListViewManager_o *)v6->fields.mixItemList;
      }
      while ( this );
      goto LABEL_35;
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

  if ( (byte_4AFCBCB & 1) == 0 )
  {
    sub_1BC3008(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classPos);
    sub_1BC3008(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v5);
    sub_1BC3008(&FollowerSelectItemListViewManager_TypeInfo, v6);
    byte_4AFCBCB = 1;
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
          v16 = (_QWORD *)sub_1BC3020(Method_FollowerSelectItemListViewManager_OnChangeClass__);
        v17 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v16, v16[4]);
        OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0LL);
        if ( (v9 & 1) != 0 )
          FollowerSelectItemListViewManager__OnClickRecommend(this, classPos, v18);
        else
          FollowerSelectItemListViewManager__SortClass(this, classPos, v18);
        return;
      }
    }
LABEL_22:
    sub_1BC3264(IsRecommendSupportGroupType, v8);
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

  if ( (byte_4AFCBC4 & 1) == 0 )
  {
    sub_1BC3008(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__, v3);
    sub_1BC3008(&Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4AFCBC4 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BC3020(Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
    isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
    equipBonusFilterEventIds = this->fields.equipBonusFilterEventIds;
    sort = this->fields.sort;
    v13 = (CommonUI_o *)Instance;
    v14 = (ServantBonusFilterSelectMenu_CallbackFunc_o *)sub_1BC3254(ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantBonusFilterSelectMenu_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__,
      0LL);
    if ( !v13 )
      sub_1BC3264(v15, v16);
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

  if ( (byte_4AFCBCF & 1) == 0 )
  {
    sub_1BC3008(&Method_FollowerSelectItemListViewManager_OnClickChangeSkill__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v4);
    byte_4AFCBCF = 1;
  }
  if ( this->fields.isInput )
  {
    v5 = Method_FollowerSelectItemListViewManager_OnClickChangeSkill__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickChangeSkill__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BC3020(Method_FollowerSelectItemListViewManager_OnClickChangeSkill__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    displaySkill = this->fields.displaySkill;
    if ( (unsigned int)displaySkill <= 2 )
      this->fields.displaySkill = dword_C164E0[displaySkill];
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
                                                                    (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
        if ( !ObjectList )
          break;
        FollowerSelectItemListViewObject__ChangeDisplaySkill(
          (FollowerSelectItemListViewObject_o *)ObjectList,
          this->fields.displaySkill,
          0LL);
        if ( ++v12 >= v11->fields._size )
          return;
      }
LABEL_14:
      sub_1BC3264(ObjectList, v10);
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

  if ( (byte_4AFCBC2 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__, v3);
    sub_1BC3008(&Method_FollowerSelectItemListViewManager_OnClickClassComparibility__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4AFCBC2 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_FollowerSelectItemListViewManager_OnClickClassComparibility__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickClassComparibility__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BC3020(Method_FollowerSelectItemListViewManager_OnClickClassComparibility__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__,
      0LL);
    if ( !Instance )
      sub_1BC3264(v10, v11);
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

  if ( (byte_4AFCBCC & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___, *(_QWORD *)&classPos);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(
      &Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__,
      v6);
    sub_1BC3008(&FollowerSelectItemListViewManager_TypeInfo, v7);
    byte_4AFCBCC = 1;
  }
  entity = 0LL;
  if ( this->fields.isGetRecommendSupport )
    goto LABEL_4;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
  if ( !Master_object )
    goto LABEL_16;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          (const MethodInfo_32B16F8 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    goto LABEL_12;
  Master_object = entity;
  if ( !entity )
LABEL_16:
    sub_1BC3264(Master_object, v9);
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
    sub_1BC2FAC(&this->fields.callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      14LL,
      0xFFFFFFFFLL,
      0LL,
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

  if ( (byte_4AFCBC1 & 1) == 0 )
  {
    sub_1BC3008(&ClassButtonControlComponent_TypeInfo, method);
    byte_4AFCBC1 = 1;
  }
  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0LL;
      v4 = sub_1BC2FAC(&this->fields.callbackFunc);
      classButtonControl = this->fields.classButtonControl;
      if ( !classButtonControl )
        sub_1BC3264(v4, v5);
      currentCursor = classButtonControl->fields.currentCursor;
      if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      if ( ClassButtonControlComponent__IsRecommendSupportGroupType(currentCursor, 0LL) )
        v8 = 13LL;
      else
        v8 = 7LL;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        v8,
        0xFFFFFFFFLL,
        0LL,
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
    v5 = sub_1BC2FAC(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1BC3264(v5, v6);
      Index = ListViewObject__get_Index(obj, 0LL);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        0LL,
        Index,
        0LL,
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

  if ( (byte_4AFCBC9 & 1) == 0 )
  {
    sub_1BC3008(&Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__, method);
    byte_4AFCBC9 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BC3264(v5, v6);
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

  if ( (byte_4AFCBC7 & 1) == 0 )
  {
    sub_1BC3008(&OtherUserSortDialog_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&ClassButtonControlComponent_TypeInfo, v3);
    sub_1BC3008(&Method_FollowerSelectItemListViewManager_CloseSortDialog__, v4);
    sub_1BC3008(&Method_FollowerSelectItemListViewManager_OnClickSortKind__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4AFCBC7 = 1;
  }
  if ( this->fields.isInput )
  {
    v7 = Method_FollowerSelectItemListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BC3020(Method_FollowerSelectItemListViewManager_OnClickSortKind__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v16 = this->fields.sort;
        v17 = (CommonUI_o *)Instance;
        v18 = (OtherUserSortDialog_CallbackFunc_o *)sub_1BC3254(OtherUserSortDialog_CallbackFunc_TypeInfo);
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
    sub_1BC3264(IsRecommendSupportGroupType, v10);
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
    v5 = sub_1BC2FAC(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1BC3264(v5, v6);
      Index = ListViewObject__get_Index(obj, 0LL);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        5LL,
        Index,
        0LL,
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
    v5 = sub_1BC2FAC(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1BC3264(v5, v6);
      Index = ListViewObject__get_Index(obj, 0LL);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        1LL,
        Index,
        0LL,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OnLongPushServantEquip(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  ListViewObject_o *v6; // x22
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 Index; // x2
  __int64 dispObject_low; // x3

  if ( (byte_4AFCBBF & 1) == 0 )
  {
    sub_1BC3008(&FollowerSelectItemListViewObject_TypeInfo, obj);
    byte_4AFCBBF = 1;
  }
  if ( this->fields.isInput )
  {
    if ( obj
      && (methodPtr_low = LOBYTE(FollowerSelectItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(obj->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      v6 = (FollowerSelectItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewObject_TypeInfo
         ? obj
         : 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    v8 = sub_1BC2FAC(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1BC3264(v8, v9);
      Index = (unsigned int)ListViewObject__get_Index(obj, 0LL);
      if ( v6 )
        dispObject_low = LODWORD(v6[1].fields.dispObject);
      else
        dispObject_low = 0LL;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        6LL,
        Index,
        dispObject_low,
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

  if ( (byte_4AFCBC0 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_12524/*"ScrollViewEnabled"*/, obj);
    byte_4AFCBC0 = 1;
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
        (System_String_o *)StringLiteral_12524/*"ScrollViewEnabled"*/,
        0.1,
        0LL);
    }
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    tutorialListViewObject = (UnityEngine_Component_o *)sub_1BC2FAC(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
          callbackFunc->fields.original_method_info,
          (unsigned int)kind,
          Index,
          0LL,
          *(_QWORD *)&callbackFunc->fields.extra_arg);
        return;
      }
LABEL_14:
      sub_1BC3264(tutorialListViewObject, obj);
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

  if ( (byte_4AFCBBE & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFCBBE = 1;
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
              sub_1BC2FAC(&this->fields.callbackFunc2);
              if ( callbackFunc2 )
                ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
                  callbackFunc2->fields.original_method_info,
                  *(_QWORD *)&callbackFunc2->fields.extra_arg);
              return;
            }
          }
        }
      }
      sub_1BC3264(tutorialListViewObject, v7);
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
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *itemList; // x21
  int32_t Index; // w0
  Il2CppObject *Item; // x0
  FollowerSelectItemListViewItem_o *v21; // x20
  __int64 methodPtr_low; // x10
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  Il2CppObject *Master_object; // x21
  const MethodInfo *v28; // x1
  int32_t scrollView; // w24
  __int64 v30; // x2
  int32_t v31; // w21
  FollowerSelectItemListViewManager_o *v32; // x25
  struct FollowerInfo_o *followerInfo; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x27
  int max_length; // w8
  unsigned int v36; // w28
  ClassBoardInfo_o *v37; // x22
  ClassBoardInfo_o *v38; // x23
  ClassBoardInfo_o *v39; // x26
  long double inited; // q0
  _QWORD *v41; // x24
  __int64 v42; // x8
  __int64 v43; // x0
  __int64 v44; // x0
  long double v45; // q0
  _QWORD *v46; // x24
  __int64 v47; // x8
  __int64 v48; // x0
  __int64 v49; // x0
  Il2CppObject *Instance; // x24
  System_Action_o *v51; // x25
  struct FollowerInfo_o *v52; // x8

  v4 = this;
  if ( (byte_4AFCBD3 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, obj);
    sub_1BC3008(&Method_System_Array_Empty_int___, v5);
    sub_1BC3008(&ClassBoardInfo_TypeInfo, v6);
    sub_1BC3008(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_1BC3008(&DataManager_TypeInfo, v10);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_int___, v12);
    sub_1BC3008(&FollowerSelectItemListViewItem_TypeInfo, v13);
    sub_1BC3008(&Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__, v14);
    sub_1BC3008(&Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v16);
    this = (FollowerSelectItemListViewManager_o *)sub_1BC3008(
                                                    &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                    v17);
    byte_4AFCBD3 = 1;
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
                 (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Item )
          return;
        v21 = (FollowerSelectItemListViewItem_o *)Item;
        methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (FollowerSelectItemListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          return;
        }
        if ( LOBYTE(Item[10].monitor) )
        {
          v23 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
          if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 83) & 2) != 0 )
            v23 = (_QWORD *)sub_1BC3020(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
          v24 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v23, v23[4]);
          OverwriteAssetSoundName__PlaySystemSe(v24, 2, 0, 0LL);
          return;
        }
        v4->fields.isInput = 0;
        v25 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
        if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 83) & 2) != 0 )
          v25 = (_QWORD *)sub_1BC3020(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
        v26 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v25, v25[4]);
        OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantMaster___);
        this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewItem__get_SvtId(v21, v28);
        if ( Master_object )
        {
          this = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                          (int32_t)this,
                                                          (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            scrollView = (int32_t)this->fields.scrollView;
            this = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( this )
            {
              this = (FollowerSelectItemListViewManager_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                                              (ClassBoardClassMaster_o *)this,
                                                              scrollView,
                                                              0LL);
              v31 = (int)this;
              if ( (_DWORD)this )
              {
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                this = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
                if ( !this )
                  goto LABEL_67;
                this = (FollowerSelectItemListViewManager_o *)ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
                                                                (ClassBoardBaseMaster_o *)this,
                                                                v31,
                                                                0LL);
                v32 = this;
              }
              else
              {
                v32 = 0LL;
              }
              followerInfo = v21->fields.followerInfo;
              if ( followerInfo )
              {
                userClassBoardInfo = followerInfo->fields.userClassBoardInfo;
                if ( userClassBoardInfo )
                {
                  max_length = userClassBoardInfo->max_length;
                  if ( max_length < 1 )
                  {
                    v38 = 0LL;
                    v37 = 0LL;
LABEL_45:
                    if ( !v38 )
                    {
                      v38 = (ClassBoardInfo_o *)sub_1BC3254(ClassBoardInfo_TypeInfo);
                      ClassBoardInfo___ctor(v38, 0LL);
                      if ( !v38 )
                        goto LABEL_67;
                      v38->fields.classBoardBaseId = v31;
                      v41 = Method_System_Array_Empty_int___;
                      v42 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v42 )
                      {
                        sub_1C134C8(Method_System_Array_Empty_int___);
                        v42 = v41[7];
                      }
                      v43 = *(_QWORD *)(v42 + 16);
                      if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
                        v43 = sub_1C1346C(inited);
                      if ( !*(_DWORD *)(v43 + 224) )
                        inited = j_il2cpp_runtime_class_init_0(v43);
                      v44 = *(_QWORD *)(v41[7] + 16LL);
                      if ( (*(_BYTE *)(v44 + 309) & 1) == 0 )
                        v44 = sub_1C1346C(inited);
                      v38->fields.squareIds = **(struct System_Int32_array ***)(v44 + 184);
                      sub_1BC2FAC(&v38->fields.squareIds);
                      v46 = Method_System_Array_Empty_int___;
                      v47 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v47 )
                      {
                        sub_1C134C8(Method_System_Array_Empty_int___);
                        v47 = v46[7];
                      }
                      v48 = *(_QWORD *)(v47 + 16);
                      if ( (*(_BYTE *)(v48 + 309) & 1) == 0 )
                        v48 = sub_1C1346C(v45);
                      if ( !*(_DWORD *)(v48 + 224) )
                        v45 = j_il2cpp_runtime_class_init_0(v48);
                      v49 = *(_QWORD *)(v46[7] + 16LL);
                      if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
                        v49 = sub_1C1346C(v45);
                      v38->fields.releasedClassIds = **(struct System_Int32_array ***)(v49 + 184);
                      sub_1BC2FAC(&v38->fields.releasedClassIds);
                    }
LABEL_64:
                    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    v51 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
                    System_Action___ctor(
                      v51,
                      (Il2CppObject *)v4,
                      Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__,
                      0LL);
                    v52 = v21->fields.followerInfo;
                    if ( v52 && Instance )
                    {
                      CommonUI__OpenClassBoardEffectListDialog(
                        (CommonUI_o *)Instance,
                        1,
                        v31,
                        0,
                        v51,
                        1,
                        v38,
                        v37,
                        v21->fields._IsGrandSupport_k__BackingField,
                        v52->fields.followerClassStatistics,
                        0LL);
                      return;
                    }
                  }
                  else
                  {
                    v36 = 0;
                    v37 = 0LL;
                    v38 = 0LL;
                    while ( 1 )
                    {
                      if ( v36 >= max_length )
                        sub_1BC326C(this, obj, v30);
                      v39 = userClassBoardInfo->m_Items[v36];
                      if ( !v39 )
                        break;
                      if ( v39->fields.classBoardBaseId == v31 )
                      {
                        this = (FollowerSelectItemListViewManager_o *)ClassBoardInfo__IsReleasedClassId(
                                                                        v39,
                                                                        scrollView,
                                                                        0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          v38 = v39;
                      }
                      if ( v32 )
                      {
                        if ( v32->fields.m_CachedPtr == v39->fields.classBoardBaseId )
                        {
                          this = (FollowerSelectItemListViewManager_o *)System_Linq_Enumerable__Any_int_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)v39->fields.squareIds,
                                                                          (const MethodInfo_300D4AC *)Method_System_Linq_Enumerable_Any_int___);
                          if ( ((unsigned __int8)this & 1) != 0 )
                            v37 = v39;
                        }
                      }
                      if ( v38 && v37 )
                        goto LABEL_64;
                      max_length = userClassBoardInfo->max_length;
                      if ( (int)++v36 >= max_length )
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
      sub_1BC3264(this, obj);
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
    sub_1BC3264(0LL, method);
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

  if ( (byte_4AFCBBD & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v5);
    sub_1BC3008(&StringLiteral_9854/*"OnMoveEnd"*/, v6);
    byte_4AFCBBD = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = FollowerSelectItemListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_13:
    sub_1BC3264(ObjectList, v9);
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
             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v15 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v12;
      FollowerSelectItemListViewObject__Init_31788524((FollowerSelectItemListViewObject_o *)Item, 4, v15, 0.1, 0LL);
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
      (System_String_o *)StringLiteral_9854/*"OnMoveEnd"*/,
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
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4AFCBBB & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__, v9);
    sub_1BC3008(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v12);
    sub_1BC3008(&StringLiteral_9854/*"OnMoveEnd"*/, v13);
    byte_4AFCBBB = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BC3264(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9854/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      ObjectList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v21.fields._current;
      v18 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BC3264(v19, v20);
      FollowerSelectItemListViewObject__Init_31788524(
        (FollowerSelectItemListViewObject_o *)current,
        mode,
        v18,
        delay,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__RequestListObject_31776080(
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
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4AFCBBC & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__, v7);
    sub_1BC3008(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v10);
    sub_1BC3008(&StringLiteral_9854/*"OnMoveEnd"*/, v11);
    byte_4AFCBBC = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BC3264(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9854/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      ObjectList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v19.fields._current;
      v16 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BC3264(v17, v18);
      FollowerSelectItemListViewObject__Init_31788624((FollowerSelectItemListViewObject_o *)current, mode, v16, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
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

  if ( (byte_4AFCBB5 & 1) == 0 )
  {
    sub_1BC3008(&FollowerSelectItemListViewManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_6725/*"FollowerSelectClass"*/, v3);
    sub_1BC3008(&StringLiteral_6728/*"FollowerSelectOldClass"*/, v4);
    byte_4AFCBB5 = 1;
  }
  sort = this->fields.sort;
  if ( !sort || (ListViewSort__Save(sort, 0LL), (v6 = this->fields.sort) == 0LL) )
    sub_1BC3264(sort, method);
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
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6725/*"FollowerSelectClass"*/, v10->static_fields->followerClassId, 0LL);
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
        (System_String_o *)StringLiteral_6728/*"FollowerSelectOldClass"*/,
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
    sub_1BC3264(0LL, method);
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
  __int64 v12; // x8
  System_Collections_Generic_List_int__o *v13; // x21
  unsigned __int64 v14; // x23
  int32_t v15; // w22
  bool isBonusFilterEnable; // w27
  bool isServantBonusFilterEnable; // w27
  bool isServantEquipBonusFilterEnable; // w27
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4AFCBA9 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventFilterMaster___, eventIds);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToList_int___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Remove__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4AFCBA9 = 1;
  }
  entity = 0LL;
  *(_WORD *)&this->fields.isBonusFilterEnable = 0;
  this->fields.isServantEquipBonusFilterEnable = 0;
  Instance = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)eventIds,
                                                         (const MethodInfo_3042B74 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !eventIds )
    goto LABEL_22;
  v12 = *(_QWORD *)&eventIds->max_length;
  v13 = Instance;
  if ( v12 && (int)v12 >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v12 )
        sub_1BC326C(Instance, v10, v11);
      v15 = eventIds->m_Items[v14 + 1];
      Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventFilterMaster___);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)EventFilterMaster__TryGetEntity_40993028(
                                                             (EventFilterMaster_o *)Instance,
                                                             &entity,
                                                             v15,
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
          if ( !v13 )
            break;
          Instance = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Remove(
                                                                 v13,
                                                                 v15,
                                                                 (const MethodInfo_3685318 *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
      else
      {
        *(_WORD *)&this->fields.isBonusFilterEnable = 257;
        this->fields.isServantEquipBonusFilterEnable = 1;
      }
      LODWORD(v12) = eventIds->max_length;
      if ( (__int64)++v14 >= (int)v12 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1BC3264(Instance, v10);
  }
LABEL_20:
  if ( !v13 )
    goto LABEL_22;
  this->fields.equipBonusFilterEventIds = System_Collections_Generic_List_int___ToArray(
                                            v13,
                                            (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
  sub_1BC2FAC(&this->fields.equipBonusFilterEventIds);
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
  __int64 v36; // x21
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v40; // x1
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0

  if ( (byte_4AFCBAB & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    sub_1BC3008(&BalanceConfig_TypeInfo, v3);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__, v4);
    sub_1BC3008(&CondType_TypeInfo, v5);
    sub_1BC3008(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v6);
    sub_1BC3008(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v7);
    sub_1BC3008(&DataManager_TypeInfo, v8);
    sub_1BC3008(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__getEntityList__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__Clear__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v12);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_1BC3008(&System_IDisposable_TypeInfo, v14);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, v15);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1BC3008(&StringLiteral_17507/*"buttontxt_formation_20"*/, v17);
    byte_4AFCBAB = 1;
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
  if ( CondType__IsQuestClear_39366056(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17507/*"buttontxt_formation_20"*/, 0LL);
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = &this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_32FFC1C *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v23 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v23,
      (const MethodInfo_32FF0D8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *p_classBoardMaxDictionary = v23;
    sub_1BC2FAC(p_classBoardMaxDictionary);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object
    || (Master_object = (System_Collections_ObjectModel_Collection_T__o *)Master_object[1].fields.items) == 0LL )
  {
    sub_1BC3264(Master_object, v25);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Master_object,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v26);
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
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__c **)v34 - 1) != System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo )
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
      v35 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, 0LL);
    }
    v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
            Enumerator,
            *(_QWORD *)(v35 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v37 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v36 )
      sub_1BC3264(v37, v38);
    if ( !v37 )
      sub_1BC3264(0LL, v38);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                            (ClassBoardSquareMaster_o *)v37,
                            *(_DWORD *)(v36 + 16),
                            0LL);
    if ( OtherThanNoneEntity )
    {
      if ( !*p_classBoardMaxDictionary )
        sub_1BC3264(OtherThanNoneEntity, v40);
      System_Collections_Generic_Dictionary_int__int___Add(
        *p_classBoardMaxDictionary,
        *(_DWORD *)(v36 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_32FFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
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
        goto LABEL_43;
    }
    v44 = (__int64)&v41->vtable[*v43].method;
  }
  else
  {
LABEL_43:
    v44 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  FollowerSelectItemListViewManager___c__DisplayClass84_0_o *v19; // x19
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v21; // x1
  FollowerSelectItemListViewManager_c *v22; // x0
  int32_t v23; // w21
  System_Collections_Generic_IEnumerable_T__o *mixItemList; // x21
  System_Collections_Generic_List_object__o *v25; // x22
  const MethodInfo *v26; // x1
  __int64 methodPtr_low; // x10
  int32_t v28; // w21
  System_Collections_Generic_IEnumerable_T__o *recommendItemList; // x21
  System_Collections_Generic_List_object__o *v30; // x22
  const MethodInfo *v31; // x1
  __int64 v32; // x10
  System_Collections_Generic_IEnumerable_T__o *originalItemList; // x21
  System_Collections_Generic_List_object__o *v34; // x22
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v36; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x20
  System_Func_object__bool__o *v38; // x23
  const MethodInfo *v39; // x2
  __int64 v40; // x10
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4AFCBB9 & 1) == 0 )
  {
    sub_1BC3008(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&followerClassId);
    sub_1BC3008(&Method_System_Linq_Enumerable_OfType_FollowerSelectItemListViewItem___, v5);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_FollowerSelectItemListViewItem___, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9);
    sub_1BC3008(&FollowerSelectItemListViewItem_TypeInfo, v10);
    sub_1BC3008(&FollowerSelectItemListViewManager_TypeInfo, v11);
    sub_1BC3008(&System_Func_FollowerSelectItemListViewItem__bool__TypeInfo, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__AddRange__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem___ctor___76761904, v15);
    sub_1BC3008(&System_Collections_Generic_List_ListViewItem__TypeInfo, v16);
    sub_1BC3008(&Method_FollowerSelectItemListViewManager___c__DisplayClass84_0__SetClassId_b__0__, v17);
    sub_1BC3008(&FollowerSelectItemListViewManager___c__DisplayClass84_0_TypeInfo, v18);
    byte_4AFCBB9 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v19 = (FollowerSelectItemListViewManager___c__DisplayClass84_0_o *)sub_1BC3254(FollowerSelectItemListViewManager___c__DisplayClass84_0_TypeInfo);
  FollowerSelectItemListViewManager___c__DisplayClass84_0___ctor(v19, 0LL);
  if ( !v19 )
    goto LABEL_42;
  v19->fields.followerClassId = followerClassId;
  v22 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v22 = FollowerSelectItemListViewManager_TypeInfo;
  }
  v22->static_fields->followerClassId = followerClassId;
  if ( this->fields.mixItemList && this->fields.originalItemList && this->fields.grandItemList )
  {
    v23 = v19->fields.followerClassId;
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    if ( ClassButtonControlComponent__IsMixSupportGroupType(v23, 0LL) )
    {
      mixItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.mixItemList;
      v25 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ListViewItem__TypeInfo);
      System_Collections_Generic_List_object____ctor_57280308(
        v25,
        mixItemList,
        (const MethodInfo_36A0734 *)Method_System_Collections_Generic_List_ListViewItem___ctor___76761904);
      this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v25;
      sub_1BC2FAC(&this->fields.itemList);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( itemList )
      {
        System_Collections_Generic_List_object___AddRange(
          itemList,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.grandItemList,
          (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_ListViewItem__AddRange__);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v41,
            itemList,
            (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v42 = v41;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v42,
                    (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v42.fields._current )
            {
              methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(v42.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
                && (FollowerSelectItemListViewItem_c *)v42.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__UpdateRestriction(
                  (FollowerSelectItemListViewItem_o *)v42.fields._current,
                  v26);
              }
            }
          }
LABEL_40:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v42,
            (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
      }
    }
    else
    {
      v28 = v19->fields.followerClassId;
      if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      if ( ClassButtonControlComponent__IsRecommendSupportGroupType(v28, 0LL) )
      {
        recommendItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.recommendItemList;
        v30 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor_57280308(
          v30,
          recommendItemList,
          (const MethodInfo_36A0734 *)Method_System_Collections_Generic_List_ListViewItem___ctor___76761904);
        this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v30;
        sub_1BC2FAC(&this->fields.itemList);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v41,
            itemList,
            (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v42 = v41;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v42,
                    (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v42.fields._current )
            {
              v32 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(v42.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v32
                && (FollowerSelectItemListViewItem_c *)v42.fields._current->klass->_2.typeHierarchy[v32 - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__UpdateRestriction(
                  (FollowerSelectItemListViewItem_o *)v42.fields._current,
                  v31);
              }
            }
          }
          goto LABEL_40;
        }
      }
      else
      {
        originalItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.originalItemList;
        v34 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor_57280308(
          v34,
          originalItemList,
          (const MethodInfo_36A0734 *)Method_System_Collections_Generic_List_ListViewItem___ctor___76761904);
        this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v34;
        p_itemList = &this->fields.itemList;
        sub_1BC2FAC(&this->fields.itemList);
        if ( v19->fields.followerClassId )
        {
          v36 = this->fields.itemList;
          v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                       (System_Collections_IEnumerable_o *)this->fields.grandItemList,
                                                                       (const MethodInfo_302D068 *)Method_System_Linq_Enumerable_OfType_FollowerSelectItemListViewItem___);
          v38 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_FollowerSelectItemListViewItem__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v38,
            (Il2CppObject *)v19,
            Method_FollowerSelectItemListViewManager___c__DisplayClass84_0__SetClassId_b__0__,
            0LL);
          itemList = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Where_object_(
                                                                    v37,
                                                                    (System_Func_TSource__bool__o *)v38,
                                                                    (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_FollowerSelectItemListViewItem___);
          if ( !v36 )
            goto LABEL_42;
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)v36,
            (System_Collections_Generic_IEnumerable_T__o *)itemList,
            (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_ListViewItem__AddRange__);
        }
        itemList = (System_Collections_Generic_List_object__o *)*p_itemList;
        if ( *p_itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v41,
            itemList,
            (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v42 = v41;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v42,
                    (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v42.fields._current )
            {
              v40 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(v42.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v40
                && (FollowerSelectItemListViewItem_c *)v42.fields._current->klass->_2.typeHierarchy[v40 - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__AnalyzeEntity(
                  (FollowerSelectItemListViewItem_o *)v42.fields._current,
                  v19->fields.followerClassId,
                  v39);
              }
            }
          }
          goto LABEL_40;
        }
      }
    }
LABEL_42:
    sub_1BC3264(itemList, v21);
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

  if ( (byte_4AFCBB0 & 1) == 0 )
  {
    sub_1BC3008(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classId);
    sub_1BC3008(&LocalizationManager_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_10917/*"RECOMMEND_SERVANT_EMPTY"*/, v6);
    sub_1BC3008(&StringLiteral_11692/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v7);
    byte_4AFCBB0 = 1;
  }
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(classId, 0LL) )
    v8 = (System_String_o **)&StringLiteral_10917/*"RECOMMEND_SERVANT_EMPTY"*/;
  else
    v8 = (System_String_o **)&StringLiteral_11692/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  v9 = *v8;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get(v9, 0LL);
  if ( !emptyMessageLabel )
    sub_1BC3264(v11, v12);
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

  if ( (byte_4AFCBC6 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_17361/*"btn_sefilter_2_on"*/, method);
    sub_1BC3008(&StringLiteral_17360/*"btn_sefilter_2"*/, v3);
    byte_4AFCBC6 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (bonusFilterSprite = this->fields.bonusFilterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !bonusFilterSprite) )
  {
    sub_1BC3264(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17360/*"btn_sefilter_2"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17361/*"btn_sefilter_2_on"*/;
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
  sub_1BC2FAC(&this->fields.callbackFunc);
  FollowerSelectItemListViewManager__SetMode_31775360(this, mode, v6);
}


void __fastcall FollowerSelectItemListViewManager__SetMode_31727052(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BC2FAC(&this->fields.callbackFunc2);
  FollowerSelectItemListViewManager__SetMode_31775360(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__SetMode_31775360(
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
  __int64 *v15; // x8
  const MethodInfo *v16; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v21; // x23
  struct FollowerSelectItemListViewObject_o *tutorialListViewObject; // x23

  if ( (byte_4AFCBBA & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BC3008(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v7);
    sub_1BC3008(&StringLiteral_9854/*"OnMoveEnd"*/, v8);
    sub_1BC3008(&StringLiteral_11231/*"RequestInto"*/, v9);
    byte_4AFCBBA = 1;
  }
  if ( mode != 3 )
  {
    this->fields.initMode = mode;
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
    ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
    if ( mode == 1 )
    {
      v15 = &StringLiteral_11231/*"RequestInto"*/;
    }
    else
    {
      if ( mode != 4 )
      {
        if ( mode == 2 )
          FollowerSelectItemListViewManager__RequestListObject_31776080(this, 3, v14);
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
                   (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
          v21 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          System_Action___ctor(v21, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
            break;
          if ( v19 )
          {
            FollowerSelectItemListViewObject__Init_31788624((FollowerSelectItemListViewObject_o *)Item, 2, v21, 0LL);
          }
          else
          {
            FollowerSelectItemListViewObject__Init_31788624((FollowerSelectItemListViewObject_o *)Item, 0, v21, 0LL);
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
            sub_1BC2FAC(&ClippingObjectList[1]);
            tutorialListViewObject = this->fields.tutorialListViewObject;
            ClippingObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewObject__GetItem(
                                                                                (FollowerSelectItemListViewObject_o *)Item,
                                                                                0LL);
            if ( !tutorialListViewObject )
              break;
            ((void (__fastcall *)(struct FollowerSelectItemListViewObject_o *, System_Collections_Generic_List_object__o *, Il2CppMethodPointer))tutorialListViewObject->klass->vtable._5_SetItem.method)(
              tutorialListViewObject,
              ClippingObjectList,
              tutorialListViewObject->klass->vtable._6_SetItem.methodPtr);
            ClippingObjectList = (System_Collections_Generic_List_object__o *)this->fields.tutorialListViewObject;
            if ( !ClippingObjectList )
              break;
            FollowerSelectItemListViewObject__Init_31786304(
              (FollowerSelectItemListViewObject_o *)ClippingObjectList,
              6,
              0LL);
          }
          if ( ++v19 >= v18->fields._size )
            return;
        }
LABEL_31:
        sub_1BC3264(ClippingObjectList, v11);
      }
      this->fields.callbackCount = 1;
      v15 = &StringLiteral_9854/*"OnMoveEnd"*/;
    }
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)*v15, 0.0, 0LL);
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
                                                                          (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
      if ( !ClippingObjectList )
        break;
      FollowerSelectItemListViewObject__Init_31786304((FollowerSelectItemListViewObject_o *)ClippingObjectList, 5, 0LL);
      if ( ++v13 >= v12->fields._size )
        return;
    }
    goto LABEL_31;
  }
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

  if ( (byte_4AFCBB7 & 1) == 0 )
  {
    sub_1BC3008(&FollowerSelectItemListViewObject_TypeInfo, obj);
    byte_4AFCBB7 = 1;
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
    sub_1BC3264(v7, obj);
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
  FollowerSelectItemListViewObject__Init_31786304((FollowerSelectItemListViewObject_o *)v7, v9, 0LL);
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

  if ( (byte_4AFCBCA & 1) == 0 )
  {
    sub_1BC3008(&ClassButtonControlComponent_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    sub_1BC3008(&StringLiteral_17368/*"btn_sort_up"*/, v4);
    sub_1BC3008(&StringLiteral_17463/*"btn_txt_up"*/, v5);
    sub_1BC3008(&StringLiteral_17416/*"btn_txt_new"*/, v6);
    sub_1BC3008(&StringLiteral_17406/*"btn_txt_down"*/, v7);
    sub_1BC3008(&StringLiteral_17423/*"btn_txt_old"*/, v8);
    sub_1BC3008(&StringLiteral_17365/*"btn_sort_down"*/, v9);
    byte_4AFCBCA = 1;
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
          v21 = (System_String_o **)(v18->fields.isAscendingOrder ? &StringLiteral_17423/*"btn_txt_old"*/ : &StringLiteral_17416/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
          v22 = this->fields.sort;
          if ( v22 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v23 = (System_String_o **)&StringLiteral_17365/*"btn_sort_down"*/;
              v24 = (System_String_o **)&StringLiteral_17368/*"btn_sort_up"*/;
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
          v25 = (System_String_o **)(v18->fields.isAscendingOrder ? &StringLiteral_17463/*"btn_txt_up"*/ : &StringLiteral_17406/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v25, 0LL);
          v22 = this->fields.sort;
          if ( v22 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v23 = (System_String_o **)&StringLiteral_17368/*"btn_sort_up"*/;
              v24 = (System_String_o **)&StringLiteral_17365/*"btn_sort_down"*/;
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_39:
    sub_1BC3264(sort, v12);
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
  __int64 v13; // x1
  FollowerSelectItemListViewManager_c *v14; // x0
  FollowerSelectItemListViewManager_c *v15; // x0
  int32_t followerClassId; // w21
  System_Collections_Generic_List_object__o *v17; // x20
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int v20; // w27
  const MethodInfo *v21; // x1
  Il2CppObject *current; // x22
  __int64 methodPtr_low; // x10
  __int64 SvtId; // x0
  __int64 v25; // x1
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *followerSelectItemOption; // x8
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4AFCBCD & 1) == 0 )
  {
    sub_1BC3008(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classPos);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_1BC3008(&FollowerSelectItemListViewItem_TypeInfo, v8);
    sub_1BC3008(&FollowerSelectItemListViewManager_TypeInfo, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v12);
    sub_1BC3008(&System_Collections_Generic_List_ListViewItem__TypeInfo, v13);
    byte_4AFCBCD = 1;
  }
  v14 = FollowerSelectItemListViewManager_TypeInfo;
  memset(&v33, 0, sizeof(v33));
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v14 = FollowerSelectItemListViewManager_TypeInfo;
  }
  if ( v14->static_fields->followerClassId != classPos )
  {
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    if ( !ClassButtonControlComponent__IsMixSupportGroupType(classPos, 0LL) )
    {
      v15 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v15 = FollowerSelectItemListViewManager_TypeInfo;
      }
      followerClassId = v15->static_fields->followerClassId;
      if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      ClassButtonControlComponent__IsMixSupportGroupType(followerClassId, 0LL);
    }
  }
  FollowerSelectItemListViewManager__SetClassId(this, classPos, method);
  v17 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_45;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    itemList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v20 = 0;
  v33 = v32;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v33.fields._current;
    if ( v33.fields._current )
    {
      methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v33.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (FollowerSelectItemListViewItem_c *)v33.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo )
      {
        SvtId = FollowerSelectItemListViewItem__get_SvtId((FollowerSelectItemListViewItem_o *)v33.fields._current, v21);
        if ( (int)SvtId >= 1 && !LOBYTE(current[16].klass) )
        {
          followerSelectItemOption = this->fields.followerSelectItemOption;
          if ( !followerSelectItemOption )
            sub_1BC3264(SvtId, v25);
          if ( !followerSelectItemOption->fields.isUseGrandBoard
            || BYTE5(current[14].monitor)
            || !BYTE6(current[14].monitor) )
          {
            HIDWORD(current[1].klass) = v20;
            if ( !v17 )
              sub_1BC3264(SvtId, v25);
            items = v17->fields._items;
            v28 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++v17->fields._version;
            if ( !items )
              sub_1BC3264(SvtId, v25);
            size = v17->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v17,
                current,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              v17->fields._size = size + 1;
              v30[4] = (Il2CppClass *)current;
              sub_1BC2FAC(v30 + 4);
            }
            ++v20;
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v17;
  sub_1BC2FAC(&this->fields.itemList);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.sort;
  if ( !itemList )
    goto LABEL_45;
  if ( LODWORD(itemList[1].fields._items) == 11 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( (!questRestrictionInfo || !questRestrictionInfo->fields.isRestriction)
      && this->fields.isBonusFilterEnable
      && !ListViewSort__GetFilter((ListViewSort_o *)itemList, 18, 0LL) )
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.sort;
      if ( !itemList )
        goto LABEL_45;
      if ( !ListViewSort__GetFilter((ListViewSort_o *)itemList, 19, 0LL) )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.sort;
        if ( !itemList )
          goto LABEL_45;
        if ( ListViewSort__GetFilter((ListViewSort_o *)itemList, 40, 0LL) )
        {
          itemList = (System_Collections_Generic_List_object__o *)this->fields.sort;
          if ( itemList )
          {
            ListViewSort__GetFilter((ListViewSort_o *)itemList, 41, 0LL);
            goto LABEL_34;
          }
LABEL_45:
          sub_1BC3264(itemList, v18);
        }
      }
    }
  }
LABEL_34:
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
  if ( (byte_4AFCBCE & 1) == 0 )
  {
    sub_1BC3008(&ClassButtonControlComponent_TypeInfo, method);
    sub_1BC3008(&FollowerListRequest_TypeInfo, v3);
    sub_1BC3008(&FollowerRecommendSupportListRequest_TypeInfo, v4);
    sub_1BC3008(&FollowerSelectItemListViewManager_TypeInfo, v5);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, v6);
    sub_1BC3008(&long_TypeInfo, v7);
    sub_1BC3008(&NetworkManager_TypeInfo, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    sub_1BC3008(&StringLiteral_24860/*"{0}"*/, v10);
    this = (FollowerSelectItemListViewManager_o *)sub_1BC3008(&StringLiteral_1/*""*/, v11);
    byte_4AFCBCE = 1;
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
                         (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
              (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
    sub_1BC3264(this, method);
  }
  this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshButtonObject;
  if ( !this )
    goto LABEL_59;
  v16 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
          (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
                                                        (System_String_o *)StringLiteral_24860/*"{0}"*/,
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

  if ( (byte_4AFCBA1 & 1) == 0 )
  {
    sub_1BC3008(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4AFCBA1 = 1;
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
    v8 = sub_1BFD098(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1BC3524(v7);
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

  if ( (byte_4AFCBA3 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, value);
    byte_4AFCBA3 = 1;
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
    v8 = sub_1BFD098(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1BC3524(v7);
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
  __int64 v18; // x1
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

  if ( (byte_4AFCBA8 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    byte_4AFCBA8 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BC3264(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v30 = v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v30.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BC3264(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BC3264(0LL, v18);
      Item = (ListViewItem_o *)FollowerSelectItemListViewObject__GetItem(
                                 (FollowerSelectItemListViewObject_o *)Component_object,
                                 0LL);
      if ( !Item )
        sub_1BC3264(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_42785324((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_1BC3264(v22, v23);
          items = v11->fields._items;
          v25 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BC3264(v22, v23);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BC3264(Item, v21);
        items = v11->fields._items;
        v25 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BC3264(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v27 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v19;
        sub_1BC2FAC(v27 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4AFCBA7 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    byte_4AFCBA7 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BC3264(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BC3264(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v18 = Component_object;
      if ( !v11 )
        sub_1BC3264(Component_object, Component_object);
      items = v11->fields._items;
      v20 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BC3264(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_1BC2FAC(v22 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4AFCBA2 & 1) == 0 )
  {
    sub_1BC3008(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4AFCBA2 = 1;
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
    v8 = sub_1BFD098(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1BC3524(v7);
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

  if ( (byte_4AFCBA4 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, value);
    byte_4AFCBA4 = 1;
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
    v8 = sub_1BFD098(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1BC3524(v7);
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
  sub_1BC2FAC(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A05414;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A053B4;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall FollowerSelectItemListViewManager_CallbackFunc__BeginInvoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        int32_t param,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  _QWORD v18[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v19; // [xsp+10h] [xbp-60h]
  int32_t v20; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v21; // [xsp+38h] [xbp-38h] BYREF
  int32_t v22; // [xsp+3Ch] [xbp-34h] BYREF

  v21 = result;
  v22 = kind;
  v20 = param;
  if ( (byte_4AFCBD8 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1BC3008(&FollowerSelectItemListViewManager_ResultKind_TypeInfo, v10);
    byte_4AFCBD8 = 1;
  }
  v19 = 0u;
  v18[0] = j_il2cpp_value_box_0(
             FollowerSelectItemListViewManager_ResultKind_TypeInfo,
             &v22,
             *(_QWORD *)&result,
             *(_QWORD *)&param,
             callback);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v21, v11, v12, v13);
  *(_QWORD *)&v19 = j_il2cpp_value_box_0(int_TypeInfo, &v20, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v18, callback, object);
}


void __fastcall FollowerSelectItemListViewManager_CallbackFunc__EndInvoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
}


void __fastcall FollowerSelectItemListViewManager_CallbackFunc__Invoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        int32_t param,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    result,
    param,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall FollowerSelectItemListViewManager_FollowerSelectItemOption___ctor(
        FollowerSelectItemListViewManager_FollowerSelectItemOption_o *this,
        const MethodInfo *method)
{
  this->fields.isReleasedClassBoard = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FollowerSelectItemListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4AFCBD9 & 1) == 0 )
  {
    sub_1BC3008(&FollowerSelectItemListViewManager___c_TypeInfo, v1);
    byte_4AFCBD9 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(FollowerSelectItemListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FollowerSelectItemListViewManager___c_TypeInfo->static_fields->__9 = (struct FollowerSelectItemListViewManager___c_o *)v2;
  sub_1BC2FAC(FollowerSelectItemListViewManager___c_TypeInfo->static_fields);
}


void __fastcall FollowerSelectItemListViewManager___c___ctor(
        FollowerSelectItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ListViewSort_o *__fastcall FollowerSelectItemListViewManager___c____cctor_b__136_0(
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

  if ( (byte_4AFCBDA & 1) == 0 )
  {
    sub_1BC3008(&ListViewSort_TypeInfo, *(_QWORD *)&questType);
    sub_1BC3008(&StringLiteral_6726/*"FollowerSelectEventQuest"*/, v4);
    sub_1BC3008(&StringLiteral_6727/*"FollowerSelectMainQuest"*/, v5);
    byte_4AFCBDA = 1;
  }
  if ( questType )
  {
    if ( questType != 1 )
    {
      v10 = sub_1BC301C(&System_NotImplementedException_TypeInfo);
      v11 = (System_NotImplementedException_o *)sub_1BC3254(v10);
      System_NotImplementedException___ctor(v11, 0LL);
      v12 = sub_1BC301C(&Method_FollowerSelectItemListViewManager___c___cctor_b__136_0__);
      sub_1BC3130(v11, v12);
    }
    v6 = &StringLiteral_6726/*"FollowerSelectEventQuest"*/;
  }
  else
  {
    v6 = &StringLiteral_6727/*"FollowerSelectMainQuest"*/;
  }
  v7 = (System_String_o *)*v6;
  v8 = (ListViewSort_o *)sub_1BC3254(ListViewSort_TypeInfo);
  ListViewSort___ctor_42802648(v8, v7, 11, 0, 0LL);
  return v8;
}


void __fastcall FollowerSelectItemListViewManager___c__DisplayClass84_0___ctor(
        FollowerSelectItemListViewManager___c__DisplayClass84_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall FollowerSelectItemListViewManager___c__DisplayClass84_0___SetClassId_b__0(
        FollowerSelectItemListViewManager___c__DisplayClass84_0_o *this,
        FollowerSelectItemListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return FollowerSelectItemListViewItem__get_GrandFollowerClassId(x, 0LL) == this->fields.followerClassId;
}