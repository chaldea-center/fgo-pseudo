int32_t __fastcall EventFortificationDataLogic__CalculationGetPoint(
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t lv; // w19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BE0504 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BE0504 = 1;
  }
  entity = 0LL;
  if ( userServantEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !Instance )
      goto LABEL_12;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
           &entity,
           eventId,
           (const MethodInfo_325BE14 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    {
      Instance = entity;
      if ( entity )
      {
        Instance = (Il2CppObject *)EventDetailEntity__GetFortificationLvPoint((EventDetailEntity_o *)entity, 0LL);
        if ( entity )
        {
          lv = userServantEntity->fields.lv;
          return EventDetailEntity__GetFortificationBasePoint((EventDetailEntity_o *)entity, 0LL)
               + lv * (_DWORD)Instance;
        }
      }
LABEL_12:
      sub_1C22094(Instance, v6);
    }
  }
  return 0;
}


void __fastcall EventFortificationDataLogic__SetFortification(
        bool *isFortification,
        System_String_o **fortificationName,
        System_String_o **fortificationDetailName,
        int64_t userSvtId,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  EventEntity_array *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x23
  __int64 v21; // x8
  EventEntity_array *v22; // x24
  __int64 v23; // x26
  EventEntity_o *v24; // x25

  if ( (byte_4BE0505 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BE0505 = 1;
  }
  *isFortification = 0;
  *fortificationName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)fortificationName,
    (int64_t)StringLiteral_1/*""*/,
    (int64_t)fortificationDetailName,
    userSvtId,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  *fortificationDetailName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)fortificationDetailName,
    (int64_t)StringLiteral_1/*""*/,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  Instance = (EventEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___),
        (Instance = (EventEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (EventEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 1, 0, 0LL)) == 0LL )
  {
LABEL_19:
    sub_1C22094(Instance, v19);
  }
  v21 = *(_QWORD *)&Instance->max_length;
  v22 = Instance;
  if ( !v21 )
    goto LABEL_17;
  if ( (int)v21 >= 1 )
  {
    v23 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v23 >= (unsigned int)v21 )
        sub_1C2209C(Instance, v19);
      v24 = v22->m_Items[v23];
      if ( !v24 || !MasterData_object )
        goto LABEL_19;
      Instance = (EventEntity_array *)UserEventFortificationMaster__TryGetFortificationNameTextBySvtId(
                                        (UserEventFortificationMaster_o *)MasterData_object,
                                        fortificationName,
                                        fortificationDetailName,
                                        v24->fields.id,
                                        userSvtId,
                                        0LL);
      *isFortification = (unsigned __int8)Instance & 1;
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      LODWORD(v21) = v22->max_length;
      if ( (int)++v23 >= (int)v21 )
        return;
    }
    if ( !EventEntity__IsEventPeriod(v24, 0LL, 0LL) )
LABEL_17:
      *isFortification = 0;
  }
}


bool __fastcall EventFortificationDataLogic__TryGetColorByWorkType(
        UnityEngine_Color_o *color,
        System_String_o *colorCodeMilitsry,
        System_String_o *colorCodeInternal,
        System_String_o *colorCodeFarmming,
        int32_t colorCodeA,
        int32_t workType,
        const MethodInfo *method)
{
  unsigned __int8 v8; // w20
  System_String_o *v13; // x0
  bool v14; // w0

  v8 = colorCodeA;
  if ( (byte_4BE0506 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_398/*"#"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BE0506 = 1;
  }
  if ( workType != 1 )
  {
    colorCodeMilitsry = colorCodeInternal;
    if ( workType != 2 )
    {
      if ( workType == 3 )
        colorCodeMilitsry = colorCodeFarmming;
      else
        colorCodeMilitsry = (System_String_o *)StringLiteral_1/*""*/;
    }
  }
  v13 = System_String__Concat_63115476((System_String_o *)StringLiteral_398/*"#"*/, colorCodeMilitsry, 0LL);
  v14 = UnityEngine_ColorUtility__TryParseHtmlString(v13, color, 0LL);
  color->fields.a = (float)v8 / 255.0;
  return v14;
}