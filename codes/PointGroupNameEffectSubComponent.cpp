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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x10
  UILabel_o *label; // x0
  System_String_o *name; // x1
  void *monitor; // x8
  __int64 v12; // x9
  int32_t v13; // w20
  int32_t v14; // w21
  WebViewManager_o *Instance; // x0
  EventPointGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventPointGroupEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F8FBC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPointGroupMaster___, param);
    sub_B16FFC(&RaceResultEffectParam_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_1/*""*/, v7);
    byte_40F8FBC = 1;
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
          if ( (int)v12 >= 3 )
          {
            v13 = *((_DWORD *)monitor + 8);
            v14 = *((_DWORD *)monitor + 12);
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_18;
            MasterData_WarQuestSelectionMaster = (EventPointGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)Instance,
                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_18;
            if ( EventPointGroupMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, v13, v14, 0LL) )
            {
              if ( entity )
              {
                label = this->fields.label;
                if ( label )
                {
                  name = entity->fields.name;
                  goto LABEL_8;
                }
              }
LABEL_18:
              sub_B170D4();
            }
          }
        }
      }
    }
  }
  label = this->fields.label;
  if ( !label )
    goto LABEL_18;
  name = (System_String_o *)StringLiteral_1/*""*/;
LABEL_8:
  UILabel__set_text(label, name, 0LL);
}