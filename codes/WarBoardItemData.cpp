void __fastcall WarBoardItemData___ctor(
        WarBoardItemData_o *this,
        WarBoardStageLayoutEntity_o *layout,
        WarBoardUserGetItemData_o *getItemData,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42AC846 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_WarBoardItemMaster___);
    sub_B52984(&Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AC846 = 1;
  }
  *(_QWORD *)&this->fields.forceId = -1LL;
  *(_QWORD *)&this->fields.pieceIndex = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.serverData = getItemData;
  sub_B52920(&this->fields.serverData);
  if ( !layout
    || (this->fields._squareIndex_k__BackingField = layout->fields.squareIndex,
        this->fields.itemId = layout->fields.effectId,
        this->fields._individuality_k__BackingField = WarBoardStageLayoutEntity__GetIndividuality(layout, 0LL),
        sub_B52920(&this->fields._individuality_k__BackingField),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarBoardItemMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v8);
  }
  this->fields.itemEntity = (struct WarBoardItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                                             this->fields.itemId,
                                                             (const MethodInfo_23E22D8 *)Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int__GetEntity__);
  sub_B52920(&this->fields.itemEntity);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(localSaveData, method);
  }
  WarBoardItemComponent__Reset((WarBoardItemComponent_o *)localSaveData, method);
}


void __fastcall WarBoardItemData__SetComponent(
        WarBoardItemData_o *this,
        WarBoardItemComponent_o *component,
        const MethodInfo *method)
{
  this->fields.component = component;
  sub_B52920(&this->fields.component);
}


void __fastcall WarBoardItemData__SetItemEnable(WarBoardItemData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardItemComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_B52A5C(0LL, enable);
  WarBoardItemComponent__SetColliderEnable(component, enable, method);
}


void __fastcall WarBoardItemData__SetTouchEnable(WarBoardItemData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardItemComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_B52A5C(0LL, enable);
  WarBoardItemComponent__SetTouchEnable(component, enable, method);
}


System_String_o *__fastcall WarBoardItemData__ToJson(WarBoardItemData_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *v2; // x19
  struct WarBoardUserGetItemData_o *serverData; // x8
  struct WarBoardUserGetItemData_o **p_serverData; // x20
  WarBoardUserGetItemData_o *v5; // x21
  struct WarBoardUserGetItemData_o *v6; // x8
  struct WarBoardUserGetItemData_o *v7; // x8
  struct WarBoardUserGetItemData_o *v8; // x8
  Il2CppObject *v9; // x19

  v2 = this;
  if ( (byte_42AC84D & 1) == 0 )
  {
    sub_B52984(&JsonManager_TypeInfo);
    this = (WarBoardItemData_o *)sub_B52984(&WarBoardUserGetItemData_TypeInfo);
    byte_42AC84D = 1;
  }
  p_serverData = &v2->fields.serverData;
  serverData = v2->fields.serverData;
  if ( !serverData )
  {
    v5 = (WarBoardUserGetItemData_o *)sub_B52A54(WarBoardUserGetItemData_TypeInfo);
    WarBoardUserGetItemData___ctor(v5, 0LL);
    *p_serverData = v5;
    sub_B52920(&v2->fields.serverData);
    if ( !*p_serverData )
      goto LABEL_13;
    (*p_serverData)->fields.squareIndex = v2->fields._squareIndex_k__BackingField;
    serverData = v2->fields.serverData;
    if ( !serverData )
      goto LABEL_13;
  }
  serverData->fields.forceId = v2->fields.forceId;
  v6 = v2->fields.serverData;
  if ( !v6
    || (v6->fields.groupId = v2->fields.groupId, (v7 = v2->fields.serverData) == 0LL)
    || (v7->fields.pieceIndex = v2->fields.pieceIndex, (v8 = v2->fields.serverData) == 0LL) )
  {
LABEL_13:
    sub_B52A5C(this, method);
  }
  v8->fields.isUse = v2->fields._isUse_k__BackingField;
  v9 = (Il2CppObject *)v2->fields.serverData;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson(v9, 0, 0, 0LL);
}


void __fastcall WarBoardItemData__UpdateFromServerData(
        WarBoardItemData_o *this,
        WarBoardDataEntity_o *warBoardDataEnt,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *getItemInfo; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v6; // x21
  struct WarBoardUserGetItemData_o *serverData; // x8

  if ( (byte_42AC84C & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
    sub_B52984(&Method_System_Func_WarBoardUserGetItemData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardUserGetItemData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardItemData__UpdateFromServerData_b__60_0__);
    byte_42AC84C = 1;
  }
  if ( warBoardDataEnt )
  {
    getItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEnt->fields.getItemInfo;
    v6 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v6,
      (Il2CppObject *)this,
      Method_WarBoardItemData__UpdateFromServerData_b__60_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardUserGetItemData__bool___ctor__);
    this->fields.serverData = (struct WarBoardUserGetItemData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                                    getItemInfo,
                                                                    (System_Func_TSource__bool__o *)v6,
                                                                    (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
    sub_B52920(&this->fields.serverData);
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
  WarBoardItemData___c__DisplayClass54_0_o *v9; // x21
  __int64 isMaster; // x0
  __int64 v11; // x1
  WarBoardItemData___c__DisplayClass54_0_Fields *p_fields; // x23
  const MethodInfo *v13; // x4
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_array *svals; // x8
  System_String_o *v16; // x24
  DataVals_o *v17; // x0
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  int32_t uniqueId; // w26
  WarBoardManager_ExecuteProcParam_o *v20; // x24
  struct WarBoardItemEntity_o *v21; // x8
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x7
  BattleServantData_o *v24; // x22
  int32_t v25; // w0
  WarBoardCallbackTask_o *v26; // x22
  WarBoardTaskBase_TaskCallback_o *v27; // x23
  WebViewManager_o *Instance; // x20
  WarBoardTaskBase_array *v29; // x21
  const MethodInfo *v30; // x3
  __int64 v31; // x0
  __int64 v32; // x0

  if ( (byte_42AC84A & 1) == 0 )
  {
    sub_B52984(&DataVals_TypeInfo);
    sub_B52984(&WarBoardManager_ExecuteProcParam_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B52984(&Method_WarBoardItemData___c__DisplayClass54_0__Use_b__0__);
    sub_B52984(&WarBoardItemData___c__DisplayClass54_0_TypeInfo);
    sub_B52984(&WarBoardCallbackTask_TypeInfo);
    sub_B52984(&WarBoardTaskBase___TypeInfo);
    byte_42AC84A = 1;
  }
  v9 = (WarBoardItemData___c__DisplayClass54_0_o *)sub_B52A54(WarBoardItemData___c__DisplayClass54_0_TypeInfo);
  WarBoardItemData___c__DisplayClass54_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_30;
  v9->fields.piece = piece;
  p_fields = &v9->fields;
  sub_B52920(&v9->fields);
  isMaster = (__int64)v9->fields.piece;
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
    v13);
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_30;
  svals = itemEntity->fields.svals;
  if ( !svals )
    goto LABEL_30;
  if ( !svals->max_length )
    goto LABEL_31;
  v16 = svals->m_Items[0];
  v17 = (DataVals_o *)sub_B52A54(DataVals_TypeInfo);
  DataVals___ctor(v17, v16, 0LL);
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
  v20 = (WarBoardManager_ExecuteProcParam_o *)sub_B52A54(WarBoardManager_ExecuteProcParam_TypeInfo);
  WarBoardManager_ExecuteProcParam___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_30;
  v20->fields.pieceData = p_fields->piece;
  sub_B52920(&v20->fields);
  v20->fields.actorId = uniqueId;
  v20->fields.targetId = uniqueId;
  v21 = this->fields.itemEntity;
  if ( !v21 )
    goto LABEL_30;
  v20->fields.funcList = v21->fields.funcId;
  sub_B52920(&v20->fields.funcList);
  v20->fields.dataVals = WarBoardItemData__getDataValsList(this, v22);
  sub_B52920(&v20->fields.dataVals);
  v20->fields.isUpdateStatus = 0;
  isMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !isMaster )
    goto LABEL_30;
  isMaster = WarBoardManager__ExecuteProcList((WarBoardManager_o *)isMaster, v20, 0LL, 0LL, 0LL, 0LL, 0LL, v23);
  if ( !p_fields->piece )
    goto LABEL_30;
  v24 = p_fields->piece->fields._battleServant_k__BackingField;
  if ( !v24 )
    goto LABEL_30;
  v25 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v24->klass->vtable._13_get_resultHp.method)(
          v24,
          v24->klass->vtable._14_set_resultHp.methodPtr);
  BattleServantData__setHp(v24, v25, 0, 0LL);
  v26 = (WarBoardCallbackTask_o *)sub_B52A54(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor(v26, 0LL, 0LL);
  v27 = (WarBoardTaskBase_TaskCallback_o *)sub_B52A54(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v27,
    (Il2CppObject *)v9,
    Method_WarBoardItemData___c__DisplayClass54_0__Use_b__0__,
    0LL);
  if ( !v26 )
    goto LABEL_30;
  v26->fields.EndCallback = v27;
  sub_B52920(&v26->fields.EndCallback);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  isMaster = sub_B5299C(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !isMaster )
LABEL_30:
    sub_B52A5C(isMaster, v11);
  v29 = (WarBoardTaskBase_array *)isMaster;
  isMaster = sub_B52A44(v26, *(_QWORD *)(*(_QWORD *)isMaster + 64LL));
  if ( !isMaster )
  {
    v32 = sub_B52A7C();
    sub_B52A28(v32, 0LL);
  }
  if ( !v29->max_length )
  {
LABEL_31:
    v31 = sub_B52A88(isMaster);
    sub_B52A28(v31, 0LL);
  }
  v29->m_Items[0] = (WarBoardTaskBase_o *)v26;
  sub_B52920(v29->m_Items);
  if ( !Instance )
    goto LABEL_30;
  if ( isInsertTask )
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, v29, v30);
  else
    WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, v29, v30);
}


bool __fastcall WarBoardItemData___UpdateFromServerData_b__60_0(
        WarBoardItemData_o *this,
        WarBoardUserGetItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.squareIndex == this->fields._squareIndex_k__BackingField;
}


DataVals_array *__fastcall WarBoardItemData__getDataValsList(WarBoardItemData_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *v2; // x19
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_array *svals; // x23
  __int64 v5; // x8
  DataVals_array *v6; // x19
  unsigned __int64 v7; // x24
  System_String_o **m_Items; // x25
  int32_t *p_forceId; // x20
  System_String_o *v10; // x22
  DataVals_o *v11; // x21
  DataVals_o *v12; // x20
  __int64 v14; // x0
  __int64 v15; // x0

  v2 = this;
  if ( (byte_42AC84B & 1) == 0 )
  {
    sub_B52984(&DataVals___TypeInfo);
    sub_B52984(&DataVals_TypeInfo);
    this = (WarBoardItemData_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42AC84B = 1;
  }
  itemEntity = v2->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_21;
  svals = itemEntity->fields.svals;
  if ( !svals )
  {
    v6 = (DataVals_array *)sub_B5299C(DataVals___TypeInfo, 1LL);
    v12 = (DataVals_o *)sub_B52A54(DataVals_TypeInfo);
    DataVals___ctor(v12, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v6 )
    {
      if ( v12 )
      {
        this = (WarBoardItemData_o *)sub_B52A44(v12, v6->obj.klass->_1.element_class);
        if ( !this )
        {
LABEL_22:
          v15 = sub_B52A7C();
          sub_B52A28(v15, 0LL);
        }
      }
      if ( !v6->max_length )
        goto LABEL_20;
      v6->m_Items[0] = v12;
      sub_B52920(v6->m_Items);
      return v6;
    }
LABEL_21:
    sub_B52A5C(this, method);
  }
  this = (WarBoardItemData_o *)sub_B5299C(DataVals___TypeInfo, svals->max_length);
  v5 = *(_QWORD *)&svals->max_length;
  v6 = (DataVals_array *)this;
  if ( (int)v5 >= 1 )
  {
    v7 = 0LL;
    m_Items = svals->m_Items;
    p_forceId = &this->fields.forceId;
    while ( v7 < (unsigned int)v5 )
    {
      v10 = *m_Items;
      v11 = (DataVals_o *)sub_B52A54(DataVals_TypeInfo);
      DataVals___ctor(v11, v10, 0LL);
      if ( !v6 )
        goto LABEL_21;
      if ( v11 )
      {
        this = (WarBoardItemData_o *)sub_B52A44(v11, v6->obj.klass->_1.element_class);
        if ( !this )
          goto LABEL_22;
      }
      if ( v7 >= v6->max_length )
        break;
      *(_QWORD *)p_forceId = v11;
      sub_B52920(p_forceId);
      LODWORD(v5) = svals->max_length;
      ++v7;
      ++m_Items;
      p_forceId += 2;
      if ( (__int64)v7 >= (int)v5 )
        return v6;
    }
LABEL_20:
    v14 = sub_B52A88(this);
    sub_B52A28(v14, 0LL);
  }
  return v6;
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
  struct WarBoardItemEntity_o *itemEntity; // x8
  int baseImageId; // w8
  Il2CppObject *v5; // x0
  int v7; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42AC849 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_21402/*"onBoard_itembase_{0}"*/);
    sub_B52984(&StringLiteral_21401/*"onBoard_itembase"*/);
    byte_42AC849 = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    return (System_String_o *)StringLiteral_21401/*"onBoard_itembase"*/;
  baseImageId = itemEntity->fields.baseImageId;
  if ( baseImageId <= 0 )
    return (System_String_o *)StringLiteral_21401/*"onBoard_itembase"*/;
  v7 = baseImageId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Format((System_String_o *)StringLiteral_21402/*"onBoard_itembase_{0}"*/, v5, 0LL);
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

  if ( (byte_42AC848 & 1) == 0 )
  {
    sub_B52984(&string_TypeInfo);
    byte_42AC848 = 1;
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
    sub_B52A5C(this, method);
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

  if ( (byte_42AC847 & 1) == 0 )
  {
    sub_B52984(&string_TypeInfo);
    byte_42AC847 = 1;
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
  sub_B52920(&this->fields._individuality_k__BackingField);
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


void __fastcall WarBoardItemData_SaveData___ctor_22507432(
        WarBoardItemData_SaveData_o *this,
        WarBoardItemData_o *owner,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct WarBoardItemData_o *v19; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.owner = owner;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.owner, (System_Int32_array **)owner, v5, v6, v7, v8, v9, v10);
  WarBoardItemData_SaveData__Save(this, v11);
  v19 = this->fields.owner;
  if ( !v19 )
    sub_B52A5C(0LL, v12);
  v19->fields.localSaveData = this;
  sub_B52920(
    (BattleServantConfConponent_o *)&v19->fields.localSaveData,
    (System_Int32_array **)this,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
      sub_B52A5C(this, method);
    }
    v13->fields.pieceIndex = this->fields.pieceIndex;
  }
}


void __fastcall WarBoardItemData_SaveData__Save(WarBoardItemData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardItemData_o *owner; // x8

  owner = this->fields.owner;
  if ( !owner )
    sub_B52A5C(this, method);
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
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct WarBoardItemData_o *owner; // x0

  if ( !data )
    sub_B52A5C(this, 0LL);
  Item = WarBoardData__GetItem(data, this->fields.squareIndex, 0LL);
  this->fields.owner = Item;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.owner, (System_Int32_array **)Item, v5, v6, v7, v8, v9, v10);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_B52920(
      (BattleServantConfConponent_o *)&owner->fields.localSaveData,
      (System_Int32_array **)this,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
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
    sub_B52A5C(0LL, method);
  WarBoardPieceData__ChangeStatus(piece, 0LL);
}