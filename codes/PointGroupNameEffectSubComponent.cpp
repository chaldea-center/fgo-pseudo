void PointGroupNameEffectSubComponent___ctor(PointGroupNameEffectSubComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void PointGroupNameEffectSubComponent__RecvParam(
        PointGroupNameEffectSubComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  DataManager_o *Instance; // x0
  System_String_o **p_name; // x8
  int *monitor; // x8
  int32_t v9; // w20
  int32_t v10; // w21
  EventPointGroupEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5971F95 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_2213A60(&RaceResultEffectParam_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971F95 = 1;
  }
  entity = 0;
  if ( param )
  {
    naturalAligment = RaceResultEffectParam_TypeInfo->_2.naturalAligment;
    if ( param->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (RaceResultEffectParam_c *)param->klass->_2.typeHierarchy[naturalAligment - 1] == RaceResultEffectParam_TypeInfo )
    {
      monitor = (int *)param[1].monitor;
      if ( monitor )
      {
        if ( monitor[6] >= 3 )
        {
          v9 = monitor[8];
          v10 = monitor[12];
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_17;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
          if ( !Instance )
            goto LABEL_17;
          Instance = (DataManager_o *)EventPointGroupMaster__TryGetEntity(
                                        (EventPointGroupMaster_o *)Instance,
                                        &entity,
                                        v9,
                                        v10,
                                        0);
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
LABEL_17:
            sub_2213CDC(Instance, param);
          }
        }
      }
    }
  }
  Instance = (DataManager_o *)this->fields.label;
  if ( !Instance )
    goto LABEL_17;
  p_name = (System_String_o **)&StringLiteral_1/*""*/;
LABEL_8:
  UILabel__set_text((UILabel_o *)Instance, *p_name, 0);
}