void BattleResultBondsComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct BattleResultBondsComponent_StaticFields *static_fields; // x0
  int32_t v9; // w1
  struct BattleResultBondsComponent_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5974343 & 1) == 0 )
  {
    sub_2213A60(&BattleResultBondsComponent_TypeInfo);
    sub_2213A60(&StringLiteral_7388/*"GetNewSvt"*/);
    sub_2213A60(&StringLiteral_7375/*"GetExistSvt"*/);
    byte_5974343 = 1;
  }
  v7 = StringLiteral_7388/*"GetNewSvt"*/;
  static_fields = BattleResultBondsComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SVT_GAP_5 = 0x4316000043320000LL;
  *(_QWORD *)&static_fields->CONF_LABEL_MAX_WIDTH = 0x12000001D0LL;
  static_fields->GET_NEW_SVT_KEY = (struct System_String_o *)v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->GET_NEW_SVT_KEY, v7, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_7375/*"GetExistSvt"*/;
  v10 = BattleResultBondsComponent_TypeInfo->static_fields;
  v10->GET_EXIST_SVT_KEY = (struct System_String_o *)StringLiteral_7375/*"GetExistSvt"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->GET_EXIST_SVT_KEY, v9, v11, v12, v13, v14, v15, v16);
}


void BattleResultBondsComponent___ctor(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__c *v10; // x0
  System_Collections_Generic_List_object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  BattleResultBondsFigureComponent_o *v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_5974342 & 1) == 0 )
  {
    sub_2213A60(&BattleResultBondsFigureComponent_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_5974342 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.conflist = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.conflist, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo;
  this->fields.buddyPointInfoWindowHeight = 366;
  this->fields.tempSaveTimeScale = 1.0;
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v10);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
  this->fields.bondsList = (struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *)v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.bondsList, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (BattleResultBondsFigureComponent_o *)sub_2213CCC(BattleResultBondsFigureComponent_TypeInfo);
  BattleResultBondsFigureComponent___ctor(v18, 0);
  this->fields.bondsFigure = v18;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.bondsFigure, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleResultBondsComponent__CheckFormalJoin(
        BattleResultBondsComponent_o *this,
        BattleResultBondsIconComponent_o *collect,
        const MethodInfo *method)
{
  struct GetSvts_array *getJoinSvtList; // x8
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  struct GetSvts_array *v8; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x21
  unsigned int v10; // w26
  unsigned int max_length; // w9
  GetSvts_o *v12; // x8
  UserServantEntity_o *v13; // x24
  EventServantEntity_o *EventServant; // x22
  BattleResultBondsComponent___c_c *v15; // x0
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__62_0; // x23
  Il2CppObject *v18; // x25
  struct BattleResultBondsComponent___c_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  Il2CppObject *Master_object; // x25
  __int64 v27; // x24
  __int64 v28; // x23
  __int64 v29; // x25
  Il2CppObject *v30; // x8
  __int64 v31; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *v44; // x24
  Il2CppObject *v45; // x25
  __int64 v46; // x0
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_5974334 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    sub_2213A60(&GetSvtCoin___TypeInfo);
    sub_2213A60(&GetSvtCoin_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__);
    sub_2213A60(&Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__);
    sub_2213A60(&BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo);
    sub_2213A60(&BattleResultBondsComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_12966/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/);
    sub_2213A60(&StringLiteral_19451/*"dialogIgnoreTime"*/);
    byte_5974334 = 1;
  }
  getJoinSvtList = this->fields.getJoinSvtList;
  entity = 0;
  if ( getJoinSvtList && !this->fields.isWarboard )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___),
          (v8 = this->fields.getJoinSvtList) == 0) )
    {
LABEL_45:
      sub_2213CDC(Instance, v7);
    }
    v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v10 = 0;
    while ( 1 )
    {
      max_length = v8->max_length;
      if ( (int)v10 >= (int)max_length )
        break;
      if ( v10 >= max_length )
        goto LABEL_46;
      v12 = v8->m_Items[v10];
      if ( !v12 )
        goto LABEL_45;
      if ( v12->fields.isNew )
      {
        UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_19451/*"dialogIgnoreTime"*/, 1, 0);
        UnityEngine_PlayerPrefs__Save(0);
      }
      else
      {
        if ( !v9 )
          goto LABEL_45;
        Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                      v9,
                                      v12->fields.userSvtId,
                                      (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( Instance )
        {
          v13 = (UserServantEntity_o *)Instance;
          Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0);
          if ( !collect )
            goto LABEL_45;
          if ( (_DWORD)Instance == collect->fields.svtId )
          {
            EventServant = UserServantEntity__getEventServant(v13, 0);
            if ( EventServant
              || (Instance = (DataManager_o *)UserServantEntity__getEventServantIgnoreEnd(v13, 0),
                  (EventServant = (EventServantEntity_o *)Instance) != 0) )
            {
              v15 = BattleResultBondsComponent___c_TypeInfo;
              if ( !*(&BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo, v7);
                v15 = BattleResultBondsComponent___c_TypeInfo;
              }
              static_fields = v15->static_fields;
              _9__62_0 = static_fields->__9__62_0;
              if ( !_9__62_0 )
              {
                if ( !*(&v15->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(v15, v7);
                  static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
                }
                v18 = (Il2CppObject *)static_fields->__9;
                _9__62_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                System_Action___ctor(_9__62_0, v18, Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__, 0);
                v19 = BattleResultBondsComponent___c_TypeInfo->static_fields;
                v19->__9__62_0 = _9__62_0;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&v19->__9__62_0,
                  (int32_t)_9__62_0,
                  v20,
                  v21,
                  v22,
                  v23,
                  v24,
                  v25);
              }
              if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SvtCoinMaster___);
              Instance = (DataManager_o *)UserServantEntity__getSvtId(v13, 0);
              if ( !Master_object )
                goto LABEL_45;
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            &entity,
                                            (int32_t)Instance,
                                            (const MethodInfo_3F10B80 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_45;
                if ( SHIDWORD(entity[1].klass) >= 1 )
                {
                  v27 = sub_2213CCC(BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo);
                  BattleResultBondsComponent___c__DisplayClass62_0___ctor(
                    (BattleResultBondsComponent___c__DisplayClass62_0_o *)v27,
                    0);
                  v28 = sub_2213B20(GetSvtCoin___TypeInfo, 1);
                  v29 = sub_2213CCC(GetSvtCoin_TypeInfo);
                  GetSvtCoin___ctor((GetSvtCoin_o *)v29, 0);
                  v30 = entity;
                  if ( !entity )
                    goto LABEL_45;
                  if ( !v29 )
                    goto LABEL_45;
                  *(_DWORD *)(v29 + 16) = entity[1].klass;
                  *(int32x2_t *)(v29 + 20) = vrev64_s32(*(int32x2_t *)((char *)&v30[1].klass + 4));
                  if ( !v28 )
                    goto LABEL_45;
                  Instance = (DataManager_o *)sub_2213BB4(v29, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
                  if ( !Instance )
                  {
                    v46 = sub_2213D00(0, v31);
                    sub_2213BA0(v46, 0);
                  }
                  if ( !*(_DWORD *)(v28 + 24) )
LABEL_46:
                    sub_2213CE4(Instance);
                  *(_QWORD *)(v28 + 32) = v29;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 32), v29, v32, v33, v34, v35, v36, v37);
                  if ( !v27 )
                    goto LABEL_45;
                  *(_QWORD *)(v27 + 16) = v28;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v27 + 16), v28, v38, v39, v40, v41, v42, v43);
                  _9__62_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__62_0,
                    (Il2CppObject *)v27,
                    Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__,
                    0);
                }
              }
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
              v44 = LocalizationManager__Get((System_String_o *)StringLiteral_12966/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0);
              v45 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              Instance = (DataManager_o *)EventServantEntity__GetGetMessage(EventServant, 0);
              if ( !v45 )
                goto LABEL_45;
              CommonUI__OpenNotificationDialog(
                (CommonUI_o *)v45,
                v44,
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
                0,
                0.0,
                0,
                0);
            }
          }
        }
      }
      v8 = this->fields.getJoinSvtList;
      ++v10;
      if ( !v8 )
        goto LABEL_45;
    }
  }
}


void BattleResultBondsComponent__Close(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  struct BattleWindowComponent_o *multiDeckWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_597433C & 1) == 0 )
  {
    sub_2213A60(&Method_BattleResultBondsComponent_endClose__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    byte_597433C = 1;
  }
  if ( this->fields.isMultiDeck )
    multiDeckWindow = this->fields.multiDeckWindow;
  else
    multiDeckWindow = this->fields.window;
  v4 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v4, (Il2CppObject *)this, Method_BattleResultBondsComponent_endClose__, 0);
  if ( !multiDeckWindow )
    sub_2213CDC(v5, v6);
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))multiDeckWindow->klass->vtable._12_Close.methodPtr)(
    multiDeckWindow,
    v4,
    multiDeckWindow->klass->vtable._12_Close.method);
}


void BattleResultBondsComponent__CloseBondUpRoot(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *upRoot; // x0

  if ( (byte_5974341 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_5974341 = 1;
  }
  upRoot = this->fields.upRoot;
  if ( !upRoot
    || (UnityEngine_GameObject__SetActive(upRoot, 0, 0), (upRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_2213CDC(upRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)upRoot, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattleResultBondsComponent__CreateRewardEffect(
        BattleResultBondsComponent_o *this,
        AssetData_o *data,
        UISprite_o *targetIcon,
        System_String_o *effectName,
        const MethodInfo *method)
{
  BattleResultBondsComponent_o *v8; // x20
  __int64 v9; // x1
  Il2CppObject *Object_object__58532980; // x21
  BattleResultBondsComponent_o *v11; // x21
  BattleResultBondsComponent_o *v12; // x22
  BattleResultBondsComponent_o *v13; // x22
  BattleResultBondsComponent_o *v14; // x22
  int m_CancellationTokenSource; // w8
  BattleResultBondsComponent_o *v16; // x21
  __int64 v17; // x22

  v8 = this;
  if ( (byte_5974336 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
    sub_2213A60(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (BattleResultBondsComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974336 = 1;
  }
  if ( !data )
    goto LABEL_23;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              data,
                              effectName,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  this = (BattleResultBondsComponent_o *)UnityEngine_Object__Instantiate_object_(
                                           Object_object__58532980,
                                           (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_23;
  v11 = this;
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !targetIcon )
    goto LABEL_23;
  v12 = this;
  this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetIcon, 0);
  if ( !v12 )
    goto LABEL_23;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v12, (UnityEngine_Transform_o *)this, 0);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v11, 0);
  v13 = this;
  if ( !byte_5969AE0 )
  {
    this = (BattleResultBondsComponent_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v13 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v13,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v11, 0);
  v14 = this;
  if ( !byte_5969AE5 )
  {
    this = (BattleResultBondsComponent_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v14 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v14,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                           (UnityEngine_GameObject_o *)v11,
                                           (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !this )
    goto LABEL_23;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v16 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v17 >= m_CancellationTokenSource )
        sub_2213CE4(this);
      this = (BattleResultBondsComponent_o *)*((_QWORD *)&v16->fields.parentComp + v17);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0);
      m_CancellationTokenSource = (int)v16->fields.m_CancellationTokenSource;
      if ( (int)++v17 >= m_CancellationTokenSource )
        goto LABEL_21;
    }
LABEL_23:
    sub_2213CDC(this, data);
  }
LABEL_21:
  this = (BattleResultBondsComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v16,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void BattleResultBondsComponent__DeleteGetJoinSvtData(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleResultBondsComponent_c *v2; // x0

  if ( (byte_597432B & 1) == 0 )
  {
    sub_2213A60(&BattleResultBondsComponent_TypeInfo);
    byte_597432B = 1;
  }
  v2 = BattleResultBondsComponent_TypeInfo;
  if ( !*(&BattleResultBondsComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v1);
    v2 = BattleResultBondsComponent_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v2->static_fields->GET_EXIST_SVT_KEY, 0);
  UnityEngine_PlayerPrefs__DeleteKey(BattleResultBondsComponent_TypeInfo->static_fields->GET_NEW_SVT_KEY, 0);
}


void BattleResultBondsComponent__FinishUpdateValue(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v5; // x1
  _DWORD *BondsIconArray; // x0
  __int64 v7; // x1
  int v8; // w8
  _DWORD *v9; // x20
  __int64 v10; // x21
  SePlayer_o *MeterSePlayer; // x0

  if ( (byte_5974332 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9649/*"NEXT"*/);
    sub_2213A60(&iTween_TypeInfo);
    byte_5974332 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v3);
  iTween__Stop_75402912(gameObject, 0);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v5);
  if ( !BondsIconArray )
    goto LABEL_15;
  v8 = BondsIconArray[6];
  v9 = BondsIconArray;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v10 >= v8 )
        sub_2213CE4(BondsIconArray);
      BondsIconArray = *(_DWORD **)&v9[2 * v10 + 8];
      if ( !BondsIconArray )
        break;
      BattleResultBondsIconComponent__FinishUpdateValue((BattleResultBondsIconComponent_o *)BondsIconArray, 0);
      v8 = v9[6];
      if ( (int)++v10 >= v8 )
        goto LABEL_11;
    }
LABEL_15:
    sub_2213CDC(BondsIconArray, v7);
  }
LABEL_11:
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0);
  BondsIconArray = this->fields.myFsm;
  this->fields.bondsCountUp = 0;
  if ( !BondsIconArray )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_9649/*"NEXT"*/, 0);
}


BattleResultBondsIconComponent_array *BattleResultBondsComponent__GetBondsIconArray(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  _BOOL4 isMultiDeck; // w8
  MissionNaviTransitionBoardItem_o *p_bondsIconArray; // x19
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *bondsList; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  System_Object_array *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_597433E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
    byte_597433E = 1;
  }
  isMultiDeck = this->fields.isMultiDeck;
  memset(&v18, 0, sizeof(v18));
  if ( isMultiDeck )
  {
    p_bondsIconArray = (MissionNaviTransitionBoardItem_o *)&this->fields.bondsIconArray;
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.bondsIconArray, 0) )
    {
      v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v5,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
      bondsList = (System_Collections_Generic_List_object__o *)this->fields.bondsList;
      if ( !bondsList )
        goto LABEL_17;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v18,
        bondsList,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v18,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
      {
        if ( !v18.fields._current )
          sub_2213CDC(0, v8);
        BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                          (BattleResultBondsDeckPerWaveComponent_o *)v18.fields._current,
                                                                          0);
        if ( !v5 )
          sub_2213CDC(BondsIconArray, BondsIconArray);
        System_Collections_Generic_List_object___AddRange(
          v5,
          BondsIconArray,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v18,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
      if ( !v5 )
LABEL_17:
        sub_2213CDC(bondsList, v6);
      v10 = System_Collections_Generic_List_object___ToArray(
              v5,
              (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
      p_bondsIconArray->klass = (MissionNaviTransitionBoardItem_c *)v10;
      sub_2213A04(p_bondsIconArray, (int32_t)v10, v11, v12, v13, v14, v15, v16);
    }
  }
  else
  {
    p_bondsIconArray = (MissionNaviTransitionBoardItem_o *)&this->fields.collects;
  }
  return (BattleResultBondsIconComponent_array *)p_bondsIconArray->klass;
}


void BattleResultBondsComponent__Init(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *window; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  UnityEngine_Object_o *multiDeckWindow; // x20

  if ( (byte_597432C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597432C = 1;
  }
  window = this->fields.window;
  if ( !window )
    goto LABEL_16;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0);
  window = this->fields.window;
  if ( !window )
    goto LABEL_16;
  ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))window->klass->vtable._9_setClose.methodPtr)(
    window,
    window->klass->vtable._9_setClose.method);
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.effectUIList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  window = this->fields.confwindow;
  if ( !window )
    goto LABEL_16;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0);
  window = this->fields.confwindow;
  if ( !window )
    goto LABEL_16;
  ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))window->klass->vtable._9_setClose.methodPtr)(
    window,
    window->klass->vtable._9_setClose.method);
  window = (BattleWindowComponent_o *)this->fields.upRoot;
  if ( !window )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0);
  multiDeckWindow = (UnityEngine_Object_o *)this->fields.multiDeckWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(multiDeckWindow, 0, 0) )
  {
    window = this->fields.multiDeckWindow;
    if ( window )
    {
      BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0);
      window = this->fields.multiDeckWindow;
      if ( window )
      {
        ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))window->klass->vtable._9_setClose.methodPtr)(
          window,
          window->klass->vtable._9_setClose.method);
        goto LABEL_14;
      }
    }
LABEL_16:
    sub_2213CDC(window, method);
  }
LABEL_14:
  this->fields.isMultiDeck = 0;
  window = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !window )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0);
}


void BattleResultBondsComponent__InitResultData(
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x1
  UnityEngine_Object_c *v34; // x0
  UnityEngine_Object_o *multiDeckWindow; // x20
  int v36; // w8
  __int64 v37; // x1
  UnityEngine_Object_o *multiBondsPrefab; // x20
  __int64 v39; // x1
  UnityEngine_Object_o *multiBondsRoot; // x20

  v14 = inIsMultiDeck;
  if ( (byte_597432D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597432D = 1;
  }
  this->fields.oldCollections = oldCollects;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.oldCollections,
    (int32_t)oldCollects,
    (System_String_o *)inRewardInfos,
    (System_String_o *)resultAsset,
    baseFriendshipExp,
    (int32_t)getJoinSvts,
    inIsMultiDeck,
    (bool)method);
  this->fields.rewardInfos = inRewardInfos;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.rewardInfos,
    (int32_t)inRewardInfos,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.resultAssetData = resultAsset;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resultAssetData,
    (int32_t)resultAsset,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.getJoinSvtList = getJoinSvts;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.getJoinSvtList,
    (int32_t)getJoinSvts,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v34 = UnityEngine_Object_TypeInfo;
  this->fields.baseFriendshipExp = baseFriendshipExp;
  multiDeckWindow = (UnityEngine_Object_o *)this->fields.multiDeckWindow;
  this->fields.updateFlg = 0;
  v36 = *(&v34->_2.cctor_finished + 1);
  this->fields.isMultiDeck = v14;
  if ( !v36 )
    j_il2cpp_runtime_class_init_0(v34, v33);
  if ( UnityEngine_Object__op_Equality(multiDeckWindow, 0, 0) )
    goto LABEL_12;
  multiBondsPrefab = (UnityEngine_Object_o *)this->fields.multiBondsPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
  if ( UnityEngine_Object__op_Equality(multiBondsPrefab, 0, 0) )
    goto LABEL_12;
  multiBondsRoot = (UnityEngine_Object_o *)this->fields.multiBondsRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
  if ( UnityEngine_Object__op_Equality(multiBondsRoot, 0, 0) )
LABEL_12:
    this->fields.isMultiDeck = 0;
}


// local variable allocation has failed, the output may be wrong!
void BattleResultBondsComponent__NormalBondsInit(
        BattleResultBondsComponent_o *this,
        int32_t targetIndex,
        int32_t cnt,
        bool isNoFollower,
        BattleResultComponent_resultData_o *battleResult,
        bool isHideBuddyPointResult,
        const MethodInfo *method)
{
  BattleResultBondsComponent_o *v12; // x19
  __int64 v13; // x25
  __int64 v14; // x27
  struct BattleResultBondsIconComponent_array *collects; // x8
  unsigned int v16; // w28
  struct BattleResultBondsIconComponent_array *v17; // x8
  struct BattleResultBondsIconComponent_array *v18; // x8
  struct BattleResultBondsIconComponent_array *v19; // x8
  int v20; // w8
  float v21; // s8
  struct BattleResultBondsIconComponent_array *v22; // x8
  UnityEngine_Component_o *v23; // x8
  float v24; // s10
  __int64 v25; // x24
  float v26; // s9
  int v27; // w25
  struct BattleResultBondsIconComponent_array *v28; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x8
  UnityEngine_Object_o *bgFrame; // x20
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  v12 = this;
  if ( (byte_597433F & 1) == 0 )
  {
    sub_2213A60(&BattleResultBondsComponent_TypeInfo);
    this = (BattleResultBondsComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597433F = 1;
  }
  if ( targetIndex < cnt )
  {
    v13 = 0;
    v14 = 8LL * targetIndex + 32;
    do
    {
      collects = v12->fields.collects;
      if ( !collects )
        goto LABEL_51;
      v16 = targetIndex + v13;
      if ( (unsigned int)(targetIndex + v13) >= LODWORD(collects->max_length) )
        goto LABEL_52;
      this = *(BattleResultBondsComponent_o **)((char *)&collects->obj.klass + 8 * v13 + v14);
      if ( !this )
        goto LABEL_51;
      BattleResultBondsIconComponent__setServantData((BattleResultBondsIconComponent_o *)this, 0, 0, 0, 0, 0, 0, 0, 0);
      v17 = v12->fields.collects;
      if ( !v17 )
        goto LABEL_51;
      if ( v16 >= LODWORD(v17->max_length) )
        goto LABEL_52;
      this = *(BattleResultBondsComponent_o **)((char *)&v17->obj.klass + 8 * v13 + v14);
      if ( !this )
        goto LABEL_51;
      BattleResultBondsIconComponent__SetBuddyPointInfo((BattleResultBondsIconComponent_o *)this, 0, 0, 0);
      v18 = v12->fields.collects;
      if ( !v18 )
        goto LABEL_51;
      if ( v16 >= LODWORD(v18->max_length) )
        goto LABEL_52;
      this = *(BattleResultBondsComponent_o **)((char *)&v18->obj.klass + 8 * v13 + v14);
      if ( !this )
        goto LABEL_51;
      this = (BattleResultBondsComponent_o *)BattleResultBondsIconComponent__ChangeGauge(
                                               (BattleResultBondsIconComponent_o *)this,
                                               0.0,
                                               0);
      v19 = v12->fields.collects;
      if ( !v19 )
        goto LABEL_51;
      if ( v16 >= LODWORD(v19->max_length) )
        goto LABEL_52;
      this = *(BattleResultBondsComponent_o **)((char *)&v19->obj.klass + 8 * v13 + v14);
      if ( !this )
        goto LABEL_51;
      BattleResultBondsIconComponent__InitBuddyPointInfo((BattleResultBondsIconComponent_o *)this, 0);
    }
    while ( targetIndex - cnt + (_DWORD)++v13 );
  }
  this = (BattleResultBondsComponent_o *)BattleResultBondsComponent_TypeInfo;
  v20 = *(&BattleResultBondsComponent_TypeInfo->_2.cctor_finished + 1);
  if ( isNoFollower )
  {
    if ( !v20 )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, *(_QWORD *)&targetIndex);
      this = (BattleResultBondsComponent_o *)BattleResultBondsComponent_TypeInfo;
    }
    v21 = *((float *)&this->fields.bgFrame->klass + 1);
  }
  else
  {
    if ( !v20 )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, *(_QWORD *)&targetIndex);
      this = (BattleResultBondsComponent_o *)BattleResultBondsComponent_TypeInfo;
    }
    v22 = v12->fields.collects;
    if ( !v22 )
      goto LABEL_51;
    if ( LODWORD(v22->max_length) <= cnt )
LABEL_52:
      sub_2213CE4(this);
    v23 = (UnityEngine_Component_o *)v22->m_Items[cnt];
    if ( !v23 )
      goto LABEL_51;
    v21 = *(float *)&this->fields.bgFrame->klass;
    this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_gameObject(v23, 0);
    if ( !this )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  if ( cnt >= 1 )
  {
    v24 = 0.0;
    v25 = 0;
    v26 = vcvts_n_f32_s32(1 - cnt, 1u);
    v27 = 4;
    do
    {
      v28 = v12->fields.collects;
      if ( isNoFollower )
        v24 = (float)v27;
      if ( !v28 )
        goto LABEL_51;
      if ( (unsigned int)v25 >= LODWORD(v28->max_length) )
        goto LABEL_52;
      this = (BattleResultBondsComponent_o *)v28->m_Items[v25];
      if ( !this )
        goto LABEL_51;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v21 * v26) - v24, 0);
      v26 = v26 + 1.0;
      ++v25;
      v27 -= 2;
    }
    while ( cnt != (_DWORD)v25 );
  }
  if ( !battleResult )
    goto LABEL_51;
  buddyPointInfos = battleResult->fields.buddyPointInfos;
  if ( buddyPointInfos && buddyPointInfos->max_length && !isHideBuddyPointResult )
  {
    bgFrame = (UnityEngine_Object_o *)v12->fields.bgFrame;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&targetIndex);
    if ( UnityEngine_Object__op_Inequality(bgFrame, 0, 0) )
    {
      this = (BattleResultBondsComponent_o *)v12->fields.bgFrame;
      if ( !this )
        goto LABEL_51;
      UIWidget__set_height((UIWidget_o *)this, v12->fields.buddyPointInfoWindowHeight, 0);
    }
    this = (BattleResultBondsComponent_o *)v12->fields.window;
    if ( !this
      || (this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0)) == 0
      || (v32.fields.x = 0.0,
          v32.fields.z = 0.0,
          v32.fields.y = 13.0,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v32, 0),
          (this = (BattleResultBondsComponent_o *)v12->fields.window) == 0) )
    {
LABEL_51:
      sub_2213CDC(this, *(_QWORD *)&targetIndex);
    }
    ((void (__fastcall *)(BattleResultBondsComponent_o *, _QWORD))this->klass[1]._1.this_arg.data)(
      this,
      *(_QWORD *)&this->klass[1]._1.this_arg.bits);
  }
}


void BattleResultBondsComponent__Open(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  __int64 v4; // x1
  BattleResultBondsComponent___c_c *v5; // x8
  System_Object_array *v6; // x20
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__53_0; // x21
  Il2CppObject *v9; // x22
  struct BattleResultBondsComponent___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL4 isMultiDeck; // w9
  BattleWindowComponent_EndCall_c *v20; // x0
  struct BattleWindowComponent_o *v21; // x20
  __int64 *v22; // x8
  BattleWindowComponent_EndCall_o *v23; // x21

  if ( (byte_5974330 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_BattleResultBondsIconComponent___);
    sub_2213A60(&Method_BattleResultBondsComponent_OpenEnd__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    sub_2213A60(&System_Func_BattleResultBondsIconComponent__bool__TypeInfo);
    sub_2213A60(&Method_BattleResultBondsComponent___c__Open_b__53_0__);
    sub_2213A60(&BattleResultBondsComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_5652/*"END_OPEN"*/);
    sub_2213A60(&StringLiteral_12754/*"SKIP"*/);
    byte_5974330 = 1;
  }
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, method);
  v5 = BattleResultBondsComponent___c_TypeInfo;
  v6 = (System_Object_array *)BondsIconArray;
  if ( !*(&BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo, v4);
    v5 = BattleResultBondsComponent___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__53_0 = (System_Func_object__bool__o *)static_fields->__9__53_0;
  if ( !_9__53_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, v4);
      static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__53_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleResultBondsIconComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__53_0, v9, Method_BattleResultBondsComponent___c__Open_b__53_0__, 0);
    v10 = BattleResultBondsComponent___c_TypeInfo->static_fields;
    v10->__9__53_0 = (struct System_Func_BattleResultBondsIconComponent__bool__o *)_9__53_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__53_0, (int32_t)_9__53_0, v11, v12, v13, v14, v15, v16);
  }
  if ( BasicHelper__Any_object__58785420(
         v6,
         (System_Func_T__bool__o *)_9__53_0,
         (const MethodInfo_380FE8C *)Method_BasicHelper_Any_BattleResultBondsIconComponent___) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      isMultiDeck = this->fields.isMultiDeck;
      this->fields.openBoundsFlg = 0;
      this->fields.colIndex = 0;
      v20 = BattleWindowComponent_EndCall_TypeInfo;
      this->fields.bondsCountUp = 1;
      v21 = isMultiDeck ? this->fields.multiDeckWindow : this->fields.window;
      v23 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(v20);
      BattleWindowComponent_EndCall___ctor(
        v23,
        (Il2CppObject *)this,
        (intptr_t)Method_BattleResultBondsComponent_OpenEnd__,
        0);
      if ( v21 )
      {
        ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))v21->klass->vtable._10_Open.methodPtr)(
          v21,
          v23,
          v21->klass->vtable._10_Open.method);
        gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
        if ( gameObject )
        {
          v22 = &StringLiteral_5652/*"END_OPEN"*/;
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    sub_2213CDC(gameObject, v17);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !gameObject )
    goto LABEL_20;
  v22 = &StringLiteral_12754/*"SKIP"*/;
LABEL_19:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)*v22, 0);
}


void BattleResultBondsComponent__OpenEnd(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Object_array *v12; // x21
  __int64 v13; // x1
  int32_t v14; // w1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  BattleResultBondsIconComponent_array *v21; // x22
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int32_t v28; // w1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  BattleResultBondsIconComponent_array *v35; // x22
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  int32_t v42; // w1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  int32_t v49; // w1
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int32_t v56; // w1
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  int32_t v63; // w1
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  int32_t v70; // w1
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  BattleResultBondsIconComponent_array *v77; // x22
  __int64 v78; // x1
  System_Collections_Hashtable_o *v79; // x0
  const MethodInfo *v80; // x1
  int max_length; // w8
  BattleResultBondsIconComponent_array *v82; // x20
  __int64 v83; // x21
  _QWORD *v84; // x0
  __int64 v85; // x1
  System_Reflection_MethodBase_o *v86; // x20
  System_String_o *CommonSeName; // x0
  struct SePlayer_o *v88; // x0
  System_String_o *v89; // x2
  System_String_o *v90; // x3
  int32_t v91; // w4
  int32_t v92; // w5
  bool v93; // w6
  bool v94; // w7
  __int64 v95; // x0
  int v96; // [xsp+Ch] [xbp-44h] BYREF
  int v97; // [xsp+18h] [xbp-38h] BYREF
  int v98; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_5974331 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleResultBondsComponent_OpenEnd__);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&SeManager_TypeInfo);
    sub_2213A60(&StringLiteral_20622/*"from"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_23573/*"onupdate"*/);
    sub_2213A60(&StringLiteral_15808/*"UpdateValue"*/);
    sub_2213A60(&StringLiteral_25406/*"to"*/);
    sub_2213A60(&StringLiteral_23565/*"oncomplete"*/);
    sub_2213A60(&StringLiteral_7018/*"FinishUpdateValue"*/);
    sub_2213A60(&iTween_TypeInfo);
    byte_5974331 = 1;
  }
  if ( this->fields.bondsCountUp )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_2213B20(object___TypeInfo, 10);
    if ( !BondsIconArray )
      goto LABEL_51;
    v12 = (System_Object_array *)BondsIconArray;
    BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_20622/*"from"*/;
    if ( StringLiteral_20622/*"from"*/ )
    {
      BondsIconArray = (BattleResultBondsIconComponent_array *)sub_2213BB4(
                                                                 StringLiteral_20622/*"from"*/,
                                                                 v12->obj.klass->_1.element_class);
      if ( !BondsIconArray )
        goto LABEL_52;
    }
    if ( !LODWORD(v12->max_length) )
      goto LABEL_50;
    v14 = StringLiteral_20622/*"from"*/;
    v12->m_Items[0] = (Il2CppObject *)StringLiteral_20622/*"from"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)v12->m_Items, v14, v6, v7, v8, v9, v10, v11);
    v98 = 0;
    BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(qword_5984378, &v98);
    v21 = BondsIconArray;
    if ( BondsIconArray )
    {
      BondsIconArray = (BattleResultBondsIconComponent_array *)sub_2213BB4(
                                                                 BondsIconArray,
                                                                 v12->obj.klass->_1.element_class);
      if ( !BondsIconArray )
        goto LABEL_52;
    }
    if ( (v12->max_length & 0xFFFFFFFE) == 0 )
      goto LABEL_50;
    v12->m_Items[1] = &v21->obj;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->m_Items[1], (int32_t)v21, v15, v16, v17, v18, v19, v20);
    BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_25406/*"to"*/;
    if ( StringLiteral_25406/*"to"*/ )
    {
      BondsIconArray = (BattleResultBondsIconComponent_array *)sub_2213BB4(
                                                                 StringLiteral_25406/*"to"*/,
                                                                 v12->obj.klass->_1.element_class);
      if ( !BondsIconArray )
        goto LABEL_52;
    }
    if ( LODWORD(v12->max_length) <= 2 )
      goto LABEL_50;
    v28 = StringLiteral_25406/*"to"*/;
    v12->m_Items[2] = (Il2CppObject *)StringLiteral_25406/*"to"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->m_Items[2], v28, v22, v23, v24, v25, v26, v27);
    v97 = 1065353216;
    BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(qword_5984378, &v97);
    v35 = BondsIconArray;
    if ( BondsIconArray )
    {
      BondsIconArray = (BattleResultBondsIconComponent_array *)sub_2213BB4(
                                                                 BondsIconArray,
                                                                 v12->obj.klass->_1.element_class);
      if ( !BondsIconArray )
        goto LABEL_52;
    }
    if ( (v12->max_length & 0xFFFFFFFC) == 0 )
      goto LABEL_50;
    v12->m_Items[3] = &v35->obj;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->m_Items[3], (int32_t)v35, v29, v30, v31, v32, v33, v34);
    BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_23573/*"onupdate"*/;
    if ( StringLiteral_23573/*"onupdate"*/ )
    {
      BondsIconArray = (BattleResultBondsIconComponent_array *)sub_2213BB4(
                                                                 StringLiteral_23573/*"onupdate"*/,
                                                                 v12->obj.klass->_1.element_class);
      if ( !BondsIconArray )
        goto LABEL_52;
    }
    if ( LODWORD(v12->max_length) <= 4 )
      goto LABEL_50;
    v42 = StringLiteral_23573/*"onupdate"*/;
    v12->m_Items[4] = (Il2CppObject *)StringLiteral_23573/*"onupdate"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->m_Items[4], v42, v36, v37, v38, v39, v40, v41);
    BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_15808/*"UpdateValue"*/;
    if ( StringLiteral_15808/*"UpdateValue"*/ )
    {
      BondsIconArray = (BattleResultBondsIconComponent_array *)sub_2213BB4(
                                                                 StringLiteral_15808/*"UpdateValue"*/,
                                                                 v12->obj.klass->_1.element_class);
      if ( !BondsIconArray )
        goto LABEL_52;
    }
    if ( LODWORD(v12->max_length) <= 5 )
      goto LABEL_50;
    v49 = StringLiteral_15808/*"UpdateValue"*/;
    v12->m_Items[5] = (Il2CppObject *)StringLiteral_15808/*"UpdateValue"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->m_Items[5], v49, v43, v44, v45, v46, v47, v48);
    BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_23565/*"oncomplete"*/;
    if ( StringLiteral_23565/*"oncomplete"*/ )
    {
      BondsIconArray = (BattleResultBondsIconComponent_array *)sub_2213BB4(
                                                                 StringLiteral_23565/*"oncomplete"*/,
                                                                 v12->obj.klass->_1.element_class);
      if ( !BondsIconArray )
        goto LABEL_52;
    }
    if ( LODWORD(v12->max_length) <= 6 )
      goto LABEL_50;
    v56 = StringLiteral_23565/*"oncomplete"*/;
    v12->m_Items[6] = (Il2CppObject *)StringLiteral_23565/*"oncomplete"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->m_Items[6], v56, v50, v51, v52, v53, v54, v55);
    BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_7018/*"FinishUpdateValue"*/;
    if ( StringLiteral_7018/*"FinishUpdateValue"*/ )
    {
      BondsIconArray = (BattleResultBondsIconComponent_array *)sub_2213BB4(
                                                                 StringLiteral_7018/*"FinishUpdateValue"*/,
                                                                 v12->obj.klass->_1.element_class);
      if ( !BondsIconArray )
        goto LABEL_52;
    }
    if ( (v12->max_length & 0xFFFFFFF8) == 0 )
      goto LABEL_50;
    v63 = StringLiteral_7018/*"FinishUpdateValue"*/;
    v12->m_Items[7] = (Il2CppObject *)StringLiteral_7018/*"FinishUpdateValue"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->m_Items[7], v63, v57, v58, v59, v60, v61, v62);
    BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_25366/*"time"*/;
    if ( StringLiteral_25366/*"time"*/ )
    {
      BondsIconArray = (BattleResultBondsIconComponent_array *)sub_2213BB4(
                                                                 StringLiteral_25366/*"time"*/,
                                                                 v12->obj.klass->_1.element_class);
      if ( !BondsIconArray )
        goto LABEL_52;
    }
    if ( LODWORD(v12->max_length) <= 8 )
      goto LABEL_50;
    v70 = StringLiteral_25366/*"time"*/;
    v12->m_Items[8] = (Il2CppObject *)StringLiteral_25366/*"time"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->m_Items[8], v70, v64, v65, v66, v67, v68, v69);
    v96 = 1072064102;
    BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(qword_5984378, &v96);
    v77 = BondsIconArray;
    if ( BondsIconArray )
    {
      BondsIconArray = (BattleResultBondsIconComponent_array *)sub_2213BB4(
                                                                 BondsIconArray,
                                                                 v12->obj.klass->_1.element_class);
      if ( !BondsIconArray )
      {
LABEL_52:
        v95 = sub_2213D00(BondsIconArray, v13);
        sub_2213BA0(v95, 0);
      }
    }
    if ( LODWORD(v12->max_length) <= 9 )
LABEL_50:
      sub_2213CE4(BondsIconArray);
    v12->m_Items[9] = &v77->obj;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->m_Items[9], (int32_t)v77, v71, v72, v73, v74, v75, v76);
    if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v78);
    v79 = iTween__Hash(v12, 0);
    iTween__ValueTo(gameObject, v79, 0);
    BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v80);
    if ( !BondsIconArray )
LABEL_51:
      sub_2213CDC(BondsIconArray, v5);
    max_length = BondsIconArray->max_length;
    v82 = BondsIconArray;
    if ( max_length >= 1 )
    {
      v83 = 0;
      while ( (unsigned int)v83 < max_length )
      {
        BondsIconArray = (BattleResultBondsIconComponent_array *)v82->m_Items[v83];
        if ( !BondsIconArray )
          goto LABEL_51;
        BattleResultBondsIconComponent__StartUpdateBuddyPoint((BattleResultBondsIconComponent_o *)BondsIconArray, 0);
        max_length = v82->max_length;
        if ( (int)++v83 >= max_length )
          goto LABEL_43;
      }
      goto LABEL_50;
    }
LABEL_43:
    if ( this->fields.updateFlg )
    {
      v84 = Method_BattleResultBondsComponent_OpenEnd__;
      if ( (*((_BYTE *)Method_BattleResultBondsComponent_OpenEnd__ + 83) & 2) != 0 )
        v84 = (_QWORD *)sub_2213A78(Method_BattleResultBondsComponent_OpenEnd__);
      v86 = (System_Reflection_MethodBase_o *)sub_2213A44(v84, v84[4]);
      if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v85);
      CommonSeName = SeManager__GetCommonSeName(15, 0);
      v88 = OverwriteAssetSoundName__PlaySe(v86, CommonSeName, 0, 0);
      this->fields.MeterSePlayer = v88;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.MeterSePlayer,
        (int32_t)v88,
        v89,
        v90,
        v91,
        v92,
        v93,
        v94);
    }
  }
}


void BattleResultBondsComponent__SetMultiBondsResultData(
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
  QuestPhaseEntity_o *questphase_ent; // x0
  __int64 v20; // x1
  struct BattleInfoData_o *battle_info; // x23
  struct DeckData_array **p_selectPartyDecks; // x8
  struct DeckData_array *v23; // x25
  struct BattleInfoData_o *v24; // x9
  il2cpp_array_size_t maxWave; // x26
  unsigned __int64 v26; // x8
  BattleUserServantData_array *userSvt; // x24
  unsigned int max_length; // w9
  signed __int64 v29; // x29
  System_Collections_Generic_List_object__o *v30; // x20
  __int64 v31; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  System_Object_array *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  const MethodInfo *v40; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+28h] [xbp-78h] BYREF

  if ( (byte_597432E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
    byte_597432E = 1;
  }
  memset(&v41, 0, sizeof(v41));
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
    goto LABEL_27;
  questphase_ent = battleData->fields.questphase_ent;
  if ( !questphase_ent )
    goto LABEL_27;
  battle_info = battleData->fields.battle_info;
  questphase_ent = (QuestPhaseEntity_o *)QuestPhaseEntity__IsWaveSetupSwitchParty(questphase_ent, 0);
  if ( ((unsigned __int8)questphase_ent & 1) != 0 )
  {
    if ( !battle_info )
      goto LABEL_27;
    p_selectPartyDecks = &battle_info->fields.selectPartyDecks;
  }
  else
  {
    if ( !battle_info )
      goto LABEL_27;
    p_selectPartyDecks = &battle_info->fields.waveMyDecks;
  }
  v23 = *p_selectPartyDecks;
  if ( !*p_selectPartyDecks )
    goto LABEL_27;
  v24 = battleData->fields.battle_info;
  if ( !v24 )
    goto LABEL_27;
  maxWave = v23->max_length;
  if ( (int)maxWave >= 1 )
  {
    v26 = 0;
    userSvt = v24->fields.userSvt;
    max_length = v23->max_length;
    do
    {
      if ( v26 >= max_length )
        sub_2213CE4(questphase_ent);
      v29 = v26 + 1;
      BattleResultBondsComponent__SetResultDataLocal(
        this,
        v23->m_Items[v26],
        oldCollects,
        followerType,
        userSvt,
        battleResult,
        isHideBuddyPointResult,
        battleData,
        v26 + 1,
        maxWave,
        v40);
      max_length = v23->max_length;
      v26 = v29;
    }
    while ( v29 < (int)max_length );
  }
  v30 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  questphase_ent = (QuestPhaseEntity_o *)this->fields.bondsList;
  if ( !questphase_ent )
    goto LABEL_27;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)questphase_ent,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
  {
    if ( !v41.fields._current )
      sub_2213CDC(0, v31);
    BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                      (BattleResultBondsDeckPerWaveComponent_o *)v41.fields._current,
                                                                      0);
    if ( !v30 )
      sub_2213CDC(BondsIconArray, BondsIconArray);
    System_Collections_Generic_List_object___AddRange(
      v30,
      BondsIconArray,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
  if ( !v30 )
LABEL_27:
    sub_2213CDC(questphase_ent, v20);
  v33 = System_Collections_Generic_List_object___ToArray(
          v30,
          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
  this->fields.bondsIconArray = (struct BattleResultBondsIconComponent_array *)v33;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.bondsIconArray,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
}


void BattleResultBondsComponent__SetResultDataLocal(
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
  int v16; // w8
  int64_t Instance; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x29
  Il2CppObject *v20; // x26
  Il2CppObject *multiBondsPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v23; // x6
  System_Collections_Generic_IEnumerable_TSource__o *rewardInfos; // x20
  BattleResultBondsComponent___c_c *v25; // x0
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__49_0; // x21
  Il2CppObject *v28; // x22
  struct BattleResultBondsComponent___c_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Collections_Generic_List_TSource__o *v37; // x0
  __int64 v38; // x1
  System_Collections_Generic_List_object__o *v39; // x20
  BattleResultBondsComponent_c *v40; // x0
  __int64 v41; // x1
  BattleResultBondsComponent_c *v42; // x0
  __int64 v43; // x1
  Il2CppObject *String_83398240; // x21
  System_Collections_Generic_IEnumerable_T__o *v45; // x0
  BattleResultBondsComponent_c *v46; // x0
  System_String_o *GET_NEW_SVT_KEY; // x21
  __int64 v48; // x1
  System_Object_array *v49; // x20
  System_String_o *v50; // x0
  BattleResultBondsComponent___c_c *v51; // x0
  System_Collections_Generic_IEnumerable_TSource__o *getJoinSvts; // x20
  struct BattleResultBondsComponent___c_StaticFields *v53; // x8
  System_Func_object__bool__o *_9__49_1; // x21
  Il2CppObject *v55; // x22
  struct BattleResultBondsComponent___c_StaticFields *v56; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x0
  System_Collections_Generic_List_TSource__o *v64; // x0
  __int64 v65; // x1
  System_Collections_Generic_List_object__o *v66; // x20
  BattleResultBondsComponent_c *v67; // x0
  __int64 v68; // x1
  BattleResultBondsComponent_c *v69; // x0
  __int64 v70; // x1
  Il2CppObject *v71; // x21
  System_Collections_Generic_IEnumerable_T__o *v72; // x0
  BattleResultBondsComponent_c *v73; // x0
  System_String_o *GET_EXIST_SVT_KEY; // x21
  __int64 v75; // x1
  System_Object_array *v76; // x20
  System_String_o *v77; // x0
  struct BattleDeckServantData_array *svts; // x27
  int max_length; // w8
  unsigned int v80; // w19
  int32_t v81; // w21
  unsigned int v82; // w24
  BattleResultBondsComponent_o *v83; // x21
  BattleDeckServantData_o *v84; // x22
  BattleResultBondsComponent___c__DisplayClass49_0_o *v85; // x28
  int64_t userSvtId; // x2
  BattleResultBondsComponent_o *SvtId; // x0
  const MethodInfo *v88; // x3
  ServantEntity_o *v89; // x27
  int32_t v90; // w26
  int v91; // w8
  int32_t v92; // w25
  unsigned int v93; // w29
  BattleUserServantData_o *v94; // x20
  __int128 v95; // q1
  const MethodInfo *v96; // x5
  int32_t afterLimitCount; // w20
  unsigned int v98; // w21
  BattleResultBondsIconComponent_o *v99; // x20
  int32_t IconLimitCount; // w0
  int afterIconLimitCount; // w8
  bool v102; // zf
  bool v103; // zf
  System_Object_array *buddyPointInfos; // x22
  BattleBuddyPointInfo_o *v105; // x29
  System_Func_object__bool__o *v106; // x29
  UserServantCollectionEntity_o *v107; // x24
  BattleResultBondsIconComponent_o *v108; // x22
  struct BattleResultBondsIconComponent_array *v109; // x8
  bool v110; // cf
  bool v111; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  bool v113; // w20
  bool updateFlg; // w20
  UnityEngine_Component_o *v115; // x0
  struct BattleResultBondsIconComponent_array *v116; // x8
  UnityEngine_Component_o *v117; // x19
  System_String_o *v118; // x2
  System_String_o *v119; // x3
  int32_t v120; // w4
  int32_t v121; // w5
  bool v122; // w6
  bool v123; // w7
  __int64 v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  __int64 v127; // x8
  int32_t cnt; // [xsp+1Ch] [xbp-114h]
  ServantLimitImageMaster_o *svtLimitImageMaster; // [xsp+20h] [xbp-110h]
  UserServantCollectionMaster_o *MasterData_object; // [xsp+30h] [xbp-100h]
  struct BattleDeckServantData_array *v132; // [xsp+38h] [xbp-F8h]
  Il2CppObject *v133; // [xsp+40h] [xbp-F0h]
  Il2CppObject *v134; // [xsp+48h] [xbp-E8h]
  int32_t Type; // [xsp+5Ch] [xbp-D4h]
  BattleResultBondsDeckPerWaveComponent_o *Object_object; // [xsp+60h] [xbp-D0h]
  BattleData_o *battleDataa; // [xsp+68h] [xbp-C8h]
  UserServantCollectionEntity_o *userSvtCol; // [xsp+70h] [xbp-C0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v141; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v142; // [xsp+A0h] [xbp-90h]
  Il2CppObject *entity; // [xsp+C8h] [xbp-68h] BYREF

  if ( (byte_597432F & 1) == 0 )
  {
    sub_2213A60(&Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    sub_2213A60(&Method_BasicHelper_Find_BattleBuddyPointInfo___);
    sub_2213A60(&BattleResultBondsComponent_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_GetSvts___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_GetSvts___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
    sub_2213A60(&System_Func_GetSvts__bool__TypeInfo);
    sub_2213A60(&System_Func_BattleBuddyPointInfo__bool__TypeInfo);
    sub_2213A60(&System_Func_QuestRewardInfo__bool__TypeInfo);
    sub_2213A60(&Method_JsonManager_DeserializeArray_GetSvts___);
    sub_2213A60(&Method_JsonManager_DeserializeArray_QuestRewardInfo___);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_GetSvts__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GetSvts__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_GetSvts__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__);
    sub_2213A60(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__);
    sub_2213A60(&Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__);
    sub_2213A60(&BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo);
    sub_2213A60(&BattleResultBondsComponent___c_TypeInfo);
    byte_597432F = 1;
  }
  entity = 0;
  Type = Follower__getType(followerType, 0);
  if ( Type )
    v16 = 5;
  else
    v16 = 6;
  cnt = v16;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_159;
  MasterData_object = (UserServantCollectionMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_159;
  v19 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_159;
  v20 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this->fields.isMultiDeck )
  {
    Object_object = 0;
LABEL_16:
    svtLimitImageMaster = 0;
    goto LABEL_17;
  }
  Instance = (int64_t)this->fields.multiBondsRoot;
  if ( !Instance )
    goto LABEL_159;
  multiBondsPrefab = (Il2CppObject *)this->fields.multiBondsPrefab;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  Object_object = (BattleResultBondsDeckPerWaveComponent_o *)BaseMonoBehaviour__createObject_object_(
                                                               (BaseMonoBehaviour_o *)this,
                                                               multiBondsPrefab,
                                                               transform,
                                                               0,
                                                               (const MethodInfo_380F544 *)Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
  if ( !this->fields.isMultiDeck )
    goto LABEL_16;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
  svtLimitImageMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
LABEL_17:
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  Instance = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)battleData, 0, 0);
  if ( (Instance & 1) != 0 )
  {
    if ( !battleData )
      goto LABEL_159;
    Instance = BattleData__IsWarBoard(battleData, 0);
    this->fields.isWarboard = Instance & 1;
    if ( (Instance & 1) != 0 )
    {
      if ( !battleResult )
        goto LABEL_159;
      rewardInfos = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.rewardInfos;
      v25 = BattleResultBondsComponent___c_TypeInfo;
      if ( !*(&BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo, v18);
        v25 = BattleResultBondsComponent___c_TypeInfo;
      }
      static_fields = v25->static_fields;
      _9__49_0 = (System_Func_object__bool__o *)static_fields->__9__49_0;
      if ( !_9__49_0 )
      {
        if ( !*(&v25->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v25, v18);
          static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
        }
        v28 = (Il2CppObject *)static_fields->__9;
        _9__49_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_QuestRewardInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__49_0,
          v28,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__,
          0);
        v29 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        v29->__9__49_0 = (struct System_Func_QuestRewardInfo__bool__o *)_9__49_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v29->__9__49_0,
          (int32_t)_9__49_0,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
      }
      v36 = System_Linq_Enumerable__Where_object_(
              rewardInfos,
              (System_Func_TSource__bool__o *)_9__49_0,
              (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
      v37 = System_Linq_Enumerable__ToList_object_(
              v36,
              (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
      if ( v37 )
      {
        v39 = (System_Collections_Generic_List_object__o *)v37;
        if ( v37->fields._size >= 1 )
        {
          v40 = BattleResultBondsComponent_TypeInfo;
          if ( !*(&BattleResultBondsComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v38);
            v40 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v40->static_fields->GET_NEW_SVT_KEY, 0) )
          {
            v42 = BattleResultBondsComponent_TypeInfo;
            if ( !*(&BattleResultBondsComponent_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v41);
              v42 = BattleResultBondsComponent_TypeInfo;
            }
            String_83398240 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_83398240(
                                                v42->static_fields->GET_NEW_SVT_KEY,
                                                0);
            if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v43);
            v45 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_object_(
                                                                   String_83398240,
                                                                   (const MethodInfo_38D3A34 *)Method_JsonManager_DeserializeArray_QuestRewardInfo___);
            System_Collections_Generic_List_object___AddRange(
              v39,
              v45,
              (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
          }
          v46 = BattleResultBondsComponent_TypeInfo;
          if ( !*(&BattleResultBondsComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v41);
            v46 = BattleResultBondsComponent_TypeInfo;
          }
          GET_NEW_SVT_KEY = v46->static_fields->GET_NEW_SVT_KEY;
          v49 = System_Collections_Generic_List_object___ToArray(
                  v39,
                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
          if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v48);
          v50 = JsonManager__toJson(&v49->obj, 0, 0, 0);
          UnityEngine_PlayerPrefs__SetString(GET_NEW_SVT_KEY, v50, 0);
        }
      }
      v51 = BattleResultBondsComponent___c_TypeInfo;
      getJoinSvts = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.getJoinSvts;
      if ( !*(&BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo, v38);
        v51 = BattleResultBondsComponent___c_TypeInfo;
      }
      v53 = v51->static_fields;
      _9__49_1 = (System_Func_object__bool__o *)v53->__9__49_1;
      if ( !_9__49_1 )
      {
        if ( !*(&v51->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v51, v38);
          v53 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        }
        v55 = (Il2CppObject *)v53->__9;
        _9__49_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GetSvts__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__49_1,
          v55,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__,
          0);
        v56 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        v56->__9__49_1 = (struct System_Func_GetSvts__bool__o *)_9__49_1;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v56->__9__49_1,
          (int32_t)_9__49_1,
          v57,
          v58,
          v59,
          v60,
          v61,
          v62);
      }
      v63 = System_Linq_Enumerable__Where_object_(
              getJoinSvts,
              (System_Func_TSource__bool__o *)_9__49_1,
              (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_GetSvts___);
      v64 = System_Linq_Enumerable__ToList_object_(
              v63,
              (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_GetSvts___);
      if ( v64 )
      {
        v66 = (System_Collections_Generic_List_object__o *)v64;
        if ( v64->fields._size >= 1 )
        {
          v67 = BattleResultBondsComponent_TypeInfo;
          if ( !*(&BattleResultBondsComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v65);
            v67 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v67->static_fields->GET_EXIST_SVT_KEY, 0) )
          {
            v69 = BattleResultBondsComponent_TypeInfo;
            if ( !*(&BattleResultBondsComponent_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v68);
              v69 = BattleResultBondsComponent_TypeInfo;
            }
            v71 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_83398240(v69->static_fields->GET_EXIST_SVT_KEY, 0);
            if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v70);
            v72 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_object_(
                                                                   v71,
                                                                   (const MethodInfo_38D3A34 *)Method_JsonManager_DeserializeArray_GetSvts___);
            System_Collections_Generic_List_object___AddRange(
              v66,
              v72,
              (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_GetSvts__AddRange__);
          }
          v73 = BattleResultBondsComponent_TypeInfo;
          if ( !*(&BattleResultBondsComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v68);
            v73 = BattleResultBondsComponent_TypeInfo;
          }
          GET_EXIST_SVT_KEY = v73->static_fields->GET_EXIST_SVT_KEY;
          v76 = System_Collections_Generic_List_object___ToArray(
                  v66,
                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_GetSvts__ToArray__);
          if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v75);
          v77 = JsonManager__toJson(&v76->obj, 0, 0, 0);
          UnityEngine_PlayerPrefs__SetString(GET_EXIST_SVT_KEY, v77, 0);
        }
      }
      UnityEngine_PlayerPrefs__Save(0);
    }
  }
  if ( !myDeck )
    goto LABEL_159;
  svts = myDeck->fields.svts;
  if ( !svts )
    goto LABEL_159;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v80 = 0;
    v81 = 0;
    v133 = v20;
    v134 = v19;
    v132 = svts;
    battleDataa = battleData;
    while ( 1 )
    {
      if ( v80 >= max_length )
LABEL_160:
        sub_2213CE4(Instance);
      v82 = v81;
      v83 = this;
      v84 = svts->m_Items[v80];
      v85 = (BattleResultBondsComponent___c__DisplayClass49_0_o *)sub_2213CCC(BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo);
      BattleResultBondsComponent___c__DisplayClass49_0___ctor(v85, 0);
      if ( !v84 )
        goto LABEL_159;
      if ( !v85 )
        goto LABEL_159;
      userSvtId = v84->fields.userSvtId;
      v85->fields.userSvtId = userSvtId;
      if ( !v19 )
        goto LABEL_159;
      Instance = DataMasterBase_object__object__long___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                   &entity,
                   userSvtId,
                   (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( (Instance & 1) != 0 )
        break;
      if ( !battleData )
        goto LABEL_159;
      Instance = BattleData__IsInterruptionQuest(battleData, 0);
      this = v83;
      if ( (Instance & 1) != 0 )
      {
        v98 = v82;
        if ( this->fields.isMultiDeck )
        {
          Instance = (int64_t)Object_object;
          if ( !Object_object )
            goto LABEL_159;
          Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, 0);
          v99 = (BattleResultBondsIconComponent_o *)Instance;
          if ( !Instance )
            goto LABEL_159;
        }
        else
        {
          v116 = this->fields.collects;
          if ( !v116 )
            goto LABEL_159;
          if ( v82 >= LODWORD(v116->max_length) )
            goto LABEL_160;
          v99 = v116->m_Items[v82];
          if ( !v99 )
            goto LABEL_159;
        }
        BattleResultBondsIconComponent__setServantData(v99, 0, 0, 0, 0, 0, 0, 0, 0);
        v115 = (UnityEngine_Component_o *)v99;
LABEL_137:
        Instance = (int64_t)UnityEngine_Component__get_gameObject(v115, 0);
        if ( !Instance )
          goto LABEL_159;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
LABEL_139:
        v81 = v98 + 1;
        goto LABEL_140;
      }
      v81 = v82;
LABEL_140:
      max_length = svts->max_length;
      if ( (int)++v80 >= max_length )
        goto LABEL_143;
    }
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_159;
    SvtId = (BattleResultBondsComponent_o *)UserServantEntity__getSvtId((UserServantEntity_o *)entity, 0);
    Instance = (int64_t)BattleResultBondsComponent__getServantCollection(SvtId, oldCollects, (int32_t)SvtId, v88);
    userSvtCol = (UserServantCollectionEntity_o *)Instance;
    if ( !entity )
      goto LABEL_159;
    Instance = UserServantEntity__GetServantId((UserServantEntity_o *)entity, -1, 0);
    if ( !v20 )
      goto LABEL_159;
    Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)v20,
                          Instance,
                          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !entity )
      goto LABEL_159;
    v89 = (ServantEntity_o *)Instance;
    Instance = UserServantEntity__getIconLimitCount((UserServantEntity_o *)entity, 0, 0);
    if ( !entity )
      goto LABEL_159;
    v90 = Instance;
    Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)entity, 0, 0);
    if ( !usrSvts )
      goto LABEL_159;
    v91 = usrSvts->max_length;
    v92 = Instance;
    if ( v91 < 1 )
    {
LABEL_89:
      afterLimitCount = -1;
    }
    else
    {
      v93 = 0;
      while ( 1 )
      {
        if ( v93 >= v91 )
          goto LABEL_160;
        v94 = usrSvts->m_Items[v93];
        if ( !v94 )
          goto LABEL_159;
        v95 = *(_OWORD *)&v94->fields.id.fields.fakeValue;
        *(_OWORD *)&v142.fields.currentCryptoKey = *(_OWORD *)&v94->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v142.fields.fakeValue = v95;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
        v141 = v142;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v141, 0);
        if ( Instance == v85->fields.userSvtId )
          break;
        v91 = usrSvts->max_length;
        if ( (int)++v93 >= v91 )
          goto LABEL_89;
      }
      if ( v83->fields.isMultiDeck )
        BattleResultBondsComponent__UpdateAfterLimitCount(
          (BattleResultBondsComponent_o *)Instance,
          battleDataa,
          v94,
          v84,
          svtLimitImageMaster,
          v96);
      IconLimitCount = UserServantEntity__getIconLimitCount((UserServantEntity_o *)v94, 0, 0);
      afterIconLimitCount = v94->fields.afterIconLimitCount;
      v102 = afterIconLimitCount < 0 || IconLimitCount == afterIconLimitCount;
      v90 = v102 ? IconLimitCount : v94->fields.afterIconLimitCount;
      Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v94, 0, 0);
      afterLimitCount = v94->fields.afterLimitCount;
      v103 = afterLimitCount < 0 || (_DWORD)Instance == afterLimitCount;
      v92 = v103 ? Instance : afterLimitCount;
    }
    if ( !battleResult )
      goto LABEL_159;
    buddyPointInfos = (System_Object_array *)battleResult->fields.buddyPointInfos;
    if ( buddyPointInfos )
    {
      v105 = 0;
      if ( buddyPointInfos->max_length && !isHideBuddyPointResult )
      {
        v106 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuddyPointInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v106,
          (Il2CppObject *)v85,
          Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__,
          0);
        Instance = (int64_t)BasicHelper__Find_object_(
                              buddyPointInfos,
                              (System_Func_T__bool__o *)v106,
                              (const MethodInfo_3810A1C *)Method_BasicHelper_Find_BattleBuddyPointInfo___);
        v105 = (BattleBuddyPointInfo_o *)Instance;
      }
    }
    else
    {
      v105 = 0;
    }
    this = v83;
    if ( v83->fields.isMultiDeck )
    {
      Instance = (int64_t)Object_object;
      if ( !Object_object )
        goto LABEL_159;
      v98 = v82;
      Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, 0);
      v107 = userSvtCol;
      v108 = (BattleResultBondsIconComponent_o *)Instance;
      if ( !Instance )
        goto LABEL_159;
    }
    else
    {
      v109 = v83->fields.collects;
      if ( !v109 )
        goto LABEL_159;
      v98 = v82;
      v110 = v82 >= LODWORD(v109->max_length);
      v107 = userSvtCol;
      if ( v110 )
        goto LABEL_160;
      v108 = v109->m_Items[v98];
      if ( !v108 )
        goto LABEL_159;
    }
    BattleResultBondsIconComponent__setServantData(
      v108,
      v107,
      (UserServantEntity_o *)entity,
      v90,
      v92,
      this->fields.baseFriendshipExp,
      Type == 0,
      afterLimitCount,
      0);
    BattleResultBondsIconComponent__SetBuddyPointInfo(v108, v105, battleResult->fields.eventId, 0);
    if ( !v89 )
      goto LABEL_159;
    v111 = ServantEntity__checkIsHeroineSvt(v89, 0);
    v20 = v133;
    v19 = v134;
    battleData = battleDataa;
    svts = v132;
    if ( !v111 )
      goto LABEL_128;
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_159;
    if ( !UserServantEntity__IsAddFriendShipHeroine((UserServantEntity_o *)entity, 0) )
    {
      updateFlg = this->fields.updateFlg;
      this->fields.updateFlg = updateFlg | BattleResultBondsIconComponent__setNextServantData(v108, v107, 0);
      BattleResultBondsIconComponent__SetIsNoFriendship(v108, 0);
    }
    else
    {
LABEL_128:
      Instance = (int64_t)MasterData_object;
      if ( !MasterData_object )
        goto LABEL_159;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                           MasterData_object,
                           v108->fields.userId,
                           v108->fields.svtId,
                           0);
      v113 = this->fields.updateFlg;
      this->fields.updateFlg = v113 | BattleResultBondsIconComponent__setNextServantData(v108, EntityDefinitely, 0);
    }
    BattleResultBondsIconComponent__ChangeGauge(v108, 0.0, 0);
    BattleResultBondsIconComponent__InitBuddyPointInfo(v108, 0);
    if ( this->fields.isMultiDeck )
    {
      v115 = (UnityEngine_Component_o *)v108;
      goto LABEL_137;
    }
    goto LABEL_139;
  }
  v81 = 0;
LABEL_143:
  if ( !this->fields.isMultiDeck )
  {
    BattleResultBondsComponent__NormalBondsInit(this, v81, cnt, Type == 0, battleResult, isHideBuddyPointResult, v23);
    return;
  }
  if ( !battleData )
    goto LABEL_159;
  Instance = (int64_t)battleData->fields.questphase_ent;
  if ( !Instance )
    goto LABEL_159;
  Instance = QuestPhaseEntity__IsWaveSetupSwitchParty((QuestPhaseEntity_o *)Instance, 0);
  if ( (Instance & 1) != 0 )
  {
    v117 = (UnityEngine_Component_o *)Object_object;
    if ( !Object_object )
      goto LABEL_159;
    BattleResultBondsDeckPerWaveComponent__SetPartyName(Object_object, currentWave, 0);
  }
  else
  {
    v117 = (UnityEngine_Component_o *)Object_object;
    if ( !Object_object )
      goto LABEL_159;
    BattleResultBondsDeckPerWaveComponent__SetWaveCount(Object_object, currentWave, maxWave, 0);
  }
  Instance = (int64_t)UnityEngine_Component__get_gameObject(v117, 0);
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  BattleResultBondsDeckPerWaveComponent__RepositionIcons((BattleResultBondsDeckPerWaveComponent_o *)v117, 0);
  Instance = (int64_t)this->fields.multiBondsRoot;
  if ( !Instance
    || ((*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
          Instance,
          *(_QWORD *)(*(_QWORD *)Instance + 448LL)),
        (Instance = (int64_t)this->fields.bondsList) == 0)
    || (v124 = *(_QWORD *)(Instance + 16),
        v125 = Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__,
        ++*(_DWORD *)(Instance + 28),
        !v124) )
  {
LABEL_159:
    sub_2213CDC(Instance, v18);
  }
  v126 = *(int *)(Instance + 24);
  if ( (unsigned int)v126 >= *(_DWORD *)(v124 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)Object_object,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
  }
  else
  {
    v127 = v124 + 8 * v126;
    *(_DWORD *)(Instance + 24) = v126 + 1;
    *(_QWORD *)(v127 + 32) = Object_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v127 + 32),
      (int32_t)Object_object,
      v118,
      v119,
      v120,
      v121,
      v122,
      v123);
  }
}


void BattleResultBondsComponent__SkipUpdateValue(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  const MethodInfo *v4; // x1
  int max_length; // w8
  BattleResultBondsIconComponent_array *v6; // x20
  __int64 v7; // x21

  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, method);
  if ( !BondsIconArray )
    goto LABEL_8;
  max_length = BondsIconArray->max_length;
  v6 = BondsIconArray;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v7 >= max_length )
        sub_2213CE4(BondsIconArray);
      BondsIconArray = (BattleResultBondsIconComponent_array *)v6->m_Items[v7];
      if ( !BondsIconArray )
        break;
      BattleResultBondsIconComponent__FinishBuddyPointInfoUpdate((BattleResultBondsIconComponent_o *)BondsIconArray, 0);
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_7;
    }
LABEL_8:
    sub_2213CDC(BondsIconArray, v4);
  }
LABEL_7:
  BattleResultBondsComponent__FinishUpdateValue(this, v4);
}


void BattleResultBondsComponent__UpdateAfterLimitCount(
        BattleResultBondsComponent_o *this,
        BattleData_o *battleData,
        BattleUserServantData_o *userSvtData,
        BattleDeckServantData_o *deckSvtData,
        ServantLimitImageMaster_o *svtLimitImageMaster,
        const MethodInfo *method)
{
  int32_t *p_afterLimitCount; // x23
  struct BattleEntity_o *battle_ent; // x8
  int32_t FollowerType; // w0
  int32_t Type; // w0
  __int64 v14; // x1
  __int64 v15; // x21
  __int64 v16; // x22
  int32_t v17; // w21
  __int64 v18; // x1
  __int64 v19; // x21
  __int64 v20; // x22
  int32_t v21; // w21
  int32_t IconLimitCount; // w0
  int ServantImageLimitSealAfter; // w0
  __int64 v24; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v25; // x8
  __int64 v26; // x20
  __int64 v27; // x21
  int v28; // w10
  __int64 v29; // x1
  int32_t v30; // w21
  int32_t v31; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_5974340 & 1) == 0 )
  {
    sub_2213A60(&ImageLimitCount_TypeInfo);
    this = (BattleResultBondsComponent_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5974340 = 1;
  }
  if ( !userSvtData )
    goto LABEL_26;
  if ( userSvtData->fields.afterLimitCount && userSvtData->fields.afterIconLimitCount )
    return;
  p_afterLimitCount = &userSvtData->fields.afterLimitCount;
  *(_QWORD *)&userSvtData->fields.afterLimitCount = -1;
  if ( !battleData )
    goto LABEL_26;
  battle_ent = battleData->fields.battle_ent;
  if ( !battle_ent || !deckSvtData )
    goto LABEL_26;
  FollowerType = BattleDeckServantData__GetFollowerType(deckSvtData, battle_ent->fields.followerType, 0);
  Type = Follower__getType(FollowerType, 0);
  if ( Follower__IsNpc(Type, 0) || SLODWORD(deckSvtData->fields.dropInfos) > 0 )
    return;
  v15 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v32.fields.currentCryptoKey = v15;
  *(_QWORD *)&v32.fields.fakeValue = v16;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v32, 0);
  this = (BattleResultBondsComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                           userSvtData->fields.limitCount,
                                           0);
  if ( !svtLimitImageMaster )
LABEL_26:
    sub_2213CDC(this, battleData);
  if ( ServantLimitImageMaster__IsServantLimitCountSeal(svtLimitImageMaster, v17, (int32_t)this, 0) )
  {
    v19 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
    v20 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    *(_QWORD *)&v33.fields.currentCryptoKey = v19;
    *(_QWORD *)&v33.fields.fakeValue = v20;
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v33, 0);
    IconLimitCount = UserServantEntity__getIconLimitCount((UserServantEntity_o *)userSvtData, 0, 0);
    ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                   svtLimitImageMaster,
                                   v21,
                                   IconLimitCount,
                                   0);
    if ( ServantImageLimitSealAfter >= 11 )
    {
      *p_afterLimitCount = ServantImageLimitSealAfter;
    }
    else
    {
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
      v26 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
      v27 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
      v28 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1);
      userSvtData->fields.afterLimitCount = 2 * ServantImageLimitSealAfter;
      if ( !v28 )
        j_il2cpp_runtime_class_init_0(v25, v24);
      *(_QWORD *)&v34.fields.currentCryptoKey = v26;
      *(_QWORD *)&v34.fields.fakeValue = v27;
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v34, 0);
      v31 = *p_afterLimitCount;
      if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v29);
      ServantImageLimitSealAfter = ImageLimitCount__GetImageLimitCount(v30, v31, 0);
    }
    userSvtData->fields.afterIconLimitCount = ServantImageLimitSealAfter;
  }
}


void BattleResultBondsComponent__UpdateValue(BattleResultBondsComponent_o *this, float val, const MethodInfo *method)
{
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  __int64 v5; // x1
  int max_length; // w8
  BattleResultBondsIconComponent_array *v7; // x19
  __int64 v8; // x20

  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, method);
  if ( !BondsIconArray )
    goto LABEL_8;
  max_length = BondsIconArray->max_length;
  v7 = BondsIconArray;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= max_length )
        sub_2213CE4(BondsIconArray);
      BondsIconArray = (BattleResultBondsIconComponent_array *)v7->m_Items[v8];
      if ( !BondsIconArray )
        break;
      BondsIconArray = (BattleResultBondsIconComponent_array *)BattleResultBondsIconComponent__ChangeGauge(
                                                                 (BattleResultBondsIconComponent_o *)BondsIconArray,
                                                                 val,
                                                                 0);
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_8:
    sub_2213CDC(BondsIconArray, v5);
  }
}


void BattleResultBondsComponent___checkShow_b__67_0(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  struct BattleFriendshipRewardInfo_array *showList; // x8
  __int64 showIndex; // x9
  BattleResultBondsComponent_o *v4; // x19
  BattleFriendshipRewardInfo_o *v5; // x8

  showList = this->fields.showList;
  if ( !showList )
    goto LABEL_14;
  showIndex = this->fields.showIndex;
  v4 = this;
  if ( (unsigned int)showIndex >= LODWORD(showList->max_length) )
    sub_2213CE4(this);
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
    v5->fields.isNew,
    0);
  this = (BattleResultBondsComponent_o *)v4->fields.parentComp;
  ++v4->fields.showIndex;
  if ( !this )
    goto LABEL_14;
  BattleResultComponent__setTouch((BattleResultComponent_o *)this, 0, 0);
  this = (BattleResultBondsComponent_o *)v4->fields.parentComp;
  if ( !this )
    goto LABEL_14;
  BattleResultComponent__setBg((BattleResultComponent_o *)this, 0, 0);
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
  this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
        (this = (BattleResultBondsComponent_o *)v4->fields.upRoot) == 0) )
  {
LABEL_14:
    sub_2213CDC(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void BattleResultBondsComponent__addConfObject(
        BattleResultBondsComponent_o *this,
        System_String_o *text,
        float posY,
        int32_t iconImageId,
        bool isCoin,
        bool isSaintGraph,
        int32_t type,
        bool isFaceIcon,
        int64_t userSvtId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *confPrefab; // x1
  UnityEngine_Transform_o *confRoot; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v22; // x1
  UnityEngine_GameObject_o *v23; // x20
  __int64 v24; // x1
  Il2CppObject *ComponentInChildren_object; // x22
  __int64 v26; // x1
  BattleResultBondsComponent_c *v27; // x0
  __int64 v28; // x1
  Il2CppObject *v29; // x27
  bool v30; // w0
  __int64 v31; // x1
  const MethodInfo *v32; // x4
  int v33; // w8
  UISprite_o *v34; // x0
  int32_t v35; // w1
  UnityEngine_Transform_o *transform; // x24
  float v37; // s8
  float y; // s9
  float v39; // s1
  float v40; // s0
  __int64 v41; // x1
  Il2CppObject *v42; // x24
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  __int64 v49; // x1
  UnityEngine_Transform_o *v50; // x21
  float v51; // s8
  float v52; // s9
  float v53; // s1
  float v54; // s0
  intptr_t m_CachedPtr; // x8
  _QWORD *v56; // x9
  __int64 klass_low; // x10
  intptr_t v58; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974335 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BattleResultBondsComponent_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_ServantFaceIconComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18006/*"bit_reward_shine02"*/);
    byte_5974335 = 1;
  }
  confPrefab = this->fields.confPrefab;
  confRoot = this->fields.confRoot;
  entity = 0;
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, confPrefab, confRoot, 0, 0);
  if ( !Object )
    goto LABEL_68;
  v23 = Object;
  Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Object, 0);
  if ( !Object )
    goto LABEL_68;
  v60.fields.z = 0.0;
  v60.fields.y = -112.0 - posY;
  v60.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v60, 0);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 v23,
                                 (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  Object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                         (UnityEngine_Object_o *)ComponentInChildren_object,
                                         0,
                                         0);
  if ( ((unsigned __int8)Object & 1) != 0 )
  {
    if ( type == 18 || isCoin )
    {
      if ( !ComponentInChildren_object )
        goto LABEL_68;
      UILabel__set_overflowMethod((UILabel_o *)ComponentInChildren_object, 2, 0);
      UILabel__set_text((UILabel_o *)ComponentInChildren_object, text, 0);
      v27 = BattleResultBondsComponent_TypeInfo;
      if ( !*(&BattleResultBondsComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v26);
        v27 = BattleResultBondsComponent_TypeInfo;
      }
      UILabel__SetCondensedScale(
        (UILabel_o *)ComponentInChildren_object,
        v27->static_fields->CONF_LABEL_MAX_WIDTH - 36,
        0,
        0);
    }
    else
    {
      if ( isSaintGraph )
      {
        if ( !ComponentInChildren_object )
          goto LABEL_68;
        UIWidget__set_height((UIWidget_o *)ComponentInChildren_object, 100, 0);
      }
      else if ( !ComponentInChildren_object )
      {
        goto LABEL_68;
      }
      UILabel__set_text((UILabel_o *)ComponentInChildren_object, text, 0);
    }
  }
  v29 = UnityEngine_GameObject__GetComponentInChildren_object_(
          v23,
          (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  v30 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0, 0);
  if ( iconImageId < 0 || !v30 )
    goto LABEL_42;
  if ( type == 18 )
  {
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v31);
    v34 = (UISprite_o *)v29;
    v35 = 9;
  }
  else
  {
    if ( type != 2 )
      goto LABEL_36;
    v33 = *(&AtlasManager_TypeInfo->_2.cctor_finished + 1);
    if ( isCoin )
    {
      if ( !v33 )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v31);
      AtlasManager__SetCoin((UISprite_o *)v29, iconImageId, 0);
      goto LABEL_36;
    }
    if ( !v33 )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v31);
    v34 = (UISprite_o *)v29;
    v35 = iconImageId;
  }
  AtlasManager__SetItem(v34, v35, 0);
LABEL_36:
  BattleResultBondsComponent__CreateRewardEffect(
    this,
    this->fields.resultAssetData,
    (UISprite_o *)v29,
    (System_String_o *)StringLiteral_18006/*"bit_reward_shine02"*/,
    v32);
  if ( !ComponentInChildren_object )
    goto LABEL_68;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ComponentInChildren_object, 0);
  Object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)ComponentInChildren_object,
                                         0);
  if ( !Object )
    goto LABEL_68;
  LODWORD(v37) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Object, 0);
  Object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)ComponentInChildren_object,
                                         0);
  if ( !Object )
    goto LABEL_68;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Object, 0);
  y = localPosition.fields.y;
  Object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)ComponentInChildren_object,
                                         0);
  if ( !Object )
    goto LABEL_68;
  v62 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Object, 0);
  if ( !transform )
    goto LABEL_68;
  v39 = y;
  v40 = v37 + 36.0;
  UnityEngine_Transform__set_localPosition(transform, v62, 0);
LABEL_42:
  v42 = UnityEngine_GameObject__GetComponentInChildren_object_(
          v23,
          (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_ServantFaceIconComponent___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
  Object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v42, 0, 0);
  if ( ((unsigned __int8)Object & 1) != 0 )
  {
    if ( !v42 )
      goto LABEL_68;
    Object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v42, 0);
    if ( !Object )
      goto LABEL_68;
    UnityEngine_GameObject__SetActive(Object, 0, 0);
    if ( userSvtId >= 1 && isFaceIcon )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
      Object = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Object )
        goto LABEL_68;
      if ( DataMasterBase_object__object__long___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Object,
             &entity,
             userSvtId,
             (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
      {
        Object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v42, 0);
        if ( !Object )
          goto LABEL_68;
        UnityEngine_GameObject__SetActive(Object, 1, 0);
        ServantFaceIconComponent__Set_48049524(
          (ServantFaceIconComponent_o *)v42,
          (UserServantEntity_o *)entity,
          0,
          0,
          1,
          0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
        Object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)ComponentInChildren_object,
                                               0,
                                               0);
        if ( ((unsigned __int8)Object & 1) != 0 )
        {
          if ( ComponentInChildren_object )
          {
            v50 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ComponentInChildren_object, 0);
            Object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)ComponentInChildren_object,
                                                   0);
            if ( Object )
            {
              LODWORD(v51) = (unsigned int)UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)Object,
                                             0);
              Object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)ComponentInChildren_object,
                                                     0);
              if ( Object )
              {
                v63 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Object, 0);
                v52 = v63.fields.y;
                Object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)ComponentInChildren_object,
                                                       0);
                if ( Object )
                {
                  v64 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Object, 0);
                  if ( v50 )
                  {
                    v53 = v52;
                    v54 = v51 + 36.0;
                    UnityEngine_Transform__set_localPosition(v50, v64, 0);
                    goto LABEL_63;
                  }
                }
              }
            }
          }
LABEL_68:
          sub_2213CDC(Object, v22);
        }
      }
    }
  }
LABEL_63:
  Object = (UnityEngine_GameObject_o *)this->fields.conflist;
  if ( !Object )
    goto LABEL_68;
  m_CachedPtr = Object->fields.m_CachedPtr;
  v56 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(Object[1].klass);
  if ( !m_CachedPtr )
    goto LABEL_68;
  klass_low = SLODWORD(Object[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Object,
      (Il2CppObject *)v23,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
  }
  else
  {
    v58 = m_CachedPtr + 8 * klass_low;
    LODWORD(Object[1].klass) = klass_low + 1;
    *(_QWORD *)(v58 + 32) = v23;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v58 + 32), (int32_t)v23, v43, v44, v45, v46, v47, v48);
  }
}


void BattleResultBondsComponent__checkBondsUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x22
  PlayMakerFSM_o *myFsm; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x1
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int colIndex; // w8
  __int64 v21; // x9
  int v22; // w10
  __int64 *v23; // x8
  __int64 v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 *v31; // x21
  __int64 v32; // x1
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_GameObject__o *conflist; // x8
  int32_t size; // w2
  int v36; // w9
  __int64 v37; // x1
  UnityEngine_Object_o *levelUpSimpleAnim; // x22
  PlayMakerFSM_c *klass; // x8
  PlayMakerFSM_o *v40; // x22
  __int64 v41; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v43; // x0
  UnityEngine_Object_o *levelUpAnim; // x22
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  __int64 v51; // x9
  __int64 v52; // x8
  __int64 v53; // x9
  struct BattleResultBondsIconComponent_o *v54; // x1
  __int64 v55; // x1
  UnityEngine_Object_o *figureMoveRoot; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  UnityEngine_GameObject_o *v64; // x0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t svtId; // w21
  struct BattleResultBondsIconComponent_o *v73; // x8
  struct BattleResultBondsIconComponent_o *v74; // x8
  BattleResultBondsFigureComponent_o *bondsFigure; // x22
  UnityEngine_GameObject_o *v76; // x23
  int32_t svtLimit; // w19
  System_Action_o *v78; // x24
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+20h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_5974333 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    sub_2213A60(&BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo);
    sub_2213A60(&Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__);
    sub_2213A60(&BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo);
    sub_2213A60(&StringLiteral_17990/*"bit_result_levelup01"*/);
    sub_2213A60(&StringLiteral_3639/*"CLOSE"*/);
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    sub_2213A60(&StringLiteral_3642/*"CLOSE_BOND_UP_ROOT"*/);
    byte_5974333 = 1;
  }
  entity = 0;
  memset(&v80, 0, sizeof(v80));
  v3 = sub_2213CCC(BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo);
  BattleResultBondsComponent___c__DisplayClass61_0___ctor((BattleResultBondsComponent___c__DisplayClass61_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  *(_QWORD *)(v3 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v12);
  *(_QWORD *)(v3 + 24) = BondsIconArray;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)BondsIconArray, v14, v15, v16, v17, v18, v19);
  colIndex = this->fields.colIndex;
  v21 = *(_QWORD *)(v3 + 24);
  *(_DWORD *)(v3 + 32) = colIndex;
  if ( !v21 )
    goto LABEL_10;
  while ( 1 )
  {
    v22 = *(_DWORD *)(v21 + 24);
    if ( colIndex >= v22 )
    {
      if ( this->fields.openBoundsFlg )
      {
        myFsm = this->fields.myFsm;
        if ( this->fields.isMultiDeck )
        {
          if ( !myFsm )
            goto LABEL_10;
          v23 = &StringLiteral_3642/*"CLOSE_BOND_UP_ROOT"*/;
        }
        else
        {
          if ( !myFsm )
            goto LABEL_10;
          v23 = &StringLiteral_5657/*"END_PROC"*/;
        }
      }
      else
      {
        myFsm = this->fields.myFsm;
        if ( !myFsm )
          goto LABEL_10;
        v23 = &StringLiteral_3639/*"CLOSE"*/;
      }
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v23, 0);
      return;
    }
    this->fields.colIndex = colIndex;
    if ( colIndex >= (unsigned int)v22 )
      goto LABEL_74;
    myFsm = *(PlayMakerFSM_o **)(v21 + 8LL * colIndex + 32);
    if ( !myFsm )
      goto LABEL_10;
    myFsm = (PlayMakerFSM_o *)BattleResultBondsIconComponent__isChangeRank((BattleResultBondsIconComponent_o *)myFsm, 0);
    if ( ((unsigned __int8)myFsm & 1) != 0 )
      break;
    v21 = *(_QWORD *)(v3 + 24);
    colIndex = *(_DWORD *)(v3 + 32) + 1;
    *(_DWORD *)(v3 + 32) = colIndex;
    if ( !v21 )
      goto LABEL_10;
  }
  v24 = sub_2213CCC(BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo);
  BattleResultBondsComponent___c__DisplayClass61_1___ctor((BattleResultBondsComponent___c__DisplayClass61_1_o *)v24, 0);
  if ( !v24 )
    goto LABEL_10;
  *(_QWORD *)(v24 + 24) = v3;
  v31 = (__int64 *)(v24 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 24), v3, v25, v26, v27, v28, v29, v30);
  myFsm = (PlayMakerFSM_o *)this->fields.conflist;
  if ( !myFsm )
    goto LABEL_10;
  if ( SLODWORD(myFsm->fields.m_CancellationTokenSource) < 1 )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v79,
    (System_Collections_Generic_List_object__o *)myFsm,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v80 = v79;
  v79.fields._list = 0;
  *(_QWORD *)&v79.fields._index = &v80;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v80,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v80.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
    UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v80,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  conflist = this->fields.conflist;
  if ( !conflist )
    goto LABEL_10;
  size = conflist->fields._size;
  v36 = conflist->fields._version + 1;
  conflist->fields._size = 0;
  conflist->fields._version = v36;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)conflist->fields._items, 0, size, 0);
LABEL_26:
  myFsm = (PlayMakerFSM_o *)this->fields.upRoot;
  if ( !myFsm )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 1, 0);
  levelUpSimpleAnim = (UnityEngine_Object_o *)this->fields.levelUpSimpleAnim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
  if ( UnityEngine_Object__op_Inequality(levelUpSimpleAnim, 0, 0) )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.levelUpSimpleAnim;
    if ( myFsm )
    {
      myFsm = (PlayMakerFSM_o *)SimpleAnimation__get_Item(
                                  (SimpleAnimation_o *)myFsm,
                                  (System_String_o *)StringLiteral_17990/*"bit_result_levelup01"*/,
                                  0);
      if ( myFsm )
      {
        klass = myFsm->klass;
        v40 = myFsm;
        v41 = *(unsigned __int16 *)&myFsm->klass->_2.rank;
        if ( *(_WORD *)&myFsm->klass->_2.rank )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v41;
            p_offset += 2;
            if ( !v41 )
              goto LABEL_36;
          }
          v43 = (__int64)(&klass->vtable._4_OnBeforeSerialize + *(_DWORD *)p_offset);
        }
        else
        {
LABEL_36:
          v43 = sub_224BC3C(myFsm, SimpleAnimation_State_TypeInfo, 4);
        }
        (*(void (__fastcall **)(PlayMakerFSM_o *, _QWORD, double))v43)(v40, *(_QWORD *)(v43 + 8), 0.0);
        myFsm = (PlayMakerFSM_o *)this->fields.levelUpSimpleAnim;
        if ( myFsm )
        {
          myFsm = (PlayMakerFSM_o *)SimpleAnimation__Play_78552168(
                                      (SimpleAnimation_o *)myFsm,
                                      (System_String_o *)StringLiteral_17990/*"bit_result_levelup01"*/,
                                      0);
          goto LABEL_52;
        }
      }
    }
    goto LABEL_10;
  }
  levelUpAnim = (UnityEngine_Object_o *)this->fields.levelUpAnim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  myFsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Inequality(levelUpAnim, 0, 0);
  if ( ((unsigned __int8)myFsm & 1) != 0 )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.levelUpAnim;
    if ( !myFsm )
      goto LABEL_10;
    myFsm = (PlayMakerFSM_o *)UnityEngine_Animation__get_Item(
                                (UnityEngine_Animation_o *)myFsm,
                                (System_String_o *)StringLiteral_17990/*"bit_result_levelup01"*/,
                                0);
    if ( !myFsm )
      goto LABEL_10;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)myFsm, 0.0, 0);
    myFsm = (PlayMakerFSM_o *)this->fields.levelUpAnim;
    if ( !myFsm )
      goto LABEL_10;
    myFsm = (PlayMakerFSM_o *)UnityEngine_Animation__Play_83078544(
                                (UnityEngine_Animation_o *)myFsm,
                                (System_String_o *)StringLiteral_17990/*"bit_result_levelup01"*/,
                                0);
  }
LABEL_52:
  v51 = *v31;
  if ( !*v31 )
    goto LABEL_10;
  v52 = *(_QWORD *)(v51 + 24);
  if ( !v52 )
    goto LABEL_10;
  v53 = *(int *)(v51 + 32);
  if ( (unsigned int)v53 >= *(_DWORD *)(v52 + 24) )
LABEL_74:
    sub_2213CE4(myFsm);
  v54 = *(struct BattleResultBondsIconComponent_o **)(v52 + 8 * v53 + 32);
  this->fields.openCollect = v54;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.openCollect, (int32_t)v54, v45, v46, v47, v48, v49, v50);
  figureMoveRoot = (UnityEngine_Object_o *)this->fields.figureMoveRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v55);
  if ( UnityEngine_Object__op_Inequality(figureMoveRoot, 0, 0) )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.figureMoveRoot;
    if ( !myFsm )
      goto LABEL_10;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myFsm, 0);
    *(_QWORD *)(v24 + 16) = gameObject;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 16), (int32_t)gameObject, v58, v59, v60, v61, v62, v63);
    myFsm = *(PlayMakerFSM_o **)(v24 + 16);
    if ( !myFsm )
      goto LABEL_10;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 0, 0);
  }
  else
  {
    myFsm = (PlayMakerFSM_o *)this->fields.figureRoot;
    if ( !myFsm )
      goto LABEL_10;
    v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myFsm, 0);
    *(_QWORD *)(v24 + 16) = v64;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 16), (int32_t)v64, v65, v66, v67, v68, v69, v70);
  }
  openCollect = this->fields.openCollect;
  if ( !openCollect )
    goto LABEL_10;
  svtId = openCollect->fields.svtId;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
  myFsm = (PlayMakerFSM_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  v73 = this->fields.openCollect;
  if ( !v73 || !myFsm )
    goto LABEL_10;
  myFsm = (PlayMakerFSM_o *)DataMasterBase_object__object__long___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)myFsm,
                              &entity,
                              v73->fields.userSvtId,
                              (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)myFsm & 1) != 0 )
  {
    myFsm = (PlayMakerFSM_o *)entity;
    if ( !entity )
      goto LABEL_10;
    myFsm = (PlayMakerFSM_o *)UserServantEntity__GetServantId((UserServantEntity_o *)entity, -1, 0);
    svtId = (int)myFsm;
  }
  v74 = this->fields.openCollect;
  if ( !v74
    || (bondsFigure = this->fields.bondsFigure,
        v76 = *(UnityEngine_GameObject_o **)(v24 + 16),
        svtLimit = v74->fields.svtLimit,
        v78 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v78,
          (Il2CppObject *)v24,
          Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__,
          0),
        !bondsFigure) )
  {
LABEL_10:
    sub_2213CDC(myFsm, v5);
  }
  BattleResultBondsFigureComponent__SetupFigure(bondsFigure, v76, svtId, svtLimit, 7, 0, 51, v78, 0);
}


void BattleResultBondsComponent__checkShow(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  struct BattleFriendshipRewardInfo_array *showList; // x8
  il2cpp_array_size_t max_length; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  SummonAssetManager_o *parentComp; // x0

  if ( (byte_5974339 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleResultBondsComponent__checkShow_b__67_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_5974339 = 1;
  }
  showList = this->fields.showList;
  if ( showList )
  {
    max_length = showList->max_length;
    if ( max_length )
    {
      if ( this->fields.showIndex < (int)max_length )
      {
        this->fields.tempSaveTimeScale = UnityEngine_Time__get_timeScale(0);
        UnityEngine_Time__set_timeScale(1.0, 0);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
        v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v6, (Il2CppObject *)this, Method_BattleResultBondsComponent__checkShow_b__67_0__, 0);
        if ( Instance )
        {
          SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v6, 0);
          return;
        }
        goto LABEL_21;
      }
      parentComp = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      if ( !parentComp )
        goto LABEL_21;
      SummonAssetManager__UnloadSummonAssets(parentComp, 0);
    }
  }
  parentComp = (SummonAssetManager_o *)this->fields.parentComp;
  if ( !parentComp )
    goto LABEL_21;
  BattleResultComponent__ResetPlayScreenTouch((BattleResultComponent_o *)parentComp, 0);
  parentComp = (SummonAssetManager_o *)this->fields.parentComp;
  if ( !parentComp )
    goto LABEL_21;
  BattleResultComponent__setTouch((BattleResultComponent_o *)parentComp, 1, 0);
  parentComp = (SummonAssetManager_o *)this->fields.parentComp;
  if ( !parentComp )
    goto LABEL_21;
  BattleResultComponent__setBg((BattleResultComponent_o *)parentComp, 1, 0);
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
  parentComp = (SummonAssetManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parentComp, 0);
  if ( !parentComp
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)parentComp, 1, 0),
        (parentComp = (SummonAssetManager_o *)this->fields.upRoot) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)parentComp, 1, 0),
        (parentComp = (SummonAssetManager_o *)this->fields.parentComp) == 0) )
  {
LABEL_21:
    sub_2213CDC(parentComp, method);
  }
  BattleResultComponent__showServantRewardAction((BattleResultComponent_o *)parentComp, 0, 1, 0, 0);
}


void BattleResultBondsComponent__closeBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  void *effectUIList; // x0
  int32_t v5; // w20
  int32_t v6; // w2
  int v7; // w8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct BattleWindowComponent_o *confwindow; // x20
  BattleWindowComponent_EndCall_o *v11; // x21

  if ( (byte_597433A & 1) == 0 )
  {
    sub_2213A60(&Method_BattleResultBondsComponent_closeBondUp__);
    sub_2213A60(&Method_BattleResultBondsComponent_endCloseBondUp__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UIUnityRenderer__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
    byte_597433A = 1;
  }
  UnityEngine_Time__set_timeScale(this->fields.tempSaveTimeScale, 0);
  effectUIList = this->fields.effectUIList;
  if ( !effectUIList )
    goto LABEL_10;
  if ( *((int *)effectUIList + 6) >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = *((_DWORD *)effectUIList + 6);
      if ( v5 >= v6 )
        break;
      effectUIList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)effectUIList,
                       v5,
                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
      if ( effectUIList )
      {
        effectUIList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectUIList, 0);
        if ( effectUIList )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectUIList, 0, 0);
          effectUIList = this->fields.effectUIList;
          ++v5;
          if ( effectUIList )
            continue;
        }
      }
      goto LABEL_10;
    }
    v7 = *((_DWORD *)effectUIList + 7) + 1;
    *((_DWORD *)effectUIList + 6) = 0;
    *((_DWORD *)effectUIList + 7) = v7;
    if ( v6 >= 1 )
      System_Array__Clear(*((System_Array_o **)effectUIList + 2), 0, v6, 0);
  }
  v8 = Method_BattleResultBondsComponent_closeBondUp__;
  if ( (*((_BYTE *)Method_BattleResultBondsComponent_closeBondUp__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_2213A78(Method_BattleResultBondsComponent_closeBondUp__);
  v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
  effectUIList = this->fields.parentComp;
  if ( !effectUIList
    || (BattleResultComponent__setTouch((BattleResultComponent_o *)effectUIList, 0, 0),
        (effectUIList = this->fields.bondsFigure) == 0)
    || (BattleResultBondsFigureComponent__DestroyFigure((BattleResultBondsFigureComponent_o *)effectUIList, 0),
        confwindow = this->fields.confwindow,
        v11 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v11,
          (Il2CppObject *)this,
          Method_BattleResultBondsComponent_endCloseBondUp__,
          0),
        !confwindow) )
  {
LABEL_10:
    sub_2213CDC(effectUIList, v3);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))confwindow->klass->vtable._12_Close.methodPtr)(
    confwindow,
    v11,
    confwindow->klass->vtable._12_Close.method);
}


void BattleResultBondsComponent__endClose(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  BattleResultBondsIconComponent_o *BondsIconArray; // x0
  __int64 v12; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x21
  BattleResultBondsIconComponent_o *v14; // x20
  __int64 v15; // x22

  if ( (byte_597433D & 1) == 0 )
  {
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_597433D = 1;
  }
  this->fields.resultAssetData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.resultAssetData, 0, v2, v3, v4, v5, v6, v7);
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v9);
  if ( OptionManager__isSavedMemoryMode(0) )
  {
    BondsIconArray = (BattleResultBondsIconComponent_o *)BattleResultBondsComponent__GetBondsIconArray(this, v10);
    if ( !BondsIconArray )
      goto LABEL_15;
    m_CancellationTokenSource = BondsIconArray->fields.m_CancellationTokenSource;
    v14 = BondsIconArray;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v15 >= LODWORD(v14->fields.m_CancellationTokenSource) )
          sub_2213CE4(BondsIconArray);
        BondsIconArray = (BattleResultBondsIconComponent_o *)*((_QWORD *)&v14->fields.root + v15);
        if ( !BondsIconArray )
          break;
        BattleResultBondsIconComponent__ClearFaceAtlas(BondsIconArray, 0);
        if ( (_DWORD)m_CancellationTokenSource == (_DWORD)++v15 )
          goto LABEL_12;
      }
LABEL_15:
      sub_2213CDC(BondsIconArray, v12);
    }
  }
LABEL_12:
  BondsIconArray = (BattleResultBondsIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
  if ( !BondsIconArray )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BondsIconArray, 0, 0);
  BondsIconArray = (BattleResultBondsIconComponent_o *)this->fields.myFsm;
  if ( !BondsIconArray )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattleResultBondsComponent__endCloseBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_597433B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_597433B = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleResultBondsComponent__endMoveFigure(BattleResultBondsComponent_o *this, const MethodInfo *method)
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
  __int64 v12; // x1
  Il2CppObject *current; // x23
  System_String_o *v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v18; // x1
  struct BattleResultBondsIconComponent_o *v19; // x8
  int32_t svtLimit; // w23
  __int64 v21; // x1
  int32_t ServantLimitCountSealAfter; // w24
  bool IsOpenByServantFriendShipAndImageLimit; // w23
  LocalizationManager_c *v24; // x0
  int v25; // w21
  __int64 *v26; // x24
  System_String_o *v27; // x0
  struct BattleResultBondsIconComponent_o *v28; // x8
  System_String_o *v29; // x0
  System_Collections_Generic_List_object__o *v30; // x22
  __int64 v31; // x1
  struct BattleFriendshipRewardInfo_array *rewardInfos; // x24
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x23
  int v35; // w21
  int CONF_SERVANT_COIN_PLUS_HEIGHT; // w26
  struct BattleResultBondsIconComponent_o *v37; // x8
  BattleFriendshipRewardInfo_o *v38; // x25
  GiftEntity_o *v39; // x26
  int32_t type; // w8
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  System_String_o *v43; // x27
  Il2CppObject *v44; // x0
  __int64 v45; // x1
  Il2CppObject *v46; // x0
  __int64 v47; // x1
  ServantEntity_o *v48; // x27
  System_String_o *OverwriteServantCoinName; // x28
  __int64 v50; // x1
  System_String_o *v51; // x27
  Il2CppObject *v52; // x0
  System_String_o *v53; // x0
  int64_t userSvtId; // x27
  char v55; // w28
  System_String_o *v56; // x0
  __int64 v57; // x1
  System_String_o *v58; // x0
  float v59; // s0
  int32_t v60; // w5
  System_String_o *v61; // x1
  BattleResultBondsComponent_o *v62; // x0
  int32_t v63; // w2
  bool v64; // w3
  bool v65; // w6
  int64_t v66; // x7
  char v67; // w27
  __int64 v68; // x1
  Il2CppObject *Master_object; // x28
  __int64 v70; // x1
  int32_t v71; // w1
  System_String_o *v72; // x0
  System_String_o *v73; // x28
  int32_t IconImageId; // w0
  BattleResultBondsComponent_c *v75; // x0
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  struct System_Object_array *items; // x8
  _QWORD *v83; // x9
  __int64 size; // x10
  Il2CppClass **v85; // x0
  System_Object_array *v86; // x0
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  int v93; // w20
  UnityEngine_Transform_o *confRoot; // x21
  unsigned int localPosition; // s0 OVERLAPPED
  float v96; // s1
  int v97; // w8
  int v98; // w20
  float v99; // s1
  int v100; // s2
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *rankupConfLabel; // x21
  struct BattleWindowComponent_o *confwindow; // x20
  BattleWindowComponent_EndCall_o *v104; // x21
  const MethodInfo *v105; // [xsp+0h] [xbp-F0h]
  int32_t key; // [xsp+1Ch] [xbp-D4h]
  System_Text_StringBuilder_o *v107; // [xsp+20h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_object__o v108; // [xsp+28h] [xbp-C8h] BYREF
  Il2CppObject *v109; // [xsp+40h] [xbp-B0h] BYREF
  UserServantCollectionEntity_o *v110; // [xsp+48h] [xbp-A8h] BYREF
  Il2CppObject *entity; // [xsp+50h] [xbp-A0h] BYREF
  System_String_o *countText; // [xsp+58h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v113; // [xsp+60h] [xbp-90h] BYREF
  System_String_o *nameText; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_5974337 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleResultBondsComponent_endMoveFigure__);
    sub_2213A60(&Method_BattleResultBondsComponent_openedBondUp__);
    sub_2213A60(&BattleResultBondsComponent_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_11594/*"RESULT_BOUNDS_OPENQUEST"*/);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_11597/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/);
    sub_2213A60(&StringLiteral_11596/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/);
    sub_2213A60(&StringLiteral_11591/*"RESULT_BOUNDS_GET_COIN_NAME"*/);
    sub_2213A60(&StringLiteral_11588/*"RESULT_BOUNDS_GETVOICE"*/);
    sub_2213A60(&StringLiteral_11592/*"RESULT_BOUNDS_GET_FOU_COUNT"*/);
    sub_2213A60(&StringLiteral_26523/*"{0} {1}"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_11590/*"RESULT_BOUNDS_GET_COIN_COUNT"*/);
    byte_5974337 = 1;
  }
  memset(&v113, 0, sizeof(v113));
  nameText = 0;
  entity = 0;
  countText = 0;
  v109 = 0;
  v110 = 0;
  v3 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0);
  v4 = Method_BattleResultBondsComponent_endMoveFigure__;
  if ( (*((_BYTE *)Method_BattleResultBondsComponent_endMoveFigure__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_2213A78(Method_BattleResultBondsComponent_endMoveFigure__);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 6, 0, 0);
  openCollect = this->fields.openCollect;
  if ( !openCollect )
    goto LABEL_137;
  lvComp = (__int64)this->fields.lvComp;
  if ( !lvComp )
    goto LABEL_137;
  friendshipRank = openCollect->fields.friendshipRank;
  svtId = openCollect->fields.svtId;
  BattleResultMasterUpStatusComponent__setData(
    (BattleResultMasterUpStatusComponent_o *)lvComp,
    friendshipRank,
    openCollect->fields.nextFriendShipRank,
    0);
  lvComp = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !lvComp )
    goto LABEL_137;
  v107 = v3;
  lvComp = (__int64)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                      (clsQuestCheck_o *)lvComp,
                      svtId,
                      friendshipRank,
                      8,
                      0);
  if ( lvComp )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v108,
      (System_Collections_Generic_List_object__o *)lvComp,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    v11 = 0;
    v113 = v108;
    v108.fields._list = 0;
    *(_QWORD *)&v108.fields._index = &v113;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v113,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
    {
      current = v113.fields._current;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11594/*"RESULT_BOUNDS_OPENQUEST"*/, 0);
      if ( !current )
        sub_2213CDC(v14, v15);
      v16 = v14;
      QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0);
      v18 = System_String__Format(v16, QuestName, 0);
      BattleResultBondsComponent__addConfObject(this, v18, (float)v11 * 22.0, -1, 0, 0, 1, 0, 0, v105);
      v11 += 3;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v113,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  }
  else
  {
    v11 = 0;
  }
  v19 = this->fields.openCollect;
  if ( !v19 )
    goto LABEL_137;
  svtLimit = v19->fields.svtLimit;
  lvComp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lvComp )
    goto LABEL_137;
  lvComp = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)lvComp,
                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !lvComp )
    goto LABEL_137;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)lvComp,
                                 svtId,
                                 svtLimit,
                                 0);
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v21);
  IsOpenByServantFriendShipAndImageLimit = ServantCommentManager__IsOpenByServantFriendShipAndImageLimit(
                                             svtId,
                                             ServantLimitCountSealAfter,
                                             friendshipRank,
                                             0);
  if ( !IsOpenByServantFriendShipAndImageLimit )
  {
    if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v7);
    lvComp = ServantCommentManager__IsOpenByServantFriendShip_50579704(
               svtId,
               friendshipRank,
               ServantLimitCountSealAfter,
               0);
    if ( (lvComp & 1) == 0 )
      goto LABEL_32;
    v24 = LocalizationManager_TypeInfo;
    v25 = 2;
    v26 = &StringLiteral_11596/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/;
    if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      IsOpenByServantFriendShipAndImageLimit = 0;
      goto LABEL_31;
    }
LABEL_30:
    j_il2cpp_runtime_class_init_0(v24, v7);
    goto LABEL_31;
  }
  v24 = LocalizationManager_TypeInfo;
  v25 = 4;
  v26 = &StringLiteral_11597/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    goto LABEL_30;
  IsOpenByServantFriendShipAndImageLimit = 1;
LABEL_31:
  v27 = LocalizationManager__Get((System_String_o *)*v26, 0);
  BattleResultBondsComponent__addConfObject(
    this,
    v27,
    (float)v11 * 22.0,
    -1,
    0,
    IsOpenByServantFriendShipAndImageLimit,
    1,
    0,
    0,
    v105);
  v11 += v25;
LABEL_32:
  v28 = this->fields.openCollect;
  if ( !v28 )
    goto LABEL_137;
  if ( ServantVoiceMaster__isOpenByServantFriendShip(svtId, v28->fields.maxLimitCount, friendshipRank, 0) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11588/*"RESULT_BOUNDS_GETVOICE"*/, 0);
    BattleResultBondsComponent__addConfObject(this, v29, (float)v11 * 22.0, -1, 0, 0, 1, 0, 0, v105);
    v11 += 2;
  }
  if ( !this->fields.rewardInfos )
  {
    CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
    goto LABEL_121;
  }
  v30 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v31);
  lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  rewardInfos = this->fields.rewardInfos;
  if ( !rewardInfos )
    goto LABEL_137;
  max_length = rewardInfos->max_length;
  if ( max_length < 1 )
  {
    CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
    if ( !v30 )
      goto LABEL_137;
    goto LABEL_120;
  }
  key = svtId;
  v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)lvComp;
  v35 = 0;
  CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
  do
  {
    if ( v35 >= (unsigned int)max_length )
      sub_2213CE4(lvComp);
    v37 = this->fields.openCollect;
    if ( !v37 )
      goto LABEL_137;
    v38 = rewardInfos->m_Items[v35];
    if ( !v38 )
      goto LABEL_137;
    if ( v37->fields.svtId == v38->fields.targetSvtId )
    {
      lvComp = (__int64)BattleFriendshipRewardInfo__getGiftEntity(v38, 0);
      if ( !lvComp )
        goto LABEL_137;
      v39 = (GiftEntity_o *)lvComp;
      GiftEntity__GetInfo((GiftEntity_o *)lvComp, &nameText, &countText, 0);
      lvComp = GiftEntity__isQp(v39, 0);
      if ( (lvComp & 1) != 0 )
      {
        nameText = countText;
        countText = (System_String_o *)StringLiteral_1/*""*/;
      }
      type = v39->fields.type;
      if ( type == 1 )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
        lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( !lvComp )
          goto LABEL_137;
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)lvComp,
                &v109,
                v39->fields.objectId,
                (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
          goto LABEL_76;
        lvComp = (__int64)v109;
        if ( !v109 )
          goto LABEL_137;
        if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)v109, 0) )
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50);
          v51 = LocalizationManager__Get((System_String_o *)StringLiteral_11592/*"RESULT_BOUNDS_GET_FOU_COUNT"*/, 0);
          LODWORD(v108.fields._list) = v39->fields.num;
          v52 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v108);
          v53 = System_String__Format(v51, v52, 0);
          userSvtId = v38->fields.userSvtId;
          v55 = 1;
          countText = v53;
        }
        else
        {
LABEL_76:
          userSvtId = 0;
          v55 = 0;
        }
        v58 = System_String__Concat_75694928(nameText, (System_String_o *)StringLiteral_113/*" "*/, countText, 0);
        v59 = (float)v11;
        v60 = v39->fields.type;
        v61 = v58;
        v62 = this;
        v63 = -1;
        v64 = 0;
        v65 = v55;
        v66 = userSvtId;
      }
      else
      {
        if ( type != 2 )
        {
          v56 = System_String__Format_75697880(
                  (System_String_o *)StringLiteral_26523/*"{0} {1}"*/,
                  (Il2CppObject *)nameText,
                  (Il2CppObject *)countText,
                  0);
          BattleResultBondsComponent__addConfObject(
            this,
            v56,
            (float)v11 * 22.0,
            v39->fields.objectId,
            0,
            0,
            v39->fields.type,
            0,
            0,
            v105);
          goto LABEL_107;
        }
        if ( !v34 )
          goto LABEL_137;
        v41 = DataMasterBase_object__object__int___GetEntity(
                v34,
                v39->fields.objectId,
                (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( v41 && LODWORD(v41[3].klass) == 29 )
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42);
          v43 = LocalizationManager__Get((System_String_o *)StringLiteral_11590/*"RESULT_BOUNDS_GET_COIN_COUNT"*/, 0);
          LODWORD(v108.fields._list) = v39->fields.num;
          v44 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v108);
          countText = System_String__Format(v43, v44, 0);
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v45);
          lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
          if ( !lvComp )
            goto LABEL_137;
          v46 = DataMasterBase_object__object__int___GetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)lvComp,
                  key,
                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( v46 )
          {
            v48 = (ServantEntity_o *)v46;
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v47);
            lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantAddMaster___);
            if ( !lvComp )
              goto LABEL_137;
            DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)lvComp,
              &entity,
              key,
              (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__);
            if ( entity )
              OverwriteServantCoinName = ServantAddEntity__GetOverwriteServantCoinName((ServantAddEntity_o *)entity, 0);
            else
              OverwriteServantCoinName = 0;
            if ( System_String__IsNullOrEmpty(OverwriteServantCoinName, 0) )
            {
              if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v68);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
              if ( !byte_5969EF2 )
              {
                sub_2213A60(&NetworkManager_TypeInfo);
                byte_5969EF2 = 1;
              }
              lvComp = (__int64)NetworkManager_TypeInfo;
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
                lvComp = (__int64)NetworkManager_TypeInfo;
              }
              if ( !Master_object )
                goto LABEL_137;
              if ( UserServantCollectionMaster__TryGetEntity(
                     (UserServantCollectionMaster_o *)Master_object,
                     &v110,
                     *(_QWORD *)(*(_QWORD *)(lvComp + 184) + 64LL),
                     key,
                     0) )
              {
                if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v70);
                lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                if ( !v110 )
                  goto LABEL_137;
                if ( !lvComp )
                  goto LABEL_137;
                lvComp = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                           (ServantLimitImageMaster_o *)lvComp,
                           key,
                           v110->fields.maxLimitCount,
                           0);
                if ( !v110 )
                  goto LABEL_137;
                if ( (_DWORD)lvComp == v110->fields.maxLimitCount )
                  v71 = -1;
                else
                  v71 = lvComp;
              }
              else
              {
                v71 = -1;
              }
              OverwriteServantCoinName = ServantEntity__getName(v48, v71, -1, 0, 0, 0);
            }
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v68);
            v72 = LocalizationManager__Get((System_String_o *)StringLiteral_11591/*"RESULT_BOUNDS_GET_COIN_NAME"*/, 0);
            v67 = 1;
            nameText = System_String__Format_75697880(
                         v72,
                         (Il2CppObject *)nameText,
                         (Il2CppObject *)OverwriteServantCoinName,
                         0);
          }
          else
          {
            v67 = 1;
          }
        }
        else
        {
          v67 = 0;
        }
        v73 = System_String__Format_75697880(
                (System_String_o *)StringLiteral_26523/*"{0} {1}"*/,
                (Il2CppObject *)nameText,
                (Il2CppObject *)countText,
                0);
        IconImageId = GiftEntity__getIconImageId(v39, 0);
        v59 = (float)v11;
        v60 = v39->fields.type;
        v63 = IconImageId;
        v62 = this;
        v61 = v73;
        v64 = v67;
        v65 = 0;
        v66 = 0;
      }
      BattleResultBondsComponent__addConfObject(v62, v61, v59 * 22.0, v63, v64, 0, v60, v65, v66, v105);
LABEL_107:
      v75 = BattleResultBondsComponent_TypeInfo;
      if ( !*(&BattleResultBondsComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v57);
        v75 = BattleResultBondsComponent_TypeInfo;
      }
      v11 += 2;
      CONF_SERVANT_COIN_PLUS_HEIGHT = v75->static_fields->CONF_SERVANT_COIN_PLUS_HEIGHT;
      lvComp = BattleFriendshipRewardInfo__isShow(v38, 0);
      if ( (lvComp & 1) != 0 )
      {
        if ( !v30 )
          goto LABEL_137;
        items = v30->fields._items;
        v83 = Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__;
        ++v30->fields._version;
        if ( !items )
          goto LABEL_137;
        size = v30->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v30,
            (Il2CppObject *)v38,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
        }
        else
        {
          v85 = &items->obj.klass + size;
          v30->fields._size = size + 1;
          v85[4] = (Il2CppClass *)v38;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v85 + 4), (int32_t)v38, v76, v77, v78, v79, v80, v81);
        }
      }
    }
    max_length = rewardInfos->max_length;
    ++v35;
  }
  while ( v35 < max_length );
  if ( !v30 )
    goto LABEL_137;
LABEL_120:
  v86 = System_Collections_Generic_List_object___ToArray(
          v30,
          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
  this->fields.showList = (struct BattleFriendshipRewardInfo_array *)v86;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.showList, (int32_t)v86, v87, v88, v89, v90, v91, v92);
  this->fields.showIndex = 0;
LABEL_121:
  lvComp = (__int64)this->fields.confSprite;
  if ( (unsigned int)v11 <= 1 )
    v93 = 1;
  else
    v93 = v11;
  if ( !lvComp )
    goto LABEL_137;
  UIWidget__set_height((UIWidget_o *)lvComp, CONF_SERVANT_COIN_PLUS_HEIGHT + 22 * v93 + 120, 0);
  confRoot = this->fields.confRoot;
  if ( !confRoot )
    goto LABEL_137;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.confRoot, 0);
  v96 = (float)v93;
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT >= 0 )
    v97 = CONF_SERVANT_COIN_PLUS_HEIGHT;
  else
    v97 = CONF_SERVANT_COIN_PLUS_HEIGHT + 1;
  v98 = v97 >> 1;
  v99 = (float)(v96 * 11.0) + (float)(v97 >> 1);
  v100 = 0;
  UnityEngine_Transform__set_localPosition(confRoot, *(UnityEngine_Vector3_o *)&localPosition, 0);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT )
  {
    lvComp = (__int64)this->fields.confwindow;
    if ( lvComp )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lvComp, 0);
      GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v98, 0);
      lvComp = (__int64)this->fields.confwindow;
      if ( lvComp )
      {
        lvComp = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)lvComp + 424LL))(
                   lvComp,
                   *(_QWORD *)(*(_QWORD *)lvComp + 432LL));
        goto LABEL_133;
      }
    }
LABEL_137:
    sub_2213CDC(lvComp, v7);
  }
LABEL_133:
  if ( !v107 )
    goto LABEL_137;
  rankupConfLabel = this->fields.rankupConfLabel;
  lvComp = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v107->klass->vtable._3_ToString.methodPtr)(
             v107,
             v107->klass->vtable._3_ToString.method);
  if ( !rankupConfLabel )
    goto LABEL_137;
  UILabel__set_text(rankupConfLabel, (System_String_o *)lvComp, 0);
  confwindow = this->fields.confwindow;
  v104 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v104, (Il2CppObject *)this, Method_BattleResultBondsComponent_openedBondUp__, 0);
  if ( !confwindow )
    goto LABEL_137;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))confwindow->klass->vtable._10_Open.methodPtr)(
    confwindow,
    v104,
    confwindow->klass->vtable._10_Open.method);
}


UserServantCollectionEntity_o *BattleResultBondsComponent__getServantCollection(
        BattleResultBondsComponent_o *this,
        UserServantCollectionEntity_array *collects,
        int32_t svtId,
        const MethodInfo *method)
{
  int max_length; // w8
  __int64 v7; // x22
  UserServantCollectionEntity_o *v8; // x21

  if ( !collects )
    goto LABEL_10;
  max_length = collects->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v7 >= max_length )
        sub_2213CE4(this);
      v8 = collects->m_Items[v7];
      if ( !v8 )
        break;
      this = (BattleResultBondsComponent_o *)UserServantCollectionEntity__getSvtId(collects->m_Items[v7], 0);
      if ( (_DWORD)this == svtId )
        return v8;
      max_length = collects->max_length;
      if ( (int)++v7 >= max_length )
        return 0;
    }
LABEL_10:
    sub_2213CDC(this, collects);
  }
  return 0;
}


int64_t BattleResultBondsComponent__getUsetSvtId(
        BattleResultBondsComponent_o *this,
        DeckData_o *deck,
        int32_t index,
        const MethodInfo *method)
{
  struct BattleDeckServantData_array *svts; // x8
  int max_length; // w9
  int v6; // w10
  BattleDeckServantData_o *v7; // x13

  if ( !deck || (svts = deck->fields.svts) == 0 )
LABEL_11:
    sub_2213CDC(this, deck);
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    if ( max_length == v6 )
      sub_2213CE4(this);
    v7 = svts->m_Items[v6];
    if ( !v7 )
      goto LABEL_11;
    if ( v7->fields.id == index + 1 )
      return v7->fields.userSvtId;
    if ( (max_length & ~(max_length >> 31)) == ++v6 )
      return 0;
  }
}


bool BattleResultBondsComponent__isCollectsSvt(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  struct UserServantCollectionEntity_array *oldCollections; // x8

  oldCollections = this->fields.oldCollections;
  if ( !oldCollections )
    sub_2213CDC(this, method);
  return SLODWORD(oldCollections->max_length) > 1;
}


void BattleResultBondsComponent__openedBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0

  if ( (byte_5974338 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5652/*"END_OPEN"*/);
    byte_5974338 = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__ResetPlayScreenTouch(parentComp, 0), (parentComp = this->fields.parentComp) == 0)
    || (BattleResultComponent__setTouch(parentComp, 1, 0),
        parentComp = (BattleResultComponent_o *)this->fields.myFsm,
        ++this->fields.colIndex,
        !parentComp) )
  {
    sub_2213CDC(parentComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)parentComp, (System_String_o *)StringLiteral_5652/*"END_OPEN"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleResultBondsComponent__setResultData(
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


void BattleResultBondsComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5974424 & 1) == 0 )
  {
    sub_2213A60(&BattleResultBondsComponent___c_TypeInfo);
    byte_5974424 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleResultBondsComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleResultBondsComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultBondsComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleResultBondsComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleResultBondsComponent___c___ctor(BattleResultBondsComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleResultBondsComponent___c___CheckFormalJoin_b__62_0(
        BattleResultBondsComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


bool BattleResultBondsComponent___c___Open_b__53_0(
        BattleResultBondsComponent___c_o *this,
        BattleResultBondsIconComponent_o *col,
        const MethodInfo *method)
{
  if ( !col )
    sub_2213CDC(this, 0);
  return col->fields.isUse;
}


bool BattleResultBondsComponent___c___SetResultDataLocal_b__49_0(
        BattleResultBondsComponent___c_o *this,
        QuestRewardInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.type == 7 && x->fields.isNew;
}


bool BattleResultBondsComponent___c___SetResultDataLocal_b__49_1(
        BattleResultBondsComponent___c_o *this,
        GetSvts_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return !x->fields.isNew;
}


void BattleResultBondsComponent___c__DisplayClass49_0___ctor(
        BattleResultBondsComponent___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleResultBondsComponent___c__DisplayClass49_0___SetResultDataLocal_b__2(
        BattleResultBondsComponent___c__DisplayClass49_0_o *this,
        BattleBuddyPointInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.userSvtId == this->fields.userSvtId;
}


void BattleResultBondsComponent___c__DisplayClass61_0___ctor(
        BattleResultBondsComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleResultBondsComponent___c__DisplayClass61_1___ctor(
        BattleResultBondsComponent___c__DisplayClass61_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleResultBondsComponent___c__DisplayClass61_1___checkBondsUp_b__0(
        BattleResultBondsComponent___c__DisplayClass61_1_o *this,
        const MethodInfo *method)
{
  BattleResultBondsComponent___c__DisplayClass61_1_o *v2; // x19
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *CS___8__locals1; // x8
  struct BattleResultBondsComponent_o *_4__this; // x8
  UnityEngine_Object_o *figureMoveRoot; // x20
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v6; // x8
  struct BattleResultBondsComponent_o *v7; // x8
  UnityEngine_GameObject_o *parent; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  BattleResultBondsComponent___c__DisplayClass61_1_o *v15; // x21
  __int64 v16; // x1
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  BattleResultBondsComponent___c__DisplayClass61_1_o *v24; // x22
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  BattleResultBondsComponent___c__DisplayClass61_1_o *v38; // x22
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int32_t v45; // w1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  BattleResultBondsComponent___c__DisplayClass61_1_o *v52; // x22
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  int32_t v59; // w1
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v60; // x8
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  BattleResultBondsComponent___c__DisplayClass61_1_o *v67; // x22
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  int32_t v74; // w1
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  int32_t v81; // w1
  __int64 v82; // x1
  System_Collections_Hashtable_o *v83; // x0
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v84; // x8
  struct BattleResultBondsComponent_o *v85; // x8
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v86; // x8
  struct BattleResultBondsIconComponent_array *bondsIcons; // x9
  __int64 i; // x10
  __int64 v89; // x0
  char v90[4]; // [xsp+4h] [xbp-3Ch] BYREF
  int v91; // [xsp+8h] [xbp-38h] BYREF
  int v92; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_5974425 & 1) == 0 )
  {
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_26242/*"x"*/);
    sub_2213A60(&StringLiteral_10026/*"OPEN"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_23567/*"oncompletetarget"*/);
    sub_2213A60(&StringLiteral_19907/*"endMoveFigure"*/);
    sub_2213A60(&StringLiteral_22006/*"islocal"*/);
    sub_2213A60(&StringLiteral_23565/*"oncomplete"*/);
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_2213A60(&iTween_TypeInfo);
    byte_5974425 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_59;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_59;
  figureMoveRoot = (UnityEngine_Object_o *)_4__this->fields.figureMoveRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Object__op_Inequality(figureMoveRoot, 0, 0);
  v6 = v2->fields.CS___8__locals1;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v6 )
    {
      this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v6->fields.__4__this;
      if ( this )
      {
        BattleResultBondsComponent__endMoveFigure((BattleResultBondsComponent_o *)this, 0);
        goto LABEL_51;
      }
    }
    goto LABEL_59;
  }
  if ( !v6 )
    goto LABEL_59;
  v7 = v6->fields.__4__this;
  if ( !v7 )
    goto LABEL_59;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v7->fields.figureMoveRoot;
  if ( !this )
    goto LABEL_59;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0);
  if ( !this )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  parent = v2->fields.parent;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_2213B20(object___TypeInfo, 10);
  if ( !this )
    goto LABEL_59;
  v15 = this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_26242/*"x"*/;
  if ( StringLiteral_26242/*"x"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_2213BB4(
                                                                   StringLiteral_26242/*"x"*/,
                                                                   v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_61;
  }
  if ( !LODWORD(v15->fields.CS___8__locals1) )
    goto LABEL_60;
  v17 = (int)StringLiteral_26242/*"x"*/;
  v15[1].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)StringLiteral_26242/*"x"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15[1], v17, v9, v10, v11, v12, v13, v14);
  v92 = -1007026176;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(qword_5984378, &v92);
  v24 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_2213BB4(this, v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_61;
  }
  if ( ((__int64)v15->fields.CS___8__locals1 & 0xFFFFFFFE) == 0 )
    goto LABEL_60;
  v15[1].monitor = v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15[1].monitor, (int32_t)v24, v18, v19, v20, v21, v22, v23);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_25366/*"time"*/;
  if ( StringLiteral_25366/*"time"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_2213BB4(
                                                                   StringLiteral_25366/*"time"*/,
                                                                   v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_61;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 2 )
    goto LABEL_60;
  v31 = StringLiteral_25366/*"time"*/;
  v15[1].fields.parent = (struct UnityEngine_GameObject_o *)StringLiteral_25366/*"time"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15[1].fields, v31, v25, v26, v27, v28, v29, v30);
  v91 = 1061997773;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(qword_5984378, &v91);
  v38 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_2213BB4(this, v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_61;
  }
  if ( ((__int64)v15->fields.CS___8__locals1 & 0xFFFFFFFC) == 0 )
    goto LABEL_60;
  v15[1].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v38;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v15[1].fields.CS___8__locals1,
    (int32_t)v38,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22006/*"islocal"*/;
  if ( StringLiteral_22006/*"islocal"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_2213BB4(
                                                                   StringLiteral_22006/*"islocal"*/,
                                                                   v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_61;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 4 )
    goto LABEL_60;
  v45 = StringLiteral_22006/*"islocal"*/;
  v15[2].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)StringLiteral_22006/*"islocal"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15[2], v45, v39, v40, v41, v42, v43, v44);
  v90[0] = 1;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(qword_5984328, v90);
  v52 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_2213BB4(this, v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_61;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 5 )
    goto LABEL_60;
  v15[2].monitor = v52;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15[2].monitor, (int32_t)v52, v46, v47, v48, v49, v50, v51);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_23567/*"oncompletetarget"*/;
  if ( StringLiteral_23567/*"oncompletetarget"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_2213BB4(
                                                                   StringLiteral_23567/*"oncompletetarget"*/,
                                                                   v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_61;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 6 )
    goto LABEL_60;
  v59 = StringLiteral_23567/*"oncompletetarget"*/;
  v15[2].fields.parent = (struct UnityEngine_GameObject_o *)StringLiteral_23567/*"oncompletetarget"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15[2].fields, v59, v53, v54, v55, v56, v57, v58);
  v60 = v2->fields.CS___8__locals1;
  if ( !v60 || (this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v60->fields.__4__this) == 0 )
LABEL_59:
    sub_2213CDC(this, method);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0);
  v67 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_2213BB4(this, v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_61;
  }
  if ( ((__int64)v15->fields.CS___8__locals1 & 0xFFFFFFF8) == 0 )
    goto LABEL_60;
  v15[2].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v67;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v15[2].fields.CS___8__locals1,
    (int32_t)v67,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_23565/*"oncomplete"*/;
  if ( StringLiteral_23565/*"oncomplete"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_2213BB4(
                                                                   StringLiteral_23565/*"oncomplete"*/,
                                                                   v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_61;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 8 )
    goto LABEL_60;
  v74 = StringLiteral_23565/*"oncomplete"*/;
  v15[3].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)StringLiteral_23565/*"oncomplete"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15[3], v74, v68, v69, v70, v71, v72, v73);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_19907/*"endMoveFigure"*/;
  if ( StringLiteral_19907/*"endMoveFigure"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_2213BB4(
                                                                   StringLiteral_19907/*"endMoveFigure"*/,
                                                                   v15->klass->_1.element_class);
    if ( !this )
    {
LABEL_61:
      v89 = sub_2213D00(this, v16);
      sub_2213BA0(v89, 0);
    }
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 9 )
    goto LABEL_60;
  v81 = StringLiteral_19907/*"endMoveFigure"*/;
  v15[3].monitor = (void *)StringLiteral_19907/*"endMoveFigure"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15[3].monitor, v81, v75, v76, v77, v78, v79, v80);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v82);
  v83 = iTween__Hash((System_Object_array *)v15, 0);
  iTween__MoveFrom_75294960(parent, v83, 0);
LABEL_51:
  v84 = v2->fields.CS___8__locals1;
  if ( !v84 )
    goto LABEL_59;
  v85 = v84->fields.__4__this;
  if ( !v85 )
    goto LABEL_59;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v85->fields.myFsm;
  v85->fields.openBoundsFlg = 1;
  if ( !this )
    goto LABEL_59;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_10026/*"OPEN"*/, 0);
  v86 = v2->fields.CS___8__locals1;
  if ( !v86 )
    goto LABEL_59;
  bondsIcons = v86->fields.bondsIcons;
  if ( !bondsIcons )
    goto LABEL_59;
  i = v86->fields.i;
  if ( (unsigned int)i >= LODWORD(bondsIcons->max_length) )
LABEL_60:
    sub_2213CE4(this);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v86->fields.__4__this;
  if ( !this )
    goto LABEL_59;
  BattleResultBondsComponent__CheckFormalJoin((BattleResultBondsComponent_o *)this, bondsIcons->m_Items[i], 0);
}


void BattleResultBondsComponent___c__DisplayClass62_0___ctor(
        BattleResultBondsComponent___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleResultBondsComponent___c__DisplayClass62_0___CheckFormalJoin_b__1(
        BattleResultBondsComponent___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5974426 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974426 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  CommonUI__CreateServantCoinConfirmDialog((CommonUI_o *)Instance, 1, this->fields.coin, 0, 0);
}