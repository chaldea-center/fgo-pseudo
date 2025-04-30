// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventFortificationDataLogic__CalculationGetPoint(
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int32_t lv; // w19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A52651 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A52651 = 1;
  }
  entity = 0LL;
  if ( userServantEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !Instance )
      goto LABEL_12;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
           &entity,
           eventId,
           (const MethodInfo_32142CC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
      sub_1B86614(Instance, v8);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  EventEntity_array *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x23
  __int64 v17; // x8
  EventEntity_array *v18; // x24
  __int64 v19; // x26
  EventEntity_o *v20; // x25

  if ( (byte_4A52652 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventMaster___, fortificationName);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B863B8(&StringLiteral_1/*""*/, v11);
    byte_4A52652 = 1;
  }
  *isFortification = 0;
  *fortificationName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C(
    (CGThumbnailListItem_o *)fortificationName,
    (int32_t)StringLiteral_1/*""*/,
    (int32_t)fortificationDetailName,
    (const MethodInfo *)userSvtId);
  *fortificationDetailName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)fortificationDetailName, (int32_t)StringLiteral_1/*""*/, v12, v13);
  Instance = (EventEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___),
        (Instance = (EventEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (EventEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 1, 0, 0LL)) == 0LL )
  {
LABEL_19:
    sub_1B86614(Instance, v15);
  }
  v17 = *(_QWORD *)&Instance->max_length;
  v18 = Instance;
  if ( !v17 )
    goto LABEL_17;
  if ( (int)v17 >= 1 )
  {
    v19 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v19 >= (unsigned int)v17 )
        sub_1B8661C(Instance, v15);
      v20 = v18->m_Items[v19];
      if ( !v20 || !MasterData_object )
        goto LABEL_19;
      Instance = (EventEntity_array *)UserEventFortificationMaster__TryGetFortificationNameTextBySvtId(
                                        (UserEventFortificationMaster_o *)MasterData_object,
                                        fortificationName,
                                        fortificationDetailName,
                                        v20->fields.id,
                                        userSvtId,
                                        0LL);
      *isFortification = (unsigned __int8)Instance & 1;
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      LODWORD(v17) = v18->max_length;
      if ( (int)++v19 >= (int)v17 )
        return;
    }
    if ( !EventEntity__IsEventPeriod(v20, 0LL, 0LL) )
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
  System_String_o *v11; // x21
  __int64 v13; // x1
  System_String_o *v14; // x0
  bool v15; // w0

  v8 = colorCodeA;
  v11 = colorCodeMilitsry;
  if ( (byte_4A52653 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_370/*"#"*/, colorCodeMilitsry);
    sub_1B863B8(&StringLiteral_1/*""*/, v13);
    byte_4A52653 = 1;
  }
  if ( workType != 1 )
  {
    v11 = colorCodeInternal;
    if ( workType != 2 )
    {
      if ( workType == 3 )
        v11 = colorCodeFarmming;
      else
        v11 = (System_String_o *)StringLiteral_1/*""*/;
    }
  }
  v14 = System_String__Concat_61645176((System_String_o *)StringLiteral_370/*"#"*/, v11, 0LL);
  v15 = UnityEngine_ColorUtility__TryParseHtmlString(v14, color, 0LL);
  color->fields.a = (float)v8 / 255.0;
  return v15;
}