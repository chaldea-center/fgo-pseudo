void __fastcall WarBoardItemData___ctor(
        WarBoardItemData_o *this,
        WarBoardStageLayoutEntity_o *layout,
        WarBoardUserGetItemData_o *getItemData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  struct System_Int32_array *Individuality; // x0
  struct WarBoardItemEntity_o *Entity; // x0

  if ( (byte_418407D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_WarBoardItemMaster___, layout);
    sub_B2C35C(&Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int__GetEntity__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_418407D = 1;
  }
  *(_QWORD *)&this->fields.forceId = -1LL;
  *(_QWORD *)&this->fields.pieceIndex = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.serverData = getItemData;
  sub_B2C2F8(&this->fields.serverData, getItemData);
  if ( !layout
    || (this->fields._squareIndex_k__BackingField = layout->fields.squareIndex,
        this->fields.itemId = layout->fields.effectId,
        Individuality = WarBoardStageLayoutEntity__GetIndividuality(layout, 0LL),
        this->fields._individuality_k__BackingField = Individuality,
        sub_B2C2F8(&this->fields._individuality_k__BackingField, Individuality),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarBoardItemMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v10);
  }
  Entity = (struct WarBoardItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                            this->fields.itemId,
                                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int__GetEntity__);
  this->fields.itemEntity = Entity;
  sub_B2C2F8(&this->fields.itemEntity, Entity);
  this->fields._isUse_k__BackingField = 0;
  *(_QWORD *)&this->fields.forceId = -1LL;
  this->fields.pieceIndex = -1;
  if ( getItemData )
  {
    this->fields._isUse_k__BackingField = getItemData->fields.isUse;
    this->fields.forceId = getItemData->fields.forceId;
    this->fields.groupId = getItemData->fields.groupId;
    this->fields.pieceIndex = getItemData->fields.pieceIndex;
  }
}


bool __fastcall WarBoardItemData__CheckEnableGet(
        WarBoardItemData_o *this,
        WarBoardPieceData_o *piece,
        const MethodInfo *method)
{
  if ( !piece )
    sub_B2C434(this, 0LL);
  return !WarBoardPieceData__get_isMaster(piece, 0LL);
}


bool __fastcall WarBoardItemData__CheckImmediately(WarBoardItemData_o *this, const MethodInfo *method)
{
  return 1;
}


bool __fastcall WarBoardItemData__Get(
        WarBoardItemData_o *this,
        WarBoardPieceData_o *piece,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        bool isInsertTask,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x4

  if ( !piece )
    sub_B2C434(this, 0LL);
  if ( WarBoardPieceData__get_isMaster(piece, 0LL) )
    return 0;
  this->fields.forceId = piece->fields._forceId_k__BackingField;
  this->fields.groupId = piece->fields._groupId_k__BackingField;
  this->fields.pieceIndex = piece->fields._index_k__BackingField;
  WarBoardItemData__Use(this, piece, taskList, 0, v8);
  return 1;
}


System_Int32_array *__fastcall WarBoardItemData__GetIndividuality(
        WarBoardItemData_o *this,
        IWarBoardObjectData_IndivGetArgs_o *args,
        const MethodInfo *method)
{
  return this->fields._individuality_k__BackingField;
}


WarBoardItemEntity_o *__fastcall WarBoardItemData__GetItemEntity(WarBoardItemData_o *this, const MethodInfo *method)
{
  return this->fields.itemEntity;
}


void __fastcall WarBoardItemData__ResetItem(WarBoardItemData_o *this, const MethodInfo *method)
{
  WarBoardItemData_SaveData_o *localSaveData; // x0

  this->fields._isUse_k__BackingField = 0;
  localSaveData = this->fields.localSaveData;
  *(_QWORD *)&this->fields.forceId = -1LL;
  this->fields.pieceIndex = -1;
  if ( !localSaveData
    || (WarBoardItemData_SaveData__Save(localSaveData, 0LL),
        (localSaveData = (WarBoardItemData_SaveData_o *)this->fields.component) == 0LL) )
  {
    sub_B2C434(localSaveData, method);
  }
  WarBoardItemComponent__Reset((WarBoardItemComponent_o *)localSaveData, method);
}


void __fastcall WarBoardItemData__SetComponent(
        WarBoardItemData_o *this,
        WarBoardItemComponent_o *component,
        const MethodInfo *method)
{
  this->fields.component = component;
  sub_B2C2F8(&this->fields.component, component);
}


void __fastcall WarBoardItemData__SetItemEnable(WarBoardItemData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardItemComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_B2C434(0LL, enable);
  WarBoardItemComponent__SetColliderEnable(component, enable, method);
}


void __fastcall WarBoardItemData__SetTouchEnable(WarBoardItemData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardItemComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_B2C434(0LL, enable);
  WarBoardItemComponent__SetTouchEnable(component, enable, method);
}


System_String_o *__fastcall WarBoardItemData__ToJson(WarBoardItemData_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *v2; // x19
  __int64 v3; // x1
  struct WarBoardUserGetItemData_o *serverData; // x8
  struct WarBoardUserGetItemData_o **p_serverData; // x20
  WarBoardUserGetItemData_o *v6; // x21
  struct WarBoardUserGetItemData_o *v7; // x8
  struct WarBoardUserGetItemData_o *v8; // x8
  struct WarBoardUserGetItemData_o *v9; // x8
  Il2CppObject *v10; // x19

  v2 = this;
  if ( (byte_4184084 & 1) == 0 )
  {
    sub_B2C35C(&JsonManager_TypeInfo, method);
    this = (WarBoardItemData_o *)sub_B2C35C(&WarBoardUserGetItemData_TypeInfo, v3);
    byte_4184084 = 1;
  }
  p_serverData = &v2->fields.serverData;
  serverData = v2->fields.serverData;
  if ( !serverData )
  {
    v6 = (WarBoardUserGetItemData_o *)sub_B2C42C(WarBoardUserGetItemData_TypeInfo);
    WarBoardUserGetItemData___ctor(v6, 0LL);
    *p_serverData = v6;
    sub_B2C2F8(&v2->fields.serverData, v6);
    if ( !*p_serverData )
      goto LABEL_13;
    (*p_serverData)->fields.squareIndex = v2->fields._squareIndex_k__BackingField;
    serverData = v2->fields.serverData;
    if ( !serverData )
      goto LABEL_13;
  }
  serverData->fields.forceId = v2->fields.forceId;
  v7 = v2->fields.serverData;
  if ( !v7
    || (v7->fields.groupId = v2->fields.groupId, (v8 = v2->fields.serverData) == 0LL)
    || (v8->fields.pieceIndex = v2->fields.pieceIndex, (v9 = v2->fields.serverData) == 0LL) )
  {
LABEL_13:
    sub_B2C434(this, method);
  }
  v9->fields.isUse = v2->fields._isUse_k__BackingField;
  v10 = (Il2CppObject *)v2->fields.serverData;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson(v10, 0, 0, 0LL);
}


void __fastcall WarBoardItemData__UpdateFromServerData(
        WarBoardItemData_o *this,
        WarBoardDataEntity_o *warBoardDataEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *getItemInfo; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x21
  WarBoardData_SquareRangeSearch_o *v10; // x0
  struct WarBoardUserGetItemData_o *serverData; // x8

  if ( (byte_4184083 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___, warBoardDataEnt);
    sub_B2C35C(&Method_System_Func_WarBoardUserGetItemData__bool___ctor__, v5);
    sub_B2C35C(&System_Func_WarBoardUserGetItemData__bool__TypeInfo, v6);
    sub_B2C35C(&Method_WarBoardItemData__UpdateFromServerData_b__60_0__, v7);
    byte_4184083 = 1;
  }
  if ( warBoardDataEnt )
  {
    getItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEnt->fields.getItemInfo;
    v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v9,
      (Il2CppObject *)this,
      Method_WarBoardItemData__UpdateFromServerData_b__60_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_WarBoardUserGetItemData__bool___ctor__);
    v10 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
            getItemInfo,
            (System_Func_TSource__bool__o *)v9,
            (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
    this->fields.serverData = (struct WarBoardUserGetItemData_o *)v10;
    sub_B2C2F8(&this->fields.serverData, v10);
    serverData = this->fields.serverData;
    if ( serverData )
    {
      this->fields.forceId = serverData->fields.forceId;
      this->fields.groupId = serverData->fields.groupId;
      this->fields.pieceIndex = serverData->fields.pieceIndex;
      this->fields._isUse_k__BackingField = serverData->fields.isUse;
    }
  }
}


void __fastcall WarBoardItemData__Use(
        WarBoardItemData_o *this,
        WarBoardPieceData_o *piece,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        bool isInsertTask,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  WarBoardItemData___c__DisplayClass54_0_o *v17; // x21
  __int64 isMaster; // x0
  __int64 v19; // x1
  WarBoardItemData___c__DisplayClass54_0_Fields *p_fields; // x23
  const MethodInfo *v21; // x4
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_array *svals; // x8
  System_String_o *v24; // x24
  DataVals_o *v25; // x0
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  int32_t uniqueId; // w26
  WarBoardManager_ExecuteProcParam_o *v28; // x24
  struct WarBoardPieceData_o *v29; // x1
  struct WarBoardItemEntity_o *v30; // x8
  struct System_Int32_array *funcId; // x1
  const MethodInfo *v32; // x1
  DataVals_array *DataValsList; // x0
  const MethodInfo *v34; // x7
  BattleServantData_o *v35; // x22
  int32_t v36; // w0
  WarBoardCallbackTask_o *v37; // x22
  WarBoardTaskBase_TaskCallback_o *v38; // x23
  WebViewManager_o *Instance; // x20
  WarBoardTaskBase_array *v40; // x21
  const MethodInfo *v41; // x3
  __int64 v42; // x0
  __int64 v43; // x0

  if ( (byte_4184081 & 1) == 0 )
  {
    sub_B2C35C(&DataVals_TypeInfo, piece);
    sub_B2C35C(&WarBoardManager_ExecuteProcParam_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B2C35C(&WarBoardTaskBase_TaskCallback_TypeInfo, v12);
    sub_B2C35C(&Method_WarBoardItemData___c__DisplayClass54_0__Use_b__0__, v13);
    sub_B2C35C(&WarBoardItemData___c__DisplayClass54_0_TypeInfo, v14);
    sub_B2C35C(&WarBoardCallbackTask_TypeInfo, v15);
    sub_B2C35C(&WarBoardTaskBase___TypeInfo, v16);
    byte_4184081 = 1;
  }
  v17 = (WarBoardItemData___c__DisplayClass54_0_o *)sub_B2C42C(WarBoardItemData___c__DisplayClass54_0_TypeInfo);
  WarBoardItemData___c__DisplayClass54_0___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_30;
  v17->fields.piece = piece;
  p_fields = &v17->fields;
  sub_B2C2F8(&v17->fields, piece);
  isMaster = (__int64)v17->fields.piece;
  if ( !isMaster )
    goto LABEL_30;
  isMaster = WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)isMaster, 0LL);
  if ( (isMaster & 1) != 0 )
    return;
  this->fields._isUse_k__BackingField = 1;
  if ( !p_fields->piece )
    goto LABEL_30;
  isMaster = (__int64)this->fields.component;
  if ( !isMaster )
    goto LABEL_30;
  WarBoardItemComponent__OnUse(
    (WarBoardItemComponent_o *)isMaster,
    p_fields->piece->fields._nowSquareIndex_k__BackingField,
    taskList,
    0,
    v21);
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_30;
  svals = itemEntity->fields.svals;
  if ( !svals )
    goto LABEL_30;
  if ( !svals->max_length )
    goto LABEL_31;
  v24 = svals->m_Items[0];
  v25 = (DataVals_o *)sub_B2C42C(DataVals_TypeInfo);
  DataVals___ctor(v25, v24, 0LL);
  if ( !p_fields->piece )
    goto LABEL_30;
  isMaster = (__int64)p_fields->piece->fields._battleServant_k__BackingField;
  if ( !isMaster )
    goto LABEL_30;
  BattleServantData__updateResultState((BattleServantData_o *)isMaster, 0LL);
  if ( !p_fields->piece )
    goto LABEL_30;
  battleServant_k__BackingField = p_fields->piece->fields._battleServant_k__BackingField;
  if ( !battleServant_k__BackingField )
    goto LABEL_30;
  uniqueId = battleServant_k__BackingField->fields.uniqueId;
  v28 = (WarBoardManager_ExecuteProcParam_o *)sub_B2C42C(WarBoardManager_ExecuteProcParam_TypeInfo);
  WarBoardManager_ExecuteProcParam___ctor(v28, 0LL);
  if ( !v28 )
    goto LABEL_30;
  v29 = p_fields->piece;
  v28->fields.pieceData = p_fields->piece;
  sub_B2C2F8(&v28->fields, v29);
  v28->fields.actorId = uniqueId;
  v28->fields.targetId = uniqueId;
  v30 = this->fields.itemEntity;
  if ( !v30 )
    goto LABEL_30;
  funcId = v30->fields.funcId;
  v28->fields.funcList = funcId;
  sub_B2C2F8(&v28->fields.funcList, funcId);
  DataValsList = WarBoardItemData__getDataValsList(this, v32);
  v28->fields.dataVals = DataValsList;
  sub_B2C2F8(&v28->fields.dataVals, DataValsList);
  v28->fields.isUpdateStatus = 0;
  isMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !isMaster )
    goto LABEL_30;
  isMaster = WarBoardManager__ExecuteProcList((WarBoardManager_o *)isMaster, v28, 0LL, 0LL, 0LL, 0LL, 0LL, v34);
  if ( !p_fields->piece )
    goto LABEL_30;
  v35 = p_fields->piece->fields._battleServant_k__BackingField;
  if ( !v35 )
    goto LABEL_30;
  v36 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v35->klass->vtable._13_get_resultHp.method)(
          v35,
          v35->klass->vtable._14_set_resultHp.methodPtr);
  BattleServantData__setHp(v35, v36, 0, 0LL);
  v37 = (WarBoardCallbackTask_o *)sub_B2C42C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor(v37, 0LL, 0LL);
  v38 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v38,
    (Il2CppObject *)v17,
    Method_WarBoardItemData___c__DisplayClass54_0__Use_b__0__,
    0LL);
  if ( !v37 )
    goto LABEL_30;
  v37->fields.EndCallback = v38;
  sub_B2C2F8(&v37->fields.EndCallback, v38);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  isMaster = sub_B2C374(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !isMaster )
LABEL_30:
    sub_B2C434(isMaster, v19);
  v40 = (WarBoardTaskBase_array *)isMaster;
  isMaster = sub_B2C41C(v37, *(_QWORD *)(*(_QWORD *)isMaster + 64LL));
  if ( !isMaster )
  {
    v43 = sub_B2C454();
    sub_B2C400(v43, 0LL);
  }
  if ( !v40->max_length )
  {
LABEL_31:
    v42 = sub_B2C460(isMaster);
    sub_B2C400(v42, 0LL);
  }
  v40->m_Items[0] = (WarBoardTaskBase_o *)v37;
  sub_B2C2F8(v40->m_Items, v37);
  if ( !Instance )
    goto LABEL_30;
  if ( isInsertTask )
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, v40, v41);
  else
    WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, v40, v41);
}


bool __fastcall WarBoardItemData___UpdateFromServerData_b__60_0(
        WarBoardItemData_o *this,
        WarBoardUserGetItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.squareIndex == this->fields._squareIndex_k__BackingField;
}


DataVals_array *__fastcall WarBoardItemData__getDataValsList(WarBoardItemData_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_array *svals; // x23
  __int64 v7; // x8
  DataVals_array *v8; // x19
  unsigned __int64 v9; // x24
  System_String_o **m_Items; // x25
  int32_t *p_forceId; // x20
  System_String_o *v12; // x22
  DataVals_o *v13; // x21
  DataVals_o *v14; // x20
  __int64 v16; // x0
  __int64 v17; // x0

  v2 = this;
  if ( (byte_4184082 & 1) == 0 )
  {
    sub_B2C35C(&DataVals___TypeInfo, method);
    sub_B2C35C(&DataVals_TypeInfo, v3);
    this = (WarBoardItemData_o *)sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4184082 = 1;
  }
  itemEntity = v2->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_21;
  svals = itemEntity->fields.svals;
  if ( !svals )
  {
    v8 = (DataVals_array *)sub_B2C374(DataVals___TypeInfo, 1LL);
    v14 = (DataVals_o *)sub_B2C42C(DataVals_TypeInfo);
    DataVals___ctor(v14, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v8 )
    {
      if ( v14 )
      {
        this = (WarBoardItemData_o *)sub_B2C41C(v14, v8->obj.klass->_1.element_class);
        if ( !this )
        {
LABEL_22:
          v17 = sub_B2C454();
          sub_B2C400(v17, 0LL);
        }
      }
      if ( !v8->max_length )
        goto LABEL_20;
      v8->m_Items[0] = v14;
      sub_B2C2F8(v8->m_Items, v14);
      return v8;
    }
LABEL_21:
    sub_B2C434(this, method);
  }
  this = (WarBoardItemData_o *)sub_B2C374(DataVals___TypeInfo, svals->max_length);
  v7 = *(_QWORD *)&svals->max_length;
  v8 = (DataVals_array *)this;
  if ( (int)v7 >= 1 )
  {
    v9 = 0LL;
    m_Items = svals->m_Items;
    p_forceId = &this->fields.forceId;
    while ( v9 < (unsigned int)v7 )
    {
      v12 = *m_Items;
      v13 = (DataVals_o *)sub_B2C42C(DataVals_TypeInfo);
      DataVals___ctor(v13, v12, 0LL);
      if ( !v8 )
        goto LABEL_21;
      if ( v13 )
      {
        this = (WarBoardItemData_o *)sub_B2C41C(v13, v8->obj.klass->_1.element_class);
        if ( !this )
          goto LABEL_22;
      }
      if ( v9 >= v8->max_length )
        break;
      *(_QWORD *)p_forceId = v13;
      sub_B2C2F8(p_forceId, v13);
      LODWORD(v7) = svals->max_length;
      ++v9;
      ++m_Items;
      p_forceId += 2;
      if ( (__int64)v9 >= (int)v7 )
        return v8;
    }
LABEL_20:
    v16 = sub_B2C460(this);
    sub_B2C400(v16, 0LL);
  }
  return v8;
}


bool __fastcall WarBoardItemData__get_Acquired(WarBoardItemData_o *this, const MethodInfo *method)
{
  return (this->fields.forceId & 0x80000000) == 0 && this->fields.groupId >= 0;
}


int32_t __fastcall WarBoardItemData__get_AiTargetSortPrimeIndex(WarBoardItemData_o *this, const MethodInfo *method)
{
  return 0;
}


int32_t __fastcall WarBoardItemData__get_AiTargetSortSecondIndex(WarBoardItemData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


int32_t __fastcall WarBoardItemData__get_BaseImageId(WarBoardItemData_o *this, const MethodInfo *method)
{
  struct WarBoardItemEntity_o *itemEntity; // x8

  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    return itemEntity->fields.baseImageId;
  else
    return 0;
}


System_String_o *__fastcall WarBoardItemData__get_BaseImageSpriteName(
        WarBoardItemData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct WarBoardItemEntity_o *itemEntity; // x8
  int baseImageId; // w8
  Il2CppObject *v7; // x0
  int v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4184080 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&StringLiteral_21232/*"onBoard_itembase_{0}"*/, v3);
    sub_B2C35C(&StringLiteral_21231/*"onBoard_itembase"*/, v4);
    byte_4184080 = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    return (System_String_o *)StringLiteral_21231/*"onBoard_itembase"*/;
  baseImageId = itemEntity->fields.baseImageId;
  if ( baseImageId <= 0 )
    return (System_String_o *)StringLiteral_21231/*"onBoard_itembase"*/;
  v9 = baseImageId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  return System_String__Format((System_String_o *)StringLiteral_21232/*"onBoard_itembase_{0}"*/, v7, 0LL);
}


WarBoardItemComponent_o *__fastcall WarBoardItemData__get_Component(WarBoardItemData_o *this, const MethodInfo *method)
{
  return this->fields.component;
}


bool __fastcall WarBoardItemData__get_IsAiTargetable(WarBoardItemData_o *this, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( (this->fields.forceId & 0x80000000) != 0 )
    LOBYTE(v2) = 1;
  else
    return (unsigned int)this->fields.groupId >> 31;
  return v2;
}


bool __fastcall WarBoardItemData__get_IsPutInit(WarBoardItemData_o *this, const MethodInfo *method)
{
  return 1;
}


int32_t __fastcall WarBoardItemData__get_NowSquareIndex(WarBoardItemData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


int32_t __fastcall WarBoardItemData__get_PutSquareIndex(WarBoardItemData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


System_String_o *__fastcall WarBoardItemData__get_description(WarBoardItemData_o *this, const MethodInfo *method)
{
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_StaticFields *p_effectName; // x8

  if ( (byte_418407F & 1) == 0 )
  {
    sub_B2C35C(&string_TypeInfo, method);
    byte_418407F = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    p_effectName = (struct System_String_StaticFields *)&itemEntity->fields.effectName;
  else
    p_effectName = string_TypeInfo->static_fields;
  return p_effectName->Empty;
}


int32_t __fastcall WarBoardItemData__get_evalValue(WarBoardItemData_o *this, const MethodInfo *method)
{
  struct WarBoardItemEntity_o *itemEntity; // x8

  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    sub_B2C434(this, method);
  return itemEntity->fields.evalValue;
}


System_Int32_array *__fastcall WarBoardItemData__get_individuality(WarBoardItemData_o *this, const MethodInfo *method)
{
  return this->fields._individuality_k__BackingField;
}


bool __fastcall WarBoardItemData__get_isUse(WarBoardItemData_o *this, const MethodInfo *method)
{
  return this->fields._isUse_k__BackingField;
}


int32_t __fastcall WarBoardItemData__get_itemEntityIconId(WarBoardItemData_o *this, const MethodInfo *method)
{
  struct WarBoardItemEntity_o *itemEntity; // x8

  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    return itemEntity->fields.iconId;
  else
    return 0;
}


System_String_o *__fastcall WarBoardItemData__get_name(WarBoardItemData_o *this, const MethodInfo *method)
{
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_StaticFields *p_name; // x8

  if ( (byte_418407E & 1) == 0 )
  {
    sub_B2C35C(&string_TypeInfo, method);
    byte_418407E = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    p_name = (struct System_String_StaticFields *)&itemEntity->fields.name;
  else
    p_name = string_TypeInfo->static_fields;
  return p_name->Empty;
}


int32_t __fastcall WarBoardItemData__get_squareIndex(WarBoardItemData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


void __fastcall WarBoardItemData__set_individuality(
        WarBoardItemData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  this->fields._individuality_k__BackingField = value;
  sub_B2C2F8(&this->fields._individuality_k__BackingField, value);
}


void __fastcall WarBoardItemData__set_isUse(WarBoardItemData_o *this, bool value, const MethodInfo *method)
{
  this->fields._isUse_k__BackingField = value;
}


void __fastcall WarBoardItemData__set_squareIndex(WarBoardItemData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._squareIndex_k__BackingField = value;
}


void __fastcall WarBoardItemData_SaveData___ctor(WarBoardItemData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.pieceIndex = -1;
  *(_QWORD *)&this->fields.forceId = -1LL;
  this->fields.squareIndex = -1;
  this->fields.isUse = 0;
}


void __fastcall WarBoardItemData_SaveData___ctor_20857852(
        WarBoardItemData_SaveData_o *this,
        WarBoardItemData_o *owner,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  struct WarBoardItemData_o *v7; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.owner = owner;
  sub_B2C2F8(&this->fields.owner, owner);
  WarBoardItemData_SaveData__Save(this, v5);
  v7 = this->fields.owner;
  if ( !v7 )
    sub_B2C434(0LL, v6);
  v7->fields.localSaveData = this;
  sub_B2C2F8(&v7->fields.localSaveData, this);
}


void __fastcall WarBoardItemData_SaveData__Load(WarBoardItemData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardItemData_o *owner; // x8
  struct WarBoardItemData_o *v3; // x8
  struct WarBoardItemData_o *v4; // x8
  struct WarBoardItemData_o *v5; // x8
  struct WarBoardItemData_o *v6; // x8
  struct WarBoardUserGetItemData_o *serverData; // x8
  struct WarBoardItemData_o *v8; // x8
  struct WarBoardUserGetItemData_o *v9; // x8
  struct WarBoardItemData_o *v10; // x8
  struct WarBoardUserGetItemData_o *v11; // x8
  struct WarBoardItemData_o *v12; // x8
  struct WarBoardUserGetItemData_o *v13; // x8

  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields._isUse_k__BackingField = this->fields.isUse;
    v3 = this->fields.owner;
    if ( !v3 )
      goto LABEL_15;
    v3->fields.forceId = this->fields.forceId;
    v4 = this->fields.owner;
    if ( !v4 )
      goto LABEL_15;
    v4->fields.groupId = this->fields.groupId;
    v5 = this->fields.owner;
    if ( !v5 )
      goto LABEL_15;
    v5->fields.pieceIndex = this->fields.pieceIndex;
    v6 = this->fields.owner;
    if ( !v6 )
      goto LABEL_15;
    serverData = v6->fields.serverData;
    if ( !serverData )
      return;
    serverData->fields.isUse = this->fields.isUse;
    v8 = this->fields.owner;
    if ( !v8
      || (v9 = v8->fields.serverData) == 0LL
      || (v9->fields.forceId = this->fields.forceId, (v10 = this->fields.owner) == 0LL)
      || (v11 = v10->fields.serverData) == 0LL
      || (v11->fields.groupId = this->fields.groupId, (v12 = this->fields.owner) == 0LL)
      || (v13 = v12->fields.serverData) == 0LL )
    {
LABEL_15:
      sub_B2C434(this, method);
    }
    v13->fields.pieceIndex = this->fields.pieceIndex;
  }
}


void __fastcall WarBoardItemData_SaveData__Save(WarBoardItemData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardItemData_o *owner; // x8

  owner = this->fields.owner;
  if ( !owner )
    sub_B2C434(this, method);
  this->fields.squareIndex = owner->fields._squareIndex_k__BackingField;
  this->fields.isUse = owner->fields._isUse_k__BackingField;
  this->fields.forceId = owner->fields.forceId;
  this->fields.groupId = owner->fields.groupId;
  this->fields.pieceIndex = owner->fields.pieceIndex;
}


void __fastcall WarBoardItemData_SaveData__SetOwner(
        WarBoardItemData_SaveData_o *this,
        WarBoardData_o *data,
        const MethodInfo *method)
{
  struct WarBoardItemData_o *Item; // x0
  struct WarBoardItemData_o *owner; // x0

  if ( !data )
    sub_B2C434(this, 0LL);
  Item = WarBoardData__GetItem(data, this->fields.squareIndex, 0LL);
  this->fields.owner = Item;
  sub_B2C2F8(&this->fields.owner, Item);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_B2C2F8(&owner->fields.localSaveData, this);
  }
}


void __fastcall WarBoardItemData___c__DisplayClass54_0___ctor(
        WarBoardItemData___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardItemData___c__DisplayClass54_0___Use_b__0(
        WarBoardItemData___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  WarBoardPieceData_o *piece; // x0

  piece = this->fields.piece;
  if ( !piece )
    sub_B2C434(0LL, method);
  WarBoardPieceData__ChangeStatus(piece, 0LL);
}