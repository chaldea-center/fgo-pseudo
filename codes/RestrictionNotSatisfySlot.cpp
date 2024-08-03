void __fastcall RestrictionNotSatisfySlot___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49F85D2 & 1) == 0 )
  {
    sub_1B640C8(&RestrictionNotSatisfySlot_TypeInfo, v1);
    byte_49F85D2 = 1;
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

  if ( (byte_49F85D0 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, message);
    sub_1B640C8(&string___TypeInfo, v4);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v5);
    sub_1B640C8(&StringLiteral_15763/*"[-]"*/, v6);
    sub_1B640C8(&StringLiteral_11027/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v7);
    sub_1B640C8(&StringLiteral_15868/*"[FFFF00]"*/, v8);
    byte_49F85D0 = 1;
  }
  v9 = (System_String_o *)sub_1B64170(string___TypeInfo, 5LL);
  if ( !v9 )
    sub_1B64324(0LL);
  v13 = v9;
  if ( !LODWORD(v9[1].klass) )
    goto LABEL_12;
  v14 = StringLiteral_15868/*"[FFFF00]"*/;
  v9[1].monitor = (void *)StringLiteral_15868/*"[FFFF00]"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v9[1].monitor, v14, v11, v12);
  if ( LODWORD(v13[1].klass) <= 1 )
    goto LABEL_12;
  v13[1].fields = (System_String_Fields)message;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v13[1].fields, (int32_t)message, v15, v16);
  if ( LODWORD(v13[1].klass) <= 2 )
    goto LABEL_12;
  v19 = StringLiteral_43/*"\n"*/;
  v13[2].klass = (System_String_c *)StringLiteral_43/*"\n"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v13[2], v19, v17, v18);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11027/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
  if ( LODWORD(v13[1].klass) <= 3
    || (v13[2].monitor = v9,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v13[2].monitor, (int32_t)v9, v20, v21),
        LODWORD(v13[1].klass) <= 4) )
  {
LABEL_12:
    sub_1B6432C(v9, v10);
  }
  v24 = (int)StringLiteral_15763/*"[-]"*/;
  v13[2].fields = (System_String_Fields)StringLiteral_15763/*"[-]"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v13[2].fields, v24, v22, v23);
  return System_String__Concat_61388924((System_String_array *)v13, 0LL);
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
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_int__o *v18; // x24
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_int__o *v21; // x23
  _BOOL8 EntityByIndividuality; // x0
  __int64 iconImageId; // x1
  __int64 v24; // x8
  unsigned __int64 v25; // x27
  int32_t v26; // w26
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  struct System_Int32_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  __int64 v33; // x8
  System_Collections_Generic_List_int__o *v34; // x0
  System_Int32_array *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_Int32_array *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  ServantClassEntity_o *v42; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_49F85CF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantClassMaster___, servantIds);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v13);
    byte_49F85CF = 1;
  }
  v42 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
  v15 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v18 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v16, v17);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v21 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v19, v20);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individuality )
    goto LABEL_29;
  v24 = *(_QWORD *)&individuality->max_length;
  if ( (int)v24 >= 1 )
  {
    v25 = 0LL;
    do
    {
      if ( v25 >= (unsigned int)v24 )
        sub_1B6432C(EntityByIndividuality, iconImageId);
      if ( !Master_object )
        goto LABEL_29;
      v26 = individuality->m_Items[v25 + 1];
      EntityByIndividuality = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                &entity,
                                v26,
                                (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( EntityByIndividuality )
      {
        if ( !v18 )
          goto LABEL_29;
        items = v18->fields._items;
        v28 = Method_System_Collections_Generic_List_int__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v33 = v28[4];
          v34 = v18;
          LODWORD(iconImageId) = v26;
LABEL_24:
          System_Collections_Generic_List_int___AddWithResize(
            v34,
            iconImageId,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v33 + 192) + 112LL));
          goto LABEL_25;
        }
        v18->fields._size = size + 1;
        items->m_Items[size + 1] = v26;
      }
      else
      {
        if ( !v15 )
          goto LABEL_29;
        EntityByIndividuality = ServantClassMaster__TryGetEntityByIndividuality(
                                  (ServantClassMaster_o *)v15,
                                  &v42,
                                  v26,
                                  0LL);
        if ( !EntityByIndividuality )
          goto LABEL_25;
        if ( !v42 )
          goto LABEL_29;
        if ( !v21 )
          goto LABEL_29;
        iconImageId = (unsigned int)v42->fields.iconImageId;
        v30 = v21->fields._items;
        v31 = Method_System_Collections_Generic_List_int__Add__;
        ++v21->fields._version;
        if ( !v30 )
          goto LABEL_29;
        v32 = v21->fields._size;
        if ( (unsigned int)v32 >= v30->max_length )
        {
          v33 = v31[4];
          v34 = v21;
          goto LABEL_24;
        }
        v21->fields._size = v32 + 1;
        v30->m_Items[v32 + 1] = iconImageId;
      }
LABEL_25:
      LODWORD(v24) = individuality->max_length;
    }
    while ( (__int64)++v25 < (int)v24 );
  }
  if ( !v18
    || (v35 = System_Collections_Generic_List_int___ToArray(
                v18,
                (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__),
        *servantIds = v35,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)servantIds, (int32_t)v35, v36, v37),
        !v21) )
  {
LABEL_29:
    sub_1B64324(EntityByIndividuality);
  }
  v38 = System_Collections_Generic_List_int___ToArray(
          v21,
          (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  *classImageIds = v38;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)classImageIds, (int32_t)v38, v39, v40);
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

  if ( (byte_49F85D1 & 1) == 0 )
  {
    sub_1B640C8(&System_Text_RegularExpressions_Regex_TypeInfo, message);
    sub_1B640C8(&StringLiteral_15896/*"[[]-[\\]]"*/, v4);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    sub_1B640C8(&StringLiteral_15897/*"[[][0-9A-F]{6}[\\]]"*/, v6);
    byte_49F85D1 = 1;
  }
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  v7 = System_Text_RegularExpressions_Regex__Replace(
         message,
         (System_String_o *)StringLiteral_15897/*"[[][0-9A-F]{6}[\\]]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  return System_Text_RegularExpressions_Regex__Replace(
           v7,
           (System_String_o *)StringLiteral_15896/*"[[]-[\\]]"*/,
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
  int32_t v68; // w2
  int32_t v69; // w3
  PartyOrganizationListViewItem_o **v70; // x21
  UISprite_o *numberSprite; // x20
  System_String_o *v72; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  _QWORD *v75; // x20
  __int64 v76; // x8
  __int64 v77; // x0
  __int64 v78; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x22
  System_Collections_Generic_List_object__o *v80; // x23
  __int64 v81; // x1
  __int64 v82; // x2
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x20
  System_Func_object__bool__o *v84; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  RestrictionNotSatisfySlot___c_c *v88; // x0
  System_Func_object__bool__o *_9__14_1; // x20
  Il2CppObject *v90; // x24
  struct RestrictionNotSatisfySlot___c_StaticFields *static_fields; // x0
  int32_t v92; // w2
  int32_t v93; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v94; // x0
  __int64 v95; // x1
  const MethodInfo *v96; // x2
  System_String_o *v97; // x24
  System_String_c *klass; // x8
  unsigned __int64 v99; // x19
  int32_t v100; // w2
  int32_t v101; // w3
  struct System_Object_array *items; // x8
  _QWORD *v103; // x9
  __int64 size; // x10
  System_String_o *v105; // x1
  Il2CppClass **v106; // x0
  __int64 v107; // x1
  __int64 v108; // x2
  System_Collections_Generic_List_object__o *v109; // x24
  UnityEngine_GameObject_o *restrictionLabelRoot; // x0
  Il2CppObject *current; // x23
  Il2CppObject *restrictionLabel; // x20
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *v114; // x0
  Il2CppObject *v115; // x20
  __int64 v116; // x0
  int32_t v117; // w2
  int32_t v118; // w3
  struct System_Object_array *v119; // x8
  _QWORD *v120; // x9
  __int64 v121; // x10
  Il2CppClass **v122; // x0
  SwitchUIWidgetComponent_o *switchMessage; // x20
  __int64 v124; // x1
  __int64 v125; // x2
  _QWORD *v126; // x20
  __int64 v127; // x8
  __int64 v128; // x0
  __int64 v129; // x0
  _QWORD *v130; // x20
  __int64 v131; // x8
  __int64 v132; // x0
  __int64 v133; // x0
  System_Collections_Generic_Dictionary_int__object__o *v134; // x20
  char v135; // w20
  __int64 v136; // x2
  const MethodInfo *v137; // x4
  bool IsSelectableNormalSupport; // w0
  QuestPhaseEntity_o *v139; // x8
  System_Collections_Generic_IEnumerable_T__o *v140; // x21
  System_Collections_Generic_List_int__o *v141; // x20
  struct System_Int32_array *v142; // x8
  _QWORD *v143; // x9
  __int64 v144; // x10
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_TSource__c *v146; // x8
  System_Int32_array *v147; // x3
  System_Collections_Generic_List_int__o *v148; // x22
  System_Collections_Generic_List_object__o *v149; // x20
  System_Collections_Generic_List_T__o *v150; // x21
  int32_t v151; // w23
  __int64 v152; // x1
  __int64 v153; // x2
  System_Collections_Generic_List_object__o *v154; // x21
  __int64 v155; // x1
  __int64 v156; // x2
  System_Collections_Generic_List_int__o *v157; // x22
  __int64 v158; // x1
  __int64 v159; // x2
  System_Collections_Generic_List_int__o *v160; // x24
  __int64 v161; // x1
  __int64 v162; // x2
  System_Collections_Generic_List_int__o *v163; // x25
  __int64 v164; // x1
  __int64 v165; // x2
  System_Collections_Generic_List_bool__o *v166; // x26
  __int64 v167; // x8
  int v168; // w19
  unsigned __int64 v169; // x23
  int32_t v170; // w28
  struct System_Int32_array *v171; // x8
  _QWORD *v172; // x9
  __int64 v173; // x10
  Il2CppObject *v174; // x0
  int32_t questId; // w20
  int32_t questPhase; // w27
  FollowerInfo_o *v177; // x29
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w29
  struct System_Boolean_array *v180; // x8
  _QWORD *v181; // x9
  __int64 v182; // x10
  int64_t UserId; // x1
  struct System_Boolean_array *v184; // x8
  _QWORD *v185; // x9
  __int64 v186; // x10
  int32_t v187; // w20
  struct System_Int32_array *v188; // x8
  _QWORD *v189; // x9
  __int64 v190; // x10
  struct System_Int32_array *v191; // x8
  _QWORD *v192; // x9
  __int64 v193; // x10
  RestrictionNotSatisfySlotIcons_o *Component_object; // x20
  System_Int32_array *v195; // x27
  System_Int32_array *v196; // x28
  System_Int32_array *v197; // x29
  const MethodInfo *v198; // x6
  System_Int32_array *v199; // x1
  int32_t v200; // w2
  int32_t v201; // w3
  Il2CppObject *iconsWidget; // x1
  struct System_Object_array *v203; // x8
  _QWORD *v204; // x9
  __int64 v205; // x10
  Il2CppClass **v206; // x0
  int v207; // w8
  int v208; // w8
  int v209; // w8
  int v210; // w8
  RestrictionNotSatisfySlotIcons_o *v211; // x20
  System_Int32_array *v212; // x22
  System_Int32_array *v213; // x23
  System_Int32_array *v214; // x24
  const MethodInfo *v215; // x6
  int32_t v216; // w2
  int32_t v217; // w3
  Il2CppObject *v218; // x1
  struct System_Object_array *v219; // x8
  _QWORD *v220; // x9
  __int64 v221; // x10
  Il2CppClass **v222; // x0
  System_Collections_Generic_List_object__o *v223; // x20
  __int64 v224; // x1
  __int64 v225; // x2
  System_Collections_Generic_List_int__o *v226; // x21
  System_Int32_array *v227; // x19
  __int64 v228; // x8
  int v229; // w22
  unsigned __int64 v230; // x23
  struct System_Int32_array *v231; // x8
  _QWORD *v232; // x9
  __int64 v233; // x10
  RestrictionNotSatisfySlotIcons_o *v234; // x22
  const MethodInfo *v235; // x2
  int32_t v236; // w2
  int32_t v237; // w3
  Il2CppObject *v238; // x1
  struct System_Object_array *v239; // x8
  _QWORD *v240; // x9
  __int64 v241; // x10
  Il2CppClass **v242; // x0
  int v243; // w8
  RestrictionNotSatisfySlotIcons_o *v244; // x22
  const MethodInfo *v245; // x2
  int32_t v246; // w2
  int32_t v247; // w3
  Il2CppObject *v248; // x1
  struct System_Object_array *v249; // x8
  _QWORD *v250; // x9
  __int64 v251; // x10
  Il2CppClass **v252; // x0
  struct SwitchUIWidgetComponent_o *switchIcons; // x20
  UIWidget_array *v254; // x1
  SwitchUIWidgetComponent_o *v255; // x0
  struct SwitchUIWidgetComponent_o *v256; // x21
  PartyOrganizationListViewItem_o *v257; // x8
  int32_t v258; // w2
  int32_t v259; // w3
  struct System_Object_array *v260; // x8
  _QWORD *v261; // x9
  __int64 v262; // x10
  System_String_o *v263; // x1
  Il2CppClass **v264; // x0
  int v265; // w19
  int32_t v266; // w20
  Il2CppObject *Item; // x0
  const MethodInfo *v268; // x2
  Il2CppObject *fixed; // x0
  NpcFollowerMaster_o *v270; // [xsp+48h] [xbp-108h]
  NpcServantFollowerMaster_o *Master_object; // [xsp+50h] [xbp-100h]
  UserServantCollectionMaster_o *MasterData_object; // [xsp+58h] [xbp-F8h]
  System_Int32_array *v273; // [xsp+60h] [xbp-F0h]
  int32_t *v274; // [xsp+68h] [xbp-E8h]
  QuestRestrictionInfo_o *questRestrictionInfoa; // [xsp+70h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v277; // [xsp+80h] [xbp-D0h] BYREF
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+98h] [xbp-B8h] BYREF
  QuestPhaseEntity_o *v279; // [xsp+A0h] [xbp-B0h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+A8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v281; // [xsp+B0h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+D0h] [xbp-80h] BYREF
  System_Int32_array *classImageIds; // [xsp+D8h] [xbp-78h] BYREF
  System_Int32_array *servantIds; // [xsp+E0h] [xbp-70h] BYREF
  int32_t pos; // [xsp+ECh] [xbp-64h] BYREF

  pos = number;
  if ( (byte_49F85CE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, *(_QWORD *)&number);
    sub_1B640C8(&Method_System_Array_Empty_RestrictionEntity___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_NpcFollowerMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestPhaseMaster___, v11);
    sub_1B640C8(&DataManager_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v15);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v16);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___, v17);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v21);
    sub_1B640C8(&System_Func_RestrictionEntity__bool__TypeInfo, v22);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__Add__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_bool__Add__, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_bool__Clear__, v29);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Clear__, v30);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v31);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v32);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v33);
    sub_1B640C8(&Method_System_Collections_Generic_List_bool__ToArray__, v34);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v35);
    sub_1B640C8(&Method_System_Collections_Generic_List_bool___ctor__, v36);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget___ctor__, v37);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v38);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v39);
    sub_1B640C8(&Method_System_Collections_Generic_List_int____get_Count__, v40);
    sub_1B640C8(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v41);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v42);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, v43);
    sub_1B640C8(&Method_System_Collections_Generic_List_int____get_Item__, v44);
    sub_1B640C8(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v45);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__set_Item__, v46);
    sub_1B640C8(&System_Collections_Generic_List_bool__TypeInfo, v47);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v48);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v49);
    sub_1B640C8(&System_Collections_Generic_List_UIWidget__TypeInfo, v50);
    sub_1B640C8(&LocalizationManager_TypeInfo, v51);
    sub_1B640C8(&NetworkManager_TypeInfo, v52);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_UILabel____75791896, v53);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v54);
    sub_1B640C8(&RestrictionNotSatisfySlot_TypeInfo, v55);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v56);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v57);
    sub_1B640C8(&Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__, v58);
    sub_1B640C8(&Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__, v59);
    sub_1B640C8(&RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo, v60);
    sub_1B640C8(&RestrictionNotSatisfySlot___c_TypeInfo, v61);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v62);
    sub_1B640C8(&StringLiteral_21304/*"member_txt_"*/, v63);
    sub_1B640C8(&StringLiteral_11024/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/, v64);
    sub_1B640C8(&StringLiteral_1/*""*/, v65);
    byte_49F85CE = 1;
  }
  classImageIds = 0LL;
  servantIds = 0LL;
  npcInfoDictionary = 0LL;
  memset(&v281, 0, sizeof(v281));
  v279 = 0LL;
  entity = 0LL;
  npcServantFollowerEntity = 0LL;
  v66 = sub_1B64314(RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo, *(_QWORD *)&number, memberItem);
  System_Object___ctor((Il2CppObject *)v66, 0LL);
  if ( !v66 )
    goto LABEL_281;
  *(_QWORD *)(v66 + 16) = memberItem;
  v70 = (PartyOrganizationListViewItem_o **)(v66 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v66 + 16), (int32_t)memberItem, v68, v69);
  numberSprite = this->fields.numberSprite;
  v72 = System_Int32__ToString((int32_t)&pos, 0LL);
  partyMemberItem = System_String__Concat_61375396((System_String_o *)StringLiteral_21304/*"member_txt_"*/, v72, 0LL);
  if ( !numberSprite )
    goto LABEL_281;
  UISprite__set_spriteName(numberSprite, partyMemberItem, 0LL);
  partyMemberItem = (System_String_o *)this->fields.partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_281;
  PartyOrganizationConfirmItemDraw__SetItem(
    (PartyOrganizationConfirmItemDraw_o *)partyMemberItem,
    *v70,
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
    sub_1BB6000(Method_System_Array_Empty_RestrictionEntity___);
    v76 = v75[7];
  }
  v77 = *(_QWORD *)(v76 + 16);
  if ( (*(_BYTE *)(v77 + 309) & 1) == 0 )
    v77 = sub_1BB5FA4(v77);
  if ( !*(_DWORD *)(v77 + 224) )
    j_il2cpp_runtime_class_init_0(v77);
  v78 = *(_QWORD *)(v75[7] + 16LL);
  if ( (*(_BYTE *)(v78 + 309) & 1) == 0 )
    v78 = sub_1BB5FA4(v78);
  v79 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v78 + 184);
  v80 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v73,
                                                       v74);
  System_Collections_Generic_List_object____ctor(
    v80,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !questRestrictionInfo )
    goto LABEL_281;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  questRestrictionInfoa = questRestrictionInfo;
  if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
  {
    restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
    v84 = (System_Func_object__bool__o *)sub_1B64314(System_Func_RestrictionEntity__bool__TypeInfo, v81, v82);
    System_Func_object__bool____ctor(
      v84,
      (Il2CppObject *)v66,
      Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__,
      0LL);
    v85 = System_Linq_Enumerable__Where_object_(
            restrictionEntityList,
            (System_Func_TSource__bool__o *)v84,
            (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    v79 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 v85,
                                                                 (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
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
        _9__14_1 = (System_Func_object__bool__o *)sub_1B64314(System_Func_RestrictionEntity__bool__TypeInfo, v86, v87);
        System_Func_object__bool____ctor(_9__14_1, v90, Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__, 0LL);
        static_fields = RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
        static_fields->__9__14_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__14_1;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_1, (int32_t)_9__14_1, v92, v93);
      }
      v94 = System_Linq_Enumerable__Where_object_(
              v79,
              (System_Func_TSource__bool__o *)_9__14_1,
              (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v79 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                   v94,
                                                                   (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    }
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetMessages_40097968(
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
    if ( !*v70 )
      goto LABEL_281;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetMessages(
                                           questRestrictionInfo,
                                           (*v70)->fields._InitPos_k__BackingField,
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
  v97 = partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_281;
  klass = partyMemberItem[1].klass;
  if ( klass && (int)klass >= 1 )
  {
    v99 = 0LL;
    while ( v99 < (unsigned int)klass )
    {
      partyMemberItem = RestrictionNotSatisfySlot__RemoveColorCode(
                          (RestrictionNotSatisfySlot_o *)partyMemberItem,
                          *((System_String_o **)&v97[1].monitor + v99),
                          v96);
      if ( !partyMemberItem )
        goto LABEL_281;
      partyMemberItem = System_String__Replace_61395016(
                          partyMemberItem,
                          (System_String_o *)StringLiteral_43/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
      if ( !v80 )
        goto LABEL_281;
      items = v80->fields._items;
      v103 = Method_System_Collections_Generic_List_string__Add__;
      ++v80->fields._version;
      if ( !items )
        goto LABEL_281;
      size = v80->fields._size;
      v105 = partyMemberItem;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v80,
          (Il2CppObject *)partyMemberItem,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
      }
      else
      {
        v106 = &items->obj.klass + size;
        v80->fields._size = size + 1;
        v106[4] = (Il2CppClass *)v105;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v106 + 4), (int32_t)v105, v100, v101);
      }
      LODWORD(klass) = v97[1].klass;
      if ( (__int64)++v99 >= (int)klass )
        goto LABEL_40;
    }
LABEL_282:
    sub_1B6432C(partyMemberItem, v95);
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
  partyMemberItem = (System_String_o *)*v70;
  if ( !*v70 )
    goto LABEL_281;
  if ( !PartyOrganizationListViewItem__get_IsSupportOnly((PartyOrganizationListViewItem_o *)partyMemberItem, 0LL) )
  {
    partyMemberItem = (System_String_o *)*v70;
    if ( !*v70 )
      goto LABEL_281;
    if ( !PartyOrganizationListViewItem__get_IsFixedMyServantSingle(
            (PartyOrganizationListViewItem_o *)partyMemberItem,
            0LL) )
    {
      partyMemberItem = (System_String_o *)*v70;
      if ( !*v70 )
        goto LABEL_281;
      if ( !LOBYTE(partyMemberItem[9].klass) && !BYTE1(partyMemberItem[9].klass) )
      {
        if ( PartyOrganizationListViewItem__get_IsQuestRestriction(
               (PartyOrganizationListViewItem_o *)partyMemberItem,
               0LL) )
        {
          goto LABEL_256;
        }
        partyMemberItem = (System_String_o *)*v70;
        if ( !*v70 )
          goto LABEL_281;
        partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                               (PartyOrganizationListViewItem_o *)partyMemberItem,
                                               0LL);
        if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
        {
          if ( !*v70 )
            goto LABEL_281;
          partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsSetRequired(
                                                 questRestrictionInfo,
                                                 pos,
                                                 (*v70)->fields._InitPos_k__BackingField,
                                                 0LL);
          if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
            goto LABEL_256;
        }
        v257 = *v70;
        if ( !*v70 )
          goto LABEL_281;
        if ( v257->fields.isUniqueSvtRestriction
          || v257->fields.isUniqueIndividualityRestriction
          || (v257->fields.fatigureTime & 0x8000000000000000LL) == 0
          || v257->fields._IsAllOutBattle_k__BackingField
          || v257->fields._IsDataLost_k__BackingField
          || v257->fields._TimesToRestart_k__BackingField > 0
          || v257->fields._IsNotSupportSingle_k__BackingField
          || v257->fields.isFixedServantPositionRestriction
          || v257->fields.isFixedSupportPositionRestriction )
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
          partyMemberItem = (System_String_o *)*v70;
          if ( !*v70 )
            goto LABEL_281;
          partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                                 (PartyOrganizationListViewItem_o *)partyMemberItem,
                                                 0LL);
          if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
            goto LABEL_271;
          if ( !*v70 )
            goto LABEL_281;
          if ( QuestRestrictionInfo__IsSetRequired(
                 questRestrictionInfo,
                 pos,
                 (*v70)->fields._InitPos_k__BackingField,
                 0LL) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            partyMemberItem = LocalizationManager__Get((System_String_o *)StringLiteral_11024/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/, 0LL);
            if ( !v80 )
              goto LABEL_281;
            v260 = v80->fields._items;
            v261 = Method_System_Collections_Generic_List_string__Add__;
            ++v80->fields._version;
            if ( !v260 )
              goto LABEL_281;
            v262 = v80->fields._size;
            v263 = partyMemberItem;
            if ( (unsigned int)v262 >= v260->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v80,
                (Il2CppObject *)partyMemberItem,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v261[4] + 192LL) + 112LL));
            }
            else
            {
              v264 = &v260->obj.klass + v262;
              v80->fields._size = v262 + 1;
              v264[4] = (Il2CppClass *)v263;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v264 + 4), (int32_t)v263, v258, v259);
            }
            v265 = 1;
          }
          else
          {
LABEL_271:
            v265 = 0;
          }
          partyMemberItem = (System_String_o *)*v70;
          if ( !*v70 )
            goto LABEL_281;
          partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsQuestRestriction(
                                                 (PartyOrganizationListViewItem_o *)partyMemberItem,
                                                 0LL);
          if ( v265 | (unsigned __int8)partyMemberItem & 1 )
          {
            if ( !v80 )
              goto LABEL_281;
            if ( v80->fields._size >= 1 )
            {
              v266 = 0;
              do
              {
                Item = System_Collections_Generic_List_object___get_Item(
                         v80,
                         v266,
                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
                fixed = (Il2CppObject *)RestrictionNotSatisfySlot__AddColorCodeAndFixMessage(
                                          (RestrictionNotSatisfySlot_o *)Item,
                                          (System_String_o *)Item,
                                          v268);
                System_Collections_Generic_List_object___set_Item(
                  v80,
                  v266++,
                  fixed,
                  (const MethodInfo_34AD458 *)Method_System_Collections_Generic_List_string__set_Item__);
              }
              while ( v266 < v80->fields._size );
            }
          }
        }
      }
    }
  }
  v109 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_UIWidget__TypeInfo,
                                                        v107,
                                                        v108);
  System_Collections_Generic_List_object____ctor(
    v109,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  if ( !v80 )
    goto LABEL_281;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v277,
    v80,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v281 = v277;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v281,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    restrictionLabelRoot = this->fields.restrictionLabelRoot;
    if ( !restrictionLabelRoot )
      sub_1B64324(0LL);
    current = v281.fields._current;
    restrictionLabel = (Il2CppObject *)this->fields.restrictionLabel;
    transform = UnityEngine_GameObject__get_transform(restrictionLabelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v114 = UnityEngine_Object__Instantiate_object__49003980(
             restrictionLabel,
             transform,
             (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_UILabel____75791896);
    v115 = v114;
    if ( !v114 )
      sub_1B64324(0LL);
    UILabel__set_text((UILabel_o *)v114, (System_String_o *)current, 0LL);
    if ( !v109 )
      sub_1B64324(v116);
    v119 = v109->fields._items;
    v120 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++v109->fields._version;
    if ( !v119 )
      sub_1B64324(v116);
    v121 = v109->fields._size;
    if ( (unsigned int)v121 >= v119->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v109,
        v115,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
    }
    else
    {
      v122 = &v119->obj.klass + v121;
      v109->fields._size = v121 + 1;
      v122[4] = (Il2CppClass *)v115;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v122 + 4), (int32_t)v115, v117, v118);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v281,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v109 )
    goto LABEL_281;
  switchMessage = this->fields.switchMessage;
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                         v109,
                                         (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !switchMessage )
    goto LABEL_281;
  SwitchUIWidgetComponent__Set(switchMessage, (UIWidget_array *)partyMemberItem, 0LL);
  v126 = Method_System_Array_Empty_int___;
  v127 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v127 )
  {
    sub_1BB6000(Method_System_Array_Empty_int___);
    v127 = v126[7];
  }
  v128 = *(_QWORD *)(v127 + 16);
  if ( (*(_BYTE *)(v128 + 309) & 1) == 0 )
    v128 = sub_1BB5FA4(v128);
  if ( !*(_DWORD *)(v128 + 224) )
    j_il2cpp_runtime_class_init_0(v128);
  v129 = *(_QWORD *)(v126[7] + 16LL);
  if ( (*(_BYTE *)(v129 + 309) & 1) == 0 )
    v129 = sub_1BB5FA4(v129);
  v130 = Method_System_Array_Empty_int___;
  servantIds = **(System_Int32_array ***)(v129 + 184);
  v131 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v131 )
  {
    sub_1BB6000(Method_System_Array_Empty_int___);
    v131 = v130[7];
  }
  v132 = *(_QWORD *)(v131 + 16);
  if ( (*(_BYTE *)(v132 + 309) & 1) == 0 )
    v132 = sub_1BB5FA4(v132);
  if ( !*(_DWORD *)(v132 + 224) )
    j_il2cpp_runtime_class_init_0(v132);
  v133 = *(_QWORD *)(v130[7] + 16LL);
  if ( (*(_BYTE *)(v133 + 309) & 1) == 0 )
    v133 = sub_1BB5FA4(v133);
  classImageIds = **(System_Int32_array ***)(v133 + 184);
  v134 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo,
                                                                   v124,
                                                                   v125);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v134,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v134;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( !*v70 )
    goto LABEL_281;
  v135 = (char)partyMemberItem;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_40118712(
                                         questRestrictionInfo,
                                         (*v70)->fields._InitPos_k__BackingField,
                                         0LL);
  if ( (v135 & 1) == 0 )
  {
    if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
    {
      if ( !*v70 )
        goto LABEL_281;
      servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                     questRestrictionInfo,
                     &npcInfoDictionary,
                     (*v70)->fields._InitPos_k__BackingField,
                     0,
                     0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      partyMemberItem = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !partyMemberItem )
        goto LABEL_281;
      partyMemberItem = (System_String_o *)QuestPhaseMaster__TryGetEntity(
                                             (QuestPhaseMaster_o *)partyMemberItem,
                                             &v279,
                                             questRestrictionInfo->fields.questId,
                                             questRestrictionInfo->fields.questPhase,
                                             0LL);
      if ( !servantIds )
        goto LABEL_281;
      if ( !*(_QWORD *)&servantIds->max_length )
        goto LABEL_125;
      if ( !*v70 )
        goto LABEL_281;
      IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                    questRestrictionInfo,
                                    (*v70)->fields._InitPos_k__BackingField,
                                    0LL);
      v139 = v279;
      if ( !v279 )
        goto LABEL_125;
      goto LABEL_100;
    }
    v148 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                       System_Collections_Generic_List_int__TypeInfo,
                                                       v95,
                                                       v136);
    System_Collections_Generic_List_int____ctor(
      v148,
      (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !*v70 )
      goto LABEL_281;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetNeedIndividualityList(
                                           questRestrictionInfo,
                                           (*v70)->fields._InitPos_k__BackingField,
                                           0LL);
    if ( !*v70 )
      goto LABEL_281;
    v149 = (System_Collections_Generic_List_object__o *)partyMemberItem;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetRangeTypeList(
                                           questRestrictionInfo,
                                           (*v70)->fields._InitPos_k__BackingField,
                                           0LL);
    if ( !v149 )
      goto LABEL_281;
    if ( v149->fields._size >= 1 )
    {
      v150 = (System_Collections_Generic_List_T__o *)partyMemberItem;
      v151 = 0;
      do
      {
        if ( !v150 )
          goto LABEL_281;
        if ( v150->fields._size > v151 )
        {
          partyMemberItem = (System_String_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                 v150,
                                                 v151,
                                                 (const MethodInfo_34924B8 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          if ( (_DWORD)partyMemberItem == 1 )
          {
            partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                                   v149,
                                                   v151,
                                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_int____get_Item__);
            if ( !v148 )
              goto LABEL_281;
            System_Collections_Generic_List_int___AddRange(
              v148,
              (System_Collections_Generic_IEnumerable_T__o *)partyMemberItem,
              (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
          }
        }
        ++v151;
      }
      while ( v151 < v149->fields._size );
    }
    if ( !v148 )
      goto LABEL_281;
    partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                           v148,
                                           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
    v147 = (System_Int32_array *)partyMemberItem;
LABEL_124:
    RestrictionNotSatisfySlot__GetIconIdFromIndividuality(
      (RestrictionNotSatisfySlot_o *)partyMemberItem,
      &servantIds,
      &classImageIds,
      v147,
      v137);
    goto LABEL_125;
  }
  if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
  {
    if ( !v79 )
      goto LABEL_281;
    monitor = v79[1].monitor;
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
    v146 = v79[2].klass;
    if ( !v146 )
      goto LABEL_281;
    v147 = *(System_Int32_array **)&v146->_1.byval_arg.bits;
    goto LABEL_124;
  }
  if ( !*v70 )
    goto LABEL_281;
  servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                 questRestrictionInfo,
                 &npcInfoDictionary,
                 (*v70)->fields._InitPos_k__BackingField,
                 1,
                 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  partyMemberItem = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
  if ( !*v70 )
    goto LABEL_281;
  IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                questRestrictionInfo,
                                (*v70)->fields._InitPos_k__BackingField,
                                0LL);
  v139 = entity;
  if ( !entity )
    goto LABEL_125;
LABEL_100:
  if ( !IsSelectableNormalSupport || v139->fields.isNpcOnly )
    goto LABEL_125;
  v140 = (System_Collections_Generic_IEnumerable_T__o *)servantIds;
  v141 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v95, v136);
  System_Collections_Generic_List_int____ctor_55113648(
    v141,
    v140,
    (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
  if ( !v141 )
    goto LABEL_281;
  v142 = v141->fields._items;
  v143 = Method_System_Collections_Generic_List_int__Add__;
  ++v141->fields._version;
  if ( !v142 )
    goto LABEL_281;
  v144 = v141->fields._size;
  if ( (unsigned int)v144 >= v142->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v141,
      0,
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
  }
  else
  {
    v141->fields._size = v144 + 1;
    v142->m_Items[v144 + 1] = 0;
  }
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                         v141,
                                         (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  servantIds = (System_Int32_array *)partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_281;
LABEL_126:
  if ( partyMemberItem[1].klass )
  {
    partyMemberItem = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !partyMemberItem )
      goto LABEL_281;
    MasterData_object = (UserServantCollectionMaster_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)partyMemberItem,
                                                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (NpcServantFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    v270 = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    v154 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                          System_Collections_Generic_List_UIWidget__TypeInfo,
                                                          v152,
                                                          v153);
    System_Collections_Generic_List_object____ctor(
      v154,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
    v157 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                       System_Collections_Generic_List_int__TypeInfo,
                                                       v155,
                                                       v156);
    System_Collections_Generic_List_int____ctor(
      v157,
      (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
    v160 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                       System_Collections_Generic_List_int__TypeInfo,
                                                       v158,
                                                       v159);
    System_Collections_Generic_List_int____ctor(
      v160,
      (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
    v163 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                       System_Collections_Generic_List_int__TypeInfo,
                                                       v161,
                                                       v162);
    System_Collections_Generic_List_int____ctor(
      v163,
      (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
    v166 = (System_Collections_Generic_List_bool__o *)sub_1B64314(
                                                        System_Collections_Generic_List_bool__TypeInfo,
                                                        v164,
                                                        v165);
    System_Collections_Generic_List_bool____ctor(
      v166,
      (const MethodInfo_3462AEC *)Method_System_Collections_Generic_List_bool___ctor__);
    if ( !servantIds )
      goto LABEL_281;
    v167 = *(_QWORD *)&servantIds->max_length;
    if ( (int)v167 < 1 )
      goto LABEL_227;
    v168 = 0;
    v169 = 0LL;
    v273 = servantIds;
    v274 = &servantIds->m_Items[1];
    while ( 1 )
    {
      if ( v169 >= (unsigned int)v167 )
        goto LABEL_282;
      if ( !v157 )
        goto LABEL_281;
      v170 = v274[v169];
      v171 = v157->fields._items;
      v172 = Method_System_Collections_Generic_List_int__Add__;
      ++v157->fields._version;
      if ( !v171 )
        goto LABEL_281;
      v173 = v157->fields._size;
      if ( (unsigned int)v173 >= v171->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v157,
          v170,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v172[4] + 192LL) + 112LL));
      }
      else
      {
        v157->fields._size = v173 + 1;
        v171->m_Items[v173 + 1] = v170;
      }
      partyMemberItem = (System_String_o *)npcInfoDictionary;
      if ( !npcInfoDictionary )
        goto LABEL_281;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
              v170,
              (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
        goto LABEL_289;
      partyMemberItem = (System_String_o *)npcInfoDictionary;
      if ( !npcInfoDictionary )
        goto LABEL_281;
      v174 = System_Collections_Generic_Dictionary_int__object___get_Item(
               (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
               v170,
               (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
      if ( v174 )
      {
        questId = questRestrictionInfo->fields.questId;
        questPhase = questRestrictionInfo->fields.questPhase;
        v177 = (FollowerInfo_o *)v174;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0LL);
        LimitCount = FollowerInfo__getLimitCount(v177, 0, ReturnTypeByQuestId, 0LL);
        partyMemberItem = (System_String_o *)Master_object;
        if ( !Master_object )
          goto LABEL_281;
        partyMemberItem = (System_String_o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                               Master_object,
                                               &npcServantFollowerEntity,
                                               questId,
                                               questPhase,
                                               v170,
                                               0LL);
        if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
          goto LABEL_164;
        if ( !npcServantFollowerEntity )
          goto LABEL_281;
        partyMemberItem = (System_String_o *)NpcServantFollowerEntity__IsHideRarity(
                                               npcServantFollowerEntity->fields.flag,
                                               0LL);
        if ( !v166 )
          goto LABEL_281;
        v180 = v166->fields._items;
        v181 = Method_System_Collections_Generic_List_bool__Add__;
        ++v166->fields._version;
        if ( !v180 )
          goto LABEL_281;
        v182 = v166->fields._size;
        if ( (unsigned int)v182 >= v180->max_length )
        {
          System_Collections_Generic_List_bool___AddWithResize(
            v166,
            (unsigned __int8)partyMemberItem & 1,
            *(const MethodInfo_3463350 **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
        }
        else
        {
          v166->fields._size = v182 + 1;
          v180->m_Items[v182 + 4] = (unsigned __int8)partyMemberItem & 1;
        }
        partyMemberItem = (System_String_o *)v270;
        if ( !npcServantFollowerEntity || !v270 )
          goto LABEL_281;
        partyMemberItem = (System_String_o *)NpcFollowerMaster__GetEntity_39109336(
                                               v270,
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
        v187 = (int)partyMemberItem;
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
                                               v170,
                                               0LL);
        if ( !partyMemberItem )
          goto LABEL_281;
        if ( !v166 )
          goto LABEL_281;
        LimitCount = (int32_t)partyMemberItem[2].monitor;
        v184 = v166->fields._items;
        v185 = Method_System_Collections_Generic_List_bool__Add__;
        ++v166->fields._version;
        if ( !v184 )
          goto LABEL_281;
        v186 = v166->fields._size;
        if ( (unsigned int)v186 >= v184->max_length )
        {
          System_Collections_Generic_List_bool___AddWithResize(
            v166,
            0,
            *(const MethodInfo_3463350 **)(*(_QWORD *)(v185[4] + 192LL) + 112LL));
LABEL_165:
          v187 = 0;
          goto LABEL_166;
        }
        v187 = 0;
        v166->fields._size = v186 + 1;
        v184->m_Items[v186 + 4] = 0;
      }
LABEL_166:
      if ( !v160 )
        goto LABEL_281;
      v188 = v160->fields._items;
      v189 = Method_System_Collections_Generic_List_int__Add__;
      ++v160->fields._version;
      if ( !v188 )
        goto LABEL_281;
      v190 = v160->fields._size;
      if ( (unsigned int)v190 >= v188->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v160,
          LimitCount,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v189[4] + 192LL) + 112LL));
      }
      else
      {
        v160->fields._size = v190 + 1;
        v188->m_Items[v190 + 1] = LimitCount;
      }
      if ( !v163 )
        goto LABEL_281;
      v191 = v163->fields._items;
      v192 = Method_System_Collections_Generic_List_int__Add__;
      ++v163->fields._version;
      if ( !v191 )
        goto LABEL_281;
      v193 = v163->fields._size;
      if ( (unsigned int)v193 >= v191->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v163,
          v187,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
      }
      else
      {
        v163->fields._size = v193 + 1;
        v191->m_Items[v193 + 1] = v187;
      }
      partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      if ( !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo);
        partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      }
      if ( ++v168 >= **(_DWORD **)&partyMemberItem[7].fields )
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
                                                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        v195 = System_Collections_Generic_List_int___ToArray(
                 v157,
                 (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
        v196 = System_Collections_Generic_List_int___ToArray(
                 v160,
                 (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                               v163,
                                               (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !v166 )
          goto LABEL_281;
        v197 = (System_Int32_array *)partyMemberItem;
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_bool___ToArray(
                                               v166,
                                               (const MethodInfo_3464EE4 *)Method_System_Collections_Generic_List_bool__ToArray__);
        if ( !Component_object )
          goto LABEL_281;
        v199 = v195;
        questRestrictionInfo = questRestrictionInfoa;
        RestrictionNotSatisfySlotIcons__SetServantIcons(
          Component_object,
          v199,
          v196,
          v197,
          (System_Boolean_array *)partyMemberItem,
          questRestrictionInfoa,
          v198);
        if ( !v154 )
          goto LABEL_281;
        iconsWidget = (Il2CppObject *)Component_object->fields.iconsWidget;
        v203 = v154->fields._items;
        v204 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++v154->fields._version;
        if ( !v203 )
          goto LABEL_281;
        v205 = v154->fields._size;
        if ( (unsigned int)v205 >= v203->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v154,
            iconsWidget,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
        }
        else
        {
          v206 = &v203->obj.klass + v205;
          v154->fields._size = v205 + 1;
          v206[4] = (Il2CppClass *)iconsWidget;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v206 + 4), (int32_t)iconsWidget, v200, v201);
        }
        v168 = 0;
        v207 = v157->fields._version + 1;
        v157->fields._size = 0;
        v157->fields._version = v207;
        v208 = v160->fields._version + 1;
        v160->fields._size = 0;
        v160->fields._version = v208;
        v209 = v163->fields._version + 1;
        v163->fields._size = 0;
        v163->fields._version = v209;
        v210 = v166->fields._version + 1;
        v166->fields._size = 0;
        v166->fields._version = v210;
      }
      ++v169;
      LODWORD(v167) = v273->max_length;
      if ( (__int64)v169 >= (int)v167 )
      {
        if ( v168 )
        {
          partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                                 (BaseMonoBehaviour_o *)this,
                                                 this->fields.servantIconsPrefab,
                                                 this->fields.iconParent,
                                                 0LL,
                                                 0LL);
          if ( partyMemberItem )
          {
            v211 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)partyMemberItem,
                                                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
            v212 = System_Collections_Generic_List_int___ToArray(
                     v157,
                     (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
            v213 = System_Collections_Generic_List_int___ToArray(
                     v160,
                     (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
            partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                                   v163,
                                                   (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
            if ( v166 )
            {
              v214 = (System_Int32_array *)partyMemberItem;
              partyMemberItem = (System_String_o *)System_Collections_Generic_List_bool___ToArray(
                                                     v166,
                                                     (const MethodInfo_3464EE4 *)Method_System_Collections_Generic_List_bool__ToArray__);
              if ( v211 )
              {
                RestrictionNotSatisfySlotIcons__SetServantIcons(
                  v211,
                  v212,
                  v213,
                  v214,
                  (System_Boolean_array *)partyMemberItem,
                  questRestrictionInfo,
                  v215);
                if ( v154 )
                {
                  v218 = (Il2CppObject *)v211->fields.iconsWidget;
                  v219 = v154->fields._items;
                  v220 = Method_System_Collections_Generic_List_UIWidget__Add__;
                  ++v154->fields._version;
                  if ( v219 )
                  {
                    v221 = v154->fields._size;
                    if ( (unsigned int)v221 >= v219->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v154,
                        v218,
                        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v220[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v222 = &v219->obj.klass + v221;
                      v154->fields._size = v221 + 1;
                      v222[4] = (Il2CppClass *)v218;
                      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v222 + 4), (int32_t)v218, v216, v217);
                    }
LABEL_230:
                    switchIcons = this->fields.switchIcons;
                    partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                                           v154,
                                                           (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                    if ( switchIcons )
                    {
                      v254 = (UIWidget_array *)partyMemberItem;
                      v255 = switchIcons;
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
        if ( v154 )
          goto LABEL_230;
        goto LABEL_281;
      }
    }
  }
  if ( !classImageIds )
    goto LABEL_281;
  if ( *(_QWORD *)&classImageIds->max_length )
  {
    v223 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                          System_Collections_Generic_List_UIWidget__TypeInfo,
                                                          v95,
                                                          v136);
    System_Collections_Generic_List_object____ctor(
      v223,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
    v226 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                       System_Collections_Generic_List_int__TypeInfo,
                                                       v224,
                                                       v225);
    System_Collections_Generic_List_int____ctor(
      v226,
      (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
    v227 = classImageIds;
    if ( !classImageIds )
      goto LABEL_281;
    v228 = *(_QWORD *)&classImageIds->max_length;
    if ( (int)v228 < 1 )
      goto LABEL_232;
    v229 = 0;
    v230 = 0LL;
    do
    {
      if ( v230 >= (unsigned int)v228 )
        goto LABEL_282;
      if ( !v226 )
        goto LABEL_281;
      v95 = (unsigned int)v227->m_Items[v230 + 1];
      v231 = v226->fields._items;
      v232 = Method_System_Collections_Generic_List_int__Add__;
      ++v226->fields._version;
      if ( !v231 )
        goto LABEL_281;
      v233 = v226->fields._size;
      if ( (unsigned int)v233 >= v231->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v226,
          v95,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v232[4] + 192LL) + 112LL));
      }
      else
      {
        v226->fields._size = v233 + 1;
        v231->m_Items[v233 + 1] = v95;
      }
      partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      if ( !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo);
        partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      }
      if ( ++v229 >= **(_DWORD **)&partyMemberItem[7].fields )
      {
        partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                               (BaseMonoBehaviour_o *)this,
                                               this->fields.servantIconsPrefab,
                                               this->fields.iconParent,
                                               0LL,
                                               0LL);
        if ( !partyMemberItem )
          goto LABEL_281;
        v234 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)partyMemberItem,
                                                     (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                               v226,
                                               (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !v234 )
          goto LABEL_281;
        RestrictionNotSatisfySlotIcons__SetClassIcons(v234, (System_Int32_array *)partyMemberItem, v235);
        if ( !v223 )
          goto LABEL_281;
        v238 = (Il2CppObject *)v234->fields.iconsWidget;
        v239 = v223->fields._items;
        v240 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++v223->fields._version;
        if ( !v239 )
          goto LABEL_281;
        v241 = v223->fields._size;
        if ( (unsigned int)v241 >= v239->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v223,
            v238,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v240[4] + 192LL) + 112LL));
        }
        else
        {
          v242 = &v239->obj.klass + v241;
          v223->fields._size = v241 + 1;
          v242[4] = (Il2CppClass *)v238;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v242 + 4), (int32_t)v238, v236, v237);
        }
        v229 = 0;
        v243 = v226->fields._version + 1;
        v226->fields._size = 0;
        v226->fields._version = v243;
      }
      LODWORD(v228) = v227->max_length;
      ++v230;
    }
    while ( (__int64)v230 < (int)v228 );
    if ( v229 )
    {
      partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)this,
                                             this->fields.servantIconsPrefab,
                                             this->fields.iconParent,
                                             0LL,
                                             0LL);
      if ( !partyMemberItem )
        goto LABEL_281;
      v244 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)partyMemberItem,
                                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
      partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                             v226,
                                             (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v244 )
        goto LABEL_281;
      RestrictionNotSatisfySlotIcons__SetClassIcons(v244, (System_Int32_array *)partyMemberItem, v245);
      if ( !v223 )
        goto LABEL_281;
      v248 = (Il2CppObject *)v244->fields.iconsWidget;
      v249 = v223->fields._items;
      v250 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++v223->fields._version;
      if ( !v249 )
        goto LABEL_281;
      v251 = v223->fields._size;
      if ( (unsigned int)v251 >= v249->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v223,
          v248,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v250[4] + 192LL) + 112LL));
      }
      else
      {
        v252 = &v249->obj.klass + v251;
        v223->fields._size = v251 + 1;
        v252[4] = (Il2CppClass *)v248;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v252 + 4), (int32_t)v248, v246, v247);
      }
    }
    else
    {
LABEL_232:
      if ( !v223 )
        goto LABEL_281;
    }
    v256 = this->fields.switchIcons;
    partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                           v223,
                                           (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( v256 )
    {
      v254 = (UIWidget_array *)partyMemberItem;
      v255 = v256;
LABEL_237:
      SwitchUIWidgetComponent__Set(v255, v254, 0LL);
      partyMemberItem = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
      if ( partyMemberItem )
      {
        SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)partyMemberItem, 0LL);
        goto LABEL_239;
      }
    }
LABEL_281:
    sub_1B64324(partyMemberItem);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F85D3 & 1) == 0 )
  {
    sub_1B640C8(&RestrictionNotSatisfySlot___c_TypeInfo, v1);
    byte_49F85D3 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(RestrictionNotSatisfySlot___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  RestrictionNotSatisfySlot___c_TypeInfo->static_fields->__9 = (struct RestrictionNotSatisfySlot___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)RestrictionNotSatisfySlot___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
  if ( (byte_49F85D4 & 1) == 0 )
  {
    this = (RestrictionNotSatisfySlot___c__DisplayClass14_0_o *)sub_1B640C8(
                                                                  &Method_System_Linq_Enumerable_Contains_int___,
                                                                  entity);
    byte_49F85D4 = 1;
  }
  if ( !entity )
    goto LABEL_13;
  memberItem = v4->fields.memberItem;
  if ( entity->fields.type != 9 )
  {
    if ( memberItem )
      goto LABEL_9;
LABEL_13:
    sub_1B64324(this);
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
         (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___)
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