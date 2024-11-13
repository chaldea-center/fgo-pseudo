void __fastcall TitleInfoEventSubmarineStatusComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct TitleInfoEventSubmarineStatusComponent_StaticFields *static_fields; // x8

  if ( (byte_4B14C81 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v1, v2);
    byte_4B14C81 = 1;
  }
  static_fields = TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->ENTRY_ANIMATION_TIME = xmmword_BD3CA0;
  static_fields->MAP_CHANGE_WAIT_TIME = 0.3;
}


void __fastcall TitleInfoEventSubmarineStatusComponent___ctor(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B14C80 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_UIAtlas__TypeInfo, v5, v6);
    byte_4B14C80 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_UIAtlas__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.atlasList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0LL);
}


float __fastcall TitleInfoEventSubmarineStatusComponent__ConvertPointToRate(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t point,
        const MethodInfo *method)
{
  int32_t maxPoint; // w8
  float result; // s0
  int32_t minPoint; // w9

  maxPoint = this->fields.maxPoint;
  result = 1.0;
  if ( maxPoint > point )
  {
    minPoint = this->fields.minPoint;
    result = 0.0;
    if ( minPoint < point )
      return (float)(point - minPoint) / (float)(maxPoint - minPoint);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t point,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  float v7; // s0
  float v8; // s1
  float v9; // s2
  struct UISprite_o *gaugeBar; // x8
  int32_t maxPoint; // w9
  int mWidth; // w8
  float v13; // s3
  int32_t minPoint; // w10
  float v15; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  *(UnityEngine_Vector3_o *)&v7 = TitleInfoEventSubmarineStatusComponent__get_BasePosition(
                                    this,
                                    *(const MethodInfo **)&point);
  gaugeBar = this->fields.gaugeBar;
  if ( !gaugeBar )
    sub_1BCAA3C(v5, v6);
  maxPoint = this->fields.maxPoint;
  mWidth = gaugeBar->fields.mWidth;
  v13 = 1.0;
  if ( maxPoint > point )
  {
    minPoint = this->fields.minPoint;
    v13 = 0.0;
    if ( minPoint < point )
      v13 = (float)(point - minPoint) / (float)(maxPoint - minPoint);
  }
  v15 = v7 - (float)(v13 * (float)mWidth);
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v15;
  return result;
}


UnityEngine_GameObject_o *__fastcall TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  AssetData_o *mapAssetData; // x0
  __int64 v9; // x1
  Il2CppObject *Object_object__49237568; // x20
  const MethodInfo *v11; // x2
  UnityEngine_GameObject_o *v12; // x21
  struct System_String_o *GoalAnimName; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v24; // x0

  if ( (byte_4B14C6F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B14C6F = 1;
  }
  mapAssetData = this->fields.mapAssetData;
  if ( !mapAssetData )
    return 0LL;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              mapAssetData,
                              this->fields.goalIconAnimPrefabName,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v12 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL) )
  {
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v11);
    this->fields.animClipName = GoalAnimName;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.animClipName,
      (int64_t)GoalAnimName,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    v21 = UnityEngine_Object__Instantiate_object_(
            Object_object__49237568,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v21 )
      sub_1BCAA3C(0LL, v22);
    v12 = (UnityEngine_GameObject_o *)v21;
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v21, 0LL);
    GameObjectExtensions__SafeSetParent_34336992(gameObject, this->fields.statusObj, 0LL);
    v24 = UnityEngine_GameObject__get_gameObject(v12, 0LL);
    GameObjectExtensions__ResetLocalPosition(v24, 0LL);
  }
  return v12;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TitleInfoEventSubmarineStatusComponent__CreateSaveData(
        int32_t userPoint,
        int32_t currentQuestId,
        int32_t progressQuestId,
        bool isLastGoalPlayed,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *v7; // x19
  System_String_o *v8; // x20
  __int64 v9; // x1
  System_String_o *v10; // x21
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  System_String_o *v13; // x22
  bool v15; // [xsp+8h] [xbp-38h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v17; // [xsp+18h] [xbp-28h] BYREF
  int32_t v18; // [xsp+1Ch] [xbp-24h] BYREF

  v17 = currentQuestId;
  v18 = userPoint;
  v16 = progressQuestId;
  v15 = isLastGoalPlayed;
  if ( (byte_4B14C73 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, *(_QWORD *)&currentQuestId, *(_QWORD *)&progressQuestId);
    sub_1BCA7E0(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v5, v6);
    byte_4B14C73 = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v18, 0LL);
  v8 = System_Int32__ToString((int32_t)&v17, 0LL);
  v10 = System_Int32__ToString((int32_t)&v16, 0LL);
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo, v9);
  v13 = System_Boolean__ToString((bool)&v15, 0LL);
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v11);
  return TitleInfoEventSubmarineStatusComponent__CreateSaveData_37809356(v7, v8, v10, v13, v12);
}


System_String_o *__fastcall TitleInfoEventSubmarineStatusComponent__CreateSaveData_37809356(
        System_String_o *userPoint,
        System_String_o *currentQuestId,
        System_String_o *progressQuestId,
        System_String_o *isLastGoalPlayed,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  System_Text_StringBuilder_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4B14C74 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, currentQuestId, progressQuestId);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v9, v10);
    byte_4B14C74 = 1;
  }
  v11 = (System_Text_StringBuilder_o *)sub_1BCAA2C(
                                         System_Text_StringBuilder_TypeInfo,
                                         currentQuestId,
                                         progressQuestId,
                                         isLastGoalPlayed);
  System_Text_StringBuilder___ctor(v11, 0LL);
  if ( !v11 )
    sub_1BCAA3C(v12, v13);
  System_Text_StringBuilder__Append_61563116(v11, userPoint, 0LL);
  System_Text_StringBuilder__Append_61563116(v11, (System_String_o *)StringLiteral_863/*","*/, 0LL);
  System_Text_StringBuilder__Append_61563116(v11, currentQuestId, 0LL);
  System_Text_StringBuilder__Append_61563116(v11, (System_String_o *)StringLiteral_863/*","*/, 0LL);
  System_Text_StringBuilder__Append_61563116(v11, progressQuestId, 0LL);
  System_Text_StringBuilder__Append_61563116(v11, (System_String_o *)StringLiteral_863/*","*/, 0LL);
  System_Text_StringBuilder__Append_61563116(v11, isLastGoalPlayed, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v11->klass->vtable._3_ToString.method)(
                              v11,
                              v11->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__DestroyGoalAnim(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *goalAnimObject; // x20
  const MethodInfo *v7; // x2
  struct System_String_o *GoalAnimName; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x1
  UnityEngine_GameObject_o *Component_object; // x0
  PartyOrganizationUtility_o *p_goalAnimObject; // x19
  __int64 v18; // x1
  UnityEngine_Object_o *klass; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B14C71 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B14C71 = 1;
  }
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(goalAnimObject, 0LL, 0LL) )
  {
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 0, v7);
    this->fields.animClipName = GoalAnimName;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.animClipName,
      (int64_t)GoalAnimName,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    Component_object = this->fields.goalAnimObject;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
    {
      sub_1BCAA3C(Component_object, v15);
    }
    p_goalAnimObject = (PartyOrganizationUtility_o *)&this->fields.goalAnimObject;
    UnityEngine_Animation__Stop((UnityEngine_Animation_o *)Component_object, 0LL);
    klass = (UnityEngine_Object_o *)p_goalAnimObject->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    UnityEngine_Object__Destroy_70154244(klass, 0LL);
    p_goalAnimObject->klass = 0LL;
    sub_1BCA784(p_goalAnimObject, 0LL, v20, v21, v22, v23, v24, v25);
  }
}


void __fastcall TitleInfoEventSubmarineStatusComponent__EndAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x21
  MissionNotifyManager_o *Instance; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  const MethodInfo *v30; // x2
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v32; // x2
  __int64 v33; // x2
  __int64 v34; // x3
  int32_t userPoint; // w8
  int32_t currentQuestId; // w9
  TerminalPramsManager_c *v37; // x0
  EventSaveData_o *v38; // x22
  __int64 v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  TerminalPramsManager_c *v46; // x0
  PartyOrganizationUtility_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  TerminalPramsManager_c *v48; // x0
  System_String_array *ValueByArray; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_String_array *v53; // x22
  int32_t v54; // w23
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x24
  System_Predicate_object__o *v56; // x25
  Il2CppObject *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  int32_t v61; // w8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v62; // x24
  System_Predicate_object__o *v63; // x25
  __int64 v64; // x2
  const MethodInfo *v65; // x4
  struct EventDetailEntity_o *eventDetailEnt; // x8
  struct UIWidget_o *mWidget; // x9
  int32_t v68; // w21
  _BOOL4 isLastGoalPlayed; // w24
  struct UIWidget_o *v70; // x20
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7

  if ( (byte_4B14C6B & 1) == 0 )
  {
    sub_1BCA7E0(&EventSaveData_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, v5, v6);
    sub_1BCA7E0(&System_Predicate_QuestReleaseEntity__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__0__, v15, v16);
    sub_1BCA7E0(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__1__, v17, v18);
    sub_1BCA7E0(&TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_TypeInfo, v19, v20);
    byte_4B14C6B = 1;
  }
  v21 = sub_1BCAA2C(TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_59;
  *(_QWORD *)(v21 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)this, v24, v25, v26, v27, v28, v29);
  if ( this->fields.isGoalAnimToLoop )
  {
    this->fields.isGoalAnimToLoop = 0;
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v30);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v32);
  }
  this->fields.isAfterTakingOver = 0;
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  MissionNotifyManager__EndPause(Instance, 0LL);
  userPoint = this->fields.userPoint;
  currentQuestId = this->fields.currentQuestId;
  this->fields.isCompleatedCount = 0;
  this->fields.userOldPoint = userPoint;
  this->fields.oldQuestId = currentQuestId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v23);
  if ( !byte_4B12EBB )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v23, v33);
    byte_4B12EBB = 1;
  }
  v37 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v23);
    v37 = TerminalPramsManager_TypeInfo;
  }
  if ( !v37->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
  {
    v38 = (EventSaveData_o *)sub_1BCAA2C(EventSaveData_TypeInfo, v23, v33, v34);
    EventSaveData___ctor(v38, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v39);
    if ( !byte_4B12EBC )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v39, v40);
      byte_4B12EBC = 1;
    }
    v46 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v39);
      v46 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = (PartyOrganizationUtility_o *)&v46->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    p_BeforeEventSubmarineSaveData_k__BackingField->klass = (PartyOrganizationUtility_c *)v38;
    sub_1BCA784(p_BeforeEventSubmarineSaveData_k__BackingField, (int64_t)v38, v40, v41, v42, v43, v44, v45);
    v37 = TerminalPramsManager_TypeInfo;
  }
  if ( !v37->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v37, v23);
  if ( !byte_4B12EBB )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v23, v33);
    byte_4B12EBB = 1;
  }
  v48 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v23);
    v48 = TerminalPramsManager_TypeInfo;
  }
  Instance = (MissionNotifyManager_o *)v48->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  if ( !Instance )
LABEL_59:
    sub_1BCAA3C(Instance, v23);
  ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)Instance, 0x2Cu, 0LL);
  v53 = ValueByArray;
  if ( !ValueByArray )
  {
    v54 = 0;
    goto LABEL_35;
  }
  if ( (int)ValueByArray->max_length < 2 )
  {
    v54 = 0;
    goto LABEL_34;
  }
  v54 = System_Int32__Parse(ValueByArray->m_Items[1], 0LL);
  if ( (int)v53->max_length < 3 )
  {
LABEL_34:
    LODWORD(v53) = 0;
    goto LABEL_35;
  }
  LODWORD(v53) = System_Int32__Parse(v53->m_Items[2], 0LL);
LABEL_35:
  baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
  v56 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_QuestReleaseEntity__TypeInfo, v50, v51, v52);
  System_Predicate_object____ctor(
    v56,
    (Il2CppObject *)v21,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__0__,
    0LL);
  if ( !baseQuestReleaseEntList )
    goto LABEL_59;
  v57 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)baseQuestReleaseEntList,
          (System_Predicate_T__o *)v56,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v61 = this->fields.currentQuestId;
  if ( v57 )
    v54 = this->fields.currentQuestId;
  if ( (int)v53 > v61 )
    v61 = (int)v53;
  *(_DWORD *)(v21 + 24) = v61;
  v62 = this->fields.baseQuestReleaseEntList;
  v63 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_QuestReleaseEntity__TypeInfo, v58, v59, v60);
  System_Predicate_object____ctor(
    v63,
    (Il2CppObject *)v21,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__1__,
    0LL);
  if ( !v62 )
    goto LABEL_59;
  if ( System_Collections_Generic_List_object___Find(
         (System_Collections_Generic_List_object__o *)v62,
         (System_Predicate_T__o *)v63,
         (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
  {
    LODWORD(v53) = *(_DWORD *)(v21 + 24);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v23);
  if ( !byte_4B12EBB )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v23, v64);
    byte_4B12EBB = 1;
  }
  Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v23);
    Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
  }
  eventDetailEnt = this->fields.eventDetailEnt;
  if ( !eventDetailEnt )
    goto LABEL_59;
  mWidget = Instance[2].fields.mNoticeNumberComp[6].fields.mWidget;
  if ( !mWidget )
    goto LABEL_59;
  mWidget->fields.m_CachedPtr = eventDetailEnt->fields.eventId;
  if ( !byte_4B12EBB )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v23, v64);
    Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
    byte_4B12EBB = 1;
  }
  if ( !LODWORD(Instance[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Instance, v23);
    Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
  }
  v68 = this->fields.userPoint;
  isLastGoalPlayed = this->fields.isLastGoalPlayed;
  v70 = Instance[2].fields.mNoticeNumberComp[6].fields.mWidget;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v23);
  Instance = (MissionNotifyManager_o *)TitleInfoEventSubmarineStatusComponent__CreateSaveData(
                                         v68,
                                         v54,
                                         (int32_t)v53,
                                         isLastGoalPlayed,
                                         v65);
  if ( !v70 )
    goto LABEL_59;
  v70->fields.m_CancellationTokenSource = (struct System_Threading_CancellationTokenSource_o *)Instance;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v70->fields.m_CancellationTokenSource,
    (int64_t)Instance,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  TerminalPramsManager__TerminalEventSubmarinePointInfoSave_SaveData(0LL);
  ActionExtensions__Call(this->fields.onEndAnim, 0LL);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__EndExitAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  TitleInfoEventSubmarineStatusComponent_c *v7; // x0

  if ( (byte_4B14C65 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventSubmarineStatusComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10783/*"PlayEntryAnimation"*/, v4, v5);
    byte_4B14C65 = 1;
  }
  TitleInfoEventSubmarineStatusComponent__DestroyGoalAnim(this, method);
  v7 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v6);
    v7 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10783/*"PlayEntryAnimation"*/,
    v7->static_fields->MAP_CHANGE_WAIT_TIME,
    0LL);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__EndProgressAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t userPoint; // w8
  int32_t maxPoint; // w9
  bool v10; // cc
  UnityEngine_Object_o *goalAnimObject; // x21
  struct UnityEngine_GameObject_o **p_goalAnimObject; // x20
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  UnityEngine_GameObject_o *gateNextPointCounterLabel; // x0
  __int64 v17; // x1
  UnityEngine_Object_o *v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  TitleInfoEventSubmarineStatusComponent_o *ProgressQuestReleaseEnt; // x21
  const MethodInfo *v26; // x2
  QuestReleaseEntity_o *CurrentQuestReleaseEnt; // x0
  const MethodInfo *v28; // x3
  QuestReleaseEntity_o *v29; // x1
  const MethodInfo *v30; // x1
  struct UnityEngine_GameObject_o *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x1
  UnityEngine_Object_o *v39; // x20
  __int64 v40; // x1
  const MethodInfo *v41; // x2
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v43; // x2
  TitleInfoEventSubmarineStatusComponent_c *v44; // x0

  if ( (byte_4B14C68 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_6059/*"EndAnimation"*/, v6, v7);
    byte_4B14C68 = 1;
  }
  userPoint = this->fields.userPoint;
  maxPoint = this->fields.maxPoint;
  v10 = userPoint < maxPoint;
  if ( userPoint >= maxPoint )
    userPoint = this->fields.maxPoint;
  this->fields.userOldPoint = userPoint;
  if ( v10
    || this->fields.minPoint >= userPoint
    || TitleInfoEventSubmarineStatusComponent__IsPlayingGoalAnim(this, method) )
  {
    TitleInfoEventSubmarineStatusComponent__EndAnimation(this, method);
    return;
  }
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  p_goalAnimObject = &this->fields.goalAnimObject;
  v13 = UnityEngine_Object__op_Inequality(goalAnimObject, 0LL, 0LL);
  if ( v13 )
  {
    gateNextPointCounterLabel = *p_goalAnimObject;
    if ( !*p_goalAnimObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive(gateNextPointCounterLabel, 0, 0LL);
    v18 = (UnityEngine_Object_o *)*p_goalAnimObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    UnityEngine_Object__Destroy_70154244(v18, 0LL);
    *p_goalAnimObject = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.goalAnimObject, 0LL, v19, v20, v21, v22, v23, v24);
  }
  ProgressQuestReleaseEnt = (TitleInfoEventSubmarineStatusComponent_o *)TitleInfoEventSubmarineStatusComponent__GetProgressQuestReleaseEnt(
                                                                          (TitleInfoEventSubmarineStatusComponent_o *)v13,
                                                                          this->fields.baseQuestReleaseEntList,
                                                                          v15);
  CurrentQuestReleaseEnt = TitleInfoEventSubmarineStatusComponent__GetCurrentQuestReleaseEnt(
                             ProgressQuestReleaseEnt,
                             this->fields.baseQuestReleaseEntList,
                             v26);
  if ( CurrentQuestReleaseEnt )
    v29 = CurrentQuestReleaseEnt;
  else
    v29 = (QuestReleaseEntity_o *)ProgressQuestReleaseEnt;
  if ( TitleInfoEventSubmarineStatusComponent__IsAllClear(this, v29, this->fields.userPoint, v28) )
  {
    gateNextPointCounterLabel = (UnityEngine_GameObject_o *)this->fields.gateNextPointCounterLabel;
    if ( !gateNextPointCounterLabel
      || (gateNextPointCounterLabel = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)gateNextPointCounterLabel,
                                        0LL)) == 0LL )
    {
LABEL_31:
      sub_1BCAA3C(gateNextPointCounterLabel, v14);
    }
    UnityEngine_GameObject__SetActive(gateNextPointCounterLabel, 0, 0LL);
  }
  gateNextPointCounterLabel = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
  if ( !gateNextPointCounterLabel )
    goto LABEL_31;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gateNextPointCounterLabel->klass[1]._1.castClass)(
    gateNextPointCounterLabel,
    gateNextPointCounterLabel->klass[1]._1.declaringType,
    0.0);
  this->fields.isGoalAnimToLoop = 1;
  v31 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v30);
  this->fields.goalAnimObject = v31;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.goalAnimObject, (int64_t)v31, v32, v33, v34, v35, v36, v37);
  v39 = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
  if ( UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
  {
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v41);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v43);
  }
  v44 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v40);
    v44 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6059/*"EndAnimation"*/,
    v44->static_fields->GOAL_ANIMATION_TIME,
    0LL);
}


QuestReleaseEntity_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetCurrentQuestReleaseEnt(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_Collections_Generic_List_QuestReleaseEntity__o *baseList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x19
  int32_t klass; // w20
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B14C77 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, baseList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v8, v9);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_1BCA7E0(
                                                         &Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__,
                                                         v10,
                                                         v11);
    byte_4B14C77 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !baseList )
    sub_1BCAA3C(this, baseList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)baseList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v12 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1BCAA3C(v12, v13);
    klass = (int32_t)v17.fields._current[1].klass;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v13);
    if ( !CondType__IsQuestClear_38310172(klass, -1, 0, 0LL) )
      goto LABEL_12;
  }
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return (QuestReleaseEntity_o *)current;
}


System_String_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetEventUIAssetDataPath(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B14C79 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6355/*"EventUI/Prefabs/{0}"*/, v4, v5);
    byte_4B14C79 = 1;
  }
  v8 = eventId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Format((System_String_o *)StringLiteral_6355/*"EventUI/Prefabs/{0}"*/, v6, 0LL);
}


UnityEngine_GameObject_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetGameObjectFromEventUIAssetData(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4B14C7F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, name, method);
    byte_4B14C7F = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.eventAssetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__49237568(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t animType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *goalIconAnimPrefabName; // x0
  __int64 *v14; // x8

  if ( (byte_4B14C6E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16721/*"_loop"*/, *(_QWORD *)&animType, method);
    sub_1BCA7E0(&StringLiteral_16742/*"_start"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_16719/*"_last"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_16706/*"_end"*/, v11, v12);
    byte_4B14C6E = 1;
  }
  goalIconAnimPrefabName = this->fields.goalIconAnimPrefabName;
  if ( this->fields.isLastGoalPlayed )
    goalIconAnimPrefabName = System_String__Concat_62401220(
                               goalIconAnimPrefabName,
                               (System_String_o *)StringLiteral_16719/*"_last"*/,
                               0LL);
  switch ( animType )
  {
    case 3:
      v14 = &StringLiteral_16706/*"_end"*/;
      return System_String__Concat_62401220(goalIconAnimPrefabName, (System_String_o *)*v14, 0LL);
    case 2:
      v14 = &StringLiteral_16721/*"_loop"*/;
      return System_String__Concat_62401220(goalIconAnimPrefabName, (System_String_o *)*v14, 0LL);
    case 1:
      v14 = &StringLiteral_16742/*"_start"*/;
      return System_String__Concat_62401220(goalIconAnimPrefabName, (System_String_o *)*v14, 0LL);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


QuestReleaseEntity_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetProgressQuestReleaseEnt(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_Collections_Generic_List_QuestReleaseEntity__o *baseList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *current; // x24
  QuestReleaseEntity_o *v13; // x19
  _BOOL8 v14; // x0
  __int64 v15; // x1
  int32_t klass; // w20
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B14C76 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, baseList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v8, v9);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_1BCA7E0(
                                                         &Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__,
                                                         v10,
                                                         v11);
    byte_4B14C76 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !baseList )
    sub_1BCAA3C(this, baseList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)baseList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  current = 0LL;
  do
  {
    v13 = (QuestReleaseEntity_o *)current;
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v14 )
      break;
    current = v18.fields._current;
    if ( !v18.fields._current )
      sub_1BCAA3C(v14, v15);
    klass = (int32_t)v18.fields._current[1].klass;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v15);
  }
  while ( CondType__IsQuestClear_38310172(klass, -1, 0, 0LL) );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v13;
}


System_Collections_Generic_List_QuestReleaseEntity__o *__fastcall TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  void *Instance; // x0
  __int64 v29; // x1
  System_Collections_Generic_List_QuestReleaseEntity__o *ListByTargetAndCondType; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Collections_Generic_List_object__o *v34; // x19
  _BOOL8 v35; // x0
  __int64 v36; // x1
  Il2CppObject *current; // x20
  __int64 QuestType; // x0
  __int64 v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  __int64 v50; // x2
  __int64 v51; // x3
  System_Comparison_T__o *v52; // x20
  Il2CppObject *v53; // x21
  struct TitleInfoEventSubmarineStatusComponent___c_StaticFields *static_fields; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B14C75 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_QuestReleaseEntity__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    sub_1BCA7E0(&Method_TitleInfoEventSubmarineStatusComponent___c__GetQuestReleaseList_b__80_0__, v24, v25);
    sub_1BCA7E0(&TitleInfoEventSubmarineStatusComponent___c_TypeInfo, v26, v27);
    byte_4B14C75 = 1;
  }
  memset(&v63, 0, sizeof(v63));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_26;
  ListByTargetAndCondType = QuestReleaseMaster__getListByTargetAndCondType(
                              (QuestReleaseMaster_o *)Instance,
                              eventId,
                              85,
                              0LL);
  v34 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                       v31,
                                                       v32,
                                                       v33);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  if ( !ListByTargetAndCondType )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v62,
    (System_Collections_Generic_List_object__o *)ListByTargetAndCondType,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v63 = v62;
  while ( 1 )
  {
    v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v63,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v35 )
      break;
    current = v63.fields._current;
    if ( !v63.fields._current )
      sub_1BCAA3C(v35, v36);
    QuestType = QuestMaster__GetQuestType((int32_t)v63.fields._current[1].klass, 0LL);
    if ( (_DWORD)QuestType == 2 )
    {
      if ( !v34 )
        sub_1BCAA3C(QuestType, v39);
      items = v34->fields._items;
      v47 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
      ++v34->fields._version;
      if ( !items )
        sub_1BCAA3C(QuestType, v39);
      size = v34->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v34,
          current,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v49 = &items->obj.klass + size;
        v34->fields._size = size + 1;
        v49[4] = (Il2CppClass *)current;
        sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 4), (int64_t)current, v40, v41, v42, v43, v44, v45);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v63,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  Instance = TitleInfoEventSubmarineStatusComponent___c_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent___c_TypeInfo, v29);
    Instance = TitleInfoEventSubmarineStatusComponent___c_TypeInfo;
  }
  v52 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v52 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v29);
      Instance = TitleInfoEventSubmarineStatusComponent___c_TypeInfo;
    }
    v53 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v52 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_QuestReleaseEntity__TypeInfo, v29, v50, v51);
    System_Comparison_object____ctor(
      v52,
      v53,
      Method_TitleInfoEventSubmarineStatusComponent___c__GetQuestReleaseList_b__80_0__,
      0LL);
    static_fields = TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields;
    static_fields->__9__80_0 = (struct System_Comparison_QuestReleaseEntity__o *)v52;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__80_0, (int64_t)v52, v55, v56, v57, v58, v59, v60);
  }
  if ( !v34 )
LABEL_26:
    sub_1BCAA3C(Instance, v29);
  System_Collections_Generic_List_object___Sort_56244000(
    v34,
    v52,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v34;
}


int32_t __fastcall TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  struct EventDetailEntity_o *eventDetailEnt; // x8

  if ( (byte_4B14C6C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventPointMaster___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B14C6C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  eventDetailEnt = this->fields.eventDetailEnt;
  if ( !eventDetailEnt || !MasterData_object )
LABEL_9:
    sub_1BCAA3C(Instance, v9);
  return UserEventPointMaster__GetEventPointTotal(
           (UserEventPointMaster_o *)MasterData_object,
           (int64_t)Instance,
           eventDetailEnt->fields.eventId,
           -1,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TitleInfoEventSubmarineStatusComponent__IsAllClear(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *currentQuestReleaseEnt,
        int32_t nowPoint,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_IEnumerable_TSource__o *baseQuestReleaseEntList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x21
  int32_t ValueInt; // w0
  __int64 v12; // x1
  int32_t klass; // w22
  int32_t v14; // w21
  _BOOL8 IsQuestClear_38310172; // x0
  __int64 v16; // x1

  if ( (byte_4B14C78 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, currentQuestReleaseEnt, *(_QWORD *)&nowPoint);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_LastOrDefault_QuestReleaseEntity___, v7, v8);
    byte_4B14C78 = 1;
  }
  baseQuestReleaseEntList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseQuestReleaseEntList;
  if ( baseQuestReleaseEntList )
  {
    baseQuestReleaseEntList = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__LastOrDefault_object_(
                                                                                     baseQuestReleaseEntList,
                                                                                     (const MethodInfo_2F38674 *)Method_System_Linq_Enumerable_LastOrDefault_QuestReleaseEntity___);
    if ( baseQuestReleaseEntList )
    {
      v10 = baseQuestReleaseEntList;
      ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)baseQuestReleaseEntList, 0LL);
      klass = (int32_t)v10[1].klass;
      v14 = ValueInt;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v12);
      IsQuestClear_38310172 = CondType__IsQuestClear_38310172(klass, -1, 0, 0LL);
      if ( !currentQuestReleaseEnt )
        sub_1BCAA3C(IsQuestClear_38310172, v16);
      LOBYTE(baseQuestReleaseEntList) = IsQuestClear_38310172 & (v14 <= nowPoint) & (QuestReleaseEntity__getValueInt(
                                                                                       currentQuestReleaseEnt,
                                                                                       0LL) == v14);
    }
  }
  return (char)baseQuestReleaseEntList;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent__IsDispPossible(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent__IsEventRaidBoss(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent__IsPlayingGoalAnim(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *goalAnimObject; // x20
  __int64 v7; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4B14C72 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B14C72 = 1;
  }
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(goalAnimObject, 0LL, 0LL) )
    return 0;
  Component_object = this->fields.goalAnimObject;
  if ( !Component_object
    || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         Component_object,
                                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
  {
    sub_1BCAA3C(Component_object, v7);
  }
  return UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)Component_object, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventSubmarineStatusComponent__LoadEventUIAssetData(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  const MethodInfo *v30; // x1
  System_String_o *EventUIAssetDataPath; // x19
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  AssetLoader_LoadEndDataHandler_o *v35; // x20
  __int64 v36; // x1

  if ( (byte_4B14C7A & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&eventId, callback);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v7, v8);
    sub_1BCA7E0(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v9, v10);
    sub_1BCA7E0(
      &Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0__LoadEventUIAssetData_b__0__,
      v11,
      v12);
    sub_1BCA7E0(&TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_TypeInfo, v13, v14);
    byte_4B14C7A = 1;
  }
  v15 = sub_1BCAA2C(
          TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_TypeInfo,
          *(_QWORD *)&eventId,
          callback,
          method);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
  *(_QWORD *)(v15 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)callback, v24, v25, v26, v27, v28, v29);
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v30);
  EventUIAssetDataPath = TitleInfoEventSubmarineStatusComponent__GetEventUIAssetDataPath(eventId, v30);
  v35 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v32, v33, v34);
  AssetLoader_LoadEndDataHandler___ctor(
    v35,
    (Il2CppObject *)v15,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v36);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v35, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v15 + 24), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventSubmarineStatusComponent__LoadLocalAtlas(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  TitleInfoEventSubmarineStatusComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v19; // w9
  int i; // w28
  Il2CppObject *v21; // x0
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  const MethodInfo *v25; // x2
  __int64 v26; // x1
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  __int64 v28; // x1
  Il2CppObject *Component_object; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v39; // x8
  int32_t v40; // [xsp+8h] [xbp-58h] BYREF
  int v41; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_4B14C7D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_25200/*"{0:D2}"*/, v13, v14);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_1BCA7E0(&StringLiteral_5455/*"DownloadEventUIAtlas{0}{1}"*/, v15, v16);
    byte_4B14C7D = 1;
  }
  if ( v4->fields.eventAssetData )
  {
    atlasList = v4->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1BCAA3C(this, *(_QWORD *)&eventId);
    size = atlasList->fields._size;
    v19 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v19;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0LL);
    for ( i = 1; ; ++i )
    {
      v41 = i;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
      v22 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_25200/*"{0:D2}"*/, v21, 0LL);
      v40 = eventId;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
      v24 = System_String__Format_62415592((System_String_o *)StringLiteral_5455/*"DownloadEventUIAtlas{0}{1}"*/, v23, v22, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)TitleInfoEventSubmarineStatusComponent__GetGameObjectFromEventUIAssetData(
                                                                 v4,
                                                                 v24,
                                                                 v25);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
      this = (TitleInfoEventSubmarineStatusComponent_o *)UnityEngine_Object__op_Equality(
                                                           GameObjectFromEventUIAssetData,
                                                           0LL,
                                                           0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        break;
      this = (TitleInfoEventSubmarineStatusComponent_o *)v4->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      v36 = *(_QWORD *)&this->fields.m_CachedPtr;
      v37 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v36 )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v36 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = v36 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v39 + 32) = Component_object;
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 32), (int64_t)Component_object, v30, v31, v32, v33, v34, v35);
      }
    }
  }
}


void __fastcall TitleInfoEventSubmarineStatusComponent__OnDestroy(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventDetailEntity_o *eventDetailEnt; // x8
  const MethodInfo *v5; // x1

  eventDetailEnt = this->fields.eventDetailEnt;
  if ( !eventDetailEnt )
    sub_1BCAA3C(this, method);
  TitleInfoEventSubmarineStatusComponent__ReleaseEventUIAssetData(this, eventDetailEnt->fields.eventId, v2);
  TitleInfoEventSubmarineStatusComponent__ReleaseLocalAtlas(this, v5);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__OnEnable(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( !System_String__IsNullOrEmpty(this->fields.animClipName, 0LL) )
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, this->fields.animClipName, v3);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_Action_o *onEndAnim,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  const MethodInfo *v20; // x1
  int32_t UserEventPoint; // w0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  __int64 v24; // x3
  int32_t oldQuestId; // w8
  int32_t currentQuestId; // w9
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x21
  System_Predicate_object__o *v28; // x22
  Il2CppObject *Instance; // x0
  __int64 v30; // x1
  Il2CppObject *v31; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v32; // x22
  QuestReleaseEntity_o *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Predicate_object__o *v37; // x23
  Il2CppObject *v38; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v39; // x23
  QuestReleaseEntity_o *v40; // x22
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Predicate_object__o *v44; // x24
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  Il2CppObject *v51; // x23
  const MethodInfo *v52; // x1
  int32_t v53; // w8

  if ( (byte_4B14C63 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, onEndAnim, method);
    sub_1BCA7E0(&System_Predicate_QuestReleaseEntity__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_0__, v14, v15);
    sub_1BCA7E0(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_1__, v16, v17);
    sub_1BCA7E0(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_2__, v18, v19);
    byte_4B14C63 = 1;
  }
  if ( this->fields.isAfterTakingOver )
  {
    this->fields.onEndAnim = onEndAnim;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.onEndAnim,
      (int64_t)onEndAnim,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    TitleInfoEventSubmarineStatusComponent__EndAnimation(this, v20);
    return;
  }
  UserEventPoint = TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(this, (const MethodInfo *)onEndAnim);
  oldQuestId = this->fields.oldQuestId;
  currentQuestId = this->fields.currentQuestId;
  this->fields.userPoint = UserEventPoint;
  if ( oldQuestId == currentQuestId && this->fields.userOldPoint == UserEventPoint )
  {
    TitleInfoEventSubmarineStatusComponent__PlayLastMapAnimation(this, onEndAnim, v23);
    return;
  }
  baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
  v28 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_QuestReleaseEntity__TypeInfo, v22, v23, v24);
  System_Predicate_object____ctor(
    v28,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_0__,
    0LL);
  if ( !baseQuestReleaseEntList )
    goto LABEL_28;
  v31 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)baseQuestReleaseEntList,
          (System_Predicate_T__o *)v28,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v32 = this->fields.baseQuestReleaseEntList;
  v33 = (QuestReleaseEntity_o *)v31;
  v37 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_QuestReleaseEntity__TypeInfo, v34, v35, v36);
  System_Predicate_object____ctor(
    v37,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_1__,
    0LL);
  if ( !v32 )
    goto LABEL_28;
  v38 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)v32,
          (System_Predicate_T__o *)v37,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v39 = this->fields.baseQuestReleaseEntList;
  v40 = (QuestReleaseEntity_o *)v38;
  v44 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_QuestReleaseEntity__TypeInfo, v41, v42, v43);
  System_Predicate_object____ctor(
    v44,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_2__,
    0LL);
  if ( !v39 )
    goto LABEL_28;
  v51 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)v39,
          (System_Predicate_T__o *)v44,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  if ( v33 )
    LODWORD(v33) = QuestReleaseEntity__getValueInt(v33, 0LL);
  if ( v40 )
    LODWORD(v40) = QuestReleaseEntity__getValueInt(v40, 0LL);
  if ( v51 )
    LODWORD(v51) = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)v51, 0LL);
  if ( (int)v33 > (int)v51 )
  {
    ActionExtensions__Call(onEndAnim, 0LL);
    return;
  }
  this->fields.onEndAnim = onEndAnim;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onEndAnim, (int64_t)onEndAnim, v45, v46, v47, v48, v49, v50);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_1BCAA3C(Instance, v30);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  if ( (int)v40 < (int)v51 )
  {
    v53 = this->fields.oldQuestId;
    if ( v53 )
    {
      if ( (int)v33 < (int)v51 && v53 >= 1 )
      {
        TitleInfoEventSubmarineStatusComponent__PlayExitAnimation(this, v52);
        return;
      }
    }
    else if ( this->fields.currentQuestId >= 1 )
    {
      TitleInfoEventSubmarineStatusComponent__PlayEntryAnimation(this, v52);
      return;
    }
  }
  TitleInfoEventSubmarineStatusComponent__PlayProgressAnimation(this, v52);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayEntryAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_GameObject_o *shipPanelObj; // x20
  __int64 v17; // x1
  UnityEngine_GameObject_o *gateNextIcon; // x0
  __int64 v19; // x1
  Il2CppObject *Component_object; // x20
  __int64 v21; // x2
  __int64 v22; // x3
  UnityEngine_GameObject_o *v23; // x20
  TitleInfoEventSubmarineStatusComponent_c *v24; // x0
  System_Collections_Generic_List_object__o *klass; // x21
  float ENTRY_ANIMATION_TIME; // s0
  EventDelegate_o *v27; // x22
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  __int64 v38; // x1
  Il2CppObject *v39; // x20
  UnityEngine_GameObject_o *v40; // x19
  TitleInfoEventSubmarineStatusComponent_c *v41; // x0
  float v42; // s0
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B14C66 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_6071/*"EndEntryAnimation"*/, v14, v15);
    byte_4B14C66 = 1;
  }
  shipPanelObj = this->fields.shipPanelObj;
  v43 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(this, this->fields.minPoint, v2);
  GameObjectExtensions__SetLocalPosition(shipPanelObj, v43, 0LL);
  gateNextIcon = this->fields.shipPanelObj;
  if ( !gateNextIcon )
    goto LABEL_33;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gateNextIcon,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)Component_object, 0LL);
  }
  gateNextIcon = this->fields.shipPanelObj;
  if ( !gateNextIcon )
    goto LABEL_33;
  gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                               gateNextIcon,
                                               (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !gateNextIcon )
    goto LABEL_33;
  v23 = gateNextIcon;
  gateNextIcon[5].monitor = (void *)0x3F80000000000000LL;
  v24 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v17);
    v24 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  klass = (System_Collections_Generic_List_object__o *)v23[3].klass;
  ENTRY_ANIMATION_TIME = v24->static_fields->ENTRY_ANIMATION_TIME;
  LODWORD(v23[1].monitor) = 3;
  *(float *)&v23[2].monitor = ENTRY_ANIMATION_TIME;
  v27 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v17, v21, v22);
  EventDelegate___ctor_47349156(v27, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6071/*"EndEntryAnimation"*/, 0LL);
  if ( !klass )
    goto LABEL_33;
  items = klass->fields._items;
  v35 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++klass->fields._version;
  if ( !items )
    goto LABEL_33;
  size = klass->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)v27,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = &items->obj.klass + size;
    klass->fields._size = size + 1;
    v37[4] = (Il2CppClass *)v27;
    sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)v27, v28, v29, v30, v31, v32, v33);
  }
  UITweener__PlayForward((UITweener_o *)v23, 0LL);
  gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
  if ( !gateNextIcon )
    goto LABEL_33;
  gateNextIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gateNextIcon, 0LL);
  if ( !gateNextIcon )
    goto LABEL_33;
  v39 = UnityEngine_GameObject__GetComponent_object_(
          gateNextIcon,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)v39, 0LL);
  }
  gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
  if ( !gateNextIcon
    || (gateNextIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gateNextIcon, 0LL)) == 0LL
    || (gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                                     gateNextIcon,
                                                     (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___)) == 0LL )
  {
LABEL_33:
    sub_1BCAA3C(gateNextIcon, v17);
  }
  gateNextIcon[5].monitor = (void *)0x3F80000000000000LL;
  v40 = gateNextIcon;
  v41 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v17);
    v41 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  v42 = v41->static_fields->ENTRY_ANIMATION_TIME;
  LODWORD(v40[1].monitor) = 3;
  *(float *)&v40[2].monitor = v42;
  UITweener__PlayForward((UITweener_o *)v40, 0LL);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayExitAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_GameObject_o *shipPanelObj; // x0
  __int64 v17; // x1
  Il2CppObject *Component_object; // x20
  __int64 v19; // x2
  __int64 v20; // x3
  UnityEngine_GameObject_o *v21; // x20
  TitleInfoEventSubmarineStatusComponent_c *v22; // x0
  System_Collections_Generic_List_object__o *klass; // x21
  float EXIT_ANIMATION_TIME; // s0
  EventDelegate_o *v25; // x22
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  __int64 v36; // x1
  UnityEngine_Object_o *goalAnimObject; // x20
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x2
  struct UnityEngine_GameObject_o *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_String_o *GoalAnimName; // x1
  const MethodInfo *v48; // x2

  if ( (byte_4B14C64 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_6081/*"EndExitAnimation"*/, v14, v15);
    byte_4B14C64 = 1;
  }
  shipPanelObj = this->fields.shipPanelObj;
  if ( !shipPanelObj )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       shipPanelObj,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)Component_object, 0LL);
  }
  shipPanelObj = this->fields.shipPanelObj;
  if ( !shipPanelObj )
    goto LABEL_24;
  shipPanelObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                               shipPanelObj,
                                               (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !shipPanelObj )
    goto LABEL_24;
  v21 = shipPanelObj;
  shipPanelObj[5].monitor = (void *)1065353216;
  v22 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, method);
    v22 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  klass = (System_Collections_Generic_List_object__o *)v21[3].klass;
  EXIT_ANIMATION_TIME = v22->static_fields->EXIT_ANIMATION_TIME;
  LODWORD(v21[1].monitor) = 3;
  *(float *)&v21[2].monitor = EXIT_ANIMATION_TIME;
  v25 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, method, v19, v20);
  EventDelegate___ctor_47349156(v25, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6081/*"EndExitAnimation"*/, 0LL);
  if ( !klass
    || (items = klass->fields._items,
        v33 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++klass->fields._version,
        !items) )
  {
LABEL_24:
    sub_1BCAA3C(shipPanelObj, method);
  }
  size = klass->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)v25,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &items->obj.klass + size;
    klass->fields._size = size + 1;
    v35[4] = (Il2CppClass *)v25;
    sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)v25, v26, v27, v28, v29, v30, v31);
  }
  UITweener__PlayForward((UITweener_o *)v21, 0LL);
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
  if ( UnityEngine_Object__op_Equality(goalAnimObject, 0LL, 0LL) )
  {
    v40 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v38);
    this->fields.goalAnimObject = v40;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.goalAnimObject, (int64_t)v40, v41, v42, v43, v44, v45, v46);
  }
  GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 3, v39);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v48);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_String_o *animClipName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *goalAnimObject; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4B14C70 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, animClipName, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B14C70 = 1;
  }
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, animClipName);
  if ( !UnityEngine_Object__op_Equality(goalAnimObject, 0LL, 0LL) )
  {
    this->fields.animClipName = animClipName;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.animClipName,
      (int64_t)animClipName,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    Component_object = this->fields.goalAnimObject;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
    {
      sub_1BCAA3C(Component_object, v14);
    }
    UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)Component_object, this->fields.animClipName, 0LL);
  }
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayLastMapAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_Action_o *onEndAnim,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t targetQuestId; // w21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  UnityEngine_Object_o *goalAnimObject; // x20
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  struct UnityEngine_GameObject_o *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v30; // x2
  __int64 v31; // x1
  TitleInfoEventSubmarineStatusComponent_c *v32; // x0

  if ( (byte_4B14C69 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, onEndAnim, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_10790/*"PlayLastMapStartedAnimation"*/, v9, v10);
    byte_4B14C69 = 1;
  }
  if ( this->fields.isLastGoalPlayed )
    goto LABEL_14;
  targetQuestId = this->fields.targetQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, onEndAnim);
  if ( !CondType__IsOpen(1, targetQuestId, 0LL, 0, 0LL, 0LL) )
  {
LABEL_14:
    ActionExtensions__Call(onEndAnim, 0LL);
  }
  else
  {
    this->fields.onEndAnim = onEndAnim;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onEndAnim, (int64_t)onEndAnim, v12, v13, v14, v15, v16, v17);
    goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    if ( UnityEngine_Object__op_Equality(goalAnimObject, 0LL, 0LL) )
    {
      v22 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v20);
      this->fields.goalAnimObject = v22;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.goalAnimObject,
        (int64_t)v22,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 3, v21);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v30);
    v32 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v31);
      v32 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10790/*"PlayLastMapStartedAnimation"*/,
      v32->static_fields->EXIT_ANIMATION_TIME,
      0LL);
  }
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayLastMapStartedAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  TitleInfoEventSubmarineStatusComponent_c *v9; // x0

  if ( (byte_4B14C6A & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventSubmarineStatusComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6059/*"EndAnimation"*/, v4, v5);
    byte_4B14C6A = 1;
  }
  this->fields.isLastGoalPlayed = 1;
  this->fields.isGoalAnimToLoop = 1;
  GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v2);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v7);
  v9 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v8);
    v9 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6059/*"EndAnimation"*/,
    v9->static_fields->GOAL_ANIMATION_TIME,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventSubmarineStatusComponent__PlayProgressAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v19; // x2
  __int64 v20; // x1
  float v21; // s0
  int v22; // s1
  int v23; // s2
  UnityEngine_GameObject_o *shipPanelObj; // x0
  float v25; // s11
  int v26; // s12
  int v27; // s13
  __int64 v28; // x1
  Il2CppObject *Component_object; // x20
  __int64 v30; // x2
  __int64 v31; // x3
  UnityEngine_GameObject_o *v32; // x20
  TitleInfoEventSubmarineStatusComponent_c *v33; // x0
  System_Collections_Generic_List_object__o *klass; // x21
  float PROGRESS_ANIMATION_TIME; // s0
  EventDelegate_o *v36; // x22
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  TitleInfoEventSubmarineStatusComponent_c *v47; // x0
  int32_t userOldPoint; // w8
  int v49; // w9
  UnityEngine_Object_o *gateNextPointCounterLabel; // x20
  int32_t v51; // w8
  int32_t userPoint; // w9
  int32_t maxPoint; // w10
  int v54; // w9
  int v55; // w8
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B14C67 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_6098/*"EndProgressAnimation"*/, v14, v15);
    byte_4B14C67 = 1;
  }
  LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.shipPanelObj, 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  *(UnityEngine_Vector3_o *)&v21 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(
                                     this,
                                     this->fields.userPoint,
                                     v19);
  if ( x <= v21 )
  {
    v47 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v20);
      v47 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6098/*"EndProgressAnimation"*/,
      v47->static_fields->PROGRESS_ANIMATION_TIME,
      0LL);
  }
  else
  {
    shipPanelObj = this->fields.shipPanelObj;
    if ( !shipPanelObj )
      goto LABEL_39;
    v25 = v21;
    v26 = v22;
    v27 = v23;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         shipPanelObj,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
      UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)Component_object, 0LL);
    }
    shipPanelObj = this->fields.shipPanelObj;
    if ( !shipPanelObj )
      goto LABEL_39;
    shipPanelObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                                 shipPanelObj,
                                                 (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    if ( !shipPanelObj )
      goto LABEL_39;
    *(float *)&shipPanelObj[5].monitor = x;
    *((float *)&shipPanelObj[5].monitor + 1) = y;
    *(float *)&shipPanelObj[5].fields.m_CachedPtr = z;
    *((float *)&shipPanelObj[5].fields + 1) = v25;
    LODWORD(shipPanelObj[6].klass) = v26;
    HIDWORD(shipPanelObj[6].klass) = v27;
    v32 = shipPanelObj;
    v33 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v20);
      v33 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    klass = (System_Collections_Generic_List_object__o *)v32[3].klass;
    PROGRESS_ANIMATION_TIME = v33->static_fields->PROGRESS_ANIMATION_TIME;
    LODWORD(v32[1].monitor) = 3;
    *(float *)&v32[2].monitor = PROGRESS_ANIMATION_TIME;
    v36 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v20, v30, v31);
    EventDelegate___ctor_47349156(v36, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6098/*"EndProgressAnimation"*/, 0LL);
    if ( !klass )
      goto LABEL_39;
    items = klass->fields._items;
    v44 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++klass->fields._version;
    if ( !items )
      goto LABEL_39;
    size = klass->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        klass,
        (Il2CppObject *)v36,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    }
    else
    {
      v46 = &items->obj.klass + size;
      klass->fields._size = size + 1;
      v46[4] = (Il2CppClass *)v36;
      sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 4), (int64_t)v36, v37, v38, v39, v40, v41, v42);
    }
    UITweener__PlayForward((UITweener_o *)v32, 0LL);
  }
  if ( !this->fields.isCompleatedCount )
  {
    userOldPoint = this->fields.userOldPoint;
    v49 = this->fields.userPoint - userOldPoint;
    if ( v49 )
    {
      shipPanelObj = (UnityEngine_GameObject_o *)this->fields.progressPointCounterLabel;
      this->fields.isCompleatedCount = 1;
      if ( !shipPanelObj )
        goto LABEL_39;
      LODWORD(shipPanelObj[2].monitor) = userOldPoint;
      HIDWORD(shipPanelObj[2].monitor) = v49;
      UICounterLabel__PlayAnimation((UICounterLabel_o *)shipPanelObj, 0LL);
    }
  }
  gateNextPointCounterLabel = (UnityEngine_Object_o *)this->fields.gateNextPointCounterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( UnityEngine_Object__op_Inequality(gateNextPointCounterLabel, 0LL, 0LL) )
  {
    v51 = this->fields.userOldPoint;
    userPoint = this->fields.userPoint;
    if ( v51 != userPoint )
    {
      maxPoint = this->fields.maxPoint;
      if ( userPoint >= maxPoint )
        userPoint = this->fields.maxPoint;
      v54 = userPoint - v51;
      if ( v54 >= 1 )
      {
        v55 = maxPoint - v51;
        if ( v55 >= 1 )
        {
          shipPanelObj = (UnityEngine_GameObject_o *)this->fields.gateNextPointCounterLabel;
          if ( shipPanelObj )
          {
            LODWORD(shipPanelObj[2].monitor) = v55;
            HIDWORD(shipPanelObj[2].monitor) = -v54;
            UICounterLabel__PlayAnimation((UICounterLabel_o *)shipPanelObj, 0LL);
            return;
          }
LABEL_39:
          sub_1BCAA3C(shipPanelObj, v20);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventSubmarineStatusComponent__ReleaseEventUIAssetData(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  System_String_o *EventUIAssetDataPath; // x19

  if ( (byte_4B14C7B & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v5, v6);
    byte_4B14C7B = 1;
  }
  if ( this->fields.eventAssetData )
  {
    if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, *(_QWORD *)&eventId);
    EventUIAssetDataPath = TitleInfoEventSubmarineStatusComponent__GetEventUIAssetDataPath(
                             eventId,
                             *(const MethodInfo **)&eventId);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7);
    AssetManager__releaseAssetStorage(EventUIAssetDataPath, 0LL);
  }
}


void __fastcall TitleInfoEventSubmarineStatusComponent__ReleaseLocalAtlas(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoEventSubmarineStatusComponent_o *v3; // x19
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v6; // w9

  v3 = this;
  if ( (byte_4B14C7C & 1) == 0 )
  {
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_1BCA7E0(
                                                         &Method_System_Collections_Generic_List_UIAtlas__Clear__,
                                                         method,
                                                         v2);
    byte_4B14C7C = 1;
  }
  atlasList = v3->fields.atlasList;
  if ( !atlasList )
    sub_1BCAA3C(this, method);
  size = atlasList->fields._size;
  v6 = atlasList->fields._version + 1;
  atlasList->fields._size = 0;
  atlasList->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0LL);
}


bool __fastcall TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
        TitleInfoEventSubmarineStatusComponent_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
  __int64 v16; // x1
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B14C7E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite, spriteName);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v13, v14);
    byte_4B14C7E = 1;
  }
  memset(&v24, 0, sizeof(v24));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
        ((unsigned __int8)IsNullOrEmpty & 1) == 0) )
  {
    if ( sprite )
    {
      UISprite__set_spriteName(sprite, 0LL, 0LL);
      return 1;
    }
    goto LABEL_19;
  }
  IsNullOrEmpty = this->fields.atlasList;
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v24 = v23;
  do
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v17 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v24,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_19:
      sub_1BCAA3C(IsNullOrEmpty, v16);
    }
    current = v24.fields._current;
    if ( !v24.fields._current )
      sub_1BCAA3C(v17, v18);
    v20 = UIAtlas__GetSprite((UIAtlas_o *)v24.fields._current, spriteName, 0LL);
  }
  while ( !v20 );
  if ( !sprite )
    sub_1BCAA3C(v20, v21);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return 1;
}


void __fastcall TitleInfoEventSubmarineStatusComponent__Setup(
        TitleInfoEventSubmarineStatusComponent_o *this,
        EventDetailEntity_o *eventDetailEntity,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  struct EventDetailEntity_o **p_eventDetailEnt; // x20
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  const MethodInfo *v56; // x2
  struct System_String_o *GoalAnimName; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  System_String_o *statusBg; // x0
  const MethodInfo *v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  int32_t eventId; // w21
  System_Action_o *v69; // x22
  const MethodInfo *v70; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v72; // x3
  const MethodInfo *v73; // x3
  const MethodInfo *v74; // x3
  const MethodInfo *v75; // x3
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x3
  const MethodInfo *v78; // x3
  const MethodInfo *v79; // x3
  const MethodInfo *v80; // x3
  const MethodInfo *v81; // x3
  __int64 v82; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *progressNameLabel; // x21
  int32_t v85; // w20
  struct System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseList; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  TitleInfoEventSubmarineStatusComponent_o *v93; // x0
  const MethodInfo *v94; // x2
  TitleInfoEventSubmarineStatusComponent_o *ProgressQuestReleaseEnt; // x21
  const MethodInfo *v96; // x2
  QuestReleaseEntity_o *CurrentQuestReleaseEnt; // x0
  const MethodInfo *v98; // x1
  QuestReleaseEntity_o *v99; // x20
  const MethodInfo *v100; // x5
  int32_t questId; // w8
  int32_t ValueInt; // w0
  int32_t v103; // w0
  __int64 v104; // x1
  int32_t maxPoint; // w22
  int32_t userOldPoint; // w25
  System_String_o *v107; // x21
  Il2CppObject *v108; // x0
  System_String_o *v109; // x21
  System_String_o *v110; // x0
  struct System_String_o *v111; // x0
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  UICounterLabel_o *gateNextPointCounterLabel; // x21
  int v119; // w22
  const MethodInfo *v120; // x3
  TitleInfoEventSubmarineStatusComponent_c *v121; // x0
  UICounterLabel_o *progressPointCounterLabel; // x20
  int32_t v123; // w21
  float PROGRESS_ANIMATION_TIME; // s8
  UnityEngine_GameObject_o *shipPanelObj; // x20
  const MethodInfo *v126; // x2
  const MethodInfo *v127; // x1
  int32_t v128; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v129; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B14C61 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, eventDetailEntity, mapAssetData);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_TitleInfoEventSubmarineStatusComponent__Setup_b__54_0__, v15, v16);
    sub_1BCA7E0(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_19390/*"event_goal"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_19415/*"event_progressicon"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_19413/*"event_progressgauge_front"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_5800/*"EVENT_SUBMARINE_NEXT_DESCRIPTION"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_1534/*"94053407"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_5801/*"EVENT_SUBMARINE_NEXT_POINT"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_5808/*"EVENT_SUBMARINE_STATUS_TITLE"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_19456/*"event_status_point"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_19410/*"event_progress_point"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_19402/*"event_next"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_19412/*"event_progressgauge_back"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_5797/*"EVENT_SUBMARINE_GAUGE_CURRENT"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_19411/*"event_progressgauge"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_19414/*"event_progressgaugebg_80393"*/, v47, v48);
    byte_4B14C61 = 1;
  }
  this->fields.eventDetailEnt = eventDetailEntity;
  p_eventDetailEnt = &this->fields.eventDetailEnt;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventDetailEnt,
    (int64_t)eventDetailEntity,
    (int64_t)mapAssetData,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.mapAssetData = mapAssetData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mapAssetData,
    (int64_t)mapAssetData,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.isCompleatedCount = 0;
  this->fields.isGoalAnimToLoop = 0;
  GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 0, v56);
  this->fields.animClipName = GoalAnimName;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.animClipName,
    (int64_t)GoalAnimName,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  if ( !this->fields.eventDetailEnt )
    goto LABEL_48;
  eventId = this->fields.eventDetailEnt->fields.eventId;
  v69 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v65, v66, v67);
  System_Action___ctor(v69, (Il2CppObject *)this, Method_TitleInfoEventSubmarineStatusComponent__Setup_b__54_0__, 0LL);
  TitleInfoEventSubmarineStatusComponent__LoadEventUIAssetData(this, eventId, v69, v70);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition_34331148(gameObject, 62.0, 0.0, 0.0, 0LL);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.statusBg,
    (System_String_o *)StringLiteral_19414/*"event_progressgaugebg_80393"*/,
    v72);
  statusBg = (System_String_o *)this->fields.statusBg;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.areaIcon,
    (System_String_o *)StringLiteral_1534/*"94053407"*/,
    v73);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeFrame,
    (System_String_o *)StringLiteral_19411/*"event_progressgauge"*/,
    v74);
  statusBg = (System_String_o *)this->fields.gaugeFrame;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeBar,
    (System_String_o *)StringLiteral_19413/*"event_progressgauge_front"*/,
    v75);
  statusBg = (System_String_o *)this->fields.gaugeBar;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeBg,
    (System_String_o *)StringLiteral_19412/*"event_progressgauge_back"*/,
    v76);
  statusBg = (System_String_o *)this->fields.gaugeBg;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.shipIcon,
    (System_String_o *)StringLiteral_19415/*"event_progressicon"*/,
    v77);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.progressPointBg,
    (System_String_o *)StringLiteral_19456/*"event_status_point"*/,
    v78);
  statusBg = (System_String_o *)this->fields.progressPointBg;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gateNextIcon,
    (System_String_o *)StringLiteral_19402/*"event_next"*/,
    v79);
  statusBg = (System_String_o *)this->fields.gateNextIcon;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gateGoalIcon,
    (System_String_o *)StringLiteral_19390/*"event_goal"*/,
    v80);
  statusBg = (System_String_o *)this->fields.gateGoalIcon;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gateNextPointBg,
    (System_String_o *)StringLiteral_19410/*"event_progress_point"*/,
    v81);
  statusBg = (System_String_o *)this->fields.gateNextPointBg;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v82);
  statusBg = LocalizationManager__Get((System_String_o *)StringLiteral_5808/*"EVENT_SUBMARINE_STATUS_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_48;
  UILabel__set_text(titleLabel, statusBg, 0LL);
  progressNameLabel = this->fields.progressNameLabel;
  statusBg = LocalizationManager__Get((System_String_o *)StringLiteral_5797/*"EVENT_SUBMARINE_GAUGE_CURRENT"*/, 0LL);
  if ( !progressNameLabel )
    goto LABEL_48;
  UILabel__set_text(progressNameLabel, statusBg, 0LL);
  if ( !*p_eventDetailEnt )
    goto LABEL_48;
  v85 = (*p_eventDetailEnt)->fields.eventId;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v65);
  QuestReleaseList = TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(v85, v65);
  this->fields.baseQuestReleaseEntList = QuestReleaseList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseQuestReleaseEntList,
    (int64_t)QuestReleaseList,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  ProgressQuestReleaseEnt = (TitleInfoEventSubmarineStatusComponent_o *)TitleInfoEventSubmarineStatusComponent__GetProgressQuestReleaseEnt(
                                                                          v93,
                                                                          this->fields.baseQuestReleaseEntList,
                                                                          v94);
  CurrentQuestReleaseEnt = TitleInfoEventSubmarineStatusComponent__GetCurrentQuestReleaseEnt(
                             ProgressQuestReleaseEnt,
                             this->fields.baseQuestReleaseEntList,
                             v96);
  if ( CurrentQuestReleaseEnt )
    v99 = CurrentQuestReleaseEnt;
  else
    v99 = (QuestReleaseEntity_o *)ProgressQuestReleaseEnt;
  this->fields.userPoint = TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(this, v98);
  if ( v99 )
    questId = v99->fields.questId;
  else
    questId = 0;
  this->fields.currentQuestId = questId;
  if ( ProgressQuestReleaseEnt )
    ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)ProgressQuestReleaseEnt, 0LL);
  else
    ValueInt = 0;
  this->fields.minPoint = ValueInt;
  if ( v99 )
    v103 = QuestReleaseEntity__getValueInt(v99, 0LL);
  else
    v103 = 0;
  this->fields.maxPoint = v103;
  TitleInfoEventSubmarineStatusComponent__SetupOldData(
    this,
    &this->fields.userOldPoint,
    &this->fields.oldQuestId,
    &this->fields.progressQuestId,
    &this->fields.isLastGoalPlayed,
    v100);
  maxPoint = this->fields.maxPoint;
  userOldPoint = this->fields.userOldPoint;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v104);
  v107 = LocalizationManager__Get((System_String_o *)StringLiteral_5800/*"EVENT_SUBMARINE_NEXT_DESCRIPTION"*/, 0LL);
  v128 = this->fields.maxPoint;
  v108 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v128);
  v109 = System_String__Format(v107, v108, 0LL);
  v110 = LocalizationManager__Get((System_String_o *)StringLiteral_5801/*"EVENT_SUBMARINE_NEXT_POINT"*/, 0LL);
  v111 = System_String__Concat_62401220(v109, v110, 0LL);
  this->fields.nextPointTextFormat = v111;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.nextPointTextFormat,
    (int64_t)v111,
    v112,
    v113,
    v114,
    v115,
    v116,
    v117);
  statusBg = (System_String_o *)TitleInfoEventSubmarineStatusComponent_TypeInfo;
  gateNextPointCounterLabel = this->fields.gateNextPointCounterLabel;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v65);
  if ( !gateNextPointCounterLabel )
    goto LABEL_48;
  v119 = (maxPoint - userOldPoint) & ~((maxPoint - userOldPoint) >> 31);
  UICounterLabel__Setup(
    gateNextPointCounterLabel,
    v119,
    TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields->PROGRESS_ANIMATION_TIME,
    this->fields.nextPointTextFormat,
    0,
    0LL);
  statusBg = (System_String_o *)this->fields.gateNextPointCounterLabel;
  if ( !statusBg )
    goto LABEL_48;
  UICounterLabel__SetCountLabel((UICounterLabel_o *)statusBg, v119, 0LL);
  if ( TitleInfoEventSubmarineStatusComponent__IsAllClear(this, v99, this->fields.userOldPoint, v120) )
  {
    statusBg = (System_String_o *)this->fields.gateNextPointCounterLabel;
    if ( !statusBg )
      goto LABEL_48;
    statusBg = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusBg, 0LL);
    if ( !statusBg )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusBg, 0, 0LL);
  }
  v121 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  progressPointCounterLabel = this->fields.progressPointCounterLabel;
  v123 = this->fields.userOldPoint;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v65);
    v121 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  PROGRESS_ANIMATION_TIME = v121->static_fields->PROGRESS_ANIMATION_TIME;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v65);
  statusBg = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
  if ( !progressPointCounterLabel
    || (UICounterLabel__Setup(progressPointCounterLabel, v123, PROGRESS_ANIMATION_TIME, statusBg, 0, 0LL),
        (statusBg = (System_String_o *)this->fields.progressPointCounterLabel) == 0LL) )
  {
LABEL_48:
    sub_1BCAA3C(statusBg, v65);
  }
  UICounterLabel__SetCountLabel((UICounterLabel_o *)statusBg, this->fields.userOldPoint, 0LL);
  shipPanelObj = this->fields.shipPanelObj;
  v129 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(this, this->fields.userOldPoint, v126);
  GameObjectExtensions__SetLocalPosition(shipPanelObj, v129, 0LL);
  TitleInfoEventSubmarineStatusComponent__SetupAnimation(this, v127);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__SetupAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_GameObject_o *gateNextIcon; // x0
  void (__fastcall *castClass)(float); // x8
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x1
  UnityEngine_Object_o *goalAnimObject; // x20
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  struct UnityEngine_GameObject_o *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v33; // x2
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x20
  System_Predicate_object__o *v35; // x21
  Il2CppObject *v36; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v37; // x21
  QuestReleaseEntity_o *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Predicate_object__o *v42; // x22
  Il2CppObject *v43; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v44; // x22
  QuestReleaseEntity_o *v45; // x21
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Predicate_object__o *v49; // x23
  Il2CppObject *v50; // x22
  int32_t ValueInt; // w0
  int32_t oldQuestId; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v54; // x1
  UnityEngine_Object_o *v55; // x20
  const MethodInfo *v56; // x1
  const MethodInfo *v57; // x2
  struct UnityEngine_GameObject_o *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_String_o *v65; // x1
  const MethodInfo *v66; // x2
  long double v67; // q0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B14C62 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Predicate_QuestReleaseEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_0__, v10, v11);
    sub_1BCA7E0(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_1__, v12, v13);
    sub_1BCA7E0(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_2__, v14, v15);
    byte_4B14C62 = 1;
  }
  gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
  if ( !gateNextIcon )
    goto LABEL_43;
  castClass = (void (__fastcall *)(float))gateNextIcon->klass[1]._1.castClass;
  if ( this->fields.userOldPoint >= this->fields.maxPoint )
  {
    castClass(0.0);
    goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( UnityEngine_Object__op_Equality(goalAnimObject, 0LL, 0LL) )
    {
      v25 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v23);
      this->fields.goalAnimObject = v25;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.goalAnimObject,
        (int64_t)v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v24);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v33);
  }
  else
  {
    castClass(1.0);
  }
  baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
  v35 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_QuestReleaseEntity__TypeInfo, v18, v19, v20);
  System_Predicate_object____ctor(
    v35,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_0__,
    0LL);
  if ( !baseQuestReleaseEntList )
    goto LABEL_43;
  v36 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)baseQuestReleaseEntList,
          (System_Predicate_T__o *)v35,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v37 = this->fields.baseQuestReleaseEntList;
  v38 = (QuestReleaseEntity_o *)v36;
  v42 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_QuestReleaseEntity__TypeInfo, v39, v40, v41);
  System_Predicate_object____ctor(
    v42,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_1__,
    0LL);
  if ( !v37 )
    goto LABEL_43;
  v43 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)v37,
          (System_Predicate_T__o *)v42,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v44 = this->fields.baseQuestReleaseEntList;
  v45 = (QuestReleaseEntity_o *)v43;
  v49 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_QuestReleaseEntity__TypeInfo, v46, v47, v48);
  System_Predicate_object____ctor(
    v49,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_2__,
    0LL);
  if ( !v44 )
    goto LABEL_43;
  v50 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)v44,
          (System_Predicate_T__o *)v49,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  if ( v38 )
    LODWORD(v38) = QuestReleaseEntity__getValueInt(v38, 0LL);
  if ( v45 )
    LODWORD(v45) = QuestReleaseEntity__getValueInt(v45, 0LL);
  if ( v50 )
    ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)v50, 0LL);
  else
    ValueInt = 0;
  if ( (int)v45 >= ValueInt )
    goto LABEL_39;
  oldQuestId = this->fields.oldQuestId;
  if ( !oldQuestId )
  {
    if ( this->fields.currentQuestId >= 1 )
    {
      gateNextIcon = this->fields.shipPanelObj;
      if ( gateNextIcon )
      {
        gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     gateNextIcon,
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
        if ( gateNextIcon )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gateNextIcon->klass[1]._1.castClass)(
            gateNextIcon,
            gateNextIcon->klass[1]._1.declaringType,
            0.0);
          gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
          if ( gateNextIcon )
          {
            klass = gateNextIcon->klass;
            LODWORD(v67) = 0;
LABEL_42:
            ((void (__fastcall *)(long double))klass[1]._1.castClass)(v67);
            return;
          }
        }
      }
LABEL_43:
      sub_1BCAA3C(gateNextIcon, method);
    }
LABEL_39:
    gateNextIcon = this->fields.shipPanelObj;
    if ( gateNextIcon )
    {
      gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gateNextIcon,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
      if ( gateNextIcon )
      {
        klass = gateNextIcon->klass;
        LODWORD(v67) = 1.0;
        goto LABEL_42;
      }
    }
    goto LABEL_43;
  }
  if ( (int)v38 >= ValueInt || oldQuestId < 1 )
    goto LABEL_39;
  gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gaugeBar;
  if ( !gateNextIcon )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gateNextIcon, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  GameObjectExtensions__SetLocalPosition(this->fields.shipPanelObj, LocalPosition, 0LL);
  gateNextIcon = this->fields.shipPanelObj;
  if ( !gateNextIcon )
    goto LABEL_43;
  gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               gateNextIcon,
                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !gateNextIcon )
    goto LABEL_43;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gateNextIcon->klass[1]._1.castClass)(
    gateNextIcon,
    gateNextIcon->klass[1]._1.declaringType,
    1.0);
  gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
  if ( !gateNextIcon )
    goto LABEL_43;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gateNextIcon->klass[1]._1.castClass)(
    gateNextIcon,
    gateNextIcon->klass[1]._1.declaringType,
    0.0);
  v55 = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54);
  if ( UnityEngine_Object__op_Equality(v55, 0LL, 0LL) )
  {
    v58 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v56);
    this->fields.goalAnimObject = v58;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.goalAnimObject, (int64_t)v58, v59, v60, v61, v62, v63, v64);
  }
  v65 = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v57);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, v65, v66);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__SetupOldData(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t *oldPoint,
        int32_t *oldQuestId,
        int32_t *progressQuestId,
        bool *isLastGoalPlayed,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 gateNextIcon; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  TerminalPramsManager_c *v20; // x8
  struct EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x9
  struct EventDetailEntity_o *eventDetailEnt; // x10
  TerminalPramsManager_c *v23; // x0
  System_String_array *ValueByArray; // x0
  __int64 v25; // x1
  __int64 v26; // x8
  System_String_array *v27; // x23
  __int64 v28; // x1
  System_String_o *v29; // x20
  TerminalPramsManager_c *v30; // x0
  int32_t userPoint; // w8
  __int64 v32; // x1
  int32_t targetQuestId; // w20

  if ( (byte_4B14C6D & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, oldPoint, oldQuestId);
    sub_1BCA7E0(&CondType_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v13, v14);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v15, v16);
    byte_4B14C6D = 1;
  }
  *oldPoint = 0;
  *oldQuestId = 0;
  *progressQuestId = 0;
  *isLastGoalPlayed = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, oldPoint);
  gateNextIcon = TerminalPramsManager__CheckEventSubmarinePointSaveData(0LL);
  v20 = TerminalPramsManager_TypeInfo;
  if ( (gateNextIcon & 1) != 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
    if ( !byte_4B12EBB )
    {
      gateNextIcon = sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v18, v19);
      byte_4B12EBB = 1;
    }
    v20 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
      v20 = TerminalPramsManager_TypeInfo;
    }
    if ( v20->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
    {
      if ( !v20->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v20, v18);
      if ( !byte_4B12EBB )
      {
        gateNextIcon = sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v18, v19);
        byte_4B12EBB = 1;
      }
      v20 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
        v20 = TerminalPramsManager_TypeInfo;
      }
      BeforeEventSubmarineSaveData_k__BackingField = v20->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
      if ( !BeforeEventSubmarineSaveData_k__BackingField )
        goto LABEL_53;
      eventDetailEnt = this->fields.eventDetailEnt;
      if ( !eventDetailEnt )
        goto LABEL_53;
      if ( BeforeEventSubmarineSaveData_k__BackingField->fields.eventId == eventDetailEnt->fields.eventId )
      {
        if ( !v20->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v20, v18);
        if ( !byte_4B12EBB )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v18, v19);
          byte_4B12EBB = 1;
        }
        v23 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
          v23 = TerminalPramsManager_TypeInfo;
        }
        gateNextIcon = (__int64)v23->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
        if ( gateNextIcon )
        {
          ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)gateNextIcon, 0x2Cu, 0LL);
          if ( ValueByArray )
          {
            v26 = *(_QWORD *)&ValueByArray->max_length;
            v27 = ValueByArray;
            if ( v26 )
            {
              if ( !(_DWORD)v26 )
                sub_1BCAA44(ValueByArray, v25);
              *oldPoint = System_Int32__Parse(ValueByArray->m_Items[0], 0LL);
              if ( (int)v27->max_length >= 2 )
              {
                *oldQuestId = System_Int32__Parse(v27->m_Items[1], 0LL);
                if ( (int)v27->max_length >= 3 )
                {
                  *progressQuestId = System_Int32__Parse(v27->m_Items[2], 0LL);
                  if ( (int)v27->max_length >= 4 )
                  {
                    v29 = v27->m_Items[3];
                    if ( !bool_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(bool_TypeInfo, v28);
                    *isLastGoalPlayed = System_Boolean__Parse(v29, 0LL);
                  }
                }
              }
            }
          }
          return;
        }
LABEL_53:
        sub_1BCAA3C(gateNextIcon, v18);
      }
    }
  }
  if ( !v20->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v20, v18);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v18, v19);
    byte_4B12DC3 = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
    v30 = TerminalPramsManager_TypeInfo;
  }
  if ( v30->static_fields->_QuestId_k__BackingField != this->fields.uiReleaseQuestId )
  {
    userPoint = this->fields.userPoint;
    this->fields.isAfterTakingOver = 1;
    *oldPoint = userPoint;
    *oldQuestId = this->fields.currentQuestId;
    *progressQuestId = this->fields.currentQuestId;
    gateNextIcon = (__int64)this->fields.gateNextIcon;
    if ( !gateNextIcon )
      goto LABEL_53;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gateNextIcon + 440LL))(
      gateNextIcon,
      *(_QWORD *)(*(_QWORD *)gateNextIcon + 448LL),
      0.0);
    gateNextIcon = (__int64)this->fields.shipPanelObj;
    if ( !gateNextIcon )
      goto LABEL_53;
    gateNextIcon = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)gateNextIcon,
                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    if ( !gateNextIcon )
      goto LABEL_53;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gateNextIcon + 440LL))(
      gateNextIcon,
      *(_QWORD *)(*(_QWORD *)gateNextIcon + 448LL),
      1.0);
    targetQuestId = this->fields.targetQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v32);
    if ( CondType__IsOpen(1, targetQuestId, 0LL, 0, 0LL, 0LL) )
      *isLastGoalPlayed = 1;
  }
}


void __fastcall TitleInfoEventSubmarineStatusComponent__UpdateDisp(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___PlayAnimation_b__59_0(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BCAA3C(this, 0LL);
  return n->fields.questId == this->fields.oldQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___PlayAnimation_b__59_1(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BCAA3C(this, 0LL);
  return n->fields.questId == this->fields.progressQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___PlayAnimation_b__59_2(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BCAA3C(this, 0LL);
  return n->fields.questId == this->fields.currentQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_0(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BCAA3C(this, 0LL);
  return n->fields.questId == this->fields.oldQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_1(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BCAA3C(this, 0LL);
  return n->fields.questId == this->fields.progressQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_2(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BCAA3C(this, 0LL);
  return n->fields.questId == this->fields.currentQuestId;
}


void __fastcall TitleInfoEventSubmarineStatusComponent___Setup_b__54_0(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventDetailEntity_o *eventDetailEnt; // x8

  eventDetailEnt = this->fields.eventDetailEnt;
  if ( !eventDetailEnt )
    sub_1BCAA3C(this, method);
  TitleInfoEventSubmarineStatusComponent__LoadLocalAtlas(this, eventDetailEnt->fields.eventId, v2);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall TitleInfoEventSubmarineStatusComponent__get_BasePosition(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *gaugeBar; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float v5; // s0
  float v6; // s1
  float v7; // s2
  struct UISprite_o *v8; // x8
  float v9; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  gaugeBar = (UnityEngine_Component_o *)this->fields.gaugeBar;
  if ( !gaugeBar
    || (gameObject = UnityEngine_Component__get_gameObject(gaugeBar, 0LL),
        *(UnityEngine_Vector3_o *)&v5 = GameObjectExtensions__GetLocalPosition(gameObject, 0LL),
        (v8 = this->fields.gaugeBar) == 0LL) )
  {
    sub_1BCAA3C(gaugeBar, method);
  }
  v9 = v5 + (float)v8->fields.mWidth;
  result.fields.z = v7;
  result.fields.y = v6;
  result.fields.x = v9;
  return result;
}


float __fastcall TitleInfoEventSubmarineStatusComponent__get_GaugeWidth(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *gaugeBar; // x8

  gaugeBar = this->fields.gaugeBar;
  if ( !gaugeBar )
    sub_1BCAA3C(this, method);
  return (float)gaugeBar->fields.mWidth;
}


void __fastcall TitleInfoEventSubmarineStatusComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B14C82 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventSubmarineStatusComponent___c_TypeInfo, v1, v2);
    byte_4B14C82 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(TitleInfoEventSubmarineStatusComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields->__9 = (struct TitleInfoEventSubmarineStatusComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall TitleInfoEventSubmarineStatusComponent___c___ctor(
        TitleInfoEventSubmarineStatusComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall TitleInfoEventSubmarineStatusComponent___c___GetQuestReleaseList_b__80_0(
        TitleInfoEventSubmarineStatusComponent___c_o *this,
        QuestReleaseEntity_o *a,
        QuestReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (TitleInfoEventSubmarineStatusComponent___c_o *)QuestReleaseEntity__getValueInt(a, 0LL), !b) )
    sub_1BCAA3C(this, a);
  return (_DWORD)this - QuestReleaseEntity__getValueInt(b, 0LL);
}


void __fastcall TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0___ctor(
        TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0___EndAnimation_b__0(
        TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  struct TitleInfoEventSubmarineStatusComponent_o *_4__this; // x8

  if ( !n || (_4__this = this->fields.__4__this) == 0LL )
    sub_1BCAA3C(this, n);
  return n->fields.questId == _4__this->fields.currentQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0___EndAnimation_b__1(
        TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BCAA3C(this, 0LL);
  return n->fields.questId == this->fields.tmpProgressQuestId;
}


void __fastcall TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0___ctor(
        TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0___LoadEventUIAssetData_b__0(
        TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct TitleInfoEventSubmarineStatusComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, data);
  _4__this->fields.eventAssetData = data;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&_4__this->fields.eventAssetData,
    (int64_t)data,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ActionExtensions__Call(this->fields.callback, 0LL);
}