void __fastcall BattleFieldParamComponent___ctor(BattleFieldParamComponent_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.RAID_POSITION.fields.x = xmmword_C063F0;
  *(_QWORD *)&this->fields.WAR_BOARD_POSITION.fields.y = 3260022784LL;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleFieldParamComponent__InitUpdateView(BattleFieldParamComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 root; // x0
  UnityEngine_Transform_o *v5; // x20
  struct BattleFieldEnvironmentData_o *data; // x8
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattleEntity_o *battle_ent; // x21
  struct BattleInfoData_o *battleInfo; // x9
  struct BattleRaidInfo_array *raidInfo; // x9
  BattleInfoData_o *v11; // x8
  int32_t eventId; // w21
  EventRaidMaster_o *v13; // x20
  struct BattleFieldEnvironmentData_o *v14; // x8
  struct BattleFieldEnvironmentData_o *v15; // x8

  if ( (byte_4C00756 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventRaidMaster___, method);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4C00756 = 1;
  }
  if ( this->fields.data )
  {
    root = (__int64)this->fields.root;
    if ( root )
    {
      root = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)root, 0LL);
      v5 = (UnityEngine_Transform_o *)root;
      if ( !byte_4BF7D91 )
      {
        root = sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, method);
        byte_4BF7D91 = 1;
      }
      if ( v5 )
      {
        UnityEngine_Transform__set_localPosition(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        data = this->fields.data;
        if ( data )
        {
          Data_k__BackingField = data->fields._Data_k__BackingField;
          if ( Data_k__BackingField )
          {
            battle_ent = Data_k__BackingField->fields.battle_ent;
            if ( battle_ent )
            {
              battleInfo = battle_ent->fields.battleInfo;
              if ( battleInfo )
              {
                raidInfo = battleInfo->fields.raidInfo;
                if ( raidInfo && *(_QWORD *)&raidInfo->max_length )
                {
                  root = (__int64)Data_k__BackingField->fields.quest_ent;
                  if ( !root )
                    goto LABEL_34;
                  root = QuestEntity__HasFlag((QuestEntity_o *)root, 0x2000000LL, 0LL);
                  if ( (root & 1) == 0 )
                  {
                    root = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !root )
                      goto LABEL_34;
                    root = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)root,
                                      (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventRaidMaster___);
                    v11 = battle_ent->fields.battleInfo;
                    if ( !v11 )
                      goto LABEL_34;
                    eventId = battle_ent->fields.eventId;
                    v13 = (EventRaidMaster_o *)root;
                    root = BattleInfoData__getRaidId(v11, 0LL);
                    if ( !v13 )
                      goto LABEL_34;
                    root = (__int64)EventRaidMaster__GetEntity(v13, eventId, root, 0LL);
                    if ( root )
                    {
                      v14 = this->fields.data;
                      if ( !v14 )
                        goto LABEL_34;
                      root = (__int64)v14->fields._Data_k__BackingField;
                      if ( !root )
                        goto LABEL_34;
                      root = BattleData__isRaidConnection((BattleData_o *)root, 0LL);
                      if ( (root & 1) != 0 )
                      {
                        root = (__int64)this->fields.root;
                        if ( !root )
                          goto LABEL_34;
                        root = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)root, 0LL);
                        if ( !root )
                          goto LABEL_34;
                        UnityEngine_Transform__set_localPosition(
                          (UnityEngine_Transform_o *)root,
                          this->fields.RAID_POSITION,
                          0LL);
                      }
                    }
                  }
                }
                v15 = this->fields.data;
                if ( v15 )
                {
                  root = (__int64)v15->fields._Data_k__BackingField;
                  if ( root )
                  {
                    if ( !BattleData__IsWarBoard((BattleData_o *)root, 0LL) )
                    {
LABEL_32:
                      BattleFieldParamComponent__UpdateView(this, method);
                      return;
                    }
                    root = (__int64)this->fields.root;
                    if ( root )
                    {
                      root = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)root, 0LL);
                      if ( root )
                      {
                        UnityEngine_Transform__set_localPosition(
                          (UnityEngine_Transform_o *)root,
                          this->fields.WAR_BOARD_POSITION,
                          0LL);
                        goto LABEL_32;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_34:
    sub_1C2E388(root, method);
  }
}


// attributes: thunk
void __fastcall BattleFieldParamComponent__OnTapBuffIcon(BattleFieldParamComponent_o *this, const MethodInfo *method)
{
  BattleFieldParamComponent__ShowFieldConf(this, method);
}


void __fastcall BattleFieldParamComponent__SetData(
        BattleFieldParamComponent_o *this,
        BattleFieldEnvironmentData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct BattlePerformance_o *Perf_k__BackingField; // x1
  const MethodInfo *v19; // x1

  this->fields.data = data;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.data, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
  if ( !data )
    sub_1C2E388(v10, v11);
  Perf_k__BackingField = data->fields._Perf_k__BackingField;
  this->fields.perf = Perf_k__BackingField;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.perf,
    (int64_t)Perf_k__BackingField,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  BattleFieldParamComponent__InitUpdateView(this, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldParamComponent__SetTouch(
        BattleFieldParamComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4C00755 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_Collider___, flg);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    byte_4C00755 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v7 )
  {
    if ( !Component_object )
      sub_1C2E388(v7, v8);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, flg, 0LL);
  }
}


void __fastcall BattleFieldParamComponent__ShowFieldConf(BattleFieldParamComponent_o *this, const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  BattleFieldParamComponent_o *v4; // x19
  struct BattlePerformance_o *v5; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  BattlePerformanceMaster_o *masterPerf; // x19

  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_11;
  v4 = this;
  this = (BattleFieldParamComponent_o *)data->fields.changePhaseNotify;
  if ( !this )
    goto LABEL_11;
  this = (BattleFieldParamComponent_o *)ChangeBattlePhaseNotify__get_Phase((ChangeBattlePhaseNotify_o *)this, 0LL);
  if ( (_DWORD)this != 1 )
    return;
  v5 = v4->fields.perf;
  if ( !v5 || (statusPerf = v5->fields.statusPerf) == 0LL || (masterPerf = statusPerf->fields.masterPerf) == 0LL )
LABEL_11:
    sub_1C2E388(this, method);
  if ( BattlePerformanceMaster__IsCloseFieldConf(statusPerf->fields.masterPerf, 0LL) )
    BattlePerformanceMaster__ShowFieldConf(masterPerf, 0LL);
}


void __fastcall BattleFieldParamComponent__UpdateView(BattleFieldParamComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_GameObject_o *root; // x0
  BattleBuffData_o *BuffData; // x1
  const MethodInfo *v6; // x2

  if ( this->fields.data )
  {
    root = this->fields.root;
    if ( root )
    {
      UnityEngine_GameObject__SetActive(root, 1, 0LL);
      root = (UnityEngine_GameObject_o *)this->fields.data;
      if ( root )
      {
        BuffData = BattleFieldEnvironmentData__get_BuffData((BattleFieldEnvironmentData_o *)root, 0LL);
        BattleFieldParamComponent__updateBuffIcon(this, BuffData, v6);
        return;
      }
    }
LABEL_7:
    sub_1C2E388(root, method);
  }
  BattleFieldParamComponent__SetTouch(this, 0, v2);
  root = this->fields.root;
  if ( !root )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(root, 0, 0LL);
}


void __fastcall BattleFieldParamComponent__updateBuffIcon(
        BattleFieldParamComponent_o *this,
        BattleBuffData_o *buffData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *showBuffComponent; // x21
  BattleBuffData_ShowBuffData_array *ShowServantParam; // x0
  __int64 v7; // x1
  BattleServantShowBuffComponent_o *v8; // x20

  if ( (byte_4C00757 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, buffData);
    byte_4C00757 = 1;
  }
  showBuffComponent = (UnityEngine_Object_o *)this->fields.showBuffComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)UnityEngine_Object__op_Equality(showBuffComponent, 0LL, 0LL);
  if ( ((unsigned __int8)ShowServantParam & 1) == 0 )
  {
    if ( !buffData
      || (v8 = this->fields.showBuffComponent, ShowServantParam = BattleBuffData__getShowServantParam(buffData, 0LL),
                                               !v8) )
    {
      sub_1C2E388(ShowServantParam, v7);
    }
    BattleServantShowBuffComponent__setBuffList(v8, ShowServantParam, 0LL);
  }
}