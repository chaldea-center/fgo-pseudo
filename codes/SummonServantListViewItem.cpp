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
  bool v15; // w25
  bool v16; // w28
  bool v17; // w27
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  struct System_String_o *Name; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v28; // x20

  v15 = commandCode;
  v16 = isNew;
  v17 = isRankUp;
  if ( (byte_4AB251A & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&index);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantMaster___, v18);
    sub_1BAB41C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19);
    sub_1BAB41C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v20);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v21);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4AB251A = 1;
  }
  ListViewItem___ctor_41102532((ListViewItem_o *)this, index, 0LL);
  this->fields.svtId = svtId;
  this->fields.usrSvtId = usrSvtId;
  this->fields.isNew = v16;
  this->fields.isRankUp = v17;
  this->fields.noticeNo = noticeNo;
  this->fields.commandCode = v15;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  if ( commandCode )
  {
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    if ( Instance )
    {
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   svtId,
                   (const MethodInfo_3163D90 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      if ( Instance )
      {
        Name = CommandCodeEntity__GetName((CommandCodeEntity_o *)Instance, 0LL);
        goto LABEL_13;
      }
    }
LABEL_14:
    sub_1BAB678(Instance, v24);
  }
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               svtId,
               (const MethodInfo_3163D90 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_14;
  v28 = ServantEntity__GetName((ServantEntity_o *)Instance, -1, 0, -1, 0, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  Name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46731696(v28, 0LL);
LABEL_13:
  this->fields.name = Name;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.name, (int32_t)Name, v26, v27);
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
  int32_t v3; // w3

  this->fields.name = value;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.name, (int32_t)value, (int32_t)method, v3);
}