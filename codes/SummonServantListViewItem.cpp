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
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  struct System_String_o *Name; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v26; // x20

  if ( (byte_4355EB9 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4355EB9 = 1;
  }
  ListViewItem___ctor_23967088((ListViewItem_o *)this, index, 0LL);
  this->fields.svtId = svtId;
  this->fields.usrSvtId = usrSvtId;
  this->fields.noticeNo = noticeNo;
  this->fields.isNew = isNew;
  this->fields.isRankUp = isRankUp;
  this->fields.commandCode = commandCode;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( commandCode )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    svtId,
                                    (const MethodInfo_21C0440 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      if ( Instance )
      {
        Name = CommandCodeEntity__GetName((CommandCodeEntity_o *)Instance, 0LL);
        goto LABEL_14;
      }
    }
LABEL_15:
    sub_B7076C(Instance, v18);
  }
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_15;
  v26 = ServantEntity__GetName((ServantEntity_o *)Instance, -1, 0, -1, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  Name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45218448(v26, 0LL);
LABEL_14:
  this->fields.name = Name;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.name,
    (System_Int32_array **)Name,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
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
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.name,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}