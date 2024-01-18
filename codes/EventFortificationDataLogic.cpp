// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventFortificationDataLogic__CalculationGetPoint(
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v8; // x1
  int32_t lv; // w19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A3DA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418A3DA = 1;
  }
  entity = 0LL;
  if ( userServantEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_11;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !Instance )
      goto LABEL_11;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
           &entity,
           eventId,
           (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    {
      Instance = (DataManager_o *)entity;
      if ( entity )
      {
        Instance = (DataManager_o *)EventDetailEntity__GetFortificationLvPoint((EventDetailEntity_o *)entity, v8);
        if ( entity )
        {
          lv = userServantEntity->fields.lv;
          return EventDetailEntity__GetFortificationBasePoint((EventDetailEntity_o *)entity, v8) + lv * (_DWORD)Instance;
        }
      }
LABEL_11:
      sub_B2C434(Instance, v8);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  UserEventFortificationMaster_o *MasterData_WarQuestSelectionMaster; // x23
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v25; // x24
  __int64 v26; // x26
  EventEntity_o *v27; // x25
  const MethodInfo *v28; // x2
  __int64 v29; // x0

  if ( (byte_418A3DB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, fortificationName);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&StringLiteral_1/*""*/, v14);
    byte_418A3DB = 1;
  }
  *isFortification = 0;
  *fortificationName = (System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)fortificationName,
    (System_Int32_array **)StringLiteral_1/*""*/,
    (System_String_array **)fortificationDetailName,
    (System_String_array **)userSvtId,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  *fortificationDetailName = (System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)fortificationDetailName,
    (System_Int32_array **)StringLiteral_1/*""*/,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 Instance,
                                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventFortificationMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 1, 0LL)) == 0LL )
  {
LABEL_19:
    sub_B2C434(Instance, v22);
  }
  datalist = Instance->fields.datalist;
  v25 = Instance;
  if ( !datalist )
    goto LABEL_17;
  if ( (int)datalist >= 1 )
  {
    v26 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v26 >= (unsigned int)datalist )
      {
        v29 = sub_B2C460(Instance);
        sub_B2C400(v29, 0LL);
      }
      v27 = (EventEntity_o *)*((_QWORD *)&v25->fields.lookup + v26);
      if ( !v27 || !MasterData_WarQuestSelectionMaster )
        goto LABEL_19;
      Instance = (DataManager_o *)UserEventFortificationMaster__TryGetFortificationNameTextBySvtId(
                                    MasterData_WarQuestSelectionMaster,
                                    fortificationName,
                                    fortificationDetailName,
                                    v27->fields.id,
                                    userSvtId,
                                    0LL);
      *isFortification = (unsigned __int8)Instance & 1;
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      LODWORD(datalist) = v25->fields.datalist;
      if ( (int)++v26 >= (int)datalist )
        return;
    }
    if ( !EventEntity__IsEventPeriod(v27, 0LL, v28) )
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
  System_String_o *v11; // x21
  __int64 v13; // x1
  System_String_o *v14; // x0
  bool v15; // w21
  UnityEngine_Color32_o c; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color32_o p_c; // 0:x0.8
  UnityEngine_Color32_o rgba; // 0:x0.8
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = colorCodeA;
  v11 = colorCodeMilitsry;
  if ( (byte_418A3DC & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_313/*"#"*/, colorCodeMilitsry);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    byte_418A3DC = 1;
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
  v14 = System_String__Concat_44305532((System_String_o *)StringLiteral_313/*"#"*/, v11, 0LL);
  v15 = UnityEngine_ColorUtility__TryParseHtmlString(v14, color, 0LL);
  p_c = (UnityEngine_Color32_o)&c;
  c.fields.rgba = 0;
  UnityEngine_Color32___ctor(p_c, 0, 0, 0, v8, 0LL);
  rgba = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
  v20 = UnityEngine_Color32__op_Implicit_40636156(rgba, 0LL);
  color->fields.a = v20.fields.a;
  return v15;
}