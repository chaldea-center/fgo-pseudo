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
  bool v16; // w27
  bool v17; // w28
  const MethodInfo_47A29F8 *v18; // x0
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  struct System_String_o *Name; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  __int64 v29; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v30; // x20

  v15 = commandCode;
  v16 = isNew;
  v17 = isRankUp;
  if ( (byte_596CAC3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596CAC3 = 1;
  }
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  v18 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.svtId = svtId;
  this->fields.usrSvtId = usrSvtId;
  this->fields.isNew = v16;
  this->fields.isRankUp = v17;
  this->fields.noticeNo = noticeNo;
  this->fields.commandCode = v15;
  Instance = SingletonMonoBehaviour_object___get_Instance(v18);
  if ( commandCode )
  {
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( Instance )
      {
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     svtId,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( Instance )
        {
          Name = CommandCodeEntity__GetName((CommandCodeEntity_o *)Instance, 0);
          goto LABEL_14;
        }
      }
    }
LABEL_15:
    sub_2213CDC(Instance, v20);
  }
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               svtId,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_15;
  v30 = ServantEntity__GetName((ServantEntity_o *)Instance, -1, 0, -1, 0, 0);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v28, v29);
  Name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(v30, 0);
LABEL_14:
  this->fields.name = Name;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.name, (int32_t)Name, v22, v23, v24, v25, v26, v27);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.name = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.name,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}