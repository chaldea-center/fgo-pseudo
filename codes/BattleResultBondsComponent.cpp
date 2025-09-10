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

  if ( (byte_4C2AA69 & 1) == 0 )
  {
    sub_1C2D490(&BattleResultBondsComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_7086/*"GetNewSvt"*/);
    sub_1C2D490(&StringLiteral_7073/*"GetExistSvt"*/);
    byte_4C2AA69 = 1;
  }
  static_fields = BattleResultBondsComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SVT_GAP_5 = 0x4316000043320000LL;
  *(_QWORD *)&static_fields->CONF_LABEL_MAX_WIDTH = 0x12000001D0LL;
  v4 = StringLiteral_7086/*"GetNewSvt"*/;
  static_fields->GET_NEW_SVT_KEY = (struct System_String_o *)StringLiteral_7086/*"GetNewSvt"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->GET_NEW_SVT_KEY, v4, v1, v2);
  v5 = StringLiteral_7073/*"GetExistSvt"*/;
  v6 = BattleResultBondsComponent_TypeInfo->static_fields;
  v6->GET_EXIST_SVT_KEY = (struct System_String_o *)StringLiteral_7073/*"GetExistSvt"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v6->GET_EXIST_SVT_KEY, v5, v7, v8);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C2AA68 & 1) == 0 )
  {
    sub_1C2D490(&BattleResultBondsFigureComponent_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4C2AA68 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.conflist = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.conflist, (int32_t)v3, v4, v5);
  this->fields.buddyPointInfoWindowHeight = 366;
  this->fields.tempSaveTimeScale = 1.0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
  this->fields.bondsList = (struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.bondsList, (int32_t)v6, v7, v8);
  v9 = (BattleResultBondsFigureComponent_o *)sub_1C2D6DC(BattleResultBondsFigureComponent_TypeInfo);
  BattleResultBondsFigureComponent___ctor(v9, 0);
  this->fields.bondsFigure = v9;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.bondsFigure, (int32_t)v9, v10, v11);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleResultBondsComponent__CheckFormalJoin(
        BattleResultBondsComponent_o *this,
        BattleResultBondsIconComponent_o *collect,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct GetSvts_array *getJoinSvtList; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x21
  __int64 v10; // x26
  int max_length; // w9
  GetSvts_o *v12; // x8
  UserServantEntity_o *v13; // x24
  EventServantEntity_o *EventServant; // x22
  BattleResultBondsComponent___c_c *v15; // x0
  System_Action_o *_9__62_0; // x23
  Il2CppObject *v17; // x25
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *Master_object; // x25
  __int64 v22; // x24
  __int64 v23; // x23
  __int64 v24; // x25
  Il2CppObject *v25; // x8
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_String_o *v29; // x24
  Il2CppObject *v30; // x25
  __int64 v31; // x0
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C2AA5A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    sub_1C2D490(&GetSvtCoin___TypeInfo);
    sub_1C2D490(&GetSvtCoin_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__);
    sub_1C2D490(&Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__);
    sub_1C2D490(&BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo);
    sub_1C2D490(&BattleResultBondsComponent___c_TypeInfo);
    sub_1C2D490(&StringLiteral_12436/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/);
    sub_1C2D490(&StringLiteral_18601/*"dialogIgnoreTime"*/);
    byte_4C2AA5A = 1;
  }
  entity = 0;
  if ( this->fields.getJoinSvtList && !this->fields.isWarboard )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___),
          (getJoinSvtList = this->fields.getJoinSvtList) == 0) )
    {
LABEL_45:
      sub_1C2D6EC(Instance, v6);
    }
    v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v10 = 0;
    while ( 1 )
    {
      max_length = getJoinSvtList->max_length;
      if ( (int)v10 >= max_length )
        break;
      if ( (unsigned int)v10 >= max_length )
        goto LABEL_46;
      v12 = getJoinSvtList->m_Items[v10];
      if ( !v12 )
        goto LABEL_45;
      if ( v12->fields.isNew )
      {
        UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_18601/*"dialogIgnoreTime"*/, 1, 0);
        UnityEngine_PlayerPrefs__Save(0);
      }
      else
      {
        if ( !v9 )
          goto LABEL_45;
        Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                      v9,
                                      v12->fields.userSvtId,
                                      (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
              if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
                v15 = BattleResultBondsComponent___c_TypeInfo;
              }
              _9__62_0 = v15->static_fields->__9__62_0;
              if ( !_9__62_0 )
              {
                if ( !v15->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v15);
                  v15 = BattleResultBondsComponent___c_TypeInfo;
                }
                v17 = (Il2CppObject *)v15->static_fields->__9;
                _9__62_0 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                System_Action___ctor(_9__62_0, v17, Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__, 0);
                static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
                static_fields->__9__62_0 = _9__62_0;
                sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__62_0, (int32_t)_9__62_0, v19, v20);
              }
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SvtCoinMaster___);
              Instance = (DataManager_o *)UserServantEntity__getSvtId(v13, 0);
              if ( !Master_object )
                goto LABEL_45;
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            &entity,
                                            (int32_t)Instance,
                                            (const MethodInfo_3387DE4 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_45;
                if ( SHIDWORD(entity[1].klass) >= 1 )
                {
                  v22 = sub_1C2D6DC(BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v22, 0);
                  v23 = sub_1C2D538(GetSvtCoin___TypeInfo, 1);
                  v24 = sub_1C2D6DC(GetSvtCoin_TypeInfo);
                  GetSvtCoin___ctor((GetSvtCoin_o *)v24, 0);
                  v25 = entity;
                  if ( !entity )
                    goto LABEL_45;
                  if ( !v24 )
                    goto LABEL_45;
                  *(_DWORD *)(v24 + 16) = entity[1].klass;
                  *(int32x2_t *)(v24 + 20) = vrev64_s32(*(int32x2_t *)((char *)&v25[1].klass + 4));
                  if ( !v23 )
                    goto LABEL_45;
                  Instance = (DataManager_o *)sub_1C2D5CC(v24, *(_QWORD *)(*(_QWORD *)v23 + 64LL));
                  if ( !Instance )
                  {
                    v31 = sub_1C2D710(0);
                    sub_1C2D5B8(v31, 0);
                  }
                  if ( !*(_DWORD *)(v23 + 24) )
LABEL_46:
                    sub_1C2D6F4(Instance, v6, v7);
                  *(_QWORD *)(v23 + 32) = v24;
                  sub_1C2D434((CGThumbnailListItem_o *)(v23 + 32), v24, v7, v26);
                  if ( !v22 )
                    goto LABEL_45;
                  *(_QWORD *)(v22 + 16) = v23;
                  sub_1C2D434((CGThumbnailListItem_o *)(v22 + 16), v23, v27, v28);
                  _9__62_0 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__62_0,
                    (Il2CppObject *)v22,
                    Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__,
                    0);
                }
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v29 = LocalizationManager__Get((System_String_o *)StringLiteral_12436/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0);
              v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      ++v10;
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

  if ( (byte_4C2AA62 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultBondsComponent_endClose__);
    sub_1C2D490(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C2AA62 = 1;
  }
  if ( this->fields.isMultiDeck )
    multiDeckWindow = this->fields.multiDeckWindow;
  else
    multiDeckWindow = this->fields.window;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1C2D6DC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v4, (Il2CppObject *)this, Method_BattleResultBondsComponent_endClose__, 0);
  if ( !multiDeckWindow )
    sub_1C2D6EC(v5, v6);
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))multiDeckWindow->klass->vtable._12_Close.methodPtr)(
    multiDeckWindow,
    v4,
    multiDeckWindow->klass->vtable._12_Close.method);
}


void BattleResultBondsComponent__CloseBondUpRoot(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *upRoot; // x0

  if ( (byte_4C2AA67 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    byte_4C2AA67 = 1;
  }
  upRoot = this->fields.upRoot;
  if ( !upRoot
    || (UnityEngine_GameObject__SetActive(upRoot, 0, 0), (upRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_1C2D6EC(upRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)upRoot, (System_String_o *)StringLiteral_5447/*"END_PROC"*/, 0);
}


void BattleResultBondsComponent__CreateRewardEffect(
        BattleResultBondsComponent_o *this,
        AssetData_o *data,
        UISprite_o *targetIcon,
        System_String_o *effectName,
        const MethodInfo *method)
{
  BattleResultBondsComponent_o *v8; // x20
  Il2CppObject *Object_object__51051712; // x21
  BattleResultBondsComponent_o *v10; // x21
  BattleResultBondsComponent_o *v11; // x22
  BattleResultBondsComponent_o *v12; // x22
  BattleResultBondsComponent_o *v13; // x22
  __int64 v14; // x2
  int m_CancellationTokenSource; // w8
  BattleResultBondsComponent_o *v16; // x21
  unsigned int v17; // w22

  v8 = this;
  if ( (byte_4C2AA5C & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (BattleResultBondsComponent_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AA5C = 1;
  }
  if ( !data )
    goto LABEL_23;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              data,
                              effectName,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultBondsComponent_o *)UnityEngine_Object__Instantiate_object_(
                                           Object_object__51051712,
                                           (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( !byte_4C20DA1 )
  {
    this = (BattleResultBondsComponent_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  if ( !v12 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v12,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0);
  v13 = this;
  if ( !byte_4C20DA6 )
  {
    this = (BattleResultBondsComponent_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  if ( !v13 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v13,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51538676(
                                           (UnityEngine_GameObject_o *)v10,
                                           (const MethodInfo_3126AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !this )
    goto LABEL_23;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v16 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= m_CancellationTokenSource )
        sub_1C2D6F4(this, data, v14);
      this = (BattleResultBondsComponent_o *)*((_QWORD *)&v16->fields.parentComp + (int)v17);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0);
      m_CancellationTokenSource = (int)v16->fields.m_CancellationTokenSource;
      if ( (int)++v17 >= m_CancellationTokenSource )
        goto LABEL_21;
    }
LABEL_23:
    sub_1C2D6EC(this, data);
  }
LABEL_21:
  this = (BattleResultBondsComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v16,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void BattleResultBondsComponent__DeleteGetJoinSvtData(const MethodInfo *method)
{
  BattleResultBondsComponent_c *v1; // x0

  if ( (byte_4C2AA51 & 1) == 0 )
  {
    sub_1C2D490(&BattleResultBondsComponent_TypeInfo);
    byte_4C2AA51 = 1;
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
  __int64 v7; // x2
  int v8; // w8
  _DWORD *v9; // x20
  unsigned int v10; // w21
  SePlayer_o *MeterSePlayer; // x0

  if ( (byte_4C2AA58 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9257/*"NEXT"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C2AA58 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63205768(gameObject, 0);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v4);
  if ( !BondsIconArray )
    goto LABEL_16;
  v8 = BondsIconArray[6];
  v9 = BondsIconArray;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= v8 )
        sub_1C2D6F4(BondsIconArray, v6, v7);
      BondsIconArray = *(_DWORD **)&v9[2 * v10 + 8];
      if ( !BondsIconArray )
        break;
      BattleResultBondsIconComponent__FinishUpdateValue((BattleResultBondsIconComponent_o *)BondsIconArray, 0);
      v8 = v9[6];
      if ( (int)++v10 >= v8 )
        goto LABEL_11;
    }
LABEL_16:
    sub_1C2D6EC(BondsIconArray, v6);
  }
LABEL_11:
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0);
  BondsIconArray = this->fields.myFsm;
  this->fields.bondsCountUp = 0;
  if ( !BondsIconArray )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_9257/*"NEXT"*/, 0);
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

  if ( (byte_4C2AA64 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
    byte_4C2AA64 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( this->fields.isMultiDeck )
  {
    p_bondsIconArray = (CGThumbnailListItem_o *)&this->fields.bondsIconArray;
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.bondsIconArray, 0) )
    {
      v4 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v4,
        (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
      bondsList = (System_Collections_Generic_List_object__o *)this->fields.bondsList;
      if ( !bondsList )
        goto LABEL_17;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v13,
        bondsList,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v13,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
      {
        if ( !v13.fields._current )
          sub_1C2D6EC(0, v7);
        BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                          (BattleResultBondsDeckPerWaveComponent_o *)v13.fields._current,
                                                                          v7);
        if ( !v4 )
          sub_1C2D6EC(BondsIconArray, BondsIconArray);
        System_Collections_Generic_List_object___AddRange(
          v4,
          BondsIconArray,
          (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v13,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
      if ( !v4 )
LABEL_17:
        sub_1C2D6EC(bondsList, v5);
      v9 = System_Collections_Generic_List_object___ToArray(
             v4,
             (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
      p_bondsIconArray->klass = (CGThumbnailListItem_c *)v9;
      sub_1C2D434(p_bondsIconArray, (int32_t)v9, v10, v11);
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

  if ( (byte_4C2AA52 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AA52 = 1;
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
  v4 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v4;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.effectUIList, (int32_t)v4, v5, v6);
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
    sub_1C2D6EC(window, method);
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
  if ( (byte_4C2AA53 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AA53 = 1;
  }
  this->fields.oldCollections = oldCollects;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.oldCollections,
    (int32_t)oldCollects,
    (int32_t)inRewardInfos,
    (const MethodInfo *)resultAsset);
  this->fields.rewardInfos = inRewardInfos;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.rewardInfos, (int32_t)inRewardInfos, v15, v16);
  this->fields.resultAssetData = resultAsset;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resultAssetData, (int32_t)resultAsset, v17, v18);
  this->fields.getJoinSvtList = getJoinSvts;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.getJoinSvtList, (int32_t)getJoinSvts, v19, v20);
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
  if ( (byte_4C2AA65 & 1) == 0 )
  {
    sub_1C2D490(&BattleResultBondsComponent_TypeInfo);
    this = (BattleResultBondsComponent_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AA65 = 1;
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
      sub_1C2D6F4(this, *(_QWORD *)&targetIndex, *(_QWORD *)&cnt);
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
      sub_1C2D6EC(this, *(_QWORD *)&targetIndex);
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

  if ( (byte_4C2AA56 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_BattleResultBondsIconComponent___);
    sub_1C2D490(&Method_BattleResultBondsComponent_OpenEnd__);
    sub_1C2D490(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C2D490(&System_Func_BattleResultBondsIconComponent__bool__TypeInfo);
    sub_1C2D490(&Method_BattleResultBondsComponent___c__Open_b__53_0__);
    sub_1C2D490(&BattleResultBondsComponent___c_TypeInfo);
    sub_1C2D490(&StringLiteral_5442/*"END_OPEN"*/);
    sub_1C2D490(&StringLiteral_12231/*"SKIP"*/);
    byte_4C2AA56 = 1;
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
    _9__53_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleResultBondsIconComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__53_0, v7, Method_BattleResultBondsComponent___c__Open_b__53_0__, 0);
    static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Func_BattleResultBondsIconComponent__bool__o *)_9__53_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v9, v10);
  }
  if ( BasicHelper__Any_object__51084700(
         v5,
         (System_Func_T__bool__o *)_9__53_0,
         (const MethodInfo_30B7D9C *)Method_BasicHelper_Any_BattleResultBondsIconComponent___) )
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
      v16 = (BattleWindowComponent_EndCall_o *)sub_1C2D6DC(BattleWindowComponent_EndCall_TypeInfo);
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
          v15 = &StringLiteral_5442/*"END_OPEN"*/;
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    sub_1C2D6EC(gameObject, v11);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !gameObject )
    goto LABEL_20;
  v15 = &StringLiteral_12231/*"SKIP"*/;
LABEL_19:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)*v15, 0);
}


void BattleResultBondsComponent__OpenEnd(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  System_Object_array *v8; // x21
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  const MethodInfo *v12; // x3
  BattleResultBondsIconComponent_array *v13; // x22
  const MethodInfo *v14; // x3
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  const MethodInfo *v18; // x3
  BattleResultBondsIconComponent_array *v19; // x22
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  const MethodInfo *v28; // x3
  BattleResultBondsIconComponent_array *v29; // x22
  System_Collections_Hashtable_o *v30; // x0
  const MethodInfo *v31; // x1
  int max_length; // w8
  BattleResultBondsIconComponent_array *v33; // x20
  unsigned int v34; // w21
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x20
  System_String_o *CommonSeName; // x0
  struct SePlayer_o *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x0
  int v42; // [xsp+Ch] [xbp-44h] BYREF
  int v43; // [xsp+18h] [xbp-38h] BYREF
  int v44; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C2AA57 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultBondsComponent_OpenEnd__);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&SeManager_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_19677/*"from"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22418/*"onupdate"*/);
    sub_1C2D490(&StringLiteral_15197/*"UpdateValue"*/);
    sub_1C2D490(&StringLiteral_24088/*"to"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&StringLiteral_6728/*"FinishUpdateValue"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C2AA57 = 1;
  }
  if ( !this->fields.bondsCountUp )
    return;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C2D538(object___TypeInfo, 10);
  if ( !BondsIconArray )
LABEL_65:
    sub_1C2D6EC(BondsIconArray, v5);
  v8 = (System_Object_array *)BondsIconArray;
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_19677/*"from"*/;
  if ( StringLiteral_19677/*"from"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C2D5CC(
                                                               StringLiteral_19677/*"from"*/,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v5 = StringLiteral_19677/*"from"*/;
  }
  else
  {
    v5 = 0;
  }
  if ( !LODWORD(v8->max_length) )
    goto LABEL_64;
  v8->m_Items[0] = (Il2CppObject *)v5;
  sub_1C2D434((CGThumbnailListItem_o *)v8->m_Items, v5, v6, v7);
  v44 = 0;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v44, v9, v10, v11);
  v13 = BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C2D5CC(
                                                               BondsIconArray,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
  }
  if ( LODWORD(v8->max_length) <= 1 )
    goto LABEL_64;
  v8->m_Items[1] = &v13->obj;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->m_Items[1], (int32_t)v13, v6, v12);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_24088/*"to"*/;
  if ( StringLiteral_24088/*"to"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C2D5CC(
                                                               StringLiteral_24088/*"to"*/,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v5 = StringLiteral_24088/*"to"*/;
  }
  else
  {
    v5 = 0;
  }
  if ( LODWORD(v8->max_length) <= 2 )
    goto LABEL_64;
  v8->m_Items[2] = (Il2CppObject *)v5;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->m_Items[2], v5, v6, v14);
  v43 = 1065353216;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v43, v15, v16, v17);
  v19 = BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C2D5CC(
                                                               BondsIconArray,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
  }
  if ( LODWORD(v8->max_length) <= 3 )
    goto LABEL_64;
  v8->m_Items[3] = &v19->obj;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->m_Items[3], (int32_t)v19, v6, v18);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22418/*"onupdate"*/;
  if ( StringLiteral_22418/*"onupdate"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C2D5CC(
                                                               StringLiteral_22418/*"onupdate"*/,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v5 = StringLiteral_22418/*"onupdate"*/;
  }
  else
  {
    v5 = 0;
  }
  if ( LODWORD(v8->max_length) <= 4 )
    goto LABEL_64;
  v8->m_Items[4] = (Il2CppObject *)v5;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->m_Items[4], v5, v6, v20);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_15197/*"UpdateValue"*/;
  if ( StringLiteral_15197/*"UpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C2D5CC(
                                                               StringLiteral_15197/*"UpdateValue"*/,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v5 = StringLiteral_15197/*"UpdateValue"*/;
  }
  else
  {
    v5 = 0;
  }
  if ( LODWORD(v8->max_length) <= 5 )
    goto LABEL_64;
  v8->m_Items[5] = (Il2CppObject *)v5;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->m_Items[5], v5, v6, v21);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22410/*"oncomplete"*/;
  if ( StringLiteral_22410/*"oncomplete"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C2D5CC(
                                                               StringLiteral_22410/*"oncomplete"*/,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v5 = StringLiteral_22410/*"oncomplete"*/;
  }
  else
  {
    v5 = 0;
  }
  if ( LODWORD(v8->max_length) <= 6 )
    goto LABEL_64;
  v8->m_Items[6] = (Il2CppObject *)v5;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->m_Items[6], v5, v6, v22);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_6728/*"FinishUpdateValue"*/;
  if ( StringLiteral_6728/*"FinishUpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C2D5CC(
                                                               StringLiteral_6728/*"FinishUpdateValue"*/,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v5 = StringLiteral_6728/*"FinishUpdateValue"*/;
  }
  else
  {
    v5 = 0;
  }
  if ( LODWORD(v8->max_length) <= 7 )
    goto LABEL_64;
  v8->m_Items[7] = (Il2CppObject *)v5;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->m_Items[7], v5, v6, v23);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_24049/*"time"*/;
  if ( StringLiteral_24049/*"time"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C2D5CC(
                                                               StringLiteral_24049/*"time"*/,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v5 = StringLiteral_24049/*"time"*/;
  }
  else
  {
    v5 = 0;
  }
  if ( LODWORD(v8->max_length) <= 8 )
    goto LABEL_64;
  v8->m_Items[8] = (Il2CppObject *)v5;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->m_Items[8], v5, v6, v24);
  v42 = 1072064102;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v42, v25, v26, v27);
  v29 = BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C2D5CC(
                                                               BondsIconArray,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
    {
LABEL_66:
      v41 = sub_1C2D710(BondsIconArray);
      sub_1C2D5B8(v41, 0);
    }
  }
  if ( LODWORD(v8->max_length) <= 9 )
    goto LABEL_64;
  v8->m_Items[9] = &v29->obj;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->m_Items[9], (int32_t)v29, v6, v28);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v30 = iTween__Hash(v8, 0);
  iTween__ValueTo(gameObject, v30, 0);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v31);
  if ( !BondsIconArray )
    goto LABEL_65;
  max_length = BondsIconArray->max_length;
  v33 = BondsIconArray;
  if ( max_length >= 1 )
  {
    v34 = 0;
    while ( v34 < max_length )
    {
      BondsIconArray = (BattleResultBondsIconComponent_array *)v33->m_Items[v34];
      if ( !BondsIconArray )
        goto LABEL_65;
      BattleResultBondsIconComponent__StartUpdateBuddyPoint((BattleResultBondsIconComponent_o *)BondsIconArray, 0);
      max_length = v33->max_length;
      if ( (int)++v34 >= max_length )
        goto LABEL_57;
    }
LABEL_64:
    sub_1C2D6F4(BondsIconArray, v5, v6);
  }
LABEL_57:
  if ( this->fields.updateFlg )
  {
    v35 = Method_BattleResultBondsComponent_OpenEnd__;
    if ( (*((_BYTE *)Method_BattleResultBondsComponent_OpenEnd__ + 83) & 2) != 0 )
      v35 = (_QWORD *)sub_1C2D4A8(Method_BattleResultBondsComponent_OpenEnd__);
    v36 = (System_Reflection_MethodBase_o *)sub_1C2D474(v35, v35[4]);
    if ( !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    CommonSeName = SeManager__GetCommonSeName(15, 0);
    v38 = OverwriteAssetSoundName__PlaySe(v36, CommonSeName, 0, 0);
    this->fields.MeterSePlayer = v38;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.MeterSePlayer, (int32_t)v38, v39, v40);
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
  __int64 v22; // x2
  __int64 v23; // x8
  __int64 v24; // x26
  struct BattleInfoData_o *v25; // x9
  __int64 maxWave; // x27
  BattleUserServantData_array *userSvt; // x24
  unsigned __int64 v28; // x8
  unsigned int v29; // w9
  signed __int64 v30; // x29
  System_Collections_Generic_List_object__o *v31; // x20
  const MethodInfo *v32; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  System_Object_array *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_4C2AA54 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
    byte_4C2AA54 = 1;
  }
  memset(&v38, 0, sizeof(v38));
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
  v23 = 240;
  if ( ((unsigned __int8)questphase_ent & 1) != 0 )
    v23 = 248;
  v24 = *(__int64 *)((char *)&battle_info->klass + v23);
  if ( !v24 )
    goto LABEL_25;
  v25 = battleData->fields.battle_info;
  if ( !v25 )
    goto LABEL_25;
  maxWave = *(_QWORD *)(v24 + 24);
  if ( (int)maxWave >= 1 )
  {
    userSvt = v25->fields.userSvt;
    v28 = 0;
    v29 = *(_QWORD *)(v24 + 24);
    do
    {
      if ( v28 >= v29 )
        sub_1C2D6F4(questphase_ent, v20, v22);
      v30 = v28 + 1;
      BattleResultBondsComponent__SetResultDataLocal(
        this,
        *(DeckData_o **)(v24 + 32 + 8 * v28),
        oldCollects,
        followerType,
        userSvt,
        battleResult,
        isHideBuddyPointResult,
        battleData,
        v28 + 1,
        maxWave,
        v37);
      v29 = *(_DWORD *)(v24 + 24);
      v28 = v30;
    }
    while ( v30 < (int)v29 );
  }
  v31 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  questphase_ent = (QuestPhaseEntity_o *)this->fields.bondsList;
  if ( !questphase_ent )
    goto LABEL_25;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_object__o *)questphase_ent,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
  {
    if ( !v38.fields._current )
      sub_1C2D6EC(0, v32);
    BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                      (BattleResultBondsDeckPerWaveComponent_o *)v38.fields._current,
                                                                      v32);
    if ( !v31 )
      sub_1C2D6EC(BondsIconArray, BondsIconArray);
    System_Collections_Generic_List_object___AddRange(
      v31,
      BondsIconArray,
      (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
  if ( !v31 )
LABEL_25:
    sub_1C2D6EC(questphase_ent, v20);
  v34 = System_Collections_Generic_List_object___ToArray(
          v31,
          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
  this->fields.bondsIconArray = (struct BattleResultBondsIconComponent_array *)v34;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.bondsIconArray, (int32_t)v34, v35, v36);
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
  Il2CppObject *v19; // x29
  Il2CppObject *v20; // x26
  Il2CppObject *multiBondsPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v23; // x2
  const MethodInfo *v24; // x6
  System_Collections_Generic_IEnumerable_TSource__o *rewardInfos; // x20
  BattleResultBondsComponent___c_c *v26; // x0
  System_Func_object__bool__o *_9__49_0; // x21
  Il2CppObject *v28; // x22
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_List_TSource__o *v33; // x0
  System_Collections_Generic_List_object__o *v34; // x20
  BattleResultBondsComponent_c *v35; // x0
  BattleResultBondsComponent_c *v36; // x0
  Il2CppObject *String_71122516; // x21
  System_Collections_Generic_IEnumerable_T__o *v38; // x0
  BattleResultBondsComponent_c *v39; // x0
  System_String_o *GET_NEW_SVT_KEY; // x21
  System_Object_array *v41; // x20
  System_String_o *v42; // x0
  BattleResultBondsComponent___c_c *v43; // x0
  System_Collections_Generic_IEnumerable_TSource__o *getJoinSvts; // x20
  System_Func_object__bool__o *_9__49_1; // x21
  Il2CppObject *v46; // x22
  struct BattleResultBondsComponent___c_StaticFields *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_Collections_Generic_List_TSource__o *v51; // x0
  System_Collections_Generic_List_object__o *v52; // x20
  BattleResultBondsComponent_c *v53; // x0
  BattleResultBondsComponent_c *v54; // x0
  Il2CppObject *v55; // x21
  System_Collections_Generic_IEnumerable_T__o *v56; // x0
  BattleResultBondsComponent_c *v57; // x0
  System_String_o *GET_EXIST_SVT_KEY; // x21
  System_Object_array *v59; // x20
  System_String_o *v60; // x0
  struct BattleDeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v63; // w22
  int32_t v64; // w27
  BattleDeckServantData_o *v65; // x21
  BattleResultBondsComponent_o *v66; // x19
  Il2CppObject *v67; // x28
  int64_t userSvtId; // x2
  BattleResultBondsComponent_o *SvtId; // x0
  const MethodInfo *v70; // x3
  UserServantCollectionEntity_o *v71; // x24
  ServantEntity_o *v72; // x27
  int32_t v73; // w26
  int v74; // w8
  int32_t v75; // w25
  unsigned int v76; // w29
  BattleUserServantData_o *v77; // x20
  __int128 v78; // q0
  const MethodInfo *v79; // x5
  int32_t afterLimitCount; // w20
  BattleResultBondsIconComponent_o *v81; // x20
  int32_t IconLimitCount; // w0
  int afterIconLimitCount; // w8
  bool v84; // zf
  bool v85; // zf
  System_Object_array *buddyPointInfos; // x21
  BattleBuddyPointInfo_o *v87; // x29
  System_Func_object__bool__o *v88; // x29
  BattleResultBondsIconComponent_o *v89; // x21
  struct BattleResultBondsIconComponent_array *v90; // x8
  bool v91; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  bool v93; // w20
  bool updateFlg; // w20
  struct BattleResultBondsIconComponent_array *v95; // x8
  const MethodInfo *v96; // x2
  const MethodInfo *v97; // x3
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  __int64 v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  __int64 v103; // x8
  int32_t cnt; // [xsp+1Ch] [xbp-114h]
  ServantLimitImageMaster_o *svtLimitImageMaster; // [xsp+20h] [xbp-110h]
  UserServantCollectionMaster_o *MasterData_object; // [xsp+30h] [xbp-100h]
  Il2CppObject *v108; // [xsp+38h] [xbp-F8h]
  Il2CppObject *v109; // [xsp+40h] [xbp-F0h]
  int32_t Type; // [xsp+54h] [xbp-DCh]
  BattleResultBondsDeckPerWaveComponent_o *Object_object; // [xsp+58h] [xbp-D8h]
  BattleData_o *battleDataa; // [xsp+60h] [xbp-D0h]
  struct BattleDeckServantData_array *v114; // [xsp+68h] [xbp-C8h]
  int32_t v116; // [xsp+7Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v117; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v118; // [xsp+A0h] [xbp-90h]
  Il2CppObject *entity; // [xsp+C8h] [xbp-68h] BYREF

  if ( (byte_4C2AA55 & 1) == 0 )
  {
    sub_1C2D490(&Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    sub_1C2D490(&Method_BasicHelper_Find_BattleBuddyPointInfo___);
    sub_1C2D490(&BattleResultBondsComponent_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_GetSvts___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_GetSvts___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
    sub_1C2D490(&System_Func_GetSvts__bool__TypeInfo);
    sub_1C2D490(&System_Func_BattleBuddyPointInfo__bool__TypeInfo);
    sub_1C2D490(&System_Func_QuestRewardInfo__bool__TypeInfo);
    sub_1C2D490(&Method_JsonManager_DeserializeArray_GetSvts___);
    sub_1C2D490(&Method_JsonManager_DeserializeArray_QuestRewardInfo___);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GetSvts__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GetSvts__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GetSvts__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__);
    sub_1C2D490(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__);
    sub_1C2D490(&Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__);
    sub_1C2D490(&BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo);
    sub_1C2D490(&BattleResultBondsComponent___c_TypeInfo);
    byte_4C2AA55 = 1;
  }
  entity = 0;
  Type = Follower__getType(followerType, 0);
  if ( Type )
    v16 = 5;
  else
    v16 = 6;
  cnt = v16;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_158;
  MasterData_object = (UserServantCollectionMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_158;
  v19 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_158;
  v20 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( this->fields.isMultiDeck )
  {
    Instance = (int64_t)this->fields.multiBondsRoot;
    if ( !Instance )
      goto LABEL_158;
    multiBondsPrefab = (Il2CppObject *)this->fields.multiBondsPrefab;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
    Object_object = (BattleResultBondsDeckPerWaveComponent_o *)BaseMonoBehaviour__createObject_object_(
                                                                 (BaseMonoBehaviour_o *)this,
                                                                 multiBondsPrefab,
                                                                 transform,
                                                                 0,
                                                                 (const MethodInfo_30B75C8 *)Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    if ( this->fields.isMultiDeck )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      svtLimitImageMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
      goto LABEL_158;
    Instance = BattleData__IsWarBoard(battleData, 0);
    this->fields.isWarboard = Instance & 1;
    if ( (Instance & 1) != 0 )
    {
      if ( !battleResult )
        goto LABEL_158;
      rewardInfos = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.rewardInfos;
      v26 = BattleResultBondsComponent___c_TypeInfo;
      if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v26 = BattleResultBondsComponent___c_TypeInfo;
      }
      _9__49_0 = (System_Func_object__bool__o *)v26->static_fields->__9__49_0;
      if ( !_9__49_0 )
      {
        if ( !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          v26 = BattleResultBondsComponent___c_TypeInfo;
        }
        v28 = (Il2CppObject *)v26->static_fields->__9;
        _9__49_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_QuestRewardInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__49_0,
          v28,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__,
          0);
        static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
        static_fields->__9__49_0 = (struct System_Func_QuestRewardInfo__bool__o *)_9__49_0;
        sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v30, v31);
      }
      v32 = System_Linq_Enumerable__Where_object_(
              rewardInfos,
              (System_Func_TSource__bool__o *)_9__49_0,
              (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
      v33 = System_Linq_Enumerable__ToList_object_(
              v32,
              (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
      if ( v33 )
      {
        v34 = (System_Collections_Generic_List_object__o *)v33;
        if ( v33->fields._size >= 1 )
        {
          v35 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v35 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v35->static_fields->GET_NEW_SVT_KEY, 0) )
          {
            v36 = BattleResultBondsComponent_TypeInfo;
            if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v36 = BattleResultBondsComponent_TypeInfo;
            }
            String_71122516 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71122516(
                                                v36->static_fields->GET_NEW_SVT_KEY,
                                                0);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v38 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_object_(
                                                                   String_71122516,
                                                                   (const MethodInfo_313DDBC *)Method_JsonManager_DeserializeArray_QuestRewardInfo___);
            System_Collections_Generic_List_object___AddRange(
              v34,
              v38,
              (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
          }
          v39 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v39 = BattleResultBondsComponent_TypeInfo;
          }
          GET_NEW_SVT_KEY = v39->static_fields->GET_NEW_SVT_KEY;
          v41 = System_Collections_Generic_List_object___ToArray(
                  v34,
                  (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v42 = JsonManager__toJson(&v41->obj, 0, 0, 0);
          UnityEngine_PlayerPrefs__SetString(GET_NEW_SVT_KEY, v42, 0);
        }
      }
      v43 = BattleResultBondsComponent___c_TypeInfo;
      getJoinSvts = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.getJoinSvts;
      if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v43 = BattleResultBondsComponent___c_TypeInfo;
      }
      _9__49_1 = (System_Func_object__bool__o *)v43->static_fields->__9__49_1;
      if ( !_9__49_1 )
      {
        if ( !v43->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v43);
          v43 = BattleResultBondsComponent___c_TypeInfo;
        }
        v46 = (Il2CppObject *)v43->static_fields->__9;
        _9__49_1 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_GetSvts__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__49_1,
          v46,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__,
          0);
        v47 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        v47->__9__49_1 = (struct System_Func_GetSvts__bool__o *)_9__49_1;
        sub_1C2D434((CGThumbnailListItem_o *)&v47->__9__49_1, (int32_t)_9__49_1, v48, v49);
      }
      v50 = System_Linq_Enumerable__Where_object_(
              getJoinSvts,
              (System_Func_TSource__bool__o *)_9__49_1,
              (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_GetSvts___);
      v51 = System_Linq_Enumerable__ToList_object_(
              v50,
              (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_GetSvts___);
      if ( v51 )
      {
        v52 = (System_Collections_Generic_List_object__o *)v51;
        if ( v51->fields._size >= 1 )
        {
          v53 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v53 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v53->static_fields->GET_EXIST_SVT_KEY, 0) )
          {
            v54 = BattleResultBondsComponent_TypeInfo;
            if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v54 = BattleResultBondsComponent_TypeInfo;
            }
            v55 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71122516(v54->static_fields->GET_EXIST_SVT_KEY, 0);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v56 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_object_(
                                                                   v55,
                                                                   (const MethodInfo_313DDBC *)Method_JsonManager_DeserializeArray_GetSvts___);
            System_Collections_Generic_List_object___AddRange(
              v52,
              v56,
              (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_GetSvts__AddRange__);
          }
          v57 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v57 = BattleResultBondsComponent_TypeInfo;
          }
          GET_EXIST_SVT_KEY = v57->static_fields->GET_EXIST_SVT_KEY;
          v59 = System_Collections_Generic_List_object___ToArray(
                  v52,
                  (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_GetSvts__ToArray__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v60 = JsonManager__toJson(&v59->obj, 0, 0, 0);
          UnityEngine_PlayerPrefs__SetString(GET_EXIST_SVT_KEY, v60, 0);
        }
      }
      UnityEngine_PlayerPrefs__Save(0);
    }
  }
  if ( !myDeck )
    goto LABEL_158;
  svts = myDeck->fields.svts;
  if ( !svts )
    goto LABEL_158;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v63 = 0;
    v64 = 0;
    battleDataa = battleData;
    v114 = svts;
    v108 = v20;
    v109 = v19;
    while ( 1 )
    {
      if ( v63 >= max_length )
LABEL_159:
        sub_1C2D6F4(Instance, v18, v23);
      v65 = svts->m_Items[v63];
      v66 = this;
      v67 = (Il2CppObject *)sub_1C2D6DC(BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo);
      System_Object___ctor(v67, 0);
      if ( !v65 )
        goto LABEL_158;
      if ( !v67 )
        goto LABEL_158;
      userSvtId = v65->fields.userSvtId;
      v67[1].klass = (Il2CppClass *)userSvtId;
      if ( !v19 )
        goto LABEL_158;
      Instance = DataMasterBase_object__object__long___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                   &entity,
                   userSvtId,
                   (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( (Instance & 1) != 0 )
      {
        Instance = (int64_t)entity;
        if ( !entity )
          goto LABEL_158;
        SvtId = (BattleResultBondsComponent_o *)UserServantEntity__getSvtId((UserServantEntity_o *)entity, 0);
        Instance = (int64_t)BattleResultBondsComponent__getServantCollection(SvtId, oldCollects, (int32_t)SvtId, v70);
        if ( !entity )
          goto LABEL_158;
        v71 = (UserServantCollectionEntity_o *)Instance;
        v116 = v64;
        Instance = UserServantEntity__getSvtId((UserServantEntity_o *)entity, 0);
        if ( !v20 )
          goto LABEL_158;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v20,
                              Instance,
                              (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !entity )
          goto LABEL_158;
        v72 = (ServantEntity_o *)Instance;
        Instance = UserServantEntity__getIconLimitCount((UserServantEntity_o *)entity, 0, 0);
        if ( !entity )
          goto LABEL_158;
        v73 = Instance;
        Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)entity, 0, 0);
        if ( !usrSvts )
          goto LABEL_158;
        v74 = usrSvts->max_length;
        v75 = Instance;
        if ( v74 < 1 )
        {
LABEL_89:
          afterLimitCount = -1;
        }
        else
        {
          v76 = 0;
          while ( 1 )
          {
            if ( v76 >= v74 )
              goto LABEL_159;
            v77 = usrSvts->m_Items[v76];
            if ( !v77 )
              goto LABEL_158;
            v78 = *(_OWORD *)&v77->fields.id.fields.fakeValue;
            *(_OWORD *)&v118.fields.currentCryptoKey = *(_OWORD *)&v77->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v118.fields.fakeValue = v78;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v117 = v118;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v117, 0);
            if ( (Il2CppClass *)Instance == v67[1].klass )
              break;
            v74 = usrSvts->max_length;
            if ( (int)++v76 >= v74 )
              goto LABEL_89;
          }
          if ( v66->fields.isMultiDeck )
            BattleResultBondsComponent__UpdateAfterLimitCount(
              (BattleResultBondsComponent_o *)Instance,
              battleDataa,
              v77,
              v65,
              svtLimitImageMaster,
              v79);
          IconLimitCount = UserServantEntity__getIconLimitCount((UserServantEntity_o *)v77, 0, 0);
          afterIconLimitCount = v77->fields.afterIconLimitCount;
          v84 = afterIconLimitCount < 0 || IconLimitCount == afterIconLimitCount;
          v73 = v84 ? IconLimitCount : v77->fields.afterIconLimitCount;
          Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v77, 0, 0);
          afterLimitCount = v77->fields.afterLimitCount;
          v85 = afterLimitCount < 0 || (_DWORD)Instance == afterLimitCount;
          v75 = v85 ? Instance : afterLimitCount;
        }
        if ( !battleResult )
          goto LABEL_158;
        buddyPointInfos = (System_Object_array *)battleResult->fields.buddyPointInfos;
        if ( buddyPointInfos )
        {
          v87 = 0;
          if ( buddyPointInfos->max_length && !isHideBuddyPointResult )
          {
            v88 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleBuddyPointInfo__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v88,
              v67,
              Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__,
              0);
            Instance = (int64_t)BasicHelper__Find_object_(
                                  buddyPointInfos,
                                  (System_Func_T__bool__o *)v88,
                                  (const MethodInfo_30B88BC *)Method_BasicHelper_Find_BattleBuddyPointInfo___);
            v87 = (BattleBuddyPointInfo_o *)Instance;
          }
        }
        else
        {
          v87 = 0;
        }
        this = v66;
        if ( v66->fields.isMultiDeck )
        {
          Instance = (int64_t)Object_object;
          if ( !Object_object )
            goto LABEL_158;
          Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, v18);
          v89 = (BattleResultBondsIconComponent_o *)Instance;
          if ( !Instance )
            goto LABEL_158;
        }
        else
        {
          v90 = v66->fields.collects;
          if ( !v90 )
            goto LABEL_158;
          if ( (unsigned int)v116 >= LODWORD(v90->max_length) )
            goto LABEL_159;
          v89 = v90->m_Items[v116];
          if ( !v89 )
            goto LABEL_158;
        }
        BattleResultBondsIconComponent__setServantData(
          v89,
          v71,
          (UserServantEntity_o *)entity,
          v73,
          v75,
          v66->fields.baseFriendshipExp,
          Type == 0,
          afterLimitCount,
          0);
        BattleResultBondsIconComponent__SetBuddyPointInfo(v89, v87, battleResult->fields.eventId, 0);
        if ( !v72 )
          goto LABEL_158;
        v91 = ServantEntity__checkIsHeroineSvt(v72, 0);
        battleData = battleDataa;
        v20 = v108;
        v19 = v109;
        v64 = v116;
        if ( !v91 )
          goto LABEL_127;
        Instance = (int64_t)entity;
        if ( !entity )
          goto LABEL_158;
        if ( !UserServantEntity__IsAddFriendShipHeroine((UserServantEntity_o *)entity, 0) )
        {
          updateFlg = v66->fields.updateFlg;
          v66->fields.updateFlg = updateFlg | BattleResultBondsIconComponent__setNextServantData(v89, v71, 0);
          BattleResultBondsIconComponent__SetIsNoFriendship(v89, 0);
        }
        else
        {
LABEL_127:
          Instance = (int64_t)MasterData_object;
          if ( !MasterData_object )
            goto LABEL_158;
          EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                               MasterData_object,
                               v89->fields.userId,
                               v89->fields.svtId,
                               0);
          v93 = v66->fields.updateFlg;
          v66->fields.updateFlg = v93 | BattleResultBondsIconComponent__setNextServantData(v89, EntityDefinitely, 0);
        }
        BattleResultBondsIconComponent__ChangeGauge(v89, 0.0, 0);
        BattleResultBondsIconComponent__InitBuddyPointInfo(v89, 0);
        svts = v114;
        if ( v66->fields.isMultiDeck )
        {
          Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v89, 0);
          if ( !Instance )
            goto LABEL_158;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
        }
      }
      else
      {
        if ( !battleData )
          goto LABEL_158;
        Instance = BattleData__IsInterruptionQuest(battleData, 0);
        this = v66;
        if ( (Instance & 1) == 0 )
          goto LABEL_139;
        if ( v66->fields.isMultiDeck )
        {
          Instance = (int64_t)Object_object;
          if ( !Object_object )
            goto LABEL_158;
          Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, v18);
          v81 = (BattleResultBondsIconComponent_o *)Instance;
          if ( !Instance )
            goto LABEL_158;
        }
        else
        {
          v95 = v66->fields.collects;
          if ( !v95 )
            goto LABEL_158;
          if ( (unsigned int)v64 >= LODWORD(v95->max_length) )
            goto LABEL_159;
          v81 = v95->m_Items[v64];
          if ( !v81 )
            goto LABEL_158;
        }
        BattleResultBondsIconComponent__setServantData(v81, 0, 0, 0, 0, 0, 0, 0, 0);
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v81, 0);
        if ( !Instance )
          goto LABEL_158;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
        svts = v114;
      }
      ++v64;
LABEL_139:
      max_length = svts->max_length;
      if ( (int)++v63 >= max_length )
        goto LABEL_142;
    }
  }
  v64 = 0;
LABEL_142:
  if ( !this->fields.isMultiDeck )
  {
    BattleResultBondsComponent__NormalBondsInit(this, v64, cnt, Type == 0, battleResult, isHideBuddyPointResult, v24);
    return;
  }
  if ( !battleData )
    goto LABEL_158;
  Instance = (int64_t)battleData->fields.questphase_ent;
  if ( !Instance )
    goto LABEL_158;
  Instance = QuestPhaseEntity__IsWaveSetupSwitchParty((QuestPhaseEntity_o *)Instance, 0);
  if ( !Object_object )
    goto LABEL_158;
  if ( (Instance & 1) != 0 )
    BattleResultBondsDeckPerWaveComponent__SetPartyName(Object_object, currentWave, v96);
  else
    BattleResultBondsDeckPerWaveComponent__SetWaveCount(Object_object, currentWave, maxWave, v97);
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object_object, 0);
  if ( !Instance )
    goto LABEL_158;
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
    || (v100 = *(_QWORD *)(Instance + 16),
        v101 = Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__,
        ++*(_DWORD *)(Instance + 28),
        !v100) )
  {
LABEL_158:
    sub_1C2D6EC(Instance, v18);
  }
  v102 = *(int *)(Instance + 24);
  if ( (unsigned int)v102 >= *(_DWORD *)(v100 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)Object_object,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
  }
  else
  {
    v103 = v100 + 8 * v102;
    *(_DWORD *)(Instance + 24) = v102 + 1;
    *(_QWORD *)(v103 + 32) = Object_object;
    sub_1C2D434((CGThumbnailListItem_o *)(v103 + 32), (int32_t)Object_object, v98, v99);
  }
}


void BattleResultBondsComponent__SkipUpdateValue(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  int max_length; // w8
  BattleResultBondsIconComponent_array *v7; // x20
  unsigned int v8; // w21

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
        sub_1C2D6F4(BondsIconArray, v4, v5);
      BondsIconArray = (BattleResultBondsIconComponent_array *)v7->m_Items[v8];
      if ( !BondsIconArray )
        break;
      BattleResultBondsIconComponent__FinishBuddyPointInfoUpdate((BattleResultBondsIconComponent_o *)BondsIconArray, 0);
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_7;
    }
LABEL_9:
    sub_1C2D6EC(BondsIconArray, v4);
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

  if ( (byte_4C2AA66 & 1) == 0 )
  {
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    this = (BattleResultBondsComponent_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2AA66 = 1;
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
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v26, 0);
  this = (BattleResultBondsComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                           userSvtData->fields.limitCount,
                                           0);
  if ( !svtLimitImageMaster )
LABEL_26:
    sub_1C2D6EC(this, battleData);
  if ( ServantLimitImageMaster__IsServantLimitCountSeal(svtLimitImageMaster, v15, (int32_t)this, 0) )
  {
    v17 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v27.fields.currentCryptoKey = v17;
    *(_QWORD *)&v27.fields.fakeValue = v16;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v27, 0);
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
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v28, 0);
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
  __int64 v6; // x2
  int max_length; // w8
  BattleResultBondsIconComponent_array *v8; // x19
  unsigned int v9; // w20

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
        sub_1C2D6F4(BondsIconArray, v5, v6);
      BondsIconArray = (BattleResultBondsIconComponent_array *)v8->m_Items[v9];
      if ( !BondsIconArray )
        break;
      BondsIconArray = (BattleResultBondsIconComponent_array *)BattleResultBondsIconComponent__ChangeGauge(
                                                                 (BattleResultBondsIconComponent_o *)BondsIconArray,
                                                                 val,
                                                                 0);
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_9:
    sub_1C2D6EC(BondsIconArray, v5);
  }
}


void BattleResultBondsComponent___checkShow_b__67_0(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleFriendshipRewardInfo_array *showList; // x8
  __int64 showIndex; // x9
  BattleResultBondsComponent_o *v5; // x19
  BattleFriendshipRewardInfo_o *v6; // x8

  showList = this->fields.showList;
  if ( !showList )
    goto LABEL_14;
  showIndex = this->fields.showIndex;
  v5 = this;
  if ( (unsigned int)showIndex >= LODWORD(showList->max_length) )
    sub_1C2D6F4(this, method, v2);
  v6 = showList->m_Items[showIndex];
  if ( !v6 )
    goto LABEL_14;
  this = (BattleResultBondsComponent_o *)this->fields.parentComp;
  if ( !this )
    goto LABEL_14;
  BattleResultComponent__showServantRewardAction(
    (BattleResultComponent_o *)this,
    v6->fields.userSvtId,
    v6->fields.type,
    0);
  this = (BattleResultBondsComponent_o *)v5->fields.parentComp;
  ++v5->fields.showIndex;
  if ( !this )
    goto LABEL_14;
  BattleResultComponent__setTouch((BattleResultComponent_o *)this, 0, 0);
  this = (BattleResultBondsComponent_o *)v5->fields.parentComp;
  if ( !this )
    goto LABEL_14;
  BattleResultComponent__setBg((BattleResultComponent_o *)this, 0, 0);
  if ( v5->fields.isMultiDeck )
  {
    this = (BattleResultBondsComponent_o *)v5->fields.multiDeckWindow;
    if ( !this )
      goto LABEL_14;
  }
  else
  {
    this = (BattleResultBondsComponent_o *)v5->fields.window;
    if ( !this )
      goto LABEL_14;
  }
  this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
        (this = (BattleResultBondsComponent_o *)v5->fields.upRoot) == 0) )
  {
LABEL_14:
    sub_1C2D6EC(this, method);
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

  if ( (byte_4C2AA5B & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&BattleResultBondsComponent_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_17261/*"bit_reward_shine02"*/);
    byte_4C2AA5B = 1;
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
                                 (const MethodInfo_3126134 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
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
          (const MethodInfo_3126134 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
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
          (System_String_o *)StringLiteral_17261/*"bit_reward_shine02"*/,
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
        sub_1C2D6EC(Object, v16);
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
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = m_CachedPtr + 8 * klass_low;
    LODWORD(Object[1].klass) = klass_low + 1;
    *(_QWORD *)(v35 + 32) = v17;
    sub_1C2D434((CGThumbnailListItem_o *)(v35 + 32), (int32_t)v17, v22, v23);
  }
}


void BattleResultBondsComponent__checkBondsUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x22
  PlayMakerFSM_o *myFsm; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x2
  int colIndex; // w8
  __int64 v14; // x9
  int v15; // w10
  __int64 *v16; // x8
  __int64 v17; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 *v20; // x21
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_GameObject__o *conflist; // x8
  int32_t size; // w2
  int v24; // w9
  UnityEngine_Object_o *levelUpSimpleAnim; // x22
  PlayMakerFSM_c *klass; // x8
  PlayMakerFSM_o *v27; // x22
  __int64 v28; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v30; // x0
  UnityEngine_Object_o *levelUpAnim; // x22
  const MethodInfo *v32; // x3
  __int64 v33; // x9
  __int64 v34; // x8
  __int64 v35; // x9
  struct BattleResultBondsIconComponent_o *v36; // x1
  UnityEngine_Object_o *figureMoveRoot; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o **v39; // x21
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  UnityEngine_GameObject_o *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t svtId; // w22
  int32_t svtLimit; // w23
  BattleResultBondsFigureComponent_o *bondsFigure; // x19
  UnityEngine_GameObject_o *v49; // x21
  System_Action_o *v50; // x24
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C2AA59 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    sub_1C2D490(&BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo);
    sub_1C2D490(&Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__);
    sub_1C2D490(&BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo);
    sub_1C2D490(&StringLiteral_17245/*"bit_result_levelup01"*/);
    sub_1C2D490(&StringLiteral_3490/*"CLOSE"*/);
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    sub_1C2D490(&StringLiteral_3493/*"CLOSE_BOND_UP_ROOT"*/);
    byte_4C2AA59 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  v3 = sub_1C2D6DC(BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v8);
  *(_QWORD *)(v3 + 24) = BondsIconArray;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 24), (int32_t)BondsIconArray, v10, v11);
  colIndex = this->fields.colIndex;
  v14 = *(_QWORD *)(v3 + 24);
  *(_DWORD *)(v3 + 32) = colIndex;
  if ( !v14 )
    goto LABEL_10;
  while ( 1 )
  {
    v15 = *(_DWORD *)(v14 + 24);
    if ( colIndex >= v15 )
    {
      myFsm = this->fields.myFsm;
      if ( this->fields.openBoundsFlg )
      {
        if ( !myFsm )
          goto LABEL_10;
        if ( this->fields.isMultiDeck )
          v16 = &StringLiteral_3493/*"CLOSE_BOND_UP_ROOT"*/;
        else
          v16 = &StringLiteral_5447/*"END_PROC"*/;
      }
      else
      {
        if ( !myFsm )
          goto LABEL_10;
        v16 = &StringLiteral_3490/*"CLOSE"*/;
      }
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v16, 0);
      return;
    }
    this->fields.colIndex = colIndex;
    if ( colIndex >= (unsigned int)v15 )
      goto LABEL_65;
    myFsm = *(PlayMakerFSM_o **)(v14 + 8LL * colIndex + 32);
    if ( !myFsm )
      goto LABEL_10;
    myFsm = (PlayMakerFSM_o *)BattleResultBondsIconComponent__isChangeRank((BattleResultBondsIconComponent_o *)myFsm, 0);
    if ( ((unsigned __int8)myFsm & 1) != 0 )
      break;
    v14 = *(_QWORD *)(v3 + 24);
    colIndex = *(_DWORD *)(v3 + 32) + 1;
    *(_DWORD *)(v3 + 32) = colIndex;
    if ( !v14 )
      goto LABEL_10;
  }
  v17 = sub_1C2D6DC(BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    goto LABEL_10;
  *(_QWORD *)(v17 + 24) = v3;
  v20 = (__int64 *)(v17 + 24);
  sub_1C2D434((CGThumbnailListItem_o *)(v17 + 24), v3, v18, v19);
  myFsm = (PlayMakerFSM_o *)this->fields.conflist;
  if ( !myFsm )
    goto LABEL_10;
  if ( SLODWORD(myFsm->fields.m_CancellationTokenSource) < 1 )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v51,
    (System_Collections_Generic_List_object__o *)myFsm,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v52 = v51;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v52,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v52.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v52,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  conflist = this->fields.conflist;
  if ( !conflist )
    goto LABEL_10;
  size = conflist->fields._size;
  v24 = conflist->fields._version + 1;
  conflist->fields._size = 0;
  conflist->fields._version = v24;
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
                                  (System_String_o *)StringLiteral_17245/*"bit_result_levelup01"*/,
                                  0);
      if ( myFsm )
      {
        klass = myFsm->klass;
        v27 = myFsm;
        v28 = *(unsigned __int16 *)&myFsm->klass->_2.rank;
        if ( *(_WORD *)&myFsm->klass->_2.rank )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v28;
            p_offset += 2;
            if ( !v28 )
              goto LABEL_36;
          }
          v30 = (__int64)(&klass->vtable._4_OnBeforeSerialize + *(_DWORD *)p_offset);
        }
        else
        {
LABEL_36:
          v30 = sub_1C7DCA8(myFsm, SimpleAnimation_State_TypeInfo, 4);
        }
        (*(void (__fastcall **)(PlayMakerFSM_o *, _QWORD, float))v30)(v27, *(_QWORD *)(v30 + 8), 0.0);
        myFsm = (PlayMakerFSM_o *)this->fields.levelUpSimpleAnim;
        if ( myFsm )
        {
          myFsm = (PlayMakerFSM_o *)SimpleAnimation__Play_66404364(
                                      (SimpleAnimation_o *)myFsm,
                                      (System_String_o *)StringLiteral_17245/*"bit_result_levelup01"*/,
                                      0);
          goto LABEL_51;
        }
      }
    }
LABEL_10:
    sub_1C2D6EC(myFsm, v5);
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
                                (System_String_o *)StringLiteral_17245/*"bit_result_levelup01"*/,
                                0);
    if ( !myFsm )
      goto LABEL_10;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)myFsm, 0.0, 0);
    myFsm = (PlayMakerFSM_o *)this->fields.levelUpAnim;
    if ( !myFsm )
      goto LABEL_10;
    myFsm = (PlayMakerFSM_o *)UnityEngine_Animation__Play_70908988(
                                (UnityEngine_Animation_o *)myFsm,
                                (System_String_o *)StringLiteral_17245/*"bit_result_levelup01"*/,
                                0);
  }
LABEL_51:
  v33 = *v20;
  if ( !*v20 )
    goto LABEL_10;
  v34 = *(_QWORD *)(v33 + 24);
  if ( !v34 )
    goto LABEL_10;
  v35 = *(int *)(v33 + 32);
  if ( (unsigned int)v35 >= *(_DWORD *)(v34 + 24) )
LABEL_65:
    sub_1C2D6F4(myFsm, v5, v12);
  v36 = *(struct BattleResultBondsIconComponent_o **)(v34 + 8 * v35 + 32);
  this->fields.openCollect = v36;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCollect, (int32_t)v36, v12, v32);
  figureMoveRoot = (UnityEngine_Object_o *)this->fields.figureMoveRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(figureMoveRoot, 0, 0) )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.figureMoveRoot;
    if ( !myFsm )
      goto LABEL_10;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myFsm, 0);
    *(_QWORD *)(v17 + 16) = gameObject;
    v39 = (UnityEngine_GameObject_o **)(v17 + 16);
    sub_1C2D434((CGThumbnailListItem_o *)(v17 + 16), (int32_t)gameObject, v40, v41);
    myFsm = *(PlayMakerFSM_o **)(v17 + 16);
    if ( !myFsm )
      goto LABEL_10;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 0, 0);
  }
  else
  {
    myFsm = (PlayMakerFSM_o *)this->fields.figureRoot;
    if ( !myFsm )
      goto LABEL_10;
    v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myFsm, 0);
    *(_QWORD *)(v17 + 16) = v42;
    v39 = (UnityEngine_GameObject_o **)(v17 + 16);
    sub_1C2D434((CGThumbnailListItem_o *)(v17 + 16), (int32_t)v42, v43, v44);
  }
  openCollect = this->fields.openCollect;
  if ( !openCollect )
    goto LABEL_10;
  svtId = openCollect->fields.svtId;
  svtLimit = openCollect->fields.svtLimit;
  bondsFigure = this->fields.bondsFigure;
  v49 = *v39;
  v50 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v50,
    (Il2CppObject *)v17,
    Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__,
    0);
  if ( !bondsFigure )
    goto LABEL_10;
  BattleResultBondsFigureComponent__SetupFigure(bondsFigure, v49, svtId, svtLimit, 7, 0, 51, v50, 0);
}


void BattleResultBondsComponent__checkShow(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  struct BattleFriendshipRewardInfo_array *showList; // x8
  il2cpp_array_size_t max_length; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  SummonAssetManager_o *parentComp; // x0

  if ( (byte_4C2AA5F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleResultBondsComponent__checkShow_b__67_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_4C2AA5F = 1;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
        v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(v6, (Il2CppObject *)this, Method_BattleResultBondsComponent__checkShow_b__67_0__, 0);
        if ( Instance )
        {
          SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v6, 0);
          return;
        }
        goto LABEL_21;
      }
      parentComp = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
    sub_1C2D6EC(parentComp, method);
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

  if ( (byte_4C2AA60 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultBondsComponent_closeBondUp__);
    sub_1C2D490(&Method_BattleResultBondsComponent_endCloseBondUp__);
    sub_1C2D490(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIUnityRenderer__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
    byte_4C2AA60 = 1;
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
                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
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
    v8 = (_QWORD *)sub_1C2D4A8(Method_BattleResultBondsComponent_closeBondUp__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C2D474(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
  effectUIList = this->fields.parentComp;
  if ( !effectUIList
    || (BattleResultComponent__setTouch((BattleResultComponent_o *)effectUIList, 0, 0),
        (effectUIList = this->fields.bondsFigure) == 0)
    || (BattleResultBondsFigureComponent__DestroyFigure((BattleResultBondsFigureComponent_o *)effectUIList, 0),
        confwindow = this->fields.confwindow,
        v11 = (BattleWindowComponent_EndCall_o *)sub_1C2D6DC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v11,
          (Il2CppObject *)this,
          Method_BattleResultBondsComponent_endCloseBondUp__,
          0),
        !confwindow) )
  {
LABEL_18:
    sub_1C2D6EC(effectUIList, v3);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))confwindow->klass->vtable._12_Close.methodPtr)(
    confwindow,
    v11,
    confwindow->klass->vtable._12_Close.method);
}


void BattleResultBondsComponent__endClose(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1
  BattleResultBondsIconComponent_o *BondsIconArray; // x0
  __int64 v7; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleResultBondsIconComponent_o *v9; // x20
  int v10; // w21
  int v11; // w22
  __int64 v12; // x0
  __int64 v13; // x2

  if ( (byte_4C2AA63 & 1) == 0 )
  {
    sub_1C2D490(&OptionManager_TypeInfo);
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    byte_4C2AA63 = 1;
  }
  this->fields.resultAssetData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resultAssetData, 0, v2, v3);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0) )
  {
    BondsIconArray = (BattleResultBondsIconComponent_o *)BattleResultBondsComponent__GetBondsIconArray(this, v5);
    if ( !BondsIconArray )
      goto LABEL_16;
    m_CancellationTokenSource = BondsIconArray->fields.m_CancellationTokenSource;
    v9 = BondsIconArray;
    v10 = (_DWORD)m_CancellationTokenSource - 1;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        BondsIconArray = (BattleResultBondsIconComponent_o *)*((_QWORD *)&v9->fields.root + v11);
        if ( !BondsIconArray )
          break;
        BattleResultBondsIconComponent__ClearFaceAtlas(BondsIconArray, 0);
        if ( v10 == v11 )
          goto LABEL_13;
        if ( (unsigned int)++v11 >= LODWORD(v9->fields.m_CancellationTokenSource) )
          sub_1C2D6F4(v12, v7, v13);
      }
LABEL_16:
      sub_1C2D6EC(BondsIconArray, v7);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_5447/*"END_PROC"*/, 0);
}


void BattleResultBondsComponent__endCloseBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C2AA61 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    byte_4C2AA61 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5447/*"END_PROC"*/, 0);
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
  __int64 v31; // x2
  struct BattleFriendshipRewardInfo_array *rewardInfos; // x24
  int max_length; // w8
  int v34; // w21
  int CONF_SERVANT_COIN_PLUS_HEIGHT; // w26
  struct BattleResultBondsIconComponent_o *v36; // x8
  BattleFriendshipRewardInfo_o *v37; // x25
  GiftEntity_o *v38; // x26
  int32_t type; // w8
  Il2CppObject *v40; // x0
  System_String_o *v41; // x27
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  Il2CppObject *v45; // x0
  Il2CppObject *v46; // x0
  ServantEntity_o *v47; // x27
  Il2CppObject *Master_object; // x28
  int32_t v49; // w1
  System_String_o *v50; // x0
  const MethodInfo *v51; // x6
  int32_t v52; // w5
  System_String_o *v53; // x1
  float v54; // s0
  int32_t objectId; // w2
  System_String_o *v56; // x0
  bool v57; // w27
  Il2CppObject *Name; // x27
  System_String_o *v59; // x0
  System_String_o *v60; // x28
  int32_t IconImageId; // w0
  const MethodInfo *v62; // x6
  BattleResultBondsComponent_c *v63; // x0
  const MethodInfo *v64; // x3
  struct System_Object_array *items; // x8
  _QWORD *v66; // x9
  __int64 size; // x10
  Il2CppClass **v68; // x0
  System_Object_array *v69; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  int v72; // w20
  UnityEngine_Transform_o *confRoot; // x21
  unsigned int localPosition; // s0 OVERLAPPED
  int v75; // w8
  float v76; // s1
  int v77; // w20
  float v78; // s1
  int v79; // s2
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *rankupConfLabel; // x21
  struct BattleWindowComponent_o *confwindow; // x20
  BattleWindowComponent_EndCall_o *v83; // x21
  int32_t key; // [xsp+4h] [xbp-CCh]
  System_Text_StringBuilder_o *v85; // [xsp+8h] [xbp-C8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v86; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+18h] [xbp-B8h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+30h] [xbp-A0h] BYREF
  System_String_o *countText; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v90; // [xsp+40h] [xbp-90h] BYREF
  System_String_o *nameText; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4C2AA5D & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultBondsComponent_endMoveFigure__);
    sub_1C2D490(&Method_BattleResultBondsComponent_openedBondUp__);
    sub_1C2D490(&BattleResultBondsComponent_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&ServantCommentManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C2D490(&System_Text_StringBuilder_TypeInfo);
    sub_1C2D490(&StringLiteral_11105/*"RESULT_BOUNDS_OPENQUEST"*/);
    sub_1C2D490(&StringLiteral_113/*" "*/);
    sub_1C2D490(&StringLiteral_11108/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/);
    sub_1C2D490(&StringLiteral_11107/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/);
    sub_1C2D490(&StringLiteral_11103/*"RESULT_BOUNDS_GET_COIN_NAME"*/);
    sub_1C2D490(&StringLiteral_11100/*"RESULT_BOUNDS_GETVOICE"*/);
    sub_1C2D490(&StringLiteral_25110/*"{0} {1}"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_11102/*"RESULT_BOUNDS_GET_COIN_COUNT"*/);
    byte_4C2AA5D = 1;
  }
  memset(&v90, 0, sizeof(v90));
  nameText = 0;
  entity = 0;
  countText = 0;
  v3 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0);
  v4 = Method_BattleResultBondsComponent_endMoveFigure__;
  if ( (*((_BYTE *)Method_BattleResultBondsComponent_endMoveFigure__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C2D4A8(Method_BattleResultBondsComponent_endMoveFigure__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
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
  lvComp = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !lvComp )
    goto LABEL_120;
  v85 = v3;
  lvComp = (__int64)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                      (clsQuestCheck_o *)lvComp,
                      svtId,
                      friendshipRank,
                      8,
                      0);
  if ( lvComp )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v87,
      (System_Collections_Generic_List_object__o *)lvComp,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    v11 = 0;
    v90 = v87;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v90,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
    {
      current = v90.fields._current;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11105/*"RESULT_BOUNDS_OPENQUEST"*/, 0);
      if ( !current )
        sub_1C2D6EC(v13, v14);
      v15 = v13;
      QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0);
      v17 = System_String__Format(v15, QuestName, 0);
      BattleResultBondsComponent__addConfObject(this, v17, (float)v11 * 22.0, -1, 0, 0, 1, v18);
      v11 += 3;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v90,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  }
  else
  {
    v11 = 0;
  }
  v19 = this->fields.openCollect;
  if ( !v19 )
    goto LABEL_120;
  svtLimit = v19->fields.svtLimit;
  lvComp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lvComp )
    goto LABEL_120;
  lvComp = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)lvComp,
                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
    v22 = &StringLiteral_11108/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/;
    v23 = 4;
    v24 = 1;
  }
  else
  {
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    lvComp = ServantCommentManager__IsOpenByServantFriendShip_43237368(
               svtId,
               friendshipRank,
               ServantLimitCountSealAfter,
               0);
    if ( (lvComp & 1) == 0 )
      goto LABEL_33;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = &StringLiteral_11107/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/;
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
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_11100/*"RESULT_BOUNDS_GETVOICE"*/, 0);
    BattleResultBondsComponent__addConfObject(this, v28, (float)v11 * 22.0, -1, 0, 0, 1, v29);
    v11 += 2;
  }
  if ( !this->fields.rewardInfos )
  {
    CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
    goto LABEL_104;
  }
  v30 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ItemMaster___);
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
  v86 = (DataMasterBase_TMaster__TEntity__PKType__o *)lvComp;
  key = svtId;
  v34 = 0;
  CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
  do
  {
    if ( v34 >= (unsigned int)max_length )
      sub_1C2D6F4(lvComp, v7, v31);
    v36 = this->fields.openCollect;
    if ( !v36 )
      goto LABEL_120;
    v37 = rewardInfos->m_Items[v34];
    if ( !v37 )
      goto LABEL_120;
    if ( v36->fields.svtId == v37->fields.targetSvtId )
    {
      lvComp = (__int64)BattleFriendshipRewardInfo__getGiftEntity(v37, 0);
      if ( !lvComp )
        goto LABEL_120;
      v38 = (GiftEntity_o *)lvComp;
      GiftEntity__GetInfo((GiftEntity_o *)lvComp, &nameText, &countText, 0);
      if ( GiftEntity__isQp(v38, 0) )
      {
        nameText = countText;
        countText = (System_String_o *)StringLiteral_1/*""*/;
      }
      type = v38->fields.type;
      if ( type == 1 )
      {
        v50 = System_String__Concat_63496112(nameText, (System_String_o *)StringLiteral_113/*" "*/, countText, 0);
        v52 = v38->fields.type;
        v53 = v50;
        v54 = (float)v11 * 22.0;
        objectId = -1;
      }
      else
      {
        if ( type == 2 )
        {
          lvComp = (__int64)v86;
          if ( !v86 )
            goto LABEL_120;
          v40 = DataMasterBase_object__object__int___GetEntity(
                  v86,
                  v38->fields.objectId,
                  (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( v40 && LODWORD(v40[3].klass) == 29 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v41 = LocalizationManager__Get((System_String_o *)StringLiteral_11102/*"RESULT_BOUNDS_GET_COIN_COUNT"*/, 0);
            LODWORD(v87.fields._list) = v38->fields.num;
            v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v87, v42, v43, v44);
            countText = System_String__Format(v41, v45, 0);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
            if ( !lvComp )
              goto LABEL_120;
            v46 = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)lvComp,
                    key,
                    (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( v46 )
            {
              v47 = (ServantEntity_o *)v46;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4C211E1 )
              {
                sub_1C2D490(&NetworkManager_TypeInfo);
                byte_4C211E1 = 1;
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
                lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
                  v49 = -1;
                else
                  v49 = lvComp;
              }
              else
              {
                v49 = -1;
              }
              Name = (Il2CppObject *)ServantEntity__getName(v47, v49, -1, 0, 0);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v59 = LocalizationManager__Get((System_String_o *)StringLiteral_11103/*"RESULT_BOUNDS_GET_COIN_NAME"*/, 0);
              nameText = System_String__Format_63499156(v59, (Il2CppObject *)nameText, Name, 0);
            }
            v57 = 1;
          }
          else
          {
            v57 = 0;
          }
          v60 = System_String__Format_63499156(
                  (System_String_o *)StringLiteral_25110/*"{0} {1}"*/,
                  (Il2CppObject *)nameText,
                  (Il2CppObject *)countText,
                  0);
          IconImageId = GiftEntity__getIconImageId(v38, 0);
          BattleResultBondsComponent__addConfObject(
            this,
            v60,
            (float)v11 * 22.0,
            IconImageId,
            v57,
            0,
            v38->fields.type,
            v62);
          goto LABEL_90;
        }
        v56 = System_String__Format_63499156(
                (System_String_o *)StringLiteral_25110/*"{0} {1}"*/,
                (Il2CppObject *)nameText,
                (Il2CppObject *)countText,
                0);
        v52 = v38->fields.type;
        objectId = v38->fields.objectId;
        v53 = v56;
        v54 = (float)v11 * 22.0;
      }
      BattleResultBondsComponent__addConfObject(this, v53, v54, objectId, 0, 0, v52, v51);
LABEL_90:
      v63 = BattleResultBondsComponent_TypeInfo;
      if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
        v63 = BattleResultBondsComponent_TypeInfo;
      }
      v11 += 2;
      CONF_SERVANT_COIN_PLUS_HEIGHT = v63->static_fields->CONF_SERVANT_COIN_PLUS_HEIGHT;
      lvComp = BattleFriendshipRewardInfo__isShow(v37, 0);
      if ( (lvComp & 1) != 0 )
      {
        if ( !v30 )
          goto LABEL_120;
        items = v30->fields._items;
        v66 = Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__;
        ++v30->fields._version;
        if ( !items )
          goto LABEL_120;
        size = v30->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v30,
            (Il2CppObject *)v37,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
        }
        else
        {
          v68 = &items->obj.klass + size;
          v30->fields._size = size + 1;
          v68[4] = (Il2CppClass *)v37;
          sub_1C2D434((CGThumbnailListItem_o *)(v68 + 4), (int32_t)v37, v31, v64);
        }
      }
    }
    max_length = rewardInfos->max_length;
    ++v34;
  }
  while ( v34 < max_length );
  if ( !v30 )
    goto LABEL_120;
LABEL_103:
  v69 = System_Collections_Generic_List_object___ToArray(
          v30,
          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
  this->fields.showList = (struct BattleFriendshipRewardInfo_array *)v69;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.showList, (int32_t)v69, v70, v71);
  this->fields.showIndex = 0;
LABEL_104:
  lvComp = (__int64)this->fields.confSprite;
  if ( v11 )
    v72 = v11;
  else
    v72 = 1;
  if ( !lvComp )
    goto LABEL_120;
  UIWidget__set_height((UIWidget_o *)lvComp, CONF_SERVANT_COIN_PLUS_HEIGHT + 22 * v72 + 120, 0);
  confRoot = this->fields.confRoot;
  if ( !confRoot )
    goto LABEL_120;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.confRoot, 0);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT >= 0 )
    v75 = CONF_SERVANT_COIN_PLUS_HEIGHT;
  else
    v75 = CONF_SERVANT_COIN_PLUS_HEIGHT + 1;
  v76 = (float)v72;
  v77 = v75 >> 1;
  v78 = (float)(v76 * 11.0) + (float)(v75 >> 1);
  v79 = 0;
  UnityEngine_Transform__set_localPosition(confRoot, *(UnityEngine_Vector3_o *)&localPosition, 0);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT )
  {
    lvComp = (__int64)this->fields.confwindow;
    if ( lvComp )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lvComp, 0);
      GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v77, 0);
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
    sub_1C2D6EC(lvComp, v7);
  }
LABEL_116:
  if ( !v85 )
    goto LABEL_120;
  rankupConfLabel = this->fields.rankupConfLabel;
  lvComp = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v85->klass->vtable._3_ToString.methodPtr)(
             v85,
             v85->klass->vtable._3_ToString.method);
  if ( !rankupConfLabel )
    goto LABEL_120;
  UILabel__set_text(rankupConfLabel, (System_String_o *)lvComp, 0);
  confwindow = this->fields.confwindow;
  v83 = (BattleWindowComponent_EndCall_o *)sub_1C2D6DC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v83, (Il2CppObject *)this, Method_BattleResultBondsComponent_openedBondUp__, 0);
  if ( !confwindow )
    goto LABEL_120;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))confwindow->klass->vtable._10_Open.methodPtr)(
    confwindow,
    v83,
    confwindow->klass->vtable._10_Open.method);
}


// local variable allocation has failed, the output may be wrong!
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
        sub_1C2D6F4(this, collects, *(_QWORD *)&svtId);
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
    sub_1C2D6EC(this, collects);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1C2D6EC(this, deck);
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    if ( max_length == v6 )
      sub_1C2D6F4(this, deck, *(_QWORD *)&index);
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
    sub_1C2D6EC(this, method);
  return SLODWORD(oldCollections->max_length) > 1;
}


void BattleResultBondsComponent__openedBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0

  if ( (byte_4C2AA5E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5442/*"END_OPEN"*/);
    byte_4C2AA5E = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__ResetPlayScreenTouch(parentComp, 0), (parentComp = this->fields.parentComp) == 0)
    || (BattleResultComponent__setTouch(parentComp, 1, 0),
        parentComp = (BattleResultComponent_o *)this->fields.myFsm,
        ++this->fields.colIndex,
        !parentComp) )
  {
    sub_1C2D6EC(parentComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)parentComp, (System_String_o *)StringLiteral_5442/*"END_OPEN"*/, 0);
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

  if ( (byte_4C2AA6A & 1) == 0 )
  {
    sub_1C2D490(&BattleResultBondsComponent___c_TypeInfo);
    byte_4C2AA6A = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(BattleResultBondsComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleResultBondsComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultBondsComponent___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)BattleResultBondsComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, 0);
  return col->fields.isUse;
}


bool BattleResultBondsComponent___c___SetResultDataLocal_b__49_0(
        BattleResultBondsComponent___c_o *this,
        QuestRewardInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.type == 7 && x->fields.isNew;
}


bool BattleResultBondsComponent___c___SetResultDataLocal_b__49_1(
        BattleResultBondsComponent___c_o *this,
        GetSvts_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v11; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  const MethodInfo *v15; // x3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v16; // x22
  const MethodInfo *v17; // x3
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  const MethodInfo *v21; // x3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v22; // x22
  const MethodInfo *v23; // x3
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  const MethodInfo *v27; // x3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v28; // x22
  const MethodInfo *v29; // x3
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v30; // x8
  const MethodInfo *v31; // x3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v32; // x22
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3
  System_Collections_Hashtable_o *v35; // x0
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v36; // x8
  struct BattleResultBondsComponent_o *v37; // x8
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v38; // x8
  struct BattleResultBondsIconComponent_array *bondsIcons; // x9
  __int64 i; // x10
  __int64 v41; // x0
  char v42[4]; // [xsp+4h] [xbp-3Ch] BYREF
  int v43; // [xsp+8h] [xbp-38h] BYREF
  int v44; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4C2AA6B & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_24841/*"x"*/);
    sub_1C2D490(&StringLiteral_9622/*"OPEN"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22412/*"oncompletetarget"*/);
    sub_1C2D490(&StringLiteral_19008/*"endMoveFigure"*/);
    sub_1C2D490(&StringLiteral_20959/*"islocal"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C2D490(&iTween_TypeInfo);
    byte_4C2AA6B = 1;
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
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C2D538(object___TypeInfo, 10);
  if ( !this )
    goto LABEL_69;
  v11 = this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_24841/*"x"*/;
  if ( StringLiteral_24841/*"x"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C2D5CC(
                                                                   StringLiteral_24841/*"x"*/,
                                                                   v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_24841/*"x"*/;
  }
  else
  {
    method = 0;
  }
  if ( !LODWORD(v11->fields.CS___8__locals1) )
    goto LABEL_70;
  v11[1].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)method;
  sub_1C2D434((CGThumbnailListItem_o *)&v11[1], (int32_t)method, (int32_t)v9, v10);
  v44 = -1007026176;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v44, v12, v13, v14);
  v16 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C2D5CC(this, v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v11->fields.CS___8__locals1) <= 1 )
    goto LABEL_70;
  v11[1].monitor = v16;
  sub_1C2D434((CGThumbnailListItem_o *)&v11[1].monitor, (int32_t)v16, (int32_t)v9, v15);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_24049/*"time"*/;
  if ( StringLiteral_24049/*"time"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C2D5CC(
                                                                   StringLiteral_24049/*"time"*/,
                                                                   v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_24049/*"time"*/;
  }
  else
  {
    method = 0;
  }
  if ( LODWORD(v11->fields.CS___8__locals1) <= 2 )
    goto LABEL_70;
  v11[1].fields.parent = (struct UnityEngine_GameObject_o *)method;
  sub_1C2D434((CGThumbnailListItem_o *)&v11[1].fields, (int32_t)method, (int32_t)v9, v17);
  v43 = 1061997773;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v43, v18, v19, v20);
  v22 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C2D5CC(this, v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v11->fields.CS___8__locals1) <= 3 )
    goto LABEL_70;
  v11[1].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v22;
  sub_1C2D434((CGThumbnailListItem_o *)&v11[1].fields.CS___8__locals1, (int32_t)v22, (int32_t)v9, v21);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_20959/*"islocal"*/;
  if ( StringLiteral_20959/*"islocal"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C2D5CC(
                                                                   StringLiteral_20959/*"islocal"*/,
                                                                   v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_20959/*"islocal"*/;
  }
  else
  {
    method = 0;
  }
  if ( LODWORD(v11->fields.CS___8__locals1) <= 4 )
    goto LABEL_70;
  v11[2].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)method;
  sub_1C2D434((CGThumbnailListItem_o *)&v11[2], (int32_t)method, (int32_t)v9, v23);
  v42[0] = 1;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(bool_TypeInfo, v42, v24, v25, v26);
  v28 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C2D5CC(this, v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v11->fields.CS___8__locals1) <= 5 )
    goto LABEL_70;
  v11[2].monitor = v28;
  sub_1C2D434((CGThumbnailListItem_o *)&v11[2].monitor, (int32_t)v28, (int32_t)v9, v27);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22412/*"oncompletetarget"*/;
  if ( StringLiteral_22412/*"oncompletetarget"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C2D5CC(
                                                                   StringLiteral_22412/*"oncompletetarget"*/,
                                                                   v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_22412/*"oncompletetarget"*/;
  }
  else
  {
    method = 0;
  }
  if ( LODWORD(v11->fields.CS___8__locals1) <= 6 )
    goto LABEL_70;
  v11[2].fields.parent = (struct UnityEngine_GameObject_o *)method;
  sub_1C2D434((CGThumbnailListItem_o *)&v11[2].fields, (int32_t)method, (int32_t)v9, v29);
  v30 = v2->fields.CS___8__locals1;
  if ( !v30 || (this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v30->fields.__4__this) == 0 )
LABEL_69:
    sub_1C2D6EC(this, method);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0);
  v32 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C2D5CC(this, v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v11->fields.CS___8__locals1) <= 7 )
    goto LABEL_70;
  v11[2].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v32;
  sub_1C2D434((CGThumbnailListItem_o *)&v11[2].fields.CS___8__locals1, (int32_t)v32, (int32_t)v9, v31);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22410/*"oncomplete"*/;
  if ( StringLiteral_22410/*"oncomplete"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C2D5CC(
                                                                   StringLiteral_22410/*"oncomplete"*/,
                                                                   v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_22410/*"oncomplete"*/;
  }
  else
  {
    method = 0;
  }
  if ( LODWORD(v11->fields.CS___8__locals1) <= 8 )
    goto LABEL_70;
  v11[3].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)method;
  sub_1C2D434((CGThumbnailListItem_o *)&v11[3], (int32_t)method, (int32_t)v9, v33);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_19008/*"endMoveFigure"*/;
  if ( !StringLiteral_19008/*"endMoveFigure"*/ )
  {
    method = 0;
    goto LABEL_57;
  }
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C2D5CC(
                                                                 StringLiteral_19008/*"endMoveFigure"*/,
                                                                 v11->klass->_1.element_class);
  if ( !this )
  {
LABEL_71:
    v41 = sub_1C2D710(this);
    sub_1C2D5B8(v41, 0);
  }
  method = (const MethodInfo *)StringLiteral_19008/*"endMoveFigure"*/;
LABEL_57:
  if ( LODWORD(v11->fields.CS___8__locals1) <= 9 )
    goto LABEL_70;
  v11[3].monitor = (void *)method;
  sub_1C2D434((CGThumbnailListItem_o *)&v11[3].monitor, (int32_t)method, (int32_t)v9, v34);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v35 = iTween__Hash((System_Object_array *)v11, 0);
  iTween__MoveFrom_63096900(parent, v35, 0);
LABEL_61:
  v36 = v2->fields.CS___8__locals1;
  if ( !v36 )
    goto LABEL_69;
  v37 = v36->fields.__4__this;
  if ( !v37 )
    goto LABEL_69;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v37->fields.myFsm;
  v37->fields.openBoundsFlg = 1;
  if ( !this )
    goto LABEL_69;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9622/*"OPEN"*/, 0);
  v38 = v2->fields.CS___8__locals1;
  if ( !v38 )
    goto LABEL_69;
  bondsIcons = v38->fields.bondsIcons;
  if ( !bondsIcons )
    goto LABEL_69;
  i = v38->fields.i;
  if ( (unsigned int)i >= LODWORD(bondsIcons->max_length) )
LABEL_70:
    sub_1C2D6F4(this, method, v9);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v38->fields.__4__this;
  if ( !this )
    goto LABEL_69;
  BattleResultBondsComponent__CheckFormalJoin((BattleResultBondsComponent_o *)this, bondsIcons->m_Items[i], v9);
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

  if ( (byte_4C2AA6C & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2AA6C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
  CommonUI__CreateServantCoinConfirmDialog((CommonUI_o *)Instance, 1, this->fields.coin, 0, 0);
}