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

  if ( (byte_4215232 & 1) == 0 )
  {
    sub_B0D8A4(&BattleResultBondsComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_6980/*"GetNewSvt"*/, v8);
    sub_B0D8A4(&StringLiteral_6969/*"GetExistSvt"*/, v9);
    byte_4215232 = 1;
  }
  BattleResultBondsComponent_TypeInfo->static_fields->SVT_GAP_5 = 178.0;
  BattleResultBondsComponent_TypeInfo->static_fields->SVT_GAP_6 = 150.0;
  v10 = BattleResultBondsComponent_TypeInfo;
  BattleResultBondsComponent_TypeInfo->static_fields->CONF_LABEL_MAX_WIDTH = 464;
  v10->static_fields->CONF_SERVANT_COIN_PLUS_HEIGHT = 18;
  static_fields = v10->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6980/*"GetNewSvt"*/;
  static_fields->GET_NEW_SVT_KEY = (struct System_String_o *)StringLiteral_6980/*"GetNewSvt"*/;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->GET_NEW_SVT_KEY, v12, v2, v3, v4, v5, v6, v7);
  v13 = BattleResultBondsComponent_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_6969/*"GetExistSvt"*/;
  v13->GET_EXIST_SVT_KEY = (struct System_String_o *)StringLiteral_6969/*"GetExistSvt"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v13->GET_EXIST_SVT_KEY, v14, v15, v16, v17, v18, v19, v20);
}


void __fastcall BattleResultBondsComponent___ctor(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  BattleResultBondsFigureComponent_o *v26; // x20
  const MethodInfo *v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_4215231 & 1) == 0 )
  {
    sub_B0D8A4(&BattleResultBondsFigureComponent_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo, v7);
    byte_4215231 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.conflist = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.conflist,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.buddyPointInfoWindowHeight = 366;
  this->fields.tempSaveTimeScale = 1.0;
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
  this->fields.bondsList = (struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *)v17;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.bondsList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v26 = (BattleResultBondsFigureComponent_o *)sub_B0D974(BattleResultBondsFigureComponent_TypeInfo, v24, v25);
  BattleResultBondsFigureComponent___ctor(v26, v27);
  this->fields.bondsFigure = v26;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.bondsFigure,
    (System_Int32_array **)v26,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
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
  DataManager_o *Instance; // x0
  struct GetSvts_array *getJoinSvtList; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v23; // x21
  __int64 v24; // x26
  int max_length; // w9
  GetSvts_o *v26; // x8
  UserServantEntity_o *v27; // x24
  __int64 v28; // x1
  __int64 v29; // x2
  EventServantEntity_o *EventServant; // x22
  BattleResultBondsComponent___c_c *v31; // x0
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__62_0; // x23
  Il2CppObject *v34; // x25
  struct BattleResultBondsComponent___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x25
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x24
  System_Int32_array **v46; // x23
  __int64 v47; // x1
  __int64 v48; // x2
  GetSvtCoin_o *v49; // x25
  WarEntity_o *v50; // x8
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x1
  __int64 v64; // x2
  System_String_o *v65; // x24
  CommonUI_o *v66; // x25
  __int64 v67; // x0
  __int64 v68; // x0
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4215223 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, collect);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_SvtCoinMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_B0D8A4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v9);
    sub_B0D8A4(&GetSvtCoin___TypeInfo, v10);
    sub_B0D8A4(&GetSvtCoin_TypeInfo, v11);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B0D8A4(&Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__, v15);
    sub_B0D8A4(&Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__, v16);
    sub_B0D8A4(&BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo, v17);
    sub_B0D8A4(&BattleResultBondsComponent___c_TypeInfo, v18);
    sub_B0D8A4(&StringLiteral_12476/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, v19);
    sub_B0D8A4(&StringLiteral_18061/*"dialogIgnoreTime"*/, v20);
    byte_4215223 = 1;
  }
  entity = 0LL;
  if ( this->fields.getJoinSvtList && !this->fields.isWarboard )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___),
          (getJoinSvtList = this->fields.getJoinSvtList) == 0LL) )
    {
LABEL_49:
      sub_B0D97C(Instance);
    }
    v23 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
    v24 = 0LL;
    while ( 1 )
    {
      max_length = getJoinSvtList->max_length;
      if ( (int)v24 >= max_length )
        break;
      if ( (unsigned int)v24 >= max_length )
        goto LABEL_50;
      v26 = getJoinSvtList->m_Items[v24];
      if ( !v26 )
        goto LABEL_49;
      if ( v26->fields.isNew )
      {
        UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_18061/*"dialogIgnoreTime"*/, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      else
      {
        if ( !v23 )
          goto LABEL_49;
        Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      v23,
                                      v26->fields.userSvtId,
                                      (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( Instance )
        {
          v27 = (UserServantEntity_o *)Instance;
          Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
          if ( !collect )
            goto LABEL_49;
          if ( (_DWORD)Instance == collect->fields.svtId )
          {
            EventServant = UserServantEntity__getEventServant(v27, 0LL);
            if ( EventServant
              || (Instance = (DataManager_o *)UserServantEntity__getEventServantIgnoreEnd(v27, 0LL),
                  (EventServant = (EventServantEntity_o *)Instance) != 0LL) )
            {
              v31 = BattleResultBondsComponent___c_TypeInfo;
              if ( (BYTE3(BattleResultBondsComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
                v31 = BattleResultBondsComponent___c_TypeInfo;
              }
              static_fields = v31->static_fields;
              _9__62_0 = static_fields->__9__62_0;
              if ( !_9__62_0 )
              {
                if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v31);
                  static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
                }
                v34 = (Il2CppObject *)static_fields->__9;
                _9__62_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v28, v29);
                System_Action___ctor(
                  _9__62_0,
                  v34,
                  Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__,
                  0LL);
                v35 = BattleResultBondsComponent___c_TypeInfo->static_fields;
                v35->__9__62_0 = _9__62_0;
                sub_B0D840(
                  (BattleServantConfConponent_o *)&v35->__9__62_0,
                  (System_Int32_array **)_9__62_0,
                  v36,
                  v37,
                  v38,
                  v39,
                  v40,
                  v41);
              }
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SvtCoinMaster___);
              Instance = (DataManager_o *)UserServantEntity__getSvtId(v27, 0LL);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_49;
              Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                            Master_WarQuestSelectionMaster,
                                            &entity,
                                            (int32_t)Instance,
                                            (const MethodInfo_2669C30 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_49;
                if ( *(&entity->fields.id + 1) >= 1 )
                {
                  v45 = sub_B0D974(BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo, v43, v44);
                  BattleResultBondsComponent___c__DisplayClass62_0___ctor(
                    (BattleResultBondsComponent___c__DisplayClass62_0_o *)v45,
                    0LL);
                  v46 = (System_Int32_array **)sub_B0D8BC(GetSvtCoin___TypeInfo, 1LL);
                  v49 = (GetSvtCoin_o *)sub_B0D974(GetSvtCoin_TypeInfo, v47, v48);
                  GetSvtCoin___ctor(v49, 0LL);
                  v50 = entity;
                  if ( !entity )
                    goto LABEL_49;
                  if ( !v49 )
                    goto LABEL_49;
                  v49->fields.svtId = entity->fields.id;
                  v49->fields.num = *(&v50->fields.id + 1);
                  v49->fields.itemId = (int32_t)v50->fields.age;
                  if ( !v46 )
                    goto LABEL_49;
                  Instance = (DataManager_o *)sub_B0D964(v49, *(_QWORD *)&(*v46)->m_Items[9]);
                  if ( !Instance )
                  {
                    v68 = sub_B0D99C(0LL);
                    sub_B0D948(v68, 0LL);
                  }
                  if ( !*((_DWORD *)v46 + 6) )
                  {
LABEL_50:
                    v67 = sub_B0D9A8(Instance);
                    sub_B0D948(v67, 0LL);
                  }
                  v46[4] = (System_Int32_array *)v49;
                  sub_B0D840(
                    (BattleServantConfConponent_o *)(v46 + 4),
                    (System_Int32_array **)v49,
                    v51,
                    v52,
                    v53,
                    v54,
                    v55,
                    v56);
                  if ( !v45 )
                    goto LABEL_49;
                  *(_QWORD *)(v45 + 16) = v46;
                  sub_B0D840((BattleServantConfConponent_o *)(v45 + 16), v46, v57, v58, v59, v60, v61, v62);
                  _9__62_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v63, v64);
                  System_Action___ctor(
                    _9__62_0,
                    (Il2CppObject *)v45,
                    Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__,
                    0LL);
                }
              }
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v65 = LocalizationManager__Get((System_String_o *)StringLiteral_12476/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0LL);
              v66 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              Instance = (DataManager_o *)EventServantEntity__GetGetMessage(EventServant, 0LL);
              if ( !v66 )
                goto LABEL_49;
              CommonUI__OpenNotificationDialog(
                v66,
                v65,
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
      ++v24;
      if ( !getJoinSvtList )
        goto LABEL_49;
    }
  }
}


void __fastcall BattleResultBondsComponent__Close(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct BattleWindowComponent_o *multiDeckWindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_421522B & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultBondsComponent_endClose__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v4);
    byte_421522B = 1;
  }
  if ( this->fields.isMultiDeck )
    multiDeckWindow = this->fields.multiDeckWindow;
  else
    multiDeckWindow = this->fields.window;
  v6 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, method, v2);
  BattleWindowComponent_EndCall___ctor(v6, (Il2CppObject *)this, Method_BattleResultBondsComponent_endClose__, 0LL);
  if ( !multiDeckWindow )
    sub_B0D97C(v7);
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))multiDeckWindow->klass->vtable._12_Close.method)(
    multiDeckWindow,
    v6,
    multiDeckWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultBondsComponent__CloseBondUpRoot(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *upRoot; // x0

  if ( (byte_4215230 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_4215230 = 1;
  }
  upRoot = this->fields.upRoot;
  if ( !upRoot
    || (UnityEngine_GameObject__SetActive(upRoot, 0, 0LL),
        (upRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B0D97C(upRoot);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)upRoot, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_GameObject_o *v14; // x21
  UnityEngine_Transform_o *v15; // x22
  UnityEngine_Transform_o *transform; // x22
  int v17; // s0
  UnityEngine_Transform_o *v20; // x22
  int v21; // s0
  int parentComp; // w8
  BattleResultBondsComponent_o *v25; // x21
  unsigned int v26; // w22
  __int64 v27; // x0

  v8 = this;
  if ( (byte_4215225 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, data);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__, v10);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    this = (BattleResultBondsComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    byte_4215225 = 1;
  }
  if ( !data )
    goto LABEL_20;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               effectName,
                                                                               (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleResultBondsComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           Object_WarBoardWaitTimeSetting,
                                           (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_20;
  v14 = (UnityEngine_GameObject_o *)this;
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !targetIcon )
    goto LABEL_20;
  v15 = (UnityEngine_Transform_o *)this;
  this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)targetIcon,
                                           0LL);
  if ( !v15 )
    goto LABEL_20;
  UnityEngine_Transform__set_parent(v15, (UnityEngine_Transform_o *)this, 0LL);
  transform = UnityEngine_GameObject__get_transform(v14, 0LL);
  *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v17, 0LL);
  v20 = UnityEngine_GameObject__get_transform(v14, 0LL);
  *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_one(0LL);
  if ( !v20 )
    goto LABEL_20;
  UnityEngine_Transform__set_localScale(v20, *(UnityEngine_Vector3_o *)&v21, 0LL);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                                           v14,
                                           (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !this )
    goto LABEL_20;
  parentComp = (int)this->fields.parentComp;
  v25 = this;
  if ( parentComp >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= parentComp )
      {
        v27 = sub_B0D9A8(this);
        sub_B0D948(v27, 0LL);
      }
      this = (BattleResultBondsComponent_o *)*((_QWORD *)&v25->fields.myFsm + (int)v26);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0LL);
      parentComp = (int)v25->fields.parentComp;
      if ( (int)++v26 >= parentComp )
        goto LABEL_18;
    }
LABEL_20:
    sub_B0D97C(this);
  }
LABEL_18:
  this = (BattleResultBondsComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_20;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v25,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void __fastcall BattleResultBondsComponent__DeleteGetJoinSvtData(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleResultBondsComponent_c *v2; // x0

  if ( (byte_421521A & 1) == 0 )
  {
    sub_B0D8A4(&BattleResultBondsComponent_TypeInfo, v1);
    byte_421521A = 1;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *bondsList; // x0
  const MethodInfo *v15; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_421522D & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__,
      method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__, v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__,
      v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v9);
    byte_421522D = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( this->fields.isMultiDeck )
  {
    p_bondsIconArray = (BattleServantConfConponent_o *)&this->fields.bondsIconArray;
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.bondsIconArray, 0LL) )
    {
      v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v11, v12);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v13,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
      bondsList = this->fields.bondsList;
      if ( !bondsList )
        goto LABEL_17;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v25,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bondsList,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v25,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
      {
        if ( !v25.fields.current )
          sub_B0D97C(0LL);
        BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                          (BattleResultBondsDeckPerWaveComponent_o *)v25.fields.current,
                                                                          v15);
        if ( !v13 )
          sub_B0D97C(BondsIconArray);
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v13,
          BondsIconArray,
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v25,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
      if ( !v13 )
LABEL_17:
        sub_B0D97C(bondsList);
      v17 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                     (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
      p_bondsIconArray->klass = (BattleServantConfConponent_c *)v17;
      sub_B0D840(p_bondsIconArray, v17, v18, v19, v20, v21, v22, v23);
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
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Object_o *multiDeckWindow; // x20

  if ( (byte_421521B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_421521B = 1;
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
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_UIUnityRenderer__TypeInfo,
                                                                                                 v6,
                                                                                                 v7);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v8;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.effectUIList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
    sub_B0D97C(window);
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

  if ( (byte_421521C & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, oldCollects);
    byte_421521C = 1;
  }
  this->fields.oldCollections = oldCollects;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.oldCollections,
    (System_Int32_array **)oldCollects,
    (System_String_array **)inRewardInfos,
    (System_String_array **)resultAsset,
    *(System_Boolean_array ***)&baseFriendshipExp,
    (System_Int32_array **)getJoinSvts,
    (System_Int32_array *)inIsMultiDeck,
    (System_Int32_array *)method);
  this->fields.rewardInfos = inRewardInfos;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.rewardInfos,
    (System_Int32_array **)inRewardInfos,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.resultAssetData = resultAsset;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.resultAssetData,
    (System_Int32_array **)resultAsset,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.getJoinSvtList = getJoinSvts;
  sub_B0D840(
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
  const MethodInfo *v17; // x3
  struct BattleResultBondsIconComponent_array *v18; // x8
  const MethodInfo *v19; // x1
  struct BattleResultBondsIconComponent_array *v20; // x8
  const MethodInfo *v21; // x1
  struct BattleResultBondsIconComponent_array *v22; // x8
  float v23; // s8
  struct BattleResultBondsIconComponent_array *v24; // x8
  UnityEngine_Component_o *v25; // x8
  __int64 v26; // x24
  float v27; // s9
  int v28; // w25
  float v29; // s10
  struct BattleResultBondsIconComponent_array *v30; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x8
  UnityEngine_Object_o *bgFrame; // x20
  __int64 v34; // x0
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  v12 = targetIndex;
  v13 = this;
  if ( (byte_421522E & 1) == 0 )
  {
    sub_B0D8A4(&BattleResultBondsComponent_TypeInfo, *(_QWORD *)&targetIndex);
    this = (BattleResultBondsComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v14);
    byte_421522E = 1;
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
      this = *(BattleResultBondsComponent_o **)((char *)&collects->obj.klass + v15);
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
      v18 = v13->fields.collects;
      if ( !v18 )
        goto LABEL_54;
      if ( v12 >= v18->max_length )
        goto LABEL_55;
      this = *(BattleResultBondsComponent_o **)((char *)&v18->obj.klass + v15);
      if ( !this )
        goto LABEL_54;
      BattleResultBondsIconComponent__SetBuddyPointInfo((BattleResultBondsIconComponent_o *)this, 0LL, 0, v17);
      v20 = v13->fields.collects;
      if ( !v20 )
        goto LABEL_54;
      if ( v12 >= v20->max_length )
        goto LABEL_55;
      this = *(BattleResultBondsComponent_o **)((char *)&v20->obj.klass + v15);
      if ( !this )
        goto LABEL_54;
      this = (BattleResultBondsComponent_o *)BattleResultBondsIconComponent__changeGauge(
                                               (BattleResultBondsIconComponent_o *)this,
                                               0.0,
                                               v19);
      v22 = v13->fields.collects;
      if ( !v22 )
        goto LABEL_54;
      if ( v12 >= v22->max_length )
        goto LABEL_55;
      this = *(BattleResultBondsComponent_o **)((char *)&v22->obj.klass + v15);
      if ( !this )
        goto LABEL_54;
      BattleResultBondsIconComponent__InitBuddyPointInfo((BattleResultBondsIconComponent_o *)this, v21);
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
    v23 = *(float *)(*(_QWORD *)&this->fields.buddyPointInfoWindowHeight + 4LL);
  }
  else
  {
    if ( (WORD1(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
      this = (BattleResultBondsComponent_o *)BattleResultBondsComponent_TypeInfo;
    }
    v24 = v13->fields.collects;
    if ( !v24 )
      goto LABEL_54;
    if ( v24->max_length <= cnt )
    {
LABEL_55:
      v34 = sub_B0D9A8(this);
      sub_B0D948(v34, 0LL);
    }
    v25 = (UnityEngine_Component_o *)v24->m_Items[cnt];
    if ( !v25 )
      goto LABEL_54;
    v23 = **(float **)&this->fields.buddyPointInfoWindowHeight;
    this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_gameObject(v25, 0LL);
    if ( !this )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  if ( cnt >= 1 )
  {
    v26 = 0LL;
    v27 = 0.0;
    v28 = 4;
    v29 = (float)(1 - cnt) * 0.5;
    do
    {
      if ( isNoFollower )
        v27 = (float)v28;
      v30 = v13->fields.collects;
      if ( !v30 )
        goto LABEL_54;
      if ( (unsigned int)v26 >= v30->max_length )
        goto LABEL_55;
      this = (BattleResultBondsComponent_o *)v30->m_Items[v26];
      if ( !this )
        goto LABEL_54;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v23 * v29) - v27, 0LL);
      ++v26;
      v29 = v29 + 1.0;
      v28 -= 2;
    }
    while ( (int)v26 < cnt );
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
      || (v35.fields.y = 13.0,
          v35.fields.x = 0.0,
          v35.fields.z = 0.0,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v35, 0LL),
          (this = (BattleResultBondsComponent_o *)v13->fields.window) == 0LL) )
    {
LABEL_54:
      sub_B0D97C(this);
    }
    (*(void (__fastcall **)(BattleResultBondsComponent_o *, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
      this,
      this->klass[1]._1.element_class);
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
  BattleResultBondsIconComponent_array *BondsIconArray; // x20
  BattleResultBondsComponent___c_c *v14; // x8
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__53_0; // x21
  Il2CppObject *v17; // x22
  struct BattleResultBondsComponent___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  _BOOL4 isMultiDeck; // w8
  struct BattleWindowComponent_o *v29; // x20
  __int64 *v30; // x8
  BattleWindowComponent_EndCall_o *v31; // x21

  if ( (byte_421521F & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_BattleResultBondsIconComponent___, method);
    sub_B0D8A4(&Method_BattleResultBondsComponent_OpenEnd__, v3);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Func_BattleResultBondsIconComponent__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_BattleResultBondsIconComponent__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_BattleResultBondsComponent___c__Open_b__53_0__, v7);
    sub_B0D8A4(&BattleResultBondsComponent___c_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_5508/*"END_OPEN"*/, v9);
    sub_B0D8A4(&StringLiteral_12295/*"SKIP"*/, v10);
    byte_421521F = 1;
  }
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, method);
  v14 = BattleResultBondsComponent___c_TypeInfo;
  if ( (BYTE3(BattleResultBondsComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
    v14 = BattleResultBondsComponent___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__53_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__53_0;
  if ( !_9__53_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__53_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_BattleResultBondsIconComponent__bool__TypeInfo,
                                                                                    v11,
                                                                                    v12);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__53_0,
      v17,
      Method_BattleResultBondsComponent___c__Open_b__53_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_BattleResultBondsIconComponent__bool___ctor__);
    v18 = BattleResultBondsComponent___c_TypeInfo->static_fields;
    v18->__9__53_0 = (struct System_Func_BattleResultBondsIconComponent__bool__o *)_9__53_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v18->__9__53_0,
      (System_Int32_array **)_9__53_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
         (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)BondsIconArray,
         (System_Func_T__bool__o *)_9__53_0,
         (const MethodInfo_17071E4 *)Method_BasicHelper_Any_BattleResultBondsIconComponent___) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      isMultiDeck = this->fields.isMultiDeck;
      this->fields.openBoundsFlg = 0;
      this->fields.colIndex = 0;
      this->fields.bondsCountUp = 1;
      v29 = isMultiDeck ? this->fields.multiDeckWindow : this->fields.window;
      v31 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v26, v27);
      BattleWindowComponent_EndCall___ctor(v31, (Il2CppObject *)this, Method_BattleResultBondsComponent_OpenEnd__, 0LL);
      if ( v29 )
      {
        ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v29->klass->vtable._10_Open.method)(
          v29,
          v31,
          v29->klass->vtable._11_CompOpen.methodPtr);
        gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
        if ( gameObject )
        {
          v30 = &StringLiteral_5508/*"END_OPEN"*/;
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    sub_B0D97C(gameObject);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !gameObject )
    goto LABEL_22;
  v30 = &StringLiteral_12295/*"SKIP"*/;
LABEL_21:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)*v30, 0LL);
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
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Object_array *v22; // x21
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x22
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x1
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x1
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **v86; // x22
  System_Collections_Hashtable_o *v87; // x0
  const MethodInfo *v88; // x1
  const MethodInfo *v89; // x1
  int max_length; // w8
  BattleResultBondsIconComponent_array *v91; // x20
  unsigned int v92; // w21
  System_String_o *CommonSeName; // x20
  struct SePlayer_o *v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  __int64 v101; // x0
  __int64 v102; // x0
  int v103; // [xsp+Ch] [xbp-34h] BYREF
  int v104; // [xsp+18h] [xbp-28h] BYREF
  int v105; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4215220 & 1) == 0 )
  {
    sub_B0D8A4(&object___TypeInfo, method);
    sub_B0D8A4(&SeManager_TypeInfo, v3);
    sub_B0D8A4(&float_TypeInfo, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_18972/*"from"*/, v6);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v7);
    sub_B0D8A4(&StringLiteral_21341/*"onupdate"*/, v8);
    sub_B0D8A4(&StringLiteral_15115/*"UpdateValue"*/, v9);
    sub_B0D8A4(&StringLiteral_22790/*"to"*/, v10);
    sub_B0D8A4(&StringLiteral_18800/*"finishUpdateValue"*/, v11);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v12);
    sub_B0D8A4(&iTween_TypeInfo, v13);
    byte_4215220 = 1;
  }
  if ( !this->fields.bondsCountUp )
    return;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B0D8BC(object___TypeInfo, 10LL);
  if ( !BondsIconArray )
LABEL_68:
    sub_B0D97C(BondsIconArray);
  v22 = (System_Object_array *)BondsIconArray;
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_18972/*"from"*/;
  if ( StringLiteral_18972/*"from"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B0D964(
                                                               StringLiteral_18972/*"from"*/,
                                                               v22->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v23 = (System_Int32_array **)StringLiteral_18972/*"from"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( !v22->max_length )
    goto LABEL_67;
  v22->m_Items[0] = (Il2CppObject *)v23;
  sub_B0D840((BattleServantConfConponent_o *)v22->m_Items, v23, v16, v17, v18, v19, v20, v21);
  v105 = 0;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v105);
  v30 = (System_Int32_array **)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B0D964(
                                                               BondsIconArray,
                                                               v22->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
  }
  if ( v22->max_length <= 1 )
    goto LABEL_67;
  v22->m_Items[1] = (Il2CppObject *)v30;
  sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[1], v30, v24, v25, v26, v27, v28, v29);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22790/*"to"*/;
  if ( StringLiteral_22790/*"to"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B0D964(
                                                               StringLiteral_22790/*"to"*/,
                                                               v22->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v37 = (System_Int32_array **)StringLiteral_22790/*"to"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( v22->max_length <= 2 )
    goto LABEL_67;
  v22->m_Items[2] = (Il2CppObject *)v37;
  sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[2], v37, v31, v32, v33, v34, v35, v36);
  v104 = 1065353216;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v104);
  v44 = (System_Int32_array **)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B0D964(
                                                               BondsIconArray,
                                                               v22->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
  }
  if ( v22->max_length <= 3 )
    goto LABEL_67;
  v22->m_Items[3] = (Il2CppObject *)v44;
  sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[3], v44, v38, v39, v40, v41, v42, v43);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_21341/*"onupdate"*/;
  if ( StringLiteral_21341/*"onupdate"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B0D964(
                                                               StringLiteral_21341/*"onupdate"*/,
                                                               v22->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v51 = (System_Int32_array **)StringLiteral_21341/*"onupdate"*/;
  }
  else
  {
    v51 = 0LL;
  }
  if ( v22->max_length <= 4 )
    goto LABEL_67;
  v22->m_Items[4] = (Il2CppObject *)v51;
  sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[4], v51, v45, v46, v47, v48, v49, v50);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_15115/*"UpdateValue"*/;
  if ( StringLiteral_15115/*"UpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B0D964(
                                                               StringLiteral_15115/*"UpdateValue"*/,
                                                               v22->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v58 = (System_Int32_array **)StringLiteral_15115/*"UpdateValue"*/;
  }
  else
  {
    v58 = 0LL;
  }
  if ( v22->max_length <= 5 )
    goto LABEL_67;
  v22->m_Items[5] = (Il2CppObject *)v58;
  sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[5], v58, v52, v53, v54, v55, v56, v57);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_21332/*"oncomplete"*/;
  if ( StringLiteral_21332/*"oncomplete"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B0D964(
                                                               StringLiteral_21332/*"oncomplete"*/,
                                                               v22->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v65 = (System_Int32_array **)StringLiteral_21332/*"oncomplete"*/;
  }
  else
  {
    v65 = 0LL;
  }
  if ( v22->max_length <= 6 )
    goto LABEL_67;
  v22->m_Items[6] = (Il2CppObject *)v65;
  sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[6], v65, v59, v60, v61, v62, v63, v64);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_18800/*"finishUpdateValue"*/;
  if ( StringLiteral_18800/*"finishUpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B0D964(
                                                               StringLiteral_18800/*"finishUpdateValue"*/,
                                                               v22->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v72 = (System_Int32_array **)StringLiteral_18800/*"finishUpdateValue"*/;
  }
  else
  {
    v72 = 0LL;
  }
  if ( v22->max_length <= 7 )
    goto LABEL_67;
  v22->m_Items[7] = (Il2CppObject *)v72;
  sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[7], v72, v66, v67, v68, v69, v70, v71);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22753/*"time"*/;
  if ( StringLiteral_22753/*"time"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B0D964(
                                                               StringLiteral_22753/*"time"*/,
                                                               v22->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v79 = (System_Int32_array **)StringLiteral_22753/*"time"*/;
  }
  else
  {
    v79 = 0LL;
  }
  if ( v22->max_length <= 8 )
    goto LABEL_67;
  v22->m_Items[8] = (Il2CppObject *)v79;
  sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[8], v79, v73, v74, v75, v76, v77, v78);
  v103 = 1072064102;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v103);
  v86 = (System_Int32_array **)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B0D964(
                                                               BondsIconArray,
                                                               v22->obj.klass->_1.element_class);
    if ( !BondsIconArray )
    {
LABEL_69:
      v102 = sub_B0D99C(BondsIconArray);
      sub_B0D948(v102, 0LL);
    }
  }
  if ( v22->max_length <= 9 )
    goto LABEL_67;
  v22->m_Items[9] = (Il2CppObject *)v86;
  sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[9], v86, v80, v81, v82, v83, v84, v85);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v87 = iTween__Hash(v22, 0LL);
  iTween__ValueTo(gameObject, v87, 0LL);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v88);
  if ( !BondsIconArray )
    goto LABEL_68;
  max_length = BondsIconArray->max_length;
  v91 = BondsIconArray;
  if ( max_length >= 1 )
  {
    v92 = 0;
    while ( v92 < max_length )
    {
      BondsIconArray = (BattleResultBondsIconComponent_array *)v91->m_Items[v92];
      if ( !BondsIconArray )
        goto LABEL_68;
      BattleResultBondsIconComponent__StartUpdateBuddyPoint((BattleResultBondsIconComponent_o *)BondsIconArray, v89);
      max_length = v91->max_length;
      if ( (int)++v92 >= max_length )
        goto LABEL_58;
    }
LABEL_67:
    v101 = sub_B0D9A8(BondsIconArray);
    sub_B0D948(v101, 0LL);
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
    v94 = SoundManager__playSe(CommonSeName, 0LL);
    this->fields.MeterSePlayer = v94;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.MeterSePlayer,
      (System_Int32_array **)v94,
      v95,
      v96,
      v97,
      v98,
      v99,
      v100);
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
  struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *bondsList; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  struct BattleInfoData_o *battle_info; // x9
  struct DeckData_array *waveMyDecks; // x26
  __int64 maxWave; // x27
  BattleUserServantData_array *userSvt; // x24
  unsigned __int64 currentWave; // x19
  il2cpp_array_size_t max_length; // w9
  DeckData_o *v34; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x20
  const MethodInfo *v36; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  struct BattleResultBondsIconComponent_array *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x0
  const MethodInfo *v46; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_421521D & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__,
      battleData);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__,
      v18);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__,
      v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__, v23);
    sub_B0D8A4(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v24);
    byte_421521D = 1;
  }
  memset(&v48, 0, sizeof(v48));
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
        v45 = sub_B0D9A8(bondsList);
        sub_B0D948(v45, 0LL);
      }
      v34 = waveMyDecks->m_Items[currentWave++];
      BattleResultBondsComponent__SetResultDataLocal(
        this,
        v34,
        oldCollects,
        followerType,
        userSvt,
        battleResult,
        isHideBuddyPointResult,
        battleData,
        currentWave,
        maxWave,
        v46);
      max_length = waveMyDecks->max_length;
    }
    while ( (__int64)currentWave < (int)max_length );
  }
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo,
                                                                                                  v26,
                                                                                                  v27);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  bondsList = this->fields.bondsList;
  if ( !bondsList )
    goto LABEL_21;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v48,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bondsList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v48,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
  {
    if ( !v48.fields.current )
      sub_B0D97C(0LL);
    BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                      (BattleResultBondsDeckPerWaveComponent_o *)v48.fields.current,
                                                                      v36);
    if ( !v35 )
      sub_B0D97C(BondsIconArray);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v35,
      BondsIconArray,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v48,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
  if ( !v35 )
LABEL_21:
    sub_B0D97C(bondsList);
  v38 = (struct BattleResultBondsIconComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v35,
                                                         (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
  this->fields.bondsIconArray = v38;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.bondsIconArray,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
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
  int64_t Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v53; // x25
  BattleResultBondsComponent_o *v54; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v55; // x27
  struct BattleResultBondsDeckPerWaveComponent_o *multiBondsPrefab; // x19
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *v58; // x1
  int64_t userSvtId; // x1
  __int64 v60; // x2
  const MethodInfo *v61; // x3
  const MethodInfo *v62; // x6
  System_Collections_Generic_IEnumerable_TSource__o *rewardInfos; // x21
  BattleResultBondsComponent___c_c *v64; // x0
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__49_0; // x19
  Il2CppObject *v67; // x20
  struct BattleResultBondsComponent___c_StaticFields *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x0
  System_Collections_Generic_List_TSource__o *v76; // x0
  __int64 v77; // x1
  __int64 v78; // x2
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v79; // x21
  BattleResultBondsComponent_c *v80; // x0
  BattleResultBondsComponent_c *v81; // x0
  Il2CppObject *String_34963268; // x19
  System_Collections_Generic_IEnumerable_T__o *v83; // x0
  BattleResultBondsComponent_c *v84; // x0
  System_String_o *GET_NEW_SVT_KEY; // x20
  WarBoardUiData_SaveData_array *v86; // x19
  System_String_o *v87; // x0
  BattleResultBondsComponent___c_c *v88; // x0
  System_Collections_Generic_IEnumerable_TSource__o *getJoinSvts; // x21
  struct BattleResultBondsComponent___c_StaticFields *v90; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__49_1; // x19
  Il2CppObject *v92; // x20
  struct BattleResultBondsComponent___c_StaticFields *v93; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v100; // x0
  System_Collections_Generic_List_TSource__o *v101; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v102; // x21
  BattleResultBondsComponent_c *v103; // x0
  BattleResultBondsComponent_c *v104; // x0
  Il2CppObject *v105; // x19
  System_Collections_Generic_IEnumerable_T__o *v106; // x0
  BattleResultBondsComponent_c *v107; // x0
  System_String_o *GET_EXIST_SVT_KEY; // x20
  WarBoardUiData_SaveData_array *v109; // x19
  System_String_o *v110; // x0
  struct BattleDeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v113; // w21
  int32_t v114; // w22
  BattleDeckServantData_o *v115; // x26
  BattleResultBondsComponent___c__DisplayClass49_0_o *v116; // x28
  UserServantEntity_o *v117; // x24
  BattleResultBondsComponent_o *SvtId; // x0
  const MethodInfo *v119; // x3
  const MethodInfo *v120; // x1
  __int64 v121; // x2
  const MethodInfo *v122; // x7
  signed int v123; // w8
  ServantEntity_o *v124; // x27
  unsigned int v125; // w19
  BattleUserServantData_o *v126; // x20
  __int128 v127; // q0
  const MethodInfo *v128; // x5
  BattleResultComponent_resultData_o *v129; // x19
  unsigned int v130; // w25
  int32_t afterLimitCount; // w26
  int32_t v132; // w22
  int afterIconLimitCount; // w8
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x19
  BattleBuddyPointInfo_o *v136; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v137; // x20
  BattleResultBondsIconComponent_o *v138; // x28
  struct BattleResultBondsIconComponent_array *v139; // x8
  const MethodInfo *v140; // x3
  unsigned int v141; // w22
  const MethodInfo *v142; // x2
  UserServantCollectionEntity_o *EntityDefinitely; // x1
  bool v144; // w19
  const MethodInfo *v145; // x2
  const MethodInfo *v146; // x1
  char v147; // w8
  bool updateFlg; // w19
  char v149; // w8
  const MethodInfo *v150; // x1
  __int64 v151; // x0
  int32_t cnt; // [xsp+4h] [xbp-10Ch]
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // [xsp+8h] [xbp-108h]
  BattleResultBondsDeckPerWaveComponent_o *Object_object; // [xsp+20h] [xbp-F0h]
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+28h] [xbp-E8h]
  struct BattleDeckServantData_array *v158; // [xsp+30h] [xbp-E0h]
  DataMasterBase_WarMaster__WarEntity__int__o *v159; // [xsp+38h] [xbp-D8h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v160; // [xsp+40h] [xbp-D0h]
  int32_t Type; // [xsp+54h] [xbp-BCh]
  UserServantCollectionEntity_o *userSvtCol; // [xsp+60h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v166; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v167; // [xsp+90h] [xbp-80h]

  if ( (byte_421521E & 1) == 0 )
  {
    sub_B0D8A4(&Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___, myDeck);
    sub_B0D8A4(&Method_BasicHelper_Find_BattleBuddyPointInfo___, v14);
    sub_B0D8A4(&BattleResultBondsComponent_TypeInfo, v15);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v19);
    sub_B0D8A4(&DataManager_TypeInfo, v20);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v22);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_GetSvts___, v23);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_QuestRewardInfo___, v24);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_GetSvts___, v25);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_QuestRewardInfo___, v26);
    sub_B0D8A4(&Method_System_Func_QuestRewardInfo__bool___ctor__, v27);
    sub_B0D8A4(&Method_System_Func_BattleBuddyPointInfo__bool___ctor__, v28);
    sub_B0D8A4(&Method_System_Func_GetSvts__bool___ctor__, v29);
    sub_B0D8A4(&System_Func_GetSvts__bool__TypeInfo, v30);
    sub_B0D8A4(&System_Func_QuestRewardInfo__bool__TypeInfo, v31);
    sub_B0D8A4(&System_Func_BattleBuddyPointInfo__bool__TypeInfo, v32);
    sub_B0D8A4(&Method_JsonManager_DeserializeArray_GetSvts___, v33);
    sub_B0D8A4(&Method_JsonManager_DeserializeArray_QuestRewardInfo___, v34);
    sub_B0D8A4(&JsonManager_TypeInfo, v35);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GetSvts__AddRange__, v36);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__, v37);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__, v38);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__, v39);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GetSvts__ToArray__, v40);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GetSvts__get_Count__, v41);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__, v42);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v43);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v44);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45);
    sub_B0D8A4(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__, v46);
    sub_B0D8A4(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__, v47);
    sub_B0D8A4(&Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__, v48);
    sub_B0D8A4(&BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo, v49);
    sub_B0D8A4(&BattleResultBondsComponent___c_TypeInfo, v50);
    byte_421521E = 1;
  }
  Type = Follower__getType(followerType, 0LL);
  if ( Type )
    v51 = 5;
  else
    v51 = 6;
  cnt = v51;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_147;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_147;
  v53 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)Instance,
                                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_147;
  v54 = this;
  v55 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( this->fields.isMultiDeck )
  {
    Instance = (int64_t)this->fields.multiBondsRoot;
    if ( !Instance )
      goto LABEL_147;
    multiBondsPrefab = this->fields.multiBondsPrefab;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    v58 = (Il2CppObject *)multiBondsPrefab;
    v54 = this;
    Object_object = (BattleResultBondsDeckPerWaveComponent_o *)BaseMonoBehaviour__createObject_object_(
                                                                 (BaseMonoBehaviour_o *)this,
                                                                 v58,
                                                                 transform,
                                                                 0LL,
                                                                 (const MethodInfo_1706AE8 *)Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    if ( this->fields.isMultiDeck )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
    v54->fields.isWarboard = Instance & 1;
    if ( (Instance & 1) != 0 )
    {
      if ( !battleResult )
        goto LABEL_147;
      rewardInfos = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.rewardInfos;
      v64 = BattleResultBondsComponent___c_TypeInfo;
      if ( (BYTE3(BattleResultBondsComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v64 = BattleResultBondsComponent___c_TypeInfo;
      }
      static_fields = v64->static_fields;
      _9__49_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__49_0;
      if ( !_9__49_0 )
      {
        if ( (BYTE3(v64->vtable._0_Equals.methodPtr) & 4) != 0 && !v64->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v64);
          static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
        }
        v67 = (Il2CppObject *)static_fields->__9;
        _9__49_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                        System_Func_QuestRewardInfo__bool__TypeInfo,
                                                                                        userSvtId,
                                                                                        v60);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__49_0,
          v67,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__,
          (const MethodInfo_26189B8 *)Method_System_Func_QuestRewardInfo__bool___ctor__);
        v68 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        v68->__9__49_0 = (struct System_Func_QuestRewardInfo__bool__o *)_9__49_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v68->__9__49_0,
          (System_Int32_array **)_9__49_0,
          v69,
          v70,
          v71,
          v72,
          v73,
          v74);
      }
      v75 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              rewardInfos,
              (System_Func_TSource__bool__o *)_9__49_0,
              (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
      v76 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
              v75,
              (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
      if ( v76 )
      {
        v79 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v76;
        if ( v76->fields._size >= 1 )
        {
          v80 = BattleResultBondsComponent_TypeInfo;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v80 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v80->static_fields->GET_NEW_SVT_KEY, 0LL) )
          {
            v81 = BattleResultBondsComponent_TypeInfo;
            if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v81 = BattleResultBondsComponent_TypeInfo;
            }
            String_34963268 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_34963268(
                                                v81->static_fields->GET_NEW_SVT_KEY,
                                                0LL);
            if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !JsonManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            }
            v83 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                   String_34963268,
                                                                   (const MethodInfo_1B682B0 *)Method_JsonManager_DeserializeArray_QuestRewardInfo___);
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              v79,
              v83,
              (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
          }
          v84 = BattleResultBondsComponent_TypeInfo;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v84 = BattleResultBondsComponent_TypeInfo;
          }
          GET_NEW_SVT_KEY = v84->static_fields->GET_NEW_SVT_KEY;
          v86 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v79,
                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
          if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !JsonManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          }
          v87 = JsonManager__toJson(&v86->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_NEW_SVT_KEY, v87, 0LL);
        }
      }
      v88 = BattleResultBondsComponent___c_TypeInfo;
      getJoinSvts = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.getJoinSvts;
      if ( (BYTE3(BattleResultBondsComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v88 = BattleResultBondsComponent___c_TypeInfo;
      }
      v90 = v88->static_fields;
      _9__49_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v90->__9__49_1;
      if ( !_9__49_1 )
      {
        if ( (BYTE3(v88->vtable._0_Equals.methodPtr) & 4) != 0 && !v88->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v88);
          v90 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        }
        v92 = (Il2CppObject *)v90->__9;
        _9__49_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                        System_Func_GetSvts__bool__TypeInfo,
                                                                                        v77,
                                                                                        v78);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__49_1,
          v92,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__,
          (const MethodInfo_26189B8 *)Method_System_Func_GetSvts__bool___ctor__);
        v93 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        v93->__9__49_1 = (struct System_Func_GetSvts__bool__o *)_9__49_1;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v93->__9__49_1,
          (System_Int32_array **)_9__49_1,
          v94,
          v95,
          v96,
          v97,
          v98,
          v99);
      }
      v100 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               getJoinSvts,
               (System_Func_TSource__bool__o *)_9__49_1,
               (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_GetSvts___);
      v101 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
               v100,
               (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_GetSvts___);
      if ( v101 )
      {
        v102 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v101;
        if ( v101->fields._size >= 1 )
        {
          v103 = BattleResultBondsComponent_TypeInfo;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v103 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v103->static_fields->GET_EXIST_SVT_KEY, 0LL) )
          {
            v104 = BattleResultBondsComponent_TypeInfo;
            if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v104 = BattleResultBondsComponent_TypeInfo;
            }
            v105 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_34963268(
                                     v104->static_fields->GET_EXIST_SVT_KEY,
                                     0LL);
            if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !JsonManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            }
            v106 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                    v105,
                                                                    (const MethodInfo_1B682B0 *)Method_JsonManager_DeserializeArray_GetSvts___);
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              v102,
              v106,
              (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_GetSvts__AddRange__);
          }
          v107 = BattleResultBondsComponent_TypeInfo;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v107 = BattleResultBondsComponent_TypeInfo;
          }
          GET_EXIST_SVT_KEY = v107->static_fields->GET_EXIST_SVT_KEY;
          v109 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v102,
                   (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_GetSvts__ToArray__);
          if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !JsonManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          }
          v110 = JsonManager__toJson(&v109->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_EXIST_SVT_KEY, v110, 0LL);
        }
      }
      UnityEngine_PlayerPrefs__Save(0LL);
      v54 = this;
    }
  }
  if ( !myDeck || (svts = myDeck->fields.svts) == 0LL )
LABEL_147:
    sub_B0D97C(Instance);
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v113 = 0;
    v114 = 0;
    v159 = v55;
    v160 = v53;
    v158 = myDeck->fields.svts;
    while ( v113 < max_length )
    {
      v115 = svts->m_Items[v113];
      v116 = (BattleResultBondsComponent___c__DisplayClass49_0_o *)sub_B0D974(
                                                                     BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo,
                                                                     userSvtId,
                                                                     v60);
      BattleResultBondsComponent___c__DisplayClass49_0___ctor(v116, 0LL);
      if ( !v115 || !v116 )
        goto LABEL_147;
      userSvtId = v115->fields.userSvtId;
      v116->fields.userSvtId = userSvtId;
      if ( userSvtId >= 1 )
      {
        if ( !v53 )
          goto LABEL_147;
        Instance = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                              v53,
                              userSvtId,
                              (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !Instance )
          goto LABEL_147;
        v117 = (UserServantEntity_o *)Instance;
        SvtId = (BattleResultBondsComponent_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
        userSvtCol = BattleResultBondsComponent__getServantCollection(SvtId, oldCollects, (int32_t)SvtId, v119);
        Instance = UserServantEntity__getSvtId(v117, 0LL);
        if ( !v55 )
          goto LABEL_147;
        Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v55,
                              Instance,
                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !usrSvts )
          goto LABEL_147;
        v123 = usrSvts->max_length;
        v124 = (ServantEntity_o *)Instance;
        if ( v123 < 1 )
        {
LABEL_103:
          v129 = battleResult;
          v130 = v114;
          afterLimitCount = -1;
          v132 = -1;
          if ( !battleResult )
            goto LABEL_147;
        }
        else
        {
          v125 = 0;
          while ( 1 )
          {
            if ( v125 >= v123 )
              goto LABEL_148;
            v126 = usrSvts->m_Items[v125];
            if ( !v126 )
              goto LABEL_147;
            v127 = *(_OWORD *)&v126->fields.id.fields.fakeValue;
            *(_OWORD *)&v167.fields.currentCryptoKey = *(_OWORD *)&v126->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v167.fields.fakeValue = v127;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v166 = v167;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v166, 0LL);
            if ( Instance == v116->fields.userSvtId )
              break;
            v123 = usrSvts->max_length;
            if ( (int)++v125 >= v123 )
              goto LABEL_103;
          }
          v129 = battleResult;
          v130 = v114;
          if ( this->fields.isMultiDeck )
            BattleResultBondsComponent__UpdateAfterLimitCount(
              (BattleResultBondsComponent_o *)Instance,
              battleData,
              v126,
              v115,
              Master_WarQuestSelectionMaster,
              v128);
          Instance = UserServantEntity__getIconLimitCount((UserServantEntity_o *)v126, 0, 0LL);
          afterIconLimitCount = v126->fields.afterIconLimitCount;
          afterLimitCount = v126->fields.afterLimitCount;
          if ( afterIconLimitCount < 0 || (_DWORD)Instance == afterIconLimitCount )
            v132 = Instance;
          else
            v132 = v126->fields.afterIconLimitCount;
          if ( !battleResult )
            goto LABEL_147;
        }
        buddyPointInfos = v129->fields.buddyPointInfos;
        if ( buddyPointInfos )
        {
          v136 = 0LL;
          if ( *(_QWORD *)&buddyPointInfos->max_length && !isHideBuddyPointResult )
          {
            v137 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                        System_Func_BattleBuddyPointInfo__bool__TypeInfo,
                                                                                        v120,
                                                                                        v121);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v137,
              (Il2CppObject *)v116,
              Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__,
              (const MethodInfo_26189B8 *)Method_System_Func_BattleBuddyPointInfo__bool___ctor__);
            Instance = (int64_t)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                  (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)buddyPointInfos,
                                  (System_Func_T__bool__o *)v137,
                                  (const MethodInfo_170767C *)Method_BasicHelper_Find_BattleBuddyPointInfo___);
            v136 = (BattleBuddyPointInfo_o *)Instance;
          }
        }
        else
        {
          v136 = 0LL;
        }
        if ( this->fields.isMultiDeck )
        {
          Instance = (int64_t)Object_object;
          if ( !Object_object )
            goto LABEL_147;
          Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, v120);
          v138 = (BattleResultBondsIconComponent_o *)Instance;
          if ( !Instance )
            goto LABEL_147;
        }
        else
        {
          v139 = this->fields.collects;
          if ( !v139 )
            goto LABEL_147;
          if ( v130 >= v139->max_length )
            break;
          v138 = v139->m_Items[v130];
          if ( !v138 )
            goto LABEL_147;
        }
        BattleResultBondsIconComponent__setServantData(
          v138,
          userSvtCol,
          v117,
          v132,
          this->fields.baseFriendshipExp,
          Type == 0,
          afterLimitCount,
          v122);
        BattleResultBondsIconComponent__SetBuddyPointInfo(v138, v136, battleResult->fields.eventId, v140);
        if ( !v124 )
          goto LABEL_147;
        v141 = v130;
        if ( ServantEntity__checkIsHeroineSvt(v124, 0LL) && !UserServantEntity__IsAddFriendShipHeroine(v117, 0LL) )
        {
          updateFlg = this->fields.updateFlg;
          v149 = updateFlg | BattleResultBondsIconComponent__setNextServantData(v138, userSvtCol, v142);
          v54 = this;
          this->fields.updateFlg = v149 & 1;
          v138->fields.isHeroine = 1;
          v55 = v159;
          v53 = v160;
        }
        else
        {
          Instance = (int64_t)MasterData_WarQuestSelectionMaster;
          v55 = v159;
          v53 = v160;
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_147;
          EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                               MasterData_WarQuestSelectionMaster,
                               v138->fields.userId,
                               v138->fields.svtId,
                               0LL);
          v144 = this->fields.updateFlg;
          v147 = v144 | BattleResultBondsIconComponent__setNextServantData(v138, EntityDefinitely, v145);
          v54 = this;
          this->fields.updateFlg = v147 & 1;
        }
        svts = v158;
        BattleResultBondsIconComponent__changeGauge(v138, 0.0, v146);
        BattleResultBondsIconComponent__InitBuddyPointInfo(v138, v150);
        if ( v54->fields.isMultiDeck )
        {
          Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v138, 0LL);
          if ( !Instance )
            goto LABEL_147;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        }
        v114 = v141 + 1;
      }
      max_length = svts->max_length;
      if ( (int)++v113 >= max_length )
        goto LABEL_139;
    }
LABEL_148:
    v151 = sub_B0D9A8(Instance);
    sub_B0D948(v151, 0LL);
  }
  v114 = 0;
LABEL_139:
  if ( v54->fields.isMultiDeck )
  {
    if ( Object_object )
    {
      BattleResultBondsDeckPerWaveComponent__SetWaveCount(Object_object, currentWave, maxWave, v61);
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
          Instance = (int64_t)v54->fields.multiBondsRoot;
          if ( Instance )
          {
            (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
              Instance,
              *(_QWORD *)(*(_QWORD *)Instance + 448LL));
            Instance = (int64_t)v54->fields.bondsList;
            if ( Instance )
            {
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
                (EventMissionProgressRequest_Argument_ProgressData_o *)Object_object,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__);
              return;
            }
          }
        }
      }
    }
    goto LABEL_147;
  }
  BattleResultBondsComponent__NormalBondsInit(v54, v114, cnt, Type == 0, battleResult, isHideBuddyPointResult, v62);
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
        v8 = sub_B0D9A8(BondsIconArray);
        sub_B0D948(v8, 0LL);
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
    sub_B0D97C(BondsIconArray);
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
  __int64 v17; // x21
  __int64 v18; // x22
  int32_t v19; // w21
  int32_t IconLimitCount; // w0
  int ServantImageLimitSealAfter; // w0
  __int64 v22; // x20
  __int64 v23; // x21
  int32_t v24; // w0
  int32_t afterLimitCount; // w20
  int32_t v26; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_421522F & 1) == 0 )
  {
    sub_B0D8A4(&ImageLimitCount_TypeInfo, battleData);
    this = (BattleResultBondsComponent_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_421522F = 1;
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
  *(_QWORD *)&v27.fields.currentCryptoKey = v15;
  *(_QWORD *)&v27.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v27, 0LL);
  this = (BattleResultBondsComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                           userSvtData->fields.limitCount,
                                           0LL);
  if ( !svtLimitImageMaster )
LABEL_30:
    sub_B0D97C(this);
  if ( ServantLimitImageMaster__IsServantLimitCountSeal(svtLimitImageMaster, v16, (int32_t)this, 0LL) )
  {
    v18 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v28.fields.currentCryptoKey = v18;
    *(_QWORD *)&v28.fields.fakeValue = v17;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v28, 0LL);
    IconLimitCount = UserServantEntity__getIconLimitCount((UserServantEntity_o *)userSvtData, 0, 0LL);
    ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                   svtLimitImageMaster,
                                   v19,
                                   IconLimitCount,
                                   0LL);
    if ( ServantImageLimitSealAfter >= 11 )
    {
      userSvtData->fields.afterLimitCount = ServantImageLimitSealAfter;
    }
    else
    {
      userSvtData->fields.afterLimitCount = 2 * ServantImageLimitSealAfter;
      v23 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
      v22 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v29.fields.currentCryptoKey = v23;
      *(_QWORD *)&v29.fields.fakeValue = v22;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v29, 0LL);
      afterLimitCount = userSvtData->fields.afterLimitCount;
      v26 = v24;
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      ServantImageLimitSealAfter = ImageLimitCount__GetImageLimitCount(v26, afterLimitCount, 0LL);
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
        v9 = sub_B0D9A8(BondsIconArray);
        sub_B0D948(v9, 0LL);
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
    sub_B0D97C(BondsIconArray);
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
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
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
    sub_B0D97C(this);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v20; // x20
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x23
  BattleResultBondsComponent_c *v22; // x0
  UnityEngine_Object_o *v23; // x24
  bool v24; // w0
  const MethodInfo *v25; // x4
  UnityEngine_Transform_o *transform; // x21
  float v27; // s8
  float y; // s9
  int v29; // s2
  float v30; // s1
  float v31; // s0
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4215224 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, text);
    sub_B0D8A4(&BattleResultBondsComponent_TypeInfo, v13);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___, v14);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v16);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_16876/*"bit_reward_shine02"*/, v18);
    byte_4215224 = 1;
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
  Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Object, 0LL);
  if ( !Object )
    goto LABEL_40;
  v32.fields.z = 0.0;
  v32.fields.y = -112.0 - posY;
  v32.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v32, 0LL);
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                        v20,
                                                                        (const MethodInfo_1B62C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
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
      v22 = BattleResultBondsComponent_TypeInfo;
      if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
        v22 = BattleResultBondsComponent_TypeInfo;
      }
      UILabel__SetCondensedScale(
        (UILabel_o *)ComponentInChildren_Dropdown_DropdownItem,
        v22->static_fields->CONF_LABEL_MAX_WIDTH - 36,
        0LL);
    }
    else
    {
      if ( isSaintGraph )
        UIWidget__set_height((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 100, 0LL);
      UILabel__set_text((UILabel_o *)ComponentInChildren_Dropdown_DropdownItem, text, 0LL);
    }
  }
  v23 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                  v20,
                                  (const MethodInfo_1B62C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v24 = UnityEngine_Object__op_Inequality(v23, 0LL, 0LL);
  if ( (iconImageId & 0x80000000) == 0 && v24 )
  {
    if ( isCoin )
    {
      if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetCoin((UISprite_o *)v23, iconImageId, 0LL);
    }
    else
    {
      if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetItem((UISprite_o *)v23, iconImageId, 0LL);
    }
    BattleResultBondsComponent__CreateRewardEffect(
      this,
      this->fields.resultAssetData,
      (UISprite_o *)v23,
      (System_String_o *)StringLiteral_16876/*"bit_reward_shine02"*/,
      v25);
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
        LODWORD(v27) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Object, 0LL);
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
            *(UnityEngine_Vector3_o *)(&v29 - 2) = UnityEngine_Transform__get_localPosition(
                                                     (UnityEngine_Transform_o *)Object,
                                                     0LL);
            if ( transform )
            {
              v30 = y;
              v31 = v27 + 36.0;
              UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v29 - 2), 0LL);
              goto LABEL_38;
            }
          }
        }
      }
    }
LABEL_40:
    sub_B0D97C(Object);
  }
LABEL_38:
  Object = (UnityEngine_GameObject_o *)this->fields.conflist;
  if ( !Object )
    goto LABEL_40;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Object,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


void __fastcall BattleResultBondsComponent__checkBondsUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x22
  PlayMakerFSM_o *myFsm; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  System_Int32_array **BondsIconArray; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  int32_t colIndex; // w9
  __int64 v38; // x8
  __int64 v39; // x9
  __int64 v40; // x10
  __int64 *v41; // x8
  __int64 v42; // x20
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 *v49; // x21
  Il2CppObject *current; // x22
  UnityEngine_Object_o *levelUpSimpleAnim; // x22
  PlayMakerFSM_c *klass; // x8
  PlayMakerFSM_o *v53; // x22
  unsigned __int64 v54; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v56; // x0
  UnityEngine_Object_o *levelUpAnim; // x22
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  __int64 v64; // x9
  __int64 v65; // x8
  __int64 v66; // x9
  struct BattleResultBondsIconComponent_o *v67; // x1
  UnityEngine_Object_o *figureMoveRoot; // x21
  System_Int32_array **gameObject; // x0
  UnityEngine_GameObject_o **v70; // x21
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  __int64 v77; // x1
  __int64 v78; // x2
  System_Int32_array **v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t svtId; // w22
  int32_t svtLimit; // w23
  BattleResultBondsFigureComponent_o *bondsFigure; // x19
  UnityEngine_GameObject_o *v90; // x21
  System_Action_o *v91; // x24
  __int64 v92; // x0
  const MethodInfo *v93; // [xsp+0h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_T__o v94; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v95; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4215222 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Clear__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v11);
    sub_B0D8A4(&BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo, v12);
    sub_B0D8A4(&Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__, v13);
    sub_B0D8A4(&BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_16862/*"bit_result_levelup01"*/, v15);
    sub_B0D8A4(&StringLiteral_3101/*"CLOSE"*/, v16);
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, v17);
    sub_B0D8A4(&StringLiteral_3103/*"CLOSE_BOND_UP_ROOT"*/, v18);
    byte_4215222 = 1;
  }
  memset(&v95, 0, sizeof(v95));
  v19 = sub_B0D974(BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo, method, v2);
  BattleResultBondsComponent___c__DisplayClass61_0___ctor(
    (BattleResultBondsComponent___c__DisplayClass61_0_o *)v19,
    0LL);
  if ( !v19 )
    goto LABEL_70;
  *(_QWORD *)(v19 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v19 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  BondsIconArray = (System_Int32_array **)BattleResultBondsComponent__GetBondsIconArray(this, v27);
  *(_QWORD *)(v19 + 24) = BondsIconArray;
  sub_B0D840((BattleServantConfConponent_o *)(v19 + 24), BondsIconArray, v29, v30, v31, v32, v33, v34);
  colIndex = this->fields.colIndex;
  v38 = *(_QWORD *)(v19 + 24);
  *(_DWORD *)(v19 + 32) = colIndex;
  if ( !v38 )
    goto LABEL_70;
  while ( 1 )
  {
    if ( colIndex >= *(_DWORD *)(v38 + 24) )
    {
      myFsm = this->fields.myFsm;
      if ( this->fields.openBoundsFlg )
      {
        if ( !myFsm )
          goto LABEL_70;
        if ( this->fields.isMultiDeck )
          v41 = &StringLiteral_3103/*"CLOSE_BOND_UP_ROOT"*/;
        else
          v41 = &StringLiteral_5512/*"END_PROC"*/;
      }
      else
      {
        if ( !myFsm )
          goto LABEL_70;
        v41 = &StringLiteral_3101/*"CLOSE"*/;
      }
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v41, 0LL);
      return;
    }
    this->fields.colIndex = colIndex;
    v38 = *(_QWORD *)(v19 + 24);
    if ( !v38 )
      goto LABEL_70;
    v39 = *(int *)(v19 + 32);
    if ( (unsigned int)v39 >= *(_DWORD *)(v38 + 24) )
      goto LABEL_71;
    v40 = *(_QWORD *)(v38 + 8 * v39 + 32);
    if ( !v40 )
      goto LABEL_70;
    if ( *(_BYTE *)(v40 + 104) && *(_DWORD *)(v40 + 152) != *(_DWORD *)(v40 + 160) )
      break;
    colIndex = v39 + 1;
    *(_DWORD *)(v19 + 32) = colIndex;
  }
  v42 = sub_B0D974(BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo, v35, v36);
  BattleResultBondsComponent___c__DisplayClass61_1___ctor(
    (BattleResultBondsComponent___c__DisplayClass61_1_o *)v42,
    0LL);
  if ( !v42 )
    goto LABEL_70;
  *(_QWORD *)(v42 + 24) = v19;
  v49 = (__int64 *)(v42 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v42 + 24), (System_Int32_array **)v19, v43, v44, v45, v46, v47, v48);
  myFsm = (PlayMakerFSM_o *)this->fields.conflist;
  if ( !myFsm )
    goto LABEL_70;
  if ( SLODWORD(myFsm->fields.fsm) < 1 )
    goto LABEL_32;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v94,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)myFsm,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v95 = v94;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v95,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v95.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v95,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  myFsm = (PlayMakerFSM_o *)this->fields.conflist;
  if ( !myFsm )
    goto LABEL_70;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)myFsm,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
                                  (System_String_o *)StringLiteral_16862/*"bit_result_levelup01"*/,
                                  0LL);
      if ( myFsm )
      {
        klass = myFsm->klass;
        v53 = myFsm;
        if ( *(_WORD *)&myFsm->klass->_2.bitflags1 )
        {
          v54 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v54;
            p_offset += 2;
            if ( v54 >= *(unsigned __int16 *)&myFsm->klass->_2.bitflags1 )
              goto LABEL_43;
          }
          v56 = (__int64)(&klass->vtable._4_OnBeforeSerialize.method + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_43:
          v56 = sub_AA67A0(myFsm, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(PlayMakerFSM_o *, _QWORD, float))v56)(v53, *(_QWORD *)(v56 + 8), 0.0);
        myFsm = (PlayMakerFSM_o *)this->fields.levelUpSimpleAnim;
        if ( myFsm )
        {
          myFsm = (PlayMakerFSM_o *)SimpleAnimation__Play_50482404(
                                      (SimpleAnimation_o *)myFsm,
                                      (System_String_o *)StringLiteral_16862/*"bit_result_levelup01"*/,
                                      0LL);
          goto LABEL_55;
        }
      }
    }
LABEL_70:
    sub_B0D97C(myFsm);
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
                                (System_String_o *)StringLiteral_16862/*"bit_result_levelup01"*/,
                                0LL);
    if ( !myFsm )
      goto LABEL_70;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)myFsm, 0.0, 0LL);
    myFsm = (PlayMakerFSM_o *)this->fields.levelUpAnim;
    if ( !myFsm )
      goto LABEL_70;
    myFsm = (PlayMakerFSM_o *)UnityEngine_Animation__Play_50564840(
                                (UnityEngine_Animation_o *)myFsm,
                                (System_String_o *)StringLiteral_16862/*"bit_result_levelup01"*/,
                                0LL);
  }
LABEL_55:
  v64 = *v49;
  if ( !*v49 )
    goto LABEL_70;
  v65 = *(_QWORD *)(v64 + 24);
  if ( !v65 )
    goto LABEL_70;
  v66 = *(int *)(v64 + 32);
  if ( (unsigned int)v66 >= *(_DWORD *)(v65 + 24) )
  {
LABEL_71:
    v92 = sub_B0D9A8(myFsm);
    sub_B0D948(v92, 0LL);
  }
  v67 = *(struct BattleResultBondsIconComponent_o **)(v65 + 8 * v66 + 32);
  this->fields.openCollect = v67;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.openCollect,
    (System_Int32_array **)v67,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
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
    *(_QWORD *)(v42 + 16) = gameObject;
    v70 = (UnityEngine_GameObject_o **)(v42 + 16);
    sub_B0D840((BattleServantConfConponent_o *)(v42 + 16), gameObject, v71, v72, v73, v74, v75, v76);
    myFsm = *(PlayMakerFSM_o **)(v42 + 16);
    if ( !myFsm )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 0, 0LL);
  }
  else
  {
    myFsm = (PlayMakerFSM_o *)this->fields.figureRoot;
    if ( !myFsm )
      goto LABEL_70;
    v79 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myFsm, 0LL);
    *(_QWORD *)(v42 + 16) = v79;
    v70 = (UnityEngine_GameObject_o **)(v42 + 16);
    sub_B0D840((BattleServantConfConponent_o *)(v42 + 16), v79, v80, v81, v82, v83, v84, v85);
  }
  openCollect = this->fields.openCollect;
  if ( !openCollect )
    goto LABEL_70;
  svtId = openCollect->fields.svtId;
  svtLimit = openCollect->fields.svtLimit;
  bondsFigure = this->fields.bondsFigure;
  v90 = *v70;
  v91 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v77, v78);
  System_Action___ctor(
    v91,
    (Il2CppObject *)v42,
    Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__,
    0LL);
  if ( !bondsFigure )
    goto LABEL_70;
  BattleResultBondsFigureComponent__SetupFigure(bondsFigure, v90, svtId, svtLimit, 7, 0, 51, v91, v93);
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
  System_Action_o *v10; // x21
  SummonAssetManager_o *parentComp; // x0

  if ( (byte_4215228 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_BattleResultBondsComponent__checkShow_b__67_0__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v4);
    byte_4215228 = 1;
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
        Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
        v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
        System_Action___ctor(v10, (Il2CppObject *)this, Method_BattleResultBondsComponent__checkShow_b__67_0__, 0LL);
        if ( Instance )
        {
          SummonAssetManager__LoadSummonAssets(Instance, v10, 0LL);
          return;
        }
        goto LABEL_21;
      }
      parentComp = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
    sub_B0D97C(parentComp);
  }
  BattleResultComponent__showServantRewardAction((BattleResultComponent_o *)parentComp, 0LL, 1, 0LL);
}


void __fastcall BattleResultBondsComponent__closeBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct System_Collections_Generic_List_UIUnityRenderer__o *effectUIList; // x20
  int size; // w8
  int i; // w21
  const MethodInfo *v12; // x1
  struct BattleWindowComponent_o *confwindow; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  BattleWindowComponent_EndCall_o *v16; // x21

  if ( (byte_4215229 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultBondsComponent_endCloseBondUp__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIUnityRenderer__Clear__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__, v6);
    sub_B0D8A4(&SoundManager_TypeInfo, v7);
    byte_4215229 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_UIUnityRenderer__Clear__);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.parentComp;
  if ( !gameObject
    || (BattleResultComponent__setTouch((BattleResultComponent_o *)gameObject, 0, 0LL),
        (gameObject = (UnityEngine_Component_o *)this->fields.bondsFigure) == 0LL)
    || (BattleResultBondsFigureComponent__DestroyFigure((BattleResultBondsFigureComponent_o *)gameObject, v12),
        confwindow = this->fields.confwindow,
        v16 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v14, v15),
        BattleWindowComponent_EndCall___ctor(
          v16,
          (Il2CppObject *)this,
          Method_BattleResultBondsComponent_endCloseBondUp__,
          0LL),
        !confwindow) )
  {
LABEL_20:
    sub_B0D97C(gameObject);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))confwindow->klass->vtable._12_Close.method)(
    confwindow,
    v16,
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
  ServantFaceIconComponent_o *BondsIconArray; // x0
  struct UISprite_o *backSprite; // x21
  ServantFaceIconComponent_o *v13; // x20
  unsigned int v14; // w22
  __int64 v15; // x8
  __int64 v16; // x0

  if ( (byte_421522C & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, v9);
    byte_421522C = 1;
  }
  this->fields.resultAssetData = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.resultAssetData, 0LL, v2, v3, v4, v5, v6, v7);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    BondsIconArray = (ServantFaceIconComponent_o *)BattleResultBondsComponent__GetBondsIconArray(this, v10);
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
          v16 = sub_B0D9A8(BondsIconArray);
          sub_B0D948(v16, 0LL);
        }
      }
LABEL_18:
      sub_B0D97C(BondsIconArray);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultBondsComponent__endCloseBondUp(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_421522A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_421522A = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultBondsComponent__endMoveFigure(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  System_Text_StringBuilder_o *v39; // x20
  __int64 lvComp; // x0
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t friendshipRank; // w22
  int32_t svtId; // w21
  int v44; // w28
  Il2CppObject *current; // x23
  System_String_o *v46; // x0
  System_String_o *v47; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v49; // x1
  const MethodInfo *v50; // x5
  struct BattleResultBondsIconComponent_o *v51; // x8
  int32_t svtLimit; // w23
  int32_t ServantLimitCountSealAfter; // w23
  System_String_o *v54; // x0
  const MethodInfo *v55; // x5
  System_String_o *v56; // x0
  const MethodInfo *v57; // x5
  struct BattleResultBondsIconComponent_o *v58; // x8
  __int64 v59; // x1
  __int64 v60; // x2
  System_String_o *v61; // x0
  const MethodInfo *v62; // x5
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v63; // x22
  struct BattleFriendshipRewardInfo_array *rewardInfos; // x20
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v66; // x23
  int v67; // w21
  int CONF_SERVANT_COIN_PLUS_HEIGHT; // w25
  struct BattleResultBondsIconComponent_o *v69; // x8
  BattleFriendshipRewardInfo_o *v70; // x24
  GiftEntity_o *v71; // x25
  WarEntity_o *v72; // x0
  System_String_o *v73; // x26
  Il2CppObject *v74; // x0
  WarEntity_o *v75; // x0
  ServantEntity_o *v76; // x26
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x27
  int32_t v78; // w1
  System_String_o *v79; // x0
  const MethodInfo *v80; // x5
  bool v81; // w26
  Il2CppObject *Name; // x26
  System_String_o *v83; // x0
  System_String_o *v84; // x27
  int32_t IconImageId; // w0
  const MethodInfo *v86; // x5
  BattleResultBondsComponent_c *v87; // x0
  struct BattleFriendshipRewardInfo_array *v88; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  int v95; // w20
  UnityEngine_Transform_o *confRoot; // x21
  unsigned int localPosition; // s0
  int v98; // w8
  float v99; // s1
  int v100; // w20
  float v101; // s1
  int v102; // s2
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *rankupConfLabel; // x21
  struct BattleWindowComponent_o *confwindow; // x20
  __int64 v106; // x1
  __int64 v107; // x2
  BattleWindowComponent_EndCall_o *v108; // x21
  __int64 v109; // x0
  System_Text_StringBuilder_o *v110; // [xsp+8h] [xbp-B8h]
  int32_t key; // [xsp+14h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_T__o v112; // [xsp+18h] [xbp-A8h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+30h] [xbp-90h] BYREF
  System_String_o *countText; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v115; // [xsp+40h] [xbp-80h] BYREF
  System_String_o *nameText; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4215226 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultBondsComponent_openedBondUp__, method);
    sub_B0D8A4(&BattleResultBondsComponent_TypeInfo, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_B0D8A4(&DataManager_TypeInfo, v10);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v11);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v16);
    sub_B0D8A4(&int_TypeInfo, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__, v21);
    sub_B0D8A4(&System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo, v22);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v23);
    sub_B0D8A4(&NetworkManager_TypeInfo, v24);
    sub_B0D8A4(&ServantCommentManager_TypeInfo, v25);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v27);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v28);
    sub_B0D8A4(&SoundManager_TypeInfo, v29);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v30);
    sub_B0D8A4(&StringLiteral_11132/*"RESULT_BOUNDS_OPENQUEST"*/, v31);
    sub_B0D8A4(&StringLiteral_11135/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/, v32);
    sub_B0D8A4(&StringLiteral_11134/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, v33);
    sub_B0D8A4(&StringLiteral_11131/*"RESULT_BOUNDS_GET_COIN_NAME"*/, v34);
    sub_B0D8A4(&StringLiteral_11129/*"RESULT_BOUNDS_GETVOICE"*/, v35);
    sub_B0D8A4(&StringLiteral_23652/*"{0} {1}"*/, v36);
    sub_B0D8A4(&StringLiteral_1/*""*/, v37);
    sub_B0D8A4(&StringLiteral_11130/*"RESULT_BOUNDS_GET_COIN_COUNT"*/, v38);
    byte_4215226 = 1;
  }
  memset(&v115, 0, sizeof(v115));
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  v39 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, method, v2);
  System_Text_StringBuilder___ctor(v39, 0LL);
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
  lvComp = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !lvComp )
    goto LABEL_127;
  v110 = v39;
  lvComp = (__int64)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                      (clsQuestCheck_o *)lvComp,
                      svtId,
                      friendshipRank,
                      8,
                      0LL);
  if ( lvComp )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v112,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)lvComp,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    v44 = 0;
    v115 = v112;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v115,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
    {
      current = v115.fields.current;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11132/*"RESULT_BOUNDS_OPENQUEST"*/, 0LL);
      if ( !current )
        sub_B0D97C(v46);
      v47 = v46;
      QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
      v49 = System_String__Format(v47, QuestName, 0LL);
      BattleResultBondsComponent__addConfObject(this, v49, (float)v44 * 22.0, -1, 0, 0, v50);
      v44 += 3;
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v115,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  }
  else
  {
    v44 = 0;
  }
  v51 = this->fields.openCollect;
  if ( !v51 )
    goto LABEL_127;
  svtLimit = v51->fields.svtLimit;
  lvComp = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lvComp )
    goto LABEL_127;
  lvComp = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)lvComp,
                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
    v54 = LocalizationManager__Get((System_String_o *)StringLiteral_11135/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/, 0LL);
    BattleResultBondsComponent__addConfObject(this, v54, (float)v44 * 22.0, -1, 0, 1, v55);
    v44 += 4;
  }
  else
  {
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    lvComp = ServantCommentManager__IsOpenByServantFriendShip_27071084(
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
      v56 = LocalizationManager__Get((System_String_o *)StringLiteral_11134/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, 0LL);
      BattleResultBondsComponent__addConfObject(this, v56, (float)v44 * 22.0, -1, 0, 0, v57);
      v44 += 2;
    }
  }
  v58 = this->fields.openCollect;
  if ( !v58 )
    goto LABEL_127;
  if ( ServantVoiceMaster__isOpenByServantFriendShip(svtId, v58->fields.maxLimitCount, friendshipRank, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v61 = LocalizationManager__Get((System_String_o *)StringLiteral_11129/*"RESULT_BOUNDS_GETVOICE"*/, 0LL);
    BattleResultBondsComponent__addConfObject(this, v61, (float)v44 * 22.0, -1, 0, 0, v62);
    v44 += 2;
  }
  if ( this->fields.rewardInfos )
  {
    v63 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo,
                                                                                                    v59,
                                                                                                    v60);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v63,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    lvComp = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ItemMaster___);
    rewardInfos = this->fields.rewardInfos;
    if ( !rewardInfos )
      goto LABEL_127;
    max_length = rewardInfos->max_length;
    if ( max_length < 1 )
    {
      CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
      if ( !v63 )
        goto LABEL_127;
    }
    else
    {
      key = svtId;
      v66 = (DataMasterBase_WarMaster__WarEntity__int__o *)lvComp;
      v67 = 0;
      CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
      do
      {
        if ( v67 >= (unsigned int)max_length )
        {
          v109 = sub_B0D9A8(lvComp);
          sub_B0D948(v109, 0LL);
        }
        v69 = this->fields.openCollect;
        if ( !v69 )
          goto LABEL_127;
        v70 = rewardInfos->m_Items[v67];
        if ( !v70 )
          goto LABEL_127;
        if ( v69->fields.svtId == v70->fields.targetSvtId )
        {
          lvComp = (__int64)BattleFriendshipRewardInfo__getGiftEntity(v70, 0LL);
          if ( !lvComp )
            goto LABEL_127;
          v71 = (GiftEntity_o *)lvComp;
          GiftEntity__GetInfo((GiftEntity_o *)lvComp, &nameText, &countText, 0LL);
          lvComp = GiftEntity__isQp(v71, 0LL);
          if ( (lvComp & 1) != 0 )
          {
            nameText = countText;
            countText = (System_String_o *)StringLiteral_1/*""*/;
          }
          if ( v71->fields.type == 2 )
          {
            if ( !v66 )
              goto LABEL_127;
            v72 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                    v66,
                    v71->fields.objectId,
                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( v72 && v72->fields.bannerId == 29 )
            {
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v73 = LocalizationManager__Get((System_String_o *)StringLiteral_11130/*"RESULT_BOUNDS_GET_COIN_COUNT"*/, 0LL);
              LODWORD(v112.fields.list) = v71->fields.num;
              v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v112);
              countText = System_String__Format(v73, v74, 0LL);
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              lvComp = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !lvComp )
                goto LABEL_127;
              v75 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                      (DataMasterBase_WarMaster__WarEntity__int__o *)lvComp,
                      key,
                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( v75 )
              {
                v76 = (ServantEntity_o *)v75;
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
                  lvComp = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
                    v78 = -1;
                  else
                    v78 = lvComp;
                }
                else
                {
                  v78 = -1;
                }
                Name = (Il2CppObject *)ServantEntity__getName(v76, v78, -1, 0LL);
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v83 = LocalizationManager__Get((System_String_o *)StringLiteral_11131/*"RESULT_BOUNDS_GET_COIN_NAME"*/, 0LL);
                nameText = System_String__Format_43845440(v83, (Il2CppObject *)nameText, Name, 0LL);
              }
              v81 = 1;
            }
            else
            {
              v81 = 0;
            }
            v84 = System_String__Format_43845440(
                    (System_String_o *)StringLiteral_23652/*"{0} {1}"*/,
                    (Il2CppObject *)nameText,
                    (Il2CppObject *)countText,
                    0LL);
            IconImageId = GiftEntity__getIconImageId(v71, 0LL);
            BattleResultBondsComponent__addConfObject(this, v84, (float)v44 * 22.0, IconImageId, v81, 0, v86);
          }
          else
          {
            v79 = System_String__Format_43845440(
                    (System_String_o *)StringLiteral_23652/*"{0} {1}"*/,
                    (Il2CppObject *)nameText,
                    (Il2CppObject *)countText,
                    0LL);
            BattleResultBondsComponent__addConfObject(this, v79, (float)v44 * 22.0, -1, 0, 0, v80);
          }
          v87 = BattleResultBondsComponent_TypeInfo;
          v44 += 2;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v87 = BattleResultBondsComponent_TypeInfo;
          }
          CONF_SERVANT_COIN_PLUS_HEIGHT = v87->static_fields->CONF_SERVANT_COIN_PLUS_HEIGHT;
          lvComp = BattleFriendshipRewardInfo__isShow(v70, 0LL);
          if ( (lvComp & 1) != 0 )
          {
            if ( !v63 )
              goto LABEL_127;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v63,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v70,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__);
          }
        }
        max_length = rewardInfos->max_length;
        ++v67;
      }
      while ( v67 < max_length );
      if ( !v63 )
LABEL_127:
        sub_B0D97C(lvComp);
    }
    v88 = (struct BattleFriendshipRewardInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v63,
                                                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
    this->fields.showList = v88;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.showList,
      (System_Int32_array **)v88,
      v89,
      v90,
      v91,
      v92,
      v93,
      v94);
    this->fields.showIndex = 0;
  }
  else
  {
    CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
  }
  lvComp = (__int64)this->fields.confSprite;
  if ( v44 )
    v95 = v44;
  else
    v95 = 1;
  if ( !lvComp )
    goto LABEL_127;
  UIWidget__set_height((UIWidget_o *)lvComp, CONF_SERVANT_COIN_PLUS_HEIGHT + 22 * v95 + 120, 0LL);
  confRoot = this->fields.confRoot;
  if ( !confRoot )
    goto LABEL_127;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.confRoot, 0LL);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT >= 0 )
    v98 = CONF_SERVANT_COIN_PLUS_HEIGHT;
  else
    v98 = CONF_SERVANT_COIN_PLUS_HEIGHT + 1;
  v99 = (float)v95;
  v100 = v98 >> 1;
  v101 = (float)(v99 * 11.0) + (float)(v98 >> 1);
  v102 = 0;
  UnityEngine_Transform__set_localPosition(confRoot, *(UnityEngine_Vector3_o *)&localPosition, 0LL);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT )
  {
    lvComp = (__int64)this->fields.confwindow;
    if ( !lvComp )
      goto LABEL_127;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lvComp, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v100, 0LL);
    lvComp = (__int64)this->fields.confwindow;
    if ( !lvComp )
      goto LABEL_127;
    lvComp = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)lvComp + 424LL))(
               lvComp,
               *(_QWORD *)(*(_QWORD *)lvComp + 432LL));
  }
  if ( !v110 )
    goto LABEL_127;
  rankupConfLabel = this->fields.rankupConfLabel;
  lvComp = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v110->klass->vtable._3_ToString.method)(
             v110,
             v110->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !rankupConfLabel )
    goto LABEL_127;
  UILabel__set_text(rankupConfLabel, (System_String_o *)lvComp, 0LL);
  confwindow = this->fields.confwindow;
  v108 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v106, v107);
  BattleWindowComponent_EndCall___ctor(
    v108,
    (Il2CppObject *)this,
    Method_BattleResultBondsComponent_openedBondUp__,
    0LL);
  if ( !confwindow )
    goto LABEL_127;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))confwindow->klass->vtable._10_Open.method)(
    confwindow,
    v108,
    confwindow->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattleResultBondsComponent__finishUpdateValue(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v5; // x1
  void *BondsIconArray; // x0
  const MethodInfo *v7; // x1
  int v8; // w8
  _DWORD *v9; // x20
  unsigned int v10; // w21
  char *v11; // x22
  void **v12; // x22
  void *v13; // t1
  const MethodInfo *v14; // x1
  SePlayer_o *MeterSePlayer; // x0
  __int64 v16; // x0

  if ( (byte_4215221 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9321/*"NEXT"*/, method);
    sub_B0D8A4(&iTween_TypeInfo, v3);
    byte_4215221 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_42502584(gameObject, 0LL);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v5);
  if ( !BondsIconArray )
    goto LABEL_19;
  v8 = *((_DWORD *)BondsIconArray + 6);
  v9 = BondsIconArray;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= v8 )
        goto LABEL_18;
      v11 = (char *)&v9[2 * v10];
      v13 = (void *)*((_QWORD *)v11 + 4);
      v12 = (void **)(v11 + 32);
      BondsIconArray = v13;
      if ( !v13 )
        break;
      BondsIconArray = (void *)BattleResultBondsIconComponent__changeGauge(
                                 (BattleResultBondsIconComponent_o *)BondsIconArray,
                                 1.0,
                                 v7);
      if ( v10 >= v9[6] )
      {
LABEL_18:
        v16 = sub_B0D9A8(BondsIconArray);
        sub_B0D948(v16, 0LL);
      }
      BondsIconArray = *v12;
      if ( !*v12 )
        break;
      BattleResultBondsIconComponent__LayoutFriendshipValue((BattleResultBondsIconComponent_o *)BondsIconArray, v14);
      v8 = v9[6];
      if ( (int)++v10 >= v8 )
        goto LABEL_14;
    }
LABEL_19:
    sub_B0D97C(BondsIconArray);
  }
LABEL_14:
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  BondsIconArray = this->fields.myFsm;
  this->fields.bondsCountUp = 0;
  if ( !BondsIconArray )
    goto LABEL_19;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_9321/*"NEXT"*/, 0LL);
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
        v11 = sub_B0D9A8(this);
        sub_B0D948(v11, 0LL);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0LL;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= max_length )
    {
      v9 = sub_B0D9A8(this);
      sub_B0D948(v9, 0LL);
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
    sub_B0D97C(this);
  return (signed int)oldCollections->max_length > 1;
}


void __fastcall BattleResultBondsComponent__openedBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0

  if ( (byte_4215227 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5508/*"END_OPEN"*/, method);
    byte_4215227 = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__ResetPlayScreenTouch(parentComp, 0LL), (parentComp = this->fields.parentComp) == 0LL)
    || (BattleResultComponent__setTouch(parentComp, 1, 0LL),
        parentComp = (BattleResultComponent_o *)this->fields.myFsm,
        ++this->fields.colIndex,
        !parentComp) )
  {
    sub_B0D97C(parentComp);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)parentComp, (System_String_o *)StringLiteral_5508/*"END_OPEN"*/, 0LL);
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
  Il2CppObject *v3; // x19
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4211EB7 & 1) == 0 )
  {
    sub_B0D8A4(&BattleResultBondsComponent___c_TypeInfo, v1);
    byte_4211EB7 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleResultBondsComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleResultBondsComponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return col->fields.isUse;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_0(
        BattleResultBondsComponent___c_o *this,
        QuestRewardInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.type == 7 && x->fields.isNew;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_1(
        BattleResultBondsComponent___c_o *this,
        GetSvts_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v17; // x9
  char v18; // w8
  UnityEngine_GameObject_o *parent; // x20
  BattleResultBondsComponent___c__DisplayClass61_1_o *v20; // x21
  __int64 v21; // x1
  BattleResultBondsComponent___c__DisplayClass61_1_o *v22; // x22
  __int64 v23; // x1
  BattleResultBondsComponent___c__DisplayClass61_1_o *v24; // x22
  __int64 v25; // x1
  BattleResultBondsComponent___c__DisplayClass61_1_o *v26; // x22
  __int64 v27; // x1
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v28; // x8
  BattleResultBondsComponent___c__DisplayClass61_1_o *v29; // x22
  __int64 v30; // x1
  __int64 v31; // x1
  System_Collections_Hashtable_o *v32; // x0
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v33; // x8
  struct BattleResultBondsComponent_o *v34; // x8
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v35; // x8
  struct BattleResultBondsComponent_o *v36; // x8
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v37; // x8
  struct BattleResultBondsIconComponent_array *bondsIcons; // x9
  __int64 i; // x10
  __int64 v40; // x0
  __int64 v41; // x0
  char v42[4]; // [xsp+Ch] [xbp-34h] BYREF
  int v43; // [xsp+18h] [xbp-28h] BYREF
  int v44; // [xsp+1Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4211EB8 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, method);
    sub_B0D8A4(&object___TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&float_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_23394/*"x"*/, v6);
    sub_B0D8A4(&StringLiteral_9775/*"OPEN"*/, v7);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v8);
    sub_B0D8A4(&StringLiteral_21334/*"oncompletetarget"*/, v9);
    sub_B0D8A4(&StringLiteral_18412/*"endMoveFigure"*/, v10);
    sub_B0D8A4(&StringLiteral_20030/*"islocal"*/, v11);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v12);
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B0D8A4(&iTween_TypeInfo, v13);
    byte_4211EB8 = 1;
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
  v17 = v2->fields.CS___8__locals1;
  if ( !v17 )
    goto LABEL_73;
  v18 = (char)this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v17->fields.__4__this;
  if ( !this )
    goto LABEL_73;
  if ( (v18 & 1) == 0 )
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
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B0D8BC(object___TypeInfo, 10LL);
  if ( !this )
    goto LABEL_73;
  v20 = this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_23394/*"x"*/;
  if ( StringLiteral_23394/*"x"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B0D964(
                                                                   StringLiteral_23394/*"x"*/,
                                                                   v20->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
    v21 = StringLiteral_23394/*"x"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( !LODWORD(v20->fields.CS___8__locals1) )
    goto LABEL_74;
  v20[1].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)v21;
  sub_B0D840(&v20[1], v21);
  v44 = -1007026176;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v44);
  v22 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B0D964(this, v20->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
  }
  if ( LODWORD(v20->fields.CS___8__locals1) <= 1 )
    goto LABEL_74;
  v20[1].monitor = v22;
  sub_B0D840(&v20[1].monitor, v22);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22753/*"time"*/;
  if ( StringLiteral_22753/*"time"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B0D964(
                                                                   StringLiteral_22753/*"time"*/,
                                                                   v20->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
    v23 = StringLiteral_22753/*"time"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( LODWORD(v20->fields.CS___8__locals1) <= 2 )
    goto LABEL_74;
  v20[1].fields.parent = (struct UnityEngine_GameObject_o *)v23;
  sub_B0D840(&v20[1].fields, v23);
  v43 = 1061997773;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v43);
  v24 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B0D964(this, v20->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
  }
  if ( LODWORD(v20->fields.CS___8__locals1) <= 3 )
    goto LABEL_74;
  v20[1].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v24;
  sub_B0D840(&v20[1].fields.CS___8__locals1, v24);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_20030/*"islocal"*/;
  if ( StringLiteral_20030/*"islocal"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B0D964(
                                                                   StringLiteral_20030/*"islocal"*/,
                                                                   v20->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
    v25 = StringLiteral_20030/*"islocal"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( LODWORD(v20->fields.CS___8__locals1) <= 4 )
    goto LABEL_74;
  v20[2].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)v25;
  sub_B0D840(&v20[2], v25);
  v42[0] = 1;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(bool_TypeInfo, v42);
  v26 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B0D964(this, v20->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
  }
  if ( LODWORD(v20->fields.CS___8__locals1) <= 5 )
    goto LABEL_74;
  v20[2].monitor = v26;
  sub_B0D840(&v20[2].monitor, v26);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_21334/*"oncompletetarget"*/;
  if ( StringLiteral_21334/*"oncompletetarget"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B0D964(
                                                                   StringLiteral_21334/*"oncompletetarget"*/,
                                                                   v20->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
    v27 = StringLiteral_21334/*"oncompletetarget"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( LODWORD(v20->fields.CS___8__locals1) <= 6 )
    goto LABEL_74;
  v20[2].fields.parent = (struct UnityEngine_GameObject_o *)v27;
  sub_B0D840(&v20[2].fields, v27);
  v28 = v2->fields.CS___8__locals1;
  if ( !v28 || (this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v28->fields.__4__this) == 0LL )
LABEL_73:
    sub_B0D97C(this);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
  v29 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B0D964(this, v20->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
  }
  if ( LODWORD(v20->fields.CS___8__locals1) <= 7 )
    goto LABEL_74;
  v20[2].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v29;
  sub_B0D840(&v20[2].fields.CS___8__locals1, v29);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_21332/*"oncomplete"*/;
  if ( StringLiteral_21332/*"oncomplete"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B0D964(
                                                                   StringLiteral_21332/*"oncomplete"*/,
                                                                   v20->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
    v30 = StringLiteral_21332/*"oncomplete"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( LODWORD(v20->fields.CS___8__locals1) <= 8 )
    goto LABEL_74;
  v20[3].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)v30;
  sub_B0D840(&v20[3], v30);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_18412/*"endMoveFigure"*/;
  if ( !StringLiteral_18412/*"endMoveFigure"*/ )
  {
    v31 = 0LL;
    goto LABEL_58;
  }
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B0D964(
                                                                 StringLiteral_18412/*"endMoveFigure"*/,
                                                                 v20->klass->_1.element_class);
  if ( !this )
  {
LABEL_75:
    v41 = sub_B0D99C();
    sub_B0D948(v41, 0LL);
  }
  v31 = StringLiteral_18412/*"endMoveFigure"*/;
LABEL_58:
  if ( LODWORD(v20->fields.CS___8__locals1) <= 9 )
    goto LABEL_74;
  v20[3].monitor = (void *)v31;
  sub_B0D840(&v20[3].monitor, v31);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v32 = iTween__Hash((System_Object_array *)v20, 0LL);
  iTween__MoveFrom_42386240(parent, v32, 0LL);
LABEL_63:
  v33 = v2->fields.CS___8__locals1;
  if ( !v33 )
    goto LABEL_73;
  v34 = v33->fields.__4__this;
  if ( !v34 )
    goto LABEL_73;
  v34->fields.openBoundsFlg = 1;
  v35 = v2->fields.CS___8__locals1;
  if ( !v35 )
    goto LABEL_73;
  v36 = v35->fields.__4__this;
  if ( !v36 )
    goto LABEL_73;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v36->fields.myFsm;
  if ( !this )
    goto LABEL_73;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9775/*"OPEN"*/, 0LL);
  v37 = v2->fields.CS___8__locals1;
  if ( !v37 )
    goto LABEL_73;
  bondsIcons = v37->fields.bondsIcons;
  if ( !bondsIcons )
    goto LABEL_73;
  i = v37->fields.i;
  if ( (unsigned int)i >= bondsIcons->max_length )
  {
LABEL_74:
    v40 = sub_B0D9A8(this);
    sub_B0D948(v40, 0LL);
  }
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v37->fields.__4__this;
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

  if ( (byte_4211EB9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4211EB9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CreateServantCoinConfirmDialog(Instance, 1, this->fields.coin, 0LL, 0LL);
}