void __fastcall BattleResultBondsComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleResultBondsComponent_StaticFields *static_fields; // x0
  int32_t v7; // w1
  int32_t v8; // w1
  struct BattleResultBondsComponent_StaticFields *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_49BE2F0 & 1) == 0 )
  {
    sub_1B4CF90(&BattleResultBondsComponent_TypeInfo, v1);
    sub_1B4CF90(&StringLiteral_6940/*"GetNewSvt"*/, v4);
    sub_1B4CF90(&StringLiteral_6927/*"GetExistSvt"*/, v5);
    byte_49BE2F0 = 1;
  }
  static_fields = BattleResultBondsComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SVT_GAP_5 = 0x4316000043320000LL;
  *(_QWORD *)&static_fields->CONF_LABEL_MAX_WIDTH = 0x12000001D0LL;
  v7 = StringLiteral_6940/*"GetNewSvt"*/;
  static_fields->GET_NEW_SVT_KEY = (struct System_String_o *)StringLiteral_6940/*"GetNewSvt"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->GET_NEW_SVT_KEY, v7, v2, v3);
  v8 = StringLiteral_6927/*"GetExistSvt"*/;
  v9 = BattleResultBondsComponent_TypeInfo->static_fields;
  v9->GET_EXIST_SVT_KEY = (struct System_String_o *)StringLiteral_6927/*"GetExistSvt"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&v9->GET_EXIST_SVT_KEY, v8, v10, v11);
}


void __fastcall BattleResultBondsComponent___ctor(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  BattleResultBondsFigureComponent_o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_49BE2EF & 1) == 0 )
  {
    sub_1B4CF90(&BattleResultBondsFigureComponent_TypeInfo, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_1B4CF90(&System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo, v5);
    sub_1B4CF90(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    byte_49BE2EF = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.conflist = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.conflist, (int32_t)v7, v8, v9);
  this->fields.buddyPointInfoWindowHeight = 366;
  this->fields.tempSaveTimeScale = 1.0;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
  this->fields.bondsList = (struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *)v10;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.bondsList, (int32_t)v10, v11, v12);
  v13 = (BattleResultBondsFigureComponent_o *)sub_1B4D1DC(BattleResultBondsFigureComponent_TypeInfo);
  BattleResultBondsFigureComponent___ctor(v13, 0LL);
  this->fields.bondsFigure = v13;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.bondsFigure, (int32_t)v13, v14, v15);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x21
  __int64 v25; // x26
  int max_length; // w9
  GetSvts_o *v27; // x8
  UserServantEntity_o *v28; // x24
  EventServantEntity_o *EventServant; // x22
  BattleResultBondsComponent___c_c *v30; // x0
  System_Action_o *_9__62_0; // x23
  Il2CppObject *v32; // x25
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  Il2CppObject *Master_object; // x25
  __int64 v37; // x24
  __int64 v38; // x23
  __int64 v39; // x25
  Il2CppObject *v40; // x8
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_String_o *v45; // x24
  Il2CppObject *v46; // x25
  __int64 v47; // x0
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_49BE2E1 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, collect);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1B4CF90(&Method_DataManager_GetMaster_SvtCoinMaster___, v6);
    sub_1B4CF90(&DataManager_TypeInfo, v7);
    sub_1B4CF90(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_1B4CF90(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v9);
    sub_1B4CF90(&GetSvtCoin___TypeInfo, v10);
    sub_1B4CF90(&GetSvtCoin_TypeInfo, v11);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v12);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B4CF90(&Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__, v15);
    sub_1B4CF90(&Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__, v16);
    sub_1B4CF90(&BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo, v17);
    sub_1B4CF90(&BattleResultBondsComponent___c_TypeInfo, v18);
    sub_1B4CF90(&StringLiteral_12150/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, v19);
    sub_1B4CF90(&StringLiteral_18303/*"dialogIgnoreTime"*/, v20);
    byte_49BE2E1 = 1;
  }
  entity = 0LL;
  if ( this->fields.getJoinSvtList && !this->fields.isWarboard )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantMaster___),
          (getJoinSvtList = this->fields.getJoinSvtList) == 0LL) )
    {
LABEL_45:
      sub_1B4D1EC(Instance, v22);
    }
    v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v25 = 0LL;
    while ( 1 )
    {
      max_length = getJoinSvtList->max_length;
      if ( (int)v25 >= max_length )
        break;
      if ( (unsigned int)v25 >= max_length )
        goto LABEL_46;
      v27 = getJoinSvtList->m_Items[v25];
      if ( !v27 )
        goto LABEL_45;
      if ( v27->fields.isNew )
      {
        UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_18303/*"dialogIgnoreTime"*/, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      else
      {
        if ( !v24 )
          goto LABEL_45;
        Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                      v24,
                                      v27->fields.userSvtId,
                                      (const MethodInfo_319FEF8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( Instance )
        {
          v28 = (UserServantEntity_o *)Instance;
          Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
          if ( !collect )
            goto LABEL_45;
          if ( (_DWORD)Instance == collect->fields.svtId )
          {
            EventServant = UserServantEntity__getEventServant(v28, 0LL);
            if ( EventServant
              || (Instance = (DataManager_o *)UserServantEntity__getEventServantIgnoreEnd(v28, 0LL),
                  (EventServant = (EventServantEntity_o *)Instance) != 0LL) )
            {
              v30 = BattleResultBondsComponent___c_TypeInfo;
              if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
                v30 = BattleResultBondsComponent___c_TypeInfo;
              }
              _9__62_0 = v30->static_fields->__9__62_0;
              if ( !_9__62_0 )
              {
                if ( !v30->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v30);
                  v30 = BattleResultBondsComponent___c_TypeInfo;
                }
                v32 = (Il2CppObject *)v30->static_fields->__9;
                _9__62_0 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
                System_Action___ctor(
                  _9__62_0,
                  v32,
                  Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__,
                  0LL);
                static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
                static_fields->__9__62_0 = _9__62_0;
                sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__62_0, (int32_t)_9__62_0, v34, v35);
              }
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SvtCoinMaster___);
              Instance = (DataManager_o *)UserServantEntity__getSvtId(v28, 0LL);
              if ( !Master_object )
                goto LABEL_45;
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            &entity,
                                            (int32_t)Instance,
                                            (const MethodInfo_319D9E8 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_45;
                if ( SHIDWORD(entity[1].klass) >= 1 )
                {
                  v37 = sub_1B4D1DC(BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo);
                  BattleResultBondsComponent___c__DisplayClass62_0___ctor(
                    (BattleResultBondsComponent___c__DisplayClass62_0_o *)v37,
                    0LL);
                  v38 = sub_1B4D038(GetSvtCoin___TypeInfo, 1LL);
                  v39 = sub_1B4D1DC(GetSvtCoin_TypeInfo);
                  GetSvtCoin___ctor((GetSvtCoin_o *)v39, 0LL);
                  v40 = entity;
                  if ( !entity )
                    goto LABEL_45;
                  if ( !v39 )
                    goto LABEL_45;
                  *(_DWORD *)(v39 + 16) = entity[1].klass;
                  *(int32x2_t *)(v39 + 20) = vrev64_s32(*(int32x2_t *)((char *)&v40[1].klass + 4));
                  if ( !v38 )
                    goto LABEL_45;
                  Instance = (DataManager_o *)sub_1B4D0CC(v39, *(_QWORD *)(*(_QWORD *)v38 + 64LL));
                  if ( !Instance )
                  {
                    v47 = sub_1B4D210(0LL);
                    sub_1B4D0B8(v47, 0LL);
                  }
                  if ( !*(_DWORD *)(v38 + 24) )
LABEL_46:
                    sub_1B4D1F4(Instance, v22);
                  *(_QWORD *)(v38 + 32) = v39;
                  sub_1B4CF34((CGThumbnailListItem_o *)(v38 + 32), v39, v41, v42);
                  if ( !v37 )
                    goto LABEL_45;
                  *(_QWORD *)(v37 + 16) = v38;
                  sub_1B4CF34((CGThumbnailListItem_o *)(v37 + 16), v38, v43, v44);
                  _9__62_0 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__62_0,
                    (Il2CppObject *)v37,
                    Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__,
                    0LL);
                }
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v45 = LocalizationManager__Get((System_String_o *)StringLiteral_12150/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0LL);
              v46 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              Instance = (DataManager_o *)EventServantEntity__GetGetMessage(EventServant, 0LL);
              if ( !v46 )
                goto LABEL_45;
              CommonUI__OpenNotificationDialog(
                (CommonUI_o *)v46,
                v45,
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
      ++v25;
      if ( !getJoinSvtList )
        goto LABEL_45;
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

  if ( (byte_49BE2E9 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BattleResultBondsComponent_endClose__, method);
    sub_1B4CF90(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_49BE2E9 = 1;
  }
  if ( this->fields.isMultiDeck )
    multiDeckWindow = this->fields.multiDeckWindow;
  else
    multiDeckWindow = this->fields.window;
  v5 = (BattleWindowComponent_EndCall_o *)sub_1B4D1DC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v5, (Il2CppObject *)this, Method_BattleResultBondsComponent_endClose__, 0LL);
  if ( !multiDeckWindow )
    sub_1B4D1EC(v6, v7);
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

  if ( (byte_49BE2EE & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_5380/*"END_PROC"*/, method);
    byte_49BE2EE = 1;
  }
  upRoot = this->fields.upRoot;
  if ( !upRoot
    || (UnityEngine_GameObject__SetActive(upRoot, 0, 0LL),
        (upRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B4D1EC(upRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)upRoot, (System_String_o *)StringLiteral_5380/*"END_PROC"*/, 0LL);
}


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
  Il2CppObject *Object_object__49169892; // x21
  BattleResultBondsComponent_o *v14; // x21
  BattleResultBondsComponent_o *v15; // x22
  BattleResultBondsComponent_o *v16; // x22
  BattleResultBondsComponent_o *v17; // x22
  int m_CancellationTokenSource; // w8
  BattleResultBondsComponent_o *v19; // x21
  unsigned int v20; // w22

  v8 = this;
  if ( (byte_49BE2E3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_AssetData_GetObject_GameObject____75492000, data);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__, v10);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    this = (BattleResultBondsComponent_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, v12);
    byte_49BE2E3 = 1;
  }
  if ( !data )
    goto LABEL_23;
  Object_object__49169892 = AssetData__GetObject_object__49169892(
                              data,
                              effectName,
                              (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultBondsComponent_o *)UnityEngine_Object__Instantiate_object_(
                                           Object_object__49169892,
                                           (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_23;
  v14 = this;
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !targetIcon )
    goto LABEL_23;
  v15 = this;
  this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)targetIcon,
                                           0LL);
  if ( !v15 )
    goto LABEL_23;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v15, (UnityEngine_Transform_o *)this, 0LL);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v14, 0LL);
  v16 = this;
  if ( !byte_49B5361 )
  {
    this = (BattleResultBondsComponent_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, data);
    byte_49B5361 = 1;
  }
  if ( !v16 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v16,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v14, 0LL);
  v17 = this;
  if ( !byte_49B5366 )
  {
    this = (BattleResultBondsComponent_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, data);
    byte_49B5366 = 1;
  }
  if ( !v17 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v17,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49627240(
                                           (UnityEngine_GameObject_o *)v14,
                                           (const MethodInfo_2F54068 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !this )
    goto LABEL_23;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v19 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= m_CancellationTokenSource )
        sub_1B4D1F4(this, data);
      this = (BattleResultBondsComponent_o *)*((_QWORD *)&v19->fields.parentComp + (int)v20);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0LL);
      m_CancellationTokenSource = (int)v19->fields.m_CancellationTokenSource;
      if ( (int)++v20 >= m_CancellationTokenSource )
        goto LABEL_21;
    }
LABEL_23:
    sub_1B4D1EC(this, data);
  }
LABEL_21:
  this = (BattleResultBondsComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v19,
    (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void __fastcall BattleResultBondsComponent__DeleteGetJoinSvtData(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleResultBondsComponent_c *v2; // x0

  if ( (byte_49BE2D8 & 1) == 0 )
  {
    sub_1B4CF90(&BattleResultBondsComponent_TypeInfo, v1);
    byte_49BE2D8 = 1;
  }
  v2 = BattleResultBondsComponent_TypeInfo;
  if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
    v2 = BattleResultBondsComponent_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v2->static_fields->GET_EXIST_SVT_KEY, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(BattleResultBondsComponent_TypeInfo->static_fields->GET_NEW_SVT_KEY, 0LL);
}


void __fastcall BattleResultBondsComponent__FinishUpdateValue(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v5; // x1
  _DWORD *BondsIconArray; // x0
  __int64 v7; // x1
  int v8; // w8
  _DWORD *v9; // x20
  unsigned int v10; // w21
  SePlayer_o *MeterSePlayer; // x0

  if ( (byte_49BE2DF & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_9066/*"NEXT"*/, method);
    sub_1B4CF90(&iTween_TypeInfo, v3);
    byte_49BE2DF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_60841372(gameObject, 0LL);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v5);
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
        sub_1B4D1F4(BondsIconArray, v7);
      BondsIconArray = *(_DWORD **)&v9[2 * v10 + 8];
      if ( !BondsIconArray )
        break;
      BattleResultBondsIconComponent__FinishUpdateValue((BattleResultBondsIconComponent_o *)BondsIconArray, 0LL);
      v8 = v9[6];
      if ( (int)++v10 >= v8 )
        goto LABEL_11;
    }
LABEL_16:
    sub_1B4D1EC(BondsIconArray, v7);
  }
LABEL_11:
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  BondsIconArray = this->fields.myFsm;
  this->fields.bondsCountUp = 0;
  if ( !BondsIconArray )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_9066/*"NEXT"*/, 0LL);
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
  CGThumbnailListItem_o *p_bondsIconArray; // x19
  System_Collections_Generic_List_object__o *v11; // x20
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *bondsList; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  System_Object_array *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49BE2EB & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__,
      method);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__,
      v3);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__,
      v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v9);
    byte_49BE2EB = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( this->fields.isMultiDeck )
  {
    p_bondsIconArray = (CGThumbnailListItem_o *)&this->fields.bondsIconArray;
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.bondsIconArray, 0LL) )
    {
      v11 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v11,
        (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
      bondsList = (System_Collections_Generic_List_object__o *)this->fields.bondsList;
      if ( !bondsList )
        goto LABEL_17;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v20,
        bondsList,
        (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v20,
                (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
      {
        if ( !v20.fields._current )
          sub_1B4D1EC(0LL, v14);
        BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                          (BattleResultBondsDeckPerWaveComponent_o *)v20.fields._current,
                                                                          0LL);
        if ( !v11 )
          sub_1B4D1EC(BondsIconArray, BondsIconArray);
        System_Collections_Generic_List_object___AddRange(
          v11,
          BondsIconArray,
          (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v20,
        (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
      if ( !v11 )
LABEL_17:
        sub_1B4D1EC(bondsList, v12);
      v16 = System_Collections_Generic_List_object___ToArray(
              v11,
              (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
      p_bondsIconArray->klass = (CGThumbnailListItem_c *)v16;
      sub_1B4CF34(p_bondsIconArray, (int32_t)v16, v17, v18);
    }
  }
  else
  {
    p_bondsIconArray = (CGThumbnailListItem_o *)&this->fields.collects;
  }
  return (BattleResultBondsIconComponent_array *)p_bondsIconArray->klass;
}


void __fastcall BattleResultBondsComponent__Init(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleWindowComponent_o *window; // x0
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *multiDeckWindow; // x20

  if ( (byte_49BE2D9 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__, method);
    sub_1B4CF90(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo, v3);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v4);
    byte_49BE2D9 = 1;
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
  v6 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v6;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.effectUIList, (int32_t)v6, v7, v8);
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
    sub_1B4D1EC(window, method);
  }
LABEL_14:
  this->fields.isMultiDeck = 0;
  window = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !window )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
}


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
  if ( (byte_49BE2DA & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, oldCollects);
    byte_49BE2DA = 1;
  }
  this->fields.oldCollections = oldCollects;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.oldCollections,
    (int32_t)oldCollects,
    (int32_t)inRewardInfos,
    (const MethodInfo *)resultAsset);
  this->fields.rewardInfos = inRewardInfos;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.rewardInfos, (int32_t)inRewardInfos, v15, v16);
  this->fields.resultAssetData = resultAsset;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.resultAssetData, (int32_t)resultAsset, v17, v18);
  this->fields.getJoinSvtList = getJoinSvts;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.getJoinSvtList, (int32_t)getJoinSvts, v19, v20);
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
  int32_t v11; // w24
  BattleResultBondsComponent_o *v12; // x19
  __int64 v13; // x1
  struct BattleResultBondsIconComponent_array *collects; // x8
  struct BattleResultBondsIconComponent_array *v15; // x8
  struct BattleResultBondsIconComponent_array *v16; // x8
  struct BattleResultBondsIconComponent_array *v17; // x8
  struct UISprite_o *bgFrame; // x8
  float v19; // s8
  struct BattleResultBondsIconComponent_array *v20; // x8
  il2cpp_array_size_t v21; // w24
  float v22; // s9
  int v23; // w25
  float v24; // s10
  struct BattleResultBondsIconComponent_array *v25; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x8
  UnityEngine_Object_o *v28; // x20
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  v11 = targetIndex;
  v12 = this;
  if ( (byte_49BE2EC & 1) == 0 )
  {
    sub_1B4CF90(&BattleResultBondsComponent_TypeInfo, *(_QWORD *)&targetIndex);
    this = (BattleResultBondsComponent_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, v13);
    byte_49BE2EC = 1;
  }
  if ( v11 < cnt )
  {
    do
    {
      collects = v12->fields.collects;
      if ( !collects )
        goto LABEL_49;
      if ( v11 >= collects->max_length )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)collects->m_Items[v11];
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
        0LL);
      v15 = v12->fields.collects;
      if ( !v15 )
        goto LABEL_49;
      if ( v11 >= v15->max_length )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v15->m_Items[v11];
      if ( !this )
        goto LABEL_49;
      BattleResultBondsIconComponent__SetBuddyPointInfo((BattleResultBondsIconComponent_o *)this, 0LL, 0, 0LL);
      v16 = v12->fields.collects;
      if ( !v16 )
        goto LABEL_49;
      if ( v11 >= v16->max_length )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v16->m_Items[v11];
      if ( !this )
        goto LABEL_49;
      this = (BattleResultBondsComponent_o *)BattleResultBondsIconComponent__ChangeGauge(
                                               (BattleResultBondsIconComponent_o *)this,
                                               0.0,
                                               0LL);
      v17 = v12->fields.collects;
      if ( !v17 )
        goto LABEL_49;
      if ( v11 >= v17->max_length )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v17->m_Items[v11];
      if ( !this )
        goto LABEL_49;
      BattleResultBondsIconComponent__InitBuddyPointInfo((BattleResultBondsIconComponent_o *)this, 0LL);
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
    if ( v20->max_length <= cnt )
LABEL_50:
      sub_1B4D1F4(this, *(_QWORD *)&targetIndex);
    this = (BattleResultBondsComponent_o *)v20->m_Items[cnt];
    if ( !this )
      goto LABEL_49;
    this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
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
      if ( v21 >= v25->max_length )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v25->m_Items[v21];
      if ( !this )
        goto LABEL_49;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v19 * v24) - v22, 0LL);
      ++v21;
      v24 = v24 + 1.0;
      v23 -= 2;
    }
    while ( cnt != v21 );
  }
  if ( !battleResult )
    goto LABEL_49;
  buddyPointInfos = battleResult->fields.buddyPointInfos;
  if ( buddyPointInfos && *(_QWORD *)&buddyPointInfos->max_length && !isHideBuddyPointResult )
  {
    v28 = (UnityEngine_Object_o *)v12->fields.bgFrame;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
    {
      this = (BattleResultBondsComponent_o *)v12->fields.bgFrame;
      if ( !this )
        goto LABEL_49;
      UIWidget__set_height((UIWidget_o *)this, v12->fields.buddyPointInfoWindowHeight, 0LL);
    }
    this = (BattleResultBondsComponent_o *)v12->fields.window;
    if ( !this
      || (this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL)) == 0LL
      || (v29.fields.x = 0.0,
          v29.fields.y = 13.0,
          v29.fields.z = 0.0,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v29, 0LL),
          (this = (BattleResultBondsComponent_o *)v12->fields.window) == 0LL) )
    {
LABEL_49:
      sub_1B4D1EC(this, *(_QWORD *)&targetIndex);
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
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  BattleResultBondsComponent___c_c *v11; // x8
  System_Object_array *v12; // x20
  System_Func_object__bool__o *_9__53_0; // x21
  Il2CppObject *v14; // x22
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL4 isMultiDeck; // w8
  struct BattleWindowComponent_o *v21; // x20
  __int64 *v22; // x8
  BattleWindowComponent_EndCall_o *v23; // x21

  if ( (byte_49BE2DD & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Any_BattleResultBondsIconComponent___, method);
    sub_1B4CF90(&Method_BattleResultBondsComponent_OpenEnd__, v3);
    sub_1B4CF90(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1B4CF90(&System_Func_BattleResultBondsIconComponent__bool__TypeInfo, v5);
    sub_1B4CF90(&Method_BattleResultBondsComponent___c__Open_b__53_0__, v6);
    sub_1B4CF90(&BattleResultBondsComponent___c_TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_5375/*"END_OPEN"*/, v8);
    sub_1B4CF90(&StringLiteral_11958/*"SKIP"*/, v9);
    byte_49BE2DD = 1;
  }
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, method);
  v11 = BattleResultBondsComponent___c_TypeInfo;
  v12 = (System_Object_array *)BondsIconArray;
  if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
    v11 = BattleResultBondsComponent___c_TypeInfo;
  }
  _9__53_0 = (System_Func_object__bool__o *)v11->static_fields->__9__53_0;
  if ( !_9__53_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = BattleResultBondsComponent___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__53_0 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_BattleResultBondsIconComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__53_0, v14, Method_BattleResultBondsComponent___c__Open_b__53_0__, 0LL);
    static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Func_BattleResultBondsIconComponent__bool__o *)_9__53_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v16, v17);
  }
  if ( BasicHelper__Any_object__49202496(
         v12,
         (System_Func_T__bool__o *)_9__53_0,
         (const MethodInfo_2EEC540 *)Method_BasicHelper_Any_BattleResultBondsIconComponent___) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      isMultiDeck = this->fields.isMultiDeck;
      this->fields.openBoundsFlg = 0;
      this->fields.colIndex = 0;
      this->fields.bondsCountUp = 1;
      v21 = isMultiDeck ? this->fields.multiDeckWindow : this->fields.window;
      v23 = (BattleWindowComponent_EndCall_o *)sub_1B4D1DC(BattleWindowComponent_EndCall_TypeInfo);
      BattleWindowComponent_EndCall___ctor(
        v23,
        (Il2CppObject *)this,
        (intptr_t)Method_BattleResultBondsComponent_OpenEnd__,
        0LL);
      if ( v21 )
      {
        ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v21->klass->vtable._10_Open.method)(
          v21,
          v23,
          v21->klass->vtable._11_CompOpen.methodPtr);
        gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
        if ( gameObject )
        {
          v22 = &StringLiteral_5375/*"END_OPEN"*/;
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    sub_1B4D1EC(gameObject, v18);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !gameObject )
    goto LABEL_20;
  v22 = &StringLiteral_11958/*"SKIP"*/;
LABEL_19:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)*v22, 0LL);
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
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Object_array *v19; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  BattleResultBondsIconComponent_array *v25; // x22
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  BattleResultBondsIconComponent_array *v33; // x22
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  BattleResultBondsIconComponent_array *v49; // x22
  System_Collections_Hashtable_o *v50; // x0
  const MethodInfo *v51; // x1
  int max_length; // w8
  BattleResultBondsIconComponent_array *v53; // x20
  unsigned int v54; // w21
  _QWORD *v55; // x0
  System_Reflection_MethodBase_o *v56; // x20
  System_String_o *CommonSeName; // x0
  struct SePlayer_o *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  __int64 v61; // x0
  int v62; // [xsp+Ch] [xbp-44h] BYREF
  int v63; // [xsp+18h] [xbp-38h] BYREF
  int v64; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_49BE2DE & 1) == 0 )
  {
    sub_1B4CF90(&Method_BattleResultBondsComponent_OpenEnd__, method);
    sub_1B4CF90(&object___TypeInfo, v3);
    sub_1B4CF90(&SeManager_TypeInfo, v4);
    sub_1B4CF90(&float_TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_19349/*"from"*/, v6);
    sub_1B4CF90(&StringLiteral_23646/*"time"*/, v7);
    sub_1B4CF90(&StringLiteral_22003/*"onupdate"*/, v8);
    sub_1B4CF90(&StringLiteral_14898/*"UpdateValue"*/, v9);
    sub_1B4CF90(&StringLiteral_23685/*"to"*/, v10);
    sub_1B4CF90(&StringLiteral_21995/*"oncomplete"*/, v11);
    sub_1B4CF90(&StringLiteral_6622/*"FinishUpdateValue"*/, v12);
    sub_1B4CF90(&iTween_TypeInfo, v13);
    byte_49BE2DE = 1;
  }
  if ( !this->fields.bondsCountUp )
    return;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B4D038(object___TypeInfo, 10LL);
  if ( !BondsIconArray )
LABEL_65:
    sub_1B4D1EC(BondsIconArray, v16);
  v19 = (System_Object_array *)BondsIconArray;
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_19349/*"from"*/;
  if ( StringLiteral_19349/*"from"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B4D0CC(
                                                               StringLiteral_19349/*"from"*/,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = StringLiteral_19349/*"from"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v19->max_length )
    goto LABEL_64;
  v19->m_Items[0] = (Il2CppObject *)v16;
  sub_1B4CF34((CGThumbnailListItem_o *)v19->m_Items, v16, v17, v18);
  v64 = 0;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v64, v20, v21, v22);
  v25 = BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B4D0CC(
                                                               BondsIconArray,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
  }
  if ( v19->max_length <= 1 )
    goto LABEL_64;
  v19->m_Items[1] = &v25->obj;
  sub_1B4CF34((CGThumbnailListItem_o *)&v19->m_Items[1], (int32_t)v25, v23, v24);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_23685/*"to"*/;
  if ( StringLiteral_23685/*"to"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B4D0CC(
                                                               StringLiteral_23685/*"to"*/,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = StringLiteral_23685/*"to"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v19->max_length <= 2 )
    goto LABEL_64;
  v19->m_Items[2] = (Il2CppObject *)v16;
  sub_1B4CF34((CGThumbnailListItem_o *)&v19->m_Items[2], v16, v26, v27);
  v63 = 1065353216;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v63, v28, v29, v30);
  v33 = BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B4D0CC(
                                                               BondsIconArray,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
  }
  if ( v19->max_length <= 3 )
    goto LABEL_64;
  v19->m_Items[3] = &v33->obj;
  sub_1B4CF34((CGThumbnailListItem_o *)&v19->m_Items[3], (int32_t)v33, v31, v32);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22003/*"onupdate"*/;
  if ( StringLiteral_22003/*"onupdate"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B4D0CC(
                                                               StringLiteral_22003/*"onupdate"*/,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = StringLiteral_22003/*"onupdate"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v19->max_length <= 4 )
    goto LABEL_64;
  v19->m_Items[4] = (Il2CppObject *)v16;
  sub_1B4CF34((CGThumbnailListItem_o *)&v19->m_Items[4], v16, v34, v35);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_14898/*"UpdateValue"*/;
  if ( StringLiteral_14898/*"UpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B4D0CC(
                                                               StringLiteral_14898/*"UpdateValue"*/,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = StringLiteral_14898/*"UpdateValue"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v19->max_length <= 5 )
    goto LABEL_64;
  v19->m_Items[5] = (Il2CppObject *)v16;
  sub_1B4CF34((CGThumbnailListItem_o *)&v19->m_Items[5], v16, v36, v37);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_21995/*"oncomplete"*/;
  if ( StringLiteral_21995/*"oncomplete"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B4D0CC(
                                                               StringLiteral_21995/*"oncomplete"*/,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = StringLiteral_21995/*"oncomplete"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v19->max_length <= 6 )
    goto LABEL_64;
  v19->m_Items[6] = (Il2CppObject *)v16;
  sub_1B4CF34((CGThumbnailListItem_o *)&v19->m_Items[6], v16, v38, v39);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_6622/*"FinishUpdateValue"*/;
  if ( StringLiteral_6622/*"FinishUpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B4D0CC(
                                                               StringLiteral_6622/*"FinishUpdateValue"*/,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = StringLiteral_6622/*"FinishUpdateValue"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v19->max_length <= 7 )
    goto LABEL_64;
  v19->m_Items[7] = (Il2CppObject *)v16;
  sub_1B4CF34((CGThumbnailListItem_o *)&v19->m_Items[7], v16, v40, v41);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_23646/*"time"*/;
  if ( StringLiteral_23646/*"time"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B4D0CC(
                                                               StringLiteral_23646/*"time"*/,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = StringLiteral_23646/*"time"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v19->max_length <= 8 )
    goto LABEL_64;
  v19->m_Items[8] = (Il2CppObject *)v16;
  sub_1B4CF34((CGThumbnailListItem_o *)&v19->m_Items[8], v16, v42, v43);
  v62 = 1072064102;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v62, v44, v45, v46);
  v49 = BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B4D0CC(
                                                               BondsIconArray,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
    {
LABEL_66:
      v61 = sub_1B4D210(BondsIconArray);
      sub_1B4D0B8(v61, 0LL);
    }
  }
  if ( v19->max_length <= 9 )
    goto LABEL_64;
  v19->m_Items[9] = &v49->obj;
  sub_1B4CF34((CGThumbnailListItem_o *)&v19->m_Items[9], (int32_t)v49, v47, v48);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v50 = iTween__Hash(v19, 0LL);
  iTween__ValueTo(gameObject, v50, 0LL);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v51);
  if ( !BondsIconArray )
    goto LABEL_65;
  max_length = BondsIconArray->max_length;
  v53 = BondsIconArray;
  if ( max_length >= 1 )
  {
    v54 = 0;
    while ( v54 < max_length )
    {
      BondsIconArray = (BattleResultBondsIconComponent_array *)v53->m_Items[v54];
      if ( !BondsIconArray )
        goto LABEL_65;
      BattleResultBondsIconComponent__StartUpdateBuddyPoint((BattleResultBondsIconComponent_o *)BondsIconArray, 0LL);
      max_length = v53->max_length;
      if ( (int)++v54 >= max_length )
        goto LABEL_57;
    }
LABEL_64:
    sub_1B4D1F4(BondsIconArray, v16);
  }
LABEL_57:
  if ( this->fields.updateFlg )
  {
    v55 = Method_BattleResultBondsComponent_OpenEnd__;
    if ( (*((_BYTE *)Method_BattleResultBondsComponent_OpenEnd__ + 83) & 2) != 0 )
      v55 = (_QWORD *)sub_1B4CFA8(Method_BattleResultBondsComponent_OpenEnd__);
    v56 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v55, v55[4]);
    if ( !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    CommonSeName = SeManager__GetCommonSeName(15, 0LL);
    v58 = OverwriteAssetSoundName__PlaySe(v56, CommonSeName, 0, 0LL);
    this->fields.MeterSePlayer = v58;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.MeterSePlayer, (int32_t)v58, v59, v60);
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  System_Collections_Generic_List_object__o *bondsList; // x0
  __int64 v27; // x1
  struct BattleInfoData_o *battle_info; // x9
  struct DeckData_array *waveMyDecks; // x26
  __int64 maxWave; // x27
  BattleUserServantData_array *userSvt; // x24
  unsigned __int64 v32; // x8
  il2cpp_array_size_t max_length; // w9
  signed __int64 v34; // x29
  System_Collections_Generic_List_object__o *v35; // x20
  __int64 v36; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  System_Object_array *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_49BE2DB & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__,
      battleData);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__,
      v19);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__,
      v20);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__, v21);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__, v22);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__, v23);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__, v24);
    sub_1B4CF90(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v25);
    byte_49BE2DB = 1;
  }
  memset(&v42, 0, sizeof(v42));
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
    v32 = 0LL;
    max_length = *(_QWORD *)&waveMyDecks->max_length;
    do
    {
      if ( v32 >= max_length )
        sub_1B4D1F4(bondsList, v27);
      v34 = v32 + 1;
      BattleResultBondsComponent__SetResultDataLocal(
        this,
        waveMyDecks->m_Items[v32],
        oldCollects,
        followerType,
        userSvt,
        battleResult,
        isHideBuddyPointResult,
        battleData,
        v32 + 1,
        maxWave,
        v41);
      max_length = waveMyDecks->max_length;
      v32 = v34;
    }
    while ( v34 < (int)max_length );
  }
  v35 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  bondsList = (System_Collections_Generic_List_object__o *)this->fields.bondsList;
  if ( !bondsList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    bondsList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
  {
    if ( !v42.fields._current )
      sub_1B4D1EC(0LL, v36);
    BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                      (BattleResultBondsDeckPerWaveComponent_o *)v42.fields._current,
                                                                      0LL);
    if ( !v35 )
      sub_1B4D1EC(BondsIconArray, BondsIconArray);
    System_Collections_Generic_List_object___AddRange(
      v35,
      BondsIconArray,
      (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
  if ( !v35 )
LABEL_21:
    sub_1B4D1EC(bondsList, v27);
  v38 = System_Collections_Generic_List_object___ToArray(
          v35,
          (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
  this->fields.bondsIconArray = (struct BattleResultBondsIconComponent_array *)v38;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.bondsIconArray, (int32_t)v38, v39, v40);
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
  int v49; // w8
  int64_t Instance; // x0
  int64_t userSvtId; // x1
  Il2CppObject *v52; // x25
  Il2CppObject *v53; // x22
  Il2CppObject *multiBondsPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *v56; // x9
  const MethodInfo *v57; // x6
  System_Collections_Generic_IEnumerable_TSource__o *rewardInfos; // x20
  BattleResultBondsComponent___c_c *v59; // x0
  System_Func_object__bool__o *_9__49_0; // x21
  Il2CppObject *v61; // x26
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x0
  System_Collections_Generic_List_TSource__o *v66; // x0
  System_Collections_Generic_List_object__o *v67; // x21
  BattleResultBondsComponent_c *v68; // x0
  BattleResultBondsComponent_c *v69; // x0
  Il2CppObject *String_68762736; // x20
  System_Collections_Generic_IEnumerable_T__o *v71; // x0
  BattleResultBondsComponent_c *v72; // x0
  System_String_o *GET_NEW_SVT_KEY; // x20
  System_Object_array *v74; // x21
  System_String_o *v75; // x0
  BattleResultBondsComponent___c_c *v76; // x0
  System_Collections_Generic_IEnumerable_TSource__o *getJoinSvts; // x20
  System_Func_object__bool__o *_9__49_1; // x21
  Il2CppObject *v79; // x26
  struct BattleResultBondsComponent___c_StaticFields *v80; // x0
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  System_Collections_Generic_List_TSource__o *v84; // x0
  System_Collections_Generic_List_object__o *v85; // x21
  BattleResultBondsComponent_c *v86; // x0
  BattleResultBondsComponent_c *v87; // x0
  Il2CppObject *v88; // x20
  System_Collections_Generic_IEnumerable_T__o *v89; // x0
  BattleResultBondsComponent_c *v90; // x0
  System_String_o *GET_EXIST_SVT_KEY; // x20
  System_Object_array *v92; // x21
  System_String_o *v93; // x0
  struct BattleDeckServantData_array *svts; // x24
  int max_length; // w8
  unsigned int v96; // w19
  int32_t v97; // w21
  BattleDeckServantData_o *v98; // x27
  BattleResultBondsComponent_o *v99; // x21
  BattleResultBondsComponent___c__DisplayClass49_0_o *v100; // x28
  UserServantEntity_o *v101; // x24
  BattleResultBondsComponent_o *SvtId; // x0
  const MethodInfo *v103; // x3
  UserServantCollectionEntity_o *ServantCollection; // x26
  signed int v105; // w8
  ServantEntity_o *v106; // x29
  unsigned int v107; // w25
  BattleUserServantData_o *v108; // x20
  __int128 v109; // q0
  const MethodInfo *v110; // x5
  int32_t afterLimitCount; // w6
  int32_t v112; // w25
  int32_t v113; // w21
  BattleResultBondsIconComponent_o *v114; // x20
  int afterIconLimitCount; // w8
  bool v116; // zf
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x27
  BattleBuddyPointInfo_o *v118; // x20
  int32_t v119; // w26
  System_Func_object__bool__o *v120; // x20
  BattleUserServantData_array *v121; // x22
  int32_t v122; // w23
  BattleResultBondsComponent_o *v123; // x25
  UserServantCollectionEntity_o *v124; // x28
  int32_t v125; // w26
  BattleResultBondsIconComponent_o *v126; // x27
  struct BattleResultBondsIconComponent_array *v127; // x8
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  bool v129; // w20
  bool updateFlg; // w20
  UnityEngine_Component_o *v131; // x0
  struct BattleResultBondsIconComponent_array *v132; // x8
  int32_t v133; // w2
  const MethodInfo *v134; // x3
  __int64 v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  __int64 v138; // x8
  int32_t cnt; // [xsp+14h] [xbp-10Ch]
  ServantLimitImageMaster_o *svtLimitImageMaster; // [xsp+18h] [xbp-108h]
  UserServantCollectionEntity_o *v142; // [xsp+28h] [xbp-F8h]
  UserServantCollectionMaster_o *MasterData_object; // [xsp+30h] [xbp-F0h]
  BattleResultBondsDeckPerWaveComponent_o *Object_object; // [xsp+38h] [xbp-E8h]
  UnityEngine_Object_o *x; // [xsp+40h] [xbp-E0h]
  struct BattleDeckServantData_array *v146; // [xsp+48h] [xbp-D8h]
  Il2CppObject *v147; // [xsp+50h] [xbp-D0h]
  Il2CppObject *v148; // [xsp+58h] [xbp-C8h]
  int32_t Type; // [xsp+6Ch] [xbp-B4h]
  int32_t targetIndex; // [xsp+7Ch] [xbp-A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v153; // [xsp+80h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v154; // [xsp+A0h] [xbp-80h]

  if ( (byte_49BE2DC & 1) == 0 )
  {
    sub_1B4CF90(&Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___, myDeck);
    sub_1B4CF90(&Method_BasicHelper_Find_BattleBuddyPointInfo___, v15);
    sub_1B4CF90(&BattleResultBondsComponent_TypeInfo, v16);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, v17);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v18);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantMaster___, v19);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v20);
    sub_1B4CF90(&DataManager_TypeInfo, v21);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v22);
    sub_1B4CF90(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v23);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_GetSvts___, v24);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_QuestRewardInfo___, v25);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_GetSvts___, v26);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_QuestRewardInfo___, v27);
    sub_1B4CF90(&System_Func_GetSvts__bool__TypeInfo, v28);
    sub_1B4CF90(&System_Func_BattleBuddyPointInfo__bool__TypeInfo, v29);
    sub_1B4CF90(&System_Func_QuestRewardInfo__bool__TypeInfo, v30);
    sub_1B4CF90(&Method_JsonManager_DeserializeArray_GetSvts___, v31);
    sub_1B4CF90(&Method_JsonManager_DeserializeArray_QuestRewardInfo___, v32);
    sub_1B4CF90(&JsonManager_TypeInfo, v33);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__, v34);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GetSvts__AddRange__, v35);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__, v36);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GetSvts__ToArray__, v37);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__, v38);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GetSvts__get_Count__, v39);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__, v40);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v41);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v42);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43);
    sub_1B4CF90(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__, v44);
    sub_1B4CF90(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__, v45);
    sub_1B4CF90(&Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__, v46);
    sub_1B4CF90(&BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo, v47);
    sub_1B4CF90(&BattleResultBondsComponent___c_TypeInfo, v48);
    byte_49BE2DC = 1;
  }
  Type = Follower__getType(followerType, 0LL);
  if ( Type )
    v49 = 5;
  else
    v49 = 6;
  cnt = v49;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_143;
  MasterData_object = (UserServantCollectionMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_143;
  v52 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_143;
  v53 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( this->fields.isMultiDeck )
  {
    Instance = (int64_t)this->fields.multiBondsRoot;
    if ( !Instance )
      goto LABEL_143;
    multiBondsPrefab = (Il2CppObject *)this->fields.multiBondsPrefab;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    Object_object = (BattleResultBondsDeckPerWaveComponent_o *)BaseMonoBehaviour__createObject_object_(
                                                                 (BaseMonoBehaviour_o *)this,
                                                                 multiBondsPrefab,
                                                                 transform,
                                                                 0LL,
                                                                 (const MethodInfo_2EEBE08 *)Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    if ( this->fields.isMultiDeck )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      svtLimitImageMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      goto LABEL_17;
    }
  }
  else
  {
    Object_object = 0LL;
  }
  svtLimitImageMaster = 0LL;
LABEL_17:
  v56 = x;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v56 = x;
  }
  Instance = UnityEngine_Object__op_Inequality(v56, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)x;
    if ( !x )
      goto LABEL_143;
    Instance = BattleData__IsWarBoard((BattleData_o *)x, 0LL);
    this->fields.isWarboard = Instance & 1;
    if ( (Instance & 1) != 0 )
    {
      if ( !battleResult )
        goto LABEL_143;
      rewardInfos = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.rewardInfos;
      v59 = BattleResultBondsComponent___c_TypeInfo;
      if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v59 = BattleResultBondsComponent___c_TypeInfo;
      }
      _9__49_0 = (System_Func_object__bool__o *)v59->static_fields->__9__49_0;
      if ( !_9__49_0 )
      {
        if ( !v59->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v59);
          v59 = BattleResultBondsComponent___c_TypeInfo;
        }
        v61 = (Il2CppObject *)v59->static_fields->__9;
        _9__49_0 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_QuestRewardInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__49_0,
          v61,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__,
          0LL);
        static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
        static_fields->__9__49_0 = (struct System_Func_QuestRewardInfo__bool__o *)_9__49_0;
        sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v63, v64);
      }
      v65 = System_Linq_Enumerable__Where_object_(
              rewardInfos,
              (System_Func_TSource__bool__o *)_9__49_0,
              (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
      v66 = System_Linq_Enumerable__ToList_object_(
              v65,
              (const MethodInfo_2F401C8 *)Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
      if ( v66 )
      {
        v67 = (System_Collections_Generic_List_object__o *)v66;
        if ( v66->fields._size >= 1 )
        {
          v68 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v68 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v68->static_fields->GET_NEW_SVT_KEY, 0LL) )
          {
            v69 = BattleResultBondsComponent_TypeInfo;
            if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v69 = BattleResultBondsComponent_TypeInfo;
            }
            String_68762736 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_68762736(
                                                v69->static_fields->GET_NEW_SVT_KEY,
                                                0LL);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v71 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_object_(
                                                                   String_68762736,
                                                                   (const MethodInfo_2F6ADF0 *)Method_JsonManager_DeserializeArray_QuestRewardInfo___);
            System_Collections_Generic_List_object___AddRange(
              v67,
              v71,
              (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
          }
          v72 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v72 = BattleResultBondsComponent_TypeInfo;
          }
          GET_NEW_SVT_KEY = v72->static_fields->GET_NEW_SVT_KEY;
          v74 = System_Collections_Generic_List_object___ToArray(
                  v67,
                  (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v75 = JsonManager__toJson(&v74->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_NEW_SVT_KEY, v75, 0LL);
        }
      }
      v76 = BattleResultBondsComponent___c_TypeInfo;
      getJoinSvts = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.getJoinSvts;
      if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v76 = BattleResultBondsComponent___c_TypeInfo;
      }
      _9__49_1 = (System_Func_object__bool__o *)v76->static_fields->__9__49_1;
      if ( !_9__49_1 )
      {
        if ( !v76->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v76);
          v76 = BattleResultBondsComponent___c_TypeInfo;
        }
        v79 = (Il2CppObject *)v76->static_fields->__9;
        _9__49_1 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_GetSvts__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__49_1,
          v79,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__,
          0LL);
        v80 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        v80->__9__49_1 = (struct System_Func_GetSvts__bool__o *)_9__49_1;
        sub_1B4CF34((CGThumbnailListItem_o *)&v80->__9__49_1, (int32_t)_9__49_1, v81, v82);
      }
      v83 = System_Linq_Enumerable__Where_object_(
              getJoinSvts,
              (System_Func_TSource__bool__o *)_9__49_1,
              (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_GetSvts___);
      v84 = System_Linq_Enumerable__ToList_object_(
              v83,
              (const MethodInfo_2F401C8 *)Method_System_Linq_Enumerable_ToList_GetSvts___);
      if ( v84 )
      {
        v85 = (System_Collections_Generic_List_object__o *)v84;
        if ( v84->fields._size >= 1 )
        {
          v86 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v86 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v86->static_fields->GET_EXIST_SVT_KEY, 0LL) )
          {
            v87 = BattleResultBondsComponent_TypeInfo;
            if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v87 = BattleResultBondsComponent_TypeInfo;
            }
            v88 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_68762736(
                                    v87->static_fields->GET_EXIST_SVT_KEY,
                                    0LL);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v89 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_object_(
                                                                   v88,
                                                                   (const MethodInfo_2F6ADF0 *)Method_JsonManager_DeserializeArray_GetSvts___);
            System_Collections_Generic_List_object___AddRange(
              v85,
              v89,
              (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_GetSvts__AddRange__);
          }
          v90 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v90 = BattleResultBondsComponent_TypeInfo;
          }
          GET_EXIST_SVT_KEY = v90->static_fields->GET_EXIST_SVT_KEY;
          v92 = System_Collections_Generic_List_object___ToArray(
                  v85,
                  (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_GetSvts__ToArray__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v93 = JsonManager__toJson(&v92->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_EXIST_SVT_KEY, v93, 0LL);
        }
      }
      UnityEngine_PlayerPrefs__Save(0LL);
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
    v96 = 0;
    v97 = 0;
    v147 = v53;
    v148 = v52;
    v146 = svts;
    while ( 1 )
    {
      targetIndex = v97;
      if ( v96 >= max_length )
LABEL_144:
        sub_1B4D1F4(Instance, userSvtId);
      v98 = svts->m_Items[v96];
      v99 = this;
      v100 = (BattleResultBondsComponent___c__DisplayClass49_0_o *)sub_1B4D1DC(BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo);
      BattleResultBondsComponent___c__DisplayClass49_0___ctor(v100, 0LL);
      if ( !v98 || !v100 )
        goto LABEL_143;
      userSvtId = v98->fields.userSvtId;
      v100->fields.userSvtId = userSvtId;
      if ( userSvtId >= 1 )
        break;
      Instance = (int64_t)x;
      if ( !x )
        goto LABEL_143;
      Instance = BattleData__IsInterruptionQuest((BattleData_o *)x, 0LL);
      this = v99;
      if ( (Instance & 1) != 0 )
      {
        v113 = targetIndex;
        if ( this->fields.isMultiDeck )
        {
          Instance = (int64_t)Object_object;
          if ( !Object_object )
            goto LABEL_143;
          Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, 0LL);
          v114 = (BattleResultBondsIconComponent_o *)Instance;
          if ( !Instance )
            goto LABEL_143;
        }
        else
        {
          v132 = this->fields.collects;
          if ( !v132 )
            goto LABEL_143;
          if ( targetIndex >= v132->max_length )
            goto LABEL_144;
          v114 = v132->m_Items[targetIndex];
          if ( !v114 )
            goto LABEL_143;
        }
        BattleResultBondsIconComponent__setServantData(v114, 0LL, 0LL, 0, 0, 0, 0, 0LL);
        v131 = (UnityEngine_Component_o *)v114;
LABEL_127:
        Instance = (int64_t)UnityEngine_Component__get_gameObject(v131, 0LL);
        if ( !Instance )
          goto LABEL_143;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
LABEL_129:
        v97 = v113 + 1;
        goto LABEL_130;
      }
      v97 = targetIndex;
LABEL_130:
      max_length = svts->max_length;
      if ( (int)++v96 >= max_length )
        goto LABEL_133;
    }
    if ( !v52 )
      goto LABEL_143;
    Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)v52,
                          userSvtId,
                          (const MethodInfo_319FEF8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_143;
    v101 = (UserServantEntity_o *)Instance;
    SvtId = (BattleResultBondsComponent_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
    ServantCollection = BattleResultBondsComponent__getServantCollection(SvtId, oldCollects, (int32_t)SvtId, v103);
    Instance = UserServantEntity__getSvtId(v101, 0LL);
    if ( !v53 )
      goto LABEL_143;
    Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)v53,
                          Instance,
                          (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !usrSvts )
      goto LABEL_143;
    v105 = usrSvts->max_length;
    v106 = (ServantEntity_o *)Instance;
    if ( v105 < 1 )
    {
LABEL_86:
      afterLimitCount = -1;
      v112 = -1;
    }
    else
    {
      v107 = 0;
      while ( 1 )
      {
        if ( v107 >= v105 )
          goto LABEL_144;
        v108 = usrSvts->m_Items[v107];
        if ( !v108 )
          goto LABEL_143;
        v109 = *(_OWORD *)&v108->fields.id.fields.fakeValue;
        *(_OWORD *)&v154.fields.currentCryptoKey = *(_OWORD *)&v108->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v154.fields.fakeValue = v109;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v153 = v154;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v153, 0LL);
        if ( Instance == v100->fields.userSvtId )
          break;
        v105 = usrSvts->max_length;
        if ( (int)++v107 >= v105 )
          goto LABEL_86;
      }
      if ( v99->fields.isMultiDeck )
        BattleResultBondsComponent__UpdateAfterLimitCount(
          (BattleResultBondsComponent_o *)Instance,
          (BattleData_o *)x,
          v108,
          v98,
          svtLimitImageMaster,
          v110);
      Instance = UserServantEntity__getIconLimitCount((UserServantEntity_o *)v108, 0, 0LL);
      afterIconLimitCount = v108->fields.afterIconLimitCount;
      afterLimitCount = v108->fields.afterLimitCount;
      v116 = afterIconLimitCount < 0 || (_DWORD)Instance == afterIconLimitCount;
      v112 = v116 ? Instance : v108->fields.afterIconLimitCount;
    }
    if ( !battleResult )
      goto LABEL_143;
    buddyPointInfos = battleResult->fields.buddyPointInfos;
    if ( buddyPointInfos )
    {
      v118 = 0LL;
      if ( *(_QWORD *)&buddyPointInfos->max_length && !isHideBuddyPointResult )
      {
        v142 = ServantCollection;
        v119 = afterLimitCount;
        v120 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_BattleBuddyPointInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v120,
          (Il2CppObject *)v100,
          Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__,
          0LL);
        Instance = (int64_t)BasicHelper__Find_object_(
                              (System_Object_array *)buddyPointInfos,
                              (System_Func_T__bool__o *)v120,
                              (const MethodInfo_2EED060 *)Method_BasicHelper_Find_BattleBuddyPointInfo___);
        afterLimitCount = v119;
        ServantCollection = v142;
        v118 = (BattleBuddyPointInfo_o *)Instance;
      }
    }
    else
    {
      v118 = 0LL;
    }
    this = v99;
    if ( v99->fields.isMultiDeck )
    {
      Instance = (int64_t)Object_object;
      v113 = targetIndex;
      if ( !Object_object )
        goto LABEL_143;
      v121 = usrSvts;
      v122 = v112;
      v123 = this;
      v124 = ServantCollection;
      v125 = afterLimitCount;
      Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, 0LL);
      v126 = (BattleResultBondsIconComponent_o *)Instance;
      afterLimitCount = v125;
      ServantCollection = v124;
      this = v123;
      v112 = v122;
      usrSvts = v121;
      if ( !Instance )
        goto LABEL_143;
    }
    else
    {
      v127 = v99->fields.collects;
      v113 = targetIndex;
      if ( !v127 )
        goto LABEL_143;
      if ( targetIndex >= v127->max_length )
        goto LABEL_144;
      v126 = v127->m_Items[targetIndex];
      if ( !v126 )
        goto LABEL_143;
    }
    BattleResultBondsIconComponent__setServantData(
      v126,
      ServantCollection,
      v101,
      v112,
      this->fields.baseFriendshipExp,
      Type == 0,
      afterLimitCount,
      0LL);
    BattleResultBondsIconComponent__SetBuddyPointInfo(v126, v118, battleResult->fields.eventId, 0LL);
    if ( !v106 )
      goto LABEL_143;
    v53 = v147;
    v52 = v148;
    if ( ServantEntity__checkIsHeroineSvt(v106, 0LL) && !UserServantEntity__IsAddFriendShipHeroine(v101, 0LL) )
    {
      updateFlg = this->fields.updateFlg;
      this->fields.updateFlg = updateFlg | BattleResultBondsIconComponent__setNextServantData(
                                             v126,
                                             ServantCollection,
                                             0LL);
      BattleResultBondsIconComponent__SetIsNoFriendship(v126, 0LL);
    }
    else
    {
      Instance = (int64_t)MasterData_object;
      if ( !MasterData_object )
        goto LABEL_143;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                           MasterData_object,
                           v126->fields.userId,
                           v126->fields.svtId,
                           0LL);
      v129 = this->fields.updateFlg;
      this->fields.updateFlg = v129 | BattleResultBondsIconComponent__setNextServantData(v126, EntityDefinitely, 0LL);
    }
    svts = v146;
    BattleResultBondsIconComponent__ChangeGauge(v126, 0.0, 0LL);
    BattleResultBondsIconComponent__InitBuddyPointInfo(v126, 0LL);
    if ( this->fields.isMultiDeck )
    {
      v131 = (UnityEngine_Component_o *)v126;
      goto LABEL_127;
    }
    goto LABEL_129;
  }
  v97 = 0;
LABEL_133:
  if ( !this->fields.isMultiDeck )
  {
    BattleResultBondsComponent__NormalBondsInit(this, v97, cnt, Type == 0, battleResult, isHideBuddyPointResult, v57);
    return;
  }
  if ( !Object_object )
    goto LABEL_143;
  BattleResultBondsDeckPerWaveComponent__SetWaveCount(Object_object, currentWave, maxWave, 0LL);
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object_object, 0LL);
  if ( !Instance )
    goto LABEL_143;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  BattleResultBondsDeckPerWaveComponent__RepositionIcons(Object_object, 0LL);
  Instance = (int64_t)this->fields.multiBondsRoot;
  if ( !Instance
    || ((*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
          Instance,
          *(_QWORD *)(*(_QWORD *)Instance + 448LL)),
        (Instance = (int64_t)this->fields.bondsList) == 0)
    || (v135 = *(_QWORD *)(Instance + 16),
        v136 = Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__,
        ++*(_DWORD *)(Instance + 28),
        !v135) )
  {
LABEL_143:
    sub_1B4D1EC(Instance, userSvtId);
  }
  v137 = *(int *)(Instance + 24);
  if ( (unsigned int)v137 >= *(_DWORD *)(v135 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)Object_object,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
  }
  else
  {
    v138 = v135 + 8 * v137;
    *(_DWORD *)(Instance + 24) = v137 + 1;
    *(_QWORD *)(v138 + 32) = Object_object;
    sub_1B4CF34((CGThumbnailListItem_o *)(v138 + 32), (int32_t)Object_object, v133, v134);
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
        sub_1B4D1F4(BondsIconArray, v4);
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
    sub_1B4D1EC(BondsIconArray, v4);
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

  if ( (byte_49BE2ED & 1) == 0 )
  {
    sub_1B4CF90(&ImageLimitCount_TypeInfo, battleData);
    this = (BattleResultBondsComponent_o *)sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_49BE2ED = 1;
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
  v15 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v15;
  *(_QWORD *)&v27.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v27, 0LL);
  this = (BattleResultBondsComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                           userSvtData->fields.limitCount,
                                           0LL);
  if ( !svtLimitImageMaster )
LABEL_26:
    sub_1B4D1EC(this, battleData);
  if ( ServantLimitImageMaster__IsServantLimitCountSeal(svtLimitImageMaster, v16, (int32_t)this, 0LL) )
  {
    v18 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v28.fields.currentCryptoKey = v18;
    *(_QWORD *)&v28.fields.fakeValue = v17;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v28, 0LL);
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
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v29.fields.currentCryptoKey = v23;
      *(_QWORD *)&v29.fields.fakeValue = v22;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v29, 0LL);
      afterLimitCount = userSvtData->fields.afterLimitCount;
      v26 = v24;
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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
        sub_1B4D1F4(BondsIconArray, v5);
      BondsIconArray = (BattleResultBondsIconComponent_array *)v7->m_Items[v8];
      if ( !BondsIconArray )
        break;
      BondsIconArray = (BattleResultBondsIconComponent_array *)BattleResultBondsIconComponent__ChangeGauge(
                                                                 (BattleResultBondsIconComponent_o *)BondsIconArray,
                                                                 val,
                                                                 0LL);
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_9:
    sub_1B4D1EC(BondsIconArray, v5);
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

  showList = this->fields.showList;
  if ( !showList )
    goto LABEL_14;
  showIndex = this->fields.showIndex;
  v4 = this;
  if ( (unsigned int)showIndex >= showList->max_length )
    sub_1B4D1F4(this, method);
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
    sub_1B4D1EC(this, method);
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
  Il2CppObject *ComponentInChildren_object; // x23
  BattleResultBondsComponent_c *v23; // x0
  Il2CppObject *v24; // x24
  bool v25; // w0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x4
  UnityEngine_Transform_o *transform; // x21
  float v30; // s8
  float y; // s9
  int v32; // s2
  float v33; // s0
  float v34; // s1
  __int64 v35; // x8
  _QWORD *v36; // x9
  __int64 klass_low; // x10
  __int64 v38; // x8
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49BE2E2 & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, text);
    sub_1B4CF90(&BattleResultBondsComponent_TypeInfo, v13);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___, v14);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__Add__, v16);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v17);
    sub_1B4CF90(&StringLiteral_16981/*"bit_reward_shine02"*/, v18);
    byte_49BE2E2 = 1;
  }
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             this->fields.confPrefab,
             this->fields.confRoot,
             0LL,
             0LL);
  if ( !Object )
    goto LABEL_36;
  v21 = Object;
  Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Object, 0LL);
  if ( !Object )
    goto LABEL_36;
  v39.fields.y = -112.0 - posY;
  v39.fields.x = 0.0;
  v39.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v39, 0LL);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 v21,
                                 (const MethodInfo_2F536A8 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
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
      v23 = BattleResultBondsComponent_TypeInfo;
      if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
        v23 = BattleResultBondsComponent_TypeInfo;
      }
      UILabel__SetCondensedScale(
        (UILabel_o *)ComponentInChildren_object,
        v23->static_fields->CONF_LABEL_MAX_WIDTH - 36,
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
  v24 = UnityEngine_GameObject__GetComponentInChildren_object_(
          v21,
          (const MethodInfo_2F536A8 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v25 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0LL, 0LL);
  if ( (iconImageId & 0x80000000) == 0 && v25 )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( isCoin )
      AtlasManager__SetCoin((UISprite_o *)v24, iconImageId, 0LL);
    else
      AtlasManager__SetItem((UISprite_o *)v24, iconImageId, 0LL);
    BattleResultBondsComponent__CreateRewardEffect(
      this,
      this->fields.resultAssetData,
      (UISprite_o *)v24,
      (System_String_o *)StringLiteral_16981/*"bit_reward_shine02"*/,
      v28);
    if ( ComponentInChildren_object )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ComponentInChildren_object, 0LL);
      Object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)ComponentInChildren_object,
                                             0LL);
      if ( Object )
      {
        LODWORD(v30) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Object, 0LL);
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
            *(UnityEngine_Vector3_o *)(&v32 - 2) = UnityEngine_Transform__get_localPosition(
                                                     (UnityEngine_Transform_o *)Object,
                                                     0LL);
            if ( transform )
            {
              v33 = v30 + 36.0;
              v34 = y;
              UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v32 - 2), 0LL);
              goto LABEL_31;
            }
          }
        }
      }
    }
LABEL_36:
    sub_1B4D1EC(Object, v20);
  }
LABEL_31:
  Object = (UnityEngine_GameObject_o *)this->fields.conflist;
  if ( !Object )
    goto LABEL_36;
  v35 = *(_QWORD *)&Object->fields.m_CachedPtr;
  v36 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(Object[1].klass);
  if ( !v35 )
    goto LABEL_36;
  klass_low = SLODWORD(Object[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v35 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Object,
      (Il2CppObject *)v21,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = v35 + 8 * klass_low;
    LODWORD(Object[1].klass) = klass_low + 1;
    *(_QWORD *)(v38 + 32) = v21;
    sub_1B4CF34((CGThumbnailListItem_o *)(v38 + 32), (int32_t)v21, v26, v27);
  }
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
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x1
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int colIndex; // w8
  __int64 v28; // x9
  int v29; // w10
  __int64 *v30; // x8
  __int64 v31; // x20
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 *v34; // x21
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_GameObject__o *conflist; // x8
  int32_t size; // w2
  int v38; // w9
  UnityEngine_Object_o *levelUpSimpleAnim; // x22
  PlayMakerFSM_c *klass; // x8
  PlayMakerFSM_o *v41; // x22
  __int64 v42; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v44; // x0
  UnityEngine_Object_o *levelUpAnim; // x22
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  __int64 v48; // x9
  __int64 v49; // x8
  __int64 v50; // x9
  struct BattleResultBondsIconComponent_o *v51; // x1
  UnityEngine_Object_o *figureMoveRoot; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o **v54; // x21
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  UnityEngine_GameObject_o *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t svtId; // w22
  int32_t svtLimit; // w23
  BattleResultBondsFigureComponent_o *bondsFigure; // x19
  UnityEngine_GameObject_o *v64; // x21
  System_Action_o *v65; // x24
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49BE2E0 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__Clear__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v9);
    sub_1B4CF90(&SimpleAnimation_State_TypeInfo, v10);
    sub_1B4CF90(&BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo, v11);
    sub_1B4CF90(&Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__, v12);
    sub_1B4CF90(&BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo, v13);
    sub_1B4CF90(&StringLiteral_16965/*"bit_result_levelup01"*/, v14);
    sub_1B4CF90(&StringLiteral_3476/*"CLOSE"*/, v15);
    sub_1B4CF90(&StringLiteral_5380/*"END_PROC"*/, v16);
    sub_1B4CF90(&StringLiteral_3479/*"CLOSE_BOND_UP_ROOT"*/, v17);
    byte_49BE2E0 = 1;
  }
  memset(&v67, 0, sizeof(v67));
  v18 = sub_1B4D1DC(BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo);
  BattleResultBondsComponent___c__DisplayClass61_0___ctor(
    (BattleResultBondsComponent___c__DisplayClass61_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_10;
  *(_QWORD *)(v18 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v18 + 16), (int32_t)this, v21, v22);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v23);
  *(_QWORD *)(v18 + 24) = BondsIconArray;
  sub_1B4CF34((CGThumbnailListItem_o *)(v18 + 24), (int32_t)BondsIconArray, v25, v26);
  colIndex = this->fields.colIndex;
  v28 = *(_QWORD *)(v18 + 24);
  *(_DWORD *)(v18 + 32) = colIndex;
  if ( !v28 )
    goto LABEL_10;
  while ( 1 )
  {
    v29 = *(_DWORD *)(v28 + 24);
    if ( colIndex >= v29 )
    {
      myFsm = this->fields.myFsm;
      if ( this->fields.openBoundsFlg )
      {
        if ( !myFsm )
          goto LABEL_10;
        if ( this->fields.isMultiDeck )
          v30 = &StringLiteral_3479/*"CLOSE_BOND_UP_ROOT"*/;
        else
          v30 = &StringLiteral_5380/*"END_PROC"*/;
      }
      else
      {
        if ( !myFsm )
          goto LABEL_10;
        v30 = &StringLiteral_3476/*"CLOSE"*/;
      }
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v30, 0LL);
      return;
    }
    this->fields.colIndex = colIndex;
    if ( colIndex >= (unsigned int)v29 )
      goto LABEL_65;
    myFsm = *(PlayMakerFSM_o **)(v28 + 8LL * colIndex + 32);
    if ( !myFsm )
      goto LABEL_10;
    myFsm = (PlayMakerFSM_o *)BattleResultBondsIconComponent__isChangeRank(
                                (BattleResultBondsIconComponent_o *)myFsm,
                                0LL);
    if ( ((unsigned __int8)myFsm & 1) != 0 )
      break;
    v28 = *(_QWORD *)(v18 + 24);
    colIndex = *(_DWORD *)(v18 + 32) + 1;
    *(_DWORD *)(v18 + 32) = colIndex;
    if ( !v28 )
      goto LABEL_10;
  }
  v31 = sub_1B4D1DC(BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo);
  BattleResultBondsComponent___c__DisplayClass61_1___ctor(
    (BattleResultBondsComponent___c__DisplayClass61_1_o *)v31,
    0LL);
  if ( !v31 )
    goto LABEL_10;
  *(_QWORD *)(v31 + 24) = v18;
  v34 = (__int64 *)(v31 + 24);
  sub_1B4CF34((CGThumbnailListItem_o *)(v31 + 24), v18, v32, v33);
  myFsm = (PlayMakerFSM_o *)this->fields.conflist;
  if ( !myFsm )
    goto LABEL_10;
  if ( SLODWORD(myFsm->fields.m_CancellationTokenSource) < 1 )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v66,
    (System_Collections_Generic_List_object__o *)myFsm,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v67 = v66;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v67,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v67.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_68804456((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v67,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  conflist = this->fields.conflist;
  if ( !conflist )
    goto LABEL_10;
  size = conflist->fields._size;
  v38 = conflist->fields._version + 1;
  conflist->fields._size = 0;
  conflist->fields._version = v38;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)conflist->fields._items, 0, size, 0LL);
LABEL_26:
  myFsm = (PlayMakerFSM_o *)this->fields.upRoot;
  if ( !myFsm )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 1, 0LL);
  levelUpSimpleAnim = (UnityEngine_Object_o *)this->fields.levelUpSimpleAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(levelUpSimpleAnim, 0LL, 0LL) )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.levelUpSimpleAnim;
    if ( myFsm )
    {
      myFsm = (PlayMakerFSM_o *)SimpleAnimation__get_Item(
                                  (SimpleAnimation_o *)myFsm,
                                  (System_String_o *)StringLiteral_16965/*"bit_result_levelup01"*/,
                                  0LL);
      if ( myFsm )
      {
        klass = myFsm->klass;
        v41 = myFsm;
        v42 = *(unsigned __int16 *)(&myFsm->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&myFsm->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v42;
            p_offset += 2;
            if ( !v42 )
              goto LABEL_36;
          }
          v44 = (__int64)(&klass->vtable._4_OnBeforeSerialize.method + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_36:
          v44 = sub_1B9D724(myFsm, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(PlayMakerFSM_o *, _QWORD, float))v44)(v41, *(_QWORD *)(v44 + 8), 0.0);
        myFsm = (PlayMakerFSM_o *)this->fields.levelUpSimpleAnim;
        if ( myFsm )
        {
          myFsm = (PlayMakerFSM_o *)SimpleAnimation__Play_64044448(
                                      (SimpleAnimation_o *)myFsm,
                                      (System_String_o *)StringLiteral_16965/*"bit_result_levelup01"*/,
                                      0LL);
          goto LABEL_51;
        }
      }
    }
LABEL_10:
    sub_1B4D1EC(myFsm, v20);
  }
  levelUpAnim = (UnityEngine_Object_o *)this->fields.levelUpAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  myFsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Inequality(levelUpAnim, 0LL, 0LL);
  if ( ((unsigned __int8)myFsm & 1) != 0 )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.levelUpAnim;
    if ( !myFsm )
      goto LABEL_10;
    myFsm = (PlayMakerFSM_o *)UnityEngine_Animation__get_Item(
                                (UnityEngine_Animation_o *)myFsm,
                                (System_String_o *)StringLiteral_16965/*"bit_result_levelup01"*/,
                                0LL);
    if ( !myFsm )
      goto LABEL_10;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)myFsm, 0.0, 0LL);
    myFsm = (PlayMakerFSM_o *)this->fields.levelUpAnim;
    if ( !myFsm )
      goto LABEL_10;
    myFsm = (PlayMakerFSM_o *)UnityEngine_Animation__Play_68548868(
                                (UnityEngine_Animation_o *)myFsm,
                                (System_String_o *)StringLiteral_16965/*"bit_result_levelup01"*/,
                                0LL);
  }
LABEL_51:
  v48 = *v34;
  if ( !*v34 )
    goto LABEL_10;
  v49 = *(_QWORD *)(v48 + 24);
  if ( !v49 )
    goto LABEL_10;
  v50 = *(int *)(v48 + 32);
  if ( (unsigned int)v50 >= *(_DWORD *)(v49 + 24) )
LABEL_65:
    sub_1B4D1F4(myFsm, v20);
  v51 = *(struct BattleResultBondsIconComponent_o **)(v49 + 8 * v50 + 32);
  this->fields.openCollect = v51;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.openCollect, (int32_t)v51, v46, v47);
  figureMoveRoot = (UnityEngine_Object_o *)this->fields.figureMoveRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(figureMoveRoot, 0LL, 0LL) )
  {
    myFsm = (PlayMakerFSM_o *)this->fields.figureMoveRoot;
    if ( !myFsm )
      goto LABEL_10;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myFsm, 0LL);
    *(_QWORD *)(v31 + 16) = gameObject;
    v54 = (UnityEngine_GameObject_o **)(v31 + 16);
    sub_1B4CF34((CGThumbnailListItem_o *)(v31 + 16), (int32_t)gameObject, v55, v56);
    myFsm = *(PlayMakerFSM_o **)(v31 + 16);
    if ( !myFsm )
      goto LABEL_10;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 0, 0LL);
  }
  else
  {
    myFsm = (PlayMakerFSM_o *)this->fields.figureRoot;
    if ( !myFsm )
      goto LABEL_10;
    v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myFsm, 0LL);
    *(_QWORD *)(v31 + 16) = v57;
    v54 = (UnityEngine_GameObject_o **)(v31 + 16);
    sub_1B4CF34((CGThumbnailListItem_o *)(v31 + 16), (int32_t)v57, v58, v59);
  }
  openCollect = this->fields.openCollect;
  if ( !openCollect )
    goto LABEL_10;
  svtId = openCollect->fields.svtId;
  svtLimit = openCollect->fields.svtLimit;
  bondsFigure = this->fields.bondsFigure;
  v64 = *v54;
  v65 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v65,
    (Il2CppObject *)v31,
    Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__,
    0LL);
  if ( !bondsFigure )
    goto LABEL_10;
  BattleResultBondsFigureComponent__SetupFigure(bondsFigure, v64, svtId, svtLimit, 7, 0, 51, v65, 0LL);
}


void __fastcall BattleResultBondsComponent__checkShow(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleFriendshipRewardInfo_array *showList; // x8
  __int64 v6; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21
  SummonAssetManager_o *parentComp; // x0

  if ( (byte_49BE2E6 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_BattleResultBondsComponent__checkShow_b__67_0__, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v4);
    byte_49BE2E6 = 1;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
        v8 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleResultBondsComponent__checkShow_b__67_0__, 0LL);
        if ( Instance )
        {
          SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v8, 0LL);
          return;
        }
        goto LABEL_21;
      }
      parentComp = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
    sub_1B4D1EC(parentComp, method);
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
  __int64 v8; // x1
  void *effectUIList; // x0
  int32_t v10; // w20
  int32_t v11; // w2
  int v12; // w8
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  struct BattleWindowComponent_o *confwindow; // x20
  BattleWindowComponent_EndCall_o *v16; // x21

  if ( (byte_49BE2E7 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BattleResultBondsComponent_closeBondUp__, method);
    sub_1B4CF90(&Method_BattleResultBondsComponent_endCloseBondUp__, v3);
    sub_1B4CF90(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIUnityRenderer__Clear__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__, v7);
    byte_49BE2E7 = 1;
  }
  UnityEngine_Time__set_timeScale(this->fields.tempSaveTimeScale, 0LL);
  effectUIList = this->fields.effectUIList;
  if ( !effectUIList )
    goto LABEL_18;
  if ( *((int *)effectUIList + 6) >= 1 )
  {
    v10 = 0;
    do
    {
      effectUIList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)effectUIList,
                       v10,
                       (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
      if ( !effectUIList )
        goto LABEL_18;
      effectUIList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectUIList, 0LL);
      if ( !effectUIList )
        goto LABEL_18;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectUIList, 0, 0LL);
      effectUIList = this->fields.effectUIList;
      if ( !effectUIList )
        goto LABEL_18;
      v11 = *((_DWORD *)effectUIList + 6);
      ++v10;
    }
    while ( v10 < v11 );
    v12 = *((_DWORD *)effectUIList + 7) + 1;
    *((_DWORD *)effectUIList + 6) = 0;
    *((_DWORD *)effectUIList + 7) = v12;
    if ( v11 >= 1 )
      System_Array__Clear(*((System_Array_o **)effectUIList + 2), 0, v11, 0LL);
  }
  v13 = Method_BattleResultBondsComponent_closeBondUp__;
  if ( (*((_BYTE *)Method_BattleResultBondsComponent_closeBondUp__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1B4CFA8(Method_BattleResultBondsComponent_closeBondUp__);
  v14 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
  effectUIList = this->fields.parentComp;
  if ( !effectUIList
    || (BattleResultComponent__setTouch((BattleResultComponent_o *)effectUIList, 0, 0LL),
        (effectUIList = this->fields.bondsFigure) == 0LL)
    || (BattleResultBondsFigureComponent__DestroyFigure((BattleResultBondsFigureComponent_o *)effectUIList, 0LL),
        confwindow = this->fields.confwindow,
        v16 = (BattleWindowComponent_EndCall_o *)sub_1B4D1DC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v16,
          (Il2CppObject *)this,
          Method_BattleResultBondsComponent_endCloseBondUp__,
          0LL),
        !confwindow) )
  {
LABEL_18:
    sub_1B4D1EC(effectUIList, v8);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))confwindow->klass->vtable._12_Close.method)(
    confwindow,
    v16,
    confwindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultBondsComponent__endClose(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  BattleResultBondsIconComponent_o *BondsIconArray; // x0
  __int64 v8; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleResultBondsIconComponent_o *v10; // x20
  int v11; // w21
  int v12; // w22
  __int64 v13; // x0

  if ( (byte_49BE2EA & 1) == 0 )
  {
    sub_1B4CF90(&OptionManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_5380/*"END_PROC"*/, v5);
    byte_49BE2EA = 1;
  }
  this->fields.resultAssetData = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.resultAssetData, 0, v2, v3);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    BondsIconArray = (BattleResultBondsIconComponent_o *)BattleResultBondsComponent__GetBondsIconArray(this, v6);
    if ( !BondsIconArray )
      goto LABEL_16;
    m_CancellationTokenSource = BondsIconArray->fields.m_CancellationTokenSource;
    v10 = BondsIconArray;
    v11 = (_DWORD)m_CancellationTokenSource - 1;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        BondsIconArray = (BattleResultBondsIconComponent_o *)*((_QWORD *)&v10->fields.root + v12);
        if ( !BondsIconArray )
          break;
        BattleResultBondsIconComponent__ClearFaceAtlas(BondsIconArray, 0LL);
        if ( v11 == v12 )
          goto LABEL_13;
        if ( (unsigned int)++v12 >= LODWORD(v10->fields.m_CancellationTokenSource) )
          sub_1B4D1F4(v13, v8);
      }
LABEL_16:
      sub_1B4D1EC(BondsIconArray, v8);
    }
  }
LABEL_13:
  BondsIconArray = (BattleResultBondsIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
  if ( !BondsIconArray )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BondsIconArray, 0, 0LL);
  BondsIconArray = (BattleResultBondsIconComponent_o *)this->fields.myFsm;
  if ( !BondsIconArray )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_5380/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultBondsComponent__endCloseBondUp(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49BE2E8 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_5380/*"END_PROC"*/, method);
    byte_49BE2E8 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B4D1EC(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5380/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  System_Text_StringBuilder_o *v37; // x21
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  __int64 lvComp; // x0
  __int64 v41; // x1
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t friendshipRank; // w22
  int32_t svtId; // w25
  int v45; // w29
  Il2CppObject *current; // x23
  System_String_o *v47; // x0
  __int64 v48; // x1
  System_String_o *v49; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v51; // x1
  const MethodInfo *v52; // x5
  struct BattleResultBondsIconComponent_o *v53; // x8
  int32_t svtLimit; // w23
  int32_t ServantLimitCountSealAfter; // w23
  __int64 *v56; // x8
  int v57; // w21
  bool v58; // w23
  System_String_o *v59; // x0
  const MethodInfo *v60; // x5
  struct BattleResultBondsIconComponent_o *v61; // x8
  System_String_o *v62; // x0
  const MethodInfo *v63; // x5
  System_Collections_Generic_List_object__o *v64; // x22
  struct BattleFriendshipRewardInfo_array *rewardInfos; // x24
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v67; // x23
  int v68; // w21
  int CONF_SERVANT_COIN_PLUS_HEIGHT; // w26
  struct BattleResultBondsIconComponent_o *v70; // x8
  BattleFriendshipRewardInfo_o *v71; // x25
  GiftEntity_o *v72; // x26
  Il2CppObject *v73; // x0
  System_String_o *v74; // x27
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  Il2CppObject *v78; // x0
  Il2CppObject *v79; // x0
  Il2CppObject *Master_object; // x28
  int32_t v81; // w1
  System_String_o *v82; // x0
  const MethodInfo *v83; // x5
  bool v84; // w27
  Il2CppObject *Name; // x27
  System_String_o *v86; // x0
  System_String_o *v87; // x28
  int32_t IconImageId; // w0
  const MethodInfo *v89; // x5
  BattleResultBondsComponent_c *v90; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  struct System_Object_array *items; // x8
  _QWORD *v94; // x9
  __int64 size; // x10
  Il2CppClass **v96; // x0
  System_Object_array *v97; // x0
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  int v100; // w20
  UnityEngine_Transform_o *confRoot; // x21
  unsigned int localPosition; // s0
  int v103; // w8
  float v104; // s1
  int v105; // w20
  float v106; // s1
  int v107; // s2
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *rankupConfLabel; // x21
  struct BattleWindowComponent_o *confwindow; // x20
  BattleWindowComponent_EndCall_o *v111; // x21
  ServantEntity_o *v112; // [xsp+0h] [xbp-D0h]
  System_Text_StringBuilder_o *v113; // [xsp+8h] [xbp-C8h]
  int32_t key; // [xsp+14h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v115; // [xsp+18h] [xbp-B8h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+30h] [xbp-A0h] BYREF
  System_String_o *countText; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v118; // [xsp+40h] [xbp-90h] BYREF
  System_String_o *nameText; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_49BE2E4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BattleResultBondsComponent_endMoveFigure__, method);
    sub_1B4CF90(&Method_BattleResultBondsComponent_openedBondUp__, v3);
    sub_1B4CF90(&BattleResultBondsComponent_TypeInfo, v4);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_1B4CF90(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_1B4CF90(&DataManager_TypeInfo, v10);
    sub_1B4CF90(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v11);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B4CF90(&BattleWindowComponent_EndCall_TypeInfo, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v16);
    sub_1B4CF90(&int_TypeInfo, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__, v20);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__, v21);
    sub_1B4CF90(&System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo, v22);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v23);
    sub_1B4CF90(&NetworkManager_TypeInfo, v24);
    sub_1B4CF90(&ServantCommentManager_TypeInfo, v25);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1B4CF90(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v27);
    sub_1B4CF90(&System_Text_StringBuilder_TypeInfo, v28);
    sub_1B4CF90(&StringLiteral_10874/*"RESULT_BOUNDS_OPENQUEST"*/, v29);
    sub_1B4CF90(&StringLiteral_10877/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/, v30);
    sub_1B4CF90(&StringLiteral_10876/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, v31);
    sub_1B4CF90(&StringLiteral_10872/*"RESULT_BOUNDS_GET_COIN_NAME"*/, v32);
    sub_1B4CF90(&StringLiteral_10870/*"RESULT_BOUNDS_GETVOICE"*/, v33);
    sub_1B4CF90(&StringLiteral_24725/*"{0} {1}"*/, v34);
    sub_1B4CF90(&StringLiteral_1/*""*/, v35);
    sub_1B4CF90(&StringLiteral_10871/*"RESULT_BOUNDS_GET_COIN_COUNT"*/, v36);
    byte_49BE2E4 = 1;
  }
  memset(&v118, 0, sizeof(v118));
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  v37 = (System_Text_StringBuilder_o *)sub_1B4D1DC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v37, 0LL);
  v38 = Method_BattleResultBondsComponent_endMoveFigure__;
  if ( (*((_BYTE *)Method_BattleResultBondsComponent_endMoveFigure__ + 83) & 2) != 0 )
    v38 = (_QWORD *)sub_1B4CFA8(Method_BattleResultBondsComponent_endMoveFigure__);
  v39 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v38, v38[4]);
  OverwriteAssetSoundName__PlaySystemSe(v39, 6, 0, 0LL);
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
  lvComp = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !lvComp )
    goto LABEL_117;
  v113 = v37;
  lvComp = (__int64)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                      (clsQuestCheck_o *)lvComp,
                      svtId,
                      friendshipRank,
                      8,
                      0LL);
  if ( lvComp )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v115,
      (System_Collections_Generic_List_object__o *)lvComp,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    v45 = 0;
    v118 = v115;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v118,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
    {
      current = v118.fields._current;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v47 = LocalizationManager__Get((System_String_o *)StringLiteral_10874/*"RESULT_BOUNDS_OPENQUEST"*/, 0LL);
      if ( !current )
        sub_1B4D1EC(v47, v48);
      v49 = v47;
      QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
      v51 = System_String__Format(v49, QuestName, 0LL);
      BattleResultBondsComponent__addConfObject(this, v51, (float)v45 * 22.0, -1, 0, 0, v52);
      v45 += 3;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v118,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  }
  else
  {
    v45 = 0;
  }
  v53 = this->fields.openCollect;
  if ( !v53 )
    goto LABEL_117;
  svtLimit = v53->fields.svtLimit;
  lvComp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lvComp )
    goto LABEL_117;
  lvComp = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)lvComp,
                      (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
    v56 = &StringLiteral_10877/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/;
    v57 = 4;
    v58 = 1;
LABEL_32:
    v59 = LocalizationManager__Get((System_String_o *)*v56, 0LL);
    BattleResultBondsComponent__addConfObject(this, v59, (float)v45 * 22.0, -1, 0, v58, v60);
    v45 += v57;
    goto LABEL_33;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  lvComp = ServantCommentManager__IsOpenByServantFriendShip_41095256(
             svtId,
             friendshipRank,
             ServantLimitCountSealAfter,
             0LL);
  if ( (lvComp & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v56 = &StringLiteral_10876/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/;
    v58 = 0;
    v57 = 2;
    goto LABEL_32;
  }
LABEL_33:
  v61 = this->fields.openCollect;
  if ( !v61 )
    goto LABEL_117;
  if ( ServantVoiceMaster__isOpenByServantFriendShip(svtId, v61->fields.maxLimitCount, friendshipRank, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v62 = LocalizationManager__Get((System_String_o *)StringLiteral_10870/*"RESULT_BOUNDS_GETVOICE"*/, 0LL);
    BattleResultBondsComponent__addConfObject(this, v62, (float)v45 * 22.0, -1, 0, 0, v63);
    v45 += 2;
  }
  if ( this->fields.rewardInfos )
  {
    v64 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v64,
      (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ItemMaster___);
    rewardInfos = this->fields.rewardInfos;
    if ( !rewardInfos )
      goto LABEL_117;
    max_length = rewardInfos->max_length;
    if ( max_length < 1 )
    {
      CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
      if ( !v64 )
        goto LABEL_117;
    }
    else
    {
      key = svtId;
      v67 = (DataMasterBase_TMaster__TEntity__PKType__o *)lvComp;
      v68 = 0;
      CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
      do
      {
        if ( v68 >= (unsigned int)max_length )
          sub_1B4D1F4(lvComp, v41);
        v70 = this->fields.openCollect;
        if ( !v70 )
          goto LABEL_117;
        v71 = rewardInfos->m_Items[v68];
        if ( !v71 )
          goto LABEL_117;
        if ( v70->fields.svtId == v71->fields.targetSvtId )
        {
          lvComp = (__int64)BattleFriendshipRewardInfo__getGiftEntity(v71, 0LL);
          if ( !lvComp )
            goto LABEL_117;
          v72 = (GiftEntity_o *)lvComp;
          GiftEntity__GetInfo((GiftEntity_o *)lvComp, &nameText, &countText, 0LL);
          lvComp = GiftEntity__isQp(v72, 0LL);
          if ( (lvComp & 1) != 0 )
          {
            nameText = countText;
            countText = (System_String_o *)StringLiteral_1/*""*/;
          }
          if ( v72->fields.type == 2 )
          {
            if ( !v67 )
              goto LABEL_117;
            v73 = DataMasterBase_object__object__int___GetEntity(
                    v67,
                    v72->fields.objectId,
                    (const MethodInfo_319D99C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( v73 && LODWORD(v73[3].klass) == 29 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v74 = LocalizationManager__Get((System_String_o *)StringLiteral_10871/*"RESULT_BOUNDS_GET_COIN_COUNT"*/, 0LL);
              LODWORD(v115.fields._list) = v72->fields.num;
              v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v115, v75, v76, v77);
              countText = System_String__Format(v74, v78, 0LL);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !lvComp )
                goto LABEL_117;
              v79 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)lvComp,
                      key,
                      (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( v79 )
              {
                v112 = (ServantEntity_o *)v79;
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                if ( !byte_49B57A5 )
                {
                  sub_1B4CF90(&NetworkManager_TypeInfo, v41);
                  byte_49B57A5 = 1;
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
                  lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
                    v81 = -1;
                  else
                    v81 = lvComp;
                }
                else
                {
                  v81 = -1;
                }
                Name = (Il2CppObject *)ServantEntity__getName(v112, v81, -1, 0, 0LL);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v86 = LocalizationManager__Get((System_String_o *)StringLiteral_10872/*"RESULT_BOUNDS_GET_COIN_NAME"*/, 0LL);
                nameText = System_String__Format_61134760(v86, (Il2CppObject *)nameText, Name, 0LL);
              }
              v84 = 1;
            }
            else
            {
              v84 = 0;
            }
            v87 = System_String__Format_61134760(
                    (System_String_o *)StringLiteral_24725/*"{0} {1}"*/,
                    (Il2CppObject *)nameText,
                    (Il2CppObject *)countText,
                    0LL);
            IconImageId = GiftEntity__getIconImageId(v72, 0LL);
            BattleResultBondsComponent__addConfObject(this, v87, (float)v45 * 22.0, IconImageId, v84, 0, v89);
          }
          else
          {
            v82 = System_String__Format_61134760(
                    (System_String_o *)StringLiteral_24725/*"{0} {1}"*/,
                    (Il2CppObject *)nameText,
                    (Il2CppObject *)countText,
                    0LL);
            BattleResultBondsComponent__addConfObject(this, v82, (float)v45 * 22.0, -1, 0, 0, v83);
          }
          v90 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v90 = BattleResultBondsComponent_TypeInfo;
          }
          v45 += 2;
          CONF_SERVANT_COIN_PLUS_HEIGHT = v90->static_fields->CONF_SERVANT_COIN_PLUS_HEIGHT;
          lvComp = BattleFriendshipRewardInfo__isShow(v71, 0LL);
          if ( (lvComp & 1) != 0 )
          {
            if ( !v64 )
              goto LABEL_117;
            items = v64->fields._items;
            v94 = Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__;
            ++v64->fields._version;
            if ( !items )
              goto LABEL_117;
            size = v64->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v64,
                (Il2CppObject *)v71,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
            }
            else
            {
              v96 = &items->obj.klass + size;
              v64->fields._size = size + 1;
              v96[4] = (Il2CppClass *)v71;
              sub_1B4CF34((CGThumbnailListItem_o *)(v96 + 4), (int32_t)v71, v91, v92);
            }
          }
        }
        max_length = rewardInfos->max_length;
        ++v68;
      }
      while ( v68 < max_length );
      if ( !v64 )
LABEL_117:
        sub_1B4D1EC(lvComp, v41);
    }
    v97 = System_Collections_Generic_List_object___ToArray(
            v64,
            (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
    this->fields.showList = (struct BattleFriendshipRewardInfo_array *)v97;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.showList, (int32_t)v97, v98, v99);
    this->fields.showIndex = 0;
  }
  else
  {
    CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
  }
  lvComp = (__int64)this->fields.confSprite;
  if ( v45 )
    v100 = v45;
  else
    v100 = 1;
  if ( !lvComp )
    goto LABEL_117;
  UIWidget__set_height((UIWidget_o *)lvComp, CONF_SERVANT_COIN_PLUS_HEIGHT + 22 * v100 + 120, 0LL);
  confRoot = this->fields.confRoot;
  if ( !confRoot )
    goto LABEL_117;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.confRoot, 0LL);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT >= 0 )
    v103 = CONF_SERVANT_COIN_PLUS_HEIGHT;
  else
    v103 = CONF_SERVANT_COIN_PLUS_HEIGHT + 1;
  v104 = (float)v100;
  v105 = v103 >> 1;
  v106 = (float)(v104 * 11.0) + (float)(v103 >> 1);
  v107 = 0;
  UnityEngine_Transform__set_localPosition(confRoot, *(UnityEngine_Vector3_o *)&localPosition, 0LL);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT )
  {
    lvComp = (__int64)this->fields.confwindow;
    if ( !lvComp )
      goto LABEL_117;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lvComp, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v105, 0LL);
    lvComp = (__int64)this->fields.confwindow;
    if ( !lvComp )
      goto LABEL_117;
    lvComp = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)lvComp + 424LL))(
               lvComp,
               *(_QWORD *)(*(_QWORD *)lvComp + 432LL));
  }
  if ( !v113 )
    goto LABEL_117;
  rankupConfLabel = this->fields.rankupConfLabel;
  lvComp = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v113->klass->vtable._3_ToString.method)(
             v113,
             v113->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !rankupConfLabel )
    goto LABEL_117;
  UILabel__set_text(rankupConfLabel, (System_String_o *)lvComp, 0LL);
  confwindow = this->fields.confwindow;
  v111 = (BattleWindowComponent_EndCall_o *)sub_1B4D1DC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v111,
    (Il2CppObject *)this,
    Method_BattleResultBondsComponent_openedBondUp__,
    0LL);
  if ( !confwindow )
    goto LABEL_117;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))confwindow->klass->vtable._10_Open.method)(
    confwindow,
    v111,
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
        sub_1B4D1F4(this, collects);
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
    sub_1B4D1EC(this, collects);
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
    sub_1B4D1EC(this, deck);
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0LL;
  v6 = 0;
  while ( 1 )
  {
    if ( max_length == v6 )
      sub_1B4D1F4(this, deck);
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
    sub_1B4D1EC(this, method);
  return (signed int)oldCollections->max_length > 1;
}


void __fastcall BattleResultBondsComponent__openedBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0

  if ( (byte_49BE2E5 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_5375/*"END_OPEN"*/, method);
    byte_49BE2E5 = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__ResetPlayScreenTouch(parentComp, 0LL), (parentComp = this->fields.parentComp) == 0LL)
    || (BattleResultComponent__setTouch(parentComp, 1, 0LL),
        parentComp = (BattleResultComponent_o *)this->fields.myFsm,
        ++this->fields.colIndex,
        !parentComp) )
  {
    sub_1B4D1EC(parentComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)parentComp, (System_String_o *)StringLiteral_5375/*"END_OPEN"*/, 0LL);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BE2F1 & 1) == 0 )
  {
    sub_1B4CF90(&BattleResultBondsComponent___c_TypeInfo, v1);
    byte_49BE2F1 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(BattleResultBondsComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleResultBondsComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultBondsComponent___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)BattleResultBondsComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B4D1EC(this, 0LL);
  return col->fields.isUse;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_0(
        BattleResultBondsComponent___c_o *this,
        QuestRewardInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.type == 7 && x->fields.isNew;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_1(
        BattleResultBondsComponent___c_o *this,
        GetSvts_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v22; // x21
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v28; // x22
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v36; // x22
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v44; // x22
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v47; // x8
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v50; // x22
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  System_Collections_Hashtable_o *v55; // x0
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v56; // x8
  struct BattleResultBondsComponent_o *v57; // x8
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v58; // x8
  struct BattleResultBondsIconComponent_array *bondsIcons; // x9
  __int64 i; // x10
  __int64 v61; // x0
  char v62[4]; // [xsp+4h] [xbp-3Ch] BYREF
  int v63; // [xsp+8h] [xbp-38h] BYREF
  int v64; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_49BE2F2 & 1) == 0 )
  {
    sub_1B4CF90(&bool_TypeInfo, method);
    sub_1B4CF90(&object___TypeInfo, v3);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v4);
    sub_1B4CF90(&float_TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_24456/*"x"*/, v6);
    sub_1B4CF90(&StringLiteral_9426/*"OPEN"*/, v7);
    sub_1B4CF90(&StringLiteral_23646/*"time"*/, v8);
    sub_1B4CF90(&StringLiteral_21997/*"oncompletetarget"*/, v9);
    sub_1B4CF90(&StringLiteral_18701/*"endMoveFigure"*/, v10);
    sub_1B4CF90(&StringLiteral_20547/*"islocal"*/, v11);
    sub_1B4CF90(&StringLiteral_21995/*"oncomplete"*/, v12);
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B4CF90(&iTween_TypeInfo, v13);
    byte_49BE2F2 = 1;
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
  v17 = v2->fields.CS___8__locals1;
  if ( !v17 )
    goto LABEL_69;
  v18 = (char)this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v17->fields.__4__this;
  if ( !this )
    goto LABEL_69;
  if ( (v18 & 1) == 0 )
  {
    BattleResultBondsComponent__endMoveFigure((BattleResultBondsComponent_o *)this, 0LL);
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
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B4D038(object___TypeInfo, 10LL);
  if ( !this )
    goto LABEL_69;
  v22 = this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_24456/*"x"*/;
  if ( StringLiteral_24456/*"x"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B4D0CC(
                                                                   StringLiteral_24456/*"x"*/,
                                                                   v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_24456/*"x"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( !LODWORD(v22->fields.CS___8__locals1) )
    goto LABEL_70;
  v22[1].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)method;
  sub_1B4CF34((CGThumbnailListItem_o *)&v22[1], (int32_t)method, v20, v21);
  v64 = -1007026176;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v64, v23, v24, v25);
  v28 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B4D0CC(this, v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v22->fields.CS___8__locals1) <= 1 )
    goto LABEL_70;
  v22[1].monitor = v28;
  sub_1B4CF34((CGThumbnailListItem_o *)&v22[1].monitor, (int32_t)v28, v26, v27);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_23646/*"time"*/;
  if ( StringLiteral_23646/*"time"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B4D0CC(
                                                                   StringLiteral_23646/*"time"*/,
                                                                   v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_23646/*"time"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v22->fields.CS___8__locals1) <= 2 )
    goto LABEL_70;
  v22[1].fields.parent = (struct UnityEngine_GameObject_o *)method;
  sub_1B4CF34((CGThumbnailListItem_o *)&v22[1].fields, (int32_t)method, v29, v30);
  v63 = 1061997773;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v63, v31, v32, v33);
  v36 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B4D0CC(this, v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v22->fields.CS___8__locals1) <= 3 )
    goto LABEL_70;
  v22[1].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v36;
  sub_1B4CF34((CGThumbnailListItem_o *)&v22[1].fields.CS___8__locals1, (int32_t)v36, v34, v35);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_20547/*"islocal"*/;
  if ( StringLiteral_20547/*"islocal"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B4D0CC(
                                                                   StringLiteral_20547/*"islocal"*/,
                                                                   v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_20547/*"islocal"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v22->fields.CS___8__locals1) <= 4 )
    goto LABEL_70;
  v22[2].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)method;
  sub_1B4CF34((CGThumbnailListItem_o *)&v22[2], (int32_t)method, v37, v38);
  v62[0] = 1;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(bool_TypeInfo, v62, v39, v40, v41);
  v44 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B4D0CC(this, v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v22->fields.CS___8__locals1) <= 5 )
    goto LABEL_70;
  v22[2].monitor = v44;
  sub_1B4CF34((CGThumbnailListItem_o *)&v22[2].monitor, (int32_t)v44, v42, v43);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_21997/*"oncompletetarget"*/;
  if ( StringLiteral_21997/*"oncompletetarget"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B4D0CC(
                                                                   StringLiteral_21997/*"oncompletetarget"*/,
                                                                   v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_21997/*"oncompletetarget"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v22->fields.CS___8__locals1) <= 6 )
    goto LABEL_70;
  v22[2].fields.parent = (struct UnityEngine_GameObject_o *)method;
  sub_1B4CF34((CGThumbnailListItem_o *)&v22[2].fields, (int32_t)method, v45, v46);
  v47 = v2->fields.CS___8__locals1;
  if ( !v47 || (this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v47->fields.__4__this) == 0LL )
LABEL_69:
    sub_1B4D1EC(this, method);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
  v50 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B4D0CC(this, v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v22->fields.CS___8__locals1) <= 7 )
    goto LABEL_70;
  v22[2].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v50;
  sub_1B4CF34((CGThumbnailListItem_o *)&v22[2].fields.CS___8__locals1, (int32_t)v50, v48, v49);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_21995/*"oncomplete"*/;
  if ( StringLiteral_21995/*"oncomplete"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B4D0CC(
                                                                   StringLiteral_21995/*"oncomplete"*/,
                                                                   v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_21995/*"oncomplete"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v22->fields.CS___8__locals1) <= 8 )
    goto LABEL_70;
  v22[3].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)method;
  sub_1B4CF34((CGThumbnailListItem_o *)&v22[3], (int32_t)method, v51, v52);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_18701/*"endMoveFigure"*/;
  if ( !StringLiteral_18701/*"endMoveFigure"*/ )
  {
    method = 0LL;
    goto LABEL_57;
  }
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B4D0CC(
                                                                 StringLiteral_18701/*"endMoveFigure"*/,
                                                                 v22->klass->_1.element_class);
  if ( !this )
  {
LABEL_71:
    v61 = sub_1B4D210(this);
    sub_1B4D0B8(v61, 0LL);
  }
  method = (const MethodInfo *)StringLiteral_18701/*"endMoveFigure"*/;
LABEL_57:
  if ( LODWORD(v22->fields.CS___8__locals1) <= 9 )
    goto LABEL_70;
  v22[3].monitor = (void *)method;
  sub_1B4CF34((CGThumbnailListItem_o *)&v22[3].monitor, (int32_t)method, v53, v54);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v55 = iTween__Hash((System_Object_array *)v22, 0LL);
  iTween__MoveFrom_60732504(parent, v55, 0LL);
LABEL_61:
  v56 = v2->fields.CS___8__locals1;
  if ( !v56 )
    goto LABEL_69;
  v57 = v56->fields.__4__this;
  if ( !v57 )
    goto LABEL_69;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v57->fields.myFsm;
  v57->fields.openBoundsFlg = 1;
  if ( !this )
    goto LABEL_69;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9426/*"OPEN"*/, 0LL);
  v58 = v2->fields.CS___8__locals1;
  if ( !v58 )
    goto LABEL_69;
  bondsIcons = v58->fields.bondsIcons;
  if ( !bondsIcons )
    goto LABEL_69;
  i = v58->fields.i;
  if ( (unsigned int)i >= bondsIcons->max_length )
LABEL_70:
    sub_1B4D1F4(this, method);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v58->fields.__4__this;
  if ( !this )
    goto LABEL_69;
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_49BE2F3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49BE2F3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v4);
  CommonUI__CreateServantCoinConfirmDialog((CommonUI_o *)Instance, 1, this->fields.coin, 0LL, 0LL);
}