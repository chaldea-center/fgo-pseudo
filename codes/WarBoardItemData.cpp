void __fastcall WarBoardItemData___ctor(
        WarBoardItemData_o *this,
        WarBoardStageLayoutEntity_o *layout,
        WarBoardUserGetItemData_o *getItemData,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  DataManager_o *Instance; // x0
  __int64 v14; // x1

  if ( (byte_42E5260 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarBoardItemMaster___, (_DWORD)layout, (_DWORD)getItemData, method);
    sub_B5D5C4(&Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int__GetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42E5260 = 1;
  }
  *(_QWORD *)&this->fields.forceId = -1LL;
  *(_QWORD *)&this->fields.pieceIndex = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.serverData = getItemData;
  sub_B5D560(&this->fields.serverData);
  if ( !layout
    || (this->fields._squareIndex_k__BackingField = layout->fields.squareIndex,
        this->fields.itemId = layout->fields.effectId,
        this->fields._individuality_k__BackingField = WarBoardStageLayoutEntity__GetIndividuality(layout, 0LL),
        sub_B5D560(&this->fields._individuality_k__BackingField),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarBoardItemMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v14);
  }
  this->fields.itemEntity = (struct WarBoardItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                                             this->fields.itemId,
                                                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int__GetEntity__);
  sub_B5D560(&this->fields.itemEntity);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(localSaveData, method);
  }
  WarBoardItemComponent__Reset((WarBoardItemComponent_o *)localSaveData, method);
}


void __fastcall WarBoardItemData__SetComponent(
        WarBoardItemData_o *this,
        WarBoardItemComponent_o *component,
        const MethodInfo *method)
{
  this->fields.component = component;
  sub_B5D560(&this->fields.component);
}


void __fastcall WarBoardItemData__SetItemEnable(WarBoardItemData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardItemComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_B5D69C(0LL, enable);
  WarBoardItemComponent__SetColliderEnable(component, enable, method);
}


void __fastcall WarBoardItemData__SetTouchEnable(WarBoardItemData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardItemComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_B5D69C(0LL, enable);
  WarBoardItemComponent__SetTouchEnable(component, enable, method);
}


System_String_o *__fastcall WarBoardItemData__ToJson(WarBoardItemData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardItemData_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct WarBoardUserGetItemData_o *serverData; // x8
  struct WarBoardUserGetItemData_o **p_serverData; // x20
  WarBoardUserGetItemData_o *v10; // x21
  struct WarBoardUserGetItemData_o *v11; // x8
  struct WarBoardUserGetItemData_o *v12; // x8
  struct WarBoardUserGetItemData_o *v13; // x8
  Il2CppObject *v14; // x19

  v4 = this;
  if ( (byte_42E5267 & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)method, v2, v3);
    this = (WarBoardItemData_o *)sub_B5D5C4(&WarBoardUserGetItemData_TypeInfo, v5, v6, v7);
    byte_42E5267 = 1;
  }
  p_serverData = &v4->fields.serverData;
  serverData = v4->fields.serverData;
  if ( !serverData )
  {
    v10 = (WarBoardUserGetItemData_o *)sub_B5D694(WarBoardUserGetItemData_TypeInfo);
    WarBoardUserGetItemData___ctor(v10, 0LL);
    *p_serverData = v10;
    sub_B5D560(&v4->fields.serverData);
    if ( !*p_serverData )
      goto LABEL_13;
    (*p_serverData)->fields.squareIndex = v4->fields._squareIndex_k__BackingField;
    serverData = v4->fields.serverData;
    if ( !serverData )
      goto LABEL_13;
  }
  serverData->fields.forceId = v4->fields.forceId;
  v11 = v4->fields.serverData;
  if ( !v11
    || (v11->fields.groupId = v4->fields.groupId, (v12 = v4->fields.serverData) == 0LL)
    || (v12->fields.pieceIndex = v4->fields.pieceIndex, (v13 = v4->fields.serverData) == 0LL) )
  {
LABEL_13:
    sub_B5D69C(this, method);
  }
  v13->fields.isUse = v4->fields._isUse_k__BackingField;
  v14 = (Il2CppObject *)v4->fields.serverData;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson(v14, 0, 0, 0LL);
}


void __fastcall WarBoardItemData__UpdateFromServerData(
        WarBoardItemData_o *this,
        WarBoardDataEntity_o *warBoardDataEnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *getItemInfo; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x21
  struct WarBoardUserGetItemData_o *serverData; // x8

  if ( (byte_42E5266 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___,
      (_DWORD)warBoardDataEnt,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Func_WarBoardUserGetItemData__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_WarBoardUserGetItemData__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardItemData__UpdateFromServerData_b__60_0__, v12, v13, v14);
    byte_42E5266 = 1;
  }
  if ( warBoardDataEnt )
  {
    getItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEnt->fields.getItemInfo;
    v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v16,
      (Il2CppObject *)this,
      Method_WarBoardItemData__UpdateFromServerData_b__60_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardUserGetItemData__bool___ctor__);
    this->fields.serverData = (struct WarBoardUserGetItemData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                                    getItemInfo,
                                                                    (System_Func_TSource__bool__o *)v16,
                                                                    (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
    sub_B5D560(&this->fields.serverData);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemData__Use(
        WarBoardItemData_o *this,
        WarBoardPieceData_o *piece,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        bool isInsertTask,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  WarBoardItemData___c__DisplayClass54_0_o *v33; // x21
  __int64 isMaster; // x0
  __int64 v35; // x1
  WarBoardItemData___c__DisplayClass54_0_Fields *p_fields; // x23
  const MethodInfo *v37; // x4
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_array *svals; // x8
  System_String_o *v40; // x24
  DataVals_o *v41; // x0
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  int32_t uniqueId; // w26
  WarBoardManager_ExecuteProcParam_o *v44; // x24
  struct WarBoardItemEntity_o *v45; // x8
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x7
  BattleServantData_o *v48; // x22
  int32_t v49; // w0
  WarBoardCallbackTask_o *v50; // x22
  WarBoardTaskBase_TaskCallback_o *v51; // x23
  WebViewManager_o *Instance; // x20
  WarBoardTaskBase_array *v53; // x21
  const MethodInfo *v54; // x3
  __int64 v55; // x0
  __int64 v56; // x0

  if ( (byte_42E5264 & 1) == 0 )
  {
    sub_B5D5C4(&DataVals_TypeInfo, (_DWORD)piece, (_DWORD)taskList, isInsertTask);
    sub_B5D5C4(&WarBoardManager_ExecuteProcParam_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_WarBoardItemData___c__DisplayClass54_0__Use_b__0__, v21, v22, v23);
    sub_B5D5C4(&WarBoardItemData___c__DisplayClass54_0_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&WarBoardCallbackTask_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&WarBoardTaskBase___TypeInfo, v30, v31, v32);
    byte_42E5264 = 1;
  }
  v33 = (WarBoardItemData___c__DisplayClass54_0_o *)sub_B5D694(WarBoardItemData___c__DisplayClass54_0_TypeInfo);
  WarBoardItemData___c__DisplayClass54_0___ctor(v33, 0LL);
  if ( !v33 )
    goto LABEL_30;
  v33->fields.piece = piece;
  p_fields = &v33->fields;
  sub_B5D560(&v33->fields);
  isMaster = (__int64)v33->fields.piece;
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
    v37);
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_30;
  svals = itemEntity->fields.svals;
  if ( !svals )
    goto LABEL_30;
  if ( !svals->max_length )
    goto LABEL_31;
  v40 = svals->m_Items[0];
  v41 = (DataVals_o *)sub_B5D694(DataVals_TypeInfo);
  DataVals___ctor(v41, v40, 0LL);
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
  v44 = (WarBoardManager_ExecuteProcParam_o *)sub_B5D694(WarBoardManager_ExecuteProcParam_TypeInfo);
  WarBoardManager_ExecuteProcParam___ctor(v44, 0LL);
  if ( !v44 )
    goto LABEL_30;
  v44->fields.pieceData = p_fields->piece;
  sub_B5D560(&v44->fields);
  v44->fields.actorId = uniqueId;
  v44->fields.targetId = uniqueId;
  v45 = this->fields.itemEntity;
  if ( !v45 )
    goto LABEL_30;
  v44->fields.funcList = v45->fields.funcId;
  sub_B5D560(&v44->fields.funcList);
  v44->fields.dataVals = WarBoardItemData__getDataValsList(this, v46);
  sub_B5D560(&v44->fields.dataVals);
  v44->fields.isUpdateStatus = 0;
  isMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !isMaster )
    goto LABEL_30;
  isMaster = WarBoardManager__ExecuteProcList((WarBoardManager_o *)isMaster, v44, 0LL, 0LL, 0LL, 0LL, 0LL, v47);
  if ( !p_fields->piece )
    goto LABEL_30;
  v48 = p_fields->piece->fields._battleServant_k__BackingField;
  if ( !v48 )
    goto LABEL_30;
  v49 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v48->klass->vtable._13_get_resultHp.method)(
          v48,
          v48->klass->vtable._14_set_resultHp.methodPtr);
  BattleServantData__setHp(v48, v49, 0, 0LL);
  v50 = (WarBoardCallbackTask_o *)sub_B5D694(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor(v50, 0LL, 0LL);
  v51 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v51,
    (Il2CppObject *)v33,
    Method_WarBoardItemData___c__DisplayClass54_0__Use_b__0__,
    0LL);
  if ( !v50 )
    goto LABEL_30;
  v50->fields.EndCallback = v51;
  sub_B5D560(&v50->fields.EndCallback);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v50,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  isMaster = sub_B5D5DC(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !isMaster )
LABEL_30:
    sub_B5D69C(isMaster, v35);
  v53 = (WarBoardTaskBase_array *)isMaster;
  isMaster = sub_B5D684(v50, *(_QWORD *)(*(_QWORD *)isMaster + 64LL));
  if ( !isMaster )
  {
    v56 = sub_B5D6BC();
    sub_B5D668(v56, 0LL);
  }
  if ( !v53->max_length )
  {
LABEL_31:
    v55 = sub_B5D6C8(isMaster);
    sub_B5D668(v55, 0LL);
  }
  v53->m_Items[0] = (WarBoardTaskBase_o *)v50;
  sub_B5D560(v53->m_Items);
  if ( !Instance )
    goto LABEL_30;
  if ( isInsertTask )
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, v53, v54);
  else
    WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, v53, v54);
}


bool __fastcall WarBoardItemData___UpdateFromServerData_b__60_0(
        WarBoardItemData_o *this,
        WarBoardUserGetItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.squareIndex == this->fields._squareIndex_k__BackingField;
}


DataVals_array *__fastcall WarBoardItemData__getDataValsList(WarBoardItemData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardItemData_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_array *svals; // x23
  __int64 v13; // x8
  DataVals_array *v14; // x19
  unsigned __int64 v15; // x24
  System_String_o **m_Items; // x25
  int32_t *p_forceId; // x20
  System_String_o *v18; // x22
  DataVals_o *v19; // x21
  DataVals_o *v20; // x20
  __int64 v22; // x0
  __int64 v23; // x0

  v4 = this;
  if ( (byte_42E5265 & 1) == 0 )
  {
    sub_B5D5C4(&DataVals___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataVals_TypeInfo, v5, v6, v7);
    this = (WarBoardItemData_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E5265 = 1;
  }
  itemEntity = v4->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_21;
  svals = itemEntity->fields.svals;
  if ( !svals )
  {
    v14 = (DataVals_array *)sub_B5D5DC(DataVals___TypeInfo, 1LL);
    v20 = (DataVals_o *)sub_B5D694(DataVals_TypeInfo);
    DataVals___ctor(v20, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v14 )
    {
      if ( v20 )
      {
        this = (WarBoardItemData_o *)sub_B5D684(v20, v14->obj.klass->_1.element_class);
        if ( !this )
        {
LABEL_22:
          v23 = sub_B5D6BC();
          sub_B5D668(v23, 0LL);
        }
      }
      if ( !v14->max_length )
        goto LABEL_20;
      v14->m_Items[0] = v20;
      sub_B5D560(v14->m_Items);
      return v14;
    }
LABEL_21:
    sub_B5D69C(this, method);
  }
  this = (WarBoardItemData_o *)sub_B5D5DC(DataVals___TypeInfo, svals->max_length);
  v13 = *(_QWORD *)&svals->max_length;
  v14 = (DataVals_array *)this;
  if ( (int)v13 >= 1 )
  {
    v15 = 0LL;
    m_Items = svals->m_Items;
    p_forceId = &this->fields.forceId;
    while ( v15 < (unsigned int)v13 )
    {
      v18 = *m_Items;
      v19 = (DataVals_o *)sub_B5D694(DataVals_TypeInfo);
      DataVals___ctor(v19, v18, 0LL);
      if ( !v14 )
        goto LABEL_21;
      if ( v19 )
      {
        this = (WarBoardItemData_o *)sub_B5D684(v19, v14->obj.klass->_1.element_class);
        if ( !this )
          goto LABEL_22;
      }
      if ( v15 >= v14->max_length )
        break;
      *(_QWORD *)p_forceId = v19;
      sub_B5D560(p_forceId);
      LODWORD(v13) = svals->max_length;
      ++v15;
      ++m_Items;
      p_forceId += 2;
      if ( (__int64)v15 >= (int)v13 )
        return v14;
    }
LABEL_20:
    v22 = sub_B5D6C8(this);
    sub_B5D668(v22, 0LL);
  }
  return v14;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct WarBoardItemEntity_o *itemEntity; // x8
  int baseImageId; // w8
  Il2CppObject *v13; // x0
  int v15; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E5263 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_21511/*"onBoard_itembase_{0}"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_21510/*"onBoard_itembase"*/, v8, v9, v10);
    byte_42E5263 = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    return (System_String_o *)StringLiteral_21510/*"onBoard_itembase"*/;
  baseImageId = itemEntity->fields.baseImageId;
  if ( baseImageId <= 0 )
    return (System_String_o *)StringLiteral_21510/*"onBoard_itembase"*/;
  v15 = baseImageId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  return System_String__Format((System_String_o *)StringLiteral_21511/*"onBoard_itembase_{0}"*/, v13, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_StaticFields *p_effectName; // x8

  if ( (byte_42E5262 & 1) == 0 )
  {
    sub_B5D5C4(&string_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5262 = 1;
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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_StaticFields *p_name; // x8

  if ( (byte_42E5261 & 1) == 0 )
  {
    sub_B5D5C4(&string_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5261 = 1;
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
  sub_B5D560(&this->fields._individuality_k__BackingField);
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


void __fastcall WarBoardItemData_SaveData___ctor_23084892(
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.owner, (System_Int32_array **)owner, v5, v6, v7, v8, v9, v10);
  WarBoardItemData_SaveData__Save(this, v11);
  v19 = this->fields.owner;
  if ( !v19 )
    sub_B5D69C(0LL, v12);
  v19->fields.localSaveData = this;
  sub_B5D560(
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
      sub_B5D69C(this, method);
    }
    v13->fields.pieceIndex = this->fields.pieceIndex;
  }
}


void __fastcall WarBoardItemData_SaveData__Save(WarBoardItemData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardItemData_o *owner; // x8

  owner = this->fields.owner;
  if ( !owner )
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, 0LL);
  Item = WarBoardData__GetItem(data, this->fields.squareIndex, 0LL);
  this->fields.owner = Item;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.owner, (System_Int32_array **)Item, v5, v6, v7, v8, v9, v10);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_B5D560(
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
    sub_B5D69C(0LL, method);
  WarBoardPieceData__ChangeStatus(piece, 0LL);
}