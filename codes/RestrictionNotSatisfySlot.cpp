void __fastcall RestrictionNotSatisfySlot___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FACE2 & 1) == 0 )
  {
    sub_1B64A00(&RestrictionNotSatisfySlot_TypeInfo, v1);
    byte_49FACE2 = 1;
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x19
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1

  if ( (byte_49FACE0 & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, message);
    sub_1B64A00(&string___TypeInfo, v4);
    sub_1B64A00(&StringLiteral_43/*"\n"*/, v5);
    sub_1B64A00(&StringLiteral_15766/*"[-]"*/, v6);
    sub_1B64A00(&StringLiteral_11031/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v7);
    sub_1B64A00(&StringLiteral_15871/*"[FFFF00]"*/, v8);
    byte_49FACE0 = 1;
  }
  v9 = (System_String_o *)sub_1B64AA8(string___TypeInfo, 5LL);
  if ( !v9 )
    sub_1B64C5C(0LL, v10);
  v13 = v9;
  if ( !LODWORD(v9[1].klass) )
    goto LABEL_12;
  v14 = StringLiteral_15871/*"[FFFF00]"*/;
  v9[1].monitor = (void *)StringLiteral_15871/*"[FFFF00]"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v9[1].monitor, v14, v11, v12);
  if ( LODWORD(v13[1].klass) <= 1 )
    goto LABEL_12;
  v13[1].fields = (System_String_Fields)message;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v13[1].fields, (int32_t)message, v15, v16);
  if ( LODWORD(v13[1].klass) <= 2 )
    goto LABEL_12;
  v19 = StringLiteral_43/*"\n"*/;
  v13[2].klass = (System_String_c *)StringLiteral_43/*"\n"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v13[2], v19, v17, v18);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11031/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
  if ( LODWORD(v13[1].klass) <= 3
    || (v13[2].monitor = v9,
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v13[2].monitor, (int32_t)v9, v20, v21),
        LODWORD(v13[1].klass) <= 4) )
  {
LABEL_12:
    sub_1B64C64(v9, v10);
  }
  v24 = (int)StringLiteral_15766/*"[-]"*/;
  v13[2].fields = (System_String_Fields)StringLiteral_15766/*"[-]"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v13[2].fields, v24, v22, v23);
  return System_String__Concat_61398664((System_String_array *)v13, 0LL);
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
  int32_t v32; // w2
  int32_t v33; // w3
  System_Int32_array *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  ServantClassEntity_o *v38; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_49FACDF & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_ServantClassMaster___, servantIds);
    sub_1B64A00(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1B64A00(&DataManager_TypeInfo, v8);
    sub_1B64A00(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v13);
    byte_49FACDF = 1;
  }
  v38 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantMaster___);
  v15 = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantClassMaster___);
  v16 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
  v17 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individuality )
    goto LABEL_29;
  v20 = *(_QWORD *)&individuality->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = 0LL;
    do
    {
      if ( v21 >= (unsigned int)v20 )
        sub_1B64C64(EntityByIndividuality, iconImageId);
      if ( !Master_object )
        goto LABEL_29;
      v22 = individuality->m_Items[v21 + 1];
      EntityByIndividuality = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                &entity,
                                v22,
                                (const MethodInfo_30D67EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
            *(const MethodInfo_34927D0 **)(*(_QWORD *)(v29 + 192) + 112LL));
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
                                  &v38,
                                  v22,
                                  0LL);
        if ( !EntityByIndividuality )
          goto LABEL_25;
        if ( !v38 )
          goto LABEL_29;
        if ( !v17 )
          goto LABEL_29;
        iconImageId = (unsigned int)v38->fields.iconImageId;
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
                (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__),
        *servantIds = v31,
        sub_1B649A4((ServantStatusBattleListViewItem_o *)servantIds, (int32_t)v31, v32, v33),
        !v17) )
  {
LABEL_29:
    sub_1B64C5C(EntityByIndividuality, iconImageId);
  }
  v34 = System_Collections_Generic_List_int___ToArray(
          v17,
          (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
  *classImageIds = v34;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)classImageIds, (int32_t)v34, v35, v36);
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

  if ( (byte_49FACE1 & 1) == 0 )
  {
    sub_1B64A00(&System_Text_RegularExpressions_Regex_TypeInfo, message);
    sub_1B64A00(&StringLiteral_15899/*"[[]-[\\]]"*/, v4);
    sub_1B64A00(&StringLiteral_1/*""*/, v5);
    sub_1B64A00(&StringLiteral_15900/*"[[][0-9A-F]{6}[\\]]"*/, v6);
    byte_49FACE1 = 1;
  }
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  v7 = System_Text_RegularExpressions_Regex__Replace(
         message,
         (System_String_o *)StringLiteral_15900/*"[[][0-9A-F]{6}[\\]]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  return System_Text_RegularExpressions_Regex__Replace(
           v7,
           (System_String_o *)StringLiteral_15899/*"[[]-[\\]]"*/,
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
  System_String_o *partyMemberItem; // x0
  int64_t UserId; // x1
  int32_t v69; // w2
  int32_t v70; // w3
  PartyOrganizationListViewItem_o **v71; // x21
  UISprite_o *numberSprite; // x20
  System_String_o *v73; // x0
  _QWORD *v74; // x20
  __int64 v75; // x8
  __int64 v76; // x0
  __int64 v77; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x22
  System_Collections_Generic_List_object__o *v79; // x23
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x20
  System_Func_object__bool__o *v81; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v82; // x0
  RestrictionNotSatisfySlot___c_c *v83; // x0
  System_Func_object__bool__o *_9__14_1; // x20
  Il2CppObject *v85; // x24
  struct RestrictionNotSatisfySlot___c_StaticFields *static_fields; // x0
  int32_t v87; // w2
  int32_t v88; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v89; // x0
  const MethodInfo *v90; // x2
  System_String_o *v91; // x24
  System_String_c *klass; // x8
  unsigned __int64 v93; // x19
  int32_t v94; // w2
  int32_t v95; // w3
  struct System_Object_array *items; // x8
  _QWORD *v97; // x9
  __int64 size; // x10
  System_String_o *v99; // x1
  Il2CppClass **v100; // x0
  System_Collections_Generic_List_object__o *v101; // x24
  __int64 v102; // x1
  UnityEngine_GameObject_o *restrictionLabelRoot; // x0
  Il2CppObject *current; // x23
  Il2CppObject *restrictionLabel; // x20
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *v107; // x0
  __int64 v108; // x1
  Il2CppObject *v109; // x20
  __int64 v110; // x0
  __int64 v111; // x1
  int32_t v112; // w2
  int32_t v113; // w3
  struct System_Object_array *v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  Il2CppClass **v117; // x0
  SwitchUIWidgetComponent_o *switchMessage; // x20
  _QWORD *v119; // x20
  __int64 v120; // x8
  __int64 v121; // x0
  __int64 v122; // x0
  _QWORD *v123; // x20
  __int64 v124; // x8
  __int64 v125; // x0
  __int64 v126; // x0
  System_Collections_Generic_Dictionary_int__object__o *v127; // x20
  char v128; // w20
  const MethodInfo *v129; // x4
  bool IsSelectableNormalSupport; // w0
  QuestPhaseEntity_o *v131; // x8
  System_Collections_Generic_IEnumerable_T__o *v132; // x21
  System_Collections_Generic_List_int__o *v133; // x20
  struct System_Int32_array *v134; // x8
  _QWORD *v135; // x9
  __int64 v136; // x10
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_TSource__c *v138; // x8
  System_Int32_array *v139; // x3
  System_Collections_Generic_List_int__o *v140; // x22
  System_Collections_Generic_List_object__o *v141; // x20
  System_Collections_Generic_List_T__o *v142; // x21
  int32_t v143; // w23
  System_Collections_Generic_List_object__o *v144; // x21
  System_Collections_Generic_List_int__o *v145; // x22
  System_Collections_Generic_List_int__o *v146; // x24
  System_Collections_Generic_List_int__o *v147; // x25
  System_Collections_Generic_List_bool__o *v148; // x26
  __int64 v149; // x8
  int v150; // w19
  unsigned __int64 v151; // x23
  int32_t v152; // w28
  struct System_Int32_array *v153; // x8
  _QWORD *v154; // x9
  __int64 v155; // x10
  Il2CppObject *v156; // x0
  int32_t questId; // w20
  int32_t questPhase; // w27
  FollowerInfo_o *v159; // x29
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w29
  struct System_Boolean_array *v162; // x8
  _QWORD *v163; // x9
  __int64 v164; // x10
  struct System_Boolean_array *v165; // x8
  _QWORD *v166; // x9
  __int64 v167; // x10
  int32_t v168; // w20
  struct System_Int32_array *v169; // x8
  _QWORD *v170; // x9
  __int64 v171; // x10
  struct System_Int32_array *v172; // x8
  _QWORD *v173; // x9
  __int64 v174; // x10
  RestrictionNotSatisfySlotIcons_o *Component_object; // x20
  System_Int32_array *v176; // x27
  System_Int32_array *v177; // x28
  System_Int32_array *v178; // x29
  const MethodInfo *v179; // x6
  System_Int32_array *v180; // x1
  int32_t v181; // w2
  int32_t v182; // w3
  struct System_Object_array *v183; // x8
  _QWORD *v184; // x9
  __int64 v185; // x10
  Il2CppClass **v186; // x0
  int v187; // w8
  int v188; // w8
  int v189; // w8
  int v190; // w8
  RestrictionNotSatisfySlotIcons_o *v191; // x20
  System_Int32_array *v192; // x22
  System_Int32_array *v193; // x23
  System_Int32_array *v194; // x24
  const MethodInfo *v195; // x6
  int32_t v196; // w2
  int32_t v197; // w3
  struct System_Object_array *v198; // x8
  _QWORD *v199; // x9
  __int64 v200; // x10
  Il2CppClass **v201; // x0
  System_Collections_Generic_List_object__o *v202; // x20
  System_Collections_Generic_List_int__o *v203; // x21
  System_Int32_array *v204; // x19
  __int64 v205; // x8
  int v206; // w22
  unsigned __int64 v207; // x23
  struct System_Int32_array *v208; // x8
  _QWORD *v209; // x9
  __int64 v210; // x10
  RestrictionNotSatisfySlotIcons_o *v211; // x22
  const MethodInfo *v212; // x2
  int32_t v213; // w2
  int32_t v214; // w3
  struct System_Object_array *v215; // x8
  _QWORD *v216; // x9
  __int64 v217; // x10
  Il2CppClass **v218; // x0
  int v219; // w8
  RestrictionNotSatisfySlotIcons_o *v220; // x22
  const MethodInfo *v221; // x2
  int32_t v222; // w2
  int32_t v223; // w3
  struct System_Object_array *v224; // x8
  _QWORD *v225; // x9
  __int64 v226; // x10
  Il2CppClass **v227; // x0
  struct SwitchUIWidgetComponent_o *switchIcons; // x20
  UIWidget_array *v229; // x1
  SwitchUIWidgetComponent_o *v230; // x0
  struct SwitchUIWidgetComponent_o *v231; // x21
  PartyOrganizationListViewItem_o *v232; // x8
  int32_t v233; // w2
  int32_t v234; // w3
  struct System_Object_array *v235; // x8
  _QWORD *v236; // x9
  __int64 v237; // x10
  System_String_o *v238; // x1
  Il2CppClass **v239; // x0
  int v240; // w19
  int32_t v241; // w20
  Il2CppObject *Item; // x0
  const MethodInfo *v243; // x2
  Il2CppObject *fixed; // x0
  NpcFollowerMaster_o *v245; // [xsp+48h] [xbp-108h]
  NpcServantFollowerMaster_o *Master_object; // [xsp+50h] [xbp-100h]
  UserServantCollectionMaster_o *MasterData_object; // [xsp+58h] [xbp-F8h]
  System_Int32_array *v248; // [xsp+60h] [xbp-F0h]
  int32_t *v249; // [xsp+68h] [xbp-E8h]
  QuestRestrictionInfo_o *questRestrictionInfoa; // [xsp+70h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v252; // [xsp+80h] [xbp-D0h] BYREF
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+98h] [xbp-B8h] BYREF
  QuestPhaseEntity_o *v254; // [xsp+A0h] [xbp-B0h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+A8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v256; // [xsp+B0h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+D0h] [xbp-80h] BYREF
  System_Int32_array *classImageIds; // [xsp+D8h] [xbp-78h] BYREF
  System_Int32_array *servantIds; // [xsp+E0h] [xbp-70h] BYREF
  int32_t pos; // [xsp+ECh] [xbp-64h] BYREF

  pos = number;
  if ( (byte_49FACDE & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Array_Empty_int___, *(_QWORD *)&number);
    sub_1B64A00(&Method_System_Array_Empty_RestrictionEntity___, v7);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8);
    sub_1B64A00(&Method_DataManager_GetMaster_NpcFollowerMaster___, v9);
    sub_1B64A00(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v10);
    sub_1B64A00(&Method_DataManager_GetMaster_QuestPhaseMaster___, v11);
    sub_1B64A00(&DataManager_TypeInfo, v12);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v13);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, v14);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v15);
    sub_1B64A00(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v16);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___, v17);
    sub_1B64A00(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v18);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v19);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v20);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v21);
    sub_1B64A00(&System_Func_RestrictionEntity__bool__TypeInfo, v22);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___, v23);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__AddRange__, v24);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Add__, v25);
    sub_1B64A00(&Method_System_Collections_Generic_List_UIWidget__Add__, v26);
    sub_1B64A00(&Method_System_Collections_Generic_List_bool__Add__, v27);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__Add__, v28);
    sub_1B64A00(&Method_System_Collections_Generic_List_bool__Clear__, v29);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Clear__, v30);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__GetEnumerator__, v31);
    sub_1B64A00(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v32);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__ToArray__, v33);
    sub_1B64A00(&Method_System_Collections_Generic_List_bool__ToArray__, v34);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor__, v35);
    sub_1B64A00(&Method_System_Collections_Generic_List_bool___ctor__, v36);
    sub_1B64A00(&Method_System_Collections_Generic_List_UIWidget___ctor__, v37);
    sub_1B64A00(&Method_System_Collections_Generic_List_string___ctor__, v38);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor___75667208, v39);
    sub_1B64A00(&Method_System_Collections_Generic_List_int____get_Count__, v40);
    sub_1B64A00(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v41);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__get_Count__, v42);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__get_Item__, v43);
    sub_1B64A00(&Method_System_Collections_Generic_List_int____get_Item__, v44);
    sub_1B64A00(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v45);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__set_Item__, v46);
    sub_1B64A00(&System_Collections_Generic_List_bool__TypeInfo, v47);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v48);
    sub_1B64A00(&System_Collections_Generic_List_string__TypeInfo, v49);
    sub_1B64A00(&System_Collections_Generic_List_UIWidget__TypeInfo, v50);
    sub_1B64A00(&LocalizationManager_TypeInfo, v51);
    sub_1B64A00(&NetworkManager_TypeInfo, v52);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_UILabel____75801912, v53);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v54);
    sub_1B64A00(&RestrictionNotSatisfySlot_TypeInfo, v55);
    sub_1B64A00(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v56);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v57);
    sub_1B64A00(&Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__, v58);
    sub_1B64A00(&Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__, v59);
    sub_1B64A00(&RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo, v60);
    sub_1B64A00(&RestrictionNotSatisfySlot___c_TypeInfo, v61);
    sub_1B64A00(&StringLiteral_43/*"\n"*/, v62);
    sub_1B64A00(&StringLiteral_21307/*"member_txt_"*/, v63);
    sub_1B64A00(&StringLiteral_11028/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/, v64);
    sub_1B64A00(&StringLiteral_1/*""*/, v65);
    byte_49FACDE = 1;
  }
  classImageIds = 0LL;
  servantIds = 0LL;
  npcInfoDictionary = 0LL;
  memset(&v256, 0, sizeof(v256));
  v254 = 0LL;
  entity = 0LL;
  npcServantFollowerEntity = 0LL;
  v66 = sub_1B64C4C(RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v66, 0LL);
  if ( !v66 )
    goto LABEL_281;
  *(_QWORD *)(v66 + 16) = memberItem;
  v71 = (PartyOrganizationListViewItem_o **)(v66 + 16);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v66 + 16), (int32_t)memberItem, v69, v70);
  numberSprite = this->fields.numberSprite;
  v73 = System_Int32__ToString((int32_t)&pos, 0LL);
  partyMemberItem = System_String__Concat_61385136((System_String_o *)StringLiteral_21307/*"member_txt_"*/, v73, 0LL);
  if ( !numberSprite )
    goto LABEL_281;
  UISprite__set_spriteName(numberSprite, partyMemberItem, 0LL);
  partyMemberItem = (System_String_o *)this->fields.partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_281;
  PartyOrganizationConfirmItemDraw__SetItem(
    (PartyOrganizationConfirmItemDraw_o *)partyMemberItem,
    *v71,
    3,
    0,
    0,
    0,
    0,
    0LL);
  v74 = Method_System_Array_Empty_RestrictionEntity___;
  v75 = *((_QWORD *)Method_System_Array_Empty_RestrictionEntity___ + 7);
  if ( !v75 )
  {
    sub_1BB6938(Method_System_Array_Empty_RestrictionEntity___);
    v75 = v74[7];
  }
  v76 = *(_QWORD *)(v75 + 16);
  if ( (*(_BYTE *)(v76 + 309) & 1) == 0 )
    v76 = sub_1BB68DC(v76);
  if ( !*(_DWORD *)(v76 + 224) )
    j_il2cpp_runtime_class_init_0(v76);
  v77 = *(_QWORD *)(v74[7] + 16LL);
  if ( (*(_BYTE *)(v77 + 309) & 1) == 0 )
    v77 = sub_1BB68DC(v77);
  v78 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v77 + 184);
  v79 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v79,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !questRestrictionInfo )
    goto LABEL_281;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  questRestrictionInfoa = questRestrictionInfo;
  if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
  {
    restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
    v81 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v81,
      (Il2CppObject *)v66,
      Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__,
      0LL);
    v82 = System_Linq_Enumerable__Where_object_(
            restrictionEntityList,
            (System_Func_TSource__bool__o *)v81,
            (const MethodInfo_2E79990 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    v78 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 v82,
                                                                 (const MethodInfo_2E73CB8 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    if ( questRestrictionInfo->fields.isUniqueServant && questRestrictionInfo->fields.isUniqueIndividuality )
    {
      v83 = RestrictionNotSatisfySlot___c_TypeInfo;
      if ( !RestrictionNotSatisfySlot___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot___c_TypeInfo);
        v83 = RestrictionNotSatisfySlot___c_TypeInfo;
      }
      _9__14_1 = (System_Func_object__bool__o *)v83->static_fields->__9__14_1;
      if ( !_9__14_1 )
      {
        if ( !v83->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v83);
          v83 = RestrictionNotSatisfySlot___c_TypeInfo;
        }
        v85 = (Il2CppObject *)v83->static_fields->__9;
        _9__14_1 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__14_1, v85, Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__, 0LL);
        static_fields = RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
        static_fields->__9__14_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__14_1;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_1, (int32_t)_9__14_1, v87, v88);
      }
      v89 = System_Linq_Enumerable__Where_object_(
              v78,
              (System_Func_TSource__bool__o *)_9__14_1,
              (const MethodInfo_2E79990 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v78 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                   v89,
                                                                   (const MethodInfo_2E73CB8 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    }
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetMessages_40102988(
                                           questRestrictionInfo,
                                           (RestrictionEntity_array *)v78,
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
    if ( !*v71 )
      goto LABEL_281;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetMessages(
                                           questRestrictionInfo,
                                           (*v71)->fields._InitPos_k__BackingField,
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
  v91 = partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_281;
  klass = partyMemberItem[1].klass;
  if ( klass && (int)klass >= 1 )
  {
    v93 = 0LL;
    while ( v93 < (unsigned int)klass )
    {
      partyMemberItem = RestrictionNotSatisfySlot__RemoveColorCode(
                          (RestrictionNotSatisfySlot_o *)partyMemberItem,
                          *((System_String_o **)&v91[1].monitor + v93),
                          v90);
      if ( !partyMemberItem )
        goto LABEL_281;
      partyMemberItem = System_String__Replace_61404756(
                          partyMemberItem,
                          (System_String_o *)StringLiteral_43/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
      if ( !v79 )
        goto LABEL_281;
      items = v79->fields._items;
      v97 = Method_System_Collections_Generic_List_string__Add__;
      ++v79->fields._version;
      if ( !items )
        goto LABEL_281;
      size = v79->fields._size;
      v99 = partyMemberItem;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v79,
          (Il2CppObject *)partyMemberItem,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
      }
      else
      {
        v100 = &items->obj.klass + size;
        v79->fields._size = size + 1;
        v100[4] = (Il2CppClass *)v99;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v100 + 4), (int32_t)v99, v94, v95);
      }
      LODWORD(klass) = v91[1].klass;
      if ( (__int64)++v93 >= (int)klass )
        goto LABEL_40;
    }
LABEL_282:
    sub_1B64C64(partyMemberItem, UserId);
  }
LABEL_40:
  partyMemberItem = (System_String_o *)this->fields.notSatisfyWidget;
  if ( !partyMemberItem )
    goto LABEL_281;
  partyMemberItem = (System_String_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)partyMemberItem,
                                         0LL);
  if ( !partyMemberItem )
    goto LABEL_281;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyMemberItem, 0, 0LL);
  partyMemberItem = (System_String_o *)*v71;
  if ( !*v71 )
    goto LABEL_281;
  if ( !PartyOrganizationListViewItem__get_IsSupportOnly((PartyOrganizationListViewItem_o *)partyMemberItem, 0LL) )
  {
    partyMemberItem = (System_String_o *)*v71;
    if ( !*v71 )
      goto LABEL_281;
    if ( !PartyOrganizationListViewItem__get_IsFixedMyServantSingle(
            (PartyOrganizationListViewItem_o *)partyMemberItem,
            0LL) )
    {
      partyMemberItem = (System_String_o *)*v71;
      if ( !*v71 )
        goto LABEL_281;
      if ( !LOBYTE(partyMemberItem[9].klass) && !BYTE1(partyMemberItem[9].klass) )
      {
        if ( PartyOrganizationListViewItem__get_IsQuestRestriction(
               (PartyOrganizationListViewItem_o *)partyMemberItem,
               0LL) )
        {
          goto LABEL_256;
        }
        partyMemberItem = (System_String_o *)*v71;
        if ( !*v71 )
          goto LABEL_281;
        partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                               (PartyOrganizationListViewItem_o *)partyMemberItem,
                                               0LL);
        if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
        {
          if ( !*v71 )
            goto LABEL_281;
          partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsSetRequired(
                                                 questRestrictionInfo,
                                                 pos,
                                                 (*v71)->fields._InitPos_k__BackingField,
                                                 0LL);
          if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
            goto LABEL_256;
        }
        v232 = *v71;
        if ( !*v71 )
          goto LABEL_281;
        if ( v232->fields.isUniqueSvtRestriction
          || v232->fields.isUniqueIndividualityRestriction
          || (v232->fields.fatigureTime & 0x8000000000000000LL) == 0
          || v232->fields._IsAllOutBattle_k__BackingField
          || v232->fields._IsDataLost_k__BackingField
          || v232->fields._TimesToRestart_k__BackingField > 0
          || v232->fields._IsNotSupportSingle_k__BackingField
          || v232->fields.isFixedServantPositionRestriction
          || v232->fields.isFixedSupportPositionRestriction )
        {
LABEL_256:
          partyMemberItem = (System_String_o *)this->fields.notSatisfyWidget;
          if ( !partyMemberItem )
            goto LABEL_281;
          partyMemberItem = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)partyMemberItem,
                                                 0LL);
          if ( !partyMemberItem )
            goto LABEL_281;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyMemberItem, 1, 0LL);
          partyMemberItem = (System_String_o *)*v71;
          if ( !*v71 )
            goto LABEL_281;
          partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                                 (PartyOrganizationListViewItem_o *)partyMemberItem,
                                                 0LL);
          if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
            goto LABEL_271;
          if ( !*v71 )
            goto LABEL_281;
          if ( QuestRestrictionInfo__IsSetRequired(
                 questRestrictionInfo,
                 pos,
                 (*v71)->fields._InitPos_k__BackingField,
                 0LL) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            partyMemberItem = LocalizationManager__Get((System_String_o *)StringLiteral_11028/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/, 0LL);
            if ( !v79 )
              goto LABEL_281;
            v235 = v79->fields._items;
            v236 = Method_System_Collections_Generic_List_string__Add__;
            ++v79->fields._version;
            if ( !v235 )
              goto LABEL_281;
            v237 = v79->fields._size;
            v238 = partyMemberItem;
            if ( (unsigned int)v237 >= v235->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v79,
                (Il2CppObject *)partyMemberItem,
                *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v236[4] + 192LL) + 112LL));
            }
            else
            {
              v239 = &v235->obj.klass + v237;
              v79->fields._size = v237 + 1;
              v239[4] = (Il2CppClass *)v238;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)(v239 + 4), (int32_t)v238, v233, v234);
            }
            v240 = 1;
          }
          else
          {
LABEL_271:
            v240 = 0;
          }
          partyMemberItem = (System_String_o *)*v71;
          if ( !*v71 )
            goto LABEL_281;
          partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsQuestRestriction(
                                                 (PartyOrganizationListViewItem_o *)partyMemberItem,
                                                 0LL);
          if ( v240 | (unsigned __int8)partyMemberItem & 1 )
          {
            if ( !v79 )
              goto LABEL_281;
            if ( v79->fields._size >= 1 )
            {
              v241 = 0;
              do
              {
                Item = System_Collections_Generic_List_object___get_Item(
                         v79,
                         v241,
                         (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_string__get_Item__);
                fixed = (Il2CppObject *)RestrictionNotSatisfySlot__AddColorCodeAndFixMessage(
                                          (RestrictionNotSatisfySlot_o *)Item,
                                          (System_String_o *)Item,
                                          v243);
                System_Collections_Generic_List_object___set_Item(
                  v79,
                  v241++,
                  fixed,
                  (const MethodInfo_34AFD4C *)Method_System_Collections_Generic_List_string__set_Item__);
              }
              while ( v241 < v79->fields._size );
            }
          }
        }
      }
    }
  }
  v101 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v101,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  if ( !v79 )
    goto LABEL_281;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v252,
    v79,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v256 = v252;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v256,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    restrictionLabelRoot = this->fields.restrictionLabelRoot;
    if ( !restrictionLabelRoot )
      sub_1B64C5C(0LL, v102);
    current = v256.fields._current;
    restrictionLabel = (Il2CppObject *)this->fields.restrictionLabel;
    transform = UnityEngine_GameObject__get_transform(restrictionLabelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v107 = UnityEngine_Object__Instantiate_object__49014464(
             restrictionLabel,
             transform,
             (const MethodInfo_2EBE6C0 *)Method_UnityEngine_Object_Instantiate_UILabel____75801912);
    v109 = v107;
    if ( !v107 )
      sub_1B64C5C(0LL, v108);
    UILabel__set_text((UILabel_o *)v107, (System_String_o *)current, 0LL);
    if ( !v101 )
      sub_1B64C5C(v110, v111);
    v114 = v101->fields._items;
    v115 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++v101->fields._version;
    if ( !v114 )
      sub_1B64C5C(v110, v111);
    v116 = v101->fields._size;
    if ( (unsigned int)v116 >= v114->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v101,
        v109,
        *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
    }
    else
    {
      v117 = &v114->obj.klass + v116;
      v101->fields._size = v116 + 1;
      v117[4] = (Il2CppClass *)v109;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v117 + 4), (int32_t)v109, v112, v113);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v256,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v101 )
    goto LABEL_281;
  switchMessage = this->fields.switchMessage;
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                         v101,
                                         (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !switchMessage )
    goto LABEL_281;
  SwitchUIWidgetComponent__Set(switchMessage, (UIWidget_array *)partyMemberItem, 0LL);
  v119 = Method_System_Array_Empty_int___;
  v120 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v120 )
  {
    sub_1BB6938(Method_System_Array_Empty_int___);
    v120 = v119[7];
  }
  v121 = *(_QWORD *)(v120 + 16);
  if ( (*(_BYTE *)(v121 + 309) & 1) == 0 )
    v121 = sub_1BB68DC(v121);
  if ( !*(_DWORD *)(v121 + 224) )
    j_il2cpp_runtime_class_init_0(v121);
  v122 = *(_QWORD *)(v119[7] + 16LL);
  if ( (*(_BYTE *)(v122 + 309) & 1) == 0 )
    v122 = sub_1BB68DC(v122);
  v123 = Method_System_Array_Empty_int___;
  servantIds = **(System_Int32_array ***)(v122 + 184);
  v124 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v124 )
  {
    sub_1BB6938(Method_System_Array_Empty_int___);
    v124 = v123[7];
  }
  v125 = *(_QWORD *)(v124 + 16);
  if ( (*(_BYTE *)(v125 + 309) & 1) == 0 )
    v125 = sub_1BB68DC(v125);
  if ( !*(_DWORD *)(v125 + 224) )
    j_il2cpp_runtime_class_init_0(v125);
  v126 = *(_QWORD *)(v123[7] + 16LL);
  if ( (*(_BYTE *)(v126 + 309) & 1) == 0 )
    v126 = sub_1BB68DC(v126);
  classImageIds = **(System_Int32_array ***)(v126 + 184);
  v127 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64C4C(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v127,
    (const MethodInfo_31258A4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v127;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( !*v71 )
    goto LABEL_281;
  v128 = (char)partyMemberItem;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_40123732(
                                         questRestrictionInfo,
                                         (*v71)->fields._InitPos_k__BackingField,
                                         0LL);
  if ( (v128 & 1) == 0 )
  {
    if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
    {
      if ( !*v71 )
        goto LABEL_281;
      servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                     questRestrictionInfo,
                     &npcInfoDictionary,
                     (*v71)->fields._InitPos_k__BackingField,
                     0,
                     0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      partyMemberItem = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !partyMemberItem )
        goto LABEL_281;
      partyMemberItem = (System_String_o *)QuestPhaseMaster__TryGetEntity(
                                             (QuestPhaseMaster_o *)partyMemberItem,
                                             &v254,
                                             questRestrictionInfo->fields.questId,
                                             questRestrictionInfo->fields.questPhase,
                                             0LL);
      if ( !servantIds )
        goto LABEL_281;
      if ( !*(_QWORD *)&servantIds->max_length )
        goto LABEL_125;
      if ( !*v71 )
        goto LABEL_281;
      IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                    questRestrictionInfo,
                                    (*v71)->fields._InitPos_k__BackingField,
                                    0LL);
      v131 = v254;
      if ( !v254 )
        goto LABEL_125;
      goto LABEL_100;
    }
    v140 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v140,
      (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !*v71 )
      goto LABEL_281;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetNeedIndividualityList(
                                           questRestrictionInfo,
                                           (*v71)->fields._InitPos_k__BackingField,
                                           0LL);
    if ( !*v71 )
      goto LABEL_281;
    v141 = (System_Collections_Generic_List_object__o *)partyMemberItem;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetRangeTypeList(
                                           questRestrictionInfo,
                                           (*v71)->fields._InitPos_k__BackingField,
                                           0LL);
    if ( !v141 )
      goto LABEL_281;
    if ( v141->fields._size >= 1 )
    {
      v142 = (System_Collections_Generic_List_T__o *)partyMemberItem;
      v143 = 0;
      do
      {
        if ( !v142 )
          goto LABEL_281;
        if ( v142->fields._size > v143 )
        {
          partyMemberItem = (System_String_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                 v142,
                                                 v143,
                                                 (const MethodInfo_3494DAC *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          if ( (_DWORD)partyMemberItem == 1 )
          {
            partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                                   v141,
                                                   v143,
                                                   (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_int____get_Item__);
            if ( !v140 )
              goto LABEL_281;
            System_Collections_Generic_List_int___AddRange(
              v140,
              (System_Collections_Generic_IEnumerable_T__o *)partyMemberItem,
              (const MethodInfo_34929DC *)Method_System_Collections_Generic_List_int__AddRange__);
          }
        }
        ++v143;
      }
      while ( v143 < v141->fields._size );
    }
    if ( !v140 )
      goto LABEL_281;
    partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                           v140,
                                           (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
    v139 = (System_Int32_array *)partyMemberItem;
LABEL_124:
    RestrictionNotSatisfySlot__GetIconIdFromIndividuality(
      (RestrictionNotSatisfySlot_o *)partyMemberItem,
      &servantIds,
      &classImageIds,
      v139,
      v129);
    goto LABEL_125;
  }
  if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
  {
    if ( !v78 )
      goto LABEL_281;
    monitor = v78[1].monitor;
    if ( !monitor )
    {
LABEL_125:
      partyMemberItem = (System_String_o *)servantIds;
      if ( !servantIds )
        goto LABEL_281;
      goto LABEL_126;
    }
    if ( !(_DWORD)monitor )
      goto LABEL_282;
    v138 = v78[2].klass;
    if ( !v138 )
      goto LABEL_281;
    v139 = *(System_Int32_array **)&v138->_1.byval_arg.bits;
    goto LABEL_124;
  }
  if ( !*v71 )
    goto LABEL_281;
  servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                 questRestrictionInfo,
                 &npcInfoDictionary,
                 (*v71)->fields._InitPos_k__BackingField,
                 1,
                 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  partyMemberItem = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !partyMemberItem )
    goto LABEL_281;
  partyMemberItem = (System_String_o *)QuestPhaseMaster__TryGetEntity(
                                         (QuestPhaseMaster_o *)partyMemberItem,
                                         &entity,
                                         questRestrictionInfo->fields.questId,
                                         questRestrictionInfo->fields.questPhase,
                                         0LL);
  if ( !servantIds )
    goto LABEL_281;
  if ( !*(_QWORD *)&servantIds->max_length )
    goto LABEL_125;
  if ( !*v71 )
    goto LABEL_281;
  IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                questRestrictionInfo,
                                (*v71)->fields._InitPos_k__BackingField,
                                0LL);
  v131 = entity;
  if ( !entity )
    goto LABEL_125;
LABEL_100:
  if ( !IsSelectableNormalSupport || v131->fields.isNpcOnly )
    goto LABEL_125;
  v132 = (System_Collections_Generic_IEnumerable_T__o *)servantIds;
  v133 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_55124132(
    v133,
    v132,
    (const MethodInfo_34920A4 *)Method_System_Collections_Generic_List_int___ctor___75667208);
  if ( !v133 )
    goto LABEL_281;
  v134 = v133->fields._items;
  v135 = Method_System_Collections_Generic_List_int__Add__;
  ++v133->fields._version;
  if ( !v134 )
    goto LABEL_281;
  v136 = v133->fields._size;
  if ( (unsigned int)v136 >= v134->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v133,
      0,
      *(const MethodInfo_34927D0 **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
  }
  else
  {
    v133->fields._size = v136 + 1;
    v134->m_Items[v136 + 1] = 0;
  }
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                         v133,
                                         (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
  servantIds = (System_Int32_array *)partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_281;
LABEL_126:
  if ( partyMemberItem[1].klass )
  {
    partyMemberItem = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !partyMemberItem )
      goto LABEL_281;
    MasterData_object = (UserServantCollectionMaster_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)partyMemberItem,
                                                           (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (NpcServantFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    v245 = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    v144 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_UIWidget__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v144,
      (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
    v145 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v145,
      (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
    v146 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v146,
      (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
    v147 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v147,
      (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
    v148 = (System_Collections_Generic_List_bool__o *)sub_1B64C4C(System_Collections_Generic_List_bool__TypeInfo);
    System_Collections_Generic_List_bool____ctor(
      v148,
      (const MethodInfo_34653E0 *)Method_System_Collections_Generic_List_bool___ctor__);
    if ( !servantIds )
      goto LABEL_281;
    v149 = *(_QWORD *)&servantIds->max_length;
    if ( (int)v149 < 1 )
      goto LABEL_227;
    v150 = 0;
    v151 = 0LL;
    v248 = servantIds;
    v249 = &servantIds->m_Items[1];
    while ( 1 )
    {
      if ( v151 >= (unsigned int)v149 )
        goto LABEL_282;
      if ( !v145 )
        goto LABEL_281;
      v152 = v249[v151];
      v153 = v145->fields._items;
      v154 = Method_System_Collections_Generic_List_int__Add__;
      ++v145->fields._version;
      if ( !v153 )
        goto LABEL_281;
      v155 = v145->fields._size;
      if ( (unsigned int)v155 >= v153->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v145,
          v152,
          *(const MethodInfo_34927D0 **)(*(_QWORD *)(v154[4] + 192LL) + 112LL));
      }
      else
      {
        v145->fields._size = v155 + 1;
        v153->m_Items[v155 + 1] = v152;
      }
      partyMemberItem = (System_String_o *)npcInfoDictionary;
      if ( !npcInfoDictionary )
        goto LABEL_281;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
              v152,
              (const MethodInfo_312646C *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
        goto LABEL_289;
      partyMemberItem = (System_String_o *)npcInfoDictionary;
      if ( !npcInfoDictionary )
        goto LABEL_281;
      v156 = System_Collections_Generic_Dictionary_int__object___get_Item(
               (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
               v152,
               (const MethodInfo_31261D8 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
      if ( v156 )
      {
        questId = questRestrictionInfo->fields.questId;
        questPhase = questRestrictionInfo->fields.questPhase;
        v159 = (FollowerInfo_o *)v156;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0LL);
        LimitCount = FollowerInfo__getLimitCount(v159, 0, ReturnTypeByQuestId, 0LL);
        partyMemberItem = (System_String_o *)Master_object;
        if ( !Master_object )
          goto LABEL_281;
        partyMemberItem = (System_String_o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                               Master_object,
                                               &npcServantFollowerEntity,
                                               questId,
                                               questPhase,
                                               v152,
                                               0LL);
        if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
          goto LABEL_164;
        if ( !npcServantFollowerEntity )
          goto LABEL_281;
        partyMemberItem = (System_String_o *)NpcServantFollowerEntity__IsHideRarity(
                                               npcServantFollowerEntity->fields.flag,
                                               0LL);
        if ( !v148 )
          goto LABEL_281;
        v162 = v148->fields._items;
        v163 = Method_System_Collections_Generic_List_bool__Add__;
        ++v148->fields._version;
        if ( !v162 )
          goto LABEL_281;
        v164 = v148->fields._size;
        if ( (unsigned int)v164 >= v162->max_length )
        {
          System_Collections_Generic_List_bool___AddWithResize(
            v148,
            (unsigned __int8)partyMemberItem & 1,
            *(const MethodInfo_3465C44 **)(*(_QWORD *)(v163[4] + 192LL) + 112LL));
        }
        else
        {
          v148->fields._size = v164 + 1;
          v162->m_Items[v164 + 4] = (unsigned __int8)partyMemberItem & 1;
        }
        partyMemberItem = (System_String_o *)v245;
        if ( !npcServantFollowerEntity || !v245 )
          goto LABEL_281;
        partyMemberItem = (System_String_o *)NpcFollowerMaster__GetEntity_39114196(
                                               v245,
                                               questId,
                                               questPhase,
                                               npcServantFollowerEntity->fields.id,
                                               0LL);
        if ( !partyMemberItem )
        {
LABEL_164:
          questRestrictionInfo = questRestrictionInfoa;
          goto LABEL_165;
        }
        partyMemberItem = (System_String_o *)NpcFollowerEntity__GetImageSvtId(
                                               (NpcFollowerEntity_o *)partyMemberItem,
                                               0LL);
        questRestrictionInfo = questRestrictionInfoa;
        v168 = (int)partyMemberItem;
      }
      else
      {
LABEL_289:
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        UserId = NetworkManager__get_UserId(0LL);
        partyMemberItem = (System_String_o *)MasterData_object;
        if ( !MasterData_object )
          goto LABEL_281;
        partyMemberItem = (System_String_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                               MasterData_object,
                                               UserId,
                                               v152,
                                               0LL);
        if ( !partyMemberItem )
          goto LABEL_281;
        if ( !v148 )
          goto LABEL_281;
        LimitCount = (int32_t)partyMemberItem[2].monitor;
        v165 = v148->fields._items;
        v166 = Method_System_Collections_Generic_List_bool__Add__;
        ++v148->fields._version;
        if ( !v165 )
          goto LABEL_281;
        v167 = v148->fields._size;
        if ( (unsigned int)v167 >= v165->max_length )
        {
          System_Collections_Generic_List_bool___AddWithResize(
            v148,
            0,
            *(const MethodInfo_3465C44 **)(*(_QWORD *)(v166[4] + 192LL) + 112LL));
LABEL_165:
          v168 = 0;
          goto LABEL_166;
        }
        v168 = 0;
        v148->fields._size = v167 + 1;
        v165->m_Items[v167 + 4] = 0;
      }
LABEL_166:
      if ( !v146 )
        goto LABEL_281;
      v169 = v146->fields._items;
      v170 = Method_System_Collections_Generic_List_int__Add__;
      ++v146->fields._version;
      if ( !v169 )
        goto LABEL_281;
      v171 = v146->fields._size;
      if ( (unsigned int)v171 >= v169->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v146,
          LimitCount,
          *(const MethodInfo_34927D0 **)(*(_QWORD *)(v170[4] + 192LL) + 112LL));
      }
      else
      {
        v146->fields._size = v171 + 1;
        v169->m_Items[v171 + 1] = LimitCount;
      }
      if ( !v147 )
        goto LABEL_281;
      v172 = v147->fields._items;
      v173 = Method_System_Collections_Generic_List_int__Add__;
      ++v147->fields._version;
      if ( !v172 )
        goto LABEL_281;
      v174 = v147->fields._size;
      if ( (unsigned int)v174 >= v172->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v147,
          v168,
          *(const MethodInfo_34927D0 **)(*(_QWORD *)(v173[4] + 192LL) + 112LL));
      }
      else
      {
        v147->fields._size = v174 + 1;
        v172->m_Items[v174 + 1] = v168;
      }
      partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      if ( !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo);
        partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      }
      if ( ++v150 >= **(_DWORD **)&partyMemberItem[7].fields )
      {
        partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                               (BaseMonoBehaviour_o *)this,
                                               this->fields.servantIconsPrefab,
                                               this->fields.iconParent,
                                               0LL,
                                               0LL);
        if ( !partyMemberItem )
          goto LABEL_281;
        Component_object = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 (UnityEngine_GameObject_o *)partyMemberItem,
                                                                 (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        v176 = System_Collections_Generic_List_int___ToArray(
                 v145,
                 (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
        v177 = System_Collections_Generic_List_int___ToArray(
                 v146,
                 (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                               v147,
                                               (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !v148 )
          goto LABEL_281;
        v178 = (System_Int32_array *)partyMemberItem;
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_bool___ToArray(
                                               v148,
                                               (const MethodInfo_34677D8 *)Method_System_Collections_Generic_List_bool__ToArray__);
        if ( !Component_object )
          goto LABEL_281;
        v180 = v176;
        questRestrictionInfo = questRestrictionInfoa;
        RestrictionNotSatisfySlotIcons__SetServantIcons(
          Component_object,
          v180,
          v177,
          v178,
          (System_Boolean_array *)partyMemberItem,
          questRestrictionInfoa,
          v179);
        if ( !v144 )
          goto LABEL_281;
        UserId = (int64_t)Component_object->fields.iconsWidget;
        v183 = v144->fields._items;
        v184 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++v144->fields._version;
        if ( !v183 )
          goto LABEL_281;
        v185 = v144->fields._size;
        if ( (unsigned int)v185 >= v183->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v144,
            (Il2CppObject *)UserId,
            *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v184[4] + 192LL) + 112LL));
        }
        else
        {
          v186 = &v183->obj.klass + v185;
          v144->fields._size = v185 + 1;
          v186[4] = (Il2CppClass *)UserId;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v186 + 4), UserId, v181, v182);
        }
        v150 = 0;
        v187 = v145->fields._version + 1;
        v145->fields._size = 0;
        v145->fields._version = v187;
        v188 = v146->fields._version + 1;
        v146->fields._size = 0;
        v146->fields._version = v188;
        v189 = v147->fields._version + 1;
        v147->fields._size = 0;
        v147->fields._version = v189;
        v190 = v148->fields._version + 1;
        v148->fields._size = 0;
        v148->fields._version = v190;
      }
      ++v151;
      LODWORD(v149) = v248->max_length;
      if ( (__int64)v151 >= (int)v149 )
      {
        if ( v150 )
        {
          partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                                 (BaseMonoBehaviour_o *)this,
                                                 this->fields.servantIconsPrefab,
                                                 this->fields.iconParent,
                                                 0LL,
                                                 0LL);
          if ( partyMemberItem )
          {
            v191 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)partyMemberItem,
                                                         (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
            v192 = System_Collections_Generic_List_int___ToArray(
                     v145,
                     (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
            v193 = System_Collections_Generic_List_int___ToArray(
                     v146,
                     (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
            partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                                   v147,
                                                   (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
            if ( v148 )
            {
              v194 = (System_Int32_array *)partyMemberItem;
              partyMemberItem = (System_String_o *)System_Collections_Generic_List_bool___ToArray(
                                                     v148,
                                                     (const MethodInfo_34677D8 *)Method_System_Collections_Generic_List_bool__ToArray__);
              if ( v191 )
              {
                RestrictionNotSatisfySlotIcons__SetServantIcons(
                  v191,
                  v192,
                  v193,
                  v194,
                  (System_Boolean_array *)partyMemberItem,
                  questRestrictionInfo,
                  v195);
                if ( v144 )
                {
                  UserId = (int64_t)v191->fields.iconsWidget;
                  v198 = v144->fields._items;
                  v199 = Method_System_Collections_Generic_List_UIWidget__Add__;
                  ++v144->fields._version;
                  if ( v198 )
                  {
                    v200 = v144->fields._size;
                    if ( (unsigned int)v200 >= v198->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v144,
                        (Il2CppObject *)UserId,
                        *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v199[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v201 = &v198->obj.klass + v200;
                      v144->fields._size = v200 + 1;
                      v201[4] = (Il2CppClass *)UserId;
                      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v201 + 4), UserId, v196, v197);
                    }
LABEL_230:
                    switchIcons = this->fields.switchIcons;
                    partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                                           v144,
                                                           (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                    if ( switchIcons )
                    {
                      v229 = (UIWidget_array *)partyMemberItem;
                      v230 = switchIcons;
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
        if ( v144 )
          goto LABEL_230;
        goto LABEL_281;
      }
    }
  }
  if ( !classImageIds )
    goto LABEL_281;
  if ( *(_QWORD *)&classImageIds->max_length )
  {
    v202 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_UIWidget__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v202,
      (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
    v203 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v203,
      (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
    v204 = classImageIds;
    if ( !classImageIds )
      goto LABEL_281;
    v205 = *(_QWORD *)&classImageIds->max_length;
    if ( (int)v205 < 1 )
      goto LABEL_232;
    v206 = 0;
    v207 = 0LL;
    do
    {
      if ( v207 >= (unsigned int)v205 )
        goto LABEL_282;
      if ( !v203 )
        goto LABEL_281;
      UserId = (unsigned int)v204->m_Items[v207 + 1];
      v208 = v203->fields._items;
      v209 = Method_System_Collections_Generic_List_int__Add__;
      ++v203->fields._version;
      if ( !v208 )
        goto LABEL_281;
      v210 = v203->fields._size;
      if ( (unsigned int)v210 >= v208->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v203,
          UserId,
          *(const MethodInfo_34927D0 **)(*(_QWORD *)(v209[4] + 192LL) + 112LL));
      }
      else
      {
        v203->fields._size = v210 + 1;
        v208->m_Items[v210 + 1] = UserId;
      }
      partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      if ( !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo);
        partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      }
      if ( ++v206 >= **(_DWORD **)&partyMemberItem[7].fields )
      {
        partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                               (BaseMonoBehaviour_o *)this,
                                               this->fields.servantIconsPrefab,
                                               this->fields.iconParent,
                                               0LL,
                                               0LL);
        if ( !partyMemberItem )
          goto LABEL_281;
        v211 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)partyMemberItem,
                                                     (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                               v203,
                                               (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !v211 )
          goto LABEL_281;
        RestrictionNotSatisfySlotIcons__SetClassIcons(v211, (System_Int32_array *)partyMemberItem, v212);
        if ( !v202 )
          goto LABEL_281;
        UserId = (int64_t)v211->fields.iconsWidget;
        v215 = v202->fields._items;
        v216 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++v202->fields._version;
        if ( !v215 )
          goto LABEL_281;
        v217 = v202->fields._size;
        if ( (unsigned int)v217 >= v215->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v202,
            (Il2CppObject *)UserId,
            *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v216[4] + 192LL) + 112LL));
        }
        else
        {
          v218 = &v215->obj.klass + v217;
          v202->fields._size = v217 + 1;
          v218[4] = (Il2CppClass *)UserId;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v218 + 4), UserId, v213, v214);
        }
        v206 = 0;
        v219 = v203->fields._version + 1;
        v203->fields._size = 0;
        v203->fields._version = v219;
      }
      LODWORD(v205) = v204->max_length;
      ++v207;
    }
    while ( (__int64)v207 < (int)v205 );
    if ( v206 )
    {
      partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)this,
                                             this->fields.servantIconsPrefab,
                                             this->fields.iconParent,
                                             0LL,
                                             0LL);
      if ( !partyMemberItem )
        goto LABEL_281;
      v220 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)partyMemberItem,
                                                   (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
      partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                             v203,
                                             (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v220 )
        goto LABEL_281;
      RestrictionNotSatisfySlotIcons__SetClassIcons(v220, (System_Int32_array *)partyMemberItem, v221);
      if ( !v202 )
        goto LABEL_281;
      UserId = (int64_t)v220->fields.iconsWidget;
      v224 = v202->fields._items;
      v225 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++v202->fields._version;
      if ( !v224 )
        goto LABEL_281;
      v226 = v202->fields._size;
      if ( (unsigned int)v226 >= v224->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v202,
          (Il2CppObject *)UserId,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v225[4] + 192LL) + 112LL));
      }
      else
      {
        v227 = &v224->obj.klass + v226;
        v202->fields._size = v226 + 1;
        v227[4] = (Il2CppClass *)UserId;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v227 + 4), UserId, v222, v223);
      }
    }
    else
    {
LABEL_232:
      if ( !v202 )
        goto LABEL_281;
    }
    v231 = this->fields.switchIcons;
    partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                           v202,
                                           (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( v231 )
    {
      v229 = (UIWidget_array *)partyMemberItem;
      v230 = v231;
LABEL_237:
      SwitchUIWidgetComponent__Set(v230, v229, 0LL);
      partyMemberItem = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
      if ( partyMemberItem )
      {
        SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)partyMemberItem, 0LL);
        goto LABEL_239;
      }
    }
LABEL_281:
    sub_1B64C5C(partyMemberItem, UserId);
  }
LABEL_239:
  partyMemberItem = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !partyMemberItem )
    goto LABEL_281;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyMemberItem, 1, 0LL);
}


void __fastcall RestrictionNotSatisfySlot___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FACE3 & 1) == 0 )
  {
    sub_1B64A00(&RestrictionNotSatisfySlot___c_TypeInfo, v1);
    byte_49FACE3 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(RestrictionNotSatisfySlot___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RestrictionNotSatisfySlot___c_TypeInfo->static_fields->__9 = (struct RestrictionNotSatisfySlot___c_o *)v2;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)RestrictionNotSatisfySlot___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B64C5C(this, 0LL);
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
  if ( (byte_49FACE4 & 1) == 0 )
  {
    this = (RestrictionNotSatisfySlot___c__DisplayClass14_0_o *)sub_1B64A00(
                                                                  &Method_System_Linq_Enumerable_Contains_int___,
                                                                  entity);
    byte_49FACE4 = 1;
  }
  if ( !entity )
    goto LABEL_13;
  memberItem = v4->fields.memberItem;
  if ( entity->fields.type != 9 )
  {
    if ( memberItem )
      goto LABEL_9;
LABEL_13:
    sub_1B64C5C(this, entity);
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
         (const MethodInfo_2E5559C *)Method_System_Linq_Enumerable_Contains_int___)
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