void __fastcall BattleResultBondsComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleResultBondsComponent_c *v14; // x8
  struct BattleResultBondsComponent_StaticFields *static_fields; // x0
  System_Int32_array **v16; // x1
  struct BattleResultBondsComponent_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42E963E & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultBondsComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_7043/*"GetNewSvt"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_7032/*"GetExistSvt"*/, v11, v12, v13);
    byte_42E963E = 1;
  }
  BattleResultBondsComponent_TypeInfo->static_fields->SVT_GAP_5 = 178.0;
  BattleResultBondsComponent_TypeInfo->static_fields->SVT_GAP_6 = 150.0;
  v14 = BattleResultBondsComponent_TypeInfo;
  BattleResultBondsComponent_TypeInfo->static_fields->CONF_LABEL_MAX_WIDTH = 464;
  v14->static_fields->CONF_SERVANT_COIN_PLUS_HEIGHT = 18;
  static_fields = v14->static_fields;
  v16 = (System_Int32_array **)StringLiteral_7043/*"GetNewSvt"*/;
  static_fields->GET_NEW_SVT_KEY = (struct System_String_o *)StringLiteral_7043/*"GetNewSvt"*/;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->GET_NEW_SVT_KEY, v16, v2, v3, v4, v5, v6, v7);
  v17 = BattleResultBondsComponent_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_7032/*"GetExistSvt"*/;
  v17->GET_EXIST_SVT_KEY = (struct System_String_o *)StringLiteral_7032/*"GetExistSvt"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v17->GET_EXIST_SVT_KEY, v18, v19, v20, v21, v22, v23, v24);
}


void __fastcall BattleResultBondsComponent___ctor(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  BattleResultBondsFigureComponent_o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_42E963D & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultBondsFigureComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo, v14, v15, v16);
    byte_42E963D = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.conflist = (struct System_Collections_Generic_List_GameObject__o *)v17;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.conflist,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.buddyPointInfoWindowHeight = 366;
  this->fields.tempSaveTimeScale = 1.0;
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
  this->fields.bondsList = (struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *)v24;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.bondsList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (BattleResultBondsFigureComponent_o *)sub_B5D694(BattleResultBondsFigureComponent_TypeInfo);
  BattleResultBondsFigureComponent___ctor(v31, 0LL);
  this->fields.bondsFigure = v31;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.bondsFigure,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleResultBondsComponent__CheckFormalJoin(
        BattleResultBondsComponent_o *this,
        BattleResultBondsIconComponent_o *collect,
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
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  DataManager_o *Instance; // x0
  __int64 v55; // x1
  struct GetSvts_array *getJoinSvtList; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v57; // x21
  __int64 v58; // x26
  int max_length; // w9
  GetSvts_o *v60; // x8
  UserServantEntity_o *v61; // x24
  EventServantEntity_o *EventServant; // x22
  BattleResultBondsComponent___c_c *v63; // x0
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__62_0; // x23
  Il2CppObject *v66; // x25
  struct BattleResultBondsComponent___c_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x25
  __int64 v75; // x24
  System_Int32_array **v76; // x23
  GetSvtCoin_o *v77; // x25
  WarEntity_o *v78; // x8
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_String_o *v91; // x24
  CommonUI_o *v92; // x25
  __int64 v93; // x0
  __int64 v94; // x0
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_42E962F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)collect, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_SvtCoinMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v18, v19, v20);
    sub_B5D5C4(&GetSvtCoin___TypeInfo, v21, v22, v23);
    sub_B5D5C4(&GetSvtCoin_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__, v36, v37, v38);
    sub_B5D5C4(&Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__, v39, v40, v41);
    sub_B5D5C4(&BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&BattleResultBondsComponent___c_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_12586/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_18230/*"dialogIgnoreTime"*/, v51, v52, v53);
    byte_42E962F = 1;
  }
  entity = 0LL;
  if ( this->fields.getJoinSvtList && !this->fields.isWarboard )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___),
          (getJoinSvtList = this->fields.getJoinSvtList) == 0LL) )
    {
LABEL_49:
      sub_B5D69C(Instance, v55);
    }
    v57 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
    v58 = 0LL;
    while ( 1 )
    {
      max_length = getJoinSvtList->max_length;
      if ( (int)v58 >= max_length )
        break;
      if ( (unsigned int)v58 >= max_length )
        goto LABEL_50;
      v60 = getJoinSvtList->m_Items[v58];
      if ( !v60 )
        goto LABEL_49;
      if ( v60->fields.isNew )
      {
        UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_18230/*"dialogIgnoreTime"*/, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      else
      {
        if ( !v57 )
          goto LABEL_49;
        Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      v57,
                                      v60->fields.userSvtId,
                                      (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( Instance )
        {
          v61 = (UserServantEntity_o *)Instance;
          Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
          if ( !collect )
            goto LABEL_49;
          if ( (_DWORD)Instance == collect->fields.svtId )
          {
            EventServant = UserServantEntity__getEventServant(v61, 0LL);
            if ( EventServant
              || (Instance = (DataManager_o *)UserServantEntity__getEventServantIgnoreEnd(v61, 0LL),
                  (EventServant = (EventServantEntity_o *)Instance) != 0LL) )
            {
              v63 = BattleResultBondsComponent___c_TypeInfo;
              if ( (BYTE3(BattleResultBondsComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
                v63 = BattleResultBondsComponent___c_TypeInfo;
              }
              static_fields = v63->static_fields;
              _9__62_0 = static_fields->__9__62_0;
              if ( !_9__62_0 )
              {
                if ( (BYTE3(v63->vtable._0_Equals.methodPtr) & 4) != 0 && !v63->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v63);
                  static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
                }
                v66 = (Il2CppObject *)static_fields->__9;
                _9__62_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                System_Action___ctor(
                  _9__62_0,
                  v66,
                  Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__,
                  0LL);
                v67 = BattleResultBondsComponent___c_TypeInfo->static_fields;
                v67->__9__62_0 = _9__62_0;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&v67->__9__62_0,
                  (System_Int32_array **)_9__62_0,
                  v68,
                  v69,
                  v70,
                  v71,
                  v72,
                  v73);
              }
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SvtCoinMaster___);
              Instance = (DataManager_o *)UserServantEntity__getSvtId(v61, 0LL);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_49;
              Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                            Master_WarQuestSelectionMaster,
                                            &entity,
                                            (int32_t)Instance,
                                            (const MethodInfo_23FAE6C *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_49;
                if ( *(&entity->fields.id + 1) >= 1 )
                {
                  v75 = sub_B5D694(BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo);
                  BattleResultBondsComponent___c__DisplayClass62_0___ctor(
                    (BattleResultBondsComponent___c__DisplayClass62_0_o *)v75,
                    0LL);
                  v76 = (System_Int32_array **)sub_B5D5DC(GetSvtCoin___TypeInfo, 1LL);
                  v77 = (GetSvtCoin_o *)sub_B5D694(GetSvtCoin_TypeInfo);
                  GetSvtCoin___ctor(v77, 0LL);
                  v78 = entity;
                  if ( !entity )
                    goto LABEL_49;
                  if ( !v77 )
                    goto LABEL_49;
                  v77->fields.svtId = entity->fields.id;
                  v77->fields.num = *(&v78->fields.id + 1);
                  v77->fields.itemId = (int32_t)v78->fields.age;
                  if ( !v76 )
                    goto LABEL_49;
                  Instance = (DataManager_o *)sub_B5D684(v77, *(_QWORD *)&(*v76)->m_Items[9]);
                  if ( !Instance )
                  {
                    v94 = sub_B5D6BC(0LL);
                    sub_B5D668(v94, 0LL);
                  }
                  if ( !*((_DWORD *)v76 + 6) )
                  {
LABEL_50:
                    v93 = sub_B5D6C8(Instance);
                    sub_B5D668(v93, 0LL);
                  }
                  v76[4] = (System_Int32_array *)v77;
                  sub_B5D560(
                    (BattleServantConfConponent_o *)(v76 + 4),
                    (System_Int32_array **)v77,
                    v79,
                    v80,
                    v81,
                    v82,
                    v83,
                    v84);
                  if ( !v75 )
                    goto LABEL_49;
                  *(_QWORD *)(v75 + 16) = v76;
                  sub_B5D560((BattleServantConfConponent_o *)(v75 + 16), v76, v85, v86, v87, v88, v89, v90);
                  _9__62_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__62_0,
                    (Il2CppObject *)v75,
                    Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__,
                    0LL);
                }
              }
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v91 = LocalizationManager__Get((System_String_o *)StringLiteral_12586/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0LL);
              v92 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              Instance = (DataManager_o *)EventServantEntity__GetGetMessage(EventServant, 0LL);
              if ( !v92 )
                goto LABEL_49;
              CommonUI__OpenNotificationDialog(
                v92,
                v91,
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
      ++v58;
      if ( !getJoinSvtList )
        goto LABEL_49;
    }
  }
}


void __fastcall BattleResultBondsComponent__Close(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleWindowComponent_o *multiDeckWindow; // x20
  BattleWindowComponent_EndCall_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E9637 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultBondsComponent_endClose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    byte_42E9637 = 1;
  }
  if ( this->fields.isMultiDeck )
    multiDeckWindow = this->fields.multiDeckWindow;
  else
    multiDeckWindow = this->fields.window;
  v9 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v9, (Il2CppObject *)this, Method_BattleResultBondsComponent_endClose__, 0LL);
  if ( !multiDeckWindow )
    sub_B5D69C(v10, v11);
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))multiDeckWindow->klass->vtable._12_Close.method)(
    multiDeckWindow,
    v9,
    multiDeckWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultBondsComponent__CloseBondUpRoot(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *upRoot; // x0

  if ( (byte_42E963C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E963C = 1;
  }
  upRoot = this->fields.upRoot;
  if ( !upRoot
    || (UnityEngine_GameObject__SetActive(upRoot, 0, 0LL),
        (upRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(upRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)upRoot, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
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
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_GameObject_o *v22; // x21
  UnityEngine_Transform_o *v23; // x22
  UnityEngine_Transform_o *transform; // x22
  int v25; // s0
  UnityEngine_Transform_o *v28; // x22
  int v29; // s0
  int parentComp; // w8
  BattleResultBondsComponent_o *v33; // x21
  unsigned int v34; // w22
  __int64 v35; // x0

  v8 = this;
  if ( (byte_42E9631 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)data, (_DWORD)targetIcon, effectName);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v15, v16, v17);
    this = (BattleResultBondsComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    byte_42E9631 = 1;
  }
  if ( !data )
    goto LABEL_20;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               effectName,
                                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleResultBondsComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           Object_WarBoardWaitTimeSetting,
                                           (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_20;
  v22 = (UnityEngine_GameObject_o *)this;
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !targetIcon )
    goto LABEL_20;
  v23 = (UnityEngine_Transform_o *)this;
  this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)targetIcon,
                                           0LL);
  if ( !v23 )
    goto LABEL_20;
  UnityEngine_Transform__set_parent(v23, (UnityEngine_Transform_o *)this, 0LL);
  transform = UnityEngine_GameObject__get_transform(v22, 0LL);
  *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v25, 0LL);
  v28 = UnityEngine_GameObject__get_transform(v22, 0LL);
  *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Vector3__get_one(0LL);
  if ( !v28 )
    goto LABEL_20;
  UnityEngine_Transform__set_localScale(v28, *(UnityEngine_Vector3_o *)&v29, 0LL);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                           v22,
                                           (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !this )
    goto LABEL_20;
  parentComp = (int)this->fields.parentComp;
  v33 = this;
  if ( parentComp >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      if ( v34 >= parentComp )
      {
        v35 = sub_B5D6C8(this);
        sub_B5D668(v35, 0LL);
      }
      this = (BattleResultBondsComponent_o *)*((_QWORD *)&v33->fields.myFsm + (int)v34);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0LL);
      parentComp = (int)v33->fields.parentComp;
      if ( (int)++v34 >= parentComp )
        goto LABEL_18;
    }
LABEL_20:
    sub_B5D69C(this, data);
  }
LABEL_18:
  this = (BattleResultBondsComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_20;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v33,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void __fastcall BattleResultBondsComponent__DeleteGetJoinSvtData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  BattleResultBondsComponent_c *v4; // x0

  if ( (byte_42E9626 & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultBondsComponent_TypeInfo, v1, v2, v3);
    byte_42E9626 = 1;
  }
  v4 = BattleResultBondsComponent_TypeInfo;
  if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
    v4 = BattleResultBondsComponent_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v4->static_fields->GET_EXIST_SVT_KEY, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(BattleResultBondsComponent_TypeInfo->static_fields->GET_NEW_SVT_KEY, 0LL);
}


BattleResultBondsIconComponent_array *__fastcall BattleResultBondsComponent__GetBondsIconArray(
        BattleResultBondsComponent_o *this,
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  BattleServantConfConponent_o *p_bondsIconArray; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  __int64 v28; // x1
  struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *bondsList; // x0
  __int64 v30; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E9639 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v23, v24, v25);
    byte_42E9639 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  if ( this->fields.isMultiDeck )
  {
    p_bondsIconArray = (BattleServantConfConponent_o *)&this->fields.bondsIconArray;
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.bondsIconArray, 0LL) )
    {
      v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v27,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
      bondsList = this->fields.bondsList;
      if ( !bondsList )
        goto LABEL_17;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v40,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bondsList,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v40,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
      {
        if ( !v40.fields.current )
          sub_B5D69C(0LL, v30);
        BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                          (BattleResultBondsDeckPerWaveComponent_o *)v40.fields.current,
                                                                          0LL);
        if ( !v27 )
          sub_B5D69C(BondsIconArray, BondsIconArray);
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v27,
          BondsIconArray,
          (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v40,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
      if ( !v27 )
LABEL_17:
        sub_B5D69C(bondsList, v28);
      v32 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                     (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
      p_bondsIconArray->klass = (BattleServantConfConponent_c *)v32;
      sub_B5D560(p_bondsIconArray, v32, v33, v34, v35, v36, v37, v38);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleWindowComponent_o *window; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Object_o *multiDeckWindow; // x20

  if ( (byte_42E9627 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E9627 = 1;
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
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v12;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.effectUIList,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
    sub_B5D69C(window, method);
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

  if ( (byte_42E9628 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)oldCollects, (_DWORD)inRewardInfos, resultAsset);
    byte_42E9628 = 1;
  }
  this->fields.oldCollections = oldCollects;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.oldCollections,
    (System_Int32_array **)oldCollects,
    (System_String_array **)inRewardInfos,
    (System_String_array **)resultAsset,
    *(System_Boolean_array ***)&baseFriendshipExp,
    (System_Int32_array **)getJoinSvts,
    (System_Int32_array *)inIsMultiDeck,
    (System_Int32_array *)method);
  this->fields.rewardInfos = inRewardInfos;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.rewardInfos,
    (System_Int32_array **)inRewardInfos,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.resultAssetData = resultAsset;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resultAssetData,
    (System_Int32_array **)resultAsset,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.getJoinSvtList = getJoinSvts;
  sub_B5D560(
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  __int64 v16; // x25
  struct BattleResultBondsIconComponent_array *collects; // x8
  struct BattleResultBondsIconComponent_array *v18; // x8
  struct BattleResultBondsIconComponent_array *v19; // x8
  struct BattleResultBondsIconComponent_array *v20; // x8
  float v21; // s8
  struct BattleResultBondsIconComponent_array *v22; // x8
  UnityEngine_Component_o *v23; // x8
  __int64 v24; // x24
  float v25; // s9
  int v26; // w25
  float v27; // s10
  struct BattleResultBondsIconComponent_array *v28; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x8
  UnityEngine_Object_o *bgFrame; // x20
  __int64 v32; // x0
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  v11 = targetIndex;
  v12 = this;
  if ( (byte_42E963A & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultBondsComponent_TypeInfo, targetIndex, cnt, isNoFollower);
    this = (BattleResultBondsComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    byte_42E963A = 1;
  }
  if ( (int)v11 < cnt )
  {
    v16 = 8LL * (int)v11 + 32;
    do
    {
      collects = v12->fields.collects;
      if ( !collects )
        goto LABEL_54;
      if ( v11 >= collects->max_length )
        goto LABEL_55;
      this = *(BattleResultBondsComponent_o **)((char *)&collects->obj.klass + v16);
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
      v18 = v12->fields.collects;
      if ( !v18 )
        goto LABEL_54;
      if ( v11 >= v18->max_length )
        goto LABEL_55;
      this = *(BattleResultBondsComponent_o **)((char *)&v18->obj.klass + v16);
      if ( !this )
        goto LABEL_54;
      BattleResultBondsIconComponent__SetBuddyPointInfo((BattleResultBondsIconComponent_o *)this, 0LL, 0, 0LL);
      v19 = v12->fields.collects;
      if ( !v19 )
        goto LABEL_54;
      if ( v11 >= v19->max_length )
        goto LABEL_55;
      this = *(BattleResultBondsComponent_o **)((char *)&v19->obj.klass + v16);
      if ( !this )
        goto LABEL_54;
      this = (BattleResultBondsComponent_o *)BattleResultBondsIconComponent__changeGauge(
                                               (BattleResultBondsIconComponent_o *)this,
                                               0.0,
                                               0LL);
      v20 = v12->fields.collects;
      if ( !v20 )
        goto LABEL_54;
      if ( v11 >= v20->max_length )
        goto LABEL_55;
      this = *(BattleResultBondsComponent_o **)((char *)&v20->obj.klass + v16);
      if ( !this )
        goto LABEL_54;
      BattleResultBondsIconComponent__InitBuddyPointInfo((BattleResultBondsIconComponent_o *)this, 0LL);
      ++v11;
      v16 += 8LL;
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
    v21 = *(float *)(*(_QWORD *)&this->fields.buddyPointInfoWindowHeight + 4LL);
  }
  else
  {
    if ( (WORD1(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
      this = (BattleResultBondsComponent_o *)BattleResultBondsComponent_TypeInfo;
    }
    v22 = v12->fields.collects;
    if ( !v22 )
      goto LABEL_54;
    if ( v22->max_length <= cnt )
    {
LABEL_55:
      v32 = sub_B5D6C8(this);
      sub_B5D668(v32, 0LL);
    }
    v23 = (UnityEngine_Component_o *)v22->m_Items[cnt];
    if ( !v23 )
      goto LABEL_54;
    v21 = **(float **)&this->fields.buddyPointInfoWindowHeight;
    this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_gameObject(v23, 0LL);
    if ( !this )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  if ( cnt >= 1 )
  {
    v24 = 0LL;
    v25 = 0.0;
    v26 = 4;
    v27 = (float)(1 - cnt) * 0.5;
    do
    {
      if ( isNoFollower )
        v25 = (float)v26;
      v28 = v12->fields.collects;
      if ( !v28 )
        goto LABEL_54;
      if ( (unsigned int)v24 >= v28->max_length )
        goto LABEL_55;
      this = (BattleResultBondsComponent_o *)v28->m_Items[v24];
      if ( !this )
        goto LABEL_54;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v21 * v27) - v25, 0LL);
      ++v24;
      v27 = v27 + 1.0;
      v26 -= 2;
    }
    while ( (int)v24 < cnt );
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
      || (v33.fields.y = 13.0,
          v33.fields.x = 0.0,
          v33.fields.z = 0.0,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v33, 0LL),
          (this = (BattleResultBondsComponent_o *)v12->fields.window) == 0LL) )
    {
LABEL_54:
      sub_B5D69C(this, *(_QWORD *)&targetIndex);
    }
    (*(void (__fastcall **)(BattleResultBondsComponent_o *, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
      this,
      this->klass[1]._1.element_class);
  }
}


void __fastcall BattleResultBondsComponent__Open(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  BattleResultBondsIconComponent_array *BondsIconArray; // x20
  BattleResultBondsComponent___c_c *v30; // x8
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__53_0; // x21
  Il2CppObject *v33; // x22
  struct BattleResultBondsComponent___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL4 isMultiDeck; // w8
  struct BattleWindowComponent_o *v44; // x20
  __int64 *v45; // x8
  BattleWindowComponent_EndCall_o *v46; // x21

  if ( (byte_42E962B & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_BattleResultBondsIconComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattleResultBondsComponent_OpenEnd__, v5, v6, v7);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_BattleResultBondsIconComponent__bool___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_BattleResultBondsIconComponent__bool__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_BattleResultBondsComponent___c__Open_b__53_0__, v17, v18, v19);
    sub_B5D5C4(&BattleResultBondsComponent___c_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_5569/*"END_OPEN"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_12404/*"SKIP"*/, v26, v27, v28);
    byte_42E962B = 1;
  }
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, method);
  v30 = BattleResultBondsComponent___c_TypeInfo;
  if ( (BYTE3(BattleResultBondsComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
    v30 = BattleResultBondsComponent___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__53_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__53_0;
  if ( !_9__53_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__53_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleResultBondsIconComponent__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__53_0,
      v33,
      Method_BattleResultBondsComponent___c__Open_b__53_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleResultBondsIconComponent__bool___ctor__);
    v34 = BattleResultBondsComponent___c_TypeInfo->static_fields;
    v34->__9__53_0 = (struct System_Func_BattleResultBondsIconComponent__bool__o *)_9__53_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v34->__9__53_0,
      (System_Int32_array **)_9__53_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  if ( BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
         (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)BondsIconArray,
         (System_Func_T__bool__o *)_9__53_0,
         (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_BattleResultBondsIconComponent___) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      isMultiDeck = this->fields.isMultiDeck;
      this->fields.openBoundsFlg = 0;
      this->fields.colIndex = 0;
      this->fields.bondsCountUp = 1;
      v44 = isMultiDeck ? this->fields.multiDeckWindow : this->fields.window;
      v46 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
      BattleWindowComponent_EndCall___ctor(v46, (Il2CppObject *)this, Method_BattleResultBondsComponent_OpenEnd__, 0LL);
      if ( v44 )
      {
        ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v44->klass->vtable._10_Open.method)(
          v44,
          v46,
          v44->klass->vtable._11_CompOpen.methodPtr);
        gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
        if ( gameObject )
        {
          v45 = &StringLiteral_5569/*"END_OPEN"*/;
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    sub_B5D69C(gameObject, v41);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !gameObject )
    goto LABEL_22;
  v45 = &StringLiteral_12404/*"SKIP"*/;
LABEL_21:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)*v45, 0LL);
}


void __fastcall BattleResultBondsComponent__OpenEnd(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Object_array *v47; // x21
  System_Int32_array **v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x22
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
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x1
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **v97; // x1
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Int32_array **v104; // x1
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **v111; // x22
  System_Collections_Hashtable_o *v112; // x0
  const MethodInfo *v113; // x1
  int max_length; // w8
  BattleResultBondsIconComponent_array *v115; // x20
  unsigned int v116; // w21
  System_String_o *CommonSeName; // x20
  struct SePlayer_o *v118; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  __int64 v125; // x0
  __int64 v126; // x0
  int v127; // [xsp+Ch] [xbp-34h] BYREF
  int v128; // [xsp+18h] [xbp-28h] BYREF
  int v129; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42E962C & 1) == 0 )
  {
    sub_B5D5C4(&object___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SeManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&float_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_19153/*"from"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_21551/*"onupdate"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_15227/*"UpdateValue"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_23019/*"to"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_18978/*"finishUpdateValue"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v32, v33, v34);
    sub_B5D5C4(&iTween_TypeInfo, v35, v36, v37);
    byte_42E962C = 1;
  }
  if ( !this->fields.bondsCountUp )
    return;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B5D5DC(object___TypeInfo, 10LL);
  if ( !BondsIconArray )
LABEL_68:
    sub_B5D69C(BondsIconArray, v40);
  v47 = (System_Object_array *)BondsIconArray;
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_19153/*"from"*/;
  if ( StringLiteral_19153/*"from"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B5D684(
                                                               StringLiteral_19153/*"from"*/,
                                                               v47->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v48 = (System_Int32_array **)StringLiteral_19153/*"from"*/;
  }
  else
  {
    v48 = 0LL;
  }
  if ( !v47->max_length )
    goto LABEL_67;
  v47->m_Items[0] = (Il2CppObject *)v48;
  sub_B5D560((BattleServantConfConponent_o *)v47->m_Items, v48, v41, v42, v43, v44, v45, v46);
  v129 = 0;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v129);
  v55 = (System_Int32_array **)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B5D684(
                                                               BondsIconArray,
                                                               v47->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
  }
  if ( v47->max_length <= 1 )
    goto LABEL_67;
  v47->m_Items[1] = (Il2CppObject *)v55;
  sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[1], v55, v49, v50, v51, v52, v53, v54);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_23019/*"to"*/;
  if ( StringLiteral_23019/*"to"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B5D684(
                                                               StringLiteral_23019/*"to"*/,
                                                               v47->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v62 = (System_Int32_array **)StringLiteral_23019/*"to"*/;
  }
  else
  {
    v62 = 0LL;
  }
  if ( v47->max_length <= 2 )
    goto LABEL_67;
  v47->m_Items[2] = (Il2CppObject *)v62;
  sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[2], v62, v56, v57, v58, v59, v60, v61);
  v128 = 1065353216;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v128);
  v69 = (System_Int32_array **)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B5D684(
                                                               BondsIconArray,
                                                               v47->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
  }
  if ( v47->max_length <= 3 )
    goto LABEL_67;
  v47->m_Items[3] = (Il2CppObject *)v69;
  sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[3], v69, v63, v64, v65, v66, v67, v68);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_21551/*"onupdate"*/;
  if ( StringLiteral_21551/*"onupdate"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B5D684(
                                                               StringLiteral_21551/*"onupdate"*/,
                                                               v47->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v76 = (System_Int32_array **)StringLiteral_21551/*"onupdate"*/;
  }
  else
  {
    v76 = 0LL;
  }
  if ( v47->max_length <= 4 )
    goto LABEL_67;
  v47->m_Items[4] = (Il2CppObject *)v76;
  sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[4], v76, v70, v71, v72, v73, v74, v75);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_15227/*"UpdateValue"*/;
  if ( StringLiteral_15227/*"UpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B5D684(
                                                               StringLiteral_15227/*"UpdateValue"*/,
                                                               v47->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v83 = (System_Int32_array **)StringLiteral_15227/*"UpdateValue"*/;
  }
  else
  {
    v83 = 0LL;
  }
  if ( v47->max_length <= 5 )
    goto LABEL_67;
  v47->m_Items[5] = (Il2CppObject *)v83;
  sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[5], v83, v77, v78, v79, v80, v81, v82);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_21542/*"oncomplete"*/;
  if ( StringLiteral_21542/*"oncomplete"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B5D684(
                                                               StringLiteral_21542/*"oncomplete"*/,
                                                               v47->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v90 = (System_Int32_array **)StringLiteral_21542/*"oncomplete"*/;
  }
  else
  {
    v90 = 0LL;
  }
  if ( v47->max_length <= 6 )
    goto LABEL_67;
  v47->m_Items[6] = (Il2CppObject *)v90;
  sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[6], v90, v84, v85, v86, v87, v88, v89);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_18978/*"finishUpdateValue"*/;
  if ( StringLiteral_18978/*"finishUpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B5D684(
                                                               StringLiteral_18978/*"finishUpdateValue"*/,
                                                               v47->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v97 = (System_Int32_array **)StringLiteral_18978/*"finishUpdateValue"*/;
  }
  else
  {
    v97 = 0LL;
  }
  if ( v47->max_length <= 7 )
    goto LABEL_67;
  v47->m_Items[7] = (Il2CppObject *)v97;
  sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[7], v97, v91, v92, v93, v94, v95, v96);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22982/*"time"*/;
  if ( StringLiteral_22982/*"time"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B5D684(
                                                               StringLiteral_22982/*"time"*/,
                                                               v47->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v104 = (System_Int32_array **)StringLiteral_22982/*"time"*/;
  }
  else
  {
    v104 = 0LL;
  }
  if ( v47->max_length <= 8 )
    goto LABEL_67;
  v47->m_Items[8] = (Il2CppObject *)v104;
  sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[8], v104, v98, v99, v100, v101, v102, v103);
  v127 = 1072064102;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v127);
  v111 = (System_Int32_array **)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B5D684(
                                                               BondsIconArray,
                                                               v47->obj.klass->_1.element_class);
    if ( !BondsIconArray )
    {
LABEL_69:
      v126 = sub_B5D6BC(BondsIconArray);
      sub_B5D668(v126, 0LL);
    }
  }
  if ( v47->max_length <= 9 )
    goto LABEL_67;
  v47->m_Items[9] = (Il2CppObject *)v111;
  sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[9], v111, v105, v106, v107, v108, v109, v110);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v112 = iTween__Hash(v47, 0LL);
  iTween__ValueTo(gameObject, v112, 0LL);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v113);
  if ( !BondsIconArray )
    goto LABEL_68;
  max_length = BondsIconArray->max_length;
  v115 = BondsIconArray;
  if ( max_length >= 1 )
  {
    v116 = 0;
    while ( v116 < max_length )
    {
      BondsIconArray = (BattleResultBondsIconComponent_array *)v115->m_Items[v116];
      if ( !BondsIconArray )
        goto LABEL_68;
      BattleResultBondsIconComponent__StartUpdateBuddyPoint((BattleResultBondsIconComponent_o *)BondsIconArray, 0LL);
      max_length = v115->max_length;
      if ( (int)++v116 >= max_length )
        goto LABEL_58;
    }
LABEL_67:
    v125 = sub_B5D6C8(BondsIconArray);
    sub_B5D668(v125, 0LL);
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
    v118 = SoundManager__playSe(CommonSeName, 0LL);
    this->fields.MeterSePlayer = v118;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.MeterSePlayer,
      (System_Int32_array **)v118,
      v119,
      v120,
      v121,
      v122,
      v123,
      v124);
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
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *bondsList; // x0
  __int64 v40; // x1
  struct BattleInfoData_o *battle_info; // x9
  struct DeckData_array *waveMyDecks; // x26
  __int64 maxWave; // x27
  BattleUserServantData_array *userSvt; // x24
  unsigned __int64 currentWave; // x19
  il2cpp_array_size_t max_length; // w9
  DeckData_o *v47; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x20
  __int64 v49; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  struct BattleResultBondsIconComponent_array *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x0
  const MethodInfo *v59; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_42E9629 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__,
      (_DWORD)battleData,
      (_DWORD)oldCollects,
      inRewardInfos);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__,
      v18,
      v19,
      v20);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__,
      v21,
      v22,
      v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__, v24, v25, v26);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__,
      v27,
      v28,
      v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v36, v37, v38);
    byte_42E9629 = 1;
  }
  memset(&v61, 0, sizeof(v61));
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
        v58 = sub_B5D6C8(bondsList);
        sub_B5D668(v58, 0LL);
      }
      v47 = waveMyDecks->m_Items[currentWave++];
      BattleResultBondsComponent__SetResultDataLocal(
        this,
        v47,
        oldCollects,
        followerType,
        userSvt,
        battleResult,
        isHideBuddyPointResult,
        battleData,
        currentWave,
        maxWave,
        v59);
      max_length = waveMyDecks->max_length;
    }
    while ( (__int64)currentWave < (int)max_length );
  }
  v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v48,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  bondsList = this->fields.bondsList;
  if ( !bondsList )
    goto LABEL_21;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v61,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bondsList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v61,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
  {
    if ( !v61.fields.current )
      sub_B5D69C(0LL, v49);
    BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                      (BattleResultBondsDeckPerWaveComponent_o *)v61.fields.current,
                                                                      0LL);
    if ( !v48 )
      sub_B5D69C(BondsIconArray, BondsIconArray);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v48,
      BondsIconArray,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v61,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
  if ( !v48 )
LABEL_21:
    sub_B5D69C(bondsList, v40);
  v51 = (struct BattleResultBondsIconComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v48,
                                                         (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
  this->fields.bondsIconArray = v51;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.bondsIconArray,
    (System_Int32_array **)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
}


// local variable allocation has failed, the output may be wrong!
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  int v104; // w1
  int v105; // w2
  __int64 v106; // x3
  int v107; // w1
  int v108; // w2
  __int64 v109; // x3
  int v110; // w1
  int v111; // w2
  __int64 v112; // x3
  int v113; // w1
  int v114; // w2
  __int64 v115; // x3
  int v116; // w1
  int v117; // w2
  __int64 v118; // x3
  int v119; // w1
  int v120; // w2
  __int64 v121; // x3
  int v122; // w1
  int v123; // w2
  __int64 v124; // x3
  int v125; // w8
  int64_t Instance; // x0
  int64_t userSvtId; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v128; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *v129; // x20
  Il2CppObject *multiBondsPrefab; // x19
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *v132; // x9
  const MethodInfo *v133; // x6
  DataMasterBase_WarMaster__WarEntity__int__o *v134; // x25
  System_Collections_Generic_IEnumerable_TSource__o *rewardInfos; // x20
  BattleResultBondsComponent___c_c *v136; // x0
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__49_0; // x19
  Il2CppObject *v139; // x21
  struct BattleResultBondsComponent___c_StaticFields *v140; // x0
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v147; // x0
  System_Collections_Generic_List_TSource__o *v148; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v149; // x22
  BattleResultBondsComponent_c *v150; // x0
  BattleResultBondsComponent_c *v151; // x0
  Il2CppObject *String_35648228; // x19
  System_Collections_Generic_IEnumerable_T__o *v153; // x0
  BattleResultBondsComponent_c *v154; // x0
  System_String_o *GET_NEW_SVT_KEY; // x19
  WarBoardUiData_SaveData_array *v156; // x20
  System_String_o *v157; // x0
  BattleResultBondsComponent___c_c *v158; // x0
  System_Collections_Generic_IEnumerable_TSource__o *getJoinSvts; // x20
  struct BattleResultBondsComponent___c_StaticFields *v160; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__49_1; // x19
  Il2CppObject *v162; // x21
  struct BattleResultBondsComponent___c_StaticFields *v163; // x0
  System_String_array **v164; // x2
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v170; // x0
  System_Collections_Generic_List_TSource__o *v171; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v172; // x22
  BattleResultBondsComponent_c *v173; // x0
  BattleResultBondsComponent_c *v174; // x0
  Il2CppObject *v175; // x19
  System_Collections_Generic_IEnumerable_T__o *v176; // x0
  BattleResultBondsComponent_c *v177; // x0
  System_String_o *GET_EXIST_SVT_KEY; // x19
  WarBoardUiData_SaveData_array *v179; // x20
  System_String_o *v180; // x0
  struct BattleDeckServantData_array *svts; // x25
  int max_length; // w8
  unsigned int v183; // w24
  int32_t v184; // w21
  BattleDeckServantData_o *v185; // x26
  il2cpp_array_size_t v186; // w23
  BattleResultBondsComponent_o *v187; // x21
  BattleResultBondsComponent___c__DisplayClass49_0_o *v188; // x27
  UserServantEntity_o *v189; // x25
  BattleResultBondsComponent_o *SvtId; // x0
  const MethodInfo *v191; // x3
  BattleUserServantData_array *v192; // x9
  signed int v193; // w8
  ServantEntity_o *v194; // x22
  signed int v195; // w20
  BattleUserServantData_o *v196; // x19
  __int128 v197; // q0
  const MethodInfo *v198; // x5
  int32_t afterLimitCount; // w6
  int32_t v200; // w20
  il2cpp_array_size_t v201; // w21
  BattleResultBondsIconComponent_o *v202; // x19
  int afterIconLimitCount; // w8
  bool v204; // zf
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x26
  BattleBuddyPointInfo_o *v206; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v207; // x19
  int32_t v208; // w28
  BattleResultBondsComponent_o *v209; // x20
  int32_t v210; // w27
  UserServantCollectionEntity_o *v211; // x23
  BattleResultBondsIconComponent_o *v212; // x26
  struct BattleResultBondsIconComponent_array *v213; // x8
  bool v214; // cf
  UserServantCollectionEntity_o *EntityDefinitely; // x1
  bool v216; // w19
  bool updateFlg; // w19
  UnityEngine_Component_o *v218; // x0
  struct BattleResultBondsIconComponent_array *v219; // x8
  __int64 v220; // x0
  int32_t cnt; // [xsp+4h] [xbp-10Ch]
  ServantLimitImageMaster_o *svtLimitImageMaster; // [xsp+8h] [xbp-108h]
  int32_t v224; // [xsp+14h] [xbp-FCh]
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+18h] [xbp-F8h]
  BattleResultBondsDeckPerWaveComponent_o *Object_object; // [xsp+20h] [xbp-F0h]
  DataMasterBase_WarMaster__WarEntity__int__o *v228; // [xsp+30h] [xbp-E0h]
  struct BattleDeckServantData_array *v229; // [xsp+38h] [xbp-D8h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v230; // [xsp+40h] [xbp-D0h]
  int32_t Type; // [xsp+54h] [xbp-BCh]
  UserServantCollectionEntity_o *userSvtCol; // [xsp+58h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v236; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v237; // [xsp+90h] [xbp-80h]

  if ( (byte_42E962A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___,
      (_DWORD)myDeck,
      (_DWORD)oldCollects,
      *(_QWORD *)&followerType);
    sub_B5D5C4(&Method_BasicHelper_Find_BattleBuddyPointInfo___, v14, v15, v16);
    sub_B5D5C4(&BattleResultBondsComponent_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v23, v24, v25);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v26, v27, v28);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v29, v30, v31);
    sub_B5D5C4(&DataManager_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v35, v36, v37);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_GetSvts___, v41, v42, v43);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_QuestRewardInfo___, v44, v45, v46);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_GetSvts___, v47, v48, v49);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_QuestRewardInfo___, v50, v51, v52);
    sub_B5D5C4(&Method_System_Func_QuestRewardInfo__bool___ctor__, v53, v54, v55);
    sub_B5D5C4(&Method_System_Func_BattleBuddyPointInfo__bool___ctor__, v56, v57, v58);
    sub_B5D5C4(&Method_System_Func_GetSvts__bool___ctor__, v59, v60, v61);
    sub_B5D5C4(&System_Func_GetSvts__bool__TypeInfo, v62, v63, v64);
    sub_B5D5C4(&System_Func_QuestRewardInfo__bool__TypeInfo, v65, v66, v67);
    sub_B5D5C4(&System_Func_BattleBuddyPointInfo__bool__TypeInfo, v68, v69, v70);
    sub_B5D5C4(&Method_JsonManager_DeserializeArray_GetSvts___, v71, v72, v73);
    sub_B5D5C4(&Method_JsonManager_DeserializeArray_QuestRewardInfo___, v74, v75, v76);
    sub_B5D5C4(&JsonManager_TypeInfo, v77, v78, v79);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GetSvts__AddRange__, v80, v81, v82);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__, v83, v84, v85);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__, v86, v87, v88);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__, v89, v90, v91);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GetSvts__ToArray__, v92, v93, v94);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GetSvts__get_Count__, v95, v96, v97);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__, v98, v99, v100);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v101, v102, v103);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v104, v105, v106);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v107, v108, v109);
    sub_B5D5C4(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__, v110, v111, v112);
    sub_B5D5C4(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__, v113, v114, v115);
    sub_B5D5C4(&Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__, v116, v117, v118);
    sub_B5D5C4(&BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo, v119, v120, v121);
    sub_B5D5C4(&BattleResultBondsComponent___c_TypeInfo, v122, v123, v124);
    byte_42E962A = 1;
  }
  Type = Follower__getType(followerType, 0LL);
  if ( Type )
    v125 = 5;
  else
    v125 = 6;
  cnt = v125;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v128 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)Instance,
                                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v129 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
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
                                                                 (const MethodInfo_1AD66E4 *)Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    if ( this->fields.isMultiDeck )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      svtLimitImageMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      goto LABEL_18;
    }
  }
  else
  {
    Object_object = 0LL;
  }
  svtLimitImageMaster = 0LL;
LABEL_18:
  v132 = (UnityEngine_Object_o *)battleData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v132 = (UnityEngine_Object_o *)battleData;
  }
  Instance = UnityEngine_Object__op_Inequality(v132, 0LL, 0LL);
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
      v134 = v129;
      rewardInfos = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.rewardInfos;
      v136 = BattleResultBondsComponent___c_TypeInfo;
      if ( (BYTE3(BattleResultBondsComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v136 = BattleResultBondsComponent___c_TypeInfo;
      }
      static_fields = v136->static_fields;
      _9__49_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__49_0;
      if ( !_9__49_0 )
      {
        if ( (BYTE3(v136->vtable._0_Equals.methodPtr) & 4) != 0 && !v136->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v136);
          static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
        }
        v139 = (Il2CppObject *)static_fields->__9;
        _9__49_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_QuestRewardInfo__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__49_0,
          v139,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_QuestRewardInfo__bool___ctor__);
        v140 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        v140->__9__49_0 = (struct System_Func_QuestRewardInfo__bool__o *)_9__49_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v140->__9__49_0,
          (System_Int32_array **)_9__49_0,
          v141,
          v142,
          v143,
          v144,
          v145,
          v146);
      }
      v147 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               rewardInfos,
               (System_Func_TSource__bool__o *)_9__49_0,
               (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
      v148 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
               v147,
               (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
      if ( v148 )
      {
        v149 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v148;
        if ( v148->fields._size >= 1 )
        {
          v150 = BattleResultBondsComponent_TypeInfo;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v150 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v150->static_fields->GET_NEW_SVT_KEY, 0LL) )
          {
            v151 = BattleResultBondsComponent_TypeInfo;
            if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v151 = BattleResultBondsComponent_TypeInfo;
            }
            String_35648228 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_35648228(
                                                v151->static_fields->GET_NEW_SVT_KEY,
                                                0LL);
            if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !JsonManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            }
            v153 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                    String_35648228,
                                                                    (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_QuestRewardInfo___);
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              v149,
              v153,
              (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
          }
          v154 = BattleResultBondsComponent_TypeInfo;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v154 = BattleResultBondsComponent_TypeInfo;
          }
          GET_NEW_SVT_KEY = v154->static_fields->GET_NEW_SVT_KEY;
          v156 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v149,
                   (const MethodInfo_305910C *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
          if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !JsonManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          }
          v157 = JsonManager__toJson(&v156->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_NEW_SVT_KEY, v157, 0LL);
        }
      }
      v158 = BattleResultBondsComponent___c_TypeInfo;
      getJoinSvts = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.getJoinSvts;
      if ( (BYTE3(BattleResultBondsComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v158 = BattleResultBondsComponent___c_TypeInfo;
      }
      v160 = v158->static_fields;
      _9__49_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v160->__9__49_1;
      if ( !_9__49_1 )
      {
        if ( (BYTE3(v158->vtable._0_Equals.methodPtr) & 4) != 0 && !v158->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v158);
          v160 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        }
        v162 = (Il2CppObject *)v160->__9;
        _9__49_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_GetSvts__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__49_1,
          v162,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_GetSvts__bool___ctor__);
        v163 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        v163->__9__49_1 = (struct System_Func_GetSvts__bool__o *)_9__49_1;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v163->__9__49_1,
          (System_Int32_array **)_9__49_1,
          v164,
          v165,
          v166,
          v167,
          v168,
          v169);
      }
      v170 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               getJoinSvts,
               (System_Func_TSource__bool__o *)_9__49_1,
               (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_GetSvts___);
      v171 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
               v170,
               (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_GetSvts___);
      if ( v171 )
      {
        v172 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v171;
        if ( v171->fields._size >= 1 )
        {
          v173 = BattleResultBondsComponent_TypeInfo;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v173 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v173->static_fields->GET_EXIST_SVT_KEY, 0LL) )
          {
            v174 = BattleResultBondsComponent_TypeInfo;
            if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v174 = BattleResultBondsComponent_TypeInfo;
            }
            v175 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_35648228(
                                     v174->static_fields->GET_EXIST_SVT_KEY,
                                     0LL);
            if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !JsonManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            }
            v176 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                    v175,
                                                                    (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_GetSvts___);
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              v172,
              v176,
              (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_GetSvts__AddRange__);
          }
          v177 = BattleResultBondsComponent_TypeInfo;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v177 = BattleResultBondsComponent_TypeInfo;
          }
          GET_EXIST_SVT_KEY = v177->static_fields->GET_EXIST_SVT_KEY;
          v179 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v172,
                   (const MethodInfo_305910C *)Method_System_Collections_Generic_List_GetSvts__ToArray__);
          if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !JsonManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          }
          v180 = JsonManager__toJson(&v179->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_EXIST_SVT_KEY, v180, 0LL);
        }
      }
      UnityEngine_PlayerPrefs__Save(0LL);
      v129 = v134;
    }
  }
  if ( !myDeck || (svts = myDeck->fields.svts) == 0LL )
LABEL_157:
    sub_B5D69C(Instance, userSvtId);
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v183 = 0;
    v184 = 0;
    v229 = myDeck->fields.svts;
    v230 = v128;
    v228 = v129;
    while ( 1 )
    {
      if ( v183 >= max_length )
      {
LABEL_158:
        v220 = sub_B5D6C8(Instance);
        sub_B5D668(v220, 0LL);
      }
      v185 = svts->m_Items[v183];
      v186 = v184;
      v187 = this;
      v188 = (BattleResultBondsComponent___c__DisplayClass49_0_o *)sub_B5D694(BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo);
      BattleResultBondsComponent___c__DisplayClass49_0___ctor(v188, 0LL);
      if ( !v185 || !v188 )
        goto LABEL_157;
      userSvtId = v185->fields.userSvtId;
      v188->fields.userSvtId = userSvtId;
      if ( userSvtId >= 1 )
        break;
      Instance = (int64_t)battleData;
      if ( !battleData )
        goto LABEL_157;
      Instance = BattleData__IsInterruptionQuest(battleData, 0LL);
      this = v187;
      if ( (Instance & 1) != 0 )
      {
        v201 = v186;
        if ( this->fields.isMultiDeck )
        {
          Instance = (int64_t)Object_object;
          if ( !Object_object )
            goto LABEL_157;
          Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, 0LL);
          v202 = (BattleResultBondsIconComponent_o *)Instance;
          if ( !Instance )
            goto LABEL_157;
        }
        else
        {
          v219 = this->fields.collects;
          if ( !v219 )
            goto LABEL_157;
          if ( v186 >= v219->max_length )
            goto LABEL_158;
          v202 = v219->m_Items[v186];
          if ( !v202 )
            goto LABEL_157;
        }
        BattleResultBondsIconComponent__setServantData(v202, 0LL, 0LL, 0, 0, 0, 0, 0LL);
        v218 = (UnityEngine_Component_o *)v202;
LABEL_144:
        Instance = (int64_t)UnityEngine_Component__get_gameObject(v218, 0LL);
        if ( !Instance )
          goto LABEL_157;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
LABEL_146:
        v184 = v201 + 1;
        goto LABEL_147;
      }
      v184 = v186;
LABEL_147:
      max_length = svts->max_length;
      if ( (int)++v183 >= max_length )
        goto LABEL_150;
    }
    if ( !v128 )
      goto LABEL_157;
    Instance = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                          v128,
                          userSvtId,
                          (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_157;
    v189 = (UserServantEntity_o *)Instance;
    SvtId = (BattleResultBondsComponent_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
    userSvtCol = BattleResultBondsComponent__getServantCollection(SvtId, oldCollects, (int32_t)SvtId, v191);
    Instance = UserServantEntity__getSvtId(v189, 0LL);
    if ( !v129 )
      goto LABEL_157;
    Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                          v129,
                          Instance,
                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    v192 = usrSvts;
    if ( !usrSvts )
      goto LABEL_157;
    v193 = usrSvts->max_length;
    v194 = (ServantEntity_o *)Instance;
    if ( v193 < 1 )
    {
LABEL_103:
      afterLimitCount = -1;
      v200 = -1;
    }
    else
    {
      v195 = 0;
      while ( 1 )
      {
        if ( v195 >= (unsigned int)v193 )
          goto LABEL_158;
        v196 = v192->m_Items[v195];
        if ( !v196 )
          goto LABEL_157;
        v197 = *(_OWORD *)&v196->fields.id.fields.fakeValue;
        *(_OWORD *)&v237.fields.currentCryptoKey = *(_OWORD *)&v196->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v237.fields.fakeValue = v197;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v236 = v237;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v236, 0LL);
        if ( Instance == v188->fields.userSvtId )
          break;
        v192 = usrSvts;
        ++v195;
        v193 = usrSvts->max_length;
        if ( v195 >= v193 )
          goto LABEL_103;
      }
      if ( v187->fields.isMultiDeck )
        BattleResultBondsComponent__UpdateAfterLimitCount(
          (BattleResultBondsComponent_o *)Instance,
          battleData,
          v196,
          v185,
          svtLimitImageMaster,
          v198);
      Instance = UserServantEntity__getIconLimitCount((UserServantEntity_o *)v196, 0, 0LL);
      afterIconLimitCount = v196->fields.afterIconLimitCount;
      afterLimitCount = v196->fields.afterLimitCount;
      v204 = afterIconLimitCount < 0 || (_DWORD)Instance == afterIconLimitCount;
      v200 = v204 ? Instance : v196->fields.afterIconLimitCount;
    }
    if ( !battleResult )
      goto LABEL_157;
    buddyPointInfos = battleResult->fields.buddyPointInfos;
    if ( buddyPointInfos )
    {
      v206 = 0LL;
      if ( *(_QWORD *)&buddyPointInfos->max_length && !isHideBuddyPointResult )
      {
        v224 = afterLimitCount;
        v207 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleBuddyPointInfo__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v207,
          (Il2CppObject *)v188,
          Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleBuddyPointInfo__bool___ctor__);
        Instance = (int64_t)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                              (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)buddyPointInfos,
                              (System_Func_T__bool__o *)v207,
                              (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_BattleBuddyPointInfo___);
        afterLimitCount = v224;
        v206 = (BattleBuddyPointInfo_o *)Instance;
      }
    }
    else
    {
      v206 = 0LL;
    }
    this = v187;
    if ( v187->fields.isMultiDeck )
    {
      Instance = (int64_t)Object_object;
      if ( !Object_object )
        goto LABEL_157;
      v208 = v200;
      v209 = v187;
      v210 = afterLimitCount;
      v201 = v186;
      Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, 0LL);
      v211 = userSvtCol;
      v212 = (BattleResultBondsIconComponent_o *)Instance;
      afterLimitCount = v210;
      this = v209;
      v200 = v208;
      if ( !Instance )
        goto LABEL_157;
    }
    else
    {
      v213 = v187->fields.collects;
      if ( !v213 )
        goto LABEL_157;
      v201 = v186;
      v214 = v186 >= v213->max_length;
      v211 = userSvtCol;
      if ( v214 )
        goto LABEL_158;
      v212 = v213->m_Items[v201];
      if ( !v212 )
        goto LABEL_157;
    }
    BattleResultBondsIconComponent__setServantData(
      v212,
      v211,
      v189,
      v200,
      this->fields.baseFriendshipExp,
      Type == 0,
      afterLimitCount,
      0LL);
    BattleResultBondsIconComponent__SetBuddyPointInfo(v212, v206, battleResult->fields.eventId, 0LL);
    if ( !v194 )
      goto LABEL_157;
    v129 = v228;
    if ( ServantEntity__checkIsHeroineSvt(v194, 0LL) && !UserServantEntity__IsAddFriendShipHeroine(v189, 0LL) )
    {
      updateFlg = this->fields.updateFlg;
      this->fields.updateFlg = (updateFlg | BattleResultBondsIconComponent__setNextServantData(v212, v211, 0LL)) & 1;
      BattleResultBondsIconComponent__setHeroine(v212, 0LL);
      v128 = v230;
    }
    else
    {
      Instance = (int64_t)MasterData_WarQuestSelectionMaster;
      v128 = v230;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_157;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                           MasterData_WarQuestSelectionMaster,
                           v212->fields.userId,
                           v212->fields.svtId,
                           0LL);
      v216 = this->fields.updateFlg;
      this->fields.updateFlg = (v216 | BattleResultBondsIconComponent__setNextServantData(v212, EntityDefinitely, 0LL)) & 1;
    }
    svts = v229;
    BattleResultBondsIconComponent__changeGauge(v212, 0.0, 0LL);
    BattleResultBondsIconComponent__InitBuddyPointInfo(v212, 0LL);
    if ( this->fields.isMultiDeck )
    {
      v218 = (UnityEngine_Component_o *)v212;
      goto LABEL_144;
    }
    goto LABEL_146;
  }
  v184 = 0;
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
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__);
            return;
          }
        }
      }
    }
    goto LABEL_157;
  }
  BattleResultBondsComponent__NormalBondsInit(this, v184, cnt, Type == 0, battleResult, isHideBuddyPointResult, v133);
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
        v8 = sub_B5D6C8(BondsIconArray);
        sub_B5D668(v8, 0LL);
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
    sub_B5D69C(BondsIconArray, v4);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct BattleEntity_o *battle_ent; // x8
  int32_t FollowerType; // w0
  int32_t Type; // w0
  __int64 v16; // x21
  __int64 v17; // x22
  int32_t v18; // w21
  __int64 v19; // x21
  __int64 v20; // x22
  int32_t v21; // w21
  int32_t IconLimitCount; // w0
  int ServantImageLimitSealAfter; // w0
  __int64 v24; // x20
  __int64 v25; // x21
  int32_t v26; // w0
  int32_t afterLimitCount; // w20
  int32_t v28; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_42E963B & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, (_DWORD)battleData, (_DWORD)userSvtData, deckSvtData);
    this = (BattleResultBondsComponent_o *)sub_B5D5C4(
                                             &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                             v10,
                                             v11,
                                             v12);
    byte_42E963B = 1;
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
  v17 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v29.fields.currentCryptoKey = v17;
  *(_QWORD *)&v29.fields.fakeValue = v16;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v29, 0LL);
  this = (BattleResultBondsComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                           userSvtData->fields.limitCount,
                                           0LL);
  if ( !svtLimitImageMaster )
LABEL_30:
    sub_B5D69C(this, battleData);
  if ( ServantLimitImageMaster__IsServantLimitCountSeal(svtLimitImageMaster, v18, (int32_t)this, 0LL) )
  {
    v20 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
    v19 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v30.fields.currentCryptoKey = v20;
    *(_QWORD *)&v30.fields.fakeValue = v19;
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v30, 0LL);
    IconLimitCount = UserServantEntity__getIconLimitCount((UserServantEntity_o *)userSvtData, 0, 0LL);
    ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                   svtLimitImageMaster,
                                   v21,
                                   IconLimitCount,
                                   0LL);
    if ( ServantImageLimitSealAfter >= 11 )
    {
      userSvtData->fields.afterLimitCount = ServantImageLimitSealAfter;
    }
    else
    {
      userSvtData->fields.afterLimitCount = 2 * ServantImageLimitSealAfter;
      v25 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
      v24 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v31.fields.currentCryptoKey = v25;
      *(_QWORD *)&v31.fields.fakeValue = v24;
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v31, 0LL);
      afterLimitCount = userSvtData->fields.afterLimitCount;
      v28 = v26;
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      ServantImageLimitSealAfter = ImageLimitCount__GetImageLimitCount(v28, afterLimitCount, 0LL);
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
        v9 = sub_B5D6C8(BondsIconArray);
        sub_B5D668(v9, 0LL);
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
    sub_B5D69C(BondsIconArray, v5);
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
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
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
    sub_B5D69C(this, method);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  UnityEngine_GameObject_o *Object; // x0
  __int64 v32; // x1
  UnityEngine_GameObject_o *v33; // x20
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x23
  BattleResultBondsComponent_c *v35; // x0
  UnityEngine_Object_o *v36; // x24
  bool v37; // w0
  const MethodInfo *v38; // x4
  UnityEngine_Transform_o *transform; // x21
  float v40; // s8
  float y; // s9
  int v42; // s2
  float v43; // s1
  float v44; // s0
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9630 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)text, iconImageId, isCoin);
    sub_B5D5C4(&BattleResultBondsComponent_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___, v16, v17, v18);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v22, v23, v24);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_17033/*"bit_reward_shine02"*/, v28, v29, v30);
    byte_42E9630 = 1;
  }
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             this->fields.confPrefab,
             this->fields.confRoot,
             0LL,
             0LL);
  if ( !Object )
    goto LABEL_40;
  v33 = Object;
  Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Object, 0LL);
  if ( !Object )
    goto LABEL_40;
  v45.fields.z = 0.0;
  v45.fields.y = -112.0 - posY;
  v45.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v45, 0LL);
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                        v33,
                                                                        (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
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
      v35 = BattleResultBondsComponent_TypeInfo;
      if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
        v35 = BattleResultBondsComponent_TypeInfo;
      }
      UILabel__SetCondensedScale(
        (UILabel_o *)ComponentInChildren_Dropdown_DropdownItem,
        v35->static_fields->CONF_LABEL_MAX_WIDTH - 36,
        0LL);
    }
    else
    {
      if ( isSaintGraph )
        UIWidget__set_height((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 100, 0LL);
      UILabel__set_text((UILabel_o *)ComponentInChildren_Dropdown_DropdownItem, text, 0LL);
    }
  }
  v36 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                  v33,
                                  (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v37 = UnityEngine_Object__op_Inequality(v36, 0LL, 0LL);
  if ( (iconImageId & 0x80000000) == 0 && v37 )
  {
    if ( isCoin )
    {
      if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetCoin((UISprite_o *)v36, iconImageId, 0LL);
    }
    else
    {
      if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetItem((UISprite_o *)v36, iconImageId, 0LL);
    }
    BattleResultBondsComponent__CreateRewardEffect(
      this,
      this->fields.resultAssetData,
      (UISprite_o *)v36,
      (System_String_o *)StringLiteral_17033/*"bit_reward_shine02"*/,
      v38);
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
        LODWORD(v40) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Object, 0LL);
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
            *(UnityEngine_Vector3_o *)(&v42 - 2) = UnityEngine_Transform__get_localPosition(
                                                     (UnityEngine_Transform_o *)Object,
                                                     0LL);
            if ( transform )
            {
              v43 = y;
              v44 = v40 + 36.0;
              UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v42 - 2), 0LL);
              goto LABEL_38;
            }
          }
        }
      }
    }
LABEL_40:
    sub_B5D69C(Object, v32);
  }
LABEL_38:
  Object = (UnityEngine_GameObject_o *)this->fields.conflist;
  if ( !Object )
    goto LABEL_40;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Object,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


void __fastcall BattleResultBondsComponent__checkBondsUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  __int64 v50; // x22
  PlayMakerFSM_o *myFsm; // x0
  __int64 v52; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  const MethodInfo *v59; // x1
  System_Int32_array **BondsIconArray; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  int colIndex; // w8
  __int64 v68; // x9
  __int64 v69; // x8
  __int64 v70; // x9
  __int64 *v71; // x8
  __int64 v72; // x20
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  __int64 *v79; // x21
  Il2CppObject *current; // x22
  UnityEngine_Object_o *levelUpSimpleAnim; // x22
  __int64 v82; // x3
  PlayMakerFSM_c *klass; // x8
  PlayMakerFSM_o *v84; // x22
  unsigned __int64 v85; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v87; // x0
  UnityEngine_Object_o *levelUpAnim; // x22
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  __int64 v95; // x9
  __int64 v96; // x8
  __int64 v97; // x9
  struct BattleResultBondsIconComponent_o *v98; // x1
  UnityEngine_Object_o *figureMoveRoot; // x21
  System_Int32_array **gameObject; // x0
  UnityEngine_GameObject_o **v101; // x21
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_Int32_array **v108; // x0
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t svtId; // w22
  int32_t svtLimit; // w23
  BattleResultBondsFigureComponent_o *bondsFigure; // x19
  UnityEngine_GameObject_o *v119; // x21
  System_Action_o *v120; // x24
  __int64 v121; // x0
  System_Collections_Generic_List_Enumerator_T__o v122; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v123; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E962E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__, v32, v33, v34);
    sub_B5D5C4(&BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_17019/*"bit_result_levelup01"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_3154/*"CLOSE"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_3156/*"CLOSE_BOND_UP_ROOT"*/, v47, v48, v49);
    byte_42E962E = 1;
  }
  memset(&v123, 0, sizeof(v123));
  v50 = sub_B5D694(BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo);
  BattleResultBondsComponent___c__DisplayClass61_0___ctor(
    (BattleResultBondsComponent___c__DisplayClass61_0_o *)v50,
    0LL);
  if ( !v50 )
    goto LABEL_11;
  *(_QWORD *)(v50 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v50 + 16), (System_Int32_array **)this, v53, v54, v55, v56, v57, v58);
  BondsIconArray = (System_Int32_array **)BattleResultBondsComponent__GetBondsIconArray(this, v59);
  *(_QWORD *)(v50 + 24) = BondsIconArray;
  sub_B5D560((BattleServantConfConponent_o *)(v50 + 24), BondsIconArray, v61, v62, v63, v64, v65, v66);
  colIndex = this->fields.colIndex;
  v68 = *(_QWORD *)(v50 + 24);
  *(_DWORD *)(v50 + 32) = colIndex;
  if ( !v68 )
    goto LABEL_11;
  while ( 1 )
  {
    if ( colIndex >= *(_DWORD *)(v68 + 24) )
    {
      myFsm = this->fields.myFsm;
      if ( this->fields.openBoundsFlg )
      {
        if ( !myFsm )
          goto LABEL_11;
        if ( this->fields.isMultiDeck )
          v71 = &StringLiteral_3156/*"CLOSE_BOND_UP_ROOT"*/;
        else
          v71 = &StringLiteral_5573/*"END_PROC"*/;
      }
      else
      {
        if ( !myFsm )
          goto LABEL_11;
        v71 = &StringLiteral_3154/*"CLOSE"*/;
      }
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v71, 0LL);
      return;
    }
    this->fields.colIndex = colIndex;
    v69 = *(_QWORD *)(v50 + 24);
    if ( !v69 )
      goto LABEL_11;
    v70 = *(int *)(v50 + 32);
    if ( (unsigned int)v70 >= *(_DWORD *)(v69 + 24) )
      goto LABEL_70;
    myFsm = *(PlayMakerFSM_o **)(v69 + 8 * v70 + 32);
    if ( !myFsm )
      goto LABEL_11;
    myFsm = (PlayMakerFSM_o *)BattleResultBondsIconComponent__isChangeRank(
                                (BattleResultBondsIconComponent_o *)myFsm,
                                0LL);
    if ( ((unsigned __int8)myFsm & 1) != 0 )
      break;
    v68 = *(_QWORD *)(v50 + 24);
    colIndex = *(_DWORD *)(v50 + 32) + 1;
    *(_DWORD *)(v50 + 32) = colIndex;
    if ( !v68 )
      goto LABEL_11;
  }
  v72 = sub_B5D694(BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo);
  BattleResultBondsComponent___c__DisplayClass61_1___ctor(
    (BattleResultBondsComponent___c__DisplayClass61_1_o *)v72,
    0LL);
  if ( !v72 )
    goto LABEL_11;
  *(_QWORD *)(v72 + 24) = v50;
  v79 = (__int64 *)(v72 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v72 + 24), (System_Int32_array **)v50, v73, v74, v75, v76, v77, v78);
  myFsm = (PlayMakerFSM_o *)this->fields.conflist;
  if ( !myFsm )
    goto LABEL_11;
  if ( SLODWORD(myFsm->fields.fsm) < 1 )
    goto LABEL_27;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v122,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)myFsm,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v123 = v122;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v123,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v123.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v123,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  myFsm = (PlayMakerFSM_o *)this->fields.conflist;
  if ( !myFsm )
    goto LABEL_11;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)myFsm,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
                                  (System_String_o *)StringLiteral_17019/*"bit_result_levelup01"*/,
                                  0LL);
      if ( myFsm )
      {
        klass = myFsm->klass;
        v84 = myFsm;
        if ( *(_WORD *)&myFsm->klass->_2.bitflags1 )
        {
          v85 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v85;
            p_offset += 2;
            if ( v85 >= *(unsigned __int16 *)&myFsm->klass->_2.bitflags1 )
              goto LABEL_38;
          }
          v87 = (__int64)(&klass->vtable._4_OnBeforeSerialize.method + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_38:
          v87 = sub_AF54C0(myFsm, SimpleAnimation_State_TypeInfo, 4LL, v82);
        }
        (*(void (__fastcall **)(PlayMakerFSM_o *, _QWORD, float))v87)(v84, *(_QWORD *)(v87 + 8), 0.0);
        myFsm = (PlayMakerFSM_o *)this->fields.levelUpSimpleAnim;
        if ( myFsm )
        {
          myFsm = (PlayMakerFSM_o *)SimpleAnimation__Play_16676044(
                                      (SimpleAnimation_o *)myFsm,
                                      (System_String_o *)StringLiteral_17019/*"bit_result_levelup01"*/,
                                      0LL);
          goto LABEL_54;
        }
      }
    }
LABEL_11:
    sub_B5D69C(myFsm, v52);
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
                                (System_String_o *)StringLiteral_17019/*"bit_result_levelup01"*/,
                                0LL);
    if ( !myFsm )
      goto LABEL_11;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)myFsm, 0.0, 0LL);
    myFsm = (PlayMakerFSM_o *)this->fields.levelUpAnim;
    if ( !myFsm )
      goto LABEL_11;
    myFsm = (PlayMakerFSM_o *)UnityEngine_Animation__Play_51249124(
                                (UnityEngine_Animation_o *)myFsm,
                                (System_String_o *)StringLiteral_17019/*"bit_result_levelup01"*/,
                                0LL);
  }
LABEL_54:
  v95 = *v79;
  if ( !*v79 )
    goto LABEL_11;
  v96 = *(_QWORD *)(v95 + 24);
  if ( !v96 )
    goto LABEL_11;
  v97 = *(int *)(v95 + 32);
  if ( (unsigned int)v97 >= *(_DWORD *)(v96 + 24) )
  {
LABEL_70:
    v121 = sub_B5D6C8(myFsm);
    sub_B5D668(v121, 0LL);
  }
  v98 = *(struct BattleResultBondsIconComponent_o **)(v96 + 8 * v97 + 32);
  this->fields.openCollect = v98;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.openCollect,
    (System_Int32_array **)v98,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
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
    *(_QWORD *)(v72 + 16) = gameObject;
    v101 = (UnityEngine_GameObject_o **)(v72 + 16);
    sub_B5D560((BattleServantConfConponent_o *)(v72 + 16), gameObject, v102, v103, v104, v105, v106, v107);
    myFsm = *(PlayMakerFSM_o **)(v72 + 16);
    if ( !myFsm )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 0, 0LL);
  }
  else
  {
    myFsm = (PlayMakerFSM_o *)this->fields.figureRoot;
    if ( !myFsm )
      goto LABEL_11;
    v108 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myFsm, 0LL);
    *(_QWORD *)(v72 + 16) = v108;
    v101 = (UnityEngine_GameObject_o **)(v72 + 16);
    sub_B5D560((BattleServantConfConponent_o *)(v72 + 16), v108, v109, v110, v111, v112, v113, v114);
  }
  openCollect = this->fields.openCollect;
  if ( !openCollect )
    goto LABEL_11;
  svtId = openCollect->fields.svtId;
  svtLimit = openCollect->fields.svtLimit;
  bondsFigure = this->fields.bondsFigure;
  v119 = *v101;
  v120 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v120,
    (Il2CppObject *)v72,
    Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__,
    0LL);
  if ( !bondsFigure )
    goto LABEL_11;
  BattleResultBondsFigureComponent__SetupFigure(bondsFigure, v119, svtId, svtLimit, 7, 0, 51, v120, 0LL);
}


void __fastcall BattleResultBondsComponent__checkShow(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct BattleFriendshipRewardInfo_array *showList; // x8
  __int64 v12; // x8
  SummonAssetManager_o *Instance; // x20
  System_Action_o *v14; // x21
  SummonAssetManager_o *parentComp; // x0

  if ( (byte_42E9634 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattleResultBondsComponent__checkShow_b__67_0__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v8, v9, v10);
    byte_42E9634 = 1;
  }
  showList = this->fields.showList;
  if ( showList )
  {
    v12 = *(_QWORD *)&showList->max_length;
    if ( v12 )
    {
      if ( this->fields.showIndex < (int)v12 )
      {
        this->fields.tempSaveTimeScale = UnityEngine_Time__get_timeScale(0LL);
        UnityEngine_Time__set_timeScale(1.0, 0LL);
        Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
        v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v14, (Il2CppObject *)this, Method_BattleResultBondsComponent__checkShow_b__67_0__, 0LL);
        if ( Instance )
        {
          SummonAssetManager__LoadSummonAssets(Instance, v14, 0LL);
          return;
        }
        goto LABEL_21;
      }
      parentComp = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
    sub_B5D69C(parentComp, method);
  }
  BattleResultComponent__showServantRewardAction((BattleResultComponent_o *)parentComp, 0LL, 1, 0LL);
}


void __fastcall BattleResultBondsComponent__closeBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UnityEngine_Component_o *gameObject; // x0
  __int64 v21; // x1
  struct System_Collections_Generic_List_UIUnityRenderer__o *effectUIList; // x20
  int size; // w8
  int i; // w21
  struct BattleWindowComponent_o *confwindow; // x20
  BattleWindowComponent_EndCall_o *v26; // x21

  if ( (byte_42E9635 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultBondsComponent_endCloseBondUp__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIUnityRenderer__Clear__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__, v14, v15, v16);
    sub_B5D5C4(&SoundManager_TypeInfo, v17, v18, v19);
    byte_42E9635 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
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
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_UIUnityRenderer__Clear__);
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
        v26 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v26,
          (Il2CppObject *)this,
          Method_BattleResultBondsComponent_endCloseBondUp__,
          0LL),
        !confwindow) )
  {
LABEL_20:
    sub_B5D69C(gameObject, v21);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))confwindow->klass->vtable._12_Close.method)(
    confwindow,
    v26,
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  const MethodInfo *v12; // x1
  BattleResultBondsIconComponent_o *BondsIconArray; // x0
  __int64 v14; // x1
  struct UnityEngine_GameObject_o *root; // x21
  BattleResultBondsIconComponent_o *v16; // x20
  unsigned int v17; // w22
  __int64 v18; // x0
  __int64 v19; // x0

  if ( (byte_42E9638 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, v9, v10, v11);
    byte_42E9638 = 1;
  }
  this->fields.resultAssetData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.resultAssetData, 0LL, v2, v3, v4, v5, v6, v7);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    BondsIconArray = (BattleResultBondsIconComponent_o *)BattleResultBondsComponent__GetBondsIconArray(this, v12);
    if ( !BondsIconArray )
      goto LABEL_17;
    root = BondsIconArray->fields.root;
    v16 = BondsIconArray;
    if ( (int)root >= 1 )
    {
      v17 = 0;
      while ( 1 )
      {
        BondsIconArray = (BattleResultBondsIconComponent_o *)*((_QWORD *)&v16->fields.rootNot + (int)v17);
        if ( !BondsIconArray )
          break;
        BattleResultBondsIconComponent__ClearFaceAtlas(BondsIconArray, 0LL);
        if ( (int)++v17 >= (int)root )
          goto LABEL_14;
        if ( v17 >= LODWORD(v16->fields.root) )
        {
          v19 = sub_B5D6C8(v18);
          sub_B5D668(v19, 0LL);
        }
      }
LABEL_17:
      sub_B5D69C(BondsIconArray, v14);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultBondsComponent__endCloseBondUp(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9636 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E9636 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultBondsComponent__endMoveFigure(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  int v104; // w1
  int v105; // w2
  __int64 v106; // x3
  int v107; // w1
  int v108; // w2
  __int64 v109; // x3
  System_Text_StringBuilder_o *v110; // x20
  __int64 lvComp; // x0
  __int64 v112; // x1
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t friendshipRank; // w22
  int32_t svtId; // w21
  int v116; // w28
  Il2CppObject *current; // x23
  System_String_o *v118; // x0
  __int64 v119; // x1
  System_String_o *v120; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v122; // x1
  const MethodInfo *v123; // x5
  struct BattleResultBondsIconComponent_o *v124; // x8
  int32_t svtLimit; // w23
  int32_t ServantLimitCountSealAfter; // w23
  System_String_o *v127; // x0
  const MethodInfo *v128; // x5
  System_String_o *v129; // x0
  const MethodInfo *v130; // x5
  struct BattleResultBondsIconComponent_o *v131; // x8
  System_String_o *v132; // x0
  const MethodInfo *v133; // x5
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v134; // x22
  struct BattleFriendshipRewardInfo_array *rewardInfos; // x20
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v137; // x23
  int v138; // w21
  int CONF_SERVANT_COIN_PLUS_HEIGHT; // w25
  struct BattleResultBondsIconComponent_o *v140; // x8
  BattleFriendshipRewardInfo_o *v141; // x24
  GiftEntity_o *v142; // x25
  WarEntity_o *v143; // x0
  System_String_o *v144; // x26
  Il2CppObject *v145; // x0
  WarEntity_o *v146; // x0
  ServantEntity_o *v147; // x26
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x27
  int32_t v149; // w1
  System_String_o *v150; // x0
  const MethodInfo *v151; // x5
  bool v152; // w26
  Il2CppObject *Name; // x26
  System_String_o *v154; // x0
  System_String_o *v155; // x27
  int32_t IconImageId; // w0
  const MethodInfo *v157; // x5
  BattleResultBondsComponent_c *v158; // x0
  struct BattleFriendshipRewardInfo_array *v159; // x0
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  int v166; // w20
  UnityEngine_Transform_o *confRoot; // x21
  unsigned int localPosition; // s0
  int v169; // w8
  float v170; // s1
  int v171; // w20
  float v172; // s1
  int v173; // s2
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *rankupConfLabel; // x21
  struct BattleWindowComponent_o *confwindow; // x20
  BattleWindowComponent_EndCall_o *v177; // x21
  __int64 v178; // x0
  System_Text_StringBuilder_o *v179; // [xsp+8h] [xbp-B8h]
  int32_t key; // [xsp+14h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_T__o v181; // [xsp+18h] [xbp-A8h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+30h] [xbp-90h] BYREF
  System_String_o *countText; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v184; // [xsp+40h] [xbp-80h] BYREF
  System_String_o *nameText; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_42E9632 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultBondsComponent_openedBondUp__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleResultBondsComponent_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMaster_ItemMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v20, v21, v22);
    sub_B5D5C4(&DataManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v26, v27, v28);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v29, v30, v31);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v41, v42, v43);
    sub_B5D5C4(&int_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v50, v51, v52);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__, v53, v54, v55);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__, v56, v57, v58);
    sub_B5D5C4(&System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo, v59, v60, v61);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v62, v63, v64);
    sub_B5D5C4(&NetworkManager_TypeInfo, v65, v66, v67);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v68, v69, v70);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v71, v72, v73);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v74, v75, v76);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v77, v78, v79);
    sub_B5D5C4(&SoundManager_TypeInfo, v80, v81, v82);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v83, v84, v85);
    sub_B5D5C4(&StringLiteral_11238/*"RESULT_BOUNDS_OPENQUEST"*/, v86, v87, v88);
    sub_B5D5C4(&StringLiteral_11241/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/, v89, v90, v91);
    sub_B5D5C4(&StringLiteral_11240/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, v92, v93, v94);
    sub_B5D5C4(&StringLiteral_11237/*"RESULT_BOUNDS_GET_COIN_NAME"*/, v95, v96, v97);
    sub_B5D5C4(&StringLiteral_11235/*"RESULT_BOUNDS_GETVOICE"*/, v98, v99, v100);
    sub_B5D5C4(&StringLiteral_23886/*"{0} {1}"*/, v101, v102, v103);
    sub_B5D5C4(&StringLiteral_1/*""*/, v104, v105, v106);
    sub_B5D5C4(&StringLiteral_11236/*"RESULT_BOUNDS_GET_COIN_COUNT"*/, v107, v108, v109);
    byte_42E9632 = 1;
  }
  memset(&v184, 0, sizeof(v184));
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  v110 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v110, 0LL);
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
  lvComp = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !lvComp )
    goto LABEL_127;
  v179 = v110;
  lvComp = (__int64)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                      (clsQuestCheck_o *)lvComp,
                      svtId,
                      friendshipRank,
                      8,
                      0LL);
  if ( lvComp )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v181,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)lvComp,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    v116 = 0;
    v184 = v181;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v184,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
    {
      current = v184.fields.current;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v118 = LocalizationManager__Get((System_String_o *)StringLiteral_11238/*"RESULT_BOUNDS_OPENQUEST"*/, 0LL);
      if ( !current )
        sub_B5D69C(v118, v119);
      v120 = v118;
      QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
      v122 = System_String__Format(v120, QuestName, 0LL);
      BattleResultBondsComponent__addConfObject(this, v122, (float)v116 * 22.0, -1, 0, 0, v123);
      v116 += 3;
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v184,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  }
  else
  {
    v116 = 0;
  }
  v124 = this->fields.openCollect;
  if ( !v124 )
    goto LABEL_127;
  svtLimit = v124->fields.svtLimit;
  lvComp = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lvComp )
    goto LABEL_127;
  lvComp = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)lvComp,
                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
    v127 = LocalizationManager__Get((System_String_o *)StringLiteral_11241/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/, 0LL);
    BattleResultBondsComponent__addConfObject(this, v127, (float)v116 * 22.0, -1, 0, 1, v128);
    v116 += 4;
  }
  else
  {
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    lvComp = ServantCommentManager__IsOpenByServantFriendShip_27551544(
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
      v129 = LocalizationManager__Get((System_String_o *)StringLiteral_11240/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, 0LL);
      BattleResultBondsComponent__addConfObject(this, v129, (float)v116 * 22.0, -1, 0, 0, v130);
      v116 += 2;
    }
  }
  v131 = this->fields.openCollect;
  if ( !v131 )
    goto LABEL_127;
  if ( ServantVoiceMaster__isOpenByServantFriendShip(svtId, v131->fields.maxLimitCount, friendshipRank, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v132 = LocalizationManager__Get((System_String_o *)StringLiteral_11235/*"RESULT_BOUNDS_GETVOICE"*/, 0LL);
    BattleResultBondsComponent__addConfObject(this, v132, (float)v116 * 22.0, -1, 0, 0, v133);
    v116 += 2;
  }
  if ( this->fields.rewardInfos )
  {
    v134 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v134,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    lvComp = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ItemMaster___);
    rewardInfos = this->fields.rewardInfos;
    if ( !rewardInfos )
      goto LABEL_127;
    max_length = rewardInfos->max_length;
    if ( max_length < 1 )
    {
      CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
      if ( !v134 )
        goto LABEL_127;
    }
    else
    {
      key = svtId;
      v137 = (DataMasterBase_WarMaster__WarEntity__int__o *)lvComp;
      v138 = 0;
      CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
      do
      {
        if ( v138 >= (unsigned int)max_length )
        {
          v178 = sub_B5D6C8(lvComp);
          sub_B5D668(v178, 0LL);
        }
        v140 = this->fields.openCollect;
        if ( !v140 )
          goto LABEL_127;
        v141 = rewardInfos->m_Items[v138];
        if ( !v141 )
          goto LABEL_127;
        if ( v140->fields.svtId == v141->fields.targetSvtId )
        {
          lvComp = (__int64)BattleFriendshipRewardInfo__getGiftEntity(v141, 0LL);
          if ( !lvComp )
            goto LABEL_127;
          v142 = (GiftEntity_o *)lvComp;
          GiftEntity__GetInfo((GiftEntity_o *)lvComp, &nameText, &countText, 0LL);
          lvComp = GiftEntity__isQp(v142, 0LL);
          if ( (lvComp & 1) != 0 )
          {
            nameText = countText;
            countText = (System_String_o *)StringLiteral_1/*""*/;
          }
          if ( v142->fields.type == 2 )
          {
            if ( !v137 )
              goto LABEL_127;
            v143 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v137,
                     v142->fields.objectId,
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( v143 && v143->fields.bannerId == 29 )
            {
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v144 = LocalizationManager__Get((System_String_o *)StringLiteral_11236/*"RESULT_BOUNDS_GET_COIN_COUNT"*/, 0LL);
              LODWORD(v181.fields.list) = v142->fields.num;
              v145 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v181);
              countText = System_String__Format(v144, v145, 0LL);
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              lvComp = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !lvComp )
                goto LABEL_127;
              v146 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)lvComp,
                       key,
                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( v146 )
              {
                v147 = (ServantEntity_o *)v146;
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
                  lvComp = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
                    v149 = -1;
                  else
                    v149 = lvComp;
                }
                else
                {
                  v149 = -1;
                }
                Name = (Il2CppObject *)ServantEntity__getName(v147, v149, -1, 0LL);
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v154 = LocalizationManager__Get((System_String_o *)StringLiteral_11237/*"RESULT_BOUNDS_GET_COIN_NAME"*/, 0LL);
                nameText = System_String__Format_44573324(v154, (Il2CppObject *)nameText, Name, 0LL);
              }
              v152 = 1;
            }
            else
            {
              v152 = 0;
            }
            v155 = System_String__Format_44573324(
                     (System_String_o *)StringLiteral_23886/*"{0} {1}"*/,
                     (Il2CppObject *)nameText,
                     (Il2CppObject *)countText,
                     0LL);
            IconImageId = GiftEntity__getIconImageId(v142, 0LL);
            BattleResultBondsComponent__addConfObject(this, v155, (float)v116 * 22.0, IconImageId, v152, 0, v157);
          }
          else
          {
            v150 = System_String__Format_44573324(
                     (System_String_o *)StringLiteral_23886/*"{0} {1}"*/,
                     (Il2CppObject *)nameText,
                     (Il2CppObject *)countText,
                     0LL);
            BattleResultBondsComponent__addConfObject(this, v150, (float)v116 * 22.0, -1, 0, 0, v151);
          }
          v158 = BattleResultBondsComponent_TypeInfo;
          v116 += 2;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v158 = BattleResultBondsComponent_TypeInfo;
          }
          CONF_SERVANT_COIN_PLUS_HEIGHT = v158->static_fields->CONF_SERVANT_COIN_PLUS_HEIGHT;
          lvComp = BattleFriendshipRewardInfo__isShow(v141, 0LL);
          if ( (lvComp & 1) != 0 )
          {
            if ( !v134 )
              goto LABEL_127;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v134,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v141,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__);
          }
        }
        max_length = rewardInfos->max_length;
        ++v138;
      }
      while ( v138 < max_length );
      if ( !v134 )
LABEL_127:
        sub_B5D69C(lvComp, v112);
    }
    v159 = (struct BattleFriendshipRewardInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v134,
                                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
    this->fields.showList = v159;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.showList,
      (System_Int32_array **)v159,
      v160,
      v161,
      v162,
      v163,
      v164,
      v165);
    this->fields.showIndex = 0;
  }
  else
  {
    CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
  }
  lvComp = (__int64)this->fields.confSprite;
  if ( v116 )
    v166 = v116;
  else
    v166 = 1;
  if ( !lvComp )
    goto LABEL_127;
  UIWidget__set_height((UIWidget_o *)lvComp, CONF_SERVANT_COIN_PLUS_HEIGHT + 22 * v166 + 120, 0LL);
  confRoot = this->fields.confRoot;
  if ( !confRoot )
    goto LABEL_127;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.confRoot, 0LL);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT >= 0 )
    v169 = CONF_SERVANT_COIN_PLUS_HEIGHT;
  else
    v169 = CONF_SERVANT_COIN_PLUS_HEIGHT + 1;
  v170 = (float)v166;
  v171 = v169 >> 1;
  v172 = (float)(v170 * 11.0) + (float)(v169 >> 1);
  v173 = 0;
  UnityEngine_Transform__set_localPosition(confRoot, *(UnityEngine_Vector3_o *)&localPosition, 0LL);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT )
  {
    lvComp = (__int64)this->fields.confwindow;
    if ( !lvComp )
      goto LABEL_127;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lvComp, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v171, 0LL);
    lvComp = (__int64)this->fields.confwindow;
    if ( !lvComp )
      goto LABEL_127;
    lvComp = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)lvComp + 424LL))(
               lvComp,
               *(_QWORD *)(*(_QWORD *)lvComp + 432LL));
  }
  if ( !v179 )
    goto LABEL_127;
  rankupConfLabel = this->fields.rankupConfLabel;
  lvComp = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v179->klass->vtable._3_ToString.method)(
             v179,
             v179->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !rankupConfLabel )
    goto LABEL_127;
  UILabel__set_text(rankupConfLabel, (System_String_o *)lvComp, 0LL);
  confwindow = this->fields.confwindow;
  v177 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v177,
    (Il2CppObject *)this,
    Method_BattleResultBondsComponent_openedBondUp__,
    0LL);
  if ( !confwindow )
    goto LABEL_127;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))confwindow->klass->vtable._10_Open.method)(
    confwindow,
    v177,
    confwindow->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattleResultBondsComponent__finishUpdateValue(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v9; // x1
  void *BondsIconArray; // x0
  __int64 v11; // x1
  int v12; // w8
  _DWORD *v13; // x20
  unsigned int v14; // w21
  char *v15; // x22
  void **v16; // x22
  void *v17; // t1
  SePlayer_o *MeterSePlayer; // x0
  __int64 v19; // x0

  if ( (byte_42E962D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9393/*"NEXT"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&iTween_TypeInfo, v5, v6, v7);
    byte_42E962D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_43300928(gameObject, 0LL);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v9);
  if ( !BondsIconArray )
    goto LABEL_19;
  v12 = *((_DWORD *)BondsIconArray + 6);
  v13 = BondsIconArray;
  if ( v12 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= v12 )
        goto LABEL_18;
      v15 = (char *)&v13[2 * v14];
      v17 = (void *)*((_QWORD *)v15 + 4);
      v16 = (void **)(v15 + 32);
      BondsIconArray = v17;
      if ( !v17 )
        break;
      BondsIconArray = (void *)BattleResultBondsIconComponent__changeGauge(
                                 (BattleResultBondsIconComponent_o *)BondsIconArray,
                                 1.0,
                                 0LL);
      if ( v14 >= v13[6] )
      {
LABEL_18:
        v19 = sub_B5D6C8(BondsIconArray);
        sub_B5D668(v19, 0LL);
      }
      BondsIconArray = *v16;
      if ( !*v16 )
        break;
      BattleResultBondsIconComponent__LayoutFriendshipValue((BattleResultBondsIconComponent_o *)BondsIconArray, 0LL);
      v12 = v13[6];
      if ( (int)++v14 >= v12 )
        goto LABEL_14;
    }
LABEL_19:
    sub_B5D69C(BondsIconArray, v11);
  }
LABEL_14:
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  BondsIconArray = this->fields.myFsm;
  this->fields.bondsCountUp = 0;
  if ( !BondsIconArray )
    goto LABEL_19;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_9393/*"NEXT"*/, 0LL);
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
        v11 = sub_B5D6C8(this);
        sub_B5D668(v11, 0LL);
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
    sub_B5D69C(this, collects);
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
    sub_B5D69C(this, deck);
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0LL;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= max_length )
    {
      v9 = sub_B5D6C8(this);
      sub_B5D668(v9, 0LL);
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
    sub_B5D69C(this, method);
  return (signed int)oldCollections->max_length > 1;
}


void __fastcall BattleResultBondsComponent__openedBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleResultComponent_o *parentComp; // x0

  if ( (byte_42E9633 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5569/*"END_OPEN"*/, (_DWORD)method, v2, v3);
    byte_42E9633 = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__ResetPlayScreenTouch(parentComp, 0LL), (parentComp = this->fields.parentComp) == 0LL)
    || (BattleResultComponent__setTouch(parentComp, 1, 0LL),
        parentComp = (BattleResultComponent_o *)this->fields.myFsm,
        ++this->fields.colIndex,
        !parentComp) )
  {
    sub_B5D69C(parentComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)parentComp, (System_String_o *)StringLiteral_5569/*"END_OPEN"*/, 0LL);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E60A3 & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultBondsComponent___c_TypeInfo, v1, v2, v3);
    byte_42E60A3 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleResultBondsComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleResultBondsComponent___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return col->fields.isUse;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_0(
        BattleResultBondsComponent___c_o *this,
        QuestRewardInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.type == 7 && x->fields.isNew;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_1(
        BattleResultBondsComponent___c_o *this,
        GetSvts_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *CS___8__locals1; // x8
  struct BattleResultBondsComponent_o *_4__this; // x8
  UnityEngine_Object_o *figureMoveRoot; // x20
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v41; // x9
  char v42; // w8
  UnityEngine_GameObject_o *parent; // x20
  BattleResultBondsComponent___c__DisplayClass61_1_o *v44; // x21
  __int64 v45; // x1
  BattleResultBondsComponent___c__DisplayClass61_1_o *v46; // x22
  __int64 v47; // x1
  BattleResultBondsComponent___c__DisplayClass61_1_o *v48; // x22
  __int64 v49; // x1
  BattleResultBondsComponent___c__DisplayClass61_1_o *v50; // x22
  __int64 v51; // x1
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v52; // x8
  BattleResultBondsComponent___c__DisplayClass61_1_o *v53; // x22
  __int64 v54; // x1
  __int64 v55; // x1
  System_Collections_Hashtable_o *v56; // x0
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v57; // x8
  struct BattleResultBondsComponent_o *v58; // x8
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v59; // x8
  struct BattleResultBondsComponent_o *v60; // x8
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v61; // x8
  struct BattleResultBondsIconComponent_array *bondsIcons; // x9
  __int64 i; // x10
  __int64 v64; // x0
  __int64 v65; // x0
  char v66[4]; // [xsp+Ch] [xbp-34h] BYREF
  int v67; // [xsp+18h] [xbp-28h] BYREF
  int v68; // [xsp+1Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_42E60A4 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&object___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&float_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_23627/*"x"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_9849/*"OPEN"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_21544/*"oncompletetarget"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_18584/*"endMoveFigure"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_20221/*"islocal"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v32, v33, v34);
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B5D5C4(&iTween_TypeInfo, v35, v36, v37);
    byte_42E60A4 = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
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
  v41 = v4->fields.CS___8__locals1;
  if ( !v41 )
    goto LABEL_73;
  v42 = (char)this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v41->fields.__4__this;
  if ( !this )
    goto LABEL_73;
  if ( (v42 & 1) == 0 )
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
  parent = v4->fields.parent;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B5D5DC(object___TypeInfo, 10LL);
  if ( !this )
    goto LABEL_73;
  v44 = this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_23627/*"x"*/;
  if ( StringLiteral_23627/*"x"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B5D684(
                                                                   StringLiteral_23627/*"x"*/,
                                                                   v44->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
    v45 = StringLiteral_23627/*"x"*/;
  }
  else
  {
    v45 = 0LL;
  }
  if ( !LODWORD(v44->fields.CS___8__locals1) )
    goto LABEL_74;
  v44[1].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)v45;
  sub_B5D560(&v44[1]);
  v68 = -1007026176;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v68);
  v46 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B5D684(this, v44->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
  }
  if ( LODWORD(v44->fields.CS___8__locals1) <= 1 )
    goto LABEL_74;
  v44[1].monitor = v46;
  sub_B5D560(&v44[1].monitor);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22982/*"time"*/;
  if ( StringLiteral_22982/*"time"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B5D684(
                                                                   StringLiteral_22982/*"time"*/,
                                                                   v44->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
    v47 = StringLiteral_22982/*"time"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( LODWORD(v44->fields.CS___8__locals1) <= 2 )
    goto LABEL_74;
  v44[1].fields.parent = (struct UnityEngine_GameObject_o *)v47;
  sub_B5D560(&v44[1].fields);
  v67 = 1061997773;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v67);
  v48 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B5D684(this, v44->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
  }
  if ( LODWORD(v44->fields.CS___8__locals1) <= 3 )
    goto LABEL_74;
  v44[1].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v48;
  sub_B5D560(&v44[1].fields.CS___8__locals1);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_20221/*"islocal"*/;
  if ( StringLiteral_20221/*"islocal"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B5D684(
                                                                   StringLiteral_20221/*"islocal"*/,
                                                                   v44->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
    v49 = StringLiteral_20221/*"islocal"*/;
  }
  else
  {
    v49 = 0LL;
  }
  if ( LODWORD(v44->fields.CS___8__locals1) <= 4 )
    goto LABEL_74;
  v44[2].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)v49;
  sub_B5D560(&v44[2]);
  v66[0] = 1;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(bool_TypeInfo, v66);
  v50 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B5D684(this, v44->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
  }
  if ( LODWORD(v44->fields.CS___8__locals1) <= 5 )
    goto LABEL_74;
  v44[2].monitor = v50;
  sub_B5D560(&v44[2].monitor);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_21544/*"oncompletetarget"*/;
  if ( StringLiteral_21544/*"oncompletetarget"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B5D684(
                                                                   StringLiteral_21544/*"oncompletetarget"*/,
                                                                   v44->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
    v51 = StringLiteral_21544/*"oncompletetarget"*/;
  }
  else
  {
    v51 = 0LL;
  }
  if ( LODWORD(v44->fields.CS___8__locals1) <= 6 )
    goto LABEL_74;
  v44[2].fields.parent = (struct UnityEngine_GameObject_o *)v51;
  sub_B5D560(&v44[2].fields);
  v52 = v4->fields.CS___8__locals1;
  if ( !v52 || (this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v52->fields.__4__this) == 0LL )
LABEL_73:
    sub_B5D69C(this, method);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
  v53 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B5D684(this, v44->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
  }
  if ( LODWORD(v44->fields.CS___8__locals1) <= 7 )
    goto LABEL_74;
  v44[2].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v53;
  sub_B5D560(&v44[2].fields.CS___8__locals1);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_21542/*"oncomplete"*/;
  if ( StringLiteral_21542/*"oncomplete"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B5D684(
                                                                   StringLiteral_21542/*"oncomplete"*/,
                                                                   v44->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
    v54 = StringLiteral_21542/*"oncomplete"*/;
  }
  else
  {
    v54 = 0LL;
  }
  if ( LODWORD(v44->fields.CS___8__locals1) <= 8 )
    goto LABEL_74;
  v44[3].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)v54;
  sub_B5D560(&v44[3]);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_18584/*"endMoveFigure"*/;
  if ( !StringLiteral_18584/*"endMoveFigure"*/ )
  {
    v55 = 0LL;
    goto LABEL_58;
  }
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B5D684(
                                                                 StringLiteral_18584/*"endMoveFigure"*/,
                                                                 v44->klass->_1.element_class);
  if ( !this )
  {
LABEL_75:
    v65 = sub_B5D6BC();
    sub_B5D668(v65, 0LL);
  }
  v55 = StringLiteral_18584/*"endMoveFigure"*/;
LABEL_58:
  if ( LODWORD(v44->fields.CS___8__locals1) <= 9 )
    goto LABEL_74;
  v44[3].monitor = (void *)v55;
  sub_B5D560(&v44[3].monitor);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v56 = iTween__Hash((System_Object_array *)v44, 0LL);
  iTween__MoveFrom_43184584(parent, v56, 0LL);
LABEL_63:
  v57 = v4->fields.CS___8__locals1;
  if ( !v57 )
    goto LABEL_73;
  v58 = v57->fields.__4__this;
  if ( !v58 )
    goto LABEL_73;
  v58->fields.openBoundsFlg = 1;
  v59 = v4->fields.CS___8__locals1;
  if ( !v59 )
    goto LABEL_73;
  v60 = v59->fields.__4__this;
  if ( !v60 )
    goto LABEL_73;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v60->fields.myFsm;
  if ( !this )
    goto LABEL_73;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9849/*"OPEN"*/, 0LL);
  v61 = v4->fields.CS___8__locals1;
  if ( !v61 )
    goto LABEL_73;
  bondsIcons = v61->fields.bondsIcons;
  if ( !bondsIcons )
    goto LABEL_73;
  i = v61->fields.i;
  if ( (unsigned int)i >= bondsIcons->max_length )
  {
LABEL_74:
    v64 = sub_B5D6C8(this);
    sub_B5D668(v64, 0LL);
  }
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v61->fields.__4__this;
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
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E60A5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E60A5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  CommonUI__CreateServantCoinConfirmDialog(Instance, 1, this->fields.coin, 0LL, 0LL);
}