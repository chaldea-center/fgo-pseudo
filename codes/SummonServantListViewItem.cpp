void SummonServantListViewItem___ctor(
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
  bool v15; // w25
  bool v16; // w28
  bool v17; // w27
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  struct System_String_o *Name; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v27; // x20

  v15 = commandCode;
  v16 = isNew;
  v17 = isRankUp;
  if ( (byte_4CC392D & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC392D = 1;
  }
  ListViewItem___ctor_44097096((ListViewItem_o *)this, index, 0);
  this->fields.svtId = svtId;
  this->fields.usrSvtId = usrSvtId;
  this->fields.isNew = v16;
  this->fields.isRankUp = v17;
  this->fields.noticeNo = noticeNo;
  this->fields.commandCode = v15;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  if ( commandCode )
  {
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    if ( Instance )
    {
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   svtId,
                   (const MethodInfo_3408E80 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      if ( Instance )
      {
        Name = CommandCodeEntity__GetName((CommandCodeEntity_o *)Instance, 0);
        goto LABEL_13;
      }
    }
LABEL_14:
    sub_1C71608(Instance, v19);
  }
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               svtId,
               (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_14;
  v27 = ServantEntity__GetName((ServantEntity_o *)Instance, -1, 0, -1, 0, 0);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  Name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49333796(v27, 0);
LABEL_13:
  this->fields.name = Name;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.name, (int32_t)Name, v21, v22, v23, v24, v25, v26);
}


void SummonServantListViewItem__Finalize(SummonServantListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool SummonServantListViewItem__get_IsNew(SummonServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNew;
}


bool SummonServantListViewItem__get_IsRankUp(SummonServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isRankUp;
}


bool SummonServantListViewItem__get_IsSelectItem(SummonServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.select;
}


int32_t SummonServantListViewItem__get_NoticeNo(SummonServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.noticeNo;
}


int32_t SummonServantListViewItem__get_ServantId(SummonServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


System_String_o *SummonServantListViewItem__get_ServantName(
        SummonServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.name;
}


int64_t SummonServantListViewItem__get_UserSvtId(SummonServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.usrSvtId;
}


bool SummonServantListViewItem__get_isCommandCode(SummonServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.commandCode;
}


void SummonServantListViewItem__set_IsNew(SummonServantListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isNew = value;
}


void SummonServantListViewItem__set_IsRankUp(SummonServantListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isRankUp = value;
}


void SummonServantListViewItem__set_IsSelectItem(
        SummonServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.select = value;
}


void SummonServantListViewItem__set_NoticeNo(
        SummonServantListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.noticeNo = value;
}


void SummonServantListViewItem__set_ServantId(
        SummonServantListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.svtId = value;
}


void SummonServantListViewItem__set_ServantName(
        SummonServantListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.name = value;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.name, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
}