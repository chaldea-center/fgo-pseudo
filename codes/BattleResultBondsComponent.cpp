void BattleResultBondsComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct BattleResultBondsComponent_StaticFields *static_fields; // x0
  int32_t v4; // w1
  int32_t v5; // w1
  struct BattleResultBondsComponent_StaticFields *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB9B61 & 1) == 0 )
  {
    sub_1C6BA08(&BattleResultBondsComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_7085/*"GetNewSvt"*/);
    sub_1C6BA08(&StringLiteral_7072/*"GetExistSvt"*/);
    byte_4CB9B61 = 1;
  }
  static_fields = BattleResultBondsComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SVT_GAP_5 = 0x4316000043320000LL;
  *(_QWORD *)&static_fields->CONF_LABEL_MAX_WIDTH = 0x12000001D0LL;
  v4 = StringLiteral_7085/*"GetNewSvt"*/;
  static_fields->GET_NEW_SVT_KEY = (struct System_String_o *)StringLiteral_7085/*"GetNewSvt"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->GET_NEW_SVT_KEY, v4, v1, v2);
  v5 = StringLiteral_7072/*"GetExistSvt"*/;
  v6 = BattleResultBondsComponent_TypeInfo->static_fields;
  v6->GET_EXIST_SVT_KEY = (struct System_String_o *)StringLiteral_7072/*"GetExistSvt"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v6->GET_EXIST_SVT_KEY, v5, v7, v8);
}


void BattleResultBondsComponent___ctor(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  BattleResultBondsFigureComponent_o *v9; // x20
  const MethodInfo *v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4CB9B60 & 1) == 0 )
  {
    sub_1C6BA08(&BattleResultBondsFigureComponent_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4CB9B60 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.conflist = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.conflist, (int32_t)v3, v4, v5);
  this->fields.buddyPointInfoWindowHeight = 366;
  this->fields.tempSaveTimeScale = 1.0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
  this->fields.bondsList = (struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *)v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.bondsList, (int32_t)v6, v7, v8);
  v9 = (BattleResultBondsFigureComponent_o *)sub_1C6BC54(BattleResultBondsFigureComponent_TypeInfo);
  BattleResultBondsFigureComponent___ctor(v9, v10);
  this->fields.bondsFigure = v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.bondsFigure, (int32_t)v9, v11, v12);
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
  const MethodInfo *v19; // x3
  Il2CppObject *Master_object; // x25
  __int64 v21; // x24
  __int64 v22; // x23
  __int64 v23; // x25
  Il2CppObject *v24; // x8
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_String_o *v29; // x24
  Il2CppObject *v30; // x25
  __int64 v31; // x0
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4CB9B52 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    sub_1C6BA08(&GetSvtCoin___TypeInfo);
    sub_1C6BA08(&GetSvtCoin_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__);
    sub_1C6BA08(&Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__);
    sub_1C6BA08(&BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo);
    sub_1C6BA08(&BattleResultBondsComponent___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_12445/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/);
    sub_1C6BA08(&StringLiteral_18639/*"dialogIgnoreTime"*/);
    byte_4CB9B52 = 1;
  }
  entity = 0;
  if ( this->fields.getJoinSvtList && !this->fields.isWarboard )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___),
          (getJoinSvtList = this->fields.getJoinSvtList) == 0) )
    {
LABEL_45:
      sub_1C6BC60(Instance, v6);
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
        UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_18639/*"dialogIgnoreTime"*/, 1, 0);
        UnityEngine_PlayerPrefs__Save(0);
      }
      else
      {
        if ( !v8 )
          goto LABEL_45;
        Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                      v8,
                                      v11->fields.userSvtId,
                                      (const MethodInfo_33FB638 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
                _9__62_0 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
                System_Action___ctor(_9__62_0, v16, Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__, 0);
                static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
                static_fields->__9__62_0 = _9__62_0;
                sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__62_0, (int32_t)_9__62_0, v18, v19);
              }
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_SvtCoinMaster___);
              Instance = (DataManager_o *)UserServantEntity__getSvtId(v12, 0);
              if ( !Master_object )
                goto LABEL_45;
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            &entity,
                                            (int32_t)Instance,
                                            (const MethodInfo_33F9128 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_45;
                if ( SHIDWORD(entity[1].klass) >= 1 )
                {
                  v21 = sub_1C6BC54(BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v21, 0);
                  v22 = sub_1C6BAB0(GetSvtCoin___TypeInfo, 1);
                  v23 = sub_1C6BC54(GetSvtCoin_TypeInfo);
                  GetSvtCoin___ctor((GetSvtCoin_o *)v23, 0);
                  v24 = entity;
                  if ( !entity )
                    goto LABEL_45;
                  if ( !v23 )
                    goto LABEL_45;
                  *(_DWORD *)(v23 + 16) = entity[1].klass;
                  *(int32x2_t *)(v23 + 20) = vrev64_s32(*(int32x2_t *)((char *)&v24[1].klass + 4));
                  if ( !v22 )
                    goto LABEL_45;
                  Instance = (DataManager_o *)sub_1C6BB44(v23, *(_QWORD *)(*(_QWORD *)v22 + 64LL));
                  if ( !Instance )
                  {
                    v31 = sub_1C6BC84(0);
                    sub_1C6BB30(v31, 0);
                  }
                  if ( !*(_DWORD *)(v22 + 24) )
LABEL_46:
                    sub_1C6BC68(Instance);
                  *(_QWORD *)(v22 + 32) = v23;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v22 + 32), v23, v25, v26);
                  if ( !v21 )
                    goto LABEL_45;
                  *(_QWORD *)(v21 + 16) = v22;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v21 + 16), v22, v27, v28);
                  _9__62_0 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__62_0,
                    (Il2CppObject *)v21,
                    Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__,
                    0);
                }
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v29 = LocalizationManager__Get((System_String_o *)StringLiteral_12445/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0);
              v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              Instance = (DataManager_o *)EventServantEntity__GetGetMessage(EventServant, 0);
              if ( !v30 )
                goto LABEL_45;
              CommonUI__OpenNotificationDialog(
                (CommonUI_o *)v30,
                v29,
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

  if ( (byte_4CB9B5A & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleResultBondsComponent_endClose__);
    sub_1C6BA08(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4CB9B5A = 1;
  }
  if ( this->fields.isMultiDeck )
    multiDeckWindow = this->fields.multiDeckWindow;
  else
    multiDeckWindow = this->fields.window;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1C6BC54(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v4, (Il2CppObject *)this, Method_BattleResultBondsComponent_endClose__, 0);
  if ( !multiDeckWindow )
    sub_1C6BC60(v5, v6);
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))multiDeckWindow->klass->vtable._12_Close.methodPtr)(
    multiDeckWindow,
    v4,
    multiDeckWindow->klass->vtable._12_Close.method);
}


void BattleResultBondsComponent__CloseBondUpRoot(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *upRoot; // x0

  if ( (byte_4CB9B5F & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_5446/*"END_PROC"*/);
    byte_4CB9B5F = 1;
  }
  upRoot = this->fields.upRoot;
  if ( !upRoot
    || (UnityEngine_GameObject__SetActive(upRoot, 0, 0), (upRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_1C6BC60(upRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)upRoot, (System_String_o *)StringLiteral_5446/*"END_PROC"*/, 0);
}


void BattleResultBondsComponent__CreateRewardEffect(
        BattleResultBondsComponent_o *this,
        AssetData_o *data,
        UISprite_o *targetIcon,
        System_String_o *effectName,
        const MethodInfo *method)
{
  BattleResultBondsComponent_o *v8; // x20
  Il2CppObject *Object_object__51495936; // x21
  BattleResultBondsComponent_o *v10; // x21
  BattleResultBondsComponent_o *v11; // x22
  BattleResultBondsComponent_o *v12; // x22
  BattleResultBondsComponent_o *v13; // x22
  int m_CancellationTokenSource; // w8
  BattleResultBondsComponent_o *v15; // x21
  unsigned int v16; // w22

  v8 = this;
  if ( (byte_4CB9B54 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (BattleResultBondsComponent_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9B54 = 1;
  }
  if ( !data )
    goto LABEL_23;
  Object_object__51495936 = AssetData__GetObject_object__51495936(
                              data,
                              effectName,
                              (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultBondsComponent_o *)UnityEngine_Object__Instantiate_object_(
                                           Object_object__51495936,
                                           (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( !byte_4CAFC09 )
  {
    this = (BattleResultBondsComponent_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  if ( !v12 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v12,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0);
  v13 = this;
  if ( !byte_4CAFC0E )
  {
    this = (BattleResultBondsComponent_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC0E = 1;
  }
  if ( !v13 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v13,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51985744(
                                           (UnityEngine_GameObject_o *)v10,
                                           (const MethodInfo_3193D50 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
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
        sub_1C6BC68(this);
      this = (BattleResultBondsComponent_o *)*((_QWORD *)&v15->fields.parentComp + (int)v16);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0);
      m_CancellationTokenSource = (int)v15->fields.m_CancellationTokenSource;
      if ( (int)++v16 >= m_CancellationTokenSource )
        goto LABEL_21;
    }
LABEL_23:
    sub_1C6BC60(this, data);
  }
LABEL_21:
  this = (BattleResultBondsComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v15,
    (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void BattleResultBondsComponent__DeleteGetJoinSvtData(const MethodInfo *method)
{
  BattleResultBondsComponent_c *v1; // x0

  if ( (byte_4CB9B49 & 1) == 0 )
  {
    sub_1C6BA08(&BattleResultBondsComponent_TypeInfo);
    byte_4CB9B49 = 1;
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
  const MethodInfo *v6; // x1
  int v7; // w8
  _DWORD *v8; // x20
  unsigned int v9; // w21
  SePlayer_o *MeterSePlayer; // x0

  if ( (byte_4CB9B50 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_9261/*"NEXT"*/);
    sub_1C6BA08(&iTween_TypeInfo);
    byte_4CB9B50 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63714696(gameObject, 0);
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
        sub_1C6BC68(BondsIconArray);
      BondsIconArray = *(_DWORD **)&v8[2 * v9 + 8];
      if ( !BondsIconArray )
        break;
      BattleResultBondsIconComponent__FinishUpdateValue((BattleResultBondsIconComponent_o *)BondsIconArray, v6);
      v7 = v8[6];
      if ( (int)++v9 >= v7 )
        goto LABEL_11;
    }
LABEL_16:
    sub_1C6BC60(BondsIconArray, v6);
  }
LABEL_11:
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0);
  BondsIconArray = this->fields.myFsm;
  this->fields.bondsCountUp = 0;
  if ( !BondsIconArray )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_9261/*"NEXT"*/, 0);
}


BattleResultBondsIconComponent_array *BattleResultBondsComponent__GetBondsIconArray(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_bondsIconArray; // x19
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *bondsList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  System_Object_array *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CB9B5C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
    byte_4CB9B5C = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( this->fields.isMultiDeck )
  {
    p_bondsIconArray = (CGThumbnailListItem_o *)&this->fields.bondsIconArray;
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.bondsIconArray, 0) )
    {
      v4 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v4,
        (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
      bondsList = (System_Collections_Generic_List_object__o *)this->fields.bondsList;
      if ( !bondsList )
        goto LABEL_17;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v13,
        bondsList,
        (const MethodInfo_380146C *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v13,
                (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
      {
        if ( !v13.fields._current )
          sub_1C6BC60(0, v7);
        BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                          (BattleResultBondsDeckPerWaveComponent_o *)v13.fields._current,
                                                                          v7);
        if ( !v4 )
          sub_1C6BC60(BondsIconArray, BondsIconArray);
        System_Collections_Generic_List_object___AddRange(
          v4,
          BondsIconArray,
          (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v13,
        (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
      if ( !v4 )
LABEL_17:
        sub_1C6BC60(bondsList, v5);
      v9 = System_Collections_Generic_List_object___ToArray(
             v4,
             (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
      p_bondsIconArray->klass = (CGThumbnailListItem_c *)v9;
      sub_1C6B9AC(p_bondsIconArray, (int32_t)v9, v10, v11);
    }
  }
  else
  {
    p_bondsIconArray = (CGThumbnailListItem_o *)&this->fields.collects;
  }
  return (BattleResultBondsIconComponent_array *)p_bondsIconArray->klass;
}


void BattleResultBondsComponent__Init(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *window; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_Object_o *multiDeckWindow; // x20

  if ( (byte_4CB9B4A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9B4A = 1;
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
  v4 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.effectUIList, (int32_t)v4, v5, v6);
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
    sub_1C6BC60(window, method);
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Object_o *multiDeckWindow; // x20
  UnityEngine_Object_o *multiBondsPrefab; // x20
  UnityEngine_Object_o *multiBondsRoot; // x20

  v14 = inIsMultiDeck;
  if ( (byte_4CB9B4B & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9B4B = 1;
  }
  this->fields.oldCollections = oldCollects;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.oldCollections,
    (int32_t)oldCollects,
    (int32_t)inRewardInfos,
    (const MethodInfo *)resultAsset);
  this->fields.rewardInfos = inRewardInfos;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.rewardInfos, (int32_t)inRewardInfos, v15, v16);
  this->fields.resultAssetData = resultAsset;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resultAssetData, (int32_t)resultAsset, v17, v18);
  this->fields.getJoinSvtList = getJoinSvts;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.getJoinSvtList, (int32_t)getJoinSvts, v19, v20);
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
  const MethodInfo *v14; // x3
  struct BattleResultBondsIconComponent_array *v15; // x8
  struct BattleResultBondsIconComponent_array *v16; // x8
  struct BattleResultBondsIconComponent_array *v17; // x8
  struct UISprite_o *bgFrame; // x8
  float v19; // s8
  struct BattleResultBondsIconComponent_array *v20; // x8
  unsigned int v21; // w24
  float v22; // s9
  int v23; // w25
  float v24; // s10
  struct BattleResultBondsIconComponent_array *v25; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x8
  UnityEngine_Object_o *v28; // x20
  const MethodInfo *v29; // [xsp+0h] [xbp-70h]
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  v11 = targetIndex;
  v12 = this;
  if ( (byte_4CB9B5D & 1) == 0 )
  {
    sub_1C6BA08(&BattleResultBondsComponent_TypeInfo);
    this = (BattleResultBondsComponent_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9B5D = 1;
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
      BattleResultBondsIconComponent__setServantData((BattleResultBondsIconComponent_o *)this, 0, 0, 0, 0, 0, 0, 0, v29);
      v15 = v12->fields.collects;
      if ( !v15 )
        goto LABEL_49;
      if ( (unsigned int)v11 >= LODWORD(v15->max_length) )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v15->m_Items[v11];
      if ( !this )
        goto LABEL_49;
      BattleResultBondsIconComponent__SetBuddyPointInfo((BattleResultBondsIconComponent_o *)this, 0, 0, v14);
      v16 = v12->fields.collects;
      if ( !v16 )
        goto LABEL_49;
      if ( (unsigned int)v11 >= LODWORD(v16->max_length) )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v16->m_Items[v11];
      if ( !this )
        goto LABEL_49;
      this = (BattleResultBondsComponent_o *)BattleResultBondsIconComponent__ChangeGauge(
                                               (BattleResultBondsIconComponent_o *)this,
                                               0.0,
                                               *(const MethodInfo **)&targetIndex);
      v17 = v12->fields.collects;
      if ( !v17 )
        goto LABEL_49;
      if ( (unsigned int)v11 >= LODWORD(v17->max_length) )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v17->m_Items[v11];
      if ( !this )
        goto LABEL_49;
      BattleResultBondsIconComponent__InitBuddyPointInfo(
        (BattleResultBondsIconComponent_o *)this,
        *(const MethodInfo **)&targetIndex);
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
  v19 = *(float *)&bgFrame->klass;
  if ( !isNoFollower )
  {
    v20 = v12->fields.collects;
    if ( !v20 )
      goto LABEL_49;
    if ( LODWORD(v20->max_length) <= cnt )
LABEL_50:
      sub_1C6BC68(this);
    this = (BattleResultBondsComponent_o *)v20->m_Items[cnt];
    if ( !this )
      goto LABEL_49;
    this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  if ( cnt >= 1 )
  {
    v21 = 0;
    v22 = 0.0;
    v23 = 4;
    v24 = (float)(1 - cnt) * 0.5;
    do
    {
      v25 = v12->fields.collects;
      if ( isNoFollower )
        v22 = (float)v23;
      if ( !v25 )
        goto LABEL_49;
      if ( v21 >= LODWORD(v25->max_length) )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v25->m_Items[v21];
      if ( !this )
        goto LABEL_49;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v19 * v24) - v22, 0);
      ++v21;
      v24 = v24 + 1.0;
      v23 -= 2;
    }
    while ( cnt != v21 );
  }
  if ( !battleResult )
    goto LABEL_49;
  buddyPointInfos = battleResult->fields.buddyPointInfos;
  if ( buddyPointInfos && buddyPointInfos->max_length && !isHideBuddyPointResult )
  {
    v28 = (UnityEngine_Object_o *)v12->fields.bgFrame;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v28, 0, 0) )
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
      || (v30.fields.x = 0.0,
          v30.fields.y = 13.0,
          v30.fields.z = 0.0,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v30, 0),
          (this = (BattleResultBondsComponent_o *)v12->fields.window) == 0) )
    {
LABEL_49:
      sub_1C6BC60(this, *(_QWORD *)&targetIndex);
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
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL4 isMultiDeck; // w8
  struct BattleWindowComponent_o *v14; // x20
  __int64 *v15; // x8
  BattleWindowComponent_EndCall_o *v16; // x21

  if ( (byte_4CB9B4E & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_BattleResultBondsIconComponent___);
    sub_1C6BA08(&Method_BattleResultBondsComponent_OpenEnd__);
    sub_1C6BA08(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C6BA08(&System_Func_BattleResultBondsIconComponent__bool__TypeInfo);
    sub_1C6BA08(&Method_BattleResultBondsComponent___c__Open_b__53_0__);
    sub_1C6BA08(&BattleResultBondsComponent___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_5441/*"END_OPEN"*/);
    sub_1C6BA08(&StringLiteral_12237/*"SKIP"*/);
    byte_4CB9B4E = 1;
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
    _9__53_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleResultBondsIconComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__53_0, v7, Method_BattleResultBondsComponent___c__Open_b__53_0__, 0);
    static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Func_BattleResultBondsIconComponent__bool__o *)_9__53_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v9, v10);
  }
  if ( BasicHelper__Any_object__51528924(
         v5,
         (System_Func_T__bool__o *)_9__53_0,
         (const MethodInfo_31244DC *)Method_BasicHelper_Any_BattleResultBondsIconComponent___) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      isMultiDeck = this->fields.isMultiDeck;
      this->fields.openBoundsFlg = 0;
      this->fields.colIndex = 0;
      this->fields.bondsCountUp = 1;
      v14 = isMultiDeck ? this->fields.multiDeckWindow : this->fields.window;
      v16 = (BattleWindowComponent_EndCall_o *)sub_1C6BC54(BattleWindowComponent_EndCall_TypeInfo);
      BattleWindowComponent_EndCall___ctor(
        v16,
        (Il2CppObject *)this,
        (intptr_t)Method_BattleResultBondsComponent_OpenEnd__,
        0);
      if ( v14 )
      {
        ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))v14->klass->vtable._10_Open.methodPtr)(
          v14,
          v16,
          v14->klass->vtable._10_Open.method);
        gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
        if ( gameObject )
        {
          v15 = &StringLiteral_5441/*"END_OPEN"*/;
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    sub_1C6BC60(gameObject, v11);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !gameObject )
    goto LABEL_20;
  v15 = &StringLiteral_12237/*"SKIP"*/;
LABEL_19:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)*v15, 0);
}


void BattleResultBondsComponent__OpenEnd(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Object_array *v8; // x21
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  BattleResultBondsIconComponent_array *v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  BattleResultBondsIconComponent_array *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  __int64 v33; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  BattleResultBondsIconComponent_array *v36; // x22
  System_Collections_Hashtable_o *v37; // x0
  const MethodInfo *v38; // x1
  int max_length; // w8
  BattleResultBondsIconComponent_array *v40; // x20
  unsigned int v41; // w21
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x20
  System_String_o *CommonSeName; // x0
  struct SePlayer_o *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  __int64 v48; // x0
  int v49; // [xsp+Ch] [xbp-44h] BYREF
  int v50; // [xsp+18h] [xbp-38h] BYREF
  int v51; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4CB9B4F & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleResultBondsComponent_OpenEnd__);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&SeManager_TypeInfo);
    sub_1C6BA08(&float_TypeInfo);
    sub_1C6BA08(&StringLiteral_19755/*"from"*/);
    sub_1C6BA08(&StringLiteral_24169/*"time"*/);
    sub_1C6BA08(&StringLiteral_22526/*"onupdate"*/);
    sub_1C6BA08(&StringLiteral_15197/*"UpdateValue"*/);
    sub_1C6BA08(&StringLiteral_24208/*"to"*/);
    sub_1C6BA08(&StringLiteral_22518/*"oncomplete"*/);
    sub_1C6BA08(&StringLiteral_6726/*"FinishUpdateValue"*/);
    sub_1C6BA08(&iTween_TypeInfo);
    byte_4CB9B4F = 1;
  }
  if ( !this->fields.bondsCountUp )
    return;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C6BAB0(object___TypeInfo, 10);
  if ( !BondsIconArray )
LABEL_65:
    sub_1C6BC60(BondsIconArray, v5);
  v8 = (System_Object_array *)BondsIconArray;
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_19755/*"from"*/;
  if ( StringLiteral_19755/*"from"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C6BB44(
                                                               StringLiteral_19755/*"from"*/,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v9 = StringLiteral_19755/*"from"*/;
  }
  else
  {
    v9 = 0;
  }
  if ( !LODWORD(v8->max_length) )
    goto LABEL_64;
  v8->m_Items[0] = (Il2CppObject *)v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)v8->m_Items, v9, v6, v7);
  v51 = 0;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v51);
  v12 = BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C6BB44(
                                                               BondsIconArray,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
  }
  if ( LODWORD(v8->max_length) <= 1 )
    goto LABEL_64;
  v8->m_Items[1] = &v12->obj;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->m_Items[1], (int32_t)v12, v10, v11);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_24208/*"to"*/;
  if ( StringLiteral_24208/*"to"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C6BB44(
                                                               StringLiteral_24208/*"to"*/,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v15 = StringLiteral_24208/*"to"*/;
  }
  else
  {
    v15 = 0;
  }
  if ( LODWORD(v8->max_length) <= 2 )
    goto LABEL_64;
  v8->m_Items[2] = (Il2CppObject *)v15;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->m_Items[2], v15, v13, v14);
  v50 = 1065353216;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v50);
  v18 = BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C6BB44(
                                                               BondsIconArray,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
  }
  if ( LODWORD(v8->max_length) <= 3 )
    goto LABEL_64;
  v8->m_Items[3] = &v18->obj;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->m_Items[3], (int32_t)v18, v16, v17);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22526/*"onupdate"*/;
  if ( StringLiteral_22526/*"onupdate"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C6BB44(
                                                               StringLiteral_22526/*"onupdate"*/,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v21 = StringLiteral_22526/*"onupdate"*/;
  }
  else
  {
    v21 = 0;
  }
  if ( LODWORD(v8->max_length) <= 4 )
    goto LABEL_64;
  v8->m_Items[4] = (Il2CppObject *)v21;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->m_Items[4], v21, v19, v20);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_15197/*"UpdateValue"*/;
  if ( StringLiteral_15197/*"UpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C6BB44(
                                                               StringLiteral_15197/*"UpdateValue"*/,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v24 = StringLiteral_15197/*"UpdateValue"*/;
  }
  else
  {
    v24 = 0;
  }
  if ( LODWORD(v8->max_length) <= 5 )
    goto LABEL_64;
  v8->m_Items[5] = (Il2CppObject *)v24;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->m_Items[5], v24, v22, v23);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22518/*"oncomplete"*/;
  if ( StringLiteral_22518/*"oncomplete"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C6BB44(
                                                               StringLiteral_22518/*"oncomplete"*/,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v27 = StringLiteral_22518/*"oncomplete"*/;
  }
  else
  {
    v27 = 0;
  }
  if ( LODWORD(v8->max_length) <= 6 )
    goto LABEL_64;
  v8->m_Items[6] = (Il2CppObject *)v27;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->m_Items[6], v27, v25, v26);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_6726/*"FinishUpdateValue"*/;
  if ( StringLiteral_6726/*"FinishUpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C6BB44(
                                                               StringLiteral_6726/*"FinishUpdateValue"*/,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v30 = StringLiteral_6726/*"FinishUpdateValue"*/;
  }
  else
  {
    v30 = 0;
  }
  if ( LODWORD(v8->max_length) <= 7 )
    goto LABEL_64;
  v8->m_Items[7] = (Il2CppObject *)v30;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->m_Items[7], v30, v28, v29);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_24169/*"time"*/;
  if ( StringLiteral_24169/*"time"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C6BB44(
                                                               StringLiteral_24169/*"time"*/,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v33 = StringLiteral_24169/*"time"*/;
  }
  else
  {
    v33 = 0;
  }
  if ( LODWORD(v8->max_length) <= 8 )
    goto LABEL_64;
  v8->m_Items[8] = (Il2CppObject *)v33;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->m_Items[8], v33, v31, v32);
  v49 = 1072064102;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v49);
  v36 = BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C6BB44(
                                                               BondsIconArray,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
    {
LABEL_66:
      v48 = sub_1C6BC84(BondsIconArray);
      sub_1C6BB30(v48, 0);
    }
  }
  if ( LODWORD(v8->max_length) <= 9 )
    goto LABEL_64;
  v8->m_Items[9] = &v36->obj;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->m_Items[9], (int32_t)v36, v34, v35);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v37 = iTween__Hash(v8, 0);
  iTween__ValueTo(gameObject, v37, 0);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v38);
  if ( !BondsIconArray )
    goto LABEL_65;
  max_length = BondsIconArray->max_length;
  v40 = BondsIconArray;
  if ( max_length >= 1 )
  {
    v41 = 0;
    while ( v41 < max_length )
    {
      BondsIconArray = (BattleResultBondsIconComponent_array *)v40->m_Items[v41];
      if ( !BondsIconArray )
        goto LABEL_65;
      BattleResultBondsIconComponent__StartUpdateBuddyPoint((BattleResultBondsIconComponent_o *)BondsIconArray, v5);
      max_length = v40->max_length;
      if ( (int)++v41 >= max_length )
        goto LABEL_57;
    }
LABEL_64:
    sub_1C6BC68(BondsIconArray);
  }
LABEL_57:
  if ( this->fields.updateFlg )
  {
    v42 = Method_BattleResultBondsComponent_OpenEnd__;
    if ( (*((_BYTE *)Method_BattleResultBondsComponent_OpenEnd__ + 83) & 2) != 0 )
      v42 = (_QWORD *)sub_1C6BA20(Method_BattleResultBondsComponent_OpenEnd__);
    v43 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v42, v42[4]);
    if ( !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    CommonSeName = SeManager__GetCommonSeName(15, 0);
    v45 = OverwriteAssetSoundName__PlaySe(v43, CommonSeName, 0, 0);
    this->fields.MeterSePlayer = v45;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.MeterSePlayer, (int32_t)v45, v46, v47);
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
  const MethodInfo *v31; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  System_Object_array *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_4CB9B4C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
    byte_4CB9B4C = 1;
  }
  memset(&v37, 0, sizeof(v37));
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
        sub_1C6BC68(questphase_ent);
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
        v36);
      v28 = *(_DWORD *)(v23 + 24);
      v27 = v29;
    }
    while ( v29 < (int)v28 );
  }
  v30 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  questphase_ent = (QuestPhaseEntity_o *)this->fields.bondsList;
  if ( !questphase_ent )
    goto LABEL_25;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    (System_Collections_Generic_List_object__o *)questphase_ent,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
  {
    if ( !v37.fields._current )
      sub_1C6BC60(0, v31);
    BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                      (BattleResultBondsDeckPerWaveComponent_o *)v37.fields._current,
                                                                      v31);
    if ( !v30 )
      sub_1C6BC60(BondsIconArray, BondsIconArray);
    System_Collections_Generic_List_object___AddRange(
      v30,
      BondsIconArray,
      (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
  if ( !v30 )
LABEL_25:
    sub_1C6BC60(questphase_ent, v20);
  v33 = System_Collections_Generic_List_object___ToArray(
          v30,
          (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
  this->fields.bondsIconArray = (struct BattleResultBondsIconComponent_array *)v33;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.bondsIconArray, (int32_t)v33, v34, v35);
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
  const MethodInfo *v18; // x1
  UnityEngine_Object_o *v19; // x20
  Il2CppObject *v20; // x25
  Il2CppObject *v21; // x26
  Il2CppObject *multiBondsPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  BattleResultBondsDeckPerWaveComponent_o *Object_object; // x19
  const MethodInfo *v25; // x6
  System_Collections_Generic_IEnumerable_TSource__o *rewardInfos; // x21
  BattleResultBondsComponent___c_c *v27; // x0
  System_Func_object__bool__o *_9__49_0; // x20
  Il2CppObject *v29; // x22
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Collections_Generic_List_TSource__o *v34; // x0
  System_Collections_Generic_List_object__o *v35; // x21
  BattleResultBondsComponent_c *v36; // x0
  BattleResultBondsComponent_c *v37; // x0
  Il2CppObject *String_71617980; // x20
  System_Collections_Generic_IEnumerable_T__o *v39; // x0
  BattleResultBondsComponent_c *v40; // x0
  System_String_o *GET_NEW_SVT_KEY; // x20
  System_Object_array *v42; // x21
  System_String_o *v43; // x0
  BattleResultBondsComponent___c_c *v44; // x0
  System_Collections_Generic_IEnumerable_TSource__o *getJoinSvts; // x21
  System_Func_object__bool__o *_9__49_1; // x20
  Il2CppObject *v47; // x22
  struct BattleResultBondsComponent___c_StaticFields *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_Collections_Generic_List_TSource__o *v52; // x0
  System_Collections_Generic_List_object__o *v53; // x21
  BattleResultBondsComponent_c *v54; // x0
  BattleResultBondsComponent_c *v55; // x0
  Il2CppObject *v56; // x20
  System_Collections_Generic_IEnumerable_T__o *v57; // x0
  BattleResultBondsComponent_c *v58; // x0
  System_String_o *GET_EXIST_SVT_KEY; // x20
  System_Object_array *v60; // x21
  System_String_o *v61; // x0
  struct BattleDeckServantData_array *svts; // x9
  int max_length; // w8
  unsigned int v64; // w22
  int32_t v65; // w27
  BattleDeckServantData_o *v66; // x21
  struct BattleDeckServantData_array *v67; // x24
  Il2CppObject *v68; // x28
  int64_t userSvtId; // x2
  BattleResultBondsComponent_o *SvtId; // x0
  const MethodInfo *v71; // x3
  ServantEntity_o *v72; // x27
  int32_t v73; // w26
  BattleResultBondsComponent_o *v74; // x19
  int v75; // w8
  int32_t v76; // w25
  unsigned int v77; // w29
  BattleUserServantData_o *v78; // x20
  __int128 v79; // q0
  const MethodInfo *v80; // x5
  BattleResultComponent_resultData_o *v81; // x29
  int32_t afterLimitCount; // w21
  UnityEngine_Object_o *v83; // x21
  BattleResultBondsIconComponent_o *v84; // x20
  int32_t IconLimitCount; // w0
  int afterIconLimitCount; // w8
  System_Object_array *buddyPointInfos; // x29
  BattleBuddyPointInfo_o *v90; // x20
  System_Func_object__bool__o *v91; // x20
  BattleResultBondsIconComponent_o *v92; // x28
  struct BattleResultBondsIconComponent_array *v93; // x8
  const MethodInfo *v94; // x3
  const MethodInfo *v95; // x2
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  bool v97; // w20
  const MethodInfo *v98; // x2
  const MethodInfo *v99; // x1
  bool updateFlg; // w20
  const MethodInfo *v101; // x1
  struct BattleResultBondsIconComponent_array *v102; // x8
  const MethodInfo *v103; // x2
  const MethodInfo *v104; // x3
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  __int64 v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  __int64 v110; // x8
  const MethodInfo *v111; // [xsp+0h] [xbp-130h]
  int32_t cnt; // [xsp+1Ch] [xbp-114h]
  ServantLimitImageMaster_o *svtLimitImageMaster; // [xsp+20h] [xbp-110h]
  UserServantCollectionMaster_o *MasterData_object; // [xsp+30h] [xbp-100h]
  Il2CppObject *v116; // [xsp+38h] [xbp-F8h]
  Il2CppObject *v117; // [xsp+40h] [xbp-F0h]
  BattleResultBondsDeckPerWaveComponent_o *v119; // [xsp+50h] [xbp-E0h]
  int32_t Type; // [xsp+5Ch] [xbp-D4h]
  BattleData_o *battleDataa; // [xsp+60h] [xbp-D0h]
  UserServantCollectionEntity_o *userSvtCol; // [xsp+70h] [xbp-C0h]
  int32_t v124; // [xsp+7Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v125; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v126; // [xsp+A0h] [xbp-90h]
  Il2CppObject *entity; // [xsp+C8h] [xbp-68h] BYREF

  if ( (byte_4CB9B4D & 1) == 0 )
  {
    sub_1C6BA08(&Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    sub_1C6BA08(&Method_BasicHelper_Find_BattleBuddyPointInfo___);
    sub_1C6BA08(&BattleResultBondsComponent_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_GetSvts___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_GetSvts___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
    sub_1C6BA08(&System_Func_GetSvts__bool__TypeInfo);
    sub_1C6BA08(&System_Func_BattleBuddyPointInfo__bool__TypeInfo);
    sub_1C6BA08(&System_Func_QuestRewardInfo__bool__TypeInfo);
    sub_1C6BA08(&Method_JsonManager_DeserializeArray_GetSvts___);
    sub_1C6BA08(&Method_JsonManager_DeserializeArray_QuestRewardInfo___);
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GetSvts__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GetSvts__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GetSvts__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__);
    sub_1C6BA08(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__);
    sub_1C6BA08(&Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__);
    sub_1C6BA08(&BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo);
    sub_1C6BA08(&BattleResultBondsComponent___c_TypeInfo);
    byte_4CB9B4D = 1;
  }
  entity = 0;
  Type = Follower__getType(followerType, 0);
  if ( Type )
    v16 = 5;
  else
    v16 = 6;
  cnt = v16;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  MasterData_object = (UserServantCollectionMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  v19 = (UnityEngine_Object_o *)battleData;
  v20 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  v21 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( this->fields.isMultiDeck )
  {
    Instance = (int64_t)this->fields.multiBondsRoot;
    if ( !Instance )
      goto LABEL_160;
    multiBondsPrefab = (Il2CppObject *)this->fields.multiBondsPrefab;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
    Object_object = (BattleResultBondsDeckPerWaveComponent_o *)BaseMonoBehaviour__createObject_object_(
                                                                 (BaseMonoBehaviour_o *)this,
                                                                 multiBondsPrefab,
                                                                 transform,
                                                                 0,
                                                                 (const MethodInfo_3123D08 *)Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    if ( this->fields.isMultiDeck )
    {
      v19 = (UnityEngine_Object_o *)battleData;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      svtLimitImageMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    }
    else
    {
      svtLimitImageMaster = 0;
      v19 = (UnityEngine_Object_o *)battleData;
    }
  }
  else
  {
    Object_object = 0;
    svtLimitImageMaster = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(v19, 0, 0);
  v119 = Object_object;
  if ( (Instance & 1) != 0 )
  {
    if ( !v19 )
      goto LABEL_160;
    Instance = BattleData__IsWarBoard((BattleData_o *)v19, 0);
    this->fields.isWarboard = Instance & 1;
    if ( (Instance & 1) != 0 )
    {
      if ( !battleResult )
        goto LABEL_160;
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
        _9__49_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_QuestRewardInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__49_0,
          v29,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__,
          0);
        static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
        static_fields->__9__49_0 = (struct System_Func_QuestRewardInfo__bool__o *)_9__49_0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v31, v32);
      }
      v33 = System_Linq_Enumerable__Where_object_(
              rewardInfos,
              (System_Func_TSource__bool__o *)_9__49_0,
              (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
      v34 = System_Linq_Enumerable__ToList_object_(
              v33,
              (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
      if ( v34 )
      {
        v35 = (System_Collections_Generic_List_object__o *)v34;
        if ( v34->fields._size >= 1 )
        {
          v36 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v36 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v36->static_fields->GET_NEW_SVT_KEY, 0) )
          {
            v37 = BattleResultBondsComponent_TypeInfo;
            if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v37 = BattleResultBondsComponent_TypeInfo;
            }
            String_71617980 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71617980(
                                                v37->static_fields->GET_NEW_SVT_KEY,
                                                0);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v39 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_object_(
                                                                   String_71617980,
                                                                   (const MethodInfo_31AB018 *)Method_JsonManager_DeserializeArray_QuestRewardInfo___);
            System_Collections_Generic_List_object___AddRange(
              v35,
              v39,
              (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
          }
          v40 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v40 = BattleResultBondsComponent_TypeInfo;
          }
          GET_NEW_SVT_KEY = v40->static_fields->GET_NEW_SVT_KEY;
          v42 = System_Collections_Generic_List_object___ToArray(
                  v35,
                  (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v43 = JsonManager__toJson(&v42->obj, 0, 0, 0);
          UnityEngine_PlayerPrefs__SetString(GET_NEW_SVT_KEY, v43, 0);
        }
      }
      v44 = BattleResultBondsComponent___c_TypeInfo;
      getJoinSvts = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.getJoinSvts;
      if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v44 = BattleResultBondsComponent___c_TypeInfo;
      }
      _9__49_1 = (System_Func_object__bool__o *)v44->static_fields->__9__49_1;
      if ( !_9__49_1 )
      {
        if ( !v44->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v44);
          v44 = BattleResultBondsComponent___c_TypeInfo;
        }
        v47 = (Il2CppObject *)v44->static_fields->__9;
        _9__49_1 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_GetSvts__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__49_1,
          v47,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__,
          0);
        v48 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        v48->__9__49_1 = (struct System_Func_GetSvts__bool__o *)_9__49_1;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v48->__9__49_1, (int32_t)_9__49_1, v49, v50);
      }
      v51 = System_Linq_Enumerable__Where_object_(
              getJoinSvts,
              (System_Func_TSource__bool__o *)_9__49_1,
              (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_GetSvts___);
      v52 = System_Linq_Enumerable__ToList_object_(
              v51,
              (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_GetSvts___);
      if ( v52 )
      {
        v53 = (System_Collections_Generic_List_object__o *)v52;
        if ( v52->fields._size >= 1 )
        {
          v54 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v54 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v54->static_fields->GET_EXIST_SVT_KEY, 0) )
          {
            v55 = BattleResultBondsComponent_TypeInfo;
            if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v55 = BattleResultBondsComponent_TypeInfo;
            }
            v56 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71617980(v55->static_fields->GET_EXIST_SVT_KEY, 0);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v57 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_object_(
                                                                   v56,
                                                                   (const MethodInfo_31AB018 *)Method_JsonManager_DeserializeArray_GetSvts___);
            System_Collections_Generic_List_object___AddRange(
              v53,
              v57,
              (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_GetSvts__AddRange__);
          }
          v58 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v58 = BattleResultBondsComponent_TypeInfo;
          }
          GET_EXIST_SVT_KEY = v58->static_fields->GET_EXIST_SVT_KEY;
          v60 = System_Collections_Generic_List_object___ToArray(
                  v53,
                  (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_GetSvts__ToArray__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v61 = JsonManager__toJson(&v60->obj, 0, 0, 0);
          UnityEngine_PlayerPrefs__SetString(GET_EXIST_SVT_KEY, v61, 0);
        }
      }
      UnityEngine_PlayerPrefs__Save(0);
      v19 = (UnityEngine_Object_o *)battleData;
    }
  }
  if ( !myDeck )
    goto LABEL_160;
  svts = myDeck->fields.svts;
  if ( !svts )
    goto LABEL_160;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v64 = 0;
    v65 = 0;
    v116 = v21;
    v117 = v20;
    battleDataa = (BattleData_o *)v19;
    while ( 1 )
    {
      if ( v64 >= max_length )
LABEL_161:
        sub_1C6BC68(Instance);
      v66 = svts->m_Items[v64];
      v67 = svts;
      v68 = (Il2CppObject *)sub_1C6BC54(BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo);
      System_Object___ctor(v68, 0);
      if ( !v66 )
        goto LABEL_160;
      if ( !v68 )
        goto LABEL_160;
      userSvtId = v66->fields.userSvtId;
      v68[1].klass = (Il2CppClass *)userSvtId;
      if ( !v20 )
        goto LABEL_160;
      Instance = DataMasterBase_object__object__long___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v20,
                   &entity,
                   userSvtId,
                   (const MethodInfo_33FB684 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( (Instance & 1) != 0 )
        break;
      if ( !v19 )
        goto LABEL_160;
      Instance = BattleData__IsInterruptionQuest((BattleData_o *)v19, 0);
      if ( (Instance & 1) == 0 )
        goto LABEL_135;
      if ( this->fields.isMultiDeck )
      {
        if ( !Object_object )
          goto LABEL_160;
        v83 = v19;
        Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, v18);
        v84 = (BattleResultBondsIconComponent_o *)Instance;
        if ( !Instance )
          goto LABEL_160;
      }
      else
      {
        v102 = this->fields.collects;
        if ( !v102 )
          goto LABEL_160;
        if ( (unsigned int)v65 >= LODWORD(v102->max_length) )
          goto LABEL_161;
        v83 = v19;
        v84 = v102->m_Items[v65];
        if ( !v84 )
          goto LABEL_160;
      }
      BattleResultBondsIconComponent__setServantData(v84, 0, 0, 0, 0, 0, 0, 0, v111);
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v84, 0);
      if ( !Instance )
        goto LABEL_160;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      ++v65;
      svts = v67;
      v19 = v83;
LABEL_141:
      max_length = svts->max_length;
      if ( (int)++v64 >= max_length )
        goto LABEL_144;
    }
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_160;
    SvtId = (BattleResultBondsComponent_o *)UserServantEntity__getSvtId((UserServantEntity_o *)entity, 0);
    Instance = (int64_t)BattleResultBondsComponent__getServantCollection(SvtId, oldCollects, (int32_t)SvtId, v71);
    userSvtCol = (UserServantCollectionEntity_o *)Instance;
    if ( !entity )
      goto LABEL_160;
    v124 = v65;
    Instance = UserServantEntity__getSvtId((UserServantEntity_o *)entity, 0);
    if ( !v21 )
      goto LABEL_160;
    Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)v21,
                          Instance,
                          (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !entity )
      goto LABEL_160;
    v72 = (ServantEntity_o *)Instance;
    Instance = UserServantEntity__getIconLimitCount((UserServantEntity_o *)entity, 0, 0);
    if ( !entity )
      goto LABEL_160;
    v73 = Instance;
    v74 = this;
    Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)entity, 0, 0);
    if ( !usrSvts )
      goto LABEL_160;
    v75 = usrSvts->max_length;
    v76 = Instance;
    if ( v75 < 1 )
    {
LABEL_89:
      v81 = battleResult;
      afterLimitCount = -1;
      if ( !battleResult )
        goto LABEL_160;
    }
    else
    {
      v77 = 0;
      while ( 1 )
      {
        if ( v77 >= v75 )
          goto LABEL_161;
        v78 = usrSvts->m_Items[v77];
        if ( !v78 )
          goto LABEL_160;
        v79 = *(_OWORD *)&v78->fields.id.fields.fakeValue;
        *(_OWORD *)&v126.fields.currentCryptoKey = *(_OWORD *)&v78->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v126.fields.fakeValue = v79;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v125 = v126;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v125, 0);
        if ( (Il2CppClass *)Instance == v68[1].klass )
          break;
        v75 = usrSvts->max_length;
        if ( (int)++v77 >= v75 )
          goto LABEL_89;
      }
      v81 = battleResult;
      if ( v74->fields.isMultiDeck )
        BattleResultBondsComponent__UpdateAfterLimitCount(
          (BattleResultBondsComponent_o *)Instance,
          battleDataa,
          v78,
          v66,
          svtLimitImageMaster,
          v80);
      IconLimitCount = UserServantEntity__getIconLimitCount((UserServantEntity_o *)v78, 0, 0);
      afterIconLimitCount = v78->fields.afterIconLimitCount;
      if ( afterIconLimitCount < 0 || IconLimitCount == afterIconLimitCount )
        v73 = IconLimitCount;
      else
        v73 = v78->fields.afterIconLimitCount;
      Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v78, 0, 0);
      afterLimitCount = v78->fields.afterLimitCount;
      if ( afterLimitCount < 0 || (_DWORD)Instance == afterLimitCount )
        v76 = Instance;
      else
        v76 = v78->fields.afterLimitCount;
      if ( !battleResult )
        goto LABEL_160;
    }
    buddyPointInfos = (System_Object_array *)v81->fields.buddyPointInfos;
    if ( buddyPointInfos )
    {
      v90 = 0;
      if ( buddyPointInfos->max_length && !isHideBuddyPointResult )
      {
        v91 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleBuddyPointInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v91,
          v68,
          Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__,
          0);
        Instance = (int64_t)BasicHelper__Find_object_(
                              buddyPointInfos,
                              (System_Func_T__bool__o *)v91,
                              (const MethodInfo_3124FFC *)Method_BasicHelper_Find_BattleBuddyPointInfo___);
        v90 = (BattleBuddyPointInfo_o *)Instance;
      }
    }
    else
    {
      v90 = 0;
    }
    this = v74;
    if ( v74->fields.isMultiDeck )
    {
      Object_object = v119;
      if ( !v119 )
        goto LABEL_160;
      Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(v119, v18);
      v92 = (BattleResultBondsIconComponent_o *)Instance;
      if ( !Instance )
        goto LABEL_160;
    }
    else
    {
      v93 = v74->fields.collects;
      Object_object = v119;
      if ( !v93 )
        goto LABEL_160;
      if ( (unsigned int)v124 >= LODWORD(v93->max_length) )
        goto LABEL_161;
      v92 = v93->m_Items[v124];
      if ( !v92 )
        goto LABEL_160;
    }
    BattleResultBondsIconComponent__setServantData(
      v92,
      userSvtCol,
      (UserServantEntity_o *)entity,
      v73,
      v76,
      this->fields.baseFriendshipExp,
      Type == 0,
      afterLimitCount,
      v111);
    BattleResultBondsIconComponent__SetBuddyPointInfo(v92, v90, battleResult->fields.eventId, v94);
    if ( !v72 )
      goto LABEL_160;
    v21 = v116;
    v20 = v117;
    if ( !ServantEntity__checkIsHeroineSvt(v72, 0) )
      goto LABEL_128;
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_160;
    if ( !UserServantEntity__IsAddFriendShipHeroine((UserServantEntity_o *)entity, 0) )
    {
      updateFlg = this->fields.updateFlg;
      this->fields.updateFlg = updateFlg | BattleResultBondsIconComponent__setNextServantData(v92, userSvtCol, v95);
      v92->fields.isNoFriendship = 1;
    }
    else
    {
LABEL_128:
      Instance = (int64_t)MasterData_object;
      if ( !MasterData_object )
        goto LABEL_160;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                           MasterData_object,
                           v92->fields.userId,
                           v92->fields.svtId,
                           0);
      v97 = this->fields.updateFlg;
      this->fields.updateFlg = v97 | BattleResultBondsIconComponent__setNextServantData(v92, EntityDefinitely, v98);
    }
    BattleResultBondsIconComponent__ChangeGauge(v92, 0.0, v99);
    BattleResultBondsIconComponent__InitBuddyPointInfo(v92, v101);
    v19 = (UnityEngine_Object_o *)battleDataa;
    if ( this->fields.isMultiDeck )
    {
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v92, 0);
      if ( !Instance )
        goto LABEL_160;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    }
    v65 = v124 + 1;
LABEL_135:
    svts = v67;
    goto LABEL_141;
  }
  v65 = 0;
LABEL_144:
  if ( !this->fields.isMultiDeck )
  {
    BattleResultBondsComponent__NormalBondsInit(this, v65, cnt, Type == 0, battleResult, isHideBuddyPointResult, v25);
    return;
  }
  if ( !v19 )
    goto LABEL_160;
  Instance = (int64_t)v19[4].klass;
  if ( !Instance )
    goto LABEL_160;
  Instance = QuestPhaseEntity__IsWaveSetupSwitchParty((QuestPhaseEntity_o *)Instance, 0);
  if ( !Object_object )
    goto LABEL_160;
  if ( (Instance & 1) != 0 )
    BattleResultBondsDeckPerWaveComponent__SetPartyName(Object_object, currentWave, v103);
  else
    BattleResultBondsDeckPerWaveComponent__SetWaveCount(Object_object, currentWave, maxWave, v104);
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object_object, 0);
  if ( !Instance )
    goto LABEL_160;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (int64_t)Object_object->fields.iconRoot;
  if ( !Instance
    || ((*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
          Instance,
          *(_QWORD *)(*(_QWORD *)Instance + 448LL)),
        (Instance = (int64_t)this->fields.multiBondsRoot) == 0)
    || ((*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
          Instance,
          *(_QWORD *)(*(_QWORD *)Instance + 448LL)),
        (Instance = (int64_t)this->fields.bondsList) == 0)
    || (v107 = *(_QWORD *)(Instance + 16),
        v108 = Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__,
        ++*(_DWORD *)(Instance + 28),
        !v107) )
  {
LABEL_160:
    sub_1C6BC60(Instance, v18);
  }
  v109 = *(int *)(Instance + 24);
  if ( (unsigned int)v109 >= *(_DWORD *)(v107 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)Object_object,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
  }
  else
  {
    v110 = v107 + 8 * v109;
    *(_DWORD *)(Instance + 24) = v109 + 1;
    *(_QWORD *)(v110 + 32) = Object_object;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v110 + 32), (int32_t)Object_object, v105, v106);
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
        sub_1C6BC68(BondsIconArray);
      BondsIconArray = (BattleResultBondsIconComponent_array *)v6->m_Items[v7];
      if ( !BondsIconArray )
        break;
      BattleResultBondsIconComponent__FinishBuddyPointInfoUpdate((BattleResultBondsIconComponent_o *)BondsIconArray, v4);
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_7;
    }
LABEL_9:
    sub_1C6BC60(BondsIconArray, v4);
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

  if ( (byte_4CB9B5E & 1) == 0 )
  {
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    this = (BattleResultBondsComponent_o *)sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB9B5E = 1;
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
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v26, 0);
  this = (BattleResultBondsComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                           userSvtData->fields.limitCount,
                                           0);
  if ( !svtLimitImageMaster )
LABEL_26:
    sub_1C6BC60(this, battleData);
  if ( ServantLimitImageMaster__IsServantLimitCountSeal(svtLimitImageMaster, v15, (int32_t)this, 0) )
  {
    v17 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v27.fields.currentCryptoKey = v17;
    *(_QWORD *)&v27.fields.fakeValue = v16;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v27, 0);
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
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v28, 0);
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
        sub_1C6BC68(BondsIconArray);
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
    sub_1C6BC60(BondsIconArray, v5);
  }
}


void BattleResultBondsComponent___checkShow_b__67_0(BattleResultBondsComponent_o *this, const MethodInfo *method)
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
  if ( (unsigned int)showIndex >= LODWORD(showList->max_length) )
    sub_1C6BC68(this);
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v8 = v5->fields.parentComp;
  if ( !v8 )
    goto LABEL_16;
  this = (BattleResultBondsComponent_o *)v8->fields.obj_basebg;
  if ( !this )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
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
  this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
        (this = (BattleResultBondsComponent_o *)v5->fields.upRoot) == 0) )
  {
LABEL_16:
    sub_1C6BC60(this, method);
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
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x4
  UISprite_o *v25; // x0
  int32_t v26; // w1
  UnityEngine_Transform_o *transform; // x21
  float v28; // s8
  float y; // s9
  float v30; // s0
  float v31; // s1
  intptr_t m_CachedPtr; // x8
  _QWORD *v33; // x9
  __int64 klass_low; // x10
  intptr_t v35; // x8
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB9B53 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&BattleResultBondsComponent_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_17281/*"bit_reward_shine02"*/);
    byte_4CB9B53 = 1;
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
  v36.fields.y = -112.0 - posY;
  v36.fields.x = 0.0;
  v36.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v36, 0);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 v17,
                                 (const MethodInfo_3193390 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
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
          (const MethodInfo_3193390 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v21 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0, 0);
  if ( (iconImageId & 0x80000000) == 0 && v21 )
  {
    if ( type == 18 )
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v26 = 9;
      v25 = (UISprite_o *)v20;
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
          (System_String_o *)StringLiteral_17281/*"bit_reward_shine02"*/,
          v24);
        if ( ComponentInChildren_object )
        {
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ComponentInChildren_object, 0);
          Object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)ComponentInChildren_object,
                                                 0);
          if ( Object )
          {
            LODWORD(v28) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Object, 0);
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
                v38 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Object, 0);
                if ( transform )
                {
                  v30 = v28 + 36.0;
                  v31 = y;
                  UnityEngine_Transform__set_localPosition(transform, v38, 0);
                  goto LABEL_37;
                }
              }
            }
          }
        }
LABEL_42:
        sub_1C6BC60(Object, v16);
      }
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v25 = (UISprite_o *)v20;
      v26 = iconImageId;
      if ( isCoin )
      {
        AtlasManager__SetCoin((UISprite_o *)v20, iconImageId, 0);
        goto LABEL_31;
      }
    }
    AtlasManager__SetItem(v25, v26, 0);
    goto LABEL_31;
  }
LABEL_37:
  Object = (UnityEngine_GameObject_o *)this->fields.conflist;
  if ( !Object )
    goto LABEL_42;
  m_CachedPtr = Object->fields.m_CachedPtr;
  v33 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(Object[1].klass);
  if ( !m_CachedPtr )
    goto LABEL_42;
  klass_low = SLODWORD(Object[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Object,
      (Il2CppObject *)v17,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = m_CachedPtr + 8 * klass_low;
    LODWORD(Object[1].klass) = klass_low + 1;
    *(_QWORD *)(v35 + 32) = v17;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v35 + 32), (int32_t)v17, v22, v23);
  }
}


void BattleResultBondsComponent__checkBondsUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x22
  System_Collections_Generic_List_object__o *conflist; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t colIndex; // w8
  __int64 v13; // x9
  int32_t v14; // w10
  __int64 v15; // x11
  __int64 *v16; // x8
  __int64 v17; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 *v20; // x21
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_GameObject__o *v22; // x8
  int32_t size; // w2
  int v24; // w9
  UnityEngine_Object_o *levelUpSimpleAnim; // x22
  System_Collections_Generic_List_object__c *klass; // x8
  System_Collections_Generic_List_object__o *v27; // x22
  __int64 v28; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v30; // x0
  UnityEngine_Object_o *levelUpAnim; // x22
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x9
  __int64 v35; // x8
  __int64 v36; // x9
  struct BattleResultBondsIconComponent_o *v37; // x1
  UnityEngine_Object_o *figureMoveRoot; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o **v40; // x21
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  UnityEngine_GameObject_o *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t svtId; // w22
  int32_t svtLimit; // w23
  BattleResultBondsFigureComponent_o *bondsFigure; // x19
  UnityEngine_GameObject_o *v50; // x21
  System_Action_o *v51; // x24
  const MethodInfo *v52; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CB9B51 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&SimpleAnimation_State_TypeInfo);
    sub_1C6BA08(&BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo);
    sub_1C6BA08(&Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__);
    sub_1C6BA08(&BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo);
    sub_1C6BA08(&StringLiteral_17265/*"bit_result_levelup01"*/);
    sub_1C6BA08(&StringLiteral_3489/*"CLOSE"*/);
    sub_1C6BA08(&StringLiteral_5446/*"END_PROC"*/);
    sub_1C6BA08(&StringLiteral_3492/*"CLOSE_BOND_UP_ROOT"*/);
    byte_4CB9B51 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  v3 = sub_1C6BC54(BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_68;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v8);
  *(_QWORD *)(v3 + 24) = BondsIconArray;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)BondsIconArray, v10, v11);
  colIndex = this->fields.colIndex;
  v13 = *(_QWORD *)(v3 + 24);
  *(_DWORD *)(v3 + 32) = colIndex;
  if ( !v13 )
    goto LABEL_68;
  v14 = *(_DWORD *)(v13 + 24);
  if ( colIndex >= v14 )
    goto LABEL_12;
  do
  {
    if ( colIndex >= (unsigned int)v14 )
    {
      this->fields.colIndex = colIndex;
      sub_1C6BC68(conflist);
    }
    v15 = *(_QWORD *)(v13 + 8LL * colIndex + 32);
    if ( !v15 )
    {
      this->fields.colIndex = colIndex;
      sub_1C6BC60(conflist, v5);
    }
    if ( *(_BYTE *)(v15 + 128) && *(_DWORD *)(v15 + 176) != *(_DWORD *)(v15 + 184) )
    {
      this->fields.colIndex = colIndex;
      v17 = sub_1C6BC54(BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v17, 0);
      if ( !v17 )
        goto LABEL_68;
      *(_QWORD *)(v17 + 24) = v3;
      v20 = (__int64 *)(v17 + 24);
      sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 24), v3, v18, v19);
      conflist = (System_Collections_Generic_List_object__o *)this->fields.conflist;
      if ( !conflist )
        goto LABEL_68;
      if ( conflist->fields._size >= 1 )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v53,
          conflist,
          (const MethodInfo_380146C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
        v54 = v53;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v54,
                  (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
        {
          current = v54.fields._current;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71659676((UnityEngine_Object_o *)current, 0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v54,
          (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
        v22 = this->fields.conflist;
        if ( !v22 )
          goto LABEL_68;
        size = v22->fields._size;
        v24 = v22->fields._version + 1;
        v22->fields._size = 0;
        v22->fields._version = v24;
        if ( size >= 1 )
          System_Array__Clear((System_Array_o *)v22->fields._items, 0, size, 0);
      }
      conflist = (System_Collections_Generic_List_object__o *)this->fields.upRoot;
      if ( !conflist )
        goto LABEL_68;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)conflist, 1, 0);
      levelUpSimpleAnim = (UnityEngine_Object_o *)this->fields.levelUpSimpleAnim;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(levelUpSimpleAnim, 0, 0) )
      {
        conflist = (System_Collections_Generic_List_object__o *)this->fields.levelUpSimpleAnim;
        if ( !conflist )
          goto LABEL_68;
        conflist = (System_Collections_Generic_List_object__o *)SimpleAnimation__get_Item(
                                                                  (SimpleAnimation_o *)conflist,
                                                                  (System_String_o *)StringLiteral_17265/*"bit_result_levelup01"*/,
                                                                  0);
        if ( !conflist )
          goto LABEL_68;
        klass = conflist->klass;
        v27 = conflist;
        v28 = *(unsigned __int16 *)&conflist->klass->_2.rank;
        if ( *(_WORD *)&conflist->klass->_2.rank )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v28;
            p_offset += 2;
            if ( !v28 )
              goto LABEL_41;
          }
          v30 = (__int64)(&klass->vtable._4_unknown + *(_DWORD *)p_offset);
        }
        else
        {
LABEL_41:
          v30 = sub_1C41D90(conflist, SimpleAnimation_State_TypeInfo, 4);
        }
        (*(void (__fastcall **)(System_Collections_Generic_List_object__o *, _QWORD, float))v30)(
          v27,
          *(_QWORD *)(v30 + 8),
          0.0);
        conflist = (System_Collections_Generic_List_object__o *)this->fields.levelUpSimpleAnim;
        if ( !conflist )
          goto LABEL_68;
        conflist = (System_Collections_Generic_List_object__o *)SimpleAnimation__Play_66911856(
                                                                  (SimpleAnimation_o *)conflist,
                                                                  (System_String_o *)StringLiteral_17265/*"bit_result_levelup01"*/,
                                                                  0);
      }
      else
      {
        levelUpAnim = (UnityEngine_Object_o *)this->fields.levelUpAnim;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        conflist = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(levelUpAnim, 0, 0);
        if ( ((unsigned __int8)conflist & 1) != 0 )
        {
          conflist = (System_Collections_Generic_List_object__o *)this->fields.levelUpAnim;
          if ( !conflist )
            goto LABEL_68;
          conflist = (System_Collections_Generic_List_object__o *)UnityEngine_Animation__get_Item(
                                                                    (UnityEngine_Animation_o *)conflist,
                                                                    (System_String_o *)StringLiteral_17265/*"bit_result_levelup01"*/,
                                                                    0);
          if ( !conflist )
            goto LABEL_68;
          UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)conflist, 0.0, 0);
          conflist = (System_Collections_Generic_List_object__o *)this->fields.levelUpAnim;
          if ( !conflist )
            goto LABEL_68;
          conflist = (System_Collections_Generic_List_object__o *)UnityEngine_Animation__Play_71403152(
                                                                    (UnityEngine_Animation_o *)conflist,
                                                                    (System_String_o *)StringLiteral_17265/*"bit_result_levelup01"*/,
                                                                    0);
        }
      }
      v34 = *v20;
      if ( *v20 )
      {
        v35 = *(_QWORD *)(v34 + 24);
        if ( v35 )
        {
          v36 = *(int *)(v34 + 32);
          if ( (unsigned int)v36 >= *(_DWORD *)(v35 + 24) )
            sub_1C6BC68(conflist);
          v37 = *(struct BattleResultBondsIconComponent_o **)(v35 + 8 * v36 + 32);
          this->fields.openCollect = v37;
          sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.openCollect, (int32_t)v37, v32, v33);
          figureMoveRoot = (UnityEngine_Object_o *)this->fields.figureMoveRoot;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(figureMoveRoot, 0, 0) )
          {
            conflist = (System_Collections_Generic_List_object__o *)this->fields.figureMoveRoot;
            if ( !conflist )
              goto LABEL_68;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)conflist, 0);
            *(_QWORD *)(v17 + 16) = gameObject;
            v40 = (UnityEngine_GameObject_o **)(v17 + 16);
            sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 16), (int32_t)gameObject, v41, v42);
            conflist = *(System_Collections_Generic_List_object__o **)(v17 + 16);
            if ( !conflist )
              goto LABEL_68;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)conflist, 0, 0);
          }
          else
          {
            conflist = (System_Collections_Generic_List_object__o *)this->fields.figureRoot;
            if ( !conflist )
              goto LABEL_68;
            v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)conflist, 0);
            *(_QWORD *)(v17 + 16) = v43;
            v40 = (UnityEngine_GameObject_o **)(v17 + 16);
            sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 16), (int32_t)v43, v44, v45);
          }
          openCollect = this->fields.openCollect;
          if ( openCollect )
          {
            svtId = openCollect->fields.svtId;
            svtLimit = openCollect->fields.svtLimit;
            bondsFigure = this->fields.bondsFigure;
            v50 = *v40;
            v51 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
            System_Action___ctor(
              v51,
              (Il2CppObject *)v17,
              Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__,
              0);
            if ( bondsFigure )
            {
              BattleResultBondsFigureComponent__SetupFigure(bondsFigure, v50, svtId, svtLimit, 7, 0, 51, v51, v52);
              return;
            }
          }
        }
      }
LABEL_68:
      sub_1C6BC60(conflist, v5);
    }
    *(_DWORD *)(v3 + 32) = ++colIndex;
  }
  while ( colIndex < v14 );
  this->fields.colIndex = colIndex - 1;
LABEL_12:
  conflist = (System_Collections_Generic_List_object__o *)this->fields.myFsm;
  if ( !this->fields.openBoundsFlg )
  {
    if ( conflist )
    {
      v16 = &StringLiteral_3489/*"CLOSE"*/;
      goto LABEL_27;
    }
    goto LABEL_68;
  }
  if ( !conflist )
    goto LABEL_68;
  if ( this->fields.isMultiDeck )
    v16 = &StringLiteral_3492/*"CLOSE_BOND_UP_ROOT"*/;
  else
    v16 = &StringLiteral_5446/*"END_PROC"*/;
LABEL_27:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)conflist, (System_String_o *)*v16, 0);
}


void BattleResultBondsComponent__checkShow(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  struct BattleFriendshipRewardInfo_array *showList; // x8
  il2cpp_array_size_t max_length; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  SummonAssetManager_o *parentComp; // x0
  struct BattleResultComponent_o *v8; // x8
  struct BattleResultComponent_o *v9; // x8
  const MethodInfo *v10; // x3

  if ( (byte_4CB9B57 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BattleResultBondsComponent__checkShow_b__67_0__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_4CB9B57 = 1;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
        v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
        System_Action___ctor(v6, (Il2CppObject *)this, Method_BattleResultBondsComponent__checkShow_b__67_0__, 0);
        if ( Instance )
        {
          SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v6, 0);
          return;
        }
        goto LABEL_23;
      }
      parentComp = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      if ( !parentComp )
        goto LABEL_23;
      SummonAssetManager__UnloadSummonAssets(parentComp, 0);
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)parentComp, 1, 0);
  v9 = this->fields.parentComp;
  if ( !v9 )
    goto LABEL_23;
  parentComp = (SummonAssetManager_o *)v9->fields.obj_basebg;
  if ( !parentComp )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)parentComp, 1, 0);
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
  parentComp = (SummonAssetManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parentComp, 0);
  if ( !parentComp
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)parentComp, 1, 0),
        (parentComp = (SummonAssetManager_o *)this->fields.upRoot) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)parentComp, 1, 0),
        (parentComp = (SummonAssetManager_o *)this->fields.parentComp) == 0) )
  {
LABEL_23:
    sub_1C6BC60(parentComp, method);
  }
  BattleResultComponent__showServantRewardAction((BattleResultComponent_o *)parentComp, 0, 1, v10);
}


void BattleResultBondsComponent__closeBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4CB9B58 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleResultBondsComponent_closeBondUp__);
    sub_1C6BA08(&Method_BattleResultBondsComponent_endCloseBondUp__);
    sub_1C6BA08(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIUnityRenderer__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
    byte_4CB9B58 = 1;
  }
  UnityEngine_Time__set_timeScale(this->fields.tempSaveTimeScale, 0);
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
                       (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
      if ( !effectUIList )
        goto LABEL_19;
      effectUIList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectUIList, 0);
      if ( !effectUIList )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectUIList, 0, 0);
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
      System_Array__Clear(*((System_Array_o **)effectUIList + 2), 0, v6, 0);
  }
  v8 = Method_BattleResultBondsComponent_closeBondUp__;
  if ( (*((_BYTE *)Method_BattleResultBondsComponent_closeBondUp__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C6BA20(Method_BattleResultBondsComponent_closeBondUp__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (effectUIList = parentComp->fields.obj_fronttouch) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectUIList, 0, 0),
        (effectUIList = this->fields.bondsFigure) == 0)
    || (BattleResultBondsFigureComponent__DestroyFigure((BattleResultBondsFigureComponent_o *)effectUIList, v3),
        confwindow = this->fields.confwindow,
        v12 = (BattleWindowComponent_EndCall_o *)sub_1C6BC54(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v12,
          (Il2CppObject *)this,
          Method_BattleResultBondsComponent_endCloseBondUp__,
          0),
        !confwindow) )
  {
LABEL_19:
    sub_1C6BC60(effectUIList, v3);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))confwindow->klass->vtable._12_Close.methodPtr)(
    confwindow,
    v12,
    confwindow->klass->vtable._12_Close.method);
}


void BattleResultBondsComponent__endClose(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1
  ServantFaceIconComponent_o *BondsIconArray; // x0
  __int64 v7; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  ServantFaceIconComponent_o *v9; // x20
  int v10; // w21
  int v11; // w22
  __int64 v12; // x8

  if ( (byte_4CB9B5B & 1) == 0 )
  {
    sub_1C6BA08(&OptionManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_5446/*"END_PROC"*/);
    byte_4CB9B5B = 1;
  }
  this->fields.resultAssetData = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resultAssetData, 0, v2, v3);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0) )
  {
    BondsIconArray = (ServantFaceIconComponent_o *)BattleResultBondsComponent__GetBondsIconArray(this, v5);
    if ( !BondsIconArray )
      goto LABEL_17;
    m_CancellationTokenSource = BondsIconArray->fields.m_CancellationTokenSource;
    v9 = BondsIconArray;
    v10 = (_DWORD)m_CancellationTokenSource - 1;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        v12 = *((_QWORD *)&v9->fields.backSprite + v11);
        if ( !v12 )
          break;
        BondsIconArray = *(ServantFaceIconComponent_o **)(v12 + 48);
        if ( !BondsIconArray )
          break;
        ServantFaceIconComponent__ClearFaceAtlas(BondsIconArray, 0);
        if ( v10 == v11 )
          goto LABEL_14;
        if ( (unsigned int)++v11 >= LODWORD(v9->fields.m_CancellationTokenSource) )
          sub_1C6BC68(BondsIconArray);
      }
LABEL_17:
      sub_1C6BC60(BondsIconArray, v7);
    }
  }
LABEL_14:
  BondsIconArray = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
  if ( !BondsIconArray )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BondsIconArray, 0, 0);
  BondsIconArray = (ServantFaceIconComponent_o *)this->fields.myFsm;
  if ( !BondsIconArray )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_5446/*"END_PROC"*/, 0);
}


void BattleResultBondsComponent__endCloseBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CB9B59 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_5446/*"END_PROC"*/);
    byte_4CB9B59 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C6BC60(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5446/*"END_PROC"*/, 0);
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
  int v33; // w21
  int CONF_SERVANT_COIN_PLUS_HEIGHT; // w26
  struct BattleResultBondsIconComponent_o *v35; // x8
  BattleFriendshipRewardInfo_o *v36; // x25
  GiftEntity_o *v37; // x26
  int32_t type; // w8
  Il2CppObject *v39; // x0
  System_String_o *v40; // x27
  Il2CppObject *v41; // x0
  Il2CppObject *v42; // x0
  ServantEntity_o *v43; // x27
  Il2CppObject *Master_object; // x28
  int32_t v45; // w1
  System_String_o *v46; // x0
  const MethodInfo *v47; // x6
  int32_t v48; // w5
  System_String_o *v49; // x1
  float v50; // s0
  int32_t objectId; // w2
  System_String_o *v52; // x0
  bool v53; // w27
  Il2CppObject *Name; // x27
  System_String_o *v55; // x0
  System_String_o *v56; // x28
  int32_t IconImageId; // w0
  const MethodInfo *v58; // x6
  BattleResultBondsComponent_c *v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct System_Object_array *items; // x8
  _QWORD *v63; // x9
  __int64 size; // x10
  Il2CppClass **v65; // x0
  System_Object_array *v66; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  int v69; // w20
  UnityEngine_Transform_o *confRoot; // x21
  unsigned int localPosition; // s0 OVERLAPPED
  int v72; // w8
  float v73; // s1
  int v74; // w20
  float v75; // s1
  int v76; // s2
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *rankupConfLabel; // x21
  struct BattleWindowComponent_o *confwindow; // x20
  BattleWindowComponent_EndCall_o *v80; // x21
  int32_t key; // [xsp+4h] [xbp-CCh]
  System_Text_StringBuilder_o *v82; // [xsp+8h] [xbp-C8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v83; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+18h] [xbp-B8h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+30h] [xbp-A0h] BYREF
  System_String_o *countText; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+40h] [xbp-90h] BYREF
  System_String_o *nameText; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4CB9B55 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleResultBondsComponent_endMoveFigure__);
    sub_1C6BA08(&Method_BattleResultBondsComponent_openedBondUp__);
    sub_1C6BA08(&BattleResultBondsComponent_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C6BA08(&System_Text_StringBuilder_TypeInfo);
    sub_1C6BA08(&StringLiteral_11110/*"RESULT_BOUNDS_OPENQUEST"*/);
    sub_1C6BA08(&StringLiteral_113/*" "*/);
    sub_1C6BA08(&StringLiteral_11113/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/);
    sub_1C6BA08(&StringLiteral_11112/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/);
    sub_1C6BA08(&StringLiteral_11108/*"RESULT_BOUNDS_GET_COIN_NAME"*/);
    sub_1C6BA08(&StringLiteral_11105/*"RESULT_BOUNDS_GETVOICE"*/);
    sub_1C6BA08(&StringLiteral_25243/*"{0} {1}"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_11107/*"RESULT_BOUNDS_GET_COIN_COUNT"*/);
    byte_4CB9B55 = 1;
  }
  memset(&v87, 0, sizeof(v87));
  nameText = 0;
  entity = 0;
  countText = 0;
  v3 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0);
  v4 = Method_BattleResultBondsComponent_endMoveFigure__;
  if ( (*((_BYTE *)Method_BattleResultBondsComponent_endMoveFigure__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C6BA20(Method_BattleResultBondsComponent_endMoveFigure__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 6, 0, 0);
  openCollect = this->fields.openCollect;
  if ( !openCollect )
    goto LABEL_120;
  lvComp = (__int64)this->fields.lvComp;
  if ( !lvComp )
    goto LABEL_120;
  friendshipRank = openCollect->fields.friendshipRank;
  svtId = openCollect->fields.svtId;
  BattleResultMasterUpStatusComponent__setData(
    (BattleResultMasterUpStatusComponent_o *)lvComp,
    friendshipRank,
    openCollect->fields.nextFriendShipRank,
    0);
  lvComp = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !lvComp )
    goto LABEL_120;
  v82 = v3;
  lvComp = (__int64)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                      (clsQuestCheck_o *)lvComp,
                      svtId,
                      friendshipRank,
                      8,
                      0);
  if ( lvComp )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v84,
      (System_Collections_Generic_List_object__o *)lvComp,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    v11 = 0;
    v87 = v84;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v87,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
    {
      current = v87.fields._current;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11110/*"RESULT_BOUNDS_OPENQUEST"*/, 0);
      if ( !current )
        sub_1C6BC60(v13, v14);
      v15 = v13;
      QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0);
      v17 = System_String__Format(v15, QuestName, 0);
      BattleResultBondsComponent__addConfObject(this, v17, (float)v11 * 22.0, -1, 0, 0, 1, v18);
      v11 += 3;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v87,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  }
  else
  {
    v11 = 0;
  }
  v19 = this->fields.openCollect;
  if ( !v19 )
    goto LABEL_120;
  svtLimit = v19->fields.svtLimit;
  lvComp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lvComp )
    goto LABEL_120;
  lvComp = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)lvComp,
                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !lvComp )
    goto LABEL_120;
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
    v22 = &StringLiteral_11113/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/;
    v23 = 4;
    v24 = 1;
  }
  else
  {
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    lvComp = ServantCommentManager__IsOpenByServantFriendShip_43718976(
               svtId,
               friendshipRank,
               ServantLimitCountSealAfter,
               0);
    if ( (lvComp & 1) == 0 )
      goto LABEL_33;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = &StringLiteral_11112/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/;
    v24 = 0;
    v23 = 2;
  }
  v25 = LocalizationManager__Get((System_String_o *)*v22, 0);
  BattleResultBondsComponent__addConfObject(this, v25, (float)v11 * 22.0, -1, 0, v24, 1, v26);
  v11 += v23;
LABEL_33:
  v27 = this->fields.openCollect;
  if ( !v27 )
    goto LABEL_120;
  if ( ServantVoiceMaster__isOpenByServantFriendShip(svtId, v27->fields.maxLimitCount, friendshipRank, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_11105/*"RESULT_BOUNDS_GETVOICE"*/, 0);
    BattleResultBondsComponent__addConfObject(this, v28, (float)v11 * 22.0, -1, 0, 0, 1, v29);
    v11 += 2;
  }
  if ( !this->fields.rewardInfos )
  {
    CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
    goto LABEL_104;
  }
  v30 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ItemMaster___);
  rewardInfos = this->fields.rewardInfos;
  if ( !rewardInfos )
    goto LABEL_120;
  max_length = rewardInfos->max_length;
  if ( max_length < 1 )
  {
    CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
    if ( !v30 )
      goto LABEL_120;
    goto LABEL_103;
  }
  v83 = (DataMasterBase_TMaster__TEntity__PKType__o *)lvComp;
  key = svtId;
  v33 = 0;
  CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
  do
  {
    if ( v33 >= (unsigned int)max_length )
      sub_1C6BC68(lvComp);
    v35 = this->fields.openCollect;
    if ( !v35 )
      goto LABEL_120;
    v36 = rewardInfos->m_Items[v33];
    if ( !v36 )
      goto LABEL_120;
    if ( v35->fields.svtId == v36->fields.targetSvtId )
    {
      lvComp = (__int64)BattleFriendshipRewardInfo__getGiftEntity(v36, 0);
      if ( !lvComp )
        goto LABEL_120;
      v37 = (GiftEntity_o *)lvComp;
      GiftEntity__GetInfo((GiftEntity_o *)lvComp, &nameText, &countText, 0);
      if ( GiftEntity__isQp(v37, 0) )
      {
        nameText = countText;
        countText = (System_String_o *)StringLiteral_1/*""*/;
      }
      type = v37->fields.type;
      if ( type == 1 )
      {
        v46 = System_String__Concat_64005056(nameText, (System_String_o *)StringLiteral_113/*" "*/, countText, 0);
        v48 = v37->fields.type;
        v49 = v46;
        v50 = (float)v11 * 22.0;
        objectId = -1;
      }
      else
      {
        if ( type == 2 )
        {
          lvComp = (__int64)v83;
          if ( !v83 )
            goto LABEL_120;
          v39 = DataMasterBase_object__object__int___GetEntity(
                  v83,
                  v37->fields.objectId,
                  (const MethodInfo_33F90DC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( v39 && LODWORD(v39[3].klass) == 29 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v40 = LocalizationManager__Get((System_String_o *)StringLiteral_11107/*"RESULT_BOUNDS_GET_COIN_COUNT"*/, 0);
            LODWORD(v84.fields._list) = v37->fields.num;
            v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v84);
            countText = System_String__Format(v40, v41, 0);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantMaster___);
            if ( !lvComp )
              goto LABEL_120;
            v42 = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)lvComp,
                    key,
                    (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( v42 )
            {
              v43 = (ServantEntity_o *)v42;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4CB002A )
              {
                sub_1C6BA08(&NetworkManager_TypeInfo);
                byte_4CB002A = 1;
              }
              lvComp = (__int64)NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                lvComp = (__int64)NetworkManager_TypeInfo;
              }
              if ( !Master_object )
                goto LABEL_120;
              if ( UserServantCollectionMaster__TryGetEntity(
                     (UserServantCollectionMaster_o *)Master_object,
                     &entity,
                     *(_QWORD *)(*(_QWORD *)(lvComp + 184) + 64LL),
                     key,
                     0) )
              {
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                if ( !entity )
                  goto LABEL_120;
                if ( !lvComp )
                  goto LABEL_120;
                lvComp = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                           (ServantLimitImageMaster_o *)lvComp,
                           key,
                           entity->fields.maxLimitCount,
                           0);
                if ( !entity )
                  goto LABEL_120;
                if ( (_DWORD)lvComp == entity->fields.maxLimitCount )
                  v45 = -1;
                else
                  v45 = lvComp;
              }
              else
              {
                v45 = -1;
              }
              Name = (Il2CppObject *)ServantEntity__getName(v43, v45, -1, 0, 0);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v55 = LocalizationManager__Get((System_String_o *)StringLiteral_11108/*"RESULT_BOUNDS_GET_COIN_NAME"*/, 0);
              nameText = System_String__Format_64008100(v55, (Il2CppObject *)nameText, Name, 0);
            }
            v53 = 1;
          }
          else
          {
            v53 = 0;
          }
          v56 = System_String__Format_64008100(
                  (System_String_o *)StringLiteral_25243/*"{0} {1}"*/,
                  (Il2CppObject *)nameText,
                  (Il2CppObject *)countText,
                  0);
          IconImageId = GiftEntity__getIconImageId(v37, 0);
          BattleResultBondsComponent__addConfObject(
            this,
            v56,
            (float)v11 * 22.0,
            IconImageId,
            v53,
            0,
            v37->fields.type,
            v58);
          goto LABEL_90;
        }
        v52 = System_String__Format_64008100(
                (System_String_o *)StringLiteral_25243/*"{0} {1}"*/,
                (Il2CppObject *)nameText,
                (Il2CppObject *)countText,
                0);
        v48 = v37->fields.type;
        objectId = v37->fields.objectId;
        v49 = v52;
        v50 = (float)v11 * 22.0;
      }
      BattleResultBondsComponent__addConfObject(this, v49, v50, objectId, 0, 0, v48, v47);
LABEL_90:
      v59 = BattleResultBondsComponent_TypeInfo;
      if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
        v59 = BattleResultBondsComponent_TypeInfo;
      }
      v11 += 2;
      CONF_SERVANT_COIN_PLUS_HEIGHT = v59->static_fields->CONF_SERVANT_COIN_PLUS_HEIGHT;
      lvComp = BattleFriendshipRewardInfo__isShow(v36, 0);
      if ( (lvComp & 1) != 0 )
      {
        if ( !v30 )
          goto LABEL_120;
        items = v30->fields._items;
        v63 = Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__;
        ++v30->fields._version;
        if ( !items )
          goto LABEL_120;
        size = v30->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v30,
            (Il2CppObject *)v36,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
        }
        else
        {
          v65 = &items->obj.klass + size;
          v30->fields._size = size + 1;
          v65[4] = (Il2CppClass *)v36;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v65 + 4), (int32_t)v36, v60, v61);
        }
      }
    }
    max_length = rewardInfos->max_length;
    ++v33;
  }
  while ( v33 < max_length );
  if ( !v30 )
    goto LABEL_120;
LABEL_103:
  v66 = System_Collections_Generic_List_object___ToArray(
          v30,
          (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
  this->fields.showList = (struct BattleFriendshipRewardInfo_array *)v66;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.showList, (int32_t)v66, v67, v68);
  this->fields.showIndex = 0;
LABEL_104:
  lvComp = (__int64)this->fields.confSprite;
  if ( v11 )
    v69 = v11;
  else
    v69 = 1;
  if ( !lvComp )
    goto LABEL_120;
  UIWidget__set_height((UIWidget_o *)lvComp, CONF_SERVANT_COIN_PLUS_HEIGHT + 22 * v69 + 120, 0);
  confRoot = this->fields.confRoot;
  if ( !confRoot )
    goto LABEL_120;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.confRoot, 0);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT >= 0 )
    v72 = CONF_SERVANT_COIN_PLUS_HEIGHT;
  else
    v72 = CONF_SERVANT_COIN_PLUS_HEIGHT + 1;
  v73 = (float)v69;
  v74 = v72 >> 1;
  v75 = (float)(v73 * 11.0) + (float)(v72 >> 1);
  v76 = 0;
  UnityEngine_Transform__set_localPosition(confRoot, *(UnityEngine_Vector3_o *)&localPosition, 0);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT )
  {
    lvComp = (__int64)this->fields.confwindow;
    if ( lvComp )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lvComp, 0);
      GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v74, 0);
      lvComp = (__int64)this->fields.confwindow;
      if ( lvComp )
      {
        lvComp = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)lvComp + 424LL))(
                   lvComp,
                   *(_QWORD *)(*(_QWORD *)lvComp + 432LL));
        goto LABEL_116;
      }
    }
LABEL_120:
    sub_1C6BC60(lvComp, v7);
  }
LABEL_116:
  if ( !v82 )
    goto LABEL_120;
  rankupConfLabel = this->fields.rankupConfLabel;
  lvComp = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v82->klass->vtable._3_ToString.methodPtr)(
             v82,
             v82->klass->vtable._3_ToString.method);
  if ( !rankupConfLabel )
    goto LABEL_120;
  UILabel__set_text(rankupConfLabel, (System_String_o *)lvComp, 0);
  confwindow = this->fields.confwindow;
  v80 = (BattleWindowComponent_EndCall_o *)sub_1C6BC54(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v80, (Il2CppObject *)this, Method_BattleResultBondsComponent_openedBondUp__, 0);
  if ( !confwindow )
    goto LABEL_120;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))confwindow->klass->vtable._10_Open.methodPtr)(
    confwindow,
    v80,
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
        sub_1C6BC68(this);
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
    sub_1C6BC60(this, collects);
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
    sub_1C6BC60(this, deck);
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    if ( max_length == v6 )
      sub_1C6BC68(this);
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
    sub_1C6BC60(this, method);
  return SLODWORD(oldCollections->max_length) > 1;
}


void BattleResultBondsComponent__openedBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0
  struct BattleResultComponent_o *v4; // x8

  if ( (byte_4CB9B56 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_5441/*"END_OPEN"*/);
    byte_4CB9B56 = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__ResetPlayScreenTouch(parentComp, method), (v4 = this->fields.parentComp) == 0)
    || (parentComp = (BattleResultComponent_o *)v4->fields.obj_fronttouch) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)parentComp, 1, 0),
        parentComp = (BattleResultComponent_o *)this->fields.myFsm,
        ++this->fields.colIndex,
        !parentComp) )
  {
    sub_1C6BC60(parentComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)parentComp, (System_String_o *)StringLiteral_5441/*"END_OPEN"*/, 0);
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
  const MethodInfo *v3; // x3

  if ( (byte_4CB9B62 & 1) == 0 )
  {
    sub_1C6BA08(&BattleResultBondsComponent___c_TypeInfo);
    byte_4CB9B62 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(BattleResultBondsComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleResultBondsComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultBondsComponent___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)BattleResultBondsComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C6BC60(this, 0);
  return col->fields.isUse;
}


bool BattleResultBondsComponent___c___SetResultDataLocal_b__49_0(
        BattleResultBondsComponent___c_o *this,
        QuestRewardInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.type == 7 && x->fields.isNew;
}


bool BattleResultBondsComponent___c___SetResultDataLocal_b__49_1(
        BattleResultBondsComponent___c_o *this,
        GetSvts_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
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
    sub_1C6BC60(this, 0);
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
  const MethodInfo *v10; // x3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v11; // x21
  BattleResultBondsComponent___c__DisplayClass61_1_c *v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v21; // x22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v27; // x22
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x1
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v31; // x8
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v34; // x22
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  __int64 v37; // x1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  __int64 v40; // x1
  System_Collections_Hashtable_o *v41; // x0
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v42; // x8
  struct BattleResultBondsComponent_o *v43; // x8
  const MethodInfo *v44; // x2
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v45; // x8
  struct BattleResultBondsIconComponent_array *bondsIcons; // x9
  __int64 i; // x10
  __int64 v48; // x0
  char v49[4]; // [xsp+4h] [xbp-3Ch] BYREF
  int v50; // [xsp+8h] [xbp-38h] BYREF
  int v51; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4CB9B63 & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&float_TypeInfo);
    sub_1C6BA08(&StringLiteral_24974/*"x"*/);
    sub_1C6BA08(&StringLiteral_9624/*"OPEN"*/);
    sub_1C6BA08(&StringLiteral_24169/*"time"*/);
    sub_1C6BA08(&StringLiteral_22520/*"oncompletetarget"*/);
    sub_1C6BA08(&StringLiteral_19068/*"endMoveFigure"*/);
    sub_1C6BA08(&StringLiteral_21039/*"islocal"*/);
    sub_1C6BA08(&StringLiteral_22518/*"oncomplete"*/);
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C6BA08(&iTween_TypeInfo);
    byte_4CB9B63 = 1;
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
    BattleResultBondsComponent__endMoveFigure((BattleResultBondsComponent_o *)this, method);
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
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C6BAB0(object___TypeInfo, 10);
  if ( !this )
    goto LABEL_69;
  v11 = this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_24974/*"x"*/;
  if ( StringLiteral_24974/*"x"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C6BB44(
                                                                   StringLiteral_24974/*"x"*/,
                                                                   v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    v12 = (BattleResultBondsComponent___c__DisplayClass61_1_c *)StringLiteral_24974/*"x"*/;
  }
  else
  {
    v12 = 0;
  }
  if ( !LODWORD(v11->fields.CS___8__locals1) )
    goto LABEL_70;
  v11[1].klass = v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11[1], (int32_t)v12, v9, v10);
  v51 = -1007026176;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v51);
  v15 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C6BB44(this, v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v11->fields.CS___8__locals1) <= 1 )
    goto LABEL_70;
  v11[1].monitor = v15;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11[1].monitor, (int32_t)v15, v13, v14);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_24169/*"time"*/;
  if ( StringLiteral_24169/*"time"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C6BB44(
                                                                   StringLiteral_24169/*"time"*/,
                                                                   v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    v18 = StringLiteral_24169/*"time"*/;
  }
  else
  {
    v18 = 0;
  }
  if ( LODWORD(v11->fields.CS___8__locals1) <= 2 )
    goto LABEL_70;
  v11[1].fields.parent = (struct UnityEngine_GameObject_o *)v18;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11[1].fields, v18, v16, v17);
  v50 = 1061997773;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v50);
  v21 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C6BB44(this, v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v11->fields.CS___8__locals1) <= 3 )
    goto LABEL_70;
  v11[1].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v21;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11[1].fields.CS___8__locals1, (int32_t)v21, v19, v20);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_21039/*"islocal"*/;
  if ( StringLiteral_21039/*"islocal"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C6BB44(
                                                                   StringLiteral_21039/*"islocal"*/,
                                                                   v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    v24 = StringLiteral_21039/*"islocal"*/;
  }
  else
  {
    v24 = 0;
  }
  if ( LODWORD(v11->fields.CS___8__locals1) <= 4 )
    goto LABEL_70;
  v11[2].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)v24;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11[2], v24, v22, v23);
  v49[0] = 1;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(bool_TypeInfo, v49);
  v27 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C6BB44(this, v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v11->fields.CS___8__locals1) <= 5 )
    goto LABEL_70;
  v11[2].monitor = v27;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11[2].monitor, (int32_t)v27, v25, v26);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22520/*"oncompletetarget"*/;
  if ( StringLiteral_22520/*"oncompletetarget"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C6BB44(
                                                                   StringLiteral_22520/*"oncompletetarget"*/,
                                                                   v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    v30 = StringLiteral_22520/*"oncompletetarget"*/;
  }
  else
  {
    v30 = 0;
  }
  if ( LODWORD(v11->fields.CS___8__locals1) <= 6 )
    goto LABEL_70;
  v11[2].fields.parent = (struct UnityEngine_GameObject_o *)v30;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11[2].fields, v30, v28, v29);
  v31 = v2->fields.CS___8__locals1;
  if ( !v31 || (this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v31->fields.__4__this) == 0 )
LABEL_69:
    sub_1C6BC60(this, method);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0);
  v34 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C6BB44(this, v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v11->fields.CS___8__locals1) <= 7 )
    goto LABEL_70;
  v11[2].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v34;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11[2].fields.CS___8__locals1, (int32_t)v34, v32, v33);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22518/*"oncomplete"*/;
  if ( StringLiteral_22518/*"oncomplete"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C6BB44(
                                                                   StringLiteral_22518/*"oncomplete"*/,
                                                                   v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    v37 = StringLiteral_22518/*"oncomplete"*/;
  }
  else
  {
    v37 = 0;
  }
  if ( LODWORD(v11->fields.CS___8__locals1) <= 8 )
    goto LABEL_70;
  v11[3].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)v37;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11[3], v37, v35, v36);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_19068/*"endMoveFigure"*/;
  if ( !StringLiteral_19068/*"endMoveFigure"*/ )
  {
    v40 = 0;
    goto LABEL_57;
  }
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C6BB44(
                                                                 StringLiteral_19068/*"endMoveFigure"*/,
                                                                 v11->klass->_1.element_class);
  if ( !this )
  {
LABEL_71:
    v48 = sub_1C6BC84(this);
    sub_1C6BB30(v48, 0);
  }
  v40 = StringLiteral_19068/*"endMoveFigure"*/;
LABEL_57:
  if ( LODWORD(v11->fields.CS___8__locals1) <= 9 )
    goto LABEL_70;
  v11[3].monitor = (void *)v40;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11[3].monitor, v40, v38, v39);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v41 = iTween__Hash((System_Object_array *)v11, 0);
  iTween__MoveFrom_63605828(parent, v41, 0);
LABEL_61:
  v42 = v2->fields.CS___8__locals1;
  if ( !v42 )
    goto LABEL_69;
  v43 = v42->fields.__4__this;
  if ( !v43 )
    goto LABEL_69;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v43->fields.myFsm;
  v43->fields.openBoundsFlg = 1;
  if ( !this )
    goto LABEL_69;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9624/*"OPEN"*/, 0);
  v45 = v2->fields.CS___8__locals1;
  if ( !v45 )
    goto LABEL_69;
  bondsIcons = v45->fields.bondsIcons;
  if ( !bondsIcons )
    goto LABEL_69;
  i = v45->fields.i;
  if ( (unsigned int)i >= LODWORD(bondsIcons->max_length) )
LABEL_70:
    sub_1C6BC68(this);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v45->fields.__4__this;
  if ( !this )
    goto LABEL_69;
  BattleResultBondsComponent__CheckFormalJoin((BattleResultBondsComponent_o *)this, bondsIcons->m_Items[i], v44);
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

  if ( (byte_4CB9B64 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB9B64 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v4);
  CommonUI__CreateServantCoinConfirmDialog((CommonUI_o *)Instance, 1, this->fields.coin, 0, 0);
}