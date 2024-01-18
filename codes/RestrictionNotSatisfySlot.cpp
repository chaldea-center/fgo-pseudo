void __fastcall RestrictionNotSatisfySlot___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418BB63 & 1) == 0 )
  {
    sub_B2C35C(&RestrictionNotSatisfySlot_TypeInfo, v1);
    byte_418BB63 = 1;
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
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array *v17; // x19
  System_String_o *v18; // x0
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x20
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x1
  __int64 v48; // x0
  __int64 v49; // x0

  if ( (byte_418BB61 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, message);
    sub_B2C35C(&string___TypeInfo, v4);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v5);
    sub_B2C35C(&StringLiteral_15644/*"[-]"*/, v6);
    sub_B2C35C(&StringLiteral_11100/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v7);
    sub_B2C35C(&StringLiteral_15743/*"[FFFF00]"*/, v8);
    byte_418BB61 = 1;
  }
  v9 = sub_B2C374(string___TypeInfo, 5LL);
  if ( !v9 )
    sub_B2C434(0LL, v10);
  v17 = (System_String_array *)v9;
  v18 = (System_String_o *)StringLiteral_15743/*"[FFFF00]"*/;
  if ( StringLiteral_15743/*"[FFFF00]"*/ )
  {
    v18 = (System_String_o *)sub_B2C41C(StringLiteral_15743/*"[FFFF00]"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_30;
    v19 = (System_Int32_array **)StringLiteral_15743/*"[FFFF00]"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( !v17->max_length )
    goto LABEL_29;
  v17->m_Items[0] = (System_String_o *)v19;
  sub_B2C2F8((BattleServantConfConponent_o *)v17->m_Items, v19, v11, v12, v13, v14, v15, v16);
  if ( message )
  {
    v18 = (System_String_o *)sub_B2C41C(message, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_30;
  }
  if ( v17->max_length <= 1 )
    goto LABEL_29;
  v17->m_Items[1] = message;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v17->m_Items[1],
    (System_Int32_array **)message,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v18 = (System_String_o *)StringLiteral_26/*"\n"*/;
  if ( StringLiteral_26/*"\n"*/ )
  {
    v18 = (System_String_o *)sub_B2C41C(StringLiteral_26/*"\n"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_30;
    v32 = (System_Int32_array **)StringLiteral_26/*"\n"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( v17->max_length <= 2 )
    goto LABEL_29;
  v17->m_Items[2] = (System_String_o *)v32;
  sub_B2C2F8((BattleServantConfConponent_o *)&v17->m_Items[2], v32, v26, v27, v28, v29, v30, v31);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11100/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
  v39 = (System_Int32_array **)v18;
  if ( v18 )
  {
    v18 = (System_String_o *)sub_B2C41C(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
    {
LABEL_30:
      v49 = sub_B2C454(v18);
      sub_B2C400(v49, 0LL);
    }
  }
  if ( v17->max_length <= 3 )
    goto LABEL_29;
  v17->m_Items[3] = (System_String_o *)v39;
  sub_B2C2F8((BattleServantConfConponent_o *)&v17->m_Items[3], v39, v33, v34, v35, v36, v37, v38);
  v18 = (System_String_o *)StringLiteral_15644/*"[-]"*/;
  if ( StringLiteral_15644/*"[-]"*/ )
  {
    v18 = (System_String_o *)sub_B2C41C(StringLiteral_15644/*"[-]"*/, v17->obj.klass->_1.element_class);
    if ( v18 )
    {
      v46 = (System_Int32_array **)StringLiteral_15644/*"[-]"*/;
      goto LABEL_27;
    }
    goto LABEL_30;
  }
  v46 = 0LL;
LABEL_27:
  if ( v17->max_length <= 4 )
  {
LABEL_29:
    v48 = sub_B2C460(v18);
    sub_B2C400(v48, 0LL);
  }
  v17->m_Items[4] = (System_String_o *)v46;
  sub_B2C2F8((BattleServantConfConponent_o *)&v17->m_Items[4], v46, v40, v41, v42, v43, v44, v45);
  return System_String__Concat_44385656(v17, 0LL);
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
  System_Collections_Generic_List_int__o *v15; // x24
  System_Collections_Generic_List_int__o *v16; // x23
  _BOOL8 EntityByIndividuality; // x0
  __int64 v18; // x1
  __int64 v19; // x8
  unsigned __int64 v20; // x27
  int32_t v21; // w26
  const MethodInfo_2F66FF8 *v22; // x2
  System_Collections_Generic_List_int__o *v23; // x0
  int32_t iconImageId; // w1
  System_Int32_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x0
  ServantClassEntity_o *v42; // [xsp+10h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_418BB60 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantClassMaster___, servantIds);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v12);
    byte_418BB60 = 1;
  }
  v42 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
  v14 = (ServantClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantClassMaster___);
  v15 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v16 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individuality )
    goto LABEL_24;
  v19 = *(_QWORD *)&individuality->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = 0LL;
    do
    {
      if ( v20 >= (unsigned int)v19 )
      {
        v39 = sub_B2C460(EntityByIndividuality);
        sub_B2C400(v39, 0LL);
      }
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_24;
      v21 = individuality->m_Items[v20 + 1];
      EntityByIndividuality = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                Master_WarQuestSelectionMaster,
                                &entity,
                                v21,
                                (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( EntityByIndividuality )
      {
        if ( !v15 )
          goto LABEL_24;
        v22 = (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__;
        v23 = v15;
        iconImageId = v21;
      }
      else
      {
        if ( !v14 )
          goto LABEL_24;
        EntityByIndividuality = ServantClassMaster__TryGetEntityByIndividuality(v14, &v42, v21, 0LL);
        if ( !EntityByIndividuality )
          goto LABEL_20;
        if ( !v42 || !v16 )
          goto LABEL_24;
        iconImageId = v42->fields.iconImageId;
        v22 = (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__;
        v23 = v16;
      }
      System_Collections_Generic_List_int___Add(v23, iconImageId, v22);
LABEL_20:
      LODWORD(v19) = individuality->max_length;
    }
    while ( (__int64)++v20 < (int)v19 );
  }
  if ( !v15
    || (v25 = System_Collections_Generic_List_int___ToArray(
                v15,
                (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__),
        *servantIds = v25,
        sub_B2C2F8((BattleServantConfConponent_o *)servantIds, (System_Int32_array **)v25, v26, v27, v28, v29, v30, v31),
        !v16) )
  {
LABEL_24:
    sub_B2C434(EntityByIndividuality, v18);
  }
  v32 = System_Collections_Generic_List_int___ToArray(
          v16,
          (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  *classImageIds = v32;
  sub_B2C2F8((BattleServantConfConponent_o *)classImageIds, (System_Int32_array **)v32, v33, v34, v35, v36, v37, v38);
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

  if ( (byte_418BB62 & 1) == 0 )
  {
    sub_B2C35C(&System_Text_RegularExpressions_Regex_TypeInfo, message);
    sub_B2C35C(&StringLiteral_15767/*"[[]-[\\]]"*/, v4);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    sub_B2C35C(&StringLiteral_15768/*"[[][0-9A-F]{6}[\\]]"*/, v6);
    byte_418BB62 = 1;
  }
  if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  }
  v7 = System_Text_RegularExpressions_Regex__Replace(
         message,
         (System_String_o *)StringLiteral_15768/*"[[][0-9A-F]{6}[\\]]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  return System_Text_RegularExpressions_Regex__Replace(
           v7,
           (System_String_o *)StringLiteral_15767/*"[[]-[\\]]"*/,
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
  int64_t UserId; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  PartyOrganizationListViewItem_o **v77; // x21
  UISprite_o *numberSprite; // x20
  System_String_o *v79; // x0
  _QWORD **v80; // x19
  __int64 v81; // x20
  __int16 v82; // w8
  __int64 v83; // x20
  __int64 v84; // x20
  __int64 v85; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v87; // x23
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v89; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x0
  RestrictionNotSatisfySlot___c_c *v91; // x0
  struct RestrictionNotSatisfySlot___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__14_1; // x20
  Il2CppObject *v94; // x24
  struct RestrictionNotSatisfySlot___c_StaticFields *v95; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v102; // x0
  const MethodInfo *v103; // x2
  System_String_o *v104; // x20
  System_String_c *klass; // x8
  unsigned __int64 v106; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v107; // x24
  __int64 v108; // x1
  UnityEngine_GameObject_o *restrictionLabelRoot; // x0
  Il2CppObject *current; // x20
  UILabel_o *restrictionLabel; // x23
  UnityEngine_Transform_o *transform; // x25
  UILabel_o *v113; // x0
  __int64 v114; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v115; // x23
  __int64 v116; // x0
  __int64 v117; // x1
  SwitchUIWidgetComponent_o *switchMessage; // x20
  _QWORD **v119; // x23
  __int64 v120; // x20
  __int16 v121; // w8
  __int64 v122; // x20
  __int64 v123; // x20
  __int64 v124; // x20
  _QWORD **v125; // x19
  __int64 v126; // x20
  __int16 v127; // w8
  __int64 v128; // x20
  __int64 v129; // x20
  __int64 v130; // x20
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v131; // x20
  char v132; // w20
  const MethodInfo *v133; // x4
  bool IsSelectableNormalSupport; // w0
  QuestPhaseEntity_o *v135; // x8
  System_Collections_Generic_IEnumerable_T__o *v136; // x21
  System_Collections_Generic_List_int__o *v137; // x20
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_TSource__c *v139; // x8
  System_Int32_array *v140; // x3
  System_Collections_Generic_List_int__o *v141; // x22
  System_String_o *v142; // x20
  System_String_o *v143; // x21
  unsigned __int64 v144; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v145; // x21
  System_Collections_Generic_List_int__o *v146; // x23
  System_Collections_Generic_List_int__o *v147; // x24
  System_Collections_Generic_List_int__o *v148; // x25
  System_Collections_Generic_List_bool__o *v149; // x26
  System_Int32_array *v150; // x27
  __int64 v151; // x8
  int v152; // w22
  unsigned __int64 v153; // x19
  int32_t v154; // w20
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  FollowerInfo_o *v156; // x28
  int32_t questPhase; // w21
  int32_t questId; // w27
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w28
  int32_t v161; // w20
  srcLineSprite_o *Component_srcLineSprite; // x20
  System_Int32_array *v163; // x21
  System_Int32_array *v164; // x27
  System_Int32_array *v165; // x28
  const MethodInfo *v166; // x6
  srcLineSprite_o *v167; // x20
  System_Int32_array *v168; // x21
  System_Int32_array *v169; // x22
  System_Int32_array *v170; // x23
  const MethodInfo *v171; // x6
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v172; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v173; // x20
  System_Collections_Generic_List_int__o *v174; // x21
  System_Int32_array *v175; // x19
  __int64 v176; // x8
  int v177; // w22
  unsigned __int64 v178; // x23
  srcLineSprite_o *v179; // x22
  const MethodInfo *v180; // x2
  srcLineSprite_o *v181; // x22
  const MethodInfo *v182; // x2
  struct SwitchUIWidgetComponent_o *switchIcons; // x20
  UIWidget_array *v184; // x1
  SwitchUIWidgetComponent_o *v185; // x0
  struct SwitchUIWidgetComponent_o *v186; // x21
  PartyOrganizationListViewItem_o *v187; // x8
  int v188; // w19
  const MethodInfo *v189; // x2
  signed __int64 size; // x8
  unsigned __int64 v191; // x20
  System_String_o *fixed; // x0
  __int64 v193; // x0
  NpcFollowerMaster_o *v194; // [xsp+40h] [xbp-100h]
  NpcServantFollowerMaster_o *Master_WarQuestSelectionMaster; // [xsp+48h] [xbp-F8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v196; // [xsp+50h] [xbp-F0h]
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+58h] [xbp-E8h]
  System_Int32_array *v198; // [xsp+60h] [xbp-E0h]
  int32_t *v199; // [xsp+68h] [xbp-D8h]
  QuestRestrictionInfo_o *questRestrictionInfoa; // [xsp+70h] [xbp-D0h]
  RestrictionNotSatisfySlot_o *v201; // [xsp+78h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_T__o v202; // [xsp+80h] [xbp-C0h] BYREF
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+98h] [xbp-A8h] BYREF
  QuestPhaseEntity_o *v204; // [xsp+A0h] [xbp-A0h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+A8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v206; // [xsp+B0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+C8h] [xbp-78h] BYREF
  System_Int32_array *classImageIds; // [xsp+D0h] [xbp-70h] BYREF
  System_Int32_array *servantIds; // [xsp+D8h] [xbp-68h] BYREF
  int32_t v210; // [xsp+E4h] [xbp-5Ch] BYREF

  v210 = number;
  if ( (byte_418BB5F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_int___, *(_QWORD *)&number);
    sub_B2C35C(&Method_System_Array_Empty_RestrictionEntity___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_NpcFollowerMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v12);
    sub_B2C35C(&DataManager_TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v16);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v17);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___, v18);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v22);
    sub_B2C35C(&Method_System_Func_RestrictionEntity__bool___ctor__, v23);
    sub_B2C35C(&System_Func_RestrictionEntity__bool__TypeInfo, v24);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_bool__Add__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v28);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__Add__, v29);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v30);
    sub_B2C35C(&Method_System_Collections_Generic_List_bool__Clear__, v31);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v32);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v33);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v34);
    sub_B2C35C(&Method_System_Collections_Generic_List_bool__ToArray__, v35);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v36);
    sub_B2C35C(&Method_System_Collections_Generic_List_bool___ctor___67301528, v37);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v38);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v39);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget___ctor__, v40);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v41);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v42);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____get_Count__, v43);
    sub_B2C35C(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v44);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v45);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____get_Item__, v46);
    sub_B2C35C(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v47);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__set_Item__, v48);
    sub_B2C35C(&System_Collections_Generic_List_UIWidget__TypeInfo, v49);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v50);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v51);
    sub_B2C35C(&System_Collections_Generic_List_bool__TypeInfo, v52);
    sub_B2C35C(&LocalizationManager_TypeInfo, v53);
    sub_B2C35C(&NetworkManager_TypeInfo, v54);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_UILabel____67450616, v55);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v56);
    sub_B2C35C(&RestrictionNotSatisfySlot_TypeInfo, v57);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v58);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v59);
    sub_B2C35C(&Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__, v60);
    sub_B2C35C(&Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__, v61);
    sub_B2C35C(&RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo, v62);
    sub_B2C35C(&RestrictionNotSatisfySlot___c_TypeInfo, v63);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v64);
    sub_B2C35C(&StringLiteral_20464/*"member_txt_"*/, v65);
    sub_B2C35C(&StringLiteral_11097/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/, v66);
    sub_B2C35C(&StringLiteral_1/*""*/, v67);
    byte_418BB5F = 1;
  }
  classImageIds = 0LL;
  servantIds = 0LL;
  npcInfoDictionary = 0LL;
  memset(&v206, 0, sizeof(v206));
  entity = 0LL;
  npcServantFollowerEntity = 0LL;
  v204 = 0LL;
  v68 = sub_B2C42C(RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo);
  RestrictionNotSatisfySlot___c__DisplayClass14_0___ctor((RestrictionNotSatisfySlot___c__DisplayClass14_0_o *)v68, 0LL);
  if ( !v68 )
    goto LABEL_252;
  *(_QWORD *)(v68 + 16) = memberItem;
  v77 = (PartyOrganizationListViewItem_o **)(v68 + 16);
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v68 + 16),
    (System_Int32_array **)memberItem,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  numberSprite = this->fields.numberSprite;
  v79 = System_Int32__ToString((int32_t)&v210, 0LL);
  partyMemberItem = System_String__Concat_44305532((System_String_o *)StringLiteral_20464/*"member_txt_"*/, v79, 0LL);
  if ( !numberSprite )
    goto LABEL_252;
  UISprite__set_spriteName(numberSprite, partyMemberItem, 0LL);
  partyMemberItem = (System_String_o *)this->fields.partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_252;
  PartyOrganizationConfirmItemDraw__SetItem(
    (PartyOrganizationConfirmItemDraw_o *)partyMemberItem,
    *v77,
    3,
    0,
    0,
    0,
    0,
    0LL);
  v80 = (_QWORD **)Method_System_Array_Empty_RestrictionEntity___;
  v81 = **((_QWORD **)Method_System_Array_Empty_RestrictionEntity___ + 6);
  v82 = *(_WORD *)(v81 + 306);
  if ( (v82 & 1) == 0 )
  {
    sub_AC505C(**((_QWORD **)Method_System_Array_Empty_RestrictionEntity___ + 6));
    v82 = *(_WORD *)(v81 + 306);
  }
  if ( (v82 & 0x400) != 0 )
  {
    v83 = *v80[6];
    if ( (*(_BYTE *)(v83 + 306) & 1) == 0 )
      sub_AC505C(*v80[6]);
    if ( !*(_DWORD *)(v83 + 224) )
    {
      v84 = *v80[6];
      if ( (*(_BYTE *)(v84 + 306) & 1) == 0 )
        sub_AC505C(*v80[6]);
      j_il2cpp_runtime_class_init_0(v84);
    }
  }
  v85 = *v80[6];
  if ( (*(_BYTE *)(v85 + 306) & 1) == 0 )
    sub_AC505C(*v80[6]);
  v86 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v85 + 184);
  v87 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v87,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  if ( !questRestrictionInfo )
    goto LABEL_252;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  questRestrictionInfoa = questRestrictionInfo;
  v201 = this;
  if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
  {
    restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
    v89 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v89,
      (Il2CppObject *)v68,
      Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__,
      (const MethodInfo_2711C04 *)Method_System_Func_RestrictionEntity__bool___ctor__);
    v90 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            restrictionEntityList,
            (System_Func_TSource__bool__o *)v89,
            (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    v86 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                 v90,
                                                                 (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    if ( questRestrictionInfo->fields.isUniqueServant && questRestrictionInfo->fields.isUniqueIndividuality )
    {
      v91 = RestrictionNotSatisfySlot___c_TypeInfo;
      if ( (BYTE3(RestrictionNotSatisfySlot___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !RestrictionNotSatisfySlot___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot___c_TypeInfo);
        v91 = RestrictionNotSatisfySlot___c_TypeInfo;
      }
      static_fields = v91->static_fields;
      _9__14_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__14_1;
      if ( !_9__14_1 )
      {
        if ( (BYTE3(v91->vtable._0_Equals.methodPtr) & 4) != 0 && !v91->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v91);
          static_fields = RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
        }
        v94 = (Il2CppObject *)static_fields->__9;
        _9__14_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__14_1,
          v94,
          Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__,
          (const MethodInfo_2711C04 *)Method_System_Func_RestrictionEntity__bool___ctor__);
        v95 = RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
        v95->__9__14_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__14_1;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v95->__9__14_1,
          (System_Int32_array **)_9__14_1,
          v96,
          v97,
          v98,
          v99,
          v100,
          v101);
      }
      v102 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               v86,
               (System_Func_TSource__bool__o *)_9__14_1,
               (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v86 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                   v102,
                                                                   (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    }
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetMessages_31222988(
                                           questRestrictionInfo,
                                           (RestrictionEntity_array *)v86,
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
    if ( !*v77 )
      goto LABEL_252;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetMessages(
                                           questRestrictionInfo,
                                           (*v77)->fields._InitPos_k__BackingField,
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
  v104 = partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_252;
  klass = partyMemberItem[1].klass;
  if ( klass && (int)klass >= 1 )
  {
    v106 = 0LL;
    while ( v106 < (unsigned int)klass )
    {
      partyMemberItem = RestrictionNotSatisfySlot__RemoveColorCode(
                          (RestrictionNotSatisfySlot_o *)partyMemberItem,
                          *((System_String_o **)&v104[1].monitor + v106),
                          v103);
      if ( !partyMemberItem )
        goto LABEL_252;
      partyMemberItem = System_String__Replace_44312768(
                          partyMemberItem,
                          (System_String_o *)StringLiteral_26/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
      if ( !v87 )
        goto LABEL_252;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v87,
        (EventMissionProgressRequest_Argument_ProgressData_o *)partyMemberItem,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
      LODWORD(klass) = v104[1].klass;
      if ( (__int64)++v106 >= (int)klass )
        goto LABEL_41;
    }
LABEL_253:
    v193 = sub_B2C460(partyMemberItem);
    sub_B2C400(v193, 0LL);
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
  partyMemberItem = (System_String_o *)*v77;
  if ( !*v77 )
    goto LABEL_252;
  if ( !PartyOrganizationListViewItem__get_IsSupportOnly((PartyOrganizationListViewItem_o *)partyMemberItem, 0LL) )
  {
    partyMemberItem = (System_String_o *)*v77;
    if ( !*v77 )
      goto LABEL_252;
    if ( !PartyOrganizationListViewItem__get_IsFixedMyServantSingle(
            (PartyOrganizationListViewItem_o *)partyMemberItem,
            0LL) )
    {
      partyMemberItem = (System_String_o *)*v77;
      if ( !*v77 )
        goto LABEL_252;
      if ( !LOBYTE(partyMemberItem[8].fields.m_stringLength) && !BYTE1(partyMemberItem[8].fields.m_stringLength) )
      {
        if ( PartyOrganizationListViewItem__get_IsQuestRestriction(
               (PartyOrganizationListViewItem_o *)partyMemberItem,
               0LL) )
        {
          goto LABEL_231;
        }
        partyMemberItem = (System_String_o *)*v77;
        if ( !*v77 )
          goto LABEL_252;
        partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                               (PartyOrganizationListViewItem_o *)partyMemberItem,
                                               0LL);
        if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
        {
          if ( !*v77 )
            goto LABEL_252;
          partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsSetRequired(
                                                 questRestrictionInfo,
                                                 v210,
                                                 (*v77)->fields._InitPos_k__BackingField,
                                                 0LL);
          if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
            goto LABEL_231;
        }
        v187 = *v77;
        if ( !*v77 )
          goto LABEL_252;
        if ( v187->fields.isUniqueSvtRestriction
          || v187->fields.isUniqueIndividualityRestriction
          || (v187->fields.fatigureTime & 0x8000000000000000LL) == 0
          || v187->fields._IsAllOutBattle_k__BackingField
          || v187->fields._IsDataLost_k__BackingField
          || v187->fields._TimesToRestart_k__BackingField > 0
          || v187->fields._IsNotSupportSingle_k__BackingField
          || v187->fields.isFixedServantPositionRestriction
          || v187->fields.isFixedSupportPositionRestriction )
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
          partyMemberItem = (System_String_o *)*v77;
          if ( !*v77 )
            goto LABEL_252;
          partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                                 (PartyOrganizationListViewItem_o *)partyMemberItem,
                                                 0LL);
          if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
            goto LABEL_242;
          if ( !*v77 )
            goto LABEL_252;
          if ( QuestRestrictionInfo__IsSetRequired(
                 questRestrictionInfo,
                 v210,
                 (*v77)->fields._InitPos_k__BackingField,
                 0LL) )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            partyMemberItem = LocalizationManager__Get((System_String_o *)StringLiteral_11097/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/, 0LL);
            if ( !v87 )
              goto LABEL_252;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v87,
              (EventMissionProgressRequest_Argument_ProgressData_o *)partyMemberItem,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
            v188 = 1;
          }
          else
          {
LABEL_242:
            v188 = 0;
          }
          partyMemberItem = (System_String_o *)*v77;
          if ( !*v77 )
            goto LABEL_252;
          partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsQuestRestriction(
                                                 (PartyOrganizationListViewItem_o *)partyMemberItem,
                                                 0LL);
          if ( v188 | (unsigned __int8)partyMemberItem & 1 )
          {
            if ( !v87 )
              goto LABEL_252;
            LODWORD(size) = v87->fields._size;
            if ( (int)size >= 1 )
            {
              v191 = 0LL;
              do
              {
                if ( v191 >= (unsigned int)size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                fixed = RestrictionNotSatisfySlot__AddColorCodeAndFixMessage(
                          (RestrictionNotSatisfySlot_o *)partyMemberItem,
                          (System_String_o *)v87->fields._items->m_Items[v191],
                          v189);
                System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
                  (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v87,
                  v191,
                  (WarBoardManager_TaskList_o *)fixed,
                  (const MethodInfo_2EF41B8 *)Method_System_Collections_Generic_List_string__set_Item__);
                size = v87->fields._size;
                ++v191;
              }
              while ( (__int64)v191 < size );
            }
          }
        }
      }
    }
  }
  v107 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v107,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  if ( !v87 )
    goto LABEL_252;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v202,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v87,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v206 = v202;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v206,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    restrictionLabelRoot = this->fields.restrictionLabelRoot;
    if ( !restrictionLabelRoot )
      sub_B2C434(0LL, v108);
    current = v206.fields.current;
    restrictionLabel = this->fields.restrictionLabel;
    transform = UnityEngine_GameObject__get_transform(restrictionLabelRoot, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v113 = UnityEngine_Object__Instantiate_UILabel_(
             restrictionLabel,
             transform,
             (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_UILabel____67450616);
    this = v201;
    v115 = (EventMissionProgressRequest_Argument_ProgressData_o *)v113;
    if ( !v113 )
      sub_B2C434(0LL, v114);
    UILabel__set_text(v113, (System_String_o *)current, 0LL);
    if ( !v107 )
      sub_B2C434(v116, v117);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v107,
      v115,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v206,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v107 )
    goto LABEL_252;
  switchMessage = this->fields.switchMessage;
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v107,
                                         (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !switchMessage )
    goto LABEL_252;
  SwitchUIWidgetComponent__Set(switchMessage, (UIWidget_array *)partyMemberItem, 0LL);
  v119 = (_QWORD **)Method_System_Array_Empty_int___;
  v120 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v121 = *(_WORD *)(v120 + 306);
  if ( (v121 & 1) == 0 )
  {
    sub_AC505C(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v121 = *(_WORD *)(v120 + 306);
  }
  if ( (v121 & 0x400) != 0 )
  {
    v122 = *v119[6];
    if ( (*(_BYTE *)(v122 + 306) & 1) == 0 )
      sub_AC505C(*v119[6]);
    if ( !*(_DWORD *)(v122 + 224) )
    {
      v123 = *v119[6];
      if ( (*(_BYTE *)(v123 + 306) & 1) == 0 )
        sub_AC505C(*v119[6]);
      j_il2cpp_runtime_class_init_0(v123);
    }
  }
  v124 = *v119[6];
  if ( (*(_BYTE *)(v124 + 306) & 1) == 0 )
    sub_AC505C(*v119[6]);
  v125 = (_QWORD **)Method_System_Array_Empty_int___;
  servantIds = **(System_Int32_array ***)(v124 + 184);
  v126 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v127 = *(_WORD *)(v126 + 306);
  if ( (v127 & 1) == 0 )
  {
    sub_AC505C(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v127 = *(_WORD *)(v126 + 306);
  }
  if ( (v127 & 0x400) != 0 )
  {
    v128 = *v125[6];
    if ( (*(_BYTE *)(v128 + 306) & 1) == 0 )
      sub_AC505C(*v125[6]);
    if ( !*(_DWORD *)(v128 + 224) )
    {
      v129 = *v125[6];
      if ( (*(_BYTE *)(v129 + 306) & 1) == 0 )
        sub_AC505C(*v125[6]);
      j_il2cpp_runtime_class_init_0(v129);
    }
  }
  v130 = *v125[6];
  if ( (*(_BYTE *)(v130 + 306) & 1) == 0 )
    sub_AC505C(*v125[6]);
  classImageIds = **(System_Int32_array ***)(v130 + 184);
  v131 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v131,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v131;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( !*v77 )
    goto LABEL_252;
  v132 = (char)partyMemberItem;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(
                                         questRestrictionInfo,
                                         (*v77)->fields._InitPos_k__BackingField,
                                         0LL);
  if ( (v132 & 1) == 0 )
  {
    if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
    {
      if ( !*v77 )
        goto LABEL_252;
      servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                     questRestrictionInfo,
                     &npcInfoDictionary,
                     (*v77)->fields._InitPos_k__BackingField,
                     0,
                     0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      partyMemberItem = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !partyMemberItem )
        goto LABEL_252;
      partyMemberItem = (System_String_o *)QuestPhaseMaster__TryGetEntity(
                                             (QuestPhaseMaster_o *)partyMemberItem,
                                             &v204,
                                             questRestrictionInfo->fields.questId,
                                             questRestrictionInfo->fields.questPhase,
                                             0LL);
      if ( !servantIds )
        goto LABEL_252;
      if ( !*(_QWORD *)&servantIds->max_length )
        goto LABEL_135;
      if ( !*v77 )
        goto LABEL_252;
      IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                    questRestrictionInfo,
                                    (*v77)->fields._InitPos_k__BackingField,
                                    0LL);
      v135 = v204;
      if ( !v204 )
        goto LABEL_135;
      goto LABEL_96;
    }
    v141 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v141,
      (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !*v77 )
      goto LABEL_252;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetNeedIndividualityList(
                                           questRestrictionInfo,
                                           (*v77)->fields._InitPos_k__BackingField,
                                           0LL);
    if ( !*v77 )
      goto LABEL_252;
    v142 = partyMemberItem;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetRangeTypeList(
                                           questRestrictionInfo,
                                           (*v77)->fields._InitPos_k__BackingField,
                                           0LL);
    if ( !v142 )
      goto LABEL_252;
    if ( SLODWORD(v142[1].klass) >= 1 )
    {
      v143 = partyMemberItem;
      v144 = 0LL;
      while ( v143 )
      {
        if ( (__int64)v144 < SLODWORD(v143[1].klass) )
        {
          if ( v144 >= LODWORD(v143[1].klass) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          if ( *(_DWORD *)(*(_QWORD *)&v143->fields + 4 * v144 + 32) == 1 )
          {
            if ( v144 >= LODWORD(v142[1].klass) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            if ( !v141 )
              goto LABEL_252;
            System_Collections_Generic_List_int___AddRange(
              v141,
              *(System_Collections_Generic_IEnumerable_T__o **)(*(_QWORD *)&v142->fields + 8 * v144 + 32),
              (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
          }
        }
        if ( (__int64)++v144 >= SLODWORD(v142[1].klass) )
          goto LABEL_132;
      }
      goto LABEL_252;
    }
LABEL_132:
    if ( !v141 )
      goto LABEL_252;
    partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                           v141,
                                           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
    v140 = (System_Int32_array *)partyMemberItem;
LABEL_134:
    RestrictionNotSatisfySlot__GetIconIdFromIndividuality(
      (RestrictionNotSatisfySlot_o *)partyMemberItem,
      &servantIds,
      &classImageIds,
      v140,
      v133);
    goto LABEL_135;
  }
  if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
  {
    if ( !v86 )
      goto LABEL_252;
    monitor = v86[1].monitor;
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
    v139 = v86[2].klass;
    if ( !v139 )
      goto LABEL_252;
    v140 = *(System_Int32_array **)&v139->_1.byval_arg.bits;
    goto LABEL_134;
  }
  if ( !*v77 )
    goto LABEL_252;
  servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                 questRestrictionInfo,
                 &npcInfoDictionary,
                 (*v77)->fields._InitPos_k__BackingField,
                 1,
                 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  partyMemberItem = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
  if ( !*v77 )
    goto LABEL_252;
  IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                questRestrictionInfo,
                                (*v77)->fields._InitPos_k__BackingField,
                                0LL);
  v135 = entity;
  if ( !entity )
    goto LABEL_135;
LABEL_96:
  if ( !IsSelectableNormalSupport || v135->fields.isNpcOnly )
    goto LABEL_135;
  v136 = (System_Collections_Generic_IEnumerable_T__o *)servantIds;
  v137 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_49702036(
    v137,
    v136,
    (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
  if ( !v137 )
    goto LABEL_252;
  System_Collections_Generic_List_int___Add(
    v137,
    0,
    (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                         v137,
                                         (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  servantIds = (System_Int32_array *)partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_252;
LABEL_136:
  if ( partyMemberItem[1].klass )
  {
    partyMemberItem = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( partyMemberItem )
    {
      MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)partyMemberItem,
                                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (NpcServantFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
      v194 = (NpcFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
      v145 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UIWidget__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v145,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
      v146 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v146,
        (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
      v147 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v147,
        (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
      v148 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v148,
        (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
      v149 = (System_Collections_Generic_List_bool__o *)sub_B2C42C(System_Collections_Generic_List_bool__TypeInfo);
      System_Collections_Generic_List_bool____ctor(
        v149,
        (const MethodInfo_2F2DCD0 *)Method_System_Collections_Generic_List_bool___ctor___67301528);
      v150 = servantIds;
      if ( servantIds )
      {
        v151 = *(_QWORD *)&servantIds->max_length;
        v196 = v145;
        if ( (int)v151 < 1 )
          goto LABEL_206;
        v199 = &servantIds->m_Items[1];
        v152 = 0;
        v153 = 0LL;
        v198 = servantIds;
        do
        {
          if ( v153 >= (unsigned int)v151 )
            goto LABEL_253;
          if ( !v146 )
            goto LABEL_252;
          v154 = v199[v153];
          System_Collections_Generic_List_int___Add(
            v146,
            v154,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          partyMemberItem = (System_String_o *)npcInfoDictionary;
          if ( !npcInfoDictionary )
            goto LABEL_252;
          if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                  (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)npcInfoDictionary,
                  v154,
                  (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
            goto LABEL_259;
          partyMemberItem = (System_String_o *)npcInfoDictionary;
          if ( !npcInfoDictionary )
            goto LABEL_252;
          Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                   (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)npcInfoDictionary,
                   v154,
                   (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
          if ( Item )
          {
            v156 = (FollowerInfo_o *)Item;
            questId = questRestrictionInfoa->fields.questId;
            questPhase = questRestrictionInfoa->fields.questPhase;
            ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0LL);
            LimitCount = FollowerInfo__getLimitCount(v156, 0, ReturnTypeByQuestId, 0LL);
            partyMemberItem = (System_String_o *)Master_WarQuestSelectionMaster;
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_252;
            partyMemberItem = (System_String_o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                                   Master_WarQuestSelectionMaster,
                                                   &npcServantFollowerEntity,
                                                   questId,
                                                   questPhase,
                                                   v154,
                                                   0LL);
            if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
              goto LABEL_166;
            if ( !npcServantFollowerEntity )
              goto LABEL_252;
            partyMemberItem = (System_String_o *)NpcServantFollowerEntity__IsHideRarity(
                                                   npcServantFollowerEntity->fields.flag,
                                                   0LL);
            if ( !v149 )
              goto LABEL_252;
            System_Collections_Generic_List_bool___Add(
              v149,
              (unsigned __int8)partyMemberItem & 1,
              (const MethodInfo_2F2EA34 *)Method_System_Collections_Generic_List_bool__Add__);
            if ( !npcServantFollowerEntity )
              goto LABEL_252;
            partyMemberItem = (System_String_o *)v194;
            if ( !v194 )
              goto LABEL_252;
            partyMemberItem = (System_String_o *)NpcFollowerMaster__GetEntity_20112236(
                                                   v194,
                                                   questId,
                                                   questPhase,
                                                   npcServantFollowerEntity->fields.id,
                                                   0LL);
            if ( partyMemberItem )
            {
              partyMemberItem = (System_String_o *)NpcFollowerEntity__GetImageSvtId(
                                                     (NpcFollowerEntity_o *)partyMemberItem,
                                                     0LL);
              v161 = (int)partyMemberItem;
            }
            else
            {
LABEL_166:
              v161 = 0;
            }
            v150 = v198;
            if ( !v147 )
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
                                                   v154,
                                                   0LL);
            if ( !partyMemberItem )
              goto LABEL_252;
            if ( !v149 )
              goto LABEL_252;
            LimitCount = (int32_t)partyMemberItem[2].monitor;
            System_Collections_Generic_List_bool___Add(
              v149,
              0,
              (const MethodInfo_2F2EA34 *)Method_System_Collections_Generic_List_bool__Add__);
            v161 = 0;
            if ( !v147 )
              goto LABEL_252;
          }
          System_Collections_Generic_List_int___Add(
            v147,
            LimitCount,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          if ( !v148 )
            goto LABEL_252;
          System_Collections_Generic_List_int___Add(
            v148,
            v161,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          ++v152;
          partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
          if ( (BYTE3(RestrictionNotSatisfySlot_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo);
            partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
          }
          if ( v152 >= **(_DWORD **)&partyMemberItem[7].fields )
          {
            partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                                   (BaseMonoBehaviour_o *)v201,
                                                   v201->fields.servantIconsPrefab,
                                                   v201->fields.iconParent,
                                                   0LL,
                                                   0LL);
            if ( !partyMemberItem )
              goto LABEL_252;
            Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)partyMemberItem,
                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
            v163 = System_Collections_Generic_List_int___ToArray(
                     v146,
                     (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
            v164 = System_Collections_Generic_List_int___ToArray(
                     v147,
                     (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
            partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                                   v148,
                                                   (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
            if ( !v149 )
              goto LABEL_252;
            v165 = (System_Int32_array *)partyMemberItem;
            partyMemberItem = (System_String_o *)System_Collections_Generic_List_bool___ToArray(
                                                   v149,
                                                   (const MethodInfo_2F30B7C *)Method_System_Collections_Generic_List_bool__ToArray__);
            if ( !Component_srcLineSprite )
              goto LABEL_252;
            RestrictionNotSatisfySlotIcons__SetServantIcons(
              (RestrictionNotSatisfySlotIcons_o *)Component_srcLineSprite,
              v163,
              v164,
              v165,
              (System_Boolean_array *)partyMemberItem,
              questRestrictionInfoa,
              v166);
            if ( !v196 )
              goto LABEL_252;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v196,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite->fields.mFSM,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
            System_Collections_Generic_List_int___Clear(
              v146,
              (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
            System_Collections_Generic_List_int___Clear(
              v147,
              (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
            System_Collections_Generic_List_int___Clear(
              v148,
              (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
            System_Collections_Generic_List_bool___Clear(
              v149,
              (const MethodInfo_2F2EE44 *)Method_System_Collections_Generic_List_bool__Clear__);
            v150 = v198;
            v152 = 0;
          }
          LODWORD(v151) = v150->max_length;
          ++v153;
        }
        while ( (__int64)v153 < (int)v151 );
        if ( v152 )
        {
          partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                                 (BaseMonoBehaviour_o *)v201,
                                                 v201->fields.servantIconsPrefab,
                                                 v201->fields.iconParent,
                                                 0LL,
                                                 0LL);
          if ( !partyMemberItem )
            goto LABEL_252;
          v167 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                   (UnityEngine_GameObject_o *)partyMemberItem,
                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
          v168 = System_Collections_Generic_List_int___ToArray(
                   v146,
                   (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
          v169 = System_Collections_Generic_List_int___ToArray(
                   v147,
                   (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
          partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                                 v148,
                                                 (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
          if ( !v149 )
            goto LABEL_252;
          v170 = (System_Int32_array *)partyMemberItem;
          partyMemberItem = (System_String_o *)System_Collections_Generic_List_bool___ToArray(
                                                 v149,
                                                 (const MethodInfo_2F30B7C *)Method_System_Collections_Generic_List_bool__ToArray__);
          this = v201;
          if ( !v167 )
            goto LABEL_252;
          RestrictionNotSatisfySlotIcons__SetServantIcons(
            (RestrictionNotSatisfySlotIcons_o *)v167,
            v168,
            v169,
            v170,
            (System_Boolean_array *)partyMemberItem,
            questRestrictionInfoa,
            v171);
          v172 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v196;
          if ( !v196 )
            goto LABEL_252;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v196,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v167->fields.mFSM,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
        }
        else
        {
LABEL_206:
          this = v201;
          v172 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v196;
          if ( !v196 )
            goto LABEL_252;
        }
        switchIcons = this->fields.switchIcons;
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                               v172,
                                               (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
        if ( !switchIcons )
          goto LABEL_252;
        v184 = (UIWidget_array *)partyMemberItem;
        v185 = switchIcons;
        goto LABEL_212;
      }
    }
LABEL_252:
    sub_B2C434(partyMemberItem, UserId);
  }
  if ( !classImageIds )
    goto LABEL_252;
  if ( !*(_QWORD *)&classImageIds->max_length )
    goto LABEL_214;
  v173 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v173,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  v174 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v174,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v175 = classImageIds;
  if ( !classImageIds )
    goto LABEL_252;
  v176 = *(_QWORD *)&classImageIds->max_length;
  if ( (int)v176 < 1 )
    goto LABEL_209;
  v177 = 0;
  v178 = 0LL;
  do
  {
    if ( v178 >= (unsigned int)v176 )
      goto LABEL_253;
    if ( !v174 )
      goto LABEL_252;
    System_Collections_Generic_List_int___Add(
      v174,
      v175->m_Items[v178 + 1],
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
    ++v177;
    if ( (BYTE3(RestrictionNotSatisfySlot_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo);
      partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
    }
    if ( v177 >= **(_DWORD **)&partyMemberItem[7].fields )
    {
      partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v201,
                                             v201->fields.servantIconsPrefab,
                                             v201->fields.iconParent,
                                             0LL,
                                             0LL);
      if ( !partyMemberItem )
        goto LABEL_252;
      v179 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
               (UnityEngine_GameObject_o *)partyMemberItem,
               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
      partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                             v174,
                                             (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v179 )
        goto LABEL_252;
      RestrictionNotSatisfySlotIcons__SetClassIcons(
        (RestrictionNotSatisfySlotIcons_o *)v179,
        (System_Int32_array *)partyMemberItem,
        v180);
      if ( !v173 )
        goto LABEL_252;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v173,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v179->fields.mFSM,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
      System_Collections_Generic_List_int___Clear(
        v174,
        (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
      v177 = 0;
    }
    LODWORD(v176) = v175->max_length;
    ++v178;
  }
  while ( (__int64)v178 < (int)v176 );
  if ( v177 )
  {
    this = v201;
    partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)v201,
                                           v201->fields.servantIconsPrefab,
                                           v201->fields.iconParent,
                                           0LL,
                                           0LL);
    if ( !partyMemberItem )
      goto LABEL_252;
    v181 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
             (UnityEngine_GameObject_o *)partyMemberItem,
             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
    partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                           v174,
                                           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v181 )
      goto LABEL_252;
    RestrictionNotSatisfySlotIcons__SetClassIcons(
      (RestrictionNotSatisfySlotIcons_o *)v181,
      (System_Int32_array *)partyMemberItem,
      v182);
    if ( !v173 )
      goto LABEL_252;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v173,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v181->fields.mFSM,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
  }
  else
  {
LABEL_209:
    this = v201;
    if ( !v173 )
      goto LABEL_252;
  }
  v186 = this->fields.switchIcons;
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v173,
                                         (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !v186 )
    goto LABEL_252;
  v184 = (UIWidget_array *)partyMemberItem;
  v185 = v186;
LABEL_212:
  SwitchUIWidgetComponent__Set(v185, v184, 0LL);
  partyMemberItem = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
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
  Il2CppObject *v2; // x19
  struct RestrictionNotSatisfySlot___c_StaticFields *static_fields; // x0

  if ( (byte_4185663 & 1) == 0 )
  {
    sub_B2C35C(&RestrictionNotSatisfySlot___c_TypeInfo, v1);
    byte_4185663 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(RestrictionNotSatisfySlot___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
  static_fields->__9 = (struct RestrictionNotSatisfySlot___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
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
  if ( (byte_4185664 & 1) == 0 )
  {
    this = (RestrictionNotSatisfySlot___c__DisplayClass14_0_o *)sub_B2C35C(
                                                                  &Method_System_Linq_Enumerable_Contains_int___,
                                                                  entity);
    byte_4185664 = 1;
  }
  if ( !entity )
    goto LABEL_14;
  memberItem = v4->fields.memberItem;
  if ( entity->fields.type != 9 )
  {
    if ( memberItem )
      goto LABEL_9;
LABEL_14:
    sub_B2C434(this, entity);
  }
  if ( !memberItem )
    goto LABEL_14;
  if ( memberItem->fields._InitPos_k__BackingField == 1 )
    return 1;
LABEL_9:
  if ( !System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.targetVals2,
          memberItem->fields._InitPos_k__BackingField,
          (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___) )
    return 0;
  type = entity->fields.type;
  if ( type == 1 )
    return 1;
  return type == 12 || type == 16;
}