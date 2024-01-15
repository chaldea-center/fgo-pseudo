void __fastcall RestrictionNotSatisfySlot___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FC842 & 1) == 0 )
  {
    sub_B16FFC(&RestrictionNotSatisfySlot_TypeInfo, v1);
    byte_40FC842 = 1;
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
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x20
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_40FC840 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, message);
    sub_B16FFC(&string___TypeInfo, v4);
    sub_B16FFC(&StringLiteral_26/*"\n"*/, v5);
    sub_B16FFC(&StringLiteral_15581/*"[-]"*/, v6);
    sub_B16FFC(&StringLiteral_11064/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v7);
    sub_B16FFC(&StringLiteral_15680/*"[FFFF00]"*/, v8);
    byte_40FC840 = 1;
  }
  v9 = sub_B17014(string___TypeInfo, 5LL, method);
  if ( !v9 )
    sub_B170D4();
  v16 = (System_String_array *)v9;
  v17 = (System_String_o *)StringLiteral_15680/*"[FFFF00]"*/;
  if ( StringLiteral_15680/*"[FFFF00]"*/ )
  {
    v17 = (System_String_o *)sub_B170BC(StringLiteral_15680/*"[FFFF00]"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_30;
    v18 = (System_Int32_array **)StringLiteral_15680/*"[FFFF00]"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v16->max_length )
    goto LABEL_29;
  v16->m_Items[0] = (System_String_o *)v18;
  sub_B16F98((BattleServantConfConponent_o *)v16->m_Items, v18, v10, v11, v12, v13, v14, v15);
  if ( message )
  {
    v17 = (System_String_o *)sub_B170BC(message, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_30;
  }
  if ( v16->max_length <= 1 )
    goto LABEL_29;
  v16->m_Items[1] = message;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v16->m_Items[1],
    (System_Int32_array **)message,
    v10,
    v19,
    v20,
    v21,
    v22,
    v23);
  v17 = (System_String_o *)StringLiteral_26/*"\n"*/;
  if ( StringLiteral_26/*"\n"*/ )
  {
    v17 = (System_String_o *)sub_B170BC(StringLiteral_26/*"\n"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_30;
    v18 = (System_Int32_array **)StringLiteral_26/*"\n"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v16->max_length <= 2 )
    goto LABEL_29;
  v16->m_Items[2] = (System_String_o *)v18;
  sub_B16F98((BattleServantConfConponent_o *)&v16->m_Items[2], v18, v10, v24, v25, v26, v27, v28);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11064/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
  v34 = (System_Int32_array **)v17;
  if ( v17 )
  {
    v17 = (System_String_o *)sub_B170BC(v17, v16->obj.klass->_1.element_class);
    if ( !v17 )
    {
LABEL_30:
      sub_B170F4(v17);
      sub_B170A0();
    }
  }
  if ( v16->max_length <= 3 )
    goto LABEL_29;
  v16->m_Items[3] = (System_String_o *)v34;
  sub_B16F98((BattleServantConfConponent_o *)&v16->m_Items[3], v34, v10, v29, v30, v31, v32, v33);
  v17 = (System_String_o *)StringLiteral_15581/*"[-]"*/;
  if ( StringLiteral_15581/*"[-]"*/ )
  {
    v17 = (System_String_o *)sub_B170BC(StringLiteral_15581/*"[-]"*/, v16->obj.klass->_1.element_class);
    if ( v17 )
    {
      v18 = (System_Int32_array **)StringLiteral_15581/*"[-]"*/;
      goto LABEL_27;
    }
    goto LABEL_30;
  }
  v18 = 0LL;
LABEL_27:
  if ( v16->max_length <= 4 )
  {
LABEL_29:
    sub_B17100(v17, v18, v10);
    sub_B170A0();
  }
  v16->m_Items[4] = (System_String_o *)v18;
  sub_B16F98((BattleServantConfConponent_o *)&v16->m_Items[4], v18, v10, v35, v36, v37, v38, v39);
  return System_String__Concat_43823856(v16, 0LL);
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
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_List_int__o *v19; // x24
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_int__o *v24; // x23
  _BOOL8 EntityByIndividuality; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x8
  unsigned __int64 v29; // x27
  int32_t v30; // w26
  const MethodInfo_2F104F0 *v31; // x2
  System_Collections_Generic_List_int__o *v32; // x0
  int32_t iconImageId; // w1
  System_Int32_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  ServantClassEntity_o *v50; // [xsp+10h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_40FC83F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantClassMaster___, servantIds);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v12);
    byte_40FC83F = 1;
  }
  v50 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  v14 = (ServantClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v19 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v15,
                                                    v16,
                                                    v17,
                                                    v18);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v24 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v20,
                                                    v21,
                                                    v22,
                                                    v23);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individuality )
    goto LABEL_24;
  v28 = *(_QWORD *)&individuality->max_length;
  if ( (int)v28 >= 1 )
  {
    v29 = 0LL;
    do
    {
      if ( v29 >= (unsigned int)v28 )
      {
        sub_B17100(EntityByIndividuality, v26, v27);
        sub_B170A0();
      }
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_24;
      v30 = individuality->m_Items[v29 + 1];
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             Master_WarQuestSelectionMaster,
             &entity,
             v30,
             (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
      {
        if ( !v19 )
          goto LABEL_24;
        v31 = (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__;
        v32 = v19;
        iconImageId = v30;
      }
      else
      {
        if ( !v14 )
          goto LABEL_24;
        EntityByIndividuality = ServantClassMaster__TryGetEntityByIndividuality(v14, &v50, v30, 0LL);
        if ( !EntityByIndividuality )
          goto LABEL_20;
        if ( !v50 || !v24 )
          goto LABEL_24;
        iconImageId = v50->fields.iconImageId;
        v31 = (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__;
        v32 = v24;
      }
      System_Collections_Generic_List_int___Add(v32, iconImageId, v31);
LABEL_20:
      LODWORD(v28) = individuality->max_length;
    }
    while ( (__int64)++v29 < (int)v28 );
  }
  if ( !v19
    || (v34 = System_Collections_Generic_List_int___ToArray(
                v19,
                (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__),
        *servantIds = v34,
        sub_B16F98((BattleServantConfConponent_o *)servantIds, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40),
        !v24) )
  {
LABEL_24:
    sub_B170D4();
  }
  v41 = System_Collections_Generic_List_int___ToArray(
          v24,
          (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  *classImageIds = v41;
  sub_B16F98((BattleServantConfConponent_o *)classImageIds, (System_Int32_array **)v41, v42, v43, v44, v45, v46, v47);
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

  if ( (byte_40FC841 & 1) == 0 )
  {
    sub_B16FFC(&System_Text_RegularExpressions_Regex_TypeInfo, message);
    sub_B16FFC(&StringLiteral_15704/*"[[]-[\\]]"*/, v4);
    sub_B16FFC(&StringLiteral_1/*""*/, v5);
    sub_B16FFC(&StringLiteral_15705/*"[[][0-9A-F]{6}[\\]]"*/, v6);
    byte_40FC841 = 1;
  }
  if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  }
  v7 = System_Text_RegularExpressions_Regex__Replace(
         message,
         (System_String_o *)StringLiteral_15705/*"[[][0-9A-F]{6}[\\]]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  return System_Text_RegularExpressions_Regex__Replace(
           v7,
           (System_String_o *)StringLiteral_15704/*"[[]-[\\]]"*/,
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
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  PartyOrganizationListViewItem_o **v75; // x21
  UISprite_o *numberSprite; // x20
  System_String_o *v77; // x0
  System_String_o *v78; // x0
  PartyOrganizationConfirmItemDraw_o *partyMemberItem; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  _QWORD **v84; // x19
  __int64 v85; // x20
  __int16 v86; // w8
  __int64 v87; // x20
  __int64 v88; // x20
  __int64 v89; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v91; // x23
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  __int64 v95; // x4
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v97; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v98; // x0
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x3
  __int64 v102; // x4
  RestrictionNotSatisfySlot___c_c *v103; // x0
  struct RestrictionNotSatisfySlot___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__14_1; // x20
  Il2CppObject *v106; // x24
  struct RestrictionNotSatisfySlot___c_StaticFields *v107; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v114; // x0
  RestrictionNotSatisfySlot_o *Messages_31240276; // x0
  __int64 v116; // x1
  const MethodInfo *v117; // x2
  RestrictionNotSatisfySlot_o *v118; // x20
  struct UnityEngine_GameObject_o *restrictionLabelRoot; // x8
  unsigned __int64 v120; // x19
  System_String_o *v121; // x0
  System_String_o *v122; // x0
  UnityEngine_Component_o *notSatisfyWidget; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v125; // x1
  const MethodInfo *v126; // x2
  __int64 v127; // x3
  __int64 v128; // x4
  PartyOrganizationListViewItem_o *v129; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v130; // x24
  UnityEngine_GameObject_o *v131; // x0
  Il2CppObject *current; // x20
  UILabel_o *restrictionLabel; // x23
  UnityEngine_Transform_o *transform; // x25
  UILabel_o *v135; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v136; // x23
  SwitchUIWidgetComponent_o *switchMessage; // x20
  UIWidget_array *v138; // x0
  __int64 v139; // x1
  __int64 v140; // x2
  __int64 v141; // x3
  __int64 v142; // x4
  _QWORD **v143; // x23
  __int64 v144; // x20
  __int16 v145; // w8
  __int64 v146; // x20
  __int64 v147; // x20
  __int64 v148; // x20
  _QWORD **v149; // x19
  __int64 v150; // x20
  __int16 v151; // w8
  __int64 v152; // x20
  __int64 v153; // x20
  __int64 v154; // x20
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v155; // x20
  bool IsUseOldMaster; // w0
  bool v157; // w20
  __int64 v158; // x3
  const MethodInfo *v159; // x4
  QuestPhaseMaster_o *v160; // x0
  bool IsSelectableNormalSupport; // w0
  QuestPhaseEntity_o *v162; // x8
  System_Collections_Generic_IEnumerable_T__o *v163; // x21
  System_Collections_Generic_List_int__o *v164; // x20
  System_Int32_array *v165; // x0
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x0
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Int32_array *v169; // x3
  System_Collections_Generic_List_int__o *v170; // x22
  System_Collections_Generic_List_int____o *NeedIndividualityList; // x0
  System_Collections_Generic_List_int____o *v172; // x20
  System_Collections_Generic_List_Restriction_RangeType__o *RangeTypeList; // x0
  System_Collections_Generic_List_Restriction_RangeType__o *v174; // x21
  unsigned __int64 v175; // x19
  WebViewManager_o *Instance; // x0
  __int64 v177; // x1
  __int64 v178; // x2
  __int64 v179; // x3
  __int64 v180; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v181; // x21
  __int64 v182; // x1
  __int64 v183; // x2
  __int64 v184; // x3
  __int64 v185; // x4
  System_Collections_Generic_List_int__o *v186; // x23
  __int64 v187; // x1
  __int64 v188; // x2
  __int64 v189; // x3
  __int64 v190; // x4
  System_Collections_Generic_List_int__o *v191; // x24
  __int64 v192; // x1
  __int64 v193; // x2
  __int64 v194; // x3
  __int64 v195; // x4
  System_Collections_Generic_List_int__o *v196; // x25
  __int64 v197; // x1
  __int64 v198; // x2
  __int64 v199; // x3
  __int64 v200; // x4
  System_Collections_Generic_List_bool__o *v201; // x26
  System_Int32_array *v202; // x27
  __int64 v203; // x8
  int v204; // w22
  unsigned __int64 v205; // x19
  int32_t v206; // w20
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  FollowerInfo_o *v208; // x28
  int32_t questPhase; // w21
  int32_t questId; // w27
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w28
  bool IsHideRarity; // w0
  NpcFollowerEntity_o *Entity_21217012; // x0
  int32_t ImageSvtId; // w20
  int64_t UserId; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UnityEngine_GameObject_o *Object; // x0
  srcLineSprite_o *Component_srcLineSprite; // x20
  System_Int32_array *v220; // x21
  System_Int32_array *v221; // x27
  System_Int32_array *v222; // x0
  System_Int32_array *v223; // x28
  System_Boolean_array *v224; // x0
  const MethodInfo *v225; // x6
  UnityEngine_GameObject_o *v226; // x0
  srcLineSprite_o *v227; // x20
  System_Int32_array *v228; // x21
  System_Int32_array *v229; // x22
  System_Int32_array *v230; // x0
  System_Int32_array *v231; // x23
  System_Boolean_array *v232; // x0
  const MethodInfo *v233; // x6
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v234; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v235; // x20
  __int64 v236; // x1
  __int64 v237; // x2
  __int64 v238; // x3
  __int64 v239; // x4
  System_Collections_Generic_List_int__o *v240; // x21
  System_Int32_array *v241; // x19
  __int64 v242; // x8
  int v243; // w22
  unsigned __int64 v244; // x23
  UnityEngine_GameObject_o *v245; // x0
  srcLineSprite_o *v246; // x22
  System_Int32_array *v247; // x0
  const MethodInfo *v248; // x2
  UnityEngine_GameObject_o *v249; // x0
  srcLineSprite_o *v250; // x22
  System_Int32_array *v251; // x0
  const MethodInfo *v252; // x2
  struct SwitchUIWidgetComponent_o *switchIcons; // x20
  WarBoardUiData_SaveData_array *v254; // x0
  UIWidget_array *v255; // x1
  SwitchUIWidgetComponent_o *v256; // x0
  struct SwitchUIWidgetComponent_o *v257; // x21
  WarBoardUiData_SaveData_array *v258; // x0
  SwitchParameterDisplayManager_o *v259; // x0
  UnityEngine_GameObject_o *v260; // x0
  PartyOrganizationListViewItem_o *v261; // x8
  UnityEngine_Component_o *v262; // x0
  UnityEngine_GameObject_o *v263; // x0
  System_String_o *v264; // x0
  int v265; // w19
  _BOOL8 IsQuestRestriction; // x0
  signed __int64 size; // x8
  unsigned __int64 v268; // x20
  System_String_o *fixed; // x0
  NpcFollowerMaster_o *v270; // [xsp+40h] [xbp-100h]
  NpcServantFollowerMaster_o *v271; // [xsp+48h] [xbp-F8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v272; // [xsp+50h] [xbp-F0h]
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+58h] [xbp-E8h]
  System_Int32_array *v274; // [xsp+60h] [xbp-E0h]
  int32_t *v275; // [xsp+68h] [xbp-D8h]
  QuestRestrictionInfo_o *questRestrictionInfoa; // [xsp+70h] [xbp-D0h]
  RestrictionNotSatisfySlot_o *v277; // [xsp+78h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_T__o v278; // [xsp+80h] [xbp-C0h] BYREF
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+98h] [xbp-A8h] BYREF
  QuestPhaseEntity_o *v280; // [xsp+A0h] [xbp-A0h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+A8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v282; // [xsp+B0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+C8h] [xbp-78h] BYREF
  System_Int32_array *classImageIds; // [xsp+D0h] [xbp-70h] BYREF
  System_Int32_array *servantIds; // [xsp+D8h] [xbp-68h] BYREF
  int32_t v286; // [xsp+E4h] [xbp-5Ch] BYREF

  v286 = number;
  if ( (byte_40FC83E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_int___, *(_QWORD *)&number);
    sub_B16FFC(&Method_System_Array_Empty_RestrictionEntity___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_NpcFollowerMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestPhaseMaster___, v12);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v16);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v17);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___, v18);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v22);
    sub_B16FFC(&Method_System_Func_RestrictionEntity__bool___ctor__, v23);
    sub_B16FFC(&System_Func_RestrictionEntity__bool__TypeInfo, v24);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_bool__Add__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v28);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__Add__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v30);
    sub_B16FFC(&Method_System_Collections_Generic_List_bool__Clear__, v31);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, v32);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v33);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v34);
    sub_B16FFC(&Method_System_Collections_Generic_List_bool__ToArray__, v35);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v36);
    sub_B16FFC(&Method_System_Collections_Generic_List_bool___ctor__, v37);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v38);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v39);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget___ctor__, v40);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v41);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v42);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____get_Count__, v43);
    sub_B16FFC(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v44);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v45);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____get_Item__, v46);
    sub_B16FFC(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v47);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__set_Item__, v48);
    sub_B16FFC(&System_Collections_Generic_List_UIWidget__TypeInfo, v49);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v50);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v51);
    sub_B16FFC(&System_Collections_Generic_List_bool__TypeInfo, v52);
    sub_B16FFC(&LocalizationManager_TypeInfo, v53);
    sub_B16FFC(&NetworkManager_TypeInfo, v54);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_UILabel____66874904, v55);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v56);
    sub_B16FFC(&RestrictionNotSatisfySlot_TypeInfo, v57);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v58);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v59);
    sub_B16FFC(&Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__, v60);
    sub_B16FFC(&Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__, v61);
    sub_B16FFC(&RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo, v62);
    sub_B16FFC(&RestrictionNotSatisfySlot___c_TypeInfo, v63);
    sub_B16FFC(&StringLiteral_26/*"\n"*/, v64);
    sub_B16FFC(&StringLiteral_20381/*"member_txt_"*/, v65);
    sub_B16FFC(&StringLiteral_11061/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/, v66);
    sub_B16FFC(&StringLiteral_1/*""*/, v67);
    byte_40FC83E = 1;
  }
  classImageIds = 0LL;
  servantIds = 0LL;
  npcInfoDictionary = 0LL;
  memset(&v282, 0, sizeof(v282));
  entity = 0LL;
  npcServantFollowerEntity = 0LL;
  v280 = 0LL;
  v68 = sub_B170CC(
          RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo,
          *(_QWORD *)&number,
          memberItem,
          questRestrictionInfo,
          method);
  RestrictionNotSatisfySlot___c__DisplayClass14_0___ctor((RestrictionNotSatisfySlot___c__DisplayClass14_0_o *)v68, 0LL);
  if ( !v68 )
    goto LABEL_252;
  *(_QWORD *)(v68 + 16) = memberItem;
  v75 = (PartyOrganizationListViewItem_o **)(v68 + 16);
  sub_B16F98(
    (BattleServantConfConponent_o *)(v68 + 16),
    (System_Int32_array **)memberItem,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  numberSprite = this->fields.numberSprite;
  v77 = System_Int32__ToString((int32_t)&v286, 0LL);
  v78 = System_String__Concat_43743732((System_String_o *)StringLiteral_20381/*"member_txt_"*/, v77, 0LL);
  if ( !numberSprite )
    goto LABEL_252;
  UISprite__set_spriteName(numberSprite, v78, 0LL);
  partyMemberItem = this->fields.partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_252;
  PartyOrganizationConfirmItemDraw__SetItem(partyMemberItem, *v75, 3, 0, 0, 0, 0, 0LL);
  v84 = (_QWORD **)Method_System_Array_Empty_RestrictionEntity___;
  v85 = **((_QWORD **)Method_System_Array_Empty_RestrictionEntity___ + 6);
  v86 = *(_WORD *)(v85 + 306);
  if ( (v86 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_RestrictionEntity___ + 6));
    v86 = *(_WORD *)(v85 + 306);
  }
  if ( (v86 & 0x400) != 0 )
  {
    v87 = *v84[6];
    if ( (*(_BYTE *)(v87 + 306) & 1) == 0 )
      sub_AAFCFC(*v84[6]);
    if ( !*(_DWORD *)(v87 + 224) )
    {
      v88 = *v84[6];
      if ( (*(_BYTE *)(v88 + 306) & 1) == 0 )
        sub_AAFCFC(*v84[6]);
      j_il2cpp_runtime_class_init_0(v88);
    }
  }
  v89 = *v84[6];
  if ( (*(_BYTE *)(v89 + 306) & 1) == 0 )
    sub_AAFCFC(*v84[6]);
  v90 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v89 + 184);
  v91 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v80,
                                                                                                  v81,
                                                                                                  v82,
                                                                                                  v83);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v91,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !questRestrictionInfo )
    goto LABEL_252;
  questRestrictionInfoa = questRestrictionInfo;
  v277 = this;
  if ( QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL) )
  {
    restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
    v97 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_RestrictionEntity__bool__TypeInfo,
                                                                               v92,
                                                                               v93,
                                                                               v94,
                                                                               v95);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v97,
      (Il2CppObject *)v68,
      Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_RestrictionEntity__bool___ctor__);
    v98 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            restrictionEntityList,
            (System_Func_TSource__bool__o *)v97,
            (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    v90 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                 v98,
                                                                 (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    if ( questRestrictionInfo->fields.isUniqueServant && questRestrictionInfo->fields.isUniqueIndividuality )
    {
      v103 = RestrictionNotSatisfySlot___c_TypeInfo;
      if ( (BYTE3(RestrictionNotSatisfySlot___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !RestrictionNotSatisfySlot___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot___c_TypeInfo);
        v103 = RestrictionNotSatisfySlot___c_TypeInfo;
      }
      static_fields = v103->static_fields;
      _9__14_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__14_1;
      if ( !_9__14_1 )
      {
        if ( (BYTE3(v103->vtable._0_Equals.methodPtr) & 4) != 0 && !v103->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v103);
          static_fields = RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
        }
        v106 = (Il2CppObject *)static_fields->__9;
        _9__14_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                        System_Func_RestrictionEntity__bool__TypeInfo,
                                                                                        v99,
                                                                                        v100,
                                                                                        v101,
                                                                                        v102);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__14_1,
          v106,
          Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_RestrictionEntity__bool___ctor__);
        v107 = RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
        v107->__9__14_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__14_1;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v107->__9__14_1,
          (System_Int32_array **)_9__14_1,
          v108,
          v109,
          v110,
          v111,
          v112,
          v113);
      }
      v114 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               v90,
               (System_Func_TSource__bool__o *)_9__14_1,
               (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v90 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                   v114,
                                                                   (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    }
    Messages_31240276 = (RestrictionNotSatisfySlot_o *)QuestRestrictionInfo__GetMessages_31240276(
                                                         questRestrictionInfo,
                                                         (RestrictionEntity_array *)v90,
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
    if ( !*v75 )
      goto LABEL_252;
    Messages_31240276 = (RestrictionNotSatisfySlot_o *)QuestRestrictionInfo__GetMessages(
                                                         questRestrictionInfo,
                                                         (*v75)->fields._InitPos_k__BackingField,
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
  v118 = Messages_31240276;
  if ( !Messages_31240276 )
    goto LABEL_252;
  restrictionLabelRoot = Messages_31240276->fields.restrictionLabelRoot;
  if ( restrictionLabelRoot && (int)restrictionLabelRoot >= 1 )
  {
    v120 = 0LL;
    while ( v120 < (unsigned int)restrictionLabelRoot )
    {
      v121 = RestrictionNotSatisfySlot__RemoveColorCode(
               Messages_31240276,
               *((System_String_o **)&v118->fields.restrictionLabel + v120),
               v117);
      if ( !v121 )
        goto LABEL_252;
      v122 = System_String__Replace_43750968(
               v121,
               (System_String_o *)StringLiteral_26/*"\n"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0LL);
      if ( !v91 )
        goto LABEL_252;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v91,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v122,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      LODWORD(restrictionLabelRoot) = v118->fields.restrictionLabelRoot;
      if ( (__int64)++v120 >= (int)restrictionLabelRoot )
        goto LABEL_41;
    }
LABEL_253:
    sub_B17100(Messages_31240276, v116, v117);
    sub_B170A0();
  }
LABEL_41:
  notSatisfyWidget = (UnityEngine_Component_o *)this->fields.notSatisfyWidget;
  if ( !notSatisfyWidget )
    goto LABEL_252;
  gameObject = UnityEngine_Component__get_gameObject(notSatisfyWidget, 0LL);
  if ( !gameObject )
    goto LABEL_252;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( !*v75 )
    goto LABEL_252;
  if ( !PartyOrganizationListViewItem__get_IsSupportOnly(*v75, 0LL) )
  {
    if ( !*v75 )
      goto LABEL_252;
    if ( !PartyOrganizationListViewItem__get_IsFixedMyServantSingle(*v75, 0LL) )
    {
      v129 = *v75;
      if ( !*v75 )
        goto LABEL_252;
      if ( !v129->fields.isServantNumRestriction && !v129->fields.isFixMultipleNpcRestriction )
      {
        if ( PartyOrganizationListViewItem__get_IsQuestRestriction(v129, 0LL) )
          goto LABEL_231;
        if ( !*v75 )
          goto LABEL_252;
        if ( PartyOrganizationListViewItem__get_IsEmpty(*v75, 0LL) )
        {
          if ( !*v75 )
            goto LABEL_252;
          if ( QuestRestrictionInfo__IsSetRequired(
                 questRestrictionInfo,
                 v286,
                 (*v75)->fields._InitPos_k__BackingField,
                 0LL) )
          {
            goto LABEL_231;
          }
        }
        v261 = *v75;
        if ( !*v75 )
          goto LABEL_252;
        if ( v261->fields.isUniqueSvtRestriction
          || v261->fields.isUniqueIndividualityRestriction
          || (v261->fields.fatigureTime & 0x8000000000000000LL) == 0
          || v261->fields._IsAllOutBattle_k__BackingField
          || v261->fields._IsDataLost_k__BackingField
          || v261->fields._TimesToRestart_k__BackingField > 0
          || v261->fields._IsNotSupportSingle_k__BackingField
          || v261->fields.isFixedServantPositionRestriction
          || v261->fields.isFixedSupportPositionRestriction )
        {
LABEL_231:
          v262 = (UnityEngine_Component_o *)this->fields.notSatisfyWidget;
          if ( !v262 )
            goto LABEL_252;
          v263 = UnityEngine_Component__get_gameObject(v262, 0LL);
          if ( !v263 )
            goto LABEL_252;
          UnityEngine_GameObject__SetActive(v263, 1, 0LL);
          if ( !*v75 )
            goto LABEL_252;
          if ( !PartyOrganizationListViewItem__get_IsEmpty(*v75, 0LL) )
            goto LABEL_242;
          if ( !*v75 )
            goto LABEL_252;
          if ( QuestRestrictionInfo__IsSetRequired(
                 questRestrictionInfo,
                 v286,
                 (*v75)->fields._InitPos_k__BackingField,
                 0LL) )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v264 = LocalizationManager__Get((System_String_o *)StringLiteral_11061/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/, 0LL);
            if ( !v91 )
              goto LABEL_252;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v91,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v264,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
            v265 = 1;
          }
          else
          {
LABEL_242:
            v265 = 0;
          }
          if ( !*v75 )
            goto LABEL_252;
          IsQuestRestriction = PartyOrganizationListViewItem__get_IsQuestRestriction(*v75, 0LL);
          if ( v265 | IsQuestRestriction )
          {
            if ( !v91 )
              goto LABEL_252;
            LODWORD(size) = v91->fields._size;
            if ( (int)size >= 1 )
            {
              v268 = 0LL;
              do
              {
                if ( v268 >= (unsigned int)size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                fixed = RestrictionNotSatisfySlot__AddColorCodeAndFixMessage(
                          (RestrictionNotSatisfySlot_o *)IsQuestRestriction,
                          (System_String_o *)v91->fields._items->m_Items[v268],
                          v126);
                System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
                  (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v91,
                  v268,
                  (WarBoardManager_TaskList_o *)fixed,
                  (const MethodInfo_2F25A30 *)Method_System_Collections_Generic_List_string__set_Item__);
                size = v91->fields._size;
                ++v268;
              }
              while ( (__int64)v268 < size );
            }
          }
        }
      }
    }
  }
  v130 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_UIWidget__TypeInfo,
                                                                                                   v125,
                                                                                                   v126,
                                                                                                   v127,
                                                                                                   v128);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v130,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  if ( !v91 )
    goto LABEL_252;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v278,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v91,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v282 = v278;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v282,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    v131 = this->fields.restrictionLabelRoot;
    if ( !v131 )
      sub_B170D4();
    current = v282.fields.current;
    restrictionLabel = this->fields.restrictionLabel;
    transform = UnityEngine_GameObject__get_transform(v131, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v135 = UnityEngine_Object__Instantiate_UILabel_(
             restrictionLabel,
             transform,
             (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_UILabel____66874904);
    this = v277;
    v136 = (EventMissionProgressRequest_Argument_ProgressData_o *)v135;
    if ( !v135 )
      sub_B170D4();
    UILabel__set_text(v135, (System_String_o *)current, 0LL);
    if ( !v130 )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v130,
      v136,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v282,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v130 )
    goto LABEL_252;
  switchMessage = this->fields.switchMessage;
  v138 = (UIWidget_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v130,
                             (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !switchMessage )
    goto LABEL_252;
  SwitchUIWidgetComponent__Set(switchMessage, v138, 0LL);
  v143 = (_QWORD **)Method_System_Array_Empty_int___;
  v144 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v145 = *(_WORD *)(v144 + 306);
  if ( (v145 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v145 = *(_WORD *)(v144 + 306);
  }
  if ( (v145 & 0x400) != 0 )
  {
    v146 = *v143[6];
    if ( (*(_BYTE *)(v146 + 306) & 1) == 0 )
      sub_AAFCFC(*v143[6]);
    if ( !*(_DWORD *)(v146 + 224) )
    {
      v147 = *v143[6];
      if ( (*(_BYTE *)(v147 + 306) & 1) == 0 )
        sub_AAFCFC(*v143[6]);
      j_il2cpp_runtime_class_init_0(v147);
    }
  }
  v148 = *v143[6];
  if ( (*(_BYTE *)(v148 + 306) & 1) == 0 )
    sub_AAFCFC(*v143[6]);
  v149 = (_QWORD **)Method_System_Array_Empty_int___;
  servantIds = **(System_Int32_array ***)(v148 + 184);
  v150 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v151 = *(_WORD *)(v150 + 306);
  if ( (v151 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v151 = *(_WORD *)(v150 + 306);
  }
  if ( (v151 & 0x400) != 0 )
  {
    v152 = *v149[6];
    if ( (*(_BYTE *)(v152 + 306) & 1) == 0 )
      sub_AAFCFC(*v149[6]);
    if ( !*(_DWORD *)(v152 + 224) )
    {
      v153 = *v149[6];
      if ( (*(_BYTE *)(v153 + 306) & 1) == 0 )
        sub_AAFCFC(*v149[6]);
      j_il2cpp_runtime_class_init_0(v153);
    }
  }
  v154 = *v149[6];
  if ( (*(_BYTE *)(v154 + 306) & 1) == 0 )
    sub_AAFCFC(*v149[6]);
  classImageIds = **(System_Int32_array ***)(v154 + 184);
  v155 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo,
                                                                                                    v139,
                                                                                                    v140,
                                                                                                    v141,
                                                                                                    v142);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v155,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v155;
  IsUseOldMaster = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( !*v75 )
    goto LABEL_252;
  v157 = IsUseOldMaster;
  Messages_31240276 = (RestrictionNotSatisfySlot_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_31258540(
                                                       questRestrictionInfo,
                                                       (*v75)->fields._InitPos_k__BackingField,
                                                       0LL);
  if ( !v157 )
  {
    if ( ((unsigned __int8)Messages_31240276 & 1) != 0 )
    {
      if ( !*v75 )
        goto LABEL_252;
      servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                     questRestrictionInfo,
                     &npcInfoDictionary,
                     (*v75)->fields._InitPos_k__BackingField,
                     0,
                     0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_252;
      QuestPhaseMaster__TryGetEntity(
        Master_WarQuestSelectionMaster,
        &v280,
        questRestrictionInfo->fields.questId,
        questRestrictionInfo->fields.questPhase,
        0LL);
      if ( !servantIds )
        goto LABEL_252;
      if ( !*(_QWORD *)&servantIds->max_length )
        goto LABEL_135;
      if ( !*v75 )
        goto LABEL_252;
      IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                    questRestrictionInfo,
                                    (*v75)->fields._InitPos_k__BackingField,
                                    0LL);
      v162 = v280;
      if ( !v280 )
        goto LABEL_135;
      goto LABEL_96;
    }
    v170 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                       System_Collections_Generic_List_int__TypeInfo,
                                                       v116,
                                                       v117,
                                                       v158,
                                                       v159);
    System_Collections_Generic_List_int____ctor(
      v170,
      (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !*v75 )
      goto LABEL_252;
    NeedIndividualityList = QuestRestrictionInfo__GetNeedIndividualityList(
                              questRestrictionInfo,
                              (*v75)->fields._InitPos_k__BackingField,
                              0LL);
    if ( !*v75 )
      goto LABEL_252;
    v172 = NeedIndividualityList;
    RangeTypeList = QuestRestrictionInfo__GetRangeTypeList(
                      questRestrictionInfo,
                      (*v75)->fields._InitPos_k__BackingField,
                      0LL);
    if ( !v172 )
      goto LABEL_252;
    if ( v172->fields._size >= 1 )
    {
      v174 = RangeTypeList;
      v175 = 0LL;
      while ( v174 )
      {
        if ( (__int64)v175 < v174->fields._size )
        {
          if ( v175 >= (unsigned int)v174->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          if ( v174->fields._items->m_Items[v175 + 1] == 1 )
          {
            if ( v175 >= (unsigned int)v172->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            if ( !v170 )
              goto LABEL_252;
            System_Collections_Generic_List_int___AddRange(
              v170,
              (System_Collections_Generic_IEnumerable_T__o *)v172->fields._items->m_Items[v175],
              (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
          }
        }
        if ( (__int64)++v175 >= v172->fields._size )
          goto LABEL_132;
      }
      goto LABEL_252;
    }
LABEL_132:
    if ( !v170 )
      goto LABEL_252;
    Messages_31240276 = (RestrictionNotSatisfySlot_o *)System_Collections_Generic_List_int___ToArray(
                                                         v170,
                                                         (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
    v169 = (System_Int32_array *)Messages_31240276;
LABEL_134:
    RestrictionNotSatisfySlot__GetIconIdFromIndividuality(Messages_31240276, &servantIds, &classImageIds, v169, v159);
    goto LABEL_135;
  }
  if ( ((unsigned __int8)Messages_31240276 & 1) == 0 )
  {
    if ( !v90 )
      goto LABEL_252;
    monitor = v90[1].monitor;
    if ( !monitor )
    {
LABEL_135:
      v165 = servantIds;
      if ( !servantIds )
        goto LABEL_252;
      goto LABEL_136;
    }
    if ( !(_DWORD)monitor )
      goto LABEL_253;
    klass = v90[2].klass;
    if ( !klass )
      goto LABEL_252;
    v169 = *(System_Int32_array **)&klass->_1.byval_arg.bits;
    goto LABEL_134;
  }
  if ( !*v75 )
    goto LABEL_252;
  servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                 questRestrictionInfo,
                 &npcInfoDictionary,
                 (*v75)->fields._InitPos_k__BackingField,
                 1,
                 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v160 = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !v160 )
    goto LABEL_252;
  QuestPhaseMaster__TryGetEntity(
    v160,
    &entity,
    questRestrictionInfo->fields.questId,
    questRestrictionInfo->fields.questPhase,
    0LL);
  if ( !servantIds )
    goto LABEL_252;
  if ( !*(_QWORD *)&servantIds->max_length )
    goto LABEL_135;
  if ( !*v75 )
    goto LABEL_252;
  IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                questRestrictionInfo,
                                (*v75)->fields._InitPos_k__BackingField,
                                0LL);
  v162 = entity;
  if ( !entity )
    goto LABEL_135;
LABEL_96:
  if ( !IsSelectableNormalSupport || v162->fields.isNpcOnly )
    goto LABEL_135;
  v163 = (System_Collections_Generic_IEnumerable_T__o *)servantIds;
  v164 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v116,
                                                     v117,
                                                     v158,
                                                     v159);
  System_Collections_Generic_List_int____ctor_49346956(
    v164,
    v163,
    (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
  if ( !v164 )
    goto LABEL_252;
  System_Collections_Generic_List_int___Add(
    v164,
    0,
    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  v165 = System_Collections_Generic_List_int___ToArray(
           v164,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  servantIds = v165;
  if ( !v165 )
    goto LABEL_252;
LABEL_136:
  if ( *(_QWORD *)&v165->max_length )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)Instance,
                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v271 = (NpcServantFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
      v270 = (NpcFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
      v181 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_UIWidget__TypeInfo, v177, v178, v179, v180);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v181,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
      v186 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                         System_Collections_Generic_List_int__TypeInfo,
                                                         v182,
                                                         v183,
                                                         v184,
                                                         v185);
      System_Collections_Generic_List_int____ctor(
        v186,
        (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
      v191 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                         System_Collections_Generic_List_int__TypeInfo,
                                                         v187,
                                                         v188,
                                                         v189,
                                                         v190);
      System_Collections_Generic_List_int____ctor(
        v191,
        (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
      v196 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                         System_Collections_Generic_List_int__TypeInfo,
                                                         v192,
                                                         v193,
                                                         v194,
                                                         v195);
      System_Collections_Generic_List_int____ctor(
        v196,
        (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
      v201 = (System_Collections_Generic_List_bool__o *)sub_B170CC(
                                                          System_Collections_Generic_List_bool__TypeInfo,
                                                          v197,
                                                          v198,
                                                          v199,
                                                          v200);
      System_Collections_Generic_List_bool____ctor(
        v201,
        (const MethodInfo_2EAED78 *)Method_System_Collections_Generic_List_bool___ctor__);
      v202 = servantIds;
      if ( servantIds )
      {
        v203 = *(_QWORD *)&servantIds->max_length;
        v272 = v181;
        if ( (int)v203 < 1 )
          goto LABEL_206;
        v275 = &servantIds->m_Items[1];
        v204 = 0;
        v205 = 0LL;
        v274 = servantIds;
        do
        {
          if ( v205 >= (unsigned int)v203 )
            goto LABEL_253;
          if ( !v186 )
            goto LABEL_252;
          v206 = v275[v205];
          System_Collections_Generic_List_int___Add(
            v186,
            v206,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          if ( !npcInfoDictionary )
            goto LABEL_252;
          if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                  (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)npcInfoDictionary,
                  v206,
                  (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
            goto LABEL_259;
          if ( !npcInfoDictionary )
            goto LABEL_252;
          Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                   (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)npcInfoDictionary,
                   v206,
                   (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
          if ( Item )
          {
            v208 = (FollowerInfo_o *)Item;
            questId = questRestrictionInfoa->fields.questId;
            questPhase = questRestrictionInfoa->fields.questPhase;
            ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0LL);
            LimitCount = FollowerInfo__getLimitCount(v208, 0, ReturnTypeByQuestId, 0LL);
            if ( !v271 )
              goto LABEL_252;
            if ( !NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                    v271,
                    &npcServantFollowerEntity,
                    questId,
                    questPhase,
                    v206,
                    0LL) )
              goto LABEL_166;
            if ( !npcServantFollowerEntity )
              goto LABEL_252;
            IsHideRarity = NpcServantFollowerEntity__IsHideRarity(npcServantFollowerEntity->fields.flag, 0LL);
            if ( !v201 )
              goto LABEL_252;
            System_Collections_Generic_List_bool___Add(
              v201,
              IsHideRarity,
              (const MethodInfo_2EAFADC *)Method_System_Collections_Generic_List_bool__Add__);
            if ( !npcServantFollowerEntity || !v270 )
              goto LABEL_252;
            Entity_21217012 = NpcFollowerMaster__GetEntity_21217012(
                                v270,
                                questId,
                                questPhase,
                                npcServantFollowerEntity->fields.id,
                                0LL);
            if ( Entity_21217012 )
              ImageSvtId = NpcFollowerEntity__GetImageSvtId(Entity_21217012, 0LL);
            else
LABEL_166:
              ImageSvtId = 0;
            v202 = v274;
            if ( !v191 )
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
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_252;
            EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                                 MasterData_WarQuestSelectionMaster,
                                 UserId,
                                 v206,
                                 0LL);
            if ( !EntityDefinitely )
              goto LABEL_252;
            if ( !v201 )
              goto LABEL_252;
            LimitCount = EntityDefinitely->fields.maxLimitCount;
            System_Collections_Generic_List_bool___Add(
              v201,
              0,
              (const MethodInfo_2EAFADC *)Method_System_Collections_Generic_List_bool__Add__);
            ImageSvtId = 0;
            if ( !v191 )
              goto LABEL_252;
          }
          System_Collections_Generic_List_int___Add(
            v191,
            LimitCount,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          if ( !v196 )
            goto LABEL_252;
          System_Collections_Generic_List_int___Add(
            v196,
            ImageSvtId,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          ++v204;
          Messages_31240276 = (RestrictionNotSatisfySlot_o *)RestrictionNotSatisfySlot_TypeInfo;
          if ( (BYTE3(RestrictionNotSatisfySlot_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo);
            Messages_31240276 = (RestrictionNotSatisfySlot_o *)RestrictionNotSatisfySlot_TypeInfo;
          }
          if ( v204 >= (__int64)Messages_31240276[1].fields.notSatisfyLabel->klass )
          {
            Object = BaseMonoBehaviour__createObject(
                       (BaseMonoBehaviour_o *)v277,
                       v277->fields.servantIconsPrefab,
                       v277->fields.iconParent,
                       0LL,
                       0LL);
            if ( !Object )
              goto LABEL_252;
            Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        Object,
                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
            v220 = System_Collections_Generic_List_int___ToArray(
                     v186,
                     (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
            v221 = System_Collections_Generic_List_int___ToArray(
                     v191,
                     (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
            v222 = System_Collections_Generic_List_int___ToArray(
                     v196,
                     (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
            if ( !v201 )
              goto LABEL_252;
            v223 = v222;
            v224 = System_Collections_Generic_List_bool___ToArray(
                     v201,
                     (const MethodInfo_2EB1C24 *)Method_System_Collections_Generic_List_bool__ToArray__);
            if ( !Component_srcLineSprite )
              goto LABEL_252;
            RestrictionNotSatisfySlotIcons__SetServantIcons(
              (RestrictionNotSatisfySlotIcons_o *)Component_srcLineSprite,
              v220,
              v221,
              v223,
              v224,
              questRestrictionInfoa,
              v225);
            if ( !v272 )
              goto LABEL_252;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v272,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite->fields.mFSM,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
            System_Collections_Generic_List_int___Clear(
              v186,
              (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
            System_Collections_Generic_List_int___Clear(
              v191,
              (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
            System_Collections_Generic_List_int___Clear(
              v196,
              (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
            System_Collections_Generic_List_bool___Clear(
              v201,
              (const MethodInfo_2EAFEEC *)Method_System_Collections_Generic_List_bool__Clear__);
            v202 = v274;
            v204 = 0;
          }
          LODWORD(v203) = v202->max_length;
          ++v205;
        }
        while ( (__int64)v205 < (int)v203 );
        if ( v204 )
        {
          v226 = BaseMonoBehaviour__createObject(
                   (BaseMonoBehaviour_o *)v277,
                   v277->fields.servantIconsPrefab,
                   v277->fields.iconParent,
                   0LL,
                   0LL);
          if ( !v226 )
            goto LABEL_252;
          v227 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                   v226,
                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
          v228 = System_Collections_Generic_List_int___ToArray(
                   v186,
                   (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
          v229 = System_Collections_Generic_List_int___ToArray(
                   v191,
                   (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
          v230 = System_Collections_Generic_List_int___ToArray(
                   v196,
                   (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
          if ( !v201 )
            goto LABEL_252;
          v231 = v230;
          v232 = System_Collections_Generic_List_bool___ToArray(
                   v201,
                   (const MethodInfo_2EB1C24 *)Method_System_Collections_Generic_List_bool__ToArray__);
          this = v277;
          if ( !v227 )
            goto LABEL_252;
          RestrictionNotSatisfySlotIcons__SetServantIcons(
            (RestrictionNotSatisfySlotIcons_o *)v227,
            v228,
            v229,
            v231,
            v232,
            questRestrictionInfoa,
            v233);
          v234 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v272;
          if ( !v272 )
            goto LABEL_252;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v272,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v227->fields.mFSM,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
        }
        else
        {
LABEL_206:
          this = v277;
          v234 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v272;
          if ( !v272 )
            goto LABEL_252;
        }
        switchIcons = this->fields.switchIcons;
        v254 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                 v234,
                 (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
        if ( !switchIcons )
          goto LABEL_252;
        v255 = (UIWidget_array *)v254;
        v256 = switchIcons;
        goto LABEL_212;
      }
    }
LABEL_252:
    sub_B170D4();
  }
  if ( !classImageIds )
    goto LABEL_252;
  if ( !*(_QWORD *)&classImageIds->max_length )
    goto LABEL_214;
  v235 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_UIWidget__TypeInfo,
                                                                                                   v116,
                                                                                                   v117,
                                                                                                   v158,
                                                                                                   v159);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v235,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  v240 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v236,
                                                     v237,
                                                     v238,
                                                     v239);
  System_Collections_Generic_List_int____ctor(
    v240,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v241 = classImageIds;
  if ( !classImageIds )
    goto LABEL_252;
  v242 = *(_QWORD *)&classImageIds->max_length;
  if ( (int)v242 < 1 )
    goto LABEL_209;
  v243 = 0;
  v244 = 0LL;
  do
  {
    if ( v244 >= (unsigned int)v242 )
      goto LABEL_253;
    if ( !v240 )
      goto LABEL_252;
    System_Collections_Generic_List_int___Add(
      v240,
      v241->m_Items[v244 + 1],
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    Messages_31240276 = (RestrictionNotSatisfySlot_o *)RestrictionNotSatisfySlot_TypeInfo;
    ++v243;
    if ( (BYTE3(RestrictionNotSatisfySlot_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo);
      Messages_31240276 = (RestrictionNotSatisfySlot_o *)RestrictionNotSatisfySlot_TypeInfo;
    }
    if ( v243 >= (__int64)Messages_31240276[1].fields.notSatisfyLabel->klass )
    {
      v245 = BaseMonoBehaviour__createObject(
               (BaseMonoBehaviour_o *)v277,
               v277->fields.servantIconsPrefab,
               v277->fields.iconParent,
               0LL,
               0LL);
      if ( !v245 )
        goto LABEL_252;
      v246 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
               v245,
               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
      v247 = System_Collections_Generic_List_int___ToArray(
               v240,
               (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v246 )
        goto LABEL_252;
      RestrictionNotSatisfySlotIcons__SetClassIcons((RestrictionNotSatisfySlotIcons_o *)v246, v247, v248);
      if ( !v235 )
        goto LABEL_252;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v235,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v246->fields.mFSM,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
      System_Collections_Generic_List_int___Clear(
        v240,
        (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
      v243 = 0;
    }
    LODWORD(v242) = v241->max_length;
    ++v244;
  }
  while ( (__int64)v244 < (int)v242 );
  if ( v243 )
  {
    this = v277;
    v249 = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)v277,
             v277->fields.servantIconsPrefab,
             v277->fields.iconParent,
             0LL,
             0LL);
    if ( !v249 )
      goto LABEL_252;
    v250 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
             v249,
             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
    v251 = System_Collections_Generic_List_int___ToArray(
             v240,
             (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v250 )
      goto LABEL_252;
    RestrictionNotSatisfySlotIcons__SetClassIcons((RestrictionNotSatisfySlotIcons_o *)v250, v251, v252);
    if ( !v235 )
      goto LABEL_252;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v235,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v250->fields.mFSM,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
  }
  else
  {
LABEL_209:
    this = v277;
    if ( !v235 )
      goto LABEL_252;
  }
  v257 = this->fields.switchIcons;
  v258 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v235,
           (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !v257 )
    goto LABEL_252;
  v255 = (UIWidget_array *)v258;
  v256 = v257;
LABEL_212:
  SwitchUIWidgetComponent__Set(v256, v255, 0LL);
  v259 = (SwitchParameterDisplayManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !v259 )
    goto LABEL_252;
  SwitchParameterDisplayManager__Reset(v259, 0LL);
LABEL_214:
  v260 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v260 )
    goto LABEL_252;
  UnityEngine_GameObject__SetActive(v260, 1, 0LL);
}


void __fastcall RestrictionNotSatisfySlot___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7431 & 1) == 0 )
  {
    sub_B16FFC(&RestrictionNotSatisfySlot___c_TypeInfo, v1);
    byte_40F7431 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(RestrictionNotSatisfySlot___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
  struct PartyOrganizationListViewItem_o *memberItem; // x8
  int32_t type; // w8

  if ( (byte_40F7432 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, entity);
    byte_40F7432 = 1;
  }
  if ( !entity )
    goto LABEL_14;
  memberItem = this->fields.memberItem;
  if ( entity->fields.type != 9 )
  {
    if ( memberItem )
      goto LABEL_9;
LABEL_14:
    sub_B170D4();
  }
  if ( !memberItem )
    goto LABEL_14;
  if ( memberItem->fields._InitPos_k__BackingField == 1 )
    return 1;
LABEL_9:
  if ( !System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.targetVals2,
          memberItem->fields._InitPos_k__BackingField,
          (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___) )
    return 0;
  type = entity->fields.type;
  if ( type == 1 )
    return 1;
  return type == 12 || type == 16;
}