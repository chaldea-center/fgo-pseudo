void __fastcall BattleResultBondsComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleResultBondsComponent_StaticFields *static_fields; // x0
  int32_t v7; // w1
  int32_t v8; // w1
  struct BattleResultBondsComponent_StaticFields *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FF4D5 & 1) == 0 )
  {
    sub_1B640C8(&BattleResultBondsComponent_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_6993/*"GetNewSvt"*/, v4);
    sub_1B640C8(&StringLiteral_6979/*"GetExistSvt"*/, v5);
    byte_49FF4D5 = 1;
  }
  static_fields = BattleResultBondsComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SVT_GAP_5 = 0x4316000043320000LL;
  *(_QWORD *)&static_fields->CONF_LABEL_MAX_WIDTH = 0x12000001D0LL;
  v7 = StringLiteral_6993/*"GetNewSvt"*/;
  static_fields->GET_NEW_SVT_KEY = (struct System_String_o *)StringLiteral_6993/*"GetNewSvt"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->GET_NEW_SVT_KEY, v7, v2, v3);
  v8 = StringLiteral_6979/*"GetExistSvt"*/;
  v9 = BattleResultBondsComponent_TypeInfo->static_fields;
  v9->GET_EXIST_SVT_KEY = (struct System_String_o *)StringLiteral_6979/*"GetExistSvt"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v9->GET_EXIST_SVT_KEY, v8, v10, v11);
}


void __fastcall BattleResultBondsComponent___ctor(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  __int64 v17; // x2
  BattleResultBondsFigureComponent_o *v18; // x20
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_49FF4D4 & 1) == 0 )
  {
    sub_1B640C8(&BattleResultBondsFigureComponent_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v7);
    byte_49FF4D4 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_GameObject__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.conflist = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.conflist, (int32_t)v8, v9, v10);
  this->fields.buddyPointInfoWindowHeight = 366;
  this->fields.tempSaveTimeScale = 1.0;
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo,
                                                       v11,
                                                       v12);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
  this->fields.bondsList = (struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *)v13;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bondsList, (int32_t)v13, v14, v15);
  v18 = (BattleResultBondsFigureComponent_o *)sub_1B64314(BattleResultBondsFigureComponent_TypeInfo, v16, v17);
  BattleResultBondsFigureComponent___ctor(v18, v19);
  this->fields.bondsFigure = v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bondsFigure, (int32_t)v18, v20, v21);
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
  __int64 v29; // x2
  EventServantEntity_o *EventServant; // x22
  BattleResultBondsComponent___c_c *v31; // x0
  System_Action_o *_9__62_0; // x23
  Il2CppObject *v33; // x25
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *Master_object; // x25
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x24
  __int64 v41; // x23
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x25
  Il2CppObject *v45; // x8
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w2
  int32_t v49; // w3
  __int64 v50; // x1
  __int64 v51; // x2
  System_String_o *v52; // x24
  Il2CppObject *v53; // x25
  __int64 v54; // x0
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_49FF4C6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, collect);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_SvtCoinMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_1B640C8(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v9);
    sub_1B640C8(&GetSvtCoin___TypeInfo, v10);
    sub_1B640C8(&GetSvtCoin_TypeInfo, v11);
    sub_1B640C8(&LocalizationManager_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B640C8(&Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__, v15);
    sub_1B640C8(&Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__, v16);
    sub_1B640C8(&BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo, v17);
    sub_1B640C8(&BattleResultBondsComponent___c_TypeInfo, v18);
    sub_1B640C8(&StringLiteral_12288/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, v19);
    sub_1B640C8(&StringLiteral_18538/*"dialogIgnoreTime"*/, v20);
    byte_49FF4C6 = 1;
  }
  entity = 0LL;
  if ( this->fields.getJoinSvtList && !this->fields.isWarboard )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___),
          (getJoinSvtList = this->fields.getJoinSvtList) == 0LL) )
    {
LABEL_45:
      sub_1B64324(Instance);
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
        UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_18538/*"dialogIgnoreTime"*/, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      else
      {
        if ( !v24 )
          goto LABEL_45;
        Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                      v24,
                                      v27->fields.userSvtId,
                                      (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
              v31 = BattleResultBondsComponent___c_TypeInfo;
              if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
                v31 = BattleResultBondsComponent___c_TypeInfo;
              }
              _9__62_0 = v31->static_fields->__9__62_0;
              if ( !_9__62_0 )
              {
                if ( !v31->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v31);
                  v31 = BattleResultBondsComponent___c_TypeInfo;
                }
                v33 = (Il2CppObject *)v31->static_fields->__9;
                _9__62_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v22, v29);
                System_Action___ctor(
                  _9__62_0,
                  v33,
                  Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__,
                  0LL);
                static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
                static_fields->__9__62_0 = _9__62_0;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__62_0, (int32_t)_9__62_0, v35, v36);
              }
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SvtCoinMaster___);
              Instance = (DataManager_o *)UserServantEntity__getSvtId(v28, 0LL);
              if ( !Master_object )
                goto LABEL_45;
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            &entity,
                                            (int32_t)Instance,
                                            (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_45;
                if ( SHIDWORD(entity[1].klass) >= 1 )
                {
                  v40 = sub_1B64314(BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo, v38, v39);
                  System_Object___ctor((Il2CppObject *)v40, 0LL);
                  v41 = sub_1B64170(GetSvtCoin___TypeInfo, 1LL);
                  v44 = sub_1B64314(GetSvtCoin_TypeInfo, v42, v43);
                  GetSvtCoin___ctor((GetSvtCoin_o *)v44, 0LL);
                  v45 = entity;
                  if ( !entity )
                    goto LABEL_45;
                  if ( !v44 )
                    goto LABEL_45;
                  *(_DWORD *)(v44 + 16) = entity[1].klass;
                  *(int32x2_t *)(v44 + 20) = vrev64_s32(*(int32x2_t *)((char *)&v45[1].klass + 4));
                  if ( !v41 )
                    goto LABEL_45;
                  Instance = (DataManager_o *)sub_1B64204(v44, *(_QWORD *)(*(_QWORD *)v41 + 64LL));
                  if ( !Instance )
                  {
                    v54 = sub_1B64348(0LL);
                    sub_1B641F0(v54, 0LL);
                  }
                  if ( !*(_DWORD *)(v41 + 24) )
LABEL_46:
                    sub_1B6432C(Instance, v22);
                  *(_QWORD *)(v41 + 32) = v44;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v41 + 32), v44, v46, v47);
                  if ( !v40 )
                    goto LABEL_45;
                  *(_QWORD *)(v40 + 16) = v41;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v40 + 16), v41, v48, v49);
                  _9__62_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v50, v51);
                  System_Action___ctor(
                    _9__62_0,
                    (Il2CppObject *)v40,
                    Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__,
                    0LL);
                }
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12288/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0LL);
              v53 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              Instance = (DataManager_o *)EventServantEntity__GetGetMessage(EventServant, 0LL);
              if ( !v53 )
                goto LABEL_45;
              CommonUI__OpenNotificationDialog(
                (CommonUI_o *)v53,
                v52,
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
  __int64 v2; // x2
  __int64 v4; // x1
  struct BattleWindowComponent_o *multiDeckWindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_49FF4CE & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultBondsComponent_endClose__, method);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v4);
    byte_49FF4CE = 1;
  }
  if ( this->fields.isMultiDeck )
    multiDeckWindow = this->fields.multiDeckWindow;
  else
    multiDeckWindow = this->fields.window;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, method, v2);
  BattleWindowComponent_EndCall___ctor(v6, (Il2CppObject *)this, Method_BattleResultBondsComponent_endClose__, 0LL);
  if ( !multiDeckWindow )
    sub_1B64324(v7);
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

  if ( (byte_49FF4D3 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_49FF4D3 = 1;
  }
  upRoot = this->fields.upRoot;
  if ( !upRoot
    || (UnityEngine_GameObject__SetActive(upRoot, 0, 0LL),
        (upRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B64324(upRoot);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)upRoot, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
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
  Il2CppObject *Object_object__48347676; // x21
  BattleResultBondsComponent_o *v14; // x21
  BattleResultBondsComponent_o *v15; // x22
  __int64 v16; // x1
  BattleResultBondsComponent_o *v17; // x22
  __int64 v18; // x1
  BattleResultBondsComponent_o *v19; // x22
  __int64 v20; // x1
  int m_CancellationTokenSource; // w8
  BattleResultBondsComponent_o *v22; // x21
  unsigned int v23; // w22

  v8 = this;
  if ( (byte_49FF4C8 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, data);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__, v10);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    this = (BattleResultBondsComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    byte_49FF4C8 = 1;
  }
  if ( !data )
    goto LABEL_23;
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              data,
                              effectName,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultBondsComponent_o *)UnityEngine_Object__Instantiate_object_(
                                           Object_object__48347676,
                                           (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  v17 = this;
  if ( !byte_49F7111 )
  {
    this = (BattleResultBondsComponent_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v16);
    byte_49F7111 = 1;
  }
  if ( !v17 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v17,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v14, 0LL);
  v19 = this;
  if ( !byte_49F7116 )
  {
    this = (BattleResultBondsComponent_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v18);
    byte_49F7116 = 1;
  }
  if ( !v19 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v19,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                           (UnityEngine_GameObject_o *)v14,
                                           (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !this )
    goto LABEL_23;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v22 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      if ( v23 >= m_CancellationTokenSource )
        sub_1B6432C(this, v20);
      this = (BattleResultBondsComponent_o *)*((_QWORD *)&v22->fields.parentComp + (int)v23);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0LL);
      m_CancellationTokenSource = (int)v22->fields.m_CancellationTokenSource;
      if ( (int)++v23 >= m_CancellationTokenSource )
        goto LABEL_21;
    }
LABEL_23:
    sub_1B64324(this);
  }
LABEL_21:
  this = (BattleResultBondsComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v22,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void __fastcall BattleResultBondsComponent__DeleteGetJoinSvtData(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleResultBondsComponent_c *v2; // x0

  if ( (byte_49FF4BD & 1) == 0 )
  {
    sub_1B640C8(&BattleResultBondsComponent_TypeInfo, v1);
    byte_49FF4BD = 1;
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
  ServantStatusBattleListViewItem_o *p_bondsIconArray; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x20
  System_Collections_Generic_List_object__o *bondsList; // x0
  const MethodInfo *v15; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  System_Object_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FF4D0 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__,
      method);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__,
      v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__,
      v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v9);
    byte_49FF4D0 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( this->fields.isMultiDeck )
  {
    p_bondsIconArray = (ServantStatusBattleListViewItem_o *)&this->fields.bondsIconArray;
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.bondsIconArray, 0LL) )
    {
      v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo,
                                                           v11,
                                                           v12);
      System_Collections_Generic_List_object____ctor(
        v13,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
      bondsList = (System_Collections_Generic_List_object__o *)this->fields.bondsList;
      if ( !bondsList )
        goto LABEL_17;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v21,
        bondsList,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v21,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
      {
        if ( !v21.fields._current )
          sub_1B64324(0LL);
        BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                          (BattleResultBondsDeckPerWaveComponent_o *)v21.fields._current,
                                                                          v15);
        if ( !v13 )
          sub_1B64324(BondsIconArray);
        System_Collections_Generic_List_object___AddRange(
          v13,
          BondsIconArray,
          (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v21,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
      if ( !v13 )
LABEL_17:
        sub_1B64324(bondsList);
      v17 = System_Collections_Generic_List_object___ToArray(
              v13,
              (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
      p_bondsIconArray->klass = (ServantStatusBattleListViewItem_c *)v17;
      sub_1B6406C(p_bondsIconArray, (int32_t)v17, v18, v19);
    }
  }
  else
  {
    p_bondsIconArray = (ServantStatusBattleListViewItem_o *)&this->fields.collects;
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
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  UnityEngine_Object_o *multiDeckWindow; // x20

  if ( (byte_49FF4BE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49FF4BE = 1;
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
  v8 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_UIUnityRenderer__TypeInfo,
                                                      v6,
                                                      v7);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effectUIList, (int32_t)v8, v9, v10);
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
    sub_1B64324(window);
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
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  UnityEngine_Object_o *multiDeckWindow; // x20
  UnityEngine_Object_o *multiBondsPrefab; // x20
  UnityEngine_Object_o *multiBondsRoot; // x20

  v14 = inIsMultiDeck;
  if ( (byte_49FF4BF & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, oldCollects);
    byte_49FF4BF = 1;
  }
  this->fields.oldCollections = oldCollects;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.oldCollections,
    (int32_t)oldCollects,
    (int32_t)inRewardInfos,
    (int32_t)resultAsset);
  this->fields.rewardInfos = inRewardInfos;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rewardInfos, (int32_t)inRewardInfos, v15, v16);
  this->fields.resultAssetData = resultAsset;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resultAssetData, (int32_t)resultAsset, v17, v18);
  this->fields.getJoinSvtList = getJoinSvts;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.getJoinSvtList, (int32_t)getJoinSvts, v19, v20);
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
  __int64 v14; // x1
  struct BattleResultBondsIconComponent_array *collects; // x8
  const MethodInfo *v16; // x3
  struct BattleResultBondsIconComponent_array *v17; // x8
  struct BattleResultBondsIconComponent_array *v18; // x8
  struct BattleResultBondsIconComponent_array *v19; // x8
  struct UISprite_o *bgFrame; // x8
  float v21; // s8
  struct BattleResultBondsIconComponent_array *v22; // x8
  il2cpp_array_size_t v23; // w24
  float v24; // s9
  int v25; // w25
  float v26; // s10
  struct BattleResultBondsIconComponent_array *v27; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x8
  UnityEngine_Object_o *v30; // x20
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  v12 = targetIndex;
  v13 = this;
  if ( (byte_49FF4D1 & 1) == 0 )
  {
    sub_1B640C8(&BattleResultBondsComponent_TypeInfo, *(_QWORD *)&targetIndex);
    this = (BattleResultBondsComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v14);
    byte_49FF4D1 = 1;
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
      v17 = v13->fields.collects;
      if ( !v17 )
        goto LABEL_49;
      if ( v12 >= v17->max_length )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v17->m_Items[v12];
      if ( !this )
        goto LABEL_49;
      BattleResultBondsIconComponent__SetBuddyPointInfo((BattleResultBondsIconComponent_o *)this, 0LL, 0, v16);
      v18 = v13->fields.collects;
      if ( !v18 )
        goto LABEL_49;
      if ( v12 >= v18->max_length )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v18->m_Items[v12];
      if ( !this )
        goto LABEL_49;
      this = (BattleResultBondsComponent_o *)BattleResultBondsIconComponent__changeGauge(
                                               (BattleResultBondsIconComponent_o *)this,
                                               0.0,
                                               *(const MethodInfo **)&targetIndex);
      v19 = v13->fields.collects;
      if ( !v19 )
        goto LABEL_49;
      if ( v12 >= v19->max_length )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v19->m_Items[v12];
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
  v21 = *(float *)&bgFrame->klass;
  if ( !isNoFollower )
  {
    v22 = v13->fields.collects;
    if ( !v22 )
      goto LABEL_49;
    if ( v22->max_length <= cnt )
LABEL_50:
      sub_1B6432C(this, *(_QWORD *)&targetIndex);
    this = (BattleResultBondsComponent_o *)v22->m_Items[cnt];
    if ( !this )
      goto LABEL_49;
    this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  if ( cnt >= 1 )
  {
    v23 = 0;
    v24 = 0.0;
    v25 = 4;
    v26 = (float)(1 - cnt) * 0.5;
    do
    {
      v27 = v13->fields.collects;
      if ( isNoFollower )
        v24 = (float)v25;
      if ( !v27 )
        goto LABEL_49;
      if ( v23 >= v27->max_length )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v27->m_Items[v23];
      if ( !this )
        goto LABEL_49;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v21 * v26) - v24, 0LL);
      ++v23;
      v26 = v26 + 1.0;
      v25 -= 2;
    }
    while ( cnt != v23 );
  }
  if ( !battleResult )
    goto LABEL_49;
  buddyPointInfos = battleResult->fields.buddyPointInfos;
  if ( buddyPointInfos && *(_QWORD *)&buddyPointInfos->max_length && !isHideBuddyPointResult )
  {
    v30 = (UnityEngine_Object_o *)v13->fields.bgFrame;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
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
      || (v31.fields.x = 0.0,
          v31.fields.y = 13.0,
          v31.fields.z = 0.0,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v31, 0LL),
          (this = (BattleResultBondsComponent_o *)v13->fields.window) == 0LL) )
    {
LABEL_49:
      sub_1B64324(this);
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
  __int64 v11; // x1
  __int64 v12; // x2
  BattleResultBondsComponent___c_c *v13; // x8
  System_Object_array *v14; // x20
  System_Func_object__bool__o *_9__53_0; // x21
  Il2CppObject *v16; // x22
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  _BOOL4 isMultiDeck; // w8
  struct BattleWindowComponent_o *v24; // x20
  __int64 *v25; // x8
  BattleWindowComponent_EndCall_o *v26; // x21

  if ( (byte_49FF4C2 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_BattleResultBondsIconComponent___, method);
    sub_1B640C8(&Method_BattleResultBondsComponent_OpenEnd__, v3);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1B640C8(&System_Func_BattleResultBondsIconComponent__bool__TypeInfo, v5);
    sub_1B640C8(&Method_BattleResultBondsComponent___c__Open_b__53_0__, v6);
    sub_1B640C8(&BattleResultBondsComponent___c_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_5458/*"END_OPEN"*/, v8);
    sub_1B640C8(&StringLiteral_12099/*"SKIP"*/, v9);
    byte_49FF4C2 = 1;
  }
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, method);
  v13 = BattleResultBondsComponent___c_TypeInfo;
  v14 = (System_Object_array *)BondsIconArray;
  if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
    v13 = BattleResultBondsComponent___c_TypeInfo;
  }
  _9__53_0 = (System_Func_object__bool__o *)v13->static_fields->__9__53_0;
  if ( !_9__53_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BattleResultBondsComponent___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__53_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                System_Func_BattleResultBondsIconComponent__bool__TypeInfo,
                                                v11,
                                                v12);
    System_Func_object__bool____ctor(_9__53_0, v16, Method_BattleResultBondsComponent___c__Open_b__53_0__, 0LL);
    static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Func_BattleResultBondsIconComponent__bool__o *)_9__53_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v18, v19);
  }
  if ( BasicHelper__Any_object__48384284(
         v14,
         (System_Func_T__bool__o *)_9__53_0,
         (const MethodInfo_2E2491C *)Method_BasicHelper_Any_BattleResultBondsIconComponent___) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      isMultiDeck = this->fields.isMultiDeck;
      this->fields.openBoundsFlg = 0;
      this->fields.colIndex = 0;
      this->fields.bondsCountUp = 1;
      v24 = isMultiDeck ? this->fields.multiDeckWindow : this->fields.window;
      v26 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, v21, v22);
      BattleWindowComponent_EndCall___ctor(
        v26,
        (Il2CppObject *)this,
        (intptr_t)Method_BattleResultBondsComponent_OpenEnd__,
        0LL);
      if ( v24 )
      {
        ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v24->klass->vtable._10_Open.method)(
          v24,
          v26,
          v24->klass->vtable._11_CompOpen.methodPtr);
        gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
        if ( gameObject )
        {
          v25 = &StringLiteral_5458/*"END_OPEN"*/;
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    sub_1B64324(gameObject);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !gameObject )
    goto LABEL_20;
  v25 = &StringLiteral_12099/*"SKIP"*/;
LABEL_19:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)*v25, 0LL);
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
  int32_t v16; // w2
  int32_t v17; // w3
  System_Object_array *v18; // x21
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  BattleResultBondsIconComponent_array *v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  BattleResultBondsIconComponent_array *v27; // x22
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w2
  int32_t v39; // w3
  BattleResultBondsIconComponent_array *v40; // x22
  System_Collections_Hashtable_o *v41; // x0
  const MethodInfo *v42; // x1
  int max_length; // w8
  BattleResultBondsIconComponent_array *v44; // x20
  unsigned int v45; // w21
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x20
  System_String_o *CommonSeName; // x0
  struct SePlayer_o *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  __int64 v52; // x0
  int v53; // [xsp+Ch] [xbp-44h] BYREF
  int v54; // [xsp+18h] [xbp-38h] BYREF
  int v55; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_49FF4C3 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultBondsComponent_OpenEnd__, method);
    sub_1B640C8(&object___TypeInfo, v3);
    sub_1B640C8(&SeManager_TypeInfo, v4);
    sub_1B640C8(&float_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_19577/*"from"*/, v6);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v7);
    sub_1B640C8(&StringLiteral_22193/*"onupdate"*/, v8);
    sub_1B640C8(&StringLiteral_15125/*"UpdateValue"*/, v9);
    sub_1B640C8(&StringLiteral_23870/*"to"*/, v10);
    sub_1B640C8(&StringLiteral_19359/*"finishUpdateValue"*/, v11);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v12);
    sub_1B640C8(&iTween_TypeInfo, v13);
    byte_49FF4C3 = 1;
  }
  if ( !this->fields.bondsCountUp )
    return;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B64170(object___TypeInfo, 10LL);
  if ( !BondsIconArray )
LABEL_65:
    sub_1B64324(BondsIconArray);
  v18 = (System_Object_array *)BondsIconArray;
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_19577/*"from"*/;
  if ( StringLiteral_19577/*"from"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B64204(
                                                               StringLiteral_19577/*"from"*/,
                                                               v18->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v19 = (const MethodInfo *)StringLiteral_19577/*"from"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( !v18->max_length )
    goto LABEL_64;
  v18->m_Items[0] = (Il2CppObject *)v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v18->m_Items, (int32_t)v19, v16, v17);
  v55 = 0;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v55);
  v22 = BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B64204(
                                                               BondsIconArray,
                                                               v18->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
  }
  if ( v18->max_length <= 1 )
    goto LABEL_64;
  v18->m_Items[1] = &v22->obj;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->m_Items[1], (int32_t)v22, v20, v21);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_23870/*"to"*/;
  if ( StringLiteral_23870/*"to"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B64204(
                                                               StringLiteral_23870/*"to"*/,
                                                               v18->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v19 = (const MethodInfo *)StringLiteral_23870/*"to"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v18->max_length <= 2 )
    goto LABEL_64;
  v18->m_Items[2] = (Il2CppObject *)v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->m_Items[2], (int32_t)v19, v23, v24);
  v54 = 1065353216;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v54);
  v27 = BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B64204(
                                                               BondsIconArray,
                                                               v18->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
  }
  if ( v18->max_length <= 3 )
    goto LABEL_64;
  v18->m_Items[3] = &v27->obj;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->m_Items[3], (int32_t)v27, v25, v26);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22193/*"onupdate"*/;
  if ( StringLiteral_22193/*"onupdate"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B64204(
                                                               StringLiteral_22193/*"onupdate"*/,
                                                               v18->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v19 = (const MethodInfo *)StringLiteral_22193/*"onupdate"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v18->max_length <= 4 )
    goto LABEL_64;
  v18->m_Items[4] = (Il2CppObject *)v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->m_Items[4], (int32_t)v19, v28, v29);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_15125/*"UpdateValue"*/;
  if ( StringLiteral_15125/*"UpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B64204(
                                                               StringLiteral_15125/*"UpdateValue"*/,
                                                               v18->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v19 = (const MethodInfo *)StringLiteral_15125/*"UpdateValue"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v18->max_length <= 5 )
    goto LABEL_64;
  v18->m_Items[5] = (Il2CppObject *)v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->m_Items[5], (int32_t)v19, v30, v31);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22185/*"oncomplete"*/;
  if ( StringLiteral_22185/*"oncomplete"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B64204(
                                                               StringLiteral_22185/*"oncomplete"*/,
                                                               v18->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v19 = (const MethodInfo *)StringLiteral_22185/*"oncomplete"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v18->max_length <= 6 )
    goto LABEL_64;
  v18->m_Items[6] = (Il2CppObject *)v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->m_Items[6], (int32_t)v19, v32, v33);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_19359/*"finishUpdateValue"*/;
  if ( StringLiteral_19359/*"finishUpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B64204(
                                                               StringLiteral_19359/*"finishUpdateValue"*/,
                                                               v18->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v19 = (const MethodInfo *)StringLiteral_19359/*"finishUpdateValue"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v18->max_length <= 7 )
    goto LABEL_64;
  v18->m_Items[7] = (Il2CppObject *)v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->m_Items[7], (int32_t)v19, v34, v35);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_23830/*"time"*/;
  if ( StringLiteral_23830/*"time"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B64204(
                                                               StringLiteral_23830/*"time"*/,
                                                               v18->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v19 = (const MethodInfo *)StringLiteral_23830/*"time"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v18->max_length <= 8 )
    goto LABEL_64;
  v18->m_Items[8] = (Il2CppObject *)v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->m_Items[8], (int32_t)v19, v36, v37);
  v53 = 1072064102;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v53);
  v40 = BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B64204(
                                                               BondsIconArray,
                                                               v18->obj.klass->_1.element_class);
    if ( !BondsIconArray )
    {
LABEL_66:
      v52 = sub_1B64348(BondsIconArray);
      sub_1B641F0(v52, 0LL);
    }
  }
  if ( v18->max_length <= 9 )
    goto LABEL_64;
  v18->m_Items[9] = &v40->obj;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->m_Items[9], (int32_t)v40, v38, v39);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v41 = iTween__Hash(v18, 0LL);
  iTween__ValueTo(gameObject, v41, 0LL);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v42);
  if ( !BondsIconArray )
    goto LABEL_65;
  max_length = BondsIconArray->max_length;
  v44 = BondsIconArray;
  if ( max_length >= 1 )
  {
    v45 = 0;
    while ( v45 < max_length )
    {
      BondsIconArray = (BattleResultBondsIconComponent_array *)v44->m_Items[v45];
      if ( !BondsIconArray )
        goto LABEL_65;
      BattleResultBondsIconComponent__StartUpdateBuddyPoint((BattleResultBondsIconComponent_o *)BondsIconArray, v19);
      max_length = v44->max_length;
      if ( (int)++v45 >= max_length )
        goto LABEL_57;
    }
LABEL_64:
    sub_1B6432C(BondsIconArray, v19);
  }
LABEL_57:
  if ( this->fields.updateFlg )
  {
    v46 = Method_BattleResultBondsComponent_OpenEnd__;
    if ( (*((_BYTE *)Method_BattleResultBondsComponent_OpenEnd__ + 83) & 2) != 0 )
      v46 = (_QWORD *)sub_1B640E0(Method_BattleResultBondsComponent_OpenEnd__);
    v47 = (System_Reflection_MethodBase_o *)sub_1B640AC(v46, v46[4]);
    if ( !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    CommonSeName = SeManager__GetCommonSeName(15, 0LL);
    v49 = OverwriteAssetSoundName__PlaySe(v47, CommonSeName, 0LL);
    this->fields.MeterSePlayer = v49;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.MeterSePlayer, (int32_t)v49, v50, v51);
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
  __int64 v28; // x2
  struct BattleInfoData_o *battle_info; // x9
  struct DeckData_array *waveMyDecks; // x26
  __int64 maxWave; // x27
  BattleUserServantData_array *userSvt; // x24
  unsigned __int64 v33; // x8
  il2cpp_array_size_t max_length; // w9
  signed __int64 v35; // x29
  System_Collections_Generic_List_object__o *v36; // x20
  const MethodInfo *v37; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  System_Object_array *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  const MethodInfo *v42; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_49FF4C0 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__,
      battleData);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__,
      v19);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__,
      v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__, v24);
    sub_1B640C8(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v25);
    byte_49FF4C0 = 1;
  }
  memset(&v43, 0, sizeof(v43));
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
    v33 = 0LL;
    max_length = *(_QWORD *)&waveMyDecks->max_length;
    do
    {
      if ( v33 >= max_length )
        sub_1B6432C(bondsList, v27);
      v35 = v33 + 1;
      BattleResultBondsComponent__SetResultDataLocal(
        this,
        waveMyDecks->m_Items[v33],
        oldCollects,
        followerType,
        userSvt,
        battleResult,
        isHideBuddyPointResult,
        battleData,
        v33 + 1,
        maxWave,
        v42);
      max_length = waveMyDecks->max_length;
      v33 = v35;
    }
    while ( v35 < (int)max_length );
  }
  v36 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo,
                                                       v27,
                                                       v28);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  bondsList = (System_Collections_Generic_List_object__o *)this->fields.bondsList;
  if ( !bondsList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    bondsList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
  {
    if ( !v43.fields._current )
      sub_1B64324(0LL);
    BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                      (BattleResultBondsDeckPerWaveComponent_o *)v43.fields._current,
                                                                      v37);
    if ( !v36 )
      sub_1B64324(BondsIconArray);
    System_Collections_Generic_List_object___AddRange(
      v36,
      BondsIconArray,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
  if ( !v36 )
LABEL_21:
    sub_1B64324(bondsList);
  v39 = System_Collections_Generic_List_object___ToArray(
          v36,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
  this->fields.bondsIconArray = (struct BattleResultBondsIconComponent_array *)v39;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bondsIconArray, (int32_t)v39, v40, v41);
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
  int v48; // w8
  int64_t Instance; // x0
  BattleResultBondsComponent_o *v50; // x20
  Il2CppObject *v51; // x26
  Il2CppObject *v52; // x29
  struct BattleResultBondsDeckPerWaveComponent_o *multiBondsPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *v55; // x1
  UnityEngine_Object_o *v56; // x9
  const MethodInfo *v57; // x1
  __int64 v58; // x2
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x6
  System_Collections_Generic_IEnumerable_TSource__o *rewardInfos; // x21
  BattleResultBondsComponent___c_c *v62; // x0
  System_Func_object__bool__o *_9__49_0; // x20
  Il2CppObject *v64; // x22
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x0
  System_Collections_Generic_List_TSource__o *v69; // x0
  __int64 v70; // x1
  __int64 v71; // x2
  System_Collections_Generic_List_object__o *v72; // x21
  BattleResultBondsComponent_c *v73; // x0
  BattleResultBondsComponent_c *v74; // x0
  Il2CppObject *String_69086012; // x20
  System_Collections_Generic_IEnumerable_T__o *v76; // x0
  BattleResultBondsComponent_c *v77; // x0
  System_String_o *GET_NEW_SVT_KEY; // x22
  System_Object_array *v79; // x20
  System_String_o *v80; // x0
  BattleResultBondsComponent___c_c *v81; // x0
  System_Collections_Generic_IEnumerable_TSource__o *getJoinSvts; // x21
  System_Func_object__bool__o *_9__49_1; // x20
  Il2CppObject *v84; // x22
  struct BattleResultBondsComponent___c_StaticFields *v85; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x0
  System_Collections_Generic_List_TSource__o *v89; // x0
  System_Collections_Generic_List_object__o *v90; // x21
  BattleResultBondsComponent_c *v91; // x0
  BattleResultBondsComponent_c *v92; // x0
  Il2CppObject *v93; // x20
  System_Collections_Generic_IEnumerable_T__o *v94; // x0
  BattleResultBondsComponent_c *v95; // x0
  System_String_o *GET_EXIST_SVT_KEY; // x22
  System_Object_array *v97; // x20
  System_String_o *v98; // x0
  struct BattleDeckServantData_array *svts; // x21
  int max_length; // w8
  unsigned int v101; // w19
  int32_t v102; // w22
  BattleDeckServantData_o *v103; // x25
  Il2CppObject *v104; // x28
  int64_t userSvtId; // x1
  UserServantEntity_o *v106; // x24
  il2cpp_array_size_t v107; // w21
  BattleResultBondsComponent_o *SvtId; // x0
  const MethodInfo *v109; // x3
  UserServantCollectionEntity_o *ServantCollection; // x27
  __int64 v111; // x2
  const MethodInfo *v112; // x7
  signed int v113; // w8
  ServantEntity_o *v114; // x22
  unsigned int v115; // w20
  BattleUserServantData_o *v116; // x26
  __int128 v117; // q0
  const MethodInfo *v118; // x5
  int32_t afterLimitCount; // w25
  int32_t v120; // w29
  const MethodInfo *v121; // x7
  BattleResultBondsIconComponent_o *v122; // x20
  int afterIconLimitCount; // w8
  bool v124; // zf
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x20
  BattleBuddyPointInfo_o *v126; // x26
  System_Func_object__bool__o *v127; // x26
  BattleResultBondsIconComponent_o *v128; // x28
  struct BattleResultBondsIconComponent_array *v129; // x8
  const MethodInfo *v130; // x3
  const MethodInfo *v131; // x2
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  bool v133; // w20
  const MethodInfo *v134; // x2
  const MethodInfo *v135; // x1
  bool v136; // w8
  bool updateFlg; // w20
  bool v138; // w8
  const MethodInfo *v139; // x1
  struct BattleResultBondsIconComponent_array *v140; // x8
  int32_t v141; // w2
  int32_t v142; // w3
  __int64 v143; // x8
  _QWORD *v144; // x9
  __int64 v145; // x10
  __int64 v146; // x8
  int32_t cnt; // [xsp+Ch] [xbp-104h]
  ServantLimitImageMaster_o *svtLimitImageMaster; // [xsp+10h] [xbp-100h]
  UserServantCollectionMaster_o *MasterData_object; // [xsp+20h] [xbp-F0h]
  BattleResultBondsDeckPerWaveComponent_o *Object_object; // [xsp+28h] [xbp-E8h]
  UnityEngine_Object_o *x; // [xsp+30h] [xbp-E0h]
  struct BattleDeckServantData_array *v153; // [xsp+38h] [xbp-D8h]
  Il2CppObject *v154; // [xsp+40h] [xbp-D0h]
  Il2CppObject *v155; // [xsp+48h] [xbp-C8h]
  int32_t Type; // [xsp+5Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v160; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v161; // [xsp+90h] [xbp-80h]

  if ( (byte_49FF4C1 & 1) == 0 )
  {
    sub_1B640C8(&Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___, myDeck);
    sub_1B640C8(&Method_BasicHelper_Find_BattleBuddyPointInfo___, v14);
    sub_1B640C8(&BattleResultBondsComponent_TypeInfo, v15);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v17);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v18);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v19);
    sub_1B640C8(&DataManager_TypeInfo, v20);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v22);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_GetSvts___, v23);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_QuestRewardInfo___, v24);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_GetSvts___, v25);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_QuestRewardInfo___, v26);
    sub_1B640C8(&System_Func_GetSvts__bool__TypeInfo, v27);
    sub_1B640C8(&System_Func_BattleBuddyPointInfo__bool__TypeInfo, v28);
    sub_1B640C8(&System_Func_QuestRewardInfo__bool__TypeInfo, v29);
    sub_1B640C8(&Method_JsonManager_DeserializeArray_GetSvts___, v30);
    sub_1B640C8(&Method_JsonManager_DeserializeArray_QuestRewardInfo___, v31);
    sub_1B640C8(&JsonManager_TypeInfo, v32);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__, v33);
    sub_1B640C8(&Method_System_Collections_Generic_List_GetSvts__AddRange__, v34);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__, v35);
    sub_1B640C8(&Method_System_Collections_Generic_List_GetSvts__ToArray__, v36);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__, v37);
    sub_1B640C8(&Method_System_Collections_Generic_List_GetSvts__get_Count__, v38);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__, v39);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v40);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v41);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42);
    sub_1B640C8(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__, v43);
    sub_1B640C8(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__, v44);
    sub_1B640C8(&Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__, v45);
    sub_1B640C8(&BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo, v46);
    sub_1B640C8(&BattleResultBondsComponent___c_TypeInfo, v47);
    byte_49FF4C1 = 1;
  }
  Type = Follower__getType(followerType, 0LL);
  if ( Type )
    v48 = 5;
  else
    v48 = 6;
  cnt = v48;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_143;
  MasterData_object = (UserServantCollectionMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  v50 = this;
  if ( !Instance )
    goto LABEL_143;
  v51 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_143;
  v52 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( this->fields.isMultiDeck )
  {
    Instance = (int64_t)this->fields.multiBondsRoot;
    if ( !Instance )
      goto LABEL_143;
    multiBondsPrefab = this->fields.multiBondsPrefab;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    v55 = (Il2CppObject *)multiBondsPrefab;
    v50 = this;
    Object_object = (BattleResultBondsDeckPerWaveComponent_o *)BaseMonoBehaviour__createObject_object_(
                                                                 (BaseMonoBehaviour_o *)this,
                                                                 v55,
                                                                 transform,
                                                                 0LL,
                                                                 (const MethodInfo_2E24124 *)Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    if ( this->fields.isMultiDeck )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      svtLimitImageMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
    v50->fields.isWarboard = Instance & 1;
    if ( (Instance & 1) != 0 )
    {
      if ( !battleResult )
        goto LABEL_143;
      rewardInfos = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.rewardInfos;
      v62 = BattleResultBondsComponent___c_TypeInfo;
      if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v62 = BattleResultBondsComponent___c_TypeInfo;
      }
      _9__49_0 = (System_Func_object__bool__o *)v62->static_fields->__9__49_0;
      if ( !_9__49_0 )
      {
        if ( !v62->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v62);
          v62 = BattleResultBondsComponent___c_TypeInfo;
        }
        v64 = (Il2CppObject *)v62->static_fields->__9;
        _9__49_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_QuestRewardInfo__bool__TypeInfo, v57, v58);
        System_Func_object__bool____ctor(
          _9__49_0,
          v64,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__,
          0LL);
        static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
        static_fields->__9__49_0 = (struct System_Func_QuestRewardInfo__bool__o *)_9__49_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v66, v67);
      }
      v68 = System_Linq_Enumerable__Where_object_(
              rewardInfos,
              (System_Func_TSource__bool__o *)_9__49_0,
              (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
      v69 = System_Linq_Enumerable__ToList_object_(
              v68,
              (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
      if ( v69 )
      {
        v72 = (System_Collections_Generic_List_object__o *)v69;
        if ( v69->fields._size >= 1 )
        {
          v73 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v73 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v73->static_fields->GET_NEW_SVT_KEY, 0LL) )
          {
            v74 = BattleResultBondsComponent_TypeInfo;
            if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v74 = BattleResultBondsComponent_TypeInfo;
            }
            String_69086012 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69086012(
                                                v74->static_fields->GET_NEW_SVT_KEY,
                                                0LL);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v76 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_object_(
                                                                   String_69086012,
                                                                   (const MethodInfo_2E9EEC0 *)Method_JsonManager_DeserializeArray_QuestRewardInfo___);
            System_Collections_Generic_List_object___AddRange(
              v72,
              v76,
              (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
          }
          v77 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v77 = BattleResultBondsComponent_TypeInfo;
          }
          GET_NEW_SVT_KEY = v77->static_fields->GET_NEW_SVT_KEY;
          v79 = System_Collections_Generic_List_object___ToArray(
                  v72,
                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v80 = JsonManager__toJson(&v79->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_NEW_SVT_KEY, v80, 0LL);
        }
      }
      v81 = BattleResultBondsComponent___c_TypeInfo;
      getJoinSvts = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.getJoinSvts;
      if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v81 = BattleResultBondsComponent___c_TypeInfo;
      }
      _9__49_1 = (System_Func_object__bool__o *)v81->static_fields->__9__49_1;
      if ( !_9__49_1 )
      {
        if ( !v81->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v81);
          v81 = BattleResultBondsComponent___c_TypeInfo;
        }
        v84 = (Il2CppObject *)v81->static_fields->__9;
        _9__49_1 = (System_Func_object__bool__o *)sub_1B64314(System_Func_GetSvts__bool__TypeInfo, v70, v71);
        System_Func_object__bool____ctor(
          _9__49_1,
          v84,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__,
          0LL);
        v85 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        v85->__9__49_1 = (struct System_Func_GetSvts__bool__o *)_9__49_1;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v85->__9__49_1, (int32_t)_9__49_1, v86, v87);
      }
      v88 = System_Linq_Enumerable__Where_object_(
              getJoinSvts,
              (System_Func_TSource__bool__o *)_9__49_1,
              (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_GetSvts___);
      v89 = System_Linq_Enumerable__ToList_object_(
              v88,
              (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_GetSvts___);
      if ( v89 )
      {
        v90 = (System_Collections_Generic_List_object__o *)v89;
        if ( v89->fields._size >= 1 )
        {
          v91 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v91 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v91->static_fields->GET_EXIST_SVT_KEY, 0LL) )
          {
            v92 = BattleResultBondsComponent_TypeInfo;
            if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v92 = BattleResultBondsComponent_TypeInfo;
            }
            v93 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69086012(
                                    v92->static_fields->GET_EXIST_SVT_KEY,
                                    0LL);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v94 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_object_(
                                                                   v93,
                                                                   (const MethodInfo_2E9EEC0 *)Method_JsonManager_DeserializeArray_GetSvts___);
            System_Collections_Generic_List_object___AddRange(
              v90,
              v94,
              (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_GetSvts__AddRange__);
          }
          v95 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v95 = BattleResultBondsComponent_TypeInfo;
          }
          GET_EXIST_SVT_KEY = v95->static_fields->GET_EXIST_SVT_KEY;
          v97 = System_Collections_Generic_List_object___ToArray(
                  v90,
                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_GetSvts__ToArray__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v98 = JsonManager__toJson(&v97->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_EXIST_SVT_KEY, v98, 0LL);
        }
      }
      UnityEngine_PlayerPrefs__Save(0LL);
      v50 = this;
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
    v101 = 0;
    v102 = 0;
    v154 = v52;
    v155 = v51;
    v153 = myDeck->fields.svts;
    while ( 1 )
    {
      if ( v101 >= max_length )
LABEL_144:
        sub_1B6432C(Instance, v57);
      v103 = svts->m_Items[v101];
      v104 = (Il2CppObject *)sub_1B64314(BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo, v57, v58);
      System_Object___ctor(v104, 0LL);
      if ( !v103 || !v104 )
        goto LABEL_143;
      userSvtId = v103->fields.userSvtId;
      v104[1].klass = (Il2CppClass *)userSvtId;
      if ( userSvtId < 1 )
      {
        Instance = (int64_t)x;
        if ( !x )
          goto LABEL_143;
        Instance = BattleData__IsInterruptionQuest((BattleData_o *)x, 0LL);
        if ( (Instance & 1) == 0 )
          goto LABEL_129;
        if ( v50->fields.isMultiDeck )
        {
          Instance = (int64_t)Object_object;
          if ( !Object_object )
            goto LABEL_143;
          Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, v57);
          v122 = (BattleResultBondsIconComponent_o *)Instance;
          if ( !Instance )
            goto LABEL_143;
        }
        else
        {
          v140 = v50->fields.collects;
          if ( !v140 )
            goto LABEL_143;
          if ( v102 >= v140->max_length )
            goto LABEL_144;
          v122 = v140->m_Items[v102];
          if ( !v122 )
            goto LABEL_143;
        }
        BattleResultBondsIconComponent__setServantData(v122, 0LL, 0LL, 0, 0, 0, 0, v121);
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v122, 0LL);
        if ( !Instance )
          goto LABEL_143;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        v50 = this;
      }
      else
      {
        if ( !v51 )
          goto LABEL_143;
        Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v51,
                              userSvtId,
                              (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !Instance )
          goto LABEL_143;
        v106 = (UserServantEntity_o *)Instance;
        v107 = v102;
        SvtId = (BattleResultBondsComponent_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
        ServantCollection = BattleResultBondsComponent__getServantCollection(SvtId, oldCollects, (int32_t)SvtId, v109);
        Instance = UserServantEntity__getSvtId(v106, 0LL);
        if ( !v52 )
          goto LABEL_143;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v52,
                              Instance,
                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !usrSvts )
          goto LABEL_143;
        v113 = usrSvts->max_length;
        v114 = (ServantEntity_o *)Instance;
        if ( v113 < 1 )
        {
LABEL_86:
          afterLimitCount = -1;
          v120 = -1;
        }
        else
        {
          v115 = 0;
          while ( 1 )
          {
            if ( v115 >= v113 )
              goto LABEL_144;
            v116 = usrSvts->m_Items[v115];
            if ( !v116 )
              goto LABEL_143;
            v117 = *(_OWORD *)&v116->fields.id.fields.fakeValue;
            *(_OWORD *)&v161.fields.currentCryptoKey = *(_OWORD *)&v116->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v161.fields.fakeValue = v117;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v160 = v161;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v160, 0LL);
            if ( (Il2CppClass *)Instance == v104[1].klass )
              break;
            v113 = usrSvts->max_length;
            if ( (int)++v115 >= v113 )
              goto LABEL_86;
          }
          if ( this->fields.isMultiDeck )
            BattleResultBondsComponent__UpdateAfterLimitCount(
              (BattleResultBondsComponent_o *)Instance,
              (BattleData_o *)x,
              v116,
              v103,
              svtLimitImageMaster,
              v118);
          Instance = UserServantEntity__getIconLimitCount((UserServantEntity_o *)v116, 0, 0LL);
          afterIconLimitCount = v116->fields.afterIconLimitCount;
          afterLimitCount = v116->fields.afterLimitCount;
          v124 = afterIconLimitCount < 0 || (_DWORD)Instance == afterIconLimitCount;
          v120 = v124 ? Instance : v116->fields.afterIconLimitCount;
        }
        if ( !battleResult )
          goto LABEL_143;
        buddyPointInfos = battleResult->fields.buddyPointInfos;
        if ( buddyPointInfos )
        {
          v126 = 0LL;
          if ( *(_QWORD *)&buddyPointInfos->max_length && !isHideBuddyPointResult )
          {
            v127 = (System_Func_object__bool__o *)sub_1B64314(
                                                    System_Func_BattleBuddyPointInfo__bool__TypeInfo,
                                                    v57,
                                                    v111);
            System_Func_object__bool____ctor(
              v127,
              v104,
              Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__,
              0LL);
            Instance = (int64_t)BasicHelper__Find_object_(
                                  (System_Object_array *)buddyPointInfos,
                                  (System_Func_T__bool__o *)v127,
                                  (const MethodInfo_2E2543C *)Method_BasicHelper_Find_BattleBuddyPointInfo___);
            v126 = (BattleBuddyPointInfo_o *)Instance;
          }
        }
        else
        {
          v126 = 0LL;
        }
        if ( this->fields.isMultiDeck )
        {
          Instance = (int64_t)Object_object;
          if ( !Object_object )
            goto LABEL_143;
          Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, v57);
          v128 = (BattleResultBondsIconComponent_o *)Instance;
          if ( !Instance )
            goto LABEL_143;
        }
        else
        {
          v129 = this->fields.collects;
          if ( !v129 )
            goto LABEL_143;
          if ( v107 >= v129->max_length )
            goto LABEL_144;
          v128 = v129->m_Items[v107];
          if ( !v128 )
            goto LABEL_143;
        }
        BattleResultBondsIconComponent__setServantData(
          v128,
          ServantCollection,
          v106,
          v120,
          this->fields.baseFriendshipExp,
          Type == 0,
          afterLimitCount,
          v112);
        BattleResultBondsIconComponent__SetBuddyPointInfo(v128, v126, battleResult->fields.eventId, v130);
        if ( !v114 )
          goto LABEL_143;
        v52 = v154;
        v51 = v155;
        if ( ServantEntity__checkIsHeroineSvt(v114, 0LL) && !UserServantEntity__IsAddFriendShipHeroine(v106, 0LL) )
        {
          updateFlg = this->fields.updateFlg;
          v138 = updateFlg | BattleResultBondsIconComponent__setNextServantData(v128, ServantCollection, v131);
          v50 = this;
          v102 = v107;
          this->fields.updateFlg = v138;
          v128->fields.isHeroine = 1;
        }
        else
        {
          Instance = (int64_t)MasterData_object;
          if ( !MasterData_object )
            goto LABEL_143;
          v102 = v107;
          EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                               MasterData_object,
                               v128->fields.userId,
                               v128->fields.svtId,
                               0LL);
          v133 = this->fields.updateFlg;
          v136 = v133 | BattleResultBondsIconComponent__setNextServantData(v128, EntityDefinitely, v134);
          v50 = this;
          this->fields.updateFlg = v136;
        }
        svts = v153;
        BattleResultBondsIconComponent__changeGauge(v128, 0.0, v135);
        BattleResultBondsIconComponent__InitBuddyPointInfo(v128, v139);
        if ( v50->fields.isMultiDeck )
        {
          Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v128, 0LL);
          if ( !Instance )
            goto LABEL_143;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        }
      }
      ++v102;
LABEL_129:
      max_length = svts->max_length;
      if ( (int)++v101 >= max_length )
        goto LABEL_132;
    }
  }
  v102 = 0;
LABEL_132:
  if ( !v50->fields.isMultiDeck )
  {
    BattleResultBondsComponent__NormalBondsInit(v50, v102, cnt, Type == 0, battleResult, isHideBuddyPointResult, v60);
    return;
  }
  if ( !Object_object )
    goto LABEL_143;
  BattleResultBondsDeckPerWaveComponent__SetWaveCount(Object_object, currentWave, maxWave, v59);
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object_object, 0LL);
  if ( !Instance )
    goto LABEL_143;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)Object_object->fields.iconRoot;
  if ( !Instance
    || ((*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
          Instance,
          *(_QWORD *)(*(_QWORD *)Instance + 448LL)),
        (Instance = (int64_t)v50->fields.multiBondsRoot) == 0)
    || ((*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
          Instance,
          *(_QWORD *)(*(_QWORD *)Instance + 448LL)),
        (Instance = (int64_t)v50->fields.bondsList) == 0)
    || (v143 = *(_QWORD *)(Instance + 16),
        v144 = Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__,
        ++*(_DWORD *)(Instance + 28),
        !v143) )
  {
LABEL_143:
    sub_1B64324(Instance);
  }
  v145 = *(int *)(Instance + 24);
  if ( (unsigned int)v145 >= *(_DWORD *)(v143 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)Object_object,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v144[4] + 192LL) + 112LL));
  }
  else
  {
    v146 = v143 + 8 * v145;
    *(_DWORD *)(Instance + 24) = v145 + 1;
    *(_QWORD *)(v146 + 32) = Object_object;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v146 + 32), (int32_t)Object_object, v141, v142);
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
        sub_1B6432C(BondsIconArray, v4);
      BondsIconArray = (BattleResultBondsIconComponent_array *)v6->m_Items[v7];
      if ( !BondsIconArray )
        break;
      BattleResultBondsIconComponent__FinishBuddyPointInfoUpdate((BattleResultBondsIconComponent_o *)BondsIconArray, v4);
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_7;
    }
LABEL_9:
    sub_1B64324(BondsIconArray);
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

  if ( (byte_49FF4D2 & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, battleData);
    this = (BattleResultBondsComponent_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_49FF4D2 = 1;
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
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v27, 0LL);
  this = (BattleResultBondsComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                           userSvtData->fields.limitCount,
                                           0LL);
  if ( !svtLimitImageMaster )
LABEL_26:
    sub_1B64324(this);
  if ( ServantLimitImageMaster__IsServantLimitCountSeal(svtLimitImageMaster, v16, (int32_t)this, 0LL) )
  {
    v18 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v28.fields.currentCryptoKey = v18;
    *(_QWORD *)&v28.fields.fakeValue = v17;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v28, 0LL);
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
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v29, 0LL);
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
        sub_1B6432C(BondsIconArray, v5);
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
    sub_1B64324(BondsIconArray);
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
    sub_1B6432C(this, method);
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
    sub_1B64324(this);
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
  Il2CppObject *ComponentInChildren_object; // x23
  BattleResultBondsComponent_c *v22; // x0
  Il2CppObject *v23; // x24
  bool v24; // w0
  int32_t v25; // w2
  int32_t v26; // w3
  const MethodInfo *v27; // x4
  UnityEngine_Transform_o *transform; // x21
  float v29; // s8
  float y; // s9
  int v31; // s2
  float v32; // s0
  float v33; // s1
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 klass_low; // x10
  __int64 v37; // x8
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FF4C7 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, text);
    sub_1B640C8(&BattleResultBondsComponent_TypeInfo, v13);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___, v14);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v16);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v17);
    sub_1B640C8(&StringLiteral_17230/*"bit_reward_shine02"*/, v18);
    byte_49FF4C7 = 1;
  }
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             this->fields.confPrefab,
             this->fields.confRoot,
             0LL,
             0LL);
  if ( !Object )
    goto LABEL_36;
  v20 = Object;
  Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Object, 0LL);
  if ( !Object )
    goto LABEL_36;
  v38.fields.y = -112.0 - posY;
  v38.fields.x = 0.0;
  v38.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v38, 0LL);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 v20,
                                 (const MethodInfo_2E8813C *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
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
      v22 = BattleResultBondsComponent_TypeInfo;
      if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
        v22 = BattleResultBondsComponent_TypeInfo;
      }
      UILabel__SetCondensedScale(
        (UILabel_o *)ComponentInChildren_object,
        v22->static_fields->CONF_LABEL_MAX_WIDTH - 36,
        0LL);
    }
    else
    {
      if ( isSaintGraph )
        UIWidget__set_height((UIWidget_o *)ComponentInChildren_object, 100, 0LL);
      UILabel__set_text((UILabel_o *)ComponentInChildren_object, text, 0LL);
    }
  }
  v23 = UnityEngine_GameObject__GetComponentInChildren_object_(
          v20,
          (const MethodInfo_2E8813C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v24 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0LL, 0LL);
  if ( (iconImageId & 0x80000000) == 0 && v24 )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( isCoin )
      AtlasManager__SetCoin((UISprite_o *)v23, iconImageId, 0LL);
    else
      AtlasManager__SetItem((UISprite_o *)v23, iconImageId, 0LL);
    BattleResultBondsComponent__CreateRewardEffect(
      this,
      this->fields.resultAssetData,
      (UISprite_o *)v23,
      (System_String_o *)StringLiteral_17230/*"bit_reward_shine02"*/,
      v27);
    if ( ComponentInChildren_object )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ComponentInChildren_object, 0LL);
      Object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)ComponentInChildren_object,
                                             0LL);
      if ( Object )
      {
        LODWORD(v29) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Object, 0LL);
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
            *(UnityEngine_Vector3_o *)(&v31 - 2) = UnityEngine_Transform__get_localPosition(
                                                     (UnityEngine_Transform_o *)Object,
                                                     0LL);
            if ( transform )
            {
              v32 = v29 + 36.0;
              v33 = y;
              UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v31 - 2), 0LL);
              goto LABEL_31;
            }
          }
        }
      }
    }
LABEL_36:
    sub_1B64324(Object);
  }
LABEL_31:
  Object = (UnityEngine_GameObject_o *)this->fields.conflist;
  if ( !Object )
    goto LABEL_36;
  v34 = *(_QWORD *)&Object->fields.m_CachedPtr;
  v35 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(Object[1].klass);
  if ( !v34 )
    goto LABEL_36;
  klass_low = SLODWORD(Object[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v34 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Object,
      (Il2CppObject *)v20,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = v34 + 8 * klass_low;
    LODWORD(Object[1].klass) = klass_low + 1;
    *(_QWORD *)(v37 + 32) = v20;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 32), (int32_t)v20, v25, v26);
  }
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
  System_Collections_Generic_List_object__o *conflist; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x1
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x1
  __int64 v28; // x2
  int32_t colIndex; // w8
  __int64 v30; // x9
  int32_t v31; // w10
  __int64 v32; // x11
  __int64 *v33; // x8
  __int64 v34; // x20
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 *v37; // x21
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_GameObject__o *v39; // x8
  int32_t size; // w2
  int v41; // w9
  UnityEngine_Object_o *levelUpSimpleAnim; // x22
  System_Collections_Generic_List_object__c *klass; // x8
  System_Collections_Generic_List_object__o *v44; // x22
  __int64 v45; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v47; // x0
  UnityEngine_Object_o *levelUpAnim; // x22
  __int64 v49; // x1
  int32_t v50; // w2
  int32_t v51; // w3
  __int64 v52; // x9
  __int64 v53; // x8
  __int64 v54; // x9
  struct BattleResultBondsIconComponent_o *v55; // x1
  UnityEngine_Object_o *figureMoveRoot; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o **v58; // x21
  int32_t v59; // w2
  int32_t v60; // w3
  __int64 v61; // x1
  __int64 v62; // x2
  UnityEngine_GameObject_o *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t svtId; // w22
  int32_t svtLimit; // w23
  BattleResultBondsFigureComponent_o *bondsFigure; // x19
  UnityEngine_GameObject_o *v70; // x21
  System_Action_o *v71; // x24
  const MethodInfo *v72; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FF4C5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Clear__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v11);
    sub_1B640C8(&BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo, v12);
    sub_1B640C8(&Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__, v13);
    sub_1B640C8(&BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo, v14);
    sub_1B640C8(&StringLiteral_17216/*"bit_result_levelup01"*/, v15);
    sub_1B640C8(&StringLiteral_3558/*"CLOSE"*/, v16);
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, v17);
    sub_1B640C8(&StringLiteral_3561/*"CLOSE_BOND_UP_ROOT"*/, v18);
    byte_49FF4C5 = 1;
  }
  memset(&v74, 0, sizeof(v74));
  v19 = sub_1B64314(BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_68;
  *(_QWORD *)(v19 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 16), (int32_t)this, v21, v22);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v23);
  *(_QWORD *)(v19 + 24) = BondsIconArray;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 24), (int32_t)BondsIconArray, v25, v26);
  colIndex = this->fields.colIndex;
  v30 = *(_QWORD *)(v19 + 24);
  *(_DWORD *)(v19 + 32) = colIndex;
  if ( !v30 )
    goto LABEL_68;
  v31 = *(_DWORD *)(v30 + 24);
  if ( colIndex >= v31 )
    goto LABEL_12;
  do
  {
    if ( colIndex >= (unsigned int)v31 )
    {
      this->fields.colIndex = colIndex;
      sub_1B6432C(conflist, v27);
    }
    v32 = *(_QWORD *)(v30 + 8LL * colIndex + 32);
    if ( !v32 )
    {
      this->fields.colIndex = colIndex;
      sub_1B64324(conflist);
    }
    if ( *(_BYTE *)(v32 + 112) && *(_DWORD *)(v32 + 160) != *(_DWORD *)(v32 + 168) )
    {
      this->fields.colIndex = colIndex;
      v34 = sub_1B64314(BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo, v27, v28);
      System_Object___ctor((Il2CppObject *)v34, 0LL);
      if ( !v34 )
        goto LABEL_68;
      *(_QWORD *)(v34 + 24) = v19;
      v37 = (__int64 *)(v34 + 24);
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 24), v19, v35, v36);
      conflist = (System_Collections_Generic_List_object__o *)this->fields.conflist;
      if ( !conflist )
        goto LABEL_68;
      if ( conflist->fields._size >= 1 )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v73,
          conflist,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
        v74 = v73;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v74,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
        {
          current = v74.fields._current;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)current, 0LL);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v74,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
        v39 = this->fields.conflist;
        if ( !v39 )
          goto LABEL_68;
        size = v39->fields._size;
        v41 = v39->fields._version + 1;
        v39->fields._size = 0;
        v39->fields._version = v41;
        if ( size >= 1 )
          System_Array__Clear((System_Array_o *)v39->fields._items, 0, size, 0LL);
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
                                                                  (System_String_o *)StringLiteral_17216/*"bit_result_levelup01"*/,
                                                                  0LL);
        if ( !conflist )
          goto LABEL_68;
        klass = conflist->klass;
        v44 = conflist;
        v45 = *(unsigned __int16 *)(&conflist->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&conflist->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v45;
            p_offset += 2;
            if ( !v45 )
              goto LABEL_41;
          }
          v47 = (__int64)(&klass->vtable._4_unknown.method + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_41:
          v47 = sub_1BB60A8(conflist, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(System_Collections_Generic_List_object__o *, _QWORD, float))v47)(
          v44,
          *(_QWORD *)(v47 + 8),
          0.0);
        conflist = (System_Collections_Generic_List_object__o *)this->fields.levelUpSimpleAnim;
        if ( !conflist )
          goto LABEL_68;
        conflist = (System_Collections_Generic_List_object__o *)SimpleAnimation__Play_63513060(
                                                                  (SimpleAnimation_o *)conflist,
                                                                  (System_String_o *)StringLiteral_17216/*"bit_result_levelup01"*/,
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
                                                                    (System_String_o *)StringLiteral_17216/*"bit_result_levelup01"*/,
                                                                    0LL);
          if ( !conflist )
            goto LABEL_68;
          UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)conflist, 0.0, 0LL);
          conflist = (System_Collections_Generic_List_object__o *)this->fields.levelUpAnim;
          if ( !conflist )
            goto LABEL_68;
          conflist = (System_Collections_Generic_List_object__o *)UnityEngine_Animation__Play_68872828(
                                                                    (UnityEngine_Animation_o *)conflist,
                                                                    (System_String_o *)StringLiteral_17216/*"bit_result_levelup01"*/,
                                                                    0LL);
        }
      }
      v52 = *v37;
      if ( *v37 )
      {
        v53 = *(_QWORD *)(v52 + 24);
        if ( v53 )
        {
          v54 = *(int *)(v52 + 32);
          if ( (unsigned int)v54 >= *(_DWORD *)(v53 + 24) )
            sub_1B6432C(conflist, v49);
          v55 = *(struct BattleResultBondsIconComponent_o **)(v53 + 8 * v54 + 32);
          this->fields.openCollect = v55;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCollect, (int32_t)v55, v50, v51);
          figureMoveRoot = (UnityEngine_Object_o *)this->fields.figureMoveRoot;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(figureMoveRoot, 0LL, 0LL) )
          {
            conflist = (System_Collections_Generic_List_object__o *)this->fields.figureMoveRoot;
            if ( !conflist )
              goto LABEL_68;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)conflist, 0LL);
            *(_QWORD *)(v34 + 16) = gameObject;
            v58 = (UnityEngine_GameObject_o **)(v34 + 16);
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 16), (int32_t)gameObject, v59, v60);
            conflist = *(System_Collections_Generic_List_object__o **)(v34 + 16);
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
            *(_QWORD *)(v34 + 16) = v63;
            v58 = (UnityEngine_GameObject_o **)(v34 + 16);
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 16), (int32_t)v63, v64, v65);
          }
          openCollect = this->fields.openCollect;
          if ( openCollect )
          {
            svtId = openCollect->fields.svtId;
            svtLimit = openCollect->fields.svtLimit;
            bondsFigure = this->fields.bondsFigure;
            v70 = *v58;
            v71 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v61, v62);
            System_Action___ctor(
              v71,
              (Il2CppObject *)v34,
              Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__,
              0LL);
            if ( bondsFigure )
            {
              BattleResultBondsFigureComponent__SetupFigure(bondsFigure, v70, svtId, svtLimit, 7, 0, 51, v71, v72);
              return;
            }
          }
        }
      }
LABEL_68:
      sub_1B64324(conflist);
    }
    *(_DWORD *)(v19 + 32) = ++colIndex;
  }
  while ( colIndex < v31 );
  this->fields.colIndex = colIndex - 1;
LABEL_12:
  conflist = (System_Collections_Generic_List_object__o *)this->fields.myFsm;
  if ( !this->fields.openBoundsFlg )
  {
    if ( conflist )
    {
      v33 = &StringLiteral_3558/*"CLOSE"*/;
      goto LABEL_27;
    }
    goto LABEL_68;
  }
  if ( !conflist )
    goto LABEL_68;
  if ( this->fields.isMultiDeck )
    v33 = &StringLiteral_3561/*"CLOSE_BOND_UP_ROOT"*/;
  else
    v33 = &StringLiteral_5463/*"END_PROC"*/;
LABEL_27:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)conflist, (System_String_o *)*v33, 0LL);
}


void __fastcall BattleResultBondsComponent__checkShow(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleFriendshipRewardInfo_array *showList; // x8
  __int64 v6; // x8
  Il2CppObject *Instance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x21
  SummonAssetManager_o *parentComp; // x0
  struct BattleResultComponent_o *v12; // x8
  struct BattleResultComponent_o *v13; // x8
  const MethodInfo *v14; // x3

  if ( (byte_49FF4CB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_BattleResultBondsComponent__checkShow_b__67_0__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v4);
    byte_49FF4CB = 1;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
        v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
        System_Action___ctor(v10, (Il2CppObject *)this, Method_BattleResultBondsComponent__checkShow_b__67_0__, 0LL);
        if ( Instance )
        {
          SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v10, 0LL);
          return;
        }
        goto LABEL_23;
      }
      parentComp = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      if ( !parentComp )
        goto LABEL_23;
      SummonAssetManager__UnloadSummonAssets(parentComp, 0LL);
    }
  }
  parentComp = (SummonAssetManager_o *)this->fields.parentComp;
  if ( !parentComp )
    goto LABEL_23;
  BattleResultComponent__ResetPlayScreenTouch((BattleResultComponent_o *)parentComp, method);
  v12 = this->fields.parentComp;
  if ( !v12 )
    goto LABEL_23;
  parentComp = (SummonAssetManager_o *)v12->fields.obj_fronttouch;
  if ( !parentComp )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)parentComp, 1, 0LL);
  v13 = this->fields.parentComp;
  if ( !v13 )
    goto LABEL_23;
  parentComp = (SummonAssetManager_o *)v13->fields.obj_basebg;
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
    sub_1B64324(parentComp);
  }
  BattleResultComponent__showServantRewardAction((BattleResultComponent_o *)parentComp, 0LL, 1, v14);
}


void __fastcall BattleResultBondsComponent__closeBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *effectUIList; // x0
  int32_t v9; // w20
  int32_t v10; // w2
  int v11; // w8
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  struct BattleResultComponent_o *parentComp; // x8
  const MethodInfo *v15; // x1
  struct BattleWindowComponent_o *confwindow; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  BattleWindowComponent_EndCall_o *v19; // x21

  if ( (byte_49FF4CC & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultBondsComponent_closeBondUp__, method);
    sub_1B640C8(&Method_BattleResultBondsComponent_endCloseBondUp__, v3);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIUnityRenderer__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__, v7);
    byte_49FF4CC = 1;
  }
  UnityEngine_Time__set_timeScale(this->fields.tempSaveTimeScale, 0LL);
  effectUIList = this->fields.effectUIList;
  if ( !effectUIList )
    goto LABEL_19;
  if ( *((int *)effectUIList + 6) >= 1 )
  {
    v9 = 0;
    do
    {
      effectUIList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)effectUIList,
                       v9,
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
      if ( !effectUIList )
        goto LABEL_19;
      effectUIList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectUIList, 0LL);
      if ( !effectUIList )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectUIList, 0, 0LL);
      effectUIList = this->fields.effectUIList;
      if ( !effectUIList )
        goto LABEL_19;
      v10 = *((_DWORD *)effectUIList + 6);
      ++v9;
    }
    while ( v9 < v10 );
    v11 = *((_DWORD *)effectUIList + 7) + 1;
    *((_DWORD *)effectUIList + 6) = 0;
    *((_DWORD *)effectUIList + 7) = v11;
    if ( v10 >= 1 )
      System_Array__Clear(*((System_Array_o **)effectUIList + 2), 0, v10, 0LL);
  }
  v12 = Method_BattleResultBondsComponent_closeBondUp__;
  if ( (*((_BYTE *)Method_BattleResultBondsComponent_closeBondUp__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1B640E0(Method_BattleResultBondsComponent_closeBondUp__);
  v13 = (System_Reflection_MethodBase_o *)sub_1B640AC(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (effectUIList = parentComp->fields.obj_fronttouch) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectUIList, 0, 0LL),
        (effectUIList = this->fields.bondsFigure) == 0LL)
    || (BattleResultBondsFigureComponent__DestroyFigure((BattleResultBondsFigureComponent_o *)effectUIList, v15),
        confwindow = this->fields.confwindow,
        v19 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, v17, v18),
        BattleWindowComponent_EndCall___ctor(
          v19,
          (Il2CppObject *)this,
          Method_BattleResultBondsComponent_endCloseBondUp__,
          0LL),
        !confwindow) )
  {
LABEL_19:
    sub_1B64324(effectUIList);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))confwindow->klass->vtable._12_Close.method)(
    confwindow,
    v19,
    confwindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultBondsComponent__endClose(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  ServantFaceIconComponent_o *BondsIconArray; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  ServantFaceIconComponent_o *v9; // x20
  int v10; // w21
  int v11; // w22
  __int64 v12; // x8
  __int64 v13; // x1

  if ( (byte_49FF4CF & 1) == 0 )
  {
    sub_1B640C8(&OptionManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, v5);
    byte_49FF4CF = 1;
  }
  this->fields.resultAssetData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resultAssetData, 0, v2, v3);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    BondsIconArray = (ServantFaceIconComponent_o *)BattleResultBondsComponent__GetBondsIconArray(this, v6);
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
        ServantFaceIconComponent__ClearFaceAtlas(BondsIconArray, 0LL);
        if ( v10 == v11 )
          goto LABEL_14;
        if ( (unsigned int)++v11 >= LODWORD(v9->fields.m_CancellationTokenSource) )
          sub_1B6432C(BondsIconArray, v13);
      }
LABEL_17:
      sub_1B64324(BondsIconArray);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultBondsComponent__endCloseBondUp(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF4CD & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_49FF4CD = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
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
  System_Text_StringBuilder_o *v38; // x21
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  __int64 lvComp; // x0
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t friendshipRank; // w22
  int32_t svtId; // w25
  int v45; // w28
  Il2CppObject *current; // x23
  System_String_o *v47; // x0
  System_String_o *v48; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v50; // x1
  const MethodInfo *v51; // x5
  struct BattleResultBondsIconComponent_o *v52; // x8
  int32_t svtLimit; // w23
  int32_t ServantLimitCountSealAfter; // w23
  __int64 *v55; // x8
  int v56; // w20
  bool v57; // w23
  System_String_o *v58; // x0
  const MethodInfo *v59; // x5
  struct BattleResultBondsIconComponent_o *v60; // x8
  __int64 v61; // x1
  __int64 v62; // x2
  System_String_o *v63; // x0
  const MethodInfo *v64; // x5
  System_Collections_Generic_List_object__o *v65; // x22
  __int64 v66; // x1
  struct BattleFriendshipRewardInfo_array *rewardInfos; // x20
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v69; // x23
  int v70; // w21
  int CONF_SERVANT_COIN_PLUS_HEIGHT; // w25
  struct BattleResultBondsIconComponent_o *v72; // x8
  BattleFriendshipRewardInfo_o *v73; // x24
  GiftEntity_o *v74; // x25
  Il2CppObject *v75; // x0
  System_String_o *v76; // x26
  Il2CppObject *v77; // x0
  Il2CppObject *v78; // x0
  ServantEntity_o *v79; // x26
  Il2CppObject *Master_object; // x27
  int32_t v81; // w1
  System_String_o *v82; // x0
  const MethodInfo *v83; // x5
  bool v84; // w26
  Il2CppObject *Name; // x26
  System_String_o *v86; // x0
  System_String_o *v87; // x27
  int32_t IconImageId; // w0
  const MethodInfo *v89; // x5
  BattleResultBondsComponent_c *v90; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  struct System_Object_array *items; // x8
  _QWORD *v94; // x9
  __int64 size; // x10
  Il2CppClass **v96; // x0
  System_Object_array *v97; // x0
  int32_t v98; // w2
  int32_t v99; // w3
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
  __int64 v111; // x1
  __int64 v112; // x2
  BattleWindowComponent_EndCall_o *v113; // x21
  System_Text_StringBuilder_o *v114; // [xsp+8h] [xbp-C8h]
  int32_t key; // [xsp+14h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v116; // [xsp+18h] [xbp-B8h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+30h] [xbp-A0h] BYREF
  System_String_o *countText; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v119; // [xsp+40h] [xbp-90h] BYREF
  System_String_o *nameText; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_49FF4C9 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultBondsComponent_endMoveFigure__, method);
    sub_1B640C8(&Method_BattleResultBondsComponent_openedBondUp__, v4);
    sub_1B640C8(&BattleResultBondsComponent_TypeInfo, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_ItemMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v10);
    sub_1B640C8(&DataManager_TypeInfo, v11);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v17);
    sub_1B640C8(&int_TypeInfo, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__, v22);
    sub_1B640C8(&System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo, v23);
    sub_1B640C8(&LocalizationManager_TypeInfo, v24);
    sub_1B640C8(&NetworkManager_TypeInfo, v25);
    sub_1B640C8(&ServantCommentManager_TypeInfo, v26);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v28);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v29);
    sub_1B640C8(&StringLiteral_11032/*"RESULT_BOUNDS_OPENQUEST"*/, v30);
    sub_1B640C8(&StringLiteral_11035/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/, v31);
    sub_1B640C8(&StringLiteral_11034/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, v32);
    sub_1B640C8(&StringLiteral_11031/*"RESULT_BOUNDS_GET_COIN_NAME"*/, v33);
    sub_1B640C8(&StringLiteral_11029/*"RESULT_BOUNDS_GETVOICE"*/, v34);
    sub_1B640C8(&StringLiteral_24917/*"{0} {1}"*/, v35);
    sub_1B640C8(&StringLiteral_1/*""*/, v36);
    sub_1B640C8(&StringLiteral_11030/*"RESULT_BOUNDS_GET_COIN_COUNT"*/, v37);
    byte_49FF4C9 = 1;
  }
  memset(&v119, 0, sizeof(v119));
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  v38 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, method, v2);
  System_Text_StringBuilder___ctor(v38, 0LL);
  v39 = Method_BattleResultBondsComponent_endMoveFigure__;
  if ( (*((_BYTE *)Method_BattleResultBondsComponent_endMoveFigure__ + 83) & 2) != 0 )
    v39 = (_QWORD *)sub_1B640E0(Method_BattleResultBondsComponent_endMoveFigure__);
  v40 = (System_Reflection_MethodBase_o *)sub_1B640AC(v39, v39[4]);
  OverwriteAssetSoundName__PlaySystemSe(v40, 6, 0LL);
  openCollect = this->fields.openCollect;
  if ( !openCollect )
    goto LABEL_113;
  lvComp = (__int64)this->fields.lvComp;
  if ( !lvComp )
    goto LABEL_113;
  friendshipRank = openCollect->fields.friendshipRank;
  svtId = openCollect->fields.svtId;
  BattleResultMasterUpStatusComponent__setData(
    (BattleResultMasterUpStatusComponent_o *)lvComp,
    friendshipRank,
    openCollect->fields.nextFriendShipRank,
    0LL);
  lvComp = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !lvComp )
    goto LABEL_113;
  v114 = v38;
  lvComp = (__int64)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                      (clsQuestCheck_o *)lvComp,
                      svtId,
                      friendshipRank,
                      8,
                      0LL);
  if ( lvComp )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v116,
      (System_Collections_Generic_List_object__o *)lvComp,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    v45 = 0;
    v119 = v116;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v119,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
    {
      current = v119.fields._current;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v47 = LocalizationManager__Get((System_String_o *)StringLiteral_11032/*"RESULT_BOUNDS_OPENQUEST"*/, 0LL);
      if ( !current )
        sub_1B64324(v47);
      v48 = v47;
      QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
      v50 = System_String__Format(v48, QuestName, 0LL);
      BattleResultBondsComponent__addConfObject(this, v50, (float)v45 * 22.0, -1, 0, 0, v51);
      v45 += 3;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v119,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  }
  else
  {
    v45 = 0;
  }
  v52 = this->fields.openCollect;
  if ( !v52 )
    goto LABEL_113;
  svtLimit = v52->fields.svtLimit;
  lvComp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lvComp )
    goto LABEL_113;
  lvComp = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)lvComp,
                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !lvComp )
    goto LABEL_113;
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
    v55 = &StringLiteral_11035/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/;
    v56 = 4;
    v57 = 1;
LABEL_32:
    v58 = LocalizationManager__Get((System_String_o *)*v55, 0LL);
    BattleResultBondsComponent__addConfObject(this, v58, (float)v45 * 22.0, -1, 0, v57, v59);
    v45 += v56;
    goto LABEL_33;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  lvComp = ServantCommentManager__IsOpenByServantFriendShip_40147864(
             svtId,
             friendshipRank,
             ServantLimitCountSealAfter,
             0LL);
  if ( (lvComp & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v55 = &StringLiteral_11034/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/;
    v57 = 0;
    v56 = 2;
    goto LABEL_32;
  }
LABEL_33:
  v60 = this->fields.openCollect;
  if ( !v60 )
    goto LABEL_113;
  if ( ServantVoiceMaster__isOpenByServantFriendShip(svtId, v60->fields.maxLimitCount, friendshipRank, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v63 = LocalizationManager__Get((System_String_o *)StringLiteral_11029/*"RESULT_BOUNDS_GETVOICE"*/, 0LL);
    BattleResultBondsComponent__addConfObject(this, v63, (float)v45 * 22.0, -1, 0, 0, v64);
    v45 += 2;
  }
  if ( this->fields.rewardInfos )
  {
    v65 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo,
                                                         v61,
                                                         v62);
    System_Collections_Generic_List_object____ctor(
      v65,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ItemMaster___);
    rewardInfos = this->fields.rewardInfos;
    if ( !rewardInfos )
      goto LABEL_113;
    max_length = rewardInfos->max_length;
    if ( max_length < 1 )
    {
      CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
      if ( !v65 )
        goto LABEL_113;
    }
    else
    {
      key = svtId;
      v69 = (DataMasterBase_TMaster__TEntity__PKType__o *)lvComp;
      v70 = 0;
      CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
      do
      {
        if ( v70 >= (unsigned int)max_length )
          sub_1B6432C(lvComp, v66);
        v72 = this->fields.openCollect;
        if ( !v72 )
          goto LABEL_113;
        v73 = rewardInfos->m_Items[v70];
        if ( !v73 )
          goto LABEL_113;
        if ( v72->fields.svtId == v73->fields.targetSvtId )
        {
          lvComp = (__int64)BattleFriendshipRewardInfo__getGiftEntity(v73, 0LL);
          if ( !lvComp )
            goto LABEL_113;
          v74 = (GiftEntity_o *)lvComp;
          GiftEntity__GetInfo((GiftEntity_o *)lvComp, &nameText, &countText, 0LL);
          lvComp = GiftEntity__isQp(v74, 0LL);
          if ( (lvComp & 1) != 0 )
          {
            nameText = countText;
            countText = (System_String_o *)StringLiteral_1/*""*/;
          }
          if ( v74->fields.type == 2 )
          {
            if ( !v69 )
              goto LABEL_113;
            v75 = DataMasterBase_object__object__int___GetEntity(
                    v69,
                    v74->fields.objectId,
                    (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( v75 && LODWORD(v75[3].klass) == 29 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v76 = LocalizationManager__Get((System_String_o *)StringLiteral_11030/*"RESULT_BOUNDS_GET_COIN_COUNT"*/, 0LL);
              LODWORD(v116.fields._list) = v74->fields.num;
              v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v116);
              countText = System_String__Format(v76, v77, 0LL);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !lvComp )
                goto LABEL_113;
              v78 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)lvComp,
                      key,
                      (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( v78 )
              {
                v79 = (ServantEntity_o *)v78;
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                lvComp = NetworkManager__get_UserId(0LL);
                if ( !Master_object )
                  goto LABEL_113;
                if ( UserServantCollectionMaster__TryGetEntity(
                       (UserServantCollectionMaster_o *)Master_object,
                       &entity,
                       lvComp,
                       key,
                       0LL) )
                {
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                  if ( !entity )
                    goto LABEL_113;
                  if ( !lvComp )
                    goto LABEL_113;
                  lvComp = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                             (ServantLimitImageMaster_o *)lvComp,
                             key,
                             entity->fields.maxLimitCount,
                             0LL);
                  if ( !entity )
                    goto LABEL_113;
                  if ( (_DWORD)lvComp == entity->fields.maxLimitCount )
                    v81 = -1;
                  else
                    v81 = lvComp;
                }
                else
                {
                  v81 = -1;
                }
                Name = (Il2CppObject *)ServantEntity__getName(v79, v81, -1, 0LL);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v86 = LocalizationManager__Get((System_String_o *)StringLiteral_11031/*"RESULT_BOUNDS_GET_COIN_NAME"*/, 0LL);
                nameText = System_String__Format_61389768(v86, (Il2CppObject *)nameText, Name, 0LL);
              }
              v84 = 1;
            }
            else
            {
              v84 = 0;
            }
            v87 = System_String__Format_61389768(
                    (System_String_o *)StringLiteral_24917/*"{0} {1}"*/,
                    (Il2CppObject *)nameText,
                    (Il2CppObject *)countText,
                    0LL);
            IconImageId = GiftEntity__getIconImageId(v74, 0LL);
            BattleResultBondsComponent__addConfObject(this, v87, (float)v45 * 22.0, IconImageId, v84, 0, v89);
          }
          else
          {
            v82 = System_String__Format_61389768(
                    (System_String_o *)StringLiteral_24917/*"{0} {1}"*/,
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
          lvComp = BattleFriendshipRewardInfo__isShow(v73, 0LL);
          if ( (lvComp & 1) != 0 )
          {
            if ( !v65 )
              goto LABEL_113;
            items = v65->fields._items;
            v94 = Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__;
            ++v65->fields._version;
            if ( !items )
              goto LABEL_113;
            size = v65->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v65,
                (Il2CppObject *)v73,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
            }
            else
            {
              v96 = &items->obj.klass + size;
              v65->fields._size = size + 1;
              v96[4] = (Il2CppClass *)v73;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v96 + 4), (int32_t)v73, v91, v92);
            }
          }
        }
        max_length = rewardInfos->max_length;
        ++v70;
      }
      while ( v70 < max_length );
      if ( !v65 )
LABEL_113:
        sub_1B64324(lvComp);
    }
    v97 = System_Collections_Generic_List_object___ToArray(
            v65,
            (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
    this->fields.showList = (struct BattleFriendshipRewardInfo_array *)v97;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.showList, (int32_t)v97, v98, v99);
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
    goto LABEL_113;
  UIWidget__set_height((UIWidget_o *)lvComp, CONF_SERVANT_COIN_PLUS_HEIGHT + 22 * v100 + 120, 0LL);
  confRoot = this->fields.confRoot;
  if ( !confRoot )
    goto LABEL_113;
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
      goto LABEL_113;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lvComp, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v105, 0LL);
    lvComp = (__int64)this->fields.confwindow;
    if ( !lvComp )
      goto LABEL_113;
    lvComp = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)lvComp + 424LL))(
               lvComp,
               *(_QWORD *)(*(_QWORD *)lvComp + 432LL));
  }
  if ( !v114 )
    goto LABEL_113;
  rankupConfLabel = this->fields.rankupConfLabel;
  lvComp = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v114->klass->vtable._3_ToString.method)(
             v114,
             v114->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !rankupConfLabel )
    goto LABEL_113;
  UILabel__set_text(rankupConfLabel, (System_String_o *)lvComp, 0LL);
  confwindow = this->fields.confwindow;
  v113 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, v111, v112);
  BattleWindowComponent_EndCall___ctor(
    v113,
    (Il2CppObject *)this,
    Method_BattleResultBondsComponent_openedBondUp__,
    0LL);
  if ( !confwindow )
    goto LABEL_113;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))confwindow->klass->vtable._10_Open.method)(
    confwindow,
    v113,
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

  if ( (byte_49FF4C4 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9197/*"NEXT"*/, method);
    sub_1B640C8(&iTween_TypeInfo, v3);
    byte_49FF4C4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_60023324(gameObject, 0LL);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v5);
  if ( !BondsIconArray )
    goto LABEL_18;
  v8 = *((_DWORD *)BondsIconArray + 6);
  v9 = BondsIconArray;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= v8 )
        goto LABEL_17;
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
LABEL_17:
        sub_1B6432C(BondsIconArray, v7);
      BondsIconArray = *v12;
      if ( !*v12 )
        break;
      BattleResultBondsIconComponent__LayoutFriendshipValue((BattleResultBondsIconComponent_o *)BondsIconArray, v7);
      v8 = v9[6];
      if ( (int)++v10 >= v8 )
        goto LABEL_13;
    }
LABEL_18:
    sub_1B64324(BondsIconArray);
  }
LABEL_13:
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  BondsIconArray = this->fields.myFsm;
  this->fields.bondsCountUp = 0;
  if ( !BondsIconArray )
    goto LABEL_18;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_9197/*"NEXT"*/, 0LL);
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
        sub_1B6432C(this, collects);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0LL;
  v6 = 0;
  while ( 1 )
  {
    if ( max_length == v6 )
      sub_1B6432C(this, deck);
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
    sub_1B64324(this);
  return (signed int)oldCollections->max_length > 1;
}


void __fastcall BattleResultBondsComponent__openedBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0
  struct BattleResultComponent_o *v4; // x8

  if ( (byte_49FF4CA & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5458/*"END_OPEN"*/, method);
    byte_49FF4CA = 1;
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
    sub_1B64324(parentComp);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)parentComp, (System_String_o *)StringLiteral_5458/*"END_OPEN"*/, 0LL);
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF4D6 & 1) == 0 )
  {
    sub_1B640C8(&BattleResultBondsComponent___c_TypeInfo, v1);
    byte_49FF4D6 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleResultBondsComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleResultBondsComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultBondsComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BattleResultBondsComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return col->fields.isUse;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_0(
        BattleResultBondsComponent___c_o *this,
        QuestRewardInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.type == 7 && x->fields.isNew;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_1(
        BattleResultBondsComponent___c_o *this,
        GetSvts_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  const MethodInfo *v17; // x1
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v18; // x9
  char v19; // w8
  UnityEngine_GameObject_o *parent; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v23; // x21
  BattleResultBondsComponent___c__DisplayClass61_1_c *v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v27; // x22
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v32; // x22
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v40; // x8
  int32_t v41; // w2
  int32_t v42; // w3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v43; // x22
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w2
  int32_t v47; // w3
  System_Collections_Hashtable_o *v48; // x0
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v49; // x8
  struct BattleResultBondsComponent_o *v50; // x8
  const MethodInfo *v51; // x2
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v52; // x8
  struct BattleResultBondsIconComponent_array *bondsIcons; // x9
  __int64 i; // x10
  __int64 v55; // x0
  char v56[4]; // [xsp+4h] [xbp-3Ch] BYREF
  int v57; // [xsp+8h] [xbp-38h] BYREF
  int v58; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_49FF4D7 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, method);
    sub_1B640C8(&object___TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&float_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_24644/*"x"*/, v6);
    sub_1B640C8(&StringLiteral_9580/*"OPEN"*/, v7);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v8);
    sub_1B640C8(&StringLiteral_22187/*"oncompletetarget"*/, v9);
    sub_1B640C8(&StringLiteral_18939/*"endMoveFigure"*/, v10);
    sub_1B640C8(&StringLiteral_20750/*"islocal"*/, v11);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v12);
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B640C8(&iTween_TypeInfo, v13);
    byte_49FF4D7 = 1;
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
  v18 = v2->fields.CS___8__locals1;
  if ( !v18 )
    goto LABEL_69;
  v19 = (char)this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v18->fields.__4__this;
  if ( !this )
    goto LABEL_69;
  if ( (v19 & 1) == 0 )
  {
    BattleResultBondsComponent__endMoveFigure((BattleResultBondsComponent_o *)this, v17);
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
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B64170(object___TypeInfo, 10LL);
  if ( !this )
    goto LABEL_69;
  v23 = this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_24644/*"x"*/;
  if ( StringLiteral_24644/*"x"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B64204(
                                                                   StringLiteral_24644/*"x"*/,
                                                                   v23->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    v24 = (BattleResultBondsComponent___c__DisplayClass61_1_c *)StringLiteral_24644/*"x"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( !LODWORD(v23->fields.CS___8__locals1) )
    goto LABEL_70;
  v23[1].klass = v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23[1], (int32_t)v24, v21, v22);
  v58 = -1007026176;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v58);
  v27 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B64204(this, v23->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v23->fields.CS___8__locals1) <= 1 )
    goto LABEL_70;
  v23[1].monitor = v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23[1].monitor, (int32_t)v27, v25, v26);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_23830/*"time"*/;
  if ( StringLiteral_23830/*"time"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B64204(
                                                                   StringLiteral_23830/*"time"*/,
                                                                   v23->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    v24 = (BattleResultBondsComponent___c__DisplayClass61_1_c *)StringLiteral_23830/*"time"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( LODWORD(v23->fields.CS___8__locals1) <= 2 )
    goto LABEL_70;
  v23[1].fields.parent = (struct UnityEngine_GameObject_o *)v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23[1].fields, (int32_t)v24, v28, v29);
  v57 = 1061997773;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v57);
  v32 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B64204(this, v23->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v23->fields.CS___8__locals1) <= 3 )
    goto LABEL_70;
  v23[1].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23[1].fields.CS___8__locals1, (int32_t)v32, v30, v31);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_20750/*"islocal"*/;
  if ( StringLiteral_20750/*"islocal"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B64204(
                                                                   StringLiteral_20750/*"islocal"*/,
                                                                   v23->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    v24 = (BattleResultBondsComponent___c__DisplayClass61_1_c *)StringLiteral_20750/*"islocal"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( LODWORD(v23->fields.CS___8__locals1) <= 4 )
    goto LABEL_70;
  v23[2].klass = v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23[2], (int32_t)v24, v33, v34);
  v56[0] = 1;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(bool_TypeInfo, v56);
  v37 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B64204(this, v23->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v23->fields.CS___8__locals1) <= 5 )
    goto LABEL_70;
  v23[2].monitor = v37;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23[2].monitor, (int32_t)v37, v35, v36);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22187/*"oncompletetarget"*/;
  if ( StringLiteral_22187/*"oncompletetarget"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B64204(
                                                                   StringLiteral_22187/*"oncompletetarget"*/,
                                                                   v23->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    v24 = (BattleResultBondsComponent___c__DisplayClass61_1_c *)StringLiteral_22187/*"oncompletetarget"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( LODWORD(v23->fields.CS___8__locals1) <= 6 )
    goto LABEL_70;
  v23[2].fields.parent = (struct UnityEngine_GameObject_o *)v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23[2].fields, (int32_t)v24, v38, v39);
  v40 = v2->fields.CS___8__locals1;
  if ( !v40 || (this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v40->fields.__4__this) == 0LL )
LABEL_69:
    sub_1B64324(this);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
  v43 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B64204(this, v23->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v23->fields.CS___8__locals1) <= 7 )
    goto LABEL_70;
  v23[2].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v43;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23[2].fields.CS___8__locals1, (int32_t)v43, v41, v42);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22185/*"oncomplete"*/;
  if ( StringLiteral_22185/*"oncomplete"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B64204(
                                                                   StringLiteral_22185/*"oncomplete"*/,
                                                                   v23->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    v24 = (BattleResultBondsComponent___c__DisplayClass61_1_c *)StringLiteral_22185/*"oncomplete"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( LODWORD(v23->fields.CS___8__locals1) <= 8 )
    goto LABEL_70;
  v23[3].klass = v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23[3], (int32_t)v24, v44, v45);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_18939/*"endMoveFigure"*/;
  if ( !StringLiteral_18939/*"endMoveFigure"*/ )
  {
    v24 = 0LL;
    goto LABEL_57;
  }
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B64204(
                                                                 StringLiteral_18939/*"endMoveFigure"*/,
                                                                 v23->klass->_1.element_class);
  if ( !this )
  {
LABEL_71:
    v55 = sub_1B64348(this);
    sub_1B641F0(v55, 0LL);
  }
  v24 = (BattleResultBondsComponent___c__DisplayClass61_1_c *)StringLiteral_18939/*"endMoveFigure"*/;
LABEL_57:
  if ( LODWORD(v23->fields.CS___8__locals1) <= 9 )
    goto LABEL_70;
  v23[3].monitor = v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23[3].monitor, (int32_t)v24, v46, v47);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v48 = iTween__Hash((System_Object_array *)v23, 0LL);
  iTween__MoveFrom_59914456(parent, v48, 0LL);
LABEL_61:
  v49 = v2->fields.CS___8__locals1;
  if ( !v49 )
    goto LABEL_69;
  v50 = v49->fields.__4__this;
  if ( !v50 )
    goto LABEL_69;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v50->fields.myFsm;
  v50->fields.openBoundsFlg = 1;
  if ( !this )
    goto LABEL_69;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9580/*"OPEN"*/, 0LL);
  v52 = v2->fields.CS___8__locals1;
  if ( !v52 )
    goto LABEL_69;
  bondsIcons = v52->fields.bondsIcons;
  if ( !bondsIcons )
    goto LABEL_69;
  i = v52->fields.i;
  if ( (unsigned int)i >= bondsIcons->max_length )
LABEL_70:
    sub_1B6432C(this, v24);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v52->fields.__4__this;
  if ( !this )
    goto LABEL_69;
  BattleResultBondsComponent__CheckFormalJoin((BattleResultBondsComponent_o *)this, bondsIcons->m_Items[i], v51);
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

  if ( (byte_49FF4D8 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FF4D8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CreateServantCoinConfirmDialog((CommonUI_o *)Instance, 1, this->fields.coin, 0LL, 0LL);
}