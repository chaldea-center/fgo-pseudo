void __fastcall RestrictionNotSatisfySlot___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B40820 & 1) == 0 )
  {
    sub_1BDB878(&RestrictionNotSatisfySlot_TypeInfo, v1);
    byte_4B40820 = 1;
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
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  System_String_o *v13; // x19
  int32_t v14; // w1
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  int32_t v20; // w1

  if ( (byte_4B4081E & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, message);
    sub_1BDB878(&string___TypeInfo, v4);
    sub_1BDB878(&StringLiteral_43/*"\n"*/, v5);
    sub_1BDB878(&StringLiteral_15801/*"[-]"*/, v6);
    sub_1BDB878(&StringLiteral_11086/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v7);
    sub_1BDB878(&StringLiteral_15905/*"[FFFF00]"*/, v8);
    byte_4B4081E = 1;
  }
  v9 = (System_String_o *)sub_1BDB920(string___TypeInfo, 5LL);
  if ( !v9 )
    sub_1BDBAD4(0LL, v10);
  v13 = v9;
  if ( !LODWORD(v9[1].klass) )
    goto LABEL_12;
  v14 = StringLiteral_15905/*"[FFFF00]"*/;
  v9[1].monitor = (void *)StringLiteral_15905/*"[FFFF00]"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v9[1].monitor, v14, v11, v12);
  if ( LODWORD(v13[1].klass) <= 1 )
    goto LABEL_12;
  v13[1].fields = (System_String_Fields)message;
  sub_1BDB81C((CGThumbnailListItem_o *)&v13[1].fields, (int32_t)message, v11, v15);
  if ( LODWORD(v13[1].klass) <= 2 )
    goto LABEL_12;
  v17 = StringLiteral_43/*"\n"*/;
  v13[2].klass = (System_String_c *)StringLiteral_43/*"\n"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v13[2], v17, v11, v16);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11086/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
  if ( LODWORD(v13[1].klass) <= 3
    || (v13[2].monitor = v9,
        sub_1BDB81C((CGThumbnailListItem_o *)&v13[2].monitor, (int32_t)v9, v11, v18),
        LODWORD(v13[1].klass) <= 4) )
  {
LABEL_12:
    sub_1BDBADC(v9, v10, v11);
  }
  v20 = (int)StringLiteral_15801/*"[-]"*/;
  v13[2].fields = (System_String_Fields)StringLiteral_15801/*"[-]"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v13[2].fields, v20, v11, v19);
  return System_String__Concat_62612776((System_String_array *)v13, 0LL);
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
  __int64 v20; // x2
  __int64 v21; // x8
  unsigned __int64 v22; // x27
  int32_t v23; // w26
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  struct System_Int32_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8
  System_Collections_Generic_List_int__o *v31; // x0
  System_Int32_array *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Int32_array *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  ServantClassEntity_o *v39; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B4081D & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ServantClassMaster___, servantIds);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1BDB878(&DataManager_TypeInfo, v8);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v13);
    byte_4B4081D = 1;
  }
  v39 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantMaster___);
  v15 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v16 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  v17 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individuality )
    goto LABEL_29;
  v21 = *(_QWORD *)&individuality->max_length;
  if ( (int)v21 >= 1 )
  {
    v22 = 0LL;
    do
    {
      if ( v22 >= (unsigned int)v21 )
        sub_1BDBADC(EntityByIndividuality, iconImageId, v20);
      if ( !Master_object )
        goto LABEL_29;
      v23 = individuality->m_Items[v22 + 1];
      EntityByIndividuality = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                &entity,
                                v23,
                                (const MethodInfo_32E1E88 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( EntityByIndividuality )
      {
        if ( !v16 )
          goto LABEL_29;
        items = v16->fields._items;
        v25 = Method_System_Collections_Generic_List_int__Add__;
        ++v16->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v30 = v25[4];
          v31 = v16;
          LODWORD(iconImageId) = v23;
LABEL_24:
          System_Collections_Generic_List_int___AddWithResize(
            v31,
            iconImageId,
            *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v30 + 192) + 112LL));
          goto LABEL_25;
        }
        v16->fields._size = size + 1;
        items->m_Items[size + 1] = v23;
      }
      else
      {
        if ( !v15 )
          goto LABEL_29;
        EntityByIndividuality = ServantClassMaster__TryGetEntityByIndividuality(
                                  (ServantClassMaster_o *)v15,
                                  &v39,
                                  v23,
                                  0LL);
        if ( !EntityByIndividuality )
          goto LABEL_25;
        if ( !v39 )
          goto LABEL_29;
        if ( !v17 )
          goto LABEL_29;
        iconImageId = (unsigned int)v39->fields.iconImageId;
        v27 = v17->fields._items;
        v28 = Method_System_Collections_Generic_List_int__Add__;
        ++v17->fields._version;
        if ( !v27 )
          goto LABEL_29;
        v29 = v17->fields._size;
        if ( (unsigned int)v29 >= v27->max_length )
        {
          v30 = v28[4];
          v31 = v17;
          goto LABEL_24;
        }
        v17->fields._size = v29 + 1;
        v27->m_Items[v29 + 1] = iconImageId;
      }
LABEL_25:
      LODWORD(v21) = individuality->max_length;
    }
    while ( (__int64)++v22 < (int)v21 );
  }
  if ( !v16
    || (v32 = System_Collections_Generic_List_int___ToArray(
                v16,
                (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__),
        *servantIds = v32,
        sub_1BDB81C((CGThumbnailListItem_o *)servantIds, (int32_t)v32, v33, v34),
        !v17) )
  {
LABEL_29:
    sub_1BDBAD4(EntityByIndividuality, iconImageId);
  }
  v35 = System_Collections_Generic_List_int___ToArray(
          v17,
          (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
  *classImageIds = v35;
  sub_1BDB81C((CGThumbnailListItem_o *)classImageIds, (int32_t)v35, v36, v37);
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

  if ( (byte_4B4081F & 1) == 0 )
  {
    sub_1BDB878(&System_Text_RegularExpressions_Regex_TypeInfo, message);
    sub_1BDB878(&StringLiteral_15934/*"[[]-[\\]]"*/, v4);
    sub_1BDB878(&StringLiteral_1/*""*/, v5);
    sub_1BDB878(&StringLiteral_15935/*"[[][0-9A-F]{6}[\\]]"*/, v6);
    byte_4B4081F = 1;
  }
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  v7 = System_Text_RegularExpressions_Regex__Replace(
         message,
         (System_String_o *)StringLiteral_15935/*"[[][0-9A-F]{6}[\\]]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  return System_Text_RegularExpressions_Regex__Replace(
           v7,
           (System_String_o *)StringLiteral_15934/*"[[]-[\\]]"*/,
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
  Il2CppObject *iconsWidget; // x1
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  PartyOrganizationListViewItem_o **v71; // x21
  UISprite_o *numberSprite; // x20
  System_String_o *v73; // x0
  long double inited; // q0
  _QWORD *v75; // x20
  __int64 v76; // x8
  __int64 v77; // x0
  __int64 v78; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x22
  System_Collections_Generic_List_object__o *v80; // x23
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x20
  System_Func_object__bool__o *v82; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  RestrictionNotSatisfySlot___c_c *v84; // x0
  System_Func_object__bool__o *_9__14_1; // x20
  Il2CppObject *v86; // x24
  struct RestrictionNotSatisfySlot___c_StaticFields *static_fields; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x0
  const MethodInfo *v91; // x2
  System_String_o *v92; // x20
  System_String_c *klass; // x8
  unsigned __int64 v94; // x19
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  struct System_Object_array *items; // x8
  _QWORD *v98; // x9
  __int64 size; // x10
  System_String_o *v100; // x1
  Il2CppClass **v101; // x0
  System_Collections_Generic_List_object__o *v102; // x24
  __int64 v103; // x1
  UnityEngine_GameObject_o *restrictionLabelRoot; // x0
  Il2CppObject *current; // x23
  Il2CppObject *restrictionLabel; // x20
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *v108; // x0
  __int64 v109; // x1
  Il2CppObject *v110; // x20
  __int64 v111; // x0
  __int64 v112; // x1
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  struct System_Object_array *v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  Il2CppClass **v118; // x0
  SwitchUIWidgetComponent_o *switchMessage; // x20
  long double v120; // q0
  _QWORD *v121; // x20
  __int64 v122; // x8
  __int64 v123; // x0
  __int64 v124; // x0
  _QWORD *v125; // x20
  __int64 v126; // x8
  __int64 v127; // x0
  QuestRestrictionInfo_o *v128; // x29
  __int64 v129; // x0
  System_Collections_Generic_Dictionary_int__object__o *v130; // x20
  char v131; // w20
  const MethodInfo *v132; // x4
  bool IsSelectableNormalSupport; // w0
  QuestPhaseEntity_o *v134; // x8
  System_Collections_Generic_IEnumerable_T__o *v135; // x21
  System_Collections_Generic_List_int__o *v136; // x20
  struct System_Int32_array *v137; // x8
  _QWORD *v138; // x9
  __int64 v139; // x10
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_TSource__c *v141; // x8
  System_Int32_array *v142; // x3
  System_Collections_Generic_List_int__o *v143; // x20
  PartyOrganizationListViewItem_o *v144; // x8
  System_Collections_Generic_List_object__o *v145; // x21
  System_Collections_Generic_List_T__o *v146; // x22
  int32_t v147; // w23
  System_Collections_Generic_List_object__o *v148; // x21
  System_Collections_Generic_List_int__o *v149; // x22
  System_Collections_Generic_List_int__o *v150; // x24
  System_Collections_Generic_List_int__o *v151; // x25
  System_Collections_Generic_List_bool__o *v152; // x26
  System_Int32_array *v153; // x27
  __int64 v154; // x8
  int v155; // w19
  unsigned __int64 v156; // x23
  int32_t v157; // w20
  struct System_Int32_array *v158; // x8
  _QWORD *v159; // x9
  __int64 v160; // x10
  Il2CppObject *v161; // x0
  int32_t questId; // w27
  int32_t questPhase; // w29
  FollowerInfo_o *v164; // x28
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w28
  struct System_Boolean_array *v167; // x8
  _QWORD *v168; // x9
  __int64 v169; // x10
  struct System_Boolean_array *v170; // x8
  _QWORD *v171; // x9
  __int64 v172; // x10
  int32_t v173; // w20
  struct System_Int32_array *v174; // x8
  _QWORD *v175; // x9
  __int64 v176; // x10
  struct System_Int32_array *v177; // x8
  _QWORD *v178; // x9
  __int64 v179; // x10
  RestrictionNotSatisfySlotIcons_o *v180; // x20
  System_Int32_array *v181; // x27
  System_Int32_array *v182; // x28
  System_Int32_array *v183; // x29
  const MethodInfo *v184; // x6
  System_Int32_array *v185; // x3
  int32_t v186; // w2
  const MethodInfo *v187; // x3
  struct System_Object_array *v188; // x8
  _QWORD *v189; // x9
  __int64 v190; // x10
  Il2CppClass **v191; // x0
  int v192; // w8
  int v193; // w8
  int v194; // w8
  int v195; // w8
  RestrictionNotSatisfySlotIcons_o *v196; // x20
  System_Int32_array *v197; // x22
  System_Int32_array *v198; // x23
  System_Int32_array *v199; // x24
  const MethodInfo *v200; // x6
  int32_t v201; // w2
  const MethodInfo *v202; // x3
  struct System_Object_array *v203; // x8
  _QWORD *v204; // x9
  __int64 v205; // x10
  Il2CppClass **v206; // x0
  System_Collections_Generic_List_object__o *v207; // x20
  System_Collections_Generic_List_int__o *v208; // x21
  System_Int32_array *v209; // x19
  __int64 v210; // x8
  int v211; // w22
  unsigned __int64 v212; // x23
  struct System_Int32_array *v213; // x8
  _QWORD *v214; // x9
  __int64 v215; // x10
  RestrictionNotSatisfySlotIcons_o *Component_object; // x22
  const MethodInfo *v217; // x2
  int32_t v218; // w2
  const MethodInfo *v219; // x3
  struct System_Object_array *v220; // x8
  _QWORD *v221; // x9
  __int64 v222; // x10
  Il2CppClass **v223; // x0
  int v224; // w8
  RestrictionNotSatisfySlotIcons_o *v225; // x22
  const MethodInfo *v226; // x2
  int32_t v227; // w2
  const MethodInfo *v228; // x3
  struct System_Object_array *v229; // x8
  _QWORD *v230; // x9
  __int64 v231; // x10
  Il2CppClass **v232; // x0
  struct SwitchUIWidgetComponent_o *v233; // x20
  UIWidget_array *v234; // x1
  SwitchUIWidgetComponent_o *v235; // x0
  struct SwitchUIWidgetComponent_o *switchIcons; // x21
  PartyOrganizationListViewItem_o *v237; // x8
  int32_t v238; // w2
  const MethodInfo *v239; // x3
  struct System_Object_array *v240; // x8
  _QWORD *v241; // x9
  __int64 v242; // x10
  System_String_o *v243; // x1
  Il2CppClass **v244; // x0
  int v245; // w19
  int32_t v246; // w20
  Il2CppObject *Item; // x0
  const MethodInfo *v248; // x2
  Il2CppObject *fixed; // x0
  NpcFollowerMaster_o *v250; // [xsp+48h] [xbp-108h]
  NpcServantFollowerMaster_o *Master_object; // [xsp+50h] [xbp-100h]
  UserServantCollectionMaster_o *MasterData_object; // [xsp+58h] [xbp-F8h]
  System_Int32_array *v253; // [xsp+60h] [xbp-F0h]
  QuestRestrictionInfo_o *questRestrictionInfoa; // [xsp+68h] [xbp-E8h]
  int32_t *v255; // [xsp+70h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v257; // [xsp+80h] [xbp-D0h] BYREF
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+98h] [xbp-B8h] BYREF
  QuestPhaseEntity_o *v259; // [xsp+A0h] [xbp-B0h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+A8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v261; // [xsp+B0h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+D0h] [xbp-80h] BYREF
  System_Int32_array *classImageIds; // [xsp+D8h] [xbp-78h] BYREF
  System_Int32_array *servantIds; // [xsp+E0h] [xbp-70h] BYREF
  int32_t pos; // [xsp+ECh] [xbp-64h] BYREF

  pos = number;
  if ( (byte_4B4081C & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_Empty_int___, *(_QWORD *)&number);
    sub_1BDB878(&Method_System_Array_Empty_RestrictionEntity___, v7);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8);
    sub_1BDB878(&Method_DataManager_GetMaster_NpcFollowerMaster___, v9);
    sub_1BDB878(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v10);
    sub_1BDB878(&Method_DataManager_GetMaster_QuestPhaseMaster___, v11);
    sub_1BDB878(&DataManager_TypeInfo, v12);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v15);
    sub_1BDB878(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v16);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___, v17);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v18);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v19);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v20);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v21);
    sub_1BDB878(&System_Func_RestrictionEntity__bool__TypeInfo, v22);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___, v23);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__AddRange__, v24);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v25);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIWidget__Add__, v26);
    sub_1BDB878(&Method_System_Collections_Generic_List_bool__Add__, v27);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Add__, v28);
    sub_1BDB878(&Method_System_Collections_Generic_List_bool__Clear__, v29);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Clear__, v30);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__GetEnumerator__, v31);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v32);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v33);
    sub_1BDB878(&Method_System_Collections_Generic_List_bool__ToArray__, v34);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v35);
    sub_1BDB878(&Method_System_Collections_Generic_List_bool___ctor__, v36);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIWidget___ctor__, v37);
    sub_1BDB878(&Method_System_Collections_Generic_List_string___ctor__, v38);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor___77024896, v39);
    sub_1BDB878(&Method_System_Collections_Generic_List_int____get_Count__, v40);
    sub_1BDB878(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v41);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Count__, v42);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Item__, v43);
    sub_1BDB878(&Method_System_Collections_Generic_List_int____get_Item__, v44);
    sub_1BDB878(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v45);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__set_Item__, v46);
    sub_1BDB878(&System_Collections_Generic_List_bool__TypeInfo, v47);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v48);
    sub_1BDB878(&System_Collections_Generic_List_string__TypeInfo, v49);
    sub_1BDB878(&System_Collections_Generic_List_UIWidget__TypeInfo, v50);
    sub_1BDB878(&LocalizationManager_TypeInfo, v51);
    sub_1BDB878(&NetworkManager_TypeInfo, v52);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_UILabel____77160128, v53);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v54);
    sub_1BDB878(&RestrictionNotSatisfySlot_TypeInfo, v55);
    sub_1BDB878(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v56);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v57);
    sub_1BDB878(&Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__, v58);
    sub_1BDB878(&Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__, v59);
    sub_1BDB878(&RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo, v60);
    sub_1BDB878(&RestrictionNotSatisfySlot___c_TypeInfo, v61);
    sub_1BDB878(&StringLiteral_43/*"\n"*/, v62);
    sub_1BDB878(&StringLiteral_21546/*"member_txt_"*/, v63);
    sub_1BDB878(&StringLiteral_11083/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/, v64);
    sub_1BDB878(&StringLiteral_1/*""*/, v65);
    byte_4B4081C = 1;
  }
  classImageIds = 0LL;
  servantIds = 0LL;
  npcInfoDictionary = 0LL;
  memset(&v261, 0, sizeof(v261));
  v259 = 0LL;
  entity = 0LL;
  npcServantFollowerEntity = 0LL;
  v66 = sub_1BDBAC4(RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v66, 0LL);
  if ( !v66 )
    goto LABEL_286;
  *(_QWORD *)(v66 + 16) = memberItem;
  v71 = (PartyOrganizationListViewItem_o **)(v66 + 16);
  sub_1BDB81C((CGThumbnailListItem_o *)(v66 + 16), (int32_t)memberItem, v69, v70);
  numberSprite = this->fields.numberSprite;
  v73 = System_Int32__ToString((int32_t)&pos, 0LL);
  partyMemberItem = System_String__Concat_62572260((System_String_o *)StringLiteral_21546/*"member_txt_"*/, v73, 0LL);
  if ( !numberSprite )
    goto LABEL_286;
  UISprite__set_spriteName(numberSprite, partyMemberItem, 0LL);
  partyMemberItem = (System_String_o *)this->fields.partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_286;
  PartyOrganizationConfirmItemDraw__SetItem(
    (PartyOrganizationConfirmItemDraw_o *)partyMemberItem,
    *v71,
    3,
    0,
    0,
    0,
    0,
    0LL);
  v75 = Method_System_Array_Empty_RestrictionEntity___;
  v76 = *((_QWORD *)Method_System_Array_Empty_RestrictionEntity___ + 7);
  if ( !v76 )
  {
    sub_1C2BF64(Method_System_Array_Empty_RestrictionEntity___);
    v76 = v75[7];
  }
  v77 = *(_QWORD *)(v76 + 16);
  if ( (*(_BYTE *)(v77 + 309) & 1) == 0 )
    v77 = sub_1C2BF08(inited);
  if ( !*(_DWORD *)(v77 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v77);
  v78 = *(_QWORD *)(v75[7] + 16LL);
  if ( (*(_BYTE *)(v78 + 309) & 1) == 0 )
    v78 = sub_1C2BF08(inited);
  v79 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v78 + 184);
  v80 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v80,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !questRestrictionInfo )
    goto LABEL_286;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
  {
    restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
    v82 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v82,
      (Il2CppObject *)v66,
      Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__,
      0LL);
    v83 = System_Linq_Enumerable__Where_object_(
            restrictionEntityList,
            (System_Func_TSource__bool__o *)v82,
            (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    v79 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 v83,
                                                                 (const MethodInfo_30707A8 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    if ( questRestrictionInfo->fields.isUniqueServant && questRestrictionInfo->fields.isUniqueIndividuality )
    {
      v84 = RestrictionNotSatisfySlot___c_TypeInfo;
      if ( !RestrictionNotSatisfySlot___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot___c_TypeInfo);
        v84 = RestrictionNotSatisfySlot___c_TypeInfo;
      }
      _9__14_1 = (System_Func_object__bool__o *)v84->static_fields->__9__14_1;
      if ( !_9__14_1 )
      {
        if ( !v84->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v84);
          v84 = RestrictionNotSatisfySlot___c_TypeInfo;
        }
        v86 = (Il2CppObject *)v84->static_fields->__9;
        _9__14_1 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__14_1, v86, Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__, 0LL);
        static_fields = RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
        static_fields->__9__14_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__14_1;
        sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__14_1, (int32_t)_9__14_1, v88, v89);
      }
      v90 = System_Linq_Enumerable__Where_object_(
              v79,
              (System_Func_TSource__bool__o *)_9__14_1,
              (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v79 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                   v90,
                                                                   (const MethodInfo_30707A8 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    }
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetMessages_42353520(
                                           questRestrictionInfo,
                                           (RestrictionEntity_array *)v79,
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
      goto LABEL_286;
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
  v92 = partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_286;
  klass = partyMemberItem[1].klass;
  if ( klass && (int)klass >= 1 )
  {
    v94 = 0LL;
    while ( v94 < (unsigned int)klass )
    {
      partyMemberItem = RestrictionNotSatisfySlot__RemoveColorCode(
                          (RestrictionNotSatisfySlot_o *)partyMemberItem,
                          *((System_String_o **)&v92[1].monitor + v94),
                          v91);
      if ( !partyMemberItem )
        goto LABEL_286;
      partyMemberItem = System_String__Replace_62618808(
                          partyMemberItem,
                          (System_String_o *)StringLiteral_43/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
      if ( !v80 )
        goto LABEL_286;
      items = v80->fields._items;
      v98 = Method_System_Collections_Generic_List_string__Add__;
      ++v80->fields._version;
      if ( !items )
        goto LABEL_286;
      size = v80->fields._size;
      v100 = partyMemberItem;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v80,
          (Il2CppObject *)partyMemberItem,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
      }
      else
      {
        v101 = &items->obj.klass + size;
        v80->fields._size = size + 1;
        v101[4] = (Il2CppClass *)v100;
        sub_1BDB81C((CGThumbnailListItem_o *)(v101 + 4), (int32_t)v100, v95, v96);
      }
      LODWORD(klass) = v92[1].klass;
      if ( (__int64)++v94 >= (int)klass )
        goto LABEL_40;
    }
LABEL_287:
    sub_1BDBADC(partyMemberItem, iconsWidget, v91);
  }
LABEL_40:
  partyMemberItem = (System_String_o *)this->fields.notSatisfyWidget;
  if ( !partyMemberItem )
    goto LABEL_286;
  partyMemberItem = (System_String_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)partyMemberItem,
                                         0LL);
  if ( !partyMemberItem )
    goto LABEL_286;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyMemberItem, 0, 0LL);
  partyMemberItem = (System_String_o *)*v71;
  if ( !*v71 )
    goto LABEL_286;
  if ( !PartyOrganizationListViewItem__get_IsSupportOnly((PartyOrganizationListViewItem_o *)partyMemberItem, 0LL) )
  {
    partyMemberItem = (System_String_o *)*v71;
    if ( !*v71 )
      goto LABEL_286;
    if ( !PartyOrganizationListViewItem__get_IsFixedMyServantSingle(
            (PartyOrganizationListViewItem_o *)partyMemberItem,
            0LL) )
    {
      partyMemberItem = (System_String_o *)*v71;
      if ( !*v71 )
        goto LABEL_286;
      if ( !LOBYTE(partyMemberItem[10].klass) && !BYTE1(partyMemberItem[10].klass) )
      {
        if ( PartyOrganizationListViewItem__get_IsQuestRestriction(
               (PartyOrganizationListViewItem_o *)partyMemberItem,
               0LL) )
        {
          goto LABEL_261;
        }
        partyMemberItem = (System_String_o *)*v71;
        if ( !*v71 )
          goto LABEL_286;
        partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                               (PartyOrganizationListViewItem_o *)partyMemberItem,
                                               0LL);
        if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
        {
          if ( !*v71 )
            goto LABEL_286;
          partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsSetRequired(
                                                 questRestrictionInfo,
                                                 pos,
                                                 (*v71)->fields._InitPos_k__BackingField,
                                                 0LL);
          if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
            goto LABEL_261;
        }
        v237 = *v71;
        if ( !*v71 )
          goto LABEL_286;
        if ( v237->fields.isUniqueSvtRestriction
          || v237->fields.isUniqueIndividualityRestriction
          || (v237->fields.fatigureTime & 0x8000000000000000LL) == 0
          || v237->fields._IsAllOutBattle_k__BackingField
          || v237->fields._IsDataLost_k__BackingField
          || v237->fields._TimesToRestart_k__BackingField > 0
          || v237->fields._IsNotSupportSingle_k__BackingField
          || v237->fields.isFixedServantPositionRestriction
          || v237->fields.isFixedSupportPositionRestriction )
        {
LABEL_261:
          partyMemberItem = (System_String_o *)this->fields.notSatisfyWidget;
          if ( !partyMemberItem )
            goto LABEL_286;
          partyMemberItem = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)partyMemberItem,
                                                 0LL);
          if ( !partyMemberItem )
            goto LABEL_286;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyMemberItem, 1, 0LL);
          partyMemberItem = (System_String_o *)*v71;
          if ( !*v71 )
            goto LABEL_286;
          partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                                 (PartyOrganizationListViewItem_o *)partyMemberItem,
                                                 0LL);
          if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
            goto LABEL_276;
          if ( !*v71 )
            goto LABEL_286;
          if ( QuestRestrictionInfo__IsSetRequired(
                 questRestrictionInfo,
                 pos,
                 (*v71)->fields._InitPos_k__BackingField,
                 0LL) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            partyMemberItem = LocalizationManager__Get((System_String_o *)StringLiteral_11083/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/, 0LL);
            if ( !v80 )
              goto LABEL_286;
            v240 = v80->fields._items;
            v241 = Method_System_Collections_Generic_List_string__Add__;
            ++v80->fields._version;
            if ( !v240 )
              goto LABEL_286;
            v242 = v80->fields._size;
            v243 = partyMemberItem;
            if ( (unsigned int)v242 >= v240->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v80,
                (Il2CppObject *)partyMemberItem,
                *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v241[4] + 192LL) + 112LL));
            }
            else
            {
              v244 = &v240->obj.klass + v242;
              v80->fields._size = v242 + 1;
              v244[4] = (Il2CppClass *)v243;
              sub_1BDB81C((CGThumbnailListItem_o *)(v244 + 4), (int32_t)v243, v238, v239);
            }
            v245 = 1;
          }
          else
          {
LABEL_276:
            v245 = 0;
          }
          partyMemberItem = (System_String_o *)*v71;
          if ( !*v71 )
            goto LABEL_286;
          partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsQuestRestriction(
                                                 (PartyOrganizationListViewItem_o *)partyMemberItem,
                                                 0LL);
          if ( v245 | (unsigned __int8)partyMemberItem & 1 )
          {
            if ( !v80 )
              goto LABEL_286;
            if ( v80->fields._size >= 1 )
            {
              v246 = 0;
              do
              {
                Item = System_Collections_Generic_List_object___get_Item(
                         v80,
                         v246,
                         (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_string__get_Item__);
                fixed = (Il2CppObject *)RestrictionNotSatisfySlot__AddColorCodeAndFixMessage(
                                          (RestrictionNotSatisfySlot_o *)Item,
                                          (System_String_o *)Item,
                                          v248);
                System_Collections_Generic_List_object___set_Item(
                  v80,
                  v246++,
                  fixed,
                  (const MethodInfo_36D5B48 *)Method_System_Collections_Generic_List_string__set_Item__);
              }
              while ( v246 < v80->fields._size );
            }
          }
        }
      }
    }
  }
  questRestrictionInfoa = questRestrictionInfo;
  v102 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v102,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  if ( !v80 )
    goto LABEL_286;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v257,
    v80,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v261 = v257;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v261,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    restrictionLabelRoot = this->fields.restrictionLabelRoot;
    if ( !restrictionLabelRoot )
      sub_1BDBAD4(0LL, v103);
    current = v261.fields._current;
    restrictionLabel = (Il2CppObject *)this->fields.restrictionLabel;
    transform = UnityEngine_GameObject__get_transform(restrictionLabelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v108 = UnityEngine_Object__Instantiate_object__51108816(
             restrictionLabel,
             transform,
             (const MethodInfo_30BDBD0 *)Method_UnityEngine_Object_Instantiate_UILabel____77160128);
    v110 = v108;
    if ( !v108 )
      sub_1BDBAD4(0LL, v109);
    UILabel__set_text((UILabel_o *)v108, (System_String_o *)current, 0LL);
    if ( !v102 )
      sub_1BDBAD4(v111, v112);
    v115 = v102->fields._items;
    v116 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++v102->fields._version;
    if ( !v115 )
      sub_1BDBAD4(v111, v112);
    v117 = v102->fields._size;
    if ( (unsigned int)v117 >= v115->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v102,
        v110,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
    }
    else
    {
      v118 = &v115->obj.klass + v117;
      v102->fields._size = v117 + 1;
      v118[4] = (Il2CppClass *)v110;
      sub_1BDB81C((CGThumbnailListItem_o *)(v118 + 4), (int32_t)v110, v113, v114);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v261,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v102 )
    goto LABEL_286;
  switchMessage = this->fields.switchMessage;
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                         v102,
                                         (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !switchMessage )
    goto LABEL_286;
  SwitchUIWidgetComponent__Set(switchMessage, (UIWidget_array *)partyMemberItem, 0, 0LL);
  v121 = Method_System_Array_Empty_int___;
  v122 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v122 )
  {
    sub_1C2BF64(Method_System_Array_Empty_int___);
    v122 = v121[7];
  }
  v123 = *(_QWORD *)(v122 + 16);
  if ( (*(_BYTE *)(v123 + 309) & 1) == 0 )
    v123 = sub_1C2BF08(v120);
  if ( !*(_DWORD *)(v123 + 224) )
    v120 = j_il2cpp_runtime_class_init_0(v123);
  v124 = *(_QWORD *)(v121[7] + 16LL);
  if ( (*(_BYTE *)(v124 + 309) & 1) == 0 )
    v124 = sub_1C2BF08(v120);
  v125 = Method_System_Array_Empty_int___;
  servantIds = **(System_Int32_array ***)(v124 + 184);
  v126 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v126 )
  {
    sub_1C2BF64(Method_System_Array_Empty_int___);
    v126 = v125[7];
  }
  v127 = *(_QWORD *)(v126 + 16);
  v128 = questRestrictionInfo;
  if ( (*(_BYTE *)(v127 + 309) & 1) == 0 )
    v127 = sub_1C2BF08(v120);
  if ( !*(_DWORD *)(v127 + 224) )
    v120 = j_il2cpp_runtime_class_init_0(v127);
  v129 = *(_QWORD *)(v125[7] + 16LL);
  if ( (*(_BYTE *)(v129 + 309) & 1) == 0 )
    v129 = sub_1C2BF08(v120);
  classImageIds = **(System_Int32_array ***)(v129 + 184);
  v130 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v130,
    (const MethodInfo_333A94C *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v130;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( !*v71 )
    goto LABEL_286;
  v131 = (char)partyMemberItem;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_42377380(
                                         questRestrictionInfo,
                                         (*v71)->fields._InitPos_k__BackingField,
                                         0LL);
  if ( (v131 & 1) == 0 )
  {
    if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
    {
      if ( !*v71 )
        goto LABEL_286;
      servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                     questRestrictionInfo,
                     &npcInfoDictionary,
                     (*v71)->fields._InitPos_k__BackingField,
                     0,
                     0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      partyMemberItem = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !partyMemberItem )
        goto LABEL_286;
      partyMemberItem = (System_String_o *)QuestPhaseMaster__TryGetEntity(
                                             (QuestPhaseMaster_o *)partyMemberItem,
                                             &v259,
                                             questRestrictionInfo->fields.questId,
                                             questRestrictionInfo->fields.questPhase,
                                             0LL);
      if ( !servantIds )
        goto LABEL_286;
      if ( !*(_QWORD *)&servantIds->max_length )
        goto LABEL_125;
      if ( !*v71 )
        goto LABEL_286;
      IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                    questRestrictionInfo,
                                    (*v71)->fields._InitPos_k__BackingField,
                                    0LL);
      v134 = v259;
      if ( !v259 )
        goto LABEL_125;
      goto LABEL_100;
    }
    v143 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v143,
      (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !*v71 )
      goto LABEL_286;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetNeedIndividualityList(
                                           questRestrictionInfo,
                                           (*v71)->fields._InitPos_k__BackingField,
                                           0LL);
    v144 = *v71;
    if ( !*v71 )
      goto LABEL_286;
    v145 = (System_Collections_Generic_List_object__o *)partyMemberItem;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetRangeTypeList(
                                           questRestrictionInfo,
                                           v144->fields._InitPos_k__BackingField,
                                           0LL);
    if ( !v145 )
      goto LABEL_286;
    if ( v145->fields._size >= 1 )
    {
      v146 = (System_Collections_Generic_List_T__o *)partyMemberItem;
      v147 = 0;
      while ( v146 )
      {
        if ( v146->fields._size > v147 )
        {
          partyMemberItem = (System_String_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                 v146,
                                                 v147,
                                                 (const MethodInfo_36BB2DC *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          if ( (_DWORD)partyMemberItem == 1 )
          {
            partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                                   v145,
                                                   v147,
                                                   (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_int____get_Item__);
            if ( !v143 )
              goto LABEL_286;
            System_Collections_Generic_List_int___AddRange(
              v143,
              (System_Collections_Generic_IEnumerable_T__o *)partyMemberItem,
              (const MethodInfo_36B8FAC *)Method_System_Collections_Generic_List_int__AddRange__);
          }
        }
        if ( ++v147 >= v145->fields._size )
          goto LABEL_122;
      }
      goto LABEL_286;
    }
LABEL_122:
    if ( !v143 )
      goto LABEL_286;
    partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                           v143,
                                           (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
    v142 = (System_Int32_array *)partyMemberItem;
LABEL_124:
    RestrictionNotSatisfySlot__GetIconIdFromIndividuality(
      (RestrictionNotSatisfySlot_o *)partyMemberItem,
      &servantIds,
      &classImageIds,
      v142,
      v132);
    goto LABEL_125;
  }
  if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
  {
    if ( !v79 )
      goto LABEL_286;
    monitor = v79[1].monitor;
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
    v141 = v79[2].klass;
    if ( !v141 )
      goto LABEL_286;
    v142 = *(System_Int32_array **)&v141->_1.byval_arg.bits;
    goto LABEL_124;
  }
  if ( !*v71 )
    goto LABEL_286;
  servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                 questRestrictionInfo,
                 &npcInfoDictionary,
                 (*v71)->fields._InitPos_k__BackingField,
                 1,
                 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  partyMemberItem = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !partyMemberItem )
    goto LABEL_286;
  partyMemberItem = (System_String_o *)QuestPhaseMaster__TryGetEntity(
                                         (QuestPhaseMaster_o *)partyMemberItem,
                                         &entity,
                                         questRestrictionInfo->fields.questId,
                                         questRestrictionInfo->fields.questPhase,
                                         0LL);
  if ( !servantIds )
    goto LABEL_286;
  if ( !*(_QWORD *)&servantIds->max_length )
    goto LABEL_125;
  if ( !*v71 )
    goto LABEL_286;
  IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                questRestrictionInfo,
                                (*v71)->fields._InitPos_k__BackingField,
                                0LL);
  v134 = entity;
  if ( !entity )
    goto LABEL_125;
LABEL_100:
  if ( !IsSelectableNormalSupport || v134->fields.isNpcOnly )
    goto LABEL_125;
  v135 = (System_Collections_Generic_IEnumerable_T__o *)servantIds;
  v136 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_57378420(
    v136,
    v135,
    (const MethodInfo_36B8674 *)Method_System_Collections_Generic_List_int___ctor___77024896);
  if ( !v136 )
    goto LABEL_286;
  v137 = v136->fields._items;
  v138 = Method_System_Collections_Generic_List_int__Add__;
  ++v136->fields._version;
  if ( !v137 )
    goto LABEL_286;
  v139 = v136->fields._size;
  if ( (unsigned int)v139 >= v137->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v136,
      0,
      *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
  }
  else
  {
    v136->fields._size = v139 + 1;
    v137->m_Items[v139 + 1] = 0;
  }
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                         v136,
                                         (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
  servantIds = (System_Int32_array *)partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_286;
LABEL_126:
  if ( !partyMemberItem[1].klass )
  {
    if ( !classImageIds )
      goto LABEL_286;
    if ( !*(_QWORD *)&classImageIds->max_length )
      goto LABEL_244;
    v207 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UIWidget__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v207,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
    v208 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v208,
      (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
    v209 = classImageIds;
    if ( !classImageIds )
      goto LABEL_286;
    v210 = *(_QWORD *)&classImageIds->max_length;
    if ( (int)v210 < 1 )
      goto LABEL_237;
    v211 = 0;
    v212 = 0LL;
    do
    {
      if ( v212 >= (unsigned int)v210 )
        goto LABEL_287;
      if ( !v208 )
        goto LABEL_286;
      iconsWidget = (Il2CppObject *)(unsigned int)v209->m_Items[v212 + 1];
      v213 = v208->fields._items;
      v214 = Method_System_Collections_Generic_List_int__Add__;
      ++v208->fields._version;
      if ( !v213 )
        goto LABEL_286;
      v215 = v208->fields._size;
      if ( (unsigned int)v215 >= v213->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v208,
          (int32_t)iconsWidget,
          *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v214[4] + 192LL) + 112LL));
      }
      else
      {
        v208->fields._size = v215 + 1;
        v213->m_Items[v215 + 1] = (int)iconsWidget;
      }
      partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      if ( !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo);
        partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      }
      if ( ++v211 >= **(_DWORD **)&partyMemberItem[7].fields )
      {
        partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                               (BaseMonoBehaviour_o *)this,
                                               this->fields.servantIconsPrefab,
                                               this->fields.iconParent,
                                               0LL,
                                               0LL);
        if ( !partyMemberItem )
          goto LABEL_286;
        Component_object = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 (UnityEngine_GameObject_o *)partyMemberItem,
                                                                 (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                               v208,
                                               (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !Component_object )
          goto LABEL_286;
        RestrictionNotSatisfySlotIcons__SetClassIcons(Component_object, (System_Int32_array *)partyMemberItem, v217);
        if ( !v207 )
          goto LABEL_286;
        iconsWidget = (Il2CppObject *)Component_object->fields.iconsWidget;
        v220 = v207->fields._items;
        v221 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++v207->fields._version;
        if ( !v220 )
          goto LABEL_286;
        v222 = v207->fields._size;
        if ( (unsigned int)v222 >= v220->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v207,
            iconsWidget,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v221[4] + 192LL) + 112LL));
        }
        else
        {
          v223 = &v220->obj.klass + v222;
          v207->fields._size = v222 + 1;
          v223[4] = (Il2CppClass *)iconsWidget;
          sub_1BDB81C((CGThumbnailListItem_o *)(v223 + 4), (int32_t)iconsWidget, v218, v219);
        }
        v211 = 0;
        v224 = v208->fields._version + 1;
        v208->fields._size = 0;
        v208->fields._version = v224;
      }
      LODWORD(v210) = v209->max_length;
      ++v212;
    }
    while ( (__int64)v212 < (int)v210 );
    if ( v211 )
    {
      partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)this,
                                             this->fields.servantIconsPrefab,
                                             this->fields.iconParent,
                                             0LL,
                                             0LL);
      if ( !partyMemberItem )
        goto LABEL_286;
      v225 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)partyMemberItem,
                                                   (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
      partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                             v208,
                                             (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v225 )
        goto LABEL_286;
      RestrictionNotSatisfySlotIcons__SetClassIcons(v225, (System_Int32_array *)partyMemberItem, v226);
      if ( !v207 )
        goto LABEL_286;
      iconsWidget = (Il2CppObject *)v225->fields.iconsWidget;
      v229 = v207->fields._items;
      v230 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++v207->fields._version;
      if ( !v229 )
        goto LABEL_286;
      v231 = v207->fields._size;
      if ( (unsigned int)v231 >= v229->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v207,
          iconsWidget,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v230[4] + 192LL) + 112LL));
      }
      else
      {
        v232 = &v229->obj.klass + v231;
        v207->fields._size = v231 + 1;
        v232[4] = (Il2CppClass *)iconsWidget;
        sub_1BDB81C((CGThumbnailListItem_o *)(v232 + 4), (int32_t)iconsWidget, v227, v228);
      }
    }
    else
    {
LABEL_237:
      if ( !v207 )
        goto LABEL_286;
    }
    switchIcons = this->fields.switchIcons;
    partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                           v207,
                                           (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !switchIcons )
      goto LABEL_286;
    v234 = (UIWidget_array *)partyMemberItem;
    v235 = switchIcons;
    goto LABEL_242;
  }
  partyMemberItem = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !partyMemberItem )
    goto LABEL_286;
  MasterData_object = (UserServantCollectionMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)partyMemberItem,
                                                         (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (NpcServantFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v250 = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v148 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v148,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  v149 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v149,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  v150 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v150,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  v151 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v151,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  v152 = (System_Collections_Generic_List_bool__o *)sub_1BDBAC4(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor(
    v152,
    (const MethodInfo_368F180 *)Method_System_Collections_Generic_List_bool___ctor__);
  v153 = servantIds;
  if ( !servantIds )
LABEL_286:
    sub_1BDBAD4(partyMemberItem, iconsWidget);
  v154 = *(_QWORD *)&servantIds->max_length;
  if ( (int)v154 >= 1 )
  {
    v155 = 0;
    v156 = 0LL;
    v255 = &servantIds->m_Items[1];
    v253 = servantIds;
    do
    {
      if ( v156 >= (unsigned int)v154 )
        goto LABEL_287;
      if ( !v149 )
        goto LABEL_286;
      v157 = v255[v156];
      v158 = v149->fields._items;
      v159 = Method_System_Collections_Generic_List_int__Add__;
      ++v149->fields._version;
      if ( !v158 )
        goto LABEL_286;
      v160 = v149->fields._size;
      if ( (unsigned int)v160 >= v158->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v149,
          v157,
          *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
      }
      else
      {
        v149->fields._size = v160 + 1;
        v158->m_Items[v160 + 1] = v157;
      }
      partyMemberItem = (System_String_o *)npcInfoDictionary;
      if ( !npcInfoDictionary )
        goto LABEL_286;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
              v157,
              (const MethodInfo_333B514 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
        goto LABEL_294;
      partyMemberItem = (System_String_o *)npcInfoDictionary;
      if ( !npcInfoDictionary )
        goto LABEL_286;
      v161 = System_Collections_Generic_Dictionary_int__object___get_Item(
               (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
               v157,
               (const MethodInfo_333B280 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
      if ( v161 )
      {
        questId = v128->fields.questId;
        questPhase = v128->fields.questPhase;
        v164 = (FollowerInfo_o *)v161;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0LL);
        LimitCount = FollowerInfo__getLimitCount(v164, 0, ReturnTypeByQuestId, 0LL);
        partyMemberItem = (System_String_o *)Master_object;
        if ( !Master_object )
          goto LABEL_286;
        partyMemberItem = (System_String_o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                               Master_object,
                                               &npcServantFollowerEntity,
                                               questId,
                                               questPhase,
                                               v157,
                                               0LL);
        if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
          goto LABEL_170;
        if ( !npcServantFollowerEntity )
          goto LABEL_286;
        partyMemberItem = (System_String_o *)NpcServantFollowerEntity__IsHideRarity(
                                               npcServantFollowerEntity->fields.flag,
                                               0LL);
        if ( !v152 )
          goto LABEL_286;
        v167 = v152->fields._items;
        v168 = Method_System_Collections_Generic_List_bool__Add__;
        ++v152->fields._version;
        if ( !v167 )
          goto LABEL_286;
        v169 = v152->fields._size;
        if ( (unsigned int)v169 >= v167->max_length )
        {
          System_Collections_Generic_List_bool___AddWithResize(
            v152,
            (unsigned __int8)partyMemberItem & 1,
            *(const MethodInfo_368F9E4 **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
        }
        else
        {
          v152->fields._size = v169 + 1;
          v167->m_Items[v169 + 4] = (unsigned __int8)partyMemberItem & 1;
        }
        partyMemberItem = (System_String_o *)v250;
        if ( !npcServantFollowerEntity || !v250 )
          goto LABEL_286;
        partyMemberItem = (System_String_o *)NpcFollowerMaster__GetEntity_41291192(
                                               v250,
                                               questId,
                                               questPhase,
                                               npcServantFollowerEntity->fields.id,
                                               0LL);
        if ( partyMemberItem )
        {
          partyMemberItem = (System_String_o *)NpcFollowerEntity__GetImageSvtId(
                                                 (NpcFollowerEntity_o *)partyMemberItem,
                                                 0LL);
          v173 = (int)partyMemberItem;
        }
        else
        {
LABEL_170:
          v173 = 0;
        }
        v153 = v253;
        v128 = questRestrictionInfoa;
        if ( !v150 )
          goto LABEL_286;
      }
      else
      {
LABEL_294:
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B3ED56 )
        {
          sub_1BDB878(&NetworkManager_TypeInfo, iconsWidget);
          byte_4B3ED56 = 1;
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
                                               v157,
                                               0LL);
        if ( !partyMemberItem )
          goto LABEL_286;
        if ( !v152 )
          goto LABEL_286;
        LimitCount = (int32_t)partyMemberItem[2].monitor;
        v170 = v152->fields._items;
        v171 = Method_System_Collections_Generic_List_bool__Add__;
        ++v152->fields._version;
        if ( !v170 )
          goto LABEL_286;
        v172 = v152->fields._size;
        if ( (unsigned int)v172 >= v170->max_length )
        {
          System_Collections_Generic_List_bool___AddWithResize(
            v152,
            0,
            *(const MethodInfo_368F9E4 **)(*(_QWORD *)(v171[4] + 192LL) + 112LL));
          v173 = 0;
          if ( !v150 )
            goto LABEL_286;
        }
        else
        {
          v173 = 0;
          v152->fields._size = v172 + 1;
          v170->m_Items[v172 + 4] = 0;
          if ( !v150 )
            goto LABEL_286;
        }
      }
      v174 = v150->fields._items;
      v175 = Method_System_Collections_Generic_List_int__Add__;
      ++v150->fields._version;
      if ( !v174 )
        goto LABEL_286;
      v176 = v150->fields._size;
      if ( (unsigned int)v176 >= v174->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v150,
          LimitCount,
          *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v175[4] + 192LL) + 112LL));
      }
      else
      {
        v150->fields._size = v176 + 1;
        v174->m_Items[v176 + 1] = LimitCount;
      }
      if ( !v151 )
        goto LABEL_286;
      v177 = v151->fields._items;
      v178 = Method_System_Collections_Generic_List_int__Add__;
      ++v151->fields._version;
      if ( !v177 )
        goto LABEL_286;
      v179 = v151->fields._size;
      if ( (unsigned int)v179 >= v177->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v151,
          v173,
          *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
      }
      else
      {
        v151->fields._size = v179 + 1;
        v177->m_Items[v179 + 1] = v173;
      }
      partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      if ( !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo);
        partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      }
      if ( ++v155 >= **(_DWORD **)&partyMemberItem[7].fields )
      {
        partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                               (BaseMonoBehaviour_o *)this,
                                               this->fields.servantIconsPrefab,
                                               this->fields.iconParent,
                                               0LL,
                                               0LL);
        if ( !partyMemberItem )
          goto LABEL_286;
        v180 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)partyMemberItem,
                                                     (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        v181 = System_Collections_Generic_List_int___ToArray(
                 v149,
                 (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
        v182 = System_Collections_Generic_List_int___ToArray(
                 v150,
                 (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                               v151,
                                               (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !v152 )
          goto LABEL_286;
        v183 = (System_Int32_array *)partyMemberItem;
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_bool___ToArray(
                                               v152,
                                               (const MethodInfo_36914D0 *)Method_System_Collections_Generic_List_bool__ToArray__);
        if ( !v180 )
          goto LABEL_286;
        v185 = v183;
        v128 = questRestrictionInfoa;
        RestrictionNotSatisfySlotIcons__SetServantIcons(
          v180,
          v181,
          v182,
          v185,
          (System_Boolean_array *)partyMemberItem,
          questRestrictionInfoa,
          v184);
        if ( !v148 )
          goto LABEL_286;
        iconsWidget = (Il2CppObject *)v180->fields.iconsWidget;
        v188 = v148->fields._items;
        v153 = v253;
        v189 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++v148->fields._version;
        if ( !v188 )
          goto LABEL_286;
        v190 = v148->fields._size;
        if ( (unsigned int)v190 >= v188->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v148,
            iconsWidget,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v189[4] + 192LL) + 112LL));
        }
        else
        {
          v191 = &v188->obj.klass + v190;
          v148->fields._size = v190 + 1;
          v191[4] = (Il2CppClass *)iconsWidget;
          sub_1BDB81C((CGThumbnailListItem_o *)(v191 + 4), (int32_t)iconsWidget, v186, v187);
        }
        v155 = 0;
        v192 = v149->fields._version + 1;
        v149->fields._size = 0;
        v149->fields._version = v192;
        v193 = v150->fields._version + 1;
        v150->fields._size = 0;
        v150->fields._version = v193;
        v194 = v151->fields._version + 1;
        v151->fields._size = 0;
        v151->fields._version = v194;
        v195 = v152->fields._version + 1;
        v152->fields._size = 0;
        v152->fields._version = v195;
      }
      LODWORD(v154) = v153->max_length;
      ++v156;
    }
    while ( (__int64)v156 < (int)v154 );
    if ( v155 )
    {
      partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)this,
                                             this->fields.servantIconsPrefab,
                                             this->fields.iconParent,
                                             0LL,
                                             0LL);
      if ( partyMemberItem )
      {
        v196 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)partyMemberItem,
                                                     (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        v197 = System_Collections_Generic_List_int___ToArray(
                 v149,
                 (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
        v198 = System_Collections_Generic_List_int___ToArray(
                 v150,
                 (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                               v151,
                                               (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( v152 )
        {
          v199 = (System_Int32_array *)partyMemberItem;
          partyMemberItem = (System_String_o *)System_Collections_Generic_List_bool___ToArray(
                                                 v152,
                                                 (const MethodInfo_36914D0 *)Method_System_Collections_Generic_List_bool__ToArray__);
          if ( v196 )
          {
            RestrictionNotSatisfySlotIcons__SetServantIcons(
              v196,
              v197,
              v198,
              v199,
              (System_Boolean_array *)partyMemberItem,
              v128,
              v200);
            if ( v148 )
            {
              iconsWidget = (Il2CppObject *)v196->fields.iconsWidget;
              v203 = v148->fields._items;
              v204 = Method_System_Collections_Generic_List_UIWidget__Add__;
              ++v148->fields._version;
              if ( v203 )
              {
                v205 = v148->fields._size;
                if ( (unsigned int)v205 >= v203->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v148,
                    iconsWidget,
                    *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
                }
                else
                {
                  v206 = &v203->obj.klass + v205;
                  v148->fields._size = v205 + 1;
                  v206[4] = (Il2CppClass *)iconsWidget;
                  sub_1BDB81C((CGThumbnailListItem_o *)(v206 + 4), (int32_t)iconsWidget, v201, v202);
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
  if ( !v148 )
    goto LABEL_286;
LABEL_235:
  v233 = this->fields.switchIcons;
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                         v148,
                                         (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !v233 )
    goto LABEL_286;
  v234 = (UIWidget_array *)partyMemberItem;
  v235 = v233;
LABEL_242:
  SwitchUIWidgetComponent__Set(v235, v234, 0, 0LL);
  partyMemberItem = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !partyMemberItem )
    goto LABEL_286;
  SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)partyMemberItem, 0LL);
LABEL_244:
  partyMemberItem = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !partyMemberItem )
    goto LABEL_286;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyMemberItem, 1, 0LL);
}


void __fastcall RestrictionNotSatisfySlot___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B40821 & 1) == 0 )
  {
    sub_1BDB878(&RestrictionNotSatisfySlot___c_TypeInfo, v1);
    byte_4B40821 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(RestrictionNotSatisfySlot___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RestrictionNotSatisfySlot___c_TypeInfo->static_fields->__9 = (struct RestrictionNotSatisfySlot___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)RestrictionNotSatisfySlot___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BDBAD4(this, 0LL);
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
  if ( (byte_4B40822 & 1) == 0 )
  {
    this = (RestrictionNotSatisfySlot___c__DisplayClass14_0_o *)sub_1BDB878(
                                                                  &Method_System_Linq_Enumerable_Contains_int___,
                                                                  entity);
    byte_4B40822 = 1;
  }
  if ( !entity )
    goto LABEL_13;
  memberItem = v4->fields.memberItem;
  if ( entity->fields.type != 9 )
  {
    if ( memberItem )
      goto LABEL_9;
LABEL_13:
    sub_1BDBAD4(this, entity);
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
         (const MethodInfo_304CA50 *)Method_System_Linq_Enumerable_Contains_int___)
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