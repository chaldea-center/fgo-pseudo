void __fastcall WarBoardItemData___ctor(
        WarBoardItemData_o *this,
        WarBoardStageLayoutEntity_o *layout,
        WarBoardUserGetItemData_o *getItemData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  struct System_Int32_array *Individuality; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  Il2CppObject *Entity; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4B13F72 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarBoardItemMaster___, layout, getItemData);
    sub_1BCA7E0(&Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B13F72 = 1;
  }
  *(_QWORD *)&this->fields.forceId = -1LL;
  *(_QWORD *)&this->fields.pieceIndex = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.serverData = getItemData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.serverData,
    (int64_t)getItemData,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !layout
    || (this->fields._squareIndex_k__BackingField = layout->fields.squareIndex,
        this->fields.itemId = layout->fields.effectId,
        Individuality = WarBoardStageLayoutEntity__GetIndividuality(layout, 0LL),
        this->fields._individuality_k__BackingField = Individuality,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields._individuality_k__BackingField,
          (int64_t)Individuality,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarBoardItemMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v18);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.itemId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int__GetEntity__);
  this->fields.itemEntity = (struct WarBoardItemEntity_o *)Entity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.itemEntity, (int64_t)Entity, v27, v28, v29, v30, v31, v32);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(localSaveData, method);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.component,
    (int64_t)component,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemData__SetItemEnable(WarBoardItemData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardItemComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_1BCAA3C(0LL, enable);
  WarBoardItemComponent__SetColliderEnable(component, enable, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemData__SetTouchEnable(WarBoardItemData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardItemComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_1BCAA3C(0LL, enable);
  WarBoardItemComponent__SetTouchEnable(component, enable, 0LL);
}


System_String_o *__fastcall WarBoardItemData__ToJson(WarBoardItemData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct WarBoardUserGetItemData_o *serverData; // x20
  struct WarBoardUserGetItemData_o **p_serverData; // x21
  Il2CppObject *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x0

  if ( (byte_4B13F79 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, method, v2);
    sub_1BCA7E0(&WarBoardUserGetItemData_TypeInfo, v5, v6);
    byte_4B13F79 = 1;
  }
  p_serverData = &this->fields.serverData;
  serverData = this->fields.serverData;
  if ( !serverData )
  {
    v9 = (Il2CppObject *)sub_1BCAA2C(WarBoardUserGetItemData_TypeInfo, method, v2, v3);
    System_Object___ctor(v9, 0LL);
    *p_serverData = (struct WarBoardUserGetItemData_o *)v9;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.serverData, (int64_t)v9, v10, v11, v12, v13, v14, v15);
    serverData = *p_serverData;
    if ( !*p_serverData )
      sub_1BCAA3C(v16, method);
    serverData->fields.squareIndex = this->fields._squareIndex_k__BackingField;
  }
  *(_QWORD *)&serverData->fields.forceId = *(_QWORD *)&this->fields.forceId;
  serverData->fields.pieceIndex = this->fields.pieceIndex;
  serverData->fields.isUse = this->fields._isUse_k__BackingField;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
  return JsonManager__toJson((Il2CppObject *)serverData, 0, 0, 0LL);
}


void __fastcall WarBoardItemData__UpdateFromServerData(
        WarBoardItemData_o *this,
        WarBoardDataEntity_o *warBoardDataEnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_IEnumerable_TSource__o *getItemInfo; // x20
  System_Func_object__bool__o *v11; // x21
  Il2CppObject *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct WarBoardUserGetItemData_o *serverData; // x8

  if ( (byte_4B13F78 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___, warBoardDataEnt, method);
    sub_1BCA7E0(&System_Func_WarBoardUserGetItemData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardItemData__UpdateFromServerData_b__60_0__, v8, v9);
    byte_4B13F78 = 1;
  }
  if ( warBoardDataEnt )
  {
    getItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEnt->fields.getItemInfo;
    v11 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                           System_Func_WarBoardUserGetItemData__bool__TypeInfo,
                                           warBoardDataEnt,
                                           method,
                                           v3);
    System_Func_object__bool____ctor(
      v11,
      (Il2CppObject *)this,
      Method_WarBoardItemData__UpdateFromServerData_b__60_0__,
      0LL);
    v12 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
            getItemInfo,
            (System_Func_TSource__bool__o *)v11,
            (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
    this->fields.serverData = (struct WarBoardUserGetItemData_o *)v12;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.serverData, (int64_t)v12, v13, v14, v15, v16, v17, v18);
    serverData = this->fields.serverData;
    if ( serverData )
    {
      *(_QWORD *)&this->fields.forceId = *(_QWORD *)&serverData->fields.forceId;
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x21
  __int64 component; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t *v34; // x23
  __int64 v35; // x8
  __int64 v36; // x2
  __int64 v37; // x3
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_array *svals; // x8
  System_String_o *v40; // x24
  DataVals_o *v41; // x0
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x8
  int v45; // w25
  __int64 v46; // x24
  int64_t v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct WarBoardItemEntity_o *v60; // x8
  int64_t funcId; // x1
  const MethodInfo *v62; // x1
  DataVals_array *DataValsList; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  BattleServantData_o *v70; // x22
  int32_t v71; // w0
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  int64_t v75; // x22
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  WarBoardTaskBase_TaskCallback_o *v79; // x23
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v93; // x9
  __int64 size; // x10
  Il2CppClass **v95; // x0
  Il2CppObject *Instance; // x20
  __int64 v97; // x21
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  __int64 v104; // x0

  if ( (byte_4B13F76 & 1) == 0 )
  {
    sub_1BCA7E0(&DataVals_TypeInfo, piece, taskList);
    sub_1BCA7E0(&WarBoardManager_ExecuteProcParam_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_WarBoardItemData___c__DisplayClass54_0__Use_b__0__, v17, v18);
    sub_1BCA7E0(&WarBoardItemData___c__DisplayClass54_0_TypeInfo, v19, v20);
    sub_1BCA7E0(&WarBoardCallbackTask_TypeInfo, v21, v22);
    sub_1BCA7E0(&WarBoardTaskBase___TypeInfo, v23, v24);
    byte_4B13F76 = 1;
  }
  v25 = sub_1BCAA2C(WarBoardItemData___c__DisplayClass54_0_TypeInfo, piece, taskList, isInsertTask);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_31;
  *(_QWORD *)(v25 + 16) = piece;
  v34 = (int64_t *)(v25 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 16), (int64_t)piece, v28, v29, v30, v31, v32, v33);
  v35 = *(_QWORD *)(v25 + 16);
  if ( !v35 )
    goto LABEL_31;
  if ( *(_DWORD *)(v35 + 16) == 1 )
    return;
  component = (__int64)this->fields.component;
  this->fields._isUse_k__BackingField = 1;
  if ( !component )
    goto LABEL_31;
  WarBoardItemComponent__OnUse((WarBoardItemComponent_o *)component, *(_DWORD *)(v35 + 64), taskList, 0, 0LL);
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_31;
  svals = itemEntity->fields.svals;
  if ( !svals )
    goto LABEL_31;
  if ( !svals->max_length )
    goto LABEL_32;
  v40 = svals->m_Items[0];
  v41 = (DataVals_o *)sub_1BCAA2C(DataVals_TypeInfo, v27, v36, v37);
  DataVals___ctor(v41, v40, 0LL);
  if ( !*v34 )
    goto LABEL_31;
  component = *(_QWORD *)(*v34 + 128);
  if ( !component )
    goto LABEL_31;
  BattleServantData__updateResultState((BattleServantData_o *)component, 0LL);
  if ( !*v34 )
    goto LABEL_31;
  v44 = *(_QWORD *)(*v34 + 128);
  if ( !v44 )
    goto LABEL_31;
  v45 = *(_DWORD *)(v44 + 24);
  v46 = sub_1BCAA2C(WarBoardManager_ExecuteProcParam_TypeInfo, v27, v42, v43);
  *(_BYTE *)(v46 + 64) = 1;
  System_Object___ctor((Il2CppObject *)v46, 0LL);
  v47 = *v34;
  *(_QWORD *)(v46 + 16) = *v34;
  sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 16), v47, v48, v49, v50, v51, v52, v53);
  *(_DWORD *)(v46 + 24) = v45;
  *(_DWORD *)(v46 + 28) = v45;
  v60 = this->fields.itemEntity;
  if ( !v60 )
    goto LABEL_31;
  funcId = (int64_t)v60->fields.funcId;
  *(_QWORD *)(v46 + 32) = funcId;
  sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 32), funcId, v54, v55, v56, v57, v58, v59);
  DataValsList = WarBoardItemData__getDataValsList(this, v62);
  *(_QWORD *)(v46 + 40) = DataValsList;
  sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 40), (int64_t)DataValsList, v64, v65, v66, v67, v68, v69);
  *(_BYTE *)(v46 + 64) = 0;
  component = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !component )
    goto LABEL_31;
  component = WarBoardManager__ExecuteProcList(
                (WarBoardManager_o *)component,
                (WarBoardManager_ExecuteProcParam_o *)v46,
                0LL,
                0LL,
                0LL,
                0LL,
                0LL,
                0LL);
  if ( !*v34 )
    goto LABEL_31;
  v70 = *(BattleServantData_o **)(*v34 + 128);
  if ( !v70 )
    goto LABEL_31;
  v71 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v70->klass->vtable._13_get_resultHp.method)(
          v70,
          v70->klass->vtable._14_set_resultHp.methodPtr);
  BattleServantData__setHp(v70, v71, 0, 0LL);
  v75 = sub_1BCAA2C(WarBoardCallbackTask_TypeInfo, v72, v73, v74);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v75, 0LL, 0LL);
  v79 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v76, v77, v78);
  WarBoardTaskBase_TaskCallback___ctor(
    v79,
    (Il2CppObject *)v25,
    Method_WarBoardItemData___c__DisplayClass54_0__Use_b__0__,
    0LL);
  if ( !v75 )
    goto LABEL_31;
  *(_QWORD *)(v75 + 40) = v79;
  sub_1BCA784((PartyOrganizationUtility_o *)(v75 + 40), (int64_t)v79, v80, v81, v82, v83, v84, v85);
  if ( taskList )
  {
    items = taskList->fields._items;
    v93 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++taskList->fields._version;
    if ( items )
    {
      size = taskList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)taskList,
          (Il2CppObject *)v75,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
      }
      else
      {
        v95 = &items->obj.klass + size;
        taskList->fields._size = size + 1;
        v95[4] = (Il2CppClass *)v75;
        sub_1BCA784((PartyOrganizationUtility_o *)(v95 + 4), v75, v86, v87, v88, v89, v90, v91);
      }
      return;
    }
LABEL_31:
    sub_1BCAA3C(component, v27);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  component = sub_1BCA888(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !component )
    goto LABEL_31;
  v97 = component;
  component = sub_1BCA91C(v75, *(_QWORD *)(*(_QWORD *)component + 64LL));
  if ( !component )
  {
    v104 = sub_1BCAA60(0LL);
    sub_1BCA908(v104, 0LL);
  }
  if ( !*(_DWORD *)(v97 + 24) )
LABEL_32:
    sub_1BCAA44(component, v27);
  *(_QWORD *)(v97 + 32) = v75;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 32), v75, v98, v99, v100, v101, v102, v103);
  if ( !Instance )
    goto LABEL_31;
  if ( isInsertTask )
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v97, 0LL);
  else
    WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v97, 0LL);
}


bool __fastcall WarBoardItemData___UpdateFromServerData_b__60_0(
        WarBoardItemData_o *this,
        WarBoardUserGetItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.squareIndex == this->fields._squareIndex_k__BackingField;
}


DataVals_array *__fastcall WarBoardItemData__getDataValsList(WarBoardItemData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardItemData_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_array *svals; // x23
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x8
  DataVals_array *v13; // x19
  unsigned __int64 v14; // x24
  System_String_o **m_Items; // x25
  PartyOrganizationUtility_o *p_forceId; // x20
  System_String_o *v17; // x22
  DataVals_o *v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  DataVals_o *v28; // x20
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v36; // x0

  v3 = this;
  if ( (byte_4B13F77 & 1) == 0 )
  {
    sub_1BCA7E0(&DataVals___TypeInfo, method, v2);
    sub_1BCA7E0(&DataVals_TypeInfo, v4, v5);
    this = (WarBoardItemData_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B13F77 = 1;
  }
  itemEntity = v3->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_21;
  svals = itemEntity->fields.svals;
  if ( !svals )
  {
    v13 = (DataVals_array *)sub_1BCA888(DataVals___TypeInfo, 1LL);
    v28 = (DataVals_o *)sub_1BCAA2C(DataVals_TypeInfo, v25, v26, v27);
    DataVals___ctor(v28, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v13 )
    {
      if ( v28 )
      {
        this = (WarBoardItemData_o *)sub_1BCA91C(v28, v13->obj.klass->_1.element_class);
        if ( !this )
        {
LABEL_22:
          v36 = sub_1BCAA60(this);
          sub_1BCA908(v36, 0LL);
        }
      }
      if ( !v13->max_length )
        goto LABEL_20;
      v13->m_Items[0] = v28;
      sub_1BCA784((PartyOrganizationUtility_o *)v13->m_Items, (int64_t)v28, v29, v30, v31, v32, v33, v34);
      return v13;
    }
LABEL_21:
    sub_1BCAA3C(this, method);
  }
  this = (WarBoardItemData_o *)sub_1BCA888(DataVals___TypeInfo, svals->max_length);
  v12 = *(_QWORD *)&svals->max_length;
  v13 = (DataVals_array *)this;
  if ( (int)v12 >= 1 )
  {
    v14 = 0LL;
    m_Items = svals->m_Items;
    p_forceId = (PartyOrganizationUtility_o *)&this->fields.forceId;
    while ( v14 < (unsigned int)v12 )
    {
      v17 = *m_Items;
      v18 = (DataVals_o *)sub_1BCAA2C(DataVals_TypeInfo, method, v10, v11);
      DataVals___ctor(v18, v17, 0LL);
      if ( !v13 )
        goto LABEL_21;
      if ( v18 )
      {
        this = (WarBoardItemData_o *)sub_1BCA91C(v18, v13->obj.klass->_1.element_class);
        if ( !this )
          goto LABEL_22;
      }
      if ( v14 >= v13->max_length )
        break;
      p_forceId->klass = (PartyOrganizationUtility_c *)v18;
      sub_1BCA784(p_forceId, (int64_t)v18, v19, v20, v21, v22, v23, v24);
      LODWORD(v12) = svals->max_length;
      ++v14;
      ++m_Items;
      p_forceId = (PartyOrganizationUtility_o *)((char *)p_forceId + 8);
      if ( (__int64)v14 >= (int)v12 )
        return v13;
    }
LABEL_20:
    sub_1BCAA44(this, method);
  }
  return v13;
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
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct WarBoardItemEntity_o *itemEntity; // x8
  int baseImageId; // w8
  Il2CppObject *v10; // x0
  int v12; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4B13F75 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_22481/*"onBoard_itembase_{0}"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_22480/*"onBoard_itembase"*/, v6, v7);
    byte_4B13F75 = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    return (System_String_o *)StringLiteral_22480/*"onBoard_itembase"*/;
  baseImageId = itemEntity->fields.baseImageId;
  if ( baseImageId <= 0 )
    return (System_String_o *)StringLiteral_22480/*"onBoard_itembase"*/;
  v12 = baseImageId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return System_String__Format((System_String_o *)StringLiteral_22481/*"onBoard_itembase_{0}"*/, v10, 0LL);
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
  __int64 v2; // x2
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_StaticFields *p_effectName; // x8

  if ( (byte_4B13F74 & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, method, v2);
    byte_4B13F74 = 1;
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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_StaticFields *p_name; // x8

  if ( (byte_4B13F73 & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, method, v2);
    byte_4B13F73 = 1;
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
  sub_1BCA784(
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


void __fastcall WarBoardItemData_SaveData___ctor_36234772(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.owner, (int64_t)owner, v5, v6, v7, v8, v9, v10);
  WarBoardItemData_SaveData__Save(this, v11);
  v19 = this->fields.owner;
  if ( !v19 )
    sub_1BCAA3C(0LL, v12);
  v19->fields.localSaveData = this;
  sub_1BCA784((PartyOrganizationUtility_o *)&v19->fields.localSaveData, (int64_t)this, v13, v14, v15, v16, v17, v18);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, 0LL);
  Item = WarBoardData__GetItem(data, this->fields.squareIndex, 0LL);
  this->fields.owner = Item;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.owner, (int64_t)Item, v5, v6, v7, v8, v9, v10);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_1BCA784((PartyOrganizationUtility_o *)&owner->fields.localSaveData, (int64_t)this, v11, v12, v13, v14, v15, v16);
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
    sub_1BCAA3C(0LL, method);
  WarBoardPieceData__ChangeStatus(piece, method);
}