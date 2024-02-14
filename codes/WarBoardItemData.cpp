void __fastcall WarBoardItemData___ctor(
        WarBoardItemData_o *this,
        WarBoardStageLayoutEntity_o *layout,
        WarBoardUserGetItemData_o *getItemData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  struct System_Int32_array *Individuality; // x0
  struct WarBoardItemEntity_o *Entity; // x0

  if ( (byte_4210DDB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarBoardItemMaster___, layout);
    sub_B0D8A4(&Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int__GetEntity__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4210DDB = 1;
  }
  *(_QWORD *)&this->fields.forceId = -1LL;
  *(_QWORD *)&this->fields.pieceIndex = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.serverData = getItemData;
  sub_B0D840(&this->fields.serverData, getItemData);
  if ( !layout
    || (this->fields._squareIndex_k__BackingField = layout->fields.squareIndex,
        this->fields.itemId = layout->fields.effectId,
        Individuality = WarBoardStageLayoutEntity__GetIndividuality(layout, 0LL),
        this->fields._individuality_k__BackingField = Individuality,
        sub_B0D840(&this->fields._individuality_k__BackingField, Individuality),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarBoardItemMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  Entity = (struct WarBoardItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                            this->fields.itemId,
                                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int__GetEntity__);
  this->fields.itemEntity = Entity;
  sub_B0D840(&this->fields.itemEntity, Entity);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  const MethodInfo *v4; // x1

  this->fields._isUse_k__BackingField = 0;
  localSaveData = this->fields.localSaveData;
  *(_QWORD *)&this->fields.forceId = -1LL;
  this->fields.pieceIndex = -1;
  if ( !localSaveData
    || (WarBoardItemData_SaveData__Save(localSaveData, 0LL),
        (localSaveData = (WarBoardItemData_SaveData_o *)this->fields.component) == 0LL) )
  {
    sub_B0D97C(localSaveData);
  }
  WarBoardItemComponent__Reset((WarBoardItemComponent_o *)localSaveData, v4);
}


void __fastcall WarBoardItemData__SetComponent(
        WarBoardItemData_o *this,
        WarBoardItemComponent_o *component,
        const MethodInfo *method)
{
  this->fields.component = component;
  sub_B0D840(&this->fields.component, component);
}


void __fastcall WarBoardItemData__SetItemEnable(WarBoardItemData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardItemComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_B0D97C(0LL);
  WarBoardItemComponent__SetColliderEnable(component, enable, method);
}


void __fastcall WarBoardItemData__SetTouchEnable(WarBoardItemData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardItemComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_B0D97C(0LL);
  WarBoardItemComponent__SetTouchEnable(component, enable, method);
}


System_String_o *__fastcall WarBoardItemData__ToJson(WarBoardItemData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardItemData_o *v3; // x19
  __int64 v4; // x1
  struct WarBoardUserGetItemData_o *serverData; // x8
  struct WarBoardUserGetItemData_o **p_serverData; // x20
  WarBoardUserGetItemData_o *v7; // x21
  struct WarBoardUserGetItemData_o *v8; // x8
  struct WarBoardUserGetItemData_o *v9; // x8
  struct WarBoardUserGetItemData_o *v10; // x8
  Il2CppObject *v11; // x19

  v3 = this;
  if ( (byte_4210DE2 & 1) == 0 )
  {
    sub_B0D8A4(&JsonManager_TypeInfo, method);
    this = (WarBoardItemData_o *)sub_B0D8A4(&WarBoardUserGetItemData_TypeInfo, v4);
    byte_4210DE2 = 1;
  }
  p_serverData = &v3->fields.serverData;
  serverData = v3->fields.serverData;
  if ( !serverData )
  {
    v7 = (WarBoardUserGetItemData_o *)sub_B0D974(WarBoardUserGetItemData_TypeInfo, method, v2);
    WarBoardUserGetItemData___ctor(v7, 0LL);
    *p_serverData = v7;
    sub_B0D840(&v3->fields.serverData, v7);
    if ( !*p_serverData )
      goto LABEL_13;
    (*p_serverData)->fields.squareIndex = v3->fields._squareIndex_k__BackingField;
    serverData = v3->fields.serverData;
    if ( !serverData )
      goto LABEL_13;
  }
  serverData->fields.forceId = v3->fields.forceId;
  v8 = v3->fields.serverData;
  if ( !v8
    || (v8->fields.groupId = v3->fields.groupId, (v9 = v3->fields.serverData) == 0LL)
    || (v9->fields.pieceIndex = v3->fields.pieceIndex, (v10 = v3->fields.serverData) == 0LL) )
  {
LABEL_13:
    sub_B0D97C(this);
  }
  v10->fields.isUse = v3->fields._isUse_k__BackingField;
  v11 = (Il2CppObject *)v3->fields.serverData;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson(v11, 0, 0, 0LL);
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

  if ( (byte_4210DE1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___, warBoardDataEnt);
    sub_B0D8A4(&Method_System_Func_WarBoardUserGetItemData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_WarBoardUserGetItemData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardItemData__UpdateFromServerData_b__60_0__, v7);
    byte_4210DE1 = 1;
  }
  if ( warBoardDataEnt )
  {
    getItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEnt->fields.getItemInfo;
    v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                              System_Func_WarBoardUserGetItemData__bool__TypeInfo,
                                                                              warBoardDataEnt,
                                                                              method);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v9,
      (Il2CppObject *)this,
      Method_WarBoardItemData__UpdateFromServerData_b__60_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_WarBoardUserGetItemData__bool___ctor__);
    v10 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
            getItemInfo,
            (System_Func_TSource__bool__o *)v9,
            (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
    this->fields.serverData = (struct WarBoardUserGetItemData_o *)v10;
    sub_B0D840(&this->fields.serverData, v10);
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
  WarBoardItemData___c__DisplayClass54_0_Fields *p_fields; // x23
  const MethodInfo *v20; // x4
  __int64 v21; // x1
  __int64 v22; // x2
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_array *svals; // x8
  System_String_o *v25; // x24
  DataVals_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  int32_t uniqueId; // w26
  WarBoardManager_ExecuteProcParam_o *v31; // x24
  struct WarBoardPieceData_o *v32; // x1
  struct WarBoardItemEntity_o *v33; // x8
  struct System_Int32_array *funcId; // x1
  const MethodInfo *v35; // x1
  DataVals_array *DataValsList; // x0
  const MethodInfo *v37; // x7
  BattleServantData_o *v38; // x22
  int32_t v39; // w0
  __int64 v40; // x1
  __int64 v41; // x2
  WarBoardCallbackTask_o *v42; // x22
  __int64 v43; // x1
  __int64 v44; // x2
  WarBoardTaskBase_TaskCallback_o *v45; // x23
  WebViewManager_o *Instance; // x20
  WarBoardTaskBase_array *v47; // x21
  const MethodInfo *v48; // x3
  __int64 v49; // x0
  __int64 v50; // x0

  if ( (byte_4210DDF & 1) == 0 )
  {
    sub_B0D8A4(&DataVals_TypeInfo, piece);
    sub_B0D8A4(&WarBoardManager_ExecuteProcParam_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, v12);
    sub_B0D8A4(&Method_WarBoardItemData___c__DisplayClass54_0__Use_b__0__, v13);
    sub_B0D8A4(&WarBoardItemData___c__DisplayClass54_0_TypeInfo, v14);
    sub_B0D8A4(&WarBoardCallbackTask_TypeInfo, v15);
    sub_B0D8A4(&WarBoardTaskBase___TypeInfo, v16);
    byte_4210DDF = 1;
  }
  v17 = (WarBoardItemData___c__DisplayClass54_0_o *)sub_B0D974(
                                                      WarBoardItemData___c__DisplayClass54_0_TypeInfo,
                                                      piece,
                                                      taskList);
  WarBoardItemData___c__DisplayClass54_0___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_30;
  v17->fields.piece = piece;
  p_fields = &v17->fields;
  sub_B0D840(&v17->fields, piece);
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
    v20);
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_30;
  svals = itemEntity->fields.svals;
  if ( !svals )
    goto LABEL_30;
  if ( !svals->max_length )
    goto LABEL_31;
  v25 = svals->m_Items[0];
  v26 = (DataVals_o *)sub_B0D974(DataVals_TypeInfo, v21, v22);
  DataVals___ctor(v26, v25, 0LL);
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
  v31 = (WarBoardManager_ExecuteProcParam_o *)sub_B0D974(WarBoardManager_ExecuteProcParam_TypeInfo, v27, v28);
  WarBoardManager_ExecuteProcParam___ctor(v31, 0LL);
  if ( !v31 )
    goto LABEL_30;
  v32 = p_fields->piece;
  v31->fields.pieceData = p_fields->piece;
  sub_B0D840(&v31->fields, v32);
  v31->fields.actorId = uniqueId;
  v31->fields.targetId = uniqueId;
  v33 = this->fields.itemEntity;
  if ( !v33 )
    goto LABEL_30;
  funcId = v33->fields.funcId;
  v31->fields.funcList = funcId;
  sub_B0D840(&v31->fields.funcList, funcId);
  DataValsList = WarBoardItemData__getDataValsList(this, v35);
  v31->fields.dataVals = DataValsList;
  sub_B0D840(&v31->fields.dataVals, DataValsList);
  v31->fields.isUpdateStatus = 0;
  isMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !isMaster )
    goto LABEL_30;
  isMaster = WarBoardManager__ExecuteProcList((WarBoardManager_o *)isMaster, v31, 0LL, 0LL, 0LL, 0LL, 0LL, v37);
  if ( !p_fields->piece )
    goto LABEL_30;
  v38 = p_fields->piece->fields._battleServant_k__BackingField;
  if ( !v38 )
    goto LABEL_30;
  v39 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v38->klass->vtable._13_get_resultHp.method)(
          v38,
          v38->klass->vtable._14_set_resultHp.methodPtr);
  BattleServantData__setHp(v38, v39, 0, 0LL);
  v42 = (WarBoardCallbackTask_o *)sub_B0D974(WarBoardCallbackTask_TypeInfo, v40, v41);
  WarBoardCallbackTask___ctor(v42, 0LL, 0LL);
  v45 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v43, v44);
  WarBoardTaskBase_TaskCallback___ctor(
    v45,
    (Il2CppObject *)v17,
    Method_WarBoardItemData___c__DisplayClass54_0__Use_b__0__,
    0LL);
  if ( !v42 )
    goto LABEL_30;
  v42->fields.EndCallback = v45;
  sub_B0D840(&v42->fields.EndCallback, v45);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  isMaster = sub_B0D8BC(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !isMaster )
LABEL_30:
    sub_B0D97C(isMaster);
  v47 = (WarBoardTaskBase_array *)isMaster;
  isMaster = sub_B0D964(v42, *(_QWORD *)(*(_QWORD *)isMaster + 64LL));
  if ( !isMaster )
  {
    v50 = sub_B0D99C();
    sub_B0D948(v50, 0LL);
  }
  if ( !v47->max_length )
  {
LABEL_31:
    v49 = sub_B0D9A8(isMaster);
    sub_B0D948(v49, 0LL);
  }
  v47->m_Items[0] = (WarBoardTaskBase_o *)v42;
  sub_B0D840(v47->m_Items, v42);
  if ( !Instance )
    goto LABEL_30;
  if ( isInsertTask )
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, v47, v48);
  else
    WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, v47, v48);
}


bool __fastcall WarBoardItemData___UpdateFromServerData_b__60_0(
        WarBoardItemData_o *this,
        WarBoardUserGetItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.squareIndex == this->fields._squareIndex_k__BackingField;
}


DataVals_array *__fastcall WarBoardItemData__getDataValsList(WarBoardItemData_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_array *svals; // x23
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x8
  DataVals_array *v10; // x19
  unsigned __int64 v11; // x24
  System_String_o **m_Items; // x25
  int32_t *p_forceId; // x20
  System_String_o *v14; // x22
  DataVals_o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  DataVals_o *v18; // x20
  __int64 v20; // x0
  __int64 v21; // x0

  v2 = this;
  if ( (byte_4210DE0 & 1) == 0 )
  {
    sub_B0D8A4(&DataVals___TypeInfo, method);
    sub_B0D8A4(&DataVals_TypeInfo, v3);
    this = (WarBoardItemData_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_4210DE0 = 1;
  }
  itemEntity = v2->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_21;
  svals = itemEntity->fields.svals;
  if ( !svals )
  {
    v10 = (DataVals_array *)sub_B0D8BC(DataVals___TypeInfo, 1LL);
    v18 = (DataVals_o *)sub_B0D974(DataVals_TypeInfo, v16, v17);
    DataVals___ctor(v18, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v10 )
    {
      if ( v18 )
      {
        this = (WarBoardItemData_o *)sub_B0D964(v18, v10->obj.klass->_1.element_class);
        if ( !this )
        {
LABEL_22:
          v21 = sub_B0D99C();
          sub_B0D948(v21, 0LL);
        }
      }
      if ( !v10->max_length )
        goto LABEL_20;
      v10->m_Items[0] = v18;
      sub_B0D840(v10->m_Items, v18);
      return v10;
    }
LABEL_21:
    sub_B0D97C(this);
  }
  this = (WarBoardItemData_o *)sub_B0D8BC(DataVals___TypeInfo, svals->max_length);
  v9 = *(_QWORD *)&svals->max_length;
  v10 = (DataVals_array *)this;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    m_Items = svals->m_Items;
    p_forceId = &this->fields.forceId;
    while ( v11 < (unsigned int)v9 )
    {
      v14 = *m_Items;
      v15 = (DataVals_o *)sub_B0D974(DataVals_TypeInfo, v7, v8);
      DataVals___ctor(v15, v14, 0LL);
      if ( !v10 )
        goto LABEL_21;
      if ( v15 )
      {
        this = (WarBoardItemData_o *)sub_B0D964(v15, v10->obj.klass->_1.element_class);
        if ( !this )
          goto LABEL_22;
      }
      if ( v11 >= v10->max_length )
        break;
      *(_QWORD *)p_forceId = v15;
      sub_B0D840(p_forceId, v15);
      LODWORD(v9) = svals->max_length;
      ++v11;
      ++m_Items;
      p_forceId += 2;
      if ( (__int64)v11 >= (int)v9 )
        return v10;
    }
LABEL_20:
    v20 = sub_B0D9A8(this);
    sub_B0D948(v20, 0LL);
  }
  return v10;
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

  if ( (byte_4210DDE & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_21301/*"onBoard_itembase_{0}"*/, v3);
    sub_B0D8A4(&StringLiteral_21300/*"onBoard_itembase"*/, v4);
    byte_4210DDE = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    return (System_String_o *)StringLiteral_21300/*"onBoard_itembase"*/;
  baseImageId = itemEntity->fields.baseImageId;
  if ( baseImageId <= 0 )
    return (System_String_o *)StringLiteral_21300/*"onBoard_itembase"*/;
  v9 = baseImageId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  return System_String__Format((System_String_o *)StringLiteral_21301/*"onBoard_itembase_{0}"*/, v7, 0LL);
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

  if ( (byte_4210DDD & 1) == 0 )
  {
    sub_B0D8A4(&string_TypeInfo, method);
    byte_4210DDD = 1;
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
    sub_B0D97C(this);
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

  if ( (byte_4210DDC & 1) == 0 )
  {
    sub_B0D8A4(&string_TypeInfo, method);
    byte_4210DDC = 1;
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
  sub_B0D840(&this->fields._individuality_k__BackingField, value);
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


void __fastcall WarBoardItemData_SaveData___ctor_20602400(
        WarBoardItemData_SaveData_o *this,
        WarBoardItemData_o *owner,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  struct WarBoardItemData_o *v6; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.owner = owner;
  sub_B0D840(&this->fields.owner, owner);
  WarBoardItemData_SaveData__Save(this, v5);
  v6 = this->fields.owner;
  if ( !v6 )
    sub_B0D97C(0LL);
  v6->fields.localSaveData = this;
  sub_B0D840(&v6->fields.localSaveData, this);
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
      sub_B0D97C(this);
    }
    v13->fields.pieceIndex = this->fields.pieceIndex;
  }
}


void __fastcall WarBoardItemData_SaveData__Save(WarBoardItemData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardItemData_o *owner; // x8

  owner = this->fields.owner;
  if ( !owner )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  Item = WarBoardData__GetItem(data, this->fields.squareIndex, 0LL);
  this->fields.owner = Item;
  sub_B0D840(&this->fields.owner, Item);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_B0D840(&owner->fields.localSaveData, this);
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
    sub_B0D97C(0LL);
  WarBoardPieceData__ChangeStatus(piece, 0LL);
}