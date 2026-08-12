int32_t EventFortificationDataLogic__CalculationGetPoint(
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t lv; // w19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596A61A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A61A = 1;
  }
  entity = 0;
  if ( userServantEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !Instance )
      goto LABEL_12;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
           &entity,
           eventId,
           (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    {
      Instance = entity;
      if ( entity )
      {
        Instance = (Il2CppObject *)EventDetailEntity__GetFortificationLvPoint((EventDetailEntity_o *)entity, 0);
        if ( entity )
        {
          lv = userServantEntity->fields.lv;
          return EventDetailEntity__GetFortificationBasePoint((EventDetailEntity_o *)entity, 0) + lv * (_DWORD)Instance;
        }
      }
LABEL_12:
      sub_2213CDC(Instance, v6);
    }
  }
  return 0;
}


void EventFortificationDataLogic__SetFortification(
        bool *isFortification,
        System_String_o **fortificationName,
        System_String_o **fortificationDetailName,
        int64_t userSvtId,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v12; // w1
  int32_t v13; // w1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  EventEntity_array *Instance; // x0
  __int64 v21; // x1
  Il2CppObject *MasterData_object; // x23
  il2cpp_array_size_t max_length; // x8
  EventEntity_array *v24; // x24
  __int64 v25; // x26
  EventEntity_o *v26; // x25

  if ( (byte_596A61B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A61B = 1;
  }
  *isFortification = 0;
  v12 = (int)StringLiteral_1/*""*/;
  *fortificationName = (System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)fortificationName,
    v12,
    (System_String_o *)fortificationDetailName,
    (System_String_o *)userSvtId,
    (int32_t)method,
    v5,
    v6,
    v7);
  v13 = (int)StringLiteral_1/*""*/;
  *fortificationDetailName = (System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)fortificationDetailName, v13, v14, v15, v16, v17, v18, v19);
  Instance = (EventEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventFortificationMaster___),
        (Instance = (EventEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (EventEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___)) == 0
    || (Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 1, 0, 0)) == 0 )
  {
LABEL_19:
    sub_2213CDC(Instance, v21);
  }
  max_length = Instance->max_length;
  v24 = Instance;
  if ( !max_length )
    goto LABEL_17;
  if ( (int)max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v25 >= (unsigned int)max_length )
        sub_2213CE4(Instance);
      v26 = v24->m_Items[v25];
      if ( !v26 || !MasterData_object )
        goto LABEL_19;
      Instance = (EventEntity_array *)UserEventFortificationMaster__TryGetFortificationNameTextBySvtId(
                                        (UserEventFortificationMaster_o *)MasterData_object,
                                        fortificationName,
                                        fortificationDetailName,
                                        v26->fields.id,
                                        userSvtId,
                                        0);
      *isFortification = (unsigned __int8)Instance & 1;
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      LODWORD(max_length) = v24->max_length;
      if ( (int)++v25 >= (int)max_length )
        return;
    }
    if ( !EventEntity__IsEventPeriod(v26, 0, 0) )
LABEL_17:
      *isFortification = 0;
  }
}


bool EventFortificationDataLogic__TryGetColorByWorkType(
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
  bool result; // w0

  v8 = colorCodeA;
  if ( (byte_596A61C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_395/*"#"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A61C = 1;
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
  v13 = System_String__Concat_75651716((System_String_o *)StringLiteral_395/*"#"*/, colorCodeMilitsry, 0);
  result = UnityEngine_ColorUtility__TryParseHtmlString(v13, color, 0);
  color->fields.a = (float)v8 / 255.0;
  return result;
}