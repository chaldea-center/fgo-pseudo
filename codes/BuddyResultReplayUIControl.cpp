void __fastcall BuddyResultReplayUIControl___ctor(BuddyResultReplayUIControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_o *__fastcall BuddyResultReplayUIControl__GetBuddyServantCollectionEnt(
        BuddyResultReplayUIControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v9; // x0
  UserServantCollectionEntity_o *result; // x0
  UserServantCollectionEntity_o *v11; // x19
  Il2CppObject *v12; // x20

  if ( (byte_4B16C3E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserEventServantPointMaster___, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v4);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    byte_4B16C3E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    byte_4B165D1 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_24;
  result = (UserServantCollectionEntity_o *)UserEventServantPointMaster__GetBestServantPointEntity(
                                              (UserEventServantPointMaster_o *)Master_object,
                                              v9->static_fields->userIdNumber,
                                              eventId,
                                              0LL);
  if ( result )
  {
    v11 = result;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v12 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B165D1 )
    {
      sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
      byte_4B165D1 = 1;
    }
    v9 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v9 = NetworkManager_TypeInfo;
    }
    if ( v12 )
      return UserServantCollectionMaster__GetEntityDefinitely(
               (UserServantCollectionMaster_o *)v12,
               v9->static_fields->userIdNumber,
               v11->fields.maxAtk,
               0LL);
LABEL_24:
    sub_1BCB254(v9, v7);
  }
  return result;
}


void __fastcall BuddyResultReplayUIControl__OnSelectPortraitLimitCount(
        BuddyResultReplayUIControl_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  struct System_Action_int__o *selectPortraitLimitCountCallback; // x8

  selectPortraitLimitCountCallback = this->fields.selectPortraitLimitCountCallback;
  if ( selectPortraitLimitCountCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))selectPortraitLimitCountCallback->fields.m_target)(
      selectPortraitLimitCountCallback->fields.original_method_info,
      limitCount,
      *(_QWORD *)&selectPortraitLimitCountCallback->fields.extra_arg);
}


void __fastcall BuddyResultReplayUIControl__OpenReplayIntroDialog(
        BuddyResultReplayUIControl_o *this,
        System_Action_o *onCloseCallback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *introDialog; // x21
  const MethodInfo *v6; // x1
  ResultReplayIntroDialog_o *v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4B16C3D & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, onCloseCallback);
    byte_4B16C3D = 1;
  }
  introDialog = (UnityEngine_Object_o *)this->fields.introDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(introDialog, 0LL, 0LL) )
  {
    v7 = this->fields.introDialog;
    if ( !v7 || (ResultReplayIntroDialog__Init(v7, v6), (v7 = this->fields.introDialog) == 0LL) )
      sub_1BCB254(v7, v6);
    ResultReplayIntroDialog__Open(v7, onCloseCallback, v8);
  }
}


void __fastcall BuddyResultReplayUIControl__OpenSelectDialog(
        BuddyResultReplayUIControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *selectDialog; // x20
  UserServantCollectionEntity_o *buddyServantEnt; // x20
  SelectServantPortraitLimitCountDialog_o *v7; // x21
  System_Action_int__o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_4B16C3C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_int__TypeInfo, method);
    sub_1BCAFF8(&Method_BuddyResultReplayUIControl_OnSelectPortraitLimitCount__, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    byte_4B16C3C = 1;
  }
  selectDialog = (UnityEngine_Object_o *)this->fields.selectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectDialog, 0LL, 0LL) )
  {
    buddyServantEnt = this->fields.buddyServantEnt;
    if ( buddyServantEnt )
    {
      v7 = this->fields.selectDialog;
      v8 = (System_Action_int__o *)sub_1BCB244(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v8,
        (Il2CppObject *)this,
        Method_BuddyResultReplayUIControl_OnSelectPortraitLimitCount__,
        0LL);
      if ( !v7 )
        sub_1BCB254(v9, v10);
      SelectServantPortraitLimitCountDialog__Open(v7, buddyServantEnt, v8, v11);
    }
  }
}


void __fastcall BuddyResultReplayUIControl__Setup(
        BuddyResultReplayUIControl_o *this,
        int32_t eventId,
        System_Action_int__o *selectLimitCountCallback,
        const MethodInfo *method)
{
  BuddyResultReplayUIControl_o *v5; // x20
  const MethodInfo *v6; // x1
  SelectServantPortraitLimitCountDialog_o *introDialog; // x0

  v5 = this;
  this->fields.currentEventId = eventId;
  this->fields.buddyServantEnt = BuddyResultReplayUIControl__GetBuddyServantCollectionEnt(
                                   this,
                                   eventId,
                                   (const MethodInfo *)selectLimitCountCallback);
  sub_1BCAF9C(&v5->fields.buddyServantEnt);
  v5->fields.selectPortraitLimitCountCallback = selectLimitCountCallback;
  v5 = (BuddyResultReplayUIControl_o *)((char *)v5 + 64);
  sub_1BCAF9C(v5);
  introDialog = (SelectServantPortraitLimitCountDialog_o *)v5[-1].fields.introDialog;
  if ( !introDialog )
    sub_1BCB254(0LL, v6);
  SelectServantPortraitLimitCountDialog__Init(introDialog, v6);
}