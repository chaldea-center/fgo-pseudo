// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventFortificationDataLogic__CalculationGetPoint(
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v9; // x1
  int32_t FortificationLvPoint; // w0
  const MethodInfo *v11; // x1
  int32_t lv; // w19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FC6A3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FC6A3 = 1;
  }
  entity = 0LL;
  if ( userServantEntity )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_11;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_11;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           MasterData_WarQuestSelectionMaster,
           &entity,
           eventId,
           (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    {
      if ( entity )
      {
        FortificationLvPoint = EventDetailEntity__GetFortificationLvPoint((EventDetailEntity_o *)entity, v9);
        if ( entity )
        {
          lv = userServantEntity->fields.lv;
          return EventDetailEntity__GetFortificationBasePoint((EventDetailEntity_o *)entity, v11)
               + lv * FortificationLvPoint;
        }
      }
LABEL_11:
      sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  UserEventFortificationMaster_o *MasterData_WarQuestSelectionMaster; // x23
  WebViewManager_o *v23; // x0
  EventMaster_o *v24; // x0
  EventEntity_array *EnableEntityList; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  __int64 v28; // x8
  EventEntity_array *v29; // x24
  __int64 v30; // x26
  EventEntity_o *v31; // x25

  if ( (byte_40FC6A4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, fortificationName);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&StringLiteral_1/*""*/, v14);
    byte_40FC6A4 = 1;
  }
  *isFortification = 0;
  *fortificationName = (System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)fortificationName,
    (System_Int32_array **)StringLiteral_1/*""*/,
    (System_String_array **)fortificationDetailName,
    (System_String_array **)userSvtId,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  *fortificationDetailName = (System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)fortificationDetailName,
    (System_Int32_array **)StringLiteral_1/*""*/,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)Instance,
                                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___),
        (v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v24 = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)v23,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (EnableEntityList = EventMaster__GetEnableEntityList(v24, 12, 1, 0LL)) == 0LL )
  {
LABEL_19:
    sub_B170D4();
  }
  v28 = *(_QWORD *)&EnableEntityList->max_length;
  v29 = EnableEntityList;
  if ( !v28 )
    goto LABEL_17;
  if ( (int)v28 >= 1 )
  {
    v30 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v30 >= (unsigned int)v28 )
      {
        sub_B17100(EnableEntityList, v26, v27);
        sub_B170A0();
      }
      v31 = v29->m_Items[v30];
      if ( !v31 || !MasterData_WarQuestSelectionMaster )
        goto LABEL_19;
      EnableEntityList = (EventEntity_array *)UserEventFortificationMaster__TryGetFortificationNameTextBySvtId(
                                                MasterData_WarQuestSelectionMaster,
                                                fortificationName,
                                                fortificationDetailName,
                                                v31->fields.id,
                                                userSvtId,
                                                0LL);
      *isFortification = (unsigned __int8)EnableEntityList & 1;
      if ( ((unsigned __int8)EnableEntityList & 1) != 0 )
        break;
      LODWORD(v28) = v29->max_length;
      if ( (int)++v30 >= (int)v28 )
        return;
    }
    if ( !EventEntity__IsEventPeriod(v31, 0LL, v27) )
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
  if ( (byte_40FC6A5 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_313/*"#"*/, colorCodeMilitsry);
    sub_B16FFC(&StringLiteral_1/*""*/, v13);
    byte_40FC6A5 = 1;
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
  v14 = System_String__Concat_43743732((System_String_o *)StringLiteral_313/*"#"*/, v11, 0LL);
  v15 = UnityEngine_ColorUtility__TryParseHtmlString(v14, color, 0LL);
  p_c = (UnityEngine_Color32_o)&c;
  c.fields.rgba = 0;
  UnityEngine_Color32___ctor(p_c, 0, 0, 0, v8, 0LL);
  rgba = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
  v20 = UnityEngine_Color32__op_Implicit_40668984(rgba, 0LL);
  color->fields.a = v20.fields.a;
  return v15;
}