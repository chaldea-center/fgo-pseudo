void __fastcall BattleFieldParamComponent___ctor(BattleFieldParamComponent_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.WAR_BOARD_POSITION.fields.z = 3260022784LL;
  *(_OWORD *)&this->fields.RAID_POSITION.fields.y = xmmword_3132AE0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldParamComponent__InitUpdateView(BattleFieldParamComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *root; // x0
  UnityEngine_Transform_o *transform; // x20
  int v6; // s0
  struct BattleFieldEnvironmentData_o *data; // x8
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattleEntity_o *battle_ent; // x21
  struct BattleInfoData_o *battleInfo; // x9
  struct BattleRaidInfo_array *raidInfo; // x9
  QuestEntity_o *quest_ent; // x0
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v17; // x1
  BattleInfoData_o *v18; // x8
  int32_t eventId; // w21
  EventRaidMaster_o *v20; // x20
  int32_t RaidId; // w0
  struct BattleFieldEnvironmentData_o *v22; // x8
  BattleData_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_Transform_o *v25; // x0
  struct BattleFieldEnvironmentData_o *v26; // x8
  BattleData_o *v27; // x0
  const MethodInfo *v28; // x1
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_Transform_o *v30; // x0

  if ( (byte_40F7309 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaidMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40F7309 = 1;
  }
  if ( this->fields.data )
  {
    root = this->fields.root;
    if ( root )
    {
      transform = UnityEngine_GameObject__get_transform(root, 0LL);
      *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Vector3__get_zero(0LL);
      if ( transform )
      {
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v6, 0LL);
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
                  quest_ent = Data_k__BackingField->fields.quest_ent;
                  if ( !quest_ent )
                    goto LABEL_32;
                  if ( !QuestEntity__HasFlag(quest_ent, 0x2000000LL, 0LL) )
                  {
                    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !Instance )
                      goto LABEL_32;
                    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)Instance,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaidMaster___);
                    v18 = battle_ent->fields.battleInfo;
                    if ( !v18 )
                      goto LABEL_32;
                    eventId = battle_ent->fields.eventId;
                    v20 = (EventRaidMaster_o *)MasterData_WarQuestSelectionMaster;
                    RaidId = BattleInfoData__getRaidId(v18, v17);
                    if ( !v20 )
                      goto LABEL_32;
                    if ( EventRaidMaster__GetEntity(v20, eventId, RaidId, 0LL) )
                    {
                      v22 = this->fields.data;
                      if ( !v22 )
                        goto LABEL_32;
                      v23 = v22->fields._Data_k__BackingField;
                      if ( !v23 )
                        goto LABEL_32;
                      if ( BattleData__isRaidConnection(v23, 0LL) )
                      {
                        v24 = this->fields.root;
                        if ( !v24 )
                          goto LABEL_32;
                        v25 = UnityEngine_GameObject__get_transform(v24, 0LL);
                        if ( !v25 )
                          goto LABEL_32;
                        UnityEngine_Transform__set_localPosition(
                          v25,
                          *(UnityEngine_Vector3_o *)&this->fields.RAID_POSITION.fields.y,
                          0LL);
                      }
                    }
                  }
                }
                v26 = this->fields.data;
                if ( v26 )
                {
                  v27 = v26->fields._Data_k__BackingField;
                  if ( v27 )
                  {
                    if ( !BattleData__IsWarBoard(v27, 0LL) )
                    {
LABEL_30:
                      BattleFieldParamComponent__UpdateView(this, v28);
                      return;
                    }
                    v29 = this->fields.root;
                    if ( v29 )
                    {
                      v30 = UnityEngine_GameObject__get_transform(v29, 0LL);
                      if ( v30 )
                      {
                        UnityEngine_Transform__set_localPosition(
                          v30,
                          *(UnityEngine_Vector3_o *)&this->fields.WAR_BOARD_POSITION.fields.y,
                          0LL);
                        goto LABEL_30;
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
LABEL_32:
    sub_B170D4();
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
  struct BattlePerformance_o *Perf_k__BackingField; // x1
  const MethodInfo *v6; // x1

  this->fields.data = data;
  sub_B16F98(&this->fields.data, data);
  if ( !data )
    sub_B170D4();
  Perf_k__BackingField = data->fields._Perf_k__BackingField;
  this->fields.perf = Perf_k__BackingField;
  sub_B16F98(&this->fields.perf, Perf_k__BackingField);
  BattleFieldParamComponent__InitUpdateView(this, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldParamComponent__SetTouch(
        BattleFieldParamComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Collider_o *Component_WebViewObject; // x20

  if ( (byte_40F7308 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, flg);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F7308 = 1;
  }
  Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
  {
    if ( !Component_WebViewObject )
      sub_B170D4();
    UnityEngine_Collider__set_enabled(Component_WebViewObject, flg, 0LL);
  }
}


void __fastcall BattleFieldParamComponent__ShowFieldConf(BattleFieldParamComponent_o *this, const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  ChangeBattlePhaseNotify_o *changePhaseNotify; // x0
  struct BattlePerformance_o *v6; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  BattlePerformanceMaster_o *masterPerf; // x19

  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_11;
  changePhaseNotify = data->fields.changePhaseNotify;
  if ( !changePhaseNotify )
    goto LABEL_11;
  if ( ChangeBattlePhaseNotify__get_Phase(changePhaseNotify, 0LL) != 1 )
    return;
  v6 = this->fields.perf;
  if ( !v6 || (statusPerf = v6->fields.statusPerf) == 0LL || (masterPerf = statusPerf->fields.masterPerf) == 0LL )
LABEL_11:
    sub_B170D4();
  if ( BattlePerformanceMaster__IsCloseFieldConf(statusPerf->fields.masterPerf, 0LL) )
    BattlePerformanceMaster__ShowFieldConf(masterPerf, 0LL);
}


void __fastcall BattleFieldParamComponent__UpdateView(BattleFieldParamComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_GameObject_o *root; // x0
  BattleFieldEnvironmentData_o *data; // x0
  BattleBuffData_o *BuffData; // x1
  const MethodInfo *v7; // x2
  UnityEngine_GameObject_o *v8; // x0

  if ( this->fields.data )
  {
    root = this->fields.root;
    if ( root )
    {
      UnityEngine_GameObject__SetActive(root, 1, 0LL);
      data = this->fields.data;
      if ( data )
      {
        BuffData = BattleFieldEnvironmentData__get_BuffData(data, 0LL);
        BattleFieldParamComponent__updateBuffIcon(this, BuffData, v7);
        return;
      }
    }
LABEL_7:
    sub_B170D4();
  }
  BattleFieldParamComponent__SetTouch(this, 0, v2);
  v8 = this->fields.root;
  if ( !v8 )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(v8, 0, 0LL);
}


void __fastcall BattleFieldParamComponent__updateBuffIcon(
        BattleFieldParamComponent_o *this,
        BattleBuffData_o *buffData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *showBuffComponent; // x21
  BattleServantShowBuffComponent_o *v6; // x20
  BattleBuffData_ShowBuffData_array *ShowServantParam; // x0

  if ( (byte_40F730A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, buffData);
    byte_40F730A = 1;
  }
  showBuffComponent = (UnityEngine_Object_o *)this->fields.showBuffComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(showBuffComponent, 0LL, 0LL) )
  {
    if ( !buffData
      || (v6 = this->fields.showBuffComponent, ShowServantParam = BattleBuffData__getShowServantParam(buffData, 0LL),
                                               !v6) )
    {
      sub_B170D4();
    }
    BattleServantShowBuffComponent__setBuffList(v6, ShowServantParam, 0LL);
  }
}