void __fastcall BattleResultBondsComponent___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  struct BattleResultBondsComponent_StaticFields *static_fields; // x0
  int64_t v8; // x1
  int64_t v9; // x1
  struct BattleResultBondsComponent_StaticFields *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BDF8E6 & 1) == 0 )
  {
    sub_1C21E38(&BattleResultBondsComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_7197/*"GetNewSvt"*/);
    sub_1C21E38(&StringLiteral_7183/*"GetExistSvt"*/);
    byte_4BDF8E6 = 1;
  }
  static_fields = BattleResultBondsComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SVT_GAP_5 = 0x4316000043320000LL;
  *(_QWORD *)&static_fields->CONF_LABEL_MAX_WIDTH = 0x12000001D0LL;
  v8 = StringLiteral_7197/*"GetNewSvt"*/;
  static_fields->GET_NEW_SVT_KEY = (struct System_String_o *)StringLiteral_7197/*"GetNewSvt"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->GET_NEW_SVT_KEY, v8, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_7183/*"GetExistSvt"*/;
  v10 = BattleResultBondsComponent_TypeInfo->static_fields;
  v10->GET_EXIST_SVT_KEY = (struct System_String_o *)StringLiteral_7183/*"GetExistSvt"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v10->GET_EXIST_SVT_KEY, v9, v11, v12, v13, v14, v15, v16);
}


void __fastcall BattleResultBondsComponent___ctor(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  BattleResultBondsFigureComponent_o *v17; // x20
  const MethodInfo *v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4BDF8E5 & 1) == 0 )
  {
    sub_1C21E38(&BattleResultBondsFigureComponent_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4BDF8E5 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.conflist = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.conflist, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  this->fields.buddyPointInfoWindowHeight = 366;
  this->fields.tempSaveTimeScale = 1.0;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
  this->fields.bondsList = (struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *)v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.bondsList, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (BattleResultBondsFigureComponent_o *)sub_1C22084(BattleResultBondsFigureComponent_TypeInfo);
  BattleResultBondsFigureComponent___ctor(v17, v18);
  this->fields.bondsFigure = v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.bondsFigure, (int64_t)v17, v19, v20, v21, v22, v23, v24);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  __int64 v9; // x26
  int max_length; // w9
  GetSvts_o *v11; // x8
  UserServantEntity_o *v12; // x24
  EventServantEntity_o *EventServant; // x22
  BattleResultBondsComponent___c_c *v14; // x0
  System_Action_o *_9__62_0; // x23
  Il2CppObject *v16; // x25
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  Il2CppObject *Master_object; // x25
  __int64 v25; // x24
  int64_t v26; // x23
  int64_t v27; // x25
  Il2CppObject *v28; // x8
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_String_o *v41; // x24
  Il2CppObject *v42; // x25
  __int64 v43; // x0
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4BDF8D7 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    sub_1C21E38(&GetSvtCoin___TypeInfo);
    sub_1C21E38(&GetSvtCoin_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__);
    sub_1C21E38(&Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__);
    sub_1C21E38(&BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo);
    sub_1C21E38(&BattleResultBondsComponent___c_TypeInfo);
    sub_1C21E38(&StringLiteral_12584/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/);
    sub_1C21E38(&StringLiteral_18930/*"dialogIgnoreTime"*/);
    byte_4BDF8D7 = 1;
  }
  entity = 0LL;
  if ( this->fields.getJoinSvtList && !this->fields.isWarboard )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___),
          (getJoinSvtList = this->fields.getJoinSvtList) == 0LL) )
    {
LABEL_45:
      sub_1C22094(Instance, v6);
    }
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v9 = 0LL;
    while ( 1 )
    {
      max_length = getJoinSvtList->max_length;
      if ( (int)v9 >= max_length )
        break;
      if ( (unsigned int)v9 >= max_length )
        goto LABEL_46;
      v11 = getJoinSvtList->m_Items[v9];
      if ( !v11 )
        goto LABEL_45;
      if ( v11->fields.isNew )
      {
        UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_18930/*"dialogIgnoreTime"*/, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      else
      {
        if ( !v8 )
          goto LABEL_45;
        Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                      v8,
                                      v11->fields.userSvtId,
                                      (const MethodInfo_325E324 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( Instance )
        {
          v12 = (UserServantEntity_o *)Instance;
          Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
          if ( !collect )
            goto LABEL_45;
          if ( (_DWORD)Instance == collect->fields.svtId )
          {
            EventServant = UserServantEntity__getEventServant(v12, 0LL);
            if ( EventServant
              || (Instance = (DataManager_o *)UserServantEntity__getEventServantIgnoreEnd(v12, 0LL),
                  (EventServant = (EventServantEntity_o *)Instance) != 0LL) )
            {
              v14 = BattleResultBondsComponent___c_TypeInfo;
              if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
                v14 = BattleResultBondsComponent___c_TypeInfo;
              }
              _9__62_0 = v14->static_fields->__9__62_0;
              if ( !_9__62_0 )
              {
                if ( !v14->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v14);
                  v14 = BattleResultBondsComponent___c_TypeInfo;
                }
                v16 = (Il2CppObject *)v14->static_fields->__9;
                _9__62_0 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                System_Action___ctor(
                  _9__62_0,
                  v16,
                  Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__,
                  0LL);
                static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
                static_fields->__9__62_0 = _9__62_0;
                sub_1C21DDC(
                  (PartyOrganizationUtility_o *)&static_fields->__9__62_0,
                  (int64_t)_9__62_0,
                  v18,
                  v19,
                  v20,
                  v21,
                  v22,
                  v23);
              }
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SvtCoinMaster___);
              Instance = (DataManager_o *)UserServantEntity__getSvtId(v12, 0LL);
              if ( !Master_object )
                goto LABEL_45;
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            &entity,
                                            (int32_t)Instance,
                                            (const MethodInfo_325BE14 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_45;
                if ( SHIDWORD(entity[1].klass) >= 1 )
                {
                  v25 = sub_1C22084(BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v25, 0LL);
                  v26 = sub_1C21EE0(GetSvtCoin___TypeInfo, 1LL);
                  v27 = sub_1C22084(GetSvtCoin_TypeInfo);
                  GetSvtCoin___ctor((GetSvtCoin_o *)v27, 0LL);
                  v28 = entity;
                  if ( !entity )
                    goto LABEL_45;
                  if ( !v27 )
                    goto LABEL_45;
                  *(_DWORD *)(v27 + 16) = entity[1].klass;
                  *(int32x2_t *)(v27 + 20) = vrev64_s32(*(int32x2_t *)((char *)&v28[1].klass + 4));
                  if ( !v26 )
                    goto LABEL_45;
                  Instance = (DataManager_o *)sub_1C21F74(v27, *(_QWORD *)(*(_QWORD *)v26 + 64LL));
                  if ( !Instance )
                  {
                    v43 = sub_1C220B8(0LL);
                    sub_1C21F60(v43, 0LL);
                  }
                  if ( !*(_DWORD *)(v26 + 24) )
LABEL_46:
                    sub_1C2209C(Instance, v6);
                  *(_QWORD *)(v26 + 32) = v27;
                  sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 32), v27, v29, v30, v31, v32, v33, v34);
                  if ( !v25 )
                    goto LABEL_45;
                  *(_QWORD *)(v25 + 16) = v26;
                  sub_1C21DDC((PartyOrganizationUtility_o *)(v25 + 16), v26, v35, v36, v37, v38, v39, v40);
                  _9__62_0 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__62_0,
                    (Il2CppObject *)v25,
                    Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__,
                    0LL);
                }
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12584/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0LL);
              v42 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              Instance = (DataManager_o *)EventServantEntity__GetGetMessage(EventServant, 0LL);
              if ( !v42 )
                goto LABEL_45;
              CommonUI__OpenNotificationDialog(
                (CommonUI_o *)v42,
                v41,
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
                0.0,
                0LL);
            }
          }
        }
      }
      getJoinSvtList = this->fields.getJoinSvtList;
      ++v9;
      if ( !getJoinSvtList )
        goto LABEL_45;
    }
  }
}


void __fastcall BattleResultBondsComponent__Close(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  struct BattleWindowComponent_o *multiDeckWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BDF8DF & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleResultBondsComponent_endClose__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4BDF8DF = 1;
  }
  if ( this->fields.isMultiDeck )
    multiDeckWindow = this->fields.multiDeckWindow;
  else
    multiDeckWindow = this->fields.window;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v4, (Il2CppObject *)this, Method_BattleResultBondsComponent_endClose__, 0LL);
  if ( !multiDeckWindow )
    sub_1C22094(v5, v6);
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

  if ( (byte_4BDF8E4 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF8E4 = 1;
  }
  upRoot = this->fields.upRoot;
  if ( !upRoot
    || (UnityEngine_GameObject__SetActive(upRoot, 0, 0LL),
        (upRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1C22094(upRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)upRoot, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultBondsComponent__CreateRewardEffect(
        BattleResultBondsComponent_o *this,
        AssetData_o *data,
        UISprite_o *targetIcon,
        System_String_o *effectName,
        const MethodInfo *method)
{
  BattleResultBondsComponent_o *v8; // x20
  Il2CppObject *Object_object__49880776; // x21
  BattleResultBondsComponent_o *v10; // x21
  BattleResultBondsComponent_o *v11; // x22
  BattleResultBondsComponent_o *v12; // x22
  BattleResultBondsComponent_o *v13; // x22
  int m_CancellationTokenSource; // w8
  BattleResultBondsComponent_o *v15; // x21
  unsigned int v16; // w22

  v8 = this;
  if ( (byte_4BDF8D9 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (BattleResultBondsComponent_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF8D9 = 1;
  }
  if ( !data )
    goto LABEL_23;
  Object_object__49880776 = AssetData__GetObject_object__49880776(
                              data,
                              effectName,
                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultBondsComponent_o *)UnityEngine_Object__Instantiate_object_(
                                           Object_object__49880776,
                                           (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_23;
  v10 = this;
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !targetIcon )
    goto LABEL_23;
  v11 = this;
  this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)targetIcon,
                                           0LL);
  if ( !v11 )
    goto LABEL_23;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v11, (UnityEngine_Transform_o *)this, 0LL);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0LL);
  v12 = this;
  if ( !byte_4BD6BB1 )
  {
    this = (BattleResultBondsComponent_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  if ( !v12 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v12,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0LL);
  v13 = this;
  if ( !byte_4BD6BB6 )
  {
    this = (BattleResultBondsComponent_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  if ( !v13 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v13,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                           (UnityEngine_GameObject_o *)v10,
                                           (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !this )
    goto LABEL_23;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v15 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= m_CancellationTokenSource )
        sub_1C2209C(this, data);
      this = (BattleResultBondsComponent_o *)*((_QWORD *)&v15->fields.parentComp + (int)v16);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0LL);
      m_CancellationTokenSource = (int)v15->fields.m_CancellationTokenSource;
      if ( (int)++v16 >= m_CancellationTokenSource )
        goto LABEL_21;
    }
LABEL_23:
    sub_1C22094(this, data);
  }
LABEL_21:
  this = (BattleResultBondsComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v15,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void __fastcall BattleResultBondsComponent__DeleteGetJoinSvtData(const MethodInfo *method)
{
  BattleResultBondsComponent_c *v1; // x0

  if ( (byte_4BDF8CE & 1) == 0 )
  {
    sub_1C21E38(&BattleResultBondsComponent_TypeInfo);
    byte_4BDF8CE = 1;
  }
  v1 = BattleResultBondsComponent_TypeInfo;
  if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
    v1 = BattleResultBondsComponent_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v1->static_fields->GET_EXIST_SVT_KEY, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(BattleResultBondsComponent_TypeInfo->static_fields->GET_NEW_SVT_KEY, 0LL);
}


void __fastcall BattleResultBondsComponent__FinishUpdateValue(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v4; // x1
  _DWORD *BondsIconArray; // x0
  const MethodInfo *v6; // x1
  int v7; // w8
  _DWORD *v8; // x20
  unsigned int v9; // w21
  SePlayer_o *MeterSePlayer; // x0

  if ( (byte_4BDF8D5 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_9432/*"NEXT"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDF8D5 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_61763404(gameObject, 0LL);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v4);
  if ( !BondsIconArray )
    goto LABEL_16;
  v7 = BondsIconArray[6];
  v8 = BondsIconArray;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v7 )
        sub_1C2209C(BondsIconArray, v6);
      BondsIconArray = *(_DWORD **)&v8[2 * v9 + 8];
      if ( !BondsIconArray )
        break;
      BattleResultBondsIconComponent__FinishUpdateValue((BattleResultBondsIconComponent_o *)BondsIconArray, v6);
      v7 = v8[6];
      if ( (int)++v9 >= v7 )
        goto LABEL_11;
    }
LABEL_16:
    sub_1C22094(BondsIconArray, v6);
  }
LABEL_11:
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  BondsIconArray = this->fields.myFsm;
  this->fields.bondsCountUp = 0;
  if ( !BondsIconArray )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_9432/*"NEXT"*/, 0LL);
}


BattleResultBondsIconComponent_array *__fastcall BattleResultBondsComponent__GetBondsIconArray(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_bondsIconArray; // x19
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *bondsList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  System_Object_array *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDF8E1 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
    byte_4BDF8E1 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( this->fields.isMultiDeck )
  {
    p_bondsIconArray = (PartyOrganizationUtility_o *)&this->fields.bondsIconArray;
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.bondsIconArray, 0LL) )
    {
      v4 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v4,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
      bondsList = (System_Collections_Generic_List_object__o *)this->fields.bondsList;
      if ( !bondsList )
        goto LABEL_17;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v17,
        bondsList,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v17,
                (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
      {
        if ( !v17.fields._current )
          sub_1C22094(0LL, v7);
        BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                          (BattleResultBondsDeckPerWaveComponent_o *)v17.fields._current,
                                                                          v7);
        if ( !v4 )
          sub_1C22094(BondsIconArray, BondsIconArray);
        System_Collections_Generic_List_object___AddRange(
          v4,
          BondsIconArray,
          (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v17,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
      if ( !v4 )
LABEL_17:
        sub_1C22094(bondsList, v5);
      v9 = System_Collections_Generic_List_object___ToArray(
             v4,
             (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
      p_bondsIconArray->klass = (PartyOrganizationUtility_c *)v9;
      sub_1C21DDC(p_bondsIconArray, (int64_t)v9, v10, v11, v12, v13, v14, v15);
    }
  }
  else
  {
    p_bondsIconArray = (PartyOrganizationUtility_o *)&this->fields.collects;
  }
  return (BattleResultBondsIconComponent_array *)p_bondsIconArray->klass;
}


void __fastcall BattleResultBondsComponent__Init(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *window; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  UnityEngine_Object_o *multiDeckWindow; // x20

  if ( (byte_4BDF8CF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF8CF = 1;
  }
  window = this->fields.window;
  if ( !window )
    goto LABEL_16;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0LL);
  window = this->fields.window;
  if ( !window )
    goto LABEL_16;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))window->klass->vtable._9_setClose.method)(
    window,
    window->klass->vtable._10_Open.methodPtr);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v4;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.effectUIList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  window = this->fields.confwindow;
  if ( !window )
    goto LABEL_16;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0LL);
  window = this->fields.confwindow;
  if ( !window )
    goto LABEL_16;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))window->klass->vtable._9_setClose.method)(
    window,
    window->klass->vtable._10_Open.methodPtr);
  window = (BattleWindowComponent_o *)this->fields.upRoot;
  if ( !window )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  multiDeckWindow = (UnityEngine_Object_o *)this->fields.multiDeckWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        goto LABEL_14;
      }
    }
LABEL_16:
    sub_1C22094(window, method);
  }
LABEL_14:
  this->fields.isMultiDeck = 0;
  window = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !window )
    goto LABEL_16;
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
  bool v14; // w26
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  UnityEngine_Object_o *multiDeckWindow; // x20
  UnityEngine_Object_o *multiBondsPrefab; // x20
  UnityEngine_Object_o *multiBondsRoot; // x20

  v14 = inIsMultiDeck;
  if ( (byte_4BDF8D0 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF8D0 = 1;
  }
  this->fields.oldCollections = oldCollects;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.oldCollections,
    (int64_t)oldCollects,
    (int64_t)inRewardInfos,
    (int32_t)resultAsset,
    *(System_String_o **)&baseFriendshipExp,
    (BattleSetupInfo_o *)getJoinSvts,
    (FollowerInfo_o *)inIsMultiDeck,
    (PartyListViewItem_o *)method);
  this->fields.rewardInfos = inRewardInfos;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.rewardInfos,
    (int64_t)inRewardInfos,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.resultAssetData = resultAsset;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.resultAssetData,
    (int64_t)resultAsset,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.getJoinSvtList = getJoinSvts;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.getJoinSvtList,
    (int64_t)getJoinSvts,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.updateFlg = 0;
  this->fields.baseFriendshipExp = baseFriendshipExp;
  this->fields.isMultiDeck = v14;
  multiDeckWindow = (UnityEngine_Object_o *)this->fields.multiDeckWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(multiDeckWindow, 0LL, 0LL) )
    goto LABEL_12;
  multiBondsPrefab = (UnityEngine_Object_o *)this->fields.multiBondsPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(multiBondsPrefab, 0LL, 0LL) )
    goto LABEL_12;
  multiBondsRoot = (UnityEngine_Object_o *)this->fields.multiBondsRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(multiBondsRoot, 0LL, 0LL) )
LABEL_12:
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
  int32_t v12; // w24
  BattleResultBondsComponent_o *v13; // x19
  struct BattleResultBondsIconComponent_array *collects; // x8
  const MethodInfo *v15; // x3
  struct BattleResultBondsIconComponent_array *v16; // x8
  struct BattleResultBondsIconComponent_array *v17; // x8
  struct BattleResultBondsIconComponent_array *v18; // x8
  struct UISprite_o *bgFrame; // x8
  float v20; // s8
  struct BattleResultBondsIconComponent_array *v21; // x8
  il2cpp_array_size_t v22; // w24
  float v23; // s9
  int v24; // w25
  float v25; // s10
  struct BattleResultBondsIconComponent_array *v26; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x8
  UnityEngine_Object_o *v29; // x20
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  v12 = targetIndex;
  v13 = this;
  if ( (byte_4BDF8E2 & 1) == 0 )
  {
    sub_1C21E38(&BattleResultBondsComponent_TypeInfo);
    this = (BattleResultBondsComponent_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF8E2 = 1;
  }
  if ( v12 < cnt )
  {
    do
    {
      collects = v13->fields.collects;
      if ( !collects )
        goto LABEL_49;
      if ( v12 >= collects->max_length )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)collects->m_Items[v12];
      if ( !this )
        goto LABEL_49;
      BattleResultBondsIconComponent__setServantData(
        (BattleResultBondsIconComponent_o *)this,
        0LL,
        0LL,
        0,
        0,
        isNoFollower,
        0,
        v7);
      v16 = v13->fields.collects;
      if ( !v16 )
        goto LABEL_49;
      if ( v12 >= v16->max_length )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v16->m_Items[v12];
      if ( !this )
        goto LABEL_49;
      BattleResultBondsIconComponent__SetBuddyPointInfo((BattleResultBondsIconComponent_o *)this, 0LL, 0, v15);
      v17 = v13->fields.collects;
      if ( !v17 )
        goto LABEL_49;
      if ( v12 >= v17->max_length )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v17->m_Items[v12];
      if ( !this )
        goto LABEL_49;
      this = (BattleResultBondsComponent_o *)BattleResultBondsIconComponent__ChangeGauge(
                                               (BattleResultBondsIconComponent_o *)this,
                                               0.0,
                                               *(const MethodInfo **)&targetIndex);
      v18 = v13->fields.collects;
      if ( !v18 )
        goto LABEL_49;
      if ( v12 >= v18->max_length )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v18->m_Items[v12];
      if ( !this )
        goto LABEL_49;
      BattleResultBondsIconComponent__InitBuddyPointInfo(
        (BattleResultBondsIconComponent_o *)this,
        *(const MethodInfo **)&targetIndex);
    }
    while ( cnt != ++v12 );
  }
  this = (BattleResultBondsComponent_o *)BattleResultBondsComponent_TypeInfo;
  if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
    this = (BattleResultBondsComponent_o *)BattleResultBondsComponent_TypeInfo;
  }
  bgFrame = this->fields.bgFrame;
  if ( isNoFollower )
    bgFrame = (struct UISprite_o *)((char *)bgFrame + 4);
  v20 = *(float *)&bgFrame->klass;
  if ( !isNoFollower )
  {
    v21 = v13->fields.collects;
    if ( !v21 )
      goto LABEL_49;
    if ( v21->max_length <= cnt )
LABEL_50:
      sub_1C2209C(this, *(_QWORD *)&targetIndex);
    this = (BattleResultBondsComponent_o *)v21->m_Items[cnt];
    if ( !this )
      goto LABEL_49;
    this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  if ( cnt >= 1 )
  {
    v22 = 0;
    v23 = 0.0;
    v24 = 4;
    v25 = (float)(1 - cnt) * 0.5;
    do
    {
      v26 = v13->fields.collects;
      if ( isNoFollower )
        v23 = (float)v24;
      if ( !v26 )
        goto LABEL_49;
      if ( v22 >= v26->max_length )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v26->m_Items[v22];
      if ( !this )
        goto LABEL_49;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v20 * v25) - v23, 0LL);
      ++v22;
      v25 = v25 + 1.0;
      v24 -= 2;
    }
    while ( cnt != v22 );
  }
  if ( !battleResult )
    goto LABEL_49;
  buddyPointInfos = battleResult->fields.buddyPointInfos;
  if ( buddyPointInfos && *(_QWORD *)&buddyPointInfos->max_length && !isHideBuddyPointResult )
  {
    v29 = (UnityEngine_Object_o *)v13->fields.bgFrame;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
    {
      this = (BattleResultBondsComponent_o *)v13->fields.bgFrame;
      if ( !this )
        goto LABEL_49;
      UIWidget__set_height((UIWidget_o *)this, v13->fields.buddyPointInfoWindowHeight, 0LL);
    }
    this = (BattleResultBondsComponent_o *)v13->fields.window;
    if ( !this
      || (this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL)) == 0LL
      || (v30.fields.x = 0.0,
          v30.fields.y = 13.0,
          v30.fields.z = 0.0,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v30, 0LL),
          (this = (BattleResultBondsComponent_o *)v13->fields.window) == 0LL) )
    {
LABEL_49:
      sub_1C22094(this, *(_QWORD *)&targetIndex);
    }
    (*(void (__fastcall **)(BattleResultBondsComponent_o *, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
      this,
      this->klass[1]._1.element_class);
  }
}


void __fastcall BattleResultBondsComponent__Open(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  BattleResultBondsComponent___c_c *v4; // x8
  System_Object_array *v5; // x20
  System_Func_object__bool__o *_9__53_0; // x21
  Il2CppObject *v7; // x22
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL4 isMultiDeck; // w8
  struct BattleWindowComponent_o *v18; // x20
  __int64 *v19; // x8
  BattleWindowComponent_EndCall_o *v20; // x21

  if ( (byte_4BDF8D3 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_BattleResultBondsIconComponent___);
    sub_1C21E38(&Method_BattleResultBondsComponent_OpenEnd__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C21E38(&System_Func_BattleResultBondsIconComponent__bool__TypeInfo);
    sub_1C21E38(&Method_BattleResultBondsComponent___c__Open_b__53_0__);
    sub_1C21E38(&BattleResultBondsComponent___c_TypeInfo);
    sub_1C21E38(&StringLiteral_5599/*"END_OPEN"*/);
    sub_1C21E38(&StringLiteral_12392/*"SKIP"*/);
    byte_4BDF8D3 = 1;
  }
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, method);
  v4 = BattleResultBondsComponent___c_TypeInfo;
  v5 = (System_Object_array *)BondsIconArray;
  if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
    v4 = BattleResultBondsComponent___c_TypeInfo;
  }
  _9__53_0 = (System_Func_object__bool__o *)v4->static_fields->__9__53_0;
  if ( !_9__53_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleResultBondsComponent___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__53_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleResultBondsIconComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__53_0, v7, Method_BattleResultBondsComponent___c__Open_b__53_0__, 0LL);
    static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Func_BattleResultBondsIconComponent__bool__o *)_9__53_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__53_0, (int64_t)_9__53_0, v9, v10, v11, v12, v13, v14);
  }
  if ( BasicHelper__Any_object__49917468(
         v5,
         (System_Func_T__bool__o *)_9__53_0,
         (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_BattleResultBondsIconComponent___) )
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
      v20 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
      BattleWindowComponent_EndCall___ctor(
        v20,
        (Il2CppObject *)this,
        (intptr_t)Method_BattleResultBondsComponent_OpenEnd__,
        0LL);
      if ( v18 )
      {
        ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v18->klass->vtable._10_Open.method)(
          v18,
          v20,
          v18->klass->vtable._11_CompOpen.methodPtr);
        gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
        if ( gameObject )
        {
          v19 = &StringLiteral_5599/*"END_OPEN"*/;
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    sub_1C22094(gameObject, v15);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !gameObject )
    goto LABEL_20;
  v19 = &StringLiteral_12392/*"SKIP"*/;
LABEL_19:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)*v19, 0LL);
}


void __fastcall BattleResultBondsComponent__OpenEnd(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  const MethodInfo *v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  System_Object_array *v12; // x21
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x22
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  int64_t v78; // x22
  System_Collections_Hashtable_o *v79; // x0
  const MethodInfo *v80; // x1
  int max_length; // w8
  BattleResultBondsIconComponent_array *v82; // x20
  unsigned int v83; // w21
  _QWORD *v84; // x0
  System_Reflection_MethodBase_o *v85; // x20
  System_String_o *CommonSeName; // x0
  struct SePlayer_o *v87; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  __int64 v94; // x0
  int v95; // [xsp+Ch] [xbp-44h] BYREF
  int v96; // [xsp+18h] [xbp-38h] BYREF
  int v97; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4BDF8D4 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleResultBondsComponent_OpenEnd__);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&SeManager_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_19990/*"from"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22688/*"onupdate"*/);
    sub_1C21E38(&StringLiteral_15460/*"UpdateValue"*/);
    sub_1C21E38(&StringLiteral_24401/*"to"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&StringLiteral_6869/*"FinishUpdateValue"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDF8D4 = 1;
  }
  if ( !this->fields.bondsCountUp )
    return;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C21EE0(object___TypeInfo, 10LL);
  if ( !BondsIconArray )
LABEL_65:
    sub_1C22094(BondsIconArray, v5);
  v12 = (System_Object_array *)BondsIconArray;
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_19990/*"from"*/;
  if ( StringLiteral_19990/*"from"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C21F74(
                                                               StringLiteral_19990/*"from"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v5 = (const MethodInfo *)StringLiteral_19990/*"from"*/;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v12->max_length )
    goto LABEL_64;
  v12->m_Items[0] = (Il2CppObject *)v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)v12->m_Items, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  v97 = 0;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v97, v13, v14, v15);
  v22 = (int64_t)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C21F74(
                                                               BondsIconArray,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
  }
  if ( v12->max_length <= 1 )
    goto LABEL_64;
  v12->m_Items[1] = (Il2CppObject *)v22;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[1], v22, v16, v17, v18, v19, v20, v21);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_24401/*"to"*/;
  if ( StringLiteral_24401/*"to"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C21F74(
                                                               StringLiteral_24401/*"to"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v5 = (const MethodInfo *)StringLiteral_24401/*"to"*/;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v12->max_length <= 2 )
    goto LABEL_64;
  v12->m_Items[2] = (Il2CppObject *)v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[2], (int64_t)v5, v23, v24, v25, v26, v27, v28);
  v96 = 1065353216;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v96, v29, v30, v31);
  v38 = (int64_t)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C21F74(
                                                               BondsIconArray,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
  }
  if ( v12->max_length <= 3 )
    goto LABEL_64;
  v12->m_Items[3] = (Il2CppObject *)v38;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[3], v38, v32, v33, v34, v35, v36, v37);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22688/*"onupdate"*/;
  if ( StringLiteral_22688/*"onupdate"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C21F74(
                                                               StringLiteral_22688/*"onupdate"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v5 = (const MethodInfo *)StringLiteral_22688/*"onupdate"*/;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v12->max_length <= 4 )
    goto LABEL_64;
  v12->m_Items[4] = (Il2CppObject *)v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[4], (int64_t)v5, v39, v40, v41, v42, v43, v44);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_15460/*"UpdateValue"*/;
  if ( StringLiteral_15460/*"UpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C21F74(
                                                               StringLiteral_15460/*"UpdateValue"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v5 = (const MethodInfo *)StringLiteral_15460/*"UpdateValue"*/;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v12->max_length <= 5 )
    goto LABEL_64;
  v12->m_Items[5] = (Il2CppObject *)v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[5], (int64_t)v5, v45, v46, v47, v48, v49, v50);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22680/*"oncomplete"*/;
  if ( StringLiteral_22680/*"oncomplete"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C21F74(
                                                               StringLiteral_22680/*"oncomplete"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v5 = (const MethodInfo *)StringLiteral_22680/*"oncomplete"*/;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v12->max_length <= 6 )
    goto LABEL_64;
  v12->m_Items[6] = (Il2CppObject *)v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[6], (int64_t)v5, v51, v52, v53, v54, v55, v56);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_6869/*"FinishUpdateValue"*/;
  if ( StringLiteral_6869/*"FinishUpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C21F74(
                                                               StringLiteral_6869/*"FinishUpdateValue"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v5 = (const MethodInfo *)StringLiteral_6869/*"FinishUpdateValue"*/;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v12->max_length <= 7 )
    goto LABEL_64;
  v12->m_Items[7] = (Il2CppObject *)v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[7], (int64_t)v5, v57, v58, v59, v60, v61, v62);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_24360/*"time"*/;
  if ( StringLiteral_24360/*"time"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C21F74(
                                                               StringLiteral_24360/*"time"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v5 = (const MethodInfo *)StringLiteral_24360/*"time"*/;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v12->max_length <= 8 )
    goto LABEL_64;
  v12->m_Items[8] = (Il2CppObject *)v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[8], (int64_t)v5, v63, v64, v65, v66, v67, v68);
  v95 = 1072064102;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v95, v69, v70, v71);
  v78 = (int64_t)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C21F74(
                                                               BondsIconArray,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
    {
LABEL_66:
      v94 = sub_1C220B8(BondsIconArray);
      sub_1C21F60(v94, 0LL);
    }
  }
  if ( v12->max_length <= 9 )
    goto LABEL_64;
  v12->m_Items[9] = (Il2CppObject *)v78;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[9], v78, v72, v73, v74, v75, v76, v77);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v79 = iTween__Hash(v12, 0LL);
  iTween__ValueTo(gameObject, v79, 0LL);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v80);
  if ( !BondsIconArray )
    goto LABEL_65;
  max_length = BondsIconArray->max_length;
  v82 = BondsIconArray;
  if ( max_length >= 1 )
  {
    v83 = 0;
    while ( v83 < max_length )
    {
      BondsIconArray = (BattleResultBondsIconComponent_array *)v82->m_Items[v83];
      if ( !BondsIconArray )
        goto LABEL_65;
      BattleResultBondsIconComponent__StartUpdateBuddyPoint((BattleResultBondsIconComponent_o *)BondsIconArray, v5);
      max_length = v82->max_length;
      if ( (int)++v83 >= max_length )
        goto LABEL_57;
    }
LABEL_64:
    sub_1C2209C(BondsIconArray, v5);
  }
LABEL_57:
  if ( this->fields.updateFlg )
  {
    v84 = Method_BattleResultBondsComponent_OpenEnd__;
    if ( (*((_BYTE *)Method_BattleResultBondsComponent_OpenEnd__ + 83) & 2) != 0 )
      v84 = (_QWORD *)sub_1C21E50(Method_BattleResultBondsComponent_OpenEnd__);
    v85 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v84, v84[4]);
    if ( !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    CommonSeName = SeManager__GetCommonSeName(15, 0LL);
    v87 = OverwriteAssetSoundName__PlaySe(v85, CommonSeName, 0, 0LL);
    this->fields.MeterSePlayer = v87;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.MeterSePlayer, (int64_t)v87, v88, v89, v90, v91, v92, v93);
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
  System_Collections_Generic_List_object__o *bondsList; // x0
  __int64 v20; // x1
  struct BattleInfoData_o *battle_info; // x9
  struct DeckData_array *waveMyDecks; // x26
  __int64 maxWave; // x27
  BattleUserServantData_array *userSvt; // x24
  unsigned __int64 v25; // x8
  il2cpp_array_size_t max_length; // w9
  signed __int64 v27; // x29
  System_Collections_Generic_List_object__o *v28; // x20
  const MethodInfo *v29; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  System_Object_array *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  const MethodInfo *v38; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_4BDF8D1 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
    byte_4BDF8D1 = 1;
  }
  memset(&v39, 0, sizeof(v39));
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
    v25 = 0LL;
    max_length = *(_QWORD *)&waveMyDecks->max_length;
    do
    {
      if ( v25 >= max_length )
        sub_1C2209C(bondsList, v20);
      v27 = v25 + 1;
      BattleResultBondsComponent__SetResultDataLocal(
        this,
        waveMyDecks->m_Items[v25],
        oldCollects,
        followerType,
        userSvt,
        battleResult,
        isHideBuddyPointResult,
        battleData,
        v25 + 1,
        maxWave,
        v38);
      max_length = waveMyDecks->max_length;
      v25 = v27;
    }
    while ( v27 < (int)max_length );
  }
  v28 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  bondsList = (System_Collections_Generic_List_object__o *)this->fields.bondsList;
  if ( !bondsList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    bondsList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
  {
    if ( !v39.fields._current )
      sub_1C22094(0LL, v29);
    BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                      (BattleResultBondsDeckPerWaveComponent_o *)v39.fields._current,
                                                                      v29);
    if ( !v28 )
      sub_1C22094(BondsIconArray, BondsIconArray);
    System_Collections_Generic_List_object___AddRange(
      v28,
      BondsIconArray,
      (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
  if ( !v28 )
LABEL_21:
    sub_1C22094(bondsList, v20);
  v31 = System_Collections_Generic_List_object___ToArray(
          v28,
          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
  this->fields.bondsIconArray = (struct BattleResultBondsIconComponent_array *)v31;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.bondsIconArray, (int64_t)v31, v32, v33, v34, v35, v36, v37);
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
  BattleResultBondsComponent_o *v17; // x20
  Il2CppObject *v18; // x26
  Il2CppObject *v19; // x29
  struct BattleResultBondsDeckPerWaveComponent_o *multiBondsPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *v22; // x1
  UnityEngine_Object_o *v23; // x9
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x6
  System_Collections_Generic_IEnumerable_TSource__o *rewardInfos; // x21
  BattleResultBondsComponent___c_c *v27; // x0
  System_Func_object__bool__o *_9__49_0; // x20
  Il2CppObject *v29; // x22
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Collections_Generic_List_TSource__o *v38; // x0
  System_Collections_Generic_List_object__o *v39; // x21
  BattleResultBondsComponent_c *v40; // x0
  BattleResultBondsComponent_c *v41; // x0
  Il2CppObject *String_70827888; // x20
  System_Collections_Generic_IEnumerable_T__o *v43; // x0
  BattleResultBondsComponent_c *v44; // x0
  System_String_o *GET_NEW_SVT_KEY; // x22
  System_Object_array *v46; // x20
  System_String_o *v47; // x0
  BattleResultBondsComponent___c_c *v48; // x0
  System_Collections_Generic_IEnumerable_TSource__o *getJoinSvts; // x21
  System_Func_object__bool__o *_9__49_1; // x20
  Il2CppObject *v51; // x22
  struct BattleResultBondsComponent___c_StaticFields *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  System_Collections_Generic_List_TSource__o *v60; // x0
  System_Collections_Generic_List_object__o *v61; // x21
  BattleResultBondsComponent_c *v62; // x0
  BattleResultBondsComponent_c *v63; // x0
  Il2CppObject *v64; // x20
  System_Collections_Generic_IEnumerable_T__o *v65; // x0
  BattleResultBondsComponent_c *v66; // x0
  System_String_o *GET_EXIST_SVT_KEY; // x22
  System_Object_array *v68; // x20
  System_String_o *v69; // x0
  struct BattleDeckServantData_array *svts; // x21
  int max_length; // w8
  unsigned int v72; // w19
  int32_t v73; // w22
  BattleDeckServantData_o *v74; // x25
  Il2CppObject *v75; // x28
  UserServantEntity_o *v76; // x24
  il2cpp_array_size_t v77; // w21
  BattleResultBondsComponent_o *SvtId; // x0
  const MethodInfo *v79; // x3
  UserServantCollectionEntity_o *ServantCollection; // x27
  const MethodInfo *v81; // x7
  signed int v82; // w8
  ServantEntity_o *v83; // x22
  unsigned int v84; // w20
  BattleUserServantData_o *v85; // x26
  __int128 v86; // q0
  const MethodInfo *v87; // x5
  int32_t afterLimitCount; // w25
  int32_t v89; // w29
  const MethodInfo *v90; // x7
  BattleResultBondsIconComponent_o *v91; // x20
  int afterIconLimitCount; // w8
  bool v93; // zf
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x20
  BattleBuddyPointInfo_o *v95; // x26
  System_Func_object__bool__o *v96; // x26
  BattleResultBondsIconComponent_o *v97; // x28
  struct BattleResultBondsIconComponent_array *v98; // x8
  const MethodInfo *v99; // x3
  const MethodInfo *v100; // x2
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  bool v102; // w20
  const MethodInfo *v103; // x2
  const MethodInfo *v104; // x1
  bool v105; // w8
  bool updateFlg; // w20
  bool v107; // w8
  const MethodInfo *v108; // x1
  struct BattleResultBondsIconComponent_array *v109; // x8
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  __int64 v116; // x8
  _QWORD *v117; // x9
  __int64 v118; // x10
  __int64 v119; // x8
  int32_t cnt; // [xsp+Ch] [xbp-104h]
  ServantLimitImageMaster_o *svtLimitImageMaster; // [xsp+10h] [xbp-100h]
  UserServantCollectionMaster_o *MasterData_object; // [xsp+20h] [xbp-F0h]
  BattleResultBondsDeckPerWaveComponent_o *Object_object; // [xsp+28h] [xbp-E8h]
  UnityEngine_Object_o *x; // [xsp+30h] [xbp-E0h]
  struct BattleDeckServantData_array *v126; // [xsp+38h] [xbp-D8h]
  Il2CppObject *v127; // [xsp+40h] [xbp-D0h]
  Il2CppObject *v128; // [xsp+48h] [xbp-C8h]
  int32_t Type; // [xsp+5Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v133; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v134; // [xsp+90h] [xbp-80h]

  if ( (byte_4BDF8D2 & 1) == 0 )
  {
    sub_1C21E38(&Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    sub_1C21E38(&Method_BasicHelper_Find_BattleBuddyPointInfo___);
    sub_1C21E38(&BattleResultBondsComponent_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_GetSvts___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_GetSvts___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
    sub_1C21E38(&System_Func_GetSvts__bool__TypeInfo);
    sub_1C21E38(&System_Func_BattleBuddyPointInfo__bool__TypeInfo);
    sub_1C21E38(&System_Func_QuestRewardInfo__bool__TypeInfo);
    sub_1C21E38(&Method_JsonManager_DeserializeArray_GetSvts___);
    sub_1C21E38(&Method_JsonManager_DeserializeArray_QuestRewardInfo___);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GetSvts__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GetSvts__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GetSvts__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__);
    sub_1C21E38(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__);
    sub_1C21E38(&Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__);
    sub_1C21E38(&BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo);
    sub_1C21E38(&BattleResultBondsComponent___c_TypeInfo);
    byte_4BDF8D2 = 1;
  }
  Type = Follower__getType(followerType, 0LL);
  if ( Type )
    v14 = 5;
  else
    v14 = 6;
  cnt = v14;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_143;
  MasterData_object = (UserServantCollectionMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  v17 = this;
  if ( !Instance )
    goto LABEL_143;
  v18 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_143;
  v19 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( this->fields.isMultiDeck )
  {
    Instance = (int64_t)this->fields.multiBondsRoot;
    if ( !Instance )
      goto LABEL_143;
    multiBondsPrefab = this->fields.multiBondsPrefab;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    v22 = (Il2CppObject *)multiBondsPrefab;
    v17 = this;
    Object_object = (BattleResultBondsDeckPerWaveComponent_o *)BaseMonoBehaviour__createObject_object_(
                                                                 (BaseMonoBehaviour_o *)this,
                                                                 v22,
                                                                 transform,
                                                                 0LL,
                                                                 (const MethodInfo_2F9A6E4 *)Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    if ( this->fields.isMultiDeck )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      svtLimitImageMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      goto LABEL_17;
    }
  }
  else
  {
    Object_object = 0LL;
  }
  svtLimitImageMaster = 0LL;
LABEL_17:
  v23 = x;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v23 = x;
  }
  Instance = UnityEngine_Object__op_Inequality(v23, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)x;
    if ( !x )
      goto LABEL_143;
    Instance = BattleData__IsWarBoard((BattleData_o *)x, 0LL);
    v17->fields.isWarboard = Instance & 1;
    if ( (Instance & 1) != 0 )
    {
      if ( !battleResult )
        goto LABEL_143;
      rewardInfos = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.rewardInfos;
      v27 = BattleResultBondsComponent___c_TypeInfo;
      if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v27 = BattleResultBondsComponent___c_TypeInfo;
      }
      _9__49_0 = (System_Func_object__bool__o *)v27->static_fields->__9__49_0;
      if ( !_9__49_0 )
      {
        if ( !v27->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v27);
          v27 = BattleResultBondsComponent___c_TypeInfo;
        }
        v29 = (Il2CppObject *)v27->static_fields->__9;
        _9__49_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_QuestRewardInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__49_0,
          v29,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__,
          0LL);
        static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
        static_fields->__9__49_0 = (struct System_Func_QuestRewardInfo__bool__o *)_9__49_0;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&static_fields->__9__49_0,
          (int64_t)_9__49_0,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
      }
      v37 = System_Linq_Enumerable__Where_object_(
              rewardInfos,
              (System_Func_TSource__bool__o *)_9__49_0,
              (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
      v38 = System_Linq_Enumerable__ToList_object_(
              v37,
              (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
      if ( v38 )
      {
        v39 = (System_Collections_Generic_List_object__o *)v38;
        if ( v38->fields._size >= 1 )
        {
          v40 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v40 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v40->static_fields->GET_NEW_SVT_KEY, 0LL) )
          {
            v41 = BattleResultBondsComponent_TypeInfo;
            if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v41 = BattleResultBondsComponent_TypeInfo;
            }
            String_70827888 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70827888(
                                                v41->static_fields->GET_NEW_SVT_KEY,
                                                0LL);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v43 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_object_(
                                                                   String_70827888,
                                                                   (const MethodInfo_3017804 *)Method_JsonManager_DeserializeArray_QuestRewardInfo___);
            System_Collections_Generic_List_object___AddRange(
              v39,
              v43,
              (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
          }
          v44 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v44 = BattleResultBondsComponent_TypeInfo;
          }
          GET_NEW_SVT_KEY = v44->static_fields->GET_NEW_SVT_KEY;
          v46 = System_Collections_Generic_List_object___ToArray(
                  v39,
                  (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v47 = JsonManager__toJson(&v46->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_NEW_SVT_KEY, v47, 0LL);
        }
      }
      v48 = BattleResultBondsComponent___c_TypeInfo;
      getJoinSvts = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.getJoinSvts;
      if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v48 = BattleResultBondsComponent___c_TypeInfo;
      }
      _9__49_1 = (System_Func_object__bool__o *)v48->static_fields->__9__49_1;
      if ( !_9__49_1 )
      {
        if ( !v48->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v48);
          v48 = BattleResultBondsComponent___c_TypeInfo;
        }
        v51 = (Il2CppObject *)v48->static_fields->__9;
        _9__49_1 = (System_Func_object__bool__o *)sub_1C22084(System_Func_GetSvts__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__49_1,
          v51,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__,
          0LL);
        v52 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        v52->__9__49_1 = (struct System_Func_GetSvts__bool__o *)_9__49_1;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v52->__9__49_1, (int64_t)_9__49_1, v53, v54, v55, v56, v57, v58);
      }
      v59 = System_Linq_Enumerable__Where_object_(
              getJoinSvts,
              (System_Func_TSource__bool__o *)_9__49_1,
              (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_GetSvts___);
      v60 = System_Linq_Enumerable__ToList_object_(
              v59,
              (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_GetSvts___);
      if ( v60 )
      {
        v61 = (System_Collections_Generic_List_object__o *)v60;
        if ( v60->fields._size >= 1 )
        {
          v62 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v62 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v62->static_fields->GET_EXIST_SVT_KEY, 0LL) )
          {
            v63 = BattleResultBondsComponent_TypeInfo;
            if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v63 = BattleResultBondsComponent_TypeInfo;
            }
            v64 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70827888(
                                    v63->static_fields->GET_EXIST_SVT_KEY,
                                    0LL);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v65 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_object_(
                                                                   v64,
                                                                   (const MethodInfo_3017804 *)Method_JsonManager_DeserializeArray_GetSvts___);
            System_Collections_Generic_List_object___AddRange(
              v61,
              v65,
              (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_GetSvts__AddRange__);
          }
          v66 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v66 = BattleResultBondsComponent_TypeInfo;
          }
          GET_EXIST_SVT_KEY = v66->static_fields->GET_EXIST_SVT_KEY;
          v68 = System_Collections_Generic_List_object___ToArray(
                  v61,
                  (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_GetSvts__ToArray__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v69 = JsonManager__toJson(&v68->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_EXIST_SVT_KEY, v69, 0LL);
        }
      }
      UnityEngine_PlayerPrefs__Save(0LL);
      v17 = this;
    }
  }
  if ( !myDeck )
    goto LABEL_143;
  svts = myDeck->fields.svts;
  if ( !svts )
    goto LABEL_143;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v72 = 0;
    v73 = 0;
    v127 = v19;
    v128 = v18;
    v126 = myDeck->fields.svts;
    while ( 1 )
    {
      if ( v72 >= max_length )
LABEL_144:
        sub_1C2209C(Instance, userSvtId);
      v74 = svts->m_Items[v72];
      v75 = (Il2CppObject *)sub_1C22084(BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo);
      System_Object___ctor(v75, 0LL);
      if ( !v74 || !v75 )
        goto LABEL_143;
      userSvtId = (const MethodInfo *)v74->fields.userSvtId;
      v75[1].klass = (Il2CppClass *)userSvtId;
      if ( (__int64)userSvtId < 1 )
      {
        Instance = (int64_t)x;
        if ( !x )
          goto LABEL_143;
        Instance = BattleData__IsInterruptionQuest((BattleData_o *)x, 0LL);
        if ( (Instance & 1) == 0 )
          goto LABEL_129;
        if ( v17->fields.isMultiDeck )
        {
          Instance = (int64_t)Object_object;
          if ( !Object_object )
            goto LABEL_143;
          Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, userSvtId);
          v91 = (BattleResultBondsIconComponent_o *)Instance;
          if ( !Instance )
            goto LABEL_143;
        }
        else
        {
          v109 = v17->fields.collects;
          if ( !v109 )
            goto LABEL_143;
          if ( v73 >= v109->max_length )
            goto LABEL_144;
          v91 = v109->m_Items[v73];
          if ( !v91 )
            goto LABEL_143;
        }
        BattleResultBondsIconComponent__setServantData(v91, 0LL, 0LL, 0, 0, 0, 0, v90);
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v91, 0LL);
        if ( !Instance )
          goto LABEL_143;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        v17 = this;
      }
      else
      {
        if ( !v18 )
          goto LABEL_143;
        Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v18,
                              (int64_t)userSvtId,
                              (const MethodInfo_325E324 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !Instance )
          goto LABEL_143;
        v76 = (UserServantEntity_o *)Instance;
        v77 = v73;
        SvtId = (BattleResultBondsComponent_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
        ServantCollection = BattleResultBondsComponent__getServantCollection(SvtId, oldCollects, (int32_t)SvtId, v79);
        Instance = UserServantEntity__getSvtId(v76, 0LL);
        if ( !v19 )
          goto LABEL_143;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                              Instance,
                              (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !usrSvts )
          goto LABEL_143;
        v82 = usrSvts->max_length;
        v83 = (ServantEntity_o *)Instance;
        if ( v82 < 1 )
        {
LABEL_86:
          afterLimitCount = -1;
          v89 = -1;
        }
        else
        {
          v84 = 0;
          while ( 1 )
          {
            if ( v84 >= v82 )
              goto LABEL_144;
            v85 = usrSvts->m_Items[v84];
            if ( !v85 )
              goto LABEL_143;
            v86 = *(_OWORD *)&v85->fields.id.fields.fakeValue;
            *(_OWORD *)&v134.fields.currentCryptoKey = *(_OWORD *)&v85->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v134.fields.fakeValue = v86;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v133 = v134;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v133, 0LL);
            if ( (Il2CppClass *)Instance == v75[1].klass )
              break;
            v82 = usrSvts->max_length;
            if ( (int)++v84 >= v82 )
              goto LABEL_86;
          }
          if ( this->fields.isMultiDeck )
            BattleResultBondsComponent__UpdateAfterLimitCount(
              (BattleResultBondsComponent_o *)Instance,
              (BattleData_o *)x,
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
          goto LABEL_143;
        buddyPointInfos = battleResult->fields.buddyPointInfos;
        if ( buddyPointInfos )
        {
          v95 = 0LL;
          if ( *(_QWORD *)&buddyPointInfos->max_length && !isHideBuddyPointResult )
          {
            v96 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleBuddyPointInfo__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v96,
              v75,
              Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__,
              0LL);
            Instance = (int64_t)BasicHelper__Find_object_(
                                  (System_Object_array *)buddyPointInfos,
                                  (System_Func_T__bool__o *)v96,
                                  (const MethodInfo_2F9B93C *)Method_BasicHelper_Find_BattleBuddyPointInfo___);
            v95 = (BattleBuddyPointInfo_o *)Instance;
          }
        }
        else
        {
          v95 = 0LL;
        }
        if ( this->fields.isMultiDeck )
        {
          Instance = (int64_t)Object_object;
          if ( !Object_object )
            goto LABEL_143;
          Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, userSvtId);
          v97 = (BattleResultBondsIconComponent_o *)Instance;
          if ( !Instance )
            goto LABEL_143;
        }
        else
        {
          v98 = this->fields.collects;
          if ( !v98 )
            goto LABEL_143;
          if ( v77 >= v98->max_length )
            goto LABEL_144;
          v97 = v98->m_Items[v77];
          if ( !v97 )
            goto LABEL_143;
        }
        BattleResultBondsIconComponent__setServantData(
          v97,
          ServantCollection,
          v76,
          v89,
          this->fields.baseFriendshipExp,
          Type == 0,
          afterLimitCount,
          v81);
        BattleResultBondsIconComponent__SetBuddyPointInfo(v97, v95, battleResult->fields.eventId, v99);
        if ( !v83 )
          goto LABEL_143;
        v19 = v127;
        v18 = v128;
        if ( ServantEntity__checkIsHeroineSvt(v83, 0LL) && !UserServantEntity__IsAddFriendShipHeroine(v76, 0LL) )
        {
          updateFlg = this->fields.updateFlg;
          v107 = updateFlg | BattleResultBondsIconComponent__setNextServantData(v97, ServantCollection, v100);
          v17 = this;
          v73 = v77;
          this->fields.updateFlg = v107;
          v97->fields.isNoFriendship = 1;
        }
        else
        {
          Instance = (int64_t)MasterData_object;
          if ( !MasterData_object )
            goto LABEL_143;
          v73 = v77;
          EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                               MasterData_object,
                               v97->fields.userId,
                               v97->fields.svtId,
                               0LL);
          v102 = this->fields.updateFlg;
          v105 = v102 | BattleResultBondsIconComponent__setNextServantData(v97, EntityDefinitely, v103);
          v17 = this;
          this->fields.updateFlg = v105;
        }
        svts = v126;
        BattleResultBondsIconComponent__ChangeGauge(v97, 0.0, v104);
        BattleResultBondsIconComponent__InitBuddyPointInfo(v97, v108);
        if ( v17->fields.isMultiDeck )
        {
          Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v97, 0LL);
          if ( !Instance )
            goto LABEL_143;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        }
      }
      ++v73;
LABEL_129:
      max_length = svts->max_length;
      if ( (int)++v72 >= max_length )
        goto LABEL_132;
    }
  }
  v73 = 0;
LABEL_132:
  if ( !v17->fields.isMultiDeck )
  {
    BattleResultBondsComponent__NormalBondsInit(v17, v73, cnt, Type == 0, battleResult, isHideBuddyPointResult, v25);
    return;
  }
  if ( !Object_object )
    goto LABEL_143;
  BattleResultBondsDeckPerWaveComponent__SetWaveCount(Object_object, currentWave, maxWave, v24);
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object_object, 0LL);
  if ( !Instance )
    goto LABEL_143;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)Object_object->fields.iconRoot;
  if ( !Instance
    || ((*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
          Instance,
          *(_QWORD *)(*(_QWORD *)Instance + 448LL)),
        (Instance = (int64_t)v17->fields.multiBondsRoot) == 0)
    || ((*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
          Instance,
          *(_QWORD *)(*(_QWORD *)Instance + 448LL)),
        (Instance = (int64_t)v17->fields.bondsList) == 0)
    || (v116 = *(_QWORD *)(Instance + 16),
        v117 = Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__,
        ++*(_DWORD *)(Instance + 28),
        !v116) )
  {
LABEL_143:
    sub_1C22094(Instance, userSvtId);
  }
  v118 = *(int *)(Instance + 24);
  if ( (unsigned int)v118 >= *(_DWORD *)(v116 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)Object_object,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
  }
  else
  {
    v119 = v116 + 8 * v118;
    *(_DWORD *)(Instance + 24) = v118 + 1;
    *(_QWORD *)(v119 + 32) = Object_object;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v119 + 32), (int64_t)Object_object, v110, v111, v112, v113, v114, v115);
  }
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
        sub_1C2209C(BondsIconArray, v4);
      BondsIconArray = (BattleResultBondsIconComponent_array *)v6->m_Items[v7];
      if ( !BondsIconArray )
        break;
      BattleResultBondsIconComponent__FinishBuddyPointInfoUpdate((BattleResultBondsIconComponent_o *)BondsIconArray, v4);
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_7;
    }
LABEL_9:
    sub_1C22094(BondsIconArray, v4);
  }
LABEL_7:
  BattleResultBondsComponent__FinishUpdateValue(this, v4);
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

  if ( (byte_4BDF8E3 & 1) == 0 )
  {
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    this = (BattleResultBondsComponent_o *)sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDF8E3 = 1;
  }
  if ( !userSvtData )
    goto LABEL_26;
  if ( userSvtData->fields.afterLimitCount && userSvtData->fields.afterIconLimitCount )
    return;
  *(_QWORD *)&userSvtData->fields.afterLimitCount = -1LL;
  if ( !battleData )
    goto LABEL_26;
  battle_ent = battleData->fields.battle_ent;
  if ( !battle_ent || !deckSvtData )
    goto LABEL_26;
  FollowerType = BattleDeckServantData__GetFollowerType(deckSvtData, battle_ent->fields.followerType, 0LL);
  Type = Follower__getType(FollowerType, 0LL);
  if ( Follower__IsNpc(Type, 0LL) || deckSvtData->fields.npcId > 0 )
    return;
  v14 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v14;
  *(_QWORD *)&v26.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v26, 0LL);
  this = (BattleResultBondsComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                           userSvtData->fields.limitCount,
                                           0LL);
  if ( !svtLimitImageMaster )
LABEL_26:
    sub_1C22094(this, battleData);
  if ( ServantLimitImageMaster__IsServantLimitCountSeal(svtLimitImageMaster, v15, (int32_t)this, 0LL) )
  {
    v17 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v27.fields.currentCryptoKey = v17;
    *(_QWORD *)&v27.fields.fakeValue = v16;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v27, 0LL);
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
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v28.fields.currentCryptoKey = v22;
      *(_QWORD *)&v28.fields.fakeValue = v21;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v28, 0LL);
      afterLimitCount = userSvtData->fields.afterLimitCount;
      v25 = v23;
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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
        sub_1C2209C(BondsIconArray, v5);
      BondsIconArray = (BattleResultBondsIconComponent_array *)v7->m_Items[v8];
      if ( !BondsIconArray )
        break;
      BondsIconArray = (BattleResultBondsIconComponent_array *)BattleResultBondsIconComponent__ChangeGauge(
                                                                 (BattleResultBondsIconComponent_o *)BondsIconArray,
                                                                 val,
                                                                 v5);
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_9:
    sub_1C22094(BondsIconArray, v5);
  }
}


void __fastcall BattleResultBondsComponent___checkShow_b__67_0(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct BattleFriendshipRewardInfo_array *showList; // x8
  __int64 showIndex; // x9
  BattleResultBondsComponent_o *v5; // x19
  BattleFriendshipRewardInfo_o *v6; // x8
  struct BattleResultComponent_o *parentComp; // x8
  struct BattleResultComponent_o *v8; // x8

  showList = this->fields.showList;
  if ( !showList )
    goto LABEL_16;
  showIndex = this->fields.showIndex;
  v5 = this;
  if ( (unsigned int)showIndex >= showList->max_length )
    sub_1C2209C(this, method);
  v6 = showList->m_Items[showIndex];
  if ( !v6 )
    goto LABEL_16;
  this = (BattleResultBondsComponent_o *)this->fields.parentComp;
  if ( !this )
    goto LABEL_16;
  BattleResultComponent__showServantRewardAction(
    (BattleResultComponent_o *)this,
    v6->fields.userSvtId,
    v6->fields.type,
    v2);
  parentComp = v5->fields.parentComp;
  ++v5->fields.showIndex;
  if ( !parentComp )
    goto LABEL_16;
  this = (BattleResultBondsComponent_o *)parentComp->fields.obj_fronttouch;
  if ( !this )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v8 = v5->fields.parentComp;
  if ( !v8 )
    goto LABEL_16;
  this = (BattleResultBondsComponent_o *)v8->fields.obj_basebg;
  if ( !this )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( v5->fields.isMultiDeck )
  {
    this = (BattleResultBondsComponent_o *)v5->fields.multiDeckWindow;
    if ( !this )
      goto LABEL_16;
  }
  else
  {
    this = (BattleResultBondsComponent_o *)v5->fields.window;
    if ( !this )
      goto LABEL_16;
  }
  this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (BattleResultBondsComponent_o *)v5->fields.upRoot) == 0LL) )
  {
LABEL_16:
    sub_1C22094(this, method);
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
  Il2CppObject *ComponentInChildren_object; // x23
  BattleResultBondsComponent_c *v17; // x0
  Il2CppObject *v18; // x24
  bool v19; // w0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x4
  UnityEngine_Transform_o *transform; // x21
  float v28; // s8
  float y; // s9
  int v30; // s2
  float v31; // s0
  float v32; // s1
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 klass_low; // x10
  __int64 v36; // x8
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDF8D8 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&BattleResultBondsComponent_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_17585/*"bit_reward_shine02"*/);
    byte_4BDF8D8 = 1;
  }
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             this->fields.confPrefab,
             this->fields.confRoot,
             0LL,
             0LL);
  if ( !Object )
    goto LABEL_36;
  v15 = Object;
  Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Object, 0LL);
  if ( !Object )
    goto LABEL_36;
  v37.fields.y = -112.0 - posY;
  v37.fields.x = 0.0;
  v37.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v37, 0LL);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 v15,
                                 (const MethodInfo_3000798 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                         (UnityEngine_Object_o *)ComponentInChildren_object,
                                         0LL,
                                         0LL);
  if ( ((unsigned __int8)Object & 1) != 0 )
  {
    if ( !ComponentInChildren_object )
      goto LABEL_36;
    if ( isCoin )
    {
      UILabel__set_overflowMethod((UILabel_o *)ComponentInChildren_object, 2, 0LL);
      UILabel__set_text((UILabel_o *)ComponentInChildren_object, text, 0LL);
      v17 = BattleResultBondsComponent_TypeInfo;
      if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
        v17 = BattleResultBondsComponent_TypeInfo;
      }
      UILabel__SetCondensedScale(
        (UILabel_o *)ComponentInChildren_object,
        v17->static_fields->CONF_LABEL_MAX_WIDTH - 36,
        0,
        0LL);
    }
    else
    {
      if ( isSaintGraph )
        UIWidget__set_height((UIWidget_o *)ComponentInChildren_object, 100, 0LL);
      UILabel__set_text((UILabel_o *)ComponentInChildren_object, text, 0LL);
    }
  }
  v18 = UnityEngine_GameObject__GetComponentInChildren_object_(
          v15,
          (const MethodInfo_3000798 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v19 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL);
  if ( (iconImageId & 0x80000000) == 0 && v19 )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( isCoin )
      AtlasManager__SetCoin((UISprite_o *)v18, iconImageId, 0LL);
    else
      AtlasManager__SetItem((UISprite_o *)v18, iconImageId, 0LL);
    BattleResultBondsComponent__CreateRewardEffect(
      this,
      this->fields.resultAssetData,
      (UISprite_o *)v18,
      (System_String_o *)StringLiteral_17585/*"bit_reward_shine02"*/,
      v26);
    if ( ComponentInChildren_object )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ComponentInChildren_object, 0LL);
      Object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)ComponentInChildren_object,
                                             0LL);
      if ( Object )
      {
        LODWORD(v28) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Object, 0LL);
        Object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)ComponentInChildren_object,
                                               0LL);
        if ( Object )
        {
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Object, 0LL);
          y = localPosition.fields.y;
          Object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)ComponentInChildren_object,
                                                 0LL);
          if ( Object )
          {
            *(UnityEngine_Vector3_o *)(&v30 - 2) = UnityEngine_Transform__get_localPosition(
                                                     (UnityEngine_Transform_o *)Object,
                                                     0LL);
            if ( transform )
            {
              v31 = v28 + 36.0;
              v32 = y;
              UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v30 - 2), 0LL);
              goto LABEL_31;
            }
          }
        }
      }
    }
LABEL_36:
    sub_1C22094(Object, v14);
  }
LABEL_31:
  Object = (UnityEngine_GameObject_o *)this->fields.conflist;
  if ( !Object )
    goto LABEL_36;
  v33 = *(_QWORD *)&Object->fields.m_CachedPtr;
  v34 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(Object[1].klass);
  if ( !v33 )
    goto LABEL_36;
  klass_low = SLODWORD(Object[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v33 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Object,
      (Il2CppObject *)v15,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = v33 + 8 * klass_low;
    LODWORD(Object[1].klass) = klass_low + 1;
    *(_QWORD *)(v36 + 32) = v15;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v36 + 32), (int64_t)v15, v20, v21, v22, v23, v24, v25);
  }
}


void __fastcall BattleResultBondsComponent__checkBondsUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  int64_t v3; // x22
  System_Collections_Generic_List_object__o *conflist; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  const MethodInfo *v12; // x1
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int32_t colIndex; // w8
  __int64 v21; // x9
  int32_t v22; // w10
  __int64 v23; // x11
  __int64 *v24; // x8
  __int64 v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 *v32; // x21
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_GameObject__o *v34; // x8
  int32_t size; // w2
  int v36; // w9
  UnityEngine_Object_o *levelUpSimpleAnim; // x22
  System_Collections_Generic_List_object__c *klass; // x8
  System_Collections_Generic_List_object__o *v39; // x22
  __int64 v40; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v42; // x0
  UnityEngine_Object_o *levelUpAnim; // x22
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x9
  __int64 v51; // x8
  __int64 v52; // x9
  struct BattleResultBondsIconComponent_o *v53; // x1
  UnityEngine_Object_o *figureMoveRoot; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o **v56; // x21
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  UnityEngine_GameObject_o *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t svtId; // w22
  int32_t svtLimit; // w23
  BattleResultBondsFigureComponent_o *bondsFigure; // x19
  UnityEngine_GameObject_o *v74; // x21
  System_Action_o *v75; // x24
  const MethodInfo *v76; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BDF8D6 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SimpleAnimation_State_TypeInfo);
    sub_1C21E38(&BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo);
    sub_1C21E38(&Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__);
    sub_1C21E38(&BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo);
    sub_1C21E38(&StringLiteral_17569/*"bit_result_levelup01"*/);
    sub_1C21E38(&StringLiteral_3632/*"CLOSE"*/);
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    sub_1C21E38(&StringLiteral_3635/*"CLOSE_BOND_UP_ROOT"*/);
    byte_4BDF8D6 = 1;
  }
  memset(&v78, 0, sizeof(v78));
  v3 = sub_1C22084(BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_68;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)this, v6, v7, v8, v9, v10, v11);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v12);
  *(_QWORD *)(v3 + 24) = BondsIconArray;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 24), (int64_t)BondsIconArray, v14, v15, v16, v17, v18, v19);
  colIndex = this->fields.colIndex;
  v21 = *(_QWORD *)(v3 + 24);
  *(_DWORD *)(v3 + 32) = colIndex;
  if ( !v21 )
    goto LABEL_68;
  v22 = *(_DWORD *)(v21 + 24);
  if ( colIndex >= v22 )
    goto LABEL_12;
  do
  {
    if ( colIndex >= (unsigned int)v22 )
    {
      this->fields.colIndex = colIndex;
      sub_1C2209C(conflist, v5);
    }
    v23 = *(_QWORD *)(v21 + 8LL * colIndex + 32);
    if ( !v23 )
    {
      this->fields.colIndex = colIndex;
      sub_1C22094(conflist, v5);
    }
    if ( *(_BYTE *)(v23 + 128) && *(_DWORD *)(v23 + 176) != *(_DWORD *)(v23 + 184) )
    {
      this->fields.colIndex = colIndex;
      v25 = sub_1C22084(BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v25, 0LL);
      if ( !v25 )
        goto LABEL_68;
      *(_QWORD *)(v25 + 24) = v3;
      v32 = (__int64 *)(v25 + 24);
      sub_1C21DDC((PartyOrganizationUtility_o *)(v25 + 24), v3, v26, v27, v28, v29, v30, v31);
      conflist = (System_Collections_Generic_List_object__o *)this->fields.conflist;
      if ( !conflist )
        goto LABEL_68;
      if ( conflist->fields._size >= 1 )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v77,
          conflist,
          (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
        v78 = v77;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v78,
                  (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
        {
          current = v78.fields._current;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)current, 0LL);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v78,
          (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
        v34 = this->fields.conflist;
        if ( !v34 )
          goto LABEL_68;
        size = v34->fields._size;
        v36 = v34->fields._version + 1;
        v34->fields._size = 0;
        v34->fields._version = v36;
        if ( size >= 1 )
          System_Array__Clear((System_Array_o *)v34->fields._items, 0, size, 0LL);
      }
      conflist = (System_Collections_Generic_List_object__o *)this->fields.upRoot;
      if ( !conflist )
        goto LABEL_68;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)conflist, 1, 0LL);
      levelUpSimpleAnim = (UnityEngine_Object_o *)this->fields.levelUpSimpleAnim;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(levelUpSimpleAnim, 0LL, 0LL) )
      {
        conflist = (System_Collections_Generic_List_object__o *)this->fields.levelUpSimpleAnim;
        if ( !conflist )
          goto LABEL_68;
        conflist = (System_Collections_Generic_List_object__o *)SimpleAnimation__get_Item(
                                                                  (SimpleAnimation_o *)conflist,
                                                                  (System_String_o *)StringLiteral_17569/*"bit_result_levelup01"*/,
                                                                  0LL);
        if ( !conflist )
          goto LABEL_68;
        klass = conflist->klass;
        v39 = conflist;
        v40 = *(unsigned __int16 *)(&conflist->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&conflist->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v40;
            p_offset += 2;
            if ( !v40 )
              goto LABEL_41;
          }
          v42 = (__int64)(&klass->vtable._4_unknown.method + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_41:
          v42 = sub_1C73E18(conflist, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(System_Collections_Generic_List_object__o *, _QWORD, float))v42)(
          v39,
          *(_QWORD *)(v42 + 8),
          0.0);
        conflist = (System_Collections_Generic_List_object__o *)this->fields.levelUpSimpleAnim;
        if ( !conflist )
          goto LABEL_68;
        conflist = (System_Collections_Generic_List_object__o *)SimpleAnimation__Play_65253852(
                                                                  (SimpleAnimation_o *)conflist,
                                                                  (System_String_o *)StringLiteral_17569/*"bit_result_levelup01"*/,
                                                                  0LL);
      }
      else
      {
        levelUpAnim = (UnityEngine_Object_o *)this->fields.levelUpAnim;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        conflist = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(levelUpAnim, 0LL, 0LL);
        if ( ((unsigned __int8)conflist & 1) != 0 )
        {
          conflist = (System_Collections_Generic_List_object__o *)this->fields.levelUpAnim;
          if ( !conflist )
            goto LABEL_68;
          conflist = (System_Collections_Generic_List_object__o *)UnityEngine_Animation__get_Item(
                                                                    (UnityEngine_Animation_o *)conflist,
                                                                    (System_String_o *)StringLiteral_17569/*"bit_result_levelup01"*/,
                                                                    0LL);
          if ( !conflist )
            goto LABEL_68;
          UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)conflist, 0.0, 0LL);
          conflist = (System_Collections_Generic_List_object__o *)this->fields.levelUpAnim;
          if ( !conflist )
            goto LABEL_68;
          conflist = (System_Collections_Generic_List_object__o *)UnityEngine_Animation__Play_70614020(
                                                                    (UnityEngine_Animation_o *)conflist,
                                                                    (System_String_o *)StringLiteral_17569/*"bit_result_levelup01"*/,
                                                                    0LL);
        }
      }
      v50 = *v32;
      if ( *v32 )
      {
        v51 = *(_QWORD *)(v50 + 24);
        if ( v51 )
        {
          v52 = *(int *)(v50 + 32);
          if ( (unsigned int)v52 >= *(_DWORD *)(v51 + 24) )
            sub_1C2209C(conflist, v5);
          v53 = *(struct BattleResultBondsIconComponent_o **)(v51 + 8 * v52 + 32);
          this->fields.openCollect = v53;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.openCollect,
            (int64_t)v53,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49);
          figureMoveRoot = (UnityEngine_Object_o *)this->fields.figureMoveRoot;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(figureMoveRoot, 0LL, 0LL) )
          {
            conflist = (System_Collections_Generic_List_object__o *)this->fields.figureMoveRoot;
            if ( !conflist )
              goto LABEL_68;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)conflist, 0LL);
            *(_QWORD *)(v25 + 16) = gameObject;
            v56 = (UnityEngine_GameObject_o **)(v25 + 16);
            sub_1C21DDC((PartyOrganizationUtility_o *)(v25 + 16), (int64_t)gameObject, v57, v58, v59, v60, v61, v62);
            conflist = *(System_Collections_Generic_List_object__o **)(v25 + 16);
            if ( !conflist )
              goto LABEL_68;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)conflist, 0, 0LL);
          }
          else
          {
            conflist = (System_Collections_Generic_List_object__o *)this->fields.figureRoot;
            if ( !conflist )
              goto LABEL_68;
            v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)conflist, 0LL);
            *(_QWORD *)(v25 + 16) = v63;
            v56 = (UnityEngine_GameObject_o **)(v25 + 16);
            sub_1C21DDC((PartyOrganizationUtility_o *)(v25 + 16), (int64_t)v63, v64, v65, v66, v67, v68, v69);
          }
          openCollect = this->fields.openCollect;
          if ( openCollect )
          {
            svtId = openCollect->fields.svtId;
            svtLimit = openCollect->fields.svtLimit;
            bondsFigure = this->fields.bondsFigure;
            v74 = *v56;
            v75 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
            System_Action___ctor(
              v75,
              (Il2CppObject *)v25,
              Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__,
              0LL);
            if ( bondsFigure )
            {
              BattleResultBondsFigureComponent__SetupFigure(bondsFigure, v74, svtId, svtLimit, 7, 0, 51, v75, v76);
              return;
            }
          }
        }
      }
LABEL_68:
      sub_1C22094(conflist, v5);
    }
    *(_DWORD *)(v3 + 32) = ++colIndex;
  }
  while ( colIndex < v22 );
  this->fields.colIndex = colIndex - 1;
LABEL_12:
  conflist = (System_Collections_Generic_List_object__o *)this->fields.myFsm;
  if ( !this->fields.openBoundsFlg )
  {
    if ( conflist )
    {
      v24 = &StringLiteral_3632/*"CLOSE"*/;
      goto LABEL_27;
    }
    goto LABEL_68;
  }
  if ( !conflist )
    goto LABEL_68;
  if ( this->fields.isMultiDeck )
    v24 = &StringLiteral_3635/*"CLOSE_BOND_UP_ROOT"*/;
  else
    v24 = &StringLiteral_5604/*"END_PROC"*/;
LABEL_27:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)conflist, (System_String_o *)*v24, 0LL);
}


void __fastcall BattleResultBondsComponent__checkShow(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  struct BattleFriendshipRewardInfo_array *showList; // x8
  __int64 v4; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  SummonAssetManager_o *parentComp; // x0
  struct BattleResultComponent_o *v8; // x8
  struct BattleResultComponent_o *v9; // x8
  const MethodInfo *v10; // x3

  if ( (byte_4BDF8DC & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattleResultBondsComponent__checkShow_b__67_0__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_4BDF8DC = 1;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
        v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(v6, (Il2CppObject *)this, Method_BattleResultBondsComponent__checkShow_b__67_0__, 0LL);
        if ( Instance )
        {
          SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v6, 0LL);
          return;
        }
        goto LABEL_23;
      }
      parentComp = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      if ( !parentComp )
        goto LABEL_23;
      SummonAssetManager__UnloadSummonAssets(parentComp, 0LL);
    }
  }
  parentComp = (SummonAssetManager_o *)this->fields.parentComp;
  if ( !parentComp )
    goto LABEL_23;
  BattleResultComponent__ResetPlayScreenTouch((BattleResultComponent_o *)parentComp, method);
  v8 = this->fields.parentComp;
  if ( !v8 )
    goto LABEL_23;
  parentComp = (SummonAssetManager_o *)v8->fields.obj_fronttouch;
  if ( !parentComp )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)parentComp, 1, 0LL);
  v9 = this->fields.parentComp;
  if ( !v9 )
    goto LABEL_23;
  parentComp = (SummonAssetManager_o *)v9->fields.obj_basebg;
  if ( !parentComp )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)parentComp, 1, 0LL);
  if ( this->fields.isMultiDeck )
  {
    parentComp = (SummonAssetManager_o *)this->fields.multiDeckWindow;
    if ( !parentComp )
      goto LABEL_23;
  }
  else
  {
    parentComp = (SummonAssetManager_o *)this->fields.window;
    if ( !parentComp )
      goto LABEL_23;
  }
  parentComp = (SummonAssetManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parentComp, 0LL);
  if ( !parentComp
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)parentComp, 1, 0LL),
        (parentComp = (SummonAssetManager_o *)this->fields.upRoot) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)parentComp, 1, 0LL),
        (parentComp = (SummonAssetManager_o *)this->fields.parentComp) == 0LL) )
  {
LABEL_23:
    sub_1C22094(parentComp, method);
  }
  BattleResultComponent__showServantRewardAction((BattleResultComponent_o *)parentComp, 0LL, 1, v10);
}


void __fastcall BattleResultBondsComponent__closeBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  void *effectUIList; // x0
  int32_t v5; // w20
  int32_t v6; // w2
  int v7; // w8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct BattleResultComponent_o *parentComp; // x8
  struct BattleWindowComponent_o *confwindow; // x20
  BattleWindowComponent_EndCall_o *v12; // x21

  if ( (byte_4BDF8DD & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleResultBondsComponent_closeBondUp__);
    sub_1C21E38(&Method_BattleResultBondsComponent_endCloseBondUp__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIUnityRenderer__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
    byte_4BDF8DD = 1;
  }
  UnityEngine_Time__set_timeScale(this->fields.tempSaveTimeScale, 0LL);
  effectUIList = this->fields.effectUIList;
  if ( !effectUIList )
    goto LABEL_19;
  if ( *((int *)effectUIList + 6) >= 1 )
  {
    v5 = 0;
    do
    {
      effectUIList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)effectUIList,
                       v5,
                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
      if ( !effectUIList )
        goto LABEL_19;
      effectUIList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectUIList, 0LL);
      if ( !effectUIList )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectUIList, 0, 0LL);
      effectUIList = this->fields.effectUIList;
      if ( !effectUIList )
        goto LABEL_19;
      v6 = *((_DWORD *)effectUIList + 6);
      ++v5;
    }
    while ( v5 < v6 );
    v7 = *((_DWORD *)effectUIList + 7) + 1;
    *((_DWORD *)effectUIList + 6) = 0;
    *((_DWORD *)effectUIList + 7) = v7;
    if ( v6 >= 1 )
      System_Array__Clear(*((System_Array_o **)effectUIList + 2), 0, v6, 0LL);
  }
  v8 = Method_BattleResultBondsComponent_closeBondUp__;
  if ( (*((_BYTE *)Method_BattleResultBondsComponent_closeBondUp__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C21E50(Method_BattleResultBondsComponent_closeBondUp__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (effectUIList = parentComp->fields.obj_fronttouch) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectUIList, 0, 0LL),
        (effectUIList = this->fields.bondsFigure) == 0LL)
    || (BattleResultBondsFigureComponent__DestroyFigure((BattleResultBondsFigureComponent_o *)effectUIList, v3),
        confwindow = this->fields.confwindow,
        v12 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v12,
          (Il2CppObject *)this,
          Method_BattleResultBondsComponent_endCloseBondUp__,
          0LL),
        !confwindow) )
  {
LABEL_19:
    sub_1C22094(effectUIList, v3);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))confwindow->klass->vtable._12_Close.method)(
    confwindow,
    v12,
    confwindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultBondsComponent__endClose(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v9; // x1
  ServantFaceIconComponent_o *BondsIconArray; // x0
  __int64 v11; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  ServantFaceIconComponent_o *v13; // x20
  int v14; // w21
  int v15; // w22
  __int64 v16; // x8

  if ( (byte_4BDF8E0 & 1) == 0 )
  {
    sub_1C21E38(&OptionManager_TypeInfo);
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF8E0 = 1;
  }
  this->fields.resultAssetData = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.resultAssetData, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    BondsIconArray = (ServantFaceIconComponent_o *)BattleResultBondsComponent__GetBondsIconArray(this, v9);
    if ( !BondsIconArray )
      goto LABEL_17;
    m_CancellationTokenSource = BondsIconArray->fields.m_CancellationTokenSource;
    v13 = BondsIconArray;
    v14 = (_DWORD)m_CancellationTokenSource - 1;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        v16 = *((_QWORD *)&v13->fields.backSprite + v15);
        if ( !v16 )
          break;
        BondsIconArray = *(ServantFaceIconComponent_o **)(v16 + 48);
        if ( !BondsIconArray )
          break;
        ServantFaceIconComponent__ClearFaceAtlas(BondsIconArray, 0LL);
        if ( v14 == v15 )
          goto LABEL_14;
        if ( (unsigned int)++v15 >= LODWORD(v13->fields.m_CancellationTokenSource) )
          sub_1C2209C(BondsIconArray, v11);
      }
LABEL_17:
      sub_1C22094(BondsIconArray, v11);
    }
  }
LABEL_14:
  BondsIconArray = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
  if ( !BondsIconArray )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BondsIconArray, 0, 0LL);
  BondsIconArray = (ServantFaceIconComponent_o *)this->fields.myFsm;
  if ( !BondsIconArray )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultBondsComponent__endCloseBondUp(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF8DE & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF8DE = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultBondsComponent__endMoveFigure(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x21
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 lvComp; // x0
  __int64 v7; // x1
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t friendshipRank; // w22
  int32_t svtId; // w25
  int v11; // w29
  Il2CppObject *current; // x23
  System_String_o *v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v17; // x1
  const MethodInfo *v18; // x5
  struct BattleResultBondsIconComponent_o *v19; // x8
  int32_t svtLimit; // w23
  int32_t ServantLimitCountSealAfter; // w23
  __int64 *v22; // x8
  int v23; // w21
  bool v24; // w23
  System_String_o *v25; // x0
  const MethodInfo *v26; // x5
  struct BattleResultBondsIconComponent_o *v27; // x8
  System_String_o *v28; // x0
  const MethodInfo *v29; // x5
  System_Collections_Generic_List_object__o *v30; // x22
  struct BattleFriendshipRewardInfo_array *rewardInfos; // x24
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x23
  int v34; // w21
  int CONF_SERVANT_COIN_PLUS_HEIGHT; // w26
  struct BattleResultBondsIconComponent_o *v36; // x8
  BattleFriendshipRewardInfo_o *v37; // x25
  GiftEntity_o *v38; // x26
  Il2CppObject *v39; // x0
  System_String_o *v40; // x27
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  Il2CppObject *v44; // x0
  Il2CppObject *v45; // x0
  Il2CppObject *Master_object; // x28
  int32_t v47; // w1
  System_String_o *v48; // x0
  const MethodInfo *v49; // x5
  bool v50; // w27
  Il2CppObject *Name; // x27
  System_String_o *v52; // x0
  System_String_o *v53; // x28
  int32_t IconImageId; // w0
  const MethodInfo *v55; // x5
  BattleResultBondsComponent_c *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  struct System_Object_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  Il2CppClass **v66; // x0
  System_Object_array *v67; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int v74; // w20
  UnityEngine_Transform_o *confRoot; // x21
  unsigned int localPosition; // s0
  int v77; // w8
  float v78; // s1
  int v79; // w20
  float v80; // s1
  int v81; // s2
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *rankupConfLabel; // x21
  struct BattleWindowComponent_o *confwindow; // x20
  BattleWindowComponent_EndCall_o *v85; // x21
  ServantEntity_o *v86; // [xsp+0h] [xbp-D0h]
  System_Text_StringBuilder_o *v87; // [xsp+8h] [xbp-C8h]
  int32_t key; // [xsp+14h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+18h] [xbp-B8h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+30h] [xbp-A0h] BYREF
  System_String_o *countText; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v92; // [xsp+40h] [xbp-90h] BYREF
  System_String_o *nameText; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4BDF8DA & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleResultBondsComponent_endMoveFigure__);
    sub_1C21E38(&Method_BattleResultBondsComponent_openedBondUp__);
    sub_1C21E38(&BattleResultBondsComponent_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&ServantCommentManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C21E38(&System_Text_StringBuilder_TypeInfo);
    sub_1C21E38(&StringLiteral_11301/*"RESULT_BOUNDS_OPENQUEST"*/);
    sub_1C21E38(&StringLiteral_11304/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/);
    sub_1C21E38(&StringLiteral_11303/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/);
    sub_1C21E38(&StringLiteral_11299/*"RESULT_BOUNDS_GET_COIN_NAME"*/);
    sub_1C21E38(&StringLiteral_11297/*"RESULT_BOUNDS_GETVOICE"*/);
    sub_1C21E38(&StringLiteral_25461/*"{0} {1}"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_11298/*"RESULT_BOUNDS_GET_COIN_COUNT"*/);
    byte_4BDF8DA = 1;
  }
  memset(&v92, 0, sizeof(v92));
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  v3 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0LL);
  v4 = Method_BattleResultBondsComponent_endMoveFigure__;
  if ( (*((_BYTE *)Method_BattleResultBondsComponent_endMoveFigure__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C21E50(Method_BattleResultBondsComponent_endMoveFigure__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 6, 0, 0LL);
  openCollect = this->fields.openCollect;
  if ( !openCollect )
    goto LABEL_117;
  lvComp = (__int64)this->fields.lvComp;
  if ( !lvComp )
    goto LABEL_117;
  friendshipRank = openCollect->fields.friendshipRank;
  svtId = openCollect->fields.svtId;
  BattleResultMasterUpStatusComponent__setData(
    (BattleResultMasterUpStatusComponent_o *)lvComp,
    friendshipRank,
    openCollect->fields.nextFriendShipRank,
    0LL);
  lvComp = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !lvComp )
    goto LABEL_117;
  v87 = v3;
  lvComp = (__int64)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                      (clsQuestCheck_o *)lvComp,
                      svtId,
                      friendshipRank,
                      8,
                      0LL);
  if ( lvComp )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v89,
      (System_Collections_Generic_List_object__o *)lvComp,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    v11 = 0;
    v92 = v89;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v92,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
    {
      current = v92.fields._current;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11301/*"RESULT_BOUNDS_OPENQUEST"*/, 0LL);
      if ( !current )
        sub_1C22094(v13, v14);
      v15 = v13;
      QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
      v17 = System_String__Format(v15, QuestName, 0LL);
      BattleResultBondsComponent__addConfObject(this, v17, (float)v11 * 22.0, -1, 0, 0, v18);
      v11 += 3;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v92,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  }
  else
  {
    v11 = 0;
  }
  v19 = this->fields.openCollect;
  if ( !v19 )
    goto LABEL_117;
  svtLimit = v19->fields.svtLimit;
  lvComp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lvComp )
    goto LABEL_117;
  lvComp = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)lvComp,
                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !lvComp )
    goto LABEL_117;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)lvComp,
                                 svtId,
                                 svtLimit,
                                 0LL);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  if ( ServantCommentManager__IsOpenByServantFriendShipAndImageLimit(
         svtId,
         ServantLimitCountSealAfter,
         friendshipRank,
         0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = &StringLiteral_11304/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/;
    v23 = 4;
    v24 = 1;
LABEL_32:
    v25 = LocalizationManager__Get((System_String_o *)*v22, 0LL);
    BattleResultBondsComponent__addConfObject(this, v25, (float)v11 * 22.0, -1, 0, v24, v26);
    v11 += v23;
    goto LABEL_33;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  lvComp = ServantCommentManager__IsOpenByServantFriendShip_41765992(
             svtId,
             friendshipRank,
             ServantLimitCountSealAfter,
             0LL);
  if ( (lvComp & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = &StringLiteral_11303/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/;
    v24 = 0;
    v23 = 2;
    goto LABEL_32;
  }
LABEL_33:
  v27 = this->fields.openCollect;
  if ( !v27 )
    goto LABEL_117;
  if ( ServantVoiceMaster__isOpenByServantFriendShip(svtId, v27->fields.maxLimitCount, friendshipRank, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_11297/*"RESULT_BOUNDS_GETVOICE"*/, 0LL);
    BattleResultBondsComponent__addConfObject(this, v28, (float)v11 * 22.0, -1, 0, 0, v29);
    v11 += 2;
  }
  if ( this->fields.rewardInfos )
  {
    v30 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v30,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ItemMaster___);
    rewardInfos = this->fields.rewardInfos;
    if ( !rewardInfos )
      goto LABEL_117;
    max_length = rewardInfos->max_length;
    if ( max_length < 1 )
    {
      CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
      if ( !v30 )
        goto LABEL_117;
    }
    else
    {
      key = svtId;
      v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)lvComp;
      v34 = 0;
      CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
      do
      {
        if ( v34 >= (unsigned int)max_length )
          sub_1C2209C(lvComp, v7);
        v36 = this->fields.openCollect;
        if ( !v36 )
          goto LABEL_117;
        v37 = rewardInfos->m_Items[v34];
        if ( !v37 )
          goto LABEL_117;
        if ( v36->fields.svtId == v37->fields.targetSvtId )
        {
          lvComp = (__int64)BattleFriendshipRewardInfo__getGiftEntity(v37, 0LL);
          if ( !lvComp )
            goto LABEL_117;
          v38 = (GiftEntity_o *)lvComp;
          GiftEntity__GetInfo((GiftEntity_o *)lvComp, &nameText, &countText, 0LL);
          lvComp = GiftEntity__isQp(v38, 0LL);
          if ( (lvComp & 1) != 0 )
          {
            nameText = countText;
            countText = (System_String_o *)StringLiteral_1/*""*/;
          }
          if ( v38->fields.type == 2 )
          {
            if ( !v33 )
              goto LABEL_117;
            v39 = DataMasterBase_object__object__int___GetEntity(
                    v33,
                    v38->fields.objectId,
                    (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( v39 && LODWORD(v39[3].klass) == 29 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = LocalizationManager__Get((System_String_o *)StringLiteral_11298/*"RESULT_BOUNDS_GET_COIN_COUNT"*/, 0LL);
              LODWORD(v89.fields._list) = v38->fields.num;
              v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v89, v41, v42, v43);
              countText = System_String__Format(v40, v44, 0LL);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !lvComp )
                goto LABEL_117;
              v45 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)lvComp,
                      key,
                      (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( v45 )
              {
                v86 = (ServantEntity_o *)v45;
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                if ( !byte_4BD6FF5 )
                {
                  sub_1C21E38(&NetworkManager_TypeInfo);
                  byte_4BD6FF5 = 1;
                }
                lvComp = (__int64)NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  lvComp = (__int64)NetworkManager_TypeInfo;
                }
                if ( !Master_object )
                  goto LABEL_117;
                if ( UserServantCollectionMaster__TryGetEntity(
                       (UserServantCollectionMaster_o *)Master_object,
                       &entity,
                       *(_QWORD *)(*(_QWORD *)(lvComp + 184) + 64LL),
                       key,
                       0LL) )
                {
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                  if ( !entity )
                    goto LABEL_117;
                  if ( !lvComp )
                    goto LABEL_117;
                  lvComp = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                             (ServantLimitImageMaster_o *)lvComp,
                             key,
                             entity->fields.maxLimitCount,
                             0LL);
                  if ( !entity )
                    goto LABEL_117;
                  if ( (_DWORD)lvComp == entity->fields.maxLimitCount )
                    v47 = -1;
                  else
                    v47 = lvComp;
                }
                else
                {
                  v47 = -1;
                }
                Name = (Il2CppObject *)ServantEntity__getName(v86, v47, -1, 0, 0LL);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v52 = LocalizationManager__Get((System_String_o *)StringLiteral_11299/*"RESULT_BOUNDS_GET_COIN_NAME"*/, 0LL);
                nameText = System_String__Format_63129848(v52, (Il2CppObject *)nameText, Name, 0LL);
              }
              v50 = 1;
            }
            else
            {
              v50 = 0;
            }
            v53 = System_String__Format_63129848(
                    (System_String_o *)StringLiteral_25461/*"{0} {1}"*/,
                    (Il2CppObject *)nameText,
                    (Il2CppObject *)countText,
                    0LL);
            IconImageId = GiftEntity__getIconImageId(v38, 0LL);
            BattleResultBondsComponent__addConfObject(this, v53, (float)v11 * 22.0, IconImageId, v50, 0, v55);
          }
          else
          {
            v48 = System_String__Format_63129848(
                    (System_String_o *)StringLiteral_25461/*"{0} {1}"*/,
                    (Il2CppObject *)nameText,
                    (Il2CppObject *)countText,
                    0LL);
            BattleResultBondsComponent__addConfObject(this, v48, (float)v11 * 22.0, -1, 0, 0, v49);
          }
          v56 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v56 = BattleResultBondsComponent_TypeInfo;
          }
          v11 += 2;
          CONF_SERVANT_COIN_PLUS_HEIGHT = v56->static_fields->CONF_SERVANT_COIN_PLUS_HEIGHT;
          lvComp = BattleFriendshipRewardInfo__isShow(v37, 0LL);
          if ( (lvComp & 1) != 0 )
          {
            if ( !v30 )
              goto LABEL_117;
            items = v30->fields._items;
            v64 = Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__;
            ++v30->fields._version;
            if ( !items )
              goto LABEL_117;
            size = v30->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v30,
                (Il2CppObject *)v37,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
            }
            else
            {
              v66 = &items->obj.klass + size;
              v30->fields._size = size + 1;
              v66[4] = (Il2CppClass *)v37;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v66 + 4), (int64_t)v37, v57, v58, v59, v60, v61, v62);
            }
          }
        }
        max_length = rewardInfos->max_length;
        ++v34;
      }
      while ( v34 < max_length );
      if ( !v30 )
LABEL_117:
        sub_1C22094(lvComp, v7);
    }
    v67 = System_Collections_Generic_List_object___ToArray(
            v30,
            (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
    this->fields.showList = (struct BattleFriendshipRewardInfo_array *)v67;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.showList, (int64_t)v67, v68, v69, v70, v71, v72, v73);
    this->fields.showIndex = 0;
  }
  else
  {
    CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
  }
  lvComp = (__int64)this->fields.confSprite;
  if ( v11 )
    v74 = v11;
  else
    v74 = 1;
  if ( !lvComp )
    goto LABEL_117;
  UIWidget__set_height((UIWidget_o *)lvComp, CONF_SERVANT_COIN_PLUS_HEIGHT + 22 * v74 + 120, 0LL);
  confRoot = this->fields.confRoot;
  if ( !confRoot )
    goto LABEL_117;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.confRoot, 0LL);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT >= 0 )
    v77 = CONF_SERVANT_COIN_PLUS_HEIGHT;
  else
    v77 = CONF_SERVANT_COIN_PLUS_HEIGHT + 1;
  v78 = (float)v74;
  v79 = v77 >> 1;
  v80 = (float)(v78 * 11.0) + (float)(v77 >> 1);
  v81 = 0;
  UnityEngine_Transform__set_localPosition(confRoot, *(UnityEngine_Vector3_o *)&localPosition, 0LL);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT )
  {
    lvComp = (__int64)this->fields.confwindow;
    if ( !lvComp )
      goto LABEL_117;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lvComp, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v79, 0LL);
    lvComp = (__int64)this->fields.confwindow;
    if ( !lvComp )
      goto LABEL_117;
    lvComp = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)lvComp + 424LL))(
               lvComp,
               *(_QWORD *)(*(_QWORD *)lvComp + 432LL));
  }
  if ( !v87 )
    goto LABEL_117;
  rankupConfLabel = this->fields.rankupConfLabel;
  lvComp = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v87->klass->vtable._3_ToString.method)(
             v87,
             v87->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !rankupConfLabel )
    goto LABEL_117;
  UILabel__set_text(rankupConfLabel, (System_String_o *)lvComp, 0LL);
  confwindow = this->fields.confwindow;
  v85 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v85, (Il2CppObject *)this, Method_BattleResultBondsComponent_openedBondUp__, 0LL);
  if ( !confwindow )
    goto LABEL_117;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))confwindow->klass->vtable._10_Open.method)(
    confwindow,
    v85,
    confwindow->klass->vtable._11_CompOpen.methodPtr);
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

  if ( !collects )
    goto LABEL_11;
  max_length = collects->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1C2209C(this, collects);
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
    sub_1C22094(this, collects);
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
  int v6; // w10
  BattleDeckServantData_o *v7; // x12

  if ( !deck || (svts = deck->fields.svts) == 0LL )
LABEL_11:
    sub_1C22094(this, deck);
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0LL;
  v6 = 0;
  while ( 1 )
  {
    if ( max_length == v6 )
      sub_1C2209C(this, deck);
    v7 = svts->m_Items[v6];
    if ( !v7 )
      goto LABEL_11;
    if ( v7->fields.id == index + 1 )
      return v7->fields.userSvtId;
    if ( max_length == ++v6 )
      return 0LL;
  }
}


bool __fastcall BattleResultBondsComponent__isCollectsSvt(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  struct UserServantCollectionEntity_array *oldCollections; // x8

  oldCollections = this->fields.oldCollections;
  if ( !oldCollections )
    sub_1C22094(this, method);
  return (signed int)oldCollections->max_length > 1;
}


void __fastcall BattleResultBondsComponent__openedBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0
  struct BattleResultComponent_o *v4; // x8

  if ( (byte_4BDF8DB & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5599/*"END_OPEN"*/);
    byte_4BDF8DB = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__ResetPlayScreenTouch(parentComp, method), (v4 = this->fields.parentComp) == 0LL)
    || (parentComp = (BattleResultComponent_o *)v4->fields.obj_fronttouch) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)parentComp, 1, 0LL),
        parentComp = (BattleResultComponent_o *)this->fields.myFsm,
        ++this->fields.colIndex,
        !parentComp) )
  {
    sub_1C22094(parentComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)parentComp, (System_String_o *)StringLiteral_5599/*"END_OPEN"*/, 0LL);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDF8E7 & 1) == 0 )
  {
    sub_1C21E38(&BattleResultBondsComponent___c_TypeInfo);
    byte_4BDF8E7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BattleResultBondsComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleResultBondsComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultBondsComponent___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattleResultBondsComponent___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
  return col->fields.isUse;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_0(
        BattleResultBondsComponent___c_o *this,
        QuestRewardInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.type == 7 && x->fields.isNew;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_1(
        BattleResultBondsComponent___c_o *this,
        GetSvts_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  BattleResultBondsComponent___c__DisplayClass61_1_o *v15; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  BattleResultBondsComponent___c__DisplayClass61_1_o *v25; // x22
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  BattleResultBondsComponent___c__DisplayClass61_1_o *v41; // x22
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  BattleResultBondsComponent___c__DisplayClass61_1_o *v57; // x22
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v64; // x8
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  BattleResultBondsComponent___c__DisplayClass61_1_o *v71; // x22
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  System_Collections_Hashtable_o *v84; // x0
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v85; // x8
  struct BattleResultBondsComponent_o *v86; // x8
  const MethodInfo *v87; // x2
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v88; // x8
  struct BattleResultBondsIconComponent_array *bondsIcons; // x9
  __int64 i; // x10
  __int64 v91; // x0
  char v92[4]; // [xsp+4h] [xbp-3Ch] BYREF
  int v93; // [xsp+8h] [xbp-38h] BYREF
  int v94; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4BDF8E8 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_25185/*"x"*/);
    sub_1C21E38(&StringLiteral_9818/*"OPEN"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22682/*"oncompletetarget"*/);
    sub_1C21E38(&StringLiteral_19337/*"endMoveFigure"*/);
    sub_1C21E38(&StringLiteral_21211/*"islocal"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C21E38(&iTween_TypeInfo);
    byte_4BDF8E8 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_69;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_69;
  figureMoveRoot = (UnityEngine_Object_o *)_4__this->fields.figureMoveRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Object__op_Inequality(
                                                                 figureMoveRoot,
                                                                 0LL,
                                                                 0LL);
  v6 = v2->fields.CS___8__locals1;
  if ( !v6 )
    goto LABEL_69;
  v7 = (char)this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v6->fields.__4__this;
  if ( !this )
    goto LABEL_69;
  if ( (v7 & 1) == 0 )
  {
    BattleResultBondsComponent__endMoveFigure((BattleResultBondsComponent_o *)this, method);
    goto LABEL_61;
  }
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)this[3].fields.CS___8__locals1;
  if ( !this )
    goto LABEL_69;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
  if ( !this )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  parent = v2->fields.parent;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C21EE0(object___TypeInfo, 10LL);
  if ( !this )
    goto LABEL_69;
  v15 = this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_25185/*"x"*/;
  if ( StringLiteral_25185/*"x"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C21F74(
                                                                   StringLiteral_25185/*"x"*/,
                                                                   v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_25185/*"x"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( !LODWORD(v15->fields.CS___8__locals1) )
    goto LABEL_70;
  v15[1].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)method;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15[1], (int64_t)method, v9, v10, v11, v12, v13, v14);
  v94 = -1007026176;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v94, v16, v17, v18);
  v25 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C21F74(this, v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 1 )
    goto LABEL_70;
  v15[1].monitor = v25;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15[1].monitor, (int64_t)v25, v19, v20, v21, v22, v23, v24);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_24360/*"time"*/;
  if ( StringLiteral_24360/*"time"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C21F74(
                                                                   StringLiteral_24360/*"time"*/,
                                                                   v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_24360/*"time"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 2 )
    goto LABEL_70;
  v15[1].fields.parent = (struct UnityEngine_GameObject_o *)method;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15[1].fields, (int64_t)method, v26, v27, v28, v29, v30, v31);
  v93 = 1061997773;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v93, v32, v33, v34);
  v41 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C21F74(this, v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 3 )
    goto LABEL_70;
  v15[1].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v41;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15[1].fields.CS___8__locals1, (int64_t)v41, v35, v36, v37, v38, v39, v40);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_21211/*"islocal"*/;
  if ( StringLiteral_21211/*"islocal"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C21F74(
                                                                   StringLiteral_21211/*"islocal"*/,
                                                                   v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_21211/*"islocal"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 4 )
    goto LABEL_70;
  v15[2].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)method;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15[2], (int64_t)method, v42, v43, v44, v45, v46, v47);
  v92[0] = 1;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(bool_TypeInfo, v92, v48, v49, v50);
  v57 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C21F74(this, v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 5 )
    goto LABEL_70;
  v15[2].monitor = v57;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15[2].monitor, (int64_t)v57, v51, v52, v53, v54, v55, v56);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22682/*"oncompletetarget"*/;
  if ( StringLiteral_22682/*"oncompletetarget"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C21F74(
                                                                   StringLiteral_22682/*"oncompletetarget"*/,
                                                                   v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_22682/*"oncompletetarget"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 6 )
    goto LABEL_70;
  v15[2].fields.parent = (struct UnityEngine_GameObject_o *)method;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15[2].fields, (int64_t)method, v58, v59, v60, v61, v62, v63);
  v64 = v2->fields.CS___8__locals1;
  if ( !v64 || (this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v64->fields.__4__this) == 0LL )
LABEL_69:
    sub_1C22094(this, method);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
  v71 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C21F74(this, v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 7 )
    goto LABEL_70;
  v15[2].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v71;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15[2].fields.CS___8__locals1, (int64_t)v71, v65, v66, v67, v68, v69, v70);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22680/*"oncomplete"*/;
  if ( StringLiteral_22680/*"oncomplete"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C21F74(
                                                                   StringLiteral_22680/*"oncomplete"*/,
                                                                   v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_22680/*"oncomplete"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 8 )
    goto LABEL_70;
  v15[3].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)method;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15[3], (int64_t)method, v72, v73, v74, v75, v76, v77);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_19337/*"endMoveFigure"*/;
  if ( !StringLiteral_19337/*"endMoveFigure"*/ )
  {
    method = 0LL;
    goto LABEL_57;
  }
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C21F74(
                                                                 StringLiteral_19337/*"endMoveFigure"*/,
                                                                 v15->klass->_1.element_class);
  if ( !this )
  {
LABEL_71:
    v91 = sub_1C220B8(this);
    sub_1C21F60(v91, 0LL);
  }
  method = (const MethodInfo *)StringLiteral_19337/*"endMoveFigure"*/;
LABEL_57:
  if ( LODWORD(v15->fields.CS___8__locals1) <= 9 )
    goto LABEL_70;
  v15[3].monitor = (void *)method;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15[3].monitor, (int64_t)method, v78, v79, v80, v81, v82, v83);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v84 = iTween__Hash((System_Object_array *)v15, 0LL);
  iTween__MoveFrom_61654536(parent, v84, 0LL);
LABEL_61:
  v85 = v2->fields.CS___8__locals1;
  if ( !v85 )
    goto LABEL_69;
  v86 = v85->fields.__4__this;
  if ( !v86 )
    goto LABEL_69;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v86->fields.myFsm;
  v86->fields.openBoundsFlg = 1;
  if ( !this )
    goto LABEL_69;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9818/*"OPEN"*/, 0LL);
  v88 = v2->fields.CS___8__locals1;
  if ( !v88 )
    goto LABEL_69;
  bondsIcons = v88->fields.bondsIcons;
  if ( !bondsIcons )
    goto LABEL_69;
  i = v88->fields.i;
  if ( (unsigned int)i >= bondsIcons->max_length )
LABEL_70:
    sub_1C2209C(this, method);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v88->fields.__4__this;
  if ( !this )
    goto LABEL_69;
  BattleResultBondsComponent__CheckFormalJoin((BattleResultBondsComponent_o *)this, bondsIcons->m_Items[i], v87);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BDF8E9 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDF8E9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  CommonUI__CreateServantCoinConfirmDialog((CommonUI_o *)Instance, 1, this->fields.coin, 0LL, 0LL);
}