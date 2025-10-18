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

  if ( (byte_4C4679B & 1) == 0 )
  {
    sub_1C37058(&BattleResultBondsComponent_TypeInfo);
    sub_1C37058(&StringLiteral_7092/*"GetNewSvt"*/);
    sub_1C37058(&StringLiteral_7079/*"GetExistSvt"*/);
    byte_4C4679B = 1;
  }
  static_fields = BattleResultBondsComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SVT_GAP_5 = 0x4316000043320000LL;
  *(_QWORD *)&static_fields->CONF_LABEL_MAX_WIDTH = 0x12000001D0LL;
  v4 = StringLiteral_7092/*"GetNewSvt"*/;
  static_fields->GET_NEW_SVT_KEY = (struct System_String_o *)StringLiteral_7092/*"GetNewSvt"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->GET_NEW_SVT_KEY, v4, v1, v2);
  v5 = StringLiteral_7079/*"GetExistSvt"*/;
  v6 = BattleResultBondsComponent_TypeInfo->static_fields;
  v6->GET_EXIST_SVT_KEY = (struct System_String_o *)StringLiteral_7079/*"GetExistSvt"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6->GET_EXIST_SVT_KEY, v5, v7, v8);
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

  if ( (byte_4C4679A & 1) == 0 )
  {
    sub_1C37058(&BattleResultBondsFigureComponent_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4C4679A = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.conflist = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.conflist, (int32_t)v3, v4, v5);
  this->fields.buddyPointInfoWindowHeight = 366;
  this->fields.tempSaveTimeScale = 1.0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
  this->fields.bondsList = (struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bondsList, (int32_t)v6, v7, v8);
  v9 = (BattleResultBondsFigureComponent_o *)sub_1C372A4(BattleResultBondsFigureComponent_TypeInfo);
  BattleResultBondsFigureComponent___ctor(v9, v10);
  this->fields.bondsFigure = v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bondsFigure, (int32_t)v9, v11, v12);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleResultBondsComponent__CheckFormalJoin(
        BattleResultBondsComponent_o *this,
        BattleResultBondsIconComponent_o *collect,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  struct GetSvts_array *getJoinSvtList; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  __int64 v8; // x26
  int max_length; // w9
  GetSvts_o *v10; // x8
  UserServantEntity_o *v11; // x24
  EventServantEntity_o *EventServant; // x22
  BattleResultBondsComponent___c_c *v13; // x0
  System_Action_o *_9__62_0; // x23
  Il2CppObject *v15; // x25
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *Master_object; // x25
  __int64 v20; // x24
  __int64 v21; // x23
  __int64 v22; // x25
  Il2CppObject *v23; // x8
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_String_o *v28; // x24
  Il2CppObject *v29; // x25
  __int64 v30; // x0
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C4678C & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    sub_1C37058(&GetSvtCoin___TypeInfo);
    sub_1C37058(&GetSvtCoin_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__);
    sub_1C37058(&Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__);
    sub_1C37058(&BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo);
    sub_1C37058(&BattleResultBondsComponent___c_TypeInfo);
    sub_1C37058(&StringLiteral_12440/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/);
    sub_1C37058(&StringLiteral_18611/*"dialogIgnoreTime"*/);
    byte_4C4678C = 1;
  }
  entity = 0;
  if ( this->fields.getJoinSvtList && !this->fields.isWarboard )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___),
          (getJoinSvtList = this->fields.getJoinSvtList) == 0) )
    {
LABEL_45:
      sub_1C372B4(Instance);
    }
    v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v8 = 0;
    while ( 1 )
    {
      max_length = getJoinSvtList->max_length;
      if ( (int)v8 >= max_length )
        break;
      if ( (unsigned int)v8 >= max_length )
        goto LABEL_46;
      v10 = getJoinSvtList->m_Items[v8];
      if ( !v10 )
        goto LABEL_45;
      if ( v10->fields.isNew )
      {
        UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_18611/*"dialogIgnoreTime"*/, 1, 0);
        UnityEngine_PlayerPrefs__Save(0);
      }
      else
      {
        if ( !v7 )
          goto LABEL_45;
        Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                      v7,
                                      v10->fields.userSvtId,
                                      (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( Instance )
        {
          v11 = (UserServantEntity_o *)Instance;
          Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0);
          if ( !collect )
            goto LABEL_45;
          if ( (_DWORD)Instance == collect->fields.svtId )
          {
            EventServant = UserServantEntity__getEventServant(v11, 0);
            if ( EventServant
              || (Instance = (DataManager_o *)UserServantEntity__getEventServantIgnoreEnd(v11, 0),
                  (EventServant = (EventServantEntity_o *)Instance) != 0) )
            {
              v13 = BattleResultBondsComponent___c_TypeInfo;
              if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
                v13 = BattleResultBondsComponent___c_TypeInfo;
              }
              _9__62_0 = v13->static_fields->__9__62_0;
              if ( !_9__62_0 )
              {
                if ( !v13->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v13);
                  v13 = BattleResultBondsComponent___c_TypeInfo;
                }
                v15 = (Il2CppObject *)v13->static_fields->__9;
                _9__62_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                System_Action___ctor(_9__62_0, v15, Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__, 0);
                static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
                static_fields->__9__62_0 = _9__62_0;
                sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__62_0, (int32_t)_9__62_0, v17, v18);
              }
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SvtCoinMaster___);
              Instance = (DataManager_o *)UserServantEntity__getSvtId(v11, 0);
              if ( !Master_object )
                goto LABEL_45;
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            &entity,
                                            (int32_t)Instance,
                                            (const MethodInfo_33A10EC *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_45;
                if ( SHIDWORD(entity[1].klass) >= 1 )
                {
                  v20 = sub_1C372A4(BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v20, 0);
                  v21 = sub_1C37100(GetSvtCoin___TypeInfo, 1);
                  v22 = sub_1C372A4(GetSvtCoin_TypeInfo);
                  GetSvtCoin___ctor((GetSvtCoin_o *)v22, 0);
                  v23 = entity;
                  if ( !entity )
                    goto LABEL_45;
                  if ( !v22 )
                    goto LABEL_45;
                  *(_DWORD *)(v22 + 16) = entity[1].klass;
                  *(int32x2_t *)(v22 + 20) = vrev64_s32(*(int32x2_t *)((char *)&v23[1].klass + 4));
                  if ( !v21 )
                    goto LABEL_45;
                  Instance = (DataManager_o *)sub_1C37194(v22, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
                  if ( !Instance )
                  {
                    v30 = sub_1C372D8(0);
                    sub_1C37180(v30, 0);
                  }
                  if ( !*(_DWORD *)(v21 + 24) )
LABEL_46:
                    sub_1C372BC(Instance);
                  *(_QWORD *)(v21 + 32) = v22;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 32), v22, v24, v25);
                  if ( !v20 )
                    goto LABEL_45;
                  *(_QWORD *)(v20 + 16) = v21;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 16), v21, v26, v27);
                  _9__62_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__62_0,
                    (Il2CppObject *)v20,
                    Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__,
                    0);
                }
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12440/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0);
              v29 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              Instance = (DataManager_o *)EventServantEntity__GetGetMessage(EventServant, 0);
              if ( !v29 )
                goto LABEL_45;
              CommonUI__OpenNotificationDialog(
                (CommonUI_o *)v29,
                v28,
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
      ++v8;
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

  if ( (byte_4C46794 & 1) == 0 )
  {
    sub_1C37058(&Method_BattleResultBondsComponent_endClose__);
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C46794 = 1;
  }
  if ( this->fields.isMultiDeck )
    multiDeckWindow = this->fields.multiDeckWindow;
  else
    multiDeckWindow = this->fields.window;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v4, (Il2CppObject *)this, Method_BattleResultBondsComponent_endClose__, 0);
  if ( !multiDeckWindow )
    sub_1C372B4(v5);
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))multiDeckWindow->klass->vtable._12_Close.methodPtr)(
    multiDeckWindow,
    v4,
    multiDeckWindow->klass->vtable._12_Close.method);
}


void BattleResultBondsComponent__CloseBondUpRoot(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *upRoot; // x0

  if ( (byte_4C46799 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C46799 = 1;
  }
  upRoot = this->fields.upRoot;
  if ( !upRoot
    || (UnityEngine_GameObject__SetActive(upRoot, 0, 0), (upRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_1C372B4(upRoot);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)upRoot, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


void BattleResultBondsComponent__CreateRewardEffect(
        BattleResultBondsComponent_o *this,
        AssetData_o *data,
        UISprite_o *targetIcon,
        System_String_o *effectName,
        const MethodInfo *method)
{
  BattleResultBondsComponent_o *v8; // x20
  Il2CppObject *Object_object__51154888; // x21
  BattleResultBondsComponent_o *v10; // x21
  BattleResultBondsComponent_o *v11; // x22
  BattleResultBondsComponent_o *v12; // x22
  BattleResultBondsComponent_o *v13; // x22
  int m_CancellationTokenSource; // w8
  BattleResultBondsComponent_o *v15; // x21
  unsigned int v16; // w22

  v8 = this;
  if ( (byte_4C4678E & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
    sub_1C37058(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (BattleResultBondsComponent_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4678E = 1;
  }
  if ( !data )
    goto LABEL_23;
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              data,
                              effectName,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultBondsComponent_o *)UnityEngine_Object__Instantiate_object_(
                                           Object_object__51154888,
                                           (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( !byte_4C3C921 )
  {
    this = (BattleResultBondsComponent_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  if ( !v12 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v12,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0);
  v13 = this;
  if ( !byte_4C3C926 )
  {
    this = (BattleResultBondsComponent_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v13 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v13,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                                           (UnityEngine_GameObject_o *)v10,
                                           (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
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
        sub_1C372BC(this);
      this = (BattleResultBondsComponent_o *)*((_QWORD *)&v15->fields.parentComp + (int)v16);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0);
      m_CancellationTokenSource = (int)v15->fields.m_CancellationTokenSource;
      if ( (int)++v16 >= m_CancellationTokenSource )
        goto LABEL_21;
    }
LABEL_23:
    sub_1C372B4(this);
  }
LABEL_21:
  this = (BattleResultBondsComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v15,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void BattleResultBondsComponent__DeleteGetJoinSvtData(const MethodInfo *method)
{
  BattleResultBondsComponent_c *v1; // x0

  if ( (byte_4C46783 & 1) == 0 )
  {
    sub_1C37058(&BattleResultBondsComponent_TypeInfo);
    byte_4C46783 = 1;
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

  if ( (byte_4C4678A & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9264/*"NEXT"*/);
    sub_1C37058(&iTween_TypeInfo);
    byte_4C4678A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63309560(gameObject, 0);
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
        sub_1C372BC(BondsIconArray);
      BondsIconArray = *(_DWORD **)&v8[2 * v9 + 8];
      if ( !BondsIconArray )
        break;
      BattleResultBondsIconComponent__FinishUpdateValue((BattleResultBondsIconComponent_o *)BondsIconArray, v6);
      v7 = v8[6];
      if ( (int)++v9 >= v7 )
        goto LABEL_11;
    }
LABEL_16:
    sub_1C372B4(BondsIconArray);
  }
LABEL_11:
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0);
  BondsIconArray = this->fields.myFsm;
  this->fields.bondsCountUp = 0;
  if ( !BondsIconArray )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_9264/*"NEXT"*/, 0);
}


BattleResultBondsIconComponent_array *BattleResultBondsComponent__GetBondsIconArray(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_bondsIconArray; // x19
  System_Collections_Generic_List_object__o *v4; // x20
  System_Collections_Generic_List_object__o *bondsList; // x0
  const MethodInfo *v6; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  System_Object_array *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C46796 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
    sub_1C37058(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
    byte_4C46796 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( this->fields.isMultiDeck )
  {
    p_bondsIconArray = (CGThumbnailListItem_o *)&this->fields.bondsIconArray;
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.bondsIconArray, 0) )
    {
      v4 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v4,
        (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
      bondsList = (System_Collections_Generic_List_object__o *)this->fields.bondsList;
      if ( !bondsList )
        goto LABEL_17;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v12,
        bondsList,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v12,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
      {
        if ( !v12.fields._current )
          sub_1C372B4(0);
        BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                          (BattleResultBondsDeckPerWaveComponent_o *)v12.fields._current,
                                                                          v6);
        if ( !v4 )
          sub_1C372B4(BondsIconArray);
        System_Collections_Generic_List_object___AddRange(
          v4,
          BondsIconArray,
          (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v12,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
      if ( !v4 )
LABEL_17:
        sub_1C372B4(bondsList);
      v8 = System_Collections_Generic_List_object___ToArray(
             v4,
             (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
      p_bondsIconArray->klass = (CGThumbnailListItem_c *)v8;
      sub_1C36FFC(p_bondsIconArray, (int32_t)v8, v9, v10);
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

  if ( (byte_4C46784 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
    sub_1C37058(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46784 = 1;
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
  v4 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.effectUIList, (int32_t)v4, v5, v6);
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
    sub_1C372B4(window);
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
  if ( (byte_4C46785 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46785 = 1;
  }
  this->fields.oldCollections = oldCollects;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.oldCollections,
    (int32_t)oldCollects,
    (int32_t)inRewardInfos,
    (const MethodInfo *)resultAsset);
  this->fields.rewardInfos = inRewardInfos;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.rewardInfos, (int32_t)inRewardInfos, v15, v16);
  this->fields.resultAssetData = resultAsset;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resultAssetData, (int32_t)resultAsset, v17, v18);
  this->fields.getJoinSvtList = getJoinSvts;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.getJoinSvtList, (int32_t)getJoinSvts, v19, v20);
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
  struct BattleResultBondsIconComponent_array *collects; // x8
  const MethodInfo *v14; // x3
  struct BattleResultBondsIconComponent_array *v15; // x8
  const MethodInfo *v16; // x1
  struct BattleResultBondsIconComponent_array *v17; // x8
  const MethodInfo *v18; // x1
  struct BattleResultBondsIconComponent_array *v19; // x8
  struct UISprite_o *bgFrame; // x8
  float v21; // s8
  struct BattleResultBondsIconComponent_array *v22; // x8
  unsigned int v23; // w24
  float v24; // s9
  int v25; // w25
  float v26; // s10
  struct BattleResultBondsIconComponent_array *v27; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x8
  UnityEngine_Object_o *v30; // x20
  const MethodInfo *v31; // [xsp+0h] [xbp-70h]
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  v12 = this;
  if ( (byte_4C46797 & 1) == 0 )
  {
    sub_1C37058(&BattleResultBondsComponent_TypeInfo);
    this = (BattleResultBondsComponent_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46797 = 1;
  }
  if ( targetIndex < cnt )
  {
    do
    {
      collects = v12->fields.collects;
      if ( !collects )
        goto LABEL_49;
      if ( (unsigned int)targetIndex >= LODWORD(collects->max_length) )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)collects->m_Items[targetIndex];
      if ( !this )
        goto LABEL_49;
      BattleResultBondsIconComponent__setServantData((BattleResultBondsIconComponent_o *)this, 0, 0, 0, 0, 0, 0, 0, v31);
      v15 = v12->fields.collects;
      if ( !v15 )
        goto LABEL_49;
      if ( (unsigned int)targetIndex >= LODWORD(v15->max_length) )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v15->m_Items[targetIndex];
      if ( !this )
        goto LABEL_49;
      BattleResultBondsIconComponent__SetBuddyPointInfo((BattleResultBondsIconComponent_o *)this, 0, 0, v14);
      v17 = v12->fields.collects;
      if ( !v17 )
        goto LABEL_49;
      if ( (unsigned int)targetIndex >= LODWORD(v17->max_length) )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v17->m_Items[targetIndex];
      if ( !this )
        goto LABEL_49;
      this = (BattleResultBondsComponent_o *)BattleResultBondsIconComponent__ChangeGauge(
                                               (BattleResultBondsIconComponent_o *)this,
                                               0.0,
                                               v16);
      v19 = v12->fields.collects;
      if ( !v19 )
        goto LABEL_49;
      if ( (unsigned int)targetIndex >= LODWORD(v19->max_length) )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v19->m_Items[targetIndex];
      if ( !this )
        goto LABEL_49;
      BattleResultBondsIconComponent__InitBuddyPointInfo((BattleResultBondsIconComponent_o *)this, v18);
    }
    while ( cnt != ++targetIndex );
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
  v21 = *(float *)&bgFrame->klass;
  if ( !isNoFollower )
  {
    v22 = v12->fields.collects;
    if ( !v22 )
      goto LABEL_49;
    if ( LODWORD(v22->max_length) <= cnt )
LABEL_50:
      sub_1C372BC(this);
    this = (BattleResultBondsComponent_o *)v22->m_Items[cnt];
    if ( !this )
      goto LABEL_49;
    this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  if ( cnt >= 1 )
  {
    v23 = 0;
    v24 = 0.0;
    v25 = 4;
    v26 = (float)(1 - cnt) * 0.5;
    do
    {
      v27 = v12->fields.collects;
      if ( isNoFollower )
        v24 = (float)v25;
      if ( !v27 )
        goto LABEL_49;
      if ( v23 >= LODWORD(v27->max_length) )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v27->m_Items[v23];
      if ( !this )
        goto LABEL_49;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v21 * v26) - v24, 0);
      ++v23;
      v26 = v26 + 1.0;
      v25 -= 2;
    }
    while ( cnt != v23 );
  }
  if ( !battleResult )
    goto LABEL_49;
  buddyPointInfos = battleResult->fields.buddyPointInfos;
  if ( buddyPointInfos && buddyPointInfos->max_length && !isHideBuddyPointResult )
  {
    v30 = (UnityEngine_Object_o *)v12->fields.bgFrame;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v30, 0, 0) )
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
      || (v32.fields.x = 0.0,
          v32.fields.y = 13.0,
          v32.fields.z = 0.0,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v32, 0),
          (this = (BattleResultBondsComponent_o *)v12->fields.window) == 0) )
    {
LABEL_49:
      sub_1C372B4(this);
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
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL4 isMultiDeck; // w8
  struct BattleWindowComponent_o *v13; // x20
  __int64 *v14; // x8
  BattleWindowComponent_EndCall_o *v15; // x21

  if ( (byte_4C46788 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_BattleResultBondsIconComponent___);
    sub_1C37058(&Method_BattleResultBondsComponent_OpenEnd__);
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C37058(&System_Func_BattleResultBondsIconComponent__bool__TypeInfo);
    sub_1C37058(&Method_BattleResultBondsComponent___c__Open_b__53_0__);
    sub_1C37058(&BattleResultBondsComponent___c_TypeInfo);
    sub_1C37058(&StringLiteral_5451/*"END_OPEN"*/);
    sub_1C37058(&StringLiteral_12235/*"SKIP"*/);
    byte_4C46788 = 1;
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
    _9__53_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_BattleResultBondsIconComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__53_0, v7, Method_BattleResultBondsComponent___c__Open_b__53_0__, 0);
    static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Func_BattleResultBondsIconComponent__bool__o *)_9__53_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v9, v10);
  }
  if ( BasicHelper__Any_object__51187876(
         v5,
         (System_Func_T__bool__o *)_9__53_0,
         (const MethodInfo_30D10A4 *)Method_BasicHelper_Any_BattleResultBondsIconComponent___) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      isMultiDeck = this->fields.isMultiDeck;
      this->fields.openBoundsFlg = 0;
      this->fields.colIndex = 0;
      this->fields.bondsCountUp = 1;
      v13 = isMultiDeck ? this->fields.multiDeckWindow : this->fields.window;
      v15 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo);
      BattleWindowComponent_EndCall___ctor(
        v15,
        (Il2CppObject *)this,
        (intptr_t)Method_BattleResultBondsComponent_OpenEnd__,
        0);
      if ( v13 )
      {
        ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))v13->klass->vtable._10_Open.methodPtr)(
          v13,
          v15,
          v13->klass->vtable._10_Open.method);
        gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
        if ( gameObject )
        {
          v14 = &StringLiteral_5451/*"END_OPEN"*/;
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    sub_1C372B4(gameObject);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !gameObject )
    goto LABEL_20;
  v14 = &StringLiteral_12235/*"SKIP"*/;
LABEL_19:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)*v14, 0);
}


void BattleResultBondsComponent__OpenEnd(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 BondsIconArray; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Object_array *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *v17; // x22
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x5
  __int64 v25; // x6
  __int64 v26; // x7
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  Il2CppObject *v29; // x22
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  __int64 v48; // x5
  __int64 v49; // x6
  __int64 v50; // x7
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  Il2CppObject *v53; // x22
  System_Collections_Hashtable_o *v54; // x0
  const MethodInfo *v55; // x1
  const MethodInfo *v56; // x1
  int v57; // w8
  __int64 v58; // x20
  unsigned int v59; // w21
  _QWORD *v60; // x0
  System_Reflection_MethodBase_o *v61; // x20
  System_String_o *CommonSeName; // x0
  struct SePlayer_o *v63; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  __int64 v66; // x0
  int v67; // [xsp+Ch] [xbp-44h] BYREF
  int v68; // [xsp+18h] [xbp-38h] BYREF
  int v69; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C46789 & 1) == 0 )
  {
    sub_1C37058(&Method_BattleResultBondsComponent_OpenEnd__);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&SeManager_TypeInfo);
    sub_1C37058(&float_TypeInfo);
    sub_1C37058(&StringLiteral_19692/*"from"*/);
    sub_1C37058(&StringLiteral_24071/*"time"*/);
    sub_1C37058(&StringLiteral_22438/*"onupdate"*/);
    sub_1C37058(&StringLiteral_15200/*"UpdateValue"*/);
    sub_1C37058(&StringLiteral_24110/*"to"*/);
    sub_1C37058(&StringLiteral_22430/*"oncomplete"*/);
    sub_1C37058(&StringLiteral_6734/*"FinishUpdateValue"*/);
    sub_1C37058(&iTween_TypeInfo);
    byte_4C46789 = 1;
  }
  if ( !this->fields.bondsCountUp )
    return;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  BondsIconArray = sub_1C37100(object___TypeInfo, 10);
  if ( !BondsIconArray )
LABEL_65:
    sub_1C372B4(BondsIconArray);
  v7 = (System_Object_array *)BondsIconArray;
  BondsIconArray = StringLiteral_19692/*"from"*/;
  if ( StringLiteral_19692/*"from"*/ )
  {
    BondsIconArray = sub_1C37194(StringLiteral_19692/*"from"*/, v7->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v8 = StringLiteral_19692/*"from"*/;
  }
  else
  {
    v8 = 0;
  }
  if ( !LODWORD(v7->max_length) )
    goto LABEL_64;
  v7->m_Items[0] = (Il2CppObject *)v8;
  sub_1C36FFC((CGThumbnailListItem_o *)v7->m_Items, v8, v5, v6);
  v69 = 0;
  BondsIconArray = j_il2cpp_value_box_0(float_TypeInfo, &v69, v9, v10, v11, v12, v13, v14);
  v17 = (Il2CppObject *)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = sub_1C37194(BondsIconArray, v7->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
  }
  if ( LODWORD(v7->max_length) <= 1 )
    goto LABEL_64;
  v7->m_Items[1] = v17;
  sub_1C36FFC((CGThumbnailListItem_o *)&v7->m_Items[1], (int32_t)v17, v15, v16);
  BondsIconArray = StringLiteral_24110/*"to"*/;
  if ( StringLiteral_24110/*"to"*/ )
  {
    BondsIconArray = sub_1C37194(StringLiteral_24110/*"to"*/, v7->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v20 = StringLiteral_24110/*"to"*/;
  }
  else
  {
    v20 = 0;
  }
  if ( LODWORD(v7->max_length) <= 2 )
    goto LABEL_64;
  v7->m_Items[2] = (Il2CppObject *)v20;
  sub_1C36FFC((CGThumbnailListItem_o *)&v7->m_Items[2], v20, v18, v19);
  v68 = 1065353216;
  BondsIconArray = j_il2cpp_value_box_0(float_TypeInfo, &v68, v21, v22, v23, v24, v25, v26);
  v29 = (Il2CppObject *)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = sub_1C37194(BondsIconArray, v7->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
  }
  if ( LODWORD(v7->max_length) <= 3 )
    goto LABEL_64;
  v7->m_Items[3] = v29;
  sub_1C36FFC((CGThumbnailListItem_o *)&v7->m_Items[3], (int32_t)v29, v27, v28);
  BondsIconArray = StringLiteral_22438/*"onupdate"*/;
  if ( StringLiteral_22438/*"onupdate"*/ )
  {
    BondsIconArray = sub_1C37194(StringLiteral_22438/*"onupdate"*/, v7->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v32 = StringLiteral_22438/*"onupdate"*/;
  }
  else
  {
    v32 = 0;
  }
  if ( LODWORD(v7->max_length) <= 4 )
    goto LABEL_64;
  v7->m_Items[4] = (Il2CppObject *)v32;
  sub_1C36FFC((CGThumbnailListItem_o *)&v7->m_Items[4], v32, v30, v31);
  BondsIconArray = StringLiteral_15200/*"UpdateValue"*/;
  if ( StringLiteral_15200/*"UpdateValue"*/ )
  {
    BondsIconArray = sub_1C37194(StringLiteral_15200/*"UpdateValue"*/, v7->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v35 = StringLiteral_15200/*"UpdateValue"*/;
  }
  else
  {
    v35 = 0;
  }
  if ( LODWORD(v7->max_length) <= 5 )
    goto LABEL_64;
  v7->m_Items[5] = (Il2CppObject *)v35;
  sub_1C36FFC((CGThumbnailListItem_o *)&v7->m_Items[5], v35, v33, v34);
  BondsIconArray = StringLiteral_22430/*"oncomplete"*/;
  if ( StringLiteral_22430/*"oncomplete"*/ )
  {
    BondsIconArray = sub_1C37194(StringLiteral_22430/*"oncomplete"*/, v7->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v38 = StringLiteral_22430/*"oncomplete"*/;
  }
  else
  {
    v38 = 0;
  }
  if ( LODWORD(v7->max_length) <= 6 )
    goto LABEL_64;
  v7->m_Items[6] = (Il2CppObject *)v38;
  sub_1C36FFC((CGThumbnailListItem_o *)&v7->m_Items[6], v38, v36, v37);
  BondsIconArray = StringLiteral_6734/*"FinishUpdateValue"*/;
  if ( StringLiteral_6734/*"FinishUpdateValue"*/ )
  {
    BondsIconArray = sub_1C37194(StringLiteral_6734/*"FinishUpdateValue"*/, v7->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v41 = StringLiteral_6734/*"FinishUpdateValue"*/;
  }
  else
  {
    v41 = 0;
  }
  if ( LODWORD(v7->max_length) <= 7 )
    goto LABEL_64;
  v7->m_Items[7] = (Il2CppObject *)v41;
  sub_1C36FFC((CGThumbnailListItem_o *)&v7->m_Items[7], v41, v39, v40);
  BondsIconArray = StringLiteral_24071/*"time"*/;
  if ( StringLiteral_24071/*"time"*/ )
  {
    BondsIconArray = sub_1C37194(StringLiteral_24071/*"time"*/, v7->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v44 = StringLiteral_24071/*"time"*/;
  }
  else
  {
    v44 = 0;
  }
  if ( LODWORD(v7->max_length) <= 8 )
    goto LABEL_64;
  v7->m_Items[8] = (Il2CppObject *)v44;
  sub_1C36FFC((CGThumbnailListItem_o *)&v7->m_Items[8], v44, v42, v43);
  v67 = 1072064102;
  BondsIconArray = j_il2cpp_value_box_0(float_TypeInfo, &v67, v45, v46, v47, v48, v49, v50);
  v53 = (Il2CppObject *)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = sub_1C37194(BondsIconArray, v7->obj.klass->_1.element_class);
    if ( !BondsIconArray )
    {
LABEL_66:
      v66 = sub_1C372D8(BondsIconArray);
      sub_1C37180(v66, 0);
    }
  }
  if ( LODWORD(v7->max_length) <= 9 )
    goto LABEL_64;
  v7->m_Items[9] = v53;
  sub_1C36FFC((CGThumbnailListItem_o *)&v7->m_Items[9], (int32_t)v53, v51, v52);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v54 = iTween__Hash(v7, 0);
  iTween__ValueTo(gameObject, v54, 0);
  BondsIconArray = (__int64)BattleResultBondsComponent__GetBondsIconArray(this, v55);
  if ( !BondsIconArray )
    goto LABEL_65;
  v57 = *(_DWORD *)(BondsIconArray + 24);
  v58 = BondsIconArray;
  if ( v57 >= 1 )
  {
    v59 = 0;
    while ( v59 < v57 )
    {
      BondsIconArray = *(_QWORD *)(v58 + 8LL * (int)v59 + 32);
      if ( !BondsIconArray )
        goto LABEL_65;
      BattleResultBondsIconComponent__StartUpdateBuddyPoint((BattleResultBondsIconComponent_o *)BondsIconArray, v56);
      v57 = *(_DWORD *)(v58 + 24);
      if ( (int)++v59 >= v57 )
        goto LABEL_57;
    }
LABEL_64:
    sub_1C372BC(BondsIconArray);
  }
LABEL_57:
  if ( this->fields.updateFlg )
  {
    v60 = Method_BattleResultBondsComponent_OpenEnd__;
    if ( (*((_BYTE *)Method_BattleResultBondsComponent_OpenEnd__ + 83) & 2) != 0 )
      v60 = (_QWORD *)sub_1C37070(Method_BattleResultBondsComponent_OpenEnd__);
    v61 = (System_Reflection_MethodBase_o *)sub_1C3703C(v60, v60[4]);
    if ( !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    CommonSeName = SeManager__GetCommonSeName(15, 0);
    v63 = OverwriteAssetSoundName__PlaySe(v61, CommonSeName, 0, 0);
    this->fields.MeterSePlayer = v63;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.MeterSePlayer, (int32_t)v63, v64, v65);
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
  struct BattleInfoData_o *battle_info; // x23
  __int64 v21; // x8
  __int64 v22; // x26
  struct BattleInfoData_o *v23; // x9
  __int64 maxWave; // x27
  BattleUserServantData_array *userSvt; // x24
  unsigned __int64 v26; // x8
  unsigned int v27; // w9
  signed __int64 v28; // x29
  System_Collections_Generic_List_object__o *v29; // x20
  const MethodInfo *v30; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  System_Object_array *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_4C46786 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
    sub_1C37058(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
    byte_4C46786 = 1;
  }
  memset(&v36, 0, sizeof(v36));
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
  v21 = 240;
  if ( ((unsigned __int8)questphase_ent & 1) != 0 )
    v21 = 248;
  v22 = *(__int64 *)((char *)&battle_info->klass + v21);
  if ( !v22 )
    goto LABEL_25;
  v23 = battleData->fields.battle_info;
  if ( !v23 )
    goto LABEL_25;
  maxWave = *(_QWORD *)(v22 + 24);
  if ( (int)maxWave >= 1 )
  {
    userSvt = v23->fields.userSvt;
    v26 = 0;
    v27 = *(_QWORD *)(v22 + 24);
    do
    {
      if ( v26 >= v27 )
        sub_1C372BC(questphase_ent);
      v28 = v26 + 1;
      BattleResultBondsComponent__SetResultDataLocal(
        this,
        *(DeckData_o **)(v22 + 32 + 8 * v26),
        oldCollects,
        followerType,
        userSvt,
        battleResult,
        isHideBuddyPointResult,
        battleData,
        v26 + 1,
        maxWave,
        v35);
      v27 = *(_DWORD *)(v22 + 24);
      v26 = v28;
    }
    while ( v28 < (int)v27 );
  }
  v29 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  questphase_ent = (QuestPhaseEntity_o *)this->fields.bondsList;
  if ( !questphase_ent )
    goto LABEL_25;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)questphase_ent,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
  {
    if ( !v36.fields._current )
      sub_1C372B4(0);
    BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                      (BattleResultBondsDeckPerWaveComponent_o *)v36.fields._current,
                                                                      v30);
    if ( !v29 )
      sub_1C372B4(BondsIconArray);
    System_Collections_Generic_List_object___AddRange(
      v29,
      BondsIconArray,
      (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
  if ( !v29 )
LABEL_25:
    sub_1C372B4(questphase_ent);
  v32 = System_Collections_Generic_List_object___ToArray(
          v29,
          (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
  this->fields.bondsIconArray = (struct BattleResultBondsIconComponent_array *)v32;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bondsIconArray, (int32_t)v32, v33, v34);
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
  UnityEngine_Object_o *v18; // x20
  Il2CppObject *v19; // x25
  Il2CppObject *v20; // x26
  Il2CppObject *multiBondsPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  BattleResultBondsDeckPerWaveComponent_o *Object_object; // x19
  const MethodInfo *v24; // x6
  System_Collections_Generic_IEnumerable_TSource__o *rewardInfos; // x21
  BattleResultBondsComponent___c_c *v26; // x0
  System_Func_object__bool__o *_9__49_0; // x20
  Il2CppObject *v28; // x22
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_List_TSource__o *v33; // x0
  System_Collections_Generic_List_object__o *v34; // x21
  BattleResultBondsComponent_c *v35; // x0
  BattleResultBondsComponent_c *v36; // x0
  Il2CppObject *String_71225564; // x20
  System_Collections_Generic_IEnumerable_T__o *v38; // x0
  BattleResultBondsComponent_c *v39; // x0
  System_String_o *GET_NEW_SVT_KEY; // x20
  System_Object_array *v41; // x21
  System_String_o *v42; // x0
  BattleResultBondsComponent___c_c *v43; // x0
  System_Collections_Generic_IEnumerable_TSource__o *getJoinSvts; // x21
  System_Func_object__bool__o *_9__49_1; // x20
  Il2CppObject *v46; // x22
  struct BattleResultBondsComponent___c_StaticFields *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_Collections_Generic_List_TSource__o *v51; // x0
  System_Collections_Generic_List_object__o *v52; // x21
  BattleResultBondsComponent_c *v53; // x0
  BattleResultBondsComponent_c *v54; // x0
  Il2CppObject *v55; // x20
  System_Collections_Generic_IEnumerable_T__o *v56; // x0
  BattleResultBondsComponent_c *v57; // x0
  System_String_o *GET_EXIST_SVT_KEY; // x20
  System_Object_array *v59; // x21
  System_String_o *v60; // x0
  struct BattleDeckServantData_array *svts; // x9
  int max_length; // w8
  unsigned int v63; // w22
  int32_t v64; // w27
  BattleDeckServantData_o *v65; // x21
  struct BattleDeckServantData_array *v66; // x24
  Il2CppObject *v67; // x28
  int64_t userSvtId; // x2
  BattleResultBondsComponent_o *SvtId; // x0
  const MethodInfo *v70; // x3
  ServantEntity_o *v71; // x27
  int32_t v72; // w26
  BattleResultBondsComponent_o *v73; // x19
  const MethodInfo *v74; // x1
  int v75; // w8
  int32_t v76; // w25
  unsigned int v77; // w29
  BattleUserServantData_o *v78; // x20
  __int128 v79; // q0
  const MethodInfo *v80; // x5
  BattleResultComponent_resultData_o *v81; // x29
  int32_t afterLimitCount; // w21
  const MethodInfo *v83; // x1
  UnityEngine_Object_o *v84; // x21
  BattleResultBondsIconComponent_o *v85; // x20
  int32_t IconLimitCount; // w0
  int afterIconLimitCount; // w8
  System_Object_array *buddyPointInfos; // x29
  BattleBuddyPointInfo_o *v91; // x20
  System_Func_object__bool__o *v92; // x20
  BattleResultBondsIconComponent_o *v93; // x28
  struct BattleResultBondsIconComponent_array *v94; // x8
  const MethodInfo *v95; // x3
  const MethodInfo *v96; // x2
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  bool v98; // w20
  const MethodInfo *v99; // x2
  const MethodInfo *v100; // x1
  bool updateFlg; // w20
  const MethodInfo *v102; // x1
  struct BattleResultBondsIconComponent_array *v103; // x8
  const MethodInfo *v104; // x2
  const MethodInfo *v105; // x3
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  __int64 v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  __int64 v111; // x8
  const MethodInfo *v112; // [xsp+0h] [xbp-130h]
  int32_t cnt; // [xsp+1Ch] [xbp-114h]
  ServantLimitImageMaster_o *svtLimitImageMaster; // [xsp+20h] [xbp-110h]
  UserServantCollectionMaster_o *MasterData_object; // [xsp+30h] [xbp-100h]
  Il2CppObject *v117; // [xsp+38h] [xbp-F8h]
  Il2CppObject *v118; // [xsp+40h] [xbp-F0h]
  BattleResultBondsDeckPerWaveComponent_o *v120; // [xsp+50h] [xbp-E0h]
  int32_t Type; // [xsp+5Ch] [xbp-D4h]
  BattleData_o *battleDataa; // [xsp+60h] [xbp-D0h]
  UserServantCollectionEntity_o *userSvtCol; // [xsp+70h] [xbp-C0h]
  int32_t v125; // [xsp+7Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v126; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v127; // [xsp+A0h] [xbp-90h]
  Il2CppObject *entity; // [xsp+C8h] [xbp-68h] BYREF

  if ( (byte_4C46787 & 1) == 0 )
  {
    sub_1C37058(&Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    sub_1C37058(&Method_BasicHelper_Find_BattleBuddyPointInfo___);
    sub_1C37058(&BattleResultBondsComponent_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_GetSvts___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_GetSvts___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
    sub_1C37058(&System_Func_GetSvts__bool__TypeInfo);
    sub_1C37058(&System_Func_BattleBuddyPointInfo__bool__TypeInfo);
    sub_1C37058(&System_Func_QuestRewardInfo__bool__TypeInfo);
    sub_1C37058(&Method_JsonManager_DeserializeArray_GetSvts___);
    sub_1C37058(&Method_JsonManager_DeserializeArray_QuestRewardInfo___);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_GetSvts__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GetSvts__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_GetSvts__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__);
    sub_1C37058(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__);
    sub_1C37058(&Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__);
    sub_1C37058(&BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo);
    sub_1C37058(&BattleResultBondsComponent___c_TypeInfo);
    byte_4C46787 = 1;
  }
  entity = 0;
  Type = Follower__getType(followerType, 0);
  if ( Type )
    v16 = 5;
  else
    v16 = 6;
  cnt = v16;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  MasterData_object = (UserServantCollectionMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  v18 = (UnityEngine_Object_o *)battleData;
  v19 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  v20 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
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
                                                                 (const MethodInfo_30D08D0 *)Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    if ( this->fields.isMultiDeck )
    {
      v18 = (UnityEngine_Object_o *)battleData;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      svtLimitImageMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    }
    else
    {
      svtLimitImageMaster = 0;
      v18 = (UnityEngine_Object_o *)battleData;
    }
  }
  else
  {
    Object_object = 0;
    svtLimitImageMaster = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(v18, 0, 0);
  v120 = Object_object;
  if ( (Instance & 1) != 0 )
  {
    if ( !v18 )
      goto LABEL_160;
    Instance = BattleData__IsWarBoard((BattleData_o *)v18, 0);
    this->fields.isWarboard = Instance & 1;
    if ( (Instance & 1) != 0 )
    {
      if ( !battleResult )
        goto LABEL_160;
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
        _9__49_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_QuestRewardInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__49_0,
          v28,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__,
          0);
        static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
        static_fields->__9__49_0 = (struct System_Func_QuestRewardInfo__bool__o *)_9__49_0;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v30, v31);
      }
      v32 = System_Linq_Enumerable__Where_object_(
              rewardInfos,
              (System_Func_TSource__bool__o *)_9__49_0,
              (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
      v33 = System_Linq_Enumerable__ToList_object_(
              v32,
              (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
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
            String_71225564 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71225564(
                                                v36->static_fields->GET_NEW_SVT_KEY,
                                                0);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v38 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_object_(
                                                                   String_71225564,
                                                                   (const MethodInfo_31570C4 *)Method_JsonManager_DeserializeArray_QuestRewardInfo___);
            System_Collections_Generic_List_object___AddRange(
              v34,
              v38,
              (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
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
                  (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
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
        _9__49_1 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_GetSvts__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__49_1,
          v46,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__,
          0);
        v47 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        v47->__9__49_1 = (struct System_Func_GetSvts__bool__o *)_9__49_1;
        sub_1C36FFC((CGThumbnailListItem_o *)&v47->__9__49_1, (int32_t)_9__49_1, v48, v49);
      }
      v50 = System_Linq_Enumerable__Where_object_(
              getJoinSvts,
              (System_Func_TSource__bool__o *)_9__49_1,
              (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_GetSvts___);
      v51 = System_Linq_Enumerable__ToList_object_(
              v50,
              (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_GetSvts___);
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
            v55 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71225564(v54->static_fields->GET_EXIST_SVT_KEY, 0);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v56 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_object_(
                                                                   v55,
                                                                   (const MethodInfo_31570C4 *)Method_JsonManager_DeserializeArray_GetSvts___);
            System_Collections_Generic_List_object___AddRange(
              v52,
              v56,
              (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_GetSvts__AddRange__);
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
                  (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_GetSvts__ToArray__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v60 = JsonManager__toJson(&v59->obj, 0, 0, 0);
          UnityEngine_PlayerPrefs__SetString(GET_EXIST_SVT_KEY, v60, 0);
        }
      }
      UnityEngine_PlayerPrefs__Save(0);
      v18 = (UnityEngine_Object_o *)battleData;
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
    v63 = 0;
    v64 = 0;
    v117 = v20;
    v118 = v19;
    battleDataa = (BattleData_o *)v18;
    while ( 1 )
    {
      if ( v63 >= max_length )
LABEL_161:
        sub_1C372BC(Instance);
      v65 = svts->m_Items[v63];
      v66 = svts;
      v67 = (Il2CppObject *)sub_1C372A4(BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo);
      System_Object___ctor(v67, 0);
      if ( !v65 )
        goto LABEL_160;
      if ( !v67 )
        goto LABEL_160;
      userSvtId = v65->fields.userSvtId;
      v67[1].klass = (Il2CppClass *)userSvtId;
      if ( !v19 )
        goto LABEL_160;
      Instance = DataMasterBase_object__object__long___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                   &entity,
                   userSvtId,
                   (const MethodInfo_33A3648 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( (Instance & 1) != 0 )
        break;
      if ( !v18 )
        goto LABEL_160;
      Instance = BattleData__IsInterruptionQuest((BattleData_o *)v18, 0);
      if ( (Instance & 1) == 0 )
        goto LABEL_135;
      if ( this->fields.isMultiDeck )
      {
        if ( !Object_object )
          goto LABEL_160;
        v84 = v18;
        Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, v83);
        v85 = (BattleResultBondsIconComponent_o *)Instance;
        if ( !Instance )
          goto LABEL_160;
      }
      else
      {
        v103 = this->fields.collects;
        if ( !v103 )
          goto LABEL_160;
        if ( (unsigned int)v64 >= LODWORD(v103->max_length) )
          goto LABEL_161;
        v84 = v18;
        v85 = v103->m_Items[v64];
        if ( !v85 )
          goto LABEL_160;
      }
      BattleResultBondsIconComponent__setServantData(v85, 0, 0, 0, 0, 0, 0, 0, v112);
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v85, 0);
      if ( !Instance )
        goto LABEL_160;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      ++v64;
      svts = v66;
      v18 = v84;
LABEL_141:
      max_length = svts->max_length;
      if ( (int)++v63 >= max_length )
        goto LABEL_144;
    }
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_160;
    SvtId = (BattleResultBondsComponent_o *)UserServantEntity__getSvtId((UserServantEntity_o *)entity, 0);
    Instance = (int64_t)BattleResultBondsComponent__getServantCollection(SvtId, oldCollects, (int32_t)SvtId, v70);
    userSvtCol = (UserServantCollectionEntity_o *)Instance;
    if ( !entity )
      goto LABEL_160;
    v125 = v64;
    Instance = UserServantEntity__getSvtId((UserServantEntity_o *)entity, 0);
    if ( !v20 )
      goto LABEL_160;
    Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)v20,
                          Instance,
                          (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !entity )
      goto LABEL_160;
    v71 = (ServantEntity_o *)Instance;
    Instance = UserServantEntity__getIconLimitCount((UserServantEntity_o *)entity, 0, 0);
    if ( !entity )
      goto LABEL_160;
    v72 = Instance;
    v73 = this;
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
        *(_OWORD *)&v127.fields.currentCryptoKey = *(_OWORD *)&v78->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v127.fields.fakeValue = v79;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v126 = v127;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v126, 0);
        if ( (Il2CppClass *)Instance == v67[1].klass )
          break;
        v75 = usrSvts->max_length;
        if ( (int)++v77 >= v75 )
          goto LABEL_89;
      }
      v81 = battleResult;
      if ( v73->fields.isMultiDeck )
        BattleResultBondsComponent__UpdateAfterLimitCount(
          (BattleResultBondsComponent_o *)Instance,
          battleDataa,
          v78,
          v65,
          svtLimitImageMaster,
          v80);
      IconLimitCount = UserServantEntity__getIconLimitCount((UserServantEntity_o *)v78, 0, 0);
      afterIconLimitCount = v78->fields.afterIconLimitCount;
      if ( afterIconLimitCount < 0 || IconLimitCount == afterIconLimitCount )
        v72 = IconLimitCount;
      else
        v72 = v78->fields.afterIconLimitCount;
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
      v91 = 0;
      if ( buddyPointInfos->max_length && !isHideBuddyPointResult )
      {
        v92 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_BattleBuddyPointInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v92,
          v67,
          Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__,
          0);
        Instance = (int64_t)BasicHelper__Find_object_(
                              buddyPointInfos,
                              (System_Func_T__bool__o *)v92,
                              (const MethodInfo_30D1BC4 *)Method_BasicHelper_Find_BattleBuddyPointInfo___);
        v91 = (BattleBuddyPointInfo_o *)Instance;
      }
    }
    else
    {
      v91 = 0;
    }
    this = v73;
    if ( v73->fields.isMultiDeck )
    {
      Object_object = v120;
      if ( !v120 )
        goto LABEL_160;
      Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(v120, v74);
      v93 = (BattleResultBondsIconComponent_o *)Instance;
      if ( !Instance )
        goto LABEL_160;
    }
    else
    {
      v94 = v73->fields.collects;
      Object_object = v120;
      if ( !v94 )
        goto LABEL_160;
      if ( (unsigned int)v125 >= LODWORD(v94->max_length) )
        goto LABEL_161;
      v93 = v94->m_Items[v125];
      if ( !v93 )
        goto LABEL_160;
    }
    BattleResultBondsIconComponent__setServantData(
      v93,
      userSvtCol,
      (UserServantEntity_o *)entity,
      v72,
      v76,
      this->fields.baseFriendshipExp,
      Type == 0,
      afterLimitCount,
      v112);
    BattleResultBondsIconComponent__SetBuddyPointInfo(v93, v91, battleResult->fields.eventId, v95);
    if ( !v71 )
      goto LABEL_160;
    v20 = v117;
    v19 = v118;
    if ( !ServantEntity__checkIsHeroineSvt(v71, 0) )
      goto LABEL_128;
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_160;
    if ( !UserServantEntity__IsAddFriendShipHeroine((UserServantEntity_o *)entity, 0) )
    {
      updateFlg = this->fields.updateFlg;
      this->fields.updateFlg = updateFlg | BattleResultBondsIconComponent__setNextServantData(v93, userSvtCol, v96);
      v93->fields.isNoFriendship = 1;
    }
    else
    {
LABEL_128:
      Instance = (int64_t)MasterData_object;
      if ( !MasterData_object )
        goto LABEL_160;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                           MasterData_object,
                           v93->fields.userId,
                           v93->fields.svtId,
                           0);
      v98 = this->fields.updateFlg;
      this->fields.updateFlg = v98 | BattleResultBondsIconComponent__setNextServantData(v93, EntityDefinitely, v99);
    }
    BattleResultBondsIconComponent__ChangeGauge(v93, 0.0, v100);
    BattleResultBondsIconComponent__InitBuddyPointInfo(v93, v102);
    v18 = (UnityEngine_Object_o *)battleDataa;
    if ( this->fields.isMultiDeck )
    {
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v93, 0);
      if ( !Instance )
        goto LABEL_160;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    }
    v64 = v125 + 1;
LABEL_135:
    svts = v66;
    goto LABEL_141;
  }
  v64 = 0;
LABEL_144:
  if ( !this->fields.isMultiDeck )
  {
    BattleResultBondsComponent__NormalBondsInit(this, v64, cnt, Type == 0, battleResult, isHideBuddyPointResult, v24);
    return;
  }
  if ( !v18 )
    goto LABEL_160;
  Instance = (int64_t)v18[4].klass;
  if ( !Instance )
    goto LABEL_160;
  Instance = QuestPhaseEntity__IsWaveSetupSwitchParty((QuestPhaseEntity_o *)Instance, 0);
  if ( !Object_object )
    goto LABEL_160;
  if ( (Instance & 1) != 0 )
    BattleResultBondsDeckPerWaveComponent__SetPartyName(Object_object, currentWave, v104);
  else
    BattleResultBondsDeckPerWaveComponent__SetWaveCount(Object_object, currentWave, maxWave, v105);
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
    || (v108 = *(_QWORD *)(Instance + 16),
        v109 = Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__,
        ++*(_DWORD *)(Instance + 28),
        !v108) )
  {
LABEL_160:
    sub_1C372B4(Instance);
  }
  v110 = *(int *)(Instance + 24);
  if ( (unsigned int)v110 >= *(_DWORD *)(v108 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)Object_object,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
  }
  else
  {
    v111 = v108 + 8 * v110;
    *(_DWORD *)(Instance + 24) = v110 + 1;
    *(_QWORD *)(v111 + 32) = Object_object;
    sub_1C36FFC((CGThumbnailListItem_o *)(v111 + 32), (int32_t)Object_object, v106, v107);
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
        sub_1C372BC(BondsIconArray);
      BondsIconArray = (BattleResultBondsIconComponent_array *)v6->m_Items[v7];
      if ( !BondsIconArray )
        break;
      BattleResultBondsIconComponent__FinishBuddyPointInfoUpdate((BattleResultBondsIconComponent_o *)BondsIconArray, v4);
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_7;
    }
LABEL_9:
    sub_1C372B4(BondsIconArray);
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

  if ( (byte_4C46798 & 1) == 0 )
  {
    sub_1C37058(&ImageLimitCount_TypeInfo);
    this = (BattleResultBondsComponent_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C46798 = 1;
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
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v26, 0);
  this = (BattleResultBondsComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                           userSvtData->fields.limitCount,
                                           0);
  if ( !svtLimitImageMaster )
LABEL_26:
    sub_1C372B4(this);
  if ( ServantLimitImageMaster__IsServantLimitCountSeal(svtLimitImageMaster, v15, (int32_t)this, 0) )
  {
    v17 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v27.fields.currentCryptoKey = v17;
    *(_QWORD *)&v27.fields.fakeValue = v16;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v27, 0);
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
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v28, 0);
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
        sub_1C372BC(BondsIconArray);
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
    sub_1C372B4(BondsIconArray);
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
    sub_1C372BC(this);
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
    sub_1C372B4(this);
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
  UnityEngine_GameObject_o *v16; // x20
  Il2CppObject *ComponentInChildren_object; // x23
  BattleResultBondsComponent_c *v18; // x0
  Il2CppObject *v19; // x25
  bool v20; // w0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x4
  UISprite_o *v24; // x0
  int32_t v25; // w1
  UnityEngine_Transform_o *transform; // x21
  float v27; // s8
  float y; // s9
  float v29; // s0
  float v30; // s1
  intptr_t m_CachedPtr; // x8
  _QWORD *v32; // x9
  __int64 klass_low; // x10
  intptr_t v34; // x8
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C4678D & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&BattleResultBondsComponent_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_17267/*"bit_reward_shine02"*/);
    byte_4C4678D = 1;
  }
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             this->fields.confPrefab,
             this->fields.confRoot,
             0,
             0);
  if ( !Object )
    goto LABEL_42;
  v16 = Object;
  Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Object, 0);
  if ( !Object )
    goto LABEL_42;
  v35.fields.y = -112.0 - posY;
  v35.fields.x = 0.0;
  v35.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v35, 0);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 v16,
                                 (const MethodInfo_313F43C *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
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
      v18 = BattleResultBondsComponent_TypeInfo;
      if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
        v18 = BattleResultBondsComponent_TypeInfo;
      }
      UILabel__SetCondensedScale(
        (UILabel_o *)ComponentInChildren_object,
        v18->static_fields->CONF_LABEL_MAX_WIDTH - 36,
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
  v19 = UnityEngine_GameObject__GetComponentInChildren_object_(
          v16,
          (const MethodInfo_313F43C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v20 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0, 0);
  if ( (iconImageId & 0x80000000) == 0 && v20 )
  {
    if ( type == 18 )
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v25 = 9;
      v24 = (UISprite_o *)v19;
    }
    else
    {
      if ( type != 2 )
      {
LABEL_31:
        BattleResultBondsComponent__CreateRewardEffect(
          this,
          this->fields.resultAssetData,
          (UISprite_o *)v19,
          (System_String_o *)StringLiteral_17267/*"bit_reward_shine02"*/,
          v23);
        if ( ComponentInChildren_object )
        {
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ComponentInChildren_object, 0);
          Object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)ComponentInChildren_object,
                                                 0);
          if ( Object )
          {
            LODWORD(v27) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Object, 0);
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
                v37 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Object, 0);
                if ( transform )
                {
                  v29 = v27 + 36.0;
                  v30 = y;
                  UnityEngine_Transform__set_localPosition(transform, v37, 0);
                  goto LABEL_37;
                }
              }
            }
          }
        }
LABEL_42:
        sub_1C372B4(Object);
      }
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v24 = (UISprite_o *)v19;
      v25 = iconImageId;
      if ( isCoin )
      {
        AtlasManager__SetCoin((UISprite_o *)v19, iconImageId, 0);
        goto LABEL_31;
      }
    }
    AtlasManager__SetItem(v24, v25, 0);
    goto LABEL_31;
  }
LABEL_37:
  Object = (UnityEngine_GameObject_o *)this->fields.conflist;
  if ( !Object )
    goto LABEL_42;
  m_CachedPtr = Object->fields.m_CachedPtr;
  v32 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(Object[1].klass);
  if ( !m_CachedPtr )
    goto LABEL_42;
  klass_low = SLODWORD(Object[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Object,
      (Il2CppObject *)v16,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = m_CachedPtr + 8 * klass_low;
    LODWORD(Object[1].klass) = klass_low + 1;
    *(_QWORD *)(v34 + 32) = v16;
    sub_1C36FFC((CGThumbnailListItem_o *)(v34 + 32), (int32_t)v16, v21, v22);
  }
}


void BattleResultBondsComponent__checkBondsUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x22
  System_Collections_Generic_List_object__o *conflist; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t colIndex; // w8
  __int64 v12; // x9
  int32_t v13; // w10
  __int64 v14; // x11
  __int64 *v15; // x8
  __int64 v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 *v19; // x21
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_GameObject__o *v21; // x8
  int32_t size; // w2
  int v23; // w9
  UnityEngine_Object_o *levelUpSimpleAnim; // x22
  System_Collections_Generic_List_object__c *klass; // x8
  System_Collections_Generic_List_object__o *v26; // x22
  __int64 v27; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v29; // x0
  UnityEngine_Object_o *levelUpAnim; // x22
  int32_t v31; // w2
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
  const MethodInfo *v51; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C4678B & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SimpleAnimation_State_TypeInfo);
    sub_1C37058(&BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo);
    sub_1C37058(&Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__);
    sub_1C37058(&BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo);
    sub_1C37058(&StringLiteral_17251/*"bit_result_levelup01"*/);
    sub_1C37058(&StringLiteral_3497/*"CLOSE"*/);
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    sub_1C37058(&StringLiteral_3500/*"CLOSE_BOND_UP_ROOT"*/);
    byte_4C4678B = 1;
  }
  memset(&v53, 0, sizeof(v53));
  v3 = sub_1C372A4(BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_68;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v5, v6);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v7);
  *(_QWORD *)(v3 + 24) = BondsIconArray;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)BondsIconArray, v9, v10);
  colIndex = this->fields.colIndex;
  v12 = *(_QWORD *)(v3 + 24);
  *(_DWORD *)(v3 + 32) = colIndex;
  if ( !v12 )
    goto LABEL_68;
  v13 = *(_DWORD *)(v12 + 24);
  if ( colIndex >= v13 )
    goto LABEL_12;
  do
  {
    if ( colIndex >= (unsigned int)v13 )
    {
      this->fields.colIndex = colIndex;
      sub_1C372BC(conflist);
    }
    v14 = *(_QWORD *)(v12 + 8LL * colIndex + 32);
    if ( !v14 )
    {
      this->fields.colIndex = colIndex;
      sub_1C372B4(conflist);
    }
    if ( *(_BYTE *)(v14 + 128) && *(_DWORD *)(v14 + 176) != *(_DWORD *)(v14 + 184) )
    {
      this->fields.colIndex = colIndex;
      v16 = sub_1C372A4(BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v16, 0);
      if ( !v16 )
        goto LABEL_68;
      *(_QWORD *)(v16 + 24) = v3;
      v19 = (__int64 *)(v16 + 24);
      sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 24), v3, v17, v18);
      conflist = (System_Collections_Generic_List_object__o *)this->fields.conflist;
      if ( !conflist )
        goto LABEL_68;
      if ( conflist->fields._size >= 1 )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v52,
          conflist,
          (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
        v53 = v52;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v53,
                  (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
        {
          current = v53.fields._current;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71266752((UnityEngine_Object_o *)current, 0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v53,
          (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
        v21 = this->fields.conflist;
        if ( !v21 )
          goto LABEL_68;
        size = v21->fields._size;
        v23 = v21->fields._version + 1;
        v21->fields._size = 0;
        v21->fields._version = v23;
        if ( size >= 1 )
          System_Array__Clear((System_Array_o *)v21->fields._items, 0, size, 0);
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
                                                                  (System_String_o *)StringLiteral_17251/*"bit_result_levelup01"*/,
                                                                  0);
        if ( !conflist )
          goto LABEL_68;
        klass = conflist->klass;
        v26 = conflist;
        v27 = *(unsigned __int16 *)&conflist->klass->_2.rank;
        if ( *(_WORD *)&conflist->klass->_2.rank )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v27;
            p_offset += 2;
            if ( !v27 )
              goto LABEL_41;
          }
          v29 = (__int64)(&klass->vtable._4_unknown + *(_DWORD *)p_offset);
        }
        else
        {
LABEL_41:
          v29 = sub_1C87870(conflist, SimpleAnimation_State_TypeInfo, 4);
        }
        (*(void (__fastcall **)(System_Collections_Generic_List_object__o *, _QWORD, float))v29)(
          v26,
          *(_QWORD *)(v29 + 8),
          0.0);
        conflist = (System_Collections_Generic_List_object__o *)this->fields.levelUpSimpleAnim;
        if ( !conflist )
          goto LABEL_68;
        conflist = (System_Collections_Generic_List_object__o *)SimpleAnimation__Play_66507412(
                                                                  (SimpleAnimation_o *)conflist,
                                                                  (System_String_o *)StringLiteral_17251/*"bit_result_levelup01"*/,
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
                                                                    (System_String_o *)StringLiteral_17251/*"bit_result_levelup01"*/,
                                                                    0);
          if ( !conflist )
            goto LABEL_68;
          UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)conflist, 0.0, 0);
          conflist = (System_Collections_Generic_List_object__o *)this->fields.levelUpAnim;
          if ( !conflist )
            goto LABEL_68;
          conflist = (System_Collections_Generic_List_object__o *)UnityEngine_Animation__Play_71012036(
                                                                    (UnityEngine_Animation_o *)conflist,
                                                                    (System_String_o *)StringLiteral_17251/*"bit_result_levelup01"*/,
                                                                    0);
        }
      }
      v33 = *v19;
      if ( *v19 )
      {
        v34 = *(_QWORD *)(v33 + 24);
        if ( v34 )
        {
          v35 = *(int *)(v33 + 32);
          if ( (unsigned int)v35 >= *(_DWORD *)(v34 + 24) )
            sub_1C372BC(conflist);
          v36 = *(struct BattleResultBondsIconComponent_o **)(v34 + 8 * v35 + 32);
          this->fields.openCollect = v36;
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.openCollect, (int32_t)v36, v31, v32);
          figureMoveRoot = (UnityEngine_Object_o *)this->fields.figureMoveRoot;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(figureMoveRoot, 0, 0) )
          {
            conflist = (System_Collections_Generic_List_object__o *)this->fields.figureMoveRoot;
            if ( !conflist )
              goto LABEL_68;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)conflist, 0);
            *(_QWORD *)(v16 + 16) = gameObject;
            v39 = (UnityEngine_GameObject_o **)(v16 + 16);
            sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 16), (int32_t)gameObject, v40, v41);
            conflist = *(System_Collections_Generic_List_object__o **)(v16 + 16);
            if ( !conflist )
              goto LABEL_68;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)conflist, 0, 0);
          }
          else
          {
            conflist = (System_Collections_Generic_List_object__o *)this->fields.figureRoot;
            if ( !conflist )
              goto LABEL_68;
            v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)conflist, 0);
            *(_QWORD *)(v16 + 16) = v42;
            v39 = (UnityEngine_GameObject_o **)(v16 + 16);
            sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 16), (int32_t)v42, v43, v44);
          }
          openCollect = this->fields.openCollect;
          if ( openCollect )
          {
            svtId = openCollect->fields.svtId;
            svtLimit = openCollect->fields.svtLimit;
            bondsFigure = this->fields.bondsFigure;
            v49 = *v39;
            v50 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            System_Action___ctor(
              v50,
              (Il2CppObject *)v16,
              Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__,
              0);
            if ( bondsFigure )
            {
              BattleResultBondsFigureComponent__SetupFigure(bondsFigure, v49, svtId, svtLimit, 7, 0, 51, v50, v51);
              return;
            }
          }
        }
      }
LABEL_68:
      sub_1C372B4(conflist);
    }
    *(_DWORD *)(v3 + 32) = ++colIndex;
  }
  while ( colIndex < v13 );
  this->fields.colIndex = colIndex - 1;
LABEL_12:
  conflist = (System_Collections_Generic_List_object__o *)this->fields.myFsm;
  if ( !this->fields.openBoundsFlg )
  {
    if ( conflist )
    {
      v15 = &StringLiteral_3497/*"CLOSE"*/;
      goto LABEL_27;
    }
    goto LABEL_68;
  }
  if ( !conflist )
    goto LABEL_68;
  if ( this->fields.isMultiDeck )
    v15 = &StringLiteral_3500/*"CLOSE_BOND_UP_ROOT"*/;
  else
    v15 = &StringLiteral_5456/*"END_PROC"*/;
LABEL_27:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)conflist, (System_String_o *)*v15, 0);
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

  if ( (byte_4C46791 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_BattleResultBondsComponent__checkShow_b__67_0__);
    sub_1C37058(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_4C46791 = 1;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
        v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(v6, (Il2CppObject *)this, Method_BattleResultBondsComponent__checkShow_b__67_0__, 0);
        if ( Instance )
        {
          SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v6, 0);
          return;
        }
        goto LABEL_23;
      }
      parentComp = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
    sub_1C372B4(parentComp);
  }
  BattleResultComponent__showServantRewardAction((BattleResultComponent_o *)parentComp, 0, 1, v10);
}


void BattleResultBondsComponent__closeBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  void *effectUIList; // x0
  int32_t v4; // w20
  int32_t v5; // w2
  int v6; // w8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct BattleResultComponent_o *parentComp; // x8
  const MethodInfo *v10; // x1
  struct BattleWindowComponent_o *confwindow; // x20
  BattleWindowComponent_EndCall_o *v12; // x21

  if ( (byte_4C46792 & 1) == 0 )
  {
    sub_1C37058(&Method_BattleResultBondsComponent_closeBondUp__);
    sub_1C37058(&Method_BattleResultBondsComponent_endCloseBondUp__);
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_UIUnityRenderer__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
    byte_4C46792 = 1;
  }
  UnityEngine_Time__set_timeScale(this->fields.tempSaveTimeScale, 0);
  effectUIList = this->fields.effectUIList;
  if ( !effectUIList )
    goto LABEL_19;
  if ( *((int *)effectUIList + 6) >= 1 )
  {
    v4 = 0;
    do
    {
      effectUIList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)effectUIList,
                       v4,
                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
      if ( !effectUIList )
        goto LABEL_19;
      effectUIList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectUIList, 0);
      if ( !effectUIList )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectUIList, 0, 0);
      effectUIList = this->fields.effectUIList;
      if ( !effectUIList )
        goto LABEL_19;
      v5 = *((_DWORD *)effectUIList + 6);
      ++v4;
    }
    while ( v4 < v5 );
    v6 = *((_DWORD *)effectUIList + 7) + 1;
    *((_DWORD *)effectUIList + 6) = 0;
    *((_DWORD *)effectUIList + 7) = v6;
    if ( v5 >= 1 )
      System_Array__Clear(*((System_Array_o **)effectUIList + 2), 0, v5, 0);
  }
  v7 = Method_BattleResultBondsComponent_closeBondUp__;
  if ( (*((_BYTE *)Method_BattleResultBondsComponent_closeBondUp__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C37070(Method_BattleResultBondsComponent_closeBondUp__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C3703C(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (effectUIList = parentComp->fields.obj_fronttouch) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectUIList, 0, 0),
        (effectUIList = this->fields.bondsFigure) == 0)
    || (BattleResultBondsFigureComponent__DestroyFigure((BattleResultBondsFigureComponent_o *)effectUIList, v10),
        confwindow = this->fields.confwindow,
        v12 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v12,
          (Il2CppObject *)this,
          Method_BattleResultBondsComponent_endCloseBondUp__,
          0),
        !confwindow) )
  {
LABEL_19:
    sub_1C372B4(effectUIList);
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
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  ServantFaceIconComponent_o *v8; // x20
  int v9; // w21
  int v10; // w22
  __int64 v11; // x8

  if ( (byte_4C46795 & 1) == 0 )
  {
    sub_1C37058(&OptionManager_TypeInfo);
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C46795 = 1;
  }
  this->fields.resultAssetData = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resultAssetData, 0, v2, v3);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0) )
  {
    BondsIconArray = (ServantFaceIconComponent_o *)BattleResultBondsComponent__GetBondsIconArray(this, v5);
    if ( !BondsIconArray )
      goto LABEL_17;
    m_CancellationTokenSource = BondsIconArray->fields.m_CancellationTokenSource;
    v8 = BondsIconArray;
    v9 = (_DWORD)m_CancellationTokenSource - 1;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        v11 = *((_QWORD *)&v8->fields.backSprite + v10);
        if ( !v11 )
          break;
        BondsIconArray = *(ServantFaceIconComponent_o **)(v11 + 48);
        if ( !BondsIconArray )
          break;
        ServantFaceIconComponent__ClearFaceAtlas(BondsIconArray, 0);
        if ( v9 == v10 )
          goto LABEL_14;
        if ( (unsigned int)++v10 >= LODWORD(v8->fields.m_CancellationTokenSource) )
          sub_1C372BC(BondsIconArray);
      }
LABEL_17:
      sub_1C372B4(BondsIconArray);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


void BattleResultBondsComponent__endCloseBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C46793 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C46793 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleResultBondsComponent__endMoveFigure(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x21
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 lvComp; // x0
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t friendshipRank; // w22
  int32_t svtId; // w25
  int v10; // w29
  Il2CppObject *current; // x23
  System_String_o *v12; // x0
  System_String_o *v13; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v15; // x1
  const MethodInfo *v16; // x6
  struct BattleResultBondsIconComponent_o *v17; // x8
  int32_t svtLimit; // w23
  int32_t ServantLimitCountSealAfter; // w23
  __int64 *v20; // x8
  int v21; // w21
  bool v22; // w23
  System_String_o *v23; // x0
  const MethodInfo *v24; // x6
  struct BattleResultBondsIconComponent_o *v25; // x8
  System_String_o *v26; // x0
  const MethodInfo *v27; // x6
  System_Collections_Generic_List_object__o *v28; // x22
  struct BattleFriendshipRewardInfo_array *rewardInfos; // x24
  int max_length; // w8
  int v31; // w21
  int CONF_SERVANT_COIN_PLUS_HEIGHT; // w26
  struct BattleResultBondsIconComponent_o *v33; // x8
  BattleFriendshipRewardInfo_o *v34; // x25
  GiftEntity_o *v35; // x26
  int32_t type; // w8
  Il2CppObject *v37; // x0
  System_String_o *v38; // x27
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  __int64 v42; // x5
  __int64 v43; // x6
  __int64 v44; // x7
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
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  struct System_Object_array *items; // x8
  _QWORD *v67; // x9
  __int64 size; // x10
  Il2CppClass **v69; // x0
  System_Object_array *v70; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  int v73; // w20
  UnityEngine_Transform_o *confRoot; // x21
  unsigned int localPosition; // s0 OVERLAPPED
  int v76; // w8
  float v77; // s1
  int v78; // w20
  float v79; // s1
  int v80; // s2
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *rankupConfLabel; // x21
  struct BattleWindowComponent_o *confwindow; // x20
  BattleWindowComponent_EndCall_o *v84; // x21
  int32_t key; // [xsp+4h] [xbp-CCh]
  System_Text_StringBuilder_o *v86; // [xsp+8h] [xbp-C8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v87; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+18h] [xbp-B8h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+30h] [xbp-A0h] BYREF
  System_String_o *countText; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v91; // [xsp+40h] [xbp-90h] BYREF
  System_String_o *nameText; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4C4678F & 1) == 0 )
  {
    sub_1C37058(&Method_BattleResultBondsComponent_endMoveFigure__);
    sub_1C37058(&Method_BattleResultBondsComponent_openedBondUp__);
    sub_1C37058(&BattleResultBondsComponent_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&ServantCommentManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C37058(&System_Text_StringBuilder_TypeInfo);
    sub_1C37058(&StringLiteral_11112/*"RESULT_BOUNDS_OPENQUEST"*/);
    sub_1C37058(&StringLiteral_113/*" "*/);
    sub_1C37058(&StringLiteral_11115/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/);
    sub_1C37058(&StringLiteral_11114/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/);
    sub_1C37058(&StringLiteral_11110/*"RESULT_BOUNDS_GET_COIN_NAME"*/);
    sub_1C37058(&StringLiteral_11107/*"RESULT_BOUNDS_GETVOICE"*/);
    sub_1C37058(&StringLiteral_25133/*"{0} {1}"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_11109/*"RESULT_BOUNDS_GET_COIN_COUNT"*/);
    byte_4C4678F = 1;
  }
  memset(&v91, 0, sizeof(v91));
  nameText = 0;
  entity = 0;
  countText = 0;
  v3 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0);
  v4 = Method_BattleResultBondsComponent_endMoveFigure__;
  if ( (*((_BYTE *)Method_BattleResultBondsComponent_endMoveFigure__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C37070(Method_BattleResultBondsComponent_endMoveFigure__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
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
  lvComp = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !lvComp )
    goto LABEL_120;
  v86 = v3;
  lvComp = (__int64)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                      (clsQuestCheck_o *)lvComp,
                      svtId,
                      friendshipRank,
                      8,
                      0);
  if ( lvComp )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v88,
      (System_Collections_Generic_List_object__o *)lvComp,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    v10 = 0;
    v91 = v88;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v91,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
    {
      current = v91.fields._current;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11112/*"RESULT_BOUNDS_OPENQUEST"*/, 0);
      if ( !current )
        sub_1C372B4(v12);
      v13 = v12;
      QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0);
      v15 = System_String__Format(v13, QuestName, 0);
      BattleResultBondsComponent__addConfObject(this, v15, (float)v10 * 22.0, -1, 0, 0, 1, v16);
      v10 += 3;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v91,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  }
  else
  {
    v10 = 0;
  }
  v17 = this->fields.openCollect;
  if ( !v17 )
    goto LABEL_120;
  svtLimit = v17->fields.svtLimit;
  lvComp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lvComp )
    goto LABEL_120;
  lvComp = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)lvComp,
                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
    v20 = &StringLiteral_11115/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/;
    v21 = 4;
    v22 = 1;
  }
  else
  {
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    lvComp = ServantCommentManager__IsOpenByServantFriendShip_43473316(
               svtId,
               friendshipRank,
               ServantLimitCountSealAfter,
               0);
    if ( (lvComp & 1) == 0 )
      goto LABEL_33;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = &StringLiteral_11114/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/;
    v22 = 0;
    v21 = 2;
  }
  v23 = LocalizationManager__Get((System_String_o *)*v20, 0);
  BattleResultBondsComponent__addConfObject(this, v23, (float)v10 * 22.0, -1, 0, v22, 1, v24);
  v10 += v21;
LABEL_33:
  v25 = this->fields.openCollect;
  if ( !v25 )
    goto LABEL_120;
  if ( ServantVoiceMaster__isOpenByServantFriendShip(svtId, v25->fields.maxLimitCount, friendshipRank, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_11107/*"RESULT_BOUNDS_GETVOICE"*/, 0);
    BattleResultBondsComponent__addConfObject(this, v26, (float)v10 * 22.0, -1, 0, 0, 1, v27);
    v10 += 2;
  }
  if ( !this->fields.rewardInfos )
  {
    CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
    goto LABEL_104;
  }
  v28 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ItemMaster___);
  rewardInfos = this->fields.rewardInfos;
  if ( !rewardInfos )
    goto LABEL_120;
  max_length = rewardInfos->max_length;
  if ( max_length < 1 )
  {
    CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
    if ( !v28 )
      goto LABEL_120;
    goto LABEL_103;
  }
  v87 = (DataMasterBase_TMaster__TEntity__PKType__o *)lvComp;
  key = svtId;
  v31 = 0;
  CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
  do
  {
    if ( v31 >= (unsigned int)max_length )
      sub_1C372BC(lvComp);
    v33 = this->fields.openCollect;
    if ( !v33 )
      goto LABEL_120;
    v34 = rewardInfos->m_Items[v31];
    if ( !v34 )
      goto LABEL_120;
    if ( v33->fields.svtId == v34->fields.targetSvtId )
    {
      lvComp = (__int64)BattleFriendshipRewardInfo__getGiftEntity(v34, 0);
      if ( !lvComp )
        goto LABEL_120;
      v35 = (GiftEntity_o *)lvComp;
      GiftEntity__GetInfo((GiftEntity_o *)lvComp, &nameText, &countText, 0);
      if ( GiftEntity__isQp(v35, 0) )
      {
        nameText = countText;
        countText = (System_String_o *)StringLiteral_1/*""*/;
      }
      type = v35->fields.type;
      if ( type == 1 )
      {
        v50 = System_String__Concat_63599904(nameText, (System_String_o *)StringLiteral_113/*" "*/, countText, 0);
        v52 = v35->fields.type;
        v53 = v50;
        v54 = (float)v10 * 22.0;
        objectId = -1;
      }
      else
      {
        if ( type == 2 )
        {
          lvComp = (__int64)v87;
          if ( !v87 )
            goto LABEL_120;
          v37 = DataMasterBase_object__object__int___GetEntity(
                  v87,
                  v35->fields.objectId,
                  (const MethodInfo_33A10A0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( v37 && LODWORD(v37[3].klass) == 29 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v38 = LocalizationManager__Get((System_String_o *)StringLiteral_11109/*"RESULT_BOUNDS_GET_COIN_COUNT"*/, 0);
            LODWORD(v88.fields._list) = v35->fields.num;
            v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v88, v39, v40, v41, v42, v43, v44);
            countText = System_String__Format(v38, v45, 0);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
            if ( !lvComp )
              goto LABEL_120;
            v46 = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)lvComp,
                    key,
                    (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( v46 )
            {
              v47 = (ServantEntity_o *)v46;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4C3CD62 )
              {
                sub_1C37058(&NetworkManager_TypeInfo);
                byte_4C3CD62 = 1;
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
                lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
              v59 = LocalizationManager__Get((System_String_o *)StringLiteral_11110/*"RESULT_BOUNDS_GET_COIN_NAME"*/, 0);
              nameText = System_String__Format_63602948(v59, (Il2CppObject *)nameText, Name, 0);
            }
            v57 = 1;
          }
          else
          {
            v57 = 0;
          }
          v60 = System_String__Format_63602948(
                  (System_String_o *)StringLiteral_25133/*"{0} {1}"*/,
                  (Il2CppObject *)nameText,
                  (Il2CppObject *)countText,
                  0);
          IconImageId = GiftEntity__getIconImageId(v35, 0);
          BattleResultBondsComponent__addConfObject(
            this,
            v60,
            (float)v10 * 22.0,
            IconImageId,
            v57,
            0,
            v35->fields.type,
            v62);
          goto LABEL_90;
        }
        v56 = System_String__Format_63602948(
                (System_String_o *)StringLiteral_25133/*"{0} {1}"*/,
                (Il2CppObject *)nameText,
                (Il2CppObject *)countText,
                0);
        v52 = v35->fields.type;
        objectId = v35->fields.objectId;
        v53 = v56;
        v54 = (float)v10 * 22.0;
      }
      BattleResultBondsComponent__addConfObject(this, v53, v54, objectId, 0, 0, v52, v51);
LABEL_90:
      v63 = BattleResultBondsComponent_TypeInfo;
      if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
        v63 = BattleResultBondsComponent_TypeInfo;
      }
      v10 += 2;
      CONF_SERVANT_COIN_PLUS_HEIGHT = v63->static_fields->CONF_SERVANT_COIN_PLUS_HEIGHT;
      lvComp = BattleFriendshipRewardInfo__isShow(v34, 0);
      if ( (lvComp & 1) != 0 )
      {
        if ( !v28 )
          goto LABEL_120;
        items = v28->fields._items;
        v67 = Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__;
        ++v28->fields._version;
        if ( !items )
          goto LABEL_120;
        size = v28->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v28,
            (Il2CppObject *)v34,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
        }
        else
        {
          v69 = &items->obj.klass + size;
          v28->fields._size = size + 1;
          v69[4] = (Il2CppClass *)v34;
          sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 4), (int32_t)v34, v64, v65);
        }
      }
    }
    max_length = rewardInfos->max_length;
    ++v31;
  }
  while ( v31 < max_length );
  if ( !v28 )
    goto LABEL_120;
LABEL_103:
  v70 = System_Collections_Generic_List_object___ToArray(
          v28,
          (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
  this->fields.showList = (struct BattleFriendshipRewardInfo_array *)v70;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.showList, (int32_t)v70, v71, v72);
  this->fields.showIndex = 0;
LABEL_104:
  lvComp = (__int64)this->fields.confSprite;
  if ( v10 )
    v73 = v10;
  else
    v73 = 1;
  if ( !lvComp )
    goto LABEL_120;
  UIWidget__set_height((UIWidget_o *)lvComp, CONF_SERVANT_COIN_PLUS_HEIGHT + 22 * v73 + 120, 0);
  confRoot = this->fields.confRoot;
  if ( !confRoot )
    goto LABEL_120;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.confRoot, 0);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT >= 0 )
    v76 = CONF_SERVANT_COIN_PLUS_HEIGHT;
  else
    v76 = CONF_SERVANT_COIN_PLUS_HEIGHT + 1;
  v77 = (float)v73;
  v78 = v76 >> 1;
  v79 = (float)(v77 * 11.0) + (float)(v76 >> 1);
  v80 = 0;
  UnityEngine_Transform__set_localPosition(confRoot, *(UnityEngine_Vector3_o *)&localPosition, 0);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT )
  {
    lvComp = (__int64)this->fields.confwindow;
    if ( lvComp )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lvComp, 0);
      GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v78, 0);
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
    sub_1C372B4(lvComp);
  }
LABEL_116:
  if ( !v86 )
    goto LABEL_120;
  rankupConfLabel = this->fields.rankupConfLabel;
  lvComp = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v86->klass->vtable._3_ToString.methodPtr)(
             v86,
             v86->klass->vtable._3_ToString.method);
  if ( !rankupConfLabel )
    goto LABEL_120;
  UILabel__set_text(rankupConfLabel, (System_String_o *)lvComp, 0);
  confwindow = this->fields.confwindow;
  v84 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v84, (Il2CppObject *)this, Method_BattleResultBondsComponent_openedBondUp__, 0);
  if ( !confwindow )
    goto LABEL_120;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))confwindow->klass->vtable._10_Open.methodPtr)(
    confwindow,
    v84,
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
        sub_1C372BC(this);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    if ( max_length == v6 )
      sub_1C372BC(this);
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
    sub_1C372B4(this);
  return SLODWORD(oldCollections->max_length) > 1;
}


void BattleResultBondsComponent__openedBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0
  struct BattleResultComponent_o *v4; // x8

  if ( (byte_4C46790 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5451/*"END_OPEN"*/);
    byte_4C46790 = 1;
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
    sub_1C372B4(parentComp);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)parentComp, (System_String_o *)StringLiteral_5451/*"END_OPEN"*/, 0);
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

  if ( (byte_4C4679C & 1) == 0 )
  {
    sub_1C37058(&BattleResultBondsComponent___c_TypeInfo);
    byte_4C4679C = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(BattleResultBondsComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleResultBondsComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultBondsComponent___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)BattleResultBondsComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
  return col->fields.isUse;
}


bool BattleResultBondsComponent___c___SetResultDataLocal_b__49_0(
        BattleResultBondsComponent___c_o *this,
        QuestRewardInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.type == 7 && x->fields.isNew;
}


bool BattleResultBondsComponent___c___SetResultDataLocal_b__49_1(
        BattleResultBondsComponent___c_o *this,
        GetSvts_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
  const MethodInfo *v6; // x1
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v7; // x9
  char v8; // w8
  UnityEngine_GameObject_o *parent; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v12; // x21
  BattleResultBondsComponent___c__DisplayClass61_1_c *v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v22; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v34; // x22
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  __int64 v42; // x6
  __int64 v43; // x7
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v46; // x22
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  __int64 v49; // x1
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v50; // x8
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v53; // x22
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  __int64 v56; // x1
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  __int64 v59; // x1
  System_Collections_Hashtable_o *v60; // x0
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v61; // x8
  struct BattleResultBondsComponent_o *v62; // x8
  const MethodInfo *v63; // x2
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v64; // x8
  struct BattleResultBondsIconComponent_array *bondsIcons; // x9
  __int64 i; // x10
  __int64 v67; // x0
  char v68[4]; // [xsp+4h] [xbp-3Ch] BYREF
  int v69; // [xsp+8h] [xbp-38h] BYREF
  int v70; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4C4679D & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&float_TypeInfo);
    sub_1C37058(&StringLiteral_24864/*"x"*/);
    sub_1C37058(&StringLiteral_9628/*"OPEN"*/);
    sub_1C37058(&StringLiteral_24071/*"time"*/);
    sub_1C37058(&StringLiteral_22432/*"oncompletetarget"*/);
    sub_1C37058(&StringLiteral_19020/*"endMoveFigure"*/);
    sub_1C37058(&StringLiteral_20974/*"islocal"*/);
    sub_1C37058(&StringLiteral_22430/*"oncomplete"*/);
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C37058(&iTween_TypeInfo);
    byte_4C4679D = 1;
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
  v7 = v2->fields.CS___8__locals1;
  if ( !v7 )
    goto LABEL_69;
  v8 = (char)this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v7->fields.__4__this;
  if ( !this )
    goto LABEL_69;
  if ( (v8 & 1) == 0 )
  {
    BattleResultBondsComponent__endMoveFigure((BattleResultBondsComponent_o *)this, v6);
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
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C37100(object___TypeInfo, 10);
  if ( !this )
    goto LABEL_69;
  v12 = this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_24864/*"x"*/;
  if ( StringLiteral_24864/*"x"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C37194(
                                                                   StringLiteral_24864/*"x"*/,
                                                                   v12->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    v13 = (BattleResultBondsComponent___c__DisplayClass61_1_c *)StringLiteral_24864/*"x"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( !LODWORD(v12->fields.CS___8__locals1) )
    goto LABEL_70;
  v12[1].klass = v13;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12[1], (int32_t)v13, v10, v11);
  v70 = -1007026176;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(
                                                                 float_TypeInfo,
                                                                 &v70,
                                                                 v14,
                                                                 v15,
                                                                 v16,
                                                                 v17,
                                                                 v18,
                                                                 v19);
  v22 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C37194(this, v12->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v12->fields.CS___8__locals1) <= 1 )
    goto LABEL_70;
  v12[1].monitor = v22;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12[1].monitor, (int32_t)v22, v20, v21);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_24071/*"time"*/;
  if ( StringLiteral_24071/*"time"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C37194(
                                                                   StringLiteral_24071/*"time"*/,
                                                                   v12->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    v25 = StringLiteral_24071/*"time"*/;
  }
  else
  {
    v25 = 0;
  }
  if ( LODWORD(v12->fields.CS___8__locals1) <= 2 )
    goto LABEL_70;
  v12[1].fields.parent = (struct UnityEngine_GameObject_o *)v25;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12[1].fields, v25, v23, v24);
  v69 = 1061997773;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(
                                                                 float_TypeInfo,
                                                                 &v69,
                                                                 v26,
                                                                 v27,
                                                                 v28,
                                                                 v29,
                                                                 v30,
                                                                 v31);
  v34 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C37194(this, v12->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v12->fields.CS___8__locals1) <= 3 )
    goto LABEL_70;
  v12[1].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v34;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12[1].fields.CS___8__locals1, (int32_t)v34, v32, v33);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_20974/*"islocal"*/;
  if ( StringLiteral_20974/*"islocal"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C37194(
                                                                   StringLiteral_20974/*"islocal"*/,
                                                                   v12->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    v37 = StringLiteral_20974/*"islocal"*/;
  }
  else
  {
    v37 = 0;
  }
  if ( LODWORD(v12->fields.CS___8__locals1) <= 4 )
    goto LABEL_70;
  v12[2].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)v37;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12[2], v37, v35, v36);
  v68[0] = 1;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(
                                                                 bool_TypeInfo,
                                                                 v68,
                                                                 v38,
                                                                 v39,
                                                                 v40,
                                                                 v41,
                                                                 v42,
                                                                 v43);
  v46 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C37194(this, v12->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v12->fields.CS___8__locals1) <= 5 )
    goto LABEL_70;
  v12[2].monitor = v46;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12[2].monitor, (int32_t)v46, v44, v45);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22432/*"oncompletetarget"*/;
  if ( StringLiteral_22432/*"oncompletetarget"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C37194(
                                                                   StringLiteral_22432/*"oncompletetarget"*/,
                                                                   v12->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    v49 = StringLiteral_22432/*"oncompletetarget"*/;
  }
  else
  {
    v49 = 0;
  }
  if ( LODWORD(v12->fields.CS___8__locals1) <= 6 )
    goto LABEL_70;
  v12[2].fields.parent = (struct UnityEngine_GameObject_o *)v49;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12[2].fields, v49, v47, v48);
  v50 = v2->fields.CS___8__locals1;
  if ( !v50 || (this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v50->fields.__4__this) == 0 )
LABEL_69:
    sub_1C372B4(this);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0);
  v53 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C37194(this, v12->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v12->fields.CS___8__locals1) <= 7 )
    goto LABEL_70;
  v12[2].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v53;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12[2].fields.CS___8__locals1, (int32_t)v53, v51, v52);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22430/*"oncomplete"*/;
  if ( StringLiteral_22430/*"oncomplete"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C37194(
                                                                   StringLiteral_22430/*"oncomplete"*/,
                                                                   v12->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    v56 = StringLiteral_22430/*"oncomplete"*/;
  }
  else
  {
    v56 = 0;
  }
  if ( LODWORD(v12->fields.CS___8__locals1) <= 8 )
    goto LABEL_70;
  v12[3].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)v56;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12[3], v56, v54, v55);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_19020/*"endMoveFigure"*/;
  if ( !StringLiteral_19020/*"endMoveFigure"*/ )
  {
    v59 = 0;
    goto LABEL_57;
  }
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C37194(
                                                                 StringLiteral_19020/*"endMoveFigure"*/,
                                                                 v12->klass->_1.element_class);
  if ( !this )
  {
LABEL_71:
    v67 = sub_1C372D8(this);
    sub_1C37180(v67, 0);
  }
  v59 = StringLiteral_19020/*"endMoveFigure"*/;
LABEL_57:
  if ( LODWORD(v12->fields.CS___8__locals1) <= 9 )
    goto LABEL_70;
  v12[3].monitor = (void *)v59;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12[3].monitor, v59, v57, v58);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v60 = iTween__Hash((System_Object_array *)v12, 0);
  iTween__MoveFrom_63200692(parent, v60, 0);
LABEL_61:
  v61 = v2->fields.CS___8__locals1;
  if ( !v61 )
    goto LABEL_69;
  v62 = v61->fields.__4__this;
  if ( !v62 )
    goto LABEL_69;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v62->fields.myFsm;
  v62->fields.openBoundsFlg = 1;
  if ( !this )
    goto LABEL_69;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9628/*"OPEN"*/, 0);
  v64 = v2->fields.CS___8__locals1;
  if ( !v64 )
    goto LABEL_69;
  bondsIcons = v64->fields.bondsIcons;
  if ( !bondsIcons )
    goto LABEL_69;
  i = v64->fields.i;
  if ( (unsigned int)i >= LODWORD(bondsIcons->max_length) )
LABEL_70:
    sub_1C372BC(this);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v64->fields.__4__this;
  if ( !this )
    goto LABEL_69;
  BattleResultBondsComponent__CheckFormalJoin((BattleResultBondsComponent_o *)this, bondsIcons->m_Items[i], v63);
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

  if ( (byte_4C4679E & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C4679E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__CreateServantCoinConfirmDialog((CommonUI_o *)Instance, 1, this->fields.coin, 0, 0);
}