void __fastcall WarBoardItemData___ctor(
        WarBoardItemData_o *this,
        WarBoardStageLayoutEntity_o *layout,
        WarBoardUserGetItemData_o *getItemData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  struct System_Int32_array *Individuality; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  Il2CppObject *Entity; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4C1FC5A & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_WarBoardItemMaster___, layout);
    sub_1C3B764(&Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int__GetEntity__, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4C1FC5A = 1;
  }
  *(_QWORD *)&this->fields.forceId = -1LL;
  *(_QWORD *)&this->fields.pieceIndex = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.serverData = getItemData;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.serverData, (int64_t)getItemData, v9, v10, v11, v12, v13, v14);
  if ( !layout
    || (this->fields._squareIndex_k__BackingField = layout->fields.squareIndex,
        this->fields.itemId = layout->fields.effectId,
        Individuality = WarBoardStageLayoutEntity__GetIndividuality(layout, 0LL),
        this->fields._individuality_k__BackingField = Individuality,
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&this->fields._individuality_k__BackingField,
          (int64_t)Individuality,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_WarBoardItemMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v16);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.itemId,
             (const MethodInfo_329AE48 *)Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int__GetEntity__);
  this->fields.itemEntity = (struct WarBoardItemEntity_o *)Entity;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.itemEntity, (int64_t)Entity, v25, v26, v27, v28, v29, v30);
  this->fields._isUse_k__BackingField = 0;
  *(_QWORD *)&this->fields.forceId = -1LL;
  this->fields.pieceIndex = -1;
  if ( getItemData )
  {
    this->fields._isUse_k__BackingField = getItemData->fields.isUse;
    *(_QWORD *)&this->fields.forceId = *(_QWORD *)&getItemData->fields.forceId;
    this->fields.pieceIndex = getItemData->fields.pieceIndex;
  }
}


bool __fastcall WarBoardItemData__CheckEnableGet(
        WarBoardItemData_o *this,
        WarBoardPieceData_o *piece,
        const MethodInfo *method)
{
  if ( !piece )
    sub_1C3B9C0(this, 0LL);
  return piece->fields._type_k__BackingField != 1;
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
  int32_t type_k__BackingField; // w19

  if ( !piece )
    sub_1C3B9C0(this, 0LL);
  type_k__BackingField = piece->fields._type_k__BackingField;
  if ( type_k__BackingField != 1 )
  {
    *(_QWORD *)&this->fields.forceId = *(_QWORD *)&piece->fields._forceId_k__BackingField;
    this->fields.pieceIndex = piece->fields._index_k__BackingField;
    WarBoardItemData__Use(this, piece, taskList, 0, method);
  }
  return type_k__BackingField != 1;
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
    || (WarBoardItemData_SaveData__Save(localSaveData, method),
        (localSaveData = (WarBoardItemData_SaveData_o *)this->fields.component) == 0LL) )
  {
    sub_1C3B9C0(localSaveData, method);
  }
  WarBoardItemComponent__Reset((WarBoardItemComponent_o *)localSaveData, 0LL);
}


void __fastcall WarBoardItemData__SetComponent(
        WarBoardItemData_o *this,
        WarBoardItemComponent_o *component,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.component = component;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.component,
    (int64_t)component,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardItemData__SetItemEnable(WarBoardItemData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardItemComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_1C3B9C0(0LL, enable);
  WarBoardItemComponent__SetColliderEnable(component, enable, 0LL);
}


void __fastcall WarBoardItemData__SetTouchEnable(WarBoardItemData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardItemComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_1C3B9C0(0LL, enable);
  WarBoardItemComponent__SetTouchEnable(component, enable, 0LL);
}


System_String_o *__fastcall WarBoardItemData__ToJson(WarBoardItemData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct WarBoardUserGetItemData_o *serverData; // x20
  struct WarBoardUserGetItemData_o **p_serverData; // x21
  Il2CppObject *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4C1FC61 & 1) == 0 )
  {
    sub_1C3B764(&JsonManager_TypeInfo, method);
    sub_1C3B764(&WarBoardUserGetItemData_TypeInfo, v3);
    byte_4C1FC61 = 1;
  }
  p_serverData = &this->fields.serverData;
  serverData = this->fields.serverData;
  if ( !serverData )
  {
    v6 = (Il2CppObject *)sub_1C3B9B0(WarBoardUserGetItemData_TypeInfo);
    System_Object___ctor(v6, 0LL);
    *p_serverData = (struct WarBoardUserGetItemData_o *)v6;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.serverData, (int64_t)v6, v7, v8, v9, v10, v11, v12);
    serverData = *p_serverData;
    if ( !*p_serverData )
      sub_1C3B9C0(v13, v14);
    serverData->fields.squareIndex = this->fields._squareIndex_k__BackingField;
  }
  *(_QWORD *)&serverData->fields.forceId = *(_QWORD *)&this->fields.forceId;
  serverData->fields.pieceIndex = this->fields.pieceIndex;
  serverData->fields.isUse = this->fields._isUse_k__BackingField;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)serverData, 0, 0, 0LL);
}


void __fastcall WarBoardItemData__UpdateFromServerData(
        WarBoardItemData_o *this,
        WarBoardDataEntity_o *warBoardDataEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *getItemInfo; // x20
  System_Func_object__bool__o *v8; // x21
  Il2CppObject *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct WarBoardUserGetItemData_o *serverData; // x8

  if ( (byte_4C1FC60 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___, warBoardDataEnt);
    sub_1C3B764(&System_Func_WarBoardUserGetItemData__bool__TypeInfo, v5);
    sub_1C3B764(&Method_WarBoardItemData__UpdateFromServerData_b__60_0__, v6);
    byte_4C1FC60 = 1;
  }
  if ( warBoardDataEnt )
  {
    getItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEnt->fields.getItemInfo;
    v8 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v8,
      (Il2CppObject *)this,
      Method_WarBoardItemData__UpdateFromServerData_b__60_0__,
      0LL);
    v9 = System_Linq_Enumerable__FirstOrDefault_object__50415372(
           getItemInfo,
           (System_Func_TSource__bool__o *)v8,
           (const MethodInfo_301470C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
    this->fields.serverData = (struct WarBoardUserGetItemData_o *)v9;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.serverData, (int64_t)v9, v10, v11, v12, v13, v14, v15);
    serverData = this->fields.serverData;
    if ( serverData )
    {
      *(_QWORD *)&this->fields.forceId = *(_QWORD *)&serverData->fields.forceId;
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
  __int64 v17; // x21
  __int64 component; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t *v26; // x23
  __int64 v27; // x8
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_array *svals; // x8
  System_String_o *v30; // x24
  DataVals_o *v31; // x0
  __int64 v32; // x8
  int v33; // w25
  __int64 v34; // x24
  int64_t v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct WarBoardItemEntity_o *v48; // x8
  int64_t funcId; // x1
  const MethodInfo *v50; // x1
  DataVals_array *DataValsList; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  BattleServantData_o *v58; // x22
  int32_t v59; // w0
  int64_t v60; // x22
  WarBoardTaskBase_TaskCallback_o *v61; // x23
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  Il2CppClass **v77; // x0
  Il2CppObject *Instance; // x20
  __int64 v79; // x21
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  __int64 v86; // x0

  if ( (byte_4C1FC5E & 1) == 0 )
  {
    sub_1C3B764(&DataVals_TypeInfo, piece);
    sub_1C3B764(&WarBoardManager_ExecuteProcParam_TypeInfo, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v10);
    sub_1C3B764(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_1C3B764(&WarBoardTaskBase_TaskCallback_TypeInfo, v12);
    sub_1C3B764(&Method_WarBoardItemData___c__DisplayClass54_0__Use_b__0__, v13);
    sub_1C3B764(&WarBoardItemData___c__DisplayClass54_0_TypeInfo, v14);
    sub_1C3B764(&WarBoardCallbackTask_TypeInfo, v15);
    sub_1C3B764(&WarBoardTaskBase___TypeInfo, v16);
    byte_4C1FC5E = 1;
  }
  v17 = sub_1C3B9B0(WarBoardItemData___c__DisplayClass54_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_31;
  *(_QWORD *)(v17 + 16) = piece;
  v26 = (int64_t *)(v17 + 16);
  sub_1C3B708((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)piece, v20, v21, v22, v23, v24, v25);
  v27 = *(_QWORD *)(v17 + 16);
  if ( !v27 )
    goto LABEL_31;
  if ( *(_DWORD *)(v27 + 16) == 1 )
    return;
  component = (__int64)this->fields.component;
  this->fields._isUse_k__BackingField = 1;
  if ( !component )
    goto LABEL_31;
  WarBoardItemComponent__OnUse((WarBoardItemComponent_o *)component, *(_DWORD *)(v27 + 64), taskList, 0, 0LL);
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_31;
  svals = itemEntity->fields.svals;
  if ( !svals )
    goto LABEL_31;
  if ( !svals->max_length )
    goto LABEL_32;
  v30 = svals->m_Items[0];
  v31 = (DataVals_o *)sub_1C3B9B0(DataVals_TypeInfo);
  DataVals___ctor(v31, v30, 0LL);
  if ( !*v26 )
    goto LABEL_31;
  component = *(_QWORD *)(*v26 + 128);
  if ( !component )
    goto LABEL_31;
  BattleServantData__updateResultState((BattleServantData_o *)component, 0LL);
  if ( !*v26 )
    goto LABEL_31;
  v32 = *(_QWORD *)(*v26 + 128);
  if ( !v32 )
    goto LABEL_31;
  v33 = *(_DWORD *)(v32 + 24);
  v34 = sub_1C3B9B0(WarBoardManager_ExecuteProcParam_TypeInfo);
  *(_BYTE *)(v34 + 64) = 1;
  System_Object___ctor((Il2CppObject *)v34, 0LL);
  v35 = *v26;
  *(_QWORD *)(v34 + 16) = *v26;
  sub_1C3B708((PartyOrganizationUtility_o *)(v34 + 16), v35, v36, v37, v38, v39, v40, v41);
  *(_DWORD *)(v34 + 24) = v33;
  *(_DWORD *)(v34 + 28) = v33;
  v48 = this->fields.itemEntity;
  if ( !v48 )
    goto LABEL_31;
  funcId = (int64_t)v48->fields.funcId;
  *(_QWORD *)(v34 + 32) = funcId;
  sub_1C3B708((PartyOrganizationUtility_o *)(v34 + 32), funcId, v42, v43, v44, v45, v46, v47);
  DataValsList = WarBoardItemData__getDataValsList(this, v50);
  *(_QWORD *)(v34 + 40) = DataValsList;
  sub_1C3B708((PartyOrganizationUtility_o *)(v34 + 40), (int64_t)DataValsList, v52, v53, v54, v55, v56, v57);
  *(_BYTE *)(v34 + 64) = 0;
  component = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !component )
    goto LABEL_31;
  component = WarBoardManager__ExecuteProcList(
                (WarBoardManager_o *)component,
                (WarBoardManager_ExecuteProcParam_o *)v34,
                0LL,
                0LL,
                0LL,
                0LL,
                0LL,
                0LL);
  if ( !*v26 )
    goto LABEL_31;
  v58 = *(BattleServantData_o **)(*v26 + 128);
  if ( !v58 )
    goto LABEL_31;
  v59 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v58->klass->vtable._13_get_resultHp.method)(
          v58,
          v58->klass->vtable._14_set_resultHp.methodPtr);
  BattleServantData__setHp(v58, v59, 0, 0LL);
  v60 = sub_1C3B9B0(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v60, 0LL, 0LL);
  v61 = (WarBoardTaskBase_TaskCallback_o *)sub_1C3B9B0(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v61,
    (Il2CppObject *)v17,
    Method_WarBoardItemData___c__DisplayClass54_0__Use_b__0__,
    0LL);
  if ( !v60 )
    goto LABEL_31;
  *(_QWORD *)(v60 + 40) = v61;
  sub_1C3B708((PartyOrganizationUtility_o *)(v60 + 40), (int64_t)v61, v62, v63, v64, v65, v66, v67);
  if ( taskList )
  {
    items = taskList->fields._items;
    v75 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++taskList->fields._version;
    if ( items )
    {
      size = taskList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)taskList,
          (Il2CppObject *)v60,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
      }
      else
      {
        v77 = &items->obj.klass + size;
        taskList->fields._size = size + 1;
        v77[4] = (Il2CppClass *)v60;
        sub_1C3B708((PartyOrganizationUtility_o *)(v77 + 4), v60, v68, v69, v70, v71, v72, v73);
      }
      return;
    }
LABEL_31:
    sub_1C3B9C0(component, v19);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  component = sub_1C3B80C(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !component )
    goto LABEL_31;
  v79 = component;
  component = sub_1C3B8A0(v60, *(_QWORD *)(*(_QWORD *)component + 64LL));
  if ( !component )
  {
    v86 = sub_1C3B9E4();
    sub_1C3B88C(v86, 0LL);
  }
  if ( !*(_DWORD *)(v79 + 24) )
LABEL_32:
    sub_1C3B9C8(component, v19);
  *(_QWORD *)(v79 + 32) = v60;
  sub_1C3B708((PartyOrganizationUtility_o *)(v79 + 32), v60, v80, v81, v82, v83, v84, v85);
  if ( !Instance )
    goto LABEL_31;
  if ( isInsertTask )
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v79, 0LL);
  else
    WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v79, 0LL);
}


bool __fastcall WarBoardItemData___UpdateFromServerData_b__60_0(
        WarBoardItemData_o *this,
        WarBoardUserGetItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
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
  PartyOrganizationUtility_o *p_forceId; // x20
  System_String_o *v12; // x22
  DataVals_o *v13; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  DataVals_o *v20; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v28; // x0

  v2 = this;
  if ( (byte_4C1FC5F & 1) == 0 )
  {
    sub_1C3B764(&DataVals___TypeInfo, method);
    sub_1C3B764(&DataVals_TypeInfo, v3);
    this = (WarBoardItemData_o *)sub_1C3B764(&StringLiteral_1/*""*/, v4);
    byte_4C1FC5F = 1;
  }
  itemEntity = v2->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_21;
  svals = itemEntity->fields.svals;
  if ( !svals )
  {
    v8 = (DataVals_array *)sub_1C3B80C(DataVals___TypeInfo, 1LL);
    v20 = (DataVals_o *)sub_1C3B9B0(DataVals_TypeInfo);
    DataVals___ctor(v20, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v8 )
    {
      if ( v20 )
      {
        this = (WarBoardItemData_o *)sub_1C3B8A0(v20, v8->obj.klass->_1.element_class);
        if ( !this )
        {
LABEL_22:
          v28 = sub_1C3B9E4();
          sub_1C3B88C(v28, 0LL);
        }
      }
      if ( !v8->max_length )
        goto LABEL_20;
      v8->m_Items[0] = v20;
      sub_1C3B708((PartyOrganizationUtility_o *)v8->m_Items, (int64_t)v20, v21, v22, v23, v24, v25, v26);
      return v8;
    }
LABEL_21:
    sub_1C3B9C0(this, method);
  }
  this = (WarBoardItemData_o *)sub_1C3B80C(DataVals___TypeInfo, svals->max_length);
  v7 = *(_QWORD *)&svals->max_length;
  v8 = (DataVals_array *)this;
  if ( (int)v7 >= 1 )
  {
    v9 = 0LL;
    m_Items = svals->m_Items;
    p_forceId = (PartyOrganizationUtility_o *)&this->fields.forceId;
    while ( v9 < (unsigned int)v7 )
    {
      v12 = *m_Items;
      v13 = (DataVals_o *)sub_1C3B9B0(DataVals_TypeInfo);
      DataVals___ctor(v13, v12, 0LL);
      if ( !v8 )
        goto LABEL_21;
      if ( v13 )
      {
        this = (WarBoardItemData_o *)sub_1C3B8A0(v13, v8->obj.klass->_1.element_class);
        if ( !this )
          goto LABEL_22;
      }
      if ( v9 >= v8->max_length )
        break;
      p_forceId->klass = (PartyOrganizationUtility_c *)v13;
      sub_1C3B708(p_forceId, (int64_t)v13, v14, v15, v16, v17, v18, v19);
      LODWORD(v7) = svals->max_length;
      ++v9;
      ++m_Items;
      p_forceId = (PartyOrganizationUtility_o *)((char *)p_forceId + 8);
      if ( (__int64)v9 >= (int)v7 )
        return v8;
    }
LABEL_20:
    sub_1C3B9C8(this, method);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct WarBoardItemEntity_o *itemEntity; // x8
  int baseImageId; // w8
  Il2CppObject *v10; // x0
  int v12; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4C1FC5D & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, method);
    sub_1C3B764(&StringLiteral_22699/*"scene.count.build"*/, v6);
    sub_1C3B764(&StringLiteral_22698/*"scene.count"*/, v7);
    byte_4C1FC5D = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    return (System_String_o *)StringLiteral_22698/*"scene.count"*/;
  baseImageId = itemEntity->fields.baseImageId;
  if ( baseImageId <= 0 )
    return (System_String_o *)StringLiteral_22698/*"scene.count"*/;
  v12 = baseImageId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_22699/*"scene.count.build"*/, v10, 0LL);
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

  if ( (byte_4C1FC5C & 1) == 0 )
  {
    sub_1C3B764(&string_TypeInfo, method);
    byte_4C1FC5C = 1;
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
    sub_1C3B9C0(this, method);
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

  if ( (byte_4C1FC5B & 1) == 0 )
  {
    sub_1C3B764(&string_TypeInfo, method);
    byte_4C1FC5B = 1;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._individuality_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._individuality_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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


void __fastcall WarBoardItemData_SaveData___ctor_36891144(
        WarBoardItemData_SaveData_o *this,
        WarBoardItemData_o *owner,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct WarBoardItemData_o *v19; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.owner = owner;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.owner, (int64_t)owner, v5, v6, v7, v8, v9, v10);
  WarBoardItemData_SaveData__Save(this, v11);
  v19 = this->fields.owner;
  if ( !v19 )
    sub_1C3B9C0(0LL, v12);
  v19->fields.localSaveData = this;
  sub_1C3B708((PartyOrganizationUtility_o *)&v19->fields.localSaveData, (int64_t)this, v13, v14, v15, v16, v17, v18);
}


void __fastcall WarBoardItemData_SaveData__Load(WarBoardItemData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardItemData_o *owner; // x12
  bool isUse; // w8
  struct WarBoardUserGetItemData_o *serverData; // x13
  int32_t forceId; // w9
  int32_t groupId; // w10
  int32_t pieceIndex; // w11

  owner = this->fields.owner;
  if ( owner )
  {
    isUse = this->fields.isUse;
    serverData = owner->fields.serverData;
    owner->fields._isUse_k__BackingField = isUse;
    forceId = this->fields.forceId;
    owner->fields.forceId = forceId;
    groupId = this->fields.groupId;
    owner->fields.groupId = groupId;
    pieceIndex = this->fields.pieceIndex;
    owner->fields.pieceIndex = pieceIndex;
    if ( serverData )
    {
      serverData->fields.isUse = isUse;
      serverData->fields.forceId = forceId;
      serverData->fields.groupId = groupId;
      serverData->fields.pieceIndex = pieceIndex;
    }
  }
}


void __fastcall WarBoardItemData_SaveData__Save(WarBoardItemData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardItemData_o *owner; // x8

  owner = this->fields.owner;
  if ( !owner )
    sub_1C3B9C0(this, method);
  this->fields.squareIndex = owner->fields._squareIndex_k__BackingField;
  this->fields.isUse = owner->fields._isUse_k__BackingField;
  *(_QWORD *)&this->fields.forceId = *(_QWORD *)&owner->fields.forceId;
  this->fields.pieceIndex = owner->fields.pieceIndex;
}


void __fastcall WarBoardItemData_SaveData__SetOwner(
        WarBoardItemData_SaveData_o *this,
        WarBoardData_o *data,
        const MethodInfo *method)
{
  struct WarBoardItemData_o *Item; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct WarBoardItemData_o *owner; // x0

  if ( !data )
    sub_1C3B9C0(this, 0LL);
  Item = WarBoardData__GetItem(data, this->fields.squareIndex, 0LL);
  this->fields.owner = Item;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.owner, (int64_t)Item, v5, v6, v7, v8, v9, v10);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_1C3B708((PartyOrganizationUtility_o *)&owner->fields.localSaveData, (int64_t)this, v11, v12, v13, v14, v15, v16);
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
    sub_1C3B9C0(0LL, method);
  WarBoardPieceData__ChangeStatus(piece, method);
}