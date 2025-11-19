void BuddyResultReplayUIControl___ctor(BuddyResultReplayUIControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UserServantCollectionEntity_o *BuddyResultReplayUIControl__GetBuddyServantCollectionEnt(
        BuddyResultReplayUIControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v6; // x0
  UserServantCollectionEntity_o *result; // x0
  UserServantCollectionEntity_o *v8; // x19
  Il2CppObject *v9; // x20

  if ( (byte_4CB08BE & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB08BE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_24;
  result = (UserServantCollectionEntity_o *)UserEventServantPointMaster__GetBestServantPointEntity(
                                              (UserEventServantPointMaster_o *)Master_object,
                                              v6->static_fields->userIdNumber,
                                              eventId,
                                              0);
  if ( result )
  {
    v8 = result;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v9 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CB002A )
    {
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB002A = 1;
    }
    v6 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v6 = NetworkManager_TypeInfo;
    }
    if ( v9 )
      return UserServantCollectionMaster__GetEntityDefinitely(
               (UserServantCollectionMaster_o *)v9,
               v6->static_fields->userIdNumber,
               v8->fields.maxAtk,
               0);
LABEL_24:
    sub_1C6BC60(v6, v4);
  }
  return result;
}


void BuddyResultReplayUIControl__OnSelectPortraitLimitCount(
        BuddyResultReplayUIControl_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  struct System_Action_int__o *selectPortraitLimitCountCallback; // x8

  selectPortraitLimitCountCallback = this->fields.selectPortraitLimitCountCallback;
  if ( selectPortraitLimitCountCallback )
    ((void (__fastcall *)(intptr_t, int32_t, intptr_t))selectPortraitLimitCountCallback->fields.invoke_impl)(
      selectPortraitLimitCountCallback->fields.method_code,
      limitCount,
      selectPortraitLimitCountCallback->fields.method);
}


void BuddyResultReplayUIControl__OpenReplayIntroDialog(
        BuddyResultReplayUIControl_o *this,
        System_Action_o *onCloseCallback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *introDialog; // x21
  const MethodInfo *v6; // x1
  ResultReplayIntroDialog_o *v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4CB08BD & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB08BD = 1;
  }
  introDialog = (UnityEngine_Object_o *)this->fields.introDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(introDialog, 0, 0) )
  {
    v7 = this->fields.introDialog;
    if ( !v7 || (ResultReplayIntroDialog__Init(v7, v6), (v7 = this->fields.introDialog) == 0) )
      sub_1C6BC60(v7, v6);
    ResultReplayIntroDialog__Open(v7, onCloseCallback, v8);
  }
}


void BuddyResultReplayUIControl__OpenSelectDialog(BuddyResultReplayUIControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selectDialog; // x20
  UserServantCollectionEntity_o *buddyServantEnt; // x20
  SelectServantPortraitLimitCountDialog_o *v5; // x21
  System_Action_int__o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4CB08BC & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_int__TypeInfo);
    sub_1C6BA08(&Method_BuddyResultReplayUIControl_OnSelectPortraitLimitCount__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB08BC = 1;
  }
  selectDialog = (UnityEngine_Object_o *)this->fields.selectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectDialog, 0, 0) )
  {
    buddyServantEnt = this->fields.buddyServantEnt;
    if ( buddyServantEnt )
    {
      v5 = this->fields.selectDialog;
      v6 = (System_Action_int__o *)sub_1C6BC54(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v6,
        (Il2CppObject *)this,
        Method_BuddyResultReplayUIControl_OnSelectPortraitLimitCount__,
        0);
      if ( !v5 )
        sub_1C6BC60(v7, v8);
      SelectServantPortraitLimitCountDialog__Open(v5, buddyServantEnt, v6, v9);
    }
  }
}


void BuddyResultReplayUIControl__Setup(
        BuddyResultReplayUIControl_o *this,
        int32_t eventId,
        System_Action_int__o *selectLimitCountCallback,
        const MethodInfo *method)
{
  BuddyResultReplayUIControl_o *v5; // x20
  UserServantCollectionEntity_o *BuddyServantCollectionEnt; // x0
  const MethodInfo *v7; // x1
  SelectServantPortraitLimitCountDialog_o *introDialog; // x0

  v5 = this;
  this->fields.currentEventId = eventId;
  BuddyServantCollectionEnt = BuddyResultReplayUIControl__GetBuddyServantCollectionEnt(
                                this,
                                eventId,
                                (const MethodInfo *)selectLimitCountCallback);
  v5->fields.buddyServantEnt = BuddyServantCollectionEnt;
  sub_1C6B9AC(&v5->fields.buddyServantEnt, BuddyServantCollectionEnt);
  v5->fields.selectPortraitLimitCountCallback = selectLimitCountCallback;
  v5 = (BuddyResultReplayUIControl_o *)((char *)v5 + 64);
  sub_1C6B9AC(v5, selectLimitCountCallback);
  introDialog = (SelectServantPortraitLimitCountDialog_o *)v5[-1].fields.introDialog;
  if ( !introDialog )
    sub_1C6BC60(0, v7);
  SelectServantPortraitLimitCountDialog__Init(introDialog, v7);
}