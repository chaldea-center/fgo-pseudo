void BattleResultBondsComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct BattleResultBondsComponent_StaticFields *static_fields; // x0
  int32_t v8; // w1
  int32_t v9; // w1
  struct BattleResultBondsComponent_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4E7B0A5 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleResultBondsComponent_TypeInfo);
    sub_1D0F0B4(&StringLiteral_7172/*"GetNewSvt"*/);
    sub_1D0F0B4(&StringLiteral_7159/*"GetExistSvt"*/);
    byte_4E7B0A5 = 1;
  }
  static_fields = BattleResultBondsComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SVT_GAP_5 = 0x4316000043320000LL;
  *(_QWORD *)&static_fields->CONF_LABEL_MAX_WIDTH = 0x12000001D0LL;
  v8 = StringLiteral_7172/*"GetNewSvt"*/;
  static_fields->GET_NEW_SVT_KEY = (struct System_String_o *)StringLiteral_7172/*"GetNewSvt"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&static_fields->GET_NEW_SVT_KEY, v8, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_7159/*"GetExistSvt"*/;
  v10 = BattleResultBondsComponent_TypeInfo->static_fields;
  v10->GET_EXIST_SVT_KEY = (struct System_String_o *)StringLiteral_7159/*"GetExistSvt"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v10->GET_EXIST_SVT_KEY, v9, v11, v12, v13, v14, v15, v16);
}


void BattleResultBondsComponent___ctor(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  BattleResultBondsFigureComponent_o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4E7B0A4 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleResultBondsFigureComponent_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4E7B0A4 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.conflist = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.conflist, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  this->fields.buddyPointInfoWindowHeight = 366;
  this->fields.tempSaveTimeScale = 1.0;
  v10 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
  this->fields.bondsList = (struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *)v10;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.bondsList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (BattleResultBondsFigureComponent_o *)sub_1D0F300(BattleResultBondsFigureComponent_TypeInfo);
  BattleResultBondsFigureComponent___ctor(v17, 0);
  this->fields.bondsFigure = v17;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.bondsFigure, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleResultBondsComponent__CheckFormalJoin(
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
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  Il2CppObject *Master_object; // x25
  __int64 v25; // x24
  __int64 v26; // x23
  __int64 v27; // x25
  Il2CppObject *v28; // x8
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  System_String_o *v41; // x24
  Il2CppObject *v42; // x25
  __int64 v43; // x0
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4E7B096 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    sub_1D0F0B4(&GetSvtCoin___TypeInfo);
    sub_1D0F0B4(&GetSvtCoin_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__);
    sub_1D0F0B4(&Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__);
    sub_1D0F0B4(&BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo);
    sub_1D0F0B4(&BattleResultBondsComponent___c_TypeInfo);
    sub_1D0F0B4(&StringLiteral_12620/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/);
    sub_1D0F0B4(&StringLiteral_18906/*"dialogIgnoreTime"*/);
    byte_4E7B096 = 1;
  }
  entity = 0;
  if ( this->fields.getJoinSvtList && !this->fields.isWarboard )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantMaster___),
          (getJoinSvtList = this->fields.getJoinSvtList) == 0) )
    {
LABEL_45:
      sub_1D0F30C(Instance, v6);
    }
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v9 = 0;
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
        UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_18906/*"dialogIgnoreTime"*/, 1, 0);
        UnityEngine_PlayerPrefs__Save(0);
      }
      else
      {
        if ( !v8 )
          goto LABEL_45;
        Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                      v8,
                                      v11->fields.userSvtId,
                                      (const MethodInfo_353832C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( Instance )
        {
          v12 = (UserServantEntity_o *)Instance;
          Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0);
          if ( !collect )
            goto LABEL_45;
          if ( (_DWORD)Instance == collect->fields.svtId )
          {
            EventServant = UserServantEntity__getEventServant(v12, 0);
            if ( EventServant
              || (Instance = (DataManager_o *)UserServantEntity__getEventServantIgnoreEnd(v12, 0),
                  (EventServant = (EventServantEntity_o *)Instance) != 0) )
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
                _9__62_0 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
                System_Action___ctor(_9__62_0, v16, Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__, 0);
                static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
                static_fields->__9__62_0 = _9__62_0;
                sub_1D0F058(
                  (GrandQuestFolderBoardItem_o *)&static_fields->__9__62_0,
                  (int32_t)_9__62_0,
                  v18,
                  v19,
                  v20,
                  v21,
                  v22,
                  v23);
              }
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_SvtCoinMaster___);
              Instance = (DataManager_o *)UserServantEntity__getSvtId(v12, 0);
              if ( !Master_object )
                goto LABEL_45;
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            &entity,
                                            (int32_t)Instance,
                                            (const MethodInfo_3535BC8 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_45;
                if ( SHIDWORD(entity[1].klass) >= 1 )
                {
                  v25 = sub_1D0F300(BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo);
                  BattleResultBondsComponent___c__DisplayClass62_0___ctor(
                    (BattleResultBondsComponent___c__DisplayClass62_0_o *)v25,
                    0);
                  v26 = sub_1D0F15C(GetSvtCoin___TypeInfo, 1);
                  v27 = sub_1D0F300(GetSvtCoin_TypeInfo);
                  GetSvtCoin___ctor((GetSvtCoin_o *)v27, 0);
                  v28 = entity;
                  if ( !entity )
                    goto LABEL_45;
                  if ( !v27 )
                    goto LABEL_45;
                  *(_DWORD *)(v27 + 16) = entity[1].klass;
                  *(int32x2_t *)(v27 + 20) = vrev64_s32(*(int32x2_t *)((char *)&v28[1].klass + 4));
                  if ( !v26 )
                    goto LABEL_45;
                  Instance = (DataManager_o *)sub_1D0F1F0(v27, *(_QWORD *)(*(_QWORD *)v26 + 64LL));
                  if ( !Instance )
                  {
                    v43 = sub_1D0F330(0);
                    sub_1D0F1DC(v43, 0);
                  }
                  if ( !*(_DWORD *)(v26 + 24) )
LABEL_46:
                    sub_1D0F314(Instance);
                  *(_QWORD *)(v26 + 32) = v27;
                  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v26 + 32), v27, v29, v30, v31, v32, v33, v34);
                  if ( !v25 )
                    goto LABEL_45;
                  *(_QWORD *)(v25 + 16) = v26;
                  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v25 + 16), v26, v35, v36, v37, v38, v39, v40);
                  _9__62_0 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__62_0,
                    (Il2CppObject *)v25,
                    Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__,
                    0);
                }
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12620/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0);
              v42 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              Instance = (DataManager_o *)EventServantEntity__GetGetMessage(EventServant, 0);
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
                0,
                0.0,
                0,
                0);
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


void BattleResultBondsComponent__Close(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  struct BattleWindowComponent_o *multiDeckWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4E7B09E & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BattleResultBondsComponent_endClose__);
    sub_1D0F0B4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4E7B09E = 1;
  }
  if ( this->fields.isMultiDeck )
    multiDeckWindow = this->fields.multiDeckWindow;
  else
    multiDeckWindow = this->fields.window;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1D0F300(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v4, (Il2CppObject *)this, Method_BattleResultBondsComponent_endClose__, 0);
  if ( !multiDeckWindow )
    sub_1D0F30C(v5, v6);
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))multiDeckWindow->klass->vtable._12_Close.methodPtr)(
    multiDeckWindow,
    v4,
    multiDeckWindow->klass->vtable._12_Close.method);
}


void BattleResultBondsComponent__CloseBondUpRoot(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *upRoot; // x0

  if ( (byte_4E7B0A3 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_5513/*"END_PROC"*/);
    byte_4E7B0A3 = 1;
  }
  upRoot = this->fields.upRoot;
  if ( !upRoot
    || (UnityEngine_GameObject__SetActive(upRoot, 0, 0), (upRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_1D0F30C(upRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)upRoot, (System_String_o *)StringLiteral_5513/*"END_PROC"*/, 0);
}


void BattleResultBondsComponent__CreateRewardEffect(
        BattleResultBondsComponent_o *this,
        AssetData_o *data,
        UISprite_o *targetIcon,
        System_String_o *effectName,
        const MethodInfo *method)
{
  BattleResultBondsComponent_o *v8; // x20
  Il2CppObject *Object_object__52624444; // x21
  BattleResultBondsComponent_o *v10; // x21
  BattleResultBondsComponent_o *v11; // x22
  BattleResultBondsComponent_o *v12; // x22
  BattleResultBondsComponent_o *v13; // x22
  int m_CancellationTokenSource; // w8
  BattleResultBondsComponent_o *v15; // x21
  unsigned int v16; // w22

  v8 = this;
  if ( (byte_4E7B098 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_AssetData_GetObject_GameObject____80369792);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
    sub_1D0F0B4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (BattleResultBondsComponent_o *)sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7B098 = 1;
  }
  if ( !data )
    goto LABEL_23;
  Object_object__52624444 = AssetData__GetObject_object__52624444(
                              data,
                              effectName,
                              (const MethodInfo_322FC3C *)Method_AssetData_GetObject_GameObject____80369792);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultBondsComponent_o *)UnityEngine_Object__Instantiate_object_(
                                           Object_object__52624444,
                                           (const MethodInfo_32DD2D0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_23;
  v10 = this;
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !targetIcon )
    goto LABEL_23;
  v11 = this;
  this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetIcon, 0);
  if ( !v11 )
    goto LABEL_23;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v11, (UnityEngine_Transform_o *)this, 0);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0);
  v12 = this;
  if ( !byte_4E70C99 )
  {
    this = (BattleResultBondsComponent_o *)sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
    byte_4E70C99 = 1;
  }
  if ( !v12 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v12,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0);
  v13 = this;
  if ( !byte_4E70C9E )
  {
    this = (BattleResultBondsComponent_o *)sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
    byte_4E70C9E = 1;
  }
  if ( !v13 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v13,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__53121128(
                                           (UnityEngine_GameObject_o *)v10,
                                           (const MethodInfo_32A9068 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
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
        sub_1D0F314(this);
      this = (BattleResultBondsComponent_o *)*((_QWORD *)&v15->fields.parentComp + (int)v16);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0);
      m_CancellationTokenSource = (int)v15->fields.m_CancellationTokenSource;
      if ( (int)++v16 >= m_CancellationTokenSource )
        goto LABEL_21;
    }
LABEL_23:
    sub_1D0F30C(this, data);
  }
LABEL_21:
  this = (BattleResultBondsComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v15,
    (const MethodInfo_395C61C *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void BattleResultBondsComponent__DeleteGetJoinSvtData(const MethodInfo *method)
{
  BattleResultBondsComponent_c *v1; // x0

  if ( (byte_4E7B08D & 1) == 0 )
  {
    sub_1D0F0B4(&BattleResultBondsComponent_TypeInfo);
    byte_4E7B08D = 1;
  }
  v1 = BattleResultBondsComponent_TypeInfo;
  if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
    v1 = BattleResultBondsComponent_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v1->static_fields->GET_EXIST_SVT_KEY, 0);
  UnityEngine_PlayerPrefs__DeleteKey(BattleResultBondsComponent_TypeInfo->static_fields->GET_NEW_SVT_KEY, 0);
}


void BattleResultBondsComponent__FinishUpdateValue(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v4; // x1
  _DWORD *BondsIconArray; // x0
  __int64 v6; // x1
  int v7; // w8
  _DWORD *v8; // x20
  unsigned int v9; // w21
  SePlayer_o *MeterSePlayer; // x0

  if ( (byte_4E7B094 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_9377/*"NEXT"*/);
    sub_1D0F0B4(&iTween_TypeInfo);
    byte_4E7B094 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_65310676(gameObject, 0);
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
        sub_1D0F314(BondsIconArray);
      BondsIconArray = *(_DWORD **)&v8[2 * v9 + 8];
      if ( !BondsIconArray )
        break;
      BattleResultBondsIconComponent__FinishUpdateValue((BattleResultBondsIconComponent_o *)BondsIconArray, 0);
      v7 = v8[6];
      if ( (int)++v9 >= v7 )
        goto LABEL_11;
    }
LABEL_16:
    sub_1D0F30C(BondsIconArray, v6);
  }
LABEL_11:
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0);
  BondsIconArray = this->fields.myFsm;
  this->fields.bondsCountUp = 0;
  if ( !BondsIconArray )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_9377/*"NEXT"*/, 0);
}


BattleResultBondsIconComponent_array *BattleResultBondsComponent__GetBondsIconArray(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_bondsIconArray; // x19
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *bondsList; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  System_Object_array *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4E7B0A0 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
    byte_4E7B0A0 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( this->fields.isMultiDeck )
  {
    p_bondsIconArray = (GrandQuestFolderBoardItem_o *)&this->fields.bondsIconArray;
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.bondsIconArray, 0) )
    {
      v4 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v4,
        (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
      bondsList = (System_Collections_Generic_List_object__o *)this->fields.bondsList;
      if ( !bondsList )
        goto LABEL_17;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v17,
        bondsList,
        (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v17,
                (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
      {
        if ( !v17.fields._current )
          sub_1D0F30C(0, v7);
        BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                          (BattleResultBondsDeckPerWaveComponent_o *)v17.fields._current,
                                                                          0);
        if ( !v4 )
          sub_1D0F30C(BondsIconArray, BondsIconArray);
        System_Collections_Generic_List_object___AddRange(
          v4,
          BondsIconArray,
          (const MethodInfo_395C61C *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v17,
        (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
      if ( !v4 )
LABEL_17:
        sub_1D0F30C(bondsList, v5);
      v9 = System_Collections_Generic_List_object___ToArray(
             v4,
             (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
      p_bondsIconArray->klass = (GrandQuestFolderBoardItem_c *)v9;
      sub_1D0F058(p_bondsIconArray, (int32_t)v9, v10, v11, v12, v13, v14, v15);
    }
  }
  else
  {
    p_bondsIconArray = (GrandQuestFolderBoardItem_o *)&this->fields.collects;
  }
  return (BattleResultBondsIconComponent_array *)p_bondsIconArray->klass;
}


void BattleResultBondsComponent__Init(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *window; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  UnityEngine_Object_o *multiDeckWindow; // x20

  if ( (byte_4E7B08E & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7B08E = 1;
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
  v4 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v4;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.effectUIList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1D0F30C(window, method);
  }
LABEL_14:
  this->fields.isMultiDeck = 0;
  window = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !window )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  UnityEngine_Object_o *multiDeckWindow; // x20
  UnityEngine_Object_o *multiBondsPrefab; // x20
  UnityEngine_Object_o *multiBondsRoot; // x20

  v14 = inIsMultiDeck;
  if ( (byte_4E7B08F & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7B08F = 1;
  }
  this->fields.oldCollections = oldCollects;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.oldCollections,
    (int32_t)oldCollects,
    (int32_t)inRewardInfos,
    (int32_t)resultAsset,
    *(System_String_o **)&baseFriendshipExp,
    (int32_t)getJoinSvts,
    inIsMultiDeck,
    (System_String_o *)method);
  this->fields.rewardInfos = inRewardInfos;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.rewardInfos,
    (int32_t)inRewardInfos,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.resultAssetData = resultAsset;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.resultAssetData,
    (int32_t)resultAsset,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.getJoinSvtList = getJoinSvts;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.getJoinSvtList,
    (int32_t)getJoinSvts,
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
  if ( UnityEngine_Object__op_Equality(multiDeckWindow, 0, 0) )
    goto LABEL_12;
  multiBondsPrefab = (UnityEngine_Object_o *)this->fields.multiBondsPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(multiBondsPrefab, 0, 0) )
    goto LABEL_12;
  multiBondsRoot = (UnityEngine_Object_o *)this->fields.multiBondsRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  int32_t v11; // w24
  BattleResultBondsComponent_o *v12; // x19
  struct BattleResultBondsIconComponent_array *collects; // x8
  struct BattleResultBondsIconComponent_array *v14; // x8
  struct BattleResultBondsIconComponent_array *v15; // x8
  struct BattleResultBondsIconComponent_array *v16; // x8
  struct UISprite_o *bgFrame; // x8
  float v18; // s8
  struct BattleResultBondsIconComponent_array *v19; // x8
  unsigned int v20; // w24
  float v21; // s9
  int v22; // w25
  float v23; // s10
  struct BattleResultBondsIconComponent_array *v24; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x8
  UnityEngine_Object_o *v27; // x20
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  v11 = targetIndex;
  v12 = this;
  if ( (byte_4E7B0A1 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleResultBondsComponent_TypeInfo);
    this = (BattleResultBondsComponent_o *)sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7B0A1 = 1;
  }
  if ( v11 < cnt )
  {
    do
    {
      collects = v12->fields.collects;
      if ( !collects )
        goto LABEL_49;
      if ( (unsigned int)v11 >= LODWORD(collects->max_length) )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)collects->m_Items[v11];
      if ( !this )
        goto LABEL_49;
      BattleResultBondsIconComponent__setServantData((BattleResultBondsIconComponent_o *)this, 0, 0, 0, 0, 0, 0, 0, 0);
      v14 = v12->fields.collects;
      if ( !v14 )
        goto LABEL_49;
      if ( (unsigned int)v11 >= LODWORD(v14->max_length) )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v14->m_Items[v11];
      if ( !this )
        goto LABEL_49;
      BattleResultBondsIconComponent__SetBuddyPointInfo((BattleResultBondsIconComponent_o *)this, 0, 0, 0);
      v15 = v12->fields.collects;
      if ( !v15 )
        goto LABEL_49;
      if ( (unsigned int)v11 >= LODWORD(v15->max_length) )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v15->m_Items[v11];
      if ( !this )
        goto LABEL_49;
      this = (BattleResultBondsComponent_o *)BattleResultBondsIconComponent__ChangeGauge(
                                               (BattleResultBondsIconComponent_o *)this,
                                               0.0,
                                               0);
      v16 = v12->fields.collects;
      if ( !v16 )
        goto LABEL_49;
      if ( (unsigned int)v11 >= LODWORD(v16->max_length) )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v16->m_Items[v11];
      if ( !this )
        goto LABEL_49;
      BattleResultBondsIconComponent__InitBuddyPointInfo((BattleResultBondsIconComponent_o *)this, 0);
    }
    while ( cnt != ++v11 );
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
  v18 = *(float *)&bgFrame->klass;
  if ( !isNoFollower )
  {
    v19 = v12->fields.collects;
    if ( !v19 )
      goto LABEL_49;
    if ( LODWORD(v19->max_length) <= cnt )
LABEL_50:
      sub_1D0F314(this);
    this = (BattleResultBondsComponent_o *)v19->m_Items[cnt];
    if ( !this )
      goto LABEL_49;
    this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  if ( cnt >= 1 )
  {
    v20 = 0;
    v21 = 0.0;
    v22 = 4;
    v23 = (float)(1 - cnt) * 0.5;
    do
    {
      v24 = v12->fields.collects;
      if ( isNoFollower )
        v21 = (float)v22;
      if ( !v24 )
        goto LABEL_49;
      if ( v20 >= LODWORD(v24->max_length) )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v24->m_Items[v20];
      if ( !this )
        goto LABEL_49;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v18 * v23) - v21, 0);
      ++v20;
      v23 = v23 + 1.0;
      v22 -= 2;
    }
    while ( cnt != v20 );
  }
  if ( !battleResult )
    goto LABEL_49;
  buddyPointInfos = battleResult->fields.buddyPointInfos;
  if ( buddyPointInfos && buddyPointInfos->max_length && !isHideBuddyPointResult )
  {
    v27 = (UnityEngine_Object_o *)v12->fields.bgFrame;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v27, 0, 0) )
    {
      this = (BattleResultBondsComponent_o *)v12->fields.bgFrame;
      if ( !this )
        goto LABEL_49;
      UIWidget__set_height((UIWidget_o *)this, v12->fields.buddyPointInfoWindowHeight, 0);
    }
    this = (BattleResultBondsComponent_o *)v12->fields.window;
    if ( !this
      || (this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0)) == 0
      || (v28.fields.x = 0.0,
          v28.fields.y = 13.0,
          v28.fields.z = 0.0,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v28, 0),
          (this = (BattleResultBondsComponent_o *)v12->fields.window) == 0) )
    {
LABEL_49:
      sub_1D0F30C(this, *(_QWORD *)&targetIndex);
    }
    ((void (__fastcall *)(BattleResultBondsComponent_o *, _QWORD))this->klass[1]._1.this_arg.data)(
      this,
      *(_QWORD *)&this->klass[1]._1.this_arg.bits);
  }
}


void BattleResultBondsComponent__Open(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  BattleResultBondsComponent___c_c *v4; // x8
  System_Object_array *v5; // x20
  System_Func_object__bool__o *_9__53_0; // x21
  Il2CppObject *v7; // x22
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL4 isMultiDeck; // w8
  struct BattleWindowComponent_o *v18; // x20
  __int64 *v19; // x8
  BattleWindowComponent_EndCall_o *v20; // x21

  if ( (byte_4E7B092 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_Any_BattleResultBondsIconComponent___);
    sub_1D0F0B4(&Method_BattleResultBondsComponent_OpenEnd__);
    sub_1D0F0B4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1D0F0B4(&System_Func_BattleResultBondsIconComponent__bool__TypeInfo);
    sub_1D0F0B4(&Method_BattleResultBondsComponent___c__Open_b__53_0__);
    sub_1D0F0B4(&BattleResultBondsComponent___c_TypeInfo);
    sub_1D0F0B4(&StringLiteral_5508/*"END_OPEN"*/);
    sub_1D0F0B4(&StringLiteral_12409/*"SKIP"*/);
    byte_4E7B092 = 1;
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
    _9__53_0 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_BattleResultBondsIconComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__53_0, v7, Method_BattleResultBondsComponent___c__Open_b__53_0__, 0);
    static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Func_BattleResultBondsIconComponent__bool__o *)_9__53_0;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__53_0,
      (int32_t)_9__53_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( BasicHelper__Any_object__52659096(
         v5,
         (System_Func_T__bool__o *)_9__53_0,
         (const MethodInfo_3238398 *)Method_BasicHelper_Any_BattleResultBondsIconComponent___) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      isMultiDeck = this->fields.isMultiDeck;
      this->fields.openBoundsFlg = 0;
      this->fields.colIndex = 0;
      this->fields.bondsCountUp = 1;
      v18 = isMultiDeck ? this->fields.multiDeckWindow : this->fields.window;
      v20 = (BattleWindowComponent_EndCall_o *)sub_1D0F300(BattleWindowComponent_EndCall_TypeInfo);
      BattleWindowComponent_EndCall___ctor(
        v20,
        (Il2CppObject *)this,
        (intptr_t)Method_BattleResultBondsComponent_OpenEnd__,
        0);
      if ( v18 )
      {
        ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))v18->klass->vtable._10_Open.methodPtr)(
          v18,
          v20,
          v18->klass->vtable._10_Open.method);
        gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
        if ( gameObject )
        {
          v19 = &StringLiteral_5508/*"END_OPEN"*/;
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    sub_1D0F30C(gameObject, v15);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !gameObject )
    goto LABEL_20;
  v19 = &StringLiteral_12409/*"SKIP"*/;
LABEL_19:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)*v19, 0);
}


void BattleResultBondsComponent__OpenEnd(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Object_array *v12; // x21
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  BattleResultBondsIconComponent_array *v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  BattleResultBondsIconComponent_array *v34; // x22
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  __int64 v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  __int64 v48; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  __int64 v55; // x1
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  __int64 v62; // x1
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  __int64 v69; // x1
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  BattleResultBondsIconComponent_array *v76; // x22
  System_Collections_Hashtable_o *v77; // x0
  const MethodInfo *v78; // x1
  int max_length; // w8
  BattleResultBondsIconComponent_array *v80; // x20
  unsigned int v81; // w21
  _QWORD *v82; // x0
  System_Reflection_MethodBase_o *v83; // x20
  System_String_o *CommonSeName; // x0
  struct SePlayer_o *v85; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  System_String_o *v88; // x4
  int32_t v89; // w5
  int64_t v90; // x6
  System_String_o *v91; // x7
  __int64 v92; // x0
  int v93; // [xsp+Ch] [xbp-44h] BYREF
  int v94; // [xsp+18h] [xbp-38h] BYREF
  int v95; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4E7B093 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BattleResultBondsComponent_OpenEnd__);
    sub_1D0F0B4(&object___TypeInfo);
    sub_1D0F0B4(&SeManager_TypeInfo);
    sub_1D0F0B4(&float_TypeInfo);
    sub_1D0F0B4(&StringLiteral_20056/*"from"*/);
    sub_1D0F0B4(&StringLiteral_24569/*"time"*/);
    sub_1D0F0B4(&StringLiteral_22876/*"onupdate"*/);
    sub_1D0F0B4(&StringLiteral_15404/*"UpdateValue"*/);
    sub_1D0F0B4(&StringLiteral_24609/*"to"*/);
    sub_1D0F0B4(&StringLiteral_22868/*"oncomplete"*/);
    sub_1D0F0B4(&StringLiteral_6805/*"FinishUpdateValue"*/);
    sub_1D0F0B4(&iTween_TypeInfo);
    byte_4E7B093 = 1;
  }
  if ( !this->fields.bondsCountUp )
    return;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1D0F15C(object___TypeInfo, 10);
  if ( !BondsIconArray )
LABEL_65:
    sub_1D0F30C(BondsIconArray, v5);
  v12 = (System_Object_array *)BondsIconArray;
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_20056/*"from"*/;
  if ( StringLiteral_20056/*"from"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1D0F1F0(
                                                               StringLiteral_20056/*"from"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v13 = StringLiteral_20056/*"from"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( !LODWORD(v12->max_length) )
    goto LABEL_64;
  v12->m_Items[0] = (Il2CppObject *)v13;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)v12->m_Items, v13, v6, v7, v8, v9, v10, v11);
  v95 = 0;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v95);
  v20 = BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1D0F1F0(
                                                               BondsIconArray,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
  }
  if ( LODWORD(v12->max_length) <= 1 )
    goto LABEL_64;
  v12->m_Items[1] = &v20->obj;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v12->m_Items[1], (int32_t)v20, v14, v15, v16, v17, v18, v19);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_24609/*"to"*/;
  if ( StringLiteral_24609/*"to"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1D0F1F0(
                                                               StringLiteral_24609/*"to"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v27 = StringLiteral_24609/*"to"*/;
  }
  else
  {
    v27 = 0;
  }
  if ( LODWORD(v12->max_length) <= 2 )
    goto LABEL_64;
  v12->m_Items[2] = (Il2CppObject *)v27;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v12->m_Items[2], v27, v21, v22, v23, v24, v25, v26);
  v94 = 1065353216;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v94);
  v34 = BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1D0F1F0(
                                                               BondsIconArray,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
  }
  if ( LODWORD(v12->max_length) <= 3 )
    goto LABEL_64;
  v12->m_Items[3] = &v34->obj;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v12->m_Items[3], (int32_t)v34, v28, v29, v30, v31, v32, v33);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22876/*"onupdate"*/;
  if ( StringLiteral_22876/*"onupdate"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1D0F1F0(
                                                               StringLiteral_22876/*"onupdate"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v41 = StringLiteral_22876/*"onupdate"*/;
  }
  else
  {
    v41 = 0;
  }
  if ( LODWORD(v12->max_length) <= 4 )
    goto LABEL_64;
  v12->m_Items[4] = (Il2CppObject *)v41;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v12->m_Items[4], v41, v35, v36, v37, v38, v39, v40);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_15404/*"UpdateValue"*/;
  if ( StringLiteral_15404/*"UpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1D0F1F0(
                                                               StringLiteral_15404/*"UpdateValue"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v48 = StringLiteral_15404/*"UpdateValue"*/;
  }
  else
  {
    v48 = 0;
  }
  if ( LODWORD(v12->max_length) <= 5 )
    goto LABEL_64;
  v12->m_Items[5] = (Il2CppObject *)v48;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v12->m_Items[5], v48, v42, v43, v44, v45, v46, v47);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22868/*"oncomplete"*/;
  if ( StringLiteral_22868/*"oncomplete"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1D0F1F0(
                                                               StringLiteral_22868/*"oncomplete"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v55 = StringLiteral_22868/*"oncomplete"*/;
  }
  else
  {
    v55 = 0;
  }
  if ( LODWORD(v12->max_length) <= 6 )
    goto LABEL_64;
  v12->m_Items[6] = (Il2CppObject *)v55;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v12->m_Items[6], v55, v49, v50, v51, v52, v53, v54);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_6805/*"FinishUpdateValue"*/;
  if ( StringLiteral_6805/*"FinishUpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1D0F1F0(
                                                               StringLiteral_6805/*"FinishUpdateValue"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v62 = StringLiteral_6805/*"FinishUpdateValue"*/;
  }
  else
  {
    v62 = 0;
  }
  if ( LODWORD(v12->max_length) <= 7 )
    goto LABEL_64;
  v12->m_Items[7] = (Il2CppObject *)v62;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v12->m_Items[7], v62, v56, v57, v58, v59, v60, v61);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_24569/*"time"*/;
  if ( StringLiteral_24569/*"time"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1D0F1F0(
                                                               StringLiteral_24569/*"time"*/,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v69 = StringLiteral_24569/*"time"*/;
  }
  else
  {
    v69 = 0;
  }
  if ( LODWORD(v12->max_length) <= 8 )
    goto LABEL_64;
  v12->m_Items[8] = (Il2CppObject *)v69;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v12->m_Items[8], v69, v63, v64, v65, v66, v67, v68);
  v93 = 1072064102;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v93);
  v76 = BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1D0F1F0(
                                                               BondsIconArray,
                                                               v12->obj.klass->_1.element_class);
    if ( !BondsIconArray )
    {
LABEL_66:
      v92 = sub_1D0F330(BondsIconArray);
      sub_1D0F1DC(v92, 0);
    }
  }
  if ( LODWORD(v12->max_length) <= 9 )
    goto LABEL_64;
  v12->m_Items[9] = &v76->obj;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v12->m_Items[9], (int32_t)v76, v70, v71, v72, v73, v74, v75);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v77 = iTween__Hash(v12, 0);
  iTween__ValueTo(gameObject, v77, 0);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v78);
  if ( !BondsIconArray )
    goto LABEL_65;
  max_length = BondsIconArray->max_length;
  v80 = BondsIconArray;
  if ( max_length >= 1 )
  {
    v81 = 0;
    while ( v81 < max_length )
    {
      BondsIconArray = (BattleResultBondsIconComponent_array *)v80->m_Items[v81];
      if ( !BondsIconArray )
        goto LABEL_65;
      BattleResultBondsIconComponent__StartUpdateBuddyPoint((BattleResultBondsIconComponent_o *)BondsIconArray, 0);
      max_length = v80->max_length;
      if ( (int)++v81 >= max_length )
        goto LABEL_57;
    }
LABEL_64:
    sub_1D0F314(BondsIconArray);
  }
LABEL_57:
  if ( this->fields.updateFlg )
  {
    v82 = Method_BattleResultBondsComponent_OpenEnd__;
    if ( (*((_BYTE *)Method_BattleResultBondsComponent_OpenEnd__ + 83) & 2) != 0 )
      v82 = (_QWORD *)sub_1D0F0CC(Method_BattleResultBondsComponent_OpenEnd__);
    v83 = (System_Reflection_MethodBase_o *)sub_1D0F098(v82, v82[4]);
    if ( !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    CommonSeName = SeManager__GetCommonSeName(15, 0);
    v85 = OverwriteAssetSoundName__PlaySe(v83, CommonSeName, 0, 0);
    this->fields.MeterSePlayer = v85;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.MeterSePlayer, (int32_t)v85, v86, v87, v88, v89, v90, v91);
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
  __int64 v22; // x8
  __int64 v23; // x26
  struct BattleInfoData_o *v24; // x9
  __int64 maxWave; // x27
  BattleUserServantData_array *userSvt; // x24
  unsigned __int64 v27; // x8
  unsigned int v28; // w9
  signed __int64 v29; // x29
  System_Collections_Generic_List_object__o *v30; // x20
  __int64 v31; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  System_Object_array *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  const MethodInfo *v40; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_4E7B090 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
    byte_4E7B090 = 1;
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
    goto LABEL_25;
  questphase_ent = battleData->fields.questphase_ent;
  if ( !questphase_ent )
    goto LABEL_25;
  battle_info = battleData->fields.battle_info;
  questphase_ent = (QuestPhaseEntity_o *)QuestPhaseEntity__IsWaveSetupSwitchParty(questphase_ent, 0);
  if ( !battle_info )
    goto LABEL_25;
  v22 = 240;
  if ( ((unsigned __int8)questphase_ent & 1) != 0 )
    v22 = 248;
  v23 = *(__int64 *)((char *)&battle_info->klass + v22);
  if ( !v23 )
    goto LABEL_25;
  v24 = battleData->fields.battle_info;
  if ( !v24 )
    goto LABEL_25;
  maxWave = *(_QWORD *)(v23 + 24);
  if ( (int)maxWave >= 1 )
  {
    userSvt = v24->fields.userSvt;
    v27 = 0;
    v28 = *(_QWORD *)(v23 + 24);
    do
    {
      if ( v27 >= v28 )
        sub_1D0F314(questphase_ent);
      v29 = v27 + 1;
      BattleResultBondsComponent__SetResultDataLocal(
        this,
        *(DeckData_o **)(v23 + 32 + 8 * v27),
        oldCollects,
        followerType,
        userSvt,
        battleResult,
        isHideBuddyPointResult,
        battleData,
        v27 + 1,
        maxWave,
        v40);
      v28 = *(_DWORD *)(v23 + 24);
      v27 = v29;
    }
    while ( v29 < (int)v28 );
  }
  v30 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  questphase_ent = (QuestPhaseEntity_o *)this->fields.bondsList;
  if ( !questphase_ent )
    goto LABEL_25;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)questphase_ent,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
  {
    if ( !v41.fields._current )
      sub_1D0F30C(0, v31);
    BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                      (BattleResultBondsDeckPerWaveComponent_o *)v41.fields._current,
                                                                      0);
    if ( !v30 )
      sub_1D0F30C(BondsIconArray, BondsIconArray);
    System_Collections_Generic_List_object___AddRange(
      v30,
      BondsIconArray,
      (const MethodInfo_395C61C *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
  if ( !v30 )
LABEL_25:
    sub_1D0F30C(questphase_ent, v20);
  v33 = System_Collections_Generic_List_object___ToArray(
          v30,
          (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
  this->fields.bondsIconArray = (struct BattleResultBondsIconComponent_array *)v33;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.bondsIconArray, (int32_t)v33, v34, v35, v36, v37, v38, v39);
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
  System_Func_object__bool__o *_9__49_0; // x21
  Il2CppObject *v27; // x22
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Collections_Generic_List_TSource__o *v36; // x0
  System_Collections_Generic_List_object__o *v37; // x20
  BattleResultBondsComponent_c *v38; // x0
  BattleResultBondsComponent_c *v39; // x0
  Il2CppObject *String_73317788; // x21
  System_Collections_Generic_IEnumerable_T__o *v41; // x0
  BattleResultBondsComponent_c *v42; // x0
  System_String_o *GET_NEW_SVT_KEY; // x21
  System_Object_array *v44; // x20
  System_String_o *v45; // x0
  BattleResultBondsComponent___c_c *v46; // x0
  System_Collections_Generic_IEnumerable_TSource__o *getJoinSvts; // x20
  System_Func_object__bool__o *_9__49_1; // x21
  Il2CppObject *v49; // x22
  struct BattleResultBondsComponent___c_StaticFields *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  System_Collections_Generic_List_TSource__o *v58; // x0
  System_Collections_Generic_List_object__o *v59; // x20
  BattleResultBondsComponent_c *v60; // x0
  BattleResultBondsComponent_c *v61; // x0
  Il2CppObject *v62; // x21
  System_Collections_Generic_IEnumerable_T__o *v63; // x0
  BattleResultBondsComponent_c *v64; // x0
  System_String_o *GET_EXIST_SVT_KEY; // x21
  System_Object_array *v66; // x20
  System_String_o *v67; // x0
  struct BattleDeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v70; // w22
  int32_t v71; // w27
  BattleDeckServantData_o *v72; // x21
  BattleResultBondsComponent_o *v73; // x19
  BattleResultBondsComponent___c__DisplayClass49_0_o *v74; // x28
  int64_t userSvtId; // x2
  BattleResultBondsComponent_o *SvtId; // x0
  const MethodInfo *v77; // x3
  UserServantCollectionEntity_o *v78; // x24
  ServantEntity_o *v79; // x27
  int32_t v80; // w26
  int v81; // w8
  int32_t v82; // w25
  unsigned int v83; // w29
  BattleUserServantData_o *v84; // x20
  __int128 v85; // q0
  const MethodInfo *v86; // x5
  int32_t afterLimitCount; // w20
  BattleResultBondsIconComponent_o *v88; // x20
  int32_t IconLimitCount; // w0
  int afterIconLimitCount; // w8
  bool v91; // zf
  bool v92; // zf
  System_Object_array *buddyPointInfos; // x21
  BattleBuddyPointInfo_o *v94; // x29
  System_Func_object__bool__o *v95; // x29
  BattleResultBondsIconComponent_o *v96; // x21
  struct BattleResultBondsIconComponent_array *v97; // x8
  bool v98; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  bool v100; // w20
  bool updateFlg; // w20
  struct BattleResultBondsIconComponent_array *v102; // x8
  int32_t v103; // w2
  int32_t v104; // w3
  System_String_o *v105; // x4
  int32_t v106; // w5
  int64_t v107; // x6
  System_String_o *v108; // x7
  __int64 v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  __int64 v112; // x8
  int32_t cnt; // [xsp+1Ch] [xbp-114h]
  ServantLimitImageMaster_o *svtLimitImageMaster; // [xsp+20h] [xbp-110h]
  UserServantCollectionMaster_o *MasterData_object; // [xsp+30h] [xbp-100h]
  Il2CppObject *v117; // [xsp+38h] [xbp-F8h]
  Il2CppObject *v118; // [xsp+40h] [xbp-F0h]
  int32_t Type; // [xsp+54h] [xbp-DCh]
  BattleResultBondsDeckPerWaveComponent_o *Object_object; // [xsp+58h] [xbp-D8h]
  BattleData_o *battleDataa; // [xsp+60h] [xbp-D0h]
  struct BattleDeckServantData_array *v123; // [xsp+68h] [xbp-C8h]
  int32_t v125; // [xsp+7Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v126; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v127; // [xsp+A0h] [xbp-90h]
  Il2CppObject *entity; // [xsp+C8h] [xbp-68h] BYREF

  if ( (byte_4E7B091 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    sub_1D0F0B4(&Method_BasicHelper_Find_BattleBuddyPointInfo___);
    sub_1D0F0B4(&BattleResultBondsComponent_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToList_GetSvts___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_GetSvts___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
    sub_1D0F0B4(&System_Func_GetSvts__bool__TypeInfo);
    sub_1D0F0B4(&System_Func_BattleBuddyPointInfo__bool__TypeInfo);
    sub_1D0F0B4(&System_Func_QuestRewardInfo__bool__TypeInfo);
    sub_1D0F0B4(&Method_JsonManager_DeserializeArray_GetSvts___);
    sub_1D0F0B4(&Method_JsonManager_DeserializeArray_QuestRewardInfo___);
    sub_1D0F0B4(&JsonManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GetSvts__AddRange__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GetSvts__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GetSvts__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__);
    sub_1D0F0B4(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__);
    sub_1D0F0B4(&Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__);
    sub_1D0F0B4(&BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo);
    sub_1D0F0B4(&BattleResultBondsComponent___c_TypeInfo);
    byte_4E7B091 = 1;
  }
  entity = 0;
  Type = Follower__getType(followerType, 0);
  if ( Type )
    v16 = 5;
  else
    v16 = 6;
  cnt = v16;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  MasterData_object = (UserServantCollectionMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v19 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v20 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( this->fields.isMultiDeck )
  {
    Instance = (int64_t)this->fields.multiBondsRoot;
    if ( !Instance )
      goto LABEL_157;
    multiBondsPrefab = (Il2CppObject *)this->fields.multiBondsPrefab;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
    Object_object = (BattleResultBondsDeckPerWaveComponent_o *)BaseMonoBehaviour__createObject_object_(
                                                                 (BaseMonoBehaviour_o *)this,
                                                                 multiBondsPrefab,
                                                                 transform,
                                                                 0,
                                                                 (const MethodInfo_3237A50 *)Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    if ( this->fields.isMultiDeck )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      svtLimitImageMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      goto LABEL_17;
    }
  }
  else
  {
    Object_object = 0;
  }
  svtLimitImageMaster = 0;
LABEL_17:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)battleData, 0, 0);
  if ( (Instance & 1) != 0 )
  {
    if ( !battleData )
      goto LABEL_157;
    Instance = BattleData__IsWarBoard(battleData, 0);
    this->fields.isWarboard = Instance & 1;
    if ( (Instance & 1) != 0 )
    {
      if ( !battleResult )
        goto LABEL_157;
      rewardInfos = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.rewardInfos;
      v25 = BattleResultBondsComponent___c_TypeInfo;
      if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v25 = BattleResultBondsComponent___c_TypeInfo;
      }
      _9__49_0 = (System_Func_object__bool__o *)v25->static_fields->__9__49_0;
      if ( !_9__49_0 )
      {
        if ( !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          v25 = BattleResultBondsComponent___c_TypeInfo;
        }
        v27 = (Il2CppObject *)v25->static_fields->__9;
        _9__49_0 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_QuestRewardInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__49_0,
          v27,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__,
          0);
        static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
        static_fields->__9__49_0 = (struct System_Func_QuestRewardInfo__bool__o *)_9__49_0;
        sub_1D0F058(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__49_0,
          (int32_t)_9__49_0,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
      }
      v35 = System_Linq_Enumerable__Where_object_(
              rewardInfos,
              (System_Func_TSource__bool__o *)_9__49_0,
              (const MethodInfo_329781C *)Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
      v36 = System_Linq_Enumerable__ToList_object_(
              v35,
              (const MethodInfo_329539C *)Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
      if ( v36 )
      {
        v37 = (System_Collections_Generic_List_object__o *)v36;
        if ( v36->fields._size >= 1 )
        {
          v38 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v38 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v38->static_fields->GET_NEW_SVT_KEY, 0) )
          {
            v39 = BattleResultBondsComponent_TypeInfo;
            if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v39 = BattleResultBondsComponent_TypeInfo;
            }
            String_73317788 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_73317788(
                                                v39->static_fields->GET_NEW_SVT_KEY,
                                                0);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v41 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_object_(
                                                                   String_73317788,
                                                                   (const MethodInfo_32C03D4 *)Method_JsonManager_DeserializeArray_QuestRewardInfo___);
            System_Collections_Generic_List_object___AddRange(
              v37,
              v41,
              (const MethodInfo_395C61C *)Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
          }
          v42 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v42 = BattleResultBondsComponent_TypeInfo;
          }
          GET_NEW_SVT_KEY = v42->static_fields->GET_NEW_SVT_KEY;
          v44 = System_Collections_Generic_List_object___ToArray(
                  v37,
                  (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v45 = JsonManager__toJson(&v44->obj, 0, 0, 0);
          UnityEngine_PlayerPrefs__SetString(GET_NEW_SVT_KEY, v45, 0);
        }
      }
      v46 = BattleResultBondsComponent___c_TypeInfo;
      getJoinSvts = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.getJoinSvts;
      if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v46 = BattleResultBondsComponent___c_TypeInfo;
      }
      _9__49_1 = (System_Func_object__bool__o *)v46->static_fields->__9__49_1;
      if ( !_9__49_1 )
      {
        if ( !v46->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v46);
          v46 = BattleResultBondsComponent___c_TypeInfo;
        }
        v49 = (Il2CppObject *)v46->static_fields->__9;
        _9__49_1 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_GetSvts__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__49_1,
          v49,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__,
          0);
        v50 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        v50->__9__49_1 = (struct System_Func_GetSvts__bool__o *)_9__49_1;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)&v50->__9__49_1, (int32_t)_9__49_1, v51, v52, v53, v54, v55, v56);
      }
      v57 = System_Linq_Enumerable__Where_object_(
              getJoinSvts,
              (System_Func_TSource__bool__o *)_9__49_1,
              (const MethodInfo_329781C *)Method_System_Linq_Enumerable_Where_GetSvts___);
      v58 = System_Linq_Enumerable__ToList_object_(
              v57,
              (const MethodInfo_329539C *)Method_System_Linq_Enumerable_ToList_GetSvts___);
      if ( v58 )
      {
        v59 = (System_Collections_Generic_List_object__o *)v58;
        if ( v58->fields._size >= 1 )
        {
          v60 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v60 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v60->static_fields->GET_EXIST_SVT_KEY, 0) )
          {
            v61 = BattleResultBondsComponent_TypeInfo;
            if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v61 = BattleResultBondsComponent_TypeInfo;
            }
            v62 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_73317788(v61->static_fields->GET_EXIST_SVT_KEY, 0);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v63 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_object_(
                                                                   v62,
                                                                   (const MethodInfo_32C03D4 *)Method_JsonManager_DeserializeArray_GetSvts___);
            System_Collections_Generic_List_object___AddRange(
              v59,
              v63,
              (const MethodInfo_395C61C *)Method_System_Collections_Generic_List_GetSvts__AddRange__);
          }
          v64 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v64 = BattleResultBondsComponent_TypeInfo;
          }
          GET_EXIST_SVT_KEY = v64->static_fields->GET_EXIST_SVT_KEY;
          v66 = System_Collections_Generic_List_object___ToArray(
                  v59,
                  (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_GetSvts__ToArray__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v67 = JsonManager__toJson(&v66->obj, 0, 0, 0);
          UnityEngine_PlayerPrefs__SetString(GET_EXIST_SVT_KEY, v67, 0);
        }
      }
      UnityEngine_PlayerPrefs__Save(0);
    }
  }
  if ( !myDeck )
    goto LABEL_157;
  svts = myDeck->fields.svts;
  if ( !svts )
    goto LABEL_157;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v70 = 0;
    v71 = 0;
    battleDataa = battleData;
    v123 = svts;
    v117 = v20;
    v118 = v19;
    while ( 1 )
    {
      if ( v70 >= max_length )
LABEL_158:
        sub_1D0F314(Instance);
      v72 = svts->m_Items[v70];
      v73 = this;
      v74 = (BattleResultBondsComponent___c__DisplayClass49_0_o *)sub_1D0F300(BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo);
      BattleResultBondsComponent___c__DisplayClass49_0___ctor(v74, 0);
      if ( !v72 )
        goto LABEL_157;
      if ( !v74 )
        goto LABEL_157;
      userSvtId = v72->fields.userSvtId;
      v74->fields.userSvtId = userSvtId;
      if ( !v19 )
        goto LABEL_157;
      Instance = DataMasterBase_object__object__long___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                   &entity,
                   userSvtId,
                   (const MethodInfo_3538378 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( (Instance & 1) != 0 )
      {
        Instance = (int64_t)entity;
        if ( !entity )
          goto LABEL_157;
        SvtId = (BattleResultBondsComponent_o *)UserServantEntity__getSvtId((UserServantEntity_o *)entity, 0);
        Instance = (int64_t)BattleResultBondsComponent__getServantCollection(SvtId, oldCollects, (int32_t)SvtId, v77);
        if ( !entity )
          goto LABEL_157;
        v78 = (UserServantCollectionEntity_o *)Instance;
        v125 = v71;
        Instance = UserServantEntity__GetServantId((UserServantEntity_o *)entity, -1, 0);
        if ( !v20 )
          goto LABEL_157;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v20,
                              Instance,
                              (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !entity )
          goto LABEL_157;
        v79 = (ServantEntity_o *)Instance;
        Instance = UserServantEntity__getIconLimitCount((UserServantEntity_o *)entity, 0, 0);
        if ( !entity )
          goto LABEL_157;
        v80 = Instance;
        Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)entity, 0, 0);
        if ( !usrSvts )
          goto LABEL_157;
        v81 = usrSvts->max_length;
        v82 = Instance;
        if ( v81 < 1 )
        {
LABEL_89:
          afterLimitCount = -1;
        }
        else
        {
          v83 = 0;
          while ( 1 )
          {
            if ( v83 >= v81 )
              goto LABEL_158;
            v84 = usrSvts->m_Items[v83];
            if ( !v84 )
              goto LABEL_157;
            v85 = *(_OWORD *)&v84->fields.id.fields.fakeValue;
            *(_OWORD *)&v127.fields.currentCryptoKey = *(_OWORD *)&v84->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v127.fields.fakeValue = v85;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v126 = v127;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v126, 0);
            if ( Instance == v74->fields.userSvtId )
              break;
            v81 = usrSvts->max_length;
            if ( (int)++v83 >= v81 )
              goto LABEL_89;
          }
          if ( v73->fields.isMultiDeck )
            BattleResultBondsComponent__UpdateAfterLimitCount(
              (BattleResultBondsComponent_o *)Instance,
              battleDataa,
              v84,
              v72,
              svtLimitImageMaster,
              v86);
          IconLimitCount = UserServantEntity__getIconLimitCount((UserServantEntity_o *)v84, 0, 0);
          afterIconLimitCount = v84->fields.afterIconLimitCount;
          v91 = afterIconLimitCount < 0 || IconLimitCount == afterIconLimitCount;
          v80 = v91 ? IconLimitCount : v84->fields.afterIconLimitCount;
          Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v84, 0, 0);
          afterLimitCount = v84->fields.afterLimitCount;
          v92 = afterLimitCount < 0 || (_DWORD)Instance == afterLimitCount;
          v82 = v92 ? Instance : afterLimitCount;
        }
        if ( !battleResult )
          goto LABEL_157;
        buddyPointInfos = (System_Object_array *)battleResult->fields.buddyPointInfos;
        if ( buddyPointInfos )
        {
          v94 = 0;
          if ( buddyPointInfos->max_length && !isHideBuddyPointResult )
          {
            v95 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_BattleBuddyPointInfo__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v95,
              (Il2CppObject *)v74,
              Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__,
              0);
            Instance = (int64_t)BasicHelper__Find_object_(
                                  buddyPointInfos,
                                  (System_Func_T__bool__o *)v95,
                                  (const MethodInfo_3238EB8 *)Method_BasicHelper_Find_BattleBuddyPointInfo___);
            v94 = (BattleBuddyPointInfo_o *)Instance;
          }
        }
        else
        {
          v94 = 0;
        }
        this = v73;
        if ( v73->fields.isMultiDeck )
        {
          Instance = (int64_t)Object_object;
          if ( !Object_object )
            goto LABEL_157;
          Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, 0);
          v96 = (BattleResultBondsIconComponent_o *)Instance;
          if ( !Instance )
            goto LABEL_157;
        }
        else
        {
          v97 = v73->fields.collects;
          if ( !v97 )
            goto LABEL_157;
          if ( (unsigned int)v125 >= LODWORD(v97->max_length) )
            goto LABEL_158;
          v96 = v97->m_Items[v125];
          if ( !v96 )
            goto LABEL_157;
        }
        BattleResultBondsIconComponent__setServantData(
          v96,
          v78,
          (UserServantEntity_o *)entity,
          v80,
          v82,
          v73->fields.baseFriendshipExp,
          Type == 0,
          afterLimitCount,
          0);
        BattleResultBondsIconComponent__SetBuddyPointInfo(v96, v94, battleResult->fields.eventId, 0);
        if ( !v79 )
          goto LABEL_157;
        v98 = ServantEntity__checkIsHeroineSvt(v79, 0);
        battleData = battleDataa;
        v20 = v117;
        v19 = v118;
        v71 = v125;
        if ( !v98 )
          goto LABEL_127;
        Instance = (int64_t)entity;
        if ( !entity )
          goto LABEL_157;
        if ( !UserServantEntity__IsAddFriendShipHeroine((UserServantEntity_o *)entity, 0) )
        {
          updateFlg = v73->fields.updateFlg;
          v73->fields.updateFlg = updateFlg | BattleResultBondsIconComponent__setNextServantData(v96, v78, 0);
          BattleResultBondsIconComponent__SetIsNoFriendship(v96, 0);
        }
        else
        {
LABEL_127:
          Instance = (int64_t)MasterData_object;
          if ( !MasterData_object )
            goto LABEL_157;
          EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                               MasterData_object,
                               v96->fields.userId,
                               v96->fields.svtId,
                               0);
          v100 = v73->fields.updateFlg;
          v73->fields.updateFlg = v100 | BattleResultBondsIconComponent__setNextServantData(v96, EntityDefinitely, 0);
        }
        BattleResultBondsIconComponent__ChangeGauge(v96, 0.0, 0);
        BattleResultBondsIconComponent__InitBuddyPointInfo(v96, 0);
        svts = v123;
        if ( v73->fields.isMultiDeck )
        {
          Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v96, 0);
          if ( !Instance )
            goto LABEL_157;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
        }
      }
      else
      {
        if ( !battleData )
          goto LABEL_157;
        Instance = BattleData__IsInterruptionQuest(battleData, 0);
        this = v73;
        if ( (Instance & 1) == 0 )
          goto LABEL_139;
        if ( v73->fields.isMultiDeck )
        {
          Instance = (int64_t)Object_object;
          if ( !Object_object )
            goto LABEL_157;
          Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, 0);
          v88 = (BattleResultBondsIconComponent_o *)Instance;
          if ( !Instance )
            goto LABEL_157;
        }
        else
        {
          v102 = v73->fields.collects;
          if ( !v102 )
            goto LABEL_157;
          if ( (unsigned int)v71 >= LODWORD(v102->max_length) )
            goto LABEL_158;
          v88 = v102->m_Items[v71];
          if ( !v88 )
            goto LABEL_157;
        }
        BattleResultBondsIconComponent__setServantData(v88, 0, 0, 0, 0, 0, 0, 0, 0);
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v88, 0);
        if ( !Instance )
          goto LABEL_157;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
        svts = v123;
      }
      ++v71;
LABEL_139:
      max_length = svts->max_length;
      if ( (int)++v70 >= max_length )
        goto LABEL_142;
    }
  }
  v71 = 0;
LABEL_142:
  if ( !this->fields.isMultiDeck )
  {
    BattleResultBondsComponent__NormalBondsInit(this, v71, cnt, Type == 0, battleResult, isHideBuddyPointResult, v23);
    return;
  }
  if ( !battleData )
    goto LABEL_157;
  Instance = (int64_t)battleData->fields.questphase_ent;
  if ( !Instance )
    goto LABEL_157;
  Instance = QuestPhaseEntity__IsWaveSetupSwitchParty((QuestPhaseEntity_o *)Instance, 0);
  if ( !Object_object )
    goto LABEL_157;
  if ( (Instance & 1) != 0 )
    BattleResultBondsDeckPerWaveComponent__SetPartyName(Object_object, currentWave, 0);
  else
    BattleResultBondsDeckPerWaveComponent__SetWaveCount(Object_object, currentWave, maxWave, 0);
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object_object, 0);
  if ( !Instance )
    goto LABEL_157;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  BattleResultBondsDeckPerWaveComponent__RepositionIcons(Object_object, 0);
  Instance = (int64_t)this->fields.multiBondsRoot;
  if ( !Instance
    || ((*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
          Instance,
          *(_QWORD *)(*(_QWORD *)Instance + 448LL)),
        (Instance = (int64_t)this->fields.bondsList) == 0)
    || (v109 = *(_QWORD *)(Instance + 16),
        v110 = Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__,
        ++*(_DWORD *)(Instance + 28),
        !v109) )
  {
LABEL_157:
    sub_1D0F30C(Instance, v18);
  }
  v111 = *(int *)(Instance + 24);
  if ( (unsigned int)v111 >= *(_DWORD *)(v109 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)Object_object,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
  }
  else
  {
    v112 = v109 + 8 * v111;
    *(_DWORD *)(Instance + 24) = v111 + 1;
    *(_QWORD *)(v112 + 32) = Object_object;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v112 + 32), (int32_t)Object_object, v103, v104, v105, v106, v107, v108);
  }
}


void BattleResultBondsComponent__SkipUpdateValue(BattleResultBondsComponent_o *this, const MethodInfo *method)
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
        sub_1D0F314(BondsIconArray);
      BondsIconArray = (BattleResultBondsIconComponent_array *)v6->m_Items[v7];
      if ( !BondsIconArray )
        break;
      BattleResultBondsIconComponent__FinishBuddyPointInfoUpdate((BattleResultBondsIconComponent_o *)BondsIconArray, 0);
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_7;
    }
LABEL_9:
    sub_1D0F30C(BondsIconArray, v4);
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

  if ( (byte_4E7B0A2 & 1) == 0 )
  {
    sub_1D0F0B4(&ImageLimitCount_TypeInfo);
    this = (BattleResultBondsComponent_o *)sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E7B0A2 = 1;
  }
  if ( !userSvtData )
    goto LABEL_26;
  if ( userSvtData->fields.afterLimitCount && userSvtData->fields.afterIconLimitCount )
    return;
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
  v14 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v14;
  *(_QWORD *)&v26.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v26, 0);
  this = (BattleResultBondsComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                           userSvtData->fields.limitCount,
                                           0);
  if ( !svtLimitImageMaster )
LABEL_26:
    sub_1D0F30C(this, battleData);
  if ( ServantLimitImageMaster__IsServantLimitCountSeal(svtLimitImageMaster, v15, (int32_t)this, 0) )
  {
    v17 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v27.fields.currentCryptoKey = v17;
    *(_QWORD *)&v27.fields.fakeValue = v16;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v27, 0);
    IconLimitCount = UserServantEntity__getIconLimitCount((UserServantEntity_o *)userSvtData, 0, 0);
    ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                   svtLimitImageMaster,
                                   v18,
                                   IconLimitCount,
                                   0);
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
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v28, 0);
      afterLimitCount = userSvtData->fields.afterLimitCount;
      v25 = v23;
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      ServantImageLimitSealAfter = ImageLimitCount__GetImageLimitCount(v25, afterLimitCount, 0);
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
        sub_1D0F314(BondsIconArray);
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
LABEL_9:
    sub_1D0F30C(BondsIconArray, v5);
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
    sub_1D0F314(this);
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
    sub_1D0F30C(this, method);
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
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *Object; // x0
  __int64 v16; // x1
  UnityEngine_GameObject_o *v17; // x20
  Il2CppObject *ComponentInChildren_object; // x23
  BattleResultBondsComponent_c *v19; // x0
  Il2CppObject *v20; // x25
  bool v21; // w0
  int32_t v22; // w2
  int32_t v23; // w3
  MethodInfo *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  UISprite_o *v28; // x0
  int32_t v29; // w1
  UnityEngine_Transform_o *transform; // x21
  float v31; // s8
  float y; // s9
  float v33; // s0
  float v34; // s1
  intptr_t m_CachedPtr; // x8
  _QWORD *v36; // x9
  __int64 klass_low; // x10
  intptr_t v38; // x8
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E7B097 & 1) == 0 )
  {
    sub_1D0F0B4(&AtlasManager_TypeInfo);
    sub_1D0F0B4(&BattleResultBondsComponent_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_17523/*"bit_reward_shine02"*/);
    byte_4E7B097 = 1;
  }
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             this->fields.confPrefab,
             this->fields.confRoot,
             0,
             0);
  if ( !Object )
    goto LABEL_42;
  v17 = Object;
  Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Object, 0);
  if ( !Object )
    goto LABEL_42;
  v39.fields.y = -112.0 - posY;
  v39.fields.x = 0.0;
  v39.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v39, 0);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 v17,
                                 (const MethodInfo_32A86A8 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                         (UnityEngine_Object_o *)ComponentInChildren_object,
                                         0,
                                         0);
  if ( ((unsigned __int8)Object & 1) != 0 )
  {
    if ( !ComponentInChildren_object )
      goto LABEL_42;
    if ( type == 18 || isCoin )
    {
      UILabel__set_overflowMethod((UILabel_o *)ComponentInChildren_object, 2, 0);
      UILabel__set_text((UILabel_o *)ComponentInChildren_object, text, 0);
      v19 = BattleResultBondsComponent_TypeInfo;
      if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
        v19 = BattleResultBondsComponent_TypeInfo;
      }
      UILabel__SetCondensedScale(
        (UILabel_o *)ComponentInChildren_object,
        v19->static_fields->CONF_LABEL_MAX_WIDTH - 36,
        0,
        0);
    }
    else
    {
      if ( isSaintGraph )
        UIWidget__set_height((UIWidget_o *)ComponentInChildren_object, 100, 0);
      UILabel__set_text((UILabel_o *)ComponentInChildren_object, text, 0);
    }
  }
  v20 = UnityEngine_GameObject__GetComponentInChildren_object_(
          v17,
          (const MethodInfo_32A86A8 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v21 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0, 0);
  if ( (iconImageId & 0x80000000) == 0 && v21 )
  {
    if ( type == 18 )
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v29 = 9;
      v28 = (UISprite_o *)v20;
    }
    else
    {
      if ( type != 2 )
      {
LABEL_31:
        BattleResultBondsComponent__CreateRewardEffect(
          this,
          this->fields.resultAssetData,
          (UISprite_o *)v20,
          (System_String_o *)StringLiteral_17523/*"bit_reward_shine02"*/,
          v24);
        if ( ComponentInChildren_object )
        {
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ComponentInChildren_object, 0);
          Object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)ComponentInChildren_object,
                                                 0);
          if ( Object )
          {
            LODWORD(v31) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Object, 0);
            Object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)ComponentInChildren_object,
                                                   0);
            if ( Object )
            {
              localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Object, 0);
              y = localPosition.fields.y;
              Object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)ComponentInChildren_object,
                                                     0);
              if ( Object )
              {
                v41 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Object, 0);
                if ( transform )
                {
                  v33 = v31 + 36.0;
                  v34 = y;
                  UnityEngine_Transform__set_localPosition(transform, v41, 0);
                  goto LABEL_37;
                }
              }
            }
          }
        }
LABEL_42:
        sub_1D0F30C(Object, v16);
      }
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v28 = (UISprite_o *)v20;
      v29 = iconImageId;
      if ( isCoin )
      {
        AtlasManager__SetCoin((UISprite_o *)v20, iconImageId, 0);
        goto LABEL_31;
      }
    }
    AtlasManager__SetItem(v28, v29, 0);
    goto LABEL_31;
  }
LABEL_37:
  Object = (UnityEngine_GameObject_o *)this->fields.conflist;
  if ( !Object )
    goto LABEL_42;
  m_CachedPtr = Object->fields.m_CachedPtr;
  v36 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(Object[1].klass);
  if ( !m_CachedPtr )
    goto LABEL_42;
  klass_low = SLODWORD(Object[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Object,
      (Il2CppObject *)v17,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = m_CachedPtr + 8 * klass_low;
    LODWORD(Object[1].klass) = klass_low + 1;
    *(_QWORD *)(v38 + 32) = v17;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)(v38 + 32),
      (int32_t)v17,
      v22,
      v23,
      (System_String_o *)v24,
      v25,
      v26,
      v27);
  }
}


void BattleResultBondsComponent__checkBondsUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x22
  PlayMakerFSM_o *myFsm; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x1
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int colIndex; // w8
  __int64 v21; // x9
  int v22; // w10
  __int64 *v23; // x8
  __int64 v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  __int64 *v31; // x21
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_GameObject__o *conflist; // x8
  int32_t size; // w2
  int v35; // w9
  UnityEngine_Object_o *levelUpSimpleAnim; // x22
  PlayMakerFSM_c *klass; // x8
  PlayMakerFSM_o *v38; // x22
  __int64 v39; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v41; // x0
  UnityEngine_Object_o *levelUpAnim; // x22
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  __int64 v49; // x9
  __int64 v50; // x8
  __int64 v51; // x9
  struct BattleResultBondsIconComponent_o *v52; // x1
  struct BattleResultBondsIconComponent_o **p_openCollect; // x21
  UnityEngine_Object_o *figureMoveRoot; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  UnityEngine_GameObject_o *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  int32_t svtId; // w22
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t svtLimit; // w23
  BattleResultBondsFigureComponent_o *bondsFigure; // x19
  UnityEngine_GameObject_o *v73; // x21
  System_Action_o *v74; // x24
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+20h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4E7B095 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&SimpleAnimation_State_TypeInfo);
    sub_1D0F0B4(&BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo);
    sub_1D0F0B4(&Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__);
    sub_1D0F0B4(&BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo);
    sub_1D0F0B4(&StringLiteral_17507/*"bit_result_levelup01"*/);
    sub_1D0F0B4(&StringLiteral_3535/*"CLOSE"*/);
    sub_1D0F0B4(&StringLiteral_5513/*"END_PROC"*/);
    sub_1D0F0B4(&StringLiteral_3538/*"CLOSE_BOND_UP_ROOT"*/);
    byte_4E7B095 = 1;
  }
  entity = 0;
  memset(&v76, 0, sizeof(v76));
  v3 = sub_1D0F300(BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo);
  BattleResultBondsComponent___c__DisplayClass61_0___ctor((BattleResultBondsComponent___c__DisplayClass61_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  *(_QWORD *)(v3 + 16) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v12);
  *(_QWORD *)(v3 + 24) = BondsIconArray;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)BondsIconArray, v14, v15, v16, v17, v18, v19);
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
      myFsm = this->fields.myFsm;
      if ( this->fields.openBoundsFlg )
      {
        if ( !myFsm )
          goto LABEL_10;
        if ( this->fields.isMultiDeck )
          v23 = &StringLiteral_3538/*"CLOSE_BOND_UP_ROOT"*/;
        else
          v23 = &StringLiteral_5513/*"END_PROC"*/;
      }
      else
      {
        if ( !myFsm )
          goto LABEL_10;
        v23 = &StringLiteral_3535/*"CLOSE"*/;
      }
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v23, 0);
      return;
    }
    this->fields.colIndex = colIndex;
    if ( colIndex >= (unsigned int)v22 )
      goto LABEL_73;
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
  v24 = sub_1D0F300(BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo);
  BattleResultBondsComponent___c__DisplayClass61_1___ctor((BattleResultBondsComponent___c__DisplayClass61_1_o *)v24, 0);
  if ( !v24 )
    goto LABEL_10;
  *(_QWORD *)(v24 + 24) = v3;
  v31 = (__int64 *)(v24 + 24);
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v24 + 24), v3, v25, v26, v27, v28, v29, v30);
  myFsm = (PlayMakerFSM_o *)this->fields.conflist;
  if ( !myFsm )
    goto LABEL_10;
  if ( SLODWORD(myFsm->fields.m_CancellationTokenSource) < 1 )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v75,
    (System_Collections_Generic_List_object__o *)myFsm,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v76 = v75;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v76,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v76.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_73359484((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v76,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  conflist = this->fields.conflist;
  if ( !conflist )
    goto LABEL_10;
  size = conflist->fields._size;
  v35 = conflist->fields._version + 1;
  conflist->fields._size = 0;
  conflist->fields._version = v35;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)conflist->fields._items, 0, size, 0);
LABEL_26:
  myFsm = (PlayMakerFSM_o *)this->fields.upRoot;
  if ( !myFsm )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 1, 0);
  levelUpSimpleAnim = (UnityEngine_Object_o *)this->fields.levelUpSimpleAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(levelUpSimpleAnim, 0, 0) )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.levelUpSimpleAnim;
    if ( myFsm )
    {
      myFsm = (PlayMakerFSM_o *)SimpleAnimation__get_Item(
                                  (SimpleAnimation_o *)myFsm,
                                  (System_String_o *)StringLiteral_17507/*"bit_result_levelup01"*/,
                                  0);
      if ( myFsm )
      {
        klass = myFsm->klass;
        v38 = myFsm;
        v39 = *(unsigned __int16 *)&myFsm->klass->_2.rank;
        if ( *(_WORD *)&myFsm->klass->_2.rank )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v39;
            p_offset += 2;
            if ( !v39 )
              goto LABEL_36;
          }
          v41 = (__int64)(&klass->vtable._4_OnBeforeSerialize + *(_DWORD *)p_offset);
        }
        else
        {
LABEL_36:
          v41 = sub_1CE5430(myFsm, SimpleAnimation_State_TypeInfo, 4);
        }
        (*(void (__fastcall **)(PlayMakerFSM_o *, _QWORD, float))v41)(v38, *(_QWORD *)(v41 + 8), 0.0);
        myFsm = (PlayMakerFSM_o *)this->fields.levelUpSimpleAnim;
        if ( myFsm )
        {
          myFsm = (PlayMakerFSM_o *)SimpleAnimation__Play_68509268(
                                      (SimpleAnimation_o *)myFsm,
                                      (System_String_o *)StringLiteral_17507/*"bit_result_levelup01"*/,
                                      0);
          goto LABEL_51;
        }
      }
    }
    goto LABEL_10;
  }
  levelUpAnim = (UnityEngine_Object_o *)this->fields.levelUpAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  myFsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Inequality(levelUpAnim, 0, 0);
  if ( ((unsigned __int8)myFsm & 1) != 0 )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.levelUpAnim;
    if ( !myFsm )
      goto LABEL_10;
    myFsm = (PlayMakerFSM_o *)UnityEngine_Animation__get_Item(
                                (UnityEngine_Animation_o *)myFsm,
                                (System_String_o *)StringLiteral_17507/*"bit_result_levelup01"*/,
                                0);
    if ( !myFsm )
      goto LABEL_10;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)myFsm, 0.0, 0);
    myFsm = (PlayMakerFSM_o *)this->fields.levelUpAnim;
    if ( !myFsm )
      goto LABEL_10;
    myFsm = (PlayMakerFSM_o *)UnityEngine_Animation__Play_73101556(
                                (UnityEngine_Animation_o *)myFsm,
                                (System_String_o *)StringLiteral_17507/*"bit_result_levelup01"*/,
                                0);
  }
LABEL_51:
  v49 = *v31;
  if ( !*v31 )
    goto LABEL_10;
  v50 = *(_QWORD *)(v49 + 24);
  if ( !v50 )
    goto LABEL_10;
  v51 = *(int *)(v49 + 32);
  if ( (unsigned int)v51 >= *(_DWORD *)(v50 + 24) )
LABEL_73:
    sub_1D0F314(myFsm);
  v52 = *(struct BattleResultBondsIconComponent_o **)(v50 + 8 * v51 + 32);
  p_openCollect = &this->fields.openCollect;
  this->fields.openCollect = v52;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.openCollect, (int32_t)v52, v43, v44, v45, v46, v47, v48);
  figureMoveRoot = (UnityEngine_Object_o *)this->fields.figureMoveRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(figureMoveRoot, 0, 0) )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.figureMoveRoot;
    if ( !myFsm )
      goto LABEL_10;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myFsm, 0);
    *(_QWORD *)(v24 + 16) = gameObject;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v24 + 16), (int32_t)gameObject, v56, v57, v58, v59, v60, v61);
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
    v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myFsm, 0);
    *(_QWORD *)(v24 + 16) = v62;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v24 + 16), (int32_t)v62, v63, v64, v65, v66, v67, v68);
  }
  if ( !*p_openCollect )
    goto LABEL_10;
  svtId = (*p_openCollect)->fields.svtId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  myFsm = (PlayMakerFSM_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !*p_openCollect || !myFsm )
    goto LABEL_10;
  myFsm = (PlayMakerFSM_o *)DataMasterBase_object__object__long___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)myFsm,
                              &entity,
                              (*p_openCollect)->fields.userSvtId,
                              (const MethodInfo_3538378 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)myFsm & 1) != 0 )
  {
    myFsm = (PlayMakerFSM_o *)entity;
    if ( !entity )
      goto LABEL_10;
    myFsm = (PlayMakerFSM_o *)UserServantEntity__GetServantId((UserServantEntity_o *)entity, -1, 0);
    svtId = (int)myFsm;
  }
  openCollect = this->fields.openCollect;
  if ( !openCollect
    || (svtLimit = openCollect->fields.svtLimit,
        bondsFigure = this->fields.bondsFigure,
        v73 = *(UnityEngine_GameObject_o **)(v24 + 16),
        v74 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo),
        System_Action___ctor(
          v74,
          (Il2CppObject *)v24,
          Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__,
          0),
        !bondsFigure) )
  {
LABEL_10:
    sub_1D0F30C(myFsm, v5);
  }
  BattleResultBondsFigureComponent__SetupFigure(bondsFigure, v73, svtId, svtLimit, 7, 0, 51, v74, 0);
}


void BattleResultBondsComponent__checkShow(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  struct BattleFriendshipRewardInfo_array *showList; // x8
  il2cpp_array_size_t max_length; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  SummonAssetManager_o *parentComp; // x0

  if ( (byte_4E7B09B & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_BattleResultBondsComponent__checkShow_b__67_0__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_4E7B09B = 1;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
        v6 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
        System_Action___ctor(v6, (Il2CppObject *)this, Method_BattleResultBondsComponent__checkShow_b__67_0__, 0);
        if ( Instance )
        {
          SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v6, 0);
          return;
        }
        goto LABEL_21;
      }
      parentComp = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
    sub_1D0F30C(parentComp, method);
  }
  BattleResultComponent__showServantRewardAction((BattleResultComponent_o *)parentComp, 0, 1, 0);
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

  if ( (byte_4E7B09C & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BattleResultBondsComponent_closeBondUp__);
    sub_1D0F0B4(&Method_BattleResultBondsComponent_endCloseBondUp__);
    sub_1D0F0B4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UIUnityRenderer__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
    byte_4E7B09C = 1;
  }
  UnityEngine_Time__set_timeScale(this->fields.tempSaveTimeScale, 0);
  effectUIList = this->fields.effectUIList;
  if ( !effectUIList )
    goto LABEL_18;
  if ( *((int *)effectUIList + 6) >= 1 )
  {
    v5 = 0;
    do
    {
      effectUIList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)effectUIList,
                       v5,
                       (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
      if ( !effectUIList )
        goto LABEL_18;
      effectUIList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectUIList, 0);
      if ( !effectUIList )
        goto LABEL_18;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectUIList, 0, 0);
      effectUIList = this->fields.effectUIList;
      if ( !effectUIList )
        goto LABEL_18;
      v6 = *((_DWORD *)effectUIList + 6);
      ++v5;
    }
    while ( v5 < v6 );
    v7 = *((_DWORD *)effectUIList + 7) + 1;
    *((_DWORD *)effectUIList + 6) = 0;
    *((_DWORD *)effectUIList + 7) = v7;
    if ( v6 >= 1 )
      System_Array__Clear(*((System_Array_o **)effectUIList + 2), 0, v6, 0);
  }
  v8 = Method_BattleResultBondsComponent_closeBondUp__;
  if ( (*((_BYTE *)Method_BattleResultBondsComponent_closeBondUp__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1D0F0CC(Method_BattleResultBondsComponent_closeBondUp__);
  v9 = (System_Reflection_MethodBase_o *)sub_1D0F098(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
  effectUIList = this->fields.parentComp;
  if ( !effectUIList
    || (BattleResultComponent__setTouch((BattleResultComponent_o *)effectUIList, 0, 0),
        (effectUIList = this->fields.bondsFigure) == 0)
    || (BattleResultBondsFigureComponent__DestroyFigure((BattleResultBondsFigureComponent_o *)effectUIList, 0),
        confwindow = this->fields.confwindow,
        v11 = (BattleWindowComponent_EndCall_o *)sub_1D0F300(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v11,
          (Il2CppObject *)this,
          Method_BattleResultBondsComponent_endCloseBondUp__,
          0),
        !confwindow) )
  {
LABEL_18:
    sub_1D0F30C(effectUIList, v3);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))confwindow->klass->vtable._12_Close.methodPtr)(
    confwindow,
    v11,
    confwindow->klass->vtable._12_Close.method);
}


void BattleResultBondsComponent__endClose(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v9; // x1
  BattleResultBondsIconComponent_o *BondsIconArray; // x0
  __int64 v11; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleResultBondsIconComponent_o *v13; // x20
  int v14; // w21
  int v15; // w22
  __int64 v16; // x0

  if ( (byte_4E7B09F & 1) == 0 )
  {
    sub_1D0F0B4(&OptionManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_5513/*"END_PROC"*/);
    byte_4E7B09F = 1;
  }
  this->fields.resultAssetData = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.resultAssetData, 0, v2, v3, v4, v5, v6, v7);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0) )
  {
    BondsIconArray = (BattleResultBondsIconComponent_o *)BattleResultBondsComponent__GetBondsIconArray(this, v9);
    if ( !BondsIconArray )
      goto LABEL_16;
    m_CancellationTokenSource = BondsIconArray->fields.m_CancellationTokenSource;
    v13 = BondsIconArray;
    v14 = (_DWORD)m_CancellationTokenSource - 1;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        BondsIconArray = (BattleResultBondsIconComponent_o *)*((_QWORD *)&v13->fields.root + v15);
        if ( !BondsIconArray )
          break;
        BattleResultBondsIconComponent__ClearFaceAtlas(BondsIconArray, 0);
        if ( v14 == v15 )
          goto LABEL_13;
        if ( (unsigned int)++v15 >= LODWORD(v13->fields.m_CancellationTokenSource) )
          sub_1D0F314(v16);
      }
LABEL_16:
      sub_1D0F30C(BondsIconArray, v11);
    }
  }
LABEL_13:
  BondsIconArray = (BattleResultBondsIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
  if ( !BondsIconArray )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BondsIconArray, 0, 0);
  BondsIconArray = (BattleResultBondsIconComponent_o *)this->fields.myFsm;
  if ( !BondsIconArray )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_5513/*"END_PROC"*/, 0);
}


void BattleResultBondsComponent__endCloseBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4E7B09D & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_5513/*"END_PROC"*/);
    byte_4E7B09D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1D0F30C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5513/*"END_PROC"*/, 0);
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
  Il2CppObject *current; // x23
  System_String_o *v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v17; // x1
  const MethodInfo *v18; // x6
  struct BattleResultBondsIconComponent_o *v19; // x8
  int32_t svtLimit; // w23
  int32_t ServantLimitCountSealAfter; // w23
  __int64 *v22; // x8
  int v23; // w21
  bool v24; // w23
  System_String_o *v25; // x0
  const MethodInfo *v26; // x6
  struct BattleResultBondsIconComponent_o *v27; // x8
  System_String_o *v28; // x0
  const MethodInfo *v29; // x6
  System_Collections_Generic_List_object__o *v30; // x22
  struct BattleFriendshipRewardInfo_array *rewardInfos; // x24
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x23
  int v34; // w21
  int CONF_SERVANT_COIN_PLUS_HEIGHT; // w26
  struct BattleResultBondsIconComponent_o *v36; // x8
  BattleFriendshipRewardInfo_o *v37; // x25
  GiftEntity_o *v38; // x26
  int32_t type; // w8
  Il2CppObject *v40; // x0
  System_String_o *v41; // x27
  Il2CppObject *v42; // x0
  Il2CppObject *v43; // x0
  ServantEntity_o *v44; // x27
  System_String_o *OverwriteServantCoinName; // x28
  System_String_o *v46; // x0
  const MethodInfo *v47; // x6
  int32_t v48; // w5
  System_String_o *v49; // x1
  float v50; // s0
  int32_t objectId; // w2
  System_String_o *v52; // x0
  bool v53; // w27
  Il2CppObject *Master_object; // x28
  int32_t v55; // w1
  System_String_o *v56; // x0
  System_String_o *v57; // x28
  int32_t IconImageId; // w0
  const MethodInfo *v59; // x6
  BattleResultBondsComponent_c *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  struct System_Object_array *items; // x8
  _QWORD *v68; // x9
  __int64 size; // x10
  Il2CppClass **v70; // x0
  System_Object_array *v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  int v78; // w20
  UnityEngine_Transform_o *confRoot; // x21
  unsigned int localPosition; // s0 OVERLAPPED
  int v81; // w8
  float v82; // s1
  int v83; // w20
  float v84; // s1
  int v85; // s2
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *rankupConfLabel; // x21
  struct BattleWindowComponent_o *confwindow; // x20
  BattleWindowComponent_EndCall_o *v89; // x21
  int32_t key; // [xsp+14h] [xbp-CCh]
  System_Text_StringBuilder_o *v91; // [xsp+18h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_object__o v92; // [xsp+20h] [xbp-C0h] BYREF
  UserServantCollectionEntity_o *v93; // [xsp+38h] [xbp-A8h] BYREF
  Il2CppObject *entity; // [xsp+40h] [xbp-A0h] BYREF
  System_String_o *countText; // [xsp+48h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v96; // [xsp+50h] [xbp-90h] BYREF
  System_String_o *nameText; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_4E7B099 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BattleResultBondsComponent_endMoveFigure__);
    sub_1D0F0B4(&Method_BattleResultBondsComponent_openedBondUp__);
    sub_1D0F0B4(&BattleResultBondsComponent_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__);
    sub_1D0F0B4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__);
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&ServantCommentManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1D0F0B4(&System_Text_StringBuilder_TypeInfo);
    sub_1D0F0B4(&StringLiteral_11272/*"RESULT_BOUNDS_OPENQUEST"*/);
    sub_1D0F0B4(&StringLiteral_113/*" "*/);
    sub_1D0F0B4(&StringLiteral_11275/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/);
    sub_1D0F0B4(&StringLiteral_11274/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/);
    sub_1D0F0B4(&StringLiteral_11270/*"RESULT_BOUNDS_GET_COIN_NAME"*/);
    sub_1D0F0B4(&StringLiteral_11267/*"RESULT_BOUNDS_GETVOICE"*/);
    sub_1D0F0B4(&StringLiteral_25656/*"{0} {1}"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    sub_1D0F0B4(&StringLiteral_11269/*"RESULT_BOUNDS_GET_COIN_COUNT"*/);
    byte_4E7B099 = 1;
  }
  memset(&v96, 0, sizeof(v96));
  nameText = 0;
  entity = 0;
  countText = 0;
  v93 = 0;
  v3 = (System_Text_StringBuilder_o *)sub_1D0F300(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0);
  v4 = Method_BattleResultBondsComponent_endMoveFigure__;
  if ( (*((_BYTE *)Method_BattleResultBondsComponent_endMoveFigure__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1D0F0CC(Method_BattleResultBondsComponent_endMoveFigure__);
  v5 = (System_Reflection_MethodBase_o *)sub_1D0F098(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 6, 0, 0);
  openCollect = this->fields.openCollect;
  if ( !openCollect )
    goto LABEL_128;
  lvComp = (__int64)this->fields.lvComp;
  if ( !lvComp )
    goto LABEL_128;
  friendshipRank = openCollect->fields.friendshipRank;
  svtId = openCollect->fields.svtId;
  BattleResultMasterUpStatusComponent__setData(
    (BattleResultMasterUpStatusComponent_o *)lvComp,
    friendshipRank,
    openCollect->fields.nextFriendShipRank,
    0);
  lvComp = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !lvComp )
    goto LABEL_128;
  v91 = v3;
  lvComp = (__int64)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                      (clsQuestCheck_o *)lvComp,
                      svtId,
                      friendshipRank,
                      8,
                      0);
  if ( lvComp )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v92,
      (System_Collections_Generic_List_object__o *)lvComp,
      (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    v11 = 0;
    v96 = v92;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v96,
              (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
    {
      current = v96.fields._current;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11272/*"RESULT_BOUNDS_OPENQUEST"*/, 0);
      if ( !current )
        sub_1D0F30C(v13, v14);
      v15 = v13;
      QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0);
      v17 = System_String__Format(v15, QuestName, 0);
      BattleResultBondsComponent__addConfObject(this, v17, (float)v11 * 22.0, -1, 0, 0, 1, v18);
      v11 += 3;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v96,
      (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  }
  else
  {
    v11 = 0;
  }
  v19 = this->fields.openCollect;
  if ( !v19 )
    goto LABEL_128;
  svtLimit = v19->fields.svtLimit;
  lvComp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lvComp )
    goto LABEL_128;
  lvComp = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)lvComp,
                      (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !lvComp )
    goto LABEL_128;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)lvComp,
                                 svtId,
                                 svtLimit,
                                 0);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  if ( ServantCommentManager__IsOpenByServantFriendShipAndImageLimit(
         svtId,
         ServantLimitCountSealAfter,
         friendshipRank,
         0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = &StringLiteral_11275/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/;
    v23 = 4;
    v24 = 1;
  }
  else
  {
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    lvComp = ServantCommentManager__IsOpenByServantFriendShip_44924548(
               svtId,
               friendshipRank,
               ServantLimitCountSealAfter,
               0);
    if ( (lvComp & 1) == 0 )
      goto LABEL_33;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = &StringLiteral_11274/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/;
    v24 = 0;
    v23 = 2;
  }
  v25 = LocalizationManager__Get((System_String_o *)*v22, 0);
  BattleResultBondsComponent__addConfObject(this, v25, (float)v11 * 22.0, -1, 0, v24, 1, v26);
  v11 += v23;
LABEL_33:
  v27 = this->fields.openCollect;
  if ( !v27 )
    goto LABEL_128;
  if ( ServantVoiceMaster__isOpenByServantFriendShip(svtId, v27->fields.maxLimitCount, friendshipRank, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_11267/*"RESULT_BOUNDS_GETVOICE"*/, 0);
    BattleResultBondsComponent__addConfObject(this, v28, (float)v11 * 22.0, -1, 0, 0, 1, v29);
    v11 += 2;
  }
  if ( !this->fields.rewardInfos )
  {
    CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
    goto LABEL_112;
  }
  v30 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ItemMaster___);
  rewardInfos = this->fields.rewardInfos;
  if ( !rewardInfos )
    goto LABEL_128;
  max_length = rewardInfos->max_length;
  if ( max_length < 1 )
  {
    CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
    if ( !v30 )
      goto LABEL_128;
    goto LABEL_111;
  }
  key = svtId;
  v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)lvComp;
  v34 = 0;
  CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
  do
  {
    if ( v34 >= (unsigned int)max_length )
      sub_1D0F314(lvComp);
    v36 = this->fields.openCollect;
    if ( !v36 )
      goto LABEL_128;
    v37 = rewardInfos->m_Items[v34];
    if ( !v37 )
      goto LABEL_128;
    if ( v36->fields.svtId == v37->fields.targetSvtId )
    {
      lvComp = (__int64)BattleFriendshipRewardInfo__getGiftEntity(v37, 0);
      if ( !lvComp )
        goto LABEL_128;
      v38 = (GiftEntity_o *)lvComp;
      GiftEntity__GetInfo((GiftEntity_o *)lvComp, &nameText, &countText, 0);
      lvComp = GiftEntity__isQp(v38, 0);
      if ( (lvComp & 1) != 0 )
      {
        nameText = countText;
        countText = (System_String_o *)StringLiteral_1/*""*/;
      }
      type = v38->fields.type;
      if ( type == 1 )
      {
        v46 = System_String__Concat_65601036(nameText, (System_String_o *)StringLiteral_113/*" "*/, countText, 0);
        v48 = v38->fields.type;
        v49 = v46;
        v50 = (float)v11 * 22.0;
        objectId = -1;
      }
      else
      {
        if ( type == 2 )
        {
          if ( !v33 )
            goto LABEL_128;
          v40 = DataMasterBase_object__object__int___GetEntity(
                  v33,
                  v38->fields.objectId,
                  (const MethodInfo_3535B7C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( v40 && LODWORD(v40[3].klass) == 29 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v41 = LocalizationManager__Get((System_String_o *)StringLiteral_11269/*"RESULT_BOUNDS_GET_COIN_COUNT"*/, 0);
            LODWORD(v92.fields._list) = v38->fields.num;
            v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v92);
            countText = System_String__Format(v41, v42, 0);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantMaster___);
            if ( !lvComp )
              goto LABEL_128;
            v43 = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)lvComp,
                    key,
                    (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( v43 )
            {
              v44 = (ServantEntity_o *)v43;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantAddMaster___);
              if ( !lvComp )
                goto LABEL_128;
              DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)lvComp,
                &entity,
                key,
                (const MethodInfo_3535BC8 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__);
              if ( entity )
                OverwriteServantCoinName = ServantAddEntity__GetOverwriteServantCoinName(
                                             (ServantAddEntity_o *)entity,
                                             0);
              else
                OverwriteServantCoinName = 0;
              if ( System_String__IsNullOrEmpty(OverwriteServantCoinName, 0) )
              {
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                if ( !byte_4E710BF )
                {
                  sub_1D0F0B4(&NetworkManager_TypeInfo);
                  byte_4E710BF = 1;
                }
                lvComp = (__int64)NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  lvComp = (__int64)NetworkManager_TypeInfo;
                }
                if ( !Master_object )
                  goto LABEL_128;
                if ( UserServantCollectionMaster__TryGetEntity(
                       (UserServantCollectionMaster_o *)Master_object,
                       &v93,
                       *(_QWORD *)(*(_QWORD *)(lvComp + 184) + 64LL),
                       key,
                       0) )
                {
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                  if ( !v93 )
                    goto LABEL_128;
                  if ( !lvComp )
                    goto LABEL_128;
                  lvComp = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                             (ServantLimitImageMaster_o *)lvComp,
                             key,
                             v93->fields.maxLimitCount,
                             0);
                  if ( !v93 )
                    goto LABEL_128;
                  if ( (_DWORD)lvComp == v93->fields.maxLimitCount )
                    v55 = -1;
                  else
                    v55 = lvComp;
                }
                else
                {
                  v55 = -1;
                }
                OverwriteServantCoinName = ServantEntity__getName(v44, v55, -1, 0, 0, 0);
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v56 = LocalizationManager__Get((System_String_o *)StringLiteral_11270/*"RESULT_BOUNDS_GET_COIN_NAME"*/, 0);
              nameText = System_String__Format_65604080(
                           v56,
                           (Il2CppObject *)nameText,
                           (Il2CppObject *)OverwriteServantCoinName,
                           0);
            }
            v53 = 1;
          }
          else
          {
            v53 = 0;
          }
          v57 = System_String__Format_65604080(
                  (System_String_o *)StringLiteral_25656/*"{0} {1}"*/,
                  (Il2CppObject *)nameText,
                  (Il2CppObject *)countText,
                  0);
          IconImageId = GiftEntity__getIconImageId(v38, 0);
          BattleResultBondsComponent__addConfObject(
            this,
            v57,
            (float)v11 * 22.0,
            IconImageId,
            v53,
            0,
            v38->fields.type,
            v59);
          goto LABEL_98;
        }
        v52 = System_String__Format_65604080(
                (System_String_o *)StringLiteral_25656/*"{0} {1}"*/,
                (Il2CppObject *)nameText,
                (Il2CppObject *)countText,
                0);
        v48 = v38->fields.type;
        objectId = v38->fields.objectId;
        v49 = v52;
        v50 = (float)v11 * 22.0;
      }
      BattleResultBondsComponent__addConfObject(this, v49, v50, objectId, 0, 0, v48, v47);
LABEL_98:
      v60 = BattleResultBondsComponent_TypeInfo;
      if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
        v60 = BattleResultBondsComponent_TypeInfo;
      }
      v11 += 2;
      CONF_SERVANT_COIN_PLUS_HEIGHT = v60->static_fields->CONF_SERVANT_COIN_PLUS_HEIGHT;
      lvComp = BattleFriendshipRewardInfo__isShow(v37, 0);
      if ( (lvComp & 1) != 0 )
      {
        if ( !v30 )
          goto LABEL_128;
        items = v30->fields._items;
        v68 = Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__;
        ++v30->fields._version;
        if ( !items )
          goto LABEL_128;
        size = v30->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v30,
            (Il2CppObject *)v37,
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
        }
        else
        {
          v70 = &items->obj.klass + size;
          v30->fields._size = size + 1;
          v70[4] = (Il2CppClass *)v37;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v70 + 4), (int32_t)v37, v61, v62, v63, v64, v65, v66);
        }
      }
    }
    max_length = rewardInfos->max_length;
    ++v34;
  }
  while ( v34 < max_length );
  if ( !v30 )
    goto LABEL_128;
LABEL_111:
  v71 = System_Collections_Generic_List_object___ToArray(
          v30,
          (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
  this->fields.showList = (struct BattleFriendshipRewardInfo_array *)v71;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.showList, (int32_t)v71, v72, v73, v74, v75, v76, v77);
  this->fields.showIndex = 0;
LABEL_112:
  lvComp = (__int64)this->fields.confSprite;
  if ( v11 )
    v78 = v11;
  else
    v78 = 1;
  if ( !lvComp )
    goto LABEL_128;
  UIWidget__set_height((UIWidget_o *)lvComp, CONF_SERVANT_COIN_PLUS_HEIGHT + 22 * v78 + 120, 0);
  confRoot = this->fields.confRoot;
  if ( !confRoot )
    goto LABEL_128;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.confRoot, 0);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT >= 0 )
    v81 = CONF_SERVANT_COIN_PLUS_HEIGHT;
  else
    v81 = CONF_SERVANT_COIN_PLUS_HEIGHT + 1;
  v82 = (float)v78;
  v83 = v81 >> 1;
  v84 = (float)(v82 * 11.0) + (float)(v81 >> 1);
  v85 = 0;
  UnityEngine_Transform__set_localPosition(confRoot, *(UnityEngine_Vector3_o *)&localPosition, 0);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT )
  {
    lvComp = (__int64)this->fields.confwindow;
    if ( lvComp )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lvComp, 0);
      GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v83, 0);
      lvComp = (__int64)this->fields.confwindow;
      if ( lvComp )
      {
        lvComp = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)lvComp + 424LL))(
                   lvComp,
                   *(_QWORD *)(*(_QWORD *)lvComp + 432LL));
        goto LABEL_124;
      }
    }
LABEL_128:
    sub_1D0F30C(lvComp, v7);
  }
LABEL_124:
  if ( !v91 )
    goto LABEL_128;
  rankupConfLabel = this->fields.rankupConfLabel;
  lvComp = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v91->klass->vtable._3_ToString.methodPtr)(
             v91,
             v91->klass->vtable._3_ToString.method);
  if ( !rankupConfLabel )
    goto LABEL_128;
  UILabel__set_text(rankupConfLabel, (System_String_o *)lvComp, 0);
  confwindow = this->fields.confwindow;
  v89 = (BattleWindowComponent_EndCall_o *)sub_1D0F300(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v89, (Il2CppObject *)this, Method_BattleResultBondsComponent_openedBondUp__, 0);
  if ( !confwindow )
    goto LABEL_128;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))confwindow->klass->vtable._10_Open.methodPtr)(
    confwindow,
    v89,
    confwindow->klass->vtable._10_Open.method);
}


UserServantCollectionEntity_o *BattleResultBondsComponent__getServantCollection(
        BattleResultBondsComponent_o *this,
        UserServantCollectionEntity_array *collects,
        int32_t svtId,
        const MethodInfo *method)
{
  int max_length; // w8
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
        sub_1D0F314(this);
      v8 = &collects->obj.klass + (int)v7;
      v9 = (UserServantCollectionEntity_o *)v8[4];
      if ( !v9 )
        break;
      this = (BattleResultBondsComponent_o *)UserServantCollectionEntity__getSvtId(
                                               (UserServantCollectionEntity_o *)v8[4],
                                               0);
      if ( (_DWORD)this == svtId )
        return v9;
      max_length = collects->max_length;
      if ( (int)++v7 >= max_length )
        return 0;
    }
LABEL_11:
    sub_1D0F30C(this, collects);
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
  BattleDeckServantData_o *v7; // x12

  if ( !deck || (svts = deck->fields.svts) == 0 )
LABEL_11:
    sub_1D0F30C(this, deck);
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    if ( max_length == v6 )
      sub_1D0F314(this);
    v7 = svts->m_Items[v6];
    if ( !v7 )
      goto LABEL_11;
    if ( v7->fields.id == index + 1 )
      return v7->fields.userSvtId;
    if ( max_length == ++v6 )
      return 0;
  }
}


bool BattleResultBondsComponent__isCollectsSvt(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  struct UserServantCollectionEntity_array *oldCollections; // x8

  oldCollections = this->fields.oldCollections;
  if ( !oldCollections )
    sub_1D0F30C(this, method);
  return SLODWORD(oldCollections->max_length) > 1;
}


void BattleResultBondsComponent__openedBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0

  if ( (byte_4E7B09A & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_5508/*"END_OPEN"*/);
    byte_4E7B09A = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__ResetPlayScreenTouch(parentComp, 0), (parentComp = this->fields.parentComp) == 0)
    || (BattleResultComponent__setTouch(parentComp, 1, 0),
        parentComp = (BattleResultComponent_o *)this->fields.myFsm,
        ++this->fields.colIndex,
        !parentComp) )
  {
    sub_1D0F30C(parentComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)parentComp, (System_String_o *)StringLiteral_5508/*"END_OPEN"*/, 0);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E7B16E & 1) == 0 )
  {
    sub_1D0F0B4(&BattleResultBondsComponent___c_TypeInfo);
    byte_4E7B16E = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(BattleResultBondsComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleResultBondsComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultBondsComponent___c_o *)v1;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)BattleResultBondsComponent___c_TypeInfo->static_fields,
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
    sub_1D0F30C(this, 0);
  return col->fields.isUse;
}


bool BattleResultBondsComponent___c___SetResultDataLocal_b__49_0(
        BattleResultBondsComponent___c_o *this,
        QuestRewardInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.type == 7 && x->fields.isNew;
}


bool BattleResultBondsComponent___c___SetResultDataLocal_b__49_1(
        BattleResultBondsComponent___c_o *this,
        GetSvts_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
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
    sub_1D0F30C(this, 0);
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
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v6; // x9
  char v7; // w8
  UnityEngine_GameObject_o *parent; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  BattleResultBondsComponent___c__DisplayClass61_1_o *v15; // x21
  BattleResultBondsComponent___c__DisplayClass61_1_c *v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  BattleResultBondsComponent___c__DisplayClass61_1_o *v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  BattleResultBondsComponent___c__DisplayClass61_1_o *v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  __int64 v44; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  BattleResultBondsComponent___c__DisplayClass61_1_o *v51; // x22
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  __int64 v58; // x1
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v59; // x8
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  BattleResultBondsComponent___c__DisplayClass61_1_o *v66; // x22
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  __int64 v73; // x1
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  __int64 v80; // x1
  System_Collections_Hashtable_o *v81; // x0
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v82; // x8
  struct BattleResultBondsComponent_o *v83; // x8
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v84; // x8
  struct BattleResultBondsIconComponent_array *bondsIcons; // x9
  __int64 i; // x10
  __int64 v87; // x0
  char v88[4]; // [xsp+4h] [xbp-3Ch] BYREF
  int v89; // [xsp+8h] [xbp-38h] BYREF
  int v90; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4E7B16F & 1) == 0 )
  {
    sub_1D0F0B4(&bool_TypeInfo);
    sub_1D0F0B4(&object___TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&float_TypeInfo);
    sub_1D0F0B4(&StringLiteral_25385/*"x"*/);
    sub_1D0F0B4(&StringLiteral_9745/*"OPEN"*/);
    sub_1D0F0B4(&StringLiteral_24569/*"time"*/);
    sub_1D0F0B4(&StringLiteral_22870/*"oncompletetarget"*/);
    sub_1D0F0B4(&StringLiteral_19350/*"endMoveFigure"*/);
    sub_1D0F0B4(&StringLiteral_21382/*"islocal"*/);
    sub_1D0F0B4(&StringLiteral_22868/*"oncomplete"*/);
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1D0F0B4(&iTween_TypeInfo);
    byte_4E7B16F = 1;
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
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Object__op_Inequality(figureMoveRoot, 0, 0);
  v6 = v2->fields.CS___8__locals1;
  if ( !v6 )
    goto LABEL_69;
  v7 = (char)this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v6->fields.__4__this;
  if ( !this )
    goto LABEL_69;
  if ( (v7 & 1) == 0 )
  {
    BattleResultBondsComponent__endMoveFigure((BattleResultBondsComponent_o *)this, 0);
    goto LABEL_61;
  }
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)this[3].fields.CS___8__locals1;
  if ( !this )
    goto LABEL_69;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0);
  if ( !this )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  parent = v2->fields.parent;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1D0F15C(object___TypeInfo, 10);
  if ( !this )
    goto LABEL_69;
  v15 = this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_25385/*"x"*/;
  if ( StringLiteral_25385/*"x"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1D0F1F0(
                                                                   StringLiteral_25385/*"x"*/,
                                                                   v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    v16 = (BattleResultBondsComponent___c__DisplayClass61_1_c *)StringLiteral_25385/*"x"*/;
  }
  else
  {
    v16 = 0;
  }
  if ( !LODWORD(v15->fields.CS___8__locals1) )
    goto LABEL_70;
  v15[1].klass = v16;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v15[1], (int32_t)v16, v9, v10, v11, v12, v13, v14);
  v90 = -1007026176;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v90);
  v23 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1D0F1F0(this, v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 1 )
    goto LABEL_70;
  v15[1].monitor = v23;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v15[1].monitor, (int32_t)v23, v17, v18, v19, v20, v21, v22);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_24569/*"time"*/;
  if ( StringLiteral_24569/*"time"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1D0F1F0(
                                                                   StringLiteral_24569/*"time"*/,
                                                                   v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    v30 = StringLiteral_24569/*"time"*/;
  }
  else
  {
    v30 = 0;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 2 )
    goto LABEL_70;
  v15[1].fields.parent = (struct UnityEngine_GameObject_o *)v30;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v15[1].fields, v30, v24, v25, v26, v27, v28, v29);
  v89 = 1061997773;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v89);
  v37 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1D0F1F0(this, v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 3 )
    goto LABEL_70;
  v15[1].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v37;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v15[1].fields.CS___8__locals1, (int32_t)v37, v31, v32, v33, v34, v35, v36);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_21382/*"islocal"*/;
  if ( StringLiteral_21382/*"islocal"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1D0F1F0(
                                                                   StringLiteral_21382/*"islocal"*/,
                                                                   v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    v44 = StringLiteral_21382/*"islocal"*/;
  }
  else
  {
    v44 = 0;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 4 )
    goto LABEL_70;
  v15[2].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)v44;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v15[2], v44, v38, v39, v40, v41, v42, v43);
  v88[0] = 1;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(bool_TypeInfo, v88);
  v51 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1D0F1F0(this, v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 5 )
    goto LABEL_70;
  v15[2].monitor = v51;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v15[2].monitor, (int32_t)v51, v45, v46, v47, v48, v49, v50);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22870/*"oncompletetarget"*/;
  if ( StringLiteral_22870/*"oncompletetarget"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1D0F1F0(
                                                                   StringLiteral_22870/*"oncompletetarget"*/,
                                                                   v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    v58 = StringLiteral_22870/*"oncompletetarget"*/;
  }
  else
  {
    v58 = 0;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 6 )
    goto LABEL_70;
  v15[2].fields.parent = (struct UnityEngine_GameObject_o *)v58;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v15[2].fields, v58, v52, v53, v54, v55, v56, v57);
  v59 = v2->fields.CS___8__locals1;
  if ( !v59 || (this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v59->fields.__4__this) == 0 )
LABEL_69:
    sub_1D0F30C(this, method);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0);
  v66 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1D0F1F0(this, v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 7 )
    goto LABEL_70;
  v15[2].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v66;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v15[2].fields.CS___8__locals1, (int32_t)v66, v60, v61, v62, v63, v64, v65);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22868/*"oncomplete"*/;
  if ( StringLiteral_22868/*"oncomplete"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1D0F1F0(
                                                                   StringLiteral_22868/*"oncomplete"*/,
                                                                   v15->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    v73 = StringLiteral_22868/*"oncomplete"*/;
  }
  else
  {
    v73 = 0;
  }
  if ( LODWORD(v15->fields.CS___8__locals1) <= 8 )
    goto LABEL_70;
  v15[3].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)v73;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v15[3], v73, v67, v68, v69, v70, v71, v72);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_19350/*"endMoveFigure"*/;
  if ( !StringLiteral_19350/*"endMoveFigure"*/ )
  {
    v80 = 0;
    goto LABEL_57;
  }
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1D0F1F0(
                                                                 StringLiteral_19350/*"endMoveFigure"*/,
                                                                 v15->klass->_1.element_class);
  if ( !this )
  {
LABEL_71:
    v87 = sub_1D0F330(this);
    sub_1D0F1DC(v87, 0);
  }
  v80 = StringLiteral_19350/*"endMoveFigure"*/;
LABEL_57:
  if ( LODWORD(v15->fields.CS___8__locals1) <= 9 )
    goto LABEL_70;
  v15[3].monitor = (void *)v80;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v15[3].monitor, v80, v74, v75, v76, v77, v78, v79);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v81 = iTween__Hash((System_Object_array *)v15, 0);
  iTween__MoveFrom_65201808(parent, v81, 0);
LABEL_61:
  v82 = v2->fields.CS___8__locals1;
  if ( !v82 )
    goto LABEL_69;
  v83 = v82->fields.__4__this;
  if ( !v83 )
    goto LABEL_69;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v83->fields.myFsm;
  v83->fields.openBoundsFlg = 1;
  if ( !this )
    goto LABEL_69;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9745/*"OPEN"*/, 0);
  v84 = v2->fields.CS___8__locals1;
  if ( !v84 )
    goto LABEL_69;
  bondsIcons = v84->fields.bondsIcons;
  if ( !bondsIcons )
    goto LABEL_69;
  i = v84->fields.i;
  if ( (unsigned int)i >= LODWORD(bondsIcons->max_length) )
LABEL_70:
    sub_1D0F314(this);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v84->fields.__4__this;
  if ( !this )
    goto LABEL_69;
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

  if ( (byte_4E7B170 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E7B170 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1D0F30C(0, v4);
  CommonUI__CreateServantCoinConfirmDialog((CommonUI_o *)Instance, 1, this->fields.coin, 0, 0);
}