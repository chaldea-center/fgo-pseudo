void RestrictionNotSatisfySlot___cctor(const MethodInfo *method)
{
  if ( (byte_4CB2033 & 1) == 0 )
  {
    sub_1C6BA08(&RestrictionNotSatisfySlot_TypeInfo);
    byte_4CB2033 = 1;
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
  const MethodInfo *v7; // x3
  System_String_o *v8; // x19
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1

  if ( (byte_4CB2031 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    sub_1C6BA08(&StringLiteral_15820/*"[-]"*/);
    sub_1C6BA08(&StringLiteral_11103/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_1C6BA08(&StringLiteral_15919/*"[FFFF00]"*/);
    byte_4CB2031 = 1;
  }
  v4 = (System_String_o *)sub_1C6BAB0(string___TypeInfo, 5);
  if ( !v4 )
    sub_1C6BC60(0, v5);
  v8 = v4;
  if ( !LODWORD(v4[1].klass) )
    goto LABEL_12;
  v9 = StringLiteral_15919/*"[FFFF00]"*/;
  v4[1].monitor = (void *)StringLiteral_15919/*"[FFFF00]"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v4[1].monitor, v9, v6, v7);
  if ( LODWORD(v8[1].klass) <= 1 )
    goto LABEL_12;
  v8[1].fields = (System_String_Fields)message;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8[1].fields, (int32_t)message, v10, v11);
  if ( LODWORD(v8[1].klass) <= 2 )
    goto LABEL_12;
  v14 = StringLiteral_43/*"\n"*/;
  v8[2].klass = (System_String_c *)StringLiteral_43/*"\n"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8[2], v14, v12, v13);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_11103/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0);
  if ( LODWORD(v8[1].klass) <= 3
    || (v8[2].monitor = v4,
        sub_1C6B9AC((CGThumbnailListItem_o *)&v8[2].monitor, (int32_t)v4, v15, v16),
        LODWORD(v8[1].klass) <= 4) )
  {
LABEL_12:
    sub_1C6BC68(v4);
  }
  v19 = (int)StringLiteral_15820/*"[-]"*/;
  v8[2].fields = (System_String_Fields)StringLiteral_15820/*"[-]"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8[2].fields, v19, v17, v18);
  return System_String__Concat_64007324((System_String_array *)v8, 0);
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
  const MethodInfo *v26; // x3
  System_Int32_array *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  ServantClassEntity_o *v31; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4CB2030 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CB2030 = 1;
  }
  v31 = 0;
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantMaster___);
  v8 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  v10 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individuality )
    goto LABEL_29;
  max_length = individuality->max_length;
  if ( (int)max_length >= 1 )
  {
    v14 = 0;
    do
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1C6BC68(EntityByIndividuality);
      if ( !Master_object )
        goto LABEL_29;
      v15 = individuality->m_Items[v14];
      EntityByIndividuality = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                &entity,
                                v15,
                                (const MethodInfo_33F9128 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v22 + 192) + 112LL));
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
                                  &v31,
                                  v15,
                                  0);
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
                (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__),
        *servantIds = v24,
        sub_1C6B9AC((CGThumbnailListItem_o *)servantIds, (int32_t)v24, v25, v26),
        !v10) )
  {
LABEL_29:
    sub_1C6BC60(EntityByIndividuality, iconImageId);
  }
  v27 = System_Collections_Generic_List_int___ToArray(
          v10,
          (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
  *classImageIds = v27;
  sub_1C6B9AC((CGThumbnailListItem_o *)classImageIds, (int32_t)v27, v28, v29);
}


System_String_o *RestrictionNotSatisfySlot__RemoveColorCode(
        RestrictionNotSatisfySlot_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4CB2032 & 1) == 0 )
  {
    sub_1C6BA08(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C6BA08(&StringLiteral_15948/*"[[]-[\\]]"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_15949/*"[[][0-9A-F]{6}[\\]]"*/);
    byte_4CB2032 = 1;
  }
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  v4 = System_Text_RegularExpressions_Regex__Replace(
         message,
         (System_String_o *)StringLiteral_15949/*"[[][0-9A-F]{6}[\\]]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0);
  return System_Text_RegularExpressions_Regex__Replace(
           v4,
           (System_String_o *)StringLiteral_15948/*"[[]-[\\]]"*/,
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
  const MethodInfo *v11; // x3
  PartyOrganizationListViewItem_o **v12; // x21
  UISprite_o *numberSprite; // x20
  System_String_o *v14; // x0
  long double inited; // q0
  _QWORD *v16; // x20
  __int64 v17; // x8
  __int64 v18; // x0
  __int64 v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x22
  System_Collections_Generic_List_object__o *v21; // x23
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x20
  System_Func_object__bool__o *v23; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  RestrictionNotSatisfySlot___c_c *v25; // x0
  System_Func_object__bool__o *_9__14_1; // x20
  Il2CppObject *v27; // x24
  struct RestrictionNotSatisfySlot___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  const MethodInfo *v32; // x2
  System_String_o *v33; // x20
  System_String_c *klass; // x8
  unsigned __int64 v35; // x19
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  System_String_o *v41; // x1
  Il2CppClass **v42; // x0
  System_Collections_Generic_List_object__o *v43; // x24
  __int64 v44; // x1
  UnityEngine_GameObject_o *restrictionLabelRoot; // x0
  Il2CppObject *current; // x23
  Il2CppObject *restrictionLabel; // x20
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *v49; // x0
  __int64 v50; // x1
  Il2CppObject *v51; // x20
  __int64 v52; // x0
  __int64 v53; // x1
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  Il2CppClass **v59; // x0
  SwitchUIWidgetComponent_o *switchMessage; // x20
  long double v61; // q0
  _QWORD *v62; // x20
  __int64 v63; // x8
  __int64 v64; // x0
  __int64 v65; // x0
  _QWORD *v66; // x20
  __int64 v67; // x8
  __int64 v68; // x0
  QuestRestrictionInfo_o *v69; // x29
  __int64 v70; // x0
  System_Collections_Generic_Dictionary_int__object__o *v71; // x20
  char v72; // w20
  const MethodInfo *v73; // x4
  bool IsSelectableNormalSupport; // w0
  QuestPhaseEntity_o *v75; // x8
  System_Collections_Generic_IEnumerable_T__o *v76; // x21
  System_Collections_Generic_List_int__o *v77; // x20
  struct System_Int32_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_TSource__c *v82; // x8
  System_Int32_array *v83; // x3
  System_Collections_Generic_List_int__o *v84; // x20
  PartyOrganizationListViewItem_o *v85; // x8
  System_Collections_Generic_List_object__o *v86; // x21
  System_Collections_Generic_List_T__o *v87; // x22
  int32_t v88; // w23
  System_Collections_Generic_List_object__o *v89; // x21
  System_Collections_Generic_List_int__o *v90; // x22
  System_Collections_Generic_List_int__o *v91; // x24
  System_Collections_Generic_List_int__o *v92; // x25
  System_Collections_Generic_List_bool__o *v93; // x26
  System_Int32_array *v94; // x27
  il2cpp_array_size_t v95; // x8
  int v96; // w19
  unsigned __int64 v97; // x23
  int32_t v98; // w20
  struct System_Int32_array *v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  Il2CppObject *v102; // x0
  int32_t questId; // w27
  int32_t questPhase; // w29
  FollowerInfo_o *v105; // x28
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w28
  struct System_Boolean_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  struct System_Boolean_array *v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  int32_t v114; // w20
  struct System_Int32_array *v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  struct System_Int32_array *v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  RestrictionNotSatisfySlotIcons_o *v121; // x20
  System_Int32_array *v122; // x27
  System_Int32_array *v123; // x28
  System_Int32_array *v124; // x29
  const MethodInfo *v125; // x6
  System_Int32_array *v126; // x3
  int32_t v127; // w2
  const MethodInfo *v128; // x3
  struct System_Object_array *v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  Il2CppClass **v132; // x0
  int v133; // w8
  int v134; // w8
  int v135; // w8
  int v136; // w8
  RestrictionNotSatisfySlotIcons_o *v137; // x20
  System_Int32_array *v138; // x22
  System_Int32_array *v139; // x23
  System_Int32_array *v140; // x24
  const MethodInfo *v141; // x6
  int32_t v142; // w2
  const MethodInfo *v143; // x3
  struct System_Object_array *v144; // x8
  _QWORD *v145; // x9
  __int64 v146; // x10
  Il2CppClass **v147; // x0
  System_Collections_Generic_List_object__o *v148; // x20
  System_Collections_Generic_List_int__o *v149; // x21
  System_Int32_array *v150; // x19
  il2cpp_array_size_t max_length; // x8
  int v152; // w22
  unsigned __int64 v153; // x23
  struct System_Int32_array *v154; // x8
  _QWORD *v155; // x9
  __int64 v156; // x10
  RestrictionNotSatisfySlotIcons_o *Component_object; // x22
  const MethodInfo *v158; // x2
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  struct System_Object_array *v161; // x8
  _QWORD *v162; // x9
  __int64 v163; // x10
  Il2CppClass **v164; // x0
  int v165; // w8
  RestrictionNotSatisfySlotIcons_o *v166; // x22
  const MethodInfo *v167; // x2
  int32_t v168; // w2
  const MethodInfo *v169; // x3
  struct System_Object_array *v170; // x8
  _QWORD *v171; // x9
  __int64 v172; // x10
  Il2CppClass **v173; // x0
  struct SwitchUIWidgetComponent_o *v174; // x20
  UIWidget_array *v175; // x1
  SwitchUIWidgetComponent_o *v176; // x0
  struct SwitchUIWidgetComponent_o *switchIcons; // x21
  PartyOrganizationListViewItem_o *v178; // x8
  int32_t v179; // w2
  const MethodInfo *v180; // x3
  struct System_Object_array *v181; // x8
  _QWORD *v182; // x9
  __int64 v183; // x10
  System_String_o *v184; // x1
  Il2CppClass **v185; // x0
  int v186; // w19
  int32_t v187; // w20
  Il2CppObject *Item; // x0
  const MethodInfo *v189; // x2
  Il2CppObject *fixed; // x0
  NpcFollowerMaster_o *v191; // [xsp+48h] [xbp-108h]
  NpcServantFollowerMaster_o *Master_object; // [xsp+50h] [xbp-100h]
  UserServantCollectionMaster_o *MasterData_object; // [xsp+58h] [xbp-F8h]
  System_Int32_array *v194; // [xsp+60h] [xbp-F0h]
  QuestRestrictionInfo_o *questRestrictionInfoa; // [xsp+68h] [xbp-E8h]
  int32_t *m_Items; // [xsp+70h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v198; // [xsp+80h] [xbp-D0h] BYREF
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+98h] [xbp-B8h] BYREF
  QuestPhaseEntity_o *v200; // [xsp+A0h] [xbp-B0h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+A8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v202; // [xsp+B0h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+D0h] [xbp-80h] BYREF
  System_Int32_array *classImageIds; // [xsp+D8h] [xbp-78h] BYREF
  System_Int32_array *servantIds; // [xsp+E0h] [xbp-70h] BYREF
  int32_t pos; // [xsp+ECh] [xbp-64h] BYREF

  pos = number;
  if ( (byte_4CB202F & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_int___);
    sub_1C6BA08(&Method_System_Array_Empty_RestrictionEntity___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C6BA08(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_bool__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_bool__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_bool__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_bool___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor___78518792);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_bool__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_UILabel____78656288);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&RestrictionNotSatisfySlot_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__);
    sub_1C6BA08(&Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__);
    sub_1C6BA08(&RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo);
    sub_1C6BA08(&RestrictionNotSatisfySlot___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    sub_1C6BA08(&StringLiteral_21617/*"member_txt_"*/);
    sub_1C6BA08(&StringLiteral_11100/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB202F = 1;
  }
  classImageIds = 0;
  servantIds = 0;
  npcInfoDictionary = 0;
  memset(&v202, 0, sizeof(v202));
  v200 = 0;
  entity = 0;
  npcServantFollowerEntity = 0;
  v7 = sub_1C6BC54(RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_286;
  *(_QWORD *)(v7 + 16) = memberItem;
  v12 = (PartyOrganizationListViewItem_o **)(v7 + 16);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)memberItem, v10, v11);
  numberSprite = this->fields.numberSprite;
  v14 = System_Int32__ToString((int32_t)&pos, 0);
  partyMemberItem = System_String__Concat_63966792((System_String_o *)StringLiteral_21617/*"member_txt_"*/, v14, 0);
  if ( !numberSprite )
    goto LABEL_286;
  UISprite__set_spriteName(numberSprite, partyMemberItem, 0);
  partyMemberItem = (System_String_o *)this->fields.partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_286;
  PartyOrganizationConfirmItemDraw__SetItem(
    (PartyOrganizationConfirmItemDraw_o *)partyMemberItem,
    *v12,
    3,
    0,
    0,
    0,
    0,
    0);
  v16 = Method_System_Array_Empty_RestrictionEntity___;
  v17 = *((_QWORD *)Method_System_Array_Empty_RestrictionEntity___ + 7);
  if ( !v17 )
  {
    sub_1C41AF8(Method_System_Array_Empty_RestrictionEntity___);
    v17 = v16[7];
  }
  v18 = *(_QWORD *)(v17 + 16);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C41A9C(inited);
  if ( !*(_DWORD *)(v18 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v18);
  v19 = *(_QWORD *)(v16[7] + 16LL);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1C41A9C(inited);
  v20 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v19 + 184);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !questRestrictionInfo )
    goto LABEL_286;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0);
  if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
  {
    restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
    v23 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v23,
      (Il2CppObject *)v7,
      Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__,
      0);
    v24 = System_Linq_Enumerable__Where_object_(
            restrictionEntityList,
            (System_Func_TSource__bool__o *)v23,
            (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 v24,
                                                                 (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    if ( questRestrictionInfo->fields.isUniqueServant && questRestrictionInfo->fields.isUniqueIndividuality )
    {
      v25 = RestrictionNotSatisfySlot___c_TypeInfo;
      if ( !RestrictionNotSatisfySlot___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot___c_TypeInfo);
        v25 = RestrictionNotSatisfySlot___c_TypeInfo;
      }
      _9__14_1 = (System_Func_object__bool__o *)v25->static_fields->__9__14_1;
      if ( !_9__14_1 )
      {
        if ( !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          v25 = RestrictionNotSatisfySlot___c_TypeInfo;
        }
        v27 = (Il2CppObject *)v25->static_fields->__9;
        _9__14_1 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__14_1, v27, Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__, 0);
        static_fields = RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
        static_fields->__9__14_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__14_1;
        sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__14_1, (int32_t)_9__14_1, v29, v30);
      }
      v31 = System_Linq_Enumerable__Where_object_(
              v20,
              (System_Func_TSource__bool__o *)_9__14_1,
              (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                   v31,
                                                                   (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    }
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetMessages_43664272(
                                           questRestrictionInfo,
                                           (RestrictionEntity_array *)v20,
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
    if ( !*v12 )
      goto LABEL_286;
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
                                           0);
  }
  v33 = partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_286;
  klass = partyMemberItem[1].klass;
  if ( klass && (int)klass >= 1 )
  {
    v35 = 0;
    while ( v35 < (unsigned int)klass )
    {
      partyMemberItem = RestrictionNotSatisfySlot__RemoveColorCode(
                          (RestrictionNotSatisfySlot_o *)partyMemberItem,
                          *((System_String_o **)&v33[1].monitor + v35),
                          v32);
      if ( !partyMemberItem )
        goto LABEL_286;
      partyMemberItem = System_String__Replace_64013356(
                          partyMemberItem,
                          (System_String_o *)StringLiteral_43/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0);
      if ( !v21 )
        goto LABEL_286;
      items = v21->fields._items;
      v39 = Method_System_Collections_Generic_List_string__Add__;
      ++v21->fields._version;
      if ( !items )
        goto LABEL_286;
      size = v21->fields._size;
      v41 = partyMemberItem;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          (Il2CppObject *)partyMemberItem,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v42[4] = (Il2CppClass *)v41;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v41, v36, v37);
      }
      LODWORD(klass) = v33[1].klass;
      if ( (__int64)++v35 >= (int)klass )
        goto LABEL_40;
    }
LABEL_287:
    sub_1C6BC68(partyMemberItem);
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
  partyMemberItem = (System_String_o *)*v12;
  if ( !*v12 )
    goto LABEL_286;
  if ( !PartyOrganizationListViewItem__get_IsSupportOnly((PartyOrganizationListViewItem_o *)partyMemberItem, 0) )
  {
    partyMemberItem = (System_String_o *)*v12;
    if ( !*v12 )
      goto LABEL_286;
    if ( !PartyOrganizationListViewItem__get_IsFixedMyServantSingle(
            (PartyOrganizationListViewItem_o *)partyMemberItem,
            0) )
    {
      partyMemberItem = (System_String_o *)*v12;
      if ( !*v12 )
        goto LABEL_286;
      if ( !LOBYTE(partyMemberItem[10].monitor) && !BYTE1(partyMemberItem[10].monitor) )
      {
        if ( PartyOrganizationListViewItem__get_IsQuestRestriction(
               (PartyOrganizationListViewItem_o *)partyMemberItem,
               0) )
        {
          goto LABEL_261;
        }
        partyMemberItem = (System_String_o *)*v12;
        if ( !*v12 )
          goto LABEL_286;
        partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                               (PartyOrganizationListViewItem_o *)partyMemberItem,
                                               0);
        if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
        {
          if ( !*v12 )
            goto LABEL_286;
          partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsSetRequired(
                                                 questRestrictionInfo,
                                                 pos,
                                                 (*v12)->fields._InitPos_k__BackingField,
                                                 0);
          if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
            goto LABEL_261;
        }
        v178 = *v12;
        if ( !*v12 )
          goto LABEL_286;
        if ( v178->fields.isUniqueSvtRestriction
          || v178->fields.isUniqueIndividualityRestriction
          || (v178->fields.fatigureTime & 0x8000000000000000LL) == 0
          || v178->fields._IsAllOutBattle_k__BackingField
          || v178->fields._IsDataLost_k__BackingField
          || v178->fields._TimesToRestart_k__BackingField > 0
          || v178->fields._IsNotSupportSingle_k__BackingField
          || v178->fields.isFixedServantPositionRestriction
          || v178->fields.isFixedSupportPositionRestriction )
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
          partyMemberItem = (System_String_o *)*v12;
          if ( !*v12 )
            goto LABEL_286;
          partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                                 (PartyOrganizationListViewItem_o *)partyMemberItem,
                                                 0);
          if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
            goto LABEL_276;
          if ( !*v12 )
            goto LABEL_286;
          if ( QuestRestrictionInfo__IsSetRequired(
                 questRestrictionInfo,
                 pos,
                 (*v12)->fields._InitPos_k__BackingField,
                 0) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            partyMemberItem = LocalizationManager__Get((System_String_o *)StringLiteral_11100/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/, 0);
            if ( !v21 )
              goto LABEL_286;
            v181 = v21->fields._items;
            v182 = Method_System_Collections_Generic_List_string__Add__;
            ++v21->fields._version;
            if ( !v181 )
              goto LABEL_286;
            v183 = v21->fields._size;
            v184 = partyMemberItem;
            if ( (unsigned int)v183 >= LODWORD(v181->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v21,
                (Il2CppObject *)partyMemberItem,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v182[4] + 192LL) + 112LL));
            }
            else
            {
              v185 = &v181->obj.klass + v183;
              v21->fields._size = v183 + 1;
              v185[4] = (Il2CppClass *)v184;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v185 + 4), (int32_t)v184, v179, v180);
            }
            v186 = 1;
          }
          else
          {
LABEL_276:
            v186 = 0;
          }
          partyMemberItem = (System_String_o *)*v12;
          if ( !*v12 )
            goto LABEL_286;
          partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsQuestRestriction(
                                                 (PartyOrganizationListViewItem_o *)partyMemberItem,
                                                 0);
          if ( v186 | (unsigned __int8)partyMemberItem & 1 )
          {
            if ( !v21 )
              goto LABEL_286;
            if ( v21->fields._size >= 1 )
            {
              v187 = 0;
              do
              {
                Item = System_Collections_Generic_List_object___get_Item(
                         v21,
                         v187,
                         (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_string__get_Item__);
                fixed = (Il2CppObject *)RestrictionNotSatisfySlot__AddColorCodeAndFixMessage(
                                          (RestrictionNotSatisfySlot_o *)Item,
                                          (System_String_o *)Item,
                                          v189);
                System_Collections_Generic_List_object___set_Item(
                  v21,
                  v187++,
                  fixed,
                  (const MethodInfo_38006F8 *)Method_System_Collections_Generic_List_string__set_Item__);
              }
              while ( v187 < v21->fields._size );
            }
          }
        }
      }
    }
  }
  questRestrictionInfoa = questRestrictionInfo;
  v43 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  if ( !v21 )
    goto LABEL_286;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v198,
    v21,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v202 = v198;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v202,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    restrictionLabelRoot = this->fields.restrictionLabelRoot;
    if ( !restrictionLabelRoot )
      sub_1C6BC60(0, v44);
    current = v202.fields._current;
    restrictionLabel = (Il2CppObject *)this->fields.restrictionLabel;
    transform = UnityEngine_GameObject__get_transform(restrictionLabelRoot, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v49 = UnityEngine_Object__Instantiate_object__52199488(
            restrictionLabel,
            transform,
            (const MethodInfo_31C8040 *)Method_UnityEngine_Object_Instantiate_UILabel____78656288);
    v51 = v49;
    if ( !v49 )
      sub_1C6BC60(0, v50);
    UILabel__set_text((UILabel_o *)v49, (System_String_o *)current, 0);
    if ( !v43 )
      sub_1C6BC60(v52, v53);
    v56 = v43->fields._items;
    v57 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++v43->fields._version;
    if ( !v56 )
      sub_1C6BC60(v52, v53);
    v58 = v43->fields._size;
    if ( (unsigned int)v58 >= LODWORD(v56->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v43,
        v51,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    }
    else
    {
      v59 = &v56->obj.klass + v58;
      v43->fields._size = v58 + 1;
      v59[4] = (Il2CppClass *)v51;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v59 + 4), (int32_t)v51, v54, v55);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v202,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v43 )
    goto LABEL_286;
  switchMessage = this->fields.switchMessage;
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                         v43,
                                         (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !switchMessage )
    goto LABEL_286;
  SwitchUIWidgetComponent__Set(switchMessage, (UIWidget_array *)partyMemberItem, 0, 0);
  v62 = Method_System_Array_Empty_int___;
  v63 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v63 )
  {
    sub_1C41AF8(Method_System_Array_Empty_int___);
    v63 = v62[7];
  }
  v64 = *(_QWORD *)(v63 + 16);
  if ( (*(_BYTE *)(v64 + 309) & 1) == 0 )
    v64 = sub_1C41A9C(v61);
  if ( !*(_DWORD *)(v64 + 224) )
    v61 = j_il2cpp_runtime_class_init_0(v64);
  v65 = *(_QWORD *)(v62[7] + 16LL);
  if ( (*(_BYTE *)(v65 + 309) & 1) == 0 )
    v65 = sub_1C41A9C(v61);
  v66 = Method_System_Array_Empty_int___;
  servantIds = **(System_Int32_array ***)(v65 + 184);
  v67 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v67 )
  {
    sub_1C41AF8(Method_System_Array_Empty_int___);
    v67 = v66[7];
  }
  v68 = *(_QWORD *)(v67 + 16);
  v69 = questRestrictionInfo;
  if ( (*(_BYTE *)(v68 + 309) & 1) == 0 )
    v68 = sub_1C41A9C(v61);
  if ( !*(_DWORD *)(v68 + 224) )
    v61 = j_il2cpp_runtime_class_init_0(v68);
  v70 = *(_QWORD *)(v66[7] + 16LL);
  if ( (*(_BYTE *)(v70 + 309) & 1) == 0 )
    v70 = sub_1C41A9C(v61);
  classImageIds = **(System_Int32_array ***)(v70 + 184);
  v71 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v71,
    (const MethodInfo_3451B1C *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v71;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0);
  if ( !*v12 )
    goto LABEL_286;
  v72 = (char)partyMemberItem;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_43687880(
                                         questRestrictionInfo,
                                         (*v12)->fields._InitPos_k__BackingField,
                                         0);
  if ( (v72 & 1) == 0 )
  {
    if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
    {
      if ( !*v12 )
        goto LABEL_286;
      servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                     questRestrictionInfo,
                     &npcInfoDictionary,
                     (*v12)->fields._InitPos_k__BackingField,
                     0,
                     0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      partyMemberItem = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !partyMemberItem )
        goto LABEL_286;
      partyMemberItem = (System_String_o *)QuestPhaseMaster__TryGetEntity(
                                             (QuestPhaseMaster_o *)partyMemberItem,
                                             &v200,
                                             questRestrictionInfo->fields.questId,
                                             questRestrictionInfo->fields.questPhase,
                                             0);
      if ( !servantIds )
        goto LABEL_286;
      if ( !servantIds->max_length )
        goto LABEL_125;
      if ( !*v12 )
        goto LABEL_286;
      IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                    questRestrictionInfo,
                                    (*v12)->fields._InitPos_k__BackingField,
                                    0);
      v75 = v200;
      if ( !v200 )
        goto LABEL_125;
      goto LABEL_100;
    }
    v84 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v84,
      (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !*v12 )
      goto LABEL_286;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetNeedIndividualityList(
                                           questRestrictionInfo,
                                           (*v12)->fields._InitPos_k__BackingField,
                                           0);
    v85 = *v12;
    if ( !*v12 )
      goto LABEL_286;
    v86 = (System_Collections_Generic_List_object__o *)partyMemberItem;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetRangeTypeList(
                                           questRestrictionInfo,
                                           v85->fields._InitPos_k__BackingField,
                                           0);
    if ( !v86 )
      goto LABEL_286;
    if ( v86->fields._size >= 1 )
    {
      v87 = (System_Collections_Generic_List_T__o *)partyMemberItem;
      v88 = 0;
      while ( v87 )
      {
        if ( v87->fields._size > v88 )
        {
          partyMemberItem = (System_String_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                 v87,
                                                 v88,
                                                 (const MethodInfo_37E5E8C *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          if ( (_DWORD)partyMemberItem == 1 )
          {
            partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                                   v86,
                                                   v88,
                                                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_int____get_Item__);
            if ( !v84 )
              goto LABEL_286;
            System_Collections_Generic_List_int___AddRange(
              v84,
              (System_Collections_Generic_IEnumerable_T__o *)partyMemberItem,
              (const MethodInfo_37E3B5C *)Method_System_Collections_Generic_List_int__AddRange__);
          }
        }
        if ( ++v88 >= v86->fields._size )
          goto LABEL_122;
      }
      goto LABEL_286;
    }
LABEL_122:
    if ( !v84 )
      goto LABEL_286;
    partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                           v84,
                                           (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
    v83 = (System_Int32_array *)partyMemberItem;
LABEL_124:
    RestrictionNotSatisfySlot__GetIconIdFromIndividuality(
      (RestrictionNotSatisfySlot_o *)partyMemberItem,
      &servantIds,
      &classImageIds,
      v83,
      v73);
    goto LABEL_125;
  }
  if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
  {
    if ( !v20 )
      goto LABEL_286;
    monitor = v20[1].monitor;
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
    v82 = v20[2].klass;
    if ( !v82 )
      goto LABEL_286;
    v83 = *(System_Int32_array **)&v82->_1.byval_arg.bits;
    goto LABEL_124;
  }
  if ( !*v12 )
    goto LABEL_286;
  servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                 questRestrictionInfo,
                 &npcInfoDictionary,
                 (*v12)->fields._InitPos_k__BackingField,
                 1,
                 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  partyMemberItem = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
  if ( !*v12 )
    goto LABEL_286;
  IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                questRestrictionInfo,
                                (*v12)->fields._InitPos_k__BackingField,
                                0);
  v75 = entity;
  if ( !entity )
    goto LABEL_125;
LABEL_100:
  if ( !IsSelectableNormalSupport || v75->fields.isNpcOnly )
    goto LABEL_125;
  v76 = (System_Collections_Generic_IEnumerable_T__o *)servantIds;
  v77 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58602020(
    v77,
    v76,
    (const MethodInfo_37E3224 *)Method_System_Collections_Generic_List_int___ctor___78518792);
  if ( !v77 )
    goto LABEL_286;
  v78 = v77->fields._items;
  v79 = Method_System_Collections_Generic_List_int__Add__;
  ++v77->fields._version;
  if ( !v78 )
    goto LABEL_286;
  v80 = v77->fields._size;
  if ( (unsigned int)v80 >= LODWORD(v78->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v77,
      0,
      *(const MethodInfo_37E3950 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
  }
  else
  {
    v77->fields._size = v80 + 1;
    v78->m_Items[v80] = 0;
  }
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                         v77,
                                         (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    v148 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_UIWidget__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v148,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
    v149 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v149,
      (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
    v150 = classImageIds;
    if ( !classImageIds )
      goto LABEL_286;
    max_length = classImageIds->max_length;
    if ( (int)max_length < 1 )
      goto LABEL_237;
    v152 = 0;
    v153 = 0;
    do
    {
      if ( v153 >= (unsigned int)max_length )
        goto LABEL_287;
      if ( !v149 )
        goto LABEL_286;
      iconsWidget = (Il2CppObject *)(unsigned int)v150->m_Items[v153];
      v154 = v149->fields._items;
      v155 = Method_System_Collections_Generic_List_int__Add__;
      ++v149->fields._version;
      if ( !v154 )
        goto LABEL_286;
      v156 = v149->fields._size;
      if ( (unsigned int)v156 >= LODWORD(v154->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v149,
          (int32_t)iconsWidget,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v155[4] + 192LL) + 112LL));
      }
      else
      {
        v149->fields._size = v156 + 1;
        v154->m_Items[v156] = (int)iconsWidget;
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
                                               0,
                                               0);
        if ( !partyMemberItem )
          goto LABEL_286;
        Component_object = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 (UnityEngine_GameObject_o *)partyMemberItem,
                                                                 (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                               v149,
                                               (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !Component_object )
          goto LABEL_286;
        RestrictionNotSatisfySlotIcons__SetClassIcons(Component_object, (System_Int32_array *)partyMemberItem, v158);
        if ( !v148 )
          goto LABEL_286;
        iconsWidget = (Il2CppObject *)Component_object->fields.iconsWidget;
        v161 = v148->fields._items;
        v162 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++v148->fields._version;
        if ( !v161 )
          goto LABEL_286;
        v163 = v148->fields._size;
        if ( (unsigned int)v163 >= LODWORD(v161->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v148,
            iconsWidget,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v162[4] + 192LL) + 112LL));
        }
        else
        {
          v164 = &v161->obj.klass + v163;
          v148->fields._size = v163 + 1;
          v164[4] = (Il2CppClass *)iconsWidget;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v164 + 4), (int32_t)iconsWidget, v159, v160);
        }
        v152 = 0;
        v165 = v149->fields._version + 1;
        v149->fields._size = 0;
        v149->fields._version = v165;
      }
      LODWORD(max_length) = v150->max_length;
      ++v153;
    }
    while ( (__int64)v153 < (int)max_length );
    if ( v152 )
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
                                                   (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
      partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                             v149,
                                             (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v166 )
        goto LABEL_286;
      RestrictionNotSatisfySlotIcons__SetClassIcons(v166, (System_Int32_array *)partyMemberItem, v167);
      if ( !v148 )
        goto LABEL_286;
      iconsWidget = (Il2CppObject *)v166->fields.iconsWidget;
      v170 = v148->fields._items;
      v171 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++v148->fields._version;
      if ( !v170 )
        goto LABEL_286;
      v172 = v148->fields._size;
      if ( (unsigned int)v172 >= LODWORD(v170->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v148,
          iconsWidget,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v171[4] + 192LL) + 112LL));
      }
      else
      {
        v173 = &v170->obj.klass + v172;
        v148->fields._size = v172 + 1;
        v173[4] = (Il2CppClass *)iconsWidget;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v173 + 4), (int32_t)iconsWidget, v168, v169);
      }
    }
    else
    {
LABEL_237:
      if ( !v148 )
        goto LABEL_286;
    }
    switchIcons = this->fields.switchIcons;
    partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                           v148,
                                           (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !switchIcons )
      goto LABEL_286;
    v175 = (UIWidget_array *)partyMemberItem;
    v176 = switchIcons;
    goto LABEL_242;
  }
  partyMemberItem = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !partyMemberItem )
    goto LABEL_286;
  MasterData_object = (UserServantCollectionMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)partyMemberItem,
                                                         (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (NpcServantFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v191 = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v89 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v89,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  v90 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v90,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  v91 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v91,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  v92 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v92,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  v93 = (System_Collections_Generic_List_bool__o *)sub_1C6BC54(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor(
    v93,
    (const MethodInfo_37B9D30 *)Method_System_Collections_Generic_List_bool___ctor__);
  v94 = servantIds;
  if ( !servantIds )
LABEL_286:
    sub_1C6BC60(partyMemberItem, iconsWidget);
  v95 = servantIds->max_length;
  if ( (int)v95 >= 1 )
  {
    v96 = 0;
    v97 = 0;
    m_Items = servantIds->m_Items;
    v194 = servantIds;
    do
    {
      if ( v97 >= (unsigned int)v95 )
        goto LABEL_287;
      if ( !v90 )
        goto LABEL_286;
      v98 = m_Items[v97];
      v99 = v90->fields._items;
      v100 = Method_System_Collections_Generic_List_int__Add__;
      ++v90->fields._version;
      if ( !v99 )
        goto LABEL_286;
      v101 = v90->fields._size;
      if ( (unsigned int)v101 >= LODWORD(v99->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v90,
          v98,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
      }
      else
      {
        v90->fields._size = v101 + 1;
        v99->m_Items[v101] = v98;
      }
      partyMemberItem = (System_String_o *)npcInfoDictionary;
      if ( !npcInfoDictionary )
        goto LABEL_286;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
              v98,
              (const MethodInfo_34526E4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
        goto LABEL_294;
      partyMemberItem = (System_String_o *)npcInfoDictionary;
      if ( !npcInfoDictionary )
        goto LABEL_286;
      v102 = System_Collections_Generic_Dictionary_int__object___get_Item(
               (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
               v98,
               (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
      if ( v102 )
      {
        questId = v69->fields.questId;
        questPhase = v69->fields.questPhase;
        v105 = (FollowerInfo_o *)v102;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0);
        LimitCount = FollowerInfo__getLimitCount(v105, 0, ReturnTypeByQuestId, 0);
        partyMemberItem = (System_String_o *)Master_object;
        if ( !Master_object )
          goto LABEL_286;
        partyMemberItem = (System_String_o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                               Master_object,
                                               &npcServantFollowerEntity,
                                               questId,
                                               questPhase,
                                               v98,
                                               0);
        if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
          goto LABEL_170;
        if ( !npcServantFollowerEntity )
          goto LABEL_286;
        partyMemberItem = (System_String_o *)NpcServantFollowerEntity__IsHideRarity(
                                               npcServantFollowerEntity->fields.flag,
                                               0);
        if ( !v93 )
          goto LABEL_286;
        v108 = v93->fields._items;
        v109 = Method_System_Collections_Generic_List_bool__Add__;
        ++v93->fields._version;
        if ( !v108 )
          goto LABEL_286;
        v110 = v93->fields._size;
        if ( (unsigned int)v110 >= LODWORD(v108->max_length) )
        {
          System_Collections_Generic_List_bool___AddWithResize(
            v93,
            (unsigned __int8)partyMemberItem & 1,
            *(const MethodInfo_37BA594 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
        }
        else
        {
          v93->fields._size = v110 + 1;
          v108->m_Items[v110] = (unsigned __int8)partyMemberItem & 1;
        }
        partyMemberItem = (System_String_o *)v191;
        if ( !npcServantFollowerEntity || !v191 )
          goto LABEL_286;
        partyMemberItem = (System_String_o *)NpcFollowerMaster__GetEntity_42660212(
                                               v191,
                                               questId,
                                               questPhase,
                                               npcServantFollowerEntity->fields.id,
                                               0);
        if ( partyMemberItem )
        {
          partyMemberItem = (System_String_o *)NpcFollowerEntity__GetImageSvtId(
                                                 (NpcFollowerEntity_o *)partyMemberItem,
                                                 0);
          v114 = (int)partyMemberItem;
        }
        else
        {
LABEL_170:
          v114 = 0;
        }
        v94 = v194;
        v69 = questRestrictionInfoa;
        if ( !v91 )
          goto LABEL_286;
      }
      else
      {
LABEL_294:
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CB002A )
        {
          sub_1C6BA08(&NetworkManager_TypeInfo);
          byte_4CB002A = 1;
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
                                               v98,
                                               0);
        if ( !partyMemberItem )
          goto LABEL_286;
        if ( !v93 )
          goto LABEL_286;
        LimitCount = (int32_t)partyMemberItem[2].monitor;
        v111 = v93->fields._items;
        v112 = Method_System_Collections_Generic_List_bool__Add__;
        ++v93->fields._version;
        if ( !v111 )
          goto LABEL_286;
        v113 = v93->fields._size;
        if ( (unsigned int)v113 >= LODWORD(v111->max_length) )
        {
          System_Collections_Generic_List_bool___AddWithResize(
            v93,
            0,
            *(const MethodInfo_37BA594 **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
          v114 = 0;
          if ( !v91 )
            goto LABEL_286;
        }
        else
        {
          v114 = 0;
          v93->fields._size = v113 + 1;
          v111->m_Items[v113] = 0;
          if ( !v91 )
            goto LABEL_286;
        }
      }
      v115 = v91->fields._items;
      v116 = Method_System_Collections_Generic_List_int__Add__;
      ++v91->fields._version;
      if ( !v115 )
        goto LABEL_286;
      v117 = v91->fields._size;
      if ( (unsigned int)v117 >= LODWORD(v115->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v91,
          LimitCount,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
      }
      else
      {
        v91->fields._size = v117 + 1;
        v115->m_Items[v117] = LimitCount;
      }
      if ( !v92 )
        goto LABEL_286;
      v118 = v92->fields._items;
      v119 = Method_System_Collections_Generic_List_int__Add__;
      ++v92->fields._version;
      if ( !v118 )
        goto LABEL_286;
      v120 = v92->fields._size;
      if ( (unsigned int)v120 >= LODWORD(v118->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v92,
          v114,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
      }
      else
      {
        v92->fields._size = v120 + 1;
        v118->m_Items[v120] = v114;
      }
      partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      if ( !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo);
        partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
      }
      if ( ++v96 >= **(_DWORD **)&partyMemberItem[7].fields )
      {
        partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                               (BaseMonoBehaviour_o *)this,
                                               this->fields.servantIconsPrefab,
                                               this->fields.iconParent,
                                               0,
                                               0);
        if ( !partyMemberItem )
          goto LABEL_286;
        v121 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)partyMemberItem,
                                                     (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        v122 = System_Collections_Generic_List_int___ToArray(
                 v90,
                 (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
        v123 = System_Collections_Generic_List_int___ToArray(
                 v91,
                 (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                               v92,
                                               (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !v93 )
          goto LABEL_286;
        v124 = (System_Int32_array *)partyMemberItem;
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_bool___ToArray(
                                               v93,
                                               (const MethodInfo_37BC080 *)Method_System_Collections_Generic_List_bool__ToArray__);
        if ( !v121 )
          goto LABEL_286;
        v126 = v124;
        v69 = questRestrictionInfoa;
        RestrictionNotSatisfySlotIcons__SetServantIcons(
          v121,
          v122,
          v123,
          v126,
          (System_Boolean_array *)partyMemberItem,
          questRestrictionInfoa,
          v125);
        if ( !v89 )
          goto LABEL_286;
        iconsWidget = (Il2CppObject *)v121->fields.iconsWidget;
        v129 = v89->fields._items;
        v94 = v194;
        v130 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++v89->fields._version;
        if ( !v129 )
          goto LABEL_286;
        v131 = v89->fields._size;
        if ( (unsigned int)v131 >= LODWORD(v129->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v89,
            iconsWidget,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
        }
        else
        {
          v132 = &v129->obj.klass + v131;
          v89->fields._size = v131 + 1;
          v132[4] = (Il2CppClass *)iconsWidget;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v132 + 4), (int32_t)iconsWidget, v127, v128);
        }
        v96 = 0;
        v133 = v90->fields._version + 1;
        v90->fields._size = 0;
        v90->fields._version = v133;
        v134 = v91->fields._version + 1;
        v91->fields._size = 0;
        v91->fields._version = v134;
        v135 = v92->fields._version + 1;
        v92->fields._size = 0;
        v92->fields._version = v135;
        v136 = v93->fields._version + 1;
        v93->fields._size = 0;
        v93->fields._version = v136;
      }
      LODWORD(v95) = v94->max_length;
      ++v97;
    }
    while ( (__int64)v97 < (int)v95 );
    if ( v96 )
    {
      partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)this,
                                             this->fields.servantIconsPrefab,
                                             this->fields.iconParent,
                                             0,
                                             0);
      if ( partyMemberItem )
      {
        v137 = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)partyMemberItem,
                                                     (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
        v138 = System_Collections_Generic_List_int___ToArray(
                 v90,
                 (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
        v139 = System_Collections_Generic_List_int___ToArray(
                 v91,
                 (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                               v92,
                                               (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( v93 )
        {
          v140 = (System_Int32_array *)partyMemberItem;
          partyMemberItem = (System_String_o *)System_Collections_Generic_List_bool___ToArray(
                                                 v93,
                                                 (const MethodInfo_37BC080 *)Method_System_Collections_Generic_List_bool__ToArray__);
          if ( v137 )
          {
            RestrictionNotSatisfySlotIcons__SetServantIcons(
              v137,
              v138,
              v139,
              v140,
              (System_Boolean_array *)partyMemberItem,
              v69,
              v141);
            if ( v89 )
            {
              iconsWidget = (Il2CppObject *)v137->fields.iconsWidget;
              v144 = v89->fields._items;
              v145 = Method_System_Collections_Generic_List_UIWidget__Add__;
              ++v89->fields._version;
              if ( v144 )
              {
                v146 = v89->fields._size;
                if ( (unsigned int)v146 >= LODWORD(v144->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v89,
                    iconsWidget,
                    *(const MethodInfo_3800974 **)(*(_QWORD *)(v145[4] + 192LL) + 112LL));
                }
                else
                {
                  v147 = &v144->obj.klass + v146;
                  v89->fields._size = v146 + 1;
                  v147[4] = (Il2CppClass *)iconsWidget;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v147 + 4), (int32_t)iconsWidget, v142, v143);
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
  if ( !v89 )
    goto LABEL_286;
LABEL_235:
  v174 = this->fields.switchIcons;
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_object___ToArray(
                                         v89,
                                         (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !v174 )
    goto LABEL_286;
  v175 = (UIWidget_array *)partyMemberItem;
  v176 = v174;
LABEL_242:
  SwitchUIWidgetComponent__Set(v176, v175, 0, 0);
  partyMemberItem = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
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

  if ( (byte_4CB2034 & 1) == 0 )
  {
    sub_1C6BA08(&RestrictionNotSatisfySlot___c_TypeInfo);
    byte_4CB2034 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(RestrictionNotSatisfySlot___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RestrictionNotSatisfySlot___c_TypeInfo->static_fields->__9 = (struct RestrictionNotSatisfySlot___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)RestrictionNotSatisfySlot___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C6BC60(this, 0);
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
  if ( (byte_4CB2035 & 1) == 0 )
  {
    this = (RestrictionNotSatisfySlot___c__DisplayClass14_0_o *)sub_1C6BA08(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4CB2035 = 1;
  }
  if ( !entity )
    goto LABEL_13;
  memberItem = v4->fields.memberItem;
  if ( entity->fields.type != 9 )
  {
    if ( memberItem )
      goto LABEL_9;
LABEL_13:
    sub_1C6BC60(this, entity);
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
         (const MethodInfo_31583F4 *)Method_System_Linq_Enumerable_Contains_int___)
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