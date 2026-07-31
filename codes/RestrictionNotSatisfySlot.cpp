void RestrictionNotSatisfySlot___cctor(const MethodInfo *method)
{
  if ( (byte_5934235 & 1) == 0 )
  {
    sub_21FFC50(&RestrictionNotSatisfySlot_TypeInfo);
    byte_5934235 = 1;
  }
  RestrictionNotSatisfySlot_TypeInfo->static_fields->ICON_MAX_NUM = 4;
}


void RestrictionNotSatisfySlot___ctor(RestrictionNotSatisfySlot_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


System_String_o *RestrictionNotSatisfySlot__AddColorCodeAndFixMessage(
        RestrictionNotSatisfySlot_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x19
  int32_t v13; // w1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w1
  __int64 v27; // x1
  __int64 v28; // x2
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  int32_t v41; // w1

  if ( (byte_5934233 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_16415/*"[-]"*/);
    sub_21FFC50(&StringLiteral_11566/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_21FFC50(&StringLiteral_16516/*"[FFFF00]"*/);
    byte_5934233 = 1;
  }
  v4 = (System_String_o *)sub_21FFD10(string___TypeInfo, 5);
  if ( !v4 )
    sub_21FFECC(0, v5);
  v12 = v4;
  if ( !LODWORD(v4[1].klass) )
    goto LABEL_12;
  v13 = StringLiteral_16516/*"[FFFF00]"*/;
  v4[1].monitor = (void *)StringLiteral_16516/*"[FFFF00]"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4[1].monitor, v13, v6, v7, v8, v9, v10, v11);
  if ( ((__int64)v12[1].klass & 0xFFFFFFFE) == 0 )
    goto LABEL_12;
  v12[1].fields = (System_String_Fields)message;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12[1].fields, (int32_t)message, v14, v15, v16, v17, v18, v19);
  if ( LODWORD(v12[1].klass) <= 2 )
    goto LABEL_12;
  v26 = StringLiteral_43/*"\n"*/;
  v12[2].klass = (System_String_c *)StringLiteral_43/*"\n"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12[2], v26, v20, v21, v22, v23, v24, v25);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27, v28);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_11566/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0);
  if ( ((__int64)v12[1].klass & 0xFFFFFFFC) == 0
    || (v12[2].monitor = v4,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12[2].monitor, (int32_t)v4, v29, v30, v31, v32, v33, v34),
        LODWORD(v12[1].klass) <= 4) )
  {
LABEL_12:
    sub_21FFED4(v4);
  }
  v41 = (int)StringLiteral_16415/*"[-]"*/;
  v12[2].fields = (System_String_Fields)StringLiteral_16415/*"[-]"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12[2].fields, v41, v35, v36, v37, v38, v39, v40);
  return System_String__Concat_75483816((System_String_array *)v12, 0);
}


void RestrictionNotSatisfySlot__Awake(RestrictionNotSatisfySlot_o *this, const MethodInfo *method)
{
  ;
}


void RestrictionNotSatisfySlot__GetIconIdFromIndividuality(
        RestrictionNotSatisfySlot_o *this,
        System_Int32_array **servantIds,
        System_Int32_array **classImageIds,
        System_Int32_array *individuality,
        const MethodInfo *method)
{
  int v7; // w8
  Il2CppObject *Master_object; // x22
  Il2CppObject *v9; // x25
  System_Collections_Generic_List_int__o *v10; // x24
  System_Collections_Generic_List_int__o *v11; // x23
  _BOOL8 EntityByIndividuality; // x0
  __int64 iconImageId; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v15; // x27
  int32_t v16; // w26
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  struct System_Int32_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x8
  System_Collections_Generic_List_int__o *v24; // x0
  System_Int32_array *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Int32_array *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  ServantClassEntity_o *v40; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5934232 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_5934232 = 1;
  }
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v40 = 0;
  entity = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, servantIds, classImageIds);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
  v9 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v10 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  v11 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individuality )
    goto LABEL_29;
  max_length = individuality->max_length;
  if ( (int)max_length >= 1 )
  {
    v15 = 0;
    do
    {
      if ( v15 >= (unsigned int)max_length )
        sub_21FFED4(EntityByIndividuality);
      if ( !Master_object )
        goto LABEL_29;
      v16 = individuality->m_Items[v15];
      EntityByIndividuality = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                &entity,
                                v16,
                                (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( EntityByIndividuality )
      {
        if ( !v10 )
          goto LABEL_29;
        items = v10->fields._items;
        v18 = Method_System_Collections_Generic_List_int__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v23 = v18[4];
          v24 = v10;
          LODWORD(iconImageId) = v16;
LABEL_24:
          System_Collections_Generic_List_int___AddWithResize(
            v24,
            iconImageId,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v23 + 192) + 112LL));
          goto LABEL_25;
        }
        v10->fields._size = size + 1;
        items->m_Items[size] = v16;
      }
      else
      {
        if ( !v9 )
          goto LABEL_29;
        EntityByIndividuality = ServantClassMaster__TryGetEntityByIndividuality(
                                  (ServantClassMaster_o *)v9,
                                  &v40,
                                  v16,
                                  0);
        if ( !EntityByIndividuality )
          goto LABEL_25;
        if ( !v40 )
          goto LABEL_29;
        if ( !v11 )
          goto LABEL_29;
        v20 = v11->fields._items;
        iconImageId = (unsigned int)v40->fields.iconImageId;
        v21 = Method_System_Collections_Generic_List_int__Add__;
        ++v11->fields._version;
        if ( !v20 )
          goto LABEL_29;
        v22 = v11->fields._size;
        if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
        {
          v23 = v21[4];
          v24 = v11;
          goto LABEL_24;
        }
        v11->fields._size = v22 + 1;
        v20->m_Items[v22] = iconImageId;
      }
LABEL_25:
      LODWORD(max_length) = individuality->max_length;
    }
    while ( (__int64)++v15 < (int)max_length );
  }
  if ( !v10
    || (v25 = System_Collections_Generic_List_int___ToArray(
                v10,
                (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__),
        *servantIds = v25,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)servantIds, (int32_t)v25, v26, v27, v28, v29, v30, v31),
        !v11) )
  {
LABEL_29:
    sub_21FFECC(EntityByIndividuality, iconImageId);
  }
  v32 = System_Collections_Generic_List_int___ToArray(
          v11,
          (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  *classImageIds = v32;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)classImageIds, (int32_t)v32, v33, v34, v35, v36, v37, v38);
}


System_String_o *RestrictionNotSatisfySlot__RemoveColorCode(
        RestrictionNotSatisfySlot_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_5934234 & 1) == 0 )
  {
    sub_21FFC50(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_21FFC50(&StringLiteral_16554/*"[[]-[\\]]"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_16555/*"[[][0-9A-F]{6}[\\]]"*/);
    byte_5934234 = 1;
  }
  if ( !*(&System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo, message, method);
  v4 = System_Text_RegularExpressions_Regex__Replace(
         message,
         (System_String_o *)StringLiteral_16555/*"[[][0-9A-F]{6}[\\]]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0);
  return System_Text_RegularExpressions_Regex__Replace(
           v4,
           (System_String_o *)StringLiteral_16554/*"[[]-[\\]]"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0);
}


void RestrictionNotSatisfySlot__SetItem(
        RestrictionNotSatisfySlot_o *this,
        int32_t number,
        PartyOrganizationListViewItem_o *memberItem,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v8; // x24
  System_String_o *partyMemberItem; // x0
  Il2CppObject *iconsWidget; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  PartyOrganizationListViewItem_o **v17; // x21
  UISprite_o *numberSprite; // x20
  System_String_o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  long double v22; // q0
  _QWORD *v23; // x20
  __int64 v24; // x8
  __int64 v25; // x0
  __int64 v26; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x22
  System_Collections_Generic_List_object__o *v28; // x23
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x20
  System_Func_object__bool__o *v30; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  RestrictionNotSatisfySlot___c_c *v34; // x0
  struct RestrictionNotSatisfySlot___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__14_1; // x20
  Il2CppObject *v37; // x24
  struct RestrictionNotSatisfySlot___c_StaticFields *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  const MethodInfo *v46; // x2
  RestrictionNotSatisfySlot_c *v47; // x20
  const char *klass; // x8
  unsigned __int64 v49; // x24
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  RestrictionNotSatisfySlot_c *v59; // x1
  Il2CppClass **v60; // x0
  System_Collections_Generic_List_object__o *v61; // x24
  __int64 v62; // x1
  UnityEngine_GameObject_o *restrictionLabelRoot; // x0
  Il2CppObject *current; // x23
  Il2CppObject *restrictionLabel; // x20
  __int64 v66; // x1
  __int64 v67; // x2
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *v69; // x0
  __int64 v70; // x1
  Il2CppObject *v71; // x20
  __int64 v72; // x0
  __int64 v73; // x1
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  struct System_Object_array *v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  Il2CppClass **v83; // x0
  QuestRestrictionInfo_o *v84; // x29
  SwitchUIWidgetComponent_o *switchMessage; // x20
  __int64 v86; // x1
  __int64 v87; // x2
  __n128 inited; // q0
  _QWORD *v89; // x20
  __int64 v90; // x8
  __int64 v91; // x0
  __int64 v92; // x0
  _QWORD *v93; // x20
  __int64 v94; // x8
  __int64 v95; // x0
  __int64 v96; // x0
  System_Collections_Generic_Dictionary_int__object__o *v97; // x20
  PartyOrganizationListViewItem_o *v98; // x8
  const MethodInfo *v99; // x4
  __int64 v100; // x1
  __int64 v101; // x2
  QuestPhaseEntity_o *v102; // x8
  __int64 v103; // x1
  __int64 v104; // x2
  System_Collections_Generic_IEnumerable_T__o *v105; // x21
  System_Collections_Generic_List_int__o *v106; // x20
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_TSource__c *v108; // x8
  System_Collections_Generic_List_int__o *v109; // x20
  PartyOrganizationListViewItem_o *v110; // x8
  System_Collections_Generic_List_object__o *v111; // x21
  System_Collections_Generic_List_T__o *v112; // x22
  int32_t v113; // w23
  RestrictionNotSatisfySlot_o *v114; // x0
  const MethodInfo *v115; // x4
  __int64 v116; // x1
  __int64 v117; // x2
  System_Collections_Generic_List_int__o *v118; // x23
  System_Collections_Generic_List_int__o *v119; // x24
  System_Collections_Generic_List_int__o *v120; // x26
  System_Collections_Generic_List_bool__o *v121; // x27
  il2cpp_array_size_t v122; // x8
  int v123; // w19
  unsigned __int64 v124; // x22
  RestrictionNotSatisfySlot_c **v125; // x20
  RestrictionNotSatisfySlot_c **v126; // x21
  struct System_Int32_array *v127; // x8
  int32_t v128; // w20
  __int64 v129; // x10
  __int64 v130; // x2
  Il2CppObject *v131; // x0
  int32_t questId; // w25
  int32_t questPhase; // w29
  FollowerInfo_o *v134; // x28
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w28
  __int64 v137; // x2
  struct System_Boolean_array *v138; // x8
  _QWORD *v139; // x9
  __int64 v140; // x10
  struct System_Boolean_array *v141; // x8
  _QWORD *v142; // x9
  __int64 v143; // x10
  int32_t v144; // w20
  struct System_Int32_array *v145; // x8
  _QWORD *v146; // x9
  __int64 v147; // x10
  struct System_Int32_array *v148; // x8
  _QWORD *v149; // x9
  __int64 v150; // x10
  RestrictionNotSatisfySlotIcons_o *v151; // x20
  System_Int32_array *v152; // x25
  System_Int32_array *v153; // x28
  System_Int32_array *v154; // x29
  const MethodInfo *v155; // x6
  System_Int32_array *v156; // x3
  System_String_o *v157; // x2
  System_String_o *v158; // x3
  int32_t v159; // w4
  int32_t v160; // w5
  bool v161; // w6
  bool v162; // w7
  struct System_Object_array *v163; // x8
  _QWORD *v164; // x9
  __int64 v165; // x10
  Il2CppClass **v166; // x0
  int v167; // w8
  int v168; // w8
  int v169; // w8
  int v170; // w8
  RestrictionNotSatisfySlotIcons_o *v171; // x20
  System_Int32_array *v172; // x22
  System_Int32_array *v173; // x23
  System_Int32_array *v174; // x24
  const MethodInfo *v175; // x6
  System_Collections_Generic_List_object__o *v176; // x19
  System_String_o *v177; // x2
  System_String_o *v178; // x3
  int32_t v179; // w4
  int32_t v180; // w5
  bool v181; // w6
  bool v182; // w7
  struct System_Object_array *v183; // x8
  _QWORD *v184; // x9
  __int64 v185; // x10
  Il2CppClass **v186; // x0
  System_Collections_Generic_List_object__o *v187; // x20
  System_Collections_Generic_List_int__o *v188; // x21
  __int64 v189; // x2
  System_Int32_array *v190; // x23
  il2cpp_array_size_t max_length; // x8
  int v192; // w22
  unsigned __int64 v193; // x25
  struct System_Int32_array *v194; // x8
  _QWORD *v195; // x9
  __int64 v196; // x10
  RestrictionNotSatisfySlotIcons_o *Component_object; // x22
  const MethodInfo *v198; // x2
  System_String_o *v199; // x2
  System_String_o *v200; // x3
  int32_t v201; // w4
  int32_t v202; // w5
  bool v203; // w6
  bool v204; // w7
  struct System_Object_array *v205; // x8
  _QWORD *v206; // x9
  __int64 v207; // x10
  Il2CppClass **v208; // x0
  int v209; // w8
  RestrictionNotSatisfySlotIcons_o *v210; // x22
  const MethodInfo *v211; // x2
  System_String_o *v212; // x2
  System_String_o *v213; // x3
  int32_t v214; // w4
  int32_t v215; // w5
  bool v216; // w6
  bool v217; // w7
  struct System_Object_array *v218; // x8
  _QWORD *v219; // x9
  __int64 v220; // x10
  Il2CppClass **v221; // x0
  struct SwitchUIWidgetComponent_o *v222; // x20
  UIWidget_array *v223; // x1
  SwitchUIWidgetComponent_o *v224; // x0
  struct SwitchUIWidgetComponent_o *switchIcons; // x21
  PartyOrganizationListViewItem_o *v226; // x8
  __int64 v227; // x2
  int v228; // w19
  int32_t v229; // w20
  Il2CppObject *Item; // x0
  const MethodInfo *v231; // x2
  Il2CppObject *fixed; // x0
  NpcFollowerMaster_o *v233; // [xsp+50h] [xbp-110h]
  NpcServantFollowerMaster_o *Master_object; // [xsp+58h] [xbp-108h]
  System_Collections_Generic_List_object__o *v235; // [xsp+60h] [xbp-100h]
  UserServantCollectionMaster_o *MasterData_object; // [xsp+68h] [xbp-F8h]
  QuestRestrictionInfo_o *questRestrictionInfoa; // [xsp+70h] [xbp-F0h]
  System_Int32_array *v238; // [xsp+78h] [xbp-E8h]
  int32_t *m_Items; // [xsp+80h] [xbp-E0h]
  RestrictionNotSatisfySlot_o *v240; // [xsp+88h] [xbp-D8h]
  System_Collections_Generic_List_Enumerator_object__o v241; // [xsp+90h] [xbp-D0h] BYREF
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+A8h] [xbp-B8h] BYREF
  QuestPhaseEntity_o *v243; // [xsp+B0h] [xbp-B0h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+B8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v245; // [xsp+C0h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+E0h] [xbp-80h] BYREF
  System_Int32_array *classImageIds; // [xsp+E8h] [xbp-78h] BYREF
  System_Int32_array *servantIds; // [xsp+F0h] [xbp-70h] BYREF
  int32_t pos; // [xsp+FCh] [xbp-64h] BYREF

  pos = number;
  if ( (byte_5934231 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    sub_21FFC50(&Method_System_Array_Empty_RestrictionEntity___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_21FFC50(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_bool__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_bool__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_bool__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_bool___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor___91427360);
    sub_21FFC50(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_21FFC50(&System_Collections_Generic_List_bool__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_UILabel____91575152);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&RestrictionNotSatisfySlot_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__);
    sub_21FFC50(&Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__);
    sub_21FFC50(&RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo);
    sub_21FFC50(&RestrictionNotSatisfySlot___c_TypeInfo);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_22582/*"member_txt_"*/);
    sub_21FFC50(&StringLiteral_11563/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934231 = 1;
  }
  classImageIds = 0;
  servantIds = 0;
  npcInfoDictionary = 0;
  memset(&v245, 0, sizeof(v245));
  v243 = 0;
  entity = 0;
  npcServantFollowerEntity = 0;
  v8 = sub_21FFEBC(RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_278;
  *(_QWORD *)(v8 + 16) = memberItem;
  v17 = (PartyOrganizationListViewItem_o **)(v8 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v8 + 16), (int32_t)memberItem, v11, v12, v13, v14, v15, v16);
  numberSprite = this->fields.numberSprite;
  v19 = System_Int32__ToString((int32_t)&pos, 0);
  partyMemberItem = System_String__Concat_75438412((System_String_o *)StringLiteral_22582/*"member_txt_"*/, v19, 0);
  if ( !numberSprite )
    goto LABEL_278;
  UISprite__set_spriteName(numberSprite, partyMemberItem, 0);
  partyMemberItem = (System_String_o *)this->fields.partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_278;
  PartyOrganizationConfirmItemDraw__SetItem(
    (PartyOrganizationConfirmItemDraw_o *)partyMemberItem,
    *v17,
    3,
    0,
    0,
    0,
    0,
    0);
  v23 = Method_System_Array_Empty_RestrictionEntity___;
  v24 = *((_QWORD *)Method_System_Array_Empty_RestrictionEntity___ + 7);
  if ( !v24 )
  {
    sub_2237B54(Method_System_Array_Empty_RestrictionEntity___);
    v24 = v23[7];
  }
  v25 = *(_QWORD *)(v24 + 16);
  if ( (*(_WORD *)(v25 + 309) & 1) == 0 )
    v25 = sub_2237AF8(v22);
  if ( !*(_DWORD *)(v25 + 228) )
    *(__n128 *)&v22 = j_il2cpp_runtime_class_init_0(v25, v20, v21);
  v26 = *(_QWORD *)(v23[7] + 16LL);
  if ( (*(_WORD *)(v26 + 309) & 1) == 0 )
    v26 = sub_2237AF8(v22);
  v27 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v26 + 184);
  v28 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !questRestrictionInfo )
    goto LABEL_278;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0);
  v240 = this;
  if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
  {
    restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
    v30 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v30,
      (Il2CppObject *)v8,
      Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__,
      0);
    v31 = System_Linq_Enumerable__Where_object_(
            restrictionEntityList,
            (System_Func_TSource__bool__o *)v30,
            (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 v31,
                                                                 (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    if ( questRestrictionInfo->fields.isUniqueServant && questRestrictionInfo->fields.isUniqueIndividuality )
    {
      v34 = RestrictionNotSatisfySlot___c_TypeInfo;
      if ( !*(&RestrictionNotSatisfySlot___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot___c_TypeInfo, v32, v33);
        v34 = RestrictionNotSatisfySlot___c_TypeInfo;
      }
      static_fields = v34->static_fields;
      _9__14_1 = (System_Func_object__bool__o *)static_fields->__9__14_1;
      if ( !_9__14_1 )
      {
        if ( !*(&v34->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v34, v32, v33);
          static_fields = RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
        }
        v37 = (Il2CppObject *)static_fields->__9;
        _9__14_1 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__14_1, v37, Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__, 0);
        v38 = RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
        v38->__9__14_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__14_1;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v38->__9__14_1,
          (int32_t)_9__14_1,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
      }
      v45 = System_Linq_Enumerable__Where_object_(
              v27,
              (System_Func_TSource__bool__o *)_9__14_1,
              (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                   v45,
                                                                   (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    }
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetMessages_50456620(
                                           questRestrictionInfo,
                                           (RestrictionEntity_array *)v27,
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
                                           0);
  }
  else
  {
    if ( !*v17 )
      goto LABEL_278;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetMessages(
                                           questRestrictionInfo,
                                           (*v17)->fields._InitPos_k__BackingField,
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
                                           0);
  }
  v47 = (RestrictionNotSatisfySlot_c *)partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_278;
  klass = (const char *)partyMemberItem[1].klass;
  if ( (int)klass >= 1 )
  {
    v49 = 0;
    while ( v49 < (unsigned int)klass )
    {
      partyMemberItem = RestrictionNotSatisfySlot__RemoveColorCode(
                          (RestrictionNotSatisfySlot_o *)partyMemberItem,
                          *((System_String_o **)&v47->_1.byval_arg.data + v49),
                          v46);
      if ( !partyMemberItem )
        goto LABEL_278;
      partyMemberItem = System_String__Replace_75490096(
                          partyMemberItem,
                          (System_String_o *)StringLiteral_43/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0);
      if ( !v28 )
        goto LABEL_278;
      items = v28->fields._items;
      v57 = Method_System_Collections_Generic_List_string__Add__;
      ++v28->fields._version;
      if ( !items )
        goto LABEL_278;
      size = v28->fields._size;
      v59 = (RestrictionNotSatisfySlot_c *)partyMemberItem;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v28,
          (Il2CppObject *)partyMemberItem,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
      }
      else
      {
        v60 = &items->obj.klass + size;
        v28->fields._size = size + 1;
        v60[4] = (Il2CppClass *)v59;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v60 + 4), (int32_t)v59, v50, v51, v52, v53, v54, v55);
      }
      LODWORD(klass) = v47->_1.namespaze;
      if ( (__int64)++v49 >= (int)klass )
        goto LABEL_39;
    }
LABEL_280:
    sub_21FFED4(partyMemberItem);
  }
LABEL_39:
  partyMemberItem = (System_String_o *)this->fields.notSatisfyWidget;
  if ( !partyMemberItem )
    goto LABEL_278;
  partyMemberItem = (System_String_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)partyMemberItem,
                                         0);
  if ( !partyMemberItem )
    goto LABEL_278;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyMemberItem, 0, 0);
  partyMemberItem = (System_String_o *)*v17;
  if ( !*v17 )
    goto LABEL_278;
  if ( !PartyOrganizationListViewItem__get_IsSupportOnly((PartyOrganizationListViewItem_o *)partyMemberItem, 0) )
  {
    partyMemberItem = (System_String_o *)*v17;
    if ( !*v17 )
      goto LABEL_278;
    if ( !PartyOrganizationListViewItem__get_IsFixedMyServantSingle(
            (PartyOrganizationListViewItem_o *)partyMemberItem,
            0) )
    {
      partyMemberItem = (System_String_o *)*v17;
      if ( !*v17 )
        goto LABEL_278;
      if ( !*((_BYTE *)&partyMemberItem[9].fields._firstChar + 3) && !LOBYTE(partyMemberItem[10].klass) )
      {
        if ( PartyOrganizationListViewItem__get_IsQuestRestriction(
               (PartyOrganizationListViewItem_o *)partyMemberItem,
               0) )
        {
          goto LABEL_260;
        }
        partyMemberItem = (System_String_o *)*v17;
        if ( !*v17 )
          goto LABEL_278;
        partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                               (PartyOrganizationListViewItem_o *)partyMemberItem,
                                               0);
        if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
        {
          if ( !*v17 )
            goto LABEL_278;
          partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsSetRequired(
                                                 questRestrictionInfo,
                                                 pos,
                                                 (*v17)->fields._InitPos_k__BackingField,
                                                 0);
          if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
            goto LABEL_260;
        }
        v226 = *v17;
        if ( !*v17 )
          goto LABEL_278;
        if ( v226->fields.isUniqueSvtRestriction
          || v226->fields.isUniqueIndividualityRestriction
          || (v226->fields.fatigureTime & 0x8000000000000000LL) == 0
          || v226->fields._IsAllOutBattle_k__BackingField
          || v226->fields._IsDataLost_k__BackingField
          || v226->fields._TimesToRestart_k__BackingField > 0
          || v226->fields._IsNotSupportSingle_k__BackingField
          || v226->fields.isFixedServantPositionRestriction
          || v226->fields.isFixedSupportPositionRestriction )
        {
LABEL_260:
          partyMemberItem = (System_String_o *)this->fields.notSatisfyWidget;
          if ( !partyMemberItem )
            goto LABEL_278;
          partyMemberItem = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)partyMemberItem,
                                                 0);
          if ( !partyMemberItem )
            goto LABEL_278;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyMemberItem, 1, 0);
          partyMemberItem = (System_String_o *)*v17;
          if ( !*v17 )
            goto LABEL_278;
          partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                                 (PartyOrganizationListViewItem_o *)partyMemberItem,
                                                 0);
          if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
            goto LABEL_270;
          if ( !*v17 )
            goto LABEL_278;
          if ( QuestRestrictionInfo__IsSetRequired(
                 questRestrictionInfo,
                 pos,
                 (*v17)->fields._InitPos_k__BackingField,
                 0) )
          {
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, iconsWidget, v227);
            partyMemberItem = LocalizationManager__Get((System_String_o *)StringLiteral_11563/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/, 0);
            if ( !v28 )
              goto LABEL_278;
            sub_1FEBF38(v28, partyMemberItem, Method_System_Collections_Generic_List_string__Add__);
            v228 = 1;
          }
          else
          {
LABEL_270:
            v228 = 0;
          }
          partyMemberItem = (System_String_o *)*v17;
          if ( !*v17 )
            goto LABEL_278;
          partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsQuestRestriction(
                                                 (PartyOrganizationListViewItem_o *)partyMemberItem,
                                                 0);
          if ( v228 | (unsigned __int8)partyMemberItem & 1 )
          {
            if ( !v28 )
              goto LABEL_278;
            if ( v28->fields._size >= 1 )
            {
              v229 = 0;
              do
              {
                Item = System_Collections_Generic_List_object___get_Item(
                         v28,
                         v229,
                         (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
                fixed = (Il2CppObject *)RestrictionNotSatisfySlot__AddColorCodeAndFixMessage(
                                          (RestrictionNotSatisfySlot_o *)Item,
                                          (System_String_o *)Item,
                                          v231);
                System_Collections_Generic_List_object___set_Item(
                  v28,
                  v229++,
                  fixed,
                  (const MethodInfo_444F8B0 *)Method_System_Collections_Generic_List_string__set_Item__);
              }
              while ( v229 < v28->fields._size );
            }
          }
        }
      }
    }
  }
  questRestrictionInfoa = questRestrictionInfo;
  v61 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v61,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  if ( !v28 )
    goto LABEL_278;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v241,
    v28,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v245 = v241;
  v241.fields._list = 0;
  *(_QWORD *)&v241.fields._index = &v245;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v245,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    restrictionLabelRoot = this->fields.restrictionLabelRoot;
    if ( !restrictionLabelRoot )
      sub_21FFECC(0, v62);
    current = v245.fields._current;
    restrictionLabel = (Il2CppObject *)this->fields.restrictionLabel;
    transform = UnityEngine_GameObject__get_transform(restrictionLabelRoot, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66, v67);
    v69 = UnityEngine_Object__Instantiate_object__59506996(
            restrictionLabel,
            transform,
            (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_UILabel____91575152);
    this = v240;
    v71 = v69;
    if ( !v69 )
      sub_21FFECC(0, v70);
    UILabel__set_text((UILabel_o *)v69, (System_String_o *)current, 0);
    if ( !v61
      || (v80 = v61->fields._items,
          v81 = Method_System_Collections_Generic_List_UIWidget__Add__,
          ++v61->fields._version,
          !v80) )
    {
      sub_21FFECC(v72, v73);
    }
    v82 = v61->fields._size;
    if ( (unsigned int)v82 >= LODWORD(v80->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v61,
        v71,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
    }
    else
    {
      v83 = &v80->obj.klass + v82;
      v61->fields._size = v82 + 1;
      v83[4] = (Il2CppClass *)v71;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v83 + 4), (int32_t)v71, v74, v75, v76, v77, v78, v79);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v245,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v84 = questRestrictionInfo;
  if ( !v61 )
    goto LABEL_278;
  switchMessage = this->fields.switchMessage;
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                         v61,
                                         (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !switchMessage )
    goto LABEL_278;
  SwitchUIWidgetComponent__Set(switchMessage, (UIWidget_array *)partyMemberItem, 0, 0);
  v89 = Method_System_Array_Empty_int___;
  v90 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v90 )
  {
    sub_2237B54(Method_System_Array_Empty_int___);
    v90 = v89[7];
  }
  v91 = *(_QWORD *)(v90 + 16);
  if ( (*(_WORD *)(v91 + 309) & 1) == 0 )
    v91 = sub_2237AF8(*(long double *)&inited);
  if ( !*(_DWORD *)(v91 + 228) )
    inited = j_il2cpp_runtime_class_init_0(v91, v86, v87);
  v92 = *(_QWORD *)(v89[7] + 16LL);
  if ( (*(_WORD *)(v92 + 309) & 1) == 0 )
    v92 = sub_2237AF8(*(long double *)&inited);
  v93 = Method_System_Array_Empty_int___;
  v94 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  servantIds = **(System_Int32_array ***)(v92 + 184);
  if ( !v94 )
  {
    sub_2237B54(Method_System_Array_Empty_int___);
    v94 = v93[7];
  }
  v95 = *(_QWORD *)(v94 + 16);
  if ( (*(_WORD *)(v95 + 309) & 1) == 0 )
    v95 = sub_2237AF8(*(long double *)&inited);
  if ( !*(_DWORD *)(v95 + 228) )
    inited = j_il2cpp_runtime_class_init_0(v95, v86, v87);
  v96 = *(_QWORD *)(v93[7] + 16LL);
  if ( (*(_WORD *)(v96 + 309) & 1) == 0 )
    v96 = sub_2237AF8(*(long double *)&inited);
  classImageIds = **(System_Int32_array ***)(v96 + 184);
  v97 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v97,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v97;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0);
  v98 = *v17;
  if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
  {
    if ( !v98 )
      goto LABEL_278;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_50479840(
                                           questRestrictionInfo,
                                           v98->fields._InitPos_k__BackingField,
                                           0);
    if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
    {
      if ( !v27 )
        goto LABEL_278;
      monitor = v27[1].monitor;
      if ( monitor )
      {
        if ( !(_DWORD)monitor )
          goto LABEL_280;
        v108 = v27[2].klass;
        if ( !v108 )
          goto LABEL_278;
        RestrictionNotSatisfySlot__GetIconIdFromIndividuality(
          (RestrictionNotSatisfySlot_o *)partyMemberItem,
          &servantIds,
          &classImageIds,
          *(System_Int32_array **)&v108->_1.byval_arg.bits,
          v99);
      }
      goto LABEL_123;
    }
    if ( !*v17 )
      goto LABEL_278;
    servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                   questRestrictionInfo,
                   &npcInfoDictionary,
                   (*v17)->fields._InitPos_k__BackingField,
                   1,
                   0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v100, v101);
    partyMemberItem = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !partyMemberItem )
      goto LABEL_278;
    partyMemberItem = (System_String_o *)QuestPhaseMaster__TryGetEntity(
                                           (QuestPhaseMaster_o *)partyMemberItem,
                                           &entity,
                                           questRestrictionInfo->fields.questId,
                                           questRestrictionInfo->fields.questPhase,
                                           0);
    if ( !servantIds )
      goto LABEL_278;
    if ( !servantIds->max_length )
      goto LABEL_123;
    if ( !*v17 )
      goto LABEL_278;
    if ( !QuestRestrictionInfo__IsSelectableNormalSupport(
            questRestrictionInfo,
            (*v17)->fields._InitPos_k__BackingField,
            0) )
      goto LABEL_123;
    v102 = entity;
    if ( !entity )
      goto LABEL_123;
  }
  else
  {
    if ( !v98 )
      goto LABEL_278;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_50479840(
                                           questRestrictionInfo,
                                           v98->fields._InitPos_k__BackingField,
                                           0);
    if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
    {
      v109 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v109,
        (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !*v17 )
        goto LABEL_278;
      partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetNeedIndividualityList(
                                             questRestrictionInfo,
                                             (*v17)->fields._InitPos_k__BackingField,
                                             0);
      v110 = *v17;
      if ( !*v17 )
        goto LABEL_278;
      v111 = (System_Collections_Generic_List_object__o *)partyMemberItem;
      partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetRangeTypeList(
                                             questRestrictionInfo,
                                             v110->fields._InitPos_k__BackingField,
                                             0);
      if ( !v111 )
        goto LABEL_278;
      if ( v111->fields._size >= 1 )
      {
        v112 = (System_Collections_Generic_List_T__o *)partyMemberItem;
        v113 = 0;
        while ( v112 )
        {
          if ( v112->fields._size > v113 )
          {
            partyMemberItem = (System_String_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                   v112,
                                                   v113,
                                                   (const MethodInfo_4435658 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
            if ( (_DWORD)partyMemberItem == 1 )
            {
              partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                                     v111,
                                                     v113,
                                                     (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_int____get_Item__);
              if ( !v109 )
                goto LABEL_278;
              System_Collections_Generic_List_int___AddRange(
                v109,
                (System_Collections_Generic_IEnumerable_T__o *)partyMemberItem,
                (const MethodInfo_4433344 *)Method_System_Collections_Generic_List_int__AddRange__);
            }
          }
          if ( ++v113 >= v111->fields._size )
            goto LABEL_121;
        }
        goto LABEL_278;
      }
LABEL_121:
      if ( !v109 )
        goto LABEL_278;
      v114 = (RestrictionNotSatisfySlot_o *)System_Collections_Generic_List_int___ToArray(
                                              v109,
                                              (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
      RestrictionNotSatisfySlot__GetIconIdFromIndividuality(
        v114,
        &servantIds,
        &classImageIds,
        (System_Int32_array *)v114,
        v115);
      this = v240;
      goto LABEL_123;
    }
    if ( !*v17 )
      goto LABEL_278;
    servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                   questRestrictionInfo,
                   &npcInfoDictionary,
                   (*v17)->fields._InitPos_k__BackingField,
                   0,
                   0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v103, v104);
    partyMemberItem = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !partyMemberItem )
      goto LABEL_278;
    partyMemberItem = (System_String_o *)QuestPhaseMaster__TryGetEntity(
                                           (QuestPhaseMaster_o *)partyMemberItem,
                                           &v243,
                                           questRestrictionInfo->fields.questId,
                                           questRestrictionInfo->fields.questPhase,
                                           0);
    if ( !servantIds )
      goto LABEL_278;
    if ( !servantIds->max_length )
      goto LABEL_123;
    if ( !*v17 )
      goto LABEL_278;
    if ( !QuestRestrictionInfo__IsSelectableNormalSupport(
            questRestrictionInfo,
            (*v17)->fields._InitPos_k__BackingField,
            0)
      || (v102 = v243) == 0 )
    {
LABEL_123:
      partyMemberItem = (System_String_o *)servantIds;
      goto LABEL_124;
    }
  }
  if ( v102->fields.isNpcOnly )
    goto LABEL_123;
  v105 = (System_Collections_Generic_IEnumerable_T__o *)servantIds;
  v106 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_71510500(
    v106,
    v105,
    (const MethodInfo_44329E4 *)Method_System_Collections_Generic_List_int___ctor___91427360);
  if ( !v106 )
    goto LABEL_278;
  sub_1FF1854(v106, 0, Method_System_Collections_Generic_List_int__Add__);
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                         v106,
                                         (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  servantIds = (System_Int32_array *)partyMemberItem;
LABEL_124:
  if ( !partyMemberItem )
    goto LABEL_278;
  if ( !partyMemberItem[1].klass )
  {
    if ( !classImageIds )
      goto LABEL_278;
    if ( !classImageIds->max_length )
      goto LABEL_243;
    v187 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UIWidget__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v187,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
    v188 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v188,
      (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
    v190 = classImageIds;
    if ( !classImageIds )
      goto LABEL_278;
    max_length = classImageIds->max_length;
    if ( (int)max_length < 1 )
      goto LABEL_233;
    v192 = 0;
    v193 = 0;
    do
    {
      if ( v193 >= (unsigned int)max_length )
        goto LABEL_280;
      if ( !v188 )
        goto LABEL_278;
      v194 = v188->fields._items;
      iconsWidget = (Il2CppObject *)(unsigned int)v190->m_Items[v193];
      v195 = Method_System_Collections_Generic_List_int__Add__;
      ++v188->fields._version;
      if ( !v194 )
        goto LABEL_278;
      v196 = v188->fields._size;
      if ( (unsigned int)v196 >= LODWORD(v194->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v188,
          (int32_t)iconsWidget,
          *(const MethodInfo_4433138 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
      }
      else
      {
        v188->fields._size = v196 + 1;
        v194->m_Items[v196] = (int)iconsWidget;
      }
      partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      if ( !*(&RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo, iconsWidget, v189);
        partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      }
      if ( ++v192 >= **(_DWORD **)&partyMemberItem[7].fields )
      {
        partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                               (BaseMonoBehaviour_o *)v240,
                                               v240->fields.servantIconsPrefab,
                                               v240->fields.iconParent,
                                               0,
                                               0);
        if ( !partyMemberItem )
          goto LABEL_278;
        Component_object = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 (UnityEngine_GameObject_o *)partyMemberItem,
                                                                 (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                               v188,
                                               (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !Component_object )
          goto LABEL_278;
        RestrictionNotSatisfySlotIcons__SetClassIcons(Component_object, (System_Int32_array *)partyMemberItem, v198);
        if ( !v187 )
          goto LABEL_278;
        v205 = v187->fields._items;
        iconsWidget = (Il2CppObject *)Component_object->fields.iconsWidget;
        v206 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++v187->fields._version;
        if ( !v205 )
          goto LABEL_278;
        v207 = v187->fields._size;
        if ( (unsigned int)v207 >= LODWORD(v205->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v187,
            iconsWidget,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v206[4] + 192LL) + 112LL));
        }
        else
        {
          v208 = &v205->obj.klass + v207;
          v187->fields._size = v207 + 1;
          v208[4] = (Il2CppClass *)iconsWidget;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v208 + 4),
            (int32_t)iconsWidget,
            v199,
            v200,
            v201,
            v202,
            v203,
            v204);
        }
        v192 = 0;
        v209 = v188->fields._version + 1;
        v188->fields._size = 0;
        v188->fields._version = v209;
      }
      LODWORD(max_length) = v190->max_length;
      ++v193;
    }
    while ( (__int64)v193 < (int)max_length );
    this = v240;
    if ( v192 )
    {
      partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v240,
                                             v240->fields.servantIconsPrefab,
                                             v240->fields.iconParent,
                                             0,
                                             0);
      if ( !partyMemberItem )
        goto LABEL_278;
      v210 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)partyMemberItem,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
      partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                             v188,
                                             (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v210 )
        goto LABEL_278;
      RestrictionNotSatisfySlotIcons__SetClassIcons(v210, (System_Int32_array *)partyMemberItem, v211);
      if ( !v187 )
        goto LABEL_278;
      v218 = v187->fields._items;
      iconsWidget = (Il2CppObject *)v210->fields.iconsWidget;
      v219 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++v187->fields._version;
      if ( !v218 )
        goto LABEL_278;
      v220 = v187->fields._size;
      if ( (unsigned int)v220 >= LODWORD(v218->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v187,
          iconsWidget,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v219[4] + 192LL) + 112LL));
      }
      else
      {
        v221 = &v218->obj.klass + v220;
        v187->fields._size = v220 + 1;
        v221[4] = (Il2CppClass *)iconsWidget;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)(v221 + 4),
          (int32_t)iconsWidget,
          v212,
          v213,
          v214,
          v215,
          v216,
          v217);
      }
    }
    else
    {
LABEL_233:
      if ( !v187 )
        goto LABEL_278;
    }
    switchIcons = this->fields.switchIcons;
    partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                           v187,
                                           (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !switchIcons )
      goto LABEL_278;
    v223 = (UIWidget_array *)partyMemberItem;
    v224 = switchIcons;
    goto LABEL_241;
  }
  partyMemberItem = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !partyMemberItem )
    goto LABEL_278;
  MasterData_object = (UserServantCollectionMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)partyMemberItem,
                                                         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v116, v117);
  Master_object = (NpcServantFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v233 = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v235 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v235,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  v118 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v118,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  v119 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v119,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  v120 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v120,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  v121 = (System_Collections_Generic_List_bool__o *)sub_21FFEBC(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor(
    v121,
    (const MethodInfo_43DCDD0 *)Method_System_Collections_Generic_List_bool___ctor__);
  if ( !servantIds )
LABEL_278:
    sub_21FFECC(partyMemberItem, iconsWidget);
  v122 = servantIds->max_length;
  if ( (int)v122 >= 1 )
  {
    v123 = 0;
    v124 = 0;
    v125 = &RestrictionNotSatisfySlot_TypeInfo;
    v238 = servantIds;
    m_Items = servantIds->m_Items;
    do
    {
      if ( v124 >= (unsigned int)v122 )
        goto LABEL_280;
      if ( !v118 )
        goto LABEL_278;
      v126 = v125;
      v127 = v118->fields._items;
      v128 = m_Items[v124];
      ++v118->fields._version;
      if ( !v127 )
        goto LABEL_278;
      v129 = v118->fields._size;
      if ( (unsigned int)v129 >= LODWORD(v127->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v118,
          v128,
          *(const MethodInfo_4433138 **)(*(_QWORD *)(*((_QWORD *)Method_System_Collections_Generic_List_int__Add__ + 4)
                                                   + 192LL)
                                       + 112LL));
      }
      else
      {
        v118->fields._size = v129 + 1;
        v127->m_Items[v129] = v128;
      }
      partyMemberItem = (System_String_o *)npcInfoDictionary;
      if ( !npcInfoDictionary )
        goto LABEL_278;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
              v128,
              (const MethodInfo_3F68EFC *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
        goto LABEL_285;
      partyMemberItem = (System_String_o *)npcInfoDictionary;
      if ( !npcInfoDictionary )
        goto LABEL_278;
      v131 = System_Collections_Generic_Dictionary_int__object___get_Item(
               (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
               v128,
               (const MethodInfo_3F68C68 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
      if ( v131 )
      {
        questId = v84->fields.questId;
        questPhase = v84->fields.questPhase;
        v134 = (FollowerInfo_o *)v131;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0);
        LimitCount = FollowerInfo__getLimitCount(v134, 0, ReturnTypeByQuestId, 0);
        partyMemberItem = (System_String_o *)Master_object;
        if ( !Master_object )
          goto LABEL_278;
        partyMemberItem = (System_String_o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                               Master_object,
                                               &npcServantFollowerEntity,
                                               questId,
                                               questPhase,
                                               v128,
                                               0);
        if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
          goto LABEL_169;
        if ( !npcServantFollowerEntity )
          goto LABEL_278;
        partyMemberItem = (System_String_o *)NpcServantFollowerEntity__IsHideRarity(
                                               npcServantFollowerEntity->fields.flag,
                                               0);
        if ( !v121 )
          goto LABEL_278;
        v138 = v121->fields._items;
        v139 = Method_System_Collections_Generic_List_bool__Add__;
        ++v121->fields._version;
        if ( !v138 )
          goto LABEL_278;
        v140 = v121->fields._size;
        if ( (unsigned int)v140 >= LODWORD(v138->max_length) )
        {
          System_Collections_Generic_List_bool___AddWithResize(
            v121,
            (unsigned __int8)partyMemberItem & 1,
            *(const MethodInfo_43DD66C **)(*(_QWORD *)(v139[4] + 192LL) + 112LL));
        }
        else
        {
          v121->fields._size = v140 + 1;
          v138->m_Items[v140] = (unsigned __int8)partyMemberItem & 1;
        }
        partyMemberItem = (System_String_o *)v233;
        if ( !npcServantFollowerEntity || !v233 )
          goto LABEL_278;
        partyMemberItem = (System_String_o *)NpcFollowerMaster__GetEntity_49386132(
                                               v233,
                                               questId,
                                               questPhase,
                                               npcServantFollowerEntity->fields.id,
                                               0);
        if ( partyMemberItem )
        {
          partyMemberItem = (System_String_o *)NpcFollowerEntity__GetImageSvtId(
                                                 (NpcFollowerEntity_o *)partyMemberItem,
                                                 0);
          v144 = (int)partyMemberItem;
        }
        else
        {
LABEL_169:
          v144 = 0;
        }
        this = v240;
        v84 = questRestrictionInfoa;
        if ( !v119 )
          goto LABEL_278;
      }
      else
      {
LABEL_285:
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, iconsWidget, v130);
        if ( !byte_5931D52 )
        {
          sub_21FFC50(&NetworkManager_TypeInfo);
          byte_5931D52 = 1;
        }
        partyMemberItem = (System_String_o *)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, iconsWidget, v130);
          partyMemberItem = (System_String_o *)NetworkManager_TypeInfo;
        }
        if ( !MasterData_object )
          goto LABEL_278;
        partyMemberItem = (System_String_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                               MasterData_object,
                                               *(_QWORD *)(*(_QWORD *)&partyMemberItem[7].fields + 64LL),
                                               v128,
                                               0);
        if ( !partyMemberItem )
          goto LABEL_278;
        if ( !v121 )
          goto LABEL_278;
        v141 = v121->fields._items;
        LimitCount = partyMemberItem[2].fields._stringLength;
        v142 = Method_System_Collections_Generic_List_bool__Add__;
        ++v121->fields._version;
        if ( !v141 )
          goto LABEL_278;
        v143 = v121->fields._size;
        if ( (unsigned int)v143 >= LODWORD(v141->max_length) )
        {
          System_Collections_Generic_List_bool___AddWithResize(
            v121,
            0,
            *(const MethodInfo_43DD66C **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
          v144 = 0;
          if ( !v119 )
            goto LABEL_278;
        }
        else
        {
          v144 = 0;
          v121->fields._size = v143 + 1;
          v141->m_Items[v143] = 0;
          if ( !v119 )
            goto LABEL_278;
        }
      }
      v145 = v119->fields._items;
      v146 = Method_System_Collections_Generic_List_int__Add__;
      ++v119->fields._version;
      if ( !v145 )
        goto LABEL_278;
      v147 = v119->fields._size;
      if ( (unsigned int)v147 >= LODWORD(v145->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v119,
          LimitCount,
          *(const MethodInfo_4433138 **)(*(_QWORD *)(v146[4] + 192LL) + 112LL));
      }
      else
      {
        v119->fields._size = v147 + 1;
        v145->m_Items[v147] = LimitCount;
      }
      if ( !v120 )
        goto LABEL_278;
      v148 = v120->fields._items;
      v149 = Method_System_Collections_Generic_List_int__Add__;
      ++v120->fields._version;
      if ( !v148 )
        goto LABEL_278;
      v150 = v120->fields._size;
      if ( (unsigned int)v150 >= LODWORD(v148->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v120,
          v144,
          *(const MethodInfo_4433138 **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
      }
      else
      {
        v120->fields._size = v150 + 1;
        v148->m_Items[v150] = v144;
      }
      partyMemberItem = (System_String_o *)*v126;
      v125 = v126;
      if ( !*(&(*v126)->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(partyMemberItem, iconsWidget, v137);
        partyMemberItem = (System_String_o *)*v126;
      }
      if ( ++v123 >= **(_DWORD **)&partyMemberItem[7].fields )
      {
        partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                               (BaseMonoBehaviour_o *)this,
                                               this->fields.servantIconsPrefab,
                                               this->fields.iconParent,
                                               0,
                                               0);
        if ( !partyMemberItem )
          goto LABEL_278;
        v151 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)partyMemberItem,
                                                     (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        v152 = System_Collections_Generic_List_int___ToArray(
                 v118,
                 (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
        v153 = System_Collections_Generic_List_int___ToArray(
                 v119,
                 (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                               v120,
                                               (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !v121 )
          goto LABEL_278;
        v154 = (System_Int32_array *)partyMemberItem;
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_bool___ToArray(
                                               v121,
                                               (const MethodInfo_43DF114 *)Method_System_Collections_Generic_List_bool__ToArray__);
        if ( !v151 )
          goto LABEL_278;
        v156 = v154;
        v84 = questRestrictionInfoa;
        RestrictionNotSatisfySlotIcons__SetServantIcons(
          v151,
          v152,
          v153,
          v156,
          (System_Boolean_array *)partyMemberItem,
          questRestrictionInfoa,
          v155);
        if ( !v235 )
          goto LABEL_278;
        v163 = v235->fields._items;
        iconsWidget = (Il2CppObject *)v151->fields.iconsWidget;
        this = v240;
        v164 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++v235->fields._version;
        if ( !v163 )
          goto LABEL_278;
        v165 = v235->fields._size;
        v125 = v126;
        if ( (unsigned int)v165 >= LODWORD(v163->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v235,
            iconsWidget,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
        }
        else
        {
          v166 = &v163->obj.klass + v165;
          v235->fields._size = v165 + 1;
          v166[4] = (Il2CppClass *)iconsWidget;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v166 + 4),
            (int32_t)iconsWidget,
            v157,
            v158,
            v159,
            v160,
            v161,
            v162);
        }
        v123 = 0;
        v167 = v118->fields._version + 1;
        v118->fields._size = 0;
        v118->fields._version = v167;
        v168 = v119->fields._version + 1;
        v119->fields._size = 0;
        v119->fields._version = v168;
        v169 = v120->fields._version + 1;
        v120->fields._size = 0;
        v120->fields._version = v169;
        v170 = v121->fields._version + 1;
        v121->fields._size = 0;
        v121->fields._version = v170;
      }
      ++v124;
      LODWORD(v122) = v238->max_length;
    }
    while ( (__int64)v124 < (int)v122 );
    if ( v123 )
    {
      partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)this,
                                             this->fields.servantIconsPrefab,
                                             this->fields.iconParent,
                                             0,
                                             0);
      if ( partyMemberItem )
      {
        v171 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)partyMemberItem,
                                                     (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        v172 = System_Collections_Generic_List_int___ToArray(
                 v118,
                 (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
        v173 = System_Collections_Generic_List_int___ToArray(
                 v119,
                 (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                               v120,
                                               (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( v121 )
        {
          v174 = (System_Int32_array *)partyMemberItem;
          partyMemberItem = (System_String_o *)System_Collections_Generic_List_bool___ToArray(
                                                 v121,
                                                 (const MethodInfo_43DF114 *)Method_System_Collections_Generic_List_bool__ToArray__);
          v176 = v235;
          if ( v171 )
          {
            RestrictionNotSatisfySlotIcons__SetServantIcons(
              v171,
              v172,
              v173,
              v174,
              (System_Boolean_array *)partyMemberItem,
              v84,
              v175);
            if ( v235 )
            {
              v183 = v235->fields._items;
              iconsWidget = (Il2CppObject *)v171->fields.iconsWidget;
              v184 = Method_System_Collections_Generic_List_UIWidget__Add__;
              ++v235->fields._version;
              if ( v183 )
              {
                v185 = v235->fields._size;
                if ( (unsigned int)v185 >= LODWORD(v183->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v235,
                    iconsWidget,
                    *(const MethodInfo_444FB2C **)(*(_QWORD *)(v184[4] + 192LL) + 112LL));
                }
                else
                {
                  v186 = &v183->obj.klass + v185;
                  v235->fields._size = v185 + 1;
                  v186[4] = (Il2CppClass *)iconsWidget;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)(v186 + 4),
                    (int32_t)iconsWidget,
                    v177,
                    v178,
                    v179,
                    v180,
                    v181,
                    v182);
                }
                goto LABEL_236;
              }
            }
          }
        }
      }
      goto LABEL_278;
    }
  }
  v176 = v235;
  if ( !v235 )
    goto LABEL_278;
LABEL_236:
  v222 = this->fields.switchIcons;
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                         v176,
                                         (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !v222 )
    goto LABEL_278;
  v223 = (UIWidget_array *)partyMemberItem;
  v224 = v222;
LABEL_241:
  SwitchUIWidgetComponent__Set(v224, v223, 0, 0);
  partyMemberItem = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !partyMemberItem )
    goto LABEL_278;
  SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)partyMemberItem, 0);
LABEL_243:
  partyMemberItem = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !partyMemberItem )
    goto LABEL_278;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyMemberItem, 1, 0);
}


void RestrictionNotSatisfySlot___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5934236 & 1) == 0 )
  {
    sub_21FFC50(&RestrictionNotSatisfySlot___c_TypeInfo);
    byte_5934236 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(RestrictionNotSatisfySlot___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RestrictionNotSatisfySlot___c_TypeInfo->static_fields->__9 = (struct RestrictionNotSatisfySlot___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)RestrictionNotSatisfySlot___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RestrictionNotSatisfySlot___c___ctor(RestrictionNotSatisfySlot___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RestrictionNotSatisfySlot___c___SetItem_b__14_1(
        RestrictionNotSatisfySlot___c_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_21FFECC(this, 0);
  return entity->fields.type != 15;
}


void RestrictionNotSatisfySlot___c__DisplayClass14_0___ctor(
        RestrictionNotSatisfySlot___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RestrictionNotSatisfySlot___c__DisplayClass14_0___SetItem_b__0(
        RestrictionNotSatisfySlot___c__DisplayClass14_0_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  RestrictionNotSatisfySlot___c__DisplayClass14_0_o *v4; // x20
  struct PartyOrganizationListViewItem_o *memberItem; // x8
  _BOOL4 v6; // w0
  unsigned int type; // w8

  v4 = this;
  if ( (byte_5934237 & 1) == 0 )
  {
    this = (RestrictionNotSatisfySlot___c__DisplayClass14_0_o *)sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    byte_5934237 = 1;
  }
  if ( !entity )
    goto LABEL_13;
  memberItem = v4->fields.memberItem;
  if ( entity->fields.type != 9 )
  {
    if ( memberItem )
      goto LABEL_9;
LABEL_13:
    sub_21FFECC(this, entity);
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
         (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___)
    && (type = entity->fields.type, type <= 0x10) )
  {
    return (0x11002u >> type) & 1;
  }
  else
  {
    LOBYTE(v6) = 0;
  }
  return v6;
}