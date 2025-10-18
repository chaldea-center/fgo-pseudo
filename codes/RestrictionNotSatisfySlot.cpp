void RestrictionNotSatisfySlot___cctor(const MethodInfo *method)
{
  if ( (byte_4C3ED51 & 1) == 0 )
  {
    sub_1C37058(&RestrictionNotSatisfySlot_TypeInfo);
    byte_4C3ED51 = 1;
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_String_o *v7; // x19
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1

  if ( (byte_4C3ED4F & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_43/*"\n"*/);
    sub_1C37058(&StringLiteral_15823/*"[-]"*/);
    sub_1C37058(&StringLiteral_11105/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_1C37058(&StringLiteral_15926/*"[FFFF00]"*/);
    byte_4C3ED4F = 1;
  }
  v4 = (System_String_o *)sub_1C37100(string___TypeInfo, 5);
  if ( !v4 )
    sub_1C372B4(0);
  v7 = v4;
  if ( !LODWORD(v4[1].klass) )
    goto LABEL_12;
  v8 = StringLiteral_15926/*"[FFFF00]"*/;
  v4[1].monitor = (void *)StringLiteral_15926/*"[FFFF00]"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4[1].monitor, v8, v5, v6);
  if ( LODWORD(v7[1].klass) <= 1 )
    goto LABEL_12;
  v7[1].fields = (System_String_Fields)message;
  sub_1C36FFC((CGThumbnailListItem_o *)&v7[1].fields, (int32_t)message, v9, v10);
  if ( LODWORD(v7[1].klass) <= 2 )
    goto LABEL_12;
  v13 = StringLiteral_43/*"\n"*/;
  v7[2].klass = (System_String_c *)StringLiteral_43/*"\n"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v7[2], v13, v11, v12);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_11105/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0);
  if ( LODWORD(v7[1].klass) <= 3
    || (v7[2].monitor = v4,
        sub_1C36FFC((CGThumbnailListItem_o *)&v7[2].monitor, (int32_t)v4, v14, v15),
        LODWORD(v7[1].klass) <= 4) )
  {
LABEL_12:
    sub_1C372BC(v4);
  }
  v18 = (int)StringLiteral_15823/*"[-]"*/;
  v7[2].fields = (System_String_Fields)StringLiteral_15823/*"[-]"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v7[2].fields, v18, v16, v17);
  return System_String__Concat_63602172((System_String_array *)v7, 0);
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
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v13; // x27
  int32_t v14; // w26
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  int32_t iconImageId; // w1
  struct System_Int32_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  __int64 v22; // x8
  System_Collections_Generic_List_int__o *v23; // x0
  System_Int32_array *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Int32_array *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  ServantClassEntity_o *v31; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C3ED4E & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C3ED4E = 1;
  }
  v31 = 0;
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
  v8 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  v10 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individuality )
    goto LABEL_29;
  max_length = individuality->max_length;
  if ( (int)max_length >= 1 )
  {
    v13 = 0;
    do
    {
      if ( v13 >= (unsigned int)max_length )
        sub_1C372BC(EntityByIndividuality);
      if ( !Master_object )
        goto LABEL_29;
      v14 = individuality->m_Items[v13];
      EntityByIndividuality = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                &entity,
                                v14,
                                (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( EntityByIndividuality )
      {
        if ( !v9 )
          goto LABEL_29;
        items = v9->fields._items;
        v16 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v22 = v16[4];
          v23 = v9;
          iconImageId = v14;
LABEL_24:
          System_Collections_Generic_List_int___AddWithResize(
            v23,
            iconImageId,
            *(const MethodInfo_3786000 **)(*(_QWORD *)(v22 + 192) + 112LL));
          goto LABEL_25;
        }
        v9->fields._size = size + 1;
        items->m_Items[size] = v14;
      }
      else
      {
        if ( !v8 )
          goto LABEL_29;
        EntityByIndividuality = ServantClassMaster__TryGetEntityByIndividuality(
                                  (ServantClassMaster_o *)v8,
                                  &v31,
                                  v14,
                                  0);
        if ( !EntityByIndividuality )
          goto LABEL_25;
        if ( !v31 )
          goto LABEL_29;
        if ( !v10 )
          goto LABEL_29;
        iconImageId = v31->fields.iconImageId;
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
    while ( (__int64)++v13 < (int)max_length );
  }
  if ( !v9
    || (v24 = System_Collections_Generic_List_int___ToArray(
                v9,
                (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__),
        *servantIds = v24,
        sub_1C36FFC((CGThumbnailListItem_o *)servantIds, (int32_t)v24, v25, v26),
        !v10) )
  {
LABEL_29:
    sub_1C372B4(EntityByIndividuality);
  }
  v27 = System_Collections_Generic_List_int___ToArray(
          v10,
          (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  *classImageIds = v27;
  sub_1C36FFC((CGThumbnailListItem_o *)classImageIds, (int32_t)v27, v28, v29);
}


System_String_o *RestrictionNotSatisfySlot__RemoveColorCode(
        RestrictionNotSatisfySlot_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4C3ED50 & 1) == 0 )
  {
    sub_1C37058(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C37058(&StringLiteral_15955/*"[[]-[\\]]"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_15956/*"[[][0-9A-F]{6}[\\]]"*/);
    byte_4C3ED50 = 1;
  }
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  v4 = System_Text_RegularExpressions_Regex__Replace(
         message,
         (System_String_o *)StringLiteral_15956/*"[[][0-9A-F]{6}[\\]]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0);
  return System_Text_RegularExpressions_Regex__Replace(
           v4,
           (System_String_o *)StringLiteral_15955/*"[[]-[\\]]"*/,
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  PartyOrganizationListViewItem_o **v11; // x21
  UISprite_o *numberSprite; // x20
  System_String_o *v13; // x0
  long double inited; // q0
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
  const MethodInfo *v29; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  const MethodInfo *v31; // x2
  System_String_o *v32; // x20
  System_String_c *klass; // x8
  unsigned __int64 v34; // x19
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  System_String_o *v40; // x1
  Il2CppClass **v41; // x0
  System_Collections_Generic_List_object__o *v42; // x24
  UnityEngine_GameObject_o *restrictionLabelRoot; // x0
  Il2CppObject *current; // x23
  Il2CppObject *restrictionLabel; // x20
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *v47; // x0
  Il2CppObject *v48; // x20
  __int64 v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  SwitchUIWidgetComponent_o *switchMessage; // x20
  long double v57; // q0
  _QWORD *v58; // x20
  __int64 v59; // x8
  __int64 v60; // x0
  __int64 v61; // x0
  _QWORD *v62; // x20
  __int64 v63; // x8
  __int64 v64; // x0
  QuestRestrictionInfo_o *v65; // x29
  __int64 v66; // x0
  System_Collections_Generic_Dictionary_int__object__o *v67; // x20
  char v68; // w20
  const MethodInfo *v69; // x4
  bool IsSelectableNormalSupport; // w0
  QuestPhaseEntity_o *v71; // x8
  System_Collections_Generic_IEnumerable_T__o *v72; // x21
  System_Collections_Generic_List_int__o *v73; // x20
  struct System_Int32_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_TSource__c *v78; // x8
  System_Int32_array *v79; // x3
  System_Collections_Generic_List_int__o *v80; // x20
  PartyOrganizationListViewItem_o *v81; // x8
  System_Collections_Generic_List_object__o *v82; // x21
  System_Collections_Generic_List_T__o *v83; // x22
  int32_t v84; // w23
  System_Collections_Generic_List_object__o *v85; // x21
  System_Collections_Generic_List_int__o *v86; // x22
  System_Collections_Generic_List_int__o *v87; // x24
  System_Collections_Generic_List_int__o *v88; // x25
  System_Collections_Generic_List_bool__o *v89; // x26
  System_Int32_array *v90; // x27
  il2cpp_array_size_t v91; // x8
  int v92; // w19
  unsigned __int64 v93; // x23
  int32_t v94; // w20
  struct System_Int32_array *v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  Il2CppObject *v98; // x0
  int32_t questId; // w27
  int32_t questPhase; // w29
  FollowerInfo_o *v101; // x28
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w28
  struct System_Boolean_array *v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  struct System_Boolean_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  int32_t v110; // w20
  struct System_Int32_array *v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  struct System_Int32_array *v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  RestrictionNotSatisfySlotIcons_o *v117; // x20
  System_Int32_array *v118; // x27
  System_Int32_array *v119; // x28
  System_Int32_array *v120; // x29
  const MethodInfo *v121; // x6
  System_Int32_array *v122; // x3
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  Il2CppObject *v125; // x1
  struct System_Object_array *v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  Il2CppClass **v129; // x0
  int v130; // w8
  int v131; // w8
  int v132; // w8
  int v133; // w8
  RestrictionNotSatisfySlotIcons_o *v134; // x20
  System_Int32_array *v135; // x22
  System_Int32_array *v136; // x23
  System_Int32_array *v137; // x24
  const MethodInfo *v138; // x6
  int32_t v139; // w2
  const MethodInfo *v140; // x3
  Il2CppObject *v141; // x1
  struct System_Object_array *v142; // x8
  _QWORD *v143; // x9
  __int64 v144; // x10
  Il2CppClass **v145; // x0
  System_Collections_Generic_List_object__o *v146; // x20
  System_Collections_Generic_List_int__o *v147; // x21
  System_Int32_array *v148; // x19
  il2cpp_array_size_t max_length; // x8
  int v150; // w22
  unsigned __int64 v151; // x23
  int32_t v152; // w1
  struct System_Int32_array *v153; // x8
  _QWORD *v154; // x9
  __int64 v155; // x10
  RestrictionNotSatisfySlotIcons_o *Component_object; // x22
  const MethodInfo *v157; // x2
  int32_t v158; // w2
  const MethodInfo *v159; // x3
  Il2CppObject *iconsWidget; // x1
  struct System_Object_array *v161; // x8
  _QWORD *v162; // x9
  __int64 v163; // x10
  Il2CppClass **v164; // x0
  int v165; // w8
  RestrictionNotSatisfySlotIcons_o *v166; // x22
  const MethodInfo *v167; // x2
  int32_t v168; // w2
  const MethodInfo *v169; // x3
  Il2CppObject *v170; // x1
  struct System_Object_array *v171; // x8
  _QWORD *v172; // x9
  __int64 v173; // x10
  Il2CppClass **v174; // x0
  struct SwitchUIWidgetComponent_o *v175; // x20
  UIWidget_array *v176; // x1
  SwitchUIWidgetComponent_o *v177; // x0
  struct SwitchUIWidgetComponent_o *switchIcons; // x21
  PartyOrganizationListViewItem_o *v179; // x8
  int32_t v180; // w2
  const MethodInfo *v181; // x3
  struct System_Object_array *v182; // x8
  _QWORD *v183; // x9
  __int64 v184; // x10
  System_String_o *v185; // x1
  Il2CppClass **v186; // x0
  int v187; // w19
  int32_t v188; // w20
  Il2CppObject *Item; // x0
  const MethodInfo *v190; // x2
  Il2CppObject *fixed; // x0
  NpcFollowerMaster_o *v192; // [xsp+48h] [xbp-108h]
  NpcServantFollowerMaster_o *Master_object; // [xsp+50h] [xbp-100h]
  UserServantCollectionMaster_o *MasterData_object; // [xsp+58h] [xbp-F8h]
  System_Int32_array *v195; // [xsp+60h] [xbp-F0h]
  QuestRestrictionInfo_o *questRestrictionInfoa; // [xsp+68h] [xbp-E8h]
  int32_t *m_Items; // [xsp+70h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v199; // [xsp+80h] [xbp-D0h] BYREF
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+98h] [xbp-B8h] BYREF
  QuestPhaseEntity_o *v201; // [xsp+A0h] [xbp-B0h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+A8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v203; // [xsp+B0h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+D0h] [xbp-80h] BYREF
  System_Int32_array *classImageIds; // [xsp+D8h] [xbp-78h] BYREF
  System_Int32_array *servantIds; // [xsp+E0h] [xbp-70h] BYREF
  int32_t pos; // [xsp+ECh] [xbp-64h] BYREF

  pos = number;
  if ( (byte_4C3ED4D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_int___);
    sub_1C37058(&Method_System_Array_Empty_RestrictionEntity___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C37058(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
    sub_1C37058(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_bool__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_bool__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_bool__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_bool___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor___78055976);
    sub_1C37058(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_1C37058(&System_Collections_Generic_List_bool__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_UILabel____78192992);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&RestrictionNotSatisfySlot_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__);
    sub_1C37058(&Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__);
    sub_1C37058(&RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo);
    sub_1C37058(&RestrictionNotSatisfySlot___c_TypeInfo);
    sub_1C37058(&StringLiteral_43/*"\n"*/);
    sub_1C37058(&StringLiteral_21531/*"member_txt_"*/);
    sub_1C37058(&StringLiteral_11102/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3ED4D = 1;
  }
  classImageIds = 0;
  servantIds = 0;
  npcInfoDictionary = 0;
  memset(&v203, 0, sizeof(v203));
  v201 = 0;
  entity = 0;
  npcServantFollowerEntity = 0;
  v7 = sub_1C372A4(RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_286;
  *(_QWORD *)(v7 + 16) = memberItem;
  v11 = (PartyOrganizationListViewItem_o **)(v7 + 16);
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)memberItem, v9, v10);
  numberSprite = this->fields.numberSprite;
  v13 = System_Int32__ToString((int32_t)&pos, 0);
  partyMemberItem = System_String__Concat_63561656((System_String_o *)StringLiteral_21531/*"member_txt_"*/, v13, 0);
  if ( !numberSprite )
    goto LABEL_286;
  UISprite__set_spriteName(numberSprite, partyMemberItem, 0);
  partyMemberItem = (System_String_o *)this->fields.partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_286;
  PartyOrganizationConfirmItemDraw__SetItem(
    (PartyOrganizationConfirmItemDraw_o *)partyMemberItem,
    *v11,
    3,
    0,
    0,
    0,
    0,
    0);
  v15 = Method_System_Array_Empty_RestrictionEntity___;
  v16 = *((_QWORD *)Method_System_Array_Empty_RestrictionEntity___ + 7);
  if ( !v16 )
  {
    sub_1C877C8(Method_System_Array_Empty_RestrictionEntity___);
    v16 = v15[7];
  }
  v17 = *(_QWORD *)(v16 + 16);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C8776C(inited);
  if ( !*(_DWORD *)(v17 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v17);
  v18 = *(_QWORD *)(v15[7] + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C8776C(inited);
  v19 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v18 + 184);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !questRestrictionInfo )
    goto LABEL_286;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0);
  if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
  {
    restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
    v22 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v22,
      (Il2CppObject *)v7,
      Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__,
      0);
    v23 = System_Linq_Enumerable__Where_object_(
            restrictionEntityList,
            (System_Func_TSource__bool__o *)v22,
            (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 v23,
                                                                 (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
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
        _9__14_1 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__14_1, v26, Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__, 0);
        static_fields = RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
        static_fields->__9__14_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__14_1;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__14_1, (int32_t)_9__14_1, v28, v29);
      }
      v30 = System_Linq_Enumerable__Where_object_(
              v19,
              (System_Func_TSource__bool__o *)_9__14_1,
              (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                   v30,
                                                                   (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    }
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetMessages_43418612(
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
                                           0);
  }
  else
  {
    if ( !*v11 )
      goto LABEL_286;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetMessages(
                                           questRestrictionInfo,
                                           (*v11)->fields._InitPos_k__BackingField,
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
  v32 = partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_286;
  klass = partyMemberItem[1].klass;
  if ( klass && (int)klass >= 1 )
  {
    v34 = 0;
    while ( v34 < (unsigned int)klass )
    {
      partyMemberItem = RestrictionNotSatisfySlot__RemoveColorCode(
                          (RestrictionNotSatisfySlot_o *)partyMemberItem,
                          *((System_String_o **)&v32[1].monitor + v34),
                          v31);
      if ( !partyMemberItem )
        goto LABEL_286;
      partyMemberItem = System_String__Replace_63608204(
                          partyMemberItem,
                          (System_String_o *)StringLiteral_43/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0);
      if ( !v20 )
        goto LABEL_286;
      items = v20->fields._items;
      v38 = Method_System_Collections_Generic_List_string__Add__;
      ++v20->fields._version;
      if ( !items )
        goto LABEL_286;
      size = v20->fields._size;
      v40 = partyMemberItem;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          (Il2CppObject *)partyMemberItem,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        v20->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v40;
        sub_1C36FFC((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v40, v35, v36);
      }
      LODWORD(klass) = v32[1].klass;
      if ( (__int64)++v34 >= (int)klass )
        goto LABEL_40;
    }
LABEL_287:
    sub_1C372BC(partyMemberItem);
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
  partyMemberItem = (System_String_o *)*v11;
  if ( !*v11 )
    goto LABEL_286;
  if ( !PartyOrganizationListViewItem__get_IsSupportOnly((PartyOrganizationListViewItem_o *)partyMemberItem, 0) )
  {
    partyMemberItem = (System_String_o *)*v11;
    if ( !*v11 )
      goto LABEL_286;
    if ( !PartyOrganizationListViewItem__get_IsFixedMyServantSingle(
            (PartyOrganizationListViewItem_o *)partyMemberItem,
            0) )
    {
      partyMemberItem = (System_String_o *)*v11;
      if ( !*v11 )
        goto LABEL_286;
      if ( !LOBYTE(partyMemberItem[10].monitor) && !BYTE1(partyMemberItem[10].monitor) )
      {
        if ( PartyOrganizationListViewItem__get_IsQuestRestriction(
               (PartyOrganizationListViewItem_o *)partyMemberItem,
               0) )
        {
          goto LABEL_261;
        }
        partyMemberItem = (System_String_o *)*v11;
        if ( !*v11 )
          goto LABEL_286;
        partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                               (PartyOrganizationListViewItem_o *)partyMemberItem,
                                               0);
        if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
        {
          if ( !*v11 )
            goto LABEL_286;
          partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsSetRequired(
                                                 questRestrictionInfo,
                                                 pos,
                                                 (*v11)->fields._InitPos_k__BackingField,
                                                 0);
          if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
            goto LABEL_261;
        }
        v179 = *v11;
        if ( !*v11 )
          goto LABEL_286;
        if ( v179->fields.isUniqueSvtRestriction
          || v179->fields.isUniqueIndividualityRestriction
          || (v179->fields.fatigureTime & 0x8000000000000000LL) == 0
          || v179->fields._IsAllOutBattle_k__BackingField
          || v179->fields._IsDataLost_k__BackingField
          || v179->fields._TimesToRestart_k__BackingField > 0
          || v179->fields._IsNotSupportSingle_k__BackingField
          || v179->fields.isFixedServantPositionRestriction
          || v179->fields.isFixedSupportPositionRestriction )
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
          partyMemberItem = (System_String_o *)*v11;
          if ( !*v11 )
            goto LABEL_286;
          partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                                 (PartyOrganizationListViewItem_o *)partyMemberItem,
                                                 0);
          if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
            goto LABEL_276;
          if ( !*v11 )
            goto LABEL_286;
          if ( QuestRestrictionInfo__IsSetRequired(
                 questRestrictionInfo,
                 pos,
                 (*v11)->fields._InitPos_k__BackingField,
                 0) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            partyMemberItem = LocalizationManager__Get((System_String_o *)StringLiteral_11102/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/, 0);
            if ( !v20 )
              goto LABEL_286;
            v182 = v20->fields._items;
            v183 = Method_System_Collections_Generic_List_string__Add__;
            ++v20->fields._version;
            if ( !v182 )
              goto LABEL_286;
            v184 = v20->fields._size;
            v185 = partyMemberItem;
            if ( (unsigned int)v184 >= LODWORD(v182->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v20,
                (Il2CppObject *)partyMemberItem,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v183[4] + 192LL) + 112LL));
            }
            else
            {
              v186 = &v182->obj.klass + v184;
              v20->fields._size = v184 + 1;
              v186[4] = (Il2CppClass *)v185;
              sub_1C36FFC((CGThumbnailListItem_o *)(v186 + 4), (int32_t)v185, v180, v181);
            }
            v187 = 1;
          }
          else
          {
LABEL_276:
            v187 = 0;
          }
          partyMemberItem = (System_String_o *)*v11;
          if ( !*v11 )
            goto LABEL_286;
          partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsQuestRestriction(
                                                 (PartyOrganizationListViewItem_o *)partyMemberItem,
                                                 0);
          if ( v187 | (unsigned __int8)partyMemberItem & 1 )
          {
            if ( !v20 )
              goto LABEL_286;
            if ( v20->fields._size >= 1 )
            {
              v188 = 0;
              do
              {
                Item = System_Collections_Generic_List_object___get_Item(
                         v20,
                         v188,
                         (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
                fixed = (Il2CppObject *)RestrictionNotSatisfySlot__AddColorCodeAndFixMessage(
                                          (RestrictionNotSatisfySlot_o *)Item,
                                          (System_String_o *)Item,
                                          v190);
                System_Collections_Generic_List_object___set_Item(
                  v20,
                  v188++,
                  fixed,
                  (const MethodInfo_37A2DA8 *)Method_System_Collections_Generic_List_string__set_Item__);
              }
              while ( v188 < v20->fields._size );
            }
          }
        }
      }
    }
  }
  questRestrictionInfoa = questRestrictionInfo;
  v42 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  if ( !v20 )
    goto LABEL_286;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v199,
    v20,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v203 = v199;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v203,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    restrictionLabelRoot = this->fields.restrictionLabelRoot;
    if ( !restrictionLabelRoot )
      sub_1C372B4(0);
    current = v203.fields._current;
    restrictionLabel = (Il2CppObject *)this->fields.restrictionLabel;
    transform = UnityEngine_GameObject__get_transform(restrictionLabelRoot, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v47 = UnityEngine_Object__Instantiate_object__51855596(
            restrictionLabel,
            transform,
            (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_UILabel____78192992);
    v48 = v47;
    if ( !v47 )
      sub_1C372B4(0);
    UILabel__set_text((UILabel_o *)v47, (System_String_o *)current, 0);
    if ( !v42 )
      sub_1C372B4(v49);
    v52 = v42->fields._items;
    v53 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++v42->fields._version;
    if ( !v52 )
      sub_1C372B4(v49);
    v54 = v42->fields._size;
    if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v42,
        v48,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      v55 = &v52->obj.klass + v54;
      v42->fields._size = v54 + 1;
      v55[4] = (Il2CppClass *)v48;
      sub_1C36FFC((CGThumbnailListItem_o *)(v55 + 4), (int32_t)v48, v50, v51);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v203,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v42 )
    goto LABEL_286;
  switchMessage = this->fields.switchMessage;
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                         v42,
                                         (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !switchMessage )
    goto LABEL_286;
  SwitchUIWidgetComponent__Set(switchMessage, (UIWidget_array *)partyMemberItem, 0, 0);
  v58 = Method_System_Array_Empty_int___;
  v59 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v59 )
  {
    sub_1C877C8(Method_System_Array_Empty_int___);
    v59 = v58[7];
  }
  v60 = *(_QWORD *)(v59 + 16);
  if ( (*(_BYTE *)(v60 + 309) & 1) == 0 )
    v60 = sub_1C8776C(v57);
  if ( !*(_DWORD *)(v60 + 224) )
    v57 = j_il2cpp_runtime_class_init_0(v60);
  v61 = *(_QWORD *)(v58[7] + 16LL);
  if ( (*(_BYTE *)(v61 + 309) & 1) == 0 )
    v61 = sub_1C8776C(v57);
  v62 = Method_System_Array_Empty_int___;
  servantIds = **(System_Int32_array ***)(v61 + 184);
  v63 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v63 )
  {
    sub_1C877C8(Method_System_Array_Empty_int___);
    v63 = v62[7];
  }
  v64 = *(_QWORD *)(v63 + 16);
  v65 = questRestrictionInfo;
  if ( (*(_BYTE *)(v64 + 309) & 1) == 0 )
    v64 = sub_1C8776C(v57);
  if ( !*(_DWORD *)(v64 + 224) )
    v57 = j_il2cpp_runtime_class_init_0(v64);
  v66 = *(_QWORD *)(v62[7] + 16LL);
  if ( (*(_BYTE *)(v66 + 309) & 1) == 0 )
    v66 = sub_1C8776C(v57);
  classImageIds = **(System_Int32_array ***)(v66 + 184);
  v67 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v67,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v67;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0);
  if ( !*v11 )
    goto LABEL_286;
  v68 = (char)partyMemberItem;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_43442220(
                                         questRestrictionInfo,
                                         (*v11)->fields._InitPos_k__BackingField,
                                         0);
  if ( (v68 & 1) == 0 )
  {
    if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
    {
      if ( !*v11 )
        goto LABEL_286;
      servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                     questRestrictionInfo,
                     &npcInfoDictionary,
                     (*v11)->fields._InitPos_k__BackingField,
                     0,
                     0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      partyMemberItem = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !partyMemberItem )
        goto LABEL_286;
      partyMemberItem = (System_String_o *)QuestPhaseMaster__TryGetEntity(
                                             (QuestPhaseMaster_o *)partyMemberItem,
                                             &v201,
                                             questRestrictionInfo->fields.questId,
                                             questRestrictionInfo->fields.questPhase,
                                             0);
      if ( !servantIds )
        goto LABEL_286;
      if ( !servantIds->max_length )
        goto LABEL_125;
      if ( !*v11 )
        goto LABEL_286;
      IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                    questRestrictionInfo,
                                    (*v11)->fields._InitPos_k__BackingField,
                                    0);
      v71 = v201;
      if ( !v201 )
        goto LABEL_125;
      goto LABEL_100;
    }
    v80 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v80,
      (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !*v11 )
      goto LABEL_286;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetNeedIndividualityList(
                                           questRestrictionInfo,
                                           (*v11)->fields._InitPos_k__BackingField,
                                           0);
    v81 = *v11;
    if ( !*v11 )
      goto LABEL_286;
    v82 = (System_Collections_Generic_List_object__o *)partyMemberItem;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetRangeTypeList(
                                           questRestrictionInfo,
                                           v81->fields._InitPos_k__BackingField,
                                           0);
    if ( !v82 )
      goto LABEL_286;
    if ( v82->fields._size >= 1 )
    {
      v83 = (System_Collections_Generic_List_T__o *)partyMemberItem;
      v84 = 0;
      while ( v83 )
      {
        if ( v83->fields._size > v84 )
        {
          partyMemberItem = (System_String_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                 v83,
                                                 v84,
                                                 (const MethodInfo_378853C *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          if ( (_DWORD)partyMemberItem == 1 )
          {
            partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                                   v82,
                                                   v84,
                                                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_int____get_Item__);
            if ( !v80 )
              goto LABEL_286;
            System_Collections_Generic_List_int___AddRange(
              v80,
              (System_Collections_Generic_IEnumerable_T__o *)partyMemberItem,
              (const MethodInfo_378620C *)Method_System_Collections_Generic_List_int__AddRange__);
          }
        }
        if ( ++v84 >= v82->fields._size )
          goto LABEL_122;
      }
      goto LABEL_286;
    }
LABEL_122:
    if ( !v80 )
      goto LABEL_286;
    partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                           v80,
                                           (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    v79 = (System_Int32_array *)partyMemberItem;
LABEL_124:
    RestrictionNotSatisfySlot__GetIconIdFromIndividuality(
      (RestrictionNotSatisfySlot_o *)partyMemberItem,
      &servantIds,
      &classImageIds,
      v79,
      v69);
    goto LABEL_125;
  }
  if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
  {
    if ( !v19 )
      goto LABEL_286;
    monitor = v19[1].monitor;
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
    v78 = v19[2].klass;
    if ( !v78 )
      goto LABEL_286;
    v79 = *(System_Int32_array **)&v78->_1.byval_arg.bits;
    goto LABEL_124;
  }
  if ( !*v11 )
    goto LABEL_286;
  servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                 questRestrictionInfo,
                 &npcInfoDictionary,
                 (*v11)->fields._InitPos_k__BackingField,
                 1,
                 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  partyMemberItem = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
  if ( !*v11 )
    goto LABEL_286;
  IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                questRestrictionInfo,
                                (*v11)->fields._InitPos_k__BackingField,
                                0);
  v71 = entity;
  if ( !entity )
    goto LABEL_125;
LABEL_100:
  if ( !IsSelectableNormalSupport || v71->fields.isNpcOnly )
    goto LABEL_125;
  v72 = (System_Collections_Generic_IEnumerable_T__o *)servantIds;
  v73 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58218708(
    v73,
    v72,
    (const MethodInfo_37858D4 *)Method_System_Collections_Generic_List_int___ctor___78055976);
  if ( !v73 )
    goto LABEL_286;
  v74 = v73->fields._items;
  v75 = Method_System_Collections_Generic_List_int__Add__;
  ++v73->fields._version;
  if ( !v74 )
    goto LABEL_286;
  v76 = v73->fields._size;
  if ( (unsigned int)v76 >= LODWORD(v74->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v73,
      0,
      *(const MethodInfo_3786000 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
  }
  else
  {
    v73->fields._size = v76 + 1;
    v74->m_Items[v76] = 0;
  }
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                         v73,
                                         (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    v146 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UIWidget__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v146,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
    v147 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v147,
      (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
    v148 = classImageIds;
    if ( !classImageIds )
      goto LABEL_286;
    max_length = classImageIds->max_length;
    if ( (int)max_length < 1 )
      goto LABEL_237;
    v150 = 0;
    v151 = 0;
    do
    {
      if ( v151 >= (unsigned int)max_length )
        goto LABEL_287;
      if ( !v147 )
        goto LABEL_286;
      v152 = v148->m_Items[v151];
      v153 = v147->fields._items;
      v154 = Method_System_Collections_Generic_List_int__Add__;
      ++v147->fields._version;
      if ( !v153 )
        goto LABEL_286;
      v155 = v147->fields._size;
      if ( (unsigned int)v155 >= LODWORD(v153->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v147,
          v152,
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v154[4] + 192LL) + 112LL));
      }
      else
      {
        v147->fields._size = v155 + 1;
        v153->m_Items[v155] = v152;
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
                                               0,
                                               0);
        if ( !partyMemberItem )
          goto LABEL_286;
        Component_object = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 (UnityEngine_GameObject_o *)partyMemberItem,
                                                                 (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                               v147,
                                               (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !Component_object )
          goto LABEL_286;
        RestrictionNotSatisfySlotIcons__SetClassIcons(Component_object, (System_Int32_array *)partyMemberItem, v157);
        if ( !v146 )
          goto LABEL_286;
        iconsWidget = (Il2CppObject *)Component_object->fields.iconsWidget;
        v161 = v146->fields._items;
        v162 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++v146->fields._version;
        if ( !v161 )
          goto LABEL_286;
        v163 = v146->fields._size;
        if ( (unsigned int)v163 >= LODWORD(v161->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v146,
            iconsWidget,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v162[4] + 192LL) + 112LL));
        }
        else
        {
          v164 = &v161->obj.klass + v163;
          v146->fields._size = v163 + 1;
          v164[4] = (Il2CppClass *)iconsWidget;
          sub_1C36FFC((CGThumbnailListItem_o *)(v164 + 4), (int32_t)iconsWidget, v158, v159);
        }
        v150 = 0;
        v165 = v147->fields._version + 1;
        v147->fields._size = 0;
        v147->fields._version = v165;
      }
      LODWORD(max_length) = v148->max_length;
      ++v151;
    }
    while ( (__int64)v151 < (int)max_length );
    if ( v150 )
    {
      partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)this,
                                             this->fields.servantIconsPrefab,
                                             this->fields.iconParent,
                                             0,
                                             0);
      if ( !partyMemberItem )
        goto LABEL_286;
      v166 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)partyMemberItem,
                                                   (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
      partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                             v147,
                                             (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v166 )
        goto LABEL_286;
      RestrictionNotSatisfySlotIcons__SetClassIcons(v166, (System_Int32_array *)partyMemberItem, v167);
      if ( !v146 )
        goto LABEL_286;
      v170 = (Il2CppObject *)v166->fields.iconsWidget;
      v171 = v146->fields._items;
      v172 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++v146->fields._version;
      if ( !v171 )
        goto LABEL_286;
      v173 = v146->fields._size;
      if ( (unsigned int)v173 >= LODWORD(v171->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v146,
          v170,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v172[4] + 192LL) + 112LL));
      }
      else
      {
        v174 = &v171->obj.klass + v173;
        v146->fields._size = v173 + 1;
        v174[4] = (Il2CppClass *)v170;
        sub_1C36FFC((CGThumbnailListItem_o *)(v174 + 4), (int32_t)v170, v168, v169);
      }
    }
    else
    {
LABEL_237:
      if ( !v146 )
        goto LABEL_286;
    }
    switchIcons = this->fields.switchIcons;
    partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                           v146,
                                           (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !switchIcons )
      goto LABEL_286;
    v176 = (UIWidget_array *)partyMemberItem;
    v177 = switchIcons;
    goto LABEL_242;
  }
  partyMemberItem = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !partyMemberItem )
    goto LABEL_286;
  MasterData_object = (UserServantCollectionMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)partyMemberItem,
                                                         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (NpcServantFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v192 = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v85 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v85,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  v86 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v86,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  v87 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v87,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  v88 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v88,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  v89 = (System_Collections_Generic_List_bool__o *)sub_1C372A4(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor(
    v89,
    (const MethodInfo_375C3E0 *)Method_System_Collections_Generic_List_bool___ctor__);
  v90 = servantIds;
  if ( !servantIds )
LABEL_286:
    sub_1C372B4(partyMemberItem);
  v91 = servantIds->max_length;
  if ( (int)v91 >= 1 )
  {
    v92 = 0;
    v93 = 0;
    m_Items = servantIds->m_Items;
    v195 = servantIds;
    do
    {
      if ( v93 >= (unsigned int)v91 )
        goto LABEL_287;
      if ( !v86 )
        goto LABEL_286;
      v94 = m_Items[v93];
      v95 = v86->fields._items;
      v96 = Method_System_Collections_Generic_List_int__Add__;
      ++v86->fields._version;
      if ( !v95 )
        goto LABEL_286;
      v97 = v86->fields._size;
      if ( (unsigned int)v97 >= LODWORD(v95->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v86,
          v94,
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
      }
      else
      {
        v86->fields._size = v97 + 1;
        v95->m_Items[v97] = v94;
      }
      partyMemberItem = (System_String_o *)npcInfoDictionary;
      if ( !npcInfoDictionary )
        goto LABEL_286;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
              v94,
              (const MethodInfo_33FA778 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
        goto LABEL_294;
      partyMemberItem = (System_String_o *)npcInfoDictionary;
      if ( !npcInfoDictionary )
        goto LABEL_286;
      v98 = System_Collections_Generic_Dictionary_int__object___get_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
              v94,
              (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
      if ( v98 )
      {
        questId = v65->fields.questId;
        questPhase = v65->fields.questPhase;
        v101 = (FollowerInfo_o *)v98;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0);
        LimitCount = FollowerInfo__getLimitCount(v101, 0, ReturnTypeByQuestId, 0);
        partyMemberItem = (System_String_o *)Master_object;
        if ( !Master_object )
          goto LABEL_286;
        partyMemberItem = (System_String_o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                               Master_object,
                                               &npcServantFollowerEntity,
                                               questId,
                                               questPhase,
                                               v94,
                                               0);
        if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
          goto LABEL_170;
        if ( !npcServantFollowerEntity )
          goto LABEL_286;
        partyMemberItem = (System_String_o *)NpcServantFollowerEntity__IsHideRarity(
                                               npcServantFollowerEntity->fields.flag,
                                               0);
        if ( !v89 )
          goto LABEL_286;
        v104 = v89->fields._items;
        v105 = Method_System_Collections_Generic_List_bool__Add__;
        ++v89->fields._version;
        if ( !v104 )
          goto LABEL_286;
        v106 = v89->fields._size;
        if ( (unsigned int)v106 >= LODWORD(v104->max_length) )
        {
          System_Collections_Generic_List_bool___AddWithResize(
            v89,
            (unsigned __int8)partyMemberItem & 1,
            *(const MethodInfo_375CC44 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
        }
        else
        {
          v89->fields._size = v106 + 1;
          v104->m_Items[v106] = (unsigned __int8)partyMemberItem & 1;
        }
        partyMemberItem = (System_String_o *)v192;
        if ( !npcServantFollowerEntity || !v192 )
          goto LABEL_286;
        partyMemberItem = (System_String_o *)NpcFollowerMaster__GetEntity_42420940(
                                               v192,
                                               questId,
                                               questPhase,
                                               npcServantFollowerEntity->fields.id,
                                               0);
        if ( partyMemberItem )
        {
          partyMemberItem = (System_String_o *)NpcFollowerEntity__GetImageSvtId(
                                                 (NpcFollowerEntity_o *)partyMemberItem,
                                                 0);
          v110 = (int)partyMemberItem;
        }
        else
        {
LABEL_170:
          v110 = 0;
        }
        v90 = v195;
        v65 = questRestrictionInfoa;
        if ( !v87 )
          goto LABEL_286;
      }
      else
      {
LABEL_294:
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C3CD62 )
        {
          sub_1C37058(&NetworkManager_TypeInfo);
          byte_4C3CD62 = 1;
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
                                               v94,
                                               0);
        if ( !partyMemberItem )
          goto LABEL_286;
        if ( !v89 )
          goto LABEL_286;
        LimitCount = (int32_t)partyMemberItem[2].monitor;
        v107 = v89->fields._items;
        v108 = Method_System_Collections_Generic_List_bool__Add__;
        ++v89->fields._version;
        if ( !v107 )
          goto LABEL_286;
        v109 = v89->fields._size;
        if ( (unsigned int)v109 >= LODWORD(v107->max_length) )
        {
          System_Collections_Generic_List_bool___AddWithResize(
            v89,
            0,
            *(const MethodInfo_375CC44 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
          v110 = 0;
          if ( !v87 )
            goto LABEL_286;
        }
        else
        {
          v110 = 0;
          v89->fields._size = v109 + 1;
          v107->m_Items[v109] = 0;
          if ( !v87 )
            goto LABEL_286;
        }
      }
      v111 = v87->fields._items;
      v112 = Method_System_Collections_Generic_List_int__Add__;
      ++v87->fields._version;
      if ( !v111 )
        goto LABEL_286;
      v113 = v87->fields._size;
      if ( (unsigned int)v113 >= LODWORD(v111->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v87,
          LimitCount,
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
      }
      else
      {
        v87->fields._size = v113 + 1;
        v111->m_Items[v113] = LimitCount;
      }
      if ( !v88 )
        goto LABEL_286;
      v114 = v88->fields._items;
      v115 = Method_System_Collections_Generic_List_int__Add__;
      ++v88->fields._version;
      if ( !v114 )
        goto LABEL_286;
      v116 = v88->fields._size;
      if ( (unsigned int)v116 >= LODWORD(v114->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v88,
          v110,
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
      }
      else
      {
        v88->fields._size = v116 + 1;
        v114->m_Items[v116] = v110;
      }
      partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      if ( !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo);
        partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      }
      if ( ++v92 >= **(_DWORD **)&partyMemberItem[7].fields )
      {
        partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                               (BaseMonoBehaviour_o *)this,
                                               this->fields.servantIconsPrefab,
                                               this->fields.iconParent,
                                               0,
                                               0);
        if ( !partyMemberItem )
          goto LABEL_286;
        v117 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)partyMemberItem,
                                                     (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        v118 = System_Collections_Generic_List_int___ToArray(
                 v86,
                 (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
        v119 = System_Collections_Generic_List_int___ToArray(
                 v87,
                 (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                               v88,
                                               (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !v89 )
          goto LABEL_286;
        v120 = (System_Int32_array *)partyMemberItem;
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_bool___ToArray(
                                               v89,
                                               (const MethodInfo_375E730 *)Method_System_Collections_Generic_List_bool__ToArray__);
        if ( !v117 )
          goto LABEL_286;
        v122 = v120;
        v65 = questRestrictionInfoa;
        RestrictionNotSatisfySlotIcons__SetServantIcons(
          v117,
          v118,
          v119,
          v122,
          (System_Boolean_array *)partyMemberItem,
          questRestrictionInfoa,
          v121);
        if ( !v85 )
          goto LABEL_286;
        v125 = (Il2CppObject *)v117->fields.iconsWidget;
        v126 = v85->fields._items;
        v90 = v195;
        v127 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++v85->fields._version;
        if ( !v126 )
          goto LABEL_286;
        v128 = v85->fields._size;
        if ( (unsigned int)v128 >= LODWORD(v126->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v85,
            v125,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
        }
        else
        {
          v129 = &v126->obj.klass + v128;
          v85->fields._size = v128 + 1;
          v129[4] = (Il2CppClass *)v125;
          sub_1C36FFC((CGThumbnailListItem_o *)(v129 + 4), (int32_t)v125, v123, v124);
        }
        v92 = 0;
        v130 = v86->fields._version + 1;
        v86->fields._size = 0;
        v86->fields._version = v130;
        v131 = v87->fields._version + 1;
        v87->fields._size = 0;
        v87->fields._version = v131;
        v132 = v88->fields._version + 1;
        v88->fields._size = 0;
        v88->fields._version = v132;
        v133 = v89->fields._version + 1;
        v89->fields._size = 0;
        v89->fields._version = v133;
      }
      LODWORD(v91) = v90->max_length;
      ++v93;
    }
    while ( (__int64)v93 < (int)v91 );
    if ( v92 )
    {
      partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)this,
                                             this->fields.servantIconsPrefab,
                                             this->fields.iconParent,
                                             0,
                                             0);
      if ( partyMemberItem )
      {
        v134 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)partyMemberItem,
                                                     (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        v135 = System_Collections_Generic_List_int___ToArray(
                 v86,
                 (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
        v136 = System_Collections_Generic_List_int___ToArray(
                 v87,
                 (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                               v88,
                                               (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( v89 )
        {
          v137 = (System_Int32_array *)partyMemberItem;
          partyMemberItem = (System_String_o *)System_Collections_Generic_List_bool___ToArray(
                                                 v89,
                                                 (const MethodInfo_375E730 *)Method_System_Collections_Generic_List_bool__ToArray__);
          if ( v134 )
          {
            RestrictionNotSatisfySlotIcons__SetServantIcons(
              v134,
              v135,
              v136,
              v137,
              (System_Boolean_array *)partyMemberItem,
              v65,
              v138);
            if ( v85 )
            {
              v141 = (Il2CppObject *)v134->fields.iconsWidget;
              v142 = v85->fields._items;
              v143 = Method_System_Collections_Generic_List_UIWidget__Add__;
              ++v85->fields._version;
              if ( v142 )
              {
                v144 = v85->fields._size;
                if ( (unsigned int)v144 >= LODWORD(v142->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v85,
                    v141,
                    *(const MethodInfo_37A3024 **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
                }
                else
                {
                  v145 = &v142->obj.klass + v144;
                  v85->fields._size = v144 + 1;
                  v145[4] = (Il2CppClass *)v141;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v145 + 4), (int32_t)v141, v139, v140);
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
  if ( !v85 )
    goto LABEL_286;
LABEL_235:
  v175 = this->fields.switchIcons;
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                         v85,
                                         (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !v175 )
    goto LABEL_286;
  v176 = (UIWidget_array *)partyMemberItem;
  v177 = v175;
LABEL_242:
  SwitchUIWidgetComponent__Set(v177, v176, 0, 0);
  partyMemberItem = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C3ED52 & 1) == 0 )
  {
    sub_1C37058(&RestrictionNotSatisfySlot___c_TypeInfo);
    byte_4C3ED52 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(RestrictionNotSatisfySlot___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RestrictionNotSatisfySlot___c_TypeInfo->static_fields->__9 = (struct RestrictionNotSatisfySlot___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)RestrictionNotSatisfySlot___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
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
  if ( (byte_4C3ED53 & 1) == 0 )
  {
    this = (RestrictionNotSatisfySlot___c__DisplayClass14_0_o *)sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C3ED53 = 1;
  }
  if ( !entity )
    goto LABEL_13;
  memberItem = v4->fields.memberItem;
  if ( entity->fields.type != 9 )
  {
    if ( memberItem )
      goto LABEL_9;
LABEL_13:
    sub_1C372B4(this);
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
         (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___)
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