void __fastcall PointGroupNameEffectSubComponent___ctor(
        PointGroupNameEffectSubComponent_o *this,
        const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall PointGroupNameEffectSubComponent__RecvParam(
        PointGroupNameEffectSubComponent_o *this,
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
  EventPointGroupEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4AB7122 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventPointGroupMaster___, param);
    sub_1BAB41C(&RaceResultEffectParam_TypeInfo, v5);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1BAB41C(&StringLiteral_1/*""*/, v7);
    byte_4AB7122 = 1;
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
          if ( (int)v12 >= 3 )
          {
            v13 = *((_DWORD *)monitor + 8);
            v14 = *((_DWORD *)monitor + 12);
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_18;
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
            if ( !Instance )
              goto LABEL_18;
            Instance = (DataManager_o *)EventPointGroupMaster__TryGetEntity(
                                          (EventPointGroupMaster_o *)Instance,
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
              sub_1BAB678(Instance, param);
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