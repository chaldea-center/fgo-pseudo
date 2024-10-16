void __fastcall RestrictionNotSatisfySlot___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AB1D6E & 1) == 0 )
  {
    sub_1BAB41C(&RestrictionNotSatisfySlot_TypeInfo, v1);
    byte_4AB1D6E = 1;
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

  if ( (byte_4AB1D6C & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, message);
    sub_1BAB41C(&string___TypeInfo, v4);
    sub_1BAB41C(&StringLiteral_43/*"\n"*/, v5);
    sub_1BAB41C(&StringLiteral_15861/*"[-]"*/, v6);
    sub_1BAB41C(&StringLiteral_11090/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v7);
    sub_1BAB41C(&StringLiteral_15966/*"[FFFF00]"*/, v8);
    byte_4AB1D6C = 1;
  }
  v9 = (System_String_o *)sub_1BAB4C4(string___TypeInfo, 5LL);
  if ( !v9 )
    sub_1BAB678(0LL, v10);
  v13 = v9;
  if ( !LODWORD(v9[1].klass) )
    goto LABEL_12;
  v14 = StringLiteral_15966/*"[FFFF00]"*/;
  v9[1].monitor = (void *)StringLiteral_15966/*"[FFFF00]"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v9[1].monitor, v14, v11, v12);
  if ( LODWORD(v13[1].klass) <= 1 )
    goto LABEL_12;
  v13[1].fields = (System_String_Fields)message;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v13[1].fields, (int32_t)message, v15, v16);
  if ( LODWORD(v13[1].klass) <= 2 )
    goto LABEL_12;
  v19 = StringLiteral_43/*"\n"*/;
  v13[2].klass = (System_String_c *)StringLiteral_43/*"\n"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v13[2], v19, v17, v18);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11090/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
  if ( LODWORD(v13[1].klass) <= 3
    || (v13[2].monitor = v9,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v13[2].monitor, (int32_t)v9, v20, v21),
        LODWORD(v13[1].klass) <= 4) )
  {
LABEL_12:
    sub_1BAB680(v9, v10);
  }
  v24 = (int)StringLiteral_15861/*"[-]"*/;
  v13[2].fields = (System_String_Fields)StringLiteral_15861/*"[-]"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v13[2].fields, v24, v22, v23);
  return System_String__Concat_62061656((System_String_array *)v13, 0LL);
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

  if ( (byte_4AB1D6B & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantClassMaster___, servantIds);
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1BAB41C(&DataManager_TypeInfo, v8);
    sub_1BAB41C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1BAB41C(&System_Collections_Generic_List_int__TypeInfo, v13);
    byte_4AB1D6B = 1;
  }
  v38 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantMaster___);
  v15 = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v16 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
  v17 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individuality )
    goto LABEL_29;
  v20 = *(_QWORD *)&individuality->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = 0LL;
    do
    {
      if ( v21 >= (unsigned int)v20 )
        sub_1BAB680(EntityByIndividuality, iconImageId);
      if ( !Master_object )
        goto LABEL_29;
      v22 = individuality->m_Items[v21 + 1];
      EntityByIndividuality = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                &entity,
                                v22,
                                (const MethodInfo_3163DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
            *(const MethodInfo_3530898 **)(*(_QWORD *)(v29 + 192) + 112LL));
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
                (const MethodInfo_3532350 *)Method_System_Collections_Generic_List_int__ToArray__),
        *servantIds = v31,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)servantIds, (int32_t)v31, v32, v33),
        !v17) )
  {
LABEL_29:
    sub_1BAB678(EntityByIndividuality, iconImageId);
  }
  v34 = System_Collections_Generic_List_int___ToArray(
          v17,
          (const MethodInfo_3532350 *)Method_System_Collections_Generic_List_int__ToArray__);
  *classImageIds = v34;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)classImageIds, (int32_t)v34, v35, v36);
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

  if ( (byte_4AB1D6D & 1) == 0 )
  {
    sub_1BAB41C(&System_Text_RegularExpressions_Regex_TypeInfo, message);
    sub_1BAB41C(&StringLiteral_15994/*"[[]-[\\]]"*/, v4);
    sub_1BAB41C(&StringLiteral_1/*""*/, v5);
    sub_1BAB41C(&StringLiteral_15995/*"[[][0-9A-F]{6}[\\]]"*/, v6);
    byte_4AB1D6D = 1;
  }
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  v7 = System_Text_RegularExpressions_Regex__Replace(
         message,
         (System_String_o *)StringLiteral_15995/*"[[][0-9A-F]{6}[\\]]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  return System_Text_RegularExpressions_Regex__Replace(
           v7,
           (System_String_o *)StringLiteral_15994/*"[[]-[\\]]"*/,
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
  long double v74; // q0
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
  int32_t v89; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x0
  const MethodInfo *v91; // x2
  System_String_o *v92; // x24
  System_String_c *klass; // x8
  unsigned __int64 v94; // x19
  int32_t v95; // w2
  int32_t v96; // w3
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
  int32_t v114; // w3
  struct System_Object_array *v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  Il2CppClass **v118; // x0
  SwitchUIWidgetComponent_o *switchMessage; // x20
  __n128 inited; // q0
  _QWORD *v121; // x20
  __int64 v122; // x8
  __int64 v123; // x0
  __int64 v124; // x0
  _QWORD *v125; // x20
  __int64 v126; // x8
  __int64 v127; // x0
  __int64 v128; // x0
  System_Collections_Generic_Dictionary_int__object__o *v129; // x20
  char v130; // w20
  const MethodInfo *v131; // x4
  bool IsSelectableNormalSupport; // w0
  QuestPhaseEntity_o *v133; // x8
  System_Collections_Generic_IEnumerable_T__o *v134; // x21
  System_Collections_Generic_List_int__o *v135; // x20
  struct System_Int32_array *v136; // x8
  _QWORD *v137; // x9
  __int64 v138; // x10
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_TSource__c *v140; // x8
  System_Int32_array *v141; // x3
  System_Collections_Generic_List_int__o *v142; // x22
  System_Collections_Generic_List_object__o *v143; // x20
  System_Collections_Generic_List_T__o *v144; // x21
  int32_t v145; // w23
  System_Collections_Generic_List_object__o *v146; // x21
  System_Collections_Generic_List_int__o *v147; // x22
  System_Collections_Generic_List_int__o *v148; // x24
  System_Collections_Generic_List_int__o *v149; // x25
  System_Collections_Generic_List_bool__o *v150; // x26
  __int64 v151; // x8
  int v152; // w19
  unsigned __int64 v153; // x23
  int32_t v154; // w28
  struct System_Int32_array *v155; // x8
  _QWORD *v156; // x9
  __int64 v157; // x10
  Il2CppObject *v158; // x0
  int32_t questId; // w20
  int32_t questPhase; // w27
  FollowerInfo_o *v161; // x29
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w29
  struct System_Boolean_array *v164; // x8
  _QWORD *v165; // x9
  __int64 v166; // x10
  struct System_Boolean_array *v167; // x8
  _QWORD *v168; // x9
  __int64 v169; // x10
  int32_t v170; // w20
  struct System_Int32_array *v171; // x8
  _QWORD *v172; // x9
  __int64 v173; // x10
  struct System_Int32_array *v174; // x8
  _QWORD *v175; // x9
  __int64 v176; // x10
  RestrictionNotSatisfySlotIcons_o *Component_object; // x20
  System_Int32_array *v178; // x27
  System_Int32_array *v179; // x28
  System_Int32_array *v180; // x29
  const MethodInfo *v181; // x6
  System_Int32_array *v182; // x1
  int32_t v183; // w2
  int32_t v184; // w3
  struct System_Object_array *v185; // x8
  _QWORD *v186; // x9
  __int64 v187; // x10
  Il2CppClass **v188; // x0
  int v189; // w8
  int v190; // w8
  int v191; // w8
  int v192; // w8
  RestrictionNotSatisfySlotIcons_o *v193; // x20
  System_Int32_array *v194; // x22
  System_Int32_array *v195; // x23
  System_Int32_array *v196; // x24
  const MethodInfo *v197; // x6
  int32_t v198; // w2
  int32_t v199; // w3
  struct System_Object_array *v200; // x8
  _QWORD *v201; // x9
  __int64 v202; // x10
  Il2CppClass **v203; // x0
  System_Collections_Generic_List_object__o *v204; // x20
  System_Collections_Generic_List_int__o *v205; // x21
  System_Int32_array *v206; // x19
  __int64 v207; // x8
  int v208; // w22
  unsigned __int64 v209; // x23
  struct System_Int32_array *v210; // x8
  _QWORD *v211; // x9
  __int64 v212; // x10
  RestrictionNotSatisfySlotIcons_o *v213; // x22
  const MethodInfo *v214; // x2
  int32_t v215; // w2
  int32_t v216; // w3
  struct System_Object_array *v217; // x8
  _QWORD *v218; // x9
  __int64 v219; // x10
  Il2CppClass **v220; // x0
  int v221; // w8
  RestrictionNotSatisfySlotIcons_o *v222; // x22
  const MethodInfo *v223; // x2
  int32_t v224; // w2
  int32_t v225; // w3
  struct System_Object_array *v226; // x8
  _QWORD *v227; // x9
  __int64 v228; // x10
  Il2CppClass **v229; // x0
  struct SwitchUIWidgetComponent_o *switchIcons; // x20
  UIWidget_array *v231; // x1
  SwitchUIWidgetComponent_o *v232; // x0
  struct SwitchUIWidgetComponent_o *v233; // x21
  PartyOrganizationListViewItem_o *v234; // x8
  int32_t v235; // w2
  int32_t v236; // w3
  struct System_Object_array *v237; // x8
  _QWORD *v238; // x9
  __int64 v239; // x10
  System_String_o *v240; // x1
  Il2CppClass **v241; // x0
  int v242; // w19
  int32_t v243; // w20
  Il2CppObject *Item; // x0
  const MethodInfo *v245; // x2
  Il2CppObject *fixed; // x0
  NpcFollowerMaster_o *v247; // [xsp+48h] [xbp-108h]
  NpcServantFollowerMaster_o *Master_object; // [xsp+50h] [xbp-100h]
  UserServantCollectionMaster_o *MasterData_object; // [xsp+58h] [xbp-F8h]
  System_Int32_array *v250; // [xsp+60h] [xbp-F0h]
  int32_t *v251; // [xsp+68h] [xbp-E8h]
  QuestRestrictionInfo_o *questRestrictionInfoa; // [xsp+70h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v254; // [xsp+80h] [xbp-D0h] BYREF
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+98h] [xbp-B8h] BYREF
  QuestPhaseEntity_o *v256; // [xsp+A0h] [xbp-B0h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+A8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v258; // [xsp+B0h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+D0h] [xbp-80h] BYREF
  System_Int32_array *classImageIds; // [xsp+D8h] [xbp-78h] BYREF
  System_Int32_array *servantIds; // [xsp+E0h] [xbp-70h] BYREF
  int32_t pos; // [xsp+ECh] [xbp-64h] BYREF

  pos = number;
  if ( (byte_4AB1D6A & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Array_Empty_int___, *(_QWORD *)&number);
    sub_1BAB41C(&Method_System_Array_Empty_RestrictionEntity___, v7);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8);
    sub_1BAB41C(&Method_DataManager_GetMaster_NpcFollowerMaster___, v9);
    sub_1BAB41C(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v10);
    sub_1BAB41C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v11);
    sub_1BAB41C(&DataManager_TypeInfo, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v13);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, v14);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v15);
    sub_1BAB41C(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v16);
    sub_1BAB41C(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___, v17);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v18);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v19);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v20);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v21);
    sub_1BAB41C(&System_Func_RestrictionEntity__bool__TypeInfo, v22);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___, v23);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__AddRange__, v24);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Add__, v25);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UIWidget__Add__, v26);
    sub_1BAB41C(&Method_System_Collections_Generic_List_bool__Add__, v27);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__Add__, v28);
    sub_1BAB41C(&Method_System_Collections_Generic_List_bool__Clear__, v29);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Clear__, v30);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v31);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v32);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__ToArray__, v33);
    sub_1BAB41C(&Method_System_Collections_Generic_List_bool__ToArray__, v34);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int___ctor__, v35);
    sub_1BAB41C(&Method_System_Collections_Generic_List_bool___ctor__, v36);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UIWidget___ctor__, v37);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string___ctor__, v38);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int___ctor___76401816, v39);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int____get_Count__, v40);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v41);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__get_Count__, v42);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__get_Item__, v43);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int____get_Item__, v44);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v45);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__set_Item__, v46);
    sub_1BAB41C(&System_Collections_Generic_List_bool__TypeInfo, v47);
    sub_1BAB41C(&System_Collections_Generic_List_int__TypeInfo, v48);
    sub_1BAB41C(&System_Collections_Generic_List_string__TypeInfo, v49);
    sub_1BAB41C(&System_Collections_Generic_List_UIWidget__TypeInfo, v50);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v51);
    sub_1BAB41C(&NetworkManager_TypeInfo, v52);
    sub_1BAB41C(&Method_UnityEngine_Object_Instantiate_UILabel____76537880, v53);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v54);
    sub_1BAB41C(&RestrictionNotSatisfySlot_TypeInfo, v55);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v56);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v57);
    sub_1BAB41C(&Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__, v58);
    sub_1BAB41C(&Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__, v59);
    sub_1BAB41C(&RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo, v60);
    sub_1BAB41C(&RestrictionNotSatisfySlot___c_TypeInfo, v61);
    sub_1BAB41C(&StringLiteral_43/*"\n"*/, v62);
    sub_1BAB41C(&StringLiteral_21417/*"member_txt_"*/, v63);
    sub_1BAB41C(&StringLiteral_11087/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/, v64);
    sub_1BAB41C(&StringLiteral_1/*""*/, v65);
    byte_4AB1D6A = 1;
  }
  classImageIds = 0LL;
  servantIds = 0LL;
  npcInfoDictionary = 0LL;
  memset(&v258, 0, sizeof(v258));
  v256 = 0LL;
  entity = 0LL;
  npcServantFollowerEntity = 0LL;
  v66 = sub_1BAB668(RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v66, 0LL);
  if ( !v66 )
    goto LABEL_281;
  *(_QWORD *)(v66 + 16) = memberItem;
  v71 = (PartyOrganizationListViewItem_o **)(v66 + 16);
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v66 + 16), (int32_t)memberItem, v69, v70);
  numberSprite = this->fields.numberSprite;
  v73 = System_Int32__ToString((int32_t)&pos, 0LL);
  partyMemberItem = System_String__Concat_62048128((System_String_o *)StringLiteral_21417/*"member_txt_"*/, v73, 0LL);
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
  v75 = Method_System_Array_Empty_RestrictionEntity___;
  v76 = *((_QWORD *)Method_System_Array_Empty_RestrictionEntity___ + 7);
  if ( !v76 )
  {
    sub_1BFD354(Method_System_Array_Empty_RestrictionEntity___);
    v76 = v75[7];
  }
  v77 = *(_QWORD *)(v76 + 16);
  if ( (*(_BYTE *)(v77 + 309) & 1) == 0 )
    v77 = sub_1BFD2F8(v74);
  if ( !*(_DWORD *)(v77 + 224) )
    *(__n128 *)&v74 = j_il2cpp_runtime_class_init_0(v77);
  v78 = *(_QWORD *)(v75[7] + 16LL);
  if ( (*(_BYTE *)(v78 + 309) & 1) == 0 )
    v78 = sub_1BFD2F8(v74);
  v79 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v78 + 184);
  v80 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v80,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !questRestrictionInfo )
    goto LABEL_281;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  questRestrictionInfoa = questRestrictionInfo;
  if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
  {
    restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
    v82 = (System_Func_object__bool__o *)sub_1BAB668(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v82,
      (Il2CppObject *)v66,
      Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__,
      0LL);
    v83 = System_Linq_Enumerable__Where_object_(
            restrictionEntityList,
            (System_Func_TSource__bool__o *)v82,
            (const MethodInfo_2F02B34 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    v79 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 v83,
                                                                 (const MethodInfo_2EFD0EC *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
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
        _9__14_1 = (System_Func_object__bool__o *)sub_1BAB668(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__14_1, v86, Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__, 0LL);
        static_fields = RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
        static_fields->__9__14_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__14_1;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_1, (int32_t)_9__14_1, v88, v89);
      }
      v90 = System_Linq_Enumerable__Where_object_(
              v79,
              (System_Func_TSource__bool__o *)_9__14_1,
              (const MethodInfo_2F02B34 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v79 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                   v90,
                                                                   (const MethodInfo_2EFD0EC *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    }
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetMessages_40826900(
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
  v92 = partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_281;
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
        goto LABEL_281;
      partyMemberItem = System_String__Replace_62067756(
                          partyMemberItem,
                          (System_String_o *)StringLiteral_43/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
      if ( !v80 )
        goto LABEL_281;
      items = v80->fields._items;
      v98 = Method_System_Collections_Generic_List_string__Add__;
      ++v80->fields._version;
      if ( !items )
        goto LABEL_281;
      size = v80->fields._size;
      v100 = partyMemberItem;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v80,
          (Il2CppObject *)partyMemberItem,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
      }
      else
      {
        v101 = &items->obj.klass + size;
        v80->fields._size = size + 1;
        v101[4] = (Il2CppClass *)v100;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v101 + 4), (int32_t)v100, v95, v96);
      }
      LODWORD(klass) = v92[1].klass;
      if ( (__int64)++v94 >= (int)klass )
        goto LABEL_40;
    }
LABEL_282:
    sub_1BAB680(partyMemberItem, UserId);
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
        v234 = *v71;
        if ( !*v71 )
          goto LABEL_281;
        if ( v234->fields.isUniqueSvtRestriction
          || v234->fields.isUniqueIndividualityRestriction
          || (v234->fields.fatigureTime & 0x8000000000000000LL) == 0
          || v234->fields._IsAllOutBattle_k__BackingField
          || v234->fields._IsDataLost_k__BackingField
          || v234->fields._TimesToRestart_k__BackingField > 0
          || v234->fields._IsNotSupportSingle_k__BackingField
          || v234->fields.isFixedServantPositionRestriction
          || v234->fields.isFixedSupportPositionRestriction )
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
            partyMemberItem = LocalizationManager__Get((System_String_o *)StringLiteral_11087/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/, 0LL);
            if ( !v80 )
              goto LABEL_281;
            v237 = v80->fields._items;
            v238 = Method_System_Collections_Generic_List_string__Add__;
            ++v80->fields._version;
            if ( !v237 )
              goto LABEL_281;
            v239 = v80->fields._size;
            v240 = partyMemberItem;
            if ( (unsigned int)v239 >= v237->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v80,
                (Il2CppObject *)partyMemberItem,
                *(const MethodInfo_354D8BC **)(*(_QWORD *)(v238[4] + 192LL) + 112LL));
            }
            else
            {
              v241 = &v237->obj.klass + v239;
              v80->fields._size = v239 + 1;
              v241[4] = (Il2CppClass *)v240;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v241 + 4), (int32_t)v240, v235, v236);
            }
            v242 = 1;
          }
          else
          {
LABEL_271:
            v242 = 0;
          }
          partyMemberItem = (System_String_o *)*v71;
          if ( !*v71 )
            goto LABEL_281;
          partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsQuestRestriction(
                                                 (PartyOrganizationListViewItem_o *)partyMemberItem,
                                                 0LL);
          if ( v242 | (unsigned __int8)partyMemberItem & 1 )
          {
            if ( !v80 )
              goto LABEL_281;
            if ( v80->fields._size >= 1 )
            {
              v243 = 0;
              do
              {
                Item = System_Collections_Generic_List_object___get_Item(
                         v80,
                         v243,
                         (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_string__get_Item__);
                fixed = (Il2CppObject *)RestrictionNotSatisfySlot__AddColorCodeAndFixMessage(
                                          (RestrictionNotSatisfySlot_o *)Item,
                                          (System_String_o *)Item,
                                          v245);
                System_Collections_Generic_List_object___set_Item(
                  v80,
                  v243++,
                  fixed,
                  (const MethodInfo_354D640 *)Method_System_Collections_Generic_List_string__set_Item__);
              }
              while ( v243 < v80->fields._size );
            }
          }
        }
      }
    }
  }
  v102 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v102,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  if ( !v80 )
    goto LABEL_281;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v254,
    v80,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v258 = v254;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v258,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    restrictionLabelRoot = this->fields.restrictionLabelRoot;
    if ( !restrictionLabelRoot )
      sub_1BAB678(0LL, v103);
    current = v258.fields._current;
    restrictionLabel = (Il2CppObject *)this->fields.restrictionLabel;
    transform = UnityEngine_GameObject__get_transform(restrictionLabelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v108 = UnityEngine_Object__Instantiate_object__49579268(
             restrictionLabel,
             transform,
             (const MethodInfo_2F48504 *)Method_UnityEngine_Object_Instantiate_UILabel____76537880);
    v110 = v108;
    if ( !v108 )
      sub_1BAB678(0LL, v109);
    UILabel__set_text((UILabel_o *)v108, (System_String_o *)current, 0LL);
    if ( !v102 )
      sub_1BAB678(v111, v112);
    v115 = v102->fields._items;
    v116 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++v102->fields._version;
    if ( !v115 )
      sub_1BAB678(v111, v112);
    v117 = v102->fields._size;
    if ( (unsigned int)v117 >= v115->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v102,
        v110,
        *(const MethodInfo_354D8BC **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
    }
    else
    {
      v118 = &v115->obj.klass + v117;
      v102->fields._size = v117 + 1;
      v118[4] = (Il2CppClass *)v110;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v118 + 4), (int32_t)v110, v113, v114);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v258,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v102 )
    goto LABEL_281;
  switchMessage = this->fields.switchMessage;
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                         v102,
                                         (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !switchMessage )
    goto LABEL_281;
  SwitchUIWidgetComponent__Set(switchMessage, (UIWidget_array *)partyMemberItem, 0LL);
  v121 = Method_System_Array_Empty_int___;
  v122 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v122 )
  {
    sub_1BFD354(Method_System_Array_Empty_int___);
    v122 = v121[7];
  }
  v123 = *(_QWORD *)(v122 + 16);
  if ( (*(_BYTE *)(v123 + 309) & 1) == 0 )
    v123 = sub_1BFD2F8(*(long double *)&inited);
  if ( !*(_DWORD *)(v123 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v123);
  v124 = *(_QWORD *)(v121[7] + 16LL);
  if ( (*(_BYTE *)(v124 + 309) & 1) == 0 )
    v124 = sub_1BFD2F8(*(long double *)&inited);
  v125 = Method_System_Array_Empty_int___;
  servantIds = **(System_Int32_array ***)(v124 + 184);
  v126 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v126 )
  {
    sub_1BFD354(Method_System_Array_Empty_int___);
    v126 = v125[7];
  }
  v127 = *(_QWORD *)(v126 + 16);
  if ( (*(_BYTE *)(v127 + 309) & 1) == 0 )
    v127 = sub_1BFD2F8(*(long double *)&inited);
  if ( !*(_DWORD *)(v127 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v127);
  v128 = *(_QWORD *)(v125[7] + 16LL);
  if ( (*(_BYTE *)(v128 + 309) & 1) == 0 )
    v128 = sub_1BFD2F8(*(long double *)&inited);
  classImageIds = **(System_Int32_array ***)(v128 + 184);
  v129 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BAB668(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v129,
    (const MethodInfo_31B6460 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v129;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( !*v71 )
    goto LABEL_281;
  v130 = (char)partyMemberItem;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_40849320(
                                         questRestrictionInfo,
                                         (*v71)->fields._InitPos_k__BackingField,
                                         0LL);
  if ( (v130 & 1) == 0 )
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
      partyMemberItem = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !partyMemberItem )
        goto LABEL_281;
      partyMemberItem = (System_String_o *)QuestPhaseMaster__TryGetEntity(
                                             (QuestPhaseMaster_o *)partyMemberItem,
                                             &v256,
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
      v133 = v256;
      if ( !v256 )
        goto LABEL_125;
      goto LABEL_100;
    }
    v142 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v142,
      (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !*v71 )
      goto LABEL_281;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetNeedIndividualityList(
                                           questRestrictionInfo,
                                           (*v71)->fields._InitPos_k__BackingField,
                                           0LL);
    if ( !*v71 )
      goto LABEL_281;
    v143 = (System_Collections_Generic_List_object__o *)partyMemberItem;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetRangeTypeList(
                                           questRestrictionInfo,
                                           (*v71)->fields._InitPos_k__BackingField,
                                           0LL);
    if ( !v143 )
      goto LABEL_281;
    if ( v143->fields._size >= 1 )
    {
      v144 = (System_Collections_Generic_List_T__o *)partyMemberItem;
      v145 = 0;
      do
      {
        if ( !v144 )
          goto LABEL_281;
        if ( v144->fields._size > v145 )
        {
          partyMemberItem = (System_String_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                 v144,
                                                 v145,
                                                 (const MethodInfo_3532DD4 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          if ( (_DWORD)partyMemberItem == 1 )
          {
            partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                                   v143,
                                                   v145,
                                                   (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_int____get_Item__);
            if ( !v142 )
              goto LABEL_281;
            System_Collections_Generic_List_int___AddRange(
              v142,
              (System_Collections_Generic_IEnumerable_T__o *)partyMemberItem,
              (const MethodInfo_3530AA4 *)Method_System_Collections_Generic_List_int__AddRange__);
          }
        }
        ++v145;
      }
      while ( v145 < v143->fields._size );
    }
    if ( !v142 )
      goto LABEL_281;
    partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                           v142,
                                           (const MethodInfo_3532350 *)Method_System_Collections_Generic_List_int__ToArray__);
    v141 = (System_Int32_array *)partyMemberItem;
LABEL_124:
    RestrictionNotSatisfySlot__GetIconIdFromIndividuality(
      (RestrictionNotSatisfySlot_o *)partyMemberItem,
      &servantIds,
      &classImageIds,
      v141,
      v131);
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
    v140 = v79[2].klass;
    if ( !v140 )
      goto LABEL_281;
    v141 = *(System_Int32_array **)&v140->_1.byval_arg.bits;
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
  partyMemberItem = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
  v133 = entity;
  if ( !entity )
    goto LABEL_125;
LABEL_100:
  if ( !IsSelectableNormalSupport || v133->fields.isNpcOnly )
    goto LABEL_125;
  v134 = (System_Collections_Generic_IEnumerable_T__o *)servantIds;
  v135 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_55771500(
    v135,
    v134,
    (const MethodInfo_353016C *)Method_System_Collections_Generic_List_int___ctor___76401816);
  if ( !v135 )
    goto LABEL_281;
  v136 = v135->fields._items;
  v137 = Method_System_Collections_Generic_List_int__Add__;
  ++v135->fields._version;
  if ( !v136 )
    goto LABEL_281;
  v138 = v135->fields._size;
  if ( (unsigned int)v138 >= v136->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v135,
      0,
      *(const MethodInfo_3530898 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
  }
  else
  {
    v135->fields._size = v138 + 1;
    v136->m_Items[v138 + 1] = 0;
  }
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                         v135,
                                         (const MethodInfo_3532350 *)Method_System_Collections_Generic_List_int__ToArray__);
  servantIds = (System_Int32_array *)partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_281;
LABEL_126:
  if ( partyMemberItem[1].klass )
  {
    partyMemberItem = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !partyMemberItem )
      goto LABEL_281;
    MasterData_object = (UserServantCollectionMaster_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)partyMemberItem,
                                                           (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (NpcServantFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    v247 = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    v146 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_UIWidget__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v146,
      (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
    v147 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v147,
      (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
    v148 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v148,
      (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
    v149 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v149,
      (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
    v150 = (System_Collections_Generic_List_bool__o *)sub_1BAB668(System_Collections_Generic_List_bool__TypeInfo);
    System_Collections_Generic_List_bool____ctor(
      v150,
      (const MethodInfo_3504024 *)Method_System_Collections_Generic_List_bool___ctor__);
    if ( !servantIds )
      goto LABEL_281;
    v151 = *(_QWORD *)&servantIds->max_length;
    if ( (int)v151 < 1 )
      goto LABEL_227;
    v152 = 0;
    v153 = 0LL;
    v250 = servantIds;
    v251 = &servantIds->m_Items[1];
    while ( 1 )
    {
      if ( v153 >= (unsigned int)v151 )
        goto LABEL_282;
      if ( !v147 )
        goto LABEL_281;
      v154 = v251[v153];
      v155 = v147->fields._items;
      v156 = Method_System_Collections_Generic_List_int__Add__;
      ++v147->fields._version;
      if ( !v155 )
        goto LABEL_281;
      v157 = v147->fields._size;
      if ( (unsigned int)v157 >= v155->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v147,
          v154,
          *(const MethodInfo_3530898 **)(*(_QWORD *)(v156[4] + 192LL) + 112LL));
      }
      else
      {
        v147->fields._size = v157 + 1;
        v155->m_Items[v157 + 1] = v154;
      }
      partyMemberItem = (System_String_o *)npcInfoDictionary;
      if ( !npcInfoDictionary )
        goto LABEL_281;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
              v154,
              (const MethodInfo_31B7028 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
        goto LABEL_289;
      partyMemberItem = (System_String_o *)npcInfoDictionary;
      if ( !npcInfoDictionary )
        goto LABEL_281;
      v158 = System_Collections_Generic_Dictionary_int__object___get_Item(
               (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
               v154,
               (const MethodInfo_31B6D94 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
      if ( v158 )
      {
        questId = questRestrictionInfo->fields.questId;
        questPhase = questRestrictionInfo->fields.questPhase;
        v161 = (FollowerInfo_o *)v158;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0LL);
        LimitCount = FollowerInfo__getLimitCount(v161, 0, ReturnTypeByQuestId, 0LL);
        partyMemberItem = (System_String_o *)Master_object;
        if ( !Master_object )
          goto LABEL_281;
        partyMemberItem = (System_String_o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                               Master_object,
                                               &npcServantFollowerEntity,
                                               questId,
                                               questPhase,
                                               v154,
                                               0LL);
        if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
          goto LABEL_164;
        if ( !npcServantFollowerEntity )
          goto LABEL_281;
        partyMemberItem = (System_String_o *)NpcServantFollowerEntity__IsHideRarity(
                                               npcServantFollowerEntity->fields.flag,
                                               0LL);
        if ( !v150 )
          goto LABEL_281;
        v164 = v150->fields._items;
        v165 = Method_System_Collections_Generic_List_bool__Add__;
        ++v150->fields._version;
        if ( !v164 )
          goto LABEL_281;
        v166 = v150->fields._size;
        if ( (unsigned int)v166 >= v164->max_length )
        {
          System_Collections_Generic_List_bool___AddWithResize(
            v150,
            (unsigned __int8)partyMemberItem & 1,
            *(const MethodInfo_3504888 **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
        }
        else
        {
          v150->fields._size = v166 + 1;
          v164->m_Items[v166 + 4] = (unsigned __int8)partyMemberItem & 1;
        }
        partyMemberItem = (System_String_o *)v247;
        if ( !npcServantFollowerEntity || !v247 )
          goto LABEL_281;
        partyMemberItem = (System_String_o *)NpcFollowerMaster__GetEntity_39822392(
                                               v247,
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
        v170 = (int)partyMemberItem;
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
                                               v154,
                                               0LL);
        if ( !partyMemberItem )
          goto LABEL_281;
        if ( !v150 )
          goto LABEL_281;
        LimitCount = (int32_t)partyMemberItem[2].monitor;
        v167 = v150->fields._items;
        v168 = Method_System_Collections_Generic_List_bool__Add__;
        ++v150->fields._version;
        if ( !v167 )
          goto LABEL_281;
        v169 = v150->fields._size;
        if ( (unsigned int)v169 >= v167->max_length )
        {
          System_Collections_Generic_List_bool___AddWithResize(
            v150,
            0,
            *(const MethodInfo_3504888 **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
LABEL_165:
          v170 = 0;
          goto LABEL_166;
        }
        v170 = 0;
        v150->fields._size = v169 + 1;
        v167->m_Items[v169 + 4] = 0;
      }
LABEL_166:
      if ( !v148 )
        goto LABEL_281;
      v171 = v148->fields._items;
      v172 = Method_System_Collections_Generic_List_int__Add__;
      ++v148->fields._version;
      if ( !v171 )
        goto LABEL_281;
      v173 = v148->fields._size;
      if ( (unsigned int)v173 >= v171->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v148,
          LimitCount,
          *(const MethodInfo_3530898 **)(*(_QWORD *)(v172[4] + 192LL) + 112LL));
      }
      else
      {
        v148->fields._size = v173 + 1;
        v171->m_Items[v173 + 1] = LimitCount;
      }
      if ( !v149 )
        goto LABEL_281;
      v174 = v149->fields._items;
      v175 = Method_System_Collections_Generic_List_int__Add__;
      ++v149->fields._version;
      if ( !v174 )
        goto LABEL_281;
      v176 = v149->fields._size;
      if ( (unsigned int)v176 >= v174->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v149,
          v170,
          *(const MethodInfo_3530898 **)(*(_QWORD *)(v175[4] + 192LL) + 112LL));
      }
      else
      {
        v149->fields._size = v176 + 1;
        v174->m_Items[v176 + 1] = v170;
      }
      partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      if ( !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo);
        partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      }
      if ( ++v152 >= **(_DWORD **)&partyMemberItem[7].fields )
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
                                                                 (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        v178 = System_Collections_Generic_List_int___ToArray(
                 v147,
                 (const MethodInfo_3532350 *)Method_System_Collections_Generic_List_int__ToArray__);
        v179 = System_Collections_Generic_List_int___ToArray(
                 v148,
                 (const MethodInfo_3532350 *)Method_System_Collections_Generic_List_int__ToArray__);
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                               v149,
                                               (const MethodInfo_3532350 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !v150 )
          goto LABEL_281;
        v180 = (System_Int32_array *)partyMemberItem;
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_bool___ToArray(
                                               v150,
                                               (const MethodInfo_3506374 *)Method_System_Collections_Generic_List_bool__ToArray__);
        if ( !Component_object )
          goto LABEL_281;
        v182 = v178;
        questRestrictionInfo = questRestrictionInfoa;
        RestrictionNotSatisfySlotIcons__SetServantIcons(
          Component_object,
          v182,
          v179,
          v180,
          (System_Boolean_array *)partyMemberItem,
          questRestrictionInfoa,
          v181);
        if ( !v146 )
          goto LABEL_281;
        UserId = (int64_t)Component_object->fields.iconsWidget;
        v185 = v146->fields._items;
        v186 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++v146->fields._version;
        if ( !v185 )
          goto LABEL_281;
        v187 = v146->fields._size;
        if ( (unsigned int)v187 >= v185->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v146,
            (Il2CppObject *)UserId,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
        }
        else
        {
          v188 = &v185->obj.klass + v187;
          v146->fields._size = v187 + 1;
          v188[4] = (Il2CppClass *)UserId;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v188 + 4), UserId, v183, v184);
        }
        v152 = 0;
        v189 = v147->fields._version + 1;
        v147->fields._size = 0;
        v147->fields._version = v189;
        v190 = v148->fields._version + 1;
        v148->fields._size = 0;
        v148->fields._version = v190;
        v191 = v149->fields._version + 1;
        v149->fields._size = 0;
        v149->fields._version = v191;
        v192 = v150->fields._version + 1;
        v150->fields._size = 0;
        v150->fields._version = v192;
      }
      ++v153;
      LODWORD(v151) = v250->max_length;
      if ( (__int64)v153 >= (int)v151 )
      {
        if ( v152 )
        {
          partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                                 (BaseMonoBehaviour_o *)this,
                                                 this->fields.servantIconsPrefab,
                                                 this->fields.iconParent,
                                                 0LL,
                                                 0LL);
          if ( partyMemberItem )
          {
            v193 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)partyMemberItem,
                                                         (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
            v194 = System_Collections_Generic_List_int___ToArray(
                     v147,
                     (const MethodInfo_3532350 *)Method_System_Collections_Generic_List_int__ToArray__);
            v195 = System_Collections_Generic_List_int___ToArray(
                     v148,
                     (const MethodInfo_3532350 *)Method_System_Collections_Generic_List_int__ToArray__);
            partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                                   v149,
                                                   (const MethodInfo_3532350 *)Method_System_Collections_Generic_List_int__ToArray__);
            if ( v150 )
            {
              v196 = (System_Int32_array *)partyMemberItem;
              partyMemberItem = (System_String_o *)System_Collections_Generic_List_bool___ToArray(
                                                     v150,
                                                     (const MethodInfo_3506374 *)Method_System_Collections_Generic_List_bool__ToArray__);
              if ( v193 )
              {
                RestrictionNotSatisfySlotIcons__SetServantIcons(
                  v193,
                  v194,
                  v195,
                  v196,
                  (System_Boolean_array *)partyMemberItem,
                  questRestrictionInfo,
                  v197);
                if ( v146 )
                {
                  UserId = (int64_t)v193->fields.iconsWidget;
                  v200 = v146->fields._items;
                  v201 = Method_System_Collections_Generic_List_UIWidget__Add__;
                  ++v146->fields._version;
                  if ( v200 )
                  {
                    v202 = v146->fields._size;
                    if ( (unsigned int)v202 >= v200->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v146,
                        (Il2CppObject *)UserId,
                        *(const MethodInfo_354D8BC **)(*(_QWORD *)(v201[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v203 = &v200->obj.klass + v202;
                      v146->fields._size = v202 + 1;
                      v203[4] = (Il2CppClass *)UserId;
                      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v203 + 4), UserId, v198, v199);
                    }
LABEL_230:
                    switchIcons = this->fields.switchIcons;
                    partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                                           v146,
                                                           (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                    if ( switchIcons )
                    {
                      v231 = (UIWidget_array *)partyMemberItem;
                      v232 = switchIcons;
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
        if ( v146 )
          goto LABEL_230;
        goto LABEL_281;
      }
    }
  }
  if ( !classImageIds )
    goto LABEL_281;
  if ( *(_QWORD *)&classImageIds->max_length )
  {
    v204 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_UIWidget__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v204,
      (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
    v205 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v205,
      (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
    v206 = classImageIds;
    if ( !classImageIds )
      goto LABEL_281;
    v207 = *(_QWORD *)&classImageIds->max_length;
    if ( (int)v207 < 1 )
      goto LABEL_232;
    v208 = 0;
    v209 = 0LL;
    do
    {
      if ( v209 >= (unsigned int)v207 )
        goto LABEL_282;
      if ( !v205 )
        goto LABEL_281;
      UserId = (unsigned int)v206->m_Items[v209 + 1];
      v210 = v205->fields._items;
      v211 = Method_System_Collections_Generic_List_int__Add__;
      ++v205->fields._version;
      if ( !v210 )
        goto LABEL_281;
      v212 = v205->fields._size;
      if ( (unsigned int)v212 >= v210->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v205,
          UserId,
          *(const MethodInfo_3530898 **)(*(_QWORD *)(v211[4] + 192LL) + 112LL));
      }
      else
      {
        v205->fields._size = v212 + 1;
        v210->m_Items[v212 + 1] = UserId;
      }
      partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      if ( !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo);
        partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      }
      if ( ++v208 >= **(_DWORD **)&partyMemberItem[7].fields )
      {
        partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                               (BaseMonoBehaviour_o *)this,
                                               this->fields.servantIconsPrefab,
                                               this->fields.iconParent,
                                               0LL,
                                               0LL);
        if ( !partyMemberItem )
          goto LABEL_281;
        v213 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)partyMemberItem,
                                                     (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                               v205,
                                               (const MethodInfo_3532350 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !v213 )
          goto LABEL_281;
        RestrictionNotSatisfySlotIcons__SetClassIcons(v213, (System_Int32_array *)partyMemberItem, v214);
        if ( !v204 )
          goto LABEL_281;
        UserId = (int64_t)v213->fields.iconsWidget;
        v217 = v204->fields._items;
        v218 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++v204->fields._version;
        if ( !v217 )
          goto LABEL_281;
        v219 = v204->fields._size;
        if ( (unsigned int)v219 >= v217->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v204,
            (Il2CppObject *)UserId,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v218[4] + 192LL) + 112LL));
        }
        else
        {
          v220 = &v217->obj.klass + v219;
          v204->fields._size = v219 + 1;
          v220[4] = (Il2CppClass *)UserId;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v220 + 4), UserId, v215, v216);
        }
        v208 = 0;
        v221 = v205->fields._version + 1;
        v205->fields._size = 0;
        v205->fields._version = v221;
      }
      LODWORD(v207) = v206->max_length;
      ++v209;
    }
    while ( (__int64)v209 < (int)v207 );
    if ( v208 )
    {
      partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)this,
                                             this->fields.servantIconsPrefab,
                                             this->fields.iconParent,
                                             0LL,
                                             0LL);
      if ( !partyMemberItem )
        goto LABEL_281;
      v222 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)partyMemberItem,
                                                   (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
      partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                             v205,
                                             (const MethodInfo_3532350 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v222 )
        goto LABEL_281;
      RestrictionNotSatisfySlotIcons__SetClassIcons(v222, (System_Int32_array *)partyMemberItem, v223);
      if ( !v204 )
        goto LABEL_281;
      UserId = (int64_t)v222->fields.iconsWidget;
      v226 = v204->fields._items;
      v227 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++v204->fields._version;
      if ( !v226 )
        goto LABEL_281;
      v228 = v204->fields._size;
      if ( (unsigned int)v228 >= v226->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v204,
          (Il2CppObject *)UserId,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v227[4] + 192LL) + 112LL));
      }
      else
      {
        v229 = &v226->obj.klass + v228;
        v204->fields._size = v228 + 1;
        v229[4] = (Il2CppClass *)UserId;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v229 + 4), UserId, v224, v225);
      }
    }
    else
    {
LABEL_232:
      if ( !v204 )
        goto LABEL_281;
    }
    v233 = this->fields.switchIcons;
    partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                           v204,
                                           (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( v233 )
    {
      v231 = (UIWidget_array *)partyMemberItem;
      v232 = v233;
LABEL_237:
      SwitchUIWidgetComponent__Set(v232, v231, 0LL);
      partyMemberItem = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
      if ( partyMemberItem )
      {
        SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)partyMemberItem, 0LL);
        goto LABEL_239;
      }
    }
LABEL_281:
    sub_1BAB678(partyMemberItem, UserId);
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

  if ( (byte_4AB1D6F & 1) == 0 )
  {
    sub_1BAB41C(&RestrictionNotSatisfySlot___c_TypeInfo, v1);
    byte_4AB1D6F = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(RestrictionNotSatisfySlot___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RestrictionNotSatisfySlot___c_TypeInfo->static_fields->__9 = (struct RestrictionNotSatisfySlot___c_o *)v2;
  sub_1BAB3C0(
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
    sub_1BAB678(this, 0LL);
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
  if ( (byte_4AB1D70 & 1) == 0 )
  {
    this = (RestrictionNotSatisfySlot___c__DisplayClass14_0_o *)sub_1BAB41C(
                                                                  &Method_System_Linq_Enumerable_Contains_int___,
                                                                  entity);
    byte_4AB1D70 = 1;
  }
  if ( !entity )
    goto LABEL_13;
  memberItem = v4->fields.memberItem;
  if ( entity->fields.type != 9 )
  {
    if ( memberItem )
      goto LABEL_9;
LABEL_13:
    sub_1BAB678(this, entity);
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
         (const MethodInfo_2EDD8B4 *)Method_System_Linq_Enumerable_Contains_int___)
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