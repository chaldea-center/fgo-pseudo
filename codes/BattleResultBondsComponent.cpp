void __fastcall BattleResultBondsComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleResultBondsComponent_c *v7; // x8
  struct BattleResultBondsComponent_StaticFields *static_fields; // x0
  System_Int32_array **v9; // x1
  struct BattleResultBondsComponent_StaticFields *v10; // x0
  System_Int32_array **v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42B0A19 & 1) == 0 )
  {
    sub_B52984(&BattleResultBondsComponent_TypeInfo);
    sub_B52984(&StringLiteral_7007/*"GetNewSvt"*/);
    sub_B52984(&StringLiteral_6996/*"GetExistSvt"*/);
    byte_42B0A19 = 1;
  }
  BattleResultBondsComponent_TypeInfo->static_fields->SVT_GAP_5 = 178.0;
  BattleResultBondsComponent_TypeInfo->static_fields->SVT_GAP_6 = 150.0;
  v7 = BattleResultBondsComponent_TypeInfo;
  BattleResultBondsComponent_TypeInfo->static_fields->CONF_LABEL_MAX_WIDTH = 464;
  v7->static_fields->CONF_SERVANT_COIN_PLUS_HEIGHT = 18;
  static_fields = v7->static_fields;
  v9 = (System_Int32_array **)StringLiteral_7007/*"GetNewSvt"*/;
  static_fields->GET_NEW_SVT_KEY = (struct System_String_o *)StringLiteral_7007/*"GetNewSvt"*/;
  sub_B52920((BattleServantConfConponent_o *)&static_fields->GET_NEW_SVT_KEY, v9, v1, v2, v3, v4, v5, v6);
  v10 = BattleResultBondsComponent_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_6996/*"GetExistSvt"*/;
  v10->GET_EXIST_SVT_KEY = (struct System_String_o *)StringLiteral_6996/*"GetExistSvt"*/;
  sub_B52920((BattleServantConfConponent_o *)&v10->GET_EXIST_SVT_KEY, v11, v12, v13, v14, v15, v16, v17);
}


void __fastcall BattleResultBondsComponent___ctor(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  BattleResultBondsFigureComponent_o *v17; // x20
  const MethodInfo *v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42B0A18 & 1) == 0 )
  {
    sub_B52984(&BattleResultBondsFigureComponent_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo);
    byte_42B0A18 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.conflist = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.conflist, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  this->fields.buddyPointInfoWindowHeight = 366;
  this->fields.tempSaveTimeScale = 1.0;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
  this->fields.bondsList = (struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *)v10;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.bondsList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (BattleResultBondsFigureComponent_o *)sub_B52A54(BattleResultBondsFigureComponent_TypeInfo);
  BattleResultBondsFigureComponent___ctor(v17, v18);
  this->fields.bondsFigure = v17;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.bondsFigure,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleResultBondsComponent__CheckFormalJoin(
        BattleResultBondsComponent_o *this,
        BattleResultBondsIconComponent_o *collect,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct GetSvts_array *getJoinSvtList; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v8; // x21
  __int64 v9; // x26
  int max_length; // w9
  GetSvts_o *v11; // x8
  UserServantEntity_o *v12; // x24
  EventServantEntity_o *EventServant; // x22
  BattleResultBondsComponent___c_c *v14; // x0
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__62_0; // x23
  Il2CppObject *v17; // x25
  struct BattleResultBondsComponent___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x25
  __int64 v26; // x24
  System_Int32_array **v27; // x23
  GetSvtCoin_o *v28; // x25
  WarEntity_o *v29; // x8
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_o *v42; // x24
  CommonUI_o *v43; // x25
  __int64 v44; // x0
  __int64 v45; // x0
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_42B0A0A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    sub_B52984(&GetSvtCoin___TypeInfo);
    sub_B52984(&GetSvtCoin_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__);
    sub_B52984(&Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__);
    sub_B52984(&BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo);
    sub_B52984(&BattleResultBondsComponent___c_TypeInfo);
    sub_B52984(&StringLiteral_12527/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/);
    sub_B52984(&StringLiteral_18136/*"dialogIgnoreTime"*/);
    byte_42B0A0A = 1;
  }
  entity = 0LL;
  if ( this->fields.getJoinSvtList && !this->fields.isWarboard )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___),
          (getJoinSvtList = this->fields.getJoinSvtList) == 0LL) )
    {
LABEL_49:
      sub_B52A5C(Instance, v6);
    }
    v8 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
    v9 = 0LL;
    while ( 1 )
    {
      max_length = getJoinSvtList->max_length;
      if ( (int)v9 >= max_length )
        break;
      if ( (unsigned int)v9 >= max_length )
        goto LABEL_50;
      v11 = getJoinSvtList->m_Items[v9];
      if ( !v11 )
        goto LABEL_49;
      if ( v11->fields.isNew )
      {
        UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_18136/*"dialogIgnoreTime"*/, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      else
      {
        if ( !v8 )
          goto LABEL_49;
        Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      v8,
                                      v11->fields.userSvtId,
                                      (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( Instance )
        {
          v12 = (UserServantEntity_o *)Instance;
          Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
          if ( !collect )
            goto LABEL_49;
          if ( (_DWORD)Instance == collect->fields.svtId )
          {
            EventServant = UserServantEntity__getEventServant(v12, 0LL);
            if ( EventServant
              || (Instance = (DataManager_o *)UserServantEntity__getEventServantIgnoreEnd(v12, 0LL),
                  (EventServant = (EventServantEntity_o *)Instance) != 0LL) )
            {
              v14 = BattleResultBondsComponent___c_TypeInfo;
              if ( (BYTE3(BattleResultBondsComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
                v14 = BattleResultBondsComponent___c_TypeInfo;
              }
              static_fields = v14->static_fields;
              _9__62_0 = static_fields->__9__62_0;
              if ( !_9__62_0 )
              {
                if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v14);
                  static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
                }
                v17 = (Il2CppObject *)static_fields->__9;
                _9__62_0 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                System_Action___ctor(
                  _9__62_0,
                  v17,
                  Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__,
                  0LL);
                v18 = BattleResultBondsComponent___c_TypeInfo->static_fields;
                v18->__9__62_0 = _9__62_0;
                sub_B52920(
                  (BattleServantConfConponent_o *)&v18->__9__62_0,
                  (System_Int32_array **)_9__62_0,
                  v19,
                  v20,
                  v21,
                  v22,
                  v23,
                  v24);
              }
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SvtCoinMaster___);
              Instance = (DataManager_o *)UserServantEntity__getSvtId(v12, 0LL);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_49;
              Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                            Master_WarQuestSelectionMaster,
                                            &entity,
                                            (int32_t)Instance,
                                            (const MethodInfo_23E2334 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_49;
                if ( *(&entity->fields.id + 1) >= 1 )
                {
                  v26 = sub_B52A54(BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo);
                  BattleResultBondsComponent___c__DisplayClass62_0___ctor(
                    (BattleResultBondsComponent___c__DisplayClass62_0_o *)v26,
                    0LL);
                  v27 = (System_Int32_array **)sub_B5299C(GetSvtCoin___TypeInfo, 1LL);
                  v28 = (GetSvtCoin_o *)sub_B52A54(GetSvtCoin_TypeInfo);
                  GetSvtCoin___ctor(v28, 0LL);
                  v29 = entity;
                  if ( !entity )
                    goto LABEL_49;
                  if ( !v28 )
                    goto LABEL_49;
                  v28->fields.svtId = entity->fields.id;
                  v28->fields.num = *(&v29->fields.id + 1);
                  v28->fields.itemId = (int32_t)v29->fields.age;
                  if ( !v27 )
                    goto LABEL_49;
                  Instance = (DataManager_o *)sub_B52A44(v28, *(_QWORD *)&(*v27)->m_Items[9]);
                  if ( !Instance )
                  {
                    v45 = sub_B52A7C(0LL);
                    sub_B52A28(v45, 0LL);
                  }
                  if ( !*((_DWORD *)v27 + 6) )
                  {
LABEL_50:
                    v44 = sub_B52A88(Instance);
                    sub_B52A28(v44, 0LL);
                  }
                  v27[4] = (System_Int32_array *)v28;
                  sub_B52920(
                    (BattleServantConfConponent_o *)(v27 + 4),
                    (System_Int32_array **)v28,
                    v30,
                    v31,
                    v32,
                    v33,
                    v34,
                    v35);
                  if ( !v26 )
                    goto LABEL_49;
                  *(_QWORD *)(v26 + 16) = v27;
                  sub_B52920((BattleServantConfConponent_o *)(v26 + 16), v27, v36, v37, v38, v39, v40, v41);
                  _9__62_0 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__62_0,
                    (Il2CppObject *)v26,
                    Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__,
                    0LL);
                }
              }
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12527/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0LL);
              v43 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              Instance = (DataManager_o *)EventServantEntity__GetGetMessage(EventServant, 0LL);
              if ( !v43 )
                goto LABEL_49;
              CommonUI__OpenNotificationDialog(
                v43,
                v42,
                (System_String_o *)Instance,
                _9__62_0,
                -1,
                0,
                0,
                0,
                0,
                0,
                1,
                0,
                0LL,
                0LL);
            }
          }
        }
      }
      getJoinSvtList = this->fields.getJoinSvtList;
      ++v9;
      if ( !getJoinSvtList )
        goto LABEL_49;
    }
  }
}


void __fastcall BattleResultBondsComponent__Close(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  struct BattleWindowComponent_o *multiDeckWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_42B0A12 & 1) == 0 )
  {
    sub_B52984(&Method_BattleResultBondsComponent_endClose__);
    sub_B52984(&BattleWindowComponent_EndCall_TypeInfo);
    byte_42B0A12 = 1;
  }
  if ( this->fields.isMultiDeck )
    multiDeckWindow = this->fields.multiDeckWindow;
  else
    multiDeckWindow = this->fields.window;
  v4 = (BattleWindowComponent_EndCall_o *)sub_B52A54(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v4, (Il2CppObject *)this, Method_BattleResultBondsComponent_endClose__, 0LL);
  if ( !multiDeckWindow )
    sub_B52A5C(v5, v6);
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))multiDeckWindow->klass->vtable._12_Close.method)(
    multiDeckWindow,
    v4,
    multiDeckWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultBondsComponent__CloseBondUpRoot(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *upRoot; // x0

  if ( (byte_42B0A17 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    byte_42B0A17 = 1;
  }
  upRoot = this->fields.upRoot;
  if ( !upRoot
    || (UnityEngine_GameObject__SetActive(upRoot, 0, 0LL),
        (upRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B52A5C(upRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)upRoot, (System_String_o *)StringLiteral_5538/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultBondsComponent__CreateRewardEffect(
        BattleResultBondsComponent_o *this,
        AssetData_o *data,
        UISprite_o *targetIcon,
        System_String_o *effectName,
        const MethodInfo *method)
{
  BattleResultBondsComponent_o *v8; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_GameObject_o *v10; // x21
  UnityEngine_Transform_o *v11; // x22
  UnityEngine_Transform_o *transform; // x22
  int v13; // s0
  UnityEngine_Transform_o *v16; // x22
  int v17; // s0
  int parentComp; // w8
  BattleResultBondsComponent_o *v21; // x21
  unsigned int v22; // w22
  __int64 v23; // x0

  v8 = this;
  if ( (byte_42B0A0C & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
    sub_B52984(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (BattleResultBondsComponent_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0A0C = 1;
  }
  if ( !data )
    goto LABEL_20;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               effectName,
                                                                               (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleResultBondsComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           Object_WarBoardWaitTimeSetting,
                                           (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_20;
  v10 = (UnityEngine_GameObject_o *)this;
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !targetIcon )
    goto LABEL_20;
  v11 = (UnityEngine_Transform_o *)this;
  this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)targetIcon,
                                           0LL);
  if ( !v11 )
    goto LABEL_20;
  UnityEngine_Transform__set_parent(v11, (UnityEngine_Transform_o *)this, 0LL);
  transform = UnityEngine_GameObject__get_transform(v10, 0LL);
  *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v13, 0LL);
  v16 = UnityEngine_GameObject__get_transform(v10, 0LL);
  *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_one(0LL);
  if ( !v16 )
    goto LABEL_20;
  UnityEngine_Transform__set_localScale(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28816884(
                                           v10,
                                           (const MethodInfo_1B7B5F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !this )
    goto LABEL_20;
  parentComp = (int)this->fields.parentComp;
  v21 = this;
  if ( parentComp >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= parentComp )
      {
        v23 = sub_B52A88(this);
        sub_B52A28(v23, 0LL);
      }
      this = (BattleResultBondsComponent_o *)*((_QWORD *)&v21->fields.myFsm + (int)v22);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0LL);
      parentComp = (int)v21->fields.parentComp;
      if ( (int)++v22 >= parentComp )
        goto LABEL_18;
    }
LABEL_20:
    sub_B52A5C(this, data);
  }
LABEL_18:
  this = (BattleResultBondsComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_20;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v21,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void __fastcall BattleResultBondsComponent__DeleteGetJoinSvtData(const MethodInfo *method)
{
  BattleResultBondsComponent_c *v1; // x0

  if ( (byte_42B0A01 & 1) == 0 )
  {
    sub_B52984(&BattleResultBondsComponent_TypeInfo);
    byte_42B0A01 = 1;
  }
  v1 = BattleResultBondsComponent_TypeInfo;
  if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
    v1 = BattleResultBondsComponent_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v1->static_fields->GET_EXIST_SVT_KEY, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(BattleResultBondsComponent_TypeInfo->static_fields->GET_NEW_SVT_KEY, 0LL);
}


BattleResultBondsIconComponent_array *__fastcall BattleResultBondsComponent__GetBondsIconArray(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_bondsIconArray; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  __int64 v5; // x1
  struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *bondsList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  System_Int32_array **v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B0A14 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
    byte_42B0A14 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( this->fields.isMultiDeck )
  {
    p_bondsIconArray = (BattleServantConfConponent_o *)&this->fields.bondsIconArray;
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.bondsIconArray, 0LL) )
    {
      v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v4,
        (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
      bondsList = this->fields.bondsList;
      if ( !bondsList )
        goto LABEL_17;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v17,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bondsList,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v17,
                (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
      {
        if ( !v17.fields.current )
          sub_B52A5C(0LL, v7);
        BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                          (BattleResultBondsDeckPerWaveComponent_o *)v17.fields.current,
                                                                          v7);
        if ( !v4 )
          sub_B52A5C(BondsIconArray, BondsIconArray);
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v4,
          BondsIconArray,
          (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v17,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
      if ( !v4 )
LABEL_17:
        sub_B52A5C(bondsList, v5);
      v9 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v4,
                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
      p_bondsIconArray->klass = (BattleServantConfConponent_c *)v9;
      sub_B52920(p_bondsIconArray, v9, v10, v11, v12, v13, v14, v15);
    }
  }
  else
  {
    p_bondsIconArray = (BattleServantConfConponent_o *)&this->fields.collects;
  }
  return (BattleResultBondsIconComponent_array *)p_bondsIconArray->klass;
}


void __fastcall BattleResultBondsComponent__Init(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *window; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UnityEngine_Object_o *multiDeckWindow; // x20

  if ( (byte_42B0A02 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
    sub_B52984(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0A02 = 1;
  }
  window = this->fields.window;
  if ( !window )
    goto LABEL_17;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0LL);
  window = this->fields.window;
  if ( !window )
    goto LABEL_17;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))window->klass->vtable._9_setClose.method)(
    window,
    window->klass->vtable._10_Open.methodPtr);
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.effectUIList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  window = this->fields.confwindow;
  if ( !window )
    goto LABEL_17;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0LL);
  window = this->fields.confwindow;
  if ( !window )
    goto LABEL_17;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))window->klass->vtable._9_setClose.method)(
    window,
    window->klass->vtable._10_Open.methodPtr);
  window = (BattleWindowComponent_o *)this->fields.upRoot;
  if ( !window )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  multiDeckWindow = (UnityEngine_Object_o *)this->fields.multiDeckWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(multiDeckWindow, 0LL, 0LL) )
  {
    window = this->fields.multiDeckWindow;
    if ( window )
    {
      BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0LL);
      window = this->fields.multiDeckWindow;
      if ( window )
      {
        ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))window->klass->vtable._9_setClose.method)(
          window,
          window->klass->vtable._10_Open.methodPtr);
        goto LABEL_15;
      }
    }
LABEL_17:
    sub_B52A5C(window, method);
  }
LABEL_15:
  this->fields.isMultiDeck = 0;
  window = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !window )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultBondsComponent__InitResultData(
        BattleResultBondsComponent_o *this,
        UserServantCollectionEntity_array *oldCollects,
        BattleFriendshipRewardInfo_array *inRewardInfos,
        AssetData_o *resultAsset,
        int32_t baseFriendshipExp,
        GetSvts_array *getJoinSvts,
        bool inIsMultiDeck,
        const MethodInfo *method)
{
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_Object_o *multiDeckWindow; // x20
  UnityEngine_Object_o *multiBondsPrefab; // x20
  UnityEngine_Object_o *multiBondsRoot; // x20

  if ( (byte_42B0A03 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0A03 = 1;
  }
  this->fields.oldCollections = oldCollects;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.oldCollections,
    (System_Int32_array **)oldCollects,
    (System_String_array **)inRewardInfos,
    (System_String_array **)resultAsset,
    *(System_Boolean_array ***)&baseFriendshipExp,
    (System_Int32_array **)getJoinSvts,
    (System_Int32_array *)inIsMultiDeck,
    (System_Int32_array *)method);
  this->fields.rewardInfos = inRewardInfos;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.rewardInfos,
    (System_Int32_array **)inRewardInfos,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.resultAssetData = resultAsset;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.resultAssetData,
    (System_Int32_array **)resultAsset,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.getJoinSvtList = getJoinSvts;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.getJoinSvtList,
    (System_Int32_array **)getJoinSvts,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.updateFlg = 0;
  this->fields.baseFriendshipExp = baseFriendshipExp;
  this->fields.isMultiDeck = inIsMultiDeck;
  multiDeckWindow = (UnityEngine_Object_o *)this->fields.multiDeckWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(multiDeckWindow, 0LL, 0LL) )
    goto LABEL_15;
  multiBondsPrefab = (UnityEngine_Object_o *)this->fields.multiBondsPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(multiBondsPrefab, 0LL, 0LL) )
    goto LABEL_15;
  multiBondsRoot = (UnityEngine_Object_o *)this->fields.multiBondsRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(multiBondsRoot, 0LL, 0LL) )
LABEL_15:
    this->fields.isMultiDeck = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultBondsComponent__NormalBondsInit(
        BattleResultBondsComponent_o *this,
        int32_t targetIndex,
        int32_t cnt,
        bool isNoFollower,
        BattleResultComponent_resultData_o *battleResult,
        bool isHideBuddyPointResult,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x7
  unsigned int v12; // w24
  BattleResultBondsComponent_o *v13; // x19
  __int64 v14; // x25
  struct BattleResultBondsIconComponent_array *collects; // x8
  const MethodInfo *v16; // x3
  struct BattleResultBondsIconComponent_array *v17; // x8
  struct BattleResultBondsIconComponent_array *v18; // x8
  struct BattleResultBondsIconComponent_array *v19; // x8
  float v20; // s8
  struct BattleResultBondsIconComponent_array *v21; // x8
  UnityEngine_Component_o *v22; // x8
  __int64 v23; // x24
  float v24; // s9
  int v25; // w25
  float v26; // s10
  struct BattleResultBondsIconComponent_array *v27; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x8
  UnityEngine_Object_o *bgFrame; // x20
  __int64 v31; // x0
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  v12 = targetIndex;
  v13 = this;
  if ( (byte_42B0A15 & 1) == 0 )
  {
    sub_B52984(&BattleResultBondsComponent_TypeInfo);
    this = (BattleResultBondsComponent_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0A15 = 1;
  }
  if ( (int)v12 < cnt )
  {
    v14 = 8LL * (int)v12 + 32;
    do
    {
      collects = v13->fields.collects;
      if ( !collects )
        goto LABEL_54;
      if ( v12 >= collects->max_length )
        goto LABEL_55;
      this = *(BattleResultBondsComponent_o **)((char *)&collects->obj.klass + v14);
      if ( !this )
        goto LABEL_54;
      BattleResultBondsIconComponent__setServantData(
        (BattleResultBondsIconComponent_o *)this,
        0LL,
        0LL,
        0,
        0,
        isNoFollower,
        0,
        v7);
      v17 = v13->fields.collects;
      if ( !v17 )
        goto LABEL_54;
      if ( v12 >= v17->max_length )
        goto LABEL_55;
      this = *(BattleResultBondsComponent_o **)((char *)&v17->obj.klass + v14);
      if ( !this )
        goto LABEL_54;
      BattleResultBondsIconComponent__SetBuddyPointInfo((BattleResultBondsIconComponent_o *)this, 0LL, 0, v16);
      v18 = v13->fields.collects;
      if ( !v18 )
        goto LABEL_54;
      if ( v12 >= v18->max_length )
        goto LABEL_55;
      this = *(BattleResultBondsComponent_o **)((char *)&v18->obj.klass + v14);
      if ( !this )
        goto LABEL_54;
      this = (BattleResultBondsComponent_o *)BattleResultBondsIconComponent__changeGauge(
                                               (BattleResultBondsIconComponent_o *)this,
                                               0.0,
                                               *(const MethodInfo **)&targetIndex);
      v19 = v13->fields.collects;
      if ( !v19 )
        goto LABEL_54;
      if ( v12 >= v19->max_length )
        goto LABEL_55;
      this = *(BattleResultBondsComponent_o **)((char *)&v19->obj.klass + v14);
      if ( !this )
        goto LABEL_54;
      BattleResultBondsIconComponent__InitBuddyPointInfo(
        (BattleResultBondsIconComponent_o *)this,
        *(const MethodInfo **)&targetIndex);
      ++v12;
      v14 += 8LL;
    }
    while ( (int)v12 < cnt );
  }
  this = (BattleResultBondsComponent_o *)BattleResultBondsComponent_TypeInfo;
  if ( isNoFollower )
  {
    if ( (WORD1(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
      this = (BattleResultBondsComponent_o *)BattleResultBondsComponent_TypeInfo;
    }
    v20 = *(float *)(*(_QWORD *)&this->fields.buddyPointInfoWindowHeight + 4LL);
  }
  else
  {
    if ( (WORD1(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
      this = (BattleResultBondsComponent_o *)BattleResultBondsComponent_TypeInfo;
    }
    v21 = v13->fields.collects;
    if ( !v21 )
      goto LABEL_54;
    if ( v21->max_length <= cnt )
    {
LABEL_55:
      v31 = sub_B52A88(this);
      sub_B52A28(v31, 0LL);
    }
    v22 = (UnityEngine_Component_o *)v21->m_Items[cnt];
    if ( !v22 )
      goto LABEL_54;
    v20 = **(float **)&this->fields.buddyPointInfoWindowHeight;
    this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_gameObject(v22, 0LL);
    if ( !this )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  if ( cnt >= 1 )
  {
    v23 = 0LL;
    v24 = 0.0;
    v25 = 4;
    v26 = (float)(1 - cnt) * 0.5;
    do
    {
      if ( isNoFollower )
        v24 = (float)v25;
      v27 = v13->fields.collects;
      if ( !v27 )
        goto LABEL_54;
      if ( (unsigned int)v23 >= v27->max_length )
        goto LABEL_55;
      this = (BattleResultBondsComponent_o *)v27->m_Items[v23];
      if ( !this )
        goto LABEL_54;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v20 * v26) - v24, 0LL);
      ++v23;
      v26 = v26 + 1.0;
      v25 -= 2;
    }
    while ( (int)v23 < cnt );
  }
  if ( !battleResult )
    goto LABEL_54;
  buddyPointInfos = battleResult->fields.buddyPointInfos;
  if ( buddyPointInfos && *(_QWORD *)&buddyPointInfos->max_length && !isHideBuddyPointResult )
  {
    bgFrame = (UnityEngine_Object_o *)v13->fields.bgFrame;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(bgFrame, 0LL, 0LL) )
    {
      this = (BattleResultBondsComponent_o *)v13->fields.bgFrame;
      if ( !this )
        goto LABEL_54;
      UIWidget__set_height((UIWidget_o *)this, v13->fields.buddyPointInfoWindowHeight, 0LL);
    }
    this = (BattleResultBondsComponent_o *)v13->fields.window;
    if ( !this
      || (this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL)) == 0LL
      || (v32.fields.y = 13.0,
          v32.fields.x = 0.0,
          v32.fields.z = 0.0,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v32, 0LL),
          (this = (BattleResultBondsComponent_o *)v13->fields.window) == 0LL) )
    {
LABEL_54:
      sub_B52A5C(this, *(_QWORD *)&targetIndex);
    }
    (*(void (__fastcall **)(BattleResultBondsComponent_o *, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
      this,
      this->klass[1]._1.element_class);
  }
}


void __fastcall BattleResultBondsComponent__Open(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleResultBondsIconComponent_array *BondsIconArray; // x20
  BattleResultBondsComponent___c_c *v4; // x8
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__53_0; // x21
  Il2CppObject *v7; // x22
  struct BattleResultBondsComponent___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL4 isMultiDeck; // w8
  struct BattleWindowComponent_o *v18; // x20
  __int64 *v19; // x8
  BattleWindowComponent_EndCall_o *v20; // x21

  if ( (byte_42B0A06 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_BattleResultBondsIconComponent___);
    sub_B52984(&Method_BattleResultBondsComponent_OpenEnd__);
    sub_B52984(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B52984(&Method_System_Func_BattleResultBondsIconComponent__bool___ctor__);
    sub_B52984(&System_Func_BattleResultBondsIconComponent__bool__TypeInfo);
    sub_B52984(&Method_BattleResultBondsComponent___c__Open_b__53_0__);
    sub_B52984(&BattleResultBondsComponent___c_TypeInfo);
    sub_B52984(&StringLiteral_5534/*"END_OPEN"*/);
    sub_B52984(&StringLiteral_12346/*"SKIP"*/);
    byte_42B0A06 = 1;
  }
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, method);
  v4 = BattleResultBondsComponent___c_TypeInfo;
  if ( (BYTE3(BattleResultBondsComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
    v4 = BattleResultBondsComponent___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__53_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__53_0;
  if ( !_9__53_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__53_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleResultBondsIconComponent__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__53_0,
      v7,
      Method_BattleResultBondsComponent___c__Open_b__53_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_BattleResultBondsIconComponent__bool___ctor__);
    v8 = BattleResultBondsComponent___c_TypeInfo->static_fields;
    v8->__9__53_0 = (struct System_Func_BattleResultBondsIconComponent__bool__o *)_9__53_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__53_0,
      (System_Int32_array **)_9__53_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
         (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)BondsIconArray,
         (System_Func_T__bool__o *)_9__53_0,
         (const MethodInfo_1A41D18 *)Method_BasicHelper_Any_BattleResultBondsIconComponent___) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      isMultiDeck = this->fields.isMultiDeck;
      this->fields.openBoundsFlg = 0;
      this->fields.colIndex = 0;
      this->fields.bondsCountUp = 1;
      v18 = isMultiDeck ? this->fields.multiDeckWindow : this->fields.window;
      v20 = (BattleWindowComponent_EndCall_o *)sub_B52A54(BattleWindowComponent_EndCall_TypeInfo);
      BattleWindowComponent_EndCall___ctor(v20, (Il2CppObject *)this, Method_BattleResultBondsComponent_OpenEnd__, 0LL);
      if ( v18 )
      {
        ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v18->klass->vtable._10_Open.method)(
          v18,
          v20,
          v18->klass->vtable._11_CompOpen.methodPtr);
        gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
        if ( gameObject )
        {
          v19 = &StringLiteral_5534/*"END_OPEN"*/;
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    sub_B52A5C(gameObject, v15);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !gameObject )
    goto LABEL_22;
  v19 = &StringLiteral_12346/*"SKIP"*/;
LABEL_21:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)*v19, 0LL);
}


void __fastcall BattleResultBondsComponent__OpenEnd(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  const MethodInfo *v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Object_array *v12; // x21
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x22
  System_Collections_Hashtable_o *v77; // x0
  const MethodInfo *v78; // x1
  int max_length; // w8
  BattleResultBondsIconComponent_array *v80; // x20
  unsigned int v81; // w21
  System_String_o *CommonSeName; // x20
  struct SePlayer_o *v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  __int64 v90; // x0
  __int64 v91; // x0
  int v92; // [xsp+Ch] [xbp-34h] BYREF
  int v93; // [xsp+18h] [xbp-28h] BYREF
  int v94; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42B0A07 & 1) == 0 )
  {
    sub_B52984(&object___TypeInfo);
    sub_B52984(&SeManager_TypeInfo);
    sub_B52984(&float_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_19056/*"from"*/);
    sub_B52984(&StringLiteral_22867/*"time"*/);
    sub_B52984(&StringLiteral_21442/*"onupdate"*/);
    sub_B52984(&StringLiteral_15168/*"UpdateValue"*/);
    sub_B52984(&StringLiteral_22904/*"to"*/);
    sub_B52984(&StringLiteral_18883/*"finishUpdateValue"*/);
    sub_B52984(&StringLiteral_21433/*"oncomplete"*/);
    sub_B52984(&iTween_TypeInfo);
    byte_42B0A07 = 1;
  }
  if ( !this->fields.bondsCountUp )
    return;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B5299C(object___TypeInfo, 10LL);
  if ( !BondsIconArray )
LABEL_68:
    sub_B52A5C(BondsIconArray, v5);
  v12 = (System_Object_array *)BondsIconArray;
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_19056/*"from"*/;
  if ( StringLiteral_19056/*"from"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B52A44(
                                                               StringLiteral_19056/*"from"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v13 = (System_Int32_array **)StringLiteral_19056/*"from"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v12->max_length )
    goto LABEL_67;
  v12->m_Items[0] = (Il2CppObject *)v13;
  sub_B52920((BattleServantConfConponent_o *)v12->m_Items, v13, v6, v7, v8, v9, v10, v11);
  v94 = 0;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v94);
  v20 = (System_Int32_array **)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B52A44(
                                                               BondsIconArray,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
  }
  if ( v12->max_length <= 1 )
    goto LABEL_67;
  v12->m_Items[1] = (Il2CppObject *)v20;
  sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[1], v20, v14, v15, v16, v17, v18, v19);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22904/*"to"*/;
  if ( StringLiteral_22904/*"to"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B52A44(
                                                               StringLiteral_22904/*"to"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v27 = (System_Int32_array **)StringLiteral_22904/*"to"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v12->max_length <= 2 )
    goto LABEL_67;
  v12->m_Items[2] = (Il2CppObject *)v27;
  sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[2], v27, v21, v22, v23, v24, v25, v26);
  v93 = 1065353216;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v93);
  v34 = (System_Int32_array **)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B52A44(
                                                               BondsIconArray,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
  }
  if ( v12->max_length <= 3 )
    goto LABEL_67;
  v12->m_Items[3] = (Il2CppObject *)v34;
  sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[3], v34, v28, v29, v30, v31, v32, v33);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_21442/*"onupdate"*/;
  if ( StringLiteral_21442/*"onupdate"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B52A44(
                                                               StringLiteral_21442/*"onupdate"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v41 = (System_Int32_array **)StringLiteral_21442/*"onupdate"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v12->max_length <= 4 )
    goto LABEL_67;
  v12->m_Items[4] = (Il2CppObject *)v41;
  sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[4], v41, v35, v36, v37, v38, v39, v40);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_15168/*"UpdateValue"*/;
  if ( StringLiteral_15168/*"UpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B52A44(
                                                               StringLiteral_15168/*"UpdateValue"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v48 = (System_Int32_array **)StringLiteral_15168/*"UpdateValue"*/;
  }
  else
  {
    v48 = 0LL;
  }
  if ( v12->max_length <= 5 )
    goto LABEL_67;
  v12->m_Items[5] = (Il2CppObject *)v48;
  sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[5], v48, v42, v43, v44, v45, v46, v47);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_21433/*"oncomplete"*/;
  if ( StringLiteral_21433/*"oncomplete"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B52A44(
                                                               StringLiteral_21433/*"oncomplete"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v55 = (System_Int32_array **)StringLiteral_21433/*"oncomplete"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( v12->max_length <= 6 )
    goto LABEL_67;
  v12->m_Items[6] = (Il2CppObject *)v55;
  sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[6], v55, v49, v50, v51, v52, v53, v54);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_18883/*"finishUpdateValue"*/;
  if ( StringLiteral_18883/*"finishUpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B52A44(
                                                               StringLiteral_18883/*"finishUpdateValue"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v62 = (System_Int32_array **)StringLiteral_18883/*"finishUpdateValue"*/;
  }
  else
  {
    v62 = 0LL;
  }
  if ( v12->max_length <= 7 )
    goto LABEL_67;
  v12->m_Items[7] = (Il2CppObject *)v62;
  sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[7], v62, v56, v57, v58, v59, v60, v61);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22867/*"time"*/;
  if ( StringLiteral_22867/*"time"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B52A44(
                                                               StringLiteral_22867/*"time"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v69 = (System_Int32_array **)StringLiteral_22867/*"time"*/;
  }
  else
  {
    v69 = 0LL;
  }
  if ( v12->max_length <= 8 )
    goto LABEL_67;
  v12->m_Items[8] = (Il2CppObject *)v69;
  sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[8], v69, v63, v64, v65, v66, v67, v68);
  v92 = 1072064102;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v92);
  v76 = (System_Int32_array **)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B52A44(
                                                               BondsIconArray,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
    {
LABEL_69:
      v91 = sub_B52A7C(BondsIconArray);
      sub_B52A28(v91, 0LL);
    }
  }
  if ( v12->max_length <= 9 )
    goto LABEL_67;
  v12->m_Items[9] = (Il2CppObject *)v76;
  sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[9], v76, v70, v71, v72, v73, v74, v75);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v77 = iTween__Hash(v12, 0LL);
  iTween__ValueTo(gameObject, v77, 0LL);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v78);
  if ( !BondsIconArray )
    goto LABEL_68;
  max_length = BondsIconArray->max_length;
  v80 = BondsIconArray;
  if ( max_length >= 1 )
  {
    v81 = 0;
    while ( v81 < max_length )
    {
      BondsIconArray = (BattleResultBondsIconComponent_array *)v80->m_Items[v81];
      if ( !BondsIconArray )
        goto LABEL_68;
      BattleResultBondsIconComponent__StartUpdateBuddyPoint((BattleResultBondsIconComponent_o *)BondsIconArray, v5);
      max_length = v80->max_length;
      if ( (int)++v81 >= max_length )
        goto LABEL_58;
    }
LABEL_67:
    v90 = sub_B52A88(BondsIconArray);
    sub_B52A28(v90, 0LL);
  }
LABEL_58:
  if ( this->fields.updateFlg )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    CommonSeName = SeManager__GetCommonSeName(15, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v83 = SoundManager__playSe(CommonSeName, 0LL);
    this->fields.MeterSePlayer = v83;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.MeterSePlayer,
      (System_Int32_array **)v83,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89);
  }
}


void __fastcall BattleResultBondsComponent__SetMultiBondsResultData(
        BattleResultBondsComponent_o *this,
        BattleData_o *battleData,
        UserServantCollectionEntity_array *oldCollects,
        BattleFriendshipRewardInfo_array *inRewardInfos,
        int32_t followerType,
        AssetData_o *resultAsset,
        int32_t baseFriendshipExp,
        GetSvts_array *getJoinSvts,
        BattleResultComponent_resultData_o *battleResult,
        bool isHideBuddyPointResult,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *bondsList; // x0
  __int64 v19; // x1
  struct BattleInfoData_o *battle_info; // x9
  struct DeckData_array *waveMyDecks; // x26
  __int64 maxWave; // x27
  BattleUserServantData_array *userSvt; // x24
  unsigned __int64 currentWave; // x19
  il2cpp_array_size_t max_length; // w9
  DeckData_o *v26; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  const MethodInfo *v28; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  struct BattleResultBondsIconComponent_array *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x0
  const MethodInfo *v38; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_42B0A04 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
    byte_42B0A04 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  BattleResultBondsComponent__InitResultData(
    this,
    oldCollects,
    inRewardInfos,
    resultAsset,
    baseFriendshipExp,
    getJoinSvts,
    1,
    (const MethodInfo *)getJoinSvts);
  if ( !battleData )
    goto LABEL_21;
  battle_info = battleData->fields.battle_info;
  if ( !battle_info )
    goto LABEL_21;
  waveMyDecks = battle_info->fields.waveMyDecks;
  if ( !waveMyDecks )
    goto LABEL_21;
  maxWave = *(_QWORD *)&waveMyDecks->max_length;
  if ( (int)maxWave >= 1 )
  {
    userSvt = battle_info->fields.userSvt;
    currentWave = 0LL;
    max_length = *(_QWORD *)&waveMyDecks->max_length;
    do
    {
      if ( currentWave >= max_length )
      {
        v37 = sub_B52A88(bondsList);
        sub_B52A28(v37, 0LL);
      }
      v26 = waveMyDecks->m_Items[currentWave++];
      BattleResultBondsComponent__SetResultDataLocal(
        this,
        v26,
        oldCollects,
        followerType,
        userSvt,
        battleResult,
        isHideBuddyPointResult,
        battleData,
        currentWave,
        maxWave,
        v38);
      max_length = waveMyDecks->max_length;
    }
    while ( (__int64)currentWave < (int)max_length );
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  bondsList = this->fields.bondsList;
  if ( !bondsList )
    goto LABEL_21;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v40,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bondsList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v40,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
  {
    if ( !v40.fields.current )
      sub_B52A5C(0LL, v28);
    BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                      (BattleResultBondsDeckPerWaveComponent_o *)v40.fields.current,
                                                                      v28);
    if ( !v27 )
      sub_B52A5C(BondsIconArray, BondsIconArray);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v27,
      BondsIconArray,
      (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v40,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
  if ( !v27 )
LABEL_21:
    sub_B52A5C(bondsList, v19);
  v30 = (struct BattleResultBondsIconComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                                         (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
  this->fields.bondsIconArray = v30;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.bondsIconArray,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}


void __fastcall BattleResultBondsComponent__SetResultDataLocal(
        BattleResultBondsComponent_o *this,
        DeckData_o *myDeck,
        UserServantCollectionEntity_array *oldCollects,
        int32_t followerType,
        BattleUserServantData_array *usrSvts,
        BattleResultComponent_resultData_o *battleResult,
        bool isHideBuddyPointResult,
        BattleData_o *battleData,
        int32_t currentWave,
        int32_t maxWave,
        const MethodInfo *method)
{
  int v14; // w8
  int64_t Instance; // x0
  const MethodInfo *userSvtId; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v17; // x25
  BattleResultBondsComponent_o *v18; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x27
  struct BattleResultBondsDeckPerWaveComponent_o *multiBondsPrefab; // x19
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *v22; // x1
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x6
  System_Collections_Generic_IEnumerable_TSource__o *rewardInfos; // x21
  BattleResultBondsComponent___c_c *v26; // x0
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__49_0; // x19
  Il2CppObject *v29; // x20
  struct BattleResultBondsComponent___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Collections_Generic_List_TSource__o *v38; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v39; // x21
  BattleResultBondsComponent_c *v40; // x0
  BattleResultBondsComponent_c *v41; // x0
  Il2CppObject *String_35644948; // x19
  System_Collections_Generic_IEnumerable_T__o *v43; // x0
  BattleResultBondsComponent_c *v44; // x0
  System_String_o *GET_NEW_SVT_KEY; // x20
  WarBoardUiData_SaveData_array *v46; // x19
  System_String_o *v47; // x0
  BattleResultBondsComponent___c_c *v48; // x0
  System_Collections_Generic_IEnumerable_TSource__o *getJoinSvts; // x21
  struct BattleResultBondsComponent___c_StaticFields *v50; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__49_1; // x19
  Il2CppObject *v52; // x20
  struct BattleResultBondsComponent___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  System_Collections_Generic_List_TSource__o *v61; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v62; // x21
  BattleResultBondsComponent_c *v63; // x0
  BattleResultBondsComponent_c *v64; // x0
  Il2CppObject *v65; // x19
  System_Collections_Generic_IEnumerable_T__o *v66; // x0
  BattleResultBondsComponent_c *v67; // x0
  System_String_o *GET_EXIST_SVT_KEY; // x20
  WarBoardUiData_SaveData_array *v69; // x19
  System_String_o *v70; // x0
  struct BattleDeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v73; // w21
  int32_t v74; // w22
  BattleDeckServantData_o *v75; // x26
  BattleResultBondsComponent___c__DisplayClass49_0_o *v76; // x28
  UserServantEntity_o *v77; // x24
  BattleResultBondsComponent_o *SvtId; // x0
  const MethodInfo *v79; // x3
  const MethodInfo *v80; // x7
  signed int v81; // w8
  ServantEntity_o *v82; // x27
  unsigned int v83; // w19
  BattleUserServantData_o *v84; // x20
  __int128 v85; // q0
  const MethodInfo *v86; // x5
  BattleResultComponent_resultData_o *v87; // x19
  unsigned int v88; // w25
  int32_t afterLimitCount; // w26
  int32_t v90; // w22
  int afterIconLimitCount; // w8
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x19
  BattleBuddyPointInfo_o *v94; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v95; // x20
  BattleResultBondsIconComponent_o *v96; // x28
  struct BattleResultBondsIconComponent_array *v97; // x8
  const MethodInfo *v98; // x3
  unsigned int v99; // w22
  const MethodInfo *v100; // x2
  UserServantCollectionEntity_o *EntityDefinitely; // x1
  bool v102; // w19
  const MethodInfo *v103; // x2
  const MethodInfo *v104; // x1
  char v105; // w8
  bool updateFlg; // w19
  char v107; // w8
  const MethodInfo *v108; // x1
  __int64 v109; // x0
  int32_t cnt; // [xsp+4h] [xbp-10Ch]
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // [xsp+8h] [xbp-108h]
  BattleResultBondsDeckPerWaveComponent_o *Object_object; // [xsp+20h] [xbp-F0h]
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+28h] [xbp-E8h]
  struct BattleDeckServantData_array *v116; // [xsp+30h] [xbp-E0h]
  DataMasterBase_WarMaster__WarEntity__int__o *v117; // [xsp+38h] [xbp-D8h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v118; // [xsp+40h] [xbp-D0h]
  int32_t Type; // [xsp+54h] [xbp-BCh]
  UserServantCollectionEntity_o *userSvtCol; // [xsp+60h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v124; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v125; // [xsp+90h] [xbp-80h]

  if ( (byte_42B0A05 & 1) == 0 )
  {
    sub_B52984(&Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    sub_B52984(&Method_BasicHelper_Find_BattleBuddyPointInfo___);
    sub_B52984(&BattleResultBondsComponent_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_GetSvts___);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_GetSvts___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
    sub_B52984(&Method_System_Func_QuestRewardInfo__bool___ctor__);
    sub_B52984(&Method_System_Func_BattleBuddyPointInfo__bool___ctor__);
    sub_B52984(&Method_System_Func_GetSvts__bool___ctor__);
    sub_B52984(&System_Func_GetSvts__bool__TypeInfo);
    sub_B52984(&System_Func_QuestRewardInfo__bool__TypeInfo);
    sub_B52984(&System_Func_BattleBuddyPointInfo__bool__TypeInfo);
    sub_B52984(&Method_JsonManager_DeserializeArray_GetSvts___);
    sub_B52984(&Method_JsonManager_DeserializeArray_QuestRewardInfo___);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GetSvts__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_GetSvts__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_GetSvts__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__);
    sub_B52984(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__);
    sub_B52984(&Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__);
    sub_B52984(&BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo);
    sub_B52984(&BattleResultBondsComponent___c_TypeInfo);
    byte_42B0A05 = 1;
  }
  Type = Follower__getType(followerType, 0LL);
  if ( Type )
    v14 = 5;
  else
    v14 = 6;
  cnt = v14;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_147;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_147;
  v17 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)Instance,
                                                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_147;
  v18 = this;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( this->fields.isMultiDeck )
  {
    Instance = (int64_t)this->fields.multiBondsRoot;
    if ( !Instance )
      goto LABEL_147;
    multiBondsPrefab = this->fields.multiBondsPrefab;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    v22 = (Il2CppObject *)multiBondsPrefab;
    v18 = this;
    Object_object = (BattleResultBondsDeckPerWaveComponent_o *)BaseMonoBehaviour__createObject_object_(
                                                                 (BaseMonoBehaviour_o *)this,
                                                                 v22,
                                                                 transform,
                                                                 0LL,
                                                                 (const MethodInfo_1A4161C *)Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    if ( this->fields.isMultiDeck )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      goto LABEL_18;
    }
  }
  else
  {
    Object_object = 0LL;
  }
  Master_WarQuestSelectionMaster = 0LL;
LABEL_18:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)battleData, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !battleData )
      goto LABEL_147;
    Instance = BattleData__IsWarBoard(battleData, 0LL);
    v18->fields.isWarboard = Instance & 1;
    if ( (Instance & 1) != 0 )
    {
      if ( !battleResult )
        goto LABEL_147;
      rewardInfos = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.rewardInfos;
      v26 = BattleResultBondsComponent___c_TypeInfo;
      if ( (BYTE3(BattleResultBondsComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v26 = BattleResultBondsComponent___c_TypeInfo;
      }
      static_fields = v26->static_fields;
      _9__49_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__49_0;
      if ( !_9__49_0 )
      {
        if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
        }
        v29 = (Il2CppObject *)static_fields->__9;
        _9__49_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_QuestRewardInfo__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__49_0,
          v29,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__,
          (const MethodInfo_2BC90BC *)Method_System_Func_QuestRewardInfo__bool___ctor__);
        v30 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        v30->__9__49_0 = (struct System_Func_QuestRewardInfo__bool__o *)_9__49_0;
        sub_B52920(
          (BattleServantConfConponent_o *)&v30->__9__49_0,
          (System_Int32_array **)_9__49_0,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
      }
      v37 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              rewardInfos,
              (System_Func_TSource__bool__o *)_9__49_0,
              (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
      v38 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
              v37,
              (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
      if ( v38 )
      {
        v39 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v38;
        if ( v38->fields._size >= 1 )
        {
          v40 = BattleResultBondsComponent_TypeInfo;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v40 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v40->static_fields->GET_NEW_SVT_KEY, 0LL) )
          {
            v41 = BattleResultBondsComponent_TypeInfo;
            if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v41 = BattleResultBondsComponent_TypeInfo;
            }
            String_35644948 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_35644948(
                                                v41->static_fields->GET_NEW_SVT_KEY,
                                                0LL);
            if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !JsonManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            }
            v43 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                   String_35644948,
                                                                   (const MethodInfo_1F690B0 *)Method_JsonManager_DeserializeArray_QuestRewardInfo___);
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              v39,
              v43,
              (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
          }
          v44 = BattleResultBondsComponent_TypeInfo;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v44 = BattleResultBondsComponent_TypeInfo;
          }
          GET_NEW_SVT_KEY = v44->static_fields->GET_NEW_SVT_KEY;
          v46 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v39,
                  (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
          if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !JsonManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          }
          v47 = JsonManager__toJson(&v46->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_NEW_SVT_KEY, v47, 0LL);
        }
      }
      v48 = BattleResultBondsComponent___c_TypeInfo;
      getJoinSvts = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.getJoinSvts;
      if ( (BYTE3(BattleResultBondsComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v48 = BattleResultBondsComponent___c_TypeInfo;
      }
      v50 = v48->static_fields;
      _9__49_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v50->__9__49_1;
      if ( !_9__49_1 )
      {
        if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v48);
          v50 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        }
        v52 = (Il2CppObject *)v50->__9;
        _9__49_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_GetSvts__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__49_1,
          v52,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__,
          (const MethodInfo_2BC90BC *)Method_System_Func_GetSvts__bool___ctor__);
        v53 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        v53->__9__49_1 = (struct System_Func_GetSvts__bool__o *)_9__49_1;
        sub_B52920(
          (BattleServantConfConponent_o *)&v53->__9__49_1,
          (System_Int32_array **)_9__49_1,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59);
      }
      v60 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              getJoinSvts,
              (System_Func_TSource__bool__o *)_9__49_1,
              (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_GetSvts___);
      v61 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
              v60,
              (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_GetSvts___);
      if ( v61 )
      {
        v62 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v61;
        if ( v61->fields._size >= 1 )
        {
          v63 = BattleResultBondsComponent_TypeInfo;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v63 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v63->static_fields->GET_EXIST_SVT_KEY, 0LL) )
          {
            v64 = BattleResultBondsComponent_TypeInfo;
            if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v64 = BattleResultBondsComponent_TypeInfo;
            }
            v65 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_35644948(
                                    v64->static_fields->GET_EXIST_SVT_KEY,
                                    0LL);
            if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !JsonManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            }
            v66 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                   v65,
                                                                   (const MethodInfo_1F690B0 *)Method_JsonManager_DeserializeArray_GetSvts___);
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              v62,
              v66,
              (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_GetSvts__AddRange__);
          }
          v67 = BattleResultBondsComponent_TypeInfo;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v67 = BattleResultBondsComponent_TypeInfo;
          }
          GET_EXIST_SVT_KEY = v67->static_fields->GET_EXIST_SVT_KEY;
          v69 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v62,
                  (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_GetSvts__ToArray__);
          if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !JsonManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          }
          v70 = JsonManager__toJson(&v69->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_EXIST_SVT_KEY, v70, 0LL);
        }
      }
      UnityEngine_PlayerPrefs__Save(0LL);
      v18 = this;
    }
  }
  if ( !myDeck || (svts = myDeck->fields.svts) == 0LL )
LABEL_147:
    sub_B52A5C(Instance, userSvtId);
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v73 = 0;
    v74 = 0;
    v117 = v19;
    v118 = v17;
    v116 = myDeck->fields.svts;
    while ( v73 < max_length )
    {
      v75 = svts->m_Items[v73];
      v76 = (BattleResultBondsComponent___c__DisplayClass49_0_o *)sub_B52A54(BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo);
      BattleResultBondsComponent___c__DisplayClass49_0___ctor(v76, 0LL);
      if ( !v75 || !v76 )
        goto LABEL_147;
      userSvtId = (const MethodInfo *)v75->fields.userSvtId;
      v76->fields.userSvtId = (int64_t)userSvtId;
      if ( (__int64)userSvtId >= 1 )
      {
        if ( !v17 )
          goto LABEL_147;
        Instance = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                              v17,
                              (int64_t)userSvtId,
                              (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !Instance )
          goto LABEL_147;
        v77 = (UserServantEntity_o *)Instance;
        SvtId = (BattleResultBondsComponent_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
        userSvtCol = BattleResultBondsComponent__getServantCollection(SvtId, oldCollects, (int32_t)SvtId, v79);
        Instance = UserServantEntity__getSvtId(v77, 0LL);
        if ( !v19 )
          goto LABEL_147;
        Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v19,
                              Instance,
                              (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !usrSvts )
          goto LABEL_147;
        v81 = usrSvts->max_length;
        v82 = (ServantEntity_o *)Instance;
        if ( v81 < 1 )
        {
LABEL_103:
          v87 = battleResult;
          v88 = v74;
          afterLimitCount = -1;
          v90 = -1;
          if ( !battleResult )
            goto LABEL_147;
        }
        else
        {
          v83 = 0;
          while ( 1 )
          {
            if ( v83 >= v81 )
              goto LABEL_148;
            v84 = usrSvts->m_Items[v83];
            if ( !v84 )
              goto LABEL_147;
            v85 = *(_OWORD *)&v84->fields.id.fields.fakeValue;
            *(_OWORD *)&v125.fields.currentCryptoKey = *(_OWORD *)&v84->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v125.fields.fakeValue = v85;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v124 = v125;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v124, 0LL);
            if ( Instance == v76->fields.userSvtId )
              break;
            v81 = usrSvts->max_length;
            if ( (int)++v83 >= v81 )
              goto LABEL_103;
          }
          v87 = battleResult;
          v88 = v74;
          if ( this->fields.isMultiDeck )
            BattleResultBondsComponent__UpdateAfterLimitCount(
              (BattleResultBondsComponent_o *)Instance,
              battleData,
              v84,
              v75,
              Master_WarQuestSelectionMaster,
              v86);
          Instance = UserServantEntity__getIconLimitCount((UserServantEntity_o *)v84, 0, 0LL);
          afterIconLimitCount = v84->fields.afterIconLimitCount;
          afterLimitCount = v84->fields.afterLimitCount;
          if ( afterIconLimitCount < 0 || (_DWORD)Instance == afterIconLimitCount )
            v90 = Instance;
          else
            v90 = v84->fields.afterIconLimitCount;
          if ( !battleResult )
            goto LABEL_147;
        }
        buddyPointInfos = v87->fields.buddyPointInfos;
        if ( buddyPointInfos )
        {
          v94 = 0LL;
          if ( *(_QWORD *)&buddyPointInfos->max_length && !isHideBuddyPointResult )
          {
            v95 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleBuddyPointInfo__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v95,
              (Il2CppObject *)v76,
              Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__,
              (const MethodInfo_2BC90BC *)Method_System_Func_BattleBuddyPointInfo__bool___ctor__);
            Instance = (int64_t)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                  (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)buddyPointInfos,
                                  (System_Func_T__bool__o *)v95,
                                  (const MethodInfo_1A421B0 *)Method_BasicHelper_Find_BattleBuddyPointInfo___);
            v94 = (BattleBuddyPointInfo_o *)Instance;
          }
        }
        else
        {
          v94 = 0LL;
        }
        if ( this->fields.isMultiDeck )
        {
          Instance = (int64_t)Object_object;
          if ( !Object_object )
            goto LABEL_147;
          Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, userSvtId);
          v96 = (BattleResultBondsIconComponent_o *)Instance;
          if ( !Instance )
            goto LABEL_147;
        }
        else
        {
          v97 = this->fields.collects;
          if ( !v97 )
            goto LABEL_147;
          if ( v88 >= v97->max_length )
            break;
          v96 = v97->m_Items[v88];
          if ( !v96 )
            goto LABEL_147;
        }
        BattleResultBondsIconComponent__setServantData(
          v96,
          userSvtCol,
          v77,
          v90,
          this->fields.baseFriendshipExp,
          Type == 0,
          afterLimitCount,
          v80);
        BattleResultBondsIconComponent__SetBuddyPointInfo(v96, v94, battleResult->fields.eventId, v98);
        if ( !v82 )
          goto LABEL_147;
        v99 = v88;
        if ( ServantEntity__checkIsHeroineSvt(v82, 0LL) && !UserServantEntity__IsAddFriendShipHeroine(v77, 0LL) )
        {
          updateFlg = this->fields.updateFlg;
          v107 = updateFlg | BattleResultBondsIconComponent__setNextServantData(v96, userSvtCol, v100);
          v18 = this;
          this->fields.updateFlg = v107 & 1;
          v96->fields.isHeroine = 1;
          v19 = v117;
          v17 = v118;
        }
        else
        {
          Instance = (int64_t)MasterData_WarQuestSelectionMaster;
          v19 = v117;
          v17 = v118;
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_147;
          EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                               MasterData_WarQuestSelectionMaster,
                               v96->fields.userId,
                               v96->fields.svtId,
                               0LL);
          v102 = this->fields.updateFlg;
          v105 = v102 | BattleResultBondsIconComponent__setNextServantData(v96, EntityDefinitely, v103);
          v18 = this;
          this->fields.updateFlg = v105 & 1;
        }
        svts = v116;
        BattleResultBondsIconComponent__changeGauge(v96, 0.0, v104);
        BattleResultBondsIconComponent__InitBuddyPointInfo(v96, v108);
        if ( v18->fields.isMultiDeck )
        {
          Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v96, 0LL);
          if ( !Instance )
            goto LABEL_147;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        }
        v74 = v99 + 1;
      }
      max_length = svts->max_length;
      if ( (int)++v73 >= max_length )
        goto LABEL_139;
    }
LABEL_148:
    v109 = sub_B52A88(Instance);
    sub_B52A28(v109, 0LL);
  }
  v74 = 0;
LABEL_139:
  if ( v18->fields.isMultiDeck )
  {
    if ( Object_object )
    {
      BattleResultBondsDeckPerWaveComponent__SetWaveCount(Object_object, currentWave, maxWave, v23);
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object_object, 0LL);
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        Instance = (int64_t)Object_object->fields.iconRoot;
        if ( Instance )
        {
          (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
            Instance,
            *(_QWORD *)(*(_QWORD *)Instance + 448LL));
          Instance = (int64_t)v18->fields.multiBondsRoot;
          if ( Instance )
          {
            (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
              Instance,
              *(_QWORD *)(*(_QWORD *)Instance + 448LL));
            Instance = (int64_t)v18->fields.bondsList;
            if ( Instance )
            {
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
                (EventMissionProgressRequest_Argument_ProgressData_o *)Object_object,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__);
              return;
            }
          }
        }
      }
    }
    goto LABEL_147;
  }
  BattleResultBondsComponent__NormalBondsInit(v18, v74, cnt, Type == 0, battleResult, isHideBuddyPointResult, v24);
}


void __fastcall BattleResultBondsComponent__SkipUpdateValue(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  const MethodInfo *v4; // x1
  int max_length; // w8
  BattleResultBondsIconComponent_array *v6; // x20
  unsigned int v7; // w21
  __int64 v8; // x0

  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, method);
  if ( !BondsIconArray )
    goto LABEL_9;
  max_length = BondsIconArray->max_length;
  v6 = BondsIconArray;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
        v8 = sub_B52A88(BondsIconArray);
        sub_B52A28(v8, 0LL);
      }
      BondsIconArray = (BattleResultBondsIconComponent_array *)v6->m_Items[v7];
      if ( !BondsIconArray )
        break;
      BattleResultBondsIconComponent__FinishBuddyPointInfoUpdate((BattleResultBondsIconComponent_o *)BondsIconArray, v4);
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_7;
    }
LABEL_9:
    sub_B52A5C(BondsIconArray, v4);
  }
LABEL_7:
  BattleResultBondsComponent__finishUpdateValue(this, v4);
}


void __fastcall BattleResultBondsComponent__UpdateAfterLimitCount(
        BattleResultBondsComponent_o *this,
        BattleData_o *battleData,
        BattleUserServantData_o *userSvtData,
        BattleDeckServantData_o *deckSvtData,
        ServantLimitImageMaster_o *svtLimitImageMaster,
        const MethodInfo *method)
{
  struct BattleEntity_o *battle_ent; // x8
  int32_t FollowerType; // w0
  int32_t Type; // w0
  __int64 v13; // x21
  __int64 v14; // x22
  int32_t v15; // w21
  __int64 v16; // x21
  __int64 v17; // x22
  int32_t v18; // w21
  int32_t IconLimitCount; // w0
  int ServantImageLimitSealAfter; // w0
  __int64 v21; // x20
  __int64 v22; // x21
  int32_t v23; // w0
  int32_t afterLimitCount; // w20
  int32_t v25; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_42B0A16 & 1) == 0 )
  {
    sub_B52984(&ImageLimitCount_TypeInfo);
    this = (BattleResultBondsComponent_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B0A16 = 1;
  }
  if ( !userSvtData )
    goto LABEL_30;
  if ( userSvtData->fields.afterLimitCount && userSvtData->fields.afterIconLimitCount )
    return;
  *(_QWORD *)&userSvtData->fields.afterLimitCount = -1LL;
  if ( !battleData )
    goto LABEL_30;
  battle_ent = battleData->fields.battle_ent;
  if ( !battle_ent || !deckSvtData )
    goto LABEL_30;
  FollowerType = BattleDeckServantData__GetFollowerType(deckSvtData, battle_ent->fields.followerType, 0LL);
  Type = Follower__getType(FollowerType, 0LL);
  if ( Follower__IsNpc(Type, 0LL) || deckSvtData->fields.npcId > 0 )
    return;
  v14 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v26.fields.currentCryptoKey = v14;
  *(_QWORD *)&v26.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v26, 0LL);
  this = (BattleResultBondsComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                           userSvtData->fields.limitCount,
                                           0LL);
  if ( !svtLimitImageMaster )
LABEL_30:
    sub_B52A5C(this, battleData);
  if ( ServantLimitImageMaster__IsServantLimitCountSeal(svtLimitImageMaster, v15, (int32_t)this, 0LL) )
  {
    v17 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v27.fields.currentCryptoKey = v17;
    *(_QWORD *)&v27.fields.fakeValue = v16;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v27, 0LL);
    IconLimitCount = UserServantEntity__getIconLimitCount((UserServantEntity_o *)userSvtData, 0, 0LL);
    ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                   svtLimitImageMaster,
                                   v18,
                                   IconLimitCount,
                                   0LL);
    if ( ServantImageLimitSealAfter >= 11 )
    {
      userSvtData->fields.afterLimitCount = ServantImageLimitSealAfter;
    }
    else
    {
      userSvtData->fields.afterLimitCount = 2 * ServantImageLimitSealAfter;
      v22 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
      v21 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v28.fields.currentCryptoKey = v22;
      *(_QWORD *)&v28.fields.fakeValue = v21;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v28, 0LL);
      afterLimitCount = userSvtData->fields.afterLimitCount;
      v25 = v23;
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      ServantImageLimitSealAfter = ImageLimitCount__GetImageLimitCount(v25, afterLimitCount, 0LL);
    }
    userSvtData->fields.afterIconLimitCount = ServantImageLimitSealAfter;
  }
}


void __fastcall BattleResultBondsComponent__UpdateValue(
        BattleResultBondsComponent_o *this,
        float val,
        const MethodInfo *method)
{
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  const MethodInfo *v5; // x1
  int max_length; // w8
  BattleResultBondsIconComponent_array *v7; // x19
  unsigned int v8; // w20
  __int64 v9; // x0

  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, method);
  if ( !BondsIconArray )
    goto LABEL_9;
  max_length = BondsIconArray->max_length;
  v7 = BondsIconArray;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
      {
        v9 = sub_B52A88(BondsIconArray);
        sub_B52A28(v9, 0LL);
      }
      BondsIconArray = (BattleResultBondsIconComponent_array *)v7->m_Items[v8];
      if ( !BondsIconArray )
        break;
      BondsIconArray = (BattleResultBondsIconComponent_array *)BattleResultBondsIconComponent__changeGauge(
                                                                 (BattleResultBondsIconComponent_o *)BondsIconArray,
                                                                 val,
                                                                 v5);
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_9:
    sub_B52A5C(BondsIconArray, v5);
  }
}


void __fastcall BattleResultBondsComponent___checkShow_b__67_0(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  struct BattleFriendshipRewardInfo_array *showList; // x8
  __int64 showIndex; // x9
  BattleResultBondsComponent_o *v4; // x19
  BattleFriendshipRewardInfo_o *v5; // x8
  __int64 v6; // x0

  showList = this->fields.showList;
  if ( !showList )
    goto LABEL_14;
  showIndex = this->fields.showIndex;
  v4 = this;
  if ( (unsigned int)showIndex >= showList->max_length )
  {
    v6 = sub_B52A88(this);
    sub_B52A28(v6, 0LL);
  }
  v5 = showList->m_Items[showIndex];
  if ( !v5 )
    goto LABEL_14;
  this = (BattleResultBondsComponent_o *)this->fields.parentComp;
  if ( !this )
    goto LABEL_14;
  BattleResultComponent__showServantRewardAction(
    (BattleResultComponent_o *)this,
    v5->fields.userSvtId,
    v5->fields.type,
    0LL);
  this = (BattleResultBondsComponent_o *)v4->fields.parentComp;
  ++v4->fields.showIndex;
  if ( !this )
    goto LABEL_14;
  BattleResultComponent__setTouch((BattleResultComponent_o *)this, 0, 0LL);
  this = (BattleResultBondsComponent_o *)v4->fields.parentComp;
  if ( !this )
    goto LABEL_14;
  BattleResultComponent__setBg((BattleResultComponent_o *)this, 0, 0LL);
  if ( v4->fields.isMultiDeck )
  {
    this = (BattleResultBondsComponent_o *)v4->fields.multiDeckWindow;
    if ( !this )
      goto LABEL_14;
  }
  else
  {
    this = (BattleResultBondsComponent_o *)v4->fields.window;
    if ( !this )
      goto LABEL_14;
  }
  this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (BattleResultBondsComponent_o *)v4->fields.upRoot) == 0LL) )
  {
LABEL_14:
    sub_B52A5C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultBondsComponent__addConfObject(
        BattleResultBondsComponent_o *this,
        System_String_o *text,
        float posY,
        int32_t iconImageId,
        bool isCoin,
        bool isSaintGraph,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *Object; // x0
  __int64 v14; // x1
  UnityEngine_GameObject_o *v15; // x20
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x23
  BattleResultBondsComponent_c *v17; // x0
  UnityEngine_Object_o *v18; // x24
  bool v19; // w0
  const MethodInfo *v20; // x4
  UnityEngine_Transform_o *transform; // x21
  float v22; // s8
  float y; // s9
  int v24; // s2
  float v25; // s1
  float v26; // s0
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B0A0B & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&BattleResultBondsComponent_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_16942/*"bit_reward_shine02"*/);
    byte_42B0A0B = 1;
  }
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             this->fields.confPrefab,
             this->fields.confRoot,
             0LL,
             0LL);
  if ( !Object )
    goto LABEL_40;
  v15 = Object;
  Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Object, 0LL);
  if ( !Object )
    goto LABEL_40;
  v27.fields.z = 0.0;
  v27.fields.y = -112.0 - posY;
  v27.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v27, 0LL);
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                        v15,
                                                                        (const MethodInfo_1B7B264 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                         ComponentInChildren_Dropdown_DropdownItem,
                                         0LL,
                                         0LL);
  if ( ((unsigned __int8)Object & 1) != 0 )
  {
    if ( !ComponentInChildren_Dropdown_DropdownItem )
      goto LABEL_40;
    if ( isCoin )
    {
      UILabel__set_overflowMethod((UILabel_o *)ComponentInChildren_Dropdown_DropdownItem, 2, 0LL);
      UILabel__set_text((UILabel_o *)ComponentInChildren_Dropdown_DropdownItem, text, 0LL);
      v17 = BattleResultBondsComponent_TypeInfo;
      if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
        v17 = BattleResultBondsComponent_TypeInfo;
      }
      UILabel__SetCondensedScale(
        (UILabel_o *)ComponentInChildren_Dropdown_DropdownItem,
        v17->static_fields->CONF_LABEL_MAX_WIDTH - 36,
        0LL);
    }
    else
    {
      if ( isSaintGraph )
        UIWidget__set_height((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 100, 0LL);
      UILabel__set_text((UILabel_o *)ComponentInChildren_Dropdown_DropdownItem, text, 0LL);
    }
  }
  v18 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                  v15,
                                  (const MethodInfo_1B7B264 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v19 = UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
  if ( (iconImageId & 0x80000000) == 0 && v19 )
  {
    if ( isCoin )
    {
      if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetCoin((UISprite_o *)v18, iconImageId, 0LL);
    }
    else
    {
      if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetItem((UISprite_o *)v18, iconImageId, 0LL);
    }
    BattleResultBondsComponent__CreateRewardEffect(
      this,
      this->fields.resultAssetData,
      (UISprite_o *)v18,
      (System_String_o *)StringLiteral_16942/*"bit_reward_shine02"*/,
      v20);
    if ( ComponentInChildren_Dropdown_DropdownItem )
    {
      transform = UnityEngine_Component__get_transform(
                    (UnityEngine_Component_o *)ComponentInChildren_Dropdown_DropdownItem,
                    0LL);
      Object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)ComponentInChildren_Dropdown_DropdownItem,
                                             0LL);
      if ( Object )
      {
        LODWORD(v22) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Object, 0LL);
        Object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)ComponentInChildren_Dropdown_DropdownItem,
                                               0LL);
        if ( Object )
        {
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Object, 0LL);
          y = localPosition.fields.y;
          Object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)ComponentInChildren_Dropdown_DropdownItem,
                                                 0LL);
          if ( Object )
          {
            *(UnityEngine_Vector3_o *)(&v24 - 2) = UnityEngine_Transform__get_localPosition(
                                                     (UnityEngine_Transform_o *)Object,
                                                     0LL);
            if ( transform )
            {
              v25 = y;
              v26 = v22 + 36.0;
              UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v24 - 2), 0LL);
              goto LABEL_38;
            }
          }
        }
      }
    }
LABEL_40:
    sub_B52A5C(Object, v14);
  }
LABEL_38:
  Object = (UnityEngine_GameObject_o *)this->fields.conflist;
  if ( !Object )
    goto LABEL_40;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Object,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


void __fastcall BattleResultBondsComponent__checkBondsUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x22
  PlayMakerFSM_o *myFsm; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1
  System_Int32_array **BondsIconArray; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int32_t colIndex; // w9
  __int64 v21; // x8
  __int64 v22; // x9
  __int64 v23; // x10
  __int64 *v24; // x8
  __int64 v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 *v32; // x21
  Il2CppObject *current; // x22
  UnityEngine_Object_o *levelUpSimpleAnim; // x22
  __int64 v35; // x3
  PlayMakerFSM_c *klass; // x8
  PlayMakerFSM_o *v37; // x22
  unsigned __int64 v38; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v40; // x0
  UnityEngine_Object_o *levelUpAnim; // x22
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x9
  __int64 v49; // x8
  __int64 v50; // x9
  struct BattleResultBondsIconComponent_o *v51; // x1
  UnityEngine_Object_o *figureMoveRoot; // x21
  System_Int32_array **gameObject; // x0
  UnityEngine_GameObject_o **v54; // x21
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t svtId; // w22
  int32_t svtLimit; // w23
  BattleResultBondsFigureComponent_o *bondsFigure; // x19
  UnityEngine_GameObject_o *v72; // x21
  System_Action_o *v73; // x24
  __int64 v74; // x0
  const MethodInfo *v75; // [xsp+0h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_T__o v76; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v77; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42B0A09 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    sub_B52984(&BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo);
    sub_B52984(&Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__);
    sub_B52984(&BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo);
    sub_B52984(&StringLiteral_16928/*"bit_result_levelup01"*/);
    sub_B52984(&StringLiteral_3121/*"CLOSE"*/);
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    sub_B52984(&StringLiteral_3123/*"CLOSE_BOND_UP_ROOT"*/);
    byte_42B0A09 = 1;
  }
  memset(&v77, 0, sizeof(v77));
  v3 = sub_B52A54(BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo);
  BattleResultBondsComponent___c__DisplayClass61_0___ctor((BattleResultBondsComponent___c__DisplayClass61_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_70;
  *(_QWORD *)(v3 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  BondsIconArray = (System_Int32_array **)BattleResultBondsComponent__GetBondsIconArray(this, v12);
  *(_QWORD *)(v3 + 24) = BondsIconArray;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 24), BondsIconArray, v14, v15, v16, v17, v18, v19);
  colIndex = this->fields.colIndex;
  v21 = *(_QWORD *)(v3 + 24);
  *(_DWORD *)(v3 + 32) = colIndex;
  if ( !v21 )
    goto LABEL_70;
  while ( 1 )
  {
    if ( colIndex >= *(_DWORD *)(v21 + 24) )
    {
      myFsm = this->fields.myFsm;
      if ( this->fields.openBoundsFlg )
      {
        if ( !myFsm )
          goto LABEL_70;
        if ( this->fields.isMultiDeck )
          v24 = &StringLiteral_3123/*"CLOSE_BOND_UP_ROOT"*/;
        else
          v24 = &StringLiteral_5538/*"END_PROC"*/;
      }
      else
      {
        if ( !myFsm )
          goto LABEL_70;
        v24 = &StringLiteral_3121/*"CLOSE"*/;
      }
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v24, 0LL);
      return;
    }
    this->fields.colIndex = colIndex;
    v21 = *(_QWORD *)(v3 + 24);
    if ( !v21 )
      goto LABEL_70;
    v22 = *(int *)(v3 + 32);
    if ( (unsigned int)v22 >= *(_DWORD *)(v21 + 24) )
      goto LABEL_71;
    v23 = *(_QWORD *)(v21 + 8 * v22 + 32);
    if ( !v23 )
      goto LABEL_70;
    if ( *(_BYTE *)(v23 + 104) && *(_DWORD *)(v23 + 152) != *(_DWORD *)(v23 + 160) )
      break;
    colIndex = v22 + 1;
    *(_DWORD *)(v3 + 32) = colIndex;
  }
  v25 = sub_B52A54(BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo);
  BattleResultBondsComponent___c__DisplayClass61_1___ctor(
    (BattleResultBondsComponent___c__DisplayClass61_1_o *)v25,
    0LL);
  if ( !v25 )
    goto LABEL_70;
  *(_QWORD *)(v25 + 24) = v3;
  v32 = (__int64 *)(v25 + 24);
  sub_B52920((BattleServantConfConponent_o *)(v25 + 24), (System_Int32_array **)v3, v26, v27, v28, v29, v30, v31);
  myFsm = (PlayMakerFSM_o *)this->fields.conflist;
  if ( !myFsm )
    goto LABEL_70;
  if ( SLODWORD(myFsm->fields.fsm) < 1 )
    goto LABEL_32;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v76,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)myFsm,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v77 = v76;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v77,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v77.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v77,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  myFsm = (PlayMakerFSM_o *)this->fields.conflist;
  if ( !myFsm )
    goto LABEL_70;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)myFsm,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_GameObject__Clear__);
LABEL_32:
  myFsm = (PlayMakerFSM_o *)this->fields.upRoot;
  if ( !myFsm )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 1, 0LL);
  levelUpSimpleAnim = (UnityEngine_Object_o *)this->fields.levelUpSimpleAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(levelUpSimpleAnim, 0LL, 0LL) )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.levelUpSimpleAnim;
    if ( myFsm )
    {
      myFsm = (PlayMakerFSM_o *)SimpleAnimation__get_Item(
                                  (SimpleAnimation_o *)myFsm,
                                  (System_String_o *)StringLiteral_16928/*"bit_result_levelup01"*/,
                                  0LL);
      if ( myFsm )
      {
        klass = myFsm->klass;
        v37 = myFsm;
        if ( *(_WORD *)&myFsm->klass->_2.bitflags1 )
        {
          v38 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v38;
            p_offset += 2;
            if ( v38 >= *(unsigned __int16 *)&myFsm->klass->_2.bitflags1 )
              goto LABEL_43;
          }
          v40 = (__int64)(&klass->vtable._4_OnBeforeSerialize.method + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_43:
          v40 = sub_AEB880(myFsm, SimpleAnimation_State_TypeInfo, 4LL, v35);
        }
        (*(void (__fastcall **)(PlayMakerFSM_o *, _QWORD, float))v40)(v37, *(_QWORD *)(v40 + 8), 0.0);
        myFsm = (PlayMakerFSM_o *)this->fields.levelUpSimpleAnim;
        if ( myFsm )
        {
          myFsm = (PlayMakerFSM_o *)SimpleAnimation__Play_16625408(
                                      (SimpleAnimation_o *)myFsm,
                                      (System_String_o *)StringLiteral_16928/*"bit_result_levelup01"*/,
                                      0LL);
          goto LABEL_55;
        }
      }
    }
LABEL_70:
    sub_B52A5C(myFsm, v5);
  }
  levelUpAnim = (UnityEngine_Object_o *)this->fields.levelUpAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  myFsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Inequality(levelUpAnim, 0LL, 0LL);
  if ( ((unsigned __int8)myFsm & 1) != 0 )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.levelUpAnim;
    if ( !myFsm )
      goto LABEL_70;
    myFsm = (PlayMakerFSM_o *)UnityEngine_Animation__get_Item(
                                (UnityEngine_Animation_o *)myFsm,
                                (System_String_o *)StringLiteral_16928/*"bit_result_levelup01"*/,
                                0LL);
    if ( !myFsm )
      goto LABEL_70;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)myFsm, 0.0, 0LL);
    myFsm = (PlayMakerFSM_o *)this->fields.levelUpAnim;
    if ( !myFsm )
      goto LABEL_70;
    myFsm = (PlayMakerFSM_o *)UnityEngine_Animation__Play_51067744(
                                (UnityEngine_Animation_o *)myFsm,
                                (System_String_o *)StringLiteral_16928/*"bit_result_levelup01"*/,
                                0LL);
  }
LABEL_55:
  v48 = *v32;
  if ( !*v32 )
    goto LABEL_70;
  v49 = *(_QWORD *)(v48 + 24);
  if ( !v49 )
    goto LABEL_70;
  v50 = *(int *)(v48 + 32);
  if ( (unsigned int)v50 >= *(_DWORD *)(v49 + 24) )
  {
LABEL_71:
    v74 = sub_B52A88(myFsm);
    sub_B52A28(v74, 0LL);
  }
  v51 = *(struct BattleResultBondsIconComponent_o **)(v49 + 8 * v50 + 32);
  this->fields.openCollect = v51;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.openCollect,
    (System_Int32_array **)v51,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  figureMoveRoot = (UnityEngine_Object_o *)this->fields.figureMoveRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(figureMoveRoot, 0LL, 0LL) )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.figureMoveRoot;
    if ( !myFsm )
      goto LABEL_70;
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myFsm, 0LL);
    *(_QWORD *)(v25 + 16) = gameObject;
    v54 = (UnityEngine_GameObject_o **)(v25 + 16);
    sub_B52920((BattleServantConfConponent_o *)(v25 + 16), gameObject, v55, v56, v57, v58, v59, v60);
    myFsm = *(PlayMakerFSM_o **)(v25 + 16);
    if ( !myFsm )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 0, 0LL);
  }
  else
  {
    myFsm = (PlayMakerFSM_o *)this->fields.figureRoot;
    if ( !myFsm )
      goto LABEL_70;
    v61 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myFsm, 0LL);
    *(_QWORD *)(v25 + 16) = v61;
    v54 = (UnityEngine_GameObject_o **)(v25 + 16);
    sub_B52920((BattleServantConfConponent_o *)(v25 + 16), v61, v62, v63, v64, v65, v66, v67);
  }
  openCollect = this->fields.openCollect;
  if ( !openCollect )
    goto LABEL_70;
  svtId = openCollect->fields.svtId;
  svtLimit = openCollect->fields.svtLimit;
  bondsFigure = this->fields.bondsFigure;
  v72 = *v54;
  v73 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v73,
    (Il2CppObject *)v25,
    Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__,
    0LL);
  if ( !bondsFigure )
    goto LABEL_70;
  BattleResultBondsFigureComponent__SetupFigure(bondsFigure, v72, svtId, svtLimit, 7, 0, 51, v73, v75);
}


void __fastcall BattleResultBondsComponent__checkShow(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  struct BattleFriendshipRewardInfo_array *showList; // x8
  __int64 v4; // x8
  SummonAssetManager_o *Instance; // x20
  System_Action_o *v6; // x21
  SummonAssetManager_o *parentComp; // x0

  if ( (byte_42B0A0F & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BattleResultBondsComponent__checkShow_b__67_0__);
    sub_B52984(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_42B0A0F = 1;
  }
  showList = this->fields.showList;
  if ( showList )
  {
    v4 = *(_QWORD *)&showList->max_length;
    if ( v4 )
    {
      if ( this->fields.showIndex < (int)v4 )
      {
        this->fields.tempSaveTimeScale = UnityEngine_Time__get_timeScale(0LL);
        UnityEngine_Time__set_timeScale(1.0, 0LL);
        Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
        v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(v6, (Il2CppObject *)this, Method_BattleResultBondsComponent__checkShow_b__67_0__, 0LL);
        if ( Instance )
        {
          SummonAssetManager__LoadSummonAssets(Instance, v6, 0LL);
          return;
        }
        goto LABEL_21;
      }
      parentComp = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      if ( !parentComp )
        goto LABEL_21;
      SummonAssetManager__UnloadSummonAssets(parentComp, 0LL);
    }
  }
  parentComp = (SummonAssetManager_o *)this->fields.parentComp;
  if ( !parentComp )
    goto LABEL_21;
  BattleResultComponent__ResetPlayScreenTouch((BattleResultComponent_o *)parentComp, 0LL);
  parentComp = (SummonAssetManager_o *)this->fields.parentComp;
  if ( !parentComp )
    goto LABEL_21;
  BattleResultComponent__setTouch((BattleResultComponent_o *)parentComp, 1, 0LL);
  parentComp = (SummonAssetManager_o *)this->fields.parentComp;
  if ( !parentComp )
    goto LABEL_21;
  BattleResultComponent__setBg((BattleResultComponent_o *)parentComp, 1, 0LL);
  if ( this->fields.isMultiDeck )
  {
    parentComp = (SummonAssetManager_o *)this->fields.multiDeckWindow;
    if ( !parentComp )
      goto LABEL_21;
  }
  else
  {
    parentComp = (SummonAssetManager_o *)this->fields.window;
    if ( !parentComp )
      goto LABEL_21;
  }
  parentComp = (SummonAssetManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parentComp, 0LL);
  if ( !parentComp
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)parentComp, 1, 0LL),
        (parentComp = (SummonAssetManager_o *)this->fields.upRoot) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)parentComp, 1, 0LL),
        (parentComp = (SummonAssetManager_o *)this->fields.parentComp) == 0LL) )
  {
LABEL_21:
    sub_B52A5C(parentComp, method);
  }
  BattleResultComponent__showServantRewardAction((BattleResultComponent_o *)parentComp, 0LL, 1, 0LL);
}


void __fastcall BattleResultBondsComponent__closeBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v4; // x1
  struct System_Collections_Generic_List_UIUnityRenderer__o *effectUIList; // x20
  int size; // w8
  int i; // w21
  struct BattleWindowComponent_o *confwindow; // x20
  BattleWindowComponent_EndCall_o *v9; // x21

  if ( (byte_42B0A10 & 1) == 0 )
  {
    sub_B52984(&Method_BattleResultBondsComponent_endCloseBondUp__);
    sub_B52984(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UIUnityRenderer__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B0A10 = 1;
  }
  UnityEngine_Time__set_timeScale(this->fields.tempSaveTimeScale, 0LL);
  effectUIList = this->fields.effectUIList;
  if ( !effectUIList )
    goto LABEL_20;
  size = effectUIList->fields._size;
  if ( size >= 1 )
  {
    for ( i = 0; i < size; ++i )
    {
      if ( size <= (unsigned int)i )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      gameObject = (UnityEngine_Component_o *)effectUIList->fields._items->m_Items[i];
      if ( !gameObject )
        goto LABEL_20;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_20;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      effectUIList = this->fields.effectUIList;
      if ( !effectUIList )
        goto LABEL_20;
      size = effectUIList->fields._size;
    }
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.effectUIList,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_UIUnityRenderer__Clear__);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.parentComp;
  if ( !gameObject
    || (BattleResultComponent__setTouch((BattleResultComponent_o *)gameObject, 0, 0LL),
        (gameObject = (UnityEngine_Component_o *)this->fields.bondsFigure) == 0LL)
    || (BattleResultBondsFigureComponent__DestroyFigure((BattleResultBondsFigureComponent_o *)gameObject, v4),
        confwindow = this->fields.confwindow,
        v9 = (BattleWindowComponent_EndCall_o *)sub_B52A54(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v9,
          (Il2CppObject *)this,
          Method_BattleResultBondsComponent_endCloseBondUp__,
          0LL),
        !confwindow) )
  {
LABEL_20:
    sub_B52A5C(gameObject, v4);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))confwindow->klass->vtable._12_Close.method)(
    confwindow,
    v9,
    confwindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultBondsComponent__endClose(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1
  ServantFaceIconComponent_o *BondsIconArray; // x0
  __int64 v11; // x1
  struct UISprite_o *backSprite; // x21
  ServantFaceIconComponent_o *v13; // x20
  unsigned int v14; // w22
  __int64 v15; // x8
  __int64 v16; // x0

  if ( (byte_42B0A13 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    byte_42B0A13 = 1;
  }
  this->fields.resultAssetData = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.resultAssetData, 0LL, v2, v3, v4, v5, v6, v7);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    BondsIconArray = (ServantFaceIconComponent_o *)BattleResultBondsComponent__GetBondsIconArray(this, v9);
    if ( !BondsIconArray )
      goto LABEL_18;
    backSprite = BondsIconArray->fields.backSprite;
    v13 = BondsIconArray;
    if ( (int)backSprite >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        v15 = *((_QWORD *)&v13->fields.faceSprite + (int)v14);
        if ( !v15 )
          break;
        BondsIconArray = *(ServantFaceIconComponent_o **)(v15 + 40);
        if ( !BondsIconArray )
          break;
        ServantFaceIconComponent__ClearFaceAtlas(BondsIconArray, 0LL);
        if ( (int)++v14 >= (int)backSprite )
          goto LABEL_15;
        if ( v14 >= LODWORD(v13->fields.backSprite) )
        {
          v16 = sub_B52A88(BondsIconArray);
          sub_B52A28(v16, 0LL);
        }
      }
LABEL_18:
      sub_B52A5C(BondsIconArray, v11);
    }
  }
LABEL_15:
  BondsIconArray = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
  if ( !BondsIconArray )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BondsIconArray, 0, 0LL);
  BondsIconArray = (ServantFaceIconComponent_o *)this->fields.myFsm;
  if ( !BondsIconArray )
    goto LABEL_18;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_5538/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultBondsComponent__endCloseBondUp(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42B0A11 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    byte_42B0A11 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5538/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultBondsComponent__endMoveFigure(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x20
  __int64 lvComp; // x0
  __int64 v5; // x1
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t friendshipRank; // w22
  int32_t svtId; // w21
  int v9; // w28
  Il2CppObject *current; // x23
  System_String_o *v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v15; // x1
  const MethodInfo *v16; // x5
  struct BattleResultBondsIconComponent_o *v17; // x8
  int32_t svtLimit; // w23
  int32_t ServantLimitCountSealAfter; // w23
  System_String_o *v20; // x0
  const MethodInfo *v21; // x5
  System_String_o *v22; // x0
  const MethodInfo *v23; // x5
  struct BattleResultBondsIconComponent_o *v24; // x8
  System_String_o *v25; // x0
  const MethodInfo *v26; // x5
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x22
  struct BattleFriendshipRewardInfo_array *rewardInfos; // x20
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v30; // x23
  int v31; // w21
  int CONF_SERVANT_COIN_PLUS_HEIGHT; // w25
  struct BattleResultBondsIconComponent_o *v33; // x8
  BattleFriendshipRewardInfo_o *v34; // x24
  GiftEntity_o *v35; // x25
  WarEntity_o *v36; // x0
  System_String_o *v37; // x26
  Il2CppObject *v38; // x0
  WarEntity_o *v39; // x0
  ServantEntity_o *v40; // x26
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x27
  int32_t v42; // w1
  System_String_o *v43; // x0
  const MethodInfo *v44; // x5
  bool v45; // w26
  Il2CppObject *Name; // x26
  System_String_o *v47; // x0
  System_String_o *v48; // x27
  int32_t IconImageId; // w0
  const MethodInfo *v50; // x5
  BattleResultBondsComponent_c *v51; // x0
  struct BattleFriendshipRewardInfo_array *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  int v59; // w20
  UnityEngine_Transform_o *confRoot; // x21
  unsigned int localPosition; // s0
  int v62; // w8
  float v63; // s1
  int v64; // w20
  float v65; // s1
  int v66; // s2
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *rankupConfLabel; // x21
  struct BattleWindowComponent_o *confwindow; // x20
  BattleWindowComponent_EndCall_o *v70; // x21
  __int64 v71; // x0
  System_Text_StringBuilder_o *v72; // [xsp+8h] [xbp-B8h]
  int32_t key; // [xsp+14h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_T__o v74; // [xsp+18h] [xbp-A8h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+30h] [xbp-90h] BYREF
  System_String_o *countText; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v77; // [xsp+40h] [xbp-80h] BYREF
  System_String_o *nameText; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_42B0A0D & 1) == 0 )
  {
    sub_B52984(&Method_BattleResultBondsComponent_openedBondUp__);
    sub_B52984(&BattleResultBondsComponent_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&ServantCommentManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B52984(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    sub_B52984(&StringLiteral_11192/*"RESULT_BOUNDS_OPENQUEST"*/);
    sub_B52984(&StringLiteral_11195/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/);
    sub_B52984(&StringLiteral_11194/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/);
    sub_B52984(&StringLiteral_11191/*"RESULT_BOUNDS_GET_COIN_NAME"*/);
    sub_B52984(&StringLiteral_11189/*"RESULT_BOUNDS_GETVOICE"*/);
    sub_B52984(&StringLiteral_23768/*"{0} {1}"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_11190/*"RESULT_BOUNDS_GET_COIN_COUNT"*/);
    byte_42B0A0D = 1;
  }
  memset(&v77, 0, sizeof(v77));
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  v3 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
  openCollect = this->fields.openCollect;
  if ( !openCollect )
    goto LABEL_127;
  lvComp = (__int64)this->fields.lvComp;
  if ( !lvComp )
    goto LABEL_127;
  friendshipRank = openCollect->fields.friendshipRank;
  svtId = openCollect->fields.svtId;
  BattleResultMasterUpStatusComponent__setData(
    (BattleResultMasterUpStatusComponent_o *)lvComp,
    friendshipRank,
    openCollect->fields.nextFriendShipRank,
    0LL);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  lvComp = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !lvComp )
    goto LABEL_127;
  v72 = v3;
  lvComp = (__int64)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                      (clsQuestCheck_o *)lvComp,
                      svtId,
                      friendshipRank,
                      8,
                      0LL);
  if ( lvComp )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v74,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)lvComp,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    v9 = 0;
    v77 = v74;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v77,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
    {
      current = v77.fields.current;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11192/*"RESULT_BOUNDS_OPENQUEST"*/, 0LL);
      if ( !current )
        sub_B52A5C(v11, v12);
      v13 = v11;
      QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
      v15 = System_String__Format(v13, QuestName, 0LL);
      BattleResultBondsComponent__addConfObject(this, v15, (float)v9 * 22.0, -1, 0, 0, v16);
      v9 += 3;
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v77,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  }
  else
  {
    v9 = 0;
  }
  v17 = this->fields.openCollect;
  if ( !v17 )
    goto LABEL_127;
  svtLimit = v17->fields.svtLimit;
  lvComp = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lvComp )
    goto LABEL_127;
  lvComp = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)lvComp,
                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !lvComp )
    goto LABEL_127;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)lvComp,
                                 svtId,
                                 svtLimit,
                                 0LL);
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  if ( ServantCommentManager__IsOpenByServantFriendShipAndImageLimit(
         svtId,
         ServantLimitCountSealAfter,
         friendshipRank,
         0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_11195/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/, 0LL);
    BattleResultBondsComponent__addConfObject(this, v20, (float)v9 * 22.0, -1, 0, 1, v21);
    v9 += 4;
  }
  else
  {
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    lvComp = ServantCommentManager__IsOpenByServantFriendShip_27238308(
               svtId,
               friendshipRank,
               ServantLimitCountSealAfter,
               0LL);
    if ( (lvComp & 1) != 0 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_11194/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, 0LL);
      BattleResultBondsComponent__addConfObject(this, v22, (float)v9 * 22.0, -1, 0, 0, v23);
      v9 += 2;
    }
  }
  v24 = this->fields.openCollect;
  if ( !v24 )
    goto LABEL_127;
  if ( ServantVoiceMaster__isOpenByServantFriendShip(svtId, v24->fields.maxLimitCount, friendshipRank, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_11189/*"RESULT_BOUNDS_GETVOICE"*/, 0LL);
    BattleResultBondsComponent__addConfObject(this, v25, (float)v9 * 22.0, -1, 0, 0, v26);
    v9 += 2;
  }
  if ( this->fields.rewardInfos )
  {
    v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v27,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    lvComp = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ItemMaster___);
    rewardInfos = this->fields.rewardInfos;
    if ( !rewardInfos )
      goto LABEL_127;
    max_length = rewardInfos->max_length;
    if ( max_length < 1 )
    {
      CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
      if ( !v27 )
        goto LABEL_127;
    }
    else
    {
      key = svtId;
      v30 = (DataMasterBase_WarMaster__WarEntity__int__o *)lvComp;
      v31 = 0;
      CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
      do
      {
        if ( v31 >= (unsigned int)max_length )
        {
          v71 = sub_B52A88(lvComp);
          sub_B52A28(v71, 0LL);
        }
        v33 = this->fields.openCollect;
        if ( !v33 )
          goto LABEL_127;
        v34 = rewardInfos->m_Items[v31];
        if ( !v34 )
          goto LABEL_127;
        if ( v33->fields.svtId == v34->fields.targetSvtId )
        {
          lvComp = (__int64)BattleFriendshipRewardInfo__getGiftEntity(v34, 0LL);
          if ( !lvComp )
            goto LABEL_127;
          v35 = (GiftEntity_o *)lvComp;
          GiftEntity__GetInfo((GiftEntity_o *)lvComp, &nameText, &countText, 0LL);
          lvComp = GiftEntity__isQp(v35, 0LL);
          if ( (lvComp & 1) != 0 )
          {
            nameText = countText;
            countText = (System_String_o *)StringLiteral_1/*""*/;
          }
          if ( v35->fields.type == 2 )
          {
            if ( !v30 )
              goto LABEL_127;
            v36 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                    v30,
                    v35->fields.objectId,
                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( v36 && v36->fields.bannerId == 29 )
            {
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v37 = LocalizationManager__Get((System_String_o *)StringLiteral_11190/*"RESULT_BOUNDS_GET_COIN_COUNT"*/, 0LL);
              LODWORD(v74.fields.list) = v35->fields.num;
              v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
              countText = System_String__Format(v37, v38, 0LL);
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              lvComp = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !lvComp )
                goto LABEL_127;
              v39 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                      (DataMasterBase_WarMaster__WarEntity__int__o *)lvComp,
                      key,
                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( v39 )
              {
                v40 = (ServantEntity_o *)v39;
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                }
                lvComp = NetworkManager__get_UserId(0LL);
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_127;
                if ( UserServantCollectionMaster__TryGetEntity(
                       Master_WarQuestSelectionMaster,
                       &entity,
                       lvComp,
                       key,
                       0LL) )
                {
                  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  }
                  lvComp = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                  if ( !entity )
                    goto LABEL_127;
                  if ( !lvComp )
                    goto LABEL_127;
                  lvComp = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                             (ServantLimitImageMaster_o *)lvComp,
                             key,
                             entity->fields.maxLimitCount,
                             0LL);
                  if ( !entity )
                    goto LABEL_127;
                  if ( (_DWORD)lvComp == entity->fields.maxLimitCount )
                    v42 = -1;
                  else
                    v42 = lvComp;
                }
                else
                {
                  v42 = -1;
                }
                Name = (Il2CppObject *)ServantEntity__getName(v40, v42, -1, 0LL);
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v47 = LocalizationManager__Get((System_String_o *)StringLiteral_11191/*"RESULT_BOUNDS_GET_COIN_NAME"*/, 0LL);
                nameText = System_String__Format_44563852(v47, (Il2CppObject *)nameText, Name, 0LL);
              }
              v45 = 1;
            }
            else
            {
              v45 = 0;
            }
            v48 = System_String__Format_44563852(
                    (System_String_o *)StringLiteral_23768/*"{0} {1}"*/,
                    (Il2CppObject *)nameText,
                    (Il2CppObject *)countText,
                    0LL);
            IconImageId = GiftEntity__getIconImageId(v35, 0LL);
            BattleResultBondsComponent__addConfObject(this, v48, (float)v9 * 22.0, IconImageId, v45, 0, v50);
          }
          else
          {
            v43 = System_String__Format_44563852(
                    (System_String_o *)StringLiteral_23768/*"{0} {1}"*/,
                    (Il2CppObject *)nameText,
                    (Il2CppObject *)countText,
                    0LL);
            BattleResultBondsComponent__addConfObject(this, v43, (float)v9 * 22.0, -1, 0, 0, v44);
          }
          v51 = BattleResultBondsComponent_TypeInfo;
          v9 += 2;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v51 = BattleResultBondsComponent_TypeInfo;
          }
          CONF_SERVANT_COIN_PLUS_HEIGHT = v51->static_fields->CONF_SERVANT_COIN_PLUS_HEIGHT;
          lvComp = BattleFriendshipRewardInfo__isShow(v34, 0LL);
          if ( (lvComp & 1) != 0 )
          {
            if ( !v27 )
              goto LABEL_127;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v27,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__);
          }
        }
        max_length = rewardInfos->max_length;
        ++v31;
      }
      while ( v31 < max_length );
      if ( !v27 )
LABEL_127:
        sub_B52A5C(lvComp, v5);
    }
    v52 = (struct BattleFriendshipRewardInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                                       (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
    this->fields.showList = v52;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.showList,
      (System_Int32_array **)v52,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
    this->fields.showIndex = 0;
  }
  else
  {
    CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
  }
  lvComp = (__int64)this->fields.confSprite;
  if ( v9 )
    v59 = v9;
  else
    v59 = 1;
  if ( !lvComp )
    goto LABEL_127;
  UIWidget__set_height((UIWidget_o *)lvComp, CONF_SERVANT_COIN_PLUS_HEIGHT + 22 * v59 + 120, 0LL);
  confRoot = this->fields.confRoot;
  if ( !confRoot )
    goto LABEL_127;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.confRoot, 0LL);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT >= 0 )
    v62 = CONF_SERVANT_COIN_PLUS_HEIGHT;
  else
    v62 = CONF_SERVANT_COIN_PLUS_HEIGHT + 1;
  v63 = (float)v59;
  v64 = v62 >> 1;
  v65 = (float)(v63 * 11.0) + (float)(v62 >> 1);
  v66 = 0;
  UnityEngine_Transform__set_localPosition(confRoot, *(UnityEngine_Vector3_o *)&localPosition, 0LL);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT )
  {
    lvComp = (__int64)this->fields.confwindow;
    if ( !lvComp )
      goto LABEL_127;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lvComp, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v64, 0LL);
    lvComp = (__int64)this->fields.confwindow;
    if ( !lvComp )
      goto LABEL_127;
    lvComp = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)lvComp + 424LL))(
               lvComp,
               *(_QWORD *)(*(_QWORD *)lvComp + 432LL));
  }
  if ( !v72 )
    goto LABEL_127;
  rankupConfLabel = this->fields.rankupConfLabel;
  lvComp = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v72->klass->vtable._3_ToString.method)(
             v72,
             v72->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !rankupConfLabel )
    goto LABEL_127;
  UILabel__set_text(rankupConfLabel, (System_String_o *)lvComp, 0LL);
  confwindow = this->fields.confwindow;
  v70 = (BattleWindowComponent_EndCall_o *)sub_B52A54(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v70, (Il2CppObject *)this, Method_BattleResultBondsComponent_openedBondUp__, 0LL);
  if ( !confwindow )
    goto LABEL_127;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))confwindow->klass->vtable._10_Open.method)(
    confwindow,
    v70,
    confwindow->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattleResultBondsComponent__finishUpdateValue(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v4; // x1
  void *BondsIconArray; // x0
  const MethodInfo *v6; // x1
  int v7; // w8
  _DWORD *v8; // x20
  unsigned int v9; // w21
  char *v10; // x22
  void **v11; // x22
  void *v12; // t1
  SePlayer_o *MeterSePlayer; // x0
  __int64 v14; // x0

  if ( (byte_42B0A08 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9355/*"NEXT"*/);
    sub_B52984(&iTween_TypeInfo);
    byte_42B0A08 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_43341232(gameObject, 0LL);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v4);
  if ( !BondsIconArray )
    goto LABEL_19;
  v7 = *((_DWORD *)BondsIconArray + 6);
  v8 = BondsIconArray;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v7 )
        goto LABEL_18;
      v10 = (char *)&v8[2 * v9];
      v12 = (void *)*((_QWORD *)v10 + 4);
      v11 = (void **)(v10 + 32);
      BondsIconArray = v12;
      if ( !v12 )
        break;
      BondsIconArray = (void *)BattleResultBondsIconComponent__changeGauge(
                                 (BattleResultBondsIconComponent_o *)BondsIconArray,
                                 1.0,
                                 v6);
      if ( v9 >= v8[6] )
      {
LABEL_18:
        v14 = sub_B52A88(BondsIconArray);
        sub_B52A28(v14, 0LL);
      }
      BondsIconArray = *v11;
      if ( !*v11 )
        break;
      BattleResultBondsIconComponent__LayoutFriendshipValue((BattleResultBondsIconComponent_o *)BondsIconArray, v6);
      v7 = v8[6];
      if ( (int)++v9 >= v7 )
        goto LABEL_14;
    }
LABEL_19:
    sub_B52A5C(BondsIconArray, v6);
  }
LABEL_14:
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  BondsIconArray = this->fields.myFsm;
  this->fields.bondsCountUp = 0;
  if ( !BondsIconArray )
    goto LABEL_19;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_9355/*"NEXT"*/, 0LL);
}


UserServantCollectionEntity_o *__fastcall BattleResultBondsComponent__getServantCollection(
        BattleResultBondsComponent_o *this,
        UserServantCollectionEntity_array *collects,
        int32_t svtId,
        const MethodInfo *method)
{
  signed int max_length; // w8
  unsigned int v7; // w22
  Il2CppClass **v8; // x8
  UserServantCollectionEntity_o *v9; // x21
  __int64 v11; // x0

  if ( !collects )
    goto LABEL_11;
  max_length = collects->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
        v11 = sub_B52A88(this);
        sub_B52A28(v11, 0LL);
      }
      v8 = &collects->obj.klass + (int)v7;
      v9 = (UserServantCollectionEntity_o *)v8[4];
      if ( !v9 )
        break;
      this = (BattleResultBondsComponent_o *)UserServantCollectionEntity__getSvtId(
                                               (UserServantCollectionEntity_o *)v8[4],
                                               0LL);
      if ( (_DWORD)this == svtId )
        return v9;
      max_length = collects->max_length;
      if ( (int)++v7 >= max_length )
        return 0LL;
    }
LABEL_11:
    sub_B52A5C(this, collects);
  }
  return 0LL;
}


int64_t __fastcall BattleResultBondsComponent__getUsetSvtId(
        BattleResultBondsComponent_o *this,
        DeckData_o *deck,
        int32_t index,
        const MethodInfo *method)
{
  struct BattleDeckServantData_array *svts; // x8
  int max_length; // w9
  unsigned int v6; // w10
  BattleDeckServantData_o *v7; // x12
  __int64 v9; // x0

  if ( !deck || (svts = deck->fields.svts) == 0LL )
LABEL_12:
    sub_B52A5C(this, deck);
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0LL;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= max_length )
    {
      v9 = sub_B52A88(this);
      sub_B52A28(v9, 0LL);
    }
    v7 = svts->m_Items[v6];
    if ( !v7 )
      goto LABEL_12;
    if ( v7->fields.id == index + 1 )
      return v7->fields.userSvtId;
    if ( (int)++v6 >= max_length )
      return 0LL;
  }
}


bool __fastcall BattleResultBondsComponent__isCollectsSvt(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  struct UserServantCollectionEntity_array *oldCollections; // x8

  oldCollections = this->fields.oldCollections;
  if ( !oldCollections )
    sub_B52A5C(this, method);
  return (signed int)oldCollections->max_length > 1;
}


void __fastcall BattleResultBondsComponent__openedBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0

  if ( (byte_42B0A0E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5534/*"END_OPEN"*/);
    byte_42B0A0E = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__ResetPlayScreenTouch(parentComp, 0LL), (parentComp = this->fields.parentComp) == 0LL)
    || (BattleResultComponent__setTouch(parentComp, 1, 0LL),
        parentComp = (BattleResultComponent_o *)this->fields.myFsm,
        ++this->fields.colIndex,
        !parentComp) )
  {
    sub_B52A5C(parentComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)parentComp, (System_String_o *)StringLiteral_5534/*"END_OPEN"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultBondsComponent__setResultData(
        BattleResultBondsComponent_o *this,
        DeckData_o *myDeck,
        UserServantCollectionEntity_array *oldCollects,
        BattleFriendshipRewardInfo_array *inRewardInfos,
        int32_t followerType,
        AssetData_o *resultAsset,
        BattleUserServantData_array *usrSvts,
        int32_t baseFriendshipExp,
        GetSvts_array *getJoinSvts,
        BattleResultComponent_resultData_o *battleResult,
        bool isHideBuddyPointResult,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  BattleResultBondsComponent__InitResultData(
    this,
    oldCollects,
    inRewardInfos,
    resultAsset,
    baseFriendshipExp,
    getJoinSvts,
    0,
    *(const MethodInfo **)&baseFriendshipExp);
  BattleResultBondsComponent__SetResultDataLocal(
    this,
    myDeck,
    oldCollects,
    followerType,
    usrSvts,
    battleResult,
    isHideBuddyPointResult,
    battleData,
    -1,
    -1,
    (const MethodInfo *)isHideBuddyPointResult);
}


void __fastcall BattleResultBondsComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42AD820 & 1) == 0 )
  {
    sub_B52984(&BattleResultBondsComponent___c_TypeInfo);
    byte_42AD820 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BattleResultBondsComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleResultBondsComponent___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall BattleResultBondsComponent___c___ctor(BattleResultBondsComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleResultBondsComponent___c___CheckFormalJoin_b__62_0(
        BattleResultBondsComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall BattleResultBondsComponent___c___Open_b__53_0(
        BattleResultBondsComponent___c_o *this,
        BattleResultBondsIconComponent_o *col,
        const MethodInfo *method)
{
  if ( !col )
    sub_B52A5C(this, 0LL);
  return col->fields.isUse;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_0(
        BattleResultBondsComponent___c_o *this,
        QuestRewardInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.type == 7 && x->fields.isNew;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_1(
        BattleResultBondsComponent___c_o *this,
        GetSvts_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return !x->fields.isNew;
}


void __fastcall BattleResultBondsComponent___c__DisplayClass49_0___ctor(
        BattleResultBondsComponent___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleResultBondsComponent___c__DisplayClass49_0___SetResultDataLocal_b__2(
        BattleResultBondsComponent___c__DisplayClass49_0_o *this,
        BattleBuddyPointInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.userSvtId == this->fields.userSvtId;
}


void __fastcall BattleResultBondsComponent___c__DisplayClass61_0___ctor(
        BattleResultBondsComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleResultBondsComponent___c__DisplayClass61_1___ctor(
        BattleResultBondsComponent___c__DisplayClass61_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleResultBondsComponent___c__DisplayClass61_1___checkBondsUp_b__0(
        BattleResultBondsComponent___c__DisplayClass61_1_o *this,
        const MethodInfo *method)
{
  BattleResultBondsComponent___c__DisplayClass61_1_o *v2; // x19
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *CS___8__locals1; // x8
  struct BattleResultBondsComponent_o *_4__this; // x8
  UnityEngine_Object_o *figureMoveRoot; // x20
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v6; // x9
  char v7; // w8
  UnityEngine_GameObject_o *parent; // x20
  BattleResultBondsComponent___c__DisplayClass61_1_o *v9; // x21
  __int64 v10; // x1
  BattleResultBondsComponent___c__DisplayClass61_1_o *v11; // x22
  __int64 v12; // x1
  BattleResultBondsComponent___c__DisplayClass61_1_o *v13; // x22
  __int64 v14; // x1
  BattleResultBondsComponent___c__DisplayClass61_1_o *v15; // x22
  __int64 v16; // x1
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v17; // x8
  BattleResultBondsComponent___c__DisplayClass61_1_o *v18; // x22
  __int64 v19; // x1
  __int64 v20; // x1
  System_Collections_Hashtable_o *v21; // x0
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v22; // x8
  struct BattleResultBondsComponent_o *v23; // x8
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v24; // x8
  struct BattleResultBondsComponent_o *v25; // x8
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v26; // x8
  struct BattleResultBondsIconComponent_array *bondsIcons; // x9
  __int64 i; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  char v31[4]; // [xsp+Ch] [xbp-34h] BYREF
  int v32; // [xsp+18h] [xbp-28h] BYREF
  int v33; // [xsp+1Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_42AD821 & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&float_TypeInfo);
    sub_B52984(&StringLiteral_23509/*"x"*/);
    sub_B52984(&StringLiteral_9809/*"OPEN"*/);
    sub_B52984(&StringLiteral_22867/*"time"*/);
    sub_B52984(&StringLiteral_21435/*"oncompletetarget"*/);
    sub_B52984(&StringLiteral_18489/*"endMoveFigure"*/);
    sub_B52984(&StringLiteral_20118/*"islocal"*/);
    sub_B52984(&StringLiteral_21433/*"oncomplete"*/);
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B52984(&iTween_TypeInfo);
    byte_42AD821 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_73;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_73;
  figureMoveRoot = (UnityEngine_Object_o *)_4__this->fields.figureMoveRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Object__op_Inequality(
                                                                 figureMoveRoot,
                                                                 0LL,
                                                                 0LL);
  v6 = v2->fields.CS___8__locals1;
  if ( !v6 )
    goto LABEL_73;
  v7 = (char)this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v6->fields.__4__this;
  if ( !this )
    goto LABEL_73;
  if ( (v7 & 1) == 0 )
  {
    BattleResultBondsComponent__endMoveFigure((BattleResultBondsComponent_o *)this, 0LL);
    goto LABEL_63;
  }
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)this[3].fields.parent;
  if ( !this )
    goto LABEL_73;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
  if ( !this )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  parent = v2->fields.parent;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B5299C(object___TypeInfo, 10LL);
  if ( !this )
    goto LABEL_73;
  v9 = this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_23509/*"x"*/;
  if ( StringLiteral_23509/*"x"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B52A44(
                                                                   StringLiteral_23509/*"x"*/,
                                                                   v9->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
    v10 = StringLiteral_23509/*"x"*/;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !LODWORD(v9->fields.CS___8__locals1) )
    goto LABEL_74;
  v9[1].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)v10;
  sub_B52920(&v9[1]);
  v33 = -1007026176;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v33);
  v11 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B52A44(this, v9->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
  }
  if ( LODWORD(v9->fields.CS___8__locals1) <= 1 )
    goto LABEL_74;
  v9[1].monitor = v11;
  sub_B52920(&v9[1].monitor);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22867/*"time"*/;
  if ( StringLiteral_22867/*"time"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B52A44(
                                                                   StringLiteral_22867/*"time"*/,
                                                                   v9->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
    v12 = StringLiteral_22867/*"time"*/;
  }
  else
  {
    v12 = 0LL;
  }
  if ( LODWORD(v9->fields.CS___8__locals1) <= 2 )
    goto LABEL_74;
  v9[1].fields.parent = (struct UnityEngine_GameObject_o *)v12;
  sub_B52920(&v9[1].fields);
  v32 = 1061997773;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v32);
  v13 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B52A44(this, v9->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
  }
  if ( LODWORD(v9->fields.CS___8__locals1) <= 3 )
    goto LABEL_74;
  v9[1].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v13;
  sub_B52920(&v9[1].fields.CS___8__locals1);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_20118/*"islocal"*/;
  if ( StringLiteral_20118/*"islocal"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B52A44(
                                                                   StringLiteral_20118/*"islocal"*/,
                                                                   v9->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
    v14 = StringLiteral_20118/*"islocal"*/;
  }
  else
  {
    v14 = 0LL;
  }
  if ( LODWORD(v9->fields.CS___8__locals1) <= 4 )
    goto LABEL_74;
  v9[2].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)v14;
  sub_B52920(&v9[2]);
  v31[0] = 1;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(bool_TypeInfo, v31);
  v15 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B52A44(this, v9->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
  }
  if ( LODWORD(v9->fields.CS___8__locals1) <= 5 )
    goto LABEL_74;
  v9[2].monitor = v15;
  sub_B52920(&v9[2].monitor);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_21435/*"oncompletetarget"*/;
  if ( StringLiteral_21435/*"oncompletetarget"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B52A44(
                                                                   StringLiteral_21435/*"oncompletetarget"*/,
                                                                   v9->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
    v16 = StringLiteral_21435/*"oncompletetarget"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( LODWORD(v9->fields.CS___8__locals1) <= 6 )
    goto LABEL_74;
  v9[2].fields.parent = (struct UnityEngine_GameObject_o *)v16;
  sub_B52920(&v9[2].fields);
  v17 = v2->fields.CS___8__locals1;
  if ( !v17 || (this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v17->fields.__4__this) == 0LL )
LABEL_73:
    sub_B52A5C(this, method);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
  v18 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B52A44(this, v9->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
  }
  if ( LODWORD(v9->fields.CS___8__locals1) <= 7 )
    goto LABEL_74;
  v9[2].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v18;
  sub_B52920(&v9[2].fields.CS___8__locals1);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_21433/*"oncomplete"*/;
  if ( StringLiteral_21433/*"oncomplete"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B52A44(
                                                                   StringLiteral_21433/*"oncomplete"*/,
                                                                   v9->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
    v19 = StringLiteral_21433/*"oncomplete"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( LODWORD(v9->fields.CS___8__locals1) <= 8 )
    goto LABEL_74;
  v9[3].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)v19;
  sub_B52920(&v9[3]);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_18489/*"endMoveFigure"*/;
  if ( !StringLiteral_18489/*"endMoveFigure"*/ )
  {
    v20 = 0LL;
    goto LABEL_58;
  }
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B52A44(
                                                                 StringLiteral_18489/*"endMoveFigure"*/,
                                                                 v9->klass->_1.element_class);
  if ( !this )
  {
LABEL_75:
    v30 = sub_B52A7C();
    sub_B52A28(v30, 0LL);
  }
  v20 = StringLiteral_18489/*"endMoveFigure"*/;
LABEL_58:
  if ( LODWORD(v9->fields.CS___8__locals1) <= 9 )
    goto LABEL_74;
  v9[3].monitor = (void *)v20;
  sub_B52920(&v9[3].monitor);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v21 = iTween__Hash((System_Object_array *)v9, 0LL);
  iTween__MoveFrom_43224888(parent, v21, 0LL);
LABEL_63:
  v22 = v2->fields.CS___8__locals1;
  if ( !v22 )
    goto LABEL_73;
  v23 = v22->fields.__4__this;
  if ( !v23 )
    goto LABEL_73;
  v23->fields.openBoundsFlg = 1;
  v24 = v2->fields.CS___8__locals1;
  if ( !v24 )
    goto LABEL_73;
  v25 = v24->fields.__4__this;
  if ( !v25 )
    goto LABEL_73;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v25->fields.myFsm;
  if ( !this )
    goto LABEL_73;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9809/*"OPEN"*/, 0LL);
  v26 = v2->fields.CS___8__locals1;
  if ( !v26 )
    goto LABEL_73;
  bondsIcons = v26->fields.bondsIcons;
  if ( !bondsIcons )
    goto LABEL_73;
  i = v26->fields.i;
  if ( (unsigned int)i >= bondsIcons->max_length )
  {
LABEL_74:
    v29 = sub_B52A88(this);
    sub_B52A28(v29, 0LL);
  }
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v26->fields.__4__this;
  if ( !this )
    goto LABEL_73;
  BattleResultBondsComponent__CheckFormalJoin((BattleResultBondsComponent_o *)this, bondsIcons->m_Items[i], 0LL);
}


void __fastcall BattleResultBondsComponent___c__DisplayClass62_0___ctor(
        BattleResultBondsComponent___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleResultBondsComponent___c__DisplayClass62_0___CheckFormalJoin_b__1(
        BattleResultBondsComponent___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42AD822 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD822 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  CommonUI__CreateServantCoinConfirmDialog(Instance, 1, this->fields.coin, 0LL, 0LL);
}