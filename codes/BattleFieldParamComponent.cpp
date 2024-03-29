void __fastcall BattleFieldParamComponent___ctor(BattleFieldParamComponent_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.WAR_BOARD_POSITION.fields.z = 3260022784LL;
  *(_OWORD *)&this->fields.RAID_POSITION.fields.y = xmmword_32007E0;
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
  const MethodInfo *v14; // x1
  BattleInfoData_o *v15; // x8
  int32_t eventId; // w21
  EventRaidMaster_o *v17; // x20
  struct BattleFieldEnvironmentData_o *v18; // x8
  struct BattleFieldEnvironmentData_o *v19; // x8
  const MethodInfo *v20; // x1

  if ( (byte_42117DF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRaidMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_42117DF = 1;
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
                  root = (UnityEngine_GameObject_o *)Data_k__BackingField->fields.quest_ent;
                  if ( !root )
                    goto LABEL_32;
                  root = (UnityEngine_GameObject_o *)QuestEntity__HasFlag((QuestEntity_o *)root, 0x2000000LL, 0LL);
                  if ( ((unsigned __int8)root & 1) == 0 )
                  {
                    root = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !root )
                      goto LABEL_32;
                    root = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)root,
                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRaidMaster___);
                    v15 = battle_ent->fields.battleInfo;
                    if ( !v15 )
                      goto LABEL_32;
                    eventId = battle_ent->fields.eventId;
                    v17 = (EventRaidMaster_o *)root;
                    root = (UnityEngine_GameObject_o *)BattleInfoData__getRaidId(v15, v14);
                    if ( !v17 )
                      goto LABEL_32;
                    root = (UnityEngine_GameObject_o *)EventRaidMaster__GetEntity(v17, eventId, (int32_t)root, 0LL);
                    if ( root )
                    {
                      v18 = this->fields.data;
                      if ( !v18 )
                        goto LABEL_32;
                      root = (UnityEngine_GameObject_o *)v18->fields._Data_k__BackingField;
                      if ( !root )
                        goto LABEL_32;
                      root = (UnityEngine_GameObject_o *)BattleData__isRaidConnection((BattleData_o *)root, 0LL);
                      if ( ((unsigned __int8)root & 1) != 0 )
                      {
                        root = this->fields.root;
                        if ( !root )
                          goto LABEL_32;
                        root = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(root, 0LL);
                        if ( !root )
                          goto LABEL_32;
                        UnityEngine_Transform__set_localPosition(
                          (UnityEngine_Transform_o *)root,
                          *(UnityEngine_Vector3_o *)&this->fields.RAID_POSITION.fields.y,
                          0LL);
                      }
                    }
                  }
                }
                v19 = this->fields.data;
                if ( v19 )
                {
                  root = (UnityEngine_GameObject_o *)v19->fields._Data_k__BackingField;
                  if ( root )
                  {
                    if ( !BattleData__IsWarBoard((BattleData_o *)root, 0LL) )
                    {
LABEL_30:
                      BattleFieldParamComponent__UpdateView(this, v20);
                      return;
                    }
                    root = this->fields.root;
                    if ( root )
                    {
                      root = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(root, 0LL);
                      if ( root )
                      {
                        UnityEngine_Transform__set_localPosition(
                          (UnityEngine_Transform_o *)root,
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
    sub_B0D97C(root);
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
  __int64 v5; // x0
  struct BattlePerformance_o *Perf_k__BackingField; // x1
  const MethodInfo *v7; // x1

  this->fields.data = data;
  sub_B0D840(&this->fields.data, data);
  if ( !data )
    sub_B0D97C(v5);
  Perf_k__BackingField = data->fields._Perf_k__BackingField;
  this->fields.perf = Perf_k__BackingField;
  sub_B0D840(&this->fields.perf, Perf_k__BackingField);
  BattleFieldParamComponent__InitUpdateView(this, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldParamComponent__SetTouch(
        BattleFieldParamComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *Component_WebViewObject; // x20
  _BOOL8 v7; // x0

  if ( (byte_42117DE & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Collider___, flg);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_42117DE = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( v7 )
  {
    if ( !Component_WebViewObject )
      sub_B0D97C(v7);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, flg, 0LL);
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
    sub_B0D97C(this);
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
    sub_B0D97C(root);
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
  BattleServantShowBuffComponent_o *v7; // x20

  if ( (byte_42117E0 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, buffData);
    byte_42117E0 = 1;
  }
  showBuffComponent = (UnityEngine_Object_o *)this->fields.showBuffComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)UnityEngine_Object__op_Equality(showBuffComponent, 0LL, 0LL);
  if ( ((unsigned __int8)ShowServantParam & 1) == 0 )
  {
    if ( !buffData
      || (v7 = this->fields.showBuffComponent, ShowServantParam = BattleBuffData__getShowServantParam(buffData, 0LL),
                                               !v7) )
    {
      sub_B0D97C(ShowServantParam);
    }
    BattleServantShowBuffComponent__setBuffList(v7, ShowServantParam, 0LL);
  }
}