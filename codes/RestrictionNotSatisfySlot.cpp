void RestrictionNotSatisfySlot___cctor(const MethodInfo *method)
{
  if ( (byte_4D2C5DF & 1) == 0 )
  {
    sub_1C93AD4(&RestrictionNotSatisfySlot_TypeInfo);
    byte_4D2C5DF = 1;
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_String_o *v12; // x19
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w1

  if ( (byte_4D2C5DD & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_43/*"\n"*/);
    sub_1C93AD4(&StringLiteral_15923/*"[-]"*/);
    sub_1C93AD4(&StringLiteral_11184/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_1C93AD4(&StringLiteral_16024/*"[FFFF00]"*/);
    byte_4D2C5DD = 1;
  }
  v4 = (System_String_o *)sub_1C93B7C(string___TypeInfo, 5);
  if ( !v4 )
    sub_1C93D2C(0, v5);
  v12 = v4;
  if ( !LODWORD(v4[1].klass) )
    goto LABEL_12;
  v13 = StringLiteral_16024/*"[FFFF00]"*/;
  v4[1].monitor = (void *)StringLiteral_16024/*"[FFFF00]"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4[1].monitor, v13, v6, v7, v8, v9, v10, v11);
  if ( LODWORD(v12[1].klass) <= 1 )
    goto LABEL_12;
  v12[1].fields = (System_String_Fields)message;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v12[1].fields, (int32_t)message, v14, v15, v16, v17, v18, v19);
  if ( LODWORD(v12[1].klass) <= 2 )
    goto LABEL_12;
  v26 = StringLiteral_43/*"\n"*/;
  v12[2].klass = (System_String_c *)StringLiteral_43/*"\n"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v12[2], v26, v20, v21, v22, v23, v24, v25);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_11184/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0);
  if ( LODWORD(v12[1].klass) <= 3
    || (v12[2].monitor = v4,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v12[2].monitor, (int32_t)v4, v27, v28, v29, v30, v31, v32),
        LODWORD(v12[1].klass) <= 4) )
  {
LABEL_12:
    sub_1C93D34(v4);
  }
  v39 = (int)StringLiteral_15923/*"[-]"*/;
  v12[2].fields = (System_String_Fields)StringLiteral_15923/*"[-]"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v12[2].fields, v39, v33, v34, v35, v36, v37, v38);
  return System_String__Concat_64466256((System_String_array *)v12, 0);
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
  Il2CppObject *Master_object; // x22
  Il2CppObject *v8; // x25
  System_Collections_Generic_List_int__o *v9; // x24
  System_Collections_Generic_List_int__o *v10; // x23
  _BOOL8 EntityByIndividuality; // x0
  __int64 iconImageId; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v14; // x27
  int32_t v15; // w26
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  struct System_Int32_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  __int64 v22; // x8
  System_Collections_Generic_List_int__o *v23; // x0
  System_Int32_array *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Int32_array *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  ServantClassEntity_o *v39; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4D2C5DC & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2C5DC = 1;
  }
  v39 = 0;
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantMaster___);
  v8 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  v10 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individuality )
    goto LABEL_29;
  max_length = individuality->max_length;
  if ( (int)max_length >= 1 )
  {
    v14 = 0;
    do
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1C93D34(EntityByIndividuality);
      if ( !Master_object )
        goto LABEL_29;
      v15 = individuality->m_Items[v14];
      EntityByIndividuality = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                &entity,
                                v15,
                                (const MethodInfo_34632C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( EntityByIndividuality )
      {
        if ( !v9 )
          goto LABEL_29;
        items = v9->fields._items;
        v17 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v22 = v17[4];
          v23 = v9;
          LODWORD(iconImageId) = v15;
LABEL_24:
          System_Collections_Generic_List_int___AddWithResize(
            v23,
            iconImageId,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v22 + 192) + 112LL));
          goto LABEL_25;
        }
        v9->fields._size = size + 1;
        items->m_Items[size] = v15;
      }
      else
      {
        if ( !v8 )
          goto LABEL_29;
        EntityByIndividuality = ServantClassMaster__TryGetEntityByIndividuality(
                                  (ServantClassMaster_o *)v8,
                                  &v39,
                                  v15,
                                  0);
        if ( !EntityByIndividuality )
          goto LABEL_25;
        if ( !v39 )
          goto LABEL_29;
        if ( !v10 )
          goto LABEL_29;
        iconImageId = (unsigned int)v39->fields.iconImageId;
        v19 = v10->fields._items;
        v20 = Method_System_Collections_Generic_List_int__Add__;
        ++v10->fields._version;
        if ( !v19 )
          goto LABEL_29;
        v21 = v10->fields._size;
        if ( (unsigned int)v21 >= LODWORD(v19->max_length) )
        {
          v22 = v20[4];
          v23 = v10;
          goto LABEL_24;
        }
        v10->fields._size = v21 + 1;
        v19->m_Items[v21] = iconImageId;
      }
LABEL_25:
      LODWORD(max_length) = individuality->max_length;
    }
    while ( (__int64)++v14 < (int)max_length );
  }
  if ( !v9
    || (v24 = System_Collections_Generic_List_int___ToArray(
                v9,
                (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__),
        *servantIds = v24,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)servantIds, (int32_t)v24, v25, v26, v27, v28, v29, v30),
        !v10) )
  {
LABEL_29:
    sub_1C93D2C(EntityByIndividuality, iconImageId);
  }
  v31 = System_Collections_Generic_List_int___ToArray(
          v10,
          (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
  *classImageIds = v31;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)classImageIds, (int32_t)v31, v32, v33, v34, v35, v36, v37);
}


System_String_o *RestrictionNotSatisfySlot__RemoveColorCode(
        RestrictionNotSatisfySlot_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4D2C5DE & 1) == 0 )
  {
    sub_1C93AD4(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C93AD4(&StringLiteral_16053/*"[[]-[\\]]"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_16054/*"[[][0-9A-F]{6}[\\]]"*/);
    byte_4D2C5DE = 1;
  }
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  v4 = System_Text_RegularExpressions_Regex__Replace(
         message,
         (System_String_o *)StringLiteral_16054/*"[[][0-9A-F]{6}[\\]]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0);
  return System_Text_RegularExpressions_Regex__Replace(
           v4,
           (System_String_o *)StringLiteral_16053/*"[[]-[\\]]"*/,
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
  __int64 v7; // x24
  System_String_o *partyMemberItem; // x0
  Il2CppObject *iconsWidget; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  PartyOrganizationListViewItem_o **v16; // x21
  UISprite_o *numberSprite; // x20
  System_String_o *v18; // x0
  long double inited; // q0
  _QWORD *v20; // x20
  __int64 v21; // x8
  __int64 v22; // x0
  __int64 v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x22
  System_Collections_Generic_List_object__o *v25; // x23
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x20
  System_Func_object__bool__o *v27; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  RestrictionNotSatisfySlot___c_c *v29; // x0
  System_Func_object__bool__o *_9__14_1; // x20
  Il2CppObject *v31; // x24
  struct RestrictionNotSatisfySlot___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  const MethodInfo *v40; // x2
  System_String_o *v41; // x20
  System_String_c *klass; // x8
  unsigned __int64 v43; // x19
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  System_String_o *v53; // x1
  Il2CppClass **v54; // x0
  System_Collections_Generic_List_object__o *v55; // x24
  __int64 v56; // x1
  UnityEngine_GameObject_o *restrictionLabelRoot; // x0
  Il2CppObject *current; // x23
  Il2CppObject *restrictionLabel; // x20
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *v61; // x0
  __int64 v62; // x1
  Il2CppObject *v63; // x20
  __int64 v64; // x0
  __int64 v65; // x1
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  Il2CppClass **v75; // x0
  SwitchUIWidgetComponent_o *switchMessage; // x20
  long double v77; // q0
  _QWORD *v78; // x20
  __int64 v79; // x8
  __int64 v80; // x0
  __int64 v81; // x0
  _QWORD *v82; // x20
  __int64 v83; // x8
  __int64 v84; // x0
  QuestRestrictionInfo_o *v85; // x29
  __int64 v86; // x0
  System_Collections_Generic_Dictionary_int__object__o *v87; // x20
  char v88; // w20
  const MethodInfo *v89; // x4
  bool IsSelectableNormalSupport; // w0
  QuestPhaseEntity_o *v91; // x8
  System_Collections_Generic_IEnumerable_T__o *v92; // x21
  System_Collections_Generic_List_int__o *v93; // x20
  struct System_Int32_array *v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_TSource__c *v98; // x8
  System_Int32_array *v99; // x3
  System_Collections_Generic_List_int__o *v100; // x20
  PartyOrganizationListViewItem_o *v101; // x8
  System_Collections_Generic_List_object__o *v102; // x21
  System_Collections_Generic_List_T__o *v103; // x22
  int32_t v104; // w23
  System_Collections_Generic_List_object__o *v105; // x21
  System_Collections_Generic_List_int__o *v106; // x22
  System_Collections_Generic_List_int__o *v107; // x24
  System_Collections_Generic_List_int__o *v108; // x25
  System_Collections_Generic_List_bool__o *v109; // x26
  System_Int32_array *v110; // x27
  il2cpp_array_size_t v111; // x8
  int v112; // w19
  unsigned __int64 v113; // x23
  int32_t v114; // w20
  struct System_Int32_array *v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  Il2CppObject *v118; // x0
  int32_t questId; // w27
  int32_t questPhase; // w29
  FollowerInfo_o *v121; // x28
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w28
  struct System_Boolean_array *v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  struct System_Boolean_array *v127; // x8
  _QWORD *v128; // x9
  __int64 v129; // x10
  int32_t v130; // w20
  struct System_Int32_array *v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  struct System_Int32_array *v134; // x8
  _QWORD *v135; // x9
  __int64 v136; // x10
  RestrictionNotSatisfySlotIcons_o *v137; // x20
  System_Int32_array *v138; // x27
  System_Int32_array *v139; // x28
  System_Int32_array *v140; // x29
  const MethodInfo *v141; // x6
  System_Int32_array *v142; // x3
  int32_t v143; // w2
  int32_t v144; // w3
  System_String_o *v145; // x4
  int32_t v146; // w5
  int64_t v147; // x6
  System_String_o *v148; // x7
  struct System_Object_array *v149; // x8
  _QWORD *v150; // x9
  __int64 v151; // x10
  Il2CppClass **v152; // x0
  int v153; // w8
  int v154; // w8
  int v155; // w8
  int v156; // w8
  RestrictionNotSatisfySlotIcons_o *v157; // x20
  System_Int32_array *v158; // x22
  System_Int32_array *v159; // x23
  System_Int32_array *v160; // x24
  const MethodInfo *v161; // x6
  int32_t v162; // w2
  int32_t v163; // w3
  System_String_o *v164; // x4
  int32_t v165; // w5
  int64_t v166; // x6
  System_String_o *v167; // x7
  struct System_Object_array *v168; // x8
  _QWORD *v169; // x9
  __int64 v170; // x10
  Il2CppClass **v171; // x0
  System_Collections_Generic_List_object__o *v172; // x20
  System_Collections_Generic_List_int__o *v173; // x21
  System_Int32_array *v174; // x19
  il2cpp_array_size_t max_length; // x8
  int v176; // w22
  unsigned __int64 v177; // x23
  struct System_Int32_array *v178; // x8
  _QWORD *v179; // x9
  __int64 v180; // x10
  RestrictionNotSatisfySlotIcons_o *Component_object; // x22
  const MethodInfo *v182; // x2
  int32_t v183; // w2
  int32_t v184; // w3
  System_String_o *v185; // x4
  int32_t v186; // w5
  int64_t v187; // x6
  System_String_o *v188; // x7
  struct System_Object_array *v189; // x8
  _QWORD *v190; // x9
  __int64 v191; // x10
  Il2CppClass **v192; // x0
  int v193; // w8
  RestrictionNotSatisfySlotIcons_o *v194; // x22
  const MethodInfo *v195; // x2
  int32_t v196; // w2
  int32_t v197; // w3
  System_String_o *v198; // x4
  int32_t v199; // w5
  int64_t v200; // x6
  System_String_o *v201; // x7
  struct System_Object_array *v202; // x8
  _QWORD *v203; // x9
  __int64 v204; // x10
  Il2CppClass **v205; // x0
  struct SwitchUIWidgetComponent_o *v206; // x20
  UIWidget_array *v207; // x1
  SwitchUIWidgetComponent_o *v208; // x0
  struct SwitchUIWidgetComponent_o *switchIcons; // x21
  PartyOrganizationListViewItem_o *v210; // x8
  int32_t v211; // w2
  int32_t v212; // w3
  System_String_o *v213; // x4
  int32_t v214; // w5
  int64_t v215; // x6
  System_String_o *v216; // x7
  struct System_Object_array *v217; // x8
  _QWORD *v218; // x9
  __int64 v219; // x10
  System_String_o *v220; // x1
  Il2CppClass **v221; // x0
  int v222; // w19
  int32_t v223; // w20
  Il2CppObject *Item; // x0
  const MethodInfo *v225; // x2
  Il2CppObject *fixed; // x0
  NpcFollowerMaster_o *v227; // [xsp+48h] [xbp-108h]
  NpcServantFollowerMaster_o *Master_object; // [xsp+50h] [xbp-100h]
  UserServantCollectionMaster_o *MasterData_object; // [xsp+58h] [xbp-F8h]
  System_Int32_array *v230; // [xsp+60h] [xbp-F0h]
  QuestRestrictionInfo_o *questRestrictionInfoa; // [xsp+68h] [xbp-E8h]
  int32_t *m_Items; // [xsp+70h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v234; // [xsp+80h] [xbp-D0h] BYREF
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+98h] [xbp-B8h] BYREF
  QuestPhaseEntity_o *v236; // [xsp+A0h] [xbp-B0h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+A8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v238; // [xsp+B0h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+D0h] [xbp-80h] BYREF
  System_Int32_array *classImageIds; // [xsp+D8h] [xbp-78h] BYREF
  System_Int32_array *servantIds; // [xsp+E0h] [xbp-70h] BYREF
  int32_t pos; // [xsp+ECh] [xbp-64h] BYREF

  pos = number;
  if ( (byte_4D2C5DB & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_int___);
    sub_1C93AD4(&Method_System_Array_Empty_RestrictionEntity___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C93AD4(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_bool__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_bool__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_bool__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_bool___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor___79008552);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_bool__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_UILabel____79146656);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&RestrictionNotSatisfySlot_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__);
    sub_1C93AD4(&Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__);
    sub_1C93AD4(&RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo);
    sub_1C93AD4(&RestrictionNotSatisfySlot___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_43/*"\n"*/);
    sub_1C93AD4(&StringLiteral_21797/*"member_txt_"*/);
    sub_1C93AD4(&StringLiteral_11181/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2C5DB = 1;
  }
  classImageIds = 0;
  servantIds = 0;
  npcInfoDictionary = 0;
  memset(&v238, 0, sizeof(v238));
  v236 = 0;
  entity = 0;
  npcServantFollowerEntity = 0;
  v7 = sub_1C93D20(RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_286;
  *(_QWORD *)(v7 + 16) = memberItem;
  v16 = (PartyOrganizationListViewItem_o **)(v7 + 16);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)memberItem, v10, v11, v12, v13, v14, v15);
  numberSprite = this->fields.numberSprite;
  v18 = System_Int32__ToString((int32_t)&pos, 0);
  partyMemberItem = System_String__Concat_64425724((System_String_o *)StringLiteral_21797/*"member_txt_"*/, v18, 0);
  if ( !numberSprite )
    goto LABEL_286;
  UISprite__set_spriteName(numberSprite, partyMemberItem, 0);
  partyMemberItem = (System_String_o *)this->fields.partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_286;
  PartyOrganizationConfirmItemDraw__SetItem(
    (PartyOrganizationConfirmItemDraw_o *)partyMemberItem,
    *v16,
    3,
    0,
    0,
    0,
    0,
    0);
  v20 = Method_System_Array_Empty_RestrictionEntity___;
  v21 = *((_QWORD *)Method_System_Array_Empty_RestrictionEntity___ + 7);
  if ( !v21 )
  {
    sub_1C69BC4(Method_System_Array_Empty_RestrictionEntity___);
    v21 = v20[7];
  }
  v22 = *(_QWORD *)(v21 + 16);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1C69B68(inited);
  if ( !*(_DWORD *)(v22 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v22);
  v23 = *(_QWORD *)(v20[7] + 16LL);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1C69B68(inited);
  v24 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v23 + 184);
  v25 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !questRestrictionInfo )
    goto LABEL_286;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0);
  if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
  {
    restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
    v27 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v27,
      (Il2CppObject *)v7,
      Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__,
      0);
    v28 = System_Linq_Enumerable__Where_object_(
            restrictionEntityList,
            (System_Func_TSource__bool__o *)v27,
            (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 v28,
                                                                 (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    if ( questRestrictionInfo->fields.isUniqueServant && questRestrictionInfo->fields.isUniqueIndividuality )
    {
      v29 = RestrictionNotSatisfySlot___c_TypeInfo;
      if ( !RestrictionNotSatisfySlot___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot___c_TypeInfo);
        v29 = RestrictionNotSatisfySlot___c_TypeInfo;
      }
      _9__14_1 = (System_Func_object__bool__o *)v29->static_fields->__9__14_1;
      if ( !_9__14_1 )
      {
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = RestrictionNotSatisfySlot___c_TypeInfo;
        }
        v31 = (Il2CppObject *)v29->static_fields->__9;
        _9__14_1 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__14_1, v31, Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__, 0);
        static_fields = RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
        static_fields->__9__14_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__14_1;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__14_1,
          (int32_t)_9__14_1,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
      v39 = System_Linq_Enumerable__Where_object_(
              v24,
              (System_Func_TSource__bool__o *)_9__14_1,
              (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                   v39,
                                                                   (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    }
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetMessages_44112852(
                                           questRestrictionInfo,
                                           (RestrictionEntity_array *)v24,
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
    if ( !*v16 )
      goto LABEL_286;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetMessages(
                                           questRestrictionInfo,
                                           (*v16)->fields._InitPos_k__BackingField,
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
  v41 = partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_286;
  klass = partyMemberItem[1].klass;
  if ( klass && (int)klass >= 1 )
  {
    v43 = 0;
    while ( v43 < (unsigned int)klass )
    {
      partyMemberItem = RestrictionNotSatisfySlot__RemoveColorCode(
                          (RestrictionNotSatisfySlot_o *)partyMemberItem,
                          *((System_String_o **)&v41[1].monitor + v43),
                          v40);
      if ( !partyMemberItem )
        goto LABEL_286;
      partyMemberItem = System_String__Replace_64472288(
                          partyMemberItem,
                          (System_String_o *)StringLiteral_43/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0);
      if ( !v25 )
        goto LABEL_286;
      items = v25->fields._items;
      v51 = Method_System_Collections_Generic_List_string__Add__;
      ++v25->fields._version;
      if ( !items )
        goto LABEL_286;
      size = v25->fields._size;
      v53 = partyMemberItem;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          (Il2CppObject *)partyMemberItem,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &items->obj.klass + size;
        v25->fields._size = size + 1;
        v54[4] = (Il2CppClass *)v53;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v54 + 4), (int32_t)v53, v44, v45, v46, v47, v48, v49);
      }
      LODWORD(klass) = v41[1].klass;
      if ( (__int64)++v43 >= (int)klass )
        goto LABEL_40;
    }
LABEL_287:
    sub_1C93D34(partyMemberItem);
  }
LABEL_40:
  partyMemberItem = (System_String_o *)this->fields.notSatisfyWidget;
  if ( !partyMemberItem )
    goto LABEL_286;
  partyMemberItem = (System_String_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)partyMemberItem,
                                         0);
  if ( !partyMemberItem )
    goto LABEL_286;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyMemberItem, 0, 0);
  partyMemberItem = (System_String_o *)*v16;
  if ( !*v16 )
    goto LABEL_286;
  if ( !PartyOrganizationListViewItem__get_IsSupportOnly((PartyOrganizationListViewItem_o *)partyMemberItem, 0) )
  {
    partyMemberItem = (System_String_o *)*v16;
    if ( !*v16 )
      goto LABEL_286;
    if ( !PartyOrganizationListViewItem__get_IsFixedMyServantSingle(
            (PartyOrganizationListViewItem_o *)partyMemberItem,
            0) )
    {
      partyMemberItem = (System_String_o *)*v16;
      if ( !*v16 )
        goto LABEL_286;
      if ( !LOBYTE(partyMemberItem[10].monitor) && !BYTE1(partyMemberItem[10].monitor) )
      {
        if ( PartyOrganizationListViewItem__get_IsQuestRestriction(
               (PartyOrganizationListViewItem_o *)partyMemberItem,
               0) )
        {
          goto LABEL_261;
        }
        partyMemberItem = (System_String_o *)*v16;
        if ( !*v16 )
          goto LABEL_286;
        partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                               (PartyOrganizationListViewItem_o *)partyMemberItem,
                                               0);
        if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
        {
          if ( !*v16 )
            goto LABEL_286;
          partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsSetRequired(
                                                 questRestrictionInfo,
                                                 pos,
                                                 (*v16)->fields._InitPos_k__BackingField,
                                                 0);
          if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
            goto LABEL_261;
        }
        v210 = *v16;
        if ( !*v16 )
          goto LABEL_286;
        if ( v210->fields.isUniqueSvtRestriction
          || v210->fields.isUniqueIndividualityRestriction
          || (v210->fields.fatigureTime & 0x8000000000000000LL) == 0
          || v210->fields._IsAllOutBattle_k__BackingField
          || v210->fields._IsDataLost_k__BackingField
          || v210->fields._TimesToRestart_k__BackingField > 0
          || v210->fields._IsNotSupportSingle_k__BackingField
          || v210->fields.isFixedServantPositionRestriction
          || v210->fields.isFixedSupportPositionRestriction )
        {
LABEL_261:
          partyMemberItem = (System_String_o *)this->fields.notSatisfyWidget;
          if ( !partyMemberItem )
            goto LABEL_286;
          partyMemberItem = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)partyMemberItem,
                                                 0);
          if ( !partyMemberItem )
            goto LABEL_286;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyMemberItem, 1, 0);
          partyMemberItem = (System_String_o *)*v16;
          if ( !*v16 )
            goto LABEL_286;
          partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                                 (PartyOrganizationListViewItem_o *)partyMemberItem,
                                                 0);
          if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
            goto LABEL_276;
          if ( !*v16 )
            goto LABEL_286;
          if ( QuestRestrictionInfo__IsSetRequired(
                 questRestrictionInfo,
                 pos,
                 (*v16)->fields._InitPos_k__BackingField,
                 0) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            partyMemberItem = LocalizationManager__Get((System_String_o *)StringLiteral_11181/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/, 0);
            if ( !v25 )
              goto LABEL_286;
            v217 = v25->fields._items;
            v218 = Method_System_Collections_Generic_List_string__Add__;
            ++v25->fields._version;
            if ( !v217 )
              goto LABEL_286;
            v219 = v25->fields._size;
            v220 = partyMemberItem;
            if ( (unsigned int)v219 >= LODWORD(v217->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v25,
                (Il2CppObject *)partyMemberItem,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v218[4] + 192LL) + 112LL));
            }
            else
            {
              v221 = &v217->obj.klass + v219;
              v25->fields._size = v219 + 1;
              v221[4] = (Il2CppClass *)v220;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v221 + 4), (int32_t)v220, v211, v212, v213, v214, v215, v216);
            }
            v222 = 1;
          }
          else
          {
LABEL_276:
            v222 = 0;
          }
          partyMemberItem = (System_String_o *)*v16;
          if ( !*v16 )
            goto LABEL_286;
          partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsQuestRestriction(
                                                 (PartyOrganizationListViewItem_o *)partyMemberItem,
                                                 0);
          if ( v222 | (unsigned __int8)partyMemberItem & 1 )
          {
            if ( !v25 )
              goto LABEL_286;
            if ( v25->fields._size >= 1 )
            {
              v223 = 0;
              do
              {
                Item = System_Collections_Generic_List_object___get_Item(
                         v25,
                         v223,
                         (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_string__get_Item__);
                fixed = (Il2CppObject *)RestrictionNotSatisfySlot__AddColorCodeAndFixMessage(
                                          (RestrictionNotSatisfySlot_o *)Item,
                                          (System_String_o *)Item,
                                          v225);
                System_Collections_Generic_List_object___set_Item(
                  v25,
                  v223++,
                  fixed,
                  (const MethodInfo_3879720 *)Method_System_Collections_Generic_List_string__set_Item__);
              }
              while ( v223 < v25->fields._size );
            }
          }
        }
      }
    }
  }
  questRestrictionInfoa = questRestrictionInfo;
  v55 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v55,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  if ( !v25 )
    goto LABEL_286;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v234,
    v25,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v238 = v234;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v238,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    restrictionLabelRoot = this->fields.restrictionLabelRoot;
    if ( !restrictionLabelRoot )
      sub_1C93D2C(0, v56);
    current = v238.fields._current;
    restrictionLabel = (Il2CppObject *)this->fields.restrictionLabel;
    transform = UnityEngine_GameObject__get_transform(restrictionLabelRoot, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v61 = UnityEngine_Object__Instantiate_object__52629400(
            restrictionLabel,
            transform,
            (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_UILabel____79146656);
    v63 = v61;
    if ( !v61 )
      sub_1C93D2C(0, v62);
    UILabel__set_text((UILabel_o *)v61, (System_String_o *)current, 0);
    if ( !v55 )
      sub_1C93D2C(v64, v65);
    v72 = v55->fields._items;
    v73 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++v55->fields._version;
    if ( !v72 )
      sub_1C93D2C(v64, v65);
    v74 = v55->fields._size;
    if ( (unsigned int)v74 >= LODWORD(v72->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v55,
        v63,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    }
    else
    {
      v75 = &v72->obj.klass + v74;
      v55->fields._size = v74 + 1;
      v75[4] = (Il2CppClass *)v63;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v75 + 4), (int32_t)v63, v66, v67, v68, v69, v70, v71);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v238,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v55 )
    goto LABEL_286;
  switchMessage = this->fields.switchMessage;
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                         v55,
                                         (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !switchMessage )
    goto LABEL_286;
  SwitchUIWidgetComponent__Set(switchMessage, (UIWidget_array *)partyMemberItem, 0, 0);
  v78 = Method_System_Array_Empty_int___;
  v79 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v79 )
  {
    sub_1C69BC4(Method_System_Array_Empty_int___);
    v79 = v78[7];
  }
  v80 = *(_QWORD *)(v79 + 16);
  if ( (*(_BYTE *)(v80 + 309) & 1) == 0 )
    v80 = sub_1C69B68(v77);
  if ( !*(_DWORD *)(v80 + 224) )
    v77 = j_il2cpp_runtime_class_init_0(v80);
  v81 = *(_QWORD *)(v78[7] + 16LL);
  if ( (*(_BYTE *)(v81 + 309) & 1) == 0 )
    v81 = sub_1C69B68(v77);
  v82 = Method_System_Array_Empty_int___;
  servantIds = **(System_Int32_array ***)(v81 + 184);
  v83 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v83 )
  {
    sub_1C69BC4(Method_System_Array_Empty_int___);
    v83 = v82[7];
  }
  v84 = *(_QWORD *)(v83 + 16);
  v85 = questRestrictionInfo;
  if ( (*(_BYTE *)(v84 + 309) & 1) == 0 )
    v84 = sub_1C69B68(v77);
  if ( !*(_DWORD *)(v84 + 224) )
    v77 = j_il2cpp_runtime_class_init_0(v84);
  v86 = *(_QWORD *)(v82[7] + 16LL);
  if ( (*(_BYTE *)(v86 + 309) & 1) == 0 )
    v86 = sub_1C69B68(v77);
  classImageIds = **(System_Int32_array ***)(v86 + 184);
  v87 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v87,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v87;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0);
  if ( !*v16 )
    goto LABEL_286;
  v88 = (char)partyMemberItem;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_44136444(
                                         questRestrictionInfo,
                                         (*v16)->fields._InitPos_k__BackingField,
                                         0);
  if ( (v88 & 1) == 0 )
  {
    if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
    {
      if ( !*v16 )
        goto LABEL_286;
      servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                     questRestrictionInfo,
                     &npcInfoDictionary,
                     (*v16)->fields._InitPos_k__BackingField,
                     0,
                     0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      partyMemberItem = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !partyMemberItem )
        goto LABEL_286;
      partyMemberItem = (System_String_o *)QuestPhaseMaster__TryGetEntity(
                                             (QuestPhaseMaster_o *)partyMemberItem,
                                             &v236,
                                             questRestrictionInfo->fields.questId,
                                             questRestrictionInfo->fields.questPhase,
                                             0);
      if ( !servantIds )
        goto LABEL_286;
      if ( !servantIds->max_length )
        goto LABEL_125;
      if ( !*v16 )
        goto LABEL_286;
      IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                    questRestrictionInfo,
                                    (*v16)->fields._InitPos_k__BackingField,
                                    0);
      v91 = v236;
      if ( !v236 )
        goto LABEL_125;
      goto LABEL_100;
    }
    v100 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v100,
      (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !*v16 )
      goto LABEL_286;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetNeedIndividualityList(
                                           questRestrictionInfo,
                                           (*v16)->fields._InitPos_k__BackingField,
                                           0);
    v101 = *v16;
    if ( !*v16 )
      goto LABEL_286;
    v102 = (System_Collections_Generic_List_object__o *)partyMemberItem;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetRangeTypeList(
                                           questRestrictionInfo,
                                           v101->fields._InitPos_k__BackingField,
                                           0);
    if ( !v102 )
      goto LABEL_286;
    if ( v102->fields._size >= 1 )
    {
      v103 = (System_Collections_Generic_List_T__o *)partyMemberItem;
      v104 = 0;
      while ( v103 )
      {
        if ( v103->fields._size > v104 )
        {
          partyMemberItem = (System_String_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                 v103,
                                                 v104,
                                                 (const MethodInfo_385EEB4 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          if ( (_DWORD)partyMemberItem == 1 )
          {
            partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                                   v102,
                                                   v104,
                                                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_int____get_Item__);
            if ( !v100 )
              goto LABEL_286;
            System_Collections_Generic_List_int___AddRange(
              v100,
              (System_Collections_Generic_IEnumerable_T__o *)partyMemberItem,
              (const MethodInfo_385CB84 *)Method_System_Collections_Generic_List_int__AddRange__);
          }
        }
        if ( ++v104 >= v102->fields._size )
          goto LABEL_122;
      }
      goto LABEL_286;
    }
LABEL_122:
    if ( !v100 )
      goto LABEL_286;
    partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                           v100,
                                           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
    v99 = (System_Int32_array *)partyMemberItem;
LABEL_124:
    RestrictionNotSatisfySlot__GetIconIdFromIndividuality(
      (RestrictionNotSatisfySlot_o *)partyMemberItem,
      &servantIds,
      &classImageIds,
      v99,
      v89);
    goto LABEL_125;
  }
  if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
  {
    if ( !v24 )
      goto LABEL_286;
    monitor = v24[1].monitor;
    if ( !monitor )
    {
LABEL_125:
      partyMemberItem = (System_String_o *)servantIds;
      if ( !servantIds )
        goto LABEL_286;
      goto LABEL_126;
    }
    if ( !(_DWORD)monitor )
      goto LABEL_287;
    v98 = v24[2].klass;
    if ( !v98 )
      goto LABEL_286;
    v99 = *(System_Int32_array **)&v98->_1.byval_arg.bits;
    goto LABEL_124;
  }
  if ( !*v16 )
    goto LABEL_286;
  servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                 questRestrictionInfo,
                 &npcInfoDictionary,
                 (*v16)->fields._InitPos_k__BackingField,
                 1,
                 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  partyMemberItem = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !partyMemberItem )
    goto LABEL_286;
  partyMemberItem = (System_String_o *)QuestPhaseMaster__TryGetEntity(
                                         (QuestPhaseMaster_o *)partyMemberItem,
                                         &entity,
                                         questRestrictionInfo->fields.questId,
                                         questRestrictionInfo->fields.questPhase,
                                         0);
  if ( !servantIds )
    goto LABEL_286;
  if ( !servantIds->max_length )
    goto LABEL_125;
  if ( !*v16 )
    goto LABEL_286;
  IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                questRestrictionInfo,
                                (*v16)->fields._InitPos_k__BackingField,
                                0);
  v91 = entity;
  if ( !entity )
    goto LABEL_125;
LABEL_100:
  if ( !IsSelectableNormalSupport || v91->fields.isNpcOnly )
    goto LABEL_125;
  v92 = (System_Collections_Generic_IEnumerable_T__o *)servantIds;
  v93 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_59097676(
    v93,
    v92,
    (const MethodInfo_385C24C *)Method_System_Collections_Generic_List_int___ctor___79008552);
  if ( !v93 )
    goto LABEL_286;
  v94 = v93->fields._items;
  v95 = Method_System_Collections_Generic_List_int__Add__;
  ++v93->fields._version;
  if ( !v94 )
    goto LABEL_286;
  v96 = v93->fields._size;
  if ( (unsigned int)v96 >= LODWORD(v94->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v93,
      0,
      *(const MethodInfo_385C978 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
  }
  else
  {
    v93->fields._size = v96 + 1;
    v94->m_Items[v96] = 0;
  }
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                         v93,
                                         (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
  servantIds = (System_Int32_array *)partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_286;
LABEL_126:
  if ( !partyMemberItem[1].klass )
  {
    if ( !classImageIds )
      goto LABEL_286;
    if ( !classImageIds->max_length )
      goto LABEL_244;
    v172 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UIWidget__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v172,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
    v173 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v173,
      (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
    v174 = classImageIds;
    if ( !classImageIds )
      goto LABEL_286;
    max_length = classImageIds->max_length;
    if ( (int)max_length < 1 )
      goto LABEL_237;
    v176 = 0;
    v177 = 0;
    do
    {
      if ( v177 >= (unsigned int)max_length )
        goto LABEL_287;
      if ( !v173 )
        goto LABEL_286;
      iconsWidget = (Il2CppObject *)(unsigned int)v174->m_Items[v177];
      v178 = v173->fields._items;
      v179 = Method_System_Collections_Generic_List_int__Add__;
      ++v173->fields._version;
      if ( !v178 )
        goto LABEL_286;
      v180 = v173->fields._size;
      if ( (unsigned int)v180 >= LODWORD(v178->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v173,
          (int32_t)iconsWidget,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
      }
      else
      {
        v173->fields._size = v180 + 1;
        v178->m_Items[v180] = (int)iconsWidget;
      }
      partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      if ( !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo);
        partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      }
      if ( ++v176 >= **(_DWORD **)&partyMemberItem[7].fields )
      {
        partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                               (BaseMonoBehaviour_o *)this,
                                               this->fields.servantIconsPrefab,
                                               this->fields.iconParent,
                                               0,
                                               0);
        if ( !partyMemberItem )
          goto LABEL_286;
        Component_object = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 (UnityEngine_GameObject_o *)partyMemberItem,
                                                                 (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                               v173,
                                               (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !Component_object )
          goto LABEL_286;
        RestrictionNotSatisfySlotIcons__SetClassIcons(Component_object, (System_Int32_array *)partyMemberItem, v182);
        if ( !v172 )
          goto LABEL_286;
        iconsWidget = (Il2CppObject *)Component_object->fields.iconsWidget;
        v189 = v172->fields._items;
        v190 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++v172->fields._version;
        if ( !v189 )
          goto LABEL_286;
        v191 = v172->fields._size;
        if ( (unsigned int)v191 >= LODWORD(v189->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v172,
            iconsWidget,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v190[4] + 192LL) + 112LL));
        }
        else
        {
          v192 = &v189->obj.klass + v191;
          v172->fields._size = v191 + 1;
          v192[4] = (Il2CppClass *)iconsWidget;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)(v192 + 4),
            (int32_t)iconsWidget,
            v183,
            v184,
            v185,
            v186,
            v187,
            v188);
        }
        v176 = 0;
        v193 = v173->fields._version + 1;
        v173->fields._size = 0;
        v173->fields._version = v193;
      }
      LODWORD(max_length) = v174->max_length;
      ++v177;
    }
    while ( (__int64)v177 < (int)max_length );
    if ( v176 )
    {
      partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)this,
                                             this->fields.servantIconsPrefab,
                                             this->fields.iconParent,
                                             0,
                                             0);
      if ( !partyMemberItem )
        goto LABEL_286;
      v194 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)partyMemberItem,
                                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
      partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                             v173,
                                             (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v194 )
        goto LABEL_286;
      RestrictionNotSatisfySlotIcons__SetClassIcons(v194, (System_Int32_array *)partyMemberItem, v195);
      if ( !v172 )
        goto LABEL_286;
      iconsWidget = (Il2CppObject *)v194->fields.iconsWidget;
      v202 = v172->fields._items;
      v203 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++v172->fields._version;
      if ( !v202 )
        goto LABEL_286;
      v204 = v172->fields._size;
      if ( (unsigned int)v204 >= LODWORD(v202->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v172,
          iconsWidget,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v203[4] + 192LL) + 112LL));
      }
      else
      {
        v205 = &v202->obj.klass + v204;
        v172->fields._size = v204 + 1;
        v205[4] = (Il2CppClass *)iconsWidget;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v205 + 4), (int32_t)iconsWidget, v196, v197, v198, v199, v200, v201);
      }
    }
    else
    {
LABEL_237:
      if ( !v172 )
        goto LABEL_286;
    }
    switchIcons = this->fields.switchIcons;
    partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                           v172,
                                           (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !switchIcons )
      goto LABEL_286;
    v207 = (UIWidget_array *)partyMemberItem;
    v208 = switchIcons;
    goto LABEL_242;
  }
  partyMemberItem = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !partyMemberItem )
    goto LABEL_286;
  MasterData_object = (UserServantCollectionMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)partyMemberItem,
                                                         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (NpcServantFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v227 = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v105 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v105,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  v106 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v106,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  v107 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v107,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  v108 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v108,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  v109 = (System_Collections_Generic_List_bool__o *)sub_1C93D20(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor(
    v109,
    (const MethodInfo_3832D58 *)Method_System_Collections_Generic_List_bool___ctor__);
  v110 = servantIds;
  if ( !servantIds )
LABEL_286:
    sub_1C93D2C(partyMemberItem, iconsWidget);
  v111 = servantIds->max_length;
  if ( (int)v111 >= 1 )
  {
    v112 = 0;
    v113 = 0;
    m_Items = servantIds->m_Items;
    v230 = servantIds;
    do
    {
      if ( v113 >= (unsigned int)v111 )
        goto LABEL_287;
      if ( !v106 )
        goto LABEL_286;
      v114 = m_Items[v113];
      v115 = v106->fields._items;
      v116 = Method_System_Collections_Generic_List_int__Add__;
      ++v106->fields._version;
      if ( !v115 )
        goto LABEL_286;
      v117 = v106->fields._size;
      if ( (unsigned int)v117 >= LODWORD(v115->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v106,
          v114,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
      }
      else
      {
        v106->fields._size = v117 + 1;
        v115->m_Items[v117] = v114;
      }
      partyMemberItem = (System_String_o *)npcInfoDictionary;
      if ( !npcInfoDictionary )
        goto LABEL_286;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
              v114,
              (const MethodInfo_34BCF78 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
        goto LABEL_294;
      partyMemberItem = (System_String_o *)npcInfoDictionary;
      if ( !npcInfoDictionary )
        goto LABEL_286;
      v118 = System_Collections_Generic_Dictionary_int__object___get_Item(
               (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
               v114,
               (const MethodInfo_34BCCE4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
      if ( v118 )
      {
        questId = v85->fields.questId;
        questPhase = v85->fields.questPhase;
        v121 = (FollowerInfo_o *)v118;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0);
        LimitCount = FollowerInfo__getLimitCount(v121, 0, ReturnTypeByQuestId, 0);
        partyMemberItem = (System_String_o *)Master_object;
        if ( !Master_object )
          goto LABEL_286;
        partyMemberItem = (System_String_o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                               Master_object,
                                               &npcServantFollowerEntity,
                                               questId,
                                               questPhase,
                                               v114,
                                               0);
        if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
          goto LABEL_170;
        if ( !npcServantFollowerEntity )
          goto LABEL_286;
        partyMemberItem = (System_String_o *)NpcServantFollowerEntity__IsHideRarity(
                                               npcServantFollowerEntity->fields.flag,
                                               0);
        if ( !v109 )
          goto LABEL_286;
        v124 = v109->fields._items;
        v125 = Method_System_Collections_Generic_List_bool__Add__;
        ++v109->fields._version;
        if ( !v124 )
          goto LABEL_286;
        v126 = v109->fields._size;
        if ( (unsigned int)v126 >= LODWORD(v124->max_length) )
        {
          System_Collections_Generic_List_bool___AddWithResize(
            v109,
            (unsigned __int8)partyMemberItem & 1,
            *(const MethodInfo_38335BC **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
        }
        else
        {
          v109->fields._size = v126 + 1;
          v124->m_Items[v126] = (unsigned __int8)partyMemberItem & 1;
        }
        partyMemberItem = (System_String_o *)v227;
        if ( !npcServantFollowerEntity || !v227 )
          goto LABEL_286;
        partyMemberItem = (System_String_o *)NpcFollowerMaster__GetEntity_43141800(
                                               v227,
                                               questId,
                                               questPhase,
                                               npcServantFollowerEntity->fields.id,
                                               0);
        if ( partyMemberItem )
        {
          partyMemberItem = (System_String_o *)NpcFollowerEntity__GetImageSvtId(
                                                 (NpcFollowerEntity_o *)partyMemberItem,
                                                 0);
          v130 = (int)partyMemberItem;
        }
        else
        {
LABEL_170:
          v130 = 0;
        }
        v110 = v230;
        v85 = questRestrictionInfoa;
        if ( !v107 )
          goto LABEL_286;
      }
      else
      {
LABEL_294:
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4D2A55B )
        {
          sub_1C93AD4(&NetworkManager_TypeInfo);
          byte_4D2A55B = 1;
        }
        partyMemberItem = (System_String_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          partyMemberItem = (System_String_o *)NetworkManager_TypeInfo;
        }
        if ( !MasterData_object )
          goto LABEL_286;
        partyMemberItem = (System_String_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                               MasterData_object,
                                               *(_QWORD *)(*(_QWORD *)&partyMemberItem[7].fields + 64LL),
                                               v114,
                                               0);
        if ( !partyMemberItem )
          goto LABEL_286;
        if ( !v109 )
          goto LABEL_286;
        LimitCount = (int32_t)partyMemberItem[2].monitor;
        v127 = v109->fields._items;
        v128 = Method_System_Collections_Generic_List_bool__Add__;
        ++v109->fields._version;
        if ( !v127 )
          goto LABEL_286;
        v129 = v109->fields._size;
        if ( (unsigned int)v129 >= LODWORD(v127->max_length) )
        {
          System_Collections_Generic_List_bool___AddWithResize(
            v109,
            0,
            *(const MethodInfo_38335BC **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
          v130 = 0;
          if ( !v107 )
            goto LABEL_286;
        }
        else
        {
          v130 = 0;
          v109->fields._size = v129 + 1;
          v127->m_Items[v129] = 0;
          if ( !v107 )
            goto LABEL_286;
        }
      }
      v131 = v107->fields._items;
      v132 = Method_System_Collections_Generic_List_int__Add__;
      ++v107->fields._version;
      if ( !v131 )
        goto LABEL_286;
      v133 = v107->fields._size;
      if ( (unsigned int)v133 >= LODWORD(v131->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v107,
          LimitCount,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
      }
      else
      {
        v107->fields._size = v133 + 1;
        v131->m_Items[v133] = LimitCount;
      }
      if ( !v108 )
        goto LABEL_286;
      v134 = v108->fields._items;
      v135 = Method_System_Collections_Generic_List_int__Add__;
      ++v108->fields._version;
      if ( !v134 )
        goto LABEL_286;
      v136 = v108->fields._size;
      if ( (unsigned int)v136 >= LODWORD(v134->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v108,
          v130,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
      }
      else
      {
        v108->fields._size = v136 + 1;
        v134->m_Items[v136] = v130;
      }
      partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      if ( !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo);
        partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      }
      if ( ++v112 >= **(_DWORD **)&partyMemberItem[7].fields )
      {
        partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                               (BaseMonoBehaviour_o *)this,
                                               this->fields.servantIconsPrefab,
                                               this->fields.iconParent,
                                               0,
                                               0);
        if ( !partyMemberItem )
          goto LABEL_286;
        v137 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)partyMemberItem,
                                                     (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        v138 = System_Collections_Generic_List_int___ToArray(
                 v106,
                 (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
        v139 = System_Collections_Generic_List_int___ToArray(
                 v107,
                 (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                               v108,
                                               (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !v109 )
          goto LABEL_286;
        v140 = (System_Int32_array *)partyMemberItem;
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_bool___ToArray(
                                               v109,
                                               (const MethodInfo_38350A8 *)Method_System_Collections_Generic_List_bool__ToArray__);
        if ( !v137 )
          goto LABEL_286;
        v142 = v140;
        v85 = questRestrictionInfoa;
        RestrictionNotSatisfySlotIcons__SetServantIcons(
          v137,
          v138,
          v139,
          v142,
          (System_Boolean_array *)partyMemberItem,
          questRestrictionInfoa,
          v141);
        if ( !v105 )
          goto LABEL_286;
        iconsWidget = (Il2CppObject *)v137->fields.iconsWidget;
        v149 = v105->fields._items;
        v110 = v230;
        v150 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++v105->fields._version;
        if ( !v149 )
          goto LABEL_286;
        v151 = v105->fields._size;
        if ( (unsigned int)v151 >= LODWORD(v149->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v105,
            iconsWidget,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
        }
        else
        {
          v152 = &v149->obj.klass + v151;
          v105->fields._size = v151 + 1;
          v152[4] = (Il2CppClass *)iconsWidget;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)(v152 + 4),
            (int32_t)iconsWidget,
            v143,
            v144,
            v145,
            v146,
            v147,
            v148);
        }
        v112 = 0;
        v153 = v106->fields._version + 1;
        v106->fields._size = 0;
        v106->fields._version = v153;
        v154 = v107->fields._version + 1;
        v107->fields._size = 0;
        v107->fields._version = v154;
        v155 = v108->fields._version + 1;
        v108->fields._size = 0;
        v108->fields._version = v155;
        v156 = v109->fields._version + 1;
        v109->fields._size = 0;
        v109->fields._version = v156;
      }
      LODWORD(v111) = v110->max_length;
      ++v113;
    }
    while ( (__int64)v113 < (int)v111 );
    if ( v112 )
    {
      partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)this,
                                             this->fields.servantIconsPrefab,
                                             this->fields.iconParent,
                                             0,
                                             0);
      if ( partyMemberItem )
      {
        v157 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)partyMemberItem,
                                                     (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        v158 = System_Collections_Generic_List_int___ToArray(
                 v106,
                 (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
        v159 = System_Collections_Generic_List_int___ToArray(
                 v107,
                 (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                               v108,
                                               (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( v109 )
        {
          v160 = (System_Int32_array *)partyMemberItem;
          partyMemberItem = (System_String_o *)System_Collections_Generic_List_bool___ToArray(
                                                 v109,
                                                 (const MethodInfo_38350A8 *)Method_System_Collections_Generic_List_bool__ToArray__);
          if ( v157 )
          {
            RestrictionNotSatisfySlotIcons__SetServantIcons(
              v157,
              v158,
              v159,
              v160,
              (System_Boolean_array *)partyMemberItem,
              v85,
              v161);
            if ( v105 )
            {
              iconsWidget = (Il2CppObject *)v157->fields.iconsWidget;
              v168 = v105->fields._items;
              v169 = Method_System_Collections_Generic_List_UIWidget__Add__;
              ++v105->fields._version;
              if ( v168 )
              {
                v170 = v105->fields._size;
                if ( (unsigned int)v170 >= LODWORD(v168->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v105,
                    iconsWidget,
                    *(const MethodInfo_387999C **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
                }
                else
                {
                  v171 = &v168->obj.klass + v170;
                  v105->fields._size = v170 + 1;
                  v171[4] = (Il2CppClass *)iconsWidget;
                  sub_1C93A78(
                    (GrandQuestFolderBoardItem_o *)(v171 + 4),
                    (int32_t)iconsWidget,
                    v162,
                    v163,
                    v164,
                    v165,
                    v166,
                    v167);
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
  if ( !v105 )
    goto LABEL_286;
LABEL_235:
  v206 = this->fields.switchIcons;
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                         v105,
                                         (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !v206 )
    goto LABEL_286;
  v207 = (UIWidget_array *)partyMemberItem;
  v208 = v206;
LABEL_242:
  SwitchUIWidgetComponent__Set(v208, v207, 0, 0);
  partyMemberItem = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !partyMemberItem )
    goto LABEL_286;
  SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)partyMemberItem, 0);
LABEL_244:
  partyMemberItem = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !partyMemberItem )
    goto LABEL_286;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyMemberItem, 1, 0);
}


void RestrictionNotSatisfySlot___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2C5E0 & 1) == 0 )
  {
    sub_1C93AD4(&RestrictionNotSatisfySlot___c_TypeInfo);
    byte_4D2C5E0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(RestrictionNotSatisfySlot___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RestrictionNotSatisfySlot___c_TypeInfo->static_fields->__9 = (struct RestrictionNotSatisfySlot___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)RestrictionNotSatisfySlot___c_TypeInfo->static_fields,
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
    sub_1C93D2C(this, 0);
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
  unsigned int v7; // w8

  v4 = this;
  if ( (byte_4D2C5E1 & 1) == 0 )
  {
    this = (RestrictionNotSatisfySlot___c__DisplayClass14_0_o *)sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4D2C5E1 = 1;
  }
  if ( !entity )
    goto LABEL_13;
  memberItem = v4->fields.memberItem;
  if ( entity->fields.type != 9 )
  {
    if ( memberItem )
      goto LABEL_9;
LABEL_13:
    sub_1C93D2C(this, entity);
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
         (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___)
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