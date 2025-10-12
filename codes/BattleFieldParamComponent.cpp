void BattleFieldParamComponent___ctor(BattleFieldParamComponent_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.RAID_POSITION.fields.x = xmmword_C0CC70;
  *(_QWORD *)&this->fields.WAR_BOARD_POSITION.fields.y = 3260022784LL;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleFieldParamComponent__InitUpdateView(BattleFieldParamComponent_o *this, const MethodInfo *method)
{
  __int64 root; // x0
  UnityEngine_Transform_o *v4; // x20
  struct BattleFieldEnvironmentData_o *data; // x8
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattleEntity_o *battle_ent; // x21
  struct BattleInfoData_o *battleInfo; // x9
  struct BattleRaidInfo_array *raidInfo; // x9
  BattleInfoData_o *v10; // x8
  int32_t eventId; // w21
  EventRaidMaster_o *v12; // x20
  struct BattleFieldEnvironmentData_o *v13; // x8
  struct BattleFieldEnvironmentData_o *v14; // x8
  const MethodInfo *v15; // x1

  if ( (byte_4C3ADDD & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3ADDD = 1;
  }
  if ( this->fields.data )
  {
    root = (__int64)this->fields.root;
    if ( root )
    {
      root = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)root, 0);
      v4 = (UnityEngine_Transform_o *)root;
      if ( !byte_4C313D1 )
      {
        root = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
        byte_4C313D1 = 1;
      }
      if ( v4 )
      {
        UnityEngine_Transform__set_localPosition(v4, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
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
                if ( raidInfo && raidInfo->max_length )
                {
                  root = (__int64)Data_k__BackingField->fields.quest_ent;
                  if ( !root )
                    goto LABEL_34;
                  root = QuestEntity__HasFlag((QuestEntity_o *)root, 0x2000000, 0);
                  if ( (root & 1) == 0 )
                  {
                    root = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !root )
                      goto LABEL_34;
                    root = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)root,
                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
                    v10 = battle_ent->fields.battleInfo;
                    if ( !v10 )
                      goto LABEL_34;
                    eventId = battle_ent->fields.eventId;
                    v12 = (EventRaidMaster_o *)root;
                    root = BattleInfoData__getRaidId(v10, 0);
                    if ( !v12 )
                      goto LABEL_34;
                    root = (__int64)EventRaidMaster__GetEntity(v12, eventId, root, 0);
                    if ( root )
                    {
                      v13 = this->fields.data;
                      if ( !v13 )
                        goto LABEL_34;
                      root = (__int64)v13->fields._Data_k__BackingField;
                      if ( !root )
                        goto LABEL_34;
                      root = BattleData__isRaidConnection((BattleData_o *)root, 0);
                      if ( (root & 1) != 0 )
                      {
                        root = (__int64)this->fields.root;
                        if ( !root )
                          goto LABEL_34;
                        root = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)root, 0);
                        if ( !root )
                          goto LABEL_34;
                        UnityEngine_Transform__set_localPosition(
                          (UnityEngine_Transform_o *)root,
                          this->fields.RAID_POSITION,
                          0);
                      }
                    }
                  }
                }
                v14 = this->fields.data;
                if ( v14 )
                {
                  root = (__int64)v14->fields._Data_k__BackingField;
                  if ( root )
                  {
                    if ( !BattleData__IsWarBoard((BattleData_o *)root, 0) )
                    {
LABEL_32:
                      BattleFieldParamComponent__UpdateView(this, v15);
                      return;
                    }
                    root = (__int64)this->fields.root;
                    if ( root )
                    {
                      root = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)root, 0);
                      if ( root )
                      {
                        UnityEngine_Transform__set_localPosition(
                          (UnityEngine_Transform_o *)root,
                          this->fields.WAR_BOARD_POSITION,
                          0);
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
    sub_1C32E7C(root);
  }
}


// attributes: thunk
void BattleFieldParamComponent__OnTapBuffIcon(BattleFieldParamComponent_o *this, const MethodInfo *method)
{
  BattleFieldParamComponent__ShowFieldConf(this, method);
}


void BattleFieldParamComponent__SetData(
        BattleFieldParamComponent_o *this,
        BattleFieldEnvironmentData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct BattlePerformance_o *Perf_k__BackingField; // x1
  const MethodInfo *v10; // x1

  this->fields.data = data;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.data, (int32_t)data, (int32_t)method, v3);
  if ( !data )
    sub_1C32E7C(v6);
  Perf_k__BackingField = data->fields._Perf_k__BackingField;
  this->fields.perf = Perf_k__BackingField;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.perf, (int32_t)Perf_k__BackingField, v7, v8);
  BattleFieldParamComponent__InitUpdateView(this, v10);
}


void BattleFieldParamComponent__SetTouch(BattleFieldParamComponent_o *this, bool flg, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  _BOOL8 v6; // x0

  if ( (byte_4C3ADDC & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3ADDC = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v6 )
  {
    if ( !Component_object )
      sub_1C32E7C(v6);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, flg, 0);
  }
}


void BattleFieldParamComponent__ShowFieldConf(BattleFieldParamComponent_o *this, const MethodInfo *method)
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
  this = (BattleFieldParamComponent_o *)ChangeBattlePhaseNotify__get_Phase((ChangeBattlePhaseNotify_o *)this, method);
  if ( (_DWORD)this != 1 )
    return;
  v5 = v4->fields.perf;
  if ( !v5 || (statusPerf = v5->fields.statusPerf) == 0 || (masterPerf = statusPerf->fields.masterPerf) == 0 )
LABEL_11:
    sub_1C32E7C(this);
  if ( BattlePerformanceMaster__IsCloseFieldConf(statusPerf->fields.masterPerf, 0) )
    BattlePerformanceMaster__ShowFieldConf(masterPerf, 0);
}


void BattleFieldParamComponent__UpdateView(BattleFieldParamComponent_o *this, const MethodInfo *method)
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
      UnityEngine_GameObject__SetActive(root, 1, 0);
      root = (UnityEngine_GameObject_o *)this->fields.data;
      if ( root )
      {
        BuffData = BattleFieldEnvironmentData__get_BuffData((BattleFieldEnvironmentData_o *)root, 0);
        BattleFieldParamComponent__updateBuffIcon(this, BuffData, v6);
        return;
      }
    }
LABEL_7:
    sub_1C32E7C(root);
  }
  BattleFieldParamComponent__SetTouch(this, 0, v2);
  root = this->fields.root;
  if ( !root )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(root, 0, 0);
}


void BattleFieldParamComponent__updateBuffIcon(
        BattleFieldParamComponent_o *this,
        BattleBuffData_o *buffData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *showBuffComponent; // x21
  BattleBuffData_ShowBuffData_array *ShowServantParam; // x0
  BattleServantShowBuffComponent_o *v7; // x20

  if ( (byte_4C3ADDE & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3ADDE = 1;
  }
  showBuffComponent = (UnityEngine_Object_o *)this->fields.showBuffComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)UnityEngine_Object__op_Equality(showBuffComponent, 0, 0);
  if ( ((unsigned __int8)ShowServantParam & 1) == 0 )
  {
    if ( !buffData
      || (v7 = this->fields.showBuffComponent, ShowServantParam = BattleBuffData__getShowServantParam(buffData, 0), !v7) )
    {
      sub_1C32E7C(ShowServantParam);
    }
    BattleServantShowBuffComponent__setBuffList(v7, ShowServantParam, 0);
  }
}