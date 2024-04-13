void __fastcall BuddyResultReplayUIControl___ctor(BuddyResultReplayUIControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UserServantCollectionEntity_o *__fastcall BuddyResultReplayUIControl__GetBuddyServantCollectionEnt(
        BuddyResultReplayUIControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UserEventServantPointMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  __int64 v16; // x1
  UserServantCollectionEntity_o *result; // x0
  UserServantCollectionEntity_o *v18; // x19
  UserServantCollectionMaster_o *v19; // x20

  if ( (byte_42EA5D4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventServantPointMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    byte_42EA5D4 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventServantPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
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
    v18 = result;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v19 = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( v19 )
      return UserServantCollectionMaster__GetEntityDefinitely(v19, UserId, v18->fields.maxAtk, 0LL);
LABEL_20:
    sub_B5D69C(UserId, v16);
  }
  return result;
}


void __fastcall BuddyResultReplayUIControl__OnSelectPortraitLimitCount(
        BuddyResultReplayUIControl_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Action_int__o *selectPortraitLimitCountCallback; // x0

  if ( (byte_42EA5D3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int__Invoke__, limitCount, (_DWORD)method, v3);
    byte_42EA5D3 = 1;
  }
  selectPortraitLimitCountCallback = this->fields.selectPortraitLimitCountCallback;
  if ( selectPortraitLimitCountCallback )
    System_Action_int___Invoke(
      selectPortraitLimitCountCallback,
      limitCount,
      (const MethodInfo_2589DA4 *)Method_System_Action_int__Invoke__);
}


void __fastcall BuddyResultReplayUIControl__OpenReplayIntroDialog(
        BuddyResultReplayUIControl_o *this,
        System_Action_o *onCloseCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *introDialog; // x21
  __int64 v7; // x1
  ResultReplayIntroDialog_o *v8; // x0

  if ( (byte_42EA5D2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)onCloseCallback, (_DWORD)method, v3);
    byte_42EA5D2 = 1;
  }
  introDialog = (UnityEngine_Object_o *)this->fields.introDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(introDialog, 0LL, 0LL) )
  {
    v8 = this->fields.introDialog;
    if ( !v8 || (ResultReplayIntroDialog__Init(v8, 0LL), (v8 = this->fields.introDialog) == 0LL) )
      sub_B5D69C(v8, v7);
    ResultReplayIntroDialog__Open(v8, onCloseCallback, 0LL);
  }
}


void __fastcall BuddyResultReplayUIControl__OpenSelectDialog(
        BuddyResultReplayUIControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Object_o *selectDialog; // x20
  UserServantCollectionEntity_o *buddyServantEnt; // x20
  SelectServantPortraitLimitCountDialog_o *v16; // x21
  System_Action_int__o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42EA5D1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BuddyResultReplayUIControl_OnSelectPortraitLimitCount__, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42EA5D1 = 1;
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
      v16 = this->fields.selectDialog;
      v17 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v17,
        (Il2CppObject *)this,
        Method_BuddyResultReplayUIControl_OnSelectPortraitLimitCount__,
        (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
      if ( !v16 )
        sub_B5D69C(v18, v19);
      SelectServantPortraitLimitCountDialog__Open(v16, buddyServantEnt, v17, 0LL);
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
  __int64 v19; // x1
  SelectServantPortraitLimitCountDialog_o *introDialog; // x0

  v5 = this;
  this->fields.currentEventId = eventId;
  BuddyServantCollectionEnt = (System_Int32_array **)BuddyResultReplayUIControl__GetBuddyServantCollectionEnt(
                                                       this,
                                                       eventId,
                                                       (const MethodInfo *)selectLimitCountCallback);
  v5->fields.buddyServantEnt = (struct UserServantCollectionEntity_o *)BuddyServantCollectionEnt;
  sub_B5D560(
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
  sub_B5D560(
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
    sub_B5D69C(0LL, v19);
  SelectServantPortraitLimitCountDialog__Init(introDialog, 0LL);
}