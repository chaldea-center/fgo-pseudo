void __fastcall RestrictionNotSatisfySlot___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4C1DF16 & 1) == 0 )
  {
    sub_1C3B764(&RestrictionNotSatisfySlot_TypeInfo, v1);
    byte_4C1DF16 = 1;
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
  System_String_o *v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_String_o *v17; // x19
  int64_t v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  void *v44; // x1

  if ( (byte_4C1DF14 & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, message);
    sub_1C3B764(&string___TypeInfo, v4);
    sub_1C3B764(&StringLiteral_43/*"\n"*/, v5);
    sub_1C3B764(&StringLiteral_16146/*"__max-thumb"*/, v6);
    sub_1C3B764(&StringLiteral_11310/*"SERVANT_EQUIP_EFFECT_FILTER_GROUP_"*/, v7);
    sub_1C3B764(&StringLiteral_16251/*"_txt_expup"*/, v8);
    byte_4C1DF14 = 1;
  }
  v9 = (System_String_o *)sub_1C3B80C(string___TypeInfo, 5LL);
  if ( !v9 )
    sub_1C3B9C0(0LL, v10);
  v17 = v9;
  if ( !LODWORD(v9[1].klass) )
    goto LABEL_12;
  v18 = StringLiteral_16251/*"_txt_expup"*/;
  v9[1].monitor = (void *)StringLiteral_16251/*"_txt_expup"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v9[1].monitor, v18, v11, v12, v13, v14, v15, v16);
  if ( LODWORD(v17[1].klass) <= 1 )
    goto LABEL_12;
  v17[1].fields = (System_String_Fields)message;
  sub_1C3B708((PartyOrganizationUtility_o *)&v17[1].fields, (int64_t)message, v19, v20, v21, v22, v23, v24);
  if ( LODWORD(v17[1].klass) <= 2 )
    goto LABEL_12;
  v31 = StringLiteral_43/*"\n"*/;
  v17[2].klass = (System_String_c *)StringLiteral_43/*"\n"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v17[2], v31, v25, v26, v27, v28, v29, v30);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11310/*"SERVANT_EQUIP_EFFECT_FILTER_GROUP_"*/, 0LL);
  if ( LODWORD(v17[1].klass) <= 3
    || (v17[2].monitor = v9,
        sub_1C3B708((PartyOrganizationUtility_o *)&v17[2].monitor, (int64_t)v9, v32, v33, v34, v35, v36, v37),
        LODWORD(v17[1].klass) <= 4) )
  {
LABEL_12:
    sub_1C3B9C8(v9, v10);
  }
  v44 = StringLiteral_16146/*"__max-thumb"*/;
  v17[2].fields = (System_String_Fields)StringLiteral_16146/*"__max-thumb"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v17[2].fields, (int64_t)v44, v38, v39, v40, v41, v42, v43);
  return System_String__Concat_63382140((System_String_array *)v17, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Master_object; // x22
  Il2CppObject *v15; // x25
  System_Collections_Generic_List_int__o *v16; // x24
  System_Collections_Generic_List_int__o *v17; // x23
  _BOOL8 EntityByIndividuality; // x0
  __int64 iconImageId; // x1
  __int64 v20; // x8
  unsigned __int64 v21; // x27
  int32_t v22; // w26
  struct System_Int32_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  struct System_Int32_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  __int64 v29; // x8
  System_Collections_Generic_List_int__o *v30; // x0
  System_Int32_array *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Int32_array *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  ServantClassEntity_o *v46; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C1DF13 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_ServantClassMaster___, servantIds);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1C3B764(&DataManager_TypeInfo, v8);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v13);
    byte_4C1DF13 = 1;
  }
  v46 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantMaster___);
  v15 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v16 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  v17 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individuality )
    goto LABEL_29;
  v20 = *(_QWORD *)&individuality->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = 0LL;
    do
    {
      if ( v21 >= (unsigned int)v20 )
        sub_1C3B9C8(EntityByIndividuality, iconImageId);
      if ( !Master_object )
        goto LABEL_29;
      v22 = individuality->m_Items[v21 + 1];
      EntityByIndividuality = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                &entity,
                                v22,
                                (const MethodInfo_329AE94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( EntityByIndividuality )
      {
        if ( !v16 )
          goto LABEL_29;
        items = v16->fields._items;
        v24 = Method_System_Collections_Generic_List_int__Add__;
        ++v16->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v29 = v24[4];
          v30 = v16;
          LODWORD(iconImageId) = v22;
LABEL_24:
          System_Collections_Generic_List_int___AddWithResize(
            v30,
            iconImageId,
            *(const MethodInfo_366EC48 **)(*(_QWORD *)(v29 + 192) + 112LL));
          goto LABEL_25;
        }
        v16->fields._size = size + 1;
        items->m_Items[size + 1] = v22;
      }
      else
      {
        if ( !v15 )
          goto LABEL_29;
        EntityByIndividuality = ServantClassMaster__TryGetEntityByIndividuality(
                                  (ServantClassMaster_o *)v15,
                                  &v46,
                                  v22,
                                  0LL);
        if ( !EntityByIndividuality )
          goto LABEL_25;
        if ( !v46 )
          goto LABEL_29;
        if ( !v17 )
          goto LABEL_29;
        iconImageId = (unsigned int)v46->fields.iconImageId;
        v26 = v17->fields._items;
        v27 = Method_System_Collections_Generic_List_int__Add__;
        ++v17->fields._version;
        if ( !v26 )
          goto LABEL_29;
        v28 = v17->fields._size;
        if ( (unsigned int)v28 >= v26->max_length )
        {
          v29 = v27[4];
          v30 = v17;
          goto LABEL_24;
        }
        v17->fields._size = v28 + 1;
        v26->m_Items[v28 + 1] = iconImageId;
      }
LABEL_25:
      LODWORD(v20) = individuality->max_length;
    }
    while ( (__int64)++v21 < (int)v20 );
  }
  if ( !v16
    || (v31 = System_Collections_Generic_List_int___ToArray(
                v16,
                (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__),
        *servantIds = v31,
        sub_1C3B708((PartyOrganizationUtility_o *)servantIds, (int64_t)v31, v32, v33, v34, v35, v36, v37),
        !v17) )
  {
LABEL_29:
    sub_1C3B9C0(EntityByIndividuality, iconImageId);
  }
  v38 = System_Collections_Generic_List_int___ToArray(
          v17,
          (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
  *classImageIds = v38;
  sub_1C3B708((PartyOrganizationUtility_o *)classImageIds, (int64_t)v38, v39, v40, v41, v42, v43, v44);
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

  if ( (byte_4C1DF15 & 1) == 0 )
  {
    sub_1C3B764(&System_Text_RegularExpressions_Regex_TypeInfo, message);
    sub_1C3B764(&StringLiteral_16280/*"a"*/, v4);
    sub_1C3B764(&StringLiteral_1/*""*/, v5);
    sub_1C3B764(&StringLiteral_16281/*"a lost name should not be null or empty, this probably points to an importer or serialization bug"*/, v6);
    byte_4C1DF15 = 1;
  }
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  v7 = System_Text_RegularExpressions_Regex__Replace(
         message,
         (System_String_o *)StringLiteral_16281/*"a lost name should not be null or empty, this probably points to an importer or serialization bug"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  return System_Text_RegularExpressions_Regex__Replace(
           v7,
           (System_String_o *)StringLiteral_16280/*"a"*/,
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
  __int64 v66; // x24
  int64_t partyMemberItem; // x0
  int64_t iconsWidget; // x1
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  PartyOrganizationListViewItem_o **v75; // x21
  UISprite_o *numberSprite; // x20
  System_String_o *v77; // x0
  long double inited; // q0
  _QWORD *v79; // x20
  __int64 v80; // x8
  __int64 v81; // x0
  __int64 v82; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x22
  System_Collections_Generic_List_object__o *v84; // x23
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x20
  System_Func_object__bool__o *v86; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v87; // x0
  RestrictionNotSatisfySlot___c_c *v88; // x0
  System_Func_object__bool__o *_9__14_1; // x20
  Il2CppObject *v90; // x24
  struct RestrictionNotSatisfySlot___c_StaticFields *static_fields; // x0
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v98; // x0
  const MethodInfo *v99; // x2
  int64_t v100; // x20
  __int64 v101; // x8
  unsigned __int64 v102; // x19
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  struct System_Object_array *items; // x8
  _QWORD *v110; // x9
  __int64 size; // x10
  int64_t v112; // x1
  Il2CppClass **v113; // x0
  System_Collections_Generic_List_object__o *v114; // x24
  __int64 v115; // x1
  UnityEngine_GameObject_o *restrictionLabelRoot; // x0
  Il2CppObject *current; // x23
  Il2CppObject *restrictionLabel; // x20
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *v120; // x0
  __int64 v121; // x1
  Il2CppObject *v122; // x20
  __int64 v123; // x0
  __int64 v124; // x1
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  struct System_Object_array *v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  Il2CppClass **v134; // x0
  SwitchUIWidgetComponent_o *switchMessage; // x20
  long double v136; // q0
  _QWORD *v137; // x20
  __int64 v138; // x8
  __int64 v139; // x0
  __int64 v140; // x0
  _QWORD *v141; // x20
  __int64 v142; // x8
  __int64 v143; // x0
  QuestRestrictionInfo_o *v144; // x29
  __int64 v145; // x0
  System_Collections_Generic_Dictionary_int__object__o *v146; // x20
  char v147; // w20
  const MethodInfo *v148; // x4
  bool IsSelectableNormalSupport; // w0
  QuestPhaseEntity_o *v150; // x8
  System_Collections_Generic_IEnumerable_T__o *v151; // x21
  System_Collections_Generic_List_int__o *v152; // x20
  struct System_Int32_array *v153; // x8
  _QWORD *v154; // x9
  __int64 v155; // x10
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Int32_array *v158; // x3
  System_Collections_Generic_List_int__o *v159; // x20
  PartyOrganizationListViewItem_o *v160; // x8
  System_Collections_Generic_List_object__o *v161; // x21
  System_Collections_Generic_List_T__o *v162; // x22
  int32_t v163; // w23
  System_Collections_Generic_List_object__o *v164; // x21
  System_Collections_Generic_List_int__o *v165; // x22
  System_Collections_Generic_List_int__o *v166; // x24
  System_Collections_Generic_List_int__o *v167; // x25
  System_Collections_Generic_List_bool__o *v168; // x26
  System_Int32_array *v169; // x27
  __int64 v170; // x8
  int v171; // w19
  unsigned __int64 v172; // x23
  int32_t v173; // w20
  struct System_Int32_array *v174; // x8
  _QWORD *v175; // x9
  __int64 v176; // x10
  Il2CppObject *v177; // x0
  int32_t questId; // w27
  int32_t questPhase; // w29
  FollowerInfo_o *v180; // x28
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w28
  struct System_Boolean_array *v183; // x8
  _QWORD *v184; // x9
  __int64 v185; // x10
  struct System_Boolean_array *v186; // x8
  _QWORD *v187; // x9
  __int64 v188; // x10
  int32_t v189; // w20
  struct System_Int32_array *v190; // x8
  _QWORD *v191; // x9
  __int64 v192; // x10
  struct System_Int32_array *v193; // x8
  _QWORD *v194; // x9
  __int64 v195; // x10
  RestrictionNotSatisfySlotIcons_o *v196; // x20
  System_Int32_array *v197; // x27
  System_Int32_array *v198; // x28
  System_Int32_array *v199; // x29
  const MethodInfo *v200; // x6
  System_Int32_array *v201; // x3
  int64_t v202; // x2
  int32_t v203; // w3
  System_String_o *v204; // x4
  BattleSetupInfo_o *v205; // x5
  FollowerInfo_o *v206; // x6
  PartyListViewItem_o *v207; // x7
  struct System_Object_array *v208; // x8
  _QWORD *v209; // x9
  __int64 v210; // x10
  Il2CppClass **v211; // x0
  int v212; // w8
  int v213; // w8
  int v214; // w8
  int v215; // w8
  RestrictionNotSatisfySlotIcons_o *v216; // x20
  System_Int32_array *v217; // x22
  System_Int32_array *v218; // x23
  System_Int32_array *v219; // x24
  const MethodInfo *v220; // x6
  int64_t v221; // x2
  int32_t v222; // w3
  System_String_o *v223; // x4
  BattleSetupInfo_o *v224; // x5
  FollowerInfo_o *v225; // x6
  PartyListViewItem_o *v226; // x7
  struct System_Object_array *v227; // x8
  _QWORD *v228; // x9
  __int64 v229; // x10
  Il2CppClass **v230; // x0
  System_Collections_Generic_List_object__o *v231; // x20
  System_Collections_Generic_List_int__o *v232; // x21
  System_Int32_array *v233; // x19
  __int64 v234; // x8
  int v235; // w22
  unsigned __int64 v236; // x23
  struct System_Int32_array *v237; // x8
  _QWORD *v238; // x9
  __int64 v239; // x10
  RestrictionNotSatisfySlotIcons_o *Component_object; // x22
  const MethodInfo *v241; // x2
  int64_t v242; // x2
  int32_t v243; // w3
  System_String_o *v244; // x4
  BattleSetupInfo_o *v245; // x5
  FollowerInfo_o *v246; // x6
  PartyListViewItem_o *v247; // x7
  struct System_Object_array *v248; // x8
  _QWORD *v249; // x9
  __int64 v250; // x10
  Il2CppClass **v251; // x0
  int v252; // w8
  RestrictionNotSatisfySlotIcons_o *v253; // x22
  const MethodInfo *v254; // x2
  int64_t v255; // x2
  int32_t v256; // w3
  System_String_o *v257; // x4
  BattleSetupInfo_o *v258; // x5
  FollowerInfo_o *v259; // x6
  PartyListViewItem_o *v260; // x7
  struct System_Object_array *v261; // x8
  _QWORD *v262; // x9
  __int64 v263; // x10
  Il2CppClass **v264; // x0
  struct SwitchUIWidgetComponent_o *v265; // x20
  UIWidget_array *v266; // x1
  SwitchUIWidgetComponent_o *v267; // x0
  struct SwitchUIWidgetComponent_o *switchIcons; // x21
  PartyOrganizationListViewItem_o *v269; // x8
  int64_t v270; // x2
  int32_t v271; // w3
  System_String_o *v272; // x4
  BattleSetupInfo_o *v273; // x5
  FollowerInfo_o *v274; // x6
  PartyListViewItem_o *v275; // x7
  struct System_Object_array *v276; // x8
  _QWORD *v277; // x9
  __int64 v278; // x10
  int64_t v279; // x1
  Il2CppClass **v280; // x0
  int v281; // w19
  int32_t v282; // w20
  Il2CppObject *Item; // x0
  const MethodInfo *v284; // x2
  Il2CppObject *fixed; // x0
  NpcFollowerMaster_o *v286; // [xsp+48h] [xbp-108h]
  NpcServantFollowerMaster_o *Master_object; // [xsp+50h] [xbp-100h]
  UserServantCollectionMaster_o *MasterData_object; // [xsp+58h] [xbp-F8h]
  System_Int32_array *v289; // [xsp+60h] [xbp-F0h]
  QuestRestrictionInfo_o *questRestrictionInfoa; // [xsp+68h] [xbp-E8h]
  int32_t *v291; // [xsp+70h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v293; // [xsp+80h] [xbp-D0h] BYREF
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+98h] [xbp-B8h] BYREF
  QuestPhaseEntity_o *v295; // [xsp+A0h] [xbp-B0h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+A8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v297; // [xsp+B0h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+D0h] [xbp-80h] BYREF
  System_Int32_array *classImageIds; // [xsp+D8h] [xbp-78h] BYREF
  System_Int32_array *servantIds; // [xsp+E0h] [xbp-70h] BYREF
  int32_t pos; // [xsp+ECh] [xbp-64h] BYREF

  pos = number;
  if ( (byte_4C1DF12 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_Empty_int___, *(_QWORD *)&number);
    sub_1C3B764(&Method_System_Array_Empty_RestrictionEntity___, v7);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8);
    sub_1C3B764(&Method_DataManager_GetMaster_NpcFollowerMaster___, v9);
    sub_1C3B764(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v10);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestPhaseMaster___, v11);
    sub_1C3B764(&DataManager_TypeInfo, v12);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v15);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v16);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___, v17);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v20);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v21);
    sub_1C3B764(&System_Func_RestrictionEntity__bool__TypeInfo, v22);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___, v23);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__AddRange__, v24);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v25);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__Add__, v26);
    sub_1C3B764(&Method_System_Collections_Generic_List_bool__Add__, v27);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Add__, v28);
    sub_1C3B764(&Method_System_Collections_Generic_List_bool__Clear__, v29);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Clear__, v30);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__GetEnumerator__, v31);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v32);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__ToArray__, v33);
    sub_1C3B764(&Method_System_Collections_Generic_List_bool__ToArray__, v34);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v35);
    sub_1C3B764(&Method_System_Collections_Generic_List_bool___ctor__, v36);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget___ctor__, v37);
    sub_1C3B764(&Method_System_Collections_Generic_List_string___ctor__, v38);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor___77852768, v39);
    sub_1C3B764(&Method_System_Collections_Generic_List_int____get_Count__, v40);
    sub_1C3B764(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v41);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__get_Count__, v42);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__get_Item__, v43);
    sub_1C3B764(&Method_System_Collections_Generic_List_int____get_Item__, v44);
    sub_1C3B764(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v45);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__set_Item__, v46);
    sub_1C3B764(&System_Collections_Generic_List_bool__TypeInfo, v47);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v48);
    sub_1C3B764(&System_Collections_Generic_List_string__TypeInfo, v49);
    sub_1C3B764(&System_Collections_Generic_List_UIWidget__TypeInfo, v50);
    sub_1C3B764(&LocalizationManager_TypeInfo, v51);
    sub_1C3B764(&NetworkManager_TypeInfo, v52);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_UILabel____77992888, v53);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v54);
    sub_1C3B764(&RestrictionNotSatisfySlot_TypeInfo, v55);
    sub_1C3B764(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v56);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v57);
    sub_1C3B764(&Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__, v58);
    sub_1C3B764(&Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__, v59);
    sub_1C3B764(&RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo, v60);
    sub_1C3B764(&RestrictionNotSatisfySlot___c_TypeInfo, v61);
    sub_1C3B764(&StringLiteral_43/*"\n"*/, v62);
    sub_1C3B764(&StringLiteral_21818/*"notDisplayQuestInfo"*/, v63);
    sub_1C3B764(&StringLiteral_11307/*"SERVANT_EMPTY"*/, v64);
    sub_1C3B764(&StringLiteral_1/*""*/, v65);
    byte_4C1DF12 = 1;
  }
  classImageIds = 0LL;
  servantIds = 0LL;
  npcInfoDictionary = 0LL;
  memset(&v297, 0, sizeof(v297));
  v295 = 0LL;
  entity = 0LL;
  npcServantFollowerEntity = 0LL;
  v66 = sub_1C3B9B0(RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v66, 0LL);
  if ( !v66 )
    goto LABEL_286;
  *(_QWORD *)(v66 + 16) = memberItem;
  v75 = (PartyOrganizationListViewItem_o **)(v66 + 16);
  sub_1C3B708((PartyOrganizationUtility_o *)(v66 + 16), (int64_t)memberItem, v69, v70, v71, v72, v73, v74);
  numberSprite = this->fields.numberSprite;
  v77 = System_Int32__ToString((int32_t)&pos, 0LL);
  partyMemberItem = (int64_t)System_String__Concat_63368612((System_String_o *)StringLiteral_21818/*"notDisplayQuestInfo"*/, v77, 0LL);
  if ( !numberSprite )
    goto LABEL_286;
  UISprite__set_spriteName(numberSprite, (System_String_o *)partyMemberItem, 0LL);
  partyMemberItem = (int64_t)this->fields.partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_286;
  PartyOrganizationConfirmItemDraw__SetItem(
    (PartyOrganizationConfirmItemDraw_o *)partyMemberItem,
    *v75,
    3,
    0,
    0,
    0,
    0,
    0LL);
  v79 = Method_System_Array_Empty_RestrictionEntity___;
  v80 = *((_QWORD *)Method_System_Array_Empty_RestrictionEntity___ + 7);
  if ( !v80 )
  {
    sub_1C8D69C(Method_System_Array_Empty_RestrictionEntity___);
    v80 = v79[7];
  }
  v81 = *(_QWORD *)(v80 + 16);
  if ( (*(_BYTE *)(v81 + 309) & 1) == 0 )
    v81 = sub_1C8D640(inited);
  if ( !*(_DWORD *)(v81 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v81);
  v82 = *(_QWORD *)(v79[7] + 16LL);
  if ( (*(_BYTE *)(v82 + 309) & 1) == 0 )
    v82 = sub_1C8D640(inited);
  v83 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v82 + 184);
  v84 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v84,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !questRestrictionInfo )
    goto LABEL_286;
  partyMemberItem = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( (partyMemberItem & 1) != 0 )
  {
    restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
    v86 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v86,
      (Il2CppObject *)v66,
      Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__,
      0LL);
    v87 = System_Linq_Enumerable__Where_object_(
            restrictionEntityList,
            (System_Func_TSource__bool__o *)v86,
            (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    v83 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 v87,
                                                                 (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    if ( questRestrictionInfo->fields.isUniqueServant && questRestrictionInfo->fields.isUniqueIndividuality )
    {
      v88 = RestrictionNotSatisfySlot___c_TypeInfo;
      if ( !RestrictionNotSatisfySlot___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot___c_TypeInfo);
        v88 = RestrictionNotSatisfySlot___c_TypeInfo;
      }
      _9__14_1 = (System_Func_object__bool__o *)v88->static_fields->__9__14_1;
      if ( !_9__14_1 )
      {
        if ( !v88->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v88);
          v88 = RestrictionNotSatisfySlot___c_TypeInfo;
        }
        v90 = (Il2CppObject *)v88->static_fields->__9;
        _9__14_1 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__14_1, v90, Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__, 0LL);
        static_fields = RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
        static_fields->__9__14_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__14_1;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&static_fields->__9__14_1,
          (int64_t)_9__14_1,
          v92,
          v93,
          v94,
          v95,
          v96,
          v97);
      }
      v98 = System_Linq_Enumerable__Where_object_(
              v83,
              (System_Func_TSource__bool__o *)_9__14_1,
              (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v83 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                   v98,
                                                                   (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    }
    partyMemberItem = (int64_t)QuestRestrictionInfo__GetMessages_41917184(
                                 questRestrictionInfo,
                                 (RestrictionEntity_array *)v83,
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
      goto LABEL_286;
    partyMemberItem = (int64_t)QuestRestrictionInfo__GetMessages(
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
  v100 = partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_286;
  v101 = *(_QWORD *)(partyMemberItem + 24);
  if ( v101 && (int)v101 >= 1 )
  {
    v102 = 0LL;
    while ( v102 < (unsigned int)v101 )
    {
      partyMemberItem = (int64_t)RestrictionNotSatisfySlot__RemoveColorCode(
                                   (RestrictionNotSatisfySlot_o *)partyMemberItem,
                                   *(System_String_o **)(v100 + 32 + 8 * v102),
                                   v99);
      if ( !partyMemberItem )
        goto LABEL_286;
      partyMemberItem = (int64_t)System_String__Replace_63388240(
                                   (System_String_o *)partyMemberItem,
                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                   (System_String_o *)StringLiteral_1/*""*/,
                                   0LL);
      if ( !v84 )
        goto LABEL_286;
      items = v84->fields._items;
      v110 = Method_System_Collections_Generic_List_string__Add__;
      ++v84->fields._version;
      if ( !items )
        goto LABEL_286;
      size = v84->fields._size;
      v112 = partyMemberItem;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v84,
          (Il2CppObject *)partyMemberItem,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
      }
      else
      {
        v113 = &items->obj.klass + size;
        v84->fields._size = size + 1;
        v113[4] = (Il2CppClass *)v112;
        sub_1C3B708((PartyOrganizationUtility_o *)(v113 + 4), v112, v103, v104, v105, v106, v107, v108);
      }
      LODWORD(v101) = *(_DWORD *)(v100 + 24);
      if ( (__int64)++v102 >= (int)v101 )
        goto LABEL_40;
    }
LABEL_287:
    sub_1C3B9C8(partyMemberItem, iconsWidget);
  }
LABEL_40:
  partyMemberItem = (int64_t)this->fields.notSatisfyWidget;
  if ( !partyMemberItem )
    goto LABEL_286;
  partyMemberItem = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)partyMemberItem, 0LL);
  if ( !partyMemberItem )
    goto LABEL_286;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyMemberItem, 0, 0LL);
  partyMemberItem = (int64_t)*v75;
  if ( !*v75 )
    goto LABEL_286;
  if ( !PartyOrganizationListViewItem__get_IsSupportOnly((PartyOrganizationListViewItem_o *)partyMemberItem, 0LL) )
  {
    partyMemberItem = (int64_t)*v75;
    if ( !*v75 )
      goto LABEL_286;
    if ( !PartyOrganizationListViewItem__get_IsFixedMyServantSingle(
            (PartyOrganizationListViewItem_o *)partyMemberItem,
            0LL) )
    {
      partyMemberItem = (int64_t)*v75;
      if ( !*v75 )
        goto LABEL_286;
      if ( !*(_BYTE *)(partyMemberItem + 216) && !*(_BYTE *)(partyMemberItem + 217) )
      {
        if ( PartyOrganizationListViewItem__get_IsQuestRestriction(
               (PartyOrganizationListViewItem_o *)partyMemberItem,
               0LL) )
        {
          goto LABEL_261;
        }
        partyMemberItem = (int64_t)*v75;
        if ( !*v75 )
          goto LABEL_286;
        partyMemberItem = PartyOrganizationListViewItem__get_IsEmpty(
                            (PartyOrganizationListViewItem_o *)partyMemberItem,
                            0LL);
        if ( (partyMemberItem & 1) != 0 )
        {
          if ( !*v75 )
            goto LABEL_286;
          partyMemberItem = QuestRestrictionInfo__IsSetRequired(
                              questRestrictionInfo,
                              pos,
                              (*v75)->fields._InitPos_k__BackingField,
                              0LL);
          if ( (partyMemberItem & 1) != 0 )
            goto LABEL_261;
        }
        v269 = *v75;
        if ( !*v75 )
          goto LABEL_286;
        if ( v269->fields.isUniqueSvtRestriction
          || v269->fields.isUniqueIndividualityRestriction
          || (v269->fields.fatigureTime & 0x8000000000000000LL) == 0
          || v269->fields._IsAllOutBattle_k__BackingField
          || v269->fields._IsDataLost_k__BackingField
          || v269->fields._TimesToRestart_k__BackingField > 0
          || v269->fields._IsNotSupportSingle_k__BackingField
          || v269->fields.isFixedServantPositionRestriction
          || v269->fields.isFixedSupportPositionRestriction )
        {
LABEL_261:
          partyMemberItem = (int64_t)this->fields.notSatisfyWidget;
          if ( !partyMemberItem )
            goto LABEL_286;
          partyMemberItem = (int64_t)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)partyMemberItem,
                                       0LL);
          if ( !partyMemberItem )
            goto LABEL_286;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyMemberItem, 1, 0LL);
          partyMemberItem = (int64_t)*v75;
          if ( !*v75 )
            goto LABEL_286;
          partyMemberItem = PartyOrganizationListViewItem__get_IsEmpty(
                              (PartyOrganizationListViewItem_o *)partyMemberItem,
                              0LL);
          if ( (partyMemberItem & 1) == 0 )
            goto LABEL_276;
          if ( !*v75 )
            goto LABEL_286;
          if ( QuestRestrictionInfo__IsSetRequired(
                 questRestrictionInfo,
                 pos,
                 (*v75)->fields._InitPos_k__BackingField,
                 0LL) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            partyMemberItem = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11307/*"SERVANT_EMPTY"*/, 0LL);
            if ( !v84 )
              goto LABEL_286;
            v276 = v84->fields._items;
            v277 = Method_System_Collections_Generic_List_string__Add__;
            ++v84->fields._version;
            if ( !v276 )
              goto LABEL_286;
            v278 = v84->fields._size;
            v279 = partyMemberItem;
            if ( (unsigned int)v278 >= v276->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v84,
                (Il2CppObject *)partyMemberItem,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v277[4] + 192LL) + 112LL));
            }
            else
            {
              v280 = &v276->obj.klass + v278;
              v84->fields._size = v278 + 1;
              v280[4] = (Il2CppClass *)v279;
              sub_1C3B708((PartyOrganizationUtility_o *)(v280 + 4), v279, v270, v271, v272, v273, v274, v275);
            }
            v281 = 1;
          }
          else
          {
LABEL_276:
            v281 = 0;
          }
          partyMemberItem = (int64_t)*v75;
          if ( !*v75 )
            goto LABEL_286;
          partyMemberItem = PartyOrganizationListViewItem__get_IsQuestRestriction(
                              (PartyOrganizationListViewItem_o *)partyMemberItem,
                              0LL);
          if ( v281 | partyMemberItem & 1 )
          {
            if ( !v84 )
              goto LABEL_286;
            if ( v84->fields._size >= 1 )
            {
              v282 = 0;
              do
              {
                Item = System_Collections_Generic_List_object___get_Item(
                         v84,
                         v282,
                         (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_string__get_Item__);
                fixed = (Il2CppObject *)RestrictionNotSatisfySlot__AddColorCodeAndFixMessage(
                                          (RestrictionNotSatisfySlot_o *)Item,
                                          (System_String_o *)Item,
                                          v284);
                System_Collections_Generic_List_object___set_Item(
                  v84,
                  v282++,
                  fixed,
                  (const MethodInfo_368B9F0 *)Method_System_Collections_Generic_List_string__set_Item__);
              }
              while ( v282 < v84->fields._size );
            }
          }
        }
      }
    }
  }
  questRestrictionInfoa = questRestrictionInfo;
  v114 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v114,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  if ( !v84 )
    goto LABEL_286;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v293,
    v84,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v297 = v293;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v297,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    restrictionLabelRoot = this->fields.restrictionLabelRoot;
    if ( !restrictionLabelRoot )
      sub_1C3B9C0(0LL, v115);
    current = v297.fields._current;
    restrictionLabel = (Il2CppObject *)this->fields.restrictionLabel;
    transform = UnityEngine_GameObject__get_transform(restrictionLabelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v120 = UnityEngine_Object__Instantiate_object__50818788(
             restrictionLabel,
             transform,
             (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_UILabel____77992888);
    v122 = v120;
    if ( !v120 )
      sub_1C3B9C0(0LL, v121);
    UILabel__set_text((UILabel_o *)v120, (System_String_o *)current, 0LL);
    if ( !v114 )
      sub_1C3B9C0(v123, v124);
    v131 = v114->fields._items;
    v132 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++v114->fields._version;
    if ( !v131 )
      sub_1C3B9C0(v123, v124);
    v133 = v114->fields._size;
    if ( (unsigned int)v133 >= v131->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v114,
        v122,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
    }
    else
    {
      v134 = &v131->obj.klass + v133;
      v114->fields._size = v133 + 1;
      v134[4] = (Il2CppClass *)v122;
      sub_1C3B708((PartyOrganizationUtility_o *)(v134 + 4), (int64_t)v122, v125, v126, v127, v128, v129, v130);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v297,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v114 )
    goto LABEL_286;
  switchMessage = this->fields.switchMessage;
  partyMemberItem = (int64_t)System_Collections_Generic_List_object___ToArray(
                               v114,
                               (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !switchMessage )
    goto LABEL_286;
  SwitchUIWidgetComponent__Set(switchMessage, (UIWidget_array *)partyMemberItem, 0LL);
  v137 = Method_System_Array_Empty_int___;
  v138 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v138 )
  {
    sub_1C8D69C(Method_System_Array_Empty_int___);
    v138 = v137[7];
  }
  v139 = *(_QWORD *)(v138 + 16);
  if ( (*(_BYTE *)(v139 + 309) & 1) == 0 )
    v139 = sub_1C8D640(v136);
  if ( !*(_DWORD *)(v139 + 224) )
    v136 = j_il2cpp_runtime_class_init_0(v139);
  v140 = *(_QWORD *)(v137[7] + 16LL);
  if ( (*(_BYTE *)(v140 + 309) & 1) == 0 )
    v140 = sub_1C8D640(v136);
  v141 = Method_System_Array_Empty_int___;
  servantIds = **(System_Int32_array ***)(v140 + 184);
  v142 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v142 )
  {
    sub_1C8D69C(Method_System_Array_Empty_int___);
    v142 = v141[7];
  }
  v143 = *(_QWORD *)(v142 + 16);
  v144 = questRestrictionInfo;
  if ( (*(_BYTE *)(v143 + 309) & 1) == 0 )
    v143 = sub_1C8D640(v136);
  if ( !*(_DWORD *)(v143 + 224) )
    v136 = j_il2cpp_runtime_class_init_0(v143);
  v145 = *(_QWORD *)(v141[7] + 16LL);
  if ( (*(_BYTE *)(v145 + 309) & 1) == 0 )
    v145 = sub_1C8D640(v136);
  classImageIds = **(System_Int32_array ***)(v145 + 184);
  v146 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v146,
    (const MethodInfo_32F41C8 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v146;
  partyMemberItem = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( !*v75 )
    goto LABEL_286;
  v147 = partyMemberItem;
  partyMemberItem = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41939672(
                      questRestrictionInfo,
                      (*v75)->fields._InitPos_k__BackingField,
                      0LL);
  if ( (v147 & 1) == 0 )
  {
    if ( (partyMemberItem & 1) != 0 )
    {
      if ( !*v75 )
        goto LABEL_286;
      servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                     questRestrictionInfo,
                     &npcInfoDictionary,
                     (*v75)->fields._InitPos_k__BackingField,
                     0,
                     0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      partyMemberItem = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !partyMemberItem )
        goto LABEL_286;
      partyMemberItem = QuestPhaseMaster__TryGetEntity(
                          (QuestPhaseMaster_o *)partyMemberItem,
                          &v295,
                          questRestrictionInfo->fields.questId,
                          questRestrictionInfo->fields.questPhase,
                          0LL);
      if ( !servantIds )
        goto LABEL_286;
      if ( !*(_QWORD *)&servantIds->max_length )
        goto LABEL_125;
      if ( !*v75 )
        goto LABEL_286;
      IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                    questRestrictionInfo,
                                    (*v75)->fields._InitPos_k__BackingField,
                                    0LL);
      v150 = v295;
      if ( !v295 )
        goto LABEL_125;
      goto LABEL_100;
    }
    v159 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v159,
      (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !*v75 )
      goto LABEL_286;
    partyMemberItem = (int64_t)QuestRestrictionInfo__GetNeedIndividualityList(
                                 questRestrictionInfo,
                                 (*v75)->fields._InitPos_k__BackingField,
                                 0LL);
    v160 = *v75;
    if ( !*v75 )
      goto LABEL_286;
    v161 = (System_Collections_Generic_List_object__o *)partyMemberItem;
    partyMemberItem = (int64_t)QuestRestrictionInfo__GetRangeTypeList(
                                 questRestrictionInfo,
                                 v160->fields._InitPos_k__BackingField,
                                 0LL);
    if ( !v161 )
      goto LABEL_286;
    if ( v161->fields._size >= 1 )
    {
      v162 = (System_Collections_Generic_List_T__o *)partyMemberItem;
      v163 = 0;
      while ( v162 )
      {
        if ( v162->fields._size > v163 )
        {
          partyMemberItem = System_Collections_Generic_List_Int32Enum___get_Item(
                              v162,
                              v163,
                              (const MethodInfo_3671184 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          if ( (_DWORD)partyMemberItem == 1 )
          {
            partyMemberItem = (int64_t)System_Collections_Generic_List_object___get_Item(
                                         v161,
                                         v163,
                                         (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_int____get_Item__);
            if ( !v159 )
              goto LABEL_286;
            System_Collections_Generic_List_int___AddRange(
              v159,
              (System_Collections_Generic_IEnumerable_T__o *)partyMemberItem,
              (const MethodInfo_366EE54 *)Method_System_Collections_Generic_List_int__AddRange__);
          }
        }
        if ( ++v163 >= v161->fields._size )
          goto LABEL_122;
      }
      goto LABEL_286;
    }
LABEL_122:
    if ( !v159 )
      goto LABEL_286;
    partyMemberItem = (int64_t)System_Collections_Generic_List_int___ToArray(
                                 v159,
                                 (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
    v158 = (System_Int32_array *)partyMemberItem;
LABEL_124:
    RestrictionNotSatisfySlot__GetIconIdFromIndividuality(
      (RestrictionNotSatisfySlot_o *)partyMemberItem,
      &servantIds,
      &classImageIds,
      v158,
      v148);
    goto LABEL_125;
  }
  if ( (partyMemberItem & 1) == 0 )
  {
    if ( !v83 )
      goto LABEL_286;
    monitor = v83[1].monitor;
    if ( !monitor )
    {
LABEL_125:
      partyMemberItem = (int64_t)servantIds;
      if ( !servantIds )
        goto LABEL_286;
      goto LABEL_126;
    }
    if ( !(_DWORD)monitor )
      goto LABEL_287;
    klass = v83[2].klass;
    if ( !klass )
      goto LABEL_286;
    v158 = *(System_Int32_array **)&klass->_1.byval_arg.bits;
    goto LABEL_124;
  }
  if ( !*v75 )
    goto LABEL_286;
  servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                 questRestrictionInfo,
                 &npcInfoDictionary,
                 (*v75)->fields._InitPos_k__BackingField,
                 1,
                 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  partyMemberItem = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !partyMemberItem )
    goto LABEL_286;
  partyMemberItem = QuestPhaseMaster__TryGetEntity(
                      (QuestPhaseMaster_o *)partyMemberItem,
                      &entity,
                      questRestrictionInfo->fields.questId,
                      questRestrictionInfo->fields.questPhase,
                      0LL);
  if ( !servantIds )
    goto LABEL_286;
  if ( !*(_QWORD *)&servantIds->max_length )
    goto LABEL_125;
  if ( !*v75 )
    goto LABEL_286;
  IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                questRestrictionInfo,
                                (*v75)->fields._InitPos_k__BackingField,
                                0LL);
  v150 = entity;
  if ( !entity )
    goto LABEL_125;
LABEL_100:
  if ( !IsSelectableNormalSupport || v150->fields.isNpcOnly )
    goto LABEL_125;
  v151 = (System_Collections_Generic_IEnumerable_T__o *)servantIds;
  v152 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_57074972(
    v152,
    v151,
    (const MethodInfo_366E51C *)Method_System_Collections_Generic_List_int___ctor___77852768);
  if ( !v152 )
    goto LABEL_286;
  v153 = v152->fields._items;
  v154 = Method_System_Collections_Generic_List_int__Add__;
  ++v152->fields._version;
  if ( !v153 )
    goto LABEL_286;
  v155 = v152->fields._size;
  if ( (unsigned int)v155 >= v153->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v152,
      0,
      *(const MethodInfo_366EC48 **)(*(_QWORD *)(v154[4] + 192LL) + 112LL));
  }
  else
  {
    v152->fields._size = v155 + 1;
    v153->m_Items[v155 + 1] = 0;
  }
  partyMemberItem = (int64_t)System_Collections_Generic_List_int___ToArray(
                               v152,
                               (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
  servantIds = (System_Int32_array *)partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_286;
LABEL_126:
  if ( !*(_QWORD *)(partyMemberItem + 24) )
  {
    if ( !classImageIds )
      goto LABEL_286;
    if ( !*(_QWORD *)&classImageIds->max_length )
      goto LABEL_244;
    v231 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UIWidget__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v231,
      (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
    v232 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v232,
      (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
    v233 = classImageIds;
    if ( !classImageIds )
      goto LABEL_286;
    v234 = *(_QWORD *)&classImageIds->max_length;
    if ( (int)v234 < 1 )
      goto LABEL_237;
    v235 = 0;
    v236 = 0LL;
    do
    {
      if ( v236 >= (unsigned int)v234 )
        goto LABEL_287;
      if ( !v232 )
        goto LABEL_286;
      iconsWidget = (unsigned int)v233->m_Items[v236 + 1];
      v237 = v232->fields._items;
      v238 = Method_System_Collections_Generic_List_int__Add__;
      ++v232->fields._version;
      if ( !v237 )
        goto LABEL_286;
      v239 = v232->fields._size;
      if ( (unsigned int)v239 >= v237->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v232,
          iconsWidget,
          *(const MethodInfo_366EC48 **)(*(_QWORD *)(v238[4] + 192LL) + 112LL));
      }
      else
      {
        v232->fields._size = v239 + 1;
        v237->m_Items[v239 + 1] = iconsWidget;
      }
      partyMemberItem = (int64_t)RestrictionNotSatisfySlot_TypeInfo;
      if ( !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo);
        partyMemberItem = (int64_t)RestrictionNotSatisfySlot_TypeInfo;
      }
      if ( ++v235 >= **(_DWORD **)(partyMemberItem + 184) )
      {
        partyMemberItem = (int64_t)BaseMonoBehaviour__createObject(
                                     (BaseMonoBehaviour_o *)this,
                                     this->fields.servantIconsPrefab,
                                     this->fields.iconParent,
                                     0LL,
                                     0LL);
        if ( !partyMemberItem )
          goto LABEL_286;
        Component_object = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 (UnityEngine_GameObject_o *)partyMemberItem,
                                                                 (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        partyMemberItem = (int64_t)System_Collections_Generic_List_int___ToArray(
                                     v232,
                                     (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !Component_object )
          goto LABEL_286;
        RestrictionNotSatisfySlotIcons__SetClassIcons(Component_object, (System_Int32_array *)partyMemberItem, v241);
        if ( !v231 )
          goto LABEL_286;
        iconsWidget = (int64_t)Component_object->fields.iconsWidget;
        v248 = v231->fields._items;
        v249 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++v231->fields._version;
        if ( !v248 )
          goto LABEL_286;
        v250 = v231->fields._size;
        if ( (unsigned int)v250 >= v248->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v231,
            (Il2CppObject *)iconsWidget,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v249[4] + 192LL) + 112LL));
        }
        else
        {
          v251 = &v248->obj.klass + v250;
          v231->fields._size = v250 + 1;
          v251[4] = (Il2CppClass *)iconsWidget;
          sub_1C3B708((PartyOrganizationUtility_o *)(v251 + 4), iconsWidget, v242, v243, v244, v245, v246, v247);
        }
        v235 = 0;
        v252 = v232->fields._version + 1;
        v232->fields._size = 0;
        v232->fields._version = v252;
      }
      LODWORD(v234) = v233->max_length;
      ++v236;
    }
    while ( (__int64)v236 < (int)v234 );
    if ( v235 )
    {
      partyMemberItem = (int64_t)BaseMonoBehaviour__createObject(
                                   (BaseMonoBehaviour_o *)this,
                                   this->fields.servantIconsPrefab,
                                   this->fields.iconParent,
                                   0LL,
                                   0LL);
      if ( !partyMemberItem )
        goto LABEL_286;
      v253 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)partyMemberItem,
                                                   (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
      partyMemberItem = (int64_t)System_Collections_Generic_List_int___ToArray(
                                   v232,
                                   (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v253 )
        goto LABEL_286;
      RestrictionNotSatisfySlotIcons__SetClassIcons(v253, (System_Int32_array *)partyMemberItem, v254);
      if ( !v231 )
        goto LABEL_286;
      iconsWidget = (int64_t)v253->fields.iconsWidget;
      v261 = v231->fields._items;
      v262 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++v231->fields._version;
      if ( !v261 )
        goto LABEL_286;
      v263 = v231->fields._size;
      if ( (unsigned int)v263 >= v261->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v231,
          (Il2CppObject *)iconsWidget,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v262[4] + 192LL) + 112LL));
      }
      else
      {
        v264 = &v261->obj.klass + v263;
        v231->fields._size = v263 + 1;
        v264[4] = (Il2CppClass *)iconsWidget;
        sub_1C3B708((PartyOrganizationUtility_o *)(v264 + 4), iconsWidget, v255, v256, v257, v258, v259, v260);
      }
    }
    else
    {
LABEL_237:
      if ( !v231 )
        goto LABEL_286;
    }
    switchIcons = this->fields.switchIcons;
    partyMemberItem = (int64_t)System_Collections_Generic_List_object___ToArray(
                                 v231,
                                 (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !switchIcons )
      goto LABEL_286;
    v266 = (UIWidget_array *)partyMemberItem;
    v267 = switchIcons;
    goto LABEL_242;
  }
  partyMemberItem = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !partyMemberItem )
    goto LABEL_286;
  MasterData_object = (UserServantCollectionMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)partyMemberItem,
                                                         (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (NpcServantFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v286 = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v164 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v164,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  v165 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v165,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  v166 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v166,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  v167 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v167,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  v168 = (System_Collections_Generic_List_bool__o *)sub_1C3B9B0(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor(
    v168,
    (const MethodInfo_36423D4 *)Method_System_Collections_Generic_List_bool___ctor__);
  v169 = servantIds;
  if ( !servantIds )
LABEL_286:
    sub_1C3B9C0(partyMemberItem, iconsWidget);
  v170 = *(_QWORD *)&servantIds->max_length;
  if ( (int)v170 >= 1 )
  {
    v171 = 0;
    v172 = 0LL;
    v291 = &servantIds->m_Items[1];
    v289 = servantIds;
    do
    {
      if ( v172 >= (unsigned int)v170 )
        goto LABEL_287;
      if ( !v165 )
        goto LABEL_286;
      v173 = v291[v172];
      v174 = v165->fields._items;
      v175 = Method_System_Collections_Generic_List_int__Add__;
      ++v165->fields._version;
      if ( !v174 )
        goto LABEL_286;
      v176 = v165->fields._size;
      if ( (unsigned int)v176 >= v174->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v165,
          v173,
          *(const MethodInfo_366EC48 **)(*(_QWORD *)(v175[4] + 192LL) + 112LL));
      }
      else
      {
        v165->fields._size = v176 + 1;
        v174->m_Items[v176 + 1] = v173;
      }
      partyMemberItem = (int64_t)npcInfoDictionary;
      if ( !npcInfoDictionary )
        goto LABEL_286;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
              v173,
              (const MethodInfo_32F4D90 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
        goto LABEL_294;
      partyMemberItem = (int64_t)npcInfoDictionary;
      if ( !npcInfoDictionary )
        goto LABEL_286;
      v177 = System_Collections_Generic_Dictionary_int__object___get_Item(
               (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
               v173,
               (const MethodInfo_32F4AFC *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
      if ( v177 )
      {
        questId = v144->fields.questId;
        questPhase = v144->fields.questPhase;
        v180 = (FollowerInfo_o *)v177;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0LL);
        LimitCount = FollowerInfo__getLimitCount(v180, 0, ReturnTypeByQuestId, 0LL);
        partyMemberItem = (int64_t)Master_object;
        if ( !Master_object )
          goto LABEL_286;
        partyMemberItem = NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                            Master_object,
                            &npcServantFollowerEntity,
                            questId,
                            questPhase,
                            v173,
                            0LL);
        if ( (partyMemberItem & 1) == 0 )
          goto LABEL_170;
        if ( !npcServantFollowerEntity )
          goto LABEL_286;
        partyMemberItem = NpcServantFollowerEntity__IsHideRarity(npcServantFollowerEntity->fields.flag, 0LL);
        if ( !v168 )
          goto LABEL_286;
        v183 = v168->fields._items;
        v184 = Method_System_Collections_Generic_List_bool__Add__;
        ++v168->fields._version;
        if ( !v183 )
          goto LABEL_286;
        v185 = v168->fields._size;
        if ( (unsigned int)v185 >= v183->max_length )
        {
          System_Collections_Generic_List_bool___AddWithResize(
            v168,
            partyMemberItem & 1,
            *(const MethodInfo_3642C38 **)(*(_QWORD *)(v184[4] + 192LL) + 112LL));
        }
        else
        {
          v168->fields._size = v185 + 1;
          v183->m_Items[v185 + 4] = partyMemberItem & 1;
        }
        partyMemberItem = (int64_t)v286;
        if ( !npcServantFollowerEntity || !v286 )
          goto LABEL_286;
        partyMemberItem = (int64_t)NpcFollowerMaster__GetEntity_40882280(
                                     v286,
                                     questId,
                                     questPhase,
                                     npcServantFollowerEntity->fields.id,
                                     0LL);
        if ( partyMemberItem )
        {
          partyMemberItem = NpcFollowerEntity__GetImageSvtId((NpcFollowerEntity_o *)partyMemberItem, 0LL);
          v189 = partyMemberItem;
        }
        else
        {
LABEL_170:
          v189 = 0;
        }
        v169 = v289;
        v144 = questRestrictionInfoa;
        if ( !v166 )
          goto LABEL_286;
      }
      else
      {
LABEL_294:
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C1C955 )
        {
          sub_1C3B764(&NetworkManager_TypeInfo, iconsWidget);
          byte_4C1C955 = 1;
        }
        partyMemberItem = (int64_t)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          partyMemberItem = (int64_t)NetworkManager_TypeInfo;
        }
        if ( !MasterData_object )
          goto LABEL_286;
        partyMemberItem = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                     MasterData_object,
                                     *(_QWORD *)(*(_QWORD *)(partyMemberItem + 184) + 64LL),
                                     v173,
                                     0LL);
        if ( !partyMemberItem )
          goto LABEL_286;
        if ( !v168 )
          goto LABEL_286;
        LimitCount = *(_DWORD *)(partyMemberItem + 56);
        v186 = v168->fields._items;
        v187 = Method_System_Collections_Generic_List_bool__Add__;
        ++v168->fields._version;
        if ( !v186 )
          goto LABEL_286;
        v188 = v168->fields._size;
        if ( (unsigned int)v188 >= v186->max_length )
        {
          System_Collections_Generic_List_bool___AddWithResize(
            v168,
            0,
            *(const MethodInfo_3642C38 **)(*(_QWORD *)(v187[4] + 192LL) + 112LL));
          v189 = 0;
          if ( !v166 )
            goto LABEL_286;
        }
        else
        {
          v189 = 0;
          v168->fields._size = v188 + 1;
          v186->m_Items[v188 + 4] = 0;
          if ( !v166 )
            goto LABEL_286;
        }
      }
      v190 = v166->fields._items;
      v191 = Method_System_Collections_Generic_List_int__Add__;
      ++v166->fields._version;
      if ( !v190 )
        goto LABEL_286;
      v192 = v166->fields._size;
      if ( (unsigned int)v192 >= v190->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v166,
          LimitCount,
          *(const MethodInfo_366EC48 **)(*(_QWORD *)(v191[4] + 192LL) + 112LL));
      }
      else
      {
        v166->fields._size = v192 + 1;
        v190->m_Items[v192 + 1] = LimitCount;
      }
      if ( !v167 )
        goto LABEL_286;
      v193 = v167->fields._items;
      v194 = Method_System_Collections_Generic_List_int__Add__;
      ++v167->fields._version;
      if ( !v193 )
        goto LABEL_286;
      v195 = v167->fields._size;
      if ( (unsigned int)v195 >= v193->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v167,
          v189,
          *(const MethodInfo_366EC48 **)(*(_QWORD *)(v194[4] + 192LL) + 112LL));
      }
      else
      {
        v167->fields._size = v195 + 1;
        v193->m_Items[v195 + 1] = v189;
      }
      partyMemberItem = (int64_t)RestrictionNotSatisfySlot_TypeInfo;
      if ( !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo);
        partyMemberItem = (int64_t)RestrictionNotSatisfySlot_TypeInfo;
      }
      if ( ++v171 >= **(_DWORD **)(partyMemberItem + 184) )
      {
        partyMemberItem = (int64_t)BaseMonoBehaviour__createObject(
                                     (BaseMonoBehaviour_o *)this,
                                     this->fields.servantIconsPrefab,
                                     this->fields.iconParent,
                                     0LL,
                                     0LL);
        if ( !partyMemberItem )
          goto LABEL_286;
        v196 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)partyMemberItem,
                                                     (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        v197 = System_Collections_Generic_List_int___ToArray(
                 v165,
                 (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
        v198 = System_Collections_Generic_List_int___ToArray(
                 v166,
                 (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
        partyMemberItem = (int64_t)System_Collections_Generic_List_int___ToArray(
                                     v167,
                                     (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !v168 )
          goto LABEL_286;
        v199 = (System_Int32_array *)partyMemberItem;
        partyMemberItem = (int64_t)System_Collections_Generic_List_bool___ToArray(
                                     v168,
                                     (const MethodInfo_3644724 *)Method_System_Collections_Generic_List_bool__ToArray__);
        if ( !v196 )
          goto LABEL_286;
        v201 = v199;
        v144 = questRestrictionInfoa;
        RestrictionNotSatisfySlotIcons__SetServantIcons(
          v196,
          v197,
          v198,
          v201,
          (System_Boolean_array *)partyMemberItem,
          questRestrictionInfoa,
          v200);
        if ( !v164 )
          goto LABEL_286;
        iconsWidget = (int64_t)v196->fields.iconsWidget;
        v208 = v164->fields._items;
        v169 = v289;
        v209 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++v164->fields._version;
        if ( !v208 )
          goto LABEL_286;
        v210 = v164->fields._size;
        if ( (unsigned int)v210 >= v208->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v164,
            (Il2CppObject *)iconsWidget,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v209[4] + 192LL) + 112LL));
        }
        else
        {
          v211 = &v208->obj.klass + v210;
          v164->fields._size = v210 + 1;
          v211[4] = (Il2CppClass *)iconsWidget;
          sub_1C3B708((PartyOrganizationUtility_o *)(v211 + 4), iconsWidget, v202, v203, v204, v205, v206, v207);
        }
        v171 = 0;
        v212 = v165->fields._version + 1;
        v165->fields._size = 0;
        v165->fields._version = v212;
        v213 = v166->fields._version + 1;
        v166->fields._size = 0;
        v166->fields._version = v213;
        v214 = v167->fields._version + 1;
        v167->fields._size = 0;
        v167->fields._version = v214;
        v215 = v168->fields._version + 1;
        v168->fields._size = 0;
        v168->fields._version = v215;
      }
      LODWORD(v170) = v169->max_length;
      ++v172;
    }
    while ( (__int64)v172 < (int)v170 );
    if ( v171 )
    {
      partyMemberItem = (int64_t)BaseMonoBehaviour__createObject(
                                   (BaseMonoBehaviour_o *)this,
                                   this->fields.servantIconsPrefab,
                                   this->fields.iconParent,
                                   0LL,
                                   0LL);
      if ( partyMemberItem )
      {
        v216 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)partyMemberItem,
                                                     (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        v217 = System_Collections_Generic_List_int___ToArray(
                 v165,
                 (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
        v218 = System_Collections_Generic_List_int___ToArray(
                 v166,
                 (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
        partyMemberItem = (int64_t)System_Collections_Generic_List_int___ToArray(
                                     v167,
                                     (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( v168 )
        {
          v219 = (System_Int32_array *)partyMemberItem;
          partyMemberItem = (int64_t)System_Collections_Generic_List_bool___ToArray(
                                       v168,
                                       (const MethodInfo_3644724 *)Method_System_Collections_Generic_List_bool__ToArray__);
          if ( v216 )
          {
            RestrictionNotSatisfySlotIcons__SetServantIcons(
              v216,
              v217,
              v218,
              v219,
              (System_Boolean_array *)partyMemberItem,
              v144,
              v220);
            if ( v164 )
            {
              iconsWidget = (int64_t)v216->fields.iconsWidget;
              v227 = v164->fields._items;
              v228 = Method_System_Collections_Generic_List_UIWidget__Add__;
              ++v164->fields._version;
              if ( v227 )
              {
                v229 = v164->fields._size;
                if ( (unsigned int)v229 >= v227->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v164,
                    (Il2CppObject *)iconsWidget,
                    *(const MethodInfo_368BC6C **)(*(_QWORD *)(v228[4] + 192LL) + 112LL));
                }
                else
                {
                  v230 = &v227->obj.klass + v229;
                  v164->fields._size = v229 + 1;
                  v230[4] = (Il2CppClass *)iconsWidget;
                  sub_1C3B708((PartyOrganizationUtility_o *)(v230 + 4), iconsWidget, v221, v222, v223, v224, v225, v226);
                }
                goto LABEL_235;
              }
            }
          }
        }
      }
      goto LABEL_286;
    }
  }
  if ( !v164 )
    goto LABEL_286;
LABEL_235:
  v265 = this->fields.switchIcons;
  partyMemberItem = (int64_t)System_Collections_Generic_List_object___ToArray(
                               v164,
                               (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !v265 )
    goto LABEL_286;
  v266 = (UIWidget_array *)partyMemberItem;
  v267 = v265;
LABEL_242:
  SwitchUIWidgetComponent__Set(v267, v266, 0LL);
  partyMemberItem = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !partyMemberItem )
    goto LABEL_286;
  SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)partyMemberItem, 0LL);
LABEL_244:
  partyMemberItem = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !partyMemberItem )
    goto LABEL_286;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyMemberItem, 1, 0LL);
}


void __fastcall RestrictionNotSatisfySlot___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C1DF17 & 1) == 0 )
  {
    sub_1C3B764(&RestrictionNotSatisfySlot___c_TypeInfo, v1);
    byte_4C1DF17 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(RestrictionNotSatisfySlot___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RestrictionNotSatisfySlot___c_TypeInfo->static_fields->__9 = (struct RestrictionNotSatisfySlot___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)RestrictionNotSatisfySlot___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, 0LL);
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
  if ( (byte_4C1DF18 & 1) == 0 )
  {
    this = (RestrictionNotSatisfySlot___c__DisplayClass14_0_o *)sub_1C3B764(
                                                                  &Method_System_Linq_Enumerable_Contains_int___,
                                                                  entity);
    byte_4C1DF18 = 1;
  }
  if ( !entity )
    goto LABEL_13;
  memberItem = v4->fields.memberItem;
  if ( entity->fields.type != 9 )
  {
    if ( memberItem )
      goto LABEL_9;
LABEL_13:
    sub_1C3B9C0(this, entity);
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
         (const MethodInfo_300875C *)Method_System_Linq_Enumerable_Contains_int___)
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