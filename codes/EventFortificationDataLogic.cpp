int32_t EventFortificationDataLogic__CalculationGetPoint(
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t lv; // w19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2AB50 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2AB50 = 1;
  }
  entity = 0;
  if ( userServantEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !Instance )
      goto LABEL_12;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
           &entity,
           eventId,
           (const MethodInfo_34632C0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
      sub_1C93D2C(Instance, v6);
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
  EventEntity_array *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x23
  il2cpp_array_size_t max_length; // x8
  EventEntity_array *v13; // x24
  __int64 v14; // x26
  EventEntity_o *v15; // x25

  if ( (byte_4D2AB51 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2AB51 = 1;
  }
  *isFortification = 0;
  *fortificationName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78(fortificationName, StringLiteral_1/*""*/);
  *fortificationDetailName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78(fortificationDetailName, StringLiteral_1/*""*/);
  Instance = (EventEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserEventFortificationMaster___),
        (Instance = (EventEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (EventEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMaster___)) == 0
    || (Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 1, 0, 0)) == 0 )
  {
LABEL_19:
    sub_1C93D2C(Instance, v10);
  }
  max_length = Instance->max_length;
  v13 = Instance;
  if ( !max_length )
    goto LABEL_17;
  if ( (int)max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v14 >= (unsigned int)max_length )
        sub_1C93D34(Instance);
      v15 = v13->m_Items[v14];
      if ( !v15 || !MasterData_object )
        goto LABEL_19;
      Instance = (EventEntity_array *)UserEventFortificationMaster__TryGetFortificationNameTextBySvtId(
                                        (UserEventFortificationMaster_o *)MasterData_object,
                                        fortificationName,
                                        fortificationDetailName,
                                        v15->fields.id,
                                        userSvtId,
                                        0);
      *isFortification = (unsigned __int8)Instance & 1;
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      LODWORD(max_length) = v13->max_length;
      if ( (int)++v14 >= (int)max_length )
        return;
    }
    if ( !EventEntity__IsEventPeriod(v15, 0, 0) )
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
  bool v14; // w0

  v8 = colorCodeA;
  if ( (byte_4D2AB52 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_370/*"#"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2AB52 = 1;
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
  v13 = System_String__Concat_64425724((System_String_o *)StringLiteral_370/*"#"*/, colorCodeMilitsry, 0);
  v14 = UnityEngine_ColorUtility__TryParseHtmlString(v13, color, 0);
  color->fields.a = (float)v8 / 255.0;
  return v14;
}