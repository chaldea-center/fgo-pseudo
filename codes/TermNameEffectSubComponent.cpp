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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 methodPtr_low; // x10
  DataManager_o *Instance; // x0
  System_String_o **p_name; // x8
  void *monitor; // x8
  __int64 v15; // x9
  int32_t v16; // w20
  int32_t v17; // w21
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B17602 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaceMaster___, param, method);
    sub_1BCA7E0(&RaceResultEffectParam_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B17602 = 1;
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
        v15 = *((_QWORD *)monitor + 3);
        if ( v15 )
        {
          if ( (int)v15 >= 2 )
          {
            v16 = *((_DWORD *)monitor + 8);
            v17 = *((_DWORD *)monitor + 10);
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_18;
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaceMaster___);
            if ( !Instance )
              goto LABEL_18;
            Instance = (DataManager_o *)EventRaceMaster__TryGetEntity(
                                          (EventRaceMaster_o *)Instance,
                                          &entity,
                                          v16,
                                          v17,
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
              sub_1BCAA3C(Instance, param);
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