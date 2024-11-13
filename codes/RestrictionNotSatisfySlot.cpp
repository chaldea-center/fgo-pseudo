void __fastcall RestrictionNotSatisfySlot___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1227F & 1) == 0 )
  {
    sub_1BCA7E0(&RestrictionNotSatisfySlot_TypeInfo, v1, v2);
    byte_4B1227F = 1;
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_String_o *v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_String_o *v22; // x19
  int64_t v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x1
  __int64 v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  void *v50; // x1

  if ( (byte_4B1227D & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, message, method);
    sub_1BCA7E0(&string___TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_15997/*"[-]"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_11218/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_16102/*"[FFFF00]"*/, v12, v13);
    byte_4B1227D = 1;
  }
  v14 = (System_String_o *)sub_1BCA888(string___TypeInfo, 5LL);
  if ( !v14 )
    sub_1BCAA3C(0LL, v15);
  v22 = v14;
  if ( !LODWORD(v14[1].klass) )
    goto LABEL_12;
  v23 = StringLiteral_16102/*"[FFFF00]"*/;
  v14[1].monitor = (void *)StringLiteral_16102/*"[FFFF00]"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v14[1].monitor, v23, v16, v17, v18, v19, v20, v21);
  if ( LODWORD(v22[1].klass) <= 1 )
    goto LABEL_12;
  v22[1].fields = (System_String_Fields)message;
  sub_1BCA784((PartyOrganizationUtility_o *)&v22[1].fields, (int64_t)message, v24, v25, v26, v27, v28, v29);
  if ( LODWORD(v22[1].klass) <= 2 )
    goto LABEL_12;
  v36 = StringLiteral_43/*"\n"*/;
  v22[2].klass = (System_String_c *)StringLiteral_43/*"\n"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v22[2], v36, v30, v31, v32, v33, v34, v35);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11218/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
  if ( LODWORD(v22[1].klass) <= 3
    || (v22[2].monitor = v14,
        sub_1BCA784((PartyOrganizationUtility_o *)&v22[2].monitor, (int64_t)v14, v38, v39, v40, v41, v42, v43),
        LODWORD(v22[1].klass) <= 4) )
  {
LABEL_12:
    sub_1BCAA44(v14, v15);
  }
  v50 = StringLiteral_15997/*"[-]"*/;
  v22[2].fields = (System_String_Fields)StringLiteral_15997/*"[-]"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v22[2].fields, (int64_t)v50, v44, v45, v46, v47, v48, v49);
  return System_String__Concat_62414748((System_String_array *)v22, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *Master_object; // x22
  Il2CppObject *v22; // x25
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Collections_Generic_List_int__o *v26; // x24
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Collections_Generic_List_int__o *v30; // x23
  _BOOL8 EntityByIndividuality; // x0
  __int64 iconImageId; // x1
  __int64 v33; // x8
  unsigned __int64 v34; // x27
  int32_t v35; // w26
  struct System_Int32_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  struct System_Int32_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  __int64 v42; // x8
  System_Collections_Generic_List_int__o *v43; // x0
  System_Int32_array *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Int32_array *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  ServantClassEntity_o *v59; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B1227C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantClassMaster___, servantIds, classImageIds);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v19, v20);
    byte_4B1227C = 1;
  }
  v59 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, servantIds);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  v22 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantClassMaster___);
  v26 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v23,
                                                    v24,
                                                    v25);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v30 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v27,
                                                    v28,
                                                    v29);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individuality )
    goto LABEL_29;
  v33 = *(_QWORD *)&individuality->max_length;
  if ( (int)v33 >= 1 )
  {
    v34 = 0LL;
    do
    {
      if ( v34 >= (unsigned int)v33 )
        sub_1BCAA44(EntityByIndividuality, iconImageId);
      if ( !Master_object )
        goto LABEL_29;
      v35 = individuality->m_Items[v34 + 1];
      EntityByIndividuality = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                &entity,
                                v35,
                                (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( EntityByIndividuality )
      {
        if ( !v26 )
          goto LABEL_29;
        items = v26->fields._items;
        v37 = Method_System_Collections_Generic_List_int__Add__;
        ++v26->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v26->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v42 = v37[4];
          v43 = v26;
          LODWORD(iconImageId) = v35;
LABEL_24:
          System_Collections_Generic_List_int___AddWithResize(
            v43,
            iconImageId,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v42 + 192) + 112LL));
          goto LABEL_25;
        }
        v26->fields._size = size + 1;
        items->m_Items[size + 1] = v35;
      }
      else
      {
        if ( !v22 )
          goto LABEL_29;
        EntityByIndividuality = ServantClassMaster__TryGetEntityByIndividuality(
                                  (ServantClassMaster_o *)v22,
                                  &v59,
                                  v35,
                                  0LL);
        if ( !EntityByIndividuality )
          goto LABEL_25;
        if ( !v59 )
          goto LABEL_29;
        if ( !v30 )
          goto LABEL_29;
        iconImageId = (unsigned int)v59->fields.iconImageId;
        v39 = v30->fields._items;
        v40 = Method_System_Collections_Generic_List_int__Add__;
        ++v30->fields._version;
        if ( !v39 )
          goto LABEL_29;
        v41 = v30->fields._size;
        if ( (unsigned int)v41 >= v39->max_length )
        {
          v42 = v40[4];
          v43 = v30;
          goto LABEL_24;
        }
        v30->fields._size = v41 + 1;
        v39->m_Items[v41 + 1] = iconImageId;
      }
LABEL_25:
      LODWORD(v33) = individuality->max_length;
    }
    while ( (__int64)++v34 < (int)v33 );
  }
  if ( !v26
    || (v44 = System_Collections_Generic_List_int___ToArray(
                v26,
                (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__),
        *servantIds = v44,
        sub_1BCA784((PartyOrganizationUtility_o *)servantIds, (int64_t)v44, v45, v46, v47, v48, v49, v50),
        !v30) )
  {
LABEL_29:
    sub_1BCAA3C(EntityByIndividuality, iconImageId);
  }
  v51 = System_Collections_Generic_List_int___ToArray(
          v30,
          (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  *classImageIds = v51;
  sub_1BCA784((PartyOrganizationUtility_o *)classImageIds, (int64_t)v51, v52, v53, v54, v55, v56, v57);
}


System_String_o *__fastcall RestrictionNotSatisfySlot__RemoveColorCode(
        RestrictionNotSatisfySlot_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *v10; // x0

  if ( (byte_4B1227E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Text_RegularExpressions_Regex_TypeInfo, message, method);
    sub_1BCA7E0(&StringLiteral_16131/*"[[]-[\\]]"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_16132/*"[[][0-9A-F]{6}[\\]]"*/, v8, v9);
    byte_4B1227E = 1;
  }
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo, message);
  v10 = System_Text_RegularExpressions_Regex__Replace(
          message,
          (System_String_o *)StringLiteral_16132/*"[[][0-9A-F]{6}[\\]]"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  return System_Text_RegularExpressions_Regex__Replace(
           v10,
           (System_String_o *)StringLiteral_16131/*"[[]-[\\]]"*/,
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
  QuestRestrictionInfo_o *v5; // x27
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x24
  int64_t partyMemberItem; // x0
  int64_t UserId; // x1
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  PartyOrganizationListViewItem_o **v134; // x21
  UISprite_o *numberSprite; // x20
  System_String_o *v136; // x0
  __int64 v137; // x1
  __int64 v138; // x2
  __int64 v139; // x3
  long double inited; // q0
  _QWORD *v141; // x20
  __int64 v142; // x8
  __int64 v143; // x0
  __int64 v144; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v145; // x22
  System_Collections_Generic_List_object__o *v146; // x23
  __int64 v147; // x2
  __int64 v148; // x3
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x20
  System_Func_object__bool__o *v150; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v151; // x0
  __int64 v152; // x1
  __int64 v153; // x2
  __int64 v154; // x3
  RestrictionNotSatisfySlot___c_c *v155; // x0
  System_Func_object__bool__o *_9__14_1; // x20
  Il2CppObject *v157; // x24
  struct RestrictionNotSatisfySlot___c_StaticFields *static_fields; // x0
  int64_t v159; // x2
  int32_t v160; // w3
  System_String_o *v161; // x4
  BattleSetupInfo_o *v162; // x5
  FollowerInfo_o *v163; // x6
  PartyListViewItem_o *v164; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v165; // x0
  const MethodInfo *v166; // x2
  int64_t v167; // x24
  __int64 v168; // x8
  unsigned __int64 v169; // x19
  int64_t v170; // x2
  int32_t v171; // w3
  System_String_o *v172; // x4
  BattleSetupInfo_o *v173; // x5
  FollowerInfo_o *v174; // x6
  PartyListViewItem_o *v175; // x7
  struct System_Object_array *items; // x8
  _QWORD *v177; // x9
  __int64 size; // x10
  int64_t v179; // x1
  Il2CppClass **v180; // x0
  __int64 v181; // x2
  __int64 v182; // x3
  System_Collections_Generic_List_object__o *v183; // x24
  __int64 v184; // x1
  UnityEngine_GameObject_o *restrictionLabelRoot; // x0
  Il2CppObject *current; // x23
  Il2CppObject *restrictionLabel; // x20
  __int64 v188; // x1
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *v190; // x0
  __int64 v191; // x1
  Il2CppObject *v192; // x20
  __int64 v193; // x0
  __int64 v194; // x1
  int64_t v195; // x2
  int32_t v196; // w3
  System_String_o *v197; // x4
  BattleSetupInfo_o *v198; // x5
  FollowerInfo_o *v199; // x6
  PartyListViewItem_o *v200; // x7
  struct System_Object_array *v201; // x8
  _QWORD *v202; // x9
  __int64 v203; // x10
  Il2CppClass **v204; // x0
  SwitchUIWidgetComponent_o *switchMessage; // x20
  __int64 v206; // x1
  __int64 v207; // x2
  __int64 v208; // x3
  long double v209; // q0
  _QWORD *v210; // x20
  __int64 v211; // x8
  __int64 v212; // x0
  __int64 v213; // x0
  _QWORD *v214; // x20
  __int64 v215; // x8
  __int64 v216; // x0
  __int64 v217; // x0
  System_Collections_Generic_Dictionary_int__object__o *v218; // x20
  char v219; // w20
  __int64 v220; // x2
  __int64 v221; // x3
  const MethodInfo *v222; // x4
  __int64 v223; // x1
  bool IsSelectableNormalSupport; // w0
  QuestPhaseEntity_o *v225; // x8
  __int64 v226; // x1
  System_Collections_Generic_IEnumerable_T__o *v227; // x21
  System_Collections_Generic_List_int__o *v228; // x20
  struct System_Int32_array *v229; // x8
  _QWORD *v230; // x9
  __int64 v231; // x10
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Int32_array *v234; // x3
  System_Collections_Generic_List_int__o *v235; // x22
  System_Collections_Generic_List_object__o *v236; // x20
  System_Collections_Generic_List_T__o *v237; // x21
  int32_t v238; // w23
  __int64 v239; // x1
  __int64 v240; // x1
  __int64 v241; // x2
  __int64 v242; // x3
  System_Collections_Generic_List_object__o *v243; // x21
  __int64 v244; // x1
  __int64 v245; // x2
  __int64 v246; // x3
  System_Collections_Generic_List_int__o *v247; // x22
  __int64 v248; // x1
  __int64 v249; // x2
  __int64 v250; // x3
  System_Collections_Generic_List_int__o *v251; // x24
  __int64 v252; // x1
  __int64 v253; // x2
  __int64 v254; // x3
  System_Collections_Generic_List_int__o *v255; // x25
  __int64 v256; // x1
  __int64 v257; // x2
  __int64 v258; // x3
  System_Collections_Generic_List_bool__o *v259; // x26
  __int64 v260; // x8
  int v261; // w19
  unsigned __int64 v262; // x23
  int32_t v263; // w28
  struct System_Int32_array *v264; // x8
  _QWORD *v265; // x9
  __int64 v266; // x10
  Il2CppObject *v267; // x0
  int32_t questId; // w20
  int32_t questPhase; // w27
  FollowerInfo_o *v270; // x29
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w29
  struct System_Boolean_array *v273; // x8
  _QWORD *v274; // x9
  __int64 v275; // x10
  struct System_Boolean_array *v276; // x8
  _QWORD *v277; // x9
  __int64 v278; // x10
  int32_t v279; // w20
  struct System_Int32_array *v280; // x8
  _QWORD *v281; // x9
  __int64 v282; // x10
  struct System_Int32_array *v283; // x8
  _QWORD *v284; // x9
  __int64 v285; // x10
  RestrictionNotSatisfySlotIcons_o *Component_object; // x20
  System_Int32_array *v287; // x27
  System_Int32_array *v288; // x28
  System_Int32_array *v289; // x29
  const MethodInfo *v290; // x6
  System_Int32_array *v291; // x1
  int64_t v292; // x2
  int32_t v293; // w3
  System_String_o *v294; // x4
  BattleSetupInfo_o *v295; // x5
  FollowerInfo_o *v296; // x6
  PartyListViewItem_o *v297; // x7
  struct System_Object_array *v298; // x8
  _QWORD *v299; // x9
  __int64 v300; // x10
  Il2CppClass **v301; // x0
  int v302; // w8
  int v303; // w8
  int v304; // w8
  int v305; // w8
  RestrictionNotSatisfySlotIcons_o *v306; // x20
  System_Int32_array *v307; // x22
  System_Int32_array *v308; // x23
  System_Int32_array *v309; // x24
  const MethodInfo *v310; // x6
  int64_t v311; // x2
  int32_t v312; // w3
  System_String_o *v313; // x4
  BattleSetupInfo_o *v314; // x5
  FollowerInfo_o *v315; // x6
  PartyListViewItem_o *v316; // x7
  struct System_Object_array *v317; // x8
  _QWORD *v318; // x9
  __int64 v319; // x10
  Il2CppClass **v320; // x0
  System_Collections_Generic_List_object__o *v321; // x20
  __int64 v322; // x1
  __int64 v323; // x2
  __int64 v324; // x3
  System_Collections_Generic_List_int__o *v325; // x21
  System_Int32_array *v326; // x19
  __int64 v327; // x8
  int v328; // w22
  unsigned __int64 v329; // x23
  struct System_Int32_array *v330; // x8
  _QWORD *v331; // x9
  __int64 v332; // x10
  RestrictionNotSatisfySlotIcons_o *v333; // x22
  const MethodInfo *v334; // x2
  int64_t v335; // x2
  int32_t v336; // w3
  System_String_o *v337; // x4
  BattleSetupInfo_o *v338; // x5
  FollowerInfo_o *v339; // x6
  PartyListViewItem_o *v340; // x7
  struct System_Object_array *v341; // x8
  _QWORD *v342; // x9
  __int64 v343; // x10
  Il2CppClass **v344; // x0
  int v345; // w8
  RestrictionNotSatisfySlotIcons_o *v346; // x22
  const MethodInfo *v347; // x2
  int64_t v348; // x2
  int32_t v349; // w3
  System_String_o *v350; // x4
  BattleSetupInfo_o *v351; // x5
  FollowerInfo_o *v352; // x6
  PartyListViewItem_o *v353; // x7
  struct System_Object_array *v354; // x8
  _QWORD *v355; // x9
  __int64 v356; // x10
  Il2CppClass **v357; // x0
  struct SwitchUIWidgetComponent_o *switchIcons; // x20
  UIWidget_array *v359; // x1
  SwitchUIWidgetComponent_o *v360; // x0
  struct SwitchUIWidgetComponent_o *v361; // x21
  PartyOrganizationListViewItem_o *v362; // x8
  int64_t v363; // x2
  int32_t v364; // w3
  System_String_o *v365; // x4
  BattleSetupInfo_o *v366; // x5
  FollowerInfo_o *v367; // x6
  PartyListViewItem_o *v368; // x7
  struct System_Object_array *v369; // x8
  _QWORD *v370; // x9
  __int64 v371; // x10
  int64_t v372; // x1
  Il2CppClass **v373; // x0
  int v374; // w19
  int32_t v375; // w20
  Il2CppObject *Item; // x0
  const MethodInfo *v377; // x2
  Il2CppObject *fixed; // x0
  NpcFollowerMaster_o *v379; // [xsp+48h] [xbp-108h]
  NpcServantFollowerMaster_o *Master_object; // [xsp+50h] [xbp-100h]
  UserServantCollectionMaster_o *MasterData_object; // [xsp+58h] [xbp-F8h]
  System_Int32_array *v382; // [xsp+60h] [xbp-F0h]
  int32_t *v383; // [xsp+68h] [xbp-E8h]
  QuestRestrictionInfo_o *questRestrictionInfoa; // [xsp+70h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v386; // [xsp+80h] [xbp-D0h] BYREF
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+98h] [xbp-B8h] BYREF
  QuestPhaseEntity_o *v388; // [xsp+A0h] [xbp-B0h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+A8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v390; // [xsp+B0h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+D0h] [xbp-80h] BYREF
  System_Int32_array *classImageIds; // [xsp+D8h] [xbp-78h] BYREF
  System_Int32_array *servantIds; // [xsp+E0h] [xbp-70h] BYREF
  int32_t pos; // [xsp+ECh] [xbp-64h] BYREF

  pos = number;
  v5 = questRestrictionInfo;
  if ( (byte_4B1227B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, *(_QWORD *)&number, memberItem);
    sub_1BCA7E0(&Method_System_Array_Empty_RestrictionEntity___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_NpcFollowerMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___, v27, v28);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v35, v36);
    sub_1BCA7E0(&System_Func_RestrictionEntity__bool__TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___, v39, v40);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v41, v42);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v43, v44);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__Add__, v45, v46);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_bool__Add__, v47, v48);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v49, v50);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_bool__Clear__, v51, v52);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v53, v54);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v55, v56);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v57, v58);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v59, v60);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_bool__ToArray__, v61, v62);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v63, v64);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_bool___ctor__, v65, v66);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget___ctor__, v67, v68);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v69, v70);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v71, v72);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____get_Count__, v73, v74);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v75, v76);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v77, v78);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v79, v80);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____get_Item__, v81, v82);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v83, v84);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__set_Item__, v85, v86);
    sub_1BCA7E0(&System_Collections_Generic_List_bool__TypeInfo, v87, v88);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v89, v90);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v91, v92);
    sub_1BCA7E0(&System_Collections_Generic_List_UIWidget__TypeInfo, v93, v94);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v95, v96);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v97, v98);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_UILabel____76924640, v99, v100);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v101, v102);
    sub_1BCA7E0(&RestrictionNotSatisfySlot_TypeInfo, v103, v104);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v105, v106);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v107, v108);
    sub_1BCA7E0(&Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__, v109, v110);
    sub_1BCA7E0(&Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__, v111, v112);
    sub_1BCA7E0(&RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo, v113, v114);
    sub_1BCA7E0(&RestrictionNotSatisfySlot___c_TypeInfo, v115, v116);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v117, v118);
    sub_1BCA7E0(&StringLiteral_21618/*"member_txt_"*/, v119, v120);
    sub_1BCA7E0(&StringLiteral_11215/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/, v121, v122);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v123, v124);
    byte_4B1227B = 1;
  }
  classImageIds = 0LL;
  servantIds = 0LL;
  npcInfoDictionary = 0LL;
  memset(&v390, 0, sizeof(v390));
  v388 = 0LL;
  entity = 0LL;
  npcServantFollowerEntity = 0LL;
  v125 = sub_1BCAA2C(
           RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo,
           *(_QWORD *)&number,
           memberItem,
           questRestrictionInfo);
  System_Object___ctor((Il2CppObject *)v125, 0LL);
  if ( !v125 )
    goto LABEL_281;
  *(_QWORD *)(v125 + 16) = memberItem;
  v134 = (PartyOrganizationListViewItem_o **)(v125 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v125 + 16), (int64_t)memberItem, v128, v129, v130, v131, v132, v133);
  numberSprite = this->fields.numberSprite;
  v136 = System_Int32__ToString((int32_t)&pos, 0LL);
  partyMemberItem = (int64_t)System_String__Concat_62401220((System_String_o *)StringLiteral_21618/*"member_txt_"*/, v136, 0LL);
  if ( !numberSprite )
    goto LABEL_281;
  UISprite__set_spriteName(numberSprite, (System_String_o *)partyMemberItem, 0LL);
  partyMemberItem = (int64_t)this->fields.partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_281;
  PartyOrganizationConfirmItemDraw__SetItem(
    (PartyOrganizationConfirmItemDraw_o *)partyMemberItem,
    *v134,
    3,
    0,
    0,
    0,
    0,
    0LL);
  v141 = Method_System_Array_Empty_RestrictionEntity___;
  v142 = *((_QWORD *)Method_System_Array_Empty_RestrictionEntity___ + 7);
  if ( !v142 )
  {
    sub_1C1C718(Method_System_Array_Empty_RestrictionEntity___, v137);
    v142 = v141[7];
  }
  v143 = *(_QWORD *)(v142 + 16);
  if ( (*(_BYTE *)(v143 + 309) & 1) == 0 )
    v143 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v143 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v143, v137);
  v144 = *(_QWORD *)(v141[7] + 16LL);
  if ( (*(_BYTE *)(v144 + 309) & 1) == 0 )
    v144 = sub_1C1C6BC(inited);
  v145 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v144 + 184);
  v146 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_string__TypeInfo,
                                                        v137,
                                                        v138,
                                                        v139);
  System_Collections_Generic_List_object____ctor(
    v146,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v5 )
    goto LABEL_281;
  partyMemberItem = QuestRestrictionInfo__IsUseOldMaster(v5, 0LL);
  questRestrictionInfoa = v5;
  if ( (partyMemberItem & 1) != 0 )
  {
    restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.restrictionEntityList;
    v150 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_RestrictionEntity__bool__TypeInfo, UserId, v147, v148);
    System_Func_object__bool____ctor(
      v150,
      (Il2CppObject *)v125,
      Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__,
      0LL);
    v151 = System_Linq_Enumerable__Where_object_(
             restrictionEntityList,
             (System_Func_TSource__bool__o *)v150,
             (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    v145 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                  v151,
                                                                  (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    if ( v5->fields.isUniqueServant && v5->fields.isUniqueIndividuality )
    {
      v155 = RestrictionNotSatisfySlot___c_TypeInfo;
      if ( !RestrictionNotSatisfySlot___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot___c_TypeInfo, v152);
        v155 = RestrictionNotSatisfySlot___c_TypeInfo;
      }
      _9__14_1 = (System_Func_object__bool__o *)v155->static_fields->__9__14_1;
      if ( !_9__14_1 )
      {
        if ( !v155->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v155, v152);
          v155 = RestrictionNotSatisfySlot___c_TypeInfo;
        }
        v157 = (Il2CppObject *)v155->static_fields->__9;
        _9__14_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                    System_Func_RestrictionEntity__bool__TypeInfo,
                                                    v152,
                                                    v153,
                                                    v154);
        System_Func_object__bool____ctor(_9__14_1, v157, Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__, 0LL);
        static_fields = RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
        static_fields->__9__14_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__14_1;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__14_1,
          (int64_t)_9__14_1,
          v159,
          v160,
          v161,
          v162,
          v163,
          v164);
      }
      v165 = System_Linq_Enumerable__Where_object_(
               v145,
               (System_Func_TSource__bool__o *)_9__14_1,
               (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v145 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                    v165,
                                                                    (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    }
    partyMemberItem = (int64_t)QuestRestrictionInfo__GetMessages_41169892(
                                 v5,
                                 (RestrictionEntity_array *)v145,
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
    if ( !*v134 )
      goto LABEL_281;
    partyMemberItem = (int64_t)QuestRestrictionInfo__GetMessages(
                                 v5,
                                 (*v134)->fields._InitPos_k__BackingField,
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
  v167 = partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_281;
  v168 = *(_QWORD *)(partyMemberItem + 24);
  if ( v168 && (int)v168 >= 1 )
  {
    v169 = 0LL;
    while ( v169 < (unsigned int)v168 )
    {
      partyMemberItem = (int64_t)RestrictionNotSatisfySlot__RemoveColorCode(
                                   (RestrictionNotSatisfySlot_o *)partyMemberItem,
                                   *(System_String_o **)(v167 + 32 + 8 * v169),
                                   v166);
      if ( !partyMemberItem )
        goto LABEL_281;
      partyMemberItem = (int64_t)System_String__Replace_62420848(
                                   (System_String_o *)partyMemberItem,
                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                   (System_String_o *)StringLiteral_1/*""*/,
                                   0LL);
      if ( !v146 )
        goto LABEL_281;
      items = v146->fields._items;
      v177 = Method_System_Collections_Generic_List_string__Add__;
      ++v146->fields._version;
      if ( !items )
        goto LABEL_281;
      size = v146->fields._size;
      v179 = partyMemberItem;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v146,
          (Il2CppObject *)partyMemberItem,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v177[4] + 192LL) + 112LL));
      }
      else
      {
        v180 = &items->obj.klass + size;
        v146->fields._size = size + 1;
        v180[4] = (Il2CppClass *)v179;
        sub_1BCA784((PartyOrganizationUtility_o *)(v180 + 4), v179, v170, v171, v172, v173, v174, v175);
      }
      LODWORD(v168) = *(_DWORD *)(v167 + 24);
      if ( (__int64)++v169 >= (int)v168 )
        goto LABEL_40;
    }
LABEL_282:
    sub_1BCAA44(partyMemberItem, UserId);
  }
LABEL_40:
  partyMemberItem = (int64_t)this->fields.notSatisfyWidget;
  if ( !partyMemberItem )
    goto LABEL_281;
  partyMemberItem = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)partyMemberItem, 0LL);
  if ( !partyMemberItem )
    goto LABEL_281;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyMemberItem, 0, 0LL);
  partyMemberItem = (int64_t)*v134;
  if ( !*v134 )
    goto LABEL_281;
  if ( !PartyOrganizationListViewItem__get_IsSupportOnly((PartyOrganizationListViewItem_o *)partyMemberItem, 0LL) )
  {
    partyMemberItem = (int64_t)*v134;
    if ( !*v134 )
      goto LABEL_281;
    if ( !PartyOrganizationListViewItem__get_IsFixedMyServantSingle(
            (PartyOrganizationListViewItem_o *)partyMemberItem,
            0LL) )
    {
      partyMemberItem = (int64_t)*v134;
      if ( !*v134 )
        goto LABEL_281;
      if ( !*(_BYTE *)(partyMemberItem + 216) && !*(_BYTE *)(partyMemberItem + 217) )
      {
        if ( PartyOrganizationListViewItem__get_IsQuestRestriction(
               (PartyOrganizationListViewItem_o *)partyMemberItem,
               0LL) )
        {
          goto LABEL_256;
        }
        partyMemberItem = (int64_t)*v134;
        if ( !*v134 )
          goto LABEL_281;
        partyMemberItem = PartyOrganizationListViewItem__get_IsEmpty(
                            (PartyOrganizationListViewItem_o *)partyMemberItem,
                            0LL);
        if ( (partyMemberItem & 1) != 0 )
        {
          if ( !*v134 )
            goto LABEL_281;
          partyMemberItem = QuestRestrictionInfo__IsSetRequired(v5, pos, (*v134)->fields._InitPos_k__BackingField, 0LL);
          if ( (partyMemberItem & 1) != 0 )
            goto LABEL_256;
        }
        v362 = *v134;
        if ( !*v134 )
          goto LABEL_281;
        if ( v362->fields.isUniqueSvtRestriction
          || v362->fields.isUniqueIndividualityRestriction
          || (v362->fields.fatigureTime & 0x8000000000000000LL) == 0
          || v362->fields._IsAllOutBattle_k__BackingField
          || v362->fields._IsDataLost_k__BackingField
          || v362->fields._TimesToRestart_k__BackingField > 0
          || v362->fields._IsNotSupportSingle_k__BackingField
          || v362->fields.isFixedServantPositionRestriction
          || v362->fields.isFixedSupportPositionRestriction )
        {
LABEL_256:
          partyMemberItem = (int64_t)this->fields.notSatisfyWidget;
          if ( !partyMemberItem )
            goto LABEL_281;
          partyMemberItem = (int64_t)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)partyMemberItem,
                                       0LL);
          if ( !partyMemberItem )
            goto LABEL_281;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyMemberItem, 1, 0LL);
          partyMemberItem = (int64_t)*v134;
          if ( !*v134 )
            goto LABEL_281;
          partyMemberItem = PartyOrganizationListViewItem__get_IsEmpty(
                              (PartyOrganizationListViewItem_o *)partyMemberItem,
                              0LL);
          if ( (partyMemberItem & 1) == 0 )
            goto LABEL_271;
          if ( !*v134 )
            goto LABEL_281;
          if ( QuestRestrictionInfo__IsSetRequired(v5, pos, (*v134)->fields._InitPos_k__BackingField, 0LL) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, UserId);
            partyMemberItem = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11215/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/, 0LL);
            if ( !v146 )
              goto LABEL_281;
            v369 = v146->fields._items;
            v370 = Method_System_Collections_Generic_List_string__Add__;
            ++v146->fields._version;
            if ( !v369 )
              goto LABEL_281;
            v371 = v146->fields._size;
            v372 = partyMemberItem;
            if ( (unsigned int)v371 >= v369->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v146,
                (Il2CppObject *)partyMemberItem,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v370[4] + 192LL) + 112LL));
            }
            else
            {
              v373 = &v369->obj.klass + v371;
              v146->fields._size = v371 + 1;
              v373[4] = (Il2CppClass *)v372;
              sub_1BCA784((PartyOrganizationUtility_o *)(v373 + 4), v372, v363, v364, v365, v366, v367, v368);
            }
            v374 = 1;
          }
          else
          {
LABEL_271:
            v374 = 0;
          }
          partyMemberItem = (int64_t)*v134;
          if ( !*v134 )
            goto LABEL_281;
          partyMemberItem = PartyOrganizationListViewItem__get_IsQuestRestriction(
                              (PartyOrganizationListViewItem_o *)partyMemberItem,
                              0LL);
          if ( v374 | partyMemberItem & 1 )
          {
            if ( !v146 )
              goto LABEL_281;
            if ( v146->fields._size >= 1 )
            {
              v375 = 0;
              do
              {
                Item = System_Collections_Generic_List_object___get_Item(
                         v146,
                         v375,
                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
                fixed = (Il2CppObject *)RestrictionNotSatisfySlot__AddColorCodeAndFixMessage(
                                          (RestrictionNotSatisfySlot_o *)Item,
                                          (System_String_o *)Item,
                                          v377);
                System_Collections_Generic_List_object___set_Item(
                  v146,
                  v375++,
                  fixed,
                  (const MethodInfo_35A19E0 *)Method_System_Collections_Generic_List_string__set_Item__);
              }
              while ( v375 < v146->fields._size );
            }
          }
        }
      }
    }
  }
  v183 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_UIWidget__TypeInfo,
                                                        UserId,
                                                        v181,
                                                        v182);
  System_Collections_Generic_List_object____ctor(
    v183,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  if ( !v146 )
    goto LABEL_281;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v386,
    v146,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v390 = v386;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v390,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    restrictionLabelRoot = this->fields.restrictionLabelRoot;
    if ( !restrictionLabelRoot )
      sub_1BCAA3C(0LL, v184);
    current = v390.fields._current;
    restrictionLabel = (Il2CppObject *)this->fields.restrictionLabel;
    transform = UnityEngine_GameObject__get_transform(restrictionLabelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v188);
    v190 = UnityEngine_Object__Instantiate_object__49903816(
             restrictionLabel,
             transform,
             (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_UILabel____76924640);
    v192 = v190;
    if ( !v190 )
      sub_1BCAA3C(0LL, v191);
    UILabel__set_text((UILabel_o *)v190, (System_String_o *)current, 0LL);
    if ( !v183 )
      sub_1BCAA3C(v193, v194);
    v201 = v183->fields._items;
    v202 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++v183->fields._version;
    if ( !v201 )
      sub_1BCAA3C(v193, v194);
    v203 = v183->fields._size;
    if ( (unsigned int)v203 >= v201->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v183,
        v192,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v202[4] + 192LL) + 112LL));
    }
    else
    {
      v204 = &v201->obj.klass + v203;
      v183->fields._size = v203 + 1;
      v204[4] = (Il2CppClass *)v192;
      sub_1BCA784((PartyOrganizationUtility_o *)(v204 + 4), (int64_t)v192, v195, v196, v197, v198, v199, v200);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v390,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v183 )
    goto LABEL_281;
  switchMessage = this->fields.switchMessage;
  partyMemberItem = (int64_t)System_Collections_Generic_List_object___ToArray(
                               v183,
                               (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !switchMessage )
    goto LABEL_281;
  SwitchUIWidgetComponent__Set(switchMessage, (UIWidget_array *)partyMemberItem, 0LL);
  v210 = Method_System_Array_Empty_int___;
  v211 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v211 )
  {
    sub_1C1C718(Method_System_Array_Empty_int___, v206);
    v211 = v210[7];
  }
  v212 = *(_QWORD *)(v211 + 16);
  if ( (*(_BYTE *)(v212 + 309) & 1) == 0 )
    v212 = sub_1C1C6BC(v209);
  if ( !*(_DWORD *)(v212 + 224) )
    v209 = j_il2cpp_runtime_class_init_0(v212, v206);
  v213 = *(_QWORD *)(v210[7] + 16LL);
  if ( (*(_BYTE *)(v213 + 309) & 1) == 0 )
    v213 = sub_1C1C6BC(v209);
  v214 = Method_System_Array_Empty_int___;
  servantIds = **(System_Int32_array ***)(v213 + 184);
  v215 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v215 )
  {
    sub_1C1C718(Method_System_Array_Empty_int___, v206);
    v215 = v214[7];
  }
  v216 = *(_QWORD *)(v215 + 16);
  if ( (*(_BYTE *)(v216 + 309) & 1) == 0 )
    v216 = sub_1C1C6BC(v209);
  if ( !*(_DWORD *)(v216 + 224) )
    v209 = j_il2cpp_runtime_class_init_0(v216, v206);
  v217 = *(_QWORD *)(v214[7] + 16LL);
  if ( (*(_BYTE *)(v217 + 309) & 1) == 0 )
    v217 = sub_1C1C6BC(v209);
  classImageIds = **(System_Int32_array ***)(v217 + 184);
  v218 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo,
                                                                   v206,
                                                                   v207,
                                                                   v208);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v218,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v218;
  partyMemberItem = QuestRestrictionInfo__IsUseOldMaster(v5, 0LL);
  if ( !*v134 )
    goto LABEL_281;
  v219 = partyMemberItem;
  partyMemberItem = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41192312(
                      v5,
                      (*v134)->fields._InitPos_k__BackingField,
                      0LL);
  if ( (v219 & 1) == 0 )
  {
    if ( (partyMemberItem & 1) != 0 )
    {
      if ( !*v134 )
        goto LABEL_281;
      servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                     v5,
                     &npcInfoDictionary,
                     (*v134)->fields._InitPos_k__BackingField,
                     0,
                     0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v226);
      partyMemberItem = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !partyMemberItem )
        goto LABEL_281;
      partyMemberItem = QuestPhaseMaster__TryGetEntity(
                          (QuestPhaseMaster_o *)partyMemberItem,
                          &v388,
                          v5->fields.questId,
                          v5->fields.questPhase,
                          0LL);
      if ( !servantIds )
        goto LABEL_281;
      if ( !*(_QWORD *)&servantIds->max_length )
        goto LABEL_125;
      if ( !*v134 )
        goto LABEL_281;
      IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                    v5,
                                    (*v134)->fields._InitPos_k__BackingField,
                                    0LL);
      v225 = v388;
      if ( !v388 )
        goto LABEL_125;
      goto LABEL_100;
    }
    v235 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_int__TypeInfo,
                                                       UserId,
                                                       v220,
                                                       v221);
    System_Collections_Generic_List_int____ctor(
      v235,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !*v134 )
      goto LABEL_281;
    partyMemberItem = (int64_t)QuestRestrictionInfo__GetNeedIndividualityList(
                                 v5,
                                 (*v134)->fields._InitPos_k__BackingField,
                                 0LL);
    if ( !*v134 )
      goto LABEL_281;
    v236 = (System_Collections_Generic_List_object__o *)partyMemberItem;
    partyMemberItem = (int64_t)QuestRestrictionInfo__GetRangeTypeList(v5, (*v134)->fields._InitPos_k__BackingField, 0LL);
    if ( !v236 )
      goto LABEL_281;
    if ( v236->fields._size >= 1 )
    {
      v237 = (System_Collections_Generic_List_T__o *)partyMemberItem;
      v238 = 0;
      do
      {
        if ( !v237 )
          goto LABEL_281;
        if ( v237->fields._size > v238 )
        {
          partyMemberItem = System_Collections_Generic_List_Int32Enum___get_Item(
                              v237,
                              v238,
                              (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          if ( (_DWORD)partyMemberItem == 1 )
          {
            partyMemberItem = (int64_t)System_Collections_Generic_List_object___get_Item(
                                         v236,
                                         v238,
                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_int____get_Item__);
            if ( !v235 )
              goto LABEL_281;
            System_Collections_Generic_List_int___AddRange(
              v235,
              (System_Collections_Generic_IEnumerable_T__o *)partyMemberItem,
              (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
          }
        }
        ++v238;
      }
      while ( v238 < v236->fields._size );
    }
    if ( !v235 )
      goto LABEL_281;
    partyMemberItem = (int64_t)System_Collections_Generic_List_int___ToArray(
                                 v235,
                                 (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
    v234 = (System_Int32_array *)partyMemberItem;
LABEL_124:
    RestrictionNotSatisfySlot__GetIconIdFromIndividuality(
      (RestrictionNotSatisfySlot_o *)partyMemberItem,
      &servantIds,
      &classImageIds,
      v234,
      v222);
    goto LABEL_125;
  }
  if ( (partyMemberItem & 1) == 0 )
  {
    if ( !v145 )
      goto LABEL_281;
    monitor = v145[1].monitor;
    if ( !monitor )
    {
LABEL_125:
      partyMemberItem = (int64_t)servantIds;
      if ( !servantIds )
        goto LABEL_281;
      goto LABEL_126;
    }
    if ( !(_DWORD)monitor )
      goto LABEL_282;
    klass = v145[2].klass;
    if ( !klass )
      goto LABEL_281;
    v234 = *(System_Int32_array **)&klass->_1.byval_arg.bits;
    goto LABEL_124;
  }
  if ( !*v134 )
    goto LABEL_281;
  servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                 v5,
                 &npcInfoDictionary,
                 (*v134)->fields._InitPos_k__BackingField,
                 1,
                 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v223);
  partyMemberItem = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !partyMemberItem )
    goto LABEL_281;
  partyMemberItem = QuestPhaseMaster__TryGetEntity(
                      (QuestPhaseMaster_o *)partyMemberItem,
                      &entity,
                      v5->fields.questId,
                      v5->fields.questPhase,
                      0LL);
  if ( !servantIds )
    goto LABEL_281;
  if ( !*(_QWORD *)&servantIds->max_length )
    goto LABEL_125;
  if ( !*v134 )
    goto LABEL_281;
  IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                v5,
                                (*v134)->fields._InitPos_k__BackingField,
                                0LL);
  v225 = entity;
  if ( !entity )
    goto LABEL_125;
LABEL_100:
  if ( !IsSelectableNormalSupport || v225->fields.isNpcOnly )
    goto LABEL_125;
  v227 = (System_Collections_Generic_IEnumerable_T__o *)servantIds;
  v228 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     UserId,
                                                     v220,
                                                     v221);
  System_Collections_Generic_List_int____ctor_56116492(
    v228,
    v227,
    (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
  if ( !v228 )
    goto LABEL_281;
  v229 = v228->fields._items;
  v230 = Method_System_Collections_Generic_List_int__Add__;
  ++v228->fields._version;
  if ( !v229 )
    goto LABEL_281;
  v231 = v228->fields._size;
  if ( (unsigned int)v231 >= v229->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v228,
      0,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v230[4] + 192LL) + 112LL));
  }
  else
  {
    v228->fields._size = v231 + 1;
    v229->m_Items[v231 + 1] = 0;
  }
  partyMemberItem = (int64_t)System_Collections_Generic_List_int___ToArray(
                               v228,
                               (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  servantIds = (System_Int32_array *)partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_281;
LABEL_126:
  if ( *(_QWORD *)(partyMemberItem + 24) )
  {
    partyMemberItem = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !partyMemberItem )
      goto LABEL_281;
    MasterData_object = (UserServantCollectionMaster_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)partyMemberItem,
                                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v239);
    Master_object = (NpcServantFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    v379 = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    v243 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_UIWidget__TypeInfo,
                                                          v240,
                                                          v241,
                                                          v242);
    System_Collections_Generic_List_object____ctor(
      v243,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
    v247 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_int__TypeInfo,
                                                       v244,
                                                       v245,
                                                       v246);
    System_Collections_Generic_List_int____ctor(
      v247,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    v251 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_int__TypeInfo,
                                                       v248,
                                                       v249,
                                                       v250);
    System_Collections_Generic_List_int____ctor(
      v251,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    v255 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_int__TypeInfo,
                                                       v252,
                                                       v253,
                                                       v254);
    System_Collections_Generic_List_int____ctor(
      v255,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    v259 = (System_Collections_Generic_List_bool__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_bool__TypeInfo,
                                                        v256,
                                                        v257,
                                                        v258);
    System_Collections_Generic_List_bool____ctor(
      v259,
      (const MethodInfo_35583C4 *)Method_System_Collections_Generic_List_bool___ctor__);
    if ( !servantIds )
      goto LABEL_281;
    v260 = *(_QWORD *)&servantIds->max_length;
    if ( (int)v260 < 1 )
      goto LABEL_227;
    v261 = 0;
    v262 = 0LL;
    v382 = servantIds;
    v383 = &servantIds->m_Items[1];
    while ( 1 )
    {
      if ( v262 >= (unsigned int)v260 )
        goto LABEL_282;
      if ( !v247 )
        goto LABEL_281;
      v263 = v383[v262];
      v264 = v247->fields._items;
      v265 = Method_System_Collections_Generic_List_int__Add__;
      ++v247->fields._version;
      if ( !v264 )
        goto LABEL_281;
      v266 = v247->fields._size;
      if ( (unsigned int)v266 >= v264->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v247,
          v263,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v265[4] + 192LL) + 112LL));
      }
      else
      {
        v247->fields._size = v266 + 1;
        v264->m_Items[v266 + 1] = v263;
      }
      partyMemberItem = (int64_t)npcInfoDictionary;
      if ( !npcInfoDictionary )
        goto LABEL_281;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
              v263,
              (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
        goto LABEL_289;
      partyMemberItem = (int64_t)npcInfoDictionary;
      if ( !npcInfoDictionary )
        goto LABEL_281;
      v267 = System_Collections_Generic_Dictionary_int__object___get_Item(
               (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
               v263,
               (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
      if ( v267 )
      {
        questId = v5->fields.questId;
        questPhase = v5->fields.questPhase;
        v270 = (FollowerInfo_o *)v267;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0LL);
        LimitCount = FollowerInfo__getLimitCount(v270, 0, ReturnTypeByQuestId, 0LL);
        partyMemberItem = (int64_t)Master_object;
        if ( !Master_object )
          goto LABEL_281;
        partyMemberItem = NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                            Master_object,
                            &npcServantFollowerEntity,
                            questId,
                            questPhase,
                            v263,
                            0LL);
        if ( (partyMemberItem & 1) == 0 )
          goto LABEL_164;
        if ( !npcServantFollowerEntity )
          goto LABEL_281;
        partyMemberItem = NpcServantFollowerEntity__IsHideRarity(npcServantFollowerEntity->fields.flag, 0LL);
        if ( !v259 )
          goto LABEL_281;
        v273 = v259->fields._items;
        v274 = Method_System_Collections_Generic_List_bool__Add__;
        ++v259->fields._version;
        if ( !v273 )
          goto LABEL_281;
        v275 = v259->fields._size;
        if ( (unsigned int)v275 >= v273->max_length )
        {
          System_Collections_Generic_List_bool___AddWithResize(
            v259,
            partyMemberItem & 1,
            *(const MethodInfo_3558C28 **)(*(_QWORD *)(v274[4] + 192LL) + 112LL));
        }
        else
        {
          v259->fields._size = v275 + 1;
          v273->m_Items[v275 + 4] = partyMemberItem & 1;
        }
        partyMemberItem = (int64_t)v379;
        if ( !npcServantFollowerEntity || !v379 )
          goto LABEL_281;
        partyMemberItem = (int64_t)NpcFollowerMaster__GetEntity_40158156(
                                     v379,
                                     questId,
                                     questPhase,
                                     npcServantFollowerEntity->fields.id,
                                     0LL);
        if ( !partyMemberItem )
        {
LABEL_164:
          v5 = questRestrictionInfoa;
          goto LABEL_165;
        }
        partyMemberItem = NpcFollowerEntity__GetImageSvtId((NpcFollowerEntity_o *)partyMemberItem, 0LL);
        v5 = questRestrictionInfoa;
        v279 = partyMemberItem;
      }
      else
      {
LABEL_289:
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, UserId);
        UserId = NetworkManager__get_UserId(0LL);
        partyMemberItem = (int64_t)MasterData_object;
        if ( !MasterData_object )
          goto LABEL_281;
        partyMemberItem = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                     MasterData_object,
                                     UserId,
                                     v263,
                                     0LL);
        if ( !partyMemberItem )
          goto LABEL_281;
        if ( !v259 )
          goto LABEL_281;
        LimitCount = *(_DWORD *)(partyMemberItem + 56);
        v276 = v259->fields._items;
        v277 = Method_System_Collections_Generic_List_bool__Add__;
        ++v259->fields._version;
        if ( !v276 )
          goto LABEL_281;
        v278 = v259->fields._size;
        if ( (unsigned int)v278 >= v276->max_length )
        {
          System_Collections_Generic_List_bool___AddWithResize(
            v259,
            0,
            *(const MethodInfo_3558C28 **)(*(_QWORD *)(v277[4] + 192LL) + 112LL));
LABEL_165:
          v279 = 0;
          goto LABEL_166;
        }
        v279 = 0;
        v259->fields._size = v278 + 1;
        v276->m_Items[v278 + 4] = 0;
      }
LABEL_166:
      if ( !v251 )
        goto LABEL_281;
      v280 = v251->fields._items;
      v281 = Method_System_Collections_Generic_List_int__Add__;
      ++v251->fields._version;
      if ( !v280 )
        goto LABEL_281;
      v282 = v251->fields._size;
      if ( (unsigned int)v282 >= v280->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v251,
          LimitCount,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v281[4] + 192LL) + 112LL));
      }
      else
      {
        v251->fields._size = v282 + 1;
        v280->m_Items[v282 + 1] = LimitCount;
      }
      if ( !v255 )
        goto LABEL_281;
      v283 = v255->fields._items;
      v284 = Method_System_Collections_Generic_List_int__Add__;
      ++v255->fields._version;
      if ( !v283 )
        goto LABEL_281;
      v285 = v255->fields._size;
      if ( (unsigned int)v285 >= v283->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v255,
          v279,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v284[4] + 192LL) + 112LL));
      }
      else
      {
        v255->fields._size = v285 + 1;
        v283->m_Items[v285 + 1] = v279;
      }
      partyMemberItem = (int64_t)RestrictionNotSatisfySlot_TypeInfo;
      if ( !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo, UserId);
        partyMemberItem = (int64_t)RestrictionNotSatisfySlot_TypeInfo;
      }
      if ( ++v261 >= **(_DWORD **)(partyMemberItem + 184) )
      {
        partyMemberItem = (int64_t)BaseMonoBehaviour__createObject(
                                     (BaseMonoBehaviour_o *)this,
                                     this->fields.servantIconsPrefab,
                                     this->fields.iconParent,
                                     0LL,
                                     0LL);
        if ( !partyMemberItem )
          goto LABEL_281;
        Component_object = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 (UnityEngine_GameObject_o *)partyMemberItem,
                                                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        v287 = System_Collections_Generic_List_int___ToArray(
                 v247,
                 (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
        v288 = System_Collections_Generic_List_int___ToArray(
                 v251,
                 (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
        partyMemberItem = (int64_t)System_Collections_Generic_List_int___ToArray(
                                     v255,
                                     (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !v259 )
          goto LABEL_281;
        v289 = (System_Int32_array *)partyMemberItem;
        partyMemberItem = (int64_t)System_Collections_Generic_List_bool___ToArray(
                                     v259,
                                     (const MethodInfo_355A714 *)Method_System_Collections_Generic_List_bool__ToArray__);
        if ( !Component_object )
          goto LABEL_281;
        v291 = v287;
        v5 = questRestrictionInfoa;
        RestrictionNotSatisfySlotIcons__SetServantIcons(
          Component_object,
          v291,
          v288,
          v289,
          (System_Boolean_array *)partyMemberItem,
          questRestrictionInfoa,
          v290);
        if ( !v243 )
          goto LABEL_281;
        UserId = (int64_t)Component_object->fields.iconsWidget;
        v298 = v243->fields._items;
        v299 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++v243->fields._version;
        if ( !v298 )
          goto LABEL_281;
        v300 = v243->fields._size;
        if ( (unsigned int)v300 >= v298->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v243,
            (Il2CppObject *)UserId,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v299[4] + 192LL) + 112LL));
        }
        else
        {
          v301 = &v298->obj.klass + v300;
          v243->fields._size = v300 + 1;
          v301[4] = (Il2CppClass *)UserId;
          sub_1BCA784((PartyOrganizationUtility_o *)(v301 + 4), UserId, v292, v293, v294, v295, v296, v297);
        }
        v261 = 0;
        v302 = v247->fields._version + 1;
        v247->fields._size = 0;
        v247->fields._version = v302;
        v303 = v251->fields._version + 1;
        v251->fields._size = 0;
        v251->fields._version = v303;
        v304 = v255->fields._version + 1;
        v255->fields._size = 0;
        v255->fields._version = v304;
        v305 = v259->fields._version + 1;
        v259->fields._size = 0;
        v259->fields._version = v305;
      }
      ++v262;
      LODWORD(v260) = v382->max_length;
      if ( (__int64)v262 >= (int)v260 )
      {
        if ( v261 )
        {
          partyMemberItem = (int64_t)BaseMonoBehaviour__createObject(
                                       (BaseMonoBehaviour_o *)this,
                                       this->fields.servantIconsPrefab,
                                       this->fields.iconParent,
                                       0LL,
                                       0LL);
          if ( partyMemberItem )
          {
            v306 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)partyMemberItem,
                                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
            v307 = System_Collections_Generic_List_int___ToArray(
                     v247,
                     (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
            v308 = System_Collections_Generic_List_int___ToArray(
                     v251,
                     (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
            partyMemberItem = (int64_t)System_Collections_Generic_List_int___ToArray(
                                         v255,
                                         (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
            if ( v259 )
            {
              v309 = (System_Int32_array *)partyMemberItem;
              partyMemberItem = (int64_t)System_Collections_Generic_List_bool___ToArray(
                                           v259,
                                           (const MethodInfo_355A714 *)Method_System_Collections_Generic_List_bool__ToArray__);
              if ( v306 )
              {
                RestrictionNotSatisfySlotIcons__SetServantIcons(
                  v306,
                  v307,
                  v308,
                  v309,
                  (System_Boolean_array *)partyMemberItem,
                  v5,
                  v310);
                if ( v243 )
                {
                  UserId = (int64_t)v306->fields.iconsWidget;
                  v317 = v243->fields._items;
                  v318 = Method_System_Collections_Generic_List_UIWidget__Add__;
                  ++v243->fields._version;
                  if ( v317 )
                  {
                    v319 = v243->fields._size;
                    if ( (unsigned int)v319 >= v317->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v243,
                        (Il2CppObject *)UserId,
                        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v318[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v320 = &v317->obj.klass + v319;
                      v243->fields._size = v319 + 1;
                      v320[4] = (Il2CppClass *)UserId;
                      sub_1BCA784((PartyOrganizationUtility_o *)(v320 + 4), UserId, v311, v312, v313, v314, v315, v316);
                    }
LABEL_230:
                    switchIcons = this->fields.switchIcons;
                    partyMemberItem = (int64_t)System_Collections_Generic_List_object___ToArray(
                                                 v243,
                                                 (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                    if ( switchIcons )
                    {
                      v359 = (UIWidget_array *)partyMemberItem;
                      v360 = switchIcons;
                      goto LABEL_237;
                    }
                  }
                }
              }
            }
          }
          goto LABEL_281;
        }
LABEL_227:
        if ( v243 )
          goto LABEL_230;
        goto LABEL_281;
      }
    }
  }
  if ( !classImageIds )
    goto LABEL_281;
  if ( *(_QWORD *)&classImageIds->max_length )
  {
    v321 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_UIWidget__TypeInfo,
                                                          UserId,
                                                          v220,
                                                          v221);
    System_Collections_Generic_List_object____ctor(
      v321,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
    v325 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_int__TypeInfo,
                                                       v322,
                                                       v323,
                                                       v324);
    System_Collections_Generic_List_int____ctor(
      v325,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    v326 = classImageIds;
    if ( !classImageIds )
      goto LABEL_281;
    v327 = *(_QWORD *)&classImageIds->max_length;
    if ( (int)v327 < 1 )
      goto LABEL_232;
    v328 = 0;
    v329 = 0LL;
    do
    {
      if ( v329 >= (unsigned int)v327 )
        goto LABEL_282;
      if ( !v325 )
        goto LABEL_281;
      UserId = (unsigned int)v326->m_Items[v329 + 1];
      v330 = v325->fields._items;
      v331 = Method_System_Collections_Generic_List_int__Add__;
      ++v325->fields._version;
      if ( !v330 )
        goto LABEL_281;
      v332 = v325->fields._size;
      if ( (unsigned int)v332 >= v330->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v325,
          UserId,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v331[4] + 192LL) + 112LL));
      }
      else
      {
        v325->fields._size = v332 + 1;
        v330->m_Items[v332 + 1] = UserId;
      }
      partyMemberItem = (int64_t)RestrictionNotSatisfySlot_TypeInfo;
      if ( !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo, UserId);
        partyMemberItem = (int64_t)RestrictionNotSatisfySlot_TypeInfo;
      }
      if ( ++v328 >= **(_DWORD **)(partyMemberItem + 184) )
      {
        partyMemberItem = (int64_t)BaseMonoBehaviour__createObject(
                                     (BaseMonoBehaviour_o *)this,
                                     this->fields.servantIconsPrefab,
                                     this->fields.iconParent,
                                     0LL,
                                     0LL);
        if ( !partyMemberItem )
          goto LABEL_281;
        v333 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)partyMemberItem,
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        partyMemberItem = (int64_t)System_Collections_Generic_List_int___ToArray(
                                     v325,
                                     (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !v333 )
          goto LABEL_281;
        RestrictionNotSatisfySlotIcons__SetClassIcons(v333, (System_Int32_array *)partyMemberItem, v334);
        if ( !v321 )
          goto LABEL_281;
        UserId = (int64_t)v333->fields.iconsWidget;
        v341 = v321->fields._items;
        v342 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++v321->fields._version;
        if ( !v341 )
          goto LABEL_281;
        v343 = v321->fields._size;
        if ( (unsigned int)v343 >= v341->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v321,
            (Il2CppObject *)UserId,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v342[4] + 192LL) + 112LL));
        }
        else
        {
          v344 = &v341->obj.klass + v343;
          v321->fields._size = v343 + 1;
          v344[4] = (Il2CppClass *)UserId;
          sub_1BCA784((PartyOrganizationUtility_o *)(v344 + 4), UserId, v335, v336, v337, v338, v339, v340);
        }
        v328 = 0;
        v345 = v325->fields._version + 1;
        v325->fields._size = 0;
        v325->fields._version = v345;
      }
      LODWORD(v327) = v326->max_length;
      ++v329;
    }
    while ( (__int64)v329 < (int)v327 );
    if ( v328 )
    {
      partyMemberItem = (int64_t)BaseMonoBehaviour__createObject(
                                   (BaseMonoBehaviour_o *)this,
                                   this->fields.servantIconsPrefab,
                                   this->fields.iconParent,
                                   0LL,
                                   0LL);
      if ( !partyMemberItem )
        goto LABEL_281;
      v346 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)partyMemberItem,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
      partyMemberItem = (int64_t)System_Collections_Generic_List_int___ToArray(
                                   v325,
                                   (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v346 )
        goto LABEL_281;
      RestrictionNotSatisfySlotIcons__SetClassIcons(v346, (System_Int32_array *)partyMemberItem, v347);
      if ( !v321 )
        goto LABEL_281;
      UserId = (int64_t)v346->fields.iconsWidget;
      v354 = v321->fields._items;
      v355 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++v321->fields._version;
      if ( !v354 )
        goto LABEL_281;
      v356 = v321->fields._size;
      if ( (unsigned int)v356 >= v354->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v321,
          (Il2CppObject *)UserId,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v355[4] + 192LL) + 112LL));
      }
      else
      {
        v357 = &v354->obj.klass + v356;
        v321->fields._size = v356 + 1;
        v357[4] = (Il2CppClass *)UserId;
        sub_1BCA784((PartyOrganizationUtility_o *)(v357 + 4), UserId, v348, v349, v350, v351, v352, v353);
      }
    }
    else
    {
LABEL_232:
      if ( !v321 )
        goto LABEL_281;
    }
    v361 = this->fields.switchIcons;
    partyMemberItem = (int64_t)System_Collections_Generic_List_object___ToArray(
                                 v321,
                                 (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( v361 )
    {
      v359 = (UIWidget_array *)partyMemberItem;
      v360 = v361;
LABEL_237:
      SwitchUIWidgetComponent__Set(v360, v359, 0LL);
      partyMemberItem = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
      if ( partyMemberItem )
      {
        SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)partyMemberItem, 0LL);
        goto LABEL_239;
      }
    }
LABEL_281:
    sub_1BCAA3C(partyMemberItem, UserId);
  }
LABEL_239:
  partyMemberItem = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !partyMemberItem )
    goto LABEL_281;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyMemberItem, 1, 0LL);
}


void __fastcall RestrictionNotSatisfySlot___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12280 & 1) == 0 )
  {
    sub_1BCA7E0(&RestrictionNotSatisfySlot___c_TypeInfo, v1, v2);
    byte_4B12280 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(RestrictionNotSatisfySlot___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  RestrictionNotSatisfySlot___c_TypeInfo->static_fields->__9 = (struct RestrictionNotSatisfySlot___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)RestrictionNotSatisfySlot___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
  _BOOL4 v6; // w0
  unsigned int v7; // w8

  v4 = this;
  if ( (byte_4B12281 & 1) == 0 )
  {
    this = (RestrictionNotSatisfySlot___c__DisplayClass14_0_o *)sub_1BCA7E0(
                                                                  &Method_System_Linq_Enumerable_Contains_int___,
                                                                  entity,
                                                                  method);
    byte_4B12281 = 1;
  }
  if ( !entity )
    goto LABEL_13;
  memberItem = v4->fields.memberItem;
  if ( entity->fields.type != 9 )
  {
    if ( memberItem )
      goto LABEL_9;
LABEL_13:
    sub_1BCAA3C(this, entity);
  }
  if ( !memberItem )
    goto LABEL_13;
  if ( memberItem->fields._InitPos_k__BackingField == 1 )
  {
    LOBYTE(v6) = 1;
    return v6;
  }
LABEL_9:
  if ( System_Linq_Enumerable__Contains_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.targetVals2,
         memberItem->fields._InitPos_k__BackingField,
         (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___)
    && (v7 = entity->fields.type - 1, v7 <= 0xF) )
  {
    return (0x8801u >> v7) & 1;
  }
  else
  {
    LOBYTE(v6) = 0;
  }
  return v6;
}