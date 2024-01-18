void __fastcall TermNameEffectSubComponent___ctor(TermNameEffectSubComponent_o *this, const MethodInfo *method)
{
  EffectSubComponent___ctor((EffectSubComponent_o *)this, 0LL);
}


void __fastcall TermNameEffectSubComponent__RecvParam(
        TermNameEffectSubComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x10
  DataManager_o *Instance; // x0
  System_String_o *name; // x1
  void *monitor; // x8
  __int64 v12; // x9
  int32_t v13; // w20
  int32_t v14; // w21
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4184553 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaceMaster___, param);
    sub_B2C35C(&RaceResultEffectParam_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_4184553 = 1;
  }
  entity = 0LL;
  if ( param )
  {
    v8 = *(&RaceResultEffectParam_TypeInfo->_2.bitflags2 + 1);
    if ( *(&param->klass->_2.bitflags2 + 1) >= (unsigned int)v8
      && (RaceResultEffectParam_c *)param->klass->_2.typeHierarchy[v8 - 1] == RaceResultEffectParam_TypeInfo )
    {
      monitor = param[1].monitor;
      if ( monitor )
      {
        v12 = *((_QWORD *)monitor + 3);
        if ( v12 )
        {
          if ( (int)v12 >= 2 )
          {
            v13 = *((_DWORD *)monitor + 8);
            v14 = *((_DWORD *)monitor + 10);
            Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_18;
            Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaceMaster___);
            if ( !Instance )
              goto LABEL_18;
            Instance = (DataManager_o *)EventRaceMaster__TryGetEntity(
                                          (EventRaceMaster_o *)Instance,
                                          &entity,
                                          v13,
                                          v14,
                                          0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( entity )
              {
                Instance = (DataManager_o *)this->fields.label;
                if ( Instance )
                {
                  name = entity->fields.name;
                  goto LABEL_8;
                }
              }
LABEL_18:
              sub_B2C434(Instance, param);
            }
          }
        }
      }
    }
  }
  Instance = (DataManager_o *)this->fields.label;
  if ( !Instance )
    goto LABEL_18;
  name = (System_String_o *)StringLiteral_1/*""*/;
LABEL_8:
  UILabel__set_text((UILabel_o *)Instance, name, 0LL);
}