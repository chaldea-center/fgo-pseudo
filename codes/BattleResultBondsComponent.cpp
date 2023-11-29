void __fastcall BattleResultBondsComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleResultBondsComponent_c *v10; // x8
  struct BattleResultBondsComponent_StaticFields *static_fields; // x0
  System_Int32_array **v12; // x1
  struct BattleResultBondsComponent_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40FA8E7 & 1) == 0 )
  {
    sub_B16FFC(&BattleResultBondsComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_6932, v8);
    sub_B16FFC(&StringLiteral_6921, v9);
    byte_40FA8E7 = 1;
  }
  BattleResultBondsComponent_TypeInfo->static_fields->SVT_GAP_5 = 178.0;
  BattleResultBondsComponent_TypeInfo->static_fields->SVT_GAP_6 = 150.0;
  v10 = BattleResultBondsComponent_TypeInfo;
  BattleResultBondsComponent_TypeInfo->static_fields->CONF_LABEL_MAX_WIDTH = 464;
  v10->static_fields->CONF_SERVANT_COIN_PLUS_HEIGHT = 18;
  static_fields = v10->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6932;
  static_fields->GET_NEW_SVT_KEY = (struct System_String_o *)StringLiteral_6932;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->GET_NEW_SVT_KEY, v12, v2, v3, v4, v5, v6, v7);
  v13 = BattleResultBondsComponent_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_6921;
  v13->GET_EXIST_SVT_KEY = (struct System_String_o *)StringLiteral_6921;
  sub_B16F98((BattleServantConfConponent_o *)&v13->GET_EXIST_SVT_KEY, v14, v15, v16, v17, v18, v19, v20);
}


void __fastcall BattleResultBondsComponent___ctor(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  BattleResultBondsFigureComponent_o *v32; // x20
  const MethodInfo *v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_40FA8E6 & 1) == 0 )
  {
    sub_B16FFC(&BattleResultBondsFigureComponent_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo, v9);
    byte_40FA8E6 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.conflist = (struct System_Collections_Generic_List_GameObject__o *)v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.conflist,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.buddyPointInfoWindowHeight = 366;
  this->fields.tempSaveTimeScale = 1.0;
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
  this->fields.bondsList = (struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *)v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bondsList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v32 = (BattleResultBondsFigureComponent_o *)sub_B170CC(BattleResultBondsFigureComponent_TypeInfo, v28, v29, v30, v31);
  BattleResultBondsFigureComponent___ctor(v32, v33);
  this->fields.bondsFigure = v32;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bondsFigure,
    (System_Int32_array **)v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleResultBondsComponent__CheckFormalJoin(
        BattleResultBondsComponent_o *this,
        BattleResultBondsIconComponent_o *collect,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  struct GetSvts_array *getJoinSvtList; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v26; // x21
  __int64 v27; // x26
  int max_length; // w9
  GetSvts_o *v29; // x8
  UserServantEntity_o *v30; // x24
  __int64 v31; // x3
  __int64 v32; // x4
  EventServantEntity_o *EventServant; // x22
  BattleResultBondsComponent___c_c *v34; // x0
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__62_0; // x23
  Il2CppObject *v37; // x25
  struct BattleResultBondsComponent___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x25
  int32_t SvtId; // w0
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  __int64 v51; // x24
  __int64 v52; // x2
  System_Int32_array **v53; // x23
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  GetSvtCoin_o *v58; // x25
  WarEntity_o *v59; // x8
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  System_String_o *v75; // x24
  CommonUI_o *v76; // x25
  System_String_o *Message; // x0
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_40FA8D8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, collect);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_SvtCoinMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_B16FFC(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v9);
    sub_B16FFC(&GetSvtCoin___TypeInfo, v10);
    sub_B16FFC(&GetSvtCoin_TypeInfo, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B16FFC(&Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__, v15);
    sub_B16FFC(&Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__, v16);
    sub_B16FFC(&BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo, v17);
    sub_B16FFC(&BattleResultBondsComponent___c_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_12382, v19);
    sub_B16FFC(&StringLiteral_17937, v20);
    byte_40FA8D8 = 1;
  }
  entity = 0LL;
  if ( this->fields.getJoinSvtList && !this->fields.isWarboard )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___),
          (getJoinSvtList = this->fields.getJoinSvtList) == 0LL) )
    {
LABEL_49:
      sub_B170D4();
    }
    v26 = MasterData_WarQuestSelectionMaster;
    v27 = 0LL;
    while ( 1 )
    {
      max_length = getJoinSvtList->max_length;
      if ( (int)v27 >= max_length )
        break;
      if ( (unsigned int)v27 >= max_length )
        goto LABEL_50;
      v29 = getJoinSvtList->m_Items[v27];
      if ( !v29 )
        goto LABEL_49;
      if ( v29->fields.isNew )
      {
        UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_17937, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      else
      {
        if ( !v26 )
          goto LABEL_49;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(v26, v29->fields.userSvtId, (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( MasterData_WarQuestSelectionMaster )
        {
          v30 = (UserServantEntity_o *)MasterData_WarQuestSelectionMaster;
          MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)UserServantEntity__getSvtId((UserServantEntity_o *)MasterData_WarQuestSelectionMaster, 0LL);
          if ( !collect )
            goto LABEL_49;
          if ( (_DWORD)MasterData_WarQuestSelectionMaster == collect->fields.svtId )
          {
            EventServant = UserServantEntity__getEventServant(v30, 0LL);
            if ( EventServant
              || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)UserServantEntity__getEventServantIgnoreEnd(v30, 0LL),
                  (EventServant = (EventServantEntity_o *)MasterData_WarQuestSelectionMaster) != 0LL) )
            {
              v34 = BattleResultBondsComponent___c_TypeInfo;
              if ( (BYTE3(BattleResultBondsComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
                v34 = BattleResultBondsComponent___c_TypeInfo;
              }
              static_fields = v34->static_fields;
              _9__62_0 = static_fields->__9__62_0;
              if ( !_9__62_0 )
              {
                if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v34);
                  static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
                }
                v37 = (Il2CppObject *)static_fields->__9;
                _9__62_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v23, v24, v31, v32);
                System_Action___ctor(
                  _9__62_0,
                  v37,
                  Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__,
                  0LL);
                v38 = BattleResultBondsComponent___c_TypeInfo->static_fields;
                v38->__9__62_0 = _9__62_0;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&v38->__9__62_0,
                  (System_Int32_array **)_9__62_0,
                  v39,
                  v40,
                  v41,
                  v42,
                  v43,
                  v44);
              }
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SvtCoinMaster___);
              SvtId = UserServantEntity__getSvtId(v30, 0LL);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_49;
              if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                     Master_WarQuestSelectionMaster,
                     &entity,
                     SvtId,
                     (const MethodInfo_266F3E4 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__) )
              {
                if ( !entity )
                  goto LABEL_49;
                if ( *(&entity->fields.id + 1) >= 1 )
                {
                  v51 = sub_B170CC(BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo, v47, v48, v49, v50);
                  BattleResultBondsComponent___c__DisplayClass62_0___ctor(
                    (BattleResultBondsComponent___c__DisplayClass62_0_o *)v51,
                    0LL);
                  v53 = (System_Int32_array **)sub_B17014(GetSvtCoin___TypeInfo, 1LL, v52);
                  v58 = (GetSvtCoin_o *)sub_B170CC(GetSvtCoin_TypeInfo, v54, v55, v56, v57);
                  GetSvtCoin___ctor(v58, 0LL);
                  v59 = entity;
                  if ( !entity )
                    goto LABEL_49;
                  if ( !v58 )
                    goto LABEL_49;
                  v58->fields.svtId = entity->fields.id;
                  v58->fields.num = *(&v59->fields.id + 1);
                  v58->fields.itemId = (int32_t)v59->fields.age;
                  if ( !v53 )
                    goto LABEL_49;
                  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)sub_B170BC(v58, *(_QWORD *)&(*v53)->m_Items[9]);
                  if ( !MasterData_WarQuestSelectionMaster )
                  {
                    sub_B170F4(0LL);
                    sub_B170A0();
                  }
                  if ( !*((_DWORD *)v53 + 6) )
                  {
LABEL_50:
                    sub_B17100(MasterData_WarQuestSelectionMaster, v23, v24);
                    sub_B170A0();
                  }
                  v53[4] = (System_Int32_array *)v58;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)(v53 + 4),
                    (System_Int32_array **)v58,
                    v24,
                    v60,
                    v61,
                    v62,
                    v63,
                    v64);
                  if ( !v51 )
                    goto LABEL_49;
                  *(_QWORD *)(v51 + 16) = v53;
                  sub_B16F98((BattleServantConfConponent_o *)(v51 + 16), v53, v65, v66, v67, v68, v69, v70);
                  _9__62_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v71, v72, v73, v74);
                  System_Action___ctor(
                    _9__62_0,
                    (Il2CppObject *)v51,
                    Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__,
                    0LL);
                }
              }
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v75 = LocalizationManager__Get((System_String_o *)StringLiteral_12382, 0LL);
              v76 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              Message = EventServantEntity__GetGetMessage(EventServant, 0LL);
              if ( !v76 )
                goto LABEL_49;
              CommonUI__OpenNotificationDialog(v76, v75, Message, _9__62_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
            }
          }
        }
      }
      getJoinSvtList = this->fields.getJoinSvtList;
      ++v27;
      if ( !getJoinSvtList )
        goto LABEL_49;
    }
  }
}


void __fastcall BattleResultBondsComponent__Close(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct BattleWindowComponent_o *multiDeckWindow; // x20
  BattleWindowComponent_EndCall_o *v8; // x21

  if ( (byte_40FA8E0 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultBondsComponent_endClose__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v6);
    byte_40FA8E0 = 1;
  }
  if ( this->fields.isMultiDeck )
    multiDeckWindow = this->fields.multiDeckWindow;
  else
    multiDeckWindow = this->fields.window;
  v8 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, method, v2, v3, v4);
  BattleWindowComponent_EndCall___ctor(v8, (Il2CppObject *)this, Method_BattleResultBondsComponent_endClose__, 0LL);
  if ( !multiDeckWindow )
    sub_B170D4();
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))multiDeckWindow->klass->vtable._12_Close.method)(
    multiDeckWindow,
    v8,
    multiDeckWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultBondsComponent__CloseBondUpRoot(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *upRoot; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA8E5 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FA8E5 = 1;
  }
  upRoot = this->fields.upRoot;
  if ( !upRoot || (UnityEngine_GameObject__SetActive(upRoot, 0, 0LL), (myFsm = this->fields.myFsm) == 0LL) )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultBondsComponent__CreateRewardEffect(
        BattleResultBondsComponent_o *this,
        AssetData_o *data,
        UISprite_o *targetIcon,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v17; // x22
  UnityEngine_Transform_o *v18; // x0
  UnityEngine_Transform_o *v19; // x22
  int v20; // s0
  UnityEngine_Transform_o *v23; // x22
  int v24; // s0
  changeVColor_array *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  int max_length; // w8
  changeVColor_array *v31; // x21
  unsigned int v32; // w22
  UIWidget_o *v33; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *effectUIList; // x0

  if ( (byte_40FA8DA & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, data);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__, v10);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    byte_40FA8DA = 1;
  }
  if ( !data )
    goto LABEL_20;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               effectName,
                                                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      Object_WarBoardWaitTimeSetting,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v14 )
    goto LABEL_20;
  v15 = v14;
  transform = UnityEngine_GameObject__get_transform(v14, 0LL);
  if ( !targetIcon )
    goto LABEL_20;
  v17 = transform;
  v18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetIcon, 0LL);
  if ( !v17 )
    goto LABEL_20;
  UnityEngine_Transform__set_parent(v17, v18, 0LL);
  v19 = UnityEngine_GameObject__get_transform(v15, 0LL);
  *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v19 )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
  v23 = UnityEngine_GameObject__get_transform(v15, 0LL);
  *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_one(0LL);
  if ( !v23 )
    goto LABEL_20;
  UnityEngine_Transform__set_localScale(v23, *(UnityEngine_Vector3_o *)&v24, 0LL);
  v27 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
          v15,
          (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !v27 )
    goto LABEL_20;
  max_length = v27->max_length;
  v31 = v27;
  if ( max_length >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      if ( v32 >= max_length )
      {
        sub_B17100(v27, v28, v29);
        sub_B170A0();
      }
      v33 = (UIWidget_o *)v31->m_Items[v32];
      if ( !v33 )
        break;
      UIWidget__set_depth(v33, targetIcon->fields.mDepth - 1, 0LL);
      max_length = v31->max_length;
      if ( (int)++v32 >= max_length )
        goto LABEL_18;
    }
LABEL_20:
    sub_B170D4();
  }
LABEL_18:
  effectUIList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.effectUIList;
  if ( !effectUIList )
    goto LABEL_20;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    effectUIList,
    (System_Collections_Generic_IEnumerable_T__o *)v31,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void __fastcall BattleResultBondsComponent__DeleteGetJoinSvtData(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleResultBondsComponent_c *v2; // x0

  if ( (byte_40FA8CF & 1) == 0 )
  {
    sub_B16FFC(&BattleResultBondsComponent_TypeInfo, v1);
    byte_40FA8CF = 1;
  }
  v2 = BattleResultBondsComponent_TypeInfo;
  if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
    v2 = BattleResultBondsComponent_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v2->static_fields->GET_EXIST_SVT_KEY, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(BattleResultBondsComponent_TypeInfo->static_fields->GET_NEW_SVT_KEY, 0LL);
}


BattleResultBondsIconComponent_array *__fastcall BattleResultBondsComponent__GetBondsIconArray(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *p_bondsIconArray; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *bondsList; // x0
  const MethodInfo *v17; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x1
  System_Int32_array **v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FA8E2 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__,
      method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__, v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__,
      v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v9);
    byte_40FA8E2 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( this->fields.isMultiDeck )
  {
    p_bondsIconArray = (BattleServantConfConponent_o *)&this->fields.bondsIconArray;
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.bondsIconArray, 0LL) )
    {
      v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v11, v12, v13, v14);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v15,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
      bondsList = this->fields.bondsList;
      if ( !bondsList )
        goto LABEL_17;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v27,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bondsList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v27,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
      {
        if ( !v27.fields.current )
          sub_B170D4();
        BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                          (BattleResultBondsDeckPerWaveComponent_o *)v27.fields.current,
                                                                          v17);
        if ( !v15 )
          sub_B170D4();
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
          BondsIconArray,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v27,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
      if ( !v15 )
LABEL_17:
        sub_B170D4();
      v19 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                     (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
      p_bondsIconArray->klass = (BattleServantConfConponent_c *)v19;
      sub_B16F98(p_bondsIconArray, v19, v20, v21, v22, v23, v24, v25);
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
  __int64 v3; // x1
  __int64 v4; // x1
  BattleWindowComponent_o *window; // x0
  struct BattleWindowComponent_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  BattleWindowComponent_o *confwindow; // x0
  struct BattleWindowComponent_o *v19; // x0
  UnityEngine_GameObject_o *upRoot; // x0
  UnityEngine_Object_o *multiDeckWindow; // x20
  BattleWindowComponent_o *v22; // x0
  struct BattleWindowComponent_o *v23; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FA8D0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FA8D0 = 1;
  }
  window = this->fields.window;
  if ( !window )
    goto LABEL_17;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0LL);
  v6 = this->fields.window;
  if ( !v6 )
    goto LABEL_17;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, Il2CppMethodPointer))v6->klass->vtable._9_setClose.method)(
    v6,
    v6->klass->vtable._10_Open.methodPtr);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UIUnityRenderer__TypeInfo,
                                                                                                  v7,
                                                                                                  v8,
                                                                                                  v9,
                                                                                                  v10);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v11;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.effectUIList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  confwindow = this->fields.confwindow;
  if ( !confwindow )
    goto LABEL_17;
  BattleWindowComponent__setInitData(confwindow, 2, 0.15, 0, 0LL);
  v19 = this->fields.confwindow;
  if ( !v19 )
    goto LABEL_17;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, Il2CppMethodPointer))v19->klass->vtable._9_setClose.method)(
    v19,
    v19->klass->vtable._10_Open.methodPtr);
  upRoot = this->fields.upRoot;
  if ( !upRoot )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(upRoot, 0, 0LL);
  multiDeckWindow = (UnityEngine_Object_o *)this->fields.multiDeckWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(multiDeckWindow, 0LL, 0LL) )
  {
    v22 = this->fields.multiDeckWindow;
    if ( v22 )
    {
      BattleWindowComponent__setInitData(v22, 2, 0.15, 0, 0LL);
      v23 = this->fields.multiDeckWindow;
      if ( v23 )
      {
        ((void (__fastcall *)(struct BattleWindowComponent_o *, Il2CppMethodPointer))v23->klass->vtable._9_setClose.method)(
          v23,
          v23->klass->vtable._10_Open.methodPtr);
        goto LABEL_15;
      }
    }
LABEL_17:
    sub_B170D4();
  }
LABEL_15:
  this->fields.isMultiDeck = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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

  if ( (byte_40FA8D1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, oldCollects);
    byte_40FA8D1 = 1;
  }
  this->fields.oldCollections = oldCollects;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.oldCollections,
    (System_Int32_array **)oldCollects,
    (System_String_array **)inRewardInfos,
    (System_String_array **)resultAsset,
    *(System_Boolean_array ***)&baseFriendshipExp,
    (System_Int32_array **)getJoinSvts,
    (System_Int32_array *)inIsMultiDeck,
    (System_Int32_array *)method);
  this->fields.rewardInfos = inRewardInfos;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.rewardInfos,
    (System_Int32_array **)inRewardInfos,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.resultAssetData = resultAsset;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resultAssetData,
    (System_Int32_array **)resultAsset,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.getJoinSvtList = getJoinSvts;
  sub_B16F98(
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
  __int64 v14; // x1
  __int64 v15; // x25
  struct BattleResultBondsIconComponent_array *collects; // x8
  BattleResultBondsIconComponent_o *v17; // x0
  const MethodInfo *v18; // x3
  struct BattleResultBondsIconComponent_array *v19; // x8
  BattleResultBondsIconComponent_o *v20; // x0
  struct BattleResultBondsIconComponent_array *v21; // x8
  BattleResultBondsIconComponent_o *v22; // x0
  struct BattleResultBondsIconComponent_array *v23; // x8
  BattleResultBondsIconComponent_o *v24; // x0
  float v25; // s8
  struct BattleResultBondsIconComponent_array *v26; // x8
  UnityEngine_Component_o *v27; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x24
  float v30; // s9
  int v31; // w25
  float v32; // s10
  struct BattleResultBondsIconComponent_array *v33; // x8
  UnityEngine_Component_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x8
  UnityEngine_Object_o *bgFrame; // x20
  UIWidget_o *v38; // x0
  UnityEngine_Component_o *window; // x0
  UnityEngine_Transform_o *transform; // x0
  struct BattleWindowComponent_o *v41; // x0
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  v12 = targetIndex;
  v13 = this;
  if ( (byte_40FA8E3 & 1) == 0 )
  {
    sub_B16FFC(&BattleResultBondsComponent_TypeInfo, *(_QWORD *)&targetIndex);
    this = (BattleResultBondsComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    byte_40FA8E3 = 1;
  }
  if ( (int)v12 < cnt )
  {
    v15 = 8LL * (int)v12 + 32;
    do
    {
      collects = v13->fields.collects;
      if ( !collects )
        goto LABEL_54;
      if ( v12 >= collects->max_length )
        goto LABEL_55;
      v17 = *(BattleResultBondsIconComponent_o **)((char *)&collects->obj.klass + v15);
      if ( !v17 )
        goto LABEL_54;
      BattleResultBondsIconComponent__setServantData(v17, 0LL, 0LL, 0, 0, isNoFollower, 0, v7);
      v19 = v13->fields.collects;
      if ( !v19 )
        goto LABEL_54;
      if ( v12 >= v19->max_length )
        goto LABEL_55;
      v20 = *(BattleResultBondsIconComponent_o **)((char *)&v19->obj.klass + v15);
      if ( !v20 )
        goto LABEL_54;
      BattleResultBondsIconComponent__SetBuddyPointInfo(v20, 0LL, 0, v18);
      v21 = v13->fields.collects;
      if ( !v21 )
        goto LABEL_54;
      if ( v12 >= v21->max_length )
        goto LABEL_55;
      v22 = *(BattleResultBondsIconComponent_o **)((char *)&v21->obj.klass + v15);
      if ( !v22 )
        goto LABEL_54;
      this = (BattleResultBondsComponent_o *)BattleResultBondsIconComponent__changeGauge(
                                               v22,
                                               0.0,
                                               *(const MethodInfo **)&targetIndex);
      v23 = v13->fields.collects;
      if ( !v23 )
        goto LABEL_54;
      if ( v12 >= v23->max_length )
        goto LABEL_55;
      v24 = *(BattleResultBondsIconComponent_o **)((char *)&v23->obj.klass + v15);
      if ( !v24 )
        goto LABEL_54;
      BattleResultBondsIconComponent__InitBuddyPointInfo(v24, *(const MethodInfo **)&targetIndex);
      ++v12;
      v15 += 8LL;
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
    v25 = *(float *)(*(_QWORD *)&this->fields.buddyPointInfoWindowHeight + 4LL);
  }
  else
  {
    if ( (WORD1(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
      this = (BattleResultBondsComponent_o *)BattleResultBondsComponent_TypeInfo;
    }
    v26 = v13->fields.collects;
    if ( !v26 )
      goto LABEL_54;
    if ( v26->max_length <= cnt )
    {
LABEL_55:
      sub_B17100(this, *(_QWORD *)&targetIndex, *(_QWORD *)&cnt);
      sub_B170A0();
    }
    v27 = (UnityEngine_Component_o *)v26->m_Items[cnt];
    if ( !v27 )
      goto LABEL_54;
    v25 = **(float **)&this->fields.buddyPointInfoWindowHeight;
    gameObject = UnityEngine_Component__get_gameObject(v27, 0LL);
    if ( !gameObject )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  if ( cnt >= 1 )
  {
    v29 = 0LL;
    v30 = 0.0;
    v31 = 4;
    v32 = (float)(1 - cnt) * 0.5;
    do
    {
      if ( isNoFollower )
        v30 = (float)v31;
      v33 = v13->fields.collects;
      if ( !v33 )
        goto LABEL_54;
      if ( (unsigned int)v29 >= v33->max_length )
        goto LABEL_55;
      v34 = (UnityEngine_Component_o *)v33->m_Items[v29];
      if ( !v34 )
        goto LABEL_54;
      v35 = UnityEngine_Component__get_gameObject(v34, 0LL);
      GameObjectExtensions__SetLocalPositionX(v35, (float)(v25 * v32) - v30, 0LL);
      ++v29;
      v32 = v32 + 1.0;
      v31 -= 2;
    }
    while ( (int)v29 < cnt );
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
      v38 = (UIWidget_o *)v13->fields.bgFrame;
      if ( !v38 )
        goto LABEL_54;
      UIWidget__set_height(v38, v13->fields.buddyPointInfoWindowHeight, 0LL);
    }
    window = (UnityEngine_Component_o *)v13->fields.window;
    if ( !window
      || (transform = UnityEngine_Component__get_transform(window, 0LL)) == 0LL
      || (v42.fields.y = 13.0,
          v42.fields.x = 0.0,
          v42.fields.z = 0.0,
          UnityEngine_Transform__set_localPosition(transform, v42, 0LL),
          (v41 = v13->fields.window) == 0LL) )
    {
LABEL_54:
      sub_B170D4();
    }
    ((void (__fastcall *)(struct BattleWindowComponent_o *, Il2CppMethodPointer))v41->klass->vtable._7_setInitialPos.method)(
      v41,
      v41->klass->vtable._8_setInitialPosIfDefaultIsZero.methodPtr);
  }
}


void __fastcall BattleResultBondsComponent__Open(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  BattleResultBondsIconComponent_array *BondsIconArray; // x20
  BattleResultBondsComponent___c_c *v16; // x8
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__53_0; // x21
  Il2CppObject *v19; // x22
  struct BattleResultBondsComponent___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  _BOOL4 isMultiDeck; // w8
  struct BattleWindowComponent_o *v33; // x20
  PlayMakerFSM_o *myFsm; // x0
  __int64 *v35; // x8
  BattleWindowComponent_EndCall_o *v36; // x21

  if ( (byte_40FA8D4 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_BattleResultBondsIconComponent___, method);
    sub_B16FFC(&Method_BattleResultBondsComponent_OpenEnd__, v3);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_B16FFC(&Method_System_Func_BattleResultBondsIconComponent__bool___ctor__, v5);
    sub_B16FFC(&System_Func_BattleResultBondsIconComponent__bool__TypeInfo, v6);
    sub_B16FFC(&Method_BattleResultBondsComponent___c__Open_b__53_0__, v7);
    sub_B16FFC(&BattleResultBondsComponent___c_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_5477, v9);
    sub_B16FFC(&StringLiteral_12204, v10);
    byte_40FA8D4 = 1;
  }
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, method);
  v16 = BattleResultBondsComponent___c_TypeInfo;
  if ( (BYTE3(BattleResultBondsComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
    v16 = BattleResultBondsComponent___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__53_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__53_0;
  if ( !_9__53_0 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__53_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_BattleResultBondsIconComponent__bool__TypeInfo,
                                                                                    v11,
                                                                                    v12,
                                                                                    v13,
                                                                                    v14);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__53_0,
      v19,
      Method_BattleResultBondsComponent___c__Open_b__53_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BattleResultBondsIconComponent__bool___ctor__);
    v20 = BattleResultBondsComponent___c_TypeInfo->static_fields;
    v20->__9__53_0 = (struct System_Func_BattleResultBondsIconComponent__bool__o *)_9__53_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v20->__9__53_0,
      (System_Int32_array **)_9__53_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
         (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)BondsIconArray,
         (System_Func_T__bool__o *)_9__53_0,
         (const MethodInfo_18B6074 *)Method_BasicHelper_Any_BattleResultBondsIconComponent___) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      isMultiDeck = this->fields.isMultiDeck;
      this->fields.openBoundsFlg = 0;
      this->fields.colIndex = 0;
      this->fields.bondsCountUp = 1;
      v33 = isMultiDeck ? this->fields.multiDeckWindow : this->fields.window;
      v36 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v28, v29, v30, v31);
      BattleWindowComponent_EndCall___ctor(v36, (Il2CppObject *)this, Method_BattleResultBondsComponent_OpenEnd__, 0LL);
      if ( v33 )
      {
        ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v33->klass->vtable._10_Open.method)(
          v33,
          v36,
          v33->klass->vtable._11_CompOpen.methodPtr);
        myFsm = this->fields.myFsm;
        if ( myFsm )
        {
          v35 = &StringLiteral_5477;
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    sub_B170D4();
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_22;
  v35 = &StringLiteral_12204;
LABEL_21:
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v35, 0LL);
}


void __fastcall BattleResultBondsComponent__OpenEnd(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v15; // x2
  __int64 v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Object_array *v23; // x21
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  System_Int32_array **v25; // x1
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x22
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x22
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x22
  System_Collections_Hashtable_o *v74; // x0
  const MethodInfo *v75; // x1
  int max_length; // w8
  BattleResultBondsIconComponent_array *v77; // x20
  unsigned int v78; // w21
  BattleResultBondsIconComponent_o *v79; // x0
  System_String_o *CommonSeName; // x20
  struct SePlayer_o *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  int v88; // [xsp+Ch] [xbp-34h] BYREF
  int v89; // [xsp+18h] [xbp-28h] BYREF
  int v90; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_40FA8D5 & 1) == 0 )
  {
    sub_B16FFC(&object___TypeInfo, method);
    sub_B16FFC(&SeManager_TypeInfo, v3);
    sub_B16FFC(&float_TypeInfo, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_18842, v6);
    sub_B16FFC(&StringLiteral_22584, v7);
    sub_B16FFC(&StringLiteral_21182, v8);
    sub_B16FFC(&StringLiteral_15009, v9);
    sub_B16FFC(&StringLiteral_22621, v10);
    sub_B16FFC(&StringLiteral_18670, v11);
    sub_B16FFC(&StringLiteral_21173, v12);
    sub_B16FFC(&iTween_TypeInfo, v13);
    byte_40FA8D5 = 1;
  }
  if ( !this->fields.bondsCountUp )
    return;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v16 = sub_B17014(object___TypeInfo, 10LL, v15);
  if ( !v16 )
LABEL_68:
    sub_B170D4();
  v23 = (System_Object_array *)v16;
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_18842;
  if ( StringLiteral_18842 )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B170BC(
                                                               StringLiteral_18842,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v25 = (System_Int32_array **)StringLiteral_18842;
  }
  else
  {
    v25 = 0LL;
  }
  if ( !v23->max_length )
    goto LABEL_67;
  v23->m_Items[0] = (Il2CppObject *)v25;
  sub_B16F98((BattleServantConfConponent_o *)v23->m_Items, v25, v17, v18, v19, v20, v21, v22);
  v90 = 0;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v90);
  v31 = (System_Int32_array **)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B170BC(
                                                               BondsIconArray,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
  }
  if ( v23->max_length <= 1 )
    goto LABEL_67;
  v23->m_Items[1] = (Il2CppObject *)v31;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[1], v31, v17, v26, v27, v28, v29, v30);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22621;
  if ( StringLiteral_22621 )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B170BC(
                                                               StringLiteral_22621,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v25 = (System_Int32_array **)StringLiteral_22621;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v23->max_length <= 2 )
    goto LABEL_67;
  v23->m_Items[2] = (Il2CppObject *)v25;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[2], v25, v17, v32, v33, v34, v35, v36);
  v89 = 1065353216;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v89);
  v42 = (System_Int32_array **)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B170BC(
                                                               BondsIconArray,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
  }
  if ( v23->max_length <= 3 )
    goto LABEL_67;
  v23->m_Items[3] = (Il2CppObject *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[3], v42, v17, v37, v38, v39, v40, v41);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_21182;
  if ( StringLiteral_21182 )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B170BC(
                                                               StringLiteral_21182,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v25 = (System_Int32_array **)StringLiteral_21182;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v23->max_length <= 4 )
    goto LABEL_67;
  v23->m_Items[4] = (Il2CppObject *)v25;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[4], v25, v17, v43, v44, v45, v46, v47);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_15009;
  if ( StringLiteral_15009 )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B170BC(
                                                               StringLiteral_15009,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v25 = (System_Int32_array **)StringLiteral_15009;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v23->max_length <= 5 )
    goto LABEL_67;
  v23->m_Items[5] = (Il2CppObject *)v25;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[5], v25, v17, v48, v49, v50, v51, v52);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_21173;
  if ( StringLiteral_21173 )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B170BC(
                                                               StringLiteral_21173,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v25 = (System_Int32_array **)StringLiteral_21173;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v23->max_length <= 6 )
    goto LABEL_67;
  v23->m_Items[6] = (Il2CppObject *)v25;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[6], v25, v17, v53, v54, v55, v56, v57);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_18670;
  if ( StringLiteral_18670 )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B170BC(
                                                               StringLiteral_18670,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v25 = (System_Int32_array **)StringLiteral_18670;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v23->max_length <= 7 )
    goto LABEL_67;
  v23->m_Items[7] = (Il2CppObject *)v25;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[7], v25, v17, v58, v59, v60, v61, v62);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22584;
  if ( StringLiteral_22584 )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B170BC(
                                                               StringLiteral_22584,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v25 = (System_Int32_array **)StringLiteral_22584;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v23->max_length <= 8 )
    goto LABEL_67;
  v23->m_Items[8] = (Il2CppObject *)v25;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[8], v25, v17, v63, v64, v65, v66, v67);
  v88 = 1072064102;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v88);
  v73 = (System_Int32_array **)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B170BC(
                                                               BondsIconArray,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
    {
LABEL_69:
      sub_B170F4(BondsIconArray);
      sub_B170A0();
    }
  }
  if ( v23->max_length <= 9 )
    goto LABEL_67;
  v23->m_Items[9] = (Il2CppObject *)v73;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[9], v73, v17, v68, v69, v70, v71, v72);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v74 = iTween__Hash(v23, 0LL);
  iTween__ValueTo(gameObject, v74, 0LL);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v75);
  if ( !BondsIconArray )
    goto LABEL_68;
  max_length = BondsIconArray->max_length;
  v77 = BondsIconArray;
  if ( max_length >= 1 )
  {
    v78 = 0;
    while ( v78 < max_length )
    {
      v79 = v77->m_Items[v78];
      if ( !v79 )
        goto LABEL_68;
      BattleResultBondsIconComponent__StartUpdateBuddyPoint(v79, (const MethodInfo *)v25);
      max_length = v77->max_length;
      if ( (int)++v78 >= max_length )
        goto LABEL_58;
    }
LABEL_67:
    sub_B17100(BondsIconArray, v25, v17);
    sub_B170A0();
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
    v81 = SoundManager__playSe(CommonSeName, 0LL);
    this->fields.MeterSePlayer = v81;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.MeterSePlayer,
      (System_Int32_array **)v81,
      v82,
      v83,
      v84,
      v85,
      v86,
      v87);
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  struct BattleInfoData_o *battle_info; // x9
  struct DeckData_array *waveMyDecks; // x26
  __int64 maxWave; // x27
  BattleUserServantData_array *userSvt; // x24
  unsigned __int64 currentWave; // x19
  il2cpp_array_size_t max_length; // w9
  DeckData_o *v36; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x20
  struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *bondsList; // x0
  const MethodInfo *v39; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x1
  struct BattleResultBondsIconComponent_array *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  const MethodInfo *v48; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_40FA8D2 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__,
      battleData);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__,
      v18);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__,
      v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__, v23);
    sub_B16FFC(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v24);
    byte_40FA8D2 = 1;
  }
  memset(&v50, 0, sizeof(v50));
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
        sub_B17100(v25, v26, v27);
        sub_B170A0();
      }
      v36 = waveMyDecks->m_Items[currentWave++];
      BattleResultBondsComponent__SetResultDataLocal(
        this,
        v36,
        oldCollects,
        followerType,
        userSvt,
        battleResult,
        isHideBuddyPointResult,
        battleData,
        currentWave,
        maxWave,
        v48);
      max_length = waveMyDecks->max_length;
    }
    while ( (__int64)currentWave < (int)max_length );
  }
  v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo,
                                                                                                  v26,
                                                                                                  v27,
                                                                                                  v28,
                                                                                                  v29);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v37,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  bondsList = this->fields.bondsList;
  if ( !bondsList )
    goto LABEL_21;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v50,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bondsList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v50,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
  {
    if ( !v50.fields.current )
      sub_B170D4();
    BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                      (BattleResultBondsDeckPerWaveComponent_o *)v50.fields.current,
                                                                      v39);
    if ( !v37 )
      sub_B170D4();
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v37,
      BondsIconArray,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v50,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
  if ( !v37 )
LABEL_21:
    sub_B170D4();
  v41 = (struct BattleResultBondsIconComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v37,
                                                         (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
  this->fields.bondsIconArray = v41;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bondsIconArray,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  int v51; // w8
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v53; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v54; // x25
  WebViewManager_o *v55; // x0
  BattleResultBondsComponent_o *v56; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v57; // x27
  UnityEngine_Component_o *multiBondsRoot; // x0
  struct BattleResultBondsDeckPerWaveComponent_o *multiBondsPrefab; // x19
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *v61; // x1
  int64_t IsWarBoard; // x0
  const MethodInfo *userSvtId; // x1
  __int64 v64; // x2
  const MethodInfo *v65; // x3
  __int64 v66; // x4
  const MethodInfo *v67; // x6
  System_Collections_Generic_IEnumerable_TSource__o *rewardInfos; // x21
  BattleResultBondsComponent___c_c *v69; // x0
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__49_0; // x19
  Il2CppObject *v72; // x20
  struct BattleResultBondsComponent___c_StaticFields *v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x0
  System_Collections_Generic_List_TSource__o *v81; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v86; // x21
  BattleResultBondsComponent_c *v87; // x0
  BattleResultBondsComponent_c *v88; // x0
  Il2CppObject *String_34837456; // x19
  System_Collections_Generic_IEnumerable_T__o *v90; // x0
  BattleResultBondsComponent_c *v91; // x0
  System_String_o *GET_NEW_SVT_KEY; // x20
  WarBoardUiData_SaveData_array *v93; // x19
  System_String_o *v94; // x0
  BattleResultBondsComponent___c_c *v95; // x0
  System_Collections_Generic_IEnumerable_TSource__o *getJoinSvts; // x21
  struct BattleResultBondsComponent___c_StaticFields *v97; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__49_1; // x19
  Il2CppObject *v99; // x20
  struct BattleResultBondsComponent___c_StaticFields *v100; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v107; // x0
  System_Collections_Generic_List_TSource__o *v108; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v109; // x21
  BattleResultBondsComponent_c *v110; // x0
  BattleResultBondsComponent_c *v111; // x0
  Il2CppObject *v112; // x19
  System_Collections_Generic_IEnumerable_T__o *v113; // x0
  BattleResultBondsComponent_c *v114; // x0
  System_String_o *GET_EXIST_SVT_KEY; // x20
  WarBoardUiData_SaveData_array *v116; // x19
  System_String_o *v117; // x0
  struct BattleDeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v120; // w21
  int32_t v121; // w22
  BattleDeckServantData_o *v122; // x26
  BattleResultBondsComponent___c__DisplayClass49_0_o *v123; // x28
  UserServantEntity_o *Entity; // x0
  UserServantEntity_o *v125; // x24
  BattleResultBondsComponent_o *SvtId; // x0
  const MethodInfo *v127; // x3
  int32_t v128; // w0
  __int64 v129; // x3
  __int64 v130; // x4
  const MethodInfo *v131; // x7
  signed int v132; // w8
  ServantEntity_o *v133; // x27
  unsigned int v134; // w19
  BattleUserServantData_o *v135; // x20
  __int128 v136; // q0
  const MethodInfo *v137; // x5
  BattleResultComponent_resultData_o *v138; // x19
  unsigned int v139; // w25
  int32_t afterLimitCount; // w26
  int32_t v141; // w22
  int afterIconLimitCount; // w8
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x19
  BattleBuddyPointInfo_o *v145; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v146; // x20
  BattleResultBondsIconComponent_o *BondsIcon; // x28
  struct BattleResultBondsIconComponent_array *v148; // x8
  const MethodInfo *v149; // x3
  unsigned int v150; // w22
  const MethodInfo *v151; // x2
  UserServantCollectionEntity_o *EntityDefinitely; // x1
  bool v153; // w19
  const MethodInfo *v154; // x2
  const MethodInfo *v155; // x1
  char v156; // w8
  bool updateFlg; // w19
  char v158; // w8
  const MethodInfo *v159; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v161; // x0
  struct UIGrid_o *iconRoot; // x0
  struct UIGrid_o *v163; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *bondsList; // x0
  int32_t cnt; // [xsp+4h] [xbp-10Ch]
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // [xsp+8h] [xbp-108h]
  BattleResultBondsDeckPerWaveComponent_o *Object_object; // [xsp+20h] [xbp-F0h]
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+28h] [xbp-E8h]
  struct BattleDeckServantData_array *v171; // [xsp+30h] [xbp-E0h]
  DataMasterBase_WarMaster__WarEntity__int__o *v172; // [xsp+38h] [xbp-D8h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v173; // [xsp+40h] [xbp-D0h]
  int32_t Type; // [xsp+54h] [xbp-BCh]
  UserServantCollectionEntity_o *userSvtCol; // [xsp+60h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v179; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v180; // [xsp+90h] [xbp-80h]

  if ( (byte_40FA8D3 & 1) == 0 )
  {
    sub_B16FFC(&Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___, myDeck);
    sub_B16FFC(&Method_BasicHelper_Find_BattleBuddyPointInfo___, v14);
    sub_B16FFC(&BattleResultBondsComponent_TypeInfo, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v19);
    sub_B16FFC(&DataManager_TypeInfo, v20);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v22);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_GetSvts___, v23);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_QuestRewardInfo___, v24);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_GetSvts___, v25);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_QuestRewardInfo___, v26);
    sub_B16FFC(&Method_System_Func_QuestRewardInfo__bool___ctor__, v27);
    sub_B16FFC(&Method_System_Func_BattleBuddyPointInfo__bool___ctor__, v28);
    sub_B16FFC(&Method_System_Func_GetSvts__bool___ctor__, v29);
    sub_B16FFC(&System_Func_GetSvts__bool__TypeInfo, v30);
    sub_B16FFC(&System_Func_QuestRewardInfo__bool__TypeInfo, v31);
    sub_B16FFC(&System_Func_BattleBuddyPointInfo__bool__TypeInfo, v32);
    sub_B16FFC(&Method_JsonManager_DeserializeArray_GetSvts___, v33);
    sub_B16FFC(&Method_JsonManager_DeserializeArray_QuestRewardInfo___, v34);
    sub_B16FFC(&JsonManager_TypeInfo, v35);
    sub_B16FFC(&Method_System_Collections_Generic_List_GetSvts__AddRange__, v36);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__, v37);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__, v38);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__, v39);
    sub_B16FFC(&Method_System_Collections_Generic_List_GetSvts__ToArray__, v40);
    sub_B16FFC(&Method_System_Collections_Generic_List_GetSvts__get_Count__, v41);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__, v42);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v43);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v44);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45);
    sub_B16FFC(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__, v46);
    sub_B16FFC(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__, v47);
    sub_B16FFC(&Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__, v48);
    sub_B16FFC(&BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo, v49);
    sub_B16FFC(&BattleResultBondsComponent___c_TypeInfo, v50);
    byte_40FA8D3 = 1;
  }
  Type = Follower__getType(followerType, 0LL);
  if ( Type )
    v51 = 5;
  else
    v51 = 6;
  cnt = v51;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_147;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v53 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v53 )
    goto LABEL_147;
  v54 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)v53,
                                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v55 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v55 )
    goto LABEL_147;
  v56 = this;
  v57 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v55,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( this->fields.isMultiDeck )
  {
    multiBondsRoot = (UnityEngine_Component_o *)this->fields.multiBondsRoot;
    if ( !multiBondsRoot )
      goto LABEL_147;
    multiBondsPrefab = this->fields.multiBondsPrefab;
    transform = UnityEngine_Component__get_transform(multiBondsRoot, 0LL);
    v61 = (Il2CppObject *)multiBondsPrefab;
    v56 = this;
    Object_object = (BattleResultBondsDeckPerWaveComponent_o *)BaseMonoBehaviour__createObject_object_(
                                                                 (BaseMonoBehaviour_o *)this,
                                                                 v61,
                                                                 transform,
                                                                 0LL,
                                                                 (const MethodInfo_18B5978 *)Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    if ( this->fields.isMultiDeck )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
  IsWarBoard = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)battleData, 0LL, 0LL);
  if ( (IsWarBoard & 1) != 0 )
  {
    if ( !battleData )
      goto LABEL_147;
    IsWarBoard = BattleData__IsWarBoard(battleData, 0LL);
    v56->fields.isWarboard = IsWarBoard & 1;
    if ( (IsWarBoard & 1) != 0 )
    {
      if ( !battleResult )
        goto LABEL_147;
      rewardInfos = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.rewardInfos;
      v69 = BattleResultBondsComponent___c_TypeInfo;
      if ( (BYTE3(BattleResultBondsComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v69 = BattleResultBondsComponent___c_TypeInfo;
      }
      static_fields = v69->static_fields;
      _9__49_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__49_0;
      if ( !_9__49_0 )
      {
        if ( (BYTE3(v69->vtable._0_Equals.methodPtr) & 4) != 0 && !v69->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v69);
          static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
        }
        v72 = (Il2CppObject *)static_fields->__9;
        _9__49_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                        System_Func_QuestRewardInfo__bool__TypeInfo,
                                                                                        userSvtId,
                                                                                        v64,
                                                                                        v65,
                                                                                        v66);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__49_0,
          v72,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_QuestRewardInfo__bool___ctor__);
        v73 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        v73->__9__49_0 = (struct System_Func_QuestRewardInfo__bool__o *)_9__49_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v73->__9__49_0,
          (System_Int32_array **)_9__49_0,
          v74,
          v75,
          v76,
          v77,
          v78,
          v79);
      }
      v80 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              rewardInfos,
              (System_Func_TSource__bool__o *)_9__49_0,
              (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
      v81 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
              v80,
              (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
      if ( v81 )
      {
        v86 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v81;
        if ( v81->fields._size >= 1 )
        {
          v87 = BattleResultBondsComponent_TypeInfo;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v87 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v87->static_fields->GET_NEW_SVT_KEY, 0LL) )
          {
            v88 = BattleResultBondsComponent_TypeInfo;
            if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v88 = BattleResultBondsComponent_TypeInfo;
            }
            String_34837456 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_34837456(
                                                v88->static_fields->GET_NEW_SVT_KEY,
                                                0LL);
            if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !JsonManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            }
            v90 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                   String_34837456,
                                                                   (const MethodInfo_19D67B8 *)Method_JsonManager_DeserializeArray_QuestRewardInfo___);
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              v86,
              v90,
              (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
          }
          v91 = BattleResultBondsComponent_TypeInfo;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v91 = BattleResultBondsComponent_TypeInfo;
          }
          GET_NEW_SVT_KEY = v91->static_fields->GET_NEW_SVT_KEY;
          v93 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v86,
                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
          if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !JsonManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          }
          v94 = JsonManager__toJson(&v93->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_NEW_SVT_KEY, v94, 0LL);
        }
      }
      v95 = BattleResultBondsComponent___c_TypeInfo;
      getJoinSvts = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.getJoinSvts;
      if ( (BYTE3(BattleResultBondsComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v95 = BattleResultBondsComponent___c_TypeInfo;
      }
      v97 = v95->static_fields;
      _9__49_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v97->__9__49_1;
      if ( !_9__49_1 )
      {
        if ( (BYTE3(v95->vtable._0_Equals.methodPtr) & 4) != 0 && !v95->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v95);
          v97 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        }
        v99 = (Il2CppObject *)v97->__9;
        _9__49_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                        System_Func_GetSvts__bool__TypeInfo,
                                                                                        v82,
                                                                                        v83,
                                                                                        v84,
                                                                                        v85);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__49_1,
          v99,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_GetSvts__bool___ctor__);
        v100 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        v100->__9__49_1 = (struct System_Func_GetSvts__bool__o *)_9__49_1;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v100->__9__49_1,
          (System_Int32_array **)_9__49_1,
          v101,
          v102,
          v103,
          v104,
          v105,
          v106);
      }
      v107 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               getJoinSvts,
               (System_Func_TSource__bool__o *)_9__49_1,
               (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_GetSvts___);
      v108 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
               v107,
               (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_GetSvts___);
      if ( v108 )
      {
        v109 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v108;
        if ( v108->fields._size >= 1 )
        {
          v110 = BattleResultBondsComponent_TypeInfo;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v110 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v110->static_fields->GET_EXIST_SVT_KEY, 0LL) )
          {
            v111 = BattleResultBondsComponent_TypeInfo;
            if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v111 = BattleResultBondsComponent_TypeInfo;
            }
            v112 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_34837456(
                                     v111->static_fields->GET_EXIST_SVT_KEY,
                                     0LL);
            if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !JsonManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            }
            v113 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                    v112,
                                                                    (const MethodInfo_19D67B8 *)Method_JsonManager_DeserializeArray_GetSvts___);
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              v109,
              v113,
              (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_GetSvts__AddRange__);
          }
          v114 = BattleResultBondsComponent_TypeInfo;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v114 = BattleResultBondsComponent_TypeInfo;
          }
          GET_EXIST_SVT_KEY = v114->static_fields->GET_EXIST_SVT_KEY;
          v116 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v109,
                   (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_GetSvts__ToArray__);
          if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !JsonManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          }
          v117 = JsonManager__toJson(&v116->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_EXIST_SVT_KEY, v117, 0LL);
        }
      }
      UnityEngine_PlayerPrefs__Save(0LL);
      v56 = this;
    }
  }
  if ( !myDeck || (svts = myDeck->fields.svts) == 0LL )
LABEL_147:
    sub_B170D4();
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v120 = 0;
    v121 = 0;
    v172 = v57;
    v173 = v54;
    v171 = myDeck->fields.svts;
    while ( v120 < max_length )
    {
      v122 = svts->m_Items[v120];
      v123 = (BattleResultBondsComponent___c__DisplayClass49_0_o *)sub_B170CC(
                                                                     BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo,
                                                                     userSvtId,
                                                                     v64,
                                                                     v65,
                                                                     v66);
      BattleResultBondsComponent___c__DisplayClass49_0___ctor(v123, 0LL);
      if ( !v122 || !v123 )
        goto LABEL_147;
      userSvtId = (const MethodInfo *)v122->fields.userSvtId;
      v123->fields.userSvtId = (int64_t)userSvtId;
      if ( (__int64)userSvtId >= 1 )
      {
        if ( !v54 )
          goto LABEL_147;
        Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   v54,
                   (int64_t)userSvtId,
                   (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !Entity )
          goto LABEL_147;
        v125 = Entity;
        SvtId = (BattleResultBondsComponent_o *)UserServantEntity__getSvtId(Entity, 0LL);
        userSvtCol = BattleResultBondsComponent__getServantCollection(SvtId, oldCollects, (int32_t)SvtId, v127);
        v128 = UserServantEntity__getSvtId(v125, 0LL);
        if ( !v57 )
          goto LABEL_147;
        IsWarBoard = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v57,
                                v128,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !usrSvts )
          goto LABEL_147;
        v132 = usrSvts->max_length;
        v133 = (ServantEntity_o *)IsWarBoard;
        if ( v132 < 1 )
        {
LABEL_103:
          v138 = battleResult;
          v139 = v121;
          afterLimitCount = -1;
          v141 = -1;
          if ( !battleResult )
            goto LABEL_147;
        }
        else
        {
          v134 = 0;
          while ( 1 )
          {
            if ( v134 >= v132 )
              goto LABEL_148;
            v135 = usrSvts->m_Items[v134];
            if ( !v135 )
              goto LABEL_147;
            v136 = *(_OWORD *)&v135->fields.id.fields.fakeValue;
            *(_OWORD *)&v180.fields.currentCryptoKey = *(_OWORD *)&v135->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v180.fields.fakeValue = v136;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v179 = v180;
            IsWarBoard = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v179, 0LL);
            if ( IsWarBoard == v123->fields.userSvtId )
              break;
            v132 = usrSvts->max_length;
            if ( (int)++v134 >= v132 )
              goto LABEL_103;
          }
          v138 = battleResult;
          v139 = v121;
          if ( this->fields.isMultiDeck )
            BattleResultBondsComponent__UpdateAfterLimitCount(
              (BattleResultBondsComponent_o *)IsWarBoard,
              battleData,
              v135,
              v122,
              Master_WarQuestSelectionMaster,
              v137);
          IsWarBoard = UserServantEntity__getIconLimitCount((UserServantEntity_o *)v135, 0, 0LL);
          afterIconLimitCount = v135->fields.afterIconLimitCount;
          afterLimitCount = v135->fields.afterLimitCount;
          if ( afterIconLimitCount < 0 || (_DWORD)IsWarBoard == afterIconLimitCount )
            v141 = IsWarBoard;
          else
            v141 = v135->fields.afterIconLimitCount;
          if ( !battleResult )
            goto LABEL_147;
        }
        buddyPointInfos = v138->fields.buddyPointInfos;
        if ( buddyPointInfos )
        {
          v145 = 0LL;
          if ( *(_QWORD *)&buddyPointInfos->max_length && !isHideBuddyPointResult )
          {
            v146 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                        System_Func_BattleBuddyPointInfo__bool__TypeInfo,
                                                                                        userSvtId,
                                                                                        v64,
                                                                                        v129,
                                                                                        v130);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v146,
              (Il2CppObject *)v123,
              Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__,
              (const MethodInfo_2B6AB40 *)Method_System_Func_BattleBuddyPointInfo__bool___ctor__);
            IsWarBoard = (int64_t)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                    (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)buddyPointInfos,
                                    (System_Func_T__bool__o *)v146,
                                    (const MethodInfo_18B650C *)Method_BasicHelper_Find_BattleBuddyPointInfo___);
            v145 = (BattleBuddyPointInfo_o *)IsWarBoard;
          }
        }
        else
        {
          v145 = 0LL;
        }
        if ( this->fields.isMultiDeck )
        {
          if ( !Object_object )
            goto LABEL_147;
          BondsIcon = BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, userSvtId);
          if ( !BondsIcon )
            goto LABEL_147;
        }
        else
        {
          v148 = this->fields.collects;
          if ( !v148 )
            goto LABEL_147;
          if ( v139 >= v148->max_length )
            break;
          BondsIcon = v148->m_Items[v139];
          if ( !BondsIcon )
            goto LABEL_147;
        }
        BattleResultBondsIconComponent__setServantData(
          BondsIcon,
          userSvtCol,
          v125,
          v141,
          this->fields.baseFriendshipExp,
          Type == 0,
          afterLimitCount,
          v131);
        BattleResultBondsIconComponent__SetBuddyPointInfo(BondsIcon, v145, battleResult->fields.eventId, v149);
        if ( !v133 )
          goto LABEL_147;
        v150 = v139;
        if ( ServantEntity__checkIsHeroineSvt(v133, 0LL) && !UserServantEntity__IsAddFriendShipHeroine(v125, 0LL) )
        {
          updateFlg = this->fields.updateFlg;
          v158 = updateFlg | BattleResultBondsIconComponent__setNextServantData(BondsIcon, userSvtCol, v151);
          v56 = this;
          this->fields.updateFlg = v158 & 1;
          BondsIcon->fields.isHeroine = 1;
          v57 = v172;
          v54 = v173;
        }
        else
        {
          v57 = v172;
          v54 = v173;
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_147;
          EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                               MasterData_WarQuestSelectionMaster,
                               BondsIcon->fields.userId,
                               BondsIcon->fields.svtId,
                               0LL);
          v153 = this->fields.updateFlg;
          v156 = v153 | BattleResultBondsIconComponent__setNextServantData(BondsIcon, EntityDefinitely, v154);
          v56 = this;
          this->fields.updateFlg = v156 & 1;
        }
        svts = v171;
        BattleResultBondsIconComponent__changeGauge(BondsIcon, 0.0, v155);
        BattleResultBondsIconComponent__InitBuddyPointInfo(BondsIcon, v159);
        if ( v56->fields.isMultiDeck )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)BondsIcon, 0LL);
          if ( !gameObject )
            goto LABEL_147;
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        }
        v121 = v150 + 1;
      }
      max_length = svts->max_length;
      if ( (int)++v120 >= max_length )
        goto LABEL_139;
    }
LABEL_148:
    sub_B17100(IsWarBoard, userSvtId, v64);
    sub_B170A0();
  }
  v121 = 0;
LABEL_139:
  if ( v56->fields.isMultiDeck )
  {
    if ( Object_object )
    {
      BattleResultBondsDeckPerWaveComponent__SetWaveCount(Object_object, currentWave, maxWave, v65);
      v161 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object_object, 0LL);
      if ( v161 )
      {
        UnityEngine_GameObject__SetActive(v161, 1, 0LL);
        iconRoot = Object_object->fields.iconRoot;
        if ( iconRoot )
        {
          ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))iconRoot->klass->vtable._8_Reposition.method)(
            iconRoot,
            iconRoot->klass->vtable._9_ResetPosition.methodPtr);
          v163 = v56->fields.multiBondsRoot;
          if ( v163 )
          {
            ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))v163->klass->vtable._8_Reposition.method)(
              v163,
              v163->klass->vtable._9_ResetPosition.methodPtr);
            bondsList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v56->fields.bondsList;
            if ( bondsList )
            {
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                bondsList,
                (EventMissionProgressRequest_Argument_ProgressData_o *)Object_object,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__);
              return;
            }
          }
        }
      }
    }
    goto LABEL_147;
  }
  BattleResultBondsComponent__NormalBondsInit(v56, v121, cnt, Type == 0, battleResult, isHideBuddyPointResult, v67);
}


void __fastcall BattleResultBondsComponent__SkipUpdateValue(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  int max_length; // w8
  BattleResultBondsIconComponent_array *v7; // x20
  unsigned int v8; // w21
  BattleResultBondsIconComponent_o *v9; // x0

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
        sub_B17100(BondsIconArray, v4, v5);
        sub_B170A0();
      }
      v9 = v7->m_Items[v8];
      if ( !v9 )
        break;
      BattleResultBondsIconComponent__FinishBuddyPointInfoUpdate(v9, v4);
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_7;
    }
LABEL_9:
    sub_B170D4();
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
  __int64 v10; // x1
  struct BattleEntity_o *battle_ent; // x8
  int32_t FollowerType; // w0
  int32_t Type; // w0
  __int64 v14; // x21
  __int64 v15; // x22
  int32_t v16; // w21
  int32_t v17; // w0
  __int64 v18; // x21
  __int64 v19; // x22
  int32_t v20; // w21
  int32_t IconLimitCount; // w0
  int ServantImageLimitSealAfter; // w0
  __int64 v23; // x20
  __int64 v24; // x21
  int32_t v25; // w0
  int32_t afterLimitCount; // w20
  int32_t v27; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_40FA8E4 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, battleData);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_40FA8E4 = 1;
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
  v15 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v28.fields.currentCryptoKey = v15;
  *(_QWORD *)&v28.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v28, 0LL);
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userSvtData->fields.limitCount, 0LL);
  if ( !svtLimitImageMaster )
LABEL_30:
    sub_B170D4();
  if ( ServantLimitImageMaster__IsServantLimitCountSeal(svtLimitImageMaster, v16, v17, 0LL) )
  {
    v19 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v29.fields.currentCryptoKey = v19;
    *(_QWORD *)&v29.fields.fakeValue = v18;
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v29, 0LL);
    IconLimitCount = UserServantEntity__getIconLimitCount((UserServantEntity_o *)userSvtData, 0, 0LL);
    ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                   svtLimitImageMaster,
                                   v20,
                                   IconLimitCount,
                                   0LL);
    if ( ServantImageLimitSealAfter >= 11 )
    {
      userSvtData->fields.afterLimitCount = ServantImageLimitSealAfter;
    }
    else
    {
      userSvtData->fields.afterLimitCount = 2 * ServantImageLimitSealAfter;
      v24 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
      v23 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v30.fields.currentCryptoKey = v24;
      *(_QWORD *)&v30.fields.fakeValue = v23;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v30, 0LL);
      afterLimitCount = userSvtData->fields.afterLimitCount;
      v27 = v25;
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      ServantImageLimitSealAfter = ImageLimitCount__GetImageLimitCount(v27, afterLimitCount, 0LL);
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
  __int64 v6; // x2
  int max_length; // w8
  BattleResultBondsIconComponent_array *v8; // x19
  unsigned int v9; // w20
  BattleResultBondsIconComponent_o *v10; // x0

  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, method);
  if ( !BondsIconArray )
    goto LABEL_9;
  max_length = BondsIconArray->max_length;
  v8 = BondsIconArray;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        sub_B17100(BondsIconArray, v5, v6);
        sub_B170A0();
      }
      v10 = v8->m_Items[v9];
      if ( !v10 )
        break;
      BondsIconArray = (BattleResultBondsIconComponent_array *)BattleResultBondsIconComponent__changeGauge(v10, val, v5);
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_9:
    sub_B170D4();
  }
}


void __fastcall BattleResultBondsComponent___checkShow_b__67_0(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleFriendshipRewardInfo_array *showList; // x8
  __int64 showIndex; // x9
  BattleFriendshipRewardInfo_o *v6; // x8
  BattleResultComponent_o *parentComp; // x0
  BattleResultComponent_o *v8; // x0
  BattleResultComponent_o *v9; // x0
  UnityEngine_Component_o *multiDeckWindow; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *upRoot; // x0

  showList = this->fields.showList;
  if ( !showList )
    goto LABEL_14;
  showIndex = this->fields.showIndex;
  if ( (unsigned int)showIndex >= showList->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v6 = showList->m_Items[showIndex];
  if ( !v6 )
    goto LABEL_14;
  parentComp = this->fields.parentComp;
  if ( !parentComp )
    goto LABEL_14;
  BattleResultComponent__showServantRewardAction(parentComp, v6->fields.userSvtId, v6->fields.type, 0LL);
  v8 = this->fields.parentComp;
  ++this->fields.showIndex;
  if ( !v8 )
    goto LABEL_14;
  BattleResultComponent__setTouch(v8, 0, 0LL);
  v9 = this->fields.parentComp;
  if ( !v9 )
    goto LABEL_14;
  BattleResultComponent__setBg(v9, 0, 0LL);
  if ( this->fields.isMultiDeck )
  {
    multiDeckWindow = (UnityEngine_Component_o *)this->fields.multiDeckWindow;
    if ( !multiDeckWindow )
      goto LABEL_14;
  }
  else
  {
    multiDeckWindow = (UnityEngine_Component_o *)this->fields.window;
    if ( !multiDeckWindow )
      goto LABEL_14;
  }
  gameObject = UnityEngine_Component__get_gameObject(multiDeckWindow, 0LL);
  if ( !gameObject || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (upRoot = this->fields.upRoot) == 0LL) )
LABEL_14:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(upRoot, 0, 0LL);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v20; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x23
  BattleResultBondsComponent_c *v23; // x0
  UnityEngine_Object_o *v24; // x24
  bool v25; // w0
  const MethodInfo *v26; // x4
  UnityEngine_Transform_o *v27; // x21
  UnityEngine_Transform_o *v28; // x0
  float v29; // s8
  UnityEngine_Transform_o *v30; // x0
  float y; // s9
  UnityEngine_Transform_o *v32; // x0
  int v33; // s2
  float v34; // s1
  float v35; // s0
  struct System_Collections_Generic_List_GameObject__o *conflist; // x0
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FA8D9 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, text);
    sub_B16FFC(&BattleResultBondsComponent_TypeInfo, v13);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___, v14);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_16761, v18);
    byte_40FA8D9 = 1;
  }
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             this->fields.confPrefab,
             this->fields.confRoot,
             0LL,
             0LL);
  if ( !Object )
    goto LABEL_40;
  v20 = Object;
  transform = UnityEngine_GameObject__get_transform(Object, 0LL);
  if ( !transform )
    goto LABEL_40;
  v37.fields.z = 0.0;
  v37.fields.y = -112.0 - posY;
  v37.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition(transform, v37, 0LL);
  ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                v20,
                                                (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_Dropdown_DropdownItem, 0LL, 0LL) )
  {
    if ( !ComponentInChildren_Dropdown_DropdownItem )
      goto LABEL_40;
    if ( isCoin )
    {
      UILabel__set_overflowMethod((UILabel_o *)ComponentInChildren_Dropdown_DropdownItem, 2, 0LL);
      UILabel__set_text((UILabel_o *)ComponentInChildren_Dropdown_DropdownItem, text, 0LL);
      v23 = BattleResultBondsComponent_TypeInfo;
      if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
        v23 = BattleResultBondsComponent_TypeInfo;
      }
      UILabel__SetCondensedScale(
        (UILabel_o *)ComponentInChildren_Dropdown_DropdownItem,
        v23->static_fields->CONF_LABEL_MAX_WIDTH - 36,
        0LL);
    }
    else
    {
      if ( isSaintGraph )
        UIWidget__set_height((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 100, 0LL);
      UILabel__set_text((UILabel_o *)ComponentInChildren_Dropdown_DropdownItem, text, 0LL);
    }
  }
  v24 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                  v20,
                                  (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v25 = UnityEngine_Object__op_Inequality(v24, 0LL, 0LL);
  if ( (iconImageId & 0x80000000) == 0 && v25 )
  {
    if ( isCoin )
    {
      if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetCoin((UISprite_o *)v24, iconImageId, 0LL);
    }
    else
    {
      if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetItem((UISprite_o *)v24, iconImageId, 0LL);
    }
    BattleResultBondsComponent__CreateRewardEffect(
      this,
      this->fields.resultAssetData,
      (UISprite_o *)v24,
      (System_String_o *)StringLiteral_16761,
      v26);
    if ( ComponentInChildren_Dropdown_DropdownItem )
    {
      v27 = UnityEngine_Component__get_transform(
              (UnityEngine_Component_o *)ComponentInChildren_Dropdown_DropdownItem,
              0LL);
      v28 = UnityEngine_Component__get_transform(
              (UnityEngine_Component_o *)ComponentInChildren_Dropdown_DropdownItem,
              0LL);
      if ( v28 )
      {
        LODWORD(v29) = (unsigned int)UnityEngine_Transform__get_localPosition(v28, 0LL);
        v30 = UnityEngine_Component__get_transform(
                (UnityEngine_Component_o *)ComponentInChildren_Dropdown_DropdownItem,
                0LL);
        if ( v30 )
        {
          localPosition = UnityEngine_Transform__get_localPosition(v30, 0LL);
          y = localPosition.fields.y;
          v32 = UnityEngine_Component__get_transform(
                  (UnityEngine_Component_o *)ComponentInChildren_Dropdown_DropdownItem,
                  0LL);
          if ( v32 )
          {
            *(UnityEngine_Vector3_o *)(&v33 - 2) = UnityEngine_Transform__get_localPosition(v32, 0LL);
            if ( v27 )
            {
              v34 = y;
              v35 = v29 + 36.0;
              UnityEngine_Transform__set_localPosition(v27, *(UnityEngine_Vector3_o *)(&v33 - 2), 0LL);
              goto LABEL_38;
            }
          }
        }
      }
    }
LABEL_40:
    sub_B170D4();
  }
LABEL_38:
  conflist = this->fields.conflist;
  if ( !conflist )
    goto LABEL_40;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)conflist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


void __fastcall BattleResultBondsComponent__checkBondsUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1
  System_Int32_array **BondsIconArray; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  _BOOL8 v36; // x0
  __int64 v37; // x1
  System_String_array **v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  int32_t colIndex; // w9
  __int64 v42; // x8
  __int64 v43; // x9
  __int64 v44; // x10
  PlayMakerFSM_o *myFsm; // x0
  __int64 *v46; // x8
  __int64 v47; // x20
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 *v54; // x21
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *conflist; // x0
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_GameObject__o *v57; // x0
  UnityEngine_GameObject_o *upRoot; // x0
  UnityEngine_Object_o *levelUpSimpleAnim; // x22
  SimpleAnimation_o *v60; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v63; // x22
  unsigned __int64 v64; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *levelUpAnim; // x22
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  UnityEngine_Animation_o *v73; // x0
  UnityEngine_AnimationState_o *v74; // x0
  UnityEngine_Animation_o *v75; // x0
  SimpleAnimation_o *v76; // x0
  __int64 v77; // x9
  __int64 v78; // x8
  __int64 v79; // x9
  struct BattleResultBondsIconComponent_o *v80; // x1
  UnityEngine_Object_o *figureMoveRoot; // x21
  UnityEngine_Component_o *v82; // x0
  System_Int32_array **gameObject; // x0
  UnityEngine_GameObject_o **v84; // x21
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  UnityEngine_Component_o *figureRoot; // x0
  System_Int32_array **v96; // x0
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t svtId; // w22
  int32_t svtLimit; // w23
  BattleResultBondsFigureComponent_o *bondsFigure; // x19
  UnityEngine_GameObject_o *v107; // x21
  System_Action_o *v108; // x24
  const MethodInfo *v109; // [xsp+0h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_T__o v110; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v111; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FA8D7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v13);
    sub_B16FFC(&BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo, v14);
    sub_B16FFC(&Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__, v15);
    sub_B16FFC(&BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_16747, v17);
    sub_B16FFC(&StringLiteral_3080, v18);
    sub_B16FFC(&StringLiteral_5481, v19);
    sub_B16FFC(&StringLiteral_3082, v20);
    byte_40FA8D7 = 1;
  }
  memset(&v111, 0, sizeof(v111));
  v21 = sub_B170CC(BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo, method, v2, v3, v4);
  BattleResultBondsComponent___c__DisplayClass61_0___ctor(
    (BattleResultBondsComponent___c__DisplayClass61_0_o *)v21,
    0LL);
  if ( !v21 )
    goto LABEL_70;
  *(_QWORD *)(v21 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  BondsIconArray = (System_Int32_array **)BattleResultBondsComponent__GetBondsIconArray(this, v28);
  *(_QWORD *)(v21 + 24) = BondsIconArray;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 24), BondsIconArray, v30, v31, v32, v33, v34, v35);
  colIndex = this->fields.colIndex;
  v42 = *(_QWORD *)(v21 + 24);
  *(_DWORD *)(v21 + 32) = colIndex;
  if ( !v42 )
    goto LABEL_70;
  while ( 1 )
  {
    if ( colIndex >= *(_DWORD *)(v42 + 24) )
    {
      myFsm = this->fields.myFsm;
      if ( this->fields.openBoundsFlg )
      {
        if ( !myFsm )
          goto LABEL_70;
        if ( this->fields.isMultiDeck )
          v46 = &StringLiteral_3082;
        else
          v46 = &StringLiteral_5481;
      }
      else
      {
        if ( !myFsm )
          goto LABEL_70;
        v46 = &StringLiteral_3080;
      }
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v46, 0LL);
      return;
    }
    this->fields.colIndex = colIndex;
    v42 = *(_QWORD *)(v21 + 24);
    if ( !v42 )
      goto LABEL_70;
    v43 = *(int *)(v21 + 32);
    if ( (unsigned int)v43 >= *(_DWORD *)(v42 + 24) )
      goto LABEL_71;
    v44 = *(_QWORD *)(v42 + 8 * v43 + 32);
    if ( !v44 )
      goto LABEL_70;
    if ( *(_BYTE *)(v44 + 104) && *(_DWORD *)(v44 + 152) != *(_DWORD *)(v44 + 160) )
      break;
    colIndex = v43 + 1;
    *(_DWORD *)(v21 + 32) = colIndex;
  }
  v47 = sub_B170CC(BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo, v37, v38, v39, v40);
  BattleResultBondsComponent___c__DisplayClass61_1___ctor(
    (BattleResultBondsComponent___c__DisplayClass61_1_o *)v47,
    0LL);
  if ( !v47 )
    goto LABEL_70;
  *(_QWORD *)(v47 + 24) = v21;
  v54 = (__int64 *)(v47 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v47 + 24), (System_Int32_array **)v21, v48, v49, v50, v51, v52, v53);
  conflist = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.conflist;
  if ( !conflist )
    goto LABEL_70;
  if ( conflist->fields._size < 1 )
    goto LABEL_32;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v110,
    conflist,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v111 = v110;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v111,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v111.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v111,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v57 = this->fields.conflist;
  if ( !v57 )
    goto LABEL_70;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v57,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
LABEL_32:
  upRoot = this->fields.upRoot;
  if ( !upRoot )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive(upRoot, 1, 0LL);
  levelUpSimpleAnim = (UnityEngine_Object_o *)this->fields.levelUpSimpleAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(levelUpSimpleAnim, 0LL, 0LL) )
  {
    v60 = this->fields.levelUpSimpleAnim;
    if ( v60 )
    {
      Item = SimpleAnimation__get_Item(v60, (System_String_o *)StringLiteral_16747, 0LL);
      if ( Item )
      {
        klass = Item->klass;
        v63 = Item;
        if ( *(_WORD *)&Item->klass->_2.bitflags1 )
        {
          v64 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v64;
            p_offset += 2;
            if ( v64 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
              goto LABEL_43;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
        }
        else
        {
LABEL_43:
          p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(v63, *(_QWORD *)(p_method + 8), 0.0);
        v76 = this->fields.levelUpSimpleAnim;
        if ( v76 )
        {
          v36 = SimpleAnimation__Play_16380456(v76, (System_String_o *)StringLiteral_16747, 0LL);
          goto LABEL_55;
        }
      }
    }
LABEL_70:
    sub_B170D4();
  }
  levelUpAnim = (UnityEngine_Object_o *)this->fields.levelUpAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v36 = UnityEngine_Object__op_Inequality(levelUpAnim, 0LL, 0LL);
  if ( v36 )
  {
    v73 = this->fields.levelUpAnim;
    if ( !v73 )
      goto LABEL_70;
    v74 = UnityEngine_Animation__get_Item(v73, (System_String_o *)StringLiteral_16747, 0LL);
    if ( !v74 )
      goto LABEL_70;
    UnityEngine_AnimationState__set_time(v74, 0.0, 0LL);
    v75 = this->fields.levelUpAnim;
    if ( !v75 )
      goto LABEL_70;
    v36 = UnityEngine_Animation__Play_49744236(v75, (System_String_o *)StringLiteral_16747, 0LL);
  }
LABEL_55:
  v77 = *v54;
  if ( !*v54 )
    goto LABEL_70;
  v78 = *(_QWORD *)(v77 + 24);
  if ( !v78 )
    goto LABEL_70;
  v79 = *(int *)(v77 + 32);
  if ( (unsigned int)v79 >= *(_DWORD *)(v78 + 24) )
  {
LABEL_71:
    sub_B17100(v36, v37, v38);
    sub_B170A0();
  }
  v80 = *(struct BattleResultBondsIconComponent_o **)(v78 + 8 * v79 + 32);
  this->fields.openCollect = v80;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.openCollect,
    (System_Int32_array **)v80,
    v38,
    v68,
    v69,
    v70,
    v71,
    v72);
  figureMoveRoot = (UnityEngine_Object_o *)this->fields.figureMoveRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(figureMoveRoot, 0LL, 0LL) )
  {
    v82 = (UnityEngine_Component_o *)this->fields.figureMoveRoot;
    if ( !v82 )
      goto LABEL_70;
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject(v82, 0LL);
    *(_QWORD *)(v47 + 16) = gameObject;
    v84 = (UnityEngine_GameObject_o **)(v47 + 16);
    sub_B16F98((BattleServantConfConponent_o *)(v47 + 16), gameObject, v85, v86, v87, v88, v89, v90);
    if ( !*(_QWORD *)(v47 + 16) )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)(v47 + 16), 0, 0LL);
  }
  else
  {
    figureRoot = (UnityEngine_Component_o *)this->fields.figureRoot;
    if ( !figureRoot )
      goto LABEL_70;
    v96 = (System_Int32_array **)UnityEngine_Component__get_gameObject(figureRoot, 0LL);
    *(_QWORD *)(v47 + 16) = v96;
    v84 = (UnityEngine_GameObject_o **)(v47 + 16);
    sub_B16F98((BattleServantConfConponent_o *)(v47 + 16), v96, v97, v98, v99, v100, v101, v102);
  }
  openCollect = this->fields.openCollect;
  if ( !openCollect )
    goto LABEL_70;
  svtId = openCollect->fields.svtId;
  svtLimit = openCollect->fields.svtLimit;
  bondsFigure = this->fields.bondsFigure;
  v107 = *v84;
  v108 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v91, v92, v93, v94);
  System_Action___ctor(
    v108,
    (Il2CppObject *)v47,
    Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__,
    0LL);
  if ( !bondsFigure )
    goto LABEL_70;
  BattleResultBondsFigureComponent__SetupFigure(bondsFigure, v107, svtId, svtLimit, 7, 0, 51, v108, v109);
}


void __fastcall BattleResultBondsComponent__checkShow(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleFriendshipRewardInfo_array *showList; // x8
  __int64 v6; // x8
  SummonAssetManager_o *Instance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x21
  SummonAssetManager_o *v13; // x0
  BattleResultComponent_o *parentComp; // x0
  BattleResultComponent_o *v15; // x0
  BattleResultComponent_o *v16; // x0
  UnityEngine_Component_o *multiDeckWindow; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *upRoot; // x0
  BattleResultComponent_o *v20; // x0

  if ( (byte_40FA8DD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BattleResultBondsComponent__checkShow_b__67_0__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v4);
    byte_40FA8DD = 1;
  }
  showList = this->fields.showList;
  if ( showList )
  {
    v6 = *(_QWORD *)&showList->max_length;
    if ( v6 )
    {
      if ( this->fields.showIndex < (int)v6 )
      {
        this->fields.tempSaveTimeScale = UnityEngine_Time__get_timeScale(0LL);
        UnityEngine_Time__set_timeScale(1.0, 0LL);
        Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
        v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
        System_Action___ctor(v12, (Il2CppObject *)this, Method_BattleResultBondsComponent__checkShow_b__67_0__, 0LL);
        if ( Instance )
        {
          SummonAssetManager__LoadSummonAssets(Instance, v12, 0LL);
          return;
        }
        goto LABEL_21;
      }
      v13 = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      if ( !v13 )
        goto LABEL_21;
      SummonAssetManager__UnloadSummonAssets(v13, 0LL);
    }
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp )
    goto LABEL_21;
  BattleResultComponent__ResetPlayScreenTouch(parentComp, 0LL);
  v15 = this->fields.parentComp;
  if ( !v15 )
    goto LABEL_21;
  BattleResultComponent__setTouch(v15, 1, 0LL);
  v16 = this->fields.parentComp;
  if ( !v16 )
    goto LABEL_21;
  BattleResultComponent__setBg(v16, 1, 0LL);
  if ( this->fields.isMultiDeck )
  {
    multiDeckWindow = (UnityEngine_Component_o *)this->fields.multiDeckWindow;
    if ( !multiDeckWindow )
      goto LABEL_21;
  }
  else
  {
    multiDeckWindow = (UnityEngine_Component_o *)this->fields.window;
    if ( !multiDeckWindow )
      goto LABEL_21;
  }
  gameObject = UnityEngine_Component__get_gameObject(multiDeckWindow, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (upRoot = this->fields.upRoot) == 0LL)
    || (UnityEngine_GameObject__SetActive(upRoot, 1, 0LL), (v20 = this->fields.parentComp) == 0LL) )
  {
LABEL_21:
    sub_B170D4();
  }
  BattleResultComponent__showServantRewardAction(v20, 0LL, 1, 0LL);
}


void __fastcall BattleResultBondsComponent__closeBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_UIUnityRenderer__o *effectUIList; // x20
  int size; // w8
  int i; // w21
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  BattleResultComponent_o *parentComp; // x0
  const MethodInfo *v14; // x1
  BattleResultBondsFigureComponent_o *bondsFigure; // x0
  struct BattleWindowComponent_o *confwindow; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  BattleWindowComponent_EndCall_o *v21; // x21

  if ( (byte_40FA8DE & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultBondsComponent_endCloseBondUp__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIUnityRenderer__Clear__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    byte_40FA8DE = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v11 = (UnityEngine_Component_o *)effectUIList->fields._items->m_Items[i];
      if ( !v11 )
        goto LABEL_20;
      gameObject = UnityEngine_Component__get_gameObject(v11, 0LL);
      if ( !gameObject )
        goto LABEL_20;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      effectUIList = this->fields.effectUIList;
      if ( !effectUIList )
        goto LABEL_20;
      size = effectUIList->fields._size;
    }
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.effectUIList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UIUnityRenderer__Clear__);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__setTouch(parentComp, 0, 0LL), (bondsFigure = this->fields.bondsFigure) == 0LL)
    || (BattleResultBondsFigureComponent__DestroyFigure(bondsFigure, v14),
        confwindow = this->fields.confwindow,
        v21 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v17, v18, v19, v20),
        BattleWindowComponent_EndCall___ctor(
          v21,
          (Il2CppObject *)this,
          Method_BattleResultBondsComponent_endCloseBondUp__,
          0LL),
        !confwindow) )
  {
LABEL_20:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))confwindow->klass->vtable._12_Close.method)(
    confwindow,
    v21,
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
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  __int64 v12; // x21
  BattleResultBondsIconComponent_array *v13; // x20
  il2cpp_array_size_t v14; // w22
  BattleResultBondsIconComponent_o *v15; // x8
  ServantFaceIconComponent_o *faceIcon; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA8E1 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_5481, v9);
    byte_40FA8E1 = 1;
  }
  this->fields.resultAssetData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.resultAssetData, 0LL, v2, v3, v4, v5, v6, v7);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v10);
    if ( !BondsIconArray )
      goto LABEL_18;
    v12 = *(_QWORD *)&BondsIconArray->max_length;
    v13 = BondsIconArray;
    if ( (int)v12 >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        v15 = v13->m_Items[v14];
        if ( !v15 )
          break;
        faceIcon = v15->fields.faceIcon;
        if ( !faceIcon )
          break;
        ServantFaceIconComponent__ClearFaceAtlas(faceIcon, 0LL);
        if ( (int)++v14 >= (int)v12 )
          goto LABEL_15;
        if ( v14 >= v13->max_length )
        {
          sub_B17100(v17, v18, v19);
          sub_B170A0();
        }
      }
LABEL_18:
      sub_B170D4();
    }
  }
LABEL_15:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_18;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattleResultBondsComponent__endCloseBondUp(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA8DF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FA8DF = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultBondsComponent__endMoveFigure(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  System_Text_StringBuilder_o *v41; // x20
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  BattleResultMasterUpStatusComponent_o *lvComp; // x0
  int32_t friendshipRank; // w22
  int32_t svtId; // w21
  clsQuestCheck_o *v46; // x0
  System_Collections_Generic_List_QuestEntity__o *v47; // x0
  int v48; // w28
  Il2CppObject *current; // x23
  System_String_o *v50; // x0
  System_String_o *v51; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v53; // x1
  const MethodInfo *v54; // x5
  struct BattleResultBondsIconComponent_o *v55; // x8
  int32_t svtLimit; // w23
  WebViewManager_o *Instance; // x0
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t ServantLimitCountSealAfter; // w23
  System_String_o *v60; // x0
  const MethodInfo *v61; // x5
  System_String_o *v62; // x0
  const MethodInfo *v63; // x5
  struct BattleResultBondsIconComponent_o *v64; // x8
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  System_String_o *v69; // x0
  const MethodInfo *v70; // x5
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v71; // x22
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  struct BattleFriendshipRewardInfo_array *rewardInfos; // x20
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v77; // x23
  int v78; // w21
  int CONF_SERVANT_COIN_PLUS_HEIGHT; // w25
  struct BattleResultBondsIconComponent_o *v80; // x8
  BattleFriendshipRewardInfo_o *v81; // x24
  GiftEntity_o *GiftEntity; // x0
  GiftEntity_o *v83; // x25
  WarEntity_o *v84; // x0
  System_String_o *v85; // x26
  Il2CppObject *v86; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v87; // x0
  WarEntity_o *v88; // x0
  ServantEntity_o *v89; // x26
  UserServantCollectionMaster_o *v90; // x27
  int64_t UserId; // x0
  ServantLimitImageMaster_o *v92; // x0
  int32_t v93; // w0
  int32_t v94; // w1
  System_String_o *v95; // x0
  const MethodInfo *v96; // x5
  bool v97; // w26
  Il2CppObject *Name; // x26
  System_String_o *v99; // x0
  System_String_o *v100; // x27
  int32_t IconImageId; // w0
  const MethodInfo *v102; // x5
  BattleResultBondsComponent_c *v103; // x0
  struct BattleFriendshipRewardInfo_array *v104; // x0
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  UIWidget_o *confSprite; // x0
  int v112; // w20
  UnityEngine_Transform_o *confRoot; // x21
  unsigned int localPosition; // s0
  int v115; // w8
  float v116; // s1
  int v117; // w20
  float v118; // s1
  int v119; // s2
  UnityEngine_Component_o *confwindow; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattleWindowComponent_o *v122; // x0
  UILabel_o *rankupConfLabel; // x21
  System_String_o *v124; // x0
  struct BattleWindowComponent_o *v125; // x20
  __int64 v126; // x1
  __int64 v127; // x2
  __int64 v128; // x3
  __int64 v129; // x4
  BattleWindowComponent_EndCall_o *v130; // x21
  System_Text_StringBuilder_o *v131; // [xsp+8h] [xbp-B8h]
  int32_t key; // [xsp+14h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_T__o v133; // [xsp+18h] [xbp-A8h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+30h] [xbp-90h] BYREF
  System_String_o *countText; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v136; // [xsp+40h] [xbp-80h] BYREF
  System_String_o *nameText; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_40FA8DB & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultBondsComponent_openedBondUp__, method);
    sub_B16FFC(&BattleResultBondsComponent_TypeInfo, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_ItemMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v13);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v18);
    sub_B16FFC(&int_TypeInfo, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__, v23);
    sub_B16FFC(&System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo, v24);
    sub_B16FFC(&LocalizationManager_TypeInfo, v25);
    sub_B16FFC(&NetworkManager_TypeInfo, v26);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v27);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v29);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v30);
    sub_B16FFC(&SoundManager_TypeInfo, v31);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v32);
    sub_B16FFC(&StringLiteral_11069, v33);
    sub_B16FFC(&StringLiteral_11072, v34);
    sub_B16FFC(&StringLiteral_11071, v35);
    sub_B16FFC(&StringLiteral_11068, v36);
    sub_B16FFC(&StringLiteral_11066, v37);
    sub_B16FFC(&StringLiteral_23480, v38);
    sub_B16FFC(&StringLiteral_1, v39);
    sub_B16FFC(&StringLiteral_11067, v40);
    byte_40FA8DB = 1;
  }
  memset(&v136, 0, sizeof(v136));
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  v41 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, method, v2, v3, v4);
  System_Text_StringBuilder___ctor(v41, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
  openCollect = this->fields.openCollect;
  if ( !openCollect )
    goto LABEL_127;
  lvComp = this->fields.lvComp;
  if ( !lvComp )
    goto LABEL_127;
  friendshipRank = openCollect->fields.friendshipRank;
  svtId = openCollect->fields.svtId;
  BattleResultMasterUpStatusComponent__setData(lvComp, friendshipRank, openCollect->fields.nextFriendShipRank, 0LL);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v46 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v46 )
    goto LABEL_127;
  v131 = v41;
  v47 = clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(v46, svtId, friendshipRank, 8, 0LL);
  if ( v47 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v133,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v47,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    v48 = 0;
    v136 = v133;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v136,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
    {
      current = v136.fields.current;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v50 = LocalizationManager__Get((System_String_o *)StringLiteral_11069, 0LL);
      if ( !current )
        sub_B170D4();
      v51 = v50;
      QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
      v53 = System_String__Format(v51, QuestName, 0LL);
      BattleResultBondsComponent__addConfObject(this, v53, (float)v48 * 22.0, -1, 0, 0, v54);
      v48 += 3;
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v136,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  }
  else
  {
    v48 = 0;
  }
  v55 = this->fields.openCollect;
  if ( !v55 )
    goto LABEL_127;
  svtLimit = v55->fields.svtLimit;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_127;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_127;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 MasterData_WarQuestSelectionMaster,
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
    v60 = LocalizationManager__Get((System_String_o *)StringLiteral_11072, 0LL);
    BattleResultBondsComponent__addConfObject(this, v60, (float)v48 * 22.0, -1, 0, 1, v61);
    v48 += 4;
  }
  else
  {
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    if ( ServantCommentManager__IsOpenByServantFriendShip_30494732(
           svtId,
           friendshipRank,
           ServantLimitCountSealAfter,
           0LL) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = LocalizationManager__Get((System_String_o *)StringLiteral_11071, 0LL);
      BattleResultBondsComponent__addConfObject(this, v62, (float)v48 * 22.0, -1, 0, 0, v63);
      v48 += 2;
    }
  }
  v64 = this->fields.openCollect;
  if ( !v64 )
    goto LABEL_127;
  if ( ServantVoiceMaster__isOpenByServantFriendShip(svtId, v64->fields.maxLimitCount, friendshipRank, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v69 = LocalizationManager__Get((System_String_o *)StringLiteral_11066, 0LL);
    BattleResultBondsComponent__addConfObject(this, v69, (float)v48 * 22.0, -1, 0, 0, v70);
    v48 += 2;
  }
  if ( this->fields.rewardInfos )
  {
    v71 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo,
                                                                                                    v65,
                                                                                                    v66,
                                                                                                    v67,
                                                                                                    v68);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v71,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ItemMaster___);
    rewardInfos = this->fields.rewardInfos;
    if ( !rewardInfos )
      goto LABEL_127;
    max_length = rewardInfos->max_length;
    if ( max_length < 1 )
    {
      CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
      if ( !v71 )
        goto LABEL_127;
    }
    else
    {
      key = svtId;
      v77 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      v78 = 0;
      CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
      do
      {
        if ( v78 >= (unsigned int)max_length )
        {
          sub_B17100(Master_WarQuestSelectionMaster, v73, v74);
          sub_B170A0();
        }
        v80 = this->fields.openCollect;
        if ( !v80 )
          goto LABEL_127;
        v81 = rewardInfos->m_Items[v78];
        if ( !v81 )
          goto LABEL_127;
        if ( v80->fields.svtId == v81->fields.targetSvtId )
        {
          GiftEntity = BattleFriendshipRewardInfo__getGiftEntity(v81, 0LL);
          if ( !GiftEntity )
            goto LABEL_127;
          v83 = GiftEntity;
          GiftEntity__GetInfo(GiftEntity, &nameText, &countText, 0LL);
          if ( GiftEntity__isQp(v83, 0LL) )
          {
            nameText = countText;
            countText = (System_String_o *)StringLiteral_1;
          }
          if ( v83->fields.type == 2 )
          {
            if ( !v77 )
              goto LABEL_127;
            v84 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                    v77,
                    v83->fields.objectId,
                    (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( v84 && v84->fields.bannerId == 29 )
            {
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v85 = LocalizationManager__Get((System_String_o *)StringLiteral_11067, 0LL);
              LODWORD(v133.fields.list) = v83->fields.num;
              v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v133);
              countText = System_String__Format(v85, v86, 0LL);
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              v87 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !v87 )
                goto LABEL_127;
              v88 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                      v87,
                      key,
                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( v88 )
              {
                v89 = (ServantEntity_o *)v88;
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                v90 = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                }
                UserId = NetworkManager__get_UserId(0LL);
                if ( !v90 )
                  goto LABEL_127;
                if ( UserServantCollectionMaster__TryGetEntity(v90, &entity, UserId, key, 0LL) )
                {
                  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  }
                  v92 = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                  if ( !entity )
                    goto LABEL_127;
                  if ( !v92 )
                    goto LABEL_127;
                  v93 = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                          v92,
                          key,
                          entity->fields.maxLimitCount,
                          0LL);
                  if ( !entity )
                    goto LABEL_127;
                  if ( v93 == entity->fields.maxLimitCount )
                    v94 = -1;
                  else
                    v94 = v93;
                }
                else
                {
                  v94 = -1;
                }
                Name = (Il2CppObject *)ServantEntity__getName(v89, v94, -1, 0LL);
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v99 = LocalizationManager__Get((System_String_o *)StringLiteral_11068, 0LL);
                nameText = System_String__Format_43739268(v99, (Il2CppObject *)nameText, Name, 0LL);
              }
              v97 = 1;
            }
            else
            {
              v97 = 0;
            }
            v100 = System_String__Format_43739268(
                     (System_String_o *)StringLiteral_23480,
                     (Il2CppObject *)nameText,
                     (Il2CppObject *)countText,
                     0LL);
            IconImageId = GiftEntity__getIconImageId(v83, 0LL);
            BattleResultBondsComponent__addConfObject(this, v100, (float)v48 * 22.0, IconImageId, v97, 0, v102);
          }
          else
          {
            v95 = System_String__Format_43739268(
                    (System_String_o *)StringLiteral_23480,
                    (Il2CppObject *)nameText,
                    (Il2CppObject *)countText,
                    0LL);
            BattleResultBondsComponent__addConfObject(this, v95, (float)v48 * 22.0, -1, 0, 0, v96);
          }
          v103 = BattleResultBondsComponent_TypeInfo;
          v48 += 2;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v103 = BattleResultBondsComponent_TypeInfo;
          }
          CONF_SERVANT_COIN_PLUS_HEIGHT = v103->static_fields->CONF_SERVANT_COIN_PLUS_HEIGHT;
          Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)BattleFriendshipRewardInfo__isShow(v81, 0LL);
          if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
          {
            if ( !v71 )
              goto LABEL_127;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v71,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v81,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__);
          }
        }
        max_length = rewardInfos->max_length;
        ++v78;
      }
      while ( v78 < max_length );
      if ( !v71 )
LABEL_127:
        sub_B170D4();
    }
    v104 = (struct BattleFriendshipRewardInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v71,
                                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
    this->fields.showList = v104;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.showList,
      (System_Int32_array **)v104,
      v105,
      v106,
      v107,
      v108,
      v109,
      v110);
    this->fields.showIndex = 0;
  }
  else
  {
    CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
  }
  confSprite = (UIWidget_o *)this->fields.confSprite;
  if ( v48 )
    v112 = v48;
  else
    v112 = 1;
  if ( !confSprite )
    goto LABEL_127;
  UIWidget__set_height(confSprite, CONF_SERVANT_COIN_PLUS_HEIGHT + 22 * v112 + 120, 0LL);
  confRoot = this->fields.confRoot;
  if ( !confRoot )
    goto LABEL_127;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.confRoot, 0LL);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT >= 0 )
    v115 = CONF_SERVANT_COIN_PLUS_HEIGHT;
  else
    v115 = CONF_SERVANT_COIN_PLUS_HEIGHT + 1;
  v116 = (float)v112;
  v117 = v115 >> 1;
  v118 = (float)(v116 * 11.0) + (float)(v115 >> 1);
  v119 = 0;
  UnityEngine_Transform__set_localPosition(confRoot, *(UnityEngine_Vector3_o *)&localPosition, 0LL);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT )
  {
    confwindow = (UnityEngine_Component_o *)this->fields.confwindow;
    if ( !confwindow )
      goto LABEL_127;
    gameObject = UnityEngine_Component__get_gameObject(confwindow, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v117, 0LL);
    v122 = this->fields.confwindow;
    if ( !v122 )
      goto LABEL_127;
    ((void (__fastcall *)(struct BattleWindowComponent_o *, Il2CppMethodPointer))v122->klass->vtable._7_setInitialPos.method)(
      v122,
      v122->klass->vtable._8_setInitialPosIfDefaultIsZero.methodPtr);
  }
  if ( !v131 )
    goto LABEL_127;
  rankupConfLabel = this->fields.rankupConfLabel;
  v124 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v131->klass->vtable._3_ToString.method)(
                              v131,
                              v131->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !rankupConfLabel )
    goto LABEL_127;
  UILabel__set_text(rankupConfLabel, v124, 0LL);
  v125 = this->fields.confwindow;
  v130 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v126, v127, v128, v129);
  BattleWindowComponent_EndCall___ctor(
    v130,
    (Il2CppObject *)this,
    Method_BattleResultBondsComponent_openedBondUp__,
    0LL);
  if ( !v125 )
    goto LABEL_127;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v125->klass->vtable._10_Open.method)(
    v125,
    v130,
    v125->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattleResultBondsComponent__finishUpdateValue(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v5; // x1
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x2
  int max_length; // w8
  BattleResultBondsIconComponent_array *v10; // x20
  unsigned int v11; // w21
  Il2CppClass **v12; // x22
  BattleResultBondsIconComponent_o *v13; // x0
  BattleResultBondsIconComponent_o **v14; // x22
  BattleResultBondsIconComponent_o *v15; // t1
  SePlayer_o *MeterSePlayer; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA8D6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9268, method);
    sub_B16FFC(&iTween_TypeInfo, v3);
    byte_40FA8D6 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_18552136(gameObject, 0LL);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v5);
  if ( !BondsIconArray )
    goto LABEL_19;
  max_length = BondsIconArray->max_length;
  v10 = BondsIconArray;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        goto LABEL_18;
      v12 = &v10->obj.klass + (int)v11;
      v15 = (BattleResultBondsIconComponent_o *)v12[4];
      v14 = (BattleResultBondsIconComponent_o **)(v12 + 4);
      v13 = v15;
      if ( !v15 )
        break;
      BondsIconArray = (BattleResultBondsIconComponent_array *)BattleResultBondsIconComponent__changeGauge(v13, 1.0, v7);
      if ( v11 >= v10->max_length )
      {
LABEL_18:
        sub_B17100(BondsIconArray, v7, v8);
        sub_B170A0();
      }
      if ( !*v14 )
        break;
      BattleResultBondsIconComponent__LayoutFriendshipValue(*v14, v7);
      max_length = v10->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_14;
    }
LABEL_19:
    sub_B170D4();
  }
LABEL_14:
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  myFsm = this->fields.myFsm;
  this->fields.bondsCountUp = 0;
  if ( !myFsm )
    goto LABEL_19;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9268, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
        sub_B17100(this, collects, *(_QWORD *)&svtId);
        sub_B170A0();
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
    sub_B170D4();
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( !deck || (svts = deck->fields.svts) == 0LL )
LABEL_12:
    sub_B170D4();
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0LL;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= max_length )
    {
      sub_B17100(this, deck, *(_QWORD *)&index);
      sub_B170A0();
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
    sub_B170D4();
  return (signed int)oldCollections->max_length > 1;
}


void __fastcall BattleResultBondsComponent__openedBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0
  BattleResultComponent_o *v4; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA8DC & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5477, method);
    byte_40FA8DC = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__ResetPlayScreenTouch(parentComp, 0LL), (v4 = this->fields.parentComp) == 0LL)
    || (BattleResultComponent__setTouch(v4, 1, 0LL), myFsm = this->fields.myFsm, ++this->fields.colIndex, !myFsm) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5477, 0LL);
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0

  if ( (byte_40F7181 & 1) == 0 )
  {
    sub_B16FFC(&BattleResultBondsComponent___c_TypeInfo, v1);
    byte_40F7181 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleResultBondsComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleResultBondsComponent___c_o *)v5;
  sub_B16F98(static_fields, v5);
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
    sub_B170D4();
  return col->fields.isUse;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_0(
        BattleResultBondsComponent___c_o *this,
        QuestRewardInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.type == 7 && x->fields.isNew;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_1(
        BattleResultBondsComponent___c_o *this,
        GetSvts_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
    sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *CS___8__locals1; // x8
  struct BattleResultBondsComponent_o *_4__this; // x8
  UnityEngine_Object_o *figureMoveRoot; // x20
  bool v17; // w0
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v18; // x9
  bool v19; // w8
  BattleResultBondsComponent_o *v20; // x0
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *parent; // x20
  __int64 v24; // x2
  __int64 v25; // x0
  __int64 v26; // x2
  System_Object_array *v27; // x21
  UnityEngine_GameObject_o *v28; // x0
  __int64 v29; // x1
  Il2CppObject *v30; // x22
  Il2CppObject *v31; // x22
  Il2CppObject *v32; // x22
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v33; // x8
  UnityEngine_Component_o *v34; // x0
  Il2CppObject *v35; // x22
  System_Collections_Hashtable_o *v36; // x0
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v37; // x8
  struct BattleResultBondsComponent_o *v38; // x8
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v39; // x8
  struct BattleResultBondsComponent_o *v40; // x8
  PlayMakerFSM_o *myFsm; // x0
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v42; // x8
  struct BattleResultBondsIconComponent_array *bondsIcons; // x9
  __int64 i; // x10
  BattleResultBondsComponent_o *v45; // x0
  char v46[4]; // [xsp+Ch] [xbp-34h] BYREF
  int v47; // [xsp+18h] [xbp-28h] BYREF
  int v48; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_40F7182 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, method);
    sub_B16FFC(&object___TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&float_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_23222, v6);
    sub_B16FFC(&StringLiteral_9721, v7);
    sub_B16FFC(&StringLiteral_22584, v8);
    sub_B16FFC(&StringLiteral_21175, v9);
    sub_B16FFC(&StringLiteral_18286, v10);
    sub_B16FFC(&StringLiteral_19885, v11);
    sub_B16FFC(&StringLiteral_21173, v12);
    sub_B16FFC(&iTween_TypeInfo, v13);
    byte_40F7182 = 1;
  }
  CS___8__locals1 = this->fields.CS___8__locals1;
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
  v17 = UnityEngine_Object__op_Inequality(figureMoveRoot, 0LL, 0LL);
  v18 = this->fields.CS___8__locals1;
  if ( !v18 )
    goto LABEL_73;
  v19 = v17;
  v20 = v18->fields.__4__this;
  if ( !v20 )
    goto LABEL_73;
  if ( !v19 )
  {
    BattleResultBondsComponent__endMoveFigure(v20, 0LL);
    goto LABEL_63;
  }
  v21 = (UnityEngine_Component_o *)v20->fields.figureMoveRoot;
  if ( !v21 )
    goto LABEL_73;
  gameObject = UnityEngine_Component__get_gameObject(v21, 0LL);
  if ( !gameObject )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  parent = this->fields.parent;
  v25 = sub_B17014(object___TypeInfo, 10LL, v24);
  if ( !v25 )
    goto LABEL_73;
  v27 = (System_Object_array *)v25;
  v28 = (UnityEngine_GameObject_o *)StringLiteral_23222;
  if ( StringLiteral_23222 )
  {
    v28 = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_23222, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_75;
    v29 = StringLiteral_23222;
  }
  else
  {
    v29 = 0LL;
  }
  if ( !v27->max_length )
    goto LABEL_74;
  v27->m_Items[0] = (Il2CppObject *)v29;
  sub_B16F98(v27->m_Items, v29);
  v48 = -1007026176;
  v28 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v48);
  v30 = (Il2CppObject *)v28;
  if ( v28 )
  {
    v28 = (UnityEngine_GameObject_o *)sub_B170BC(v28, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_75;
  }
  if ( v27->max_length <= 1 )
    goto LABEL_74;
  v27->m_Items[1] = v30;
  sub_B16F98(&v27->m_Items[1], v30);
  v28 = (UnityEngine_GameObject_o *)StringLiteral_22584;
  if ( StringLiteral_22584 )
  {
    v28 = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_22584, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_75;
    v29 = StringLiteral_22584;
  }
  else
  {
    v29 = 0LL;
  }
  if ( v27->max_length <= 2 )
    goto LABEL_74;
  v27->m_Items[2] = (Il2CppObject *)v29;
  sub_B16F98(&v27->m_Items[2], v29);
  v47 = 1061997773;
  v28 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v47);
  v31 = (Il2CppObject *)v28;
  if ( v28 )
  {
    v28 = (UnityEngine_GameObject_o *)sub_B170BC(v28, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_75;
  }
  if ( v27->max_length <= 3 )
    goto LABEL_74;
  v27->m_Items[3] = v31;
  sub_B16F98(&v27->m_Items[3], v31);
  v28 = (UnityEngine_GameObject_o *)StringLiteral_19885;
  if ( StringLiteral_19885 )
  {
    v28 = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_19885, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_75;
    v29 = StringLiteral_19885;
  }
  else
  {
    v29 = 0LL;
  }
  if ( v27->max_length <= 4 )
    goto LABEL_74;
  v27->m_Items[4] = (Il2CppObject *)v29;
  sub_B16F98(&v27->m_Items[4], v29);
  v46[0] = 1;
  v28 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v46);
  v32 = (Il2CppObject *)v28;
  if ( v28 )
  {
    v28 = (UnityEngine_GameObject_o *)sub_B170BC(v28, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_75;
  }
  if ( v27->max_length <= 5 )
    goto LABEL_74;
  v27->m_Items[5] = v32;
  sub_B16F98(&v27->m_Items[5], v32);
  v28 = (UnityEngine_GameObject_o *)StringLiteral_21175;
  if ( StringLiteral_21175 )
  {
    v28 = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_21175, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_75;
    v29 = StringLiteral_21175;
  }
  else
  {
    v29 = 0LL;
  }
  if ( v27->max_length <= 6 )
    goto LABEL_74;
  v27->m_Items[6] = (Il2CppObject *)v29;
  sub_B16F98(&v27->m_Items[6], v29);
  v33 = this->fields.CS___8__locals1;
  if ( !v33 || (v34 = (UnityEngine_Component_o *)v33->fields.__4__this) == 0LL )
LABEL_73:
    sub_B170D4();
  v28 = UnityEngine_Component__get_gameObject(v34, 0LL);
  v35 = (Il2CppObject *)v28;
  if ( v28 )
  {
    v28 = (UnityEngine_GameObject_o *)sub_B170BC(v28, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_75;
  }
  if ( v27->max_length <= 7 )
    goto LABEL_74;
  v27->m_Items[7] = v35;
  sub_B16F98(&v27->m_Items[7], v35);
  v28 = (UnityEngine_GameObject_o *)StringLiteral_21173;
  if ( StringLiteral_21173 )
  {
    v28 = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_21173, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_75;
    v29 = StringLiteral_21173;
  }
  else
  {
    v29 = 0LL;
  }
  if ( v27->max_length <= 8 )
    goto LABEL_74;
  v27->m_Items[8] = (Il2CppObject *)v29;
  sub_B16F98(&v27->m_Items[8], v29);
  v28 = (UnityEngine_GameObject_o *)StringLiteral_18286;
  if ( !StringLiteral_18286 )
  {
    v29 = 0LL;
    goto LABEL_58;
  }
  v28 = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_18286, v27->obj.klass->_1.element_class);
  if ( !v28 )
  {
LABEL_75:
    sub_B170F4();
    sub_B170A0();
  }
  v29 = StringLiteral_18286;
LABEL_58:
  if ( v27->max_length <= 9 )
    goto LABEL_74;
  v27->m_Items[9] = (Il2CppObject *)v29;
  sub_B16F98(&v27->m_Items[9], v29);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v36 = iTween__Hash(v27, 0LL);
  iTween__MoveFrom_18435792(parent, v36, 0LL);
LABEL_63:
  v37 = this->fields.CS___8__locals1;
  if ( !v37 )
    goto LABEL_73;
  v38 = v37->fields.__4__this;
  if ( !v38 )
    goto LABEL_73;
  v38->fields.openBoundsFlg = 1;
  v39 = this->fields.CS___8__locals1;
  if ( !v39 )
    goto LABEL_73;
  v40 = v39->fields.__4__this;
  if ( !v40 )
    goto LABEL_73;
  myFsm = v40->fields.myFsm;
  if ( !myFsm )
    goto LABEL_73;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9721, 0LL);
  v42 = this->fields.CS___8__locals1;
  if ( !v42 )
    goto LABEL_73;
  bondsIcons = v42->fields.bondsIcons;
  if ( !bondsIcons )
    goto LABEL_73;
  i = v42->fields.i;
  if ( (unsigned int)i >= bondsIcons->max_length )
  {
LABEL_74:
    sub_B17100(v28, v29, v26);
    sub_B170A0();
  }
  v45 = v42->fields.__4__this;
  if ( !v45 )
    goto LABEL_73;
  BattleResultBondsComponent__CheckFormalJoin(v45, bondsIcons->m_Items[i], 0LL);
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

  if ( (byte_40F7183 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F7183 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CreateServantCoinConfirmDialog(Instance, 1, this->fields.coin, 0LL, 0LL);
}