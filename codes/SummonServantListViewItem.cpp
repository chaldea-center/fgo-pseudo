// local variable allocation has failed, the output may be wrong!
void __fastcall SummonServantListViewItem___ctor(
        SummonServantListViewItem_o *this,
        int32_t index,
        bool commandCode,
        int32_t svtId,
        int64_t usrSvtId,
        bool isNew,
        bool isRankUp,
        int32_t noticeNo,
        const MethodInfo *method)
{
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  CommandCodeEntity_o *Entity; // x0
  struct System_String_o *Name; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v32; // x0
  ServantEntity_o *v33; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v34; // x20

  if ( (byte_40FD4CB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v17);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v18);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_40FD4CB = 1;
  }
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.svtId = svtId;
  this->fields.usrSvtId = usrSvtId;
  this->fields.noticeNo = noticeNo;
  this->fields.isNew = isNew;
  this->fields.isRankUp = isRankUp;
  this->fields.commandCode = commandCode;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( commandCode )
  {
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    if ( MasterData_WarQuestSelectionMaster )
    {
      Entity = (CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        svtId,
                                        (const MethodInfo_266F388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      if ( Entity )
      {
        Name = CommandCodeEntity__GetName(Entity, 0LL);
        goto LABEL_14;
      }
    }
LABEL_15:
    sub_B170D4();
  }
  v32 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v32 )
    goto LABEL_15;
  v33 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v32,
                             svtId,
                             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !v33 )
    goto LABEL_15;
  v34 = ServantEntity__GetName(v33, -1, 0, -1, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  Name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(v34, 0LL);
LABEL_14:
  this->fields.name = Name;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.name,
    (System_Int32_array **)Name,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}


void __fastcall SummonServantListViewItem__Finalize(SummonServantListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


bool __fastcall SummonServantListViewItem__get_IsNew(SummonServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNew;
}


bool __fastcall SummonServantListViewItem__get_IsRankUp(SummonServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isRankUp;
}


bool __fastcall SummonServantListViewItem__get_IsSelectItem(
        SummonServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.select;
}


int32_t __fastcall SummonServantListViewItem__get_NoticeNo(SummonServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.noticeNo;
}


int32_t __fastcall SummonServantListViewItem__get_ServantId(
        SummonServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.svtId;
}


System_String_o *__fastcall SummonServantListViewItem__get_ServantName(
        SummonServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.name;
}


int64_t __fastcall SummonServantListViewItem__get_UserSvtId(
        SummonServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.usrSvtId;
}


bool __fastcall SummonServantListViewItem__get_isCommandCode(
        SummonServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commandCode;
}


void __fastcall SummonServantListViewItem__set_IsNew(
        SummonServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isNew = value;
}


void __fastcall SummonServantListViewItem__set_IsRankUp(
        SummonServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isRankUp = value;
}


void __fastcall SummonServantListViewItem__set_IsSelectItem(
        SummonServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.select = value;
}


void __fastcall SummonServantListViewItem__set_NoticeNo(
        SummonServantListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.noticeNo = value;
}


void __fastcall SummonServantListViewItem__set_ServantId(
        SummonServantListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.svtId = value;
}


void __fastcall SummonServantListViewItem__set_ServantName(
        SummonServantListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.name = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.name,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}