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
  UserEventServantPointMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  UserServantCollectionEntity_o *result; // x0
  UserServantCollectionEntity_o *v10; // x19
  UserServantCollectionMaster_o *v11; // x20

  if ( (byte_421638A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventServantPointMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    byte_421638A = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventServantPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_20;
  result = (UserServantCollectionEntity_o *)UserEventServantPointMaster__GetBestServantPointEntity(
                                              Master_WarQuestSelectionMaster,
                                              UserId,
                                              eventId,
                                              0LL);
  if ( result )
  {
    v10 = result;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v11 = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( v11 )
      return UserServantCollectionMaster__GetEntityDefinitely(v11, UserId, v10->fields.maxAtk, 0LL);
LABEL_20:
    sub_B0D97C(UserId);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BuddyResultReplayUIControl__OnSelectPortraitLimitCount(
        BuddyResultReplayUIControl_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_Action_int__o *selectPortraitLimitCountCallback; // x0

  if ( (byte_4216389 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int__Invoke__, *(_QWORD *)&limitCount);
    byte_4216389 = 1;
  }
  selectPortraitLimitCountCallback = this->fields.selectPortraitLimitCountCallback;
  if ( selectPortraitLimitCountCallback )
    System_Action_int___Invoke(
      selectPortraitLimitCountCallback,
      limitCount,
      (const MethodInfo_246D4C0 *)Method_System_Action_int__Invoke__);
}


void __fastcall BuddyResultReplayUIControl__OpenReplayIntroDialog(
        BuddyResultReplayUIControl_o *this,
        System_Action_o *onCloseCallback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *introDialog; // x21
  ResultReplayIntroDialog_o *v6; // x0

  if ( (byte_4216388 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, onCloseCallback);
    byte_4216388 = 1;
  }
  introDialog = (UnityEngine_Object_o *)this->fields.introDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(introDialog, 0LL, 0LL) )
  {
    v6 = this->fields.introDialog;
    if ( !v6 || (ResultReplayIntroDialog__Init(v6, 0LL), (v6 = this->fields.introDialog) == 0LL) )
      sub_B0D97C(v6);
    ResultReplayIntroDialog__Open(v6, onCloseCallback, 0LL);
  }
}


void __fastcall BuddyResultReplayUIControl__OpenSelectDialog(
        BuddyResultReplayUIControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *selectDialog; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  UserServantCollectionEntity_o *buddyServantEnt; // x20
  SelectServantPortraitLimitCountDialog_o *v10; // x21
  System_Action_int__o *v11; // x22
  __int64 v12; // x0

  if ( (byte_4216387 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int___ctor__, method);
    sub_B0D8A4(&System_Action_int__TypeInfo, v3);
    sub_B0D8A4(&Method_BuddyResultReplayUIControl_OnSelectPortraitLimitCount__, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4216387 = 1;
  }
  selectDialog = (UnityEngine_Object_o *)this->fields.selectDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(selectDialog, 0LL, 0LL) )
  {
    buddyServantEnt = this->fields.buddyServantEnt;
    if ( buddyServantEnt )
    {
      v10 = this->fields.selectDialog;
      v11 = (System_Action_int__o *)sub_B0D974(System_Action_int__TypeInfo, v7, v8);
      System_Action_int____ctor(
        v11,
        (Il2CppObject *)this,
        Method_BuddyResultReplayUIControl_OnSelectPortraitLimitCount__,
        (const MethodInfo_246D4AC *)Method_System_Action_int___ctor__);
      if ( !v10 )
        sub_B0D97C(v12);
      SelectServantPortraitLimitCountDialog__Open(v10, buddyServantEnt, v11, 0LL);
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
  System_Int32_array **BuddyServantCollectionEnt; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  SelectServantPortraitLimitCountDialog_o *introDialog; // x0

  v5 = this;
  this->fields.currentEventId = eventId;
  BuddyServantCollectionEnt = (System_Int32_array **)BuddyResultReplayUIControl__GetBuddyServantCollectionEnt(
                                                       this,
                                                       eventId,
                                                       (const MethodInfo *)selectLimitCountCallback);
  v5->fields.buddyServantEnt = (struct UserServantCollectionEntity_o *)BuddyServantCollectionEnt;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v5->fields.buddyServantEnt,
    BuddyServantCollectionEnt,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v5->fields.selectPortraitLimitCountCallback = selectLimitCountCallback;
  v5 = (BuddyResultReplayUIControl_o *)((char *)v5 + 56);
  sub_B0D840(
    (BattleServantConfConponent_o *)v5,
    (System_Int32_array **)selectLimitCountCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  introDialog = (SelectServantPortraitLimitCountDialog_o *)v5[-1].fields.introDialog;
  if ( !introDialog )
    sub_B0D97C(0LL);
  SelectServantPortraitLimitCountDialog__Init(introDialog, 0LL);
}