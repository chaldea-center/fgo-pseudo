void __fastcall RestrictionNotSatisfySlot___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_421870F & 1) == 0 )
  {
    sub_B0D8A4(&RestrictionNotSatisfySlot_TypeInfo, v1);
    byte_421870F = 1;
  }
  RestrictionNotSatisfySlot_TypeInfo->static_fields->ICON_MAX_NUM = 4;
}


void __fastcall RestrictionNotSatisfySlot___ctor(RestrictionNotSatisfySlot_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


System_String_o *__fastcall RestrictionNotSatisfySlot__AddColorCodeAndFixMessage(
        RestrictionNotSatisfySlot_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array *v16; // x19
  System_String_o *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  __int64 v47; // x0
  __int64 v48; // x0

  if ( (byte_421870D & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, message);
    sub_B0D8A4(&string___TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v5);
    sub_B0D8A4(&StringLiteral_15691/*"[-]"*/, v6);
    sub_B0D8A4(&StringLiteral_11127/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v7);
    sub_B0D8A4(&StringLiteral_15790/*"[FFFF00]"*/, v8);
    byte_421870D = 1;
  }
  v9 = sub_B0D8BC(string___TypeInfo, 5LL);
  if ( !v9 )
    sub_B0D97C(0LL);
  v16 = (System_String_array *)v9;
  v17 = (System_String_o *)StringLiteral_15790/*"[FFFF00]"*/;
  if ( StringLiteral_15790/*"[FFFF00]"*/ )
  {
    v17 = (System_String_o *)sub_B0D964(StringLiteral_15790/*"[FFFF00]"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_30;
    v18 = (System_Int32_array **)StringLiteral_15790/*"[FFFF00]"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v16->max_length )
    goto LABEL_29;
  v16->m_Items[0] = (System_String_o *)v18;
  sub_B0D840((BattleServantConfConponent_o *)v16->m_Items, v18, v10, v11, v12, v13, v14, v15);
  if ( message )
  {
    v17 = (System_String_o *)sub_B0D964(message, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_30;
  }
  if ( v16->max_length <= 1 )
    goto LABEL_29;
  v16->m_Items[1] = message;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v16->m_Items[1],
    (System_Int32_array **)message,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v17 = (System_String_o *)StringLiteral_26/*"\n"*/;
  if ( StringLiteral_26/*"\n"*/ )
  {
    v17 = (System_String_o *)sub_B0D964(StringLiteral_26/*"\n"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_30;
    v31 = (System_Int32_array **)StringLiteral_26/*"\n"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v16->max_length <= 2 )
    goto LABEL_29;
  v16->m_Items[2] = (System_String_o *)v31;
  sub_B0D840((BattleServantConfConponent_o *)&v16->m_Items[2], v31, v25, v26, v27, v28, v29, v30);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11127/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
  v38 = (System_Int32_array **)v17;
  if ( v17 )
  {
    v17 = (System_String_o *)sub_B0D964(v17, v16->obj.klass->_1.element_class);
    if ( !v17 )
    {
LABEL_30:
      v48 = sub_B0D99C(v17);
      sub_B0D948(v48, 0LL);
    }
  }
  if ( v16->max_length <= 3 )
    goto LABEL_29;
  v16->m_Items[3] = (System_String_o *)v38;
  sub_B0D840((BattleServantConfConponent_o *)&v16->m_Items[3], v38, v32, v33, v34, v35, v36, v37);
  v17 = (System_String_o *)StringLiteral_15691/*"[-]"*/;
  if ( StringLiteral_15691/*"[-]"*/ )
  {
    v17 = (System_String_o *)sub_B0D964(StringLiteral_15691/*"[-]"*/, v16->obj.klass->_1.element_class);
    if ( v17 )
    {
      v45 = (System_Int32_array **)StringLiteral_15691/*"[-]"*/;
      goto LABEL_27;
    }
    goto LABEL_30;
  }
  v45 = 0LL;
LABEL_27:
  if ( v16->max_length <= 4 )
  {
LABEL_29:
    v47 = sub_B0D9A8(v17);
    sub_B0D948(v47, 0LL);
  }
  v16->m_Items[4] = (System_String_o *)v45;
  sub_B0D840((BattleServantConfConponent_o *)&v16->m_Items[4], v45, v39, v40, v41, v42, v43, v44);
  return System_String__Concat_43930028(v16, 0LL);
}


void __fastcall RestrictionNotSatisfySlot__Awake(RestrictionNotSatisfySlot_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall RestrictionNotSatisfySlot__GetIconIdFromIndividuality(
        RestrictionNotSatisfySlot_o *this,
        System_Int32_array **servantIds,
        System_Int32_array **classImageIds,
        System_Int32_array *individuality,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x22
  ServantClassMaster_o *v14; // x25
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_int__o *v17; // x24
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_int__o *v20; // x23
  _BOOL8 EntityByIndividuality; // x0
  __int64 v22; // x8
  unsigned __int64 v23; // x27
  int32_t v24; // w26
  const MethodInfo_2FAFF00 *v25; // x2
  System_Collections_Generic_List_int__o *v26; // x0
  int32_t iconImageId; // w1
  System_Int32_array *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x0
  ServantClassEntity_o *v45; // [xsp+10h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_421870C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantClassMaster___, servantIds);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v12);
    byte_421870C = 1;
  }
  v45 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
  v14 = (ServantClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v17 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v15, v16);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v20 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v18, v19);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individuality )
    goto LABEL_24;
  v22 = *(_QWORD *)&individuality->max_length;
  if ( (int)v22 >= 1 )
  {
    v23 = 0LL;
    do
    {
      if ( v23 >= (unsigned int)v22 )
      {
        v42 = sub_B0D9A8(EntityByIndividuality);
        sub_B0D948(v42, 0LL);
      }
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_24;
      v24 = individuality->m_Items[v23 + 1];
      EntityByIndividuality = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                Master_WarQuestSelectionMaster,
                                &entity,
                                v24,
                                (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( EntityByIndividuality )
      {
        if ( !v17 )
          goto LABEL_24;
        v25 = (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__;
        v26 = v17;
        iconImageId = v24;
      }
      else
      {
        if ( !v14 )
          goto LABEL_24;
        EntityByIndividuality = ServantClassMaster__TryGetEntityByIndividuality(v14, &v45, v24, 0LL);
        if ( !EntityByIndividuality )
          goto LABEL_20;
        if ( !v45 || !v20 )
          goto LABEL_24;
        iconImageId = v45->fields.iconImageId;
        v25 = (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__;
        v26 = v20;
      }
      System_Collections_Generic_List_int___Add(v26, iconImageId, v25);
LABEL_20:
      LODWORD(v22) = individuality->max_length;
    }
    while ( (__int64)++v23 < (int)v22 );
  }
  if ( !v17
    || (v28 = System_Collections_Generic_List_int___ToArray(
                v17,
                (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__),
        *servantIds = v28,
        sub_B0D840((BattleServantConfConponent_o *)servantIds, (System_Int32_array **)v28, v29, v30, v31, v32, v33, v34),
        !v20) )
  {
LABEL_24:
    sub_B0D97C(EntityByIndividuality);
  }
  v35 = System_Collections_Generic_List_int___ToArray(
          v20,
          (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  *classImageIds = v35;
  sub_B0D840((BattleServantConfConponent_o *)classImageIds, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
}


System_String_o *__fastcall RestrictionNotSatisfySlot__RemoveColorCode(
        RestrictionNotSatisfySlot_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x0

  if ( (byte_421870E & 1) == 0 )
  {
    sub_B0D8A4(&System_Text_RegularExpressions_Regex_TypeInfo, message);
    sub_B0D8A4(&StringLiteral_15814/*"[[]-[\\]]"*/, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    sub_B0D8A4(&StringLiteral_15815/*"[[][0-9A-F]{6}[\\]]"*/, v6);
    byte_421870E = 1;
  }
  if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  }
  v7 = System_Text_RegularExpressions_Regex__Replace(
         message,
         (System_String_o *)StringLiteral_15815/*"[[][0-9A-F]{6}[\\]]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  return System_Text_RegularExpressions_Regex__Replace(
           v7,
           (System_String_o *)StringLiteral_15814/*"[[]-[\\]]"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RestrictionNotSatisfySlot__SetItem(
        RestrictionNotSatisfySlot_o *this,
        int32_t number,
        PartyOrganizationListViewItem_o *memberItem,
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
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x24
  System_String_o *partyMemberItem; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  PartyOrganizationListViewItem_o **v76; // x21
  UISprite_o *numberSprite; // x20
  System_String_o *v78; // x0
  __int64 v79; // x1
  __int64 v80; // x2
  _QWORD **v81; // x19
  __int64 v82; // x20
  __int16 v83; // w8
  __int64 v84; // x20
  __int64 v85; // x20
  __int64 v86; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v87; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v88; // x23
  __int64 v89; // x1
  __int64 v90; // x2
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v92; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v93; // x0
  __int64 v94; // x1
  __int64 v95; // x2
  RestrictionNotSatisfySlot___c_c *v96; // x0
  struct RestrictionNotSatisfySlot___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__14_1; // x20
  Il2CppObject *v99; // x24
  struct RestrictionNotSatisfySlot___c_StaticFields *v100; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v107; // x0
  const MethodInfo *v108; // x2
  System_String_o *v109; // x20
  System_String_c *klass; // x8
  unsigned __int64 v111; // x19
  __int64 v112; // x1
  const MethodInfo *v113; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v114; // x24
  UnityEngine_GameObject_o *restrictionLabelRoot; // x0
  Il2CppObject *current; // x20
  UILabel_o *restrictionLabel; // x23
  UnityEngine_Transform_o *transform; // x25
  UILabel_o *v119; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v120; // x23
  __int64 v121; // x0
  SwitchUIWidgetComponent_o *switchMessage; // x20
  __int64 v123; // x1
  __int64 v124; // x2
  _QWORD **v125; // x23
  __int64 v126; // x20
  __int16 v127; // w8
  __int64 v128; // x20
  __int64 v129; // x20
  __int64 v130; // x20
  _QWORD **v131; // x19
  __int64 v132; // x20
  __int16 v133; // w8
  __int64 v134; // x20
  __int64 v135; // x20
  __int64 v136; // x20
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v137; // x20
  char v138; // w20
  __int64 v139; // x1
  __int64 v140; // x2
  const MethodInfo *v141; // x4
  bool IsSelectableNormalSupport; // w0
  QuestPhaseEntity_o *v143; // x8
  System_Collections_Generic_IEnumerable_T__o *v144; // x21
  System_Collections_Generic_List_int__o *v145; // x20
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_TSource__c *v147; // x8
  System_Int32_array *v148; // x3
  System_Collections_Generic_List_int__o *v149; // x22
  System_String_o *v150; // x20
  System_String_o *v151; // x21
  unsigned __int64 v152; // x19
  __int64 v153; // x1
  __int64 v154; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v155; // x21
  __int64 v156; // x1
  __int64 v157; // x2
  System_Collections_Generic_List_int__o *v158; // x23
  __int64 v159; // x1
  __int64 v160; // x2
  System_Collections_Generic_List_int__o *v161; // x24
  __int64 v162; // x1
  __int64 v163; // x2
  System_Collections_Generic_List_int__o *v164; // x25
  __int64 v165; // x1
  __int64 v166; // x2
  System_Collections_Generic_List_bool__o *v167; // x26
  System_Int32_array *v168; // x27
  __int64 v169; // x8
  int v170; // w22
  unsigned __int64 v171; // x19
  int32_t v172; // w20
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  FollowerInfo_o *v174; // x28
  int32_t questPhase; // w21
  int32_t questId; // w27
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w28
  int32_t v179; // w20
  int64_t UserId; // x1
  srcLineSprite_o *Component_srcLineSprite; // x20
  System_Int32_array *v182; // x21
  System_Int32_array *v183; // x27
  System_Int32_array *v184; // x28
  const MethodInfo *v185; // x6
  srcLineSprite_o *v186; // x20
  System_Int32_array *v187; // x21
  System_Int32_array *v188; // x22
  System_Int32_array *v189; // x23
  const MethodInfo *v190; // x6
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v191; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v192; // x20
  __int64 v193; // x1
  __int64 v194; // x2
  System_Collections_Generic_List_int__o *v195; // x21
  System_Int32_array *v196; // x19
  __int64 v197; // x8
  int v198; // w22
  unsigned __int64 v199; // x23
  srcLineSprite_o *v200; // x22
  const MethodInfo *v201; // x2
  srcLineSprite_o *v202; // x22
  const MethodInfo *v203; // x2
  struct SwitchUIWidgetComponent_o *switchIcons; // x20
  UIWidget_array *v205; // x1
  SwitchUIWidgetComponent_o *v206; // x0
  struct SwitchUIWidgetComponent_o *v207; // x21
  PartyOrganizationListViewItem_o *v208; // x8
  int v209; // w19
  signed __int64 size; // x8
  unsigned __int64 v211; // x20
  System_String_o *fixed; // x0
  __int64 v213; // x0
  NpcFollowerMaster_o *v214; // [xsp+40h] [xbp-100h]
  NpcServantFollowerMaster_o *Master_WarQuestSelectionMaster; // [xsp+48h] [xbp-F8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v216; // [xsp+50h] [xbp-F0h]
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+58h] [xbp-E8h]
  System_Int32_array *v218; // [xsp+60h] [xbp-E0h]
  int32_t *v219; // [xsp+68h] [xbp-D8h]
  QuestRestrictionInfo_o *questRestrictionInfoa; // [xsp+70h] [xbp-D0h]
  RestrictionNotSatisfySlot_o *v221; // [xsp+78h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_T__o v222; // [xsp+80h] [xbp-C0h] BYREF
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+98h] [xbp-A8h] BYREF
  QuestPhaseEntity_o *v224; // [xsp+A0h] [xbp-A0h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+A8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v226; // [xsp+B0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+C8h] [xbp-78h] BYREF
  System_Int32_array *classImageIds; // [xsp+D0h] [xbp-70h] BYREF
  System_Int32_array *servantIds; // [xsp+D8h] [xbp-68h] BYREF
  int32_t v230; // [xsp+E4h] [xbp-5Ch] BYREF

  v230 = number;
  if ( (byte_421870B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_int___, *(_QWORD *)&number);
    sub_B0D8A4(&Method_System_Array_Empty_RestrictionEntity___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_NpcFollowerMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v12);
    sub_B0D8A4(&DataManager_TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v16);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v17);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___, v18);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v22);
    sub_B0D8A4(&Method_System_Func_RestrictionEntity__bool___ctor__, v23);
    sub_B0D8A4(&System_Func_RestrictionEntity__bool__TypeInfo, v24);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_bool__Add__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__Add__, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v30);
    sub_B0D8A4(&Method_System_Collections_Generic_List_bool__Clear__, v31);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, v32);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v33);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v34);
    sub_B0D8A4(&Method_System_Collections_Generic_List_bool__ToArray__, v35);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v36);
    sub_B0D8A4(&Method_System_Collections_Generic_List_bool___ctor__, v37);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v38);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v39);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget___ctor__, v40);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884944, v41);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v42);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____get_Count__, v43);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v44);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v45);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____get_Item__, v46);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v47);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__set_Item__, v48);
    sub_B0D8A4(&System_Collections_Generic_List_UIWidget__TypeInfo, v49);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v50);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v51);
    sub_B0D8A4(&System_Collections_Generic_List_bool__TypeInfo, v52);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v53);
    sub_B0D8A4(&NetworkManager_TypeInfo, v54);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_UILabel____68025352, v55);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v56);
    sub_B0D8A4(&RestrictionNotSatisfySlot_TypeInfo, v57);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v58);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v59);
    sub_B0D8A4(&Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__, v60);
    sub_B0D8A4(&Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__, v61);
    sub_B0D8A4(&RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo, v62);
    sub_B0D8A4(&RestrictionNotSatisfySlot___c_TypeInfo, v63);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v64);
    sub_B0D8A4(&StringLiteral_20527/*"member_txt_"*/, v65);
    sub_B0D8A4(&StringLiteral_11124/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/, v66);
    sub_B0D8A4(&StringLiteral_1/*""*/, v67);
    byte_421870B = 1;
  }
  classImageIds = 0LL;
  servantIds = 0LL;
  npcInfoDictionary = 0LL;
  memset(&v226, 0, sizeof(v226));
  entity = 0LL;
  npcServantFollowerEntity = 0LL;
  v224 = 0LL;
  v68 = sub_B0D974(RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo, *(_QWORD *)&number, memberItem);
  RestrictionNotSatisfySlot___c__DisplayClass14_0___ctor((RestrictionNotSatisfySlot___c__DisplayClass14_0_o *)v68, 0LL);
  if ( !v68 )
    goto LABEL_252;
  *(_QWORD *)(v68 + 16) = memberItem;
  v76 = (PartyOrganizationListViewItem_o **)(v68 + 16);
  sub_B0D840(
    (BattleServantConfConponent_o *)(v68 + 16),
    (System_Int32_array **)memberItem,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  numberSprite = this->fields.numberSprite;
  v78 = System_Int32__ToString((int32_t)&v230, 0LL);
  partyMemberItem = System_String__Concat_43849904((System_String_o *)StringLiteral_20527/*"member_txt_"*/, v78, 0LL);
  if ( !numberSprite )
    goto LABEL_252;
  UISprite__set_spriteName(numberSprite, partyMemberItem, 0LL);
  partyMemberItem = (System_String_o *)this->fields.partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_252;
  PartyOrganizationConfirmItemDraw__SetItem(
    (PartyOrganizationConfirmItemDraw_o *)partyMemberItem,
    *v76,
    3,
    0,
    0,
    0,
    0,
    0LL);
  v81 = (_QWORD **)Method_System_Array_Empty_RestrictionEntity___;
  v82 = **((_QWORD **)Method_System_Array_Empty_RestrictionEntity___ + 6);
  v83 = *(_WORD *)(v82 + 306);
  if ( (v83 & 1) == 0 )
  {
    sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_RestrictionEntity___ + 6));
    v83 = *(_WORD *)(v82 + 306);
  }
  if ( (v83 & 0x400) != 0 )
  {
    v84 = *v81[6];
    if ( (*(_BYTE *)(v84 + 306) & 1) == 0 )
      sub_AA65A4(*v81[6]);
    if ( !*(_DWORD *)(v84 + 224) )
    {
      v85 = *v81[6];
      if ( (*(_BYTE *)(v85 + 306) & 1) == 0 )
        sub_AA65A4(*v81[6]);
      j_il2cpp_runtime_class_init_0(v85);
    }
  }
  v86 = *v81[6];
  if ( (*(_BYTE *)(v86 + 306) & 1) == 0 )
    sub_AA65A4(*v81[6]);
  v87 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v86 + 184);
  v88 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v79,
                                                                                                  v80);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v88,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !questRestrictionInfo )
    goto LABEL_252;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  questRestrictionInfoa = questRestrictionInfo;
  v221 = this;
  if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
  {
    restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
    v92 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_RestrictionEntity__bool__TypeInfo,
                                                                               v89,
                                                                               v90);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v92,
      (Il2CppObject *)v68,
      Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__,
      (const MethodInfo_26189B8 *)Method_System_Func_RestrictionEntity__bool___ctor__);
    v93 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            restrictionEntityList,
            (System_Func_TSource__bool__o *)v92,
            (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    v87 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                 v93,
                                                                 (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    if ( questRestrictionInfo->fields.isUniqueServant && questRestrictionInfo->fields.isUniqueIndividuality )
    {
      v96 = RestrictionNotSatisfySlot___c_TypeInfo;
      if ( (BYTE3(RestrictionNotSatisfySlot___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !RestrictionNotSatisfySlot___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot___c_TypeInfo);
        v96 = RestrictionNotSatisfySlot___c_TypeInfo;
      }
      static_fields = v96->static_fields;
      _9__14_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__14_1;
      if ( !_9__14_1 )
      {
        if ( (BYTE3(v96->vtable._0_Equals.methodPtr) & 4) != 0 && !v96->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v96);
          static_fields = RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
        }
        v99 = (Il2CppObject *)static_fields->__9;
        _9__14_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                        System_Func_RestrictionEntity__bool__TypeInfo,
                                                                                        v94,
                                                                                        v95);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__14_1,
          v99,
          Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__,
          (const MethodInfo_26189B8 *)Method_System_Func_RestrictionEntity__bool___ctor__);
        v100 = RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
        v100->__9__14_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__14_1;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v100->__9__14_1,
          (System_Int32_array **)_9__14_1,
          v101,
          v102,
          v103,
          v104,
          v105,
          v106);
      }
      v107 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               v87,
               (System_Func_TSource__bool__o *)_9__14_1,
               (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v87 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                   v107,
                                                                   (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    }
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetMessages_30607384(
                                           questRestrictionInfo,
                                           (RestrictionEntity_array *)v87,
                                           1,
                                           1,
                                           0,
                                           0,
                                           0,
                                           0,
                                           0,
                                           0,
                                           0,
                                           0,
                                           0,
                                           0LL);
  }
  else
  {
    if ( !*v76 )
      goto LABEL_252;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetMessages(
                                           questRestrictionInfo,
                                           (*v76)->fields._InitPos_k__BackingField,
                                           1,
                                           1,
                                           0,
                                           0,
                                           0,
                                           0,
                                           0,
                                           0,
                                           0,
                                           0,
                                           0,
                                           0,
                                           0,
                                           0LL);
  }
  v109 = partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_252;
  klass = partyMemberItem[1].klass;
  if ( klass && (int)klass >= 1 )
  {
    v111 = 0LL;
    while ( v111 < (unsigned int)klass )
    {
      partyMemberItem = RestrictionNotSatisfySlot__RemoveColorCode(
                          (RestrictionNotSatisfySlot_o *)partyMemberItem,
                          *((System_String_o **)&v109[1].monitor + v111),
                          v108);
      if ( !partyMemberItem )
        goto LABEL_252;
      partyMemberItem = System_String__Replace_43857140(
                          partyMemberItem,
                          (System_String_o *)StringLiteral_26/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
      if ( !v88 )
        goto LABEL_252;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v88,
        (EventMissionProgressRequest_Argument_ProgressData_o *)partyMemberItem,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
      LODWORD(klass) = v109[1].klass;
      if ( (__int64)++v111 >= (int)klass )
        goto LABEL_41;
    }
LABEL_253:
    v213 = sub_B0D9A8(partyMemberItem);
    sub_B0D948(v213, 0LL);
  }
LABEL_41:
  partyMemberItem = (System_String_o *)this->fields.notSatisfyWidget;
  if ( !partyMemberItem )
    goto LABEL_252;
  partyMemberItem = (System_String_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)partyMemberItem,
                                         0LL);
  if ( !partyMemberItem )
    goto LABEL_252;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyMemberItem, 0, 0LL);
  partyMemberItem = (System_String_o *)*v76;
  if ( !*v76 )
    goto LABEL_252;
  if ( !PartyOrganizationListViewItem__get_IsSupportOnly((PartyOrganizationListViewItem_o *)partyMemberItem, 0LL) )
  {
    partyMemberItem = (System_String_o *)*v76;
    if ( !*v76 )
      goto LABEL_252;
    if ( !PartyOrganizationListViewItem__get_IsFixedMyServantSingle(
            (PartyOrganizationListViewItem_o *)partyMemberItem,
            0LL) )
    {
      partyMemberItem = (System_String_o *)*v76;
      if ( !*v76 )
        goto LABEL_252;
      if ( !LOBYTE(partyMemberItem[8].fields.m_stringLength) && !BYTE1(partyMemberItem[8].fields.m_stringLength) )
      {
        if ( PartyOrganizationListViewItem__get_IsQuestRestriction(
               (PartyOrganizationListViewItem_o *)partyMemberItem,
               0LL) )
        {
          goto LABEL_231;
        }
        partyMemberItem = (System_String_o *)*v76;
        if ( !*v76 )
          goto LABEL_252;
        partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                               (PartyOrganizationListViewItem_o *)partyMemberItem,
                                               0LL);
        if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
        {
          if ( !*v76 )
            goto LABEL_252;
          partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsSetRequired(
                                                 questRestrictionInfo,
                                                 v230,
                                                 (*v76)->fields._InitPos_k__BackingField,
                                                 0LL);
          if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
            goto LABEL_231;
        }
        v208 = *v76;
        if ( !*v76 )
          goto LABEL_252;
        if ( v208->fields.isUniqueSvtRestriction
          || v208->fields.isUniqueIndividualityRestriction
          || (v208->fields.fatigureTime & 0x8000000000000000LL) == 0
          || v208->fields._IsAllOutBattle_k__BackingField
          || v208->fields._IsDataLost_k__BackingField
          || v208->fields._TimesToRestart_k__BackingField > 0
          || v208->fields._IsNotSupportSingle_k__BackingField
          || v208->fields.isFixedServantPositionRestriction
          || v208->fields.isFixedSupportPositionRestriction )
        {
LABEL_231:
          partyMemberItem = (System_String_o *)this->fields.notSatisfyWidget;
          if ( !partyMemberItem )
            goto LABEL_252;
          partyMemberItem = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)partyMemberItem,
                                                 0LL);
          if ( !partyMemberItem )
            goto LABEL_252;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyMemberItem, 1, 0LL);
          partyMemberItem = (System_String_o *)*v76;
          if ( !*v76 )
            goto LABEL_252;
          partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                                 (PartyOrganizationListViewItem_o *)partyMemberItem,
                                                 0LL);
          if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
            goto LABEL_242;
          if ( !*v76 )
            goto LABEL_252;
          if ( QuestRestrictionInfo__IsSetRequired(
                 questRestrictionInfo,
                 v230,
                 (*v76)->fields._InitPos_k__BackingField,
                 0LL) )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            partyMemberItem = LocalizationManager__Get((System_String_o *)StringLiteral_11124/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/, 0LL);
            if ( !v88 )
              goto LABEL_252;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v88,
              (EventMissionProgressRequest_Argument_ProgressData_o *)partyMemberItem,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
            v209 = 1;
          }
          else
          {
LABEL_242:
            v209 = 0;
          }
          partyMemberItem = (System_String_o *)*v76;
          if ( !*v76 )
            goto LABEL_252;
          partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsQuestRestriction(
                                                 (PartyOrganizationListViewItem_o *)partyMemberItem,
                                                 0LL);
          if ( v209 | (unsigned __int8)partyMemberItem & 1 )
          {
            if ( !v88 )
              goto LABEL_252;
            LODWORD(size) = v88->fields._size;
            if ( (int)size >= 1 )
            {
              v211 = 0LL;
              do
              {
                if ( v211 >= (unsigned int)size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                fixed = RestrictionNotSatisfySlot__AddColorCodeAndFixMessage(
                          (RestrictionNotSatisfySlot_o *)partyMemberItem,
                          (System_String_o *)v88->fields._items->m_Items[v211],
                          v113);
                System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
                  (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v88,
                  v211,
                  (WarBoardManager_TaskList_o *)fixed,
                  (const MethodInfo_2FC5440 *)Method_System_Collections_Generic_List_string__set_Item__);
                size = v88->fields._size;
                ++v211;
              }
              while ( (__int64)v211 < size );
            }
          }
        }
      }
    }
  }
  v114 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_UIWidget__TypeInfo,
                                                                                                   v112,
                                                                                                   v113);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v114,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  if ( !v88 )
    goto LABEL_252;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v222,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v88,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v226 = v222;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v226,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    restrictionLabelRoot = this->fields.restrictionLabelRoot;
    if ( !restrictionLabelRoot )
      sub_B0D97C(0LL);
    current = v226.fields.current;
    restrictionLabel = this->fields.restrictionLabel;
    transform = UnityEngine_GameObject__get_transform(restrictionLabelRoot, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v119 = UnityEngine_Object__Instantiate_UILabel_(
             restrictionLabel,
             transform,
             (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_UILabel____68025352);
    this = v221;
    v120 = (EventMissionProgressRequest_Argument_ProgressData_o *)v119;
    if ( !v119 )
      sub_B0D97C(0LL);
    UILabel__set_text(v119, (System_String_o *)current, 0LL);
    if ( !v114 )
      sub_B0D97C(v121);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v114,
      v120,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v226,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v114 )
    goto LABEL_252;
  switchMessage = this->fields.switchMessage;
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v114,
                                         (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !switchMessage )
    goto LABEL_252;
  SwitchUIWidgetComponent__Set(switchMessage, (UIWidget_array *)partyMemberItem, 0LL);
  v125 = (_QWORD **)Method_System_Array_Empty_int___;
  v126 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v127 = *(_WORD *)(v126 + 306);
  if ( (v127 & 1) == 0 )
  {
    sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v127 = *(_WORD *)(v126 + 306);
  }
  if ( (v127 & 0x400) != 0 )
  {
    v128 = *v125[6];
    if ( (*(_BYTE *)(v128 + 306) & 1) == 0 )
      sub_AA65A4(*v125[6]);
    if ( !*(_DWORD *)(v128 + 224) )
    {
      v129 = *v125[6];
      if ( (*(_BYTE *)(v129 + 306) & 1) == 0 )
        sub_AA65A4(*v125[6]);
      j_il2cpp_runtime_class_init_0(v129);
    }
  }
  v130 = *v125[6];
  if ( (*(_BYTE *)(v130 + 306) & 1) == 0 )
    sub_AA65A4(*v125[6]);
  v131 = (_QWORD **)Method_System_Array_Empty_int___;
  servantIds = **(System_Int32_array ***)(v130 + 184);
  v132 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v133 = *(_WORD *)(v132 + 306);
  if ( (v133 & 1) == 0 )
  {
    sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v133 = *(_WORD *)(v132 + 306);
  }
  if ( (v133 & 0x400) != 0 )
  {
    v134 = *v131[6];
    if ( (*(_BYTE *)(v134 + 306) & 1) == 0 )
      sub_AA65A4(*v131[6]);
    if ( !*(_DWORD *)(v134 + 224) )
    {
      v135 = *v131[6];
      if ( (*(_BYTE *)(v135 + 306) & 1) == 0 )
        sub_AA65A4(*v131[6]);
      j_il2cpp_runtime_class_init_0(v135);
    }
  }
  v136 = *v131[6];
  if ( (*(_BYTE *)(v136 + 306) & 1) == 0 )
    sub_AA65A4(*v131[6]);
  classImageIds = **(System_Int32_array ***)(v136 + 184);
  v137 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo,
                                                                                                    v123,
                                                                                                    v124);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v137,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v137;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( !*v76 )
    goto LABEL_252;
  v138 = (char)partyMemberItem;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_30625648(
                                         questRestrictionInfo,
                                         (*v76)->fields._InitPos_k__BackingField,
                                         0LL);
  if ( (v138 & 1) == 0 )
  {
    if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
    {
      if ( !*v76 )
        goto LABEL_252;
      servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                     questRestrictionInfo,
                     &npcInfoDictionary,
                     (*v76)->fields._InitPos_k__BackingField,
                     0,
                     0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      partyMemberItem = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !partyMemberItem )
        goto LABEL_252;
      partyMemberItem = (System_String_o *)QuestPhaseMaster__TryGetEntity(
                                             (QuestPhaseMaster_o *)partyMemberItem,
                                             &v224,
                                             questRestrictionInfo->fields.questId,
                                             questRestrictionInfo->fields.questPhase,
                                             0LL);
      if ( !servantIds )
        goto LABEL_252;
      if ( !*(_QWORD *)&servantIds->max_length )
        goto LABEL_135;
      if ( !*v76 )
        goto LABEL_252;
      IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                    questRestrictionInfo,
                                    (*v76)->fields._InitPos_k__BackingField,
                                    0LL);
      v143 = v224;
      if ( !v224 )
        goto LABEL_135;
      goto LABEL_96;
    }
    v149 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                       System_Collections_Generic_List_int__TypeInfo,
                                                       v139,
                                                       v140);
    System_Collections_Generic_List_int____ctor(
      v149,
      (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !*v76 )
      goto LABEL_252;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetNeedIndividualityList(
                                           questRestrictionInfo,
                                           (*v76)->fields._InitPos_k__BackingField,
                                           0LL);
    if ( !*v76 )
      goto LABEL_252;
    v150 = partyMemberItem;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetRangeTypeList(
                                           questRestrictionInfo,
                                           (*v76)->fields._InitPos_k__BackingField,
                                           0LL);
    if ( !v150 )
      goto LABEL_252;
    if ( SLODWORD(v150[1].klass) >= 1 )
    {
      v151 = partyMemberItem;
      v152 = 0LL;
      while ( v151 )
      {
        if ( (__int64)v152 < SLODWORD(v151[1].klass) )
        {
          if ( v152 >= LODWORD(v151[1].klass) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          if ( *(_DWORD *)(*(_QWORD *)&v151->fields + 4 * v152 + 32) == 1 )
          {
            if ( v152 >= LODWORD(v150[1].klass) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            if ( !v149 )
              goto LABEL_252;
            System_Collections_Generic_List_int___AddRange(
              v149,
              *(System_Collections_Generic_IEnumerable_T__o **)(*(_QWORD *)&v150->fields + 8 * v152 + 32),
              (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
          }
        }
        if ( (__int64)++v152 >= SLODWORD(v150[1].klass) )
          goto LABEL_132;
      }
      goto LABEL_252;
    }
LABEL_132:
    if ( !v149 )
      goto LABEL_252;
    partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                           v149,
                                           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
    v148 = (System_Int32_array *)partyMemberItem;
LABEL_134:
    RestrictionNotSatisfySlot__GetIconIdFromIndividuality(
      (RestrictionNotSatisfySlot_o *)partyMemberItem,
      &servantIds,
      &classImageIds,
      v148,
      v141);
    goto LABEL_135;
  }
  if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
  {
    if ( !v87 )
      goto LABEL_252;
    monitor = v87[1].monitor;
    if ( !monitor )
    {
LABEL_135:
      partyMemberItem = (System_String_o *)servantIds;
      if ( !servantIds )
        goto LABEL_252;
      goto LABEL_136;
    }
    if ( !(_DWORD)monitor )
      goto LABEL_253;
    v147 = v87[2].klass;
    if ( !v147 )
      goto LABEL_252;
    v148 = *(System_Int32_array **)&v147->_1.byval_arg.bits;
    goto LABEL_134;
  }
  if ( !*v76 )
    goto LABEL_252;
  servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                 questRestrictionInfo,
                 &npcInfoDictionary,
                 (*v76)->fields._InitPos_k__BackingField,
                 1,
                 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  partyMemberItem = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !partyMemberItem )
    goto LABEL_252;
  partyMemberItem = (System_String_o *)QuestPhaseMaster__TryGetEntity(
                                         (QuestPhaseMaster_o *)partyMemberItem,
                                         &entity,
                                         questRestrictionInfo->fields.questId,
                                         questRestrictionInfo->fields.questPhase,
                                         0LL);
  if ( !servantIds )
    goto LABEL_252;
  if ( !*(_QWORD *)&servantIds->max_length )
    goto LABEL_135;
  if ( !*v76 )
    goto LABEL_252;
  IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                questRestrictionInfo,
                                (*v76)->fields._InitPos_k__BackingField,
                                0LL);
  v143 = entity;
  if ( !entity )
    goto LABEL_135;
LABEL_96:
  if ( !IsSelectableNormalSupport || v143->fields.isNpcOnly )
    goto LABEL_135;
  v144 = (System_Collections_Generic_IEnumerable_T__o *)servantIds;
  v145 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v139, v140);
  System_Collections_Generic_List_int____ctor_50000796(
    v145,
    v144,
    (const MethodInfo_2FAF39C *)Method_System_Collections_Generic_List_int___ctor___67884944);
  if ( !v145 )
    goto LABEL_252;
  System_Collections_Generic_List_int___Add(
    v145,
    0,
    (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                         v145,
                                         (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  servantIds = (System_Int32_array *)partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_252;
LABEL_136:
  if ( partyMemberItem[1].klass )
  {
    partyMemberItem = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( partyMemberItem )
    {
      MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)partyMemberItem,
                                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (NpcServantFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
      v214 = (NpcFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
      v155 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_UIWidget__TypeInfo, v153, v154);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v155,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
      v158 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                         System_Collections_Generic_List_int__TypeInfo,
                                                         v156,
                                                         v157);
      System_Collections_Generic_List_int____ctor(
        v158,
        (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
      v161 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                         System_Collections_Generic_List_int__TypeInfo,
                                                         v159,
                                                         v160);
      System_Collections_Generic_List_int____ctor(
        v161,
        (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
      v164 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                         System_Collections_Generic_List_int__TypeInfo,
                                                         v162,
                                                         v163);
      System_Collections_Generic_List_int____ctor(
        v164,
        (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
      v167 = (System_Collections_Generic_List_bool__o *)sub_B0D974(
                                                          System_Collections_Generic_List_bool__TypeInfo,
                                                          v165,
                                                          v166);
      System_Collections_Generic_List_bool____ctor(
        v167,
        (const MethodInfo_2F3865C *)Method_System_Collections_Generic_List_bool___ctor__);
      v168 = servantIds;
      if ( servantIds )
      {
        v169 = *(_QWORD *)&servantIds->max_length;
        v216 = v155;
        if ( (int)v169 < 1 )
          goto LABEL_206;
        v219 = &servantIds->m_Items[1];
        v170 = 0;
        v171 = 0LL;
        v218 = servantIds;
        do
        {
          if ( v171 >= (unsigned int)v169 )
            goto LABEL_253;
          if ( !v158 )
            goto LABEL_252;
          v172 = v219[v171];
          System_Collections_Generic_List_int___Add(
            v158,
            v172,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          partyMemberItem = (System_String_o *)npcInfoDictionary;
          if ( !npcInfoDictionary )
            goto LABEL_252;
          if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                  (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)npcInfoDictionary,
                  v172,
                  (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
            goto LABEL_259;
          partyMemberItem = (System_String_o *)npcInfoDictionary;
          if ( !npcInfoDictionary )
            goto LABEL_252;
          Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                   (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)npcInfoDictionary,
                   v172,
                   (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
          if ( Item )
          {
            v174 = (FollowerInfo_o *)Item;
            questId = questRestrictionInfoa->fields.questId;
            questPhase = questRestrictionInfoa->fields.questPhase;
            ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0LL);
            LimitCount = FollowerInfo__getLimitCount(v174, 0, ReturnTypeByQuestId, 0LL);
            partyMemberItem = (System_String_o *)Master_WarQuestSelectionMaster;
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_252;
            partyMemberItem = (System_String_o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                                   Master_WarQuestSelectionMaster,
                                                   &npcServantFollowerEntity,
                                                   questId,
                                                   questPhase,
                                                   v172,
                                                   0LL);
            if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
              goto LABEL_166;
            if ( !npcServantFollowerEntity )
              goto LABEL_252;
            partyMemberItem = (System_String_o *)NpcServantFollowerEntity__IsHideRarity(
                                                   npcServantFollowerEntity->fields.flag,
                                                   0LL);
            if ( !v167 )
              goto LABEL_252;
            System_Collections_Generic_List_bool___Add(
              v167,
              (unsigned __int8)partyMemberItem & 1,
              (const MethodInfo_2F393C0 *)Method_System_Collections_Generic_List_bool__Add__);
            if ( !npcServantFollowerEntity )
              goto LABEL_252;
            partyMemberItem = (System_String_o *)v214;
            if ( !v214 )
              goto LABEL_252;
            partyMemberItem = (System_String_o *)NpcFollowerMaster__GetEntity_19793912(
                                                   v214,
                                                   questId,
                                                   questPhase,
                                                   npcServantFollowerEntity->fields.id,
                                                   0LL);
            if ( partyMemberItem )
            {
              partyMemberItem = (System_String_o *)NpcFollowerEntity__GetImageSvtId(
                                                     (NpcFollowerEntity_o *)partyMemberItem,
                                                     0LL);
              v179 = (int)partyMemberItem;
            }
            else
            {
LABEL_166:
              v179 = 0;
            }
            v168 = v218;
            if ( !v161 )
              goto LABEL_252;
          }
          else
          {
LABEL_259:
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            UserId = NetworkManager__get_UserId(0LL);
            partyMemberItem = (System_String_o *)MasterData_WarQuestSelectionMaster;
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_252;
            partyMemberItem = (System_String_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                                   MasterData_WarQuestSelectionMaster,
                                                   UserId,
                                                   v172,
                                                   0LL);
            if ( !partyMemberItem )
              goto LABEL_252;
            if ( !v167 )
              goto LABEL_252;
            LimitCount = (int32_t)partyMemberItem[2].monitor;
            System_Collections_Generic_List_bool___Add(
              v167,
              0,
              (const MethodInfo_2F393C0 *)Method_System_Collections_Generic_List_bool__Add__);
            v179 = 0;
            if ( !v161 )
              goto LABEL_252;
          }
          System_Collections_Generic_List_int___Add(
            v161,
            LimitCount,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          if ( !v164 )
            goto LABEL_252;
          System_Collections_Generic_List_int___Add(
            v164,
            v179,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          ++v170;
          partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
          if ( (BYTE3(RestrictionNotSatisfySlot_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo);
            partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
          }
          if ( v170 >= **(_DWORD **)&partyMemberItem[7].fields )
          {
            partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                                   (BaseMonoBehaviour_o *)v221,
                                                   v221->fields.servantIconsPrefab,
                                                   v221->fields.iconParent,
                                                   0LL,
                                                   0LL);
            if ( !partyMemberItem )
              goto LABEL_252;
            Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)partyMemberItem,
                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
            v182 = System_Collections_Generic_List_int___ToArray(
                     v158,
                     (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
            v183 = System_Collections_Generic_List_int___ToArray(
                     v161,
                     (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
            partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                                   v164,
                                                   (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
            if ( !v167 )
              goto LABEL_252;
            v184 = (System_Int32_array *)partyMemberItem;
            partyMemberItem = (System_String_o *)System_Collections_Generic_List_bool___ToArray(
                                                   v167,
                                                   (const MethodInfo_2F3B508 *)Method_System_Collections_Generic_List_bool__ToArray__);
            if ( !Component_srcLineSprite )
              goto LABEL_252;
            RestrictionNotSatisfySlotIcons__SetServantIcons(
              (RestrictionNotSatisfySlotIcons_o *)Component_srcLineSprite,
              v182,
              v183,
              v184,
              (System_Boolean_array *)partyMemberItem,
              questRestrictionInfoa,
              v185);
            if ( !v216 )
              goto LABEL_252;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v216,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite->fields.mFSM,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
            System_Collections_Generic_List_int___Clear(
              v158,
              (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
            System_Collections_Generic_List_int___Clear(
              v161,
              (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
            System_Collections_Generic_List_int___Clear(
              v164,
              (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
            System_Collections_Generic_List_bool___Clear(
              v167,
              (const MethodInfo_2F397D0 *)Method_System_Collections_Generic_List_bool__Clear__);
            v168 = v218;
            v170 = 0;
          }
          LODWORD(v169) = v168->max_length;
          ++v171;
        }
        while ( (__int64)v171 < (int)v169 );
        if ( v170 )
        {
          partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                                 (BaseMonoBehaviour_o *)v221,
                                                 v221->fields.servantIconsPrefab,
                                                 v221->fields.iconParent,
                                                 0LL,
                                                 0LL);
          if ( !partyMemberItem )
            goto LABEL_252;
          v186 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                   (UnityEngine_GameObject_o *)partyMemberItem,
                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
          v187 = System_Collections_Generic_List_int___ToArray(
                   v158,
                   (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
          v188 = System_Collections_Generic_List_int___ToArray(
                   v161,
                   (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
          partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                                 v164,
                                                 (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
          if ( !v167 )
            goto LABEL_252;
          v189 = (System_Int32_array *)partyMemberItem;
          partyMemberItem = (System_String_o *)System_Collections_Generic_List_bool___ToArray(
                                                 v167,
                                                 (const MethodInfo_2F3B508 *)Method_System_Collections_Generic_List_bool__ToArray__);
          this = v221;
          if ( !v186 )
            goto LABEL_252;
          RestrictionNotSatisfySlotIcons__SetServantIcons(
            (RestrictionNotSatisfySlotIcons_o *)v186,
            v187,
            v188,
            v189,
            (System_Boolean_array *)partyMemberItem,
            questRestrictionInfoa,
            v190);
          v191 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v216;
          if ( !v216 )
            goto LABEL_252;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v216,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v186->fields.mFSM,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
        }
        else
        {
LABEL_206:
          this = v221;
          v191 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v216;
          if ( !v216 )
            goto LABEL_252;
        }
        switchIcons = this->fields.switchIcons;
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                               v191,
                                               (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
        if ( !switchIcons )
          goto LABEL_252;
        v205 = (UIWidget_array *)partyMemberItem;
        v206 = switchIcons;
        goto LABEL_212;
      }
    }
LABEL_252:
    sub_B0D97C(partyMemberItem);
  }
  if ( !classImageIds )
    goto LABEL_252;
  if ( !*(_QWORD *)&classImageIds->max_length )
    goto LABEL_214;
  v192 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_UIWidget__TypeInfo,
                                                                                                   v139,
                                                                                                   v140);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v192,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  v195 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v193, v194);
  System_Collections_Generic_List_int____ctor(
    v195,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v196 = classImageIds;
  if ( !classImageIds )
    goto LABEL_252;
  v197 = *(_QWORD *)&classImageIds->max_length;
  if ( (int)v197 < 1 )
    goto LABEL_209;
  v198 = 0;
  v199 = 0LL;
  do
  {
    if ( v199 >= (unsigned int)v197 )
      goto LABEL_253;
    if ( !v195 )
      goto LABEL_252;
    System_Collections_Generic_List_int___Add(
      v195,
      v196->m_Items[v199 + 1],
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
    ++v198;
    if ( (BYTE3(RestrictionNotSatisfySlot_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo);
      partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
    }
    if ( v198 >= **(_DWORD **)&partyMemberItem[7].fields )
    {
      partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v221,
                                             v221->fields.servantIconsPrefab,
                                             v221->fields.iconParent,
                                             0LL,
                                             0LL);
      if ( !partyMemberItem )
        goto LABEL_252;
      v200 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
               (UnityEngine_GameObject_o *)partyMemberItem,
               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
      partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                             v195,
                                             (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v200 )
        goto LABEL_252;
      RestrictionNotSatisfySlotIcons__SetClassIcons(
        (RestrictionNotSatisfySlotIcons_o *)v200,
        (System_Int32_array *)partyMemberItem,
        v201);
      if ( !v192 )
        goto LABEL_252;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v192,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v200->fields.mFSM,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
      System_Collections_Generic_List_int___Clear(
        v195,
        (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
      v198 = 0;
    }
    LODWORD(v197) = v196->max_length;
    ++v199;
  }
  while ( (__int64)v199 < (int)v197 );
  if ( v198 )
  {
    this = v221;
    partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)v221,
                                           v221->fields.servantIconsPrefab,
                                           v221->fields.iconParent,
                                           0LL,
                                           0LL);
    if ( !partyMemberItem )
      goto LABEL_252;
    v202 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
             (UnityEngine_GameObject_o *)partyMemberItem,
             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
    partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                           v195,
                                           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v202 )
      goto LABEL_252;
    RestrictionNotSatisfySlotIcons__SetClassIcons(
      (RestrictionNotSatisfySlotIcons_o *)v202,
      (System_Int32_array *)partyMemberItem,
      v203);
    if ( !v192 )
      goto LABEL_252;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v192,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v202->fields.mFSM,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
  }
  else
  {
LABEL_209:
    this = v221;
    if ( !v192 )
      goto LABEL_252;
  }
  v207 = this->fields.switchIcons;
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v192,
                                         (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !v207 )
    goto LABEL_252;
  v205 = (UIWidget_array *)partyMemberItem;
  v206 = v207;
LABEL_212:
  SwitchUIWidgetComponent__Set(v206, v205, 0LL);
  partyMemberItem = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !partyMemberItem )
    goto LABEL_252;
  SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)partyMemberItem, 0LL);
LABEL_214:
  partyMemberItem = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !partyMemberItem )
    goto LABEL_252;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyMemberItem, 1, 0LL);
}


void __fastcall RestrictionNotSatisfySlot___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct RestrictionNotSatisfySlot___c_StaticFields *static_fields; // x0

  if ( (byte_4212534 & 1) == 0 )
  {
    sub_B0D8A4(&RestrictionNotSatisfySlot___c_TypeInfo, v1);
    byte_4212534 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(RestrictionNotSatisfySlot___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
  static_fields->__9 = (struct RestrictionNotSatisfySlot___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall RestrictionNotSatisfySlot___c___ctor(RestrictionNotSatisfySlot___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RestrictionNotSatisfySlot___c___SetItem_b__14_1(
        RestrictionNotSatisfySlot___c_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B0D97C(this);
  return entity->fields.type != 15;
}


void __fastcall RestrictionNotSatisfySlot___c__DisplayClass14_0___ctor(
        RestrictionNotSatisfySlot___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RestrictionNotSatisfySlot___c__DisplayClass14_0___SetItem_b__0(
        RestrictionNotSatisfySlot___c__DisplayClass14_0_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  RestrictionNotSatisfySlot___c__DisplayClass14_0_o *v4; // x20
  struct PartyOrganizationListViewItem_o *memberItem; // x8
  int32_t type; // w8

  v4 = this;
  if ( (byte_4212535 & 1) == 0 )
  {
    this = (RestrictionNotSatisfySlot___c__DisplayClass14_0_o *)sub_B0D8A4(
                                                                  &Method_System_Linq_Enumerable_Contains_int___,
                                                                  entity);
    byte_4212535 = 1;
  }
  if ( !entity )
    goto LABEL_14;
  memberItem = v4->fields.memberItem;
  if ( entity->fields.type != 9 )
  {
    if ( memberItem )
      goto LABEL_9;
LABEL_14:
    sub_B0D97C(this);
  }
  if ( !memberItem )
    goto LABEL_14;
  if ( memberItem->fields._InitPos_k__BackingField == 1 )
    return 1;
LABEL_9:
  if ( !System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.targetVals2,
          memberItem->fields._InitPos_k__BackingField,
          (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___) )
    return 0;
  type = entity->fields.type;
  if ( type == 1 )
    return 1;
  return type == 12 || type == 16;
}