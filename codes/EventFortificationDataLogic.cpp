int32_t __fastcall EventFortificationDataLogic__CalculationGetPoint(
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v6; // x1
  int32_t lv; // w19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438DE79 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438DE79 = 1;
  }
  entity = 0LL;
  if ( userServantEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_11;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !Instance )
      goto LABEL_11;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
           &entity,
           eventId,
           (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    {
      Instance = (DataManager_o *)entity;
      if ( entity )
      {
        Instance = (DataManager_o *)EventDetailEntity__GetFortificationLvPoint((EventDetailEntity_o *)entity, v6);
        if ( entity )
        {
          lv = userServantEntity->fields.lv;
          return EventDetailEntity__GetFortificationBasePoint((EventDetailEntity_o *)entity, v6) + lv * (_DWORD)Instance;
        }
      }
LABEL_11:
      sub_B7769C(Instance, v6);
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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  UserEventFortificationMaster_o *MasterData_WarQuestSelectionMaster; // x23
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v22; // x24
  __int64 v23; // x26
  EventEntity_o *v24; // x25
  const MethodInfo *v25; // x2
  __int64 v26; // x0

  if ( (byte_438DE7A & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438DE7A = 1;
  }
  *isFortification = 0;
  *fortificationName = (System_String_o *)StringLiteral_1/*""*/;
  sub_B77560(
    (BattleServantConfConponent_o *)fortificationName,
    (System_Int32_array **)StringLiteral_1/*""*/,
    (System_String_array **)fortificationDetailName,
    (System_String_array **)userSvtId,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  *fortificationDetailName = (System_String_o *)StringLiteral_1/*""*/;
  sub_B77560(
    (BattleServantConfConponent_o *)fortificationDetailName,
    (System_Int32_array **)StringLiteral_1/*""*/,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 Instance,
                                                                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 1, 0LL)) == 0LL )
  {
LABEL_19:
    sub_B7769C(Instance, v19);
  }
  datalist = Instance->fields.datalist;
  v22 = Instance;
  if ( !datalist )
    goto LABEL_17;
  if ( (int)datalist >= 1 )
  {
    v23 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v23 >= (unsigned int)datalist )
      {
        v26 = sub_B776C8(Instance);
        sub_B77668(v26, 0LL);
      }
      v24 = (EventEntity_o *)*((_QWORD *)&v22->fields.lookup + v23);
      if ( !v24 || !MasterData_WarQuestSelectionMaster )
        goto LABEL_19;
      Instance = (DataManager_o *)UserEventFortificationMaster__TryGetFortificationNameTextBySvtId(
                                    MasterData_WarQuestSelectionMaster,
                                    fortificationName,
                                    fortificationDetailName,
                                    v24->fields.id,
                                    userSvtId,
                                    0LL);
      *isFortification = (unsigned __int8)Instance & 1;
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      LODWORD(datalist) = v22->fields.datalist;
      if ( (int)++v23 >= (int)datalist )
        return;
    }
    if ( !EventEntity__IsEventPeriod(v24, 0LL, v25) )
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
  uint8_t v8; // w20
  System_String_o *v13; // x0
  bool v14; // w21
  UnityEngine_Color32_o c; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color32_o p_c; // 0:x0.8
  UnityEngine_Color32_o rgba; // 0:x0.8
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = colorCodeA;
  if ( (byte_438DE7B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_323/*"#"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438DE7B = 1;
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
  v13 = System_String__Concat_44901936((System_String_o *)StringLiteral_323/*"#"*/, colorCodeMilitsry, 0LL);
  v14 = UnityEngine_ColorUtility__TryParseHtmlString(v13, color, 0LL);
  p_c = (UnityEngine_Color32_o)&c;
  c.fields.rgba = 0;
  UnityEngine_Color32___ctor(p_c, 0, 0, 0, v8, 0LL);
  rgba = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
  v19 = UnityEngine_Color32__op_Implicit_41413804(rgba, 0LL);
  color->fields.a = v19.fields.a;
  return v14;
}