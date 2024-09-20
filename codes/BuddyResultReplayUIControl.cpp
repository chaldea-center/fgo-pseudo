void __fastcall BuddyResultReplayUIControl___ctor(BuddyResultReplayUIControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UserServantCollectionEntity_o *__fastcall BuddyResultReplayUIControl__GetBuddyServantCollectionEnt(
        BuddyResultReplayUIControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v6; // x1
  UserServantCollectionEntity_o *result; // x0
  UserServantCollectionEntity_o *v8; // x19
  Il2CppObject *v9; // x20

  if ( (byte_4A5F197 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5F197 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_16;
  result = (UserServantCollectionEntity_o *)UserEventServantPointMaster__GetBestServantPointEntity(
                                              (UserEventServantPointMaster_o *)Master_object,
                                              UserId,
                                              eventId,
                                              0LL);
  if ( result )
  {
    v8 = result;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v9 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( v9 )
      return UserServantCollectionMaster__GetEntityDefinitely(
               (UserServantCollectionMaster_o *)v9,
               UserId,
               v8->fields.maxAtk,
               0LL);
LABEL_16:
    sub_1B8880C(UserId, v6);
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

  if ( (byte_4A5F196 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F196 = 1;
  }
  introDialog = (UnityEngine_Object_o *)this->fields.introDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(introDialog, 0LL, 0LL) )
  {
    v7 = this->fields.introDialog;
    if ( !v7 || (ResultReplayIntroDialog__Init(v7, v6), (v7 = this->fields.introDialog) == 0LL) )
      sub_1B8880C(v7, v6);
    ResultReplayIntroDialog__Open(v7, onCloseCallback, v8);
  }
}


void __fastcall BuddyResultReplayUIControl__OpenSelectDialog(
        BuddyResultReplayUIControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectDialog; // x20
  UserServantCollectionEntity_o *buddyServantEnt; // x20
  SelectServantPortraitLimitCountDialog_o *v5; // x21
  System_Action_int__o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4A5F195 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&Method_BuddyResultReplayUIControl_OnSelectPortraitLimitCount__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F195 = 1;
  }
  selectDialog = (UnityEngine_Object_o *)this->fields.selectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectDialog, 0LL, 0LL) )
  {
    buddyServantEnt = this->fields.buddyServantEnt;
    if ( buddyServantEnt )
    {
      v5 = this->fields.selectDialog;
      v6 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v6,
        (Il2CppObject *)this,
        Method_BuddyResultReplayUIControl_OnSelectPortraitLimitCount__,
        0LL);
      if ( !v5 )
        sub_1B8880C(v7, v8);
      SelectServantPortraitLimitCountDialog__Open(v5, buddyServantEnt, v6, v9);
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
  UserServantCollectionEntity_o *BuddyServantCollectionEnt; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x1
  SelectServantPortraitLimitCountDialog_o *introDialog; // x0

  v5 = this;
  this->fields.currentEventId = eventId;
  BuddyServantCollectionEnt = BuddyResultReplayUIControl__GetBuddyServantCollectionEnt(
                                this,
                                eventId,
                                (const MethodInfo *)selectLimitCountCallback);
  v5->fields.buddyServantEnt = BuddyServantCollectionEnt;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v5->fields.buddyServantEnt,
    (int32_t)BuddyServantCollectionEnt,
    v7,
    v8);
  v5->fields.selectPortraitLimitCountCallback = selectLimitCountCallback;
  v5 = (BuddyResultReplayUIControl_o *)((char *)v5 + 64);
  sub_1B88554((ServantStatusBattleListViewItem_o *)v5, (int32_t)selectLimitCountCallback, v9, v10);
  introDialog = (SelectServantPortraitLimitCountDialog_o *)v5[-1].fields.introDialog;
  if ( !introDialog )
    sub_1B8880C(0LL, v11);
  SelectServantPortraitLimitCountDialog__Init(introDialog, v11);
}