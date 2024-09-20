void __fastcall RestrictionNotSatisfySlot___cctor(const MethodInfo *method)
{
  if ( (byte_4A572A1 & 1) == 0 )
  {
    sub_1B885B0(&RestrictionNotSatisfySlot_TypeInfo);
    byte_4A572A1 = 1;
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
  System_String_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x19
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1

  if ( (byte_4A5729F & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_15831/*"[-]"*/);
    sub_1B885B0(&StringLiteral_11081/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_1B885B0(&StringLiteral_15936/*"[FFFF00]"*/);
    byte_4A5729F = 1;
  }
  v4 = (System_String_o *)sub_1B88658(string___TypeInfo, 5LL);
  if ( !v4 )
    sub_1B8880C(0LL, v5);
  v8 = v4;
  if ( !LODWORD(v4[1].klass) )
    goto LABEL_12;
  v9 = StringLiteral_15936/*"[FFFF00]"*/;
  v4[1].monitor = (void *)StringLiteral_15936/*"[FFFF00]"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4[1].monitor, v9, v6, v7);
  if ( LODWORD(v8[1].klass) <= 1 )
    goto LABEL_12;
  v8[1].fields = (System_String_Fields)message;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8[1].fields, (int32_t)message, v10, v11);
  if ( LODWORD(v8[1].klass) <= 2 )
    goto LABEL_12;
  v14 = StringLiteral_43/*"\n"*/;
  v8[2].klass = (System_String_c *)StringLiteral_43/*"\n"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8[2], v14, v12, v13);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_11081/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
  if ( LODWORD(v8[1].klass) <= 3
    || (v8[2].monitor = v4,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v8[2].monitor, (int32_t)v4, v15, v16),
        LODWORD(v8[1].klass) <= 4) )
  {
LABEL_12:
    sub_1B88814(v4, v5);
  }
  v19 = (int)StringLiteral_15831/*"[-]"*/;
  v8[2].fields = (System_String_Fields)StringLiteral_15831/*"[-]"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8[2].fields, v19, v17, v18);
  return System_String__Concat_61720560((System_String_array *)v8, 0LL);
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
  Il2CppObject *Master_object; // x22
  Il2CppObject *v8; // x25
  System_Collections_Generic_List_int__o *v9; // x24
  System_Collections_Generic_List_int__o *v10; // x23
  _BOOL8 EntityByIndividuality; // x0
  __int64 iconImageId; // x1
  __int64 v13; // x8
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
  System_Int32_array *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  ServantClassEntity_o *v31; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A5729E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5729E = 1;
  }
  v31 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  v8 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v9 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v10 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individuality )
    goto LABEL_29;
  v13 = *(_QWORD *)&individuality->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)v13 )
        sub_1B88814(EntityByIndividuality, iconImageId);
      if ( !Master_object )
        goto LABEL_29;
      v15 = individuality->m_Items[v14 + 1];
      EntityByIndividuality = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                &entity,
                                v15,
                                (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
        if ( (unsigned int)size >= items->max_length )
        {
          v22 = v17[4];
          v23 = v9;
          LODWORD(iconImageId) = v15;
LABEL_24:
          System_Collections_Generic_List_int___AddWithResize(
            v23,
            iconImageId,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v22 + 192) + 112LL));
          goto LABEL_25;
        }
        v9->fields._size = size + 1;
        items->m_Items[size + 1] = v15;
      }
      else
      {
        if ( !v8 )
          goto LABEL_29;
        EntityByIndividuality = ServantClassMaster__TryGetEntityByIndividuality(
                                  (ServantClassMaster_o *)v8,
                                  &v31,
                                  v15,
                                  0LL);
        if ( !EntityByIndividuality )
          goto LABEL_25;
        if ( !v31 )
          goto LABEL_29;
        if ( !v10 )
          goto LABEL_29;
        iconImageId = (unsigned int)v31->fields.iconImageId;
        v19 = v10->fields._items;
        v20 = Method_System_Collections_Generic_List_int__Add__;
        ++v10->fields._version;
        if ( !v19 )
          goto LABEL_29;
        v21 = v10->fields._size;
        if ( (unsigned int)v21 >= v19->max_length )
        {
          v22 = v20[4];
          v23 = v10;
          goto LABEL_24;
        }
        v10->fields._size = v21 + 1;
        v19->m_Items[v21 + 1] = iconImageId;
      }
LABEL_25:
      LODWORD(v13) = individuality->max_length;
    }
    while ( (__int64)++v14 < (int)v13 );
  }
  if ( !v9
    || (v24 = System_Collections_Generic_List_int___ToArray(
                v9,
                (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__),
        *servantIds = v24,
        sub_1B88554((ServantStatusBattleListViewItem_o *)servantIds, (int32_t)v24, v25, v26),
        !v10) )
  {
LABEL_29:
    sub_1B8880C(EntityByIndividuality, iconImageId);
  }
  v27 = System_Collections_Generic_List_int___ToArray(
          v10,
          (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  *classImageIds = v27;
  sub_1B88554((ServantStatusBattleListViewItem_o *)classImageIds, (int32_t)v27, v28, v29);
}


System_String_o *__fastcall RestrictionNotSatisfySlot__RemoveColorCode(
        RestrictionNotSatisfySlot_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4A572A0 & 1) == 0 )
  {
    sub_1B885B0(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1B885B0(&StringLiteral_15964/*"[[]-[\\]]"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_15965/*"[[][0-9A-F]{6}[\\]]"*/);
    byte_4A572A0 = 1;
  }
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  v4 = System_Text_RegularExpressions_Regex__Replace(
         message,
         (System_String_o *)StringLiteral_15965/*"[[][0-9A-F]{6}[\\]]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  return System_Text_RegularExpressions_Regex__Replace(
           v4,
           (System_String_o *)StringLiteral_15964/*"[[]-[\\]]"*/,
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
  __int64 v7; // x24
  System_String_o *partyMemberItem; // x0
  int64_t UserId; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  PartyOrganizationListViewItem_o **v12; // x21
  UISprite_o *numberSprite; // x20
  System_String_o *v14; // x0
  _QWORD *v15; // x20
  __int64 v16; // x8
  __int64 v17; // x0
  __int64 v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x22
  System_Collections_Generic_List_object__o *v20; // x23
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x20
  System_Func_object__bool__o *v22; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  RestrictionNotSatisfySlot___c_c *v24; // x0
  System_Func_object__bool__o *_9__14_1; // x20
  Il2CppObject *v26; // x24
  struct RestrictionNotSatisfySlot___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  const MethodInfo *v31; // x2
  System_String_o *v32; // x24
  System_String_c *klass; // x8
  unsigned __int64 v34; // x19
  int32_t v35; // w2
  int32_t v36; // w3
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  System_String_o *v40; // x1
  Il2CppClass **v41; // x0
  System_Collections_Generic_List_object__o *v42; // x24
  __int64 v43; // x1
  UnityEngine_GameObject_o *restrictionLabelRoot; // x0
  Il2CppObject *current; // x23
  Il2CppObject *restrictionLabel; // x20
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *v48; // x0
  __int64 v49; // x1
  Il2CppObject *v50; // x20
  __int64 v51; // x0
  __int64 v52; // x1
  int32_t v53; // w2
  int32_t v54; // w3
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  SwitchUIWidgetComponent_o *switchMessage; // x20
  _QWORD *v60; // x20
  __int64 v61; // x8
  __int64 v62; // x0
  __int64 v63; // x0
  _QWORD *v64; // x20
  __int64 v65; // x8
  __int64 v66; // x0
  __int64 v67; // x0
  System_Collections_Generic_Dictionary_int__object__o *v68; // x20
  char v69; // w20
  const MethodInfo *v70; // x4
  bool IsSelectableNormalSupport; // w0
  QuestPhaseEntity_o *v72; // x8
  System_Collections_Generic_IEnumerable_T__o *v73; // x21
  System_Collections_Generic_List_int__o *v74; // x20
  struct System_Int32_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_TSource__c *v79; // x8
  System_Int32_array *v80; // x3
  System_Collections_Generic_List_int__o *v81; // x22
  System_Collections_Generic_List_object__o *v82; // x20
  System_Collections_Generic_List_T__o *v83; // x21
  int32_t v84; // w23
  System_Collections_Generic_List_object__o *v85; // x21
  System_Collections_Generic_List_int__o *v86; // x22
  System_Collections_Generic_List_int__o *v87; // x24
  System_Collections_Generic_List_int__o *v88; // x25
  System_Collections_Generic_List_bool__o *v89; // x26
  __int64 v90; // x8
  int v91; // w19
  unsigned __int64 v92; // x23
  int32_t v93; // w28
  struct System_Int32_array *v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  Il2CppObject *v97; // x0
  int32_t questId; // w20
  int32_t questPhase; // w27
  FollowerInfo_o *v100; // x29
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w29
  struct System_Boolean_array *v103; // x8
  _QWORD *v104; // x9
  __int64 v105; // x10
  struct System_Boolean_array *v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  int32_t v109; // w20
  struct System_Int32_array *v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  struct System_Int32_array *v113; // x8
  _QWORD *v114; // x9
  __int64 v115; // x10
  RestrictionNotSatisfySlotIcons_o *Component_object; // x20
  System_Int32_array *v117; // x27
  System_Int32_array *v118; // x28
  System_Int32_array *v119; // x29
  const MethodInfo *v120; // x6
  System_Int32_array *v121; // x1
  int32_t v122; // w2
  int32_t v123; // w3
  struct System_Object_array *v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  Il2CppClass **v127; // x0
  int v128; // w8
  int v129; // w8
  int v130; // w8
  int v131; // w8
  RestrictionNotSatisfySlotIcons_o *v132; // x20
  System_Int32_array *v133; // x22
  System_Int32_array *v134; // x23
  System_Int32_array *v135; // x24
  const MethodInfo *v136; // x6
  int32_t v137; // w2
  int32_t v138; // w3
  struct System_Object_array *v139; // x8
  _QWORD *v140; // x9
  __int64 v141; // x10
  Il2CppClass **v142; // x0
  System_Collections_Generic_List_object__o *v143; // x20
  System_Collections_Generic_List_int__o *v144; // x21
  System_Int32_array *v145; // x19
  __int64 v146; // x8
  int v147; // w22
  unsigned __int64 v148; // x23
  struct System_Int32_array *v149; // x8
  _QWORD *v150; // x9
  __int64 v151; // x10
  RestrictionNotSatisfySlotIcons_o *v152; // x22
  const MethodInfo *v153; // x2
  int32_t v154; // w2
  int32_t v155; // w3
  struct System_Object_array *v156; // x8
  _QWORD *v157; // x9
  __int64 v158; // x10
  Il2CppClass **v159; // x0
  int v160; // w8
  RestrictionNotSatisfySlotIcons_o *v161; // x22
  const MethodInfo *v162; // x2
  int32_t v163; // w2
  int32_t v164; // w3
  struct System_Object_array *v165; // x8
  _QWORD *v166; // x9
  __int64 v167; // x10
  Il2CppClass **v168; // x0
  struct SwitchUIWidgetComponent_o *switchIcons; // x20
  UIWidget_array *v170; // x1
  SwitchUIWidgetComponent_o *v171; // x0
  struct SwitchUIWidgetComponent_o *v172; // x21
  PartyOrganizationListViewItem_o *v173; // x8
  int32_t v174; // w2
  int32_t v175; // w3
  struct System_Object_array *v176; // x8
  _QWORD *v177; // x9
  __int64 v178; // x10
  System_String_o *v179; // x1
  Il2CppClass **v180; // x0
  int v181; // w19
  int32_t v182; // w20
  Il2CppObject *Item; // x0
  const MethodInfo *v184; // x2
  Il2CppObject *fixed; // x0
  NpcFollowerMaster_o *v186; // [xsp+48h] [xbp-108h]
  NpcServantFollowerMaster_o *Master_object; // [xsp+50h] [xbp-100h]
  UserServantCollectionMaster_o *MasterData_object; // [xsp+58h] [xbp-F8h]
  System_Int32_array *v189; // [xsp+60h] [xbp-F0h]
  int32_t *v190; // [xsp+68h] [xbp-E8h]
  QuestRestrictionInfo_o *questRestrictionInfoa; // [xsp+70h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v193; // [xsp+80h] [xbp-D0h] BYREF
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+98h] [xbp-B8h] BYREF
  QuestPhaseEntity_o *v195; // [xsp+A0h] [xbp-B0h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+A8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v197; // [xsp+B0h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+D0h] [xbp-80h] BYREF
  System_Int32_array *classImageIds; // [xsp+D8h] [xbp-78h] BYREF
  System_Int32_array *servantIds; // [xsp+E0h] [xbp-70h] BYREF
  int32_t pos; // [xsp+ECh] [xbp-64h] BYREF

  pos = number;
  if ( (byte_4A5729D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&Method_System_Array_Empty_RestrictionEntity___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1B885B0(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_bool__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_bool__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_bool__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_bool___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor___76036512);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_1B885B0(&System_Collections_Generic_List_bool__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_UILabel____76171992);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&RestrictionNotSatisfySlot_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__);
    sub_1B885B0(&Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__);
    sub_1B885B0(&RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo);
    sub_1B885B0(&RestrictionNotSatisfySlot___c_TypeInfo);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_21386/*"member_txt_"*/);
    sub_1B885B0(&StringLiteral_11078/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5729D = 1;
  }
  classImageIds = 0LL;
  servantIds = 0LL;
  npcInfoDictionary = 0LL;
  memset(&v197, 0, sizeof(v197));
  v195 = 0LL;
  entity = 0LL;
  npcServantFollowerEntity = 0LL;
  v7 = sub_1B887FC(RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_281;
  *(_QWORD *)(v7 + 16) = memberItem;
  v12 = (PartyOrganizationListViewItem_o **)(v7 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)memberItem, v10, v11);
  numberSprite = this->fields.numberSprite;
  v14 = System_Int32__ToString((int32_t)&pos, 0LL);
  partyMemberItem = System_String__Concat_61707032((System_String_o *)StringLiteral_21386/*"member_txt_"*/, v14, 0LL);
  if ( !numberSprite )
    goto LABEL_281;
  UISprite__set_spriteName(numberSprite, partyMemberItem, 0LL);
  partyMemberItem = (System_String_o *)this->fields.partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_281;
  PartyOrganizationConfirmItemDraw__SetItem(
    (PartyOrganizationConfirmItemDraw_o *)partyMemberItem,
    *v12,
    3,
    0,
    0,
    0,
    0,
    0LL);
  v15 = Method_System_Array_Empty_RestrictionEntity___;
  v16 = *((_QWORD *)Method_System_Array_Empty_RestrictionEntity___ + 7);
  if ( !v16 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_RestrictionEntity___);
    v16 = v15[7];
  }
  v17 = *(_QWORD *)(v16 + 16);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1BDA48C(v17);
  if ( !*(_DWORD *)(v17 + 224) )
    j_il2cpp_runtime_class_init_0(v17);
  v18 = *(_QWORD *)(v15[7] + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1BDA48C(v18);
  v19 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v18 + 184);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !questRestrictionInfo )
    goto LABEL_281;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  questRestrictionInfoa = questRestrictionInfo;
  if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
  {
    restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
    v22 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v22,
      (Il2CppObject *)v7,
      Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__,
      0LL);
    v23 = System_Linq_Enumerable__Where_object_(
            restrictionEntityList,
            (System_Func_TSource__bool__o *)v22,
            (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 v23,
                                                                 (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    if ( questRestrictionInfo->fields.isUniqueServant && questRestrictionInfo->fields.isUniqueIndividuality )
    {
      v24 = RestrictionNotSatisfySlot___c_TypeInfo;
      if ( !RestrictionNotSatisfySlot___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot___c_TypeInfo);
        v24 = RestrictionNotSatisfySlot___c_TypeInfo;
      }
      _9__14_1 = (System_Func_object__bool__o *)v24->static_fields->__9__14_1;
      if ( !_9__14_1 )
      {
        if ( !v24->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v24);
          v24 = RestrictionNotSatisfySlot___c_TypeInfo;
        }
        v26 = (Il2CppObject *)v24->static_fields->__9;
        _9__14_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__14_1, v26, Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__, 0LL);
        static_fields = RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
        static_fields->__9__14_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__14_1;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_1, (int32_t)_9__14_1, v28, v29);
      }
      v30 = System_Linq_Enumerable__Where_object_(
              v19,
              (System_Func_TSource__bool__o *)_9__14_1,
              (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                   v30,
                                                                   (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    }
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetMessages_40432916(
                                           questRestrictionInfo,
                                           (RestrictionEntity_array *)v19,
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
    if ( !*v12 )
      goto LABEL_281;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetMessages(
                                           questRestrictionInfo,
                                           (*v12)->fields._InitPos_k__BackingField,
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
  v32 = partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_281;
  klass = partyMemberItem[1].klass;
  if ( klass && (int)klass >= 1 )
  {
    v34 = 0LL;
    while ( v34 < (unsigned int)klass )
    {
      partyMemberItem = RestrictionNotSatisfySlot__RemoveColorCode(
                          (RestrictionNotSatisfySlot_o *)partyMemberItem,
                          *((System_String_o **)&v32[1].monitor + v34),
                          v31);
      if ( !partyMemberItem )
        goto LABEL_281;
      partyMemberItem = System_String__Replace_61726660(
                          partyMemberItem,
                          (System_String_o *)StringLiteral_43/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
      if ( !v20 )
        goto LABEL_281;
      items = v20->fields._items;
      v38 = Method_System_Collections_Generic_List_string__Add__;
      ++v20->fields._version;
      if ( !items )
        goto LABEL_281;
      size = v20->fields._size;
      v40 = partyMemberItem;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          (Il2CppObject *)partyMemberItem,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        v20->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v40;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v40, v35, v36);
      }
      LODWORD(klass) = v32[1].klass;
      if ( (__int64)++v34 >= (int)klass )
        goto LABEL_40;
    }
LABEL_282:
    sub_1B88814(partyMemberItem, UserId);
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
  partyMemberItem = (System_String_o *)*v12;
  if ( !*v12 )
    goto LABEL_281;
  if ( !PartyOrganizationListViewItem__get_IsSupportOnly((PartyOrganizationListViewItem_o *)partyMemberItem, 0LL) )
  {
    partyMemberItem = (System_String_o *)*v12;
    if ( !*v12 )
      goto LABEL_281;
    if ( !PartyOrganizationListViewItem__get_IsFixedMyServantSingle(
            (PartyOrganizationListViewItem_o *)partyMemberItem,
            0LL) )
    {
      partyMemberItem = (System_String_o *)*v12;
      if ( !*v12 )
        goto LABEL_281;
      if ( !LOBYTE(partyMemberItem[9].klass) && !BYTE1(partyMemberItem[9].klass) )
      {
        if ( PartyOrganizationListViewItem__get_IsQuestRestriction(
               (PartyOrganizationListViewItem_o *)partyMemberItem,
               0LL) )
        {
          goto LABEL_256;
        }
        partyMemberItem = (System_String_o *)*v12;
        if ( !*v12 )
          goto LABEL_281;
        partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                               (PartyOrganizationListViewItem_o *)partyMemberItem,
                                               0LL);
        if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
        {
          if ( !*v12 )
            goto LABEL_281;
          partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsSetRequired(
                                                 questRestrictionInfo,
                                                 pos,
                                                 (*v12)->fields._InitPos_k__BackingField,
                                                 0LL);
          if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
            goto LABEL_256;
        }
        v173 = *v12;
        if ( !*v12 )
          goto LABEL_281;
        if ( v173->fields.isUniqueSvtRestriction
          || v173->fields.isUniqueIndividualityRestriction
          || (v173->fields.fatigureTime & 0x8000000000000000LL) == 0
          || v173->fields._IsAllOutBattle_k__BackingField
          || v173->fields._IsDataLost_k__BackingField
          || v173->fields._TimesToRestart_k__BackingField > 0
          || v173->fields._IsNotSupportSingle_k__BackingField
          || v173->fields.isFixedServantPositionRestriction
          || v173->fields.isFixedSupportPositionRestriction )
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
          partyMemberItem = (System_String_o *)*v12;
          if ( !*v12 )
            goto LABEL_281;
          partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                                 (PartyOrganizationListViewItem_o *)partyMemberItem,
                                                 0LL);
          if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
            goto LABEL_271;
          if ( !*v12 )
            goto LABEL_281;
          if ( QuestRestrictionInfo__IsSetRequired(
                 questRestrictionInfo,
                 pos,
                 (*v12)->fields._InitPos_k__BackingField,
                 0LL) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            partyMemberItem = LocalizationManager__Get((System_String_o *)StringLiteral_11078/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/, 0LL);
            if ( !v20 )
              goto LABEL_281;
            v176 = v20->fields._items;
            v177 = Method_System_Collections_Generic_List_string__Add__;
            ++v20->fields._version;
            if ( !v176 )
              goto LABEL_281;
            v178 = v20->fields._size;
            v179 = partyMemberItem;
            if ( (unsigned int)v178 >= v176->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v20,
                (Il2CppObject *)partyMemberItem,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v177[4] + 192LL) + 112LL));
            }
            else
            {
              v180 = &v176->obj.klass + v178;
              v20->fields._size = v178 + 1;
              v180[4] = (Il2CppClass *)v179;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v180 + 4), (int32_t)v179, v174, v175);
            }
            v181 = 1;
          }
          else
          {
LABEL_271:
            v181 = 0;
          }
          partyMemberItem = (System_String_o *)*v12;
          if ( !*v12 )
            goto LABEL_281;
          partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsQuestRestriction(
                                                 (PartyOrganizationListViewItem_o *)partyMemberItem,
                                                 0LL);
          if ( v181 | (unsigned __int8)partyMemberItem & 1 )
          {
            if ( !v20 )
              goto LABEL_281;
            if ( v20->fields._size >= 1 )
            {
              v182 = 0;
              do
              {
                Item = System_Collections_Generic_List_object___get_Item(
                         v20,
                         v182,
                         (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
                fixed = (Il2CppObject *)RestrictionNotSatisfySlot__AddColorCodeAndFixMessage(
                                          (RestrictionNotSatisfySlot_o *)Item,
                                          (System_String_o *)Item,
                                          v184);
                System_Collections_Generic_List_object___set_Item(
                  v20,
                  v182++,
                  fixed,
                  (const MethodInfo_34FD5B8 *)Method_System_Collections_Generic_List_string__set_Item__);
              }
              while ( v182 < v20->fields._size );
            }
          }
        }
      }
    }
  }
  v42 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  if ( !v20 )
    goto LABEL_281;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v193,
    v20,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v197 = v193;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v197,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    restrictionLabelRoot = this->fields.restrictionLabelRoot;
    if ( !restrictionLabelRoot )
      sub_1B8880C(0LL, v43);
    current = v197.fields._current;
    restrictionLabel = (Il2CppObject *)this->fields.restrictionLabel;
    transform = UnityEngine_GameObject__get_transform(restrictionLabelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v48 = UnityEngine_Object__Instantiate_object__49297800(
            restrictionLabel,
            transform,
            (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_UILabel____76171992);
    v50 = v48;
    if ( !v48 )
      sub_1B8880C(0LL, v49);
    UILabel__set_text((UILabel_o *)v48, (System_String_o *)current, 0LL);
    if ( !v42 )
      sub_1B8880C(v51, v52);
    v55 = v42->fields._items;
    v56 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++v42->fields._version;
    if ( !v55 )
      sub_1B8880C(v51, v52);
    v57 = v42->fields._size;
    if ( (unsigned int)v57 >= v55->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v42,
        v50,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
    }
    else
    {
      v58 = &v55->obj.klass + v57;
      v42->fields._size = v57 + 1;
      v58[4] = (Il2CppClass *)v50;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v58 + 4), (int32_t)v50, v53, v54);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v197,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v42 )
    goto LABEL_281;
  switchMessage = this->fields.switchMessage;
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                         v42,
                                         (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !switchMessage )
    goto LABEL_281;
  SwitchUIWidgetComponent__Set(switchMessage, (UIWidget_array *)partyMemberItem, 0LL);
  v60 = Method_System_Array_Empty_int___;
  v61 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v61 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_int___);
    v61 = v60[7];
  }
  v62 = *(_QWORD *)(v61 + 16);
  if ( (*(_BYTE *)(v62 + 309) & 1) == 0 )
    v62 = sub_1BDA48C(v62);
  if ( !*(_DWORD *)(v62 + 224) )
    j_il2cpp_runtime_class_init_0(v62);
  v63 = *(_QWORD *)(v60[7] + 16LL);
  if ( (*(_BYTE *)(v63 + 309) & 1) == 0 )
    v63 = sub_1BDA48C(v63);
  v64 = Method_System_Array_Empty_int___;
  servantIds = **(System_Int32_array ***)(v63 + 184);
  v65 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v65 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_int___);
    v65 = v64[7];
  }
  v66 = *(_QWORD *)(v65 + 16);
  if ( (*(_BYTE *)(v66 + 309) & 1) == 0 )
    v66 = sub_1BDA48C(v66);
  if ( !*(_DWORD *)(v66 + 224) )
    j_il2cpp_runtime_class_init_0(v66);
  v67 = *(_QWORD *)(v64[7] + 16LL);
  if ( (*(_BYTE *)(v67 + 309) & 1) == 0 )
    v67 = sub_1BDA48C(v67);
  classImageIds = **(System_Int32_array ***)(v67 + 184);
  v68 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v68,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v68;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( !*v12 )
    goto LABEL_281;
  v69 = (char)partyMemberItem;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_40453904(
                                         questRestrictionInfo,
                                         (*v12)->fields._InitPos_k__BackingField,
                                         0LL);
  if ( (v69 & 1) == 0 )
  {
    if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
    {
      if ( !*v12 )
        goto LABEL_281;
      servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                     questRestrictionInfo,
                     &npcInfoDictionary,
                     (*v12)->fields._InitPos_k__BackingField,
                     0,
                     0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      partyMemberItem = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !partyMemberItem )
        goto LABEL_281;
      partyMemberItem = (System_String_o *)QuestPhaseMaster__TryGetEntity(
                                             (QuestPhaseMaster_o *)partyMemberItem,
                                             &v195,
                                             questRestrictionInfo->fields.questId,
                                             questRestrictionInfo->fields.questPhase,
                                             0LL);
      if ( !servantIds )
        goto LABEL_281;
      if ( !*(_QWORD *)&servantIds->max_length )
        goto LABEL_125;
      if ( !*v12 )
        goto LABEL_281;
      IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                    questRestrictionInfo,
                                    (*v12)->fields._InitPos_k__BackingField,
                                    0LL);
      v72 = v195;
      if ( !v195 )
        goto LABEL_125;
      goto LABEL_100;
    }
    v81 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v81,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !*v12 )
      goto LABEL_281;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetNeedIndividualityList(
                                           questRestrictionInfo,
                                           (*v12)->fields._InitPos_k__BackingField,
                                           0LL);
    if ( !*v12 )
      goto LABEL_281;
    v82 = (System_Collections_Generic_List_object__o *)partyMemberItem;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetRangeTypeList(
                                           questRestrictionInfo,
                                           (*v12)->fields._InitPos_k__BackingField,
                                           0LL);
    if ( !v82 )
      goto LABEL_281;
    if ( v82->fields._size >= 1 )
    {
      v83 = (System_Collections_Generic_List_T__o *)partyMemberItem;
      v84 = 0;
      do
      {
        if ( !v83 )
          goto LABEL_281;
        if ( v83->fields._size > v84 )
        {
          partyMemberItem = (System_String_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                 v83,
                                                 v84,
                                                 (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          if ( (_DWORD)partyMemberItem == 1 )
          {
            partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                                   v82,
                                                   v84,
                                                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_int____get_Item__);
            if ( !v81 )
              goto LABEL_281;
            System_Collections_Generic_List_int___AddRange(
              v81,
              (System_Collections_Generic_IEnumerable_T__o *)partyMemberItem,
              (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
          }
        }
        ++v84;
      }
      while ( v84 < v82->fields._size );
    }
    if ( !v81 )
      goto LABEL_281;
    partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                           v81,
                                           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
    v80 = (System_Int32_array *)partyMemberItem;
LABEL_124:
    RestrictionNotSatisfySlot__GetIconIdFromIndividuality(
      (RestrictionNotSatisfySlot_o *)partyMemberItem,
      &servantIds,
      &classImageIds,
      v80,
      v70);
    goto LABEL_125;
  }
  if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
  {
    if ( !v19 )
      goto LABEL_281;
    monitor = v19[1].monitor;
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
    v79 = v19[2].klass;
    if ( !v79 )
      goto LABEL_281;
    v80 = *(System_Int32_array **)&v79->_1.byval_arg.bits;
    goto LABEL_124;
  }
  if ( !*v12 )
    goto LABEL_281;
  servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                 questRestrictionInfo,
                 &npcInfoDictionary,
                 (*v12)->fields._InitPos_k__BackingField,
                 1,
                 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  partyMemberItem = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
  if ( !*v12 )
    goto LABEL_281;
  IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                questRestrictionInfo,
                                (*v12)->fields._InitPos_k__BackingField,
                                0LL);
  v72 = entity;
  if ( !entity )
    goto LABEL_125;
LABEL_100:
  if ( !IsSelectableNormalSupport || v72->fields.isNpcOnly )
    goto LABEL_125;
  v73 = (System_Collections_Generic_IEnumerable_T__o *)servantIds;
  v74 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_55443684(
    v74,
    v73,
    (const MethodInfo_34E00E4 *)Method_System_Collections_Generic_List_int___ctor___76036512);
  if ( !v74 )
    goto LABEL_281;
  v75 = v74->fields._items;
  v76 = Method_System_Collections_Generic_List_int__Add__;
  ++v74->fields._version;
  if ( !v75 )
    goto LABEL_281;
  v77 = v74->fields._size;
  if ( (unsigned int)v77 >= v75->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v74,
      0,
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
  }
  else
  {
    v74->fields._size = v77 + 1;
    v75->m_Items[v77 + 1] = 0;
  }
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                         v74,
                                         (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  servantIds = (System_Int32_array *)partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_281;
LABEL_126:
  if ( partyMemberItem[1].klass )
  {
    partyMemberItem = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !partyMemberItem )
      goto LABEL_281;
    MasterData_object = (UserServantCollectionMaster_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)partyMemberItem,
                                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (NpcServantFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    v186 = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    v85 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UIWidget__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v85,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
    v86 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v86,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
    v87 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v87,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
    v88 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v88,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
    v89 = (System_Collections_Generic_List_bool__o *)sub_1B887FC(System_Collections_Generic_List_bool__TypeInfo);
    System_Collections_Generic_List_bool____ctor(
      v89,
      (const MethodInfo_34B3F9C *)Method_System_Collections_Generic_List_bool___ctor__);
    if ( !servantIds )
      goto LABEL_281;
    v90 = *(_QWORD *)&servantIds->max_length;
    if ( (int)v90 < 1 )
      goto LABEL_227;
    v91 = 0;
    v92 = 0LL;
    v189 = servantIds;
    v190 = &servantIds->m_Items[1];
    while ( 1 )
    {
      if ( v92 >= (unsigned int)v90 )
        goto LABEL_282;
      if ( !v86 )
        goto LABEL_281;
      v93 = v190[v92];
      v94 = v86->fields._items;
      v95 = Method_System_Collections_Generic_List_int__Add__;
      ++v86->fields._version;
      if ( !v94 )
        goto LABEL_281;
      v96 = v86->fields._size;
      if ( (unsigned int)v96 >= v94->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v86,
          v93,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
      }
      else
      {
        v86->fields._size = v96 + 1;
        v94->m_Items[v96 + 1] = v93;
      }
      partyMemberItem = (System_String_o *)npcInfoDictionary;
      if ( !npcInfoDictionary )
        goto LABEL_281;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
              v93,
              (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
        goto LABEL_289;
      partyMemberItem = (System_String_o *)npcInfoDictionary;
      if ( !npcInfoDictionary )
        goto LABEL_281;
      v97 = System_Collections_Generic_Dictionary_int__object___get_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
              v93,
              (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
      if ( v97 )
      {
        questId = questRestrictionInfo->fields.questId;
        questPhase = questRestrictionInfo->fields.questPhase;
        v100 = (FollowerInfo_o *)v97;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0LL);
        LimitCount = FollowerInfo__getLimitCount(v100, 0, ReturnTypeByQuestId, 0LL);
        partyMemberItem = (System_String_o *)Master_object;
        if ( !Master_object )
          goto LABEL_281;
        partyMemberItem = (System_String_o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                               Master_object,
                                               &npcServantFollowerEntity,
                                               questId,
                                               questPhase,
                                               v93,
                                               0LL);
        if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
          goto LABEL_164;
        if ( !npcServantFollowerEntity )
          goto LABEL_281;
        partyMemberItem = (System_String_o *)NpcServantFollowerEntity__IsHideRarity(
                                               npcServantFollowerEntity->fields.flag,
                                               0LL);
        if ( !v89 )
          goto LABEL_281;
        v103 = v89->fields._items;
        v104 = Method_System_Collections_Generic_List_bool__Add__;
        ++v89->fields._version;
        if ( !v103 )
          goto LABEL_281;
        v105 = v89->fields._size;
        if ( (unsigned int)v105 >= v103->max_length )
        {
          System_Collections_Generic_List_bool___AddWithResize(
            v89,
            (unsigned __int8)partyMemberItem & 1,
            *(const MethodInfo_34B4800 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
        }
        else
        {
          v89->fields._size = v105 + 1;
          v103->m_Items[v105 + 4] = (unsigned __int8)partyMemberItem & 1;
        }
        partyMemberItem = (System_String_o *)v186;
        if ( !npcServantFollowerEntity || !v186 )
          goto LABEL_281;
        partyMemberItem = (System_String_o *)NpcFollowerMaster__GetEntity_39433140(
                                               v186,
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
        v109 = (int)partyMemberItem;
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
                                               v93,
                                               0LL);
        if ( !partyMemberItem )
          goto LABEL_281;
        if ( !v89 )
          goto LABEL_281;
        LimitCount = (int32_t)partyMemberItem[2].monitor;
        v106 = v89->fields._items;
        v107 = Method_System_Collections_Generic_List_bool__Add__;
        ++v89->fields._version;
        if ( !v106 )
          goto LABEL_281;
        v108 = v89->fields._size;
        if ( (unsigned int)v108 >= v106->max_length )
        {
          System_Collections_Generic_List_bool___AddWithResize(
            v89,
            0,
            *(const MethodInfo_34B4800 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
LABEL_165:
          v109 = 0;
          goto LABEL_166;
        }
        v109 = 0;
        v89->fields._size = v108 + 1;
        v106->m_Items[v108 + 4] = 0;
      }
LABEL_166:
      if ( !v87 )
        goto LABEL_281;
      v110 = v87->fields._items;
      v111 = Method_System_Collections_Generic_List_int__Add__;
      ++v87->fields._version;
      if ( !v110 )
        goto LABEL_281;
      v112 = v87->fields._size;
      if ( (unsigned int)v112 >= v110->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v87,
          LimitCount,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
      }
      else
      {
        v87->fields._size = v112 + 1;
        v110->m_Items[v112 + 1] = LimitCount;
      }
      if ( !v88 )
        goto LABEL_281;
      v113 = v88->fields._items;
      v114 = Method_System_Collections_Generic_List_int__Add__;
      ++v88->fields._version;
      if ( !v113 )
        goto LABEL_281;
      v115 = v88->fields._size;
      if ( (unsigned int)v115 >= v113->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v88,
          v109,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
      }
      else
      {
        v88->fields._size = v115 + 1;
        v113->m_Items[v115 + 1] = v109;
      }
      partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      if ( !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo);
        partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      }
      if ( ++v91 >= **(_DWORD **)&partyMemberItem[7].fields )
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
                                                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        v117 = System_Collections_Generic_List_int___ToArray(
                 v86,
                 (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
        v118 = System_Collections_Generic_List_int___ToArray(
                 v87,
                 (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                               v88,
                                               (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !v89 )
          goto LABEL_281;
        v119 = (System_Int32_array *)partyMemberItem;
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_bool___ToArray(
                                               v89,
                                               (const MethodInfo_34B62EC *)Method_System_Collections_Generic_List_bool__ToArray__);
        if ( !Component_object )
          goto LABEL_281;
        v121 = v117;
        questRestrictionInfo = questRestrictionInfoa;
        RestrictionNotSatisfySlotIcons__SetServantIcons(
          Component_object,
          v121,
          v118,
          v119,
          (System_Boolean_array *)partyMemberItem,
          questRestrictionInfoa,
          v120);
        if ( !v85 )
          goto LABEL_281;
        UserId = (int64_t)Component_object->fields.iconsWidget;
        v124 = v85->fields._items;
        v125 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++v85->fields._version;
        if ( !v124 )
          goto LABEL_281;
        v126 = v85->fields._size;
        if ( (unsigned int)v126 >= v124->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v85,
            (Il2CppObject *)UserId,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
        }
        else
        {
          v127 = &v124->obj.klass + v126;
          v85->fields._size = v126 + 1;
          v127[4] = (Il2CppClass *)UserId;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v127 + 4), UserId, v122, v123);
        }
        v91 = 0;
        v128 = v86->fields._version + 1;
        v86->fields._size = 0;
        v86->fields._version = v128;
        v129 = v87->fields._version + 1;
        v87->fields._size = 0;
        v87->fields._version = v129;
        v130 = v88->fields._version + 1;
        v88->fields._size = 0;
        v88->fields._version = v130;
        v131 = v89->fields._version + 1;
        v89->fields._size = 0;
        v89->fields._version = v131;
      }
      ++v92;
      LODWORD(v90) = v189->max_length;
      if ( (__int64)v92 >= (int)v90 )
      {
        if ( v91 )
        {
          partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                                 (BaseMonoBehaviour_o *)this,
                                                 this->fields.servantIconsPrefab,
                                                 this->fields.iconParent,
                                                 0LL,
                                                 0LL);
          if ( partyMemberItem )
          {
            v132 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)partyMemberItem,
                                                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
            v133 = System_Collections_Generic_List_int___ToArray(
                     v86,
                     (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
            v134 = System_Collections_Generic_List_int___ToArray(
                     v87,
                     (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
            partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                                   v88,
                                                   (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
            if ( v89 )
            {
              v135 = (System_Int32_array *)partyMemberItem;
              partyMemberItem = (System_String_o *)System_Collections_Generic_List_bool___ToArray(
                                                     v89,
                                                     (const MethodInfo_34B62EC *)Method_System_Collections_Generic_List_bool__ToArray__);
              if ( v132 )
              {
                RestrictionNotSatisfySlotIcons__SetServantIcons(
                  v132,
                  v133,
                  v134,
                  v135,
                  (System_Boolean_array *)partyMemberItem,
                  questRestrictionInfo,
                  v136);
                if ( v85 )
                {
                  UserId = (int64_t)v132->fields.iconsWidget;
                  v139 = v85->fields._items;
                  v140 = Method_System_Collections_Generic_List_UIWidget__Add__;
                  ++v85->fields._version;
                  if ( v139 )
                  {
                    v141 = v85->fields._size;
                    if ( (unsigned int)v141 >= v139->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v85,
                        (Il2CppObject *)UserId,
                        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v142 = &v139->obj.klass + v141;
                      v85->fields._size = v141 + 1;
                      v142[4] = (Il2CppClass *)UserId;
                      sub_1B88554((ServantStatusBattleListViewItem_o *)(v142 + 4), UserId, v137, v138);
                    }
LABEL_230:
                    switchIcons = this->fields.switchIcons;
                    partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                                           v85,
                                                           (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                    if ( switchIcons )
                    {
                      v170 = (UIWidget_array *)partyMemberItem;
                      v171 = switchIcons;
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
        if ( v85 )
          goto LABEL_230;
        goto LABEL_281;
      }
    }
  }
  if ( !classImageIds )
    goto LABEL_281;
  if ( *(_QWORD *)&classImageIds->max_length )
  {
    v143 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UIWidget__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v143,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
    v144 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v144,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
    v145 = classImageIds;
    if ( !classImageIds )
      goto LABEL_281;
    v146 = *(_QWORD *)&classImageIds->max_length;
    if ( (int)v146 < 1 )
      goto LABEL_232;
    v147 = 0;
    v148 = 0LL;
    do
    {
      if ( v148 >= (unsigned int)v146 )
        goto LABEL_282;
      if ( !v144 )
        goto LABEL_281;
      UserId = (unsigned int)v145->m_Items[v148 + 1];
      v149 = v144->fields._items;
      v150 = Method_System_Collections_Generic_List_int__Add__;
      ++v144->fields._version;
      if ( !v149 )
        goto LABEL_281;
      v151 = v144->fields._size;
      if ( (unsigned int)v151 >= v149->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v144,
          UserId,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
      }
      else
      {
        v144->fields._size = v151 + 1;
        v149->m_Items[v151 + 1] = UserId;
      }
      partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      if ( !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo);
        partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      }
      if ( ++v147 >= **(_DWORD **)&partyMemberItem[7].fields )
      {
        partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                               (BaseMonoBehaviour_o *)this,
                                               this->fields.servantIconsPrefab,
                                               this->fields.iconParent,
                                               0LL,
                                               0LL);
        if ( !partyMemberItem )
          goto LABEL_281;
        v152 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)partyMemberItem,
                                                     (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                               v144,
                                               (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !v152 )
          goto LABEL_281;
        RestrictionNotSatisfySlotIcons__SetClassIcons(v152, (System_Int32_array *)partyMemberItem, v153);
        if ( !v143 )
          goto LABEL_281;
        UserId = (int64_t)v152->fields.iconsWidget;
        v156 = v143->fields._items;
        v157 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++v143->fields._version;
        if ( !v156 )
          goto LABEL_281;
        v158 = v143->fields._size;
        if ( (unsigned int)v158 >= v156->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v143,
            (Il2CppObject *)UserId,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v157[4] + 192LL) + 112LL));
        }
        else
        {
          v159 = &v156->obj.klass + v158;
          v143->fields._size = v158 + 1;
          v159[4] = (Il2CppClass *)UserId;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v159 + 4), UserId, v154, v155);
        }
        v147 = 0;
        v160 = v144->fields._version + 1;
        v144->fields._size = 0;
        v144->fields._version = v160;
      }
      LODWORD(v146) = v145->max_length;
      ++v148;
    }
    while ( (__int64)v148 < (int)v146 );
    if ( v147 )
    {
      partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)this,
                                             this->fields.servantIconsPrefab,
                                             this->fields.iconParent,
                                             0LL,
                                             0LL);
      if ( !partyMemberItem )
        goto LABEL_281;
      v161 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)partyMemberItem,
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
      partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                             v144,
                                             (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v161 )
        goto LABEL_281;
      RestrictionNotSatisfySlotIcons__SetClassIcons(v161, (System_Int32_array *)partyMemberItem, v162);
      if ( !v143 )
        goto LABEL_281;
      UserId = (int64_t)v161->fields.iconsWidget;
      v165 = v143->fields._items;
      v166 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++v143->fields._version;
      if ( !v165 )
        goto LABEL_281;
      v167 = v143->fields._size;
      if ( (unsigned int)v167 >= v165->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v143,
          (Il2CppObject *)UserId,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v166[4] + 192LL) + 112LL));
      }
      else
      {
        v168 = &v165->obj.klass + v167;
        v143->fields._size = v167 + 1;
        v168[4] = (Il2CppClass *)UserId;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v168 + 4), UserId, v163, v164);
      }
    }
    else
    {
LABEL_232:
      if ( !v143 )
        goto LABEL_281;
    }
    v172 = this->fields.switchIcons;
    partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                           v143,
                                           (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( v172 )
    {
      v170 = (UIWidget_array *)partyMemberItem;
      v171 = v172;
LABEL_237:
      SwitchUIWidgetComponent__Set(v171, v170, 0LL);
      partyMemberItem = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
      if ( partyMemberItem )
      {
        SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)partyMemberItem, 0LL);
        goto LABEL_239;
      }
    }
LABEL_281:
    sub_1B8880C(partyMemberItem, UserId);
  }
LABEL_239:
  partyMemberItem = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !partyMemberItem )
    goto LABEL_281;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyMemberItem, 1, 0LL);
}


void __fastcall RestrictionNotSatisfySlot___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A572A2 & 1) == 0 )
  {
    sub_1B885B0(&RestrictionNotSatisfySlot___c_TypeInfo);
    byte_4A572A2 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(RestrictionNotSatisfySlot___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  RestrictionNotSatisfySlot___c_TypeInfo->static_fields->__9 = (struct RestrictionNotSatisfySlot___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)RestrictionNotSatisfySlot___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
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
  if ( (byte_4A572A3 & 1) == 0 )
  {
    this = (RestrictionNotSatisfySlot___c__DisplayClass14_0_o *)sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4A572A3 = 1;
  }
  if ( !entity )
    goto LABEL_13;
  memberItem = v4->fields.memberItem;
  if ( entity->fields.type != 9 )
  {
    if ( memberItem )
      goto LABEL_9;
LABEL_13:
    sub_1B8880C(this, entity);
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
         (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___)
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