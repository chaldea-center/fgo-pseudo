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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x10
  DataManager_o *Instance; // x0
  System_String_o *name; // x1
  void *monitor; // x8
  __int64 v19; // x9
  int32_t v20; // w20
  int32_t v21; // w21
  EventPointGroupEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8434 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPointGroupMaster___, (_DWORD)param, (_DWORD)method, v3);
    sub_B5D5C4(&RaceResultEffectParam_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1/*""*/, v12, v13, v14);
    byte_42E8434 = 1;
  }
  entity = 0LL;
  if ( param )
  {
    v15 = *(&RaceResultEffectParam_TypeInfo->_2.bitflags2 + 1);
    if ( *(&param->klass->_2.bitflags2 + 1) >= (unsigned int)v15
      && (RaceResultEffectParam_c *)param->klass->_2.typeHierarchy[v15 - 1] == RaceResultEffectParam_TypeInfo )
    {
      monitor = param[1].monitor;
      if ( monitor )
      {
        v19 = *((_QWORD *)monitor + 3);
        if ( v19 )
        {
          if ( (int)v19 >= 3 )
          {
            v20 = *((_DWORD *)monitor + 8);
            v21 = *((_DWORD *)monitor + 12);
            Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_18;
            Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
            if ( !Instance )
              goto LABEL_18;
            Instance = (DataManager_o *)EventPointGroupMaster__TryGetEntity(
                                          (EventPointGroupMaster_o *)Instance,
                                          &entity,
                                          v20,
                                          v21,
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
              sub_B5D69C(Instance, param);
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