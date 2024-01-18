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

  if ( (byte_4188554 & 1) == 0 )
  {
    sub_B2C35C(&BattleResultBondsComponent_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_6960/*"GetNewSvt"*/, v8);
    sub_B2C35C(&StringLiteral_6949/*"GetExistSvt"*/, v9);
    byte_4188554 = 1;
  }
  BattleResultBondsComponent_TypeInfo->static_fields->SVT_GAP_5 = 178.0;
  BattleResultBondsComponent_TypeInfo->static_fields->SVT_GAP_6 = 150.0;
  v10 = BattleResultBondsComponent_TypeInfo;
  BattleResultBondsComponent_TypeInfo->static_fields->CONF_LABEL_MAX_WIDTH = 464;
  v10->static_fields->CONF_SERVANT_COIN_PLUS_HEIGHT = 18;
  static_fields = v10->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6960/*"GetNewSvt"*/;
  static_fields->GET_NEW_SVT_KEY = (struct System_String_o *)StringLiteral_6960/*"GetNewSvt"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->GET_NEW_SVT_KEY, v12, v2, v3, v4, v5, v6, v7);
  v13 = BattleResultBondsComponent_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_6949/*"GetExistSvt"*/;
  v13->GET_EXIST_SVT_KEY = (struct System_String_o *)StringLiteral_6949/*"GetExistSvt"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v13->GET_EXIST_SVT_KEY, v14, v15, v16, v17, v18, v19, v20);
}


void __fastcall BattleResultBondsComponent___ctor(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  BattleResultBondsFigureComponent_o *v21; // x20
  const MethodInfo *v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_4188553 & 1) == 0 )
  {
    sub_B2C35C(&BattleResultBondsFigureComponent_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo, v6);
    byte_4188553 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.conflist = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.conflist,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.buddyPointInfoWindowHeight = 366;
  this->fields.tempSaveTimeScale = 1.0;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
  this->fields.bondsList = (struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *)v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.bondsList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (BattleResultBondsFigureComponent_o *)sub_B2C42C(BattleResultBondsFigureComponent_TypeInfo);
  BattleResultBondsFigureComponent___ctor(v21, v22);
  this->fields.bondsFigure = v21;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.bondsFigure,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
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
  __int64 v22; // x1
  struct GetSvts_array *getJoinSvtList; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v24; // x21
  __int64 v25; // x26
  int max_length; // w9
  GetSvts_o *v27; // x8
  UserServantEntity_o *v28; // x24
  EventServantEntity_o *EventServant; // x22
  BattleResultBondsComponent___c_c *v30; // x0
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__62_0; // x23
  Il2CppObject *v33; // x25
  struct BattleResultBondsComponent___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x25
  __int64 v42; // x24
  System_Int32_array **v43; // x23
  GetSvtCoin_o *v44; // x25
  WarEntity_o *v45; // x8
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_o *v58; // x24
  CommonUI_o *v59; // x25
  __int64 v60; // x0
  __int64 v61; // x0
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4188545 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, collect);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_SvtCoinMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_B2C35C(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v9);
    sub_B2C35C(&GetSvtCoin___TypeInfo, v10);
    sub_B2C35C(&GetSvtCoin_TypeInfo, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B2C35C(&Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__, v15);
    sub_B2C35C(&Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__, v16);
    sub_B2C35C(&BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo, v17);
    sub_B2C35C(&BattleResultBondsComponent___c_TypeInfo, v18);
    sub_B2C35C(&StringLiteral_12438/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, v19);
    sub_B2C35C(&StringLiteral_18005/*"dialogIgnoreTime"*/, v20);
    byte_4188545 = 1;
  }
  entity = 0LL;
  if ( this->fields.getJoinSvtList && !this->fields.isWarboard )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___),
          (getJoinSvtList = this->fields.getJoinSvtList) == 0LL) )
    {
LABEL_49:
      sub_B2C434(Instance, v22);
    }
    v24 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
    v25 = 0LL;
    while ( 1 )
    {
      max_length = getJoinSvtList->max_length;
      if ( (int)v25 >= max_length )
        break;
      if ( (unsigned int)v25 >= max_length )
        goto LABEL_50;
      v27 = getJoinSvtList->m_Items[v25];
      if ( !v27 )
        goto LABEL_49;
      if ( v27->fields.isNew )
      {
        UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_18005/*"dialogIgnoreTime"*/, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      else
      {
        if ( !v24 )
          goto LABEL_49;
        Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      v24,
                                      v27->fields.userSvtId,
                                      (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( Instance )
        {
          v28 = (UserServantEntity_o *)Instance;
          Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
          if ( !collect )
            goto LABEL_49;
          if ( (_DWORD)Instance == collect->fields.svtId )
          {
            EventServant = UserServantEntity__getEventServant(v28, 0LL);
            if ( EventServant
              || (Instance = (DataManager_o *)UserServantEntity__getEventServantIgnoreEnd(v28, 0LL),
                  (EventServant = (EventServantEntity_o *)Instance) != 0LL) )
            {
              v30 = BattleResultBondsComponent___c_TypeInfo;
              if ( (BYTE3(BattleResultBondsComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
                v30 = BattleResultBondsComponent___c_TypeInfo;
              }
              static_fields = v30->static_fields;
              _9__62_0 = static_fields->__9__62_0;
              if ( !_9__62_0 )
              {
                if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v30);
                  static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
                }
                v33 = (Il2CppObject *)static_fields->__9;
                _9__62_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                System_Action___ctor(
                  _9__62_0,
                  v33,
                  Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__,
                  0LL);
                v34 = BattleResultBondsComponent___c_TypeInfo->static_fields;
                v34->__9__62_0 = _9__62_0;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)&v34->__9__62_0,
                  (System_Int32_array **)_9__62_0,
                  v35,
                  v36,
                  v37,
                  v38,
                  v39,
                  v40);
              }
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SvtCoinMaster___);
              Instance = (DataManager_o *)UserServantEntity__getSvtId(v28, 0LL);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_49;
              Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                            Master_WarQuestSelectionMaster,
                                            &entity,
                                            (int32_t)Instance,
                                            (const MethodInfo_24E412C *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_49;
                if ( *(&entity->fields.id + 1) >= 1 )
                {
                  v42 = sub_B2C42C(BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo);
                  BattleResultBondsComponent___c__DisplayClass62_0___ctor(
                    (BattleResultBondsComponent___c__DisplayClass62_0_o *)v42,
                    0LL);
                  v43 = (System_Int32_array **)sub_B2C374(GetSvtCoin___TypeInfo, 1LL);
                  v44 = (GetSvtCoin_o *)sub_B2C42C(GetSvtCoin_TypeInfo);
                  GetSvtCoin___ctor(v44, 0LL);
                  v45 = entity;
                  if ( !entity )
                    goto LABEL_49;
                  if ( !v44 )
                    goto LABEL_49;
                  v44->fields.svtId = entity->fields.id;
                  v44->fields.num = *(&v45->fields.id + 1);
                  v44->fields.itemId = (int32_t)v45->fields.age;
                  if ( !v43 )
                    goto LABEL_49;
                  Instance = (DataManager_o *)sub_B2C41C(v44, *(_QWORD *)&(*v43)->m_Items[9]);
                  if ( !Instance )
                  {
                    v61 = sub_B2C454(0LL);
                    sub_B2C400(v61, 0LL);
                  }
                  if ( !*((_DWORD *)v43 + 6) )
                  {
LABEL_50:
                    v60 = sub_B2C460(Instance);
                    sub_B2C400(v60, 0LL);
                  }
                  v43[4] = (System_Int32_array *)v44;
                  sub_B2C2F8(
                    (BattleServantConfConponent_o *)(v43 + 4),
                    (System_Int32_array **)v44,
                    v46,
                    v47,
                    v48,
                    v49,
                    v50,
                    v51);
                  if ( !v42 )
                    goto LABEL_49;
                  *(_QWORD *)(v42 + 16) = v43;
                  sub_B2C2F8((BattleServantConfConponent_o *)(v42 + 16), v43, v52, v53, v54, v55, v56, v57);
                  _9__62_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__62_0,
                    (Il2CppObject *)v42,
                    Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__,
                    0LL);
                }
              }
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v58 = LocalizationManager__Get((System_String_o *)StringLiteral_12438/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0LL);
              v59 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              Instance = (DataManager_o *)EventServantEntity__GetGetMessage(EventServant, 0LL);
              if ( !v59 )
                goto LABEL_49;
              CommonUI__OpenNotificationDialog(
                v59,
                v58,
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
      ++v25;
      if ( !getJoinSvtList )
        goto LABEL_49;
    }
  }
}


void __fastcall BattleResultBondsComponent__Close(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleWindowComponent_o *multiDeckWindow; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_418854D & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleResultBondsComponent_endClose__, method);
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_418854D = 1;
  }
  if ( this->fields.isMultiDeck )
    multiDeckWindow = this->fields.multiDeckWindow;
  else
    multiDeckWindow = this->fields.window;
  v5 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v5, (Il2CppObject *)this, Method_BattleResultBondsComponent_endClose__, 0LL);
  if ( !multiDeckWindow )
    sub_B2C434(v6, v7);
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))multiDeckWindow->klass->vtable._12_Close.method)(
    multiDeckWindow,
    v5,
    multiDeckWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultBondsComponent__CloseBondUpRoot(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *upRoot; // x0

  if ( (byte_4188552 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, method);
    byte_4188552 = 1;
  }
  upRoot = this->fields.upRoot;
  if ( !upRoot
    || (UnityEngine_GameObject__SetActive(upRoot, 0, 0LL),
        (upRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B2C434(upRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)upRoot, (System_String_o *)StringLiteral_5496/*"END_PROC"*/, 0LL);
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
  if ( (byte_4188547 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, data);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__, v10);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    this = (BattleResultBondsComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    byte_4188547 = 1;
  }
  if ( !data )
    goto LABEL_20;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               effectName,
                                                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleResultBondsComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           Object_WarBoardWaitTimeSetting,
                                           (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                           v14,
                                           (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
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
        v27 = sub_B2C460(this);
        sub_B2C400(v27, 0LL);
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
    sub_B2C434(this, data);
  }
LABEL_18:
  this = (BattleResultBondsComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_20;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v25,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void __fastcall BattleResultBondsComponent__DeleteGetJoinSvtData(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleResultBondsComponent_c *v2; // x0

  if ( (byte_418853C & 1) == 0 )
  {
    sub_B2C35C(&BattleResultBondsComponent_TypeInfo, v1);
    byte_418853C = 1;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  __int64 v12; // x1
  struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *bondsList; // x0
  const MethodInfo *v14; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  System_Int32_array **v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418854F & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__,
      method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__, v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__,
      v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v9);
    byte_418854F = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( this->fields.isMultiDeck )
  {
    p_bondsIconArray = (BattleServantConfConponent_o *)&this->fields.bondsIconArray;
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.bondsIconArray, 0LL) )
    {
      v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v11,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
      bondsList = this->fields.bondsList;
      if ( !bondsList )
        goto LABEL_17;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v24,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bondsList,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v24,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
      {
        if ( !v24.fields.current )
          sub_B2C434(0LL, v14);
        BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                          (BattleResultBondsDeckPerWaveComponent_o *)v24.fields.current,
                                                                          v14);
        if ( !v11 )
          sub_B2C434(BondsIconArray, BondsIconArray);
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v11,
          BondsIconArray,
          (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v24,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
      if ( !v11 )
LABEL_17:
        sub_B2C434(bondsList, v12);
      v16 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                     (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
      p_bondsIconArray->klass = (BattleServantConfConponent_c *)v16;
      sub_B2C2F8(p_bondsIconArray, v16, v17, v18, v19, v20, v21, v22);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_Object_o *multiDeckWindow; // x20

  if ( (byte_418853D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_418853D = 1;
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
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.effectUIList,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
    sub_B2C434(window, method);
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

  if ( (byte_418853E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, oldCollects);
    byte_418853E = 1;
  }
  this->fields.oldCollections = oldCollects;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.oldCollections,
    (System_Int32_array **)oldCollects,
    (System_String_array **)inRewardInfos,
    (System_String_array **)resultAsset,
    *(System_Boolean_array ***)&baseFriendshipExp,
    (System_Int32_array **)getJoinSvts,
    (System_Int32_array *)inIsMultiDeck,
    (System_Int32_array *)method);
  this->fields.rewardInfos = inRewardInfos;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.rewardInfos,
    (System_Int32_array **)inRewardInfos,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.resultAssetData = resultAsset;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.resultAssetData,
    (System_Int32_array **)resultAsset,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.getJoinSvtList = getJoinSvts;
  sub_B2C2F8(
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

  v12 = targetIndex;
  v13 = this;
  if ( (byte_4188550 & 1) == 0 )
  {
    sub_B2C35C(&BattleResultBondsComponent_TypeInfo, *(_QWORD *)&targetIndex);
    this = (BattleResultBondsComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    byte_4188550 = 1;
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
      v19 = v13->fields.collects;
      if ( !v19 )
        goto LABEL_54;
      if ( v12 >= v19->max_length )
        goto LABEL_55;
      this = *(BattleResultBondsComponent_o **)((char *)&v19->obj.klass + v15);
      if ( !this )
        goto LABEL_54;
      this = (BattleResultBondsComponent_o *)BattleResultBondsIconComponent__changeGauge(
                                               (BattleResultBondsIconComponent_o *)this,
                                               0.0,
                                               *(const MethodInfo **)&targetIndex);
      v20 = v13->fields.collects;
      if ( !v20 )
        goto LABEL_54;
      if ( v12 >= v20->max_length )
        goto LABEL_55;
      this = *(BattleResultBondsComponent_o **)((char *)&v20->obj.klass + v15);
      if ( !this )
        goto LABEL_54;
      BattleResultBondsIconComponent__InitBuddyPointInfo(
        (BattleResultBondsIconComponent_o *)this,
        *(const MethodInfo **)&targetIndex);
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
    v22 = v13->fields.collects;
    if ( !v22 )
      goto LABEL_54;
    if ( v22->max_length <= cnt )
    {
LABEL_55:
      v32 = sub_B2C460(this);
      sub_B2C400(v32, 0LL);
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
      v28 = v13->fields.collects;
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
      || (v33.fields.y = 13.0,
          v33.fields.x = 0.0,
          v33.fields.z = 0.0,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v33, 0LL),
          (this = (BattleResultBondsComponent_o *)v13->fields.window) == 0LL) )
    {
LABEL_54:
      sub_B2C434(this, *(_QWORD *)&targetIndex);
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
  BattleResultBondsIconComponent_array *BondsIconArray; // x20
  BattleResultBondsComponent___c_c *v12; // x8
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__53_0; // x21
  Il2CppObject *v15; // x22
  struct BattleResultBondsComponent___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL4 isMultiDeck; // w8
  struct BattleWindowComponent_o *v26; // x20
  __int64 *v27; // x8
  BattleWindowComponent_EndCall_o *v28; // x21

  if ( (byte_4188541 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_BattleResultBondsIconComponent___, method);
    sub_B2C35C(&Method_BattleResultBondsComponent_OpenEnd__, v3);
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_B2C35C(&Method_System_Func_BattleResultBondsIconComponent__bool___ctor__, v5);
    sub_B2C35C(&System_Func_BattleResultBondsIconComponent__bool__TypeInfo, v6);
    sub_B2C35C(&Method_BattleResultBondsComponent___c__Open_b__53_0__, v7);
    sub_B2C35C(&BattleResultBondsComponent___c_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_5492/*"END_OPEN"*/, v9);
    sub_B2C35C(&StringLiteral_12257/*"SKIP"*/, v10);
    byte_4188541 = 1;
  }
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, method);
  v12 = BattleResultBondsComponent___c_TypeInfo;
  if ( (BYTE3(BattleResultBondsComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
    v12 = BattleResultBondsComponent___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__53_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__53_0;
  if ( !_9__53_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__53_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleResultBondsIconComponent__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__53_0,
      v15,
      Method_BattleResultBondsComponent___c__Open_b__53_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_BattleResultBondsIconComponent__bool___ctor__);
    v16 = BattleResultBondsComponent___c_TypeInfo->static_fields;
    v16->__9__53_0 = (struct System_Func_BattleResultBondsIconComponent__bool__o *)_9__53_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v16->__9__53_0,
      (System_Int32_array **)_9__53_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
         (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)BondsIconArray,
         (System_Func_T__bool__o *)_9__53_0,
         (const MethodInfo_1726758 *)Method_BasicHelper_Any_BattleResultBondsIconComponent___) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      isMultiDeck = this->fields.isMultiDeck;
      this->fields.openBoundsFlg = 0;
      this->fields.colIndex = 0;
      this->fields.bondsCountUp = 1;
      v26 = isMultiDeck ? this->fields.multiDeckWindow : this->fields.window;
      v28 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo);
      BattleWindowComponent_EndCall___ctor(v28, (Il2CppObject *)this, Method_BattleResultBondsComponent_OpenEnd__, 0LL);
      if ( v26 )
      {
        ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v26->klass->vtable._10_Open.method)(
          v26,
          v28,
          v26->klass->vtable._11_CompOpen.methodPtr);
        gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
        if ( gameObject )
        {
          v27 = &StringLiteral_5492/*"END_OPEN"*/;
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    sub_B2C434(gameObject, v23);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !gameObject )
    goto LABEL_22;
  v27 = &StringLiteral_12257/*"SKIP"*/;
LABEL_21:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)*v27, 0LL);
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
  const MethodInfo *v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Object_array *v23; // x21
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x22
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x1
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x1
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Int32_array **v87; // x22
  System_Collections_Hashtable_o *v88; // x0
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

  if ( (byte_4188542 & 1) == 0 )
  {
    sub_B2C35C(&object___TypeInfo, method);
    sub_B2C35C(&SeManager_TypeInfo, v3);
    sub_B2C35C(&float_TypeInfo, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_18914/*"from"*/, v6);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v7);
    sub_B2C35C(&StringLiteral_21272/*"onupdate"*/, v8);
    sub_B2C35C(&StringLiteral_15069/*"UpdateValue"*/, v9);
    sub_B2C35C(&StringLiteral_22714/*"to"*/, v10);
    sub_B2C35C(&StringLiteral_18742/*"finishUpdateValue"*/, v11);
    sub_B2C35C(&StringLiteral_21263/*"oncomplete"*/, v12);
    sub_B2C35C(&iTween_TypeInfo, v13);
    byte_4188542 = 1;
  }
  if ( !this->fields.bondsCountUp )
    return;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B2C374(object___TypeInfo, 10LL);
  if ( !BondsIconArray )
LABEL_68:
    sub_B2C434(BondsIconArray, v16);
  v23 = (System_Object_array *)BondsIconArray;
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_18914/*"from"*/;
  if ( StringLiteral_18914/*"from"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B2C41C(
                                                               StringLiteral_18914/*"from"*/,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v24 = (System_Int32_array **)StringLiteral_18914/*"from"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( !v23->max_length )
    goto LABEL_67;
  v23->m_Items[0] = (Il2CppObject *)v24;
  sub_B2C2F8((BattleServantConfConponent_o *)v23->m_Items, v24, v17, v18, v19, v20, v21, v22);
  v105 = 0;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v105);
  v31 = (System_Int32_array **)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B2C41C(
                                                               BondsIconArray,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
  }
  if ( v23->max_length <= 1 )
    goto LABEL_67;
  v23->m_Items[1] = (Il2CppObject *)v31;
  sub_B2C2F8((BattleServantConfConponent_o *)&v23->m_Items[1], v31, v25, v26, v27, v28, v29, v30);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22714/*"to"*/;
  if ( StringLiteral_22714/*"to"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B2C41C(
                                                               StringLiteral_22714/*"to"*/,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v38 = (System_Int32_array **)StringLiteral_22714/*"to"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v23->max_length <= 2 )
    goto LABEL_67;
  v23->m_Items[2] = (Il2CppObject *)v38;
  sub_B2C2F8((BattleServantConfConponent_o *)&v23->m_Items[2], v38, v32, v33, v34, v35, v36, v37);
  v104 = 1065353216;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v104);
  v45 = (System_Int32_array **)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B2C41C(
                                                               BondsIconArray,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
  }
  if ( v23->max_length <= 3 )
    goto LABEL_67;
  v23->m_Items[3] = (Il2CppObject *)v45;
  sub_B2C2F8((BattleServantConfConponent_o *)&v23->m_Items[3], v45, v39, v40, v41, v42, v43, v44);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_21272/*"onupdate"*/;
  if ( StringLiteral_21272/*"onupdate"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B2C41C(
                                                               StringLiteral_21272/*"onupdate"*/,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v52 = (System_Int32_array **)StringLiteral_21272/*"onupdate"*/;
  }
  else
  {
    v52 = 0LL;
  }
  if ( v23->max_length <= 4 )
    goto LABEL_67;
  v23->m_Items[4] = (Il2CppObject *)v52;
  sub_B2C2F8((BattleServantConfConponent_o *)&v23->m_Items[4], v52, v46, v47, v48, v49, v50, v51);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_15069/*"UpdateValue"*/;
  if ( StringLiteral_15069/*"UpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B2C41C(
                                                               StringLiteral_15069/*"UpdateValue"*/,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v59 = (System_Int32_array **)StringLiteral_15069/*"UpdateValue"*/;
  }
  else
  {
    v59 = 0LL;
  }
  if ( v23->max_length <= 5 )
    goto LABEL_67;
  v23->m_Items[5] = (Il2CppObject *)v59;
  sub_B2C2F8((BattleServantConfConponent_o *)&v23->m_Items[5], v59, v53, v54, v55, v56, v57, v58);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_21263/*"oncomplete"*/;
  if ( StringLiteral_21263/*"oncomplete"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B2C41C(
                                                               StringLiteral_21263/*"oncomplete"*/,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v66 = (System_Int32_array **)StringLiteral_21263/*"oncomplete"*/;
  }
  else
  {
    v66 = 0LL;
  }
  if ( v23->max_length <= 6 )
    goto LABEL_67;
  v23->m_Items[6] = (Il2CppObject *)v66;
  sub_B2C2F8((BattleServantConfConponent_o *)&v23->m_Items[6], v66, v60, v61, v62, v63, v64, v65);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_18742/*"finishUpdateValue"*/;
  if ( StringLiteral_18742/*"finishUpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B2C41C(
                                                               StringLiteral_18742/*"finishUpdateValue"*/,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v73 = (System_Int32_array **)StringLiteral_18742/*"finishUpdateValue"*/;
  }
  else
  {
    v73 = 0LL;
  }
  if ( v23->max_length <= 7 )
    goto LABEL_67;
  v23->m_Items[7] = (Il2CppObject *)v73;
  sub_B2C2F8((BattleServantConfConponent_o *)&v23->m_Items[7], v73, v67, v68, v69, v70, v71, v72);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22677/*"time"*/;
  if ( StringLiteral_22677/*"time"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B2C41C(
                                                               StringLiteral_22677/*"time"*/,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_69;
    v80 = (System_Int32_array **)StringLiteral_22677/*"time"*/;
  }
  else
  {
    v80 = 0LL;
  }
  if ( v23->max_length <= 8 )
    goto LABEL_67;
  v23->m_Items[8] = (Il2CppObject *)v80;
  sub_B2C2F8((BattleServantConfConponent_o *)&v23->m_Items[8], v80, v74, v75, v76, v77, v78, v79);
  v103 = 1072064102;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v103);
  v87 = (System_Int32_array **)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_B2C41C(
                                                               BondsIconArray,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
    {
LABEL_69:
      v102 = sub_B2C454(BondsIconArray);
      sub_B2C400(v102, 0LL);
    }
  }
  if ( v23->max_length <= 9 )
    goto LABEL_67;
  v23->m_Items[9] = (Il2CppObject *)v87;
  sub_B2C2F8((BattleServantConfConponent_o *)&v23->m_Items[9], v87, v81, v82, v83, v84, v85, v86);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v88 = iTween__Hash(v23, 0LL);
  iTween__ValueTo(gameObject, v88, 0LL);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v89);
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
      BattleResultBondsIconComponent__StartUpdateBuddyPoint((BattleResultBondsIconComponent_o *)BondsIconArray, v16);
      max_length = v91->max_length;
      if ( (int)++v92 >= max_length )
        goto LABEL_58;
    }
LABEL_67:
    v101 = sub_B2C460(BondsIconArray);
    sub_B2C400(v101, 0LL);
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
    sub_B2C2F8(
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
  struct BattleInfoData_o *battle_info; // x9
  struct DeckData_array *waveMyDecks; // x26
  __int64 maxWave; // x27
  BattleUserServantData_array *userSvt; // x24
  unsigned __int64 currentWave; // x19
  il2cpp_array_size_t max_length; // w9
  DeckData_o *v33; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x20
  const MethodInfo *v35; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  struct BattleResultBondsIconComponent_array *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x0
  const MethodInfo *v45; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_418853F & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__,
      battleData);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__,
      v18);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__,
      v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__, v23);
    sub_B2C35C(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v24);
    byte_418853F = 1;
  }
  memset(&v47, 0, sizeof(v47));
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
        v44 = sub_B2C460(bondsList);
        sub_B2C400(v44, 0LL);
      }
      v33 = waveMyDecks->m_Items[currentWave++];
      BattleResultBondsComponent__SetResultDataLocal(
        this,
        v33,
        oldCollects,
        followerType,
        userSvt,
        battleResult,
        isHideBuddyPointResult,
        battleData,
        currentWave,
        maxWave,
        v45);
      max_length = waveMyDecks->max_length;
    }
    while ( (__int64)currentWave < (int)max_length );
  }
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  bondsList = this->fields.bondsList;
  if ( !bondsList )
    goto LABEL_21;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v47,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bondsList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v47,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
  {
    if ( !v47.fields.current )
      sub_B2C434(0LL, v35);
    BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                      (BattleResultBondsDeckPerWaveComponent_o *)v47.fields.current,
                                                                      v35);
    if ( !v34 )
      sub_B2C434(BondsIconArray, BondsIconArray);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v34,
      BondsIconArray,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v47,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
  if ( !v34 )
LABEL_21:
    sub_B2C434(bondsList, v26);
  v37 = (struct BattleResultBondsIconComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v34,
                                                         (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
  this->fields.bondsIconArray = v37;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.bondsIconArray,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
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
  const MethodInfo *userSvtId; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v54; // x25
  BattleResultBondsComponent_o *v55; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v56; // x27
  struct BattleResultBondsDeckPerWaveComponent_o *multiBondsPrefab; // x19
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *v59; // x1
  const MethodInfo *v60; // x3
  const MethodInfo *v61; // x6
  System_Collections_Generic_IEnumerable_TSource__o *rewardInfos; // x21
  BattleResultBondsComponent___c_c *v63; // x0
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__49_0; // x19
  Il2CppObject *v66; // x20
  struct BattleResultBondsComponent___c_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x0
  System_Collections_Generic_List_TSource__o *v75; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v76; // x21
  BattleResultBondsComponent_c *v77; // x0
  BattleResultBondsComponent_c *v78; // x0
  Il2CppObject *String_35342888; // x19
  System_Collections_Generic_IEnumerable_T__o *v80; // x0
  BattleResultBondsComponent_c *v81; // x0
  System_String_o *GET_NEW_SVT_KEY; // x20
  WarBoardUiData_SaveData_array *v83; // x19
  System_String_o *v84; // x0
  BattleResultBondsComponent___c_c *v85; // x0
  System_Collections_Generic_IEnumerable_TSource__o *getJoinSvts; // x21
  struct BattleResultBondsComponent___c_StaticFields *v87; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__49_1; // x19
  Il2CppObject *v89; // x20
  struct BattleResultBondsComponent___c_StaticFields *v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v97; // x0
  System_Collections_Generic_List_TSource__o *v98; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v99; // x21
  BattleResultBondsComponent_c *v100; // x0
  BattleResultBondsComponent_c *v101; // x0
  Il2CppObject *v102; // x19
  System_Collections_Generic_IEnumerable_T__o *v103; // x0
  BattleResultBondsComponent_c *v104; // x0
  System_String_o *GET_EXIST_SVT_KEY; // x20
  WarBoardUiData_SaveData_array *v106; // x19
  System_String_o *v107; // x0
  struct BattleDeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v110; // w21
  int32_t v111; // w22
  BattleDeckServantData_o *v112; // x26
  BattleResultBondsComponent___c__DisplayClass49_0_o *v113; // x28
  UserServantEntity_o *v114; // x24
  BattleResultBondsComponent_o *SvtId; // x0
  const MethodInfo *v116; // x3
  const MethodInfo *v117; // x7
  signed int v118; // w8
  ServantEntity_o *v119; // x27
  unsigned int v120; // w19
  BattleUserServantData_o *v121; // x20
  __int128 v122; // q0
  const MethodInfo *v123; // x5
  BattleResultComponent_resultData_o *v124; // x19
  unsigned int v125; // w25
  int32_t afterLimitCount; // w26
  int32_t v127; // w22
  int afterIconLimitCount; // w8
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x19
  BattleBuddyPointInfo_o *v131; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v132; // x20
  BattleResultBondsIconComponent_o *v133; // x28
  struct BattleResultBondsIconComponent_array *v134; // x8
  const MethodInfo *v135; // x3
  unsigned int v136; // w22
  const MethodInfo *v137; // x2
  UserServantCollectionEntity_o *EntityDefinitely; // x1
  bool v139; // w19
  const MethodInfo *v140; // x2
  const MethodInfo *v141; // x1
  char v142; // w8
  bool updateFlg; // w19
  char v144; // w8
  const MethodInfo *v145; // x1
  __int64 v146; // x0
  int32_t cnt; // [xsp+4h] [xbp-10Ch]
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // [xsp+8h] [xbp-108h]
  BattleResultBondsDeckPerWaveComponent_o *Object_object; // [xsp+20h] [xbp-F0h]
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+28h] [xbp-E8h]
  struct BattleDeckServantData_array *v153; // [xsp+30h] [xbp-E0h]
  DataMasterBase_WarMaster__WarEntity__int__o *v154; // [xsp+38h] [xbp-D8h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v155; // [xsp+40h] [xbp-D0h]
  int32_t Type; // [xsp+54h] [xbp-BCh]
  UserServantCollectionEntity_o *userSvtCol; // [xsp+60h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v161; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v162; // [xsp+90h] [xbp-80h]

  if ( (byte_4188540 & 1) == 0 )
  {
    sub_B2C35C(&Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___, myDeck);
    sub_B2C35C(&Method_BasicHelper_Find_BattleBuddyPointInfo___, v14);
    sub_B2C35C(&BattleResultBondsComponent_TypeInfo, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v18);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v19);
    sub_B2C35C(&DataManager_TypeInfo, v20);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v22);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_GetSvts___, v23);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_QuestRewardInfo___, v24);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_GetSvts___, v25);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_QuestRewardInfo___, v26);
    sub_B2C35C(&Method_System_Func_QuestRewardInfo__bool___ctor__, v27);
    sub_B2C35C(&Method_System_Func_BattleBuddyPointInfo__bool___ctor__, v28);
    sub_B2C35C(&Method_System_Func_GetSvts__bool___ctor__, v29);
    sub_B2C35C(&System_Func_GetSvts__bool__TypeInfo, v30);
    sub_B2C35C(&System_Func_QuestRewardInfo__bool__TypeInfo, v31);
    sub_B2C35C(&System_Func_BattleBuddyPointInfo__bool__TypeInfo, v32);
    sub_B2C35C(&Method_JsonManager_DeserializeArray_GetSvts___, v33);
    sub_B2C35C(&Method_JsonManager_DeserializeArray_QuestRewardInfo___, v34);
    sub_B2C35C(&JsonManager_TypeInfo, v35);
    sub_B2C35C(&Method_System_Collections_Generic_List_GetSvts__AddRange__, v36);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__, v37);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__, v38);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__, v39);
    sub_B2C35C(&Method_System_Collections_Generic_List_GetSvts__ToArray__, v40);
    sub_B2C35C(&Method_System_Collections_Generic_List_GetSvts__get_Count__, v41);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__, v42);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v43);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v44);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45);
    sub_B2C35C(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__, v46);
    sub_B2C35C(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__, v47);
    sub_B2C35C(&Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__, v48);
    sub_B2C35C(&BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo, v49);
    sub_B2C35C(&BattleResultBondsComponent___c_TypeInfo, v50);
    byte_4188540 = 1;
  }
  Type = Follower__getType(followerType, 0LL);
  if ( Type )
    v51 = 5;
  else
    v51 = 6;
  cnt = v51;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_147;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_147;
  v54 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)Instance,
                                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_147;
  v55 = this;
  v56 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( this->fields.isMultiDeck )
  {
    Instance = (int64_t)this->fields.multiBondsRoot;
    if ( !Instance )
      goto LABEL_147;
    multiBondsPrefab = this->fields.multiBondsPrefab;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    v59 = (Il2CppObject *)multiBondsPrefab;
    v55 = this;
    Object_object = (BattleResultBondsDeckPerWaveComponent_o *)BaseMonoBehaviour__createObject_object_(
                                                                 (BaseMonoBehaviour_o *)this,
                                                                 v59,
                                                                 transform,
                                                                 0LL,
                                                                 (const MethodInfo_172605C *)Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    if ( this->fields.isMultiDeck )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
    v55->fields.isWarboard = Instance & 1;
    if ( (Instance & 1) != 0 )
    {
      if ( !battleResult )
        goto LABEL_147;
      rewardInfos = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.rewardInfos;
      v63 = BattleResultBondsComponent___c_TypeInfo;
      if ( (BYTE3(BattleResultBondsComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v63 = BattleResultBondsComponent___c_TypeInfo;
      }
      static_fields = v63->static_fields;
      _9__49_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__49_0;
      if ( !_9__49_0 )
      {
        if ( (BYTE3(v63->vtable._0_Equals.methodPtr) & 4) != 0 && !v63->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v63);
          static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
        }
        v66 = (Il2CppObject *)static_fields->__9;
        _9__49_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_QuestRewardInfo__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__49_0,
          v66,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__,
          (const MethodInfo_2711C04 *)Method_System_Func_QuestRewardInfo__bool___ctor__);
        v67 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        v67->__9__49_0 = (struct System_Func_QuestRewardInfo__bool__o *)_9__49_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v67->__9__49_0,
          (System_Int32_array **)_9__49_0,
          v68,
          v69,
          v70,
          v71,
          v72,
          v73);
      }
      v74 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              rewardInfos,
              (System_Func_TSource__bool__o *)_9__49_0,
              (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
      v75 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
              v74,
              (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
      if ( v75 )
      {
        v76 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v75;
        if ( v75->fields._size >= 1 )
        {
          v77 = BattleResultBondsComponent_TypeInfo;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v77 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v77->static_fields->GET_NEW_SVT_KEY, 0LL) )
          {
            v78 = BattleResultBondsComponent_TypeInfo;
            if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v78 = BattleResultBondsComponent_TypeInfo;
            }
            String_35342888 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_35342888(
                                                v78->static_fields->GET_NEW_SVT_KEY,
                                                0LL);
            if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !JsonManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            }
            v80 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                   String_35342888,
                                                                   (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_QuestRewardInfo___);
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              v76,
              v80,
              (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
          }
          v81 = BattleResultBondsComponent_TypeInfo;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v81 = BattleResultBondsComponent_TypeInfo;
          }
          GET_NEW_SVT_KEY = v81->static_fields->GET_NEW_SVT_KEY;
          v83 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v76,
                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
          if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !JsonManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          }
          v84 = JsonManager__toJson(&v83->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_NEW_SVT_KEY, v84, 0LL);
        }
      }
      v85 = BattleResultBondsComponent___c_TypeInfo;
      getJoinSvts = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.getJoinSvts;
      if ( (BYTE3(BattleResultBondsComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v85 = BattleResultBondsComponent___c_TypeInfo;
      }
      v87 = v85->static_fields;
      _9__49_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v87->__9__49_1;
      if ( !_9__49_1 )
      {
        if ( (BYTE3(v85->vtable._0_Equals.methodPtr) & 4) != 0 && !v85->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v85);
          v87 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        }
        v89 = (Il2CppObject *)v87->__9;
        _9__49_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_GetSvts__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__49_1,
          v89,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__,
          (const MethodInfo_2711C04 *)Method_System_Func_GetSvts__bool___ctor__);
        v90 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        v90->__9__49_1 = (struct System_Func_GetSvts__bool__o *)_9__49_1;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v90->__9__49_1,
          (System_Int32_array **)_9__49_1,
          v91,
          v92,
          v93,
          v94,
          v95,
          v96);
      }
      v97 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              getJoinSvts,
              (System_Func_TSource__bool__o *)_9__49_1,
              (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_GetSvts___);
      v98 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
              v97,
              (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_GetSvts___);
      if ( v98 )
      {
        v99 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v98;
        if ( v98->fields._size >= 1 )
        {
          v100 = BattleResultBondsComponent_TypeInfo;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v100 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v100->static_fields->GET_EXIST_SVT_KEY, 0LL) )
          {
            v101 = BattleResultBondsComponent_TypeInfo;
            if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v101 = BattleResultBondsComponent_TypeInfo;
            }
            v102 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_35342888(
                                     v101->static_fields->GET_EXIST_SVT_KEY,
                                     0LL);
            if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !JsonManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            }
            v103 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                    v102,
                                                                    (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_GetSvts___);
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              v99,
              v103,
              (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_GetSvts__AddRange__);
          }
          v104 = BattleResultBondsComponent_TypeInfo;
          if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v104 = BattleResultBondsComponent_TypeInfo;
          }
          GET_EXIST_SVT_KEY = v104->static_fields->GET_EXIST_SVT_KEY;
          v106 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v99,
                   (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_GetSvts__ToArray__);
          if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !JsonManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          }
          v107 = JsonManager__toJson(&v106->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_EXIST_SVT_KEY, v107, 0LL);
        }
      }
      UnityEngine_PlayerPrefs__Save(0LL);
      v55 = this;
    }
  }
  if ( !myDeck || (svts = myDeck->fields.svts) == 0LL )
LABEL_147:
    sub_B2C434(Instance, userSvtId);
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v110 = 0;
    v111 = 0;
    v154 = v56;
    v155 = v54;
    v153 = myDeck->fields.svts;
    while ( v110 < max_length )
    {
      v112 = svts->m_Items[v110];
      v113 = (BattleResultBondsComponent___c__DisplayClass49_0_o *)sub_B2C42C(BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo);
      BattleResultBondsComponent___c__DisplayClass49_0___ctor(v113, 0LL);
      if ( !v112 || !v113 )
        goto LABEL_147;
      userSvtId = (const MethodInfo *)v112->fields.userSvtId;
      v113->fields.userSvtId = (int64_t)userSvtId;
      if ( (__int64)userSvtId >= 1 )
      {
        if ( !v54 )
          goto LABEL_147;
        Instance = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                              v54,
                              (int64_t)userSvtId,
                              (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !Instance )
          goto LABEL_147;
        v114 = (UserServantEntity_o *)Instance;
        SvtId = (BattleResultBondsComponent_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
        userSvtCol = BattleResultBondsComponent__getServantCollection(SvtId, oldCollects, (int32_t)SvtId, v116);
        Instance = UserServantEntity__getSvtId(v114, 0LL);
        if ( !v56 )
          goto LABEL_147;
        Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v56,
                              Instance,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !usrSvts )
          goto LABEL_147;
        v118 = usrSvts->max_length;
        v119 = (ServantEntity_o *)Instance;
        if ( v118 < 1 )
        {
LABEL_103:
          v124 = battleResult;
          v125 = v111;
          afterLimitCount = -1;
          v127 = -1;
          if ( !battleResult )
            goto LABEL_147;
        }
        else
        {
          v120 = 0;
          while ( 1 )
          {
            if ( v120 >= v118 )
              goto LABEL_148;
            v121 = usrSvts->m_Items[v120];
            if ( !v121 )
              goto LABEL_147;
            v122 = *(_OWORD *)&v121->fields.id.fields.fakeValue;
            *(_OWORD *)&v162.fields.currentCryptoKey = *(_OWORD *)&v121->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v162.fields.fakeValue = v122;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v161 = v162;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v161, 0LL);
            if ( Instance == v113->fields.userSvtId )
              break;
            v118 = usrSvts->max_length;
            if ( (int)++v120 >= v118 )
              goto LABEL_103;
          }
          v124 = battleResult;
          v125 = v111;
          if ( this->fields.isMultiDeck )
            BattleResultBondsComponent__UpdateAfterLimitCount(
              (BattleResultBondsComponent_o *)Instance,
              battleData,
              v121,
              v112,
              Master_WarQuestSelectionMaster,
              v123);
          Instance = UserServantEntity__getIconLimitCount((UserServantEntity_o *)v121, 0, 0LL);
          afterIconLimitCount = v121->fields.afterIconLimitCount;
          afterLimitCount = v121->fields.afterLimitCount;
          if ( afterIconLimitCount < 0 || (_DWORD)Instance == afterIconLimitCount )
            v127 = Instance;
          else
            v127 = v121->fields.afterIconLimitCount;
          if ( !battleResult )
            goto LABEL_147;
        }
        buddyPointInfos = v124->fields.buddyPointInfos;
        if ( buddyPointInfos )
        {
          v131 = 0LL;
          if ( *(_QWORD *)&buddyPointInfos->max_length && !isHideBuddyPointResult )
          {
            v132 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleBuddyPointInfo__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v132,
              (Il2CppObject *)v113,
              Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__,
              (const MethodInfo_2711C04 *)Method_System_Func_BattleBuddyPointInfo__bool___ctor__);
            Instance = (int64_t)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                  (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)buddyPointInfos,
                                  (System_Func_T__bool__o *)v132,
                                  (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_BattleBuddyPointInfo___);
            v131 = (BattleBuddyPointInfo_o *)Instance;
          }
        }
        else
        {
          v131 = 0LL;
        }
        if ( this->fields.isMultiDeck )
        {
          Instance = (int64_t)Object_object;
          if ( !Object_object )
            goto LABEL_147;
          Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, userSvtId);
          v133 = (BattleResultBondsIconComponent_o *)Instance;
          if ( !Instance )
            goto LABEL_147;
        }
        else
        {
          v134 = this->fields.collects;
          if ( !v134 )
            goto LABEL_147;
          if ( v125 >= v134->max_length )
            break;
          v133 = v134->m_Items[v125];
          if ( !v133 )
            goto LABEL_147;
        }
        BattleResultBondsIconComponent__setServantData(
          v133,
          userSvtCol,
          v114,
          v127,
          this->fields.baseFriendshipExp,
          Type == 0,
          afterLimitCount,
          v117);
        BattleResultBondsIconComponent__SetBuddyPointInfo(v133, v131, battleResult->fields.eventId, v135);
        if ( !v119 )
          goto LABEL_147;
        v136 = v125;
        if ( ServantEntity__checkIsHeroineSvt(v119, 0LL) && !UserServantEntity__IsAddFriendShipHeroine(v114, 0LL) )
        {
          updateFlg = this->fields.updateFlg;
          v144 = updateFlg | BattleResultBondsIconComponent__setNextServantData(v133, userSvtCol, v137);
          v55 = this;
          this->fields.updateFlg = v144 & 1;
          v133->fields.isHeroine = 1;
          v56 = v154;
          v54 = v155;
        }
        else
        {
          Instance = (int64_t)MasterData_WarQuestSelectionMaster;
          v56 = v154;
          v54 = v155;
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_147;
          EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                               MasterData_WarQuestSelectionMaster,
                               v133->fields.userId,
                               v133->fields.svtId,
                               0LL);
          v139 = this->fields.updateFlg;
          v142 = v139 | BattleResultBondsIconComponent__setNextServantData(v133, EntityDefinitely, v140);
          v55 = this;
          this->fields.updateFlg = v142 & 1;
        }
        svts = v153;
        BattleResultBondsIconComponent__changeGauge(v133, 0.0, v141);
        BattleResultBondsIconComponent__InitBuddyPointInfo(v133, v145);
        if ( v55->fields.isMultiDeck )
        {
          Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v133, 0LL);
          if ( !Instance )
            goto LABEL_147;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        }
        v111 = v136 + 1;
      }
      max_length = svts->max_length;
      if ( (int)++v110 >= max_length )
        goto LABEL_139;
    }
LABEL_148:
    v146 = sub_B2C460(Instance);
    sub_B2C400(v146, 0LL);
  }
  v111 = 0;
LABEL_139:
  if ( v55->fields.isMultiDeck )
  {
    if ( Object_object )
    {
      BattleResultBondsDeckPerWaveComponent__SetWaveCount(Object_object, currentWave, maxWave, v60);
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
          Instance = (int64_t)v55->fields.multiBondsRoot;
          if ( Instance )
          {
            (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
              Instance,
              *(_QWORD *)(*(_QWORD *)Instance + 448LL));
            Instance = (int64_t)v55->fields.bondsList;
            if ( Instance )
            {
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
                (EventMissionProgressRequest_Argument_ProgressData_o *)Object_object,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__);
              return;
            }
          }
        }
      }
    }
    goto LABEL_147;
  }
  BattleResultBondsComponent__NormalBondsInit(v55, v111, cnt, Type == 0, battleResult, isHideBuddyPointResult, v61);
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
        v8 = sub_B2C460(BondsIconArray);
        sub_B2C400(v8, 0LL);
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
    sub_B2C434(BondsIconArray, v4);
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

  if ( (byte_4188551 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, battleData);
    this = (BattleResultBondsComponent_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_4188551 = 1;
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
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v27, 0LL);
  this = (BattleResultBondsComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                           userSvtData->fields.limitCount,
                                           0LL);
  if ( !svtLimitImageMaster )
LABEL_30:
    sub_B2C434(this, battleData);
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
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v28, 0LL);
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
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v29, 0LL);
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
        v9 = sub_B2C460(BondsIconArray);
        sub_B2C400(v9, 0LL);
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
    sub_B2C434(BondsIconArray, v5);
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
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
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
    sub_B2C434(this, method);
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
  __int64 v20; // x1
  UnityEngine_GameObject_o *v21; // x20
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x23
  BattleResultBondsComponent_c *v23; // x0
  UnityEngine_Object_o *v24; // x24
  bool v25; // w0
  const MethodInfo *v26; // x4
  UnityEngine_Transform_o *transform; // x21
  float v28; // s8
  float y; // s9
  int v30; // s2
  float v31; // s1
  float v32; // s0
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4188546 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, text);
    sub_B2C35C(&BattleResultBondsComponent_TypeInfo, v13);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___, v14);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v16);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v17);
    sub_B2C35C(&StringLiteral_16827/*"bit_reward_shine02"*/, v18);
    byte_4188546 = 1;
  }
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             this->fields.confPrefab,
             this->fields.confRoot,
             0LL,
             0LL);
  if ( !Object )
    goto LABEL_40;
  v21 = Object;
  Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Object, 0LL);
  if ( !Object )
    goto LABEL_40;
  v33.fields.z = 0.0;
  v33.fields.y = -112.0 - posY;
  v33.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v33, 0LL);
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                        v21,
                                                                        (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
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
                                  v21,
                                  (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
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
      (System_String_o *)StringLiteral_16827/*"bit_reward_shine02"*/,
      v26);
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
        LODWORD(v28) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Object, 0LL);
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
            *(UnityEngine_Vector3_o *)(&v30 - 2) = UnityEngine_Transform__get_localPosition(
                                                     (UnityEngine_Transform_o *)Object,
                                                     0LL);
            if ( transform )
            {
              v31 = y;
              v32 = v28 + 36.0;
              UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v30 - 2), 0LL);
              goto LABEL_38;
            }
          }
        }
      }
    }
LABEL_40:
    sub_B2C434(Object, v20);
  }
LABEL_38:
  Object = (UnityEngine_GameObject_o *)this->fields.conflist;
  if ( !Object )
    goto LABEL_40;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Object,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


void __fastcall BattleResultBondsComponent__checkBondsUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x22
  PlayMakerFSM_o *myFsm; // x0
  __int64 v20; // x1
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
  int32_t colIndex; // w9
  __int64 v36; // x8
  __int64 v37; // x9
  __int64 v38; // x10
  __int64 *v39; // x8
  __int64 v40; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 *v47; // x21
  Il2CppObject *current; // x22
  UnityEngine_Object_o *levelUpSimpleAnim; // x22
  __int64 v50; // x3
  PlayMakerFSM_c *klass; // x8
  PlayMakerFSM_o *v52; // x22
  unsigned __int64 v53; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v55; // x0
  UnityEngine_Object_o *levelUpAnim; // x22
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x9
  __int64 v64; // x8
  __int64 v65; // x9
  struct BattleResultBondsIconComponent_o *v66; // x1
  UnityEngine_Object_o *figureMoveRoot; // x21
  System_Int32_array **gameObject; // x0
  UnityEngine_GameObject_o **v69; // x21
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t svtId; // w22
  int32_t svtLimit; // w23
  BattleResultBondsFigureComponent_o *bondsFigure; // x19
  UnityEngine_GameObject_o *v87; // x21
  System_Action_o *v88; // x24
  __int64 v89; // x0
  const MethodInfo *v90; // [xsp+0h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_T__o v91; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v92; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4188544 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Clear__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v10);
    sub_B2C35C(&BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo, v11);
    sub_B2C35C(&Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__, v12);
    sub_B2C35C(&BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_16813/*"bit_result_levelup01"*/, v14);
    sub_B2C35C(&StringLiteral_3089/*"CLOSE"*/, v15);
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, v16);
    sub_B2C35C(&StringLiteral_3091/*"CLOSE_BOND_UP_ROOT"*/, v17);
    byte_4188544 = 1;
  }
  memset(&v92, 0, sizeof(v92));
  v18 = sub_B2C42C(BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo);
  BattleResultBondsComponent___c__DisplayClass61_0___ctor(
    (BattleResultBondsComponent___c__DisplayClass61_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_70;
  *(_QWORD *)(v18 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  BondsIconArray = (System_Int32_array **)BattleResultBondsComponent__GetBondsIconArray(this, v27);
  *(_QWORD *)(v18 + 24) = BondsIconArray;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 24), BondsIconArray, v29, v30, v31, v32, v33, v34);
  colIndex = this->fields.colIndex;
  v36 = *(_QWORD *)(v18 + 24);
  *(_DWORD *)(v18 + 32) = colIndex;
  if ( !v36 )
    goto LABEL_70;
  while ( 1 )
  {
    if ( colIndex >= *(_DWORD *)(v36 + 24) )
    {
      myFsm = this->fields.myFsm;
      if ( this->fields.openBoundsFlg )
      {
        if ( !myFsm )
          goto LABEL_70;
        if ( this->fields.isMultiDeck )
          v39 = &StringLiteral_3091/*"CLOSE_BOND_UP_ROOT"*/;
        else
          v39 = &StringLiteral_5496/*"END_PROC"*/;
      }
      else
      {
        if ( !myFsm )
          goto LABEL_70;
        v39 = &StringLiteral_3089/*"CLOSE"*/;
      }
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v39, 0LL);
      return;
    }
    this->fields.colIndex = colIndex;
    v36 = *(_QWORD *)(v18 + 24);
    if ( !v36 )
      goto LABEL_70;
    v37 = *(int *)(v18 + 32);
    if ( (unsigned int)v37 >= *(_DWORD *)(v36 + 24) )
      goto LABEL_71;
    v38 = *(_QWORD *)(v36 + 8 * v37 + 32);
    if ( !v38 )
      goto LABEL_70;
    if ( *(_BYTE *)(v38 + 104) && *(_DWORD *)(v38 + 152) != *(_DWORD *)(v38 + 160) )
      break;
    colIndex = v37 + 1;
    *(_DWORD *)(v18 + 32) = colIndex;
  }
  v40 = sub_B2C42C(BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo);
  BattleResultBondsComponent___c__DisplayClass61_1___ctor(
    (BattleResultBondsComponent___c__DisplayClass61_1_o *)v40,
    0LL);
  if ( !v40 )
    goto LABEL_70;
  *(_QWORD *)(v40 + 24) = v18;
  v47 = (__int64 *)(v40 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v40 + 24), (System_Int32_array **)v18, v41, v42, v43, v44, v45, v46);
  myFsm = (PlayMakerFSM_o *)this->fields.conflist;
  if ( !myFsm )
    goto LABEL_70;
  if ( SLODWORD(myFsm->fields.fsm) < 1 )
    goto LABEL_32;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v91,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)myFsm,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v92 = v91;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v92,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v92.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v92,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  myFsm = (PlayMakerFSM_o *)this->fields.conflist;
  if ( !myFsm )
    goto LABEL_70;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)myFsm,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
                                  (System_String_o *)StringLiteral_16813/*"bit_result_levelup01"*/,
                                  0LL);
      if ( myFsm )
      {
        klass = myFsm->klass;
        v52 = myFsm;
        if ( *(_WORD *)&myFsm->klass->_2.bitflags1 )
        {
          v53 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v53;
            p_offset += 2;
            if ( v53 >= *(unsigned __int16 *)&myFsm->klass->_2.bitflags1 )
              goto LABEL_43;
          }
          v55 = (__int64)(&klass->vtable._4_OnBeforeSerialize.method + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_43:
          v55 = sub_AC5258(myFsm, SimpleAnimation_State_TypeInfo, 4LL, v50);
        }
        (*(void (__fastcall **)(PlayMakerFSM_o *, _QWORD, float))v55)(v52, *(_QWORD *)(v55 + 8), 0.0);
        myFsm = (PlayMakerFSM_o *)this->fields.levelUpSimpleAnim;
        if ( myFsm )
        {
          myFsm = (PlayMakerFSM_o *)SimpleAnimation__Play_16486620(
                                      (SimpleAnimation_o *)myFsm,
                                      (System_String_o *)StringLiteral_16813/*"bit_result_levelup01"*/,
                                      0LL);
          goto LABEL_55;
        }
      }
    }
LABEL_70:
    sub_B2C434(myFsm, v20);
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
                                (System_String_o *)StringLiteral_16813/*"bit_result_levelup01"*/,
                                0LL);
    if ( !myFsm )
      goto LABEL_70;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)myFsm, 0.0, 0LL);
    myFsm = (PlayMakerFSM_o *)this->fields.levelUpAnim;
    if ( !myFsm )
      goto LABEL_70;
    myFsm = (PlayMakerFSM_o *)UnityEngine_Animation__Play_50201580(
                                (UnityEngine_Animation_o *)myFsm,
                                (System_String_o *)StringLiteral_16813/*"bit_result_levelup01"*/,
                                0LL);
  }
LABEL_55:
  v63 = *v47;
  if ( !*v47 )
    goto LABEL_70;
  v64 = *(_QWORD *)(v63 + 24);
  if ( !v64 )
    goto LABEL_70;
  v65 = *(int *)(v63 + 32);
  if ( (unsigned int)v65 >= *(_DWORD *)(v64 + 24) )
  {
LABEL_71:
    v89 = sub_B2C460(myFsm);
    sub_B2C400(v89, 0LL);
  }
  v66 = *(struct BattleResultBondsIconComponent_o **)(v64 + 8 * v65 + 32);
  this->fields.openCollect = v66;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.openCollect,
    (System_Int32_array **)v66,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
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
    *(_QWORD *)(v40 + 16) = gameObject;
    v69 = (UnityEngine_GameObject_o **)(v40 + 16);
    sub_B2C2F8((BattleServantConfConponent_o *)(v40 + 16), gameObject, v70, v71, v72, v73, v74, v75);
    myFsm = *(PlayMakerFSM_o **)(v40 + 16);
    if ( !myFsm )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 0, 0LL);
  }
  else
  {
    myFsm = (PlayMakerFSM_o *)this->fields.figureRoot;
    if ( !myFsm )
      goto LABEL_70;
    v76 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myFsm, 0LL);
    *(_QWORD *)(v40 + 16) = v76;
    v69 = (UnityEngine_GameObject_o **)(v40 + 16);
    sub_B2C2F8((BattleServantConfConponent_o *)(v40 + 16), v76, v77, v78, v79, v80, v81, v82);
  }
  openCollect = this->fields.openCollect;
  if ( !openCollect )
    goto LABEL_70;
  svtId = openCollect->fields.svtId;
  svtLimit = openCollect->fields.svtLimit;
  bondsFigure = this->fields.bondsFigure;
  v87 = *v69;
  v88 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v88,
    (Il2CppObject *)v40,
    Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__,
    0LL);
  if ( !bondsFigure )
    goto LABEL_70;
  BattleResultBondsFigureComponent__SetupFigure(bondsFigure, v87, svtId, svtLimit, 7, 0, 51, v88, v90);
}


void __fastcall BattleResultBondsComponent__checkShow(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleFriendshipRewardInfo_array *showList; // x8
  __int64 v6; // x8
  SummonAssetManager_o *Instance; // x20
  System_Action_o *v8; // x21
  SummonAssetManager_o *parentComp; // x0

  if ( (byte_418854A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_BattleResultBondsComponent__checkShow_b__67_0__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v4);
    byte_418854A = 1;
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
        Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
        v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleResultBondsComponent__checkShow_b__67_0__, 0LL);
        if ( Instance )
        {
          SummonAssetManager__LoadSummonAssets(Instance, v8, 0LL);
          return;
        }
        goto LABEL_21;
      }
      parentComp = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
    sub_B2C434(parentComp, method);
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
  const MethodInfo *v9; // x1
  struct System_Collections_Generic_List_UIUnityRenderer__o *effectUIList; // x20
  int size; // w8
  int i; // w21
  struct BattleWindowComponent_o *confwindow; // x20
  BattleWindowComponent_EndCall_o *v14; // x21

  if ( (byte_418854B & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleResultBondsComponent_endCloseBondUp__, method);
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIUnityRenderer__Clear__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__, v6);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    byte_418854B = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UIUnityRenderer__Clear__);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.parentComp;
  if ( !gameObject
    || (BattleResultComponent__setTouch((BattleResultComponent_o *)gameObject, 0, 0LL),
        (gameObject = (UnityEngine_Component_o *)this->fields.bondsFigure) == 0LL)
    || (BattleResultBondsFigureComponent__DestroyFigure((BattleResultBondsFigureComponent_o *)gameObject, v9),
        confwindow = this->fields.confwindow,
        v14 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v14,
          (Il2CppObject *)this,
          Method_BattleResultBondsComponent_endCloseBondUp__,
          0LL),
        !confwindow) )
  {
LABEL_20:
    sub_B2C434(gameObject, v9);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))confwindow->klass->vtable._12_Close.method)(
    confwindow,
    v14,
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
  __int64 v12; // x1
  struct UISprite_o *backSprite; // x21
  ServantFaceIconComponent_o *v14; // x20
  unsigned int v15; // w22
  __int64 v16; // x8
  __int64 v17; // x0

  if ( (byte_418854E & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, v9);
    byte_418854E = 1;
  }
  this->fields.resultAssetData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.resultAssetData, 0LL, v2, v3, v4, v5, v6, v7);
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
    v14 = BondsIconArray;
    if ( (int)backSprite >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        v16 = *((_QWORD *)&v14->fields.faceSprite + (int)v15);
        if ( !v16 )
          break;
        BondsIconArray = *(ServantFaceIconComponent_o **)(v16 + 40);
        if ( !BondsIconArray )
          break;
        ServantFaceIconComponent__ClearFaceAtlas(BondsIconArray, 0LL);
        if ( (int)++v15 >= (int)backSprite )
          goto LABEL_15;
        if ( v15 >= LODWORD(v14->fields.backSprite) )
        {
          v17 = sub_B2C460(BondsIconArray);
          sub_B2C400(v17, 0LL);
        }
      }
LABEL_18:
      sub_B2C434(BondsIconArray, v12);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_5496/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultBondsComponent__endCloseBondUp(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_418854C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, method);
    byte_418854C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5496/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultBondsComponent__endMoveFigure(BattleResultBondsComponent_o *this, const MethodInfo *method)
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
  System_Text_StringBuilder_o *v38; // x20
  BattleResultMasterUpStatusComponent_o *lvComp; // x0
  __int64 v40; // x1
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t friendshipRank; // w22
  int32_t svtId; // w21
  int v44; // w28
  Il2CppObject *current; // x23
  System_String_o *v46; // x0
  __int64 v47; // x1
  System_String_o *v48; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v50; // x1
  const MethodInfo *v51; // x5
  struct BattleResultBondsIconComponent_o *v52; // x8
  int32_t svtLimit; // w23
  int32_t ServantLimitCountSealAfter; // w23
  System_String_o *v55; // x0
  const MethodInfo *v56; // x5
  System_String_o *v57; // x0
  const MethodInfo *v58; // x5
  struct BattleResultBondsIconComponent_o *v59; // x8
  System_String_o *v60; // x0
  const MethodInfo *v61; // x5
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // x0
  int v63; // w20
  UnityEngine_Transform_o *confRoot; // x21
  UILabel_o *rankupConfLabel; // x21
  struct BattleWindowComponent_o *confwindow; // x20
  BattleWindowComponent_EndCall_o *v67; // x21
  System_Text_StringBuilder_o *v68; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_T__o v69; // [xsp+18h] [xbp-A8h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+30h] [xbp-90h]
  System_String_o *countText; // [xsp+38h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v72; // [xsp+40h] [xbp-80h] BYREF
  System_String_o *nameText; // [xsp+68h] [xbp-58h]
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4188548 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleResultBondsComponent_openedBondUp__, method);
    sub_B2C35C(&BattleResultBondsComponent_TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_ItemMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v10);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v15);
    sub_B2C35C(&int_TypeInfo, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__, v20);
    sub_B2C35C(&System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo, v21);
    sub_B2C35C(&LocalizationManager_TypeInfo, v22);
    sub_B2C35C(&NetworkManager_TypeInfo, v23);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v24);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v26);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v27);
    sub_B2C35C(&SoundManager_TypeInfo, v28);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v29);
    sub_B2C35C(&StringLiteral_11105/*"RESULT_BOUNDS_OPENQUEST"*/, v30);
    sub_B2C35C(&StringLiteral_11108/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/, v31);
    sub_B2C35C(&StringLiteral_11107/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, v32);
    sub_B2C35C(&StringLiteral_11104/*"RESULT_BOUNDS_GET_COIN_NAME"*/, v33);
    sub_B2C35C(&StringLiteral_11102/*"RESULT_BOUNDS_GETVOICE"*/, v34);
    sub_B2C35C(&StringLiteral_23574/*"{0} {1}"*/, v35);
    sub_B2C35C(&StringLiteral_1/*""*/, v36);
    sub_B2C35C(&StringLiteral_11103/*"RESULT_BOUNDS_GET_COIN_COUNT"*/, v37);
    byte_4188548 = 1;
  }
  memset(&v72, 0, sizeof(v72));
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  v38 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v38, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
  openCollect = this->fields.openCollect;
  if ( !openCollect )
    goto LABEL_58;
  lvComp = this->fields.lvComp;
  if ( !lvComp )
    goto LABEL_58;
  friendshipRank = openCollect->fields.friendshipRank;
  svtId = openCollect->fields.svtId;
  BattleResultMasterUpStatusComponent__setData(lvComp, friendshipRank, openCollect->fields.nextFriendShipRank, 0LL);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  lvComp = (BattleResultMasterUpStatusComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !lvComp )
    goto LABEL_58;
  v68 = v38;
  lvComp = (BattleResultMasterUpStatusComponent_o *)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                                                      (clsQuestCheck_o *)lvComp,
                                                      svtId,
                                                      friendshipRank,
                                                      8,
                                                      0LL);
  if ( lvComp )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v69,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)lvComp,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    v44 = 0;
    v72 = v69;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v72,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
    {
      current = v72.fields.current;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11105/*"RESULT_BOUNDS_OPENQUEST"*/, 0LL);
      if ( !current )
        sub_B2C434(v46, v47);
      v48 = v46;
      QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
      v50 = System_String__Format(v48, QuestName, 0LL);
      BattleResultBondsComponent__addConfObject(this, v50, (float)v44 * 22.0, -1, 0, 0, v51);
      v44 += 3;
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v72,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  }
  else
  {
    v44 = 0;
  }
  v52 = this->fields.openCollect;
  if ( !v52 )
    goto LABEL_58;
  svtLimit = v52->fields.svtLimit;
  lvComp = (BattleResultMasterUpStatusComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lvComp )
    goto LABEL_58;
  lvComp = (BattleResultMasterUpStatusComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)lvComp,
                                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !lvComp )
    goto LABEL_58;
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
    v55 = LocalizationManager__Get((System_String_o *)StringLiteral_11108/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/, 0LL);
    BattleResultBondsComponent__addConfObject(this, v55, (float)v44 * 22.0, -1, 0, 1, v56);
    v44 += 4;
  }
  else
  {
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    lvComp = (BattleResultMasterUpStatusComponent_o *)ServantCommentManager__IsOpenByServantFriendShip_29251432(
                                                        svtId,
                                                        friendshipRank,
                                                        ServantLimitCountSealAfter,
                                                        0LL);
    if ( ((unsigned __int8)lvComp & 1) != 0 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v57 = LocalizationManager__Get((System_String_o *)StringLiteral_11107/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, 0LL);
      BattleResultBondsComponent__addConfObject(this, v57, (float)v44 * 22.0, -1, 0, 0, v58);
      v44 += 2;
    }
  }
  v59 = this->fields.openCollect;
  if ( !v59 )
    goto LABEL_58;
  if ( ServantVoiceMaster__isOpenByServantFriendShip(svtId, v59->fields.maxLimitCount, friendshipRank, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v60 = LocalizationManager__Get((System_String_o *)StringLiteral_11102/*"RESULT_BOUNDS_GETVOICE"*/, 0LL);
    BattleResultBondsComponent__addConfObject(this, v60, (float)v44 * 22.0, -1, 0, 0, v61);
    v44 += 2;
  }
  if ( this->fields.rewardInfos )
  {
    v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v62,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
    JUMPOUT(0x193676CLL);
  }
  lvComp = (BattleResultMasterUpStatusComponent_o *)this->fields.confSprite;
  v63 = v44 ? v44 : 1;
  if ( !lvComp )
    goto LABEL_58;
  UIWidget__set_height((UIWidget_o *)lvComp, 22 * v63 + 120, 0LL);
  confRoot = this->fields.confRoot;
  if ( !confRoot )
    goto LABEL_58;
  LODWORD(v74.fields.x) = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.confRoot, 0LL);
  v74.fields.y = (float)((float)v63 * 11.0) + (float)0;
  v74.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(confRoot, v74, 0LL);
  if ( !v68
    || (rankupConfLabel = this->fields.rankupConfLabel,
        lvComp = (BattleResultMasterUpStatusComponent_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v68->klass->vtable._3_ToString.method)(
                                                            v68,
                                                            v68->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr),
        !rankupConfLabel)
    || (UILabel__set_text(rankupConfLabel, (System_String_o *)lvComp, 0LL),
        confwindow = this->fields.confwindow,
        v67 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v67,
          (Il2CppObject *)this,
          Method_BattleResultBondsComponent_openedBondUp__,
          0LL),
        !confwindow) )
  {
LABEL_58:
    sub_B2C434(lvComp, v40);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))confwindow->klass->vtable._10_Open.method)(
    confwindow,
    v67,
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
  SePlayer_o *MeterSePlayer; // x0
  __int64 v15; // x0

  if ( (byte_4188543 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9298/*"NEXT"*/, method);
    sub_B2C35C(&iTween_TypeInfo, v3);
    byte_4188543 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_42850528(gameObject, 0LL);
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
        v15 = sub_B2C460(BondsIconArray);
        sub_B2C400(v15, 0LL);
      }
      BondsIconArray = *v12;
      if ( !*v12 )
        break;
      BattleResultBondsIconComponent__LayoutFriendshipValue((BattleResultBondsIconComponent_o *)BondsIconArray, v7);
      v8 = v9[6];
      if ( (int)++v10 >= v8 )
        goto LABEL_14;
    }
LABEL_19:
    sub_B2C434(BondsIconArray, v7);
  }
LABEL_14:
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  BondsIconArray = this->fields.myFsm;
  this->fields.bondsCountUp = 0;
  if ( !BondsIconArray )
    goto LABEL_19;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_9298/*"NEXT"*/, 0LL);
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
        v11 = sub_B2C460(this);
        sub_B2C400(v11, 0LL);
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
    sub_B2C434(this, collects);
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
    sub_B2C434(this, deck);
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0LL;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= max_length )
    {
      v9 = sub_B2C460(this);
      sub_B2C400(v9, 0LL);
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
    sub_B2C434(this, method);
  return (signed int)oldCollections->max_length > 1;
}


void __fastcall BattleResultBondsComponent__openedBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0

  if ( (byte_4188549 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5492/*"END_OPEN"*/, method);
    byte_4188549 = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__ResetPlayScreenTouch(parentComp, 0LL), (parentComp = this->fields.parentComp) == 0LL)
    || (BattleResultComponent__setTouch(parentComp, 1, 0LL),
        parentComp = (BattleResultComponent_o *)this->fields.myFsm,
        ++this->fields.colIndex,
        !parentComp) )
  {
    sub_B2C434(parentComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)parentComp, (System_String_o *)StringLiteral_5492/*"END_OPEN"*/, 0LL);
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
  Il2CppObject *v2; // x19
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0

  if ( (byte_418508B & 1) == 0 )
  {
    sub_B2C35C(&BattleResultBondsComponent___c_TypeInfo, v1);
    byte_418508B = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleResultBondsComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleResultBondsComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return col->fields.isUse;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_0(
        BattleResultBondsComponent___c_o *this,
        QuestRewardInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.type == 7 && x->fields.isNew;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_1(
        BattleResultBondsComponent___c_o *this,
        GetSvts_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
  if ( (byte_418508C & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, method);
    sub_B2C35C(&object___TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&float_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_23316/*"x"*/, v6);
    sub_B2C35C(&StringLiteral_9751/*"OPEN"*/, v7);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v8);
    sub_B2C35C(&StringLiteral_21265/*"oncompletetarget"*/, v9);
    sub_B2C35C(&StringLiteral_18355/*"endMoveFigure"*/, v10);
    sub_B2C35C(&StringLiteral_19967/*"islocal"*/, v11);
    sub_B2C35C(&StringLiteral_21263/*"oncomplete"*/, v12);
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B2C35C(&iTween_TypeInfo, v13);
    byte_418508C = 1;
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
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B2C374(object___TypeInfo, 10LL);
  if ( !this )
    goto LABEL_73;
  v20 = this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_23316/*"x"*/;
  if ( StringLiteral_23316/*"x"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B2C41C(
                                                                   StringLiteral_23316/*"x"*/,
                                                                   v20->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
    v21 = StringLiteral_23316/*"x"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( !LODWORD(v20->fields.CS___8__locals1) )
    goto LABEL_74;
  v20[1].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)v21;
  sub_B2C2F8(&v20[1], v21);
  v44 = -1007026176;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v44);
  v22 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B2C41C(this, v20->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
  }
  if ( LODWORD(v20->fields.CS___8__locals1) <= 1 )
    goto LABEL_74;
  v20[1].monitor = v22;
  sub_B2C2F8(&v20[1].monitor, v22);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22677/*"time"*/;
  if ( StringLiteral_22677/*"time"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B2C41C(
                                                                   StringLiteral_22677/*"time"*/,
                                                                   v20->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
    v23 = StringLiteral_22677/*"time"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( LODWORD(v20->fields.CS___8__locals1) <= 2 )
    goto LABEL_74;
  v20[1].fields.parent = (struct UnityEngine_GameObject_o *)v23;
  sub_B2C2F8(&v20[1].fields, v23);
  v43 = 1061997773;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v43);
  v24 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B2C41C(this, v20->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
  }
  if ( LODWORD(v20->fields.CS___8__locals1) <= 3 )
    goto LABEL_74;
  v20[1].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v24;
  sub_B2C2F8(&v20[1].fields.CS___8__locals1, v24);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_19967/*"islocal"*/;
  if ( StringLiteral_19967/*"islocal"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B2C41C(
                                                                   StringLiteral_19967/*"islocal"*/,
                                                                   v20->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
    v25 = StringLiteral_19967/*"islocal"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( LODWORD(v20->fields.CS___8__locals1) <= 4 )
    goto LABEL_74;
  v20[2].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)v25;
  sub_B2C2F8(&v20[2], v25);
  v42[0] = 1;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(bool_TypeInfo, v42);
  v26 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B2C41C(this, v20->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
  }
  if ( LODWORD(v20->fields.CS___8__locals1) <= 5 )
    goto LABEL_74;
  v20[2].monitor = v26;
  sub_B2C2F8(&v20[2].monitor, v26);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_21265/*"oncompletetarget"*/;
  if ( StringLiteral_21265/*"oncompletetarget"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B2C41C(
                                                                   StringLiteral_21265/*"oncompletetarget"*/,
                                                                   v20->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
    v27 = StringLiteral_21265/*"oncompletetarget"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( LODWORD(v20->fields.CS___8__locals1) <= 6 )
    goto LABEL_74;
  v20[2].fields.parent = (struct UnityEngine_GameObject_o *)v27;
  sub_B2C2F8(&v20[2].fields, v27);
  v28 = v2->fields.CS___8__locals1;
  if ( !v28 || (this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v28->fields.__4__this) == 0LL )
LABEL_73:
    sub_B2C434(this, method);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
  v29 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B2C41C(this, v20->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
  }
  if ( LODWORD(v20->fields.CS___8__locals1) <= 7 )
    goto LABEL_74;
  v20[2].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v29;
  sub_B2C2F8(&v20[2].fields.CS___8__locals1, v29);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_21263/*"oncomplete"*/;
  if ( StringLiteral_21263/*"oncomplete"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B2C41C(
                                                                   StringLiteral_21263/*"oncomplete"*/,
                                                                   v20->klass->_1.element_class);
    if ( !this )
      goto LABEL_75;
    v30 = StringLiteral_21263/*"oncomplete"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( LODWORD(v20->fields.CS___8__locals1) <= 8 )
    goto LABEL_74;
  v20[3].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)v30;
  sub_B2C2F8(&v20[3], v30);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_18355/*"endMoveFigure"*/;
  if ( !StringLiteral_18355/*"endMoveFigure"*/ )
  {
    v31 = 0LL;
    goto LABEL_58;
  }
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_B2C41C(
                                                                 StringLiteral_18355/*"endMoveFigure"*/,
                                                                 v20->klass->_1.element_class);
  if ( !this )
  {
LABEL_75:
    v41 = sub_B2C454();
    sub_B2C400(v41, 0LL);
  }
  v31 = StringLiteral_18355/*"endMoveFigure"*/;
LABEL_58:
  if ( LODWORD(v20->fields.CS___8__locals1) <= 9 )
    goto LABEL_74;
  v20[3].monitor = (void *)v31;
  sub_B2C2F8(&v20[3].monitor, v31);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v32 = iTween__Hash((System_Object_array *)v20, 0LL);
  iTween__MoveFrom_42734184(parent, v32, 0LL);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9751/*"OPEN"*/, 0LL);
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
    v40 = sub_B2C460(this);
    sub_B2C400(v40, 0LL);
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
  __int64 v4; // x1

  if ( (byte_418508D & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_418508D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  CommonUI__CreateServantCoinConfirmDialog(Instance, 1, this->fields.coin, 0LL, 0LL);
}