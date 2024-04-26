void __fastcall PointGroupNameEffectSubComponent___ctor(
        PointGroupNameEffectSubComponent_o *this,
        const MethodInfo *method)
{
  EffectSubComponent___ctor((EffectSubComponent_o *)this, 0LL);
}


void __fastcall PointGroupNameEffectSubComponent__RecvParam(
        PointGroupNameEffectSubComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  __int64 v5; // x10
  DataManager_o *Instance; // x0
  System_String_o *name; // x1
  void *monitor; // x8
  __int64 v9; // x9
  int32_t v10; // w20
  int32_t v11; // w21
  EventPointGroupEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4351BF9 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_B70694(&RaceResultEffectParam_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4351BF9 = 1;
  }
  entity = 0LL;
  if ( param )
  {
    v5 = *(&RaceResultEffectParam_TypeInfo->_2.bitflags2 + 1);
    if ( *(&param->klass->_2.bitflags2 + 1) >= (unsigned int)v5
      && (RaceResultEffectParam_c *)param->klass->_2.typeHierarchy[v5 - 1] == RaceResultEffectParam_TypeInfo )
    {
      monitor = param[1].monitor;
      if ( monitor )
      {
        v9 = *((_QWORD *)monitor + 3);
        if ( v9 )
        {
          if ( (int)v9 >= 3 )
          {
            v10 = *((_DWORD *)monitor + 8);
            v11 = *((_DWORD *)monitor + 12);
            Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_18;
            Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
            if ( !Instance )
              goto LABEL_18;
            Instance = (DataManager_o *)EventPointGroupMaster__TryGetEntity(
                                          (EventPointGroupMaster_o *)Instance,
                                          &entity,
                                          v10,
                                          v11,
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
              sub_B7076C(Instance, param);
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