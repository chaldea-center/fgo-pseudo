int32_t __fastcall EventFortificationDataLogic__CalculationGetPoint(
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v13; // x1
  int32_t lv; // w19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB21C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42EB21C = 1;
  }
  entity = 0LL;
  if ( userServantEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_11;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !Instance )
      goto LABEL_11;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
           &entity,
           eventId,
           (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    {
      Instance = (DataManager_o *)entity;
      if ( entity )
      {
        Instance = (DataManager_o *)EventDetailEntity__GetFortificationLvPoint((EventDetailEntity_o *)entity, v13);
        if ( entity )
        {
          lv = userServantEntity->fields.lv;
          return EventDetailEntity__GetFortificationBasePoint((EventDetailEntity_o *)entity, v13)
               + lv * (_DWORD)Instance;
        }
      }
LABEL_11:
      sub_B5D69C(Instance, v13);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  UserEventFortificationMaster_o *MasterData_WarQuestSelectionMaster; // x23
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v31; // x24
  __int64 v32; // x26
  EventEntity_o *v33; // x25
  const MethodInfo *v34; // x2
  __int64 v35; // x0

  if ( (byte_42EB21D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_EventMaster___,
      (_DWORD)fortificationName,
      (_DWORD)fortificationDetailName,
      userSvtId);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_1/*""*/, v18, v19, v20);
    byte_42EB21D = 1;
  }
  *isFortification = 0;
  *fortificationName = (System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)fortificationName,
    (System_Int32_array **)StringLiteral_1/*""*/,
    (System_String_array **)fortificationDetailName,
    (System_String_array **)userSvtId,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  *fortificationDetailName = (System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)fortificationDetailName,
    (System_Int32_array **)StringLiteral_1/*""*/,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 Instance,
                                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventFortificationMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 1, 0LL)) == 0LL )
  {
LABEL_19:
    sub_B5D69C(Instance, v28);
  }
  datalist = Instance->fields.datalist;
  v31 = Instance;
  if ( !datalist )
    goto LABEL_17;
  if ( (int)datalist >= 1 )
  {
    v32 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v32 >= (unsigned int)datalist )
      {
        v35 = sub_B5D6C8(Instance);
        sub_B5D668(v35, 0LL);
      }
      v33 = (EventEntity_o *)*((_QWORD *)&v31->fields.lookup + v32);
      if ( !v33 || !MasterData_WarQuestSelectionMaster )
        goto LABEL_19;
      Instance = (DataManager_o *)UserEventFortificationMaster__TryGetFortificationNameTextBySvtId(
                                    MasterData_WarQuestSelectionMaster,
                                    fortificationName,
                                    fortificationDetailName,
                                    v33->fields.id,
                                    userSvtId,
                                    0LL);
      *isFortification = (unsigned __int8)Instance & 1;
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      LODWORD(datalist) = v31->fields.datalist;
      if ( (int)++v32 >= (int)datalist )
        return;
    }
    if ( !EventEntity__IsEventPeriod(v33, 0LL, v34) )
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_String_o *v16; // x0
  bool v17; // w21
  UnityEngine_Color32_o c; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color32_o p_c; // 0:x0.8
  UnityEngine_Color32_o rgba; // 0:x0.8
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = colorCodeA;
  v11 = colorCodeMilitsry;
  if ( (byte_42EB21E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_319/*"#"*/, (_DWORD)colorCodeMilitsry, (_DWORD)colorCodeInternal, colorCodeFarmming);
    sub_B5D5C4(&StringLiteral_1/*""*/, v13, v14, v15);
    byte_42EB21E = 1;
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
  v16 = System_String__Concat_44577788((System_String_o *)StringLiteral_319/*"#"*/, v11, 0LL);
  v17 = UnityEngine_ColorUtility__TryParseHtmlString(v16, color, 0LL);
  p_c = (UnityEngine_Color32_o)&c;
  c.fields.rgba = 0;
  UnityEngine_Color32___ctor(p_c, 0, 0, 0, v8, 0LL);
  rgba = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
  v22 = UnityEngine_Color32__op_Implicit_41570788(rgba, 0LL);
  color->fields.a = v22.fields.a;
  return v17;
}