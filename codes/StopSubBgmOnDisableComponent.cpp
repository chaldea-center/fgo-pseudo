void StopSubBgmOnDisableComponent___ctor(StopSubBgmOnDisableComponent_o *this, const MethodInfo *method)
{
  this->fields.subBgmId = -1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void StopSubBgmOnDisableComponent__Awake(StopSubBgmOnDisableComponent_o *this, const MethodInfo *method)
{
  int v3; // w8
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct System_String_o *monitor; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5937C28 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_BgmMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    byte_5937C28 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    goto LABEL_12;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    this->fields.subBgmId,
                                    (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_12;
  Master_object = (Il2CppObject *)System_String__IsNullOrEmpty((System_String_o *)entity[1].monitor, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    return;
  if ( !entity )
LABEL_12:
    sub_21FFECC(Master_object, v5);
  monitor = (struct System_String_o *)entity[1].monitor;
  this->fields.subBgmName = monitor;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.subBgmName, (int32_t)monitor, v6, v7, v8, v9, v10, v11);
}


void StopSubBgmOnDisableComponent__OnDisable(StopSubBgmOnDisableComponent_o *this, const MethodInfo *method)
{
  BgmManager_c *v3; // x0
  System_String_o *subBgmName; // x19

  if ( (byte_5937C29 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_5937C29 = 1;
  }
  if ( this->fields.subBgmId < 0 || System_String__IsNullOrEmpty(this->fields.subBgmName, 0) )
  {
    v3 = BgmManager_TypeInfo;
    subBgmName = 0;
  }
  else
  {
    v3 = BgmManager_TypeInfo;
    subBgmName = this->fields.subBgmName;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  BgmManager__StopSubBgm(subBgmName, 0.0, 0);
}