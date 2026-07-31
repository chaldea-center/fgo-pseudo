void BuddyResultReplayUIControl___ctor(BuddyResultReplayUIControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_o *BuddyResultReplayUIControl__GetBuddyServantCollectionEnt(
        BuddyResultReplayUIControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v7; // x0
  UserServantCollectionEntity_o *result; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  UserServantCollectionEntity_o *v11; // x19
  __int64 v12; // x2
  Il2CppObject *v13; // x20

  if ( (byte_59328FA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_59328FA = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&eventId, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
    v7 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_24;
  result = (UserServantCollectionEntity_o *)UserEventServantPointMaster__GetBestServantPointEntity(
                                              (UserEventServantPointMaster_o *)Master_object,
                                              v7->static_fields->userIdNumber,
                                              eventId,
                                              0);
  if ( result )
  {
    v11 = result;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v10);
    v13 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v12);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    v7 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v12);
      v7 = NetworkManager_TypeInfo;
    }
    if ( v13 )
      return UserServantCollectionMaster__GetEntityDefinitely(
               (UserServantCollectionMaster_o *)v13,
               v7->static_fields->userIdNumber,
               v11->fields.maxAtk,
               0);
LABEL_24:
    sub_21FFECC(v7, v4);
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
  __int64 v6; // x1
  ResultReplayIntroDialog_o *v7; // x0

  if ( (byte_59328F9 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59328F9 = 1;
  }
  introDialog = (UnityEngine_Object_o *)this->fields.introDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, onCloseCallback, method);
  if ( UnityEngine_Object__op_Inequality(introDialog, 0, 0) )
  {
    v7 = this->fields.introDialog;
    if ( !v7 || (ResultReplayIntroDialog__Init(v7, 0), (v7 = this->fields.introDialog) == 0) )
      sub_21FFECC(v7, v6);
    ResultReplayIntroDialog__Open(v7, onCloseCallback, 0);
  }
}


void BuddyResultReplayUIControl__OpenSelectDialog(BuddyResultReplayUIControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *selectDialog; // x20
  UserServantCollectionEntity_o *buddyServantEnt; // x20
  SelectServantPortraitLimitCountDialog_o *v6; // x21
  System_Action_int__o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_59328F8 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_int__TypeInfo);
    sub_21FFC50(&Method_BuddyResultReplayUIControl_OnSelectPortraitLimitCount__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59328F8 = 1;
  }
  selectDialog = (UnityEngine_Object_o *)this->fields.selectDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(selectDialog, 0, 0) )
  {
    buddyServantEnt = this->fields.buddyServantEnt;
    if ( buddyServantEnt )
    {
      v6 = this->fields.selectDialog;
      v7 = (System_Action_int__o *)sub_21FFEBC(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v7,
        (Il2CppObject *)this,
        Method_BuddyResultReplayUIControl_OnSelectPortraitLimitCount__,
        0);
      if ( !v6 )
        sub_21FFECC(v8, v9);
      SelectServantPortraitLimitCountDialog__Open(v6, buddyServantEnt, v7, 0);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  SelectServantPortraitLimitCountDialog_o *introDialog; // x0

  v5 = this;
  this->fields.currentEventId = eventId;
  BuddyServantCollectionEnt = BuddyResultReplayUIControl__GetBuddyServantCollectionEnt(
                                this,
                                eventId,
                                (const MethodInfo *)selectLimitCountCallback);
  v5->fields.buddyServantEnt = BuddyServantCollectionEnt;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v5->fields.buddyServantEnt,
    (int32_t)BuddyServantCollectionEnt,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v5->fields.selectPortraitLimitCountCallback = selectLimitCountCallback;
  v5 = (BuddyResultReplayUIControl_o *)((char *)v5 + 64);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v5, (int32_t)selectLimitCountCallback, v13, v14, v15, v16, v17, v18);
  introDialog = (SelectServantPortraitLimitCountDialog_o *)v5[-1].fields.introDialog;
  if ( !introDialog )
    sub_21FFECC(0, v19);
  SelectServantPortraitLimitCountDialog__Init(introDialog, 0);
}