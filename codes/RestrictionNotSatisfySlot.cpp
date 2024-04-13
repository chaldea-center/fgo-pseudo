void __fastcall RestrictionNotSatisfySlot___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAF10 & 1) == 0 )
  {
    sub_B5D5C4(&RestrictionNotSatisfySlot_TypeInfo, v1, v2, v3);
    byte_42EAF10 = 1;
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array *v28; // x19
  System_String_o *v29; // x0
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x20
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x1
  __int64 v59; // x0
  __int64 v60; // x0

  if ( (byte_42EAF0E & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)message, (_DWORD)method, v3);
    sub_B5D5C4(&string___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_15834/*"[-]"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_11233/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_15933/*"[FFFF00]"*/, v17, v18, v19);
    byte_42EAF0E = 1;
  }
  v20 = sub_B5D5DC(string___TypeInfo, 5LL);
  if ( !v20 )
    sub_B5D69C(0LL, v21);
  v28 = (System_String_array *)v20;
  v29 = (System_String_o *)StringLiteral_15933/*"[FFFF00]"*/;
  if ( StringLiteral_15933/*"[FFFF00]"*/ )
  {
    v29 = (System_String_o *)sub_B5D684(StringLiteral_15933/*"[FFFF00]"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_30;
    v30 = (System_Int32_array **)StringLiteral_15933/*"[FFFF00]"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( !v28->max_length )
    goto LABEL_29;
  v28->m_Items[0] = (System_String_o *)v30;
  sub_B5D560((BattleServantConfConponent_o *)v28->m_Items, v30, v22, v23, v24, v25, v26, v27);
  if ( message )
  {
    v29 = (System_String_o *)sub_B5D684(message, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_30;
  }
  if ( v28->max_length <= 1 )
    goto LABEL_29;
  v28->m_Items[1] = message;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v28->m_Items[1],
    (System_Int32_array **)message,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v29 = (System_String_o *)StringLiteral_26/*"\n"*/;
  if ( StringLiteral_26/*"\n"*/ )
  {
    v29 = (System_String_o *)sub_B5D684(StringLiteral_26/*"\n"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_30;
    v43 = (System_Int32_array **)StringLiteral_26/*"\n"*/;
  }
  else
  {
    v43 = 0LL;
  }
  if ( v28->max_length <= 2 )
    goto LABEL_29;
  v28->m_Items[2] = (System_String_o *)v43;
  sub_B5D560((BattleServantConfConponent_o *)&v28->m_Items[2], v43, v37, v38, v39, v40, v41, v42);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11233/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
  v50 = (System_Int32_array **)v29;
  if ( v29 )
  {
    v29 = (System_String_o *)sub_B5D684(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
    {
LABEL_30:
      v60 = sub_B5D6BC(v29);
      sub_B5D668(v60, 0LL);
    }
  }
  if ( v28->max_length <= 3 )
    goto LABEL_29;
  v28->m_Items[3] = (System_String_o *)v50;
  sub_B5D560((BattleServantConfConponent_o *)&v28->m_Items[3], v50, v44, v45, v46, v47, v48, v49);
  v29 = (System_String_o *)StringLiteral_15834/*"[-]"*/;
  if ( StringLiteral_15834/*"[-]"*/ )
  {
    v29 = (System_String_o *)sub_B5D684(StringLiteral_15834/*"[-]"*/, v28->obj.klass->_1.element_class);
    if ( v29 )
    {
      v57 = (System_Int32_array **)StringLiteral_15834/*"[-]"*/;
      goto LABEL_27;
    }
    goto LABEL_30;
  }
  v57 = 0LL;
LABEL_27:
  if ( v28->max_length <= 4 )
  {
LABEL_29:
    v59 = sub_B5D6C8(v29);
    sub_B5D668(v59, 0LL);
  }
  v28->m_Items[4] = (System_String_o *)v57;
  sub_B5D560((BattleServantConfConponent_o *)&v28->m_Items[4], v57, v51, v52, v53, v54, v55, v56);
  return System_String__Concat_44657912(v28, 0LL);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x22
  ServantClassMaster_o *v28; // x25
  System_Collections_Generic_List_int__o *v29; // x24
  System_Collections_Generic_List_int__o *v30; // x23
  _BOOL8 EntityByIndividuality; // x0
  __int64 v32; // x1
  __int64 v33; // x8
  unsigned __int64 v34; // x27
  int32_t v35; // w26
  const MethodInfo_308440C *v36; // x2
  System_Collections_Generic_List_int__o *v37; // x0
  int32_t iconImageId; // w1
  System_Int32_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x0
  ServantClassEntity_o *v56; // [xsp+10h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42EAF0D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_ServantClassMaster___,
      (_DWORD)servantIds,
      (_DWORD)classImageIds,
      individuality);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v24, v25, v26);
    byte_42EAF0D = 1;
  }
  v56 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  v28 = (ServantClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantClassMaster___);
  v29 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v30 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !individuality )
    goto LABEL_24;
  v33 = *(_QWORD *)&individuality->max_length;
  if ( (int)v33 >= 1 )
  {
    v34 = 0LL;
    do
    {
      if ( v34 >= (unsigned int)v33 )
      {
        v53 = sub_B5D6C8(EntityByIndividuality);
        sub_B5D668(v53, 0LL);
      }
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_24;
      v35 = individuality->m_Items[v34 + 1];
      EntityByIndividuality = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                Master_WarQuestSelectionMaster,
                                &entity,
                                v35,
                                (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( EntityByIndividuality )
      {
        if ( !v29 )
          goto LABEL_24;
        v36 = (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__;
        v37 = v29;
        iconImageId = v35;
      }
      else
      {
        if ( !v28 )
          goto LABEL_24;
        EntityByIndividuality = ServantClassMaster__TryGetEntityByIndividuality(v28, &v56, v35, 0LL);
        if ( !EntityByIndividuality )
          goto LABEL_20;
        if ( !v56 || !v30 )
          goto LABEL_24;
        iconImageId = v56->fields.iconImageId;
        v36 = (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__;
        v37 = v30;
      }
      System_Collections_Generic_List_int___Add(v37, iconImageId, v36);
LABEL_20:
      LODWORD(v33) = individuality->max_length;
    }
    while ( (__int64)++v34 < (int)v33 );
  }
  if ( !v29
    || (v39 = System_Collections_Generic_List_int___ToArray(
                v29,
                (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__),
        *servantIds = v39,
        sub_B5D560((BattleServantConfConponent_o *)servantIds, (System_Int32_array **)v39, v40, v41, v42, v43, v44, v45),
        !v30) )
  {
LABEL_24:
    sub_B5D69C(EntityByIndividuality, v32);
  }
  v46 = System_Collections_Generic_List_int___ToArray(
          v30,
          (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  *classImageIds = v46;
  sub_B5D560((BattleServantConfConponent_o *)classImageIds, (System_Int32_array **)v46, v47, v48, v49, v50, v51, v52);
}


System_String_o *__fastcall RestrictionNotSatisfySlot__RemoveColorCode(
        RestrictionNotSatisfySlot_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_String_o *v14; // x0

  if ( (byte_42EAF0F & 1) == 0 )
  {
    sub_B5D5C4(&System_Text_RegularExpressions_Regex_TypeInfo, (_DWORD)message, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_15958/*"[[]-[\\]]"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_15959/*"[[][0-9A-F]{6}[\\]]"*/, v11, v12, v13);
    byte_42EAF0F = 1;
  }
  if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  }
  v14 = System_Text_RegularExpressions_Regex__Replace(
          message,
          (System_String_o *)StringLiteral_15959/*"[[][0-9A-F]{6}[\\]]"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  return System_Text_RegularExpressions_Regex__Replace(
           v14,
           (System_String_o *)StringLiteral_15958/*"[[]-[\\]]"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0LL);
}


void __fastcall RestrictionNotSatisfySlot__SetItem(
        RestrictionNotSatisfySlot_o *this,
        int32_t number,
        PartyOrganizationListViewItem_o *memberItem,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  int v104; // w1
  int v105; // w2
  __int64 v106; // x3
  int v107; // w1
  int v108; // w2
  __int64 v109; // x3
  int v110; // w1
  int v111; // w2
  __int64 v112; // x3
  int v113; // w1
  int v114; // w2
  __int64 v115; // x3
  int v116; // w1
  int v117; // w2
  __int64 v118; // x3
  int v119; // w1
  int v120; // w2
  __int64 v121; // x3
  int v122; // w1
  int v123; // w2
  __int64 v124; // x3
  int v125; // w1
  int v126; // w2
  __int64 v127; // x3
  int v128; // w1
  int v129; // w2
  __int64 v130; // x3
  int v131; // w1
  int v132; // w2
  __int64 v133; // x3
  int v134; // w1
  int v135; // w2
  __int64 v136; // x3
  int v137; // w1
  int v138; // w2
  __int64 v139; // x3
  int v140; // w1
  int v141; // w2
  __int64 v142; // x3
  int v143; // w1
  int v144; // w2
  __int64 v145; // x3
  int v146; // w1
  int v147; // w2
  __int64 v148; // x3
  int v149; // w1
  int v150; // w2
  __int64 v151; // x3
  int v152; // w1
  int v153; // w2
  __int64 v154; // x3
  int v155; // w1
  int v156; // w2
  __int64 v157; // x3
  int v158; // w1
  int v159; // w2
  __int64 v160; // x3
  int v161; // w1
  int v162; // w2
  __int64 v163; // x3
  int v164; // w1
  int v165; // w2
  __int64 v166; // x3
  int v167; // w1
  int v168; // w2
  __int64 v169; // x3
  int v170; // w1
  int v171; // w2
  __int64 v172; // x3
  int v173; // w1
  int v174; // w2
  __int64 v175; // x3
  int v176; // w1
  int v177; // w2
  __int64 v178; // x3
  int v179; // w1
  int v180; // w2
  __int64 v181; // x3
  int v182; // w1
  int v183; // w2
  __int64 v184; // x3
  int v185; // w1
  int v186; // w2
  __int64 v187; // x3
  __int64 v188; // x24
  System_String_o *partyMemberItem; // x0
  int64_t UserId; // x1
  System_String_array **v191; // x2
  System_String_array **v192; // x3
  System_Boolean_array **v193; // x4
  System_Int32_array **v194; // x5
  System_Int32_array *v195; // x6
  System_Int32_array *v196; // x7
  PartyOrganizationListViewItem_o **v197; // x21
  UISprite_o *numberSprite; // x20
  System_String_o *v199; // x0
  _QWORD **v200; // x19
  __int64 v201; // x20
  __int16 v202; // w8
  __int64 v203; // x20
  __int64 v204; // x20
  __int64 v205; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v206; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v207; // x23
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v209; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v210; // x0
  RestrictionNotSatisfySlot___c_c *v211; // x0
  struct RestrictionNotSatisfySlot___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__14_1; // x20
  Il2CppObject *v214; // x24
  struct RestrictionNotSatisfySlot___c_StaticFields *v215; // x0
  System_String_array **v216; // x2
  System_String_array **v217; // x3
  System_Boolean_array **v218; // x4
  System_Int32_array **v219; // x5
  System_Int32_array *v220; // x6
  System_Int32_array *v221; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v222; // x0
  const MethodInfo *v223; // x2
  System_String_o *v224; // x20
  System_String_c *klass; // x8
  unsigned __int64 v226; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v227; // x24
  __int64 v228; // x1
  UnityEngine_GameObject_o *restrictionLabelRoot; // x0
  Il2CppObject *current; // x20
  UILabel_o *restrictionLabel; // x23
  UnityEngine_Transform_o *transform; // x25
  UILabel_o *v233; // x0
  __int64 v234; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v235; // x23
  __int64 v236; // x0
  __int64 v237; // x1
  SwitchUIWidgetComponent_o *switchMessage; // x20
  _QWORD **v239; // x23
  __int64 v240; // x20
  __int16 v241; // w8
  __int64 v242; // x20
  __int64 v243; // x20
  __int64 v244; // x20
  _QWORD **v245; // x19
  __int64 v246; // x20
  __int16 v247; // w8
  __int64 v248; // x20
  __int64 v249; // x20
  __int64 v250; // x20
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v251; // x20
  char v252; // w20
  const MethodInfo *v253; // x4
  bool IsSelectableNormalSupport; // w0
  QuestPhaseEntity_o *v255; // x8
  System_Collections_Generic_IEnumerable_T__o *v256; // x21
  System_Collections_Generic_List_int__o *v257; // x20
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_TSource__c *v259; // x8
  System_Int32_array *v260; // x3
  System_Collections_Generic_List_int__o *v261; // x22
  System_String_o *v262; // x20
  System_String_o *v263; // x21
  unsigned __int64 v264; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v265; // x21
  System_Collections_Generic_List_int__o *v266; // x23
  System_Collections_Generic_List_int__o *v267; // x24
  System_Collections_Generic_List_int__o *v268; // x25
  System_Collections_Generic_List_bool__o *v269; // x26
  System_Int32_array *v270; // x27
  __int64 v271; // x8
  int v272; // w22
  unsigned __int64 v273; // x19
  int32_t v274; // w20
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  FollowerInfo_o *v276; // x28
  int32_t questPhase; // w21
  int32_t questId; // w27
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w28
  int32_t v281; // w20
  srcLineSprite_o *Component_srcLineSprite; // x20
  System_Int32_array *v283; // x21
  System_Int32_array *v284; // x27
  System_Int32_array *v285; // x28
  const MethodInfo *v286; // x6
  srcLineSprite_o *v287; // x20
  System_Int32_array *v288; // x21
  System_Int32_array *v289; // x22
  System_Int32_array *v290; // x23
  const MethodInfo *v291; // x6
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v292; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v293; // x20
  System_Collections_Generic_List_int__o *v294; // x21
  System_Int32_array *v295; // x19
  __int64 v296; // x8
  int v297; // w22
  unsigned __int64 v298; // x23
  srcLineSprite_o *v299; // x22
  const MethodInfo *v300; // x2
  srcLineSprite_o *v301; // x22
  const MethodInfo *v302; // x2
  struct SwitchUIWidgetComponent_o *switchIcons; // x20
  UIWidget_array *v304; // x1
  SwitchUIWidgetComponent_o *v305; // x0
  struct SwitchUIWidgetComponent_o *v306; // x21
  PartyOrganizationListViewItem_o *v307; // x8
  int v308; // w19
  const MethodInfo *v309; // x2
  signed __int64 size; // x8
  unsigned __int64 v311; // x20
  System_String_o *fixed; // x0
  __int64 v313; // x0
  NpcFollowerMaster_o *v314; // [xsp+40h] [xbp-100h]
  NpcServantFollowerMaster_o *Master_WarQuestSelectionMaster; // [xsp+48h] [xbp-F8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v316; // [xsp+50h] [xbp-F0h]
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+58h] [xbp-E8h]
  System_Int32_array *v318; // [xsp+60h] [xbp-E0h]
  int32_t *v319; // [xsp+68h] [xbp-D8h]
  QuestRestrictionInfo_o *questRestrictionInfoa; // [xsp+70h] [xbp-D0h]
  RestrictionNotSatisfySlot_o *v321; // [xsp+78h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_T__o v322; // [xsp+80h] [xbp-C0h] BYREF
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+98h] [xbp-A8h] BYREF
  QuestPhaseEntity_o *v324; // [xsp+A0h] [xbp-A0h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+A8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v326; // [xsp+B0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+C8h] [xbp-78h] BYREF
  System_Int32_array *classImageIds; // [xsp+D0h] [xbp-70h] BYREF
  System_Int32_array *servantIds; // [xsp+D8h] [xbp-68h] BYREF
  int32_t v330; // [xsp+E4h] [xbp-5Ch] BYREF

  v330 = number;
  if ( (byte_42EAF0C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_int___, number, (_DWORD)memberItem, questRestrictionInfo);
    sub_B5D5C4(&Method_System_Array_Empty_RestrictionEntity___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMaster_NpcFollowerMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v20, v21, v22);
    sub_B5D5C4(&DataManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___, v38, v39, v40);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v50, v51, v52);
    sub_B5D5C4(&Method_System_Func_RestrictionEntity__bool___ctor__, v53, v54, v55);
    sub_B5D5C4(&System_Func_RestrictionEntity__bool__TypeInfo, v56, v57, v58);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___, v59, v60, v61);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v62, v63, v64);
    sub_B5D5C4(&Method_System_Collections_Generic_List_bool__Add__, v65, v66, v67);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v68, v69, v70);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__Add__, v71, v72, v73);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v74, v75, v76);
    sub_B5D5C4(&Method_System_Collections_Generic_List_bool__Clear__, v77, v78, v79);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, v80, v81, v82);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v83, v84, v85);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v86, v87, v88);
    sub_B5D5C4(&Method_System_Collections_Generic_List_bool__ToArray__, v89, v90, v91);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v92, v93, v94);
    sub_B5D5C4(&Method_System_Collections_Generic_List_bool___ctor__, v95, v96, v97);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v98, v99, v100);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v101, v102, v103);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget___ctor__, v104, v105, v106);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v107, v108, v109);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v110, v111, v112);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____get_Count__, v113, v114, v115);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v116, v117, v118);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v119, v120, v121);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____get_Item__, v122, v123, v124);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v125, v126, v127);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__set_Item__, v128, v129, v130);
    sub_B5D5C4(&System_Collections_Generic_List_UIWidget__TypeInfo, v131, v132, v133);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v134, v135, v136);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v137, v138, v139);
    sub_B5D5C4(&System_Collections_Generic_List_bool__TypeInfo, v140, v141, v142);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v143, v144, v145);
    sub_B5D5C4(&NetworkManager_TypeInfo, v146, v147, v148);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_UILabel____68882824, v149, v150, v151);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v152, v153, v154);
    sub_B5D5C4(&RestrictionNotSatisfySlot_TypeInfo, v155, v156, v157);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v158, v159, v160);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v161, v162, v163);
    sub_B5D5C4(&Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__, v164, v165, v166);
    sub_B5D5C4(&Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__, v167, v168, v169);
    sub_B5D5C4(&RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo, v170, v171, v172);
    sub_B5D5C4(&RestrictionNotSatisfySlot___c_TypeInfo, v173, v174, v175);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v176, v177, v178);
    sub_B5D5C4(&StringLiteral_20724/*"member_txt_"*/, v179, v180, v181);
    sub_B5D5C4(&StringLiteral_11230/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/, v182, v183, v184);
    sub_B5D5C4(&StringLiteral_1/*""*/, v185, v186, v187);
    byte_42EAF0C = 1;
  }
  classImageIds = 0LL;
  servantIds = 0LL;
  npcInfoDictionary = 0LL;
  memset(&v326, 0, sizeof(v326));
  entity = 0LL;
  npcServantFollowerEntity = 0LL;
  v324 = 0LL;
  v188 = sub_B5D694(RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo);
  RestrictionNotSatisfySlot___c__DisplayClass14_0___ctor((RestrictionNotSatisfySlot___c__DisplayClass14_0_o *)v188, 0LL);
  if ( !v188 )
    goto LABEL_252;
  *(_QWORD *)(v188 + 16) = memberItem;
  v197 = (PartyOrganizationListViewItem_o **)(v188 + 16);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v188 + 16),
    (System_Int32_array **)memberItem,
    v191,
    v192,
    v193,
    v194,
    v195,
    v196);
  numberSprite = this->fields.numberSprite;
  v199 = System_Int32__ToString((int32_t)&v330, 0LL);
  partyMemberItem = System_String__Concat_44577788((System_String_o *)StringLiteral_20724/*"member_txt_"*/, v199, 0LL);
  if ( !numberSprite )
    goto LABEL_252;
  UISprite__set_spriteName(numberSprite, partyMemberItem, 0LL);
  partyMemberItem = (System_String_o *)this->fields.partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_252;
  PartyOrganizationConfirmItemDraw__SetItem(
    (PartyOrganizationConfirmItemDraw_o *)partyMemberItem,
    *v197,
    3,
    0,
    0,
    0,
    0,
    0LL);
  v200 = (_QWORD **)Method_System_Array_Empty_RestrictionEntity___;
  v201 = **((_QWORD **)Method_System_Array_Empty_RestrictionEntity___ + 6);
  v202 = *(_WORD *)(v201 + 306);
  if ( (v202 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_RestrictionEntity___ + 6));
    v202 = *(_WORD *)(v201 + 306);
  }
  if ( (v202 & 0x400) != 0 )
  {
    v203 = *v200[6];
    if ( (*(_BYTE *)(v203 + 306) & 1) == 0 )
      sub_AF52C4(*v200[6]);
    if ( !*(_DWORD *)(v203 + 224) )
    {
      v204 = *v200[6];
      if ( (*(_BYTE *)(v204 + 306) & 1) == 0 )
        sub_AF52C4(*v200[6]);
      j_il2cpp_runtime_class_init_0(v204);
    }
  }
  v205 = *v200[6];
  if ( (*(_BYTE *)(v205 + 306) & 1) == 0 )
    sub_AF52C4(*v200[6]);
  v206 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v205 + 184);
  v207 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v207,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !questRestrictionInfo )
    goto LABEL_252;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  questRestrictionInfoa = questRestrictionInfo;
  v321 = this;
  if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
  {
    restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
    v209 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v209,
      (Il2CppObject *)v188,
      Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_RestrictionEntity__bool___ctor__);
    v210 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
             restrictionEntityList,
             (System_Func_TSource__bool__o *)v209,
             (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    v206 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                  v210,
                                                                  (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    if ( questRestrictionInfo->fields.isUniqueServant && questRestrictionInfo->fields.isUniqueIndividuality )
    {
      v211 = RestrictionNotSatisfySlot___c_TypeInfo;
      if ( (BYTE3(RestrictionNotSatisfySlot___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !RestrictionNotSatisfySlot___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot___c_TypeInfo);
        v211 = RestrictionNotSatisfySlot___c_TypeInfo;
      }
      static_fields = v211->static_fields;
      _9__14_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__14_1;
      if ( !_9__14_1 )
      {
        if ( (BYTE3(v211->vtable._0_Equals.methodPtr) & 4) != 0 && !v211->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v211);
          static_fields = RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
        }
        v214 = (Il2CppObject *)static_fields->__9;
        _9__14_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__14_1,
          v214,
          Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_RestrictionEntity__bool___ctor__);
        v215 = RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
        v215->__9__14_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__14_1;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v215->__9__14_1,
          (System_Int32_array **)_9__14_1,
          v216,
          v217,
          v218,
          v219,
          v220,
          v221);
      }
      v222 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               v206,
               (System_Func_TSource__bool__o *)_9__14_1,
               (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v206 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                    v222,
                                                                    (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    }
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetMessages_34260560(
                                           questRestrictionInfo,
                                           (RestrictionEntity_array *)v206,
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
    if ( !*v197 )
      goto LABEL_252;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetMessages(
                                           questRestrictionInfo,
                                           (*v197)->fields._InitPos_k__BackingField,
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
  v224 = partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_252;
  klass = partyMemberItem[1].klass;
  if ( klass && (int)klass >= 1 )
  {
    v226 = 0LL;
    while ( v226 < (unsigned int)klass )
    {
      partyMemberItem = RestrictionNotSatisfySlot__RemoveColorCode(
                          (RestrictionNotSatisfySlot_o *)partyMemberItem,
                          *((System_String_o **)&v224[1].monitor + v226),
                          v223);
      if ( !partyMemberItem )
        goto LABEL_252;
      partyMemberItem = System_String__Replace_44585024(
                          partyMemberItem,
                          (System_String_o *)StringLiteral_26/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
      if ( !v207 )
        goto LABEL_252;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v207,
        (EventMissionProgressRequest_Argument_ProgressData_o *)partyMemberItem,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      LODWORD(klass) = v224[1].klass;
      if ( (__int64)++v226 >= (int)klass )
        goto LABEL_41;
    }
LABEL_253:
    v313 = sub_B5D6C8(partyMemberItem);
    sub_B5D668(v313, 0LL);
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
  partyMemberItem = (System_String_o *)*v197;
  if ( !*v197 )
    goto LABEL_252;
  if ( !PartyOrganizationListViewItem__get_IsSupportOnly((PartyOrganizationListViewItem_o *)partyMemberItem, 0LL) )
  {
    partyMemberItem = (System_String_o *)*v197;
    if ( !*v197 )
      goto LABEL_252;
    if ( !PartyOrganizationListViewItem__get_IsFixedMyServantSingle(
            (PartyOrganizationListViewItem_o *)partyMemberItem,
            0LL) )
    {
      partyMemberItem = (System_String_o *)*v197;
      if ( !*v197 )
        goto LABEL_252;
      if ( !LOBYTE(partyMemberItem[9].klass) && !BYTE1(partyMemberItem[9].klass) )
      {
        if ( PartyOrganizationListViewItem__get_IsQuestRestriction(
               (PartyOrganizationListViewItem_o *)partyMemberItem,
               0LL) )
        {
          goto LABEL_231;
        }
        partyMemberItem = (System_String_o *)*v197;
        if ( !*v197 )
          goto LABEL_252;
        partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                               (PartyOrganizationListViewItem_o *)partyMemberItem,
                                               0LL);
        if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
        {
          if ( !*v197 )
            goto LABEL_252;
          partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsSetRequired(
                                                 questRestrictionInfo,
                                                 v330,
                                                 (*v197)->fields._InitPos_k__BackingField,
                                                 0LL);
          if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
            goto LABEL_231;
        }
        v307 = *v197;
        if ( !*v197 )
          goto LABEL_252;
        if ( v307->fields.isUniqueSvtRestriction
          || v307->fields.isUniqueIndividualityRestriction
          || (v307->fields.fatigureTime & 0x8000000000000000LL) == 0
          || v307->fields._IsAllOutBattle_k__BackingField
          || v307->fields._IsDataLost_k__BackingField
          || v307->fields._TimesToRestart_k__BackingField > 0
          || v307->fields._IsNotSupportSingle_k__BackingField
          || v307->fields.isFixedServantPositionRestriction
          || v307->fields.isFixedSupportPositionRestriction )
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
          partyMemberItem = (System_String_o *)*v197;
          if ( !*v197 )
            goto LABEL_252;
          partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                                 (PartyOrganizationListViewItem_o *)partyMemberItem,
                                                 0LL);
          if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
            goto LABEL_242;
          if ( !*v197 )
            goto LABEL_252;
          if ( QuestRestrictionInfo__IsSetRequired(
                 questRestrictionInfo,
                 v330,
                 (*v197)->fields._InitPos_k__BackingField,
                 0LL) )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            partyMemberItem = LocalizationManager__Get((System_String_o *)StringLiteral_11230/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/, 0LL);
            if ( !v207 )
              goto LABEL_252;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v207,
              (EventMissionProgressRequest_Argument_ProgressData_o *)partyMemberItem,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
            v308 = 1;
          }
          else
          {
LABEL_242:
            v308 = 0;
          }
          partyMemberItem = (System_String_o *)*v197;
          if ( !*v197 )
            goto LABEL_252;
          partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsQuestRestriction(
                                                 (PartyOrganizationListViewItem_o *)partyMemberItem,
                                                 0LL);
          if ( v308 | (unsigned __int8)partyMemberItem & 1 )
          {
            if ( !v207 )
              goto LABEL_252;
            LODWORD(size) = v207->fields._size;
            if ( (int)size >= 1 )
            {
              v311 = 0LL;
              do
              {
                if ( v311 >= (unsigned int)size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                fixed = RestrictionNotSatisfySlot__AddColorCodeAndFixMessage(
                          (RestrictionNotSatisfySlot_o *)partyMemberItem,
                          (System_String_o *)v207->fields._items->m_Items[v311],
                          v309);
                System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
                  (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v207,
                  v311,
                  (WarBoardManager_TaskList_o *)fixed,
                  (const MethodInfo_3056D18 *)Method_System_Collections_Generic_List_string__set_Item__);
                size = v207->fields._size;
                ++v311;
              }
              while ( (__int64)v311 < size );
            }
          }
        }
      }
    }
  }
  v227 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v227,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  if ( !v207 )
    goto LABEL_252;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v322,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v207,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v326 = v322;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v326,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    restrictionLabelRoot = this->fields.restrictionLabelRoot;
    if ( !restrictionLabelRoot )
      sub_B5D69C(0LL, v228);
    current = v326.fields.current;
    restrictionLabel = this->fields.restrictionLabel;
    transform = UnityEngine_GameObject__get_transform(restrictionLabelRoot, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v233 = UnityEngine_Object__Instantiate_UILabel_(
             restrictionLabel,
             transform,
             (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_UILabel____68882824);
    this = v321;
    v235 = (EventMissionProgressRequest_Argument_ProgressData_o *)v233;
    if ( !v233 )
      sub_B5D69C(0LL, v234);
    UILabel__set_text(v233, (System_String_o *)current, 0LL);
    if ( !v227 )
      sub_B5D69C(v236, v237);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v227,
      v235,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v326,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v227 )
    goto LABEL_252;
  switchMessage = this->fields.switchMessage;
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v227,
                                         (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !switchMessage )
    goto LABEL_252;
  SwitchUIWidgetComponent__Set(switchMessage, (UIWidget_array *)partyMemberItem, 0LL);
  v239 = (_QWORD **)Method_System_Array_Empty_int___;
  v240 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v241 = *(_WORD *)(v240 + 306);
  if ( (v241 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v241 = *(_WORD *)(v240 + 306);
  }
  if ( (v241 & 0x400) != 0 )
  {
    v242 = *v239[6];
    if ( (*(_BYTE *)(v242 + 306) & 1) == 0 )
      sub_AF52C4(*v239[6]);
    if ( !*(_DWORD *)(v242 + 224) )
    {
      v243 = *v239[6];
      if ( (*(_BYTE *)(v243 + 306) & 1) == 0 )
        sub_AF52C4(*v239[6]);
      j_il2cpp_runtime_class_init_0(v243);
    }
  }
  v244 = *v239[6];
  if ( (*(_BYTE *)(v244 + 306) & 1) == 0 )
    sub_AF52C4(*v239[6]);
  v245 = (_QWORD **)Method_System_Array_Empty_int___;
  servantIds = **(System_Int32_array ***)(v244 + 184);
  v246 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v247 = *(_WORD *)(v246 + 306);
  if ( (v247 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v247 = *(_WORD *)(v246 + 306);
  }
  if ( (v247 & 0x400) != 0 )
  {
    v248 = *v245[6];
    if ( (*(_BYTE *)(v248 + 306) & 1) == 0 )
      sub_AF52C4(*v245[6]);
    if ( !*(_DWORD *)(v248 + 224) )
    {
      v249 = *v245[6];
      if ( (*(_BYTE *)(v249 + 306) & 1) == 0 )
        sub_AF52C4(*v245[6]);
      j_il2cpp_runtime_class_init_0(v249);
    }
  }
  v250 = *v245[6];
  if ( (*(_BYTE *)(v250 + 306) & 1) == 0 )
    sub_AF52C4(*v245[6]);
  classImageIds = **(System_Int32_array ***)(v250 + 184);
  v251 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v251,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v251;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( !*v197 )
    goto LABEL_252;
  v252 = (char)partyMemberItem;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_34282120(
                                         questRestrictionInfo,
                                         (*v197)->fields._InitPos_k__BackingField,
                                         0LL);
  if ( (v252 & 1) == 0 )
  {
    if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
    {
      if ( !*v197 )
        goto LABEL_252;
      servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                     questRestrictionInfo,
                     &npcInfoDictionary,
                     (*v197)->fields._InitPos_k__BackingField,
                     0,
                     0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      partyMemberItem = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !partyMemberItem )
        goto LABEL_252;
      partyMemberItem = (System_String_o *)QuestPhaseMaster__TryGetEntity(
                                             (QuestPhaseMaster_o *)partyMemberItem,
                                             &v324,
                                             questRestrictionInfo->fields.questId,
                                             questRestrictionInfo->fields.questPhase,
                                             0LL);
      if ( !servantIds )
        goto LABEL_252;
      if ( !*(_QWORD *)&servantIds->max_length )
        goto LABEL_135;
      if ( !*v197 )
        goto LABEL_252;
      IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                    questRestrictionInfo,
                                    (*v197)->fields._InitPos_k__BackingField,
                                    0LL);
      v255 = v324;
      if ( !v324 )
        goto LABEL_135;
      goto LABEL_96;
    }
    v261 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v261,
      (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
    if ( !*v197 )
      goto LABEL_252;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetNeedIndividualityList(
                                           questRestrictionInfo,
                                           (*v197)->fields._InitPos_k__BackingField,
                                           0LL);
    if ( !*v197 )
      goto LABEL_252;
    v262 = partyMemberItem;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetRangeTypeList(
                                           questRestrictionInfo,
                                           (*v197)->fields._InitPos_k__BackingField,
                                           0LL);
    if ( !v262 )
      goto LABEL_252;
    if ( SLODWORD(v262[1].klass) >= 1 )
    {
      v263 = partyMemberItem;
      v264 = 0LL;
      while ( v263 )
      {
        if ( (__int64)v264 < SLODWORD(v263[1].klass) )
        {
          if ( v264 >= LODWORD(v263[1].klass) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          if ( *(_DWORD *)(*(_QWORD *)&v263->fields + 4 * v264 + 32) == 1 )
          {
            if ( v264 >= LODWORD(v262[1].klass) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            if ( !v261 )
              goto LABEL_252;
            System_Collections_Generic_List_int___AddRange(
              v261,
              *(System_Collections_Generic_IEnumerable_T__o **)(*(_QWORD *)&v262->fields + 8 * v264 + 32),
              (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
          }
        }
        if ( (__int64)++v264 >= SLODWORD(v262[1].klass) )
          goto LABEL_132;
      }
      goto LABEL_252;
    }
LABEL_132:
    if ( !v261 )
      goto LABEL_252;
    partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                           v261,
                                           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
    v260 = (System_Int32_array *)partyMemberItem;
LABEL_134:
    RestrictionNotSatisfySlot__GetIconIdFromIndividuality(
      (RestrictionNotSatisfySlot_o *)partyMemberItem,
      &servantIds,
      &classImageIds,
      v260,
      v253);
    goto LABEL_135;
  }
  if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
  {
    if ( !v206 )
      goto LABEL_252;
    monitor = v206[1].monitor;
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
    v259 = v206[2].klass;
    if ( !v259 )
      goto LABEL_252;
    v260 = *(System_Int32_array **)&v259->_1.byval_arg.bits;
    goto LABEL_134;
  }
  if ( !*v197 )
    goto LABEL_252;
  servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                 questRestrictionInfo,
                 &npcInfoDictionary,
                 (*v197)->fields._InitPos_k__BackingField,
                 1,
                 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  partyMemberItem = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
  if ( !*v197 )
    goto LABEL_252;
  IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                questRestrictionInfo,
                                (*v197)->fields._InitPos_k__BackingField,
                                0LL);
  v255 = entity;
  if ( !entity )
    goto LABEL_135;
LABEL_96:
  if ( !IsSelectableNormalSupport || v255->fields.isNpcOnly )
    goto LABEL_135;
  v256 = (System_Collections_Generic_IEnumerable_T__o *)servantIds;
  v257 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50870440(
    v257,
    v256,
    (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v257 )
    goto LABEL_252;
  System_Collections_Generic_List_int___Add(
    v257,
    0,
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                         v257,
                                         (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  servantIds = (System_Int32_array *)partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_252;
LABEL_136:
  if ( partyMemberItem[1].klass )
  {
    partyMemberItem = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( partyMemberItem )
    {
      MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)partyMemberItem,
                                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (NpcServantFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
      v314 = (NpcFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_NpcFollowerMaster___);
      v265 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UIWidget__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v265,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
      v266 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v266,
        (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
      v267 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v267,
        (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
      v268 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v268,
        (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
      v269 = (System_Collections_Generic_List_bool__o *)sub_B5D694(System_Collections_Generic_List_bool__TypeInfo);
      System_Collections_Generic_List_bool____ctor(
        v269,
        (const MethodInfo_30146F0 *)Method_System_Collections_Generic_List_bool___ctor__);
      v270 = servantIds;
      if ( servantIds )
      {
        v271 = *(_QWORD *)&servantIds->max_length;
        v316 = v265;
        if ( (int)v271 < 1 )
          goto LABEL_206;
        v319 = &servantIds->m_Items[1];
        v272 = 0;
        v273 = 0LL;
        v318 = servantIds;
        do
        {
          if ( v273 >= (unsigned int)v271 )
            goto LABEL_253;
          if ( !v266 )
            goto LABEL_252;
          v274 = v319[v273];
          System_Collections_Generic_List_int___Add(
            v266,
            v274,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          partyMemberItem = (System_String_o *)npcInfoDictionary;
          if ( !npcInfoDictionary )
            goto LABEL_252;
          if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                  (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)npcInfoDictionary,
                  v274,
                  (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
            goto LABEL_259;
          partyMemberItem = (System_String_o *)npcInfoDictionary;
          if ( !npcInfoDictionary )
            goto LABEL_252;
          Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                   (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)npcInfoDictionary,
                   v274,
                   (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
          if ( Item )
          {
            v276 = (FollowerInfo_o *)Item;
            questId = questRestrictionInfoa->fields.questId;
            questPhase = questRestrictionInfoa->fields.questPhase;
            ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0LL);
            LimitCount = FollowerInfo__getLimitCount(v276, 0, ReturnTypeByQuestId, 0LL);
            partyMemberItem = (System_String_o *)Master_WarQuestSelectionMaster;
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_252;
            partyMemberItem = (System_String_o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                                   Master_WarQuestSelectionMaster,
                                                   &npcServantFollowerEntity,
                                                   questId,
                                                   questPhase,
                                                   v274,
                                                   0LL);
            if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
              goto LABEL_166;
            if ( !npcServantFollowerEntity )
              goto LABEL_252;
            partyMemberItem = (System_String_o *)NpcServantFollowerEntity__IsHideRarity(
                                                   npcServantFollowerEntity->fields.flag,
                                                   0LL);
            if ( !v269 )
              goto LABEL_252;
            System_Collections_Generic_List_bool___Add(
              v269,
              (unsigned __int8)partyMemberItem & 1,
              (const MethodInfo_3015454 *)Method_System_Collections_Generic_List_bool__Add__);
            if ( !npcServantFollowerEntity )
              goto LABEL_252;
            partyMemberItem = (System_String_o *)v314;
            if ( !v314 )
              goto LABEL_252;
            partyMemberItem = (System_String_o *)NpcFollowerMaster__GetEntity_20688452(
                                                   v314,
                                                   questId,
                                                   questPhase,
                                                   npcServantFollowerEntity->fields.id,
                                                   0LL);
            if ( partyMemberItem )
            {
              partyMemberItem = (System_String_o *)NpcFollowerEntity__GetImageSvtId(
                                                     (NpcFollowerEntity_o *)partyMemberItem,
                                                     0LL);
              v281 = (int)partyMemberItem;
            }
            else
            {
LABEL_166:
              v281 = 0;
            }
            v270 = v318;
            if ( !v267 )
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
                                                   v274,
                                                   0LL);
            if ( !partyMemberItem )
              goto LABEL_252;
            if ( !v269 )
              goto LABEL_252;
            LimitCount = (int32_t)partyMemberItem[2].monitor;
            System_Collections_Generic_List_bool___Add(
              v269,
              0,
              (const MethodInfo_3015454 *)Method_System_Collections_Generic_List_bool__Add__);
            v281 = 0;
            if ( !v267 )
              goto LABEL_252;
          }
          System_Collections_Generic_List_int___Add(
            v267,
            LimitCount,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          if ( !v268 )
            goto LABEL_252;
          System_Collections_Generic_List_int___Add(
            v268,
            v281,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          ++v272;
          partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
          if ( (BYTE3(RestrictionNotSatisfySlot_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo);
            partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
          }
          if ( v272 >= **(_DWORD **)&partyMemberItem[7].fields )
          {
            partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                                   (BaseMonoBehaviour_o *)v321,
                                                   v321->fields.servantIconsPrefab,
                                                   v321->fields.iconParent,
                                                   0LL,
                                                   0LL);
            if ( !partyMemberItem )
              goto LABEL_252;
            Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)partyMemberItem,
                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
            v283 = System_Collections_Generic_List_int___ToArray(
                     v266,
                     (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
            v284 = System_Collections_Generic_List_int___ToArray(
                     v267,
                     (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
            partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                                   v268,
                                                   (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
            if ( !v269 )
              goto LABEL_252;
            v285 = (System_Int32_array *)partyMemberItem;
            partyMemberItem = (System_String_o *)System_Collections_Generic_List_bool___ToArray(
                                                   v269,
                                                   (const MethodInfo_301759C *)Method_System_Collections_Generic_List_bool__ToArray__);
            if ( !Component_srcLineSprite )
              goto LABEL_252;
            RestrictionNotSatisfySlotIcons__SetServantIcons(
              (RestrictionNotSatisfySlotIcons_o *)Component_srcLineSprite,
              v283,
              v284,
              v285,
              (System_Boolean_array *)partyMemberItem,
              questRestrictionInfoa,
              v286);
            if ( !v316 )
              goto LABEL_252;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v316,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite->fields.mFSM,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
            System_Collections_Generic_List_int___Clear(
              v266,
              (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
            System_Collections_Generic_List_int___Clear(
              v267,
              (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
            System_Collections_Generic_List_int___Clear(
              v268,
              (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
            System_Collections_Generic_List_bool___Clear(
              v269,
              (const MethodInfo_3015864 *)Method_System_Collections_Generic_List_bool__Clear__);
            v270 = v318;
            v272 = 0;
          }
          LODWORD(v271) = v270->max_length;
          ++v273;
        }
        while ( (__int64)v273 < (int)v271 );
        if ( v272 )
        {
          partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                                 (BaseMonoBehaviour_o *)v321,
                                                 v321->fields.servantIconsPrefab,
                                                 v321->fields.iconParent,
                                                 0LL,
                                                 0LL);
          if ( !partyMemberItem )
            goto LABEL_252;
          v287 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                   (UnityEngine_GameObject_o *)partyMemberItem,
                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
          v288 = System_Collections_Generic_List_int___ToArray(
                   v266,
                   (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
          v289 = System_Collections_Generic_List_int___ToArray(
                   v267,
                   (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
          partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                                 v268,
                                                 (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
          if ( !v269 )
            goto LABEL_252;
          v290 = (System_Int32_array *)partyMemberItem;
          partyMemberItem = (System_String_o *)System_Collections_Generic_List_bool___ToArray(
                                                 v269,
                                                 (const MethodInfo_301759C *)Method_System_Collections_Generic_List_bool__ToArray__);
          this = v321;
          if ( !v287 )
            goto LABEL_252;
          RestrictionNotSatisfySlotIcons__SetServantIcons(
            (RestrictionNotSatisfySlotIcons_o *)v287,
            v288,
            v289,
            v290,
            (System_Boolean_array *)partyMemberItem,
            questRestrictionInfoa,
            v291);
          v292 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v316;
          if ( !v316 )
            goto LABEL_252;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v316,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v287->fields.mFSM,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
        }
        else
        {
LABEL_206:
          this = v321;
          v292 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v316;
          if ( !v316 )
            goto LABEL_252;
        }
        switchIcons = this->fields.switchIcons;
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                               v292,
                                               (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
        if ( !switchIcons )
          goto LABEL_252;
        v304 = (UIWidget_array *)partyMemberItem;
        v305 = switchIcons;
        goto LABEL_212;
      }
    }
LABEL_252:
    sub_B5D69C(partyMemberItem, UserId);
  }
  if ( !classImageIds )
    goto LABEL_252;
  if ( !*(_QWORD *)&classImageIds->max_length )
    goto LABEL_214;
  v293 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v293,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  v294 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v294,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v295 = classImageIds;
  if ( !classImageIds )
    goto LABEL_252;
  v296 = *(_QWORD *)&classImageIds->max_length;
  if ( (int)v296 < 1 )
    goto LABEL_209;
  v297 = 0;
  v298 = 0LL;
  do
  {
    if ( v298 >= (unsigned int)v296 )
      goto LABEL_253;
    if ( !v294 )
      goto LABEL_252;
    System_Collections_Generic_List_int___Add(
      v294,
      v295->m_Items[v298 + 1],
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
    ++v297;
    if ( (BYTE3(RestrictionNotSatisfySlot_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo);
      partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
    }
    if ( v297 >= **(_DWORD **)&partyMemberItem[7].fields )
    {
      partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v321,
                                             v321->fields.servantIconsPrefab,
                                             v321->fields.iconParent,
                                             0LL,
                                             0LL);
      if ( !partyMemberItem )
        goto LABEL_252;
      v299 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
               (UnityEngine_GameObject_o *)partyMemberItem,
               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
      partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                             v294,
                                             (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v299 )
        goto LABEL_252;
      RestrictionNotSatisfySlotIcons__SetClassIcons(
        (RestrictionNotSatisfySlotIcons_o *)v299,
        (System_Int32_array *)partyMemberItem,
        v300);
      if ( !v293 )
        goto LABEL_252;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v293,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v299->fields.mFSM,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
      System_Collections_Generic_List_int___Clear(
        v294,
        (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
      v297 = 0;
    }
    LODWORD(v296) = v295->max_length;
    ++v298;
  }
  while ( (__int64)v298 < (int)v296 );
  if ( v297 )
  {
    this = v321;
    partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)v321,
                                           v321->fields.servantIconsPrefab,
                                           v321->fields.iconParent,
                                           0LL,
                                           0LL);
    if ( !partyMemberItem )
      goto LABEL_252;
    v301 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
             (UnityEngine_GameObject_o *)partyMemberItem,
             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
    partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                           v294,
                                           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v301 )
      goto LABEL_252;
    RestrictionNotSatisfySlotIcons__SetClassIcons(
      (RestrictionNotSatisfySlotIcons_o *)v301,
      (System_Int32_array *)partyMemberItem,
      v302);
    if ( !v293 )
      goto LABEL_252;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v293,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v301->fields.mFSM,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
  }
  else
  {
LABEL_209:
    this = v321;
    if ( !v293 )
      goto LABEL_252;
  }
  v306 = this->fields.switchIcons;
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v293,
                                         (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !v306 )
    goto LABEL_252;
  v304 = (UIWidget_array *)partyMemberItem;
  v305 = v306;
LABEL_212:
  SwitchUIWidgetComponent__Set(v305, v304, 0LL);
  partyMemberItem = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7F5A & 1) == 0 )
  {
    sub_B5D5C4(&RestrictionNotSatisfySlot___c_TypeInfo, v1, v2, v3);
    byte_42E7F5A = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(RestrictionNotSatisfySlot___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  RestrictionNotSatisfySlot___c__DisplayClass14_0_o *v5; // x20
  struct PartyOrganizationListViewItem_o *memberItem; // x8
  int32_t type; // w8

  v5 = this;
  if ( (byte_42E7F5B & 1) == 0 )
  {
    this = (RestrictionNotSatisfySlot___c__DisplayClass14_0_o *)sub_B5D5C4(
                                                                  &Method_System_Linq_Enumerable_Contains_int___,
                                                                  (_DWORD)entity,
                                                                  (_DWORD)method,
                                                                  v3);
    byte_42E7F5B = 1;
  }
  if ( !entity )
    goto LABEL_14;
  memberItem = v5->fields.memberItem;
  if ( entity->fields.type != 9 )
  {
    if ( memberItem )
      goto LABEL_9;
LABEL_14:
    sub_B5D69C(this, entity);
  }
  if ( !memberItem )
    goto LABEL_14;
  if ( memberItem->fields._InitPos_k__BackingField == 1 )
    return 1;
LABEL_9:
  if ( !System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.targetVals2,
          memberItem->fields._InitPos_k__BackingField,
          (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___) )
    return 0;
  type = entity->fields.type;
  if ( type == 1 )
    return 1;
  return type == 12 || type == 16;
}