void __fastcall TermNameEffectSubComponent___ctor(TermNameEffectSubComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TermNameEffectSubComponent__RecvParam(
        TermNameEffectSubComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 methodPtr_low; // x10
  DataManager_o *Instance; // x0
  System_String_o **p_name; // x8
  void *monitor; // x8
  __int64 v12; // x9
  int32_t v13; // w20
  int32_t v14; // w21
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A2F303 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_EventRaceMaster___, param);
    sub_1B761C0(&RaceResultEffectParam_TypeInfo, v5);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B761C0(&StringLiteral_1/*""*/, v7);
    byte_4A2F303 = 1;
  }
  entity = 0LL;
  if ( param )
  {
    methodPtr_low = LOBYTE(RaceResultEffectParam_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(param->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && (RaceResultEffectParam_c *)param->klass->_2.typeHierarchy[methodPtr_low - 1] == RaceResultEffectParam_TypeInfo )
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
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_18;
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EventRaceMaster___);
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
                  p_name = &entity->fields.name;
                  goto LABEL_8;
                }
              }
LABEL_18:
              sub_1B7641C(Instance, param);
            }
          }
        }
      }
    }
  }
  Instance = (DataManager_o *)this->fields.label;
  if ( !Instance )
    goto LABEL_18;
  p_name = (System_String_o **)&StringLiteral_1/*""*/;
LABEL_8:
  UILabel__set_text((UILabel_o *)Instance, *p_name, 0LL);
}