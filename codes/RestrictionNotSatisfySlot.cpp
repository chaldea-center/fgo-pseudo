void __fastcall RestrictionNotSatisfySlot___cctor(const MethodInfo *method)
{
  if ( (byte_42B28BF & 1) == 0 )
  {
    sub_B52984(&RestrictionNotSatisfySlot_TypeInfo);
    byte_42B28BF = 1;
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
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array *v12; // x19
  System_String_o *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  __int64 v43; // x0
  __int64 v44; // x0

  if ( (byte_42B28BD & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_26/*"\n"*/);
    sub_B52984(&StringLiteral_15749/*"[-]"*/);
    sub_B52984(&StringLiteral_11187/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_B52984(&StringLiteral_15848/*"[FFFF00]"*/);
    byte_42B28BD = 1;
  }
  v4 = sub_B5299C(string___TypeInfo, 5LL);
  if ( !v4 )
    sub_B52A5C(0LL, v5);
  v12 = (System_String_array *)v4;
  v13 = (System_String_o *)StringLiteral_15848/*"[FFFF00]"*/;
  if ( StringLiteral_15848/*"[FFFF00]"*/ )
  {
    v13 = (System_String_o *)sub_B52A44(StringLiteral_15848/*"[FFFF00]"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_30;
    v14 = (System_Int32_array **)StringLiteral_15848/*"[FFFF00]"*/;
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v12->max_length )
    goto LABEL_29;
  v12->m_Items[0] = (System_String_o *)v14;
  sub_B52920((BattleServantConfConponent_o *)v12->m_Items, v14, v6, v7, v8, v9, v10, v11);
  if ( message )
  {
    v13 = (System_String_o *)sub_B52A44(message, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_30;
  }
  if ( v12->max_length <= 1 )
    goto LABEL_29;
  v12->m_Items[1] = message;
  sub_B52920(
    (BattleServantConfConponent_o *)&v12->m_Items[1],
    (System_Int32_array **)message,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v13 = (System_String_o *)StringLiteral_26/*"\n"*/;
  if ( StringLiteral_26/*"\n"*/ )
  {
    v13 = (System_String_o *)sub_B52A44(StringLiteral_26/*"\n"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_30;
    v27 = (System_Int32_array **)StringLiteral_26/*"\n"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v12->max_length <= 2 )
    goto LABEL_29;
  v12->m_Items[2] = (System_String_o *)v27;
  sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[2], v27, v21, v22, v23, v24, v25, v26);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11187/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
  v34 = (System_Int32_array **)v13;
  if ( v13 )
  {
    v13 = (System_String_o *)sub_B52A44(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
    {
LABEL_30:
      v44 = sub_B52A7C(v13);
      sub_B52A28(v44, 0LL);
    }
  }
  if ( v12->max_length <= 3 )
    goto LABEL_29;
  v12->m_Items[3] = (System_String_o *)v34;
  sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[3], v34, v28, v29, v30, v31, v32, v33);
  v13 = (System_String_o *)StringLiteral_15749/*"[-]"*/;
  if ( StringLiteral_15749/*"[-]"*/ )
  {
    v13 = (System_String_o *)sub_B52A44(StringLiteral_15749/*"[-]"*/, v12->obj.klass->_1.element_class);
    if ( v13 )
    {
      v41 = (System_Int32_array **)StringLiteral_15749/*"[-]"*/;
      goto LABEL_27;
    }
    goto LABEL_30;
  }
  v41 = 0LL;
LABEL_27:
  if ( v12->max_length <= 4 )
  {
LABEL_29:
    v43 = sub_B52A88(v13);
    sub_B52A28(v43, 0LL);
  }
  v12->m_Items[4] = (System_String_o *)v41;
  sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[4], v41, v35, v36, v37, v38, v39, v40);
  return System_String__Concat_44648440(v12, 0LL);
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x22
  ServantClassMaster_o *v7; // x25
  System_Collections_Generic_List_int__o *v8; // x24
  System_Collections_Generic_List_int__o *v9; // x23
  _BOOL8 EntityByIndividuality; // x0
  __int64 v11; // x1
  __int64 v12; // x8
  unsigned __int64 v13; // x27
  int32_t v14; // w26
  const MethodInfo_3056FB0 *v15; // x2
  System_Collections_Generic_List_int__o *v16; // x0
  int32_t iconImageId; // w1
  System_Int32_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x0
  ServantClassEntity_o *v35; // [xsp+10h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42B28BC & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42B28BC = 1;
  }
  v35 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
  v7 = (ServantClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v8 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  v9 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individuality )
    goto LABEL_24;
  v12 = *(_QWORD *)&individuality->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)v12 )
      {
        v32 = sub_B52A88(EntityByIndividuality);
        sub_B52A28(v32, 0LL);
      }
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_24;
      v14 = individuality->m_Items[v13 + 1];
      EntityByIndividuality = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                Master_WarQuestSelectionMaster,
                                &entity,
                                v14,
                                (const MethodInfo_23E2334 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( EntityByIndividuality )
      {
        if ( !v8 )
          goto LABEL_24;
        v15 = (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__;
        v16 = v8;
        iconImageId = v14;
      }
      else
      {
        if ( !v7 )
          goto LABEL_24;
        EntityByIndividuality = ServantClassMaster__TryGetEntityByIndividuality(v7, &v35, v14, 0LL);
        if ( !EntityByIndividuality )
          goto LABEL_20;
        if ( !v35 || !v9 )
          goto LABEL_24;
        iconImageId = v35->fields.iconImageId;
        v15 = (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__;
        v16 = v9;
      }
      System_Collections_Generic_List_int___Add(v16, iconImageId, v15);
LABEL_20:
      LODWORD(v12) = individuality->max_length;
    }
    while ( (__int64)++v13 < (int)v12 );
  }
  if ( !v8
    || (v18 = System_Collections_Generic_List_int___ToArray(
                v8,
                (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__),
        *servantIds = v18,
        sub_B52920((BattleServantConfConponent_o *)servantIds, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24),
        !v9) )
  {
LABEL_24:
    sub_B52A5C(EntityByIndividuality, v11);
  }
  v25 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
  *classImageIds = v25;
  sub_B52920((BattleServantConfConponent_o *)classImageIds, (System_Int32_array **)v25, v26, v27, v28, v29, v30, v31);
}


System_String_o *__fastcall RestrictionNotSatisfySlot__RemoveColorCode(
        RestrictionNotSatisfySlot_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_42B28BE & 1) == 0 )
  {
    sub_B52984(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_B52984(&StringLiteral_15873/*"[[]-[\\]]"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_15874/*"[[][0-9A-F]{6}[\\]]"*/);
    byte_42B28BE = 1;
  }
  if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  }
  v4 = System_Text_RegularExpressions_Regex__Replace(
         message,
         (System_String_o *)StringLiteral_15874/*"[[][0-9A-F]{6}[\\]]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  return System_Text_RegularExpressions_Regex__Replace(
           v4,
           (System_String_o *)StringLiteral_15873/*"[[]-[\\]]"*/,
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
  __int64 v8; // x24
  System_String_o *partyMemberItem; // x0
  int64_t UserId; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  PartyOrganizationListViewItem_o **v17; // x21
  UISprite_o *numberSprite; // x20
  System_String_o *v19; // x0
  _QWORD **v20; // x19
  __int64 v21; // x20
  __int16 v22; // w8
  __int64 v23; // x20
  __int64 v24; // x20
  __int64 v25; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x23
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v29; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  RestrictionNotSatisfySlot___c_c *v31; // x0
  struct RestrictionNotSatisfySlot___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__14_1; // x20
  Il2CppObject *v34; // x24
  struct RestrictionNotSatisfySlot___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  const MethodInfo *v43; // x2
  System_String_o *v44; // x20
  System_String_c *klass; // x8
  unsigned __int64 v46; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x24
  __int64 v48; // x1
  UnityEngine_GameObject_o *restrictionLabelRoot; // x0
  Il2CppObject *current; // x20
  UILabel_o *restrictionLabel; // x23
  UnityEngine_Transform_o *transform; // x25
  UILabel_o *v53; // x0
  __int64 v54; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v55; // x23
  __int64 v56; // x0
  __int64 v57; // x1
  SwitchUIWidgetComponent_o *switchMessage; // x20
  _QWORD **v59; // x23
  __int64 v60; // x20
  __int16 v61; // w8
  __int64 v62; // x20
  __int64 v63; // x20
  __int64 v64; // x20
  _QWORD **v65; // x19
  __int64 v66; // x20
  __int16 v67; // w8
  __int64 v68; // x20
  __int64 v69; // x20
  __int64 v70; // x20
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v71; // x20
  char v72; // w20
  const MethodInfo *v73; // x4
  bool IsSelectableNormalSupport; // w0
  QuestPhaseEntity_o *v75; // x8
  System_Collections_Generic_IEnumerable_T__o *v76; // x21
  System_Collections_Generic_List_int__o *v77; // x20
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_TSource__c *v79; // x8
  System_Int32_array *v80; // x3
  System_Collections_Generic_List_int__o *v81; // x22
  System_String_o *v82; // x20
  System_String_o *v83; // x21
  unsigned __int64 v84; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v85; // x21
  System_Collections_Generic_List_int__o *v86; // x23
  System_Collections_Generic_List_int__o *v87; // x24
  System_Collections_Generic_List_int__o *v88; // x25
  System_Collections_Generic_List_bool__o *v89; // x26
  System_Int32_array *v90; // x27
  __int64 v91; // x8
  int v92; // w22
  unsigned __int64 v93; // x19
  int32_t v94; // w20
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  FollowerInfo_o *v96; // x28
  int32_t questPhase; // w21
  int32_t questId; // w27
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w28
  int32_t v101; // w20
  srcLineSprite_o *Component_srcLineSprite; // x20
  System_Int32_array *v103; // x21
  System_Int32_array *v104; // x27
  System_Int32_array *v105; // x28
  const MethodInfo *v106; // x6
  srcLineSprite_o *v107; // x20
  System_Int32_array *v108; // x21
  System_Int32_array *v109; // x22
  System_Int32_array *v110; // x23
  const MethodInfo *v111; // x6
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v112; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v113; // x20
  System_Collections_Generic_List_int__o *v114; // x21
  System_Int32_array *v115; // x19
  __int64 v116; // x8
  int v117; // w22
  unsigned __int64 v118; // x23
  srcLineSprite_o *v119; // x22
  const MethodInfo *v120; // x2
  srcLineSprite_o *v121; // x22
  const MethodInfo *v122; // x2
  struct SwitchUIWidgetComponent_o *switchIcons; // x20
  UIWidget_array *v124; // x1
  SwitchUIWidgetComponent_o *v125; // x0
  struct SwitchUIWidgetComponent_o *v126; // x21
  PartyOrganizationListViewItem_o *v127; // x8
  int v128; // w19
  const MethodInfo *v129; // x2
  signed __int64 size; // x8
  unsigned __int64 v131; // x20
  System_String_o *fixed; // x0
  __int64 v133; // x0
  NpcFollowerMaster_o *v134; // [xsp+40h] [xbp-100h]
  NpcServantFollowerMaster_o *Master_WarQuestSelectionMaster; // [xsp+48h] [xbp-F8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v136; // [xsp+50h] [xbp-F0h]
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+58h] [xbp-E8h]
  System_Int32_array *v138; // [xsp+60h] [xbp-E0h]
  int32_t *v139; // [xsp+68h] [xbp-D8h]
  QuestRestrictionInfo_o *questRestrictionInfoa; // [xsp+70h] [xbp-D0h]
  RestrictionNotSatisfySlot_o *v141; // [xsp+78h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_T__o v142; // [xsp+80h] [xbp-C0h] BYREF
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+98h] [xbp-A8h] BYREF
  QuestPhaseEntity_o *v144; // [xsp+A0h] [xbp-A0h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+A8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v146; // [xsp+B0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+C8h] [xbp-78h] BYREF
  System_Int32_array *classImageIds; // [xsp+D0h] [xbp-70h] BYREF
  System_Int32_array *servantIds; // [xsp+D8h] [xbp-68h] BYREF
  int32_t v150; // [xsp+E4h] [xbp-5Ch] BYREF

  v150 = number;
  if ( (byte_42B28BB & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_int___);
    sub_B52984(&Method_System_Array_Empty_RestrictionEntity___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_B52984(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_B52984(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B52984(&Method_System_Func_RestrictionEntity__bool___ctor__);
    sub_B52984(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
    sub_B52984(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_bool__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_bool__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_bool__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_bool___ctor___68502952);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor___68512808);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_B52984(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_bool__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_UILabel____68654680);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&RestrictionNotSatisfySlot_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_B52984(&Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__);
    sub_B52984(&Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__);
    sub_B52984(&RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo);
    sub_B52984(&RestrictionNotSatisfySlot___c_TypeInfo);
    sub_B52984(&StringLiteral_26/*"\n"*/);
    sub_B52984(&StringLiteral_20619/*"member_txt_"*/);
    sub_B52984(&StringLiteral_11184/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B28BB = 1;
  }
  classImageIds = 0LL;
  servantIds = 0LL;
  npcInfoDictionary = 0LL;
  memset(&v146, 0, sizeof(v146));
  entity = 0LL;
  npcServantFollowerEntity = 0LL;
  v144 = 0LL;
  v8 = sub_B52A54(RestrictionNotSatisfySlot___c__DisplayClass14_0_TypeInfo);
  RestrictionNotSatisfySlot___c__DisplayClass14_0___ctor((RestrictionNotSatisfySlot___c__DisplayClass14_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_252;
  *(_QWORD *)(v8 + 16) = memberItem;
  v17 = (PartyOrganizationListViewItem_o **)(v8 + 16);
  sub_B52920((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)memberItem, v11, v12, v13, v14, v15, v16);
  numberSprite = this->fields.numberSprite;
  v19 = System_Int32__ToString((int32_t)&v150, 0LL);
  partyMemberItem = System_String__Concat_44568316((System_String_o *)StringLiteral_20619/*"member_txt_"*/, v19, 0LL);
  if ( !numberSprite )
    goto LABEL_252;
  UISprite__set_spriteName(numberSprite, partyMemberItem, 0LL);
  partyMemberItem = (System_String_o *)this->fields.partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_252;
  PartyOrganizationConfirmItemDraw__SetItem(
    (PartyOrganizationConfirmItemDraw_o *)partyMemberItem,
    *v17,
    3,
    0,
    0,
    0,
    0,
    0LL);
  v20 = (_QWORD **)Method_System_Array_Empty_RestrictionEntity___;
  v21 = **((_QWORD **)Method_System_Array_Empty_RestrictionEntity___ + 6);
  v22 = *(_WORD *)(v21 + 306);
  if ( (v22 & 1) == 0 )
  {
    sub_AEB684(**((_QWORD **)Method_System_Array_Empty_RestrictionEntity___ + 6));
    v22 = *(_WORD *)(v21 + 306);
  }
  if ( (v22 & 0x400) != 0 )
  {
    v23 = *v20[6];
    if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
      sub_AEB684(*v20[6]);
    if ( !*(_DWORD *)(v23 + 224) )
    {
      v24 = *v20[6];
      if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
        sub_AEB684(*v20[6]);
      j_il2cpp_runtime_class_init_0(v24);
    }
  }
  v25 = *v20[6];
  if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
    sub_AEB684(*v20[6]);
  v26 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v25 + 184);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !questRestrictionInfo )
    goto LABEL_252;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  questRestrictionInfoa = questRestrictionInfo;
  v141 = this;
  if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
  {
    restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
    v29 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v29,
      (Il2CppObject *)v8,
      Method_RestrictionNotSatisfySlot___c__DisplayClass14_0__SetItem_b__0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_RestrictionEntity__bool___ctor__);
    v30 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            restrictionEntityList,
            (System_Func_TSource__bool__o *)v29,
            (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                 v30,
                                                                 (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    if ( questRestrictionInfo->fields.isUniqueServant && questRestrictionInfo->fields.isUniqueIndividuality )
    {
      v31 = RestrictionNotSatisfySlot___c_TypeInfo;
      if ( (BYTE3(RestrictionNotSatisfySlot___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !RestrictionNotSatisfySlot___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot___c_TypeInfo);
        v31 = RestrictionNotSatisfySlot___c_TypeInfo;
      }
      static_fields = v31->static_fields;
      _9__14_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__14_1;
      if ( !_9__14_1 )
      {
        if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v31);
          static_fields = RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
        }
        v34 = (Il2CppObject *)static_fields->__9;
        _9__14_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__14_1,
          v34,
          Method_RestrictionNotSatisfySlot___c__SetItem_b__14_1__,
          (const MethodInfo_2BC90BC *)Method_System_Func_RestrictionEntity__bool___ctor__);
        v35 = RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
        v35->__9__14_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__14_1;
        sub_B52920(
          (BattleServantConfConponent_o *)&v35->__9__14_1,
          (System_Int32_array **)_9__14_1,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
      }
      v42 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              v26,
              (System_Func_TSource__bool__o *)_9__14_1,
              (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                   v42,
                                                                   (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    }
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetMessages_34148796(
                                           questRestrictionInfo,
                                           (RestrictionEntity_array *)v26,
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
    if ( !*v17 )
      goto LABEL_252;
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
                                           0LL);
  }
  v44 = partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_252;
  klass = partyMemberItem[1].klass;
  if ( klass && (int)klass >= 1 )
  {
    v46 = 0LL;
    while ( v46 < (unsigned int)klass )
    {
      partyMemberItem = RestrictionNotSatisfySlot__RemoveColorCode(
                          (RestrictionNotSatisfySlot_o *)partyMemberItem,
                          *((System_String_o **)&v44[1].monitor + v46),
                          v43);
      if ( !partyMemberItem )
        goto LABEL_252;
      partyMemberItem = System_String__Replace_44575552(
                          partyMemberItem,
                          (System_String_o *)StringLiteral_26/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
      if ( !v27 )
        goto LABEL_252;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v27,
        (EventMissionProgressRequest_Argument_ProgressData_o *)partyMemberItem,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
      LODWORD(klass) = v44[1].klass;
      if ( (__int64)++v46 >= (int)klass )
        goto LABEL_41;
    }
LABEL_253:
    v133 = sub_B52A88(partyMemberItem);
    sub_B52A28(v133, 0LL);
  }
LABEL_41:
  partyMemberItem = (System_String_o *)this->fields.notSatisfyWidget;
  if ( !partyMemberItem )
    goto LABEL_252;
  partyMemberItem = (System_String_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)partyMemberItem,
                                         0LL);
  if ( !partyMemberItem )
    goto LABEL_252;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyMemberItem, 0, 0LL);
  partyMemberItem = (System_String_o *)*v17;
  if ( !*v17 )
    goto LABEL_252;
  if ( !PartyOrganizationListViewItem__get_IsSupportOnly((PartyOrganizationListViewItem_o *)partyMemberItem, 0LL) )
  {
    partyMemberItem = (System_String_o *)*v17;
    if ( !*v17 )
      goto LABEL_252;
    if ( !PartyOrganizationListViewItem__get_IsFixedMyServantSingle(
            (PartyOrganizationListViewItem_o *)partyMemberItem,
            0LL) )
    {
      partyMemberItem = (System_String_o *)*v17;
      if ( !*v17 )
        goto LABEL_252;
      if ( !LOBYTE(partyMemberItem[8].fields.m_stringLength) && !BYTE1(partyMemberItem[8].fields.m_stringLength) )
      {
        if ( PartyOrganizationListViewItem__get_IsQuestRestriction(
               (PartyOrganizationListViewItem_o *)partyMemberItem,
               0LL) )
        {
          goto LABEL_231;
        }
        partyMemberItem = (System_String_o *)*v17;
        if ( !*v17 )
          goto LABEL_252;
        partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                               (PartyOrganizationListViewItem_o *)partyMemberItem,
                                               0LL);
        if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
        {
          if ( !*v17 )
            goto LABEL_252;
          partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsSetRequired(
                                                 questRestrictionInfo,
                                                 v150,
                                                 (*v17)->fields._InitPos_k__BackingField,
                                                 0LL);
          if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
            goto LABEL_231;
        }
        v127 = *v17;
        if ( !*v17 )
          goto LABEL_252;
        if ( v127->fields.isUniqueSvtRestriction
          || v127->fields.isUniqueIndividualityRestriction
          || (v127->fields.fatigureTime & 0x8000000000000000LL) == 0
          || v127->fields._IsAllOutBattle_k__BackingField
          || v127->fields._IsDataLost_k__BackingField
          || v127->fields._TimesToRestart_k__BackingField > 0
          || v127->fields._IsNotSupportSingle_k__BackingField
          || v127->fields.isFixedServantPositionRestriction
          || v127->fields.isFixedSupportPositionRestriction )
        {
LABEL_231:
          partyMemberItem = (System_String_o *)this->fields.notSatisfyWidget;
          if ( !partyMemberItem )
            goto LABEL_252;
          partyMemberItem = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)partyMemberItem,
                                                 0LL);
          if ( !partyMemberItem )
            goto LABEL_252;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyMemberItem, 1, 0LL);
          partyMemberItem = (System_String_o *)*v17;
          if ( !*v17 )
            goto LABEL_252;
          partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                                 (PartyOrganizationListViewItem_o *)partyMemberItem,
                                                 0LL);
          if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
            goto LABEL_242;
          if ( !*v17 )
            goto LABEL_252;
          if ( QuestRestrictionInfo__IsSetRequired(
                 questRestrictionInfo,
                 v150,
                 (*v17)->fields._InitPos_k__BackingField,
                 0LL) )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            partyMemberItem = LocalizationManager__Get((System_String_o *)StringLiteral_11184/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/, 0LL);
            if ( !v27 )
              goto LABEL_252;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v27,
              (EventMissionProgressRequest_Argument_ProgressData_o *)partyMemberItem,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
            v128 = 1;
          }
          else
          {
LABEL_242:
            v128 = 0;
          }
          partyMemberItem = (System_String_o *)*v17;
          if ( !*v17 )
            goto LABEL_252;
          partyMemberItem = (System_String_o *)PartyOrganizationListViewItem__get_IsQuestRestriction(
                                                 (PartyOrganizationListViewItem_o *)partyMemberItem,
                                                 0LL);
          if ( v128 | (unsigned __int8)partyMemberItem & 1 )
          {
            if ( !v27 )
              goto LABEL_252;
            LODWORD(size) = v27->fields._size;
            if ( (int)size >= 1 )
            {
              v131 = 0LL;
              do
              {
                if ( v131 >= (unsigned int)size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
                fixed = RestrictionNotSatisfySlot__AddColorCodeAndFixMessage(
                          (RestrictionNotSatisfySlot_o *)partyMemberItem,
                          (System_String_o *)v27->fields._items->m_Items[v131],
                          v129);
                System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
                  (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v27,
                  v131,
                  (WarBoardManager_TaskList_o *)fixed,
                  (const MethodInfo_2FF135C *)Method_System_Collections_Generic_List_string__set_Item__);
                size = v27->fields._size;
                ++v131;
              }
              while ( (__int64)v131 < size );
            }
          }
        }
      }
    }
  }
  v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v47,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  if ( !v27 )
    goto LABEL_252;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v142,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v27,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v146 = v142;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v146,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    restrictionLabelRoot = this->fields.restrictionLabelRoot;
    if ( !restrictionLabelRoot )
      sub_B52A5C(0LL, v48);
    current = v146.fields.current;
    restrictionLabel = this->fields.restrictionLabel;
    transform = UnityEngine_GameObject__get_transform(restrictionLabelRoot, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v53 = UnityEngine_Object__Instantiate_UILabel_(
            restrictionLabel,
            transform,
            (const MethodInfo_1F712F4 *)Method_UnityEngine_Object_Instantiate_UILabel____68654680);
    this = v141;
    v55 = (EventMissionProgressRequest_Argument_ProgressData_o *)v53;
    if ( !v53 )
      sub_B52A5C(0LL, v54);
    UILabel__set_text(v53, (System_String_o *)current, 0LL);
    if ( !v47 )
      sub_B52A5C(v56, v57);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v47,
      v55,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UIWidget__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v146,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v47 )
    goto LABEL_252;
  switchMessage = this->fields.switchMessage;
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v47,
                                         (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !switchMessage )
    goto LABEL_252;
  SwitchUIWidgetComponent__Set(switchMessage, (UIWidget_array *)partyMemberItem, 0LL);
  v59 = (_QWORD **)Method_System_Array_Empty_int___;
  v60 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v61 = *(_WORD *)(v60 + 306);
  if ( (v61 & 1) == 0 )
  {
    sub_AEB684(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v61 = *(_WORD *)(v60 + 306);
  }
  if ( (v61 & 0x400) != 0 )
  {
    v62 = *v59[6];
    if ( (*(_BYTE *)(v62 + 306) & 1) == 0 )
      sub_AEB684(*v59[6]);
    if ( !*(_DWORD *)(v62 + 224) )
    {
      v63 = *v59[6];
      if ( (*(_BYTE *)(v63 + 306) & 1) == 0 )
        sub_AEB684(*v59[6]);
      j_il2cpp_runtime_class_init_0(v63);
    }
  }
  v64 = *v59[6];
  if ( (*(_BYTE *)(v64 + 306) & 1) == 0 )
    sub_AEB684(*v59[6]);
  v65 = (_QWORD **)Method_System_Array_Empty_int___;
  servantIds = **(System_Int32_array ***)(v64 + 184);
  v66 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v67 = *(_WORD *)(v66 + 306);
  if ( (v67 & 1) == 0 )
  {
    sub_AEB684(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v67 = *(_WORD *)(v66 + 306);
  }
  if ( (v67 & 0x400) != 0 )
  {
    v68 = *v65[6];
    if ( (*(_BYTE *)(v68 + 306) & 1) == 0 )
      sub_AEB684(*v65[6]);
    if ( !*(_DWORD *)(v68 + 224) )
    {
      v69 = *v65[6];
      if ( (*(_BYTE *)(v69 + 306) & 1) == 0 )
        sub_AEB684(*v65[6]);
      j_il2cpp_runtime_class_init_0(v69);
    }
  }
  v70 = *v65[6];
  if ( (*(_BYTE *)(v70 + 306) & 1) == 0 )
    sub_AEB684(*v65[6]);
  classImageIds = **(System_Int32_array ***)(v70 + 184);
  v71 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v71,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v71;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( !*v17 )
    goto LABEL_252;
  v72 = (char)partyMemberItem;
  partyMemberItem = (System_String_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_34170356(
                                         questRestrictionInfo,
                                         (*v17)->fields._InitPos_k__BackingField,
                                         0LL);
  if ( (v72 & 1) == 0 )
  {
    if ( ((unsigned __int8)partyMemberItem & 1) != 0 )
    {
      if ( !*v17 )
        goto LABEL_252;
      servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                     questRestrictionInfo,
                     &npcInfoDictionary,
                     (*v17)->fields._InitPos_k__BackingField,
                     0,
                     0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      partyMemberItem = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !partyMemberItem )
        goto LABEL_252;
      partyMemberItem = (System_String_o *)QuestPhaseMaster__TryGetEntity(
                                             (QuestPhaseMaster_o *)partyMemberItem,
                                             &v144,
                                             questRestrictionInfo->fields.questId,
                                             questRestrictionInfo->fields.questPhase,
                                             0LL);
      if ( !servantIds )
        goto LABEL_252;
      if ( !*(_QWORD *)&servantIds->max_length )
        goto LABEL_135;
      if ( !*v17 )
        goto LABEL_252;
      IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                    questRestrictionInfo,
                                    (*v17)->fields._InitPos_k__BackingField,
                                    0LL);
      v75 = v144;
      if ( !v144 )
        goto LABEL_135;
      goto LABEL_96;
    }
    v81 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v81,
      (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !*v17 )
      goto LABEL_252;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetNeedIndividualityList(
                                           questRestrictionInfo,
                                           (*v17)->fields._InitPos_k__BackingField,
                                           0LL);
    if ( !*v17 )
      goto LABEL_252;
    v82 = partyMemberItem;
    partyMemberItem = (System_String_o *)QuestRestrictionInfo__GetRangeTypeList(
                                           questRestrictionInfo,
                                           (*v17)->fields._InitPos_k__BackingField,
                                           0LL);
    if ( !v82 )
      goto LABEL_252;
    if ( SLODWORD(v82[1].klass) >= 1 )
    {
      v83 = partyMemberItem;
      v84 = 0LL;
      while ( v83 )
      {
        if ( (__int64)v84 < SLODWORD(v83[1].klass) )
        {
          if ( v84 >= LODWORD(v83[1].klass) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          if ( *(_DWORD *)(*(_QWORD *)&v83->fields + 4 * v84 + 32) == 1 )
          {
            if ( v84 >= LODWORD(v82[1].klass) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
            if ( !v81 )
              goto LABEL_252;
            System_Collections_Generic_List_int___AddRange(
              v81,
              *(System_Collections_Generic_IEnumerable_T__o **)(*(_QWORD *)&v82->fields + 8 * v84 + 32),
              (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
          }
        }
        if ( (__int64)++v84 >= SLODWORD(v82[1].klass) )
          goto LABEL_132;
      }
      goto LABEL_252;
    }
LABEL_132:
    if ( !v81 )
      goto LABEL_252;
    partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                           v81,
                                           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
    v80 = (System_Int32_array *)partyMemberItem;
LABEL_134:
    RestrictionNotSatisfySlot__GetIconIdFromIndividuality(
      (RestrictionNotSatisfySlot_o *)partyMemberItem,
      &servantIds,
      &classImageIds,
      v80,
      v73);
    goto LABEL_135;
  }
  if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
  {
    if ( !v26 )
      goto LABEL_252;
    monitor = v26[1].monitor;
    if ( !monitor )
    {
LABEL_135:
      partyMemberItem = (System_String_o *)servantIds;
      if ( !servantIds )
        goto LABEL_252;
      goto LABEL_136;
    }
    if ( !(_DWORD)monitor )
      goto LABEL_253;
    v79 = v26[2].klass;
    if ( !v79 )
      goto LABEL_252;
    v80 = *(System_Int32_array **)&v79->_1.byval_arg.bits;
    goto LABEL_134;
  }
  if ( !*v17 )
    goto LABEL_252;
  servantIds = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                 questRestrictionInfo,
                 &npcInfoDictionary,
                 (*v17)->fields._InitPos_k__BackingField,
                 1,
                 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  partyMemberItem = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !partyMemberItem )
    goto LABEL_252;
  partyMemberItem = (System_String_o *)QuestPhaseMaster__TryGetEntity(
                                         (QuestPhaseMaster_o *)partyMemberItem,
                                         &entity,
                                         questRestrictionInfo->fields.questId,
                                         questRestrictionInfo->fields.questPhase,
                                         0LL);
  if ( !servantIds )
    goto LABEL_252;
  if ( !*(_QWORD *)&servantIds->max_length )
    goto LABEL_135;
  if ( !*v17 )
    goto LABEL_252;
  IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                questRestrictionInfo,
                                (*v17)->fields._InitPos_k__BackingField,
                                0LL);
  v75 = entity;
  if ( !entity )
    goto LABEL_135;
LABEL_96:
  if ( !IsSelectableNormalSupport || v75->fields.isNpcOnly )
    goto LABEL_135;
  v76 = (System_Collections_Generic_IEnumerable_T__o *)servantIds;
  v77 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50685004(
    v77,
    v76,
    (const MethodInfo_305644C *)Method_System_Collections_Generic_List_int___ctor___68512808);
  if ( !v77 )
    goto LABEL_252;
  System_Collections_Generic_List_int___Add(
    v77,
    0,
    (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                         v77,
                                         (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
  servantIds = (System_Int32_array *)partyMemberItem;
  if ( !partyMemberItem )
    goto LABEL_252;
LABEL_136:
  if ( partyMemberItem[1].klass )
  {
    partyMemberItem = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( partyMemberItem )
    {
      MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)partyMemberItem,
                                                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (NpcServantFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
      v134 = (NpcFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
      v85 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UIWidget__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v85,
        (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
      v86 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v86,
        (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
      v87 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v87,
        (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
      v88 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v88,
        (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
      v89 = (System_Collections_Generic_List_bool__o *)sub_B52A54(System_Collections_Generic_List_bool__TypeInfo);
      System_Collections_Generic_List_bool____ctor(
        v89,
        (const MethodInfo_3003938 *)Method_System_Collections_Generic_List_bool___ctor___68502952);
      v90 = servantIds;
      if ( servantIds )
      {
        v91 = *(_QWORD *)&servantIds->max_length;
        v136 = v85;
        if ( (int)v91 < 1 )
          goto LABEL_206;
        v139 = &servantIds->m_Items[1];
        v92 = 0;
        v93 = 0LL;
        v138 = servantIds;
        do
        {
          if ( v93 >= (unsigned int)v91 )
            goto LABEL_253;
          if ( !v86 )
            goto LABEL_252;
          v94 = v139[v93];
          System_Collections_Generic_List_int___Add(
            v86,
            v94,
            (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          partyMemberItem = (System_String_o *)npcInfoDictionary;
          if ( !npcInfoDictionary )
            goto LABEL_252;
          if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                  (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)npcInfoDictionary,
                  v94,
                  (const MethodInfo_2F27F7C *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
            goto LABEL_259;
          partyMemberItem = (System_String_o *)npcInfoDictionary;
          if ( !npcInfoDictionary )
            goto LABEL_252;
          Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                   (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)npcInfoDictionary,
                   v94,
                   (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
          if ( Item )
          {
            v96 = (FollowerInfo_o *)Item;
            questId = questRestrictionInfoa->fields.questId;
            questPhase = questRestrictionInfoa->fields.questPhase;
            ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0LL);
            LimitCount = FollowerInfo__getLimitCount(v96, 0, ReturnTypeByQuestId, 0LL);
            partyMemberItem = (System_String_o *)Master_WarQuestSelectionMaster;
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_252;
            partyMemberItem = (System_String_o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                                   Master_WarQuestSelectionMaster,
                                                   &npcServantFollowerEntity,
                                                   questId,
                                                   questPhase,
                                                   v94,
                                                   0LL);
            if ( ((unsigned __int8)partyMemberItem & 1) == 0 )
              goto LABEL_166;
            if ( !npcServantFollowerEntity )
              goto LABEL_252;
            partyMemberItem = (System_String_o *)NpcServantFollowerEntity__IsHideRarity(
                                                   npcServantFollowerEntity->fields.flag,
                                                   0LL);
            if ( !v89 )
              goto LABEL_252;
            System_Collections_Generic_List_bool___Add(
              v89,
              (unsigned __int8)partyMemberItem & 1,
              (const MethodInfo_300469C *)Method_System_Collections_Generic_List_bool__Add__);
            if ( !npcServantFollowerEntity )
              goto LABEL_252;
            partyMemberItem = (System_String_o *)v134;
            if ( !v134 )
              goto LABEL_252;
            partyMemberItem = (System_String_o *)NpcFollowerMaster__GetEntity_20742188(
                                                   v134,
                                                   questId,
                                                   questPhase,
                                                   npcServantFollowerEntity->fields.id,
                                                   0LL);
            if ( partyMemberItem )
            {
              partyMemberItem = (System_String_o *)NpcFollowerEntity__GetImageSvtId(
                                                     (NpcFollowerEntity_o *)partyMemberItem,
                                                     0LL);
              v101 = (int)partyMemberItem;
            }
            else
            {
LABEL_166:
              v101 = 0;
            }
            v90 = v138;
            if ( !v87 )
              goto LABEL_252;
          }
          else
          {
LABEL_259:
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            UserId = NetworkManager__get_UserId(0LL);
            partyMemberItem = (System_String_o *)MasterData_WarQuestSelectionMaster;
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_252;
            partyMemberItem = (System_String_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                                   MasterData_WarQuestSelectionMaster,
                                                   UserId,
                                                   v94,
                                                   0LL);
            if ( !partyMemberItem )
              goto LABEL_252;
            if ( !v89 )
              goto LABEL_252;
            LimitCount = (int32_t)partyMemberItem[2].monitor;
            System_Collections_Generic_List_bool___Add(
              v89,
              0,
              (const MethodInfo_300469C *)Method_System_Collections_Generic_List_bool__Add__);
            v101 = 0;
            if ( !v87 )
              goto LABEL_252;
          }
          System_Collections_Generic_List_int___Add(
            v87,
            LimitCount,
            (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          if ( !v88 )
            goto LABEL_252;
          System_Collections_Generic_List_int___Add(
            v88,
            v101,
            (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          ++v92;
          partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
          if ( (BYTE3(RestrictionNotSatisfySlot_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo);
            partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
          }
          if ( v92 >= **(_DWORD **)&partyMemberItem[7].fields )
          {
            partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                                   (BaseMonoBehaviour_o *)v141,
                                                   v141->fields.servantIconsPrefab,
                                                   v141->fields.iconParent,
                                                   0LL,
                                                   0LL);
            if ( !partyMemberItem )
              goto LABEL_252;
            Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)partyMemberItem,
                                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
            v103 = System_Collections_Generic_List_int___ToArray(
                     v86,
                     (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
            v104 = System_Collections_Generic_List_int___ToArray(
                     v87,
                     (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
            partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                                   v88,
                                                   (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
            if ( !v89 )
              goto LABEL_252;
            v105 = (System_Int32_array *)partyMemberItem;
            partyMemberItem = (System_String_o *)System_Collections_Generic_List_bool___ToArray(
                                                   v89,
                                                   (const MethodInfo_30067E4 *)Method_System_Collections_Generic_List_bool__ToArray__);
            if ( !Component_srcLineSprite )
              goto LABEL_252;
            RestrictionNotSatisfySlotIcons__SetServantIcons(
              (RestrictionNotSatisfySlotIcons_o *)Component_srcLineSprite,
              v103,
              v104,
              v105,
              (System_Boolean_array *)partyMemberItem,
              questRestrictionInfoa,
              v106);
            if ( !v136 )
              goto LABEL_252;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v136,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite->fields.mFSM,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UIWidget__Add__);
            System_Collections_Generic_List_int___Clear(
              v86,
              (const MethodInfo_30573BC *)Method_System_Collections_Generic_List_int__Clear__);
            System_Collections_Generic_List_int___Clear(
              v87,
              (const MethodInfo_30573BC *)Method_System_Collections_Generic_List_int__Clear__);
            System_Collections_Generic_List_int___Clear(
              v88,
              (const MethodInfo_30573BC *)Method_System_Collections_Generic_List_int__Clear__);
            System_Collections_Generic_List_bool___Clear(
              v89,
              (const MethodInfo_3004AAC *)Method_System_Collections_Generic_List_bool__Clear__);
            v90 = v138;
            v92 = 0;
          }
          LODWORD(v91) = v90->max_length;
          ++v93;
        }
        while ( (__int64)v93 < (int)v91 );
        if ( v92 )
        {
          partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                                 (BaseMonoBehaviour_o *)v141,
                                                 v141->fields.servantIconsPrefab,
                                                 v141->fields.iconParent,
                                                 0LL,
                                                 0LL);
          if ( !partyMemberItem )
            goto LABEL_252;
          v107 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                   (UnityEngine_GameObject_o *)partyMemberItem,
                   (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
          v108 = System_Collections_Generic_List_int___ToArray(
                   v86,
                   (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
          v109 = System_Collections_Generic_List_int___ToArray(
                   v87,
                   (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
          partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                                 v88,
                                                 (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
          if ( !v89 )
            goto LABEL_252;
          v110 = (System_Int32_array *)partyMemberItem;
          partyMemberItem = (System_String_o *)System_Collections_Generic_List_bool___ToArray(
                                                 v89,
                                                 (const MethodInfo_30067E4 *)Method_System_Collections_Generic_List_bool__ToArray__);
          this = v141;
          if ( !v107 )
            goto LABEL_252;
          RestrictionNotSatisfySlotIcons__SetServantIcons(
            (RestrictionNotSatisfySlotIcons_o *)v107,
            v108,
            v109,
            v110,
            (System_Boolean_array *)partyMemberItem,
            questRestrictionInfoa,
            v111);
          v112 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v136;
          if ( !v136 )
            goto LABEL_252;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v136,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v107->fields.mFSM,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UIWidget__Add__);
        }
        else
        {
LABEL_206:
          this = v141;
          v112 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v136;
          if ( !v136 )
            goto LABEL_252;
        }
        switchIcons = this->fields.switchIcons;
        partyMemberItem = (System_String_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                               v112,
                                               (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
        if ( !switchIcons )
          goto LABEL_252;
        v124 = (UIWidget_array *)partyMemberItem;
        v125 = switchIcons;
        goto LABEL_212;
      }
    }
LABEL_252:
    sub_B52A5C(partyMemberItem, UserId);
  }
  if ( !classImageIds )
    goto LABEL_252;
  if ( !*(_QWORD *)&classImageIds->max_length )
    goto LABEL_214;
  v113 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v113,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  v114 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v114,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  v115 = classImageIds;
  if ( !classImageIds )
    goto LABEL_252;
  v116 = *(_QWORD *)&classImageIds->max_length;
  if ( (int)v116 < 1 )
    goto LABEL_209;
  v117 = 0;
  v118 = 0LL;
  do
  {
    if ( v118 >= (unsigned int)v116 )
      goto LABEL_253;
    if ( !v114 )
      goto LABEL_252;
    System_Collections_Generic_List_int___Add(
      v114,
      v115->m_Items[v118 + 1],
      (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
    partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
    ++v117;
    if ( (BYTE3(RestrictionNotSatisfySlot_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RestrictionNotSatisfySlot_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RestrictionNotSatisfySlot_TypeInfo);
      partyMemberItem = (System_String_o *)RestrictionNotSatisfySlot_TypeInfo;
    }
    if ( v117 >= **(_DWORD **)&partyMemberItem[7].fields )
    {
      partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v141,
                                             v141->fields.servantIconsPrefab,
                                             v141->fields.iconParent,
                                             0LL,
                                             0LL);
      if ( !partyMemberItem )
        goto LABEL_252;
      v119 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
               (UnityEngine_GameObject_o *)partyMemberItem,
               (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
      partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                             v114,
                                             (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v119 )
        goto LABEL_252;
      RestrictionNotSatisfySlotIcons__SetClassIcons(
        (RestrictionNotSatisfySlotIcons_o *)v119,
        (System_Int32_array *)partyMemberItem,
        v120);
      if ( !v113 )
        goto LABEL_252;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v113,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v119->fields.mFSM,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UIWidget__Add__);
      System_Collections_Generic_List_int___Clear(
        v114,
        (const MethodInfo_30573BC *)Method_System_Collections_Generic_List_int__Clear__);
      v117 = 0;
    }
    LODWORD(v116) = v115->max_length;
    ++v118;
  }
  while ( (__int64)v118 < (int)v116 );
  if ( v117 )
  {
    this = v141;
    partyMemberItem = (System_String_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)v141,
                                           v141->fields.servantIconsPrefab,
                                           v141->fields.iconParent,
                                           0LL,
                                           0LL);
    if ( !partyMemberItem )
      goto LABEL_252;
    v121 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
             (UnityEngine_GameObject_o *)partyMemberItem,
             (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfySlotIcons___);
    partyMemberItem = (System_String_o *)System_Collections_Generic_List_int___ToArray(
                                           v114,
                                           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v121 )
      goto LABEL_252;
    RestrictionNotSatisfySlotIcons__SetClassIcons(
      (RestrictionNotSatisfySlotIcons_o *)v121,
      (System_Int32_array *)partyMemberItem,
      v122);
    if ( !v113 )
      goto LABEL_252;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v113,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v121->fields.mFSM,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UIWidget__Add__);
  }
  else
  {
LABEL_209:
    this = v141;
    if ( !v113 )
      goto LABEL_252;
  }
  v126 = this->fields.switchIcons;
  partyMemberItem = (System_String_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v113,
                                         (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !v126 )
    goto LABEL_252;
  v124 = (UIWidget_array *)partyMemberItem;
  v125 = v126;
LABEL_212:
  SwitchUIWidgetComponent__Set(v125, v124, 0LL);
  partyMemberItem = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !partyMemberItem )
    goto LABEL_252;
  SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)partyMemberItem, 0LL);
LABEL_214:
  partyMemberItem = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !partyMemberItem )
    goto LABEL_252;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyMemberItem, 1, 0LL);
}


void __fastcall RestrictionNotSatisfySlot___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AF2B4 & 1) == 0 )
  {
    sub_B52984(&RestrictionNotSatisfySlot___c_TypeInfo);
    byte_42AF2B4 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(RestrictionNotSatisfySlot___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)RestrictionNotSatisfySlot___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B52A5C(this, 0LL);
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
  int32_t type; // w8

  v4 = this;
  if ( (byte_42AF2B5 & 1) == 0 )
  {
    this = (RestrictionNotSatisfySlot___c__DisplayClass14_0_o *)sub_B52984(&Method_System_Linq_Enumerable_Contains_int___);
    byte_42AF2B5 = 1;
  }
  if ( !entity )
    goto LABEL_14;
  memberItem = v4->fields.memberItem;
  if ( entity->fields.type != 9 )
  {
    if ( memberItem )
      goto LABEL_9;
LABEL_14:
    sub_B52A5C(this, entity);
  }
  if ( !memberItem )
    goto LABEL_14;
  if ( memberItem->fields._InitPos_k__BackingField == 1 )
    return 1;
LABEL_9:
  if ( !System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.targetVals2,
          memberItem->fields._InitPos_k__BackingField,
          (const MethodInfo_1B5BFB4 *)Method_System_Linq_Enumerable_Contains_int___) )
    return 0;
  type = entity->fields.type;
  if ( type == 1 )
    return 1;
  return type == 12 || type == 16;
}