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

  if ( (byte_438B48C & 1) == 0 )
  {
    sub_B775C4(&BattleResultBondsComponent_TypeInfo);
    sub_B775C4(&StringLiteral_7114/*"GetNewSvt"*/);
    sub_B775C4(&StringLiteral_7103/*"GetExistSvt"*/);
    byte_438B48C = 1;
  }
  BattleResultBondsComponent_TypeInfo->static_fields->SVT_GAP_5 = 178.0;
  BattleResultBondsComponent_TypeInfo->static_fields->SVT_GAP_6 = 150.0;
  v7 = BattleResultBondsComponent_TypeInfo;
  BattleResultBondsComponent_TypeInfo->static_fields->CONF_LABEL_MAX_WIDTH = 464;
  v7->static_fields->CONF_SERVANT_COIN_PLUS_HEIGHT = 18;
  static_fields = v7->static_fields;
  v9 = (System_Int32_array **)StringLiteral_7114/*"GetNewSvt"*/;
  static_fields->GET_NEW_SVT_KEY = (struct System_String_o *)StringLiteral_7114/*"GetNewSvt"*/;
  sub_B77560((BattleServantConfConponent_o *)&static_fields->GET_NEW_SVT_KEY, v9, v1, v2, v3, v4, v5, v6);
  v10 = BattleResultBondsComponent_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_7103/*"GetExistSvt"*/;
  v10->GET_EXIST_SVT_KEY = (struct System_String_o *)StringLiteral_7103/*"GetExistSvt"*/;
  sub_B77560((BattleServantConfConponent_o *)&v10->GET_EXIST_SVT_KEY, v11, v12, v13, v14, v15, v16, v17);
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
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_438B48B & 1) == 0 )
  {
    sub_B775C4(&BattleResultBondsFigureComponent_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo);
    byte_438B48B = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.conflist = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.conflist, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  this->fields.buddyPointInfoWindowHeight = 366;
  this->fields.tempSaveTimeScale = 1.0;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
  this->fields.bondsList = (struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.bondsList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (BattleResultBondsFigureComponent_o *)sub_B77694(BattleResultBondsFigureComponent_TypeInfo);
  BattleResultBondsFigureComponent___ctor(v17, 0LL);
  this->fields.bondsFigure = v17;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.bondsFigure,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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

  if ( (byte_438B47D & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    sub_B775C4(&GetSvtCoin___TypeInfo);
    sub_B775C4(&GetSvtCoin_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__);
    sub_B775C4(&Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__);
    sub_B775C4(&BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo);
    sub_B775C4(&BattleResultBondsComponent___c_TypeInfo);
    sub_B775C4(&StringLiteral_12671/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/);
    sub_B775C4(&StringLiteral_18365/*"dialogIgnoreTime"*/);
    byte_438B47D = 1;
  }
  entity = 0LL;
  if ( this->fields.getJoinSvtList && !this->fields.isWarboard )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___),
          (getJoinSvtList = this->fields.getJoinSvtList) == 0LL) )
    {
LABEL_49:
      sub_B7769C(Instance, v6);
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
        UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_18365/*"dialogIgnoreTime"*/, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      else
      {
        if ( !v8 )
          goto LABEL_49;
        Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      v8,
                                      v11->fields.userSvtId,
                                      (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
                _9__62_0 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
                System_Action___ctor(
                  _9__62_0,
                  v17,
                  Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__,
                  0LL);
                v18 = BattleResultBondsComponent___c_TypeInfo->static_fields;
                v18->__9__62_0 = _9__62_0;
                sub_B77560(
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
              Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SvtCoinMaster___);
              Instance = (DataManager_o *)UserServantEntity__getSvtId(v12, 0LL);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_49;
              Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                            Master_WarQuestSelectionMaster,
                                            &entity,
                                            (int32_t)Instance,
                                            (const MethodInfo_21FB8F0 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_49;
                if ( *(&entity->fields.id + 1) >= 1 )
                {
                  v26 = sub_B77694(BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo);
                  BattleResultBondsComponent___c__DisplayClass62_0___ctor(
                    (BattleResultBondsComponent___c__DisplayClass62_0_o *)v26,
                    0LL);
                  v27 = (System_Int32_array **)sub_B775DC(GetSvtCoin___TypeInfo, 1LL);
                  v28 = (GetSvtCoin_o *)sub_B77694(GetSvtCoin_TypeInfo);
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
                  Instance = (DataManager_o *)sub_B77684(v28, *(_QWORD *)&(*v27)->m_Items[9]);
                  if ( !Instance )
                  {
                    v45 = sub_B776BC(0LL);
                    sub_B77668(v45, 0LL);
                  }
                  if ( !*((_DWORD *)v27 + 6) )
                  {
LABEL_50:
                    v44 = sub_B776C8(Instance);
                    sub_B77668(v44, 0LL);
                  }
                  v27[4] = (System_Int32_array *)v28;
                  sub_B77560(
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
                  sub_B77560((BattleServantConfConponent_o *)(v26 + 16), v27, v36, v37, v38, v39, v40, v41);
                  _9__62_0 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
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
              v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12671/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0LL);
              v43 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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

  if ( (byte_438B485 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleResultBondsComponent_endClose__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_438B485 = 1;
  }
  if ( this->fields.isMultiDeck )
    multiDeckWindow = this->fields.multiDeckWindow;
  else
    multiDeckWindow = this->fields.window;
  v4 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v4, (Il2CppObject *)this, Method_BattleResultBondsComponent_endClose__, 0LL);
  if ( !multiDeckWindow )
    sub_B7769C(v5, v6);
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

  if ( (byte_438B48A & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_438B48A = 1;
  }
  upRoot = this->fields.upRoot;
  if ( !upRoot
    || (UnityEngine_GameObject__SetActive(upRoot, 0, 0LL),
        (upRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B7769C(upRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)upRoot, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
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
  if ( (byte_438B47F & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
    sub_B775C4(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (BattleResultBondsComponent_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B47F = 1;
  }
  if ( !data )
    goto LABEL_20;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               effectName,
                                                                               (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleResultBondsComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           Object_WarBoardWaitTimeSetting,
                                           (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__31376384(
                                           v10,
                                           (const MethodInfo_1DEC400 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
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
        v23 = sub_B776C8(this);
        sub_B77668(v23, 0LL);
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
    sub_B7769C(this, data);
  }
LABEL_18:
  this = (BattleResultBondsComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_20;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v21,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void __fastcall BattleResultBondsComponent__DeleteGetJoinSvtData(const MethodInfo *method)
{
  BattleResultBondsComponent_c *v1; // x0

  if ( (byte_438B474 & 1) == 0 )
  {
    sub_B775C4(&BattleResultBondsComponent_TypeInfo);
    byte_438B474 = 1;
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
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  System_Int32_array **v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438B487 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
    byte_438B487 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( this->fields.isMultiDeck )
  {
    p_bondsIconArray = (BattleServantConfConponent_o *)&this->fields.bondsIconArray;
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.bondsIconArray, 0LL) )
    {
      v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v4,
        (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
      bondsList = this->fields.bondsList;
      if ( !bondsList )
        goto LABEL_17;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v17,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bondsList,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v17,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
      {
        if ( !v17.fields.current )
          sub_B7769C(0LL, v7);
        BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                          (BattleResultBondsDeckPerWaveComponent_o *)v17.fields.current,
                                                                          0LL);
        if ( !v4 )
          sub_B7769C(BondsIconArray, BondsIconArray);
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v4,
          BondsIconArray,
          (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v17,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
      if ( !v4 )
LABEL_17:
        sub_B7769C(bondsList, v5);
      v9 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v4,
                                    (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
      p_bondsIconArray->klass = (BattleServantConfConponent_c *)v9;
      sub_B77560(p_bondsIconArray, v9, v10, v11, v12, v13, v14, v15);
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

  if ( (byte_438B475 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B475 = 1;
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
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v4;
  sub_B77560(
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
    sub_B7769C(window, method);
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

  if ( (byte_438B476 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B476 = 1;
  }
  this->fields.oldCollections = oldCollects;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.oldCollections,
    (System_Int32_array **)oldCollects,
    (System_String_array **)inRewardInfos,
    (System_String_array **)resultAsset,
    *(System_Boolean_array ***)&baseFriendshipExp,
    (System_Int32_array **)getJoinSvts,
    (System_Int32_array *)inIsMultiDeck,
    (System_Int32_array *)method);
  this->fields.rewardInfos = inRewardInfos;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.rewardInfos,
    (System_Int32_array **)inRewardInfos,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.resultAssetData = resultAsset;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.resultAssetData,
    (System_Int32_array **)resultAsset,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.getJoinSvtList = getJoinSvts;
  sub_B77560(
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
  unsigned int v11; // w24
  BattleResultBondsComponent_o *v12; // x19
  __int64 v13; // x25
  struct BattleResultBondsIconComponent_array *collects; // x8
  struct BattleResultBondsIconComponent_array *v15; // x8
  struct BattleResultBondsIconComponent_array *v16; // x8
  struct BattleResultBondsIconComponent_array *v17; // x8
  float v18; // s8
  struct BattleResultBondsIconComponent_array *v19; // x8
  UnityEngine_Component_o *v20; // x8
  __int64 v21; // x24
  float v22; // s9
  int v23; // w25
  float v24; // s10
  struct BattleResultBondsIconComponent_array *v25; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x8
  UnityEngine_Object_o *bgFrame; // x20
  __int64 v29; // x0
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  v11 = targetIndex;
  v12 = this;
  if ( (byte_438B488 & 1) == 0 )
  {
    sub_B775C4(&BattleResultBondsComponent_TypeInfo);
    this = (BattleResultBondsComponent_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B488 = 1;
  }
  if ( (int)v11 < cnt )
  {
    v13 = 8LL * (int)v11 + 32;
    do
    {
      collects = v12->fields.collects;
      if ( !collects )
        goto LABEL_54;
      if ( v11 >= collects->max_length )
        goto LABEL_55;
      this = *(BattleResultBondsComponent_o **)((char *)&collects->obj.klass + v13);
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
        0LL);
      v15 = v12->fields.collects;
      if ( !v15 )
        goto LABEL_54;
      if ( v11 >= v15->max_length )
        goto LABEL_55;
      this = *(BattleResultBondsComponent_o **)((char *)&v15->obj.klass + v13);
      if ( !this )
        goto LABEL_54;
      BattleResultBondsIconComponent__SetBuddyPointInfo((BattleResultBondsIconComponent_o *)this, 0LL, 0, 0LL);
      v16 = v12->fields.collects;
      if ( !v16 )
        goto LABEL_54;
      if ( v11 >= v16->max_length )
        goto LABEL_55;
      this = *(BattleResultBondsComponent_o **)((char *)&v16->obj.klass + v13);
      if ( !this )
        goto LABEL_54;
      this = (BattleResultBondsComponent_o *)BattleResultBondsIconComponent__changeGauge(
                                               (BattleResultBondsIconComponent_o *)this,
                                               0.0,
                                               0LL);
      v17 = v12->fields.collects;
      if ( !v17 )
        goto LABEL_54;
      if ( v11 >= v17->max_length )
        goto LABEL_55;
      this = *(BattleResultBondsComponent_o **)((char *)&v17->obj.klass + v13);
      if ( !this )
        goto LABEL_54;
      BattleResultBondsIconComponent__InitBuddyPointInfo((BattleResultBondsIconComponent_o *)this, 0LL);
      ++v11;
      v13 += 8LL;
    }
    while ( (int)v11 < cnt );
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
    v18 = *(float *)(*(_QWORD *)&this->fields.buddyPointInfoWindowHeight + 4LL);
  }
  else
  {
    if ( (WORD1(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
      this = (BattleResultBondsComponent_o *)BattleResultBondsComponent_TypeInfo;
    }
    v19 = v12->fields.collects;
    if ( !v19 )
      goto LABEL_54;
    if ( v19->max_length <= cnt )
    {
LABEL_55:
      v29 = sub_B776C8(this);
      sub_B77668(v29, 0LL);
    }
    v20 = (UnityEngine_Component_o *)v19->m_Items[cnt];
    if ( !v20 )
      goto LABEL_54;
    v18 = **(float **)&this->fields.buddyPointInfoWindowHeight;
    this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_gameObject(v20, 0LL);
    if ( !this )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  if ( cnt >= 1 )
  {
    v21 = 0LL;
    v22 = 0.0;
    v23 = 4;
    v24 = (float)(1 - cnt) * 0.5;
    do
    {
      if ( isNoFollower )
        v22 = (float)v23;
      v25 = v12->fields.collects;
      if ( !v25 )
        goto LABEL_54;
      if ( (unsigned int)v21 >= v25->max_length )
        goto LABEL_55;
      this = (BattleResultBondsComponent_o *)v25->m_Items[v21];
      if ( !this )
        goto LABEL_54;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v18 * v24) - v22, 0LL);
      ++v21;
      v24 = v24 + 1.0;
      v23 -= 2;
    }
    while ( (int)v21 < cnt );
  }
  if ( !battleResult )
    goto LABEL_54;
  buddyPointInfos = battleResult->fields.buddyPointInfos;
  if ( buddyPointInfos && *(_QWORD *)&buddyPointInfos->max_length && !isHideBuddyPointResult )
  {
    bgFrame = (UnityEngine_Object_o *)v12->fields.bgFrame;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(bgFrame, 0LL, 0LL) )
    {
      this = (BattleResultBondsComponent_o *)v12->fields.bgFrame;
      if ( !this )
        goto LABEL_54;
      UIWidget__set_height((UIWidget_o *)this, v12->fields.buddyPointInfoWindowHeight, 0LL);
    }
    this = (BattleResultBondsComponent_o *)v12->fields.window;
    if ( !this
      || (this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL)) == 0LL
      || (v30.fields.y = 13.0,
          v30.fields.x = 0.0,
          v30.fields.z = 0.0,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v30, 0LL),
          (this = (BattleResultBondsComponent_o *)v12->fields.window) == 0LL) )
    {
LABEL_54:
      sub_B7769C(this, *(_QWORD *)&targetIndex);
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

  if ( (byte_438B479 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_BattleResultBondsIconComponent___);
    sub_B775C4(&Method_BattleResultBondsComponent_OpenEnd__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B775C4(&Method_System_Func_BattleResultBondsIconComponent__bool___ctor__);
    sub_B775C4(&System_Func_BattleResultBondsIconComponent__bool__TypeInfo);
    sub_B775C4(&Method_BattleResultBondsComponent___c__Open_b__53_0__);
    sub_B775C4(&BattleResultBondsComponent___c_TypeInfo);
    sub_B775C4(&StringLiteral_5634/*"END_OPEN"*/);
    sub_B775C4(&StringLiteral_12489/*"SKIP"*/);
    byte_438B479 = 1;
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
    _9__53_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattleResultBondsIconComponent__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__53_0,
      v7,
      Method_BattleResultBondsComponent___c__Open_b__53_0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_BattleResultBondsIconComponent__bool___ctor__);
    v8 = BattleResultBondsComponent___c_TypeInfo->static_fields;
    v8->__9__53_0 = (struct System_Func_BattleResultBondsIconComponent__bool__o *)_9__53_0;
    sub_B77560(
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
         (const MethodInfo_1C661F0 *)Method_BasicHelper_Any_BattleResultBondsIconComponent___) )
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
      v20 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo);
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
          v19 = &StringLiteral_5634/*"END_OPEN"*/;
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    sub_B7769C(gameObject, v15);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !gameObject )
    goto LABEL_22;
  v19 = &StringLiteral_12489/*"SKIP"*/;
LABEL_21:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)*v19, 0LL);
}


void __fastcall BattleResultBondsComponent__OpenEnd(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Object_array *v12; // x21
  System_Int32_array **v13; // x1
  __int64 v14; // x2
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
  __int64 v29; // x2
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x1
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x1
  __int64 v72; // x2
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x22
  System_Collections_Hashtable_o *v80; // x0
  const MethodInfo *v81; // x1
  int max_length; // w8
  BattleResultBondsIconComponent_array *v83; // x20
  unsigned int v84; // w21
  System_String_o *CommonSeName; // x20
  struct SePlayer_o *v86; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  __int64 v93; // x0
  __int64 v94; // x0
  int v95; // [xsp+Ch] [xbp-34h] BYREF
  int v96; // [xsp+18h] [xbp-28h] BYREF
  int v97; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_438B47A & 1) == 0 )
  {
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&SeManager_TypeInfo);
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_19296/*"from"*/);
    sub_B775C4(&StringLiteral_23154/*"time"*/);
    sub_B775C4(&StringLiteral_21711/*"onupdate"*/);
    sub_B775C4(&StringLiteral_15328/*"UpdateValue"*/);
    sub_B775C4(&StringLiteral_23192/*"to"*/);
    sub_B775C4(&StringLiteral_19118/*"finishUpdateValue"*/);
    sub_B775C4(&StringLiteral_21702/*"oncomplete"*/);
    sub_B775C4(&iTween_TypeInfo);
    byte_438B47A = 1;
  }
  if ( !this->fields.bondsCountUp )
    return;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B775DC(object___TypeInfo, 10LL);
  if ( !BondsIconArray )
LABEL_68:
    sub_B7769C(BondsIconArray, v5);
  v12 = (System_Object_array *)BondsIconArray;
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_19296/*"from"*/;
  if ( StringLiteral_19296/*"from"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B77684(
                                                               StringLiteral_19296/*"from"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v13 = (System_Int32_array **)StringLiteral_19296/*"from"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v12->max_length )
    goto LABEL_67;
  v12->m_Items[0] = (Il2CppObject *)v13;
  sub_B77560((BattleServantConfConponent_o *)v12->m_Items, v13, v6, v7, v8, v9, v10, v11);
  v97 = 0;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v97, v14);
  v21 = (System_Int32_array **)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B77684(
                                                               BondsIconArray,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
  }
  if ( v12->max_length <= 1 )
    goto LABEL_67;
  v12->m_Items[1] = (Il2CppObject *)v21;
  sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[1], v21, v15, v16, v17, v18, v19, v20);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_23192/*"to"*/;
  if ( StringLiteral_23192/*"to"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B77684(
                                                               StringLiteral_23192/*"to"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v28 = (System_Int32_array **)StringLiteral_23192/*"to"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v12->max_length <= 2 )
    goto LABEL_67;
  v12->m_Items[2] = (Il2CppObject *)v28;
  sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[2], v28, v22, v23, v24, v25, v26, v27);
  v96 = 1065353216;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v96, v29);
  v36 = (System_Int32_array **)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B77684(
                                                               BondsIconArray,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
  }
  if ( v12->max_length <= 3 )
    goto LABEL_67;
  v12->m_Items[3] = (Il2CppObject *)v36;
  sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[3], v36, v30, v31, v32, v33, v34, v35);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_21711/*"onupdate"*/;
  if ( StringLiteral_21711/*"onupdate"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B77684(
                                                               StringLiteral_21711/*"onupdate"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v43 = (System_Int32_array **)StringLiteral_21711/*"onupdate"*/;
  }
  else
  {
    v43 = 0LL;
  }
  if ( v12->max_length <= 4 )
    goto LABEL_67;
  v12->m_Items[4] = (Il2CppObject *)v43;
  sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[4], v43, v37, v38, v39, v40, v41, v42);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_15328/*"UpdateValue"*/;
  if ( StringLiteral_15328/*"UpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B77684(
                                                               StringLiteral_15328/*"UpdateValue"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v50 = (System_Int32_array **)StringLiteral_15328/*"UpdateValue"*/;
  }
  else
  {
    v50 = 0LL;
  }
  if ( v12->max_length <= 5 )
    goto LABEL_67;
  v12->m_Items[5] = (Il2CppObject *)v50;
  sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[5], v50, v44, v45, v46, v47, v48, v49);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_21702/*"oncomplete"*/;
  if ( StringLiteral_21702/*"oncomplete"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B77684(
                                                               StringLiteral_21702/*"oncomplete"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v57 = (System_Int32_array **)StringLiteral_21702/*"oncomplete"*/;
  }
  else
  {
    v57 = 0LL;
  }
  if ( v12->max_length <= 6 )
    goto LABEL_67;
  v12->m_Items[6] = (Il2CppObject *)v57;
  sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[6], v57, v51, v52, v53, v54, v55, v56);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_19118/*"finishUpdateValue"*/;
  if ( StringLiteral_19118/*"finishUpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B77684(
                                                               StringLiteral_19118/*"finishUpdateValue"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v64 = (System_Int32_array **)StringLiteral_19118/*"finishUpdateValue"*/;
  }
  else
  {
    v64 = 0LL;
  }
  if ( v12->max_length <= 7 )
    goto LABEL_67;
  v12->m_Items[7] = (Il2CppObject *)v64;
  sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[7], v64, v58, v59, v60, v61, v62, v63);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_23154/*"time"*/;
  if ( StringLiteral_23154/*"time"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B77684(
                                                               StringLiteral_23154/*"time"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v71 = (System_Int32_array **)StringLiteral_23154/*"time"*/;
  }
  else
  {
    v71 = 0LL;
  }
  if ( v12->max_length <= 8 )
    goto LABEL_67;
  v12->m_Items[8] = (Il2CppObject *)v71;
  sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[8], v71, v65, v66, v67, v68, v69, v70);
  v95 = 1072064102;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v95, v72);
  v79 = (System_Int32_array **)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B77684(
                                                               BondsIconArray,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
    {
LABEL_69:
      v94 = sub_B776BC(BondsIconArray);
      sub_B77668(v94, 0LL);
    }
  }
  if ( v12->max_length <= 9 )
    goto LABEL_67;
  v12->m_Items[9] = (Il2CppObject *)v79;
  sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[9], v79, v73, v74, v75, v76, v77, v78);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v80 = iTween__Hash(v12, 0LL);
  iTween__ValueTo(gameObject, v80, 0LL);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v81);
  if ( !BondsIconArray )
    goto LABEL_68;
  max_length = BondsIconArray->max_length;
  v83 = BondsIconArray;
  if ( max_length >= 1 )
  {
    v84 = 0;
    while ( v84 < max_length )
    {
      BondsIconArray = (BattleResultBondsIconComponent_array *)v83->m_Items[v84];
      if ( !BondsIconArray )
        goto LABEL_68;
      BattleResultBondsIconComponent__StartUpdateBuddyPoint((BattleResultBondsIconComponent_o *)BondsIconArray, 0LL);
      max_length = v83->max_length;
      if ( (int)++v84 >= max_length )
        goto LABEL_58;
    }
LABEL_67:
    v93 = sub_B776C8(BondsIconArray);
    sub_B77668(v93, 0LL);
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
    v86 = SoundManager__playSe(CommonSeName, 0LL);
    this->fields.MeterSePlayer = v86;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.MeterSePlayer,
      (System_Int32_array **)v86,
      v87,
      v88,
      v89,
      v90,
      v91,
      v92);
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
  __int64 v28; // x1
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

  if ( (byte_438B477 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
    byte_438B477 = 1;
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
        v37 = sub_B776C8(bondsList);
        sub_B77668(v37, 0LL);
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
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  bondsList = this->fields.bondsList;
  if ( !bondsList )
    goto LABEL_21;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v40,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bondsList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v40,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
  {
    if ( !v40.fields.current )
      sub_B7769C(0LL, v28);
    BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                      (BattleResultBondsDeckPerWaveComponent_o *)v40.fields.current,
                                                                      0LL);
    if ( !v27 )
      sub_B7769C(BondsIconArray, BondsIconArray);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v27,
      BondsIconArray,
      (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v40,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
  if ( !v27 )
LABEL_21:
    sub_B7769C(bondsList, v19);
  v30 = (struct BattleResultBondsIconComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                                         (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
  this->fields.bondsIconArray = v30;
  sub_B77560(
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
  int64_t userSvtId; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v17; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x20
  Il2CppObject *multiBondsPrefab; // x19
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *v21; // x9
  const MethodInfo *v22; // x6
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x25
  System_Collections_Generic_IEnumerable_TSource__o *rewardInfos; // x20
  BattleResultBondsComponent___c_c *v25; // x0
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__49_0; // x19
  Il2CppObject *v28; // x21
  struct BattleResultBondsComponent___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Collections_Generic_List_TSource__o *v37; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v38; // x22
  BattleResultBondsComponent_c *v39; // x0
  BattleResultBondsComponent_c *v40; // x0
  Il2CppObject *String_36337972; // x19
  System_Collections_Generic_IEnumerable_T__o *v42; // x0
  BattleResultBondsComponent_c *v43; // x0
  System_String_o *GET_NEW_SVT_KEY; // x19
  WarBoardUiData_SaveData_array *v45; // x20
  System_String_o *v46; // x0
  BattleResultBondsComponent___c_c *v47; // x0
  System_Collections_Generic_IEnumerable_TSource__o *getJoinSvts; // x20
  struct BattleResultBondsComponent___c_StaticFields *v49; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__49_1; // x19
  Il2CppObject *v51; // x21
  struct BattleResultBondsComponent___c_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  System_Collections_Generic_List_TSource__o *v60; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v61; // x22
  BattleResultBondsComponent_c *v62; // x0
  BattleResultBondsComponent_c *v63; // x0
  Il2CppObject *v64; // x19
  System_Collections_Generic_IEnumerable_T__o *v65; // x0
  BattleResultBondsComponent_c *v66; // x0
  System_String_o *GET_EXIST_SVT_KEY; // x19
  WarBoardUiData_SaveData_array *v68; // x20
  System_String_o *v69; // x0
  struct BattleDeckServantData_array *svts; // x25
  int max_length; // w8
  unsigned int v72; // w24
  int32_t v73; // w21
  BattleDeckServantData_o *v74; // x26
  il2cpp_array_size_t v75; // w23
  BattleResultBondsComponent_o *v76; // x21
  BattleResultBondsComponent___c__DisplayClass49_0_o *v77; // x27
  UserServantEntity_o *v78; // x25
  BattleResultBondsComponent_o *SvtId; // x0
  const MethodInfo *v80; // x3
  BattleUserServantData_array *v81; // x9
  signed int v82; // w8
  ServantEntity_o *v83; // x22
  signed int v84; // w20
  BattleUserServantData_o *v85; // x19
  __int128 v86; // q0
  const MethodInfo *v87; // x5
  int32_t afterLimitCount; // w6
  int32_t v89; // w20
  il2cpp_array_size_t v90; // w21
  BattleResultBondsIconComponent_o *v91; // x19
  int afterIconLimitCount; // w8
  bool v93; // zf
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x26
  BattleBuddyPointInfo_o *v95; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v96; // x19
  int32_t v97; // w28
  BattleResultBondsComponent_o *v98; // x20
  int32_t v99; // w27
  UserServantCollectionEntity_o *v100; // x23
  BattleResultBondsIconComponent_o *v101; // x26
  struct BattleResultBondsIconComponent_array *v102; // x8
  bool v103; // cf
  UserServantCollectionEntity_o *EntityDefinitely; // x1
  bool v105; // w19
  bool updateFlg; // w19
  UnityEngine_Component_o *v107; // x0
  struct BattleResultBondsIconComponent_array *v108; // x8
  __int64 v109; // x0
  int32_t cnt; // [xsp+4h] [xbp-10Ch]
  ServantLimitImageMaster_o *svtLimitImageMaster; // [xsp+8h] [xbp-108h]
  int32_t v113; // [xsp+14h] [xbp-FCh]
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+18h] [xbp-F8h]
  BattleResultBondsDeckPerWaveComponent_o *Object_object; // [xsp+20h] [xbp-F0h]
  DataMasterBase_WarMaster__WarEntity__int__o *v117; // [xsp+30h] [xbp-E0h]
  struct BattleDeckServantData_array *v118; // [xsp+38h] [xbp-D8h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v119; // [xsp+40h] [xbp-D0h]
  int32_t Type; // [xsp+54h] [xbp-BCh]
  UserServantCollectionEntity_o *userSvtCol; // [xsp+58h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v125; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v126; // [xsp+90h] [xbp-80h]

  if ( (byte_438B478 & 1) == 0 )
  {
    sub_B775C4(&Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    sub_B775C4(&Method_BasicHelper_Find_BattleBuddyPointInfo___);
    sub_B775C4(&BattleResultBondsComponent_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_GetSvts___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_GetSvts___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
    sub_B775C4(&Method_System_Func_QuestRewardInfo__bool___ctor__);
    sub_B775C4(&Method_System_Func_BattleBuddyPointInfo__bool___ctor__);
    sub_B775C4(&Method_System_Func_GetSvts__bool___ctor__);
    sub_B775C4(&System_Func_GetSvts__bool__TypeInfo);
    sub_B775C4(&System_Func_QuestRewardInfo__bool__TypeInfo);
    sub_B775C4(&System_Func_BattleBuddyPointInfo__bool__TypeInfo);
    sub_B775C4(&Method_JsonManager_DeserializeArray_GetSvts___);
    sub_B775C4(&Method_JsonManager_DeserializeArray_QuestRewardInfo___);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_GetSvts__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_GetSvts__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_GetSvts__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__);
    sub_B775C4(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__);
    sub_B775C4(&Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__);
    sub_B775C4(&BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo);
    sub_B775C4(&BattleResultBondsComponent___c_TypeInfo);
    byte_438B478 = 1;
  }
  Type = Follower__getType(followerType, 0LL);
  if ( Type )
    v14 = 5;
  else
    v14 = 6;
  cnt = v14;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v17 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)Instance,
                                                                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( this->fields.isMultiDeck )
  {
    Instance = (int64_t)this->fields.multiBondsRoot;
    if ( !Instance )
      goto LABEL_157;
    multiBondsPrefab = (Il2CppObject *)this->fields.multiBondsPrefab;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    Object_object = (BattleResultBondsDeckPerWaveComponent_o *)BaseMonoBehaviour__createObject_object_(
                                                                 (BaseMonoBehaviour_o *)this,
                                                                 multiBondsPrefab,
                                                                 transform,
                                                                 0LL,
                                                                 (const MethodInfo_1C65AF4 *)Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    if ( this->fields.isMultiDeck )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      svtLimitImageMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      goto LABEL_18;
    }
  }
  else
  {
    Object_object = 0LL;
  }
  svtLimitImageMaster = 0LL;
LABEL_18:
  v21 = (UnityEngine_Object_o *)battleData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v21 = (UnityEngine_Object_o *)battleData;
  }
  Instance = UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)battleData;
    if ( !battleData )
      goto LABEL_157;
    Instance = BattleData__IsWarBoard(battleData, 0LL);
    this->fields.isWarboard = Instance & 1;
    if ( (Instance & 1) != 0 )
    {
      if ( !battleResult )
        goto LABEL_157;
      v23 = v18;
      rewardInfos = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.rewardInfos;
      v25 = BattleResultBondsComponent___c_TypeInfo;
      if ( (BYTE3(BattleResultBondsComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v25 = BattleResultBondsComponent___c_TypeInfo;
      }
      static_fields = v25->static_fields;
      _9__49_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__49_0;
      if ( !_9__49_0 )
      {
        if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
        }
        v28 = (Il2CppObject *)static_fields->__9;
        _9__49_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_QuestRewardInfo__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__49_0,
          v28,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__,
          (const MethodInfo_29E92C4 *)Method_System_Func_QuestRewardInfo__bool___ctor__);
        v29 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        v29->__9__49_0 = (struct System_Func_QuestRewardInfo__bool__o *)_9__49_0;
        sub_B77560(
          (BattleServantConfConponent_o *)&v29->__9__49_0,
          (System_Int32_array **)_9__49_0,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
      }
      v36 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              rewardInfos,
              (System_Func_TSource__bool__o *)_9__49_0,
              (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
      v37 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
              v36,
              (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
      if ( v37 )
      {
        v38 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v37;
        if ( v37->fields._size >= 1 )
        {
          v39 = BattleResultBondsComponent_TypeInfo;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v39 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v39->static_fields->GET_NEW_SVT_KEY, 0LL) )
          {
            v40 = BattleResultBondsComponent_TypeInfo;
            if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v40 = BattleResultBondsComponent_TypeInfo;
            }
            String_36337972 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_36337972(
                                                v40->static_fields->GET_NEW_SVT_KEY,
                                                0LL);
            if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !JsonManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            }
            v42 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                   String_36337972,
                                                                   (const MethodInfo_1DF16CC *)Method_JsonManager_DeserializeArray_QuestRewardInfo___);
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              v38,
              v42,
              (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
          }
          v43 = BattleResultBondsComponent_TypeInfo;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v43 = BattleResultBondsComponent_TypeInfo;
          }
          GET_NEW_SVT_KEY = v43->static_fields->GET_NEW_SVT_KEY;
          v45 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v38,
                  (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
          if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !JsonManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          }
          v46 = JsonManager__toJson(&v45->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_NEW_SVT_KEY, v46, 0LL);
        }
      }
      v47 = BattleResultBondsComponent___c_TypeInfo;
      getJoinSvts = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.getJoinSvts;
      if ( (BYTE3(BattleResultBondsComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v47 = BattleResultBondsComponent___c_TypeInfo;
      }
      v49 = v47->static_fields;
      _9__49_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v49->__9__49_1;
      if ( !_9__49_1 )
      {
        if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v47);
          v49 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        }
        v51 = (Il2CppObject *)v49->__9;
        _9__49_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_GetSvts__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__49_1,
          v51,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__,
          (const MethodInfo_29E92C4 *)Method_System_Func_GetSvts__bool___ctor__);
        v52 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        v52->__9__49_1 = (struct System_Func_GetSvts__bool__o *)_9__49_1;
        sub_B77560(
          (BattleServantConfConponent_o *)&v52->__9__49_1,
          (System_Int32_array **)_9__49_1,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58);
      }
      v59 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              getJoinSvts,
              (System_Func_TSource__bool__o *)_9__49_1,
              (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_GetSvts___);
      v60 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
              v59,
              (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_GetSvts___);
      if ( v60 )
      {
        v61 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v60;
        if ( v60->fields._size >= 1 )
        {
          v62 = BattleResultBondsComponent_TypeInfo;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v62 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v62->static_fields->GET_EXIST_SVT_KEY, 0LL) )
          {
            v63 = BattleResultBondsComponent_TypeInfo;
            if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v63 = BattleResultBondsComponent_TypeInfo;
            }
            v64 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_36337972(
                                    v63->static_fields->GET_EXIST_SVT_KEY,
                                    0LL);
            if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !JsonManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            }
            v65 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                   v64,
                                                                   (const MethodInfo_1DF16CC *)Method_JsonManager_DeserializeArray_GetSvts___);
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              v61,
              v65,
              (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_GetSvts__AddRange__);
          }
          v66 = BattleResultBondsComponent_TypeInfo;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v66 = BattleResultBondsComponent_TypeInfo;
          }
          GET_EXIST_SVT_KEY = v66->static_fields->GET_EXIST_SVT_KEY;
          v68 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v61,
                  (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_GetSvts__ToArray__);
          if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !JsonManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          }
          v69 = JsonManager__toJson(&v68->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_EXIST_SVT_KEY, v69, 0LL);
        }
      }
      UnityEngine_PlayerPrefs__Save(0LL);
      v18 = v23;
    }
  }
  if ( !myDeck || (svts = myDeck->fields.svts) == 0LL )
LABEL_157:
    sub_B7769C(Instance, userSvtId);
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v72 = 0;
    v73 = 0;
    v118 = myDeck->fields.svts;
    v119 = v17;
    v117 = v18;
    while ( 1 )
    {
      if ( v72 >= max_length )
      {
LABEL_158:
        v109 = sub_B776C8(Instance);
        sub_B77668(v109, 0LL);
      }
      v74 = svts->m_Items[v72];
      v75 = v73;
      v76 = this;
      v77 = (BattleResultBondsComponent___c__DisplayClass49_0_o *)sub_B77694(BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo);
      BattleResultBondsComponent___c__DisplayClass49_0___ctor(v77, 0LL);
      if ( !v74 || !v77 )
        goto LABEL_157;
      userSvtId = v74->fields.userSvtId;
      v77->fields.userSvtId = userSvtId;
      if ( userSvtId >= 1 )
        break;
      Instance = (int64_t)battleData;
      if ( !battleData )
        goto LABEL_157;
      Instance = BattleData__IsInterruptionQuest(battleData, 0LL);
      this = v76;
      if ( (Instance & 1) != 0 )
      {
        v90 = v75;
        if ( this->fields.isMultiDeck )
        {
          Instance = (int64_t)Object_object;
          if ( !Object_object )
            goto LABEL_157;
          Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, 0LL);
          v91 = (BattleResultBondsIconComponent_o *)Instance;
          if ( !Instance )
            goto LABEL_157;
        }
        else
        {
          v108 = this->fields.collects;
          if ( !v108 )
            goto LABEL_157;
          if ( v75 >= v108->max_length )
            goto LABEL_158;
          v91 = v108->m_Items[v75];
          if ( !v91 )
            goto LABEL_157;
        }
        BattleResultBondsIconComponent__setServantData(v91, 0LL, 0LL, 0, 0, 0, 0, 0LL);
        v107 = (UnityEngine_Component_o *)v91;
LABEL_144:
        Instance = (int64_t)UnityEngine_Component__get_gameObject(v107, 0LL);
        if ( !Instance )
          goto LABEL_157;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
LABEL_146:
        v73 = v90 + 1;
        goto LABEL_147;
      }
      v73 = v75;
LABEL_147:
      max_length = svts->max_length;
      if ( (int)++v72 >= max_length )
        goto LABEL_150;
    }
    if ( !v17 )
      goto LABEL_157;
    Instance = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                          v17,
                          userSvtId,
                          (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_157;
    v78 = (UserServantEntity_o *)Instance;
    SvtId = (BattleResultBondsComponent_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
    userSvtCol = BattleResultBondsComponent__getServantCollection(SvtId, oldCollects, (int32_t)SvtId, v80);
    Instance = UserServantEntity__getSvtId(v78, 0LL);
    if ( !v18 )
      goto LABEL_157;
    Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                          v18,
                          Instance,
                          (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    v81 = usrSvts;
    if ( !usrSvts )
      goto LABEL_157;
    v82 = usrSvts->max_length;
    v83 = (ServantEntity_o *)Instance;
    if ( v82 < 1 )
    {
LABEL_103:
      afterLimitCount = -1;
      v89 = -1;
    }
    else
    {
      v84 = 0;
      while ( 1 )
      {
        if ( v84 >= (unsigned int)v82 )
          goto LABEL_158;
        v85 = v81->m_Items[v84];
        if ( !v85 )
          goto LABEL_157;
        v86 = *(_OWORD *)&v85->fields.id.fields.fakeValue;
        *(_OWORD *)&v126.fields.currentCryptoKey = *(_OWORD *)&v85->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v126.fields.fakeValue = v86;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v125 = v126;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v125, 0LL);
        if ( Instance == v77->fields.userSvtId )
          break;
        v81 = usrSvts;
        ++v84;
        v82 = usrSvts->max_length;
        if ( v84 >= v82 )
          goto LABEL_103;
      }
      if ( v76->fields.isMultiDeck )
        BattleResultBondsComponent__UpdateAfterLimitCount(
          (BattleResultBondsComponent_o *)Instance,
          battleData,
          v85,
          v74,
          svtLimitImageMaster,
          v87);
      Instance = UserServantEntity__getIconLimitCount((UserServantEntity_o *)v85, 0, 0LL);
      afterIconLimitCount = v85->fields.afterIconLimitCount;
      afterLimitCount = v85->fields.afterLimitCount;
      v93 = afterIconLimitCount < 0 || (_DWORD)Instance == afterIconLimitCount;
      v89 = v93 ? Instance : v85->fields.afterIconLimitCount;
    }
    if ( !battleResult )
      goto LABEL_157;
    buddyPointInfos = battleResult->fields.buddyPointInfos;
    if ( buddyPointInfos )
    {
      v95 = 0LL;
      if ( *(_QWORD *)&buddyPointInfos->max_length && !isHideBuddyPointResult )
      {
        v113 = afterLimitCount;
        v96 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattleBuddyPointInfo__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v96,
          (Il2CppObject *)v77,
          Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__,
          (const MethodInfo_29E92C4 *)Method_System_Func_BattleBuddyPointInfo__bool___ctor__);
        Instance = (int64_t)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                              (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)buddyPointInfos,
                              (System_Func_T__bool__o *)v96,
                              (const MethodInfo_1C66688 *)Method_BasicHelper_Find_BattleBuddyPointInfo___);
        afterLimitCount = v113;
        v95 = (BattleBuddyPointInfo_o *)Instance;
      }
    }
    else
    {
      v95 = 0LL;
    }
    this = v76;
    if ( v76->fields.isMultiDeck )
    {
      Instance = (int64_t)Object_object;
      if ( !Object_object )
        goto LABEL_157;
      v97 = v89;
      v98 = v76;
      v99 = afterLimitCount;
      v90 = v75;
      Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, 0LL);
      v100 = userSvtCol;
      v101 = (BattleResultBondsIconComponent_o *)Instance;
      afterLimitCount = v99;
      this = v98;
      v89 = v97;
      if ( !Instance )
        goto LABEL_157;
    }
    else
    {
      v102 = v76->fields.collects;
      if ( !v102 )
        goto LABEL_157;
      v90 = v75;
      v103 = v75 >= v102->max_length;
      v100 = userSvtCol;
      if ( v103 )
        goto LABEL_158;
      v101 = v102->m_Items[v90];
      if ( !v101 )
        goto LABEL_157;
    }
    BattleResultBondsIconComponent__setServantData(
      v101,
      v100,
      v78,
      v89,
      this->fields.baseFriendshipExp,
      Type == 0,
      afterLimitCount,
      0LL);
    BattleResultBondsIconComponent__SetBuddyPointInfo(v101, v95, battleResult->fields.eventId, 0LL);
    if ( !v83 )
      goto LABEL_157;
    v18 = v117;
    if ( ServantEntity__checkIsHeroineSvt(v83, 0LL) && !UserServantEntity__IsAddFriendShipHeroine(v78, 0LL) )
    {
      updateFlg = this->fields.updateFlg;
      this->fields.updateFlg = (updateFlg | BattleResultBondsIconComponent__setNextServantData(v101, v100, 0LL)) & 1;
      BattleResultBondsIconComponent__setHeroine(v101, 0LL);
      v17 = v119;
    }
    else
    {
      Instance = (int64_t)MasterData_WarQuestSelectionMaster;
      v17 = v119;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_157;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                           MasterData_WarQuestSelectionMaster,
                           v101->fields.userId,
                           v101->fields.svtId,
                           0LL);
      v105 = this->fields.updateFlg;
      this->fields.updateFlg = (v105 | BattleResultBondsIconComponent__setNextServantData(v101, EntityDefinitely, 0LL)) & 1;
    }
    svts = v118;
    BattleResultBondsIconComponent__changeGauge(v101, 0.0, 0LL);
    BattleResultBondsIconComponent__InitBuddyPointInfo(v101, 0LL);
    if ( this->fields.isMultiDeck )
    {
      v107 = (UnityEngine_Component_o *)v101;
      goto LABEL_144;
    }
    goto LABEL_146;
  }
  v73 = 0;
LABEL_150:
  if ( this->fields.isMultiDeck )
  {
    if ( Object_object )
    {
      BattleResultBondsDeckPerWaveComponent__SetWaveCount(Object_object, currentWave, maxWave, 0LL);
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object_object, 0LL);
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        BattleResultBondsDeckPerWaveComponent__RepositionIcons(Object_object, 0LL);
        Instance = (int64_t)this->fields.multiBondsRoot;
        if ( Instance )
        {
          (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
            Instance,
            *(_QWORD *)(*(_QWORD *)Instance + 448LL));
          Instance = (int64_t)this->fields.bondsList;
          if ( Instance )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Object_object,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__);
            return;
          }
        }
      }
    }
    goto LABEL_157;
  }
  BattleResultBondsComponent__NormalBondsInit(this, v73, cnt, Type == 0, battleResult, isHideBuddyPointResult, v22);
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
        v8 = sub_B776C8(BondsIconArray);
        sub_B77668(v8, 0LL);
      }
      BondsIconArray = (BattleResultBondsIconComponent_array *)v6->m_Items[v7];
      if ( !BondsIconArray )
        break;
      BattleResultBondsIconComponent__FinishBuddyPointInfoUpdate(
        (BattleResultBondsIconComponent_o *)BondsIconArray,
        0LL);
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_7;
    }
LABEL_9:
    sub_B7769C(BondsIconArray, v4);
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

  if ( (byte_438B489 & 1) == 0 )
  {
    sub_B775C4(&ImageLimitCount_TypeInfo);
    this = (BattleResultBondsComponent_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438B489 = 1;
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
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v26, 0LL);
  this = (BattleResultBondsComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                           userSvtData->fields.limitCount,
                                           0LL);
  if ( !svtLimitImageMaster )
LABEL_30:
    sub_B7769C(this, battleData);
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
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v27, 0LL);
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
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v28, 0LL);
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
  __int64 v5; // x1
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
        v9 = sub_B776C8(BondsIconArray);
        sub_B77668(v9, 0LL);
      }
      BondsIconArray = (BattleResultBondsIconComponent_array *)v7->m_Items[v8];
      if ( !BondsIconArray )
        break;
      BondsIconArray = (BattleResultBondsIconComponent_array *)BattleResultBondsIconComponent__changeGauge(
                                                                 (BattleResultBondsIconComponent_o *)BondsIconArray,
                                                                 val,
                                                                 0LL);
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_9:
    sub_B7769C(BondsIconArray, v5);
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
    v6 = sub_B776C8(this);
    sub_B77668(v6, 0LL);
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
    sub_B7769C(this, method);
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

  if ( (byte_438B47E & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&BattleResultBondsComponent_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_17161/*"bit_reward_shine02"*/);
    byte_438B47E = 1;
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
                                                                        (const MethodInfo_1DEC070 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
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
                                  (const MethodInfo_1DEC070 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
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
      (System_String_o *)StringLiteral_17161/*"bit_reward_shine02"*/,
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
    sub_B7769C(Object, v14);
  }
LABEL_38:
  Object = (UnityEngine_GameObject_o *)this->fields.conflist;
  if ( !Object )
    goto LABEL_40;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Object,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_GameObject__Add__);
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
  int colIndex; // w8
  __int64 v21; // x9
  __int64 v22; // x8
  __int64 v23; // x9
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
  PlayMakerFSM_c *klass; // x8
  PlayMakerFSM_o *v36; // x22
  unsigned __int64 v37; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v39; // x0
  UnityEngine_Object_o *levelUpAnim; // x22
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x9
  __int64 v48; // x8
  __int64 v49; // x9
  struct BattleResultBondsIconComponent_o *v50; // x1
  UnityEngine_Object_o *figureMoveRoot; // x21
  System_Int32_array **gameObject; // x0
  UnityEngine_GameObject_o **v53; // x21
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t svtId; // w22
  int32_t svtLimit; // w23
  BattleResultBondsFigureComponent_o *bondsFigure; // x19
  UnityEngine_GameObject_o *v71; // x21
  System_Action_o *v72; // x24
  __int64 v73; // x0
  System_Collections_Generic_List_Enumerator_T__o v74; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v75; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_438B47C & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    sub_B775C4(&BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo);
    sub_B775C4(&Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__);
    sub_B775C4(&BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo);
    sub_B775C4(&StringLiteral_17147/*"bit_result_levelup01"*/);
    sub_B775C4(&StringLiteral_3213/*"CLOSE"*/);
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    sub_B775C4(&StringLiteral_3216/*"CLOSE_BOND_UP_ROOT"*/);
    byte_438B47C = 1;
  }
  memset(&v75, 0, sizeof(v75));
  v3 = sub_B77694(BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo);
  BattleResultBondsComponent___c__DisplayClass61_0___ctor((BattleResultBondsComponent___c__DisplayClass61_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_11;
  *(_QWORD *)(v3 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  BondsIconArray = (System_Int32_array **)BattleResultBondsComponent__GetBondsIconArray(this, v12);
  *(_QWORD *)(v3 + 24) = BondsIconArray;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 24), BondsIconArray, v14, v15, v16, v17, v18, v19);
  colIndex = this->fields.colIndex;
  v21 = *(_QWORD *)(v3 + 24);
  *(_DWORD *)(v3 + 32) = colIndex;
  if ( !v21 )
    goto LABEL_11;
  while ( 1 )
  {
    if ( colIndex >= *(_DWORD *)(v21 + 24) )
    {
      myFsm = this->fields.myFsm;
      if ( this->fields.openBoundsFlg )
      {
        if ( !myFsm )
          goto LABEL_11;
        if ( this->fields.isMultiDeck )
          v24 = &StringLiteral_3216/*"CLOSE_BOND_UP_ROOT"*/;
        else
          v24 = &StringLiteral_5639/*"END_PROC"*/;
      }
      else
      {
        if ( !myFsm )
          goto LABEL_11;
        v24 = &StringLiteral_3213/*"CLOSE"*/;
      }
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v24, 0LL);
      return;
    }
    this->fields.colIndex = colIndex;
    v22 = *(_QWORD *)(v3 + 24);
    if ( !v22 )
      goto LABEL_11;
    v23 = *(int *)(v3 + 32);
    if ( (unsigned int)v23 >= *(_DWORD *)(v22 + 24) )
      goto LABEL_70;
    myFsm = *(PlayMakerFSM_o **)(v22 + 8 * v23 + 32);
    if ( !myFsm )
      goto LABEL_11;
    myFsm = (PlayMakerFSM_o *)BattleResultBondsIconComponent__isChangeRank(
                                (BattleResultBondsIconComponent_o *)myFsm,
                                0LL);
    if ( ((unsigned __int8)myFsm & 1) != 0 )
      break;
    v21 = *(_QWORD *)(v3 + 24);
    colIndex = *(_DWORD *)(v3 + 32) + 1;
    *(_DWORD *)(v3 + 32) = colIndex;
    if ( !v21 )
      goto LABEL_11;
  }
  v25 = sub_B77694(BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo);
  BattleResultBondsComponent___c__DisplayClass61_1___ctor(
    (BattleResultBondsComponent___c__DisplayClass61_1_o *)v25,
    0LL);
  if ( !v25 )
    goto LABEL_11;
  *(_QWORD *)(v25 + 24) = v3;
  v32 = (__int64 *)(v25 + 24);
  sub_B77560((BattleServantConfConponent_o *)(v25 + 24), (System_Int32_array **)v3, v26, v27, v28, v29, v30, v31);
  myFsm = (PlayMakerFSM_o *)this->fields.conflist;
  if ( !myFsm )
    goto LABEL_11;
  if ( SLODWORD(myFsm->fields.fsm) < 1 )
    goto LABEL_27;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v74,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)myFsm,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v75 = v74;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v75,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v75.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v75,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  myFsm = (PlayMakerFSM_o *)this->fields.conflist;
  if ( !myFsm )
    goto LABEL_11;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)myFsm,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
LABEL_27:
  myFsm = (PlayMakerFSM_o *)this->fields.upRoot;
  if ( !myFsm )
    goto LABEL_11;
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
                                  (System_String_o *)StringLiteral_17147/*"bit_result_levelup01"*/,
                                  0LL);
      if ( myFsm )
      {
        klass = myFsm->klass;
        v36 = myFsm;
        if ( *(_WORD *)&myFsm->klass->_2.bitflags1 )
        {
          v37 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v37;
            p_offset += 2;
            if ( v37 >= *(unsigned __int16 *)&myFsm->klass->_2.bitflags1 )
              goto LABEL_38;
          }
          v39 = (__int64)(&klass->vtable._4_OnBeforeSerialize.method + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_38:
          v39 = sub_B0F4C0(myFsm, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(PlayMakerFSM_o *, _QWORD, float))v39)(v36, *(_QWORD *)(v39 + 8), 0.0);
        myFsm = (PlayMakerFSM_o *)this->fields.levelUpSimpleAnim;
        if ( myFsm )
        {
          myFsm = (PlayMakerFSM_o *)SimpleAnimation__Play_16815192(
                                      (SimpleAnimation_o *)myFsm,
                                      (System_String_o *)StringLiteral_17147/*"bit_result_levelup01"*/,
                                      0LL);
          goto LABEL_54;
        }
      }
    }
LABEL_11:
    sub_B7769C(myFsm, v5);
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
      goto LABEL_11;
    myFsm = (PlayMakerFSM_o *)UnityEngine_Animation__get_Item(
                                (UnityEngine_Animation_o *)myFsm,
                                (System_String_o *)StringLiteral_17147/*"bit_result_levelup01"*/,
                                0LL);
    if ( !myFsm )
      goto LABEL_11;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)myFsm, 0.0, 0LL);
    myFsm = (PlayMakerFSM_o *)this->fields.levelUpAnim;
    if ( !myFsm )
      goto LABEL_11;
    myFsm = (PlayMakerFSM_o *)UnityEngine_Animation__Play_51745976(
                                (UnityEngine_Animation_o *)myFsm,
                                (System_String_o *)StringLiteral_17147/*"bit_result_levelup01"*/,
                                0LL);
  }
LABEL_54:
  v47 = *v32;
  if ( !*v32 )
    goto LABEL_11;
  v48 = *(_QWORD *)(v47 + 24);
  if ( !v48 )
    goto LABEL_11;
  v49 = *(int *)(v47 + 32);
  if ( (unsigned int)v49 >= *(_DWORD *)(v48 + 24) )
  {
LABEL_70:
    v73 = sub_B776C8(myFsm);
    sub_B77668(v73, 0LL);
  }
  v50 = *(struct BattleResultBondsIconComponent_o **)(v48 + 8 * v49 + 32);
  this->fields.openCollect = v50;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.openCollect,
    (System_Int32_array **)v50,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
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
      goto LABEL_11;
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myFsm, 0LL);
    *(_QWORD *)(v25 + 16) = gameObject;
    v53 = (UnityEngine_GameObject_o **)(v25 + 16);
    sub_B77560((BattleServantConfConponent_o *)(v25 + 16), gameObject, v54, v55, v56, v57, v58, v59);
    myFsm = *(PlayMakerFSM_o **)(v25 + 16);
    if ( !myFsm )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 0, 0LL);
  }
  else
  {
    myFsm = (PlayMakerFSM_o *)this->fields.figureRoot;
    if ( !myFsm )
      goto LABEL_11;
    v60 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myFsm, 0LL);
    *(_QWORD *)(v25 + 16) = v60;
    v53 = (UnityEngine_GameObject_o **)(v25 + 16);
    sub_B77560((BattleServantConfConponent_o *)(v25 + 16), v60, v61, v62, v63, v64, v65, v66);
  }
  openCollect = this->fields.openCollect;
  if ( !openCollect )
    goto LABEL_11;
  svtId = openCollect->fields.svtId;
  svtLimit = openCollect->fields.svtLimit;
  bondsFigure = this->fields.bondsFigure;
  v71 = *v53;
  v72 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v72,
    (Il2CppObject *)v25,
    Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__,
    0LL);
  if ( !bondsFigure )
    goto LABEL_11;
  BattleResultBondsFigureComponent__SetupFigure(bondsFigure, v71, svtId, svtLimit, 7, 0, 51, v72, 0LL);
}


void __fastcall BattleResultBondsComponent__checkShow(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  struct BattleFriendshipRewardInfo_array *showList; // x8
  __int64 v4; // x8
  SummonAssetManager_o *Instance; // x20
  System_Action_o *v6; // x21
  SummonAssetManager_o *parentComp; // x0

  if ( (byte_438B482 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BattleResultBondsComponent__checkShow_b__67_0__);
    sub_B775C4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_438B482 = 1;
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
        Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
        v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(v6, (Il2CppObject *)this, Method_BattleResultBondsComponent__checkShow_b__67_0__, 0LL);
        if ( Instance )
        {
          SummonAssetManager__LoadSummonAssets(Instance, v6, 0LL);
          return;
        }
        goto LABEL_21;
      }
      parentComp = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
    sub_B7769C(parentComp, method);
  }
  BattleResultComponent__showServantRewardAction((BattleResultComponent_o *)parentComp, 0LL, 1, 0LL);
}


void __fastcall BattleResultBondsComponent__closeBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_UIUnityRenderer__o *effectUIList; // x20
  int size; // w8
  int i; // w21
  struct BattleWindowComponent_o *confwindow; // x20
  BattleWindowComponent_EndCall_o *v9; // x21

  if ( (byte_438B483 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleResultBondsComponent_endCloseBondUp__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UIUnityRenderer__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B483 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
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
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_UIUnityRenderer__Clear__);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.parentComp;
  if ( !gameObject
    || (BattleResultComponent__setTouch((BattleResultComponent_o *)gameObject, 0, 0LL),
        (gameObject = (UnityEngine_Component_o *)this->fields.bondsFigure) == 0LL)
    || (BattleResultBondsFigureComponent__DestroyFigure((BattleResultBondsFigureComponent_o *)gameObject, 0LL),
        confwindow = this->fields.confwindow,
        v9 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v9,
          (Il2CppObject *)this,
          Method_BattleResultBondsComponent_endCloseBondUp__,
          0LL),
        !confwindow) )
  {
LABEL_20:
    sub_B7769C(gameObject, v4);
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
  BattleResultBondsIconComponent_o *BondsIconArray; // x0
  __int64 v11; // x1
  struct UnityEngine_GameObject_o *root; // x21
  BattleResultBondsIconComponent_o *v13; // x20
  unsigned int v14; // w22
  __int64 v15; // x0
  __int64 v16; // x0

  if ( (byte_438B486 & 1) == 0 )
  {
    sub_B775C4(&OptionManager_TypeInfo);
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_438B486 = 1;
  }
  this->fields.resultAssetData = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.resultAssetData, 0LL, v2, v3, v4, v5, v6, v7);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    BondsIconArray = (BattleResultBondsIconComponent_o *)BattleResultBondsComponent__GetBondsIconArray(this, v9);
    if ( !BondsIconArray )
      goto LABEL_17;
    root = BondsIconArray->fields.root;
    v13 = BondsIconArray;
    if ( (int)root >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        BondsIconArray = (BattleResultBondsIconComponent_o *)*((_QWORD *)&v13->fields.rootNot + (int)v14);
        if ( !BondsIconArray )
          break;
        BattleResultBondsIconComponent__ClearFaceAtlas(BondsIconArray, 0LL);
        if ( (int)++v14 >= (int)root )
          goto LABEL_14;
        if ( v14 >= LODWORD(v13->fields.root) )
        {
          v16 = sub_B776C8(v15);
          sub_B77668(v16, 0LL);
        }
      }
LABEL_17:
      sub_B7769C(BondsIconArray, v11);
    }
  }
LABEL_14:
  BondsIconArray = (BattleResultBondsIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
  if ( !BondsIconArray )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BondsIconArray, 0, 0LL);
  BondsIconArray = (BattleResultBondsIconComponent_o *)this->fields.myFsm;
  if ( !BondsIconArray )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultBondsComponent__endCloseBondUp(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438B484 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_438B484 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
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
  __int64 v38; // x2
  Il2CppObject *v39; // x0
  WarEntity_o *v40; // x0
  ServantEntity_o *v41; // x26
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x27
  int32_t v43; // w1
  System_String_o *v44; // x0
  const MethodInfo *v45; // x5
  bool v46; // w26
  Il2CppObject *Name; // x26
  System_String_o *v48; // x0
  System_String_o *v49; // x27
  int32_t IconImageId; // w0
  const MethodInfo *v51; // x5
  BattleResultBondsComponent_c *v52; // x0
  struct BattleFriendshipRewardInfo_array *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  int v60; // w20
  UnityEngine_Transform_o *confRoot; // x21
  unsigned int localPosition; // s0
  int v63; // w8
  float v64; // s1
  int v65; // w20
  float v66; // s1
  int v67; // s2
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *rankupConfLabel; // x21
  struct BattleWindowComponent_o *confwindow; // x20
  BattleWindowComponent_EndCall_o *v71; // x21
  __int64 v72; // x0
  System_Text_StringBuilder_o *v73; // [xsp+8h] [xbp-B8h]
  int32_t key; // [xsp+14h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_T__o v75; // [xsp+18h] [xbp-A8h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+30h] [xbp-90h] BYREF
  System_String_o *countText; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v78; // [xsp+40h] [xbp-80h] BYREF
  System_String_o *nameText; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_438B480 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleResultBondsComponent_openedBondUp__);
    sub_B775C4(&BattleResultBondsComponent_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&ServantCommentManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B775C4(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&System_Text_StringBuilder_TypeInfo);
    sub_B775C4(&StringLiteral_11320/*"RESULT_BOUNDS_OPENQUEST"*/);
    sub_B775C4(&StringLiteral_11323/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/);
    sub_B775C4(&StringLiteral_11322/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/);
    sub_B775C4(&StringLiteral_11319/*"RESULT_BOUNDS_GET_COIN_NAME"*/);
    sub_B775C4(&StringLiteral_11317/*"RESULT_BOUNDS_GETVOICE"*/);
    sub_B775C4(&StringLiteral_24061/*"{0} {1}"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_11318/*"RESULT_BOUNDS_GET_COIN_COUNT"*/);
    byte_438B480 = 1;
  }
  memset(&v78, 0, sizeof(v78));
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  v3 = (System_Text_StringBuilder_o *)sub_B77694(System_Text_StringBuilder_TypeInfo);
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
  lvComp = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !lvComp )
    goto LABEL_127;
  v73 = v3;
  lvComp = (__int64)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                      (clsQuestCheck_o *)lvComp,
                      svtId,
                      friendshipRank,
                      8,
                      0LL);
  if ( lvComp )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v75,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)lvComp,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    v9 = 0;
    v78 = v75;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v78,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
    {
      current = v78.fields.current;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11320/*"RESULT_BOUNDS_OPENQUEST"*/, 0LL);
      if ( !current )
        sub_B7769C(v11, v12);
      v13 = v11;
      QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
      v15 = System_String__Format(v13, QuestName, 0LL);
      BattleResultBondsComponent__addConfObject(this, v15, (float)v9 * 22.0, -1, 0, 0, v16);
      v9 += 3;
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v78,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  }
  else
  {
    v9 = 0;
  }
  v17 = this->fields.openCollect;
  if ( !v17 )
    goto LABEL_127;
  svtLimit = v17->fields.svtLimit;
  lvComp = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lvComp )
    goto LABEL_127;
  lvComp = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)lvComp,
                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_11323/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/, 0LL);
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
    lvComp = ServantCommentManager__IsOpenByServantFriendShip_27843036(
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
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_11322/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, 0LL);
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
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_11317/*"RESULT_BOUNDS_GETVOICE"*/, 0LL);
    BattleResultBondsComponent__addConfObject(this, v25, (float)v9 * 22.0, -1, 0, 0, v26);
    v9 += 2;
  }
  if ( this->fields.rewardInfos )
  {
    v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v27,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    lvComp = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ItemMaster___);
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
          v72 = sub_B776C8(lvComp);
          sub_B77668(v72, 0LL);
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
                    (const MethodInfo_21FB894 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( v36 && v36->fields.bannerId == 29 )
            {
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v37 = LocalizationManager__Get((System_String_o *)StringLiteral_11318/*"RESULT_BOUNDS_GET_COIN_COUNT"*/, 0LL);
              LODWORD(v75.fields.list) = v35->fields.num;
              v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v75, v38);
              countText = System_String__Format(v37, v39, 0LL);
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              lvComp = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !lvComp )
                goto LABEL_127;
              v40 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                      (DataMasterBase_WarMaster__WarEntity__int__o *)lvComp,
                      key,
                      (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( v40 )
              {
                v41 = (ServantEntity_o *)v40;
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
                  lvComp = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
                    v43 = -1;
                  else
                    v43 = lvComp;
                }
                else
                {
                  v43 = -1;
                }
                Name = (Il2CppObject *)ServantEntity__getName(v41, v43, -1, 0LL);
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v48 = LocalizationManager__Get((System_String_o *)StringLiteral_11319/*"RESULT_BOUNDS_GET_COIN_NAME"*/, 0LL);
                nameText = System_String__Format_44897472(v48, (Il2CppObject *)nameText, Name, 0LL);
              }
              v46 = 1;
            }
            else
            {
              v46 = 0;
            }
            v49 = System_String__Format_44897472(
                    (System_String_o *)StringLiteral_24061/*"{0} {1}"*/,
                    (Il2CppObject *)nameText,
                    (Il2CppObject *)countText,
                    0LL);
            IconImageId = GiftEntity__getIconImageId(v35, 0LL);
            BattleResultBondsComponent__addConfObject(this, v49, (float)v9 * 22.0, IconImageId, v46, 0, v51);
          }
          else
          {
            v44 = System_String__Format_44897472(
                    (System_String_o *)StringLiteral_24061/*"{0} {1}"*/,
                    (Il2CppObject *)nameText,
                    (Il2CppObject *)countText,
                    0LL);
            BattleResultBondsComponent__addConfObject(this, v44, (float)v9 * 22.0, -1, 0, 0, v45);
          }
          v52 = BattleResultBondsComponent_TypeInfo;
          v9 += 2;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v52 = BattleResultBondsComponent_TypeInfo;
          }
          CONF_SERVANT_COIN_PLUS_HEIGHT = v52->static_fields->CONF_SERVANT_COIN_PLUS_HEIGHT;
          lvComp = BattleFriendshipRewardInfo__isShow(v34, 0LL);
          if ( (lvComp & 1) != 0 )
          {
            if ( !v27 )
              goto LABEL_127;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v27,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__);
          }
        }
        max_length = rewardInfos->max_length;
        ++v31;
      }
      while ( v31 < max_length );
      if ( !v27 )
LABEL_127:
        sub_B7769C(lvComp, v5);
    }
    v53 = (struct BattleFriendshipRewardInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                                       (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
    this->fields.showList = v53;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.showList,
      (System_Int32_array **)v53,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
    this->fields.showIndex = 0;
  }
  else
  {
    CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
  }
  lvComp = (__int64)this->fields.confSprite;
  if ( v9 )
    v60 = v9;
  else
    v60 = 1;
  if ( !lvComp )
    goto LABEL_127;
  UIWidget__set_height((UIWidget_o *)lvComp, CONF_SERVANT_COIN_PLUS_HEIGHT + 22 * v60 + 120, 0LL);
  confRoot = this->fields.confRoot;
  if ( !confRoot )
    goto LABEL_127;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.confRoot, 0LL);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT >= 0 )
    v63 = CONF_SERVANT_COIN_PLUS_HEIGHT;
  else
    v63 = CONF_SERVANT_COIN_PLUS_HEIGHT + 1;
  v64 = (float)v60;
  v65 = v63 >> 1;
  v66 = (float)(v64 * 11.0) + (float)(v63 >> 1);
  v67 = 0;
  UnityEngine_Transform__set_localPosition(confRoot, *(UnityEngine_Vector3_o *)&localPosition, 0LL);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT )
  {
    lvComp = (__int64)this->fields.confwindow;
    if ( !lvComp )
      goto LABEL_127;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lvComp, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v65, 0LL);
    lvComp = (__int64)this->fields.confwindow;
    if ( !lvComp )
      goto LABEL_127;
    lvComp = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)lvComp + 424LL))(
               lvComp,
               *(_QWORD *)(*(_QWORD *)lvComp + 432LL));
  }
  if ( !v73 )
    goto LABEL_127;
  rankupConfLabel = this->fields.rankupConfLabel;
  lvComp = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v73->klass->vtable._3_ToString.method)(
             v73,
             v73->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !rankupConfLabel )
    goto LABEL_127;
  UILabel__set_text(rankupConfLabel, (System_String_o *)lvComp, 0LL);
  confwindow = this->fields.confwindow;
  v71 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v71, (Il2CppObject *)this, Method_BattleResultBondsComponent_openedBondUp__, 0LL);
  if ( !confwindow )
    goto LABEL_127;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))confwindow->klass->vtable._10_Open.method)(
    confwindow,
    v71,
    confwindow->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattleResultBondsComponent__finishUpdateValue(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v4; // x1
  void *BondsIconArray; // x0
  __int64 v6; // x1
  int v7; // w8
  _DWORD *v8; // x20
  unsigned int v9; // w21
  char *v10; // x22
  void **v11; // x22
  void *v12; // t1
  SePlayer_o *MeterSePlayer; // x0
  __int64 v14; // x0

  if ( (byte_438B47B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9466/*"NEXT"*/);
    sub_B775C4(&iTween_TypeInfo);
    byte_438B47B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_43295052(gameObject, 0LL);
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
                                 0LL);
      if ( v9 >= v8[6] )
      {
LABEL_18:
        v14 = sub_B776C8(BondsIconArray);
        sub_B77668(v14, 0LL);
      }
      BondsIconArray = *v11;
      if ( !*v11 )
        break;
      BattleResultBondsIconComponent__LayoutFriendshipValue((BattleResultBondsIconComponent_o *)BondsIconArray, 0LL);
      v7 = v8[6];
      if ( (int)++v9 >= v7 )
        goto LABEL_14;
    }
LABEL_19:
    sub_B7769C(BondsIconArray, v6);
  }
LABEL_14:
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  BondsIconArray = this->fields.myFsm;
  this->fields.bondsCountUp = 0;
  if ( !BondsIconArray )
    goto LABEL_19;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_9466/*"NEXT"*/, 0LL);
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
        v11 = sub_B776C8(this);
        sub_B77668(v11, 0LL);
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
    sub_B7769C(this, collects);
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
    sub_B7769C(this, deck);
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0LL;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= max_length )
    {
      v9 = sub_B776C8(this);
      sub_B77668(v9, 0LL);
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
    sub_B7769C(this, method);
  return (signed int)oldCollections->max_length > 1;
}


void __fastcall BattleResultBondsComponent__openedBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0

  if ( (byte_438B481 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5634/*"END_OPEN"*/);
    byte_438B481 = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__ResetPlayScreenTouch(parentComp, 0LL), (parentComp = this->fields.parentComp) == 0LL)
    || (BattleResultComponent__setTouch(parentComp, 1, 0LL),
        parentComp = (BattleResultComponent_o *)this->fields.myFsm,
        ++this->fields.colIndex,
        !parentComp) )
  {
    sub_B7769C(parentComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)parentComp, (System_String_o *)StringLiteral_5634/*"END_OPEN"*/, 0LL);
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4388DFF & 1) == 0 )
  {
    sub_B775C4(&BattleResultBondsComponent___c_TypeInfo);
    byte_4388DFF = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(BattleResultBondsComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleResultBondsComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7769C(this, 0LL);
  return col->fields.isUse;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_0(
        BattleResultBondsComponent___c_o *this,
        QuestRewardInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.type == 7 && x->fields.isNew;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_1(
        BattleResultBondsComponent___c_o *this,
        GetSvts_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
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
    sub_B7769C(this, 0LL);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  BattleResultBondsComponent___c__DisplayClass61_1_o *v15; // x21
  System_Int32_array **v16; // x1
  __int64 v17; // x2
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  __int64 v32; // x2
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x22
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x1
  __int64 v47; // x2
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x22
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x1
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v62; // x8
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x22
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x1
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x1
  System_Collections_Hashtable_o *v84; // x0
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v85; // x8
  struct BattleResultBondsComponent_o *v86; // x8
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v87; // x8
  struct BattleResultBondsComponent_o *v88; // x8
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v89; // x8
  struct BattleResultBondsIconComponent_array *bondsIcons; // x9
  __int64 i; // x10
  __int64 v92; // x0
  __int64 v93; // x0
  char v94[4]; // [xsp+Ch] [xbp-34h] BYREF
  int v95; // [xsp+18h] [xbp-28h] BYREF
  int v96; // [xsp+1Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4388E00 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&StringLiteral_23801/*"x"*/);
    sub_B775C4(&StringLiteral_9924/*"OPEN"*/);
    sub_B775C4(&StringLiteral_23154/*"time"*/);
    sub_B775C4(&StringLiteral_21704/*"oncompletetarget"*/);
    sub_B775C4(&StringLiteral_18722/*"endMoveFigure"*/);
    sub_B775C4(&StringLiteral_20375/*"islocal"*/);
    sub_B775C4(&StringLiteral_21702/*"oncomplete"*/);
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B775C4(&iTween_TypeInfo);
    byte_4388E00 = 1;
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
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B775DC(object___TypeInfo, 10LL);
  if ( !this )
    goto LABEL_73;
  v15 = this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_23801/*"x"*/;
  if ( StringLiteral_23801/*"x"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B77684(
                                                                   StringLiteral_23801/*"x"*/,
                                                                   v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
    v16 = (System_Int32_array **)StringLiteral_23801/*"x"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !LODWORD(v15->fields.CS___8__locals1) )
    goto LABEL_74;
  v15[1].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)v16;
  sub_B77560((BattleServantConfConponent_o *)&v15[1], v16, v9, v10, v11, v12, v13, v14);
  v96 = -1007026176;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v96, v17);
  v24 = (System_Int32_array **)this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B77684(this, v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 1 )
    goto LABEL_74;
  v15[1].monitor = v24;
  sub_B77560((BattleServantConfConponent_o *)&v15[1].monitor, v24, v18, v19, v20, v21, v22, v23);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_23154/*"time"*/;
  if ( StringLiteral_23154/*"time"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B77684(
                                                                   StringLiteral_23154/*"time"*/,
                                                                   v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
    v31 = (System_Int32_array **)StringLiteral_23154/*"time"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 2 )
    goto LABEL_74;
  v15[1].fields.parent = (struct UnityEngine_GameObject_o *)v31;
  sub_B77560((BattleServantConfConponent_o *)&v15[1].fields, v31, v25, v26, v27, v28, v29, v30);
  v95 = 1061997773;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v95, v32);
  v39 = (System_Int32_array **)this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B77684(this, v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 3 )
    goto LABEL_74;
  v15[1].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v39;
  sub_B77560((BattleServantConfConponent_o *)&v15[1].fields.CS___8__locals1, v39, v33, v34, v35, v36, v37, v38);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_20375/*"islocal"*/;
  if ( StringLiteral_20375/*"islocal"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B77684(
                                                                   StringLiteral_20375/*"islocal"*/,
                                                                   v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
    v46 = (System_Int32_array **)StringLiteral_20375/*"islocal"*/;
  }
  else
  {
    v46 = 0LL;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 4 )
    goto LABEL_74;
  v15[2].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)v46;
  sub_B77560((BattleServantConfConponent_o *)&v15[2], v46, v40, v41, v42, v43, v44, v45);
  v94[0] = 1;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(bool_TypeInfo, v94, v47);
  v54 = (System_Int32_array **)this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B77684(this, v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 5 )
    goto LABEL_74;
  v15[2].monitor = v54;
  sub_B77560((BattleServantConfConponent_o *)&v15[2].monitor, v54, v48, v49, v50, v51, v52, v53);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_21704/*"oncompletetarget"*/;
  if ( StringLiteral_21704/*"oncompletetarget"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B77684(
                                                                   StringLiteral_21704/*"oncompletetarget"*/,
                                                                   v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
    v61 = (System_Int32_array **)StringLiteral_21704/*"oncompletetarget"*/;
  }
  else
  {
    v61 = 0LL;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 6 )
    goto LABEL_74;
  v15[2].fields.parent = (struct UnityEngine_GameObject_o *)v61;
  sub_B77560((BattleServantConfConponent_o *)&v15[2].fields, v61, v55, v56, v57, v58, v59, v60);
  v62 = v2->fields.CS___8__locals1;
  if ( !v62 || (this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v62->fields.__4__this) == 0LL )
LABEL_73:
    sub_B7769C(this, method);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
  v69 = (System_Int32_array **)this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B77684(this, v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 7 )
    goto LABEL_74;
  v15[2].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v69;
  sub_B77560((BattleServantConfConponent_o *)&v15[2].fields.CS___8__locals1, v69, v63, v64, v65, v66, v67, v68);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_21702/*"oncomplete"*/;
  if ( StringLiteral_21702/*"oncomplete"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B77684(
                                                                   StringLiteral_21702/*"oncomplete"*/,
                                                                   v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
    v76 = (System_Int32_array **)StringLiteral_21702/*"oncomplete"*/;
  }
  else
  {
    v76 = 0LL;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 8 )
    goto LABEL_74;
  v15[3].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)v76;
  sub_B77560((BattleServantConfConponent_o *)&v15[3], v76, v70, v71, v72, v73, v74, v75);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_18722/*"endMoveFigure"*/;
  if ( !StringLiteral_18722/*"endMoveFigure"*/ )
  {
    v83 = 0LL;
    goto LABEL_58;
  }
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B77684(
                                                                 StringLiteral_18722/*"endMoveFigure"*/,
                                                                 v15->klass->_1.element_class);
  if ( !this )
  {
LABEL_75:
    v93 = sub_B776BC();
    sub_B77668(v93, 0LL);
  }
  v83 = (System_Int32_array **)StringLiteral_18722/*"endMoveFigure"*/;
LABEL_58:
  if ( LODWORD(v15->fields.CS___8__locals1) <= 9 )
    goto LABEL_74;
  v15[3].monitor = v83;
  sub_B77560((BattleServantConfConponent_o *)&v15[3].monitor, v83, v77, v78, v79, v80, v81, v82);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v84 = iTween__Hash((System_Object_array *)v15, 0LL);
  iTween__MoveFrom_43178708(parent, v84, 0LL);
LABEL_63:
  v85 = v2->fields.CS___8__locals1;
  if ( !v85 )
    goto LABEL_73;
  v86 = v85->fields.__4__this;
  if ( !v86 )
    goto LABEL_73;
  v86->fields.openBoundsFlg = 1;
  v87 = v2->fields.CS___8__locals1;
  if ( !v87 )
    goto LABEL_73;
  v88 = v87->fields.__4__this;
  if ( !v88 )
    goto LABEL_73;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v88->fields.myFsm;
  if ( !this )
    goto LABEL_73;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9924/*"OPEN"*/, 0LL);
  v89 = v2->fields.CS___8__locals1;
  if ( !v89 )
    goto LABEL_73;
  bondsIcons = v89->fields.bondsIcons;
  if ( !bondsIcons )
    goto LABEL_73;
  i = v89->fields.i;
  if ( (unsigned int)i >= bondsIcons->max_length )
  {
LABEL_74:
    v92 = sub_B776C8(this);
    sub_B77668(v92, 0LL);
  }
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v89->fields.__4__this;
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

  if ( (byte_4388E01 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4388E01 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v4);
  CommonUI__CreateServantCoinConfirmDialog(Instance, 1, this->fields.coin, 0LL, 0LL);
}