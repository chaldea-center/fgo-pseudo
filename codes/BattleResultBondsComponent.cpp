void __fastcall BattleResultBondsComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  struct BattleResultBondsComponent_StaticFields *static_fields; // x0
  int32_t v4; // w1
  int32_t v5; // w1
  struct BattleResultBondsComponent_StaticFields *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5E2A6 & 1) == 0 )
  {
    sub_1B885B0(&BattleResultBondsComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_7021/*"GetNewSvt"*/);
    sub_1B885B0(&StringLiteral_7007/*"GetExistSvt"*/);
    byte_4A5E2A6 = 1;
  }
  static_fields = BattleResultBondsComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SVT_GAP_5 = 0x4316000043320000LL;
  *(_QWORD *)&static_fields->CONF_LABEL_MAX_WIDTH = 0x12000001D0LL;
  v4 = StringLiteral_7021/*"GetNewSvt"*/;
  static_fields->GET_NEW_SVT_KEY = (struct System_String_o *)StringLiteral_7021/*"GetNewSvt"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->GET_NEW_SVT_KEY, v4, v1, v2);
  v5 = StringLiteral_7007/*"GetExistSvt"*/;
  v6 = BattleResultBondsComponent_TypeInfo->static_fields;
  v6->GET_EXIST_SVT_KEY = (struct System_String_o *)StringLiteral_7007/*"GetExistSvt"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->GET_EXIST_SVT_KEY, v5, v7, v8);
}


void __fastcall BattleResultBondsComponent___ctor(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  BattleResultBondsFigureComponent_o *v9; // x20
  const MethodInfo *v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5E2A5 & 1) == 0 )
  {
    sub_1B885B0(&BattleResultBondsFigureComponent_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4A5E2A5 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.conflist = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.conflist, (int32_t)v3, v4, v5);
  this->fields.buddyPointInfoWindowHeight = 366;
  this->fields.tempSaveTimeScale = 1.0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
  this->fields.bondsList = (struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.bondsList, (int32_t)v6, v7, v8);
  v9 = (BattleResultBondsFigureComponent_o *)sub_1B887FC(BattleResultBondsFigureComponent_TypeInfo);
  BattleResultBondsFigureComponent___ctor(v9, v10);
  this->fields.bondsFigure = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.bondsFigure, (int32_t)v9, v11, v12);
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
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *Master_object; // x25
  __int64 v21; // x24
  __int64 v22; // x23
  __int64 v23; // x25
  Il2CppObject *v24; // x8
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x24
  Il2CppObject *v30; // x25
  __int64 v31; // x0
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4A5E297 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    sub_1B885B0(&GetSvtCoin___TypeInfo);
    sub_1B885B0(&GetSvtCoin_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__);
    sub_1B885B0(&Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__);
    sub_1B885B0(&BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo);
    sub_1B885B0(&BattleResultBondsComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_12343/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/);
    sub_1B885B0(&StringLiteral_18609/*"dialogIgnoreTime"*/);
    byte_4A5E297 = 1;
  }
  entity = 0LL;
  if ( this->fields.getJoinSvtList && !this->fields.isWarboard )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___),
          (getJoinSvtList = this->fields.getJoinSvtList) == 0LL) )
    {
LABEL_45:
      sub_1B8880C(Instance, v6);
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
        UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_18609/*"dialogIgnoreTime"*/, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      else
      {
        if ( !v8 )
          goto LABEL_45;
        Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                      v8,
                                      v11->fields.userSvtId,
                                      (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
                _9__62_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                System_Action___ctor(
                  _9__62_0,
                  v16,
                  Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__,
                  0LL);
                static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
                static_fields->__9__62_0 = _9__62_0;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__62_0, (int32_t)_9__62_0, v18, v19);
              }
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SvtCoinMaster___);
              Instance = (DataManager_o *)UserServantEntity__getSvtId(v12, 0LL);
              if ( !Master_object )
                goto LABEL_45;
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            &entity,
                                            (int32_t)Instance,
                                            (const MethodInfo_311D988 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_45;
                if ( SHIDWORD(entity[1].klass) >= 1 )
                {
                  v21 = sub_1B887FC(BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v21, 0LL);
                  v22 = sub_1B88658(GetSvtCoin___TypeInfo, 1LL);
                  v23 = sub_1B887FC(GetSvtCoin_TypeInfo);
                  GetSvtCoin___ctor((GetSvtCoin_o *)v23, 0LL);
                  v24 = entity;
                  if ( !entity )
                    goto LABEL_45;
                  if ( !v23 )
                    goto LABEL_45;
                  *(_DWORD *)(v23 + 16) = entity[1].klass;
                  *(int32x2_t *)(v23 + 20) = vrev64_s32(*(int32x2_t *)((char *)&v24[1].klass + 4));
                  if ( !v22 )
                    goto LABEL_45;
                  Instance = (DataManager_o *)sub_1B886EC(v23, *(_QWORD *)(*(_QWORD *)v22 + 64LL));
                  if ( !Instance )
                  {
                    v31 = sub_1B88830(0LL);
                    sub_1B886D8(v31, 0LL);
                  }
                  if ( !*(_DWORD *)(v22 + 24) )
LABEL_46:
                    sub_1B88814(Instance, v6);
                  *(_QWORD *)(v22 + 32) = v23;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 32), v23, v25, v26);
                  if ( !v21 )
                    goto LABEL_45;
                  *(_QWORD *)(v21 + 16) = v22;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 16), v22, v27, v28);
                  _9__62_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__62_0,
                    (Il2CppObject *)v21,
                    Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__,
                    0LL);
                }
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v29 = LocalizationManager__Get((System_String_o *)StringLiteral_12343/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0LL);
              v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              Instance = (DataManager_o *)EventServantEntity__GetGetMessage(EventServant, 0LL);
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

  if ( (byte_4A5E29F & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleResultBondsComponent_endClose__);
    sub_1B885B0(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4A5E29F = 1;
  }
  if ( this->fields.isMultiDeck )
    multiDeckWindow = this->fields.multiDeckWindow;
  else
    multiDeckWindow = this->fields.window;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1B887FC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v4, (Il2CppObject *)this, Method_BattleResultBondsComponent_endClose__, 0LL);
  if ( !multiDeckWindow )
    sub_1B8880C(v5, v6);
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

  if ( (byte_4A5E2A4 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5E2A4 = 1;
  }
  upRoot = this->fields.upRoot;
  if ( !upRoot
    || (UnityEngine_GameObject__SetActive(upRoot, 0, 0LL),
        (upRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B8880C(upRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)upRoot, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultBondsComponent__CreateRewardEffect(
        BattleResultBondsComponent_o *this,
        AssetData_o *data,
        UISprite_o *targetIcon,
        System_String_o *effectName,
        const MethodInfo *method)
{
  BattleResultBondsComponent_o *v8; // x20
  Il2CppObject *Object_object__48635516; // x21
  BattleResultBondsComponent_o *v10; // x21
  BattleResultBondsComponent_o *v11; // x22
  BattleResultBondsComponent_o *v12; // x22
  BattleResultBondsComponent_o *v13; // x22
  int m_CancellationTokenSource; // w8
  BattleResultBondsComponent_o *v15; // x21
  unsigned int v16; // w22

  v8 = this;
  if ( (byte_4A5E299 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (BattleResultBondsComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E299 = 1;
  }
  if ( !data )
    goto LABEL_23;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              data,
                              effectName,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultBondsComponent_o *)UnityEngine_Object__Instantiate_object_(
                                           Object_object__48635516,
                                           (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( !byte_4A55CE1 )
  {
    this = (BattleResultBondsComponent_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v12 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v12,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0LL);
  v13 = this;
  if ( !byte_4A55CE6 )
  {
    this = (BattleResultBondsComponent_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v13 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v13,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                           (UnityEngine_GameObject_o *)v10,
                                           (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
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
        sub_1B88814(this, data);
      this = (BattleResultBondsComponent_o *)*((_QWORD *)&v15->fields.parentComp + (int)v16);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0LL);
      m_CancellationTokenSource = (int)v15->fields.m_CancellationTokenSource;
      if ( (int)++v16 >= m_CancellationTokenSource )
        goto LABEL_21;
    }
LABEL_23:
    sub_1B8880C(this, data);
  }
LABEL_21:
  this = (BattleResultBondsComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v15,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void __fastcall BattleResultBondsComponent__DeleteGetJoinSvtData(const MethodInfo *method)
{
  BattleResultBondsComponent_c *v1; // x0

  if ( (byte_4A5E28E & 1) == 0 )
  {
    sub_1B885B0(&BattleResultBondsComponent_TypeInfo);
    byte_4A5E28E = 1;
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


BattleResultBondsIconComponent_array *__fastcall BattleResultBondsComponent__GetBondsIconArray(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_bondsIconArray; // x19
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *bondsList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  System_Object_array *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5E2A1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
    byte_4A5E2A1 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( this->fields.isMultiDeck )
  {
    p_bondsIconArray = (ServantStatusBattleListViewItem_o *)&this->fields.bondsIconArray;
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.bondsIconArray, 0LL) )
    {
      v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v4,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
      bondsList = (System_Collections_Generic_List_object__o *)this->fields.bondsList;
      if ( !bondsList )
        goto LABEL_17;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v13,
        bondsList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v13,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
      {
        if ( !v13.fields._current )
          sub_1B8880C(0LL, v7);
        BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                          (BattleResultBondsDeckPerWaveComponent_o *)v13.fields._current,
                                                                          v7);
        if ( !v4 )
          sub_1B8880C(BondsIconArray, BondsIconArray);
        System_Collections_Generic_List_object___AddRange(
          v4,
          BondsIconArray,
          (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v13,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
      if ( !v4 )
LABEL_17:
        sub_1B8880C(bondsList, v5);
      v9 = System_Collections_Generic_List_object___ToArray(
             v4,
             (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
      p_bondsIconArray->klass = (ServantStatusBattleListViewItem_c *)v9;
      sub_1B88554(p_bondsIconArray, (int32_t)v9, v10, v11);
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
  BattleWindowComponent_o *window; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  UnityEngine_Object_o *multiDeckWindow; // x20

  if ( (byte_4A5E28F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E28F = 1;
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
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectUIList, (int32_t)v4, v5, v6);
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
    sub_1B8880C(window, method);
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
  if ( (byte_4A5E290 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E290 = 1;
  }
  this->fields.oldCollections = oldCollects;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.oldCollections,
    (int32_t)oldCollects,
    (int32_t)inRewardInfos,
    (int32_t)resultAsset);
  this->fields.rewardInfos = inRewardInfos;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rewardInfos, (int32_t)inRewardInfos, v15, v16);
  this->fields.resultAssetData = resultAsset;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resultAssetData, (int32_t)resultAsset, v17, v18);
  this->fields.getJoinSvtList = getJoinSvts;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.getJoinSvtList, (int32_t)getJoinSvts, v19, v20);
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
  if ( (byte_4A5E2A2 & 1) == 0 )
  {
    sub_1B885B0(&BattleResultBondsComponent_TypeInfo);
    this = (BattleResultBondsComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E2A2 = 1;
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
      this = (BattleResultBondsComponent_o *)BattleResultBondsIconComponent__changeGauge(
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
      sub_1B88814(this, *(_QWORD *)&targetIndex);
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
      sub_1B8880C(this, *(_QWORD *)&targetIndex);
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
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL4 isMultiDeck; // w8
  struct BattleWindowComponent_o *v14; // x20
  __int64 *v15; // x8
  BattleWindowComponent_EndCall_o *v16; // x21

  if ( (byte_4A5E293 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_BattleResultBondsIconComponent___);
    sub_1B885B0(&Method_BattleResultBondsComponent_OpenEnd__);
    sub_1B885B0(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1B885B0(&System_Func_BattleResultBondsIconComponent__bool__TypeInfo);
    sub_1B885B0(&Method_BattleResultBondsComponent___c__Open_b__53_0__);
    sub_1B885B0(&BattleResultBondsComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_5484/*"END_OPEN"*/);
    sub_1B885B0(&StringLiteral_12154/*"SKIP"*/);
    byte_4A5E293 = 1;
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
    _9__53_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleResultBondsIconComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__53_0, v7, Method_BattleResultBondsComponent___c__Open_b__53_0__, 0LL);
    static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Func_BattleResultBondsIconComponent__bool__o *)_9__53_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v9, v10);
  }
  if ( BasicHelper__Any_object__48672124(
         v5,
         (System_Func_T__bool__o *)_9__53_0,
         (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_BattleResultBondsIconComponent___) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      isMultiDeck = this->fields.isMultiDeck;
      this->fields.openBoundsFlg = 0;
      this->fields.colIndex = 0;
      this->fields.bondsCountUp = 1;
      v14 = isMultiDeck ? this->fields.multiDeckWindow : this->fields.window;
      v16 = (BattleWindowComponent_EndCall_o *)sub_1B887FC(BattleWindowComponent_EndCall_TypeInfo);
      BattleWindowComponent_EndCall___ctor(
        v16,
        (Il2CppObject *)this,
        (intptr_t)Method_BattleResultBondsComponent_OpenEnd__,
        0LL);
      if ( v14 )
      {
        ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v14->klass->vtable._10_Open.method)(
          v14,
          v16,
          v14->klass->vtable._11_CompOpen.methodPtr);
        gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
        if ( gameObject )
        {
          v15 = &StringLiteral_5484/*"END_OPEN"*/;
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    sub_1B8880C(gameObject, v11);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !gameObject )
    goto LABEL_20;
  v15 = &StringLiteral_12154/*"SKIP"*/;
LABEL_19:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)*v15, 0LL);
}


void __fastcall BattleResultBondsComponent__OpenEnd(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_Object_array *v8; // x21
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  int32_t v12; // w2
  int32_t v13; // w3
  BattleResultBondsIconComponent_array *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  int32_t v20; // w2
  int32_t v21; // w3
  BattleResultBondsIconComponent_array *v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  int32_t v36; // w2
  int32_t v37; // w3
  BattleResultBondsIconComponent_array *v38; // x22
  System_Collections_Hashtable_o *v39; // x0
  const MethodInfo *v40; // x1
  int max_length; // w8
  BattleResultBondsIconComponent_array *v42; // x20
  unsigned int v43; // w21
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x20
  System_String_o *CommonSeName; // x0
  struct SePlayer_o *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  __int64 v50; // x0
  int v51; // [xsp+Ch] [xbp-44h] BYREF
  int v52; // [xsp+18h] [xbp-38h] BYREF
  int v53; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4A5E294 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleResultBondsComponent_OpenEnd__);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&SeManager_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_19656/*"from"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22281/*"onupdate"*/);
    sub_1B885B0(&StringLiteral_15194/*"UpdateValue"*/);
    sub_1B885B0(&StringLiteral_23969/*"to"*/);
    sub_1B885B0(&StringLiteral_19436/*"finishUpdateValue"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5E294 = 1;
  }
  if ( !this->fields.bondsCountUp )
    return;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B88658(object___TypeInfo, 10LL);
  if ( !BondsIconArray )
LABEL_65:
    sub_1B8880C(BondsIconArray, v5);
  v8 = (System_Object_array *)BondsIconArray;
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_19656/*"from"*/;
  if ( StringLiteral_19656/*"from"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B886EC(
                                                               StringLiteral_19656/*"from"*/,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v5 = (const MethodInfo *)StringLiteral_19656/*"from"*/;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v8->max_length )
    goto LABEL_64;
  v8->m_Items[0] = (Il2CppObject *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v8->m_Items, (int32_t)v5, v6, v7);
  v53 = 0;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v53, v9, v10, v11);
  v14 = BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B886EC(
                                                               BondsIconArray,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
  }
  if ( v8->max_length <= 1 )
    goto LABEL_64;
  v8->m_Items[1] = &v14->obj;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[1], (int32_t)v14, v12, v13);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_23969/*"to"*/;
  if ( StringLiteral_23969/*"to"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B886EC(
                                                               StringLiteral_23969/*"to"*/,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v5 = (const MethodInfo *)StringLiteral_23969/*"to"*/;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v8->max_length <= 2 )
    goto LABEL_64;
  v8->m_Items[2] = (Il2CppObject *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[2], (int32_t)v5, v15, v16);
  v52 = 1065353216;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v52, v17, v18, v19);
  v22 = BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B886EC(
                                                               BondsIconArray,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
  }
  if ( v8->max_length <= 3 )
    goto LABEL_64;
  v8->m_Items[3] = &v22->obj;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[3], (int32_t)v22, v20, v21);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22281/*"onupdate"*/;
  if ( StringLiteral_22281/*"onupdate"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B886EC(
                                                               StringLiteral_22281/*"onupdate"*/,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v5 = (const MethodInfo *)StringLiteral_22281/*"onupdate"*/;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v8->max_length <= 4 )
    goto LABEL_64;
  v8->m_Items[4] = (Il2CppObject *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[4], (int32_t)v5, v23, v24);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_15194/*"UpdateValue"*/;
  if ( StringLiteral_15194/*"UpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B886EC(
                                                               StringLiteral_15194/*"UpdateValue"*/,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v5 = (const MethodInfo *)StringLiteral_15194/*"UpdateValue"*/;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v8->max_length <= 5 )
    goto LABEL_64;
  v8->m_Items[5] = (Il2CppObject *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[5], (int32_t)v5, v25, v26);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22273/*"oncomplete"*/;
  if ( StringLiteral_22273/*"oncomplete"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B886EC(
                                                               StringLiteral_22273/*"oncomplete"*/,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v5 = (const MethodInfo *)StringLiteral_22273/*"oncomplete"*/;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v8->max_length <= 6 )
    goto LABEL_64;
  v8->m_Items[6] = (Il2CppObject *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[6], (int32_t)v5, v27, v28);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_19436/*"finishUpdateValue"*/;
  if ( StringLiteral_19436/*"finishUpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B886EC(
                                                               StringLiteral_19436/*"finishUpdateValue"*/,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v5 = (const MethodInfo *)StringLiteral_19436/*"finishUpdateValue"*/;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v8->max_length <= 7 )
    goto LABEL_64;
  v8->m_Items[7] = (Il2CppObject *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[7], (int32_t)v5, v29, v30);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_23929/*"time"*/;
  if ( StringLiteral_23929/*"time"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B886EC(
                                                               StringLiteral_23929/*"time"*/,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v5 = (const MethodInfo *)StringLiteral_23929/*"time"*/;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v8->max_length <= 8 )
    goto LABEL_64;
  v8->m_Items[8] = (Il2CppObject *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[8], (int32_t)v5, v31, v32);
  v51 = 1072064102;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v51, v33, v34, v35);
  v38 = BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B886EC(
                                                               BondsIconArray,
                                                               v8->obj.klass->_1.element_class);
    if ( !BondsIconArray )
    {
LABEL_66:
      v50 = sub_1B88830(BondsIconArray);
      sub_1B886D8(v50, 0LL);
    }
  }
  if ( v8->max_length <= 9 )
    goto LABEL_64;
  v8->m_Items[9] = &v38->obj;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[9], (int32_t)v38, v36, v37);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v39 = iTween__Hash(v8, 0LL);
  iTween__ValueTo(gameObject, v39, 0LL);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v40);
  if ( !BondsIconArray )
    goto LABEL_65;
  max_length = BondsIconArray->max_length;
  v42 = BondsIconArray;
  if ( max_length >= 1 )
  {
    v43 = 0;
    while ( v43 < max_length )
    {
      BondsIconArray = (BattleResultBondsIconComponent_array *)v42->m_Items[v43];
      if ( !BondsIconArray )
        goto LABEL_65;
      BattleResultBondsIconComponent__StartUpdateBuddyPoint((BattleResultBondsIconComponent_o *)BondsIconArray, v5);
      max_length = v42->max_length;
      if ( (int)++v43 >= max_length )
        goto LABEL_57;
    }
LABEL_64:
    sub_1B88814(BondsIconArray, v5);
  }
LABEL_57:
  if ( this->fields.updateFlg )
  {
    v44 = Method_BattleResultBondsComponent_OpenEnd__;
    if ( (*((_BYTE *)Method_BattleResultBondsComponent_OpenEnd__ + 83) & 2) != 0 )
      v44 = (_QWORD *)sub_1B885C8(Method_BattleResultBondsComponent_OpenEnd__);
    v45 = (System_Reflection_MethodBase_o *)sub_1B88594(v44, v44[4]);
    if ( !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    CommonSeName = SeManager__GetCommonSeName(15, 0LL);
    v47 = OverwriteAssetSoundName__PlaySe(v45, CommonSeName, 0LL);
    this->fields.MeterSePlayer = v47;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.MeterSePlayer, (int32_t)v47, v48, v49);
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
  int32_t v32; // w2
  int32_t v33; // w3
  const MethodInfo *v34; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_4A5E291 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
    byte_4A5E291 = 1;
  }
  memset(&v35, 0, sizeof(v35));
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
        sub_1B88814(bondsList, v20);
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
        v34);
      max_length = waveMyDecks->max_length;
      v25 = v27;
    }
    while ( v27 < (int)max_length );
  }
  v28 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  bondsList = (System_Collections_Generic_List_object__o *)this->fields.bondsList;
  if ( !bondsList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    bondsList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
  {
    if ( !v35.fields._current )
      sub_1B8880C(0LL, v29);
    BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                      (BattleResultBondsDeckPerWaveComponent_o *)v35.fields._current,
                                                                      v29);
    if ( !v28 )
      sub_1B8880C(BondsIconArray, BondsIconArray);
    System_Collections_Generic_List_object___AddRange(
      v28,
      BondsIconArray,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
  if ( !v28 )
LABEL_21:
    sub_1B8880C(bondsList, v20);
  v31 = System_Collections_Generic_List_object___ToArray(
          v28,
          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
  this->fields.bondsIconArray = (struct BattleResultBondsIconComponent_array *)v31;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.bondsIconArray, (int32_t)v31, v32, v33);
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
  int32_t v31; // w2
  int32_t v32; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Collections_Generic_List_TSource__o *v34; // x0
  System_Collections_Generic_List_object__o *v35; // x21
  BattleResultBondsComponent_c *v36; // x0
  BattleResultBondsComponent_c *v37; // x0
  Il2CppObject *String_69417656; // x20
  System_Collections_Generic_IEnumerable_T__o *v39; // x0
  BattleResultBondsComponent_c *v40; // x0
  System_String_o *GET_NEW_SVT_KEY; // x22
  System_Object_array *v42; // x20
  System_String_o *v43; // x0
  BattleResultBondsComponent___c_c *v44; // x0
  System_Collections_Generic_IEnumerable_TSource__o *getJoinSvts; // x21
  System_Func_object__bool__o *_9__49_1; // x20
  Il2CppObject *v47; // x22
  struct BattleResultBondsComponent___c_StaticFields *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_Collections_Generic_List_TSource__o *v52; // x0
  System_Collections_Generic_List_object__o *v53; // x21
  BattleResultBondsComponent_c *v54; // x0
  BattleResultBondsComponent_c *v55; // x0
  Il2CppObject *v56; // x20
  System_Collections_Generic_IEnumerable_T__o *v57; // x0
  BattleResultBondsComponent_c *v58; // x0
  System_String_o *GET_EXIST_SVT_KEY; // x22
  System_Object_array *v60; // x20
  System_String_o *v61; // x0
  struct BattleDeckServantData_array *svts; // x21
  int max_length; // w8
  unsigned int v64; // w19
  int32_t v65; // w22
  BattleDeckServantData_o *v66; // x25
  Il2CppObject *v67; // x28
  UserServantEntity_o *v68; // x24
  il2cpp_array_size_t v69; // w21
  BattleResultBondsComponent_o *SvtId; // x0
  const MethodInfo *v71; // x3
  UserServantCollectionEntity_o *ServantCollection; // x27
  const MethodInfo *v73; // x7
  signed int v74; // w8
  ServantEntity_o *v75; // x22
  unsigned int v76; // w20
  BattleUserServantData_o *v77; // x26
  __int128 v78; // q0
  const MethodInfo *v79; // x5
  int32_t afterLimitCount; // w25
  int32_t v81; // w29
  const MethodInfo *v82; // x7
  BattleResultBondsIconComponent_o *v83; // x20
  int afterIconLimitCount; // w8
  bool v85; // zf
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x20
  BattleBuddyPointInfo_o *v87; // x26
  System_Func_object__bool__o *v88; // x26
  BattleResultBondsIconComponent_o *v89; // x28
  struct BattleResultBondsIconComponent_array *v90; // x8
  const MethodInfo *v91; // x3
  const MethodInfo *v92; // x2
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  bool v94; // w20
  const MethodInfo *v95; // x2
  const MethodInfo *v96; // x1
  bool v97; // w8
  bool updateFlg; // w20
  bool v99; // w8
  const MethodInfo *v100; // x1
  struct BattleResultBondsIconComponent_array *v101; // x8
  int32_t v102; // w2
  int32_t v103; // w3
  __int64 v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  __int64 v107; // x8
  int32_t cnt; // [xsp+Ch] [xbp-104h]
  ServantLimitImageMaster_o *svtLimitImageMaster; // [xsp+10h] [xbp-100h]
  UserServantCollectionMaster_o *MasterData_object; // [xsp+20h] [xbp-F0h]
  BattleResultBondsDeckPerWaveComponent_o *Object_object; // [xsp+28h] [xbp-E8h]
  UnityEngine_Object_o *x; // [xsp+30h] [xbp-E0h]
  struct BattleDeckServantData_array *v114; // [xsp+38h] [xbp-D8h]
  Il2CppObject *v115; // [xsp+40h] [xbp-D0h]
  Il2CppObject *v116; // [xsp+48h] [xbp-C8h]
  int32_t Type; // [xsp+5Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v121; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v122; // [xsp+90h] [xbp-80h]

  if ( (byte_4A5E292 & 1) == 0 )
  {
    sub_1B885B0(&Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    sub_1B885B0(&Method_BasicHelper_Find_BattleBuddyPointInfo___);
    sub_1B885B0(&BattleResultBondsComponent_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_GetSvts___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_GetSvts___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
    sub_1B885B0(&System_Func_GetSvts__bool__TypeInfo);
    sub_1B885B0(&System_Func_BattleBuddyPointInfo__bool__TypeInfo);
    sub_1B885B0(&System_Func_QuestRewardInfo__bool__TypeInfo);
    sub_1B885B0(&Method_JsonManager_DeserializeArray_GetSvts___);
    sub_1B885B0(&Method_JsonManager_DeserializeArray_QuestRewardInfo___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GetSvts__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GetSvts__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GetSvts__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__);
    sub_1B885B0(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__);
    sub_1B885B0(&Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__);
    sub_1B885B0(&BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo);
    sub_1B885B0(&BattleResultBondsComponent___c_TypeInfo);
    byte_4A5E292 = 1;
  }
  Type = Follower__getType(followerType, 0LL);
  if ( Type )
    v14 = 5;
  else
    v14 = 6;
  cnt = v14;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_143;
  MasterData_object = (UserServantCollectionMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  v17 = this;
  if ( !Instance )
    goto LABEL_143;
  v18 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_143;
  v19 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
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
                                                                 (const MethodInfo_2E6A584 *)Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    if ( this->fields.isMultiDeck )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      svtLimitImageMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
        _9__49_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_QuestRewardInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__49_0,
          v29,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__,
          0LL);
        static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
        static_fields->__9__49_0 = (struct System_Func_QuestRewardInfo__bool__o *)_9__49_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v31, v32);
      }
      v33 = System_Linq_Enumerable__Where_object_(
              rewardInfos,
              (System_Func_TSource__bool__o *)_9__49_0,
              (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
      v34 = System_Linq_Enumerable__ToList_object_(
              v33,
              (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
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
          if ( UnityEngine_PlayerPrefs__HasKey(v36->static_fields->GET_NEW_SVT_KEY, 0LL) )
          {
            v37 = BattleResultBondsComponent_TypeInfo;
            if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v37 = BattleResultBondsComponent_TypeInfo;
            }
            String_69417656 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69417656(
                                                v37->static_fields->GET_NEW_SVT_KEY,
                                                0LL);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v39 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_object_(
                                                                   String_69417656,
                                                                   (const MethodInfo_2EE5F40 *)Method_JsonManager_DeserializeArray_QuestRewardInfo___);
            System_Collections_Generic_List_object___AddRange(
              v35,
              v39,
              (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
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
                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v43 = JsonManager__toJson(&v42->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_NEW_SVT_KEY, v43, 0LL);
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
        _9__49_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_GetSvts__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__49_1,
          v47,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__,
          0LL);
        v48 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        v48->__9__49_1 = (struct System_Func_GetSvts__bool__o *)_9__49_1;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v48->__9__49_1, (int32_t)_9__49_1, v49, v50);
      }
      v51 = System_Linq_Enumerable__Where_object_(
              getJoinSvts,
              (System_Func_TSource__bool__o *)_9__49_1,
              (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_GetSvts___);
      v52 = System_Linq_Enumerable__ToList_object_(
              v51,
              (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_GetSvts___);
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
          if ( UnityEngine_PlayerPrefs__HasKey(v54->static_fields->GET_EXIST_SVT_KEY, 0LL) )
          {
            v55 = BattleResultBondsComponent_TypeInfo;
            if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v55 = BattleResultBondsComponent_TypeInfo;
            }
            v56 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69417656(
                                    v55->static_fields->GET_EXIST_SVT_KEY,
                                    0LL);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v57 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_object_(
                                                                   v56,
                                                                   (const MethodInfo_2EE5F40 *)Method_JsonManager_DeserializeArray_GetSvts___);
            System_Collections_Generic_List_object___AddRange(
              v53,
              v57,
              (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_GetSvts__AddRange__);
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
                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_GetSvts__ToArray__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v61 = JsonManager__toJson(&v60->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_EXIST_SVT_KEY, v61, 0LL);
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
    v64 = 0;
    v65 = 0;
    v115 = v19;
    v116 = v18;
    v114 = myDeck->fields.svts;
    while ( 1 )
    {
      if ( v64 >= max_length )
LABEL_144:
        sub_1B88814(Instance, userSvtId);
      v66 = svts->m_Items[v64];
      v67 = (Il2CppObject *)sub_1B887FC(BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo);
      System_Object___ctor(v67, 0LL);
      if ( !v66 || !v67 )
        goto LABEL_143;
      userSvtId = (const MethodInfo *)v66->fields.userSvtId;
      v67[1].klass = (Il2CppClass *)userSvtId;
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
          v83 = (BattleResultBondsIconComponent_o *)Instance;
          if ( !Instance )
            goto LABEL_143;
        }
        else
        {
          v101 = v17->fields.collects;
          if ( !v101 )
            goto LABEL_143;
          if ( v65 >= v101->max_length )
            goto LABEL_144;
          v83 = v101->m_Items[v65];
          if ( !v83 )
            goto LABEL_143;
        }
        BattleResultBondsIconComponent__setServantData(v83, 0LL, 0LL, 0, 0, 0, 0, v82);
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v83, 0LL);
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
                              (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !Instance )
          goto LABEL_143;
        v68 = (UserServantEntity_o *)Instance;
        v69 = v65;
        SvtId = (BattleResultBondsComponent_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
        ServantCollection = BattleResultBondsComponent__getServantCollection(SvtId, oldCollects, (int32_t)SvtId, v71);
        Instance = UserServantEntity__getSvtId(v68, 0LL);
        if ( !v19 )
          goto LABEL_143;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                              Instance,
                              (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !usrSvts )
          goto LABEL_143;
        v74 = usrSvts->max_length;
        v75 = (ServantEntity_o *)Instance;
        if ( v74 < 1 )
        {
LABEL_86:
          afterLimitCount = -1;
          v81 = -1;
        }
        else
        {
          v76 = 0;
          while ( 1 )
          {
            if ( v76 >= v74 )
              goto LABEL_144;
            v77 = usrSvts->m_Items[v76];
            if ( !v77 )
              goto LABEL_143;
            v78 = *(_OWORD *)&v77->fields.id.fields.fakeValue;
            *(_OWORD *)&v122.fields.currentCryptoKey = *(_OWORD *)&v77->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v122.fields.fakeValue = v78;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v121 = v122;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v121, 0LL);
            if ( (Il2CppClass *)Instance == v67[1].klass )
              break;
            v74 = usrSvts->max_length;
            if ( (int)++v76 >= v74 )
              goto LABEL_86;
          }
          if ( this->fields.isMultiDeck )
            BattleResultBondsComponent__UpdateAfterLimitCount(
              (BattleResultBondsComponent_o *)Instance,
              (BattleData_o *)x,
              v77,
              v66,
              svtLimitImageMaster,
              v79);
          Instance = UserServantEntity__getIconLimitCount((UserServantEntity_o *)v77, 0, 0LL);
          afterIconLimitCount = v77->fields.afterIconLimitCount;
          afterLimitCount = v77->fields.afterLimitCount;
          v85 = afterIconLimitCount < 0 || (_DWORD)Instance == afterIconLimitCount;
          v81 = v85 ? Instance : v77->fields.afterIconLimitCount;
        }
        if ( !battleResult )
          goto LABEL_143;
        buddyPointInfos = battleResult->fields.buddyPointInfos;
        if ( buddyPointInfos )
        {
          v87 = 0LL;
          if ( *(_QWORD *)&buddyPointInfos->max_length && !isHideBuddyPointResult )
          {
            v88 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleBuddyPointInfo__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v88,
              v67,
              Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__,
              0LL);
            Instance = (int64_t)BasicHelper__Find_object_(
                                  (System_Object_array *)buddyPointInfos,
                                  (System_Func_T__bool__o *)v88,
                                  (const MethodInfo_2E6B89C *)Method_BasicHelper_Find_BattleBuddyPointInfo___);
            v87 = (BattleBuddyPointInfo_o *)Instance;
          }
        }
        else
        {
          v87 = 0LL;
        }
        if ( this->fields.isMultiDeck )
        {
          Instance = (int64_t)Object_object;
          if ( !Object_object )
            goto LABEL_143;
          Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, userSvtId);
          v89 = (BattleResultBondsIconComponent_o *)Instance;
          if ( !Instance )
            goto LABEL_143;
        }
        else
        {
          v90 = this->fields.collects;
          if ( !v90 )
            goto LABEL_143;
          if ( v69 >= v90->max_length )
            goto LABEL_144;
          v89 = v90->m_Items[v69];
          if ( !v89 )
            goto LABEL_143;
        }
        BattleResultBondsIconComponent__setServantData(
          v89,
          ServantCollection,
          v68,
          v81,
          this->fields.baseFriendshipExp,
          Type == 0,
          afterLimitCount,
          v73);
        BattleResultBondsIconComponent__SetBuddyPointInfo(v89, v87, battleResult->fields.eventId, v91);
        if ( !v75 )
          goto LABEL_143;
        v19 = v115;
        v18 = v116;
        if ( ServantEntity__checkIsHeroineSvt(v75, 0LL) && !UserServantEntity__IsAddFriendShipHeroine(v68, 0LL) )
        {
          updateFlg = this->fields.updateFlg;
          v99 = updateFlg | BattleResultBondsIconComponent__setNextServantData(v89, ServantCollection, v92);
          v17 = this;
          v65 = v69;
          this->fields.updateFlg = v99;
          v89->fields.isHeroine = 1;
        }
        else
        {
          Instance = (int64_t)MasterData_object;
          if ( !MasterData_object )
            goto LABEL_143;
          v65 = v69;
          EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                               MasterData_object,
                               v89->fields.userId,
                               v89->fields.svtId,
                               0LL);
          v94 = this->fields.updateFlg;
          v97 = v94 | BattleResultBondsIconComponent__setNextServantData(v89, EntityDefinitely, v95);
          v17 = this;
          this->fields.updateFlg = v97;
        }
        svts = v114;
        BattleResultBondsIconComponent__changeGauge(v89, 0.0, v96);
        BattleResultBondsIconComponent__InitBuddyPointInfo(v89, v100);
        if ( v17->fields.isMultiDeck )
        {
          Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v89, 0LL);
          if ( !Instance )
            goto LABEL_143;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        }
      }
      ++v65;
LABEL_129:
      max_length = svts->max_length;
      if ( (int)++v64 >= max_length )
        goto LABEL_132;
    }
  }
  v65 = 0;
LABEL_132:
  if ( !v17->fields.isMultiDeck )
  {
    BattleResultBondsComponent__NormalBondsInit(v17, v65, cnt, Type == 0, battleResult, isHideBuddyPointResult, v25);
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
    || (v104 = *(_QWORD *)(Instance + 16),
        v105 = Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__,
        ++*(_DWORD *)(Instance + 28),
        !v104) )
  {
LABEL_143:
    sub_1B8880C(Instance, userSvtId);
  }
  v106 = *(int *)(Instance + 24);
  if ( (unsigned int)v106 >= *(_DWORD *)(v104 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)Object_object,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
  }
  else
  {
    v107 = v104 + 8 * v106;
    *(_DWORD *)(Instance + 24) = v106 + 1;
    *(_QWORD *)(v107 + 32) = Object_object;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v107 + 32), (int32_t)Object_object, v102, v103);
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
        sub_1B88814(BondsIconArray, v4);
      BondsIconArray = (BattleResultBondsIconComponent_array *)v6->m_Items[v7];
      if ( !BondsIconArray )
        break;
      BattleResultBondsIconComponent__FinishBuddyPointInfoUpdate((BattleResultBondsIconComponent_o *)BondsIconArray, v4);
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_7;
    }
LABEL_9:
    sub_1B8880C(BondsIconArray, v4);
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

  if ( (byte_4A5E2A3 & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    this = (BattleResultBondsComponent_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5E2A3 = 1;
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
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v26, 0LL);
  this = (BattleResultBondsComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                           userSvtData->fields.limitCount,
                                           0LL);
  if ( !svtLimitImageMaster )
LABEL_26:
    sub_1B8880C(this, battleData);
  if ( ServantLimitImageMaster__IsServantLimitCountSeal(svtLimitImageMaster, v15, (int32_t)this, 0LL) )
  {
    v17 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v27.fields.currentCryptoKey = v17;
    *(_QWORD *)&v27.fields.fakeValue = v16;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v27, 0LL);
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
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v28, 0LL);
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
        sub_1B88814(BondsIconArray, v5);
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
    sub_1B8880C(BondsIconArray, v5);
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
    sub_1B88814(this, method);
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
    sub_1B8880C(this, method);
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
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x4
  UnityEngine_Transform_o *transform; // x21
  float v24; // s8
  float y; // s9
  int v26; // s2
  float v27; // s0
  float v28; // s1
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 klass_low; // x10
  __int64 v32; // x8
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5E298 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BattleResultBondsComponent_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17299/*"bit_reward_shine02"*/);
    byte_4A5E298 = 1;
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
  v33.fields.y = -112.0 - posY;
  v33.fields.x = 0.0;
  v33.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v33, 0LL);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 v15,
                                 (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
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
          (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
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
      (System_String_o *)StringLiteral_17299/*"bit_reward_shine02"*/,
      v22);
    if ( ComponentInChildren_object )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ComponentInChildren_object, 0LL);
      Object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)ComponentInChildren_object,
                                             0LL);
      if ( Object )
      {
        LODWORD(v24) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Object, 0LL);
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
            *(UnityEngine_Vector3_o *)(&v26 - 2) = UnityEngine_Transform__get_localPosition(
                                                     (UnityEngine_Transform_o *)Object,
                                                     0LL);
            if ( transform )
            {
              v27 = v24 + 36.0;
              v28 = y;
              UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v26 - 2), 0LL);
              goto LABEL_31;
            }
          }
        }
      }
    }
LABEL_36:
    sub_1B8880C(Object, v14);
  }
LABEL_31:
  Object = (UnityEngine_GameObject_o *)this->fields.conflist;
  if ( !Object )
    goto LABEL_36;
  v29 = *(_QWORD *)&Object->fields.m_CachedPtr;
  v30 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(Object[1].klass);
  if ( !v29 )
    goto LABEL_36;
  klass_low = SLODWORD(Object[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v29 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Object,
      (Il2CppObject *)v15,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = v29 + 8 * klass_low;
    LODWORD(Object[1].klass) = klass_low + 1;
    *(_QWORD *)(v32 + 32) = v15;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 32), (int32_t)v15, v20, v21);
  }
}


void __fastcall BattleResultBondsComponent__checkBondsUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x22
  System_Collections_Generic_List_object__o *conflist; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x1
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t colIndex; // w8
  __int64 v13; // x9
  int32_t v14; // w10
  __int64 v15; // x11
  __int64 *v16; // x8
  __int64 v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
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
  int32_t v33; // w3
  __int64 v34; // x9
  __int64 v35; // x8
  __int64 v36; // x9
  struct BattleResultBondsIconComponent_o *v37; // x1
  UnityEngine_Object_o *figureMoveRoot; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o **v40; // x21
  int32_t v41; // w2
  int32_t v42; // w3
  UnityEngine_GameObject_o *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t svtId; // w22
  int32_t svtLimit; // w23
  BattleResultBondsFigureComponent_o *bondsFigure; // x19
  UnityEngine_GameObject_o *v50; // x21
  System_Action_o *v51; // x24
  const MethodInfo *v52; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5E296 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    sub_1B885B0(&BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo);
    sub_1B885B0(&Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__);
    sub_1B885B0(&BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo);
    sub_1B885B0(&StringLiteral_17285/*"bit_result_levelup01"*/);
    sub_1B885B0(&StringLiteral_3580/*"CLOSE"*/);
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    sub_1B885B0(&StringLiteral_3583/*"CLOSE_BOND_UP_ROOT"*/);
    byte_4A5E296 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  v3 = sub_1B887FC(BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_68;
  *(_QWORD *)(v3 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v8);
  *(_QWORD *)(v3 + 24) = BondsIconArray;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)BondsIconArray, v10, v11);
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
      sub_1B88814(conflist, v5);
    }
    v15 = *(_QWORD *)(v13 + 8LL * colIndex + 32);
    if ( !v15 )
    {
      this->fields.colIndex = colIndex;
      sub_1B8880C(conflist, v5);
    }
    if ( *(_BYTE *)(v15 + 112) && *(_DWORD *)(v15 + 160) != *(_DWORD *)(v15 + 168) )
    {
      this->fields.colIndex = colIndex;
      v17 = sub_1B887FC(BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v17, 0LL);
      if ( !v17 )
        goto LABEL_68;
      *(_QWORD *)(v17 + 24) = v3;
      v20 = (__int64 *)(v17 + 24);
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 24), v3, v18, v19);
      conflist = (System_Collections_Generic_List_object__o *)this->fields.conflist;
      if ( !conflist )
        goto LABEL_68;
      if ( conflist->fields._size >= 1 )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v53,
          conflist,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
        v54 = v53;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v54,
                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
        {
          current = v54.fields._current;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)current, 0LL);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v54,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
        v22 = this->fields.conflist;
        if ( !v22 )
          goto LABEL_68;
        size = v22->fields._size;
        v24 = v22->fields._version + 1;
        v22->fields._size = 0;
        v22->fields._version = v24;
        if ( size >= 1 )
          System_Array__Clear((System_Array_o *)v22->fields._items, 0, size, 0LL);
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
                                                                  (System_String_o *)StringLiteral_17285/*"bit_result_levelup01"*/,
                                                                  0LL);
        if ( !conflist )
          goto LABEL_68;
        klass = conflist->klass;
        v27 = conflist;
        v28 = *(unsigned __int16 *)(&conflist->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&conflist->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v28;
            p_offset += 2;
            if ( !v28 )
              goto LABEL_41;
          }
          v30 = (__int64)(&klass->vtable._4_unknown.method + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_41:
          v30 = sub_1BDA590(conflist, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(System_Collections_Generic_List_object__o *, _QWORD, float))v30)(
          v27,
          *(_QWORD *)(v30 + 8),
          0.0);
        conflist = (System_Collections_Generic_List_object__o *)this->fields.levelUpSimpleAnim;
        if ( !conflist )
          goto LABEL_68;
        conflist = (System_Collections_Generic_List_object__o *)SimpleAnimation__Play_63844704(
                                                                  (SimpleAnimation_o *)conflist,
                                                                  (System_String_o *)StringLiteral_17285/*"bit_result_levelup01"*/,
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
                                                                    (System_String_o *)StringLiteral_17285/*"bit_result_levelup01"*/,
                                                                    0LL);
          if ( !conflist )
            goto LABEL_68;
          UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)conflist, 0.0, 0LL);
          conflist = (System_Collections_Generic_List_object__o *)this->fields.levelUpAnim;
          if ( !conflist )
            goto LABEL_68;
          conflist = (System_Collections_Generic_List_object__o *)UnityEngine_Animation__Play_69204472(
                                                                    (UnityEngine_Animation_o *)conflist,
                                                                    (System_String_o *)StringLiteral_17285/*"bit_result_levelup01"*/,
                                                                    0LL);
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
            sub_1B88814(conflist, v5);
          v37 = *(struct BattleResultBondsIconComponent_o **)(v35 + 8 * v36 + 32);
          this->fields.openCollect = v37;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCollect, (int32_t)v37, v32, v33);
          figureMoveRoot = (UnityEngine_Object_o *)this->fields.figureMoveRoot;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(figureMoveRoot, 0LL, 0LL) )
          {
            conflist = (System_Collections_Generic_List_object__o *)this->fields.figureMoveRoot;
            if ( !conflist )
              goto LABEL_68;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)conflist, 0LL);
            *(_QWORD *)(v17 + 16) = gameObject;
            v40 = (UnityEngine_GameObject_o **)(v17 + 16);
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)gameObject, v41, v42);
            conflist = *(System_Collections_Generic_List_object__o **)(v17 + 16);
            if ( !conflist )
              goto LABEL_68;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)conflist, 0, 0LL);
          }
          else
          {
            conflist = (System_Collections_Generic_List_object__o *)this->fields.figureRoot;
            if ( !conflist )
              goto LABEL_68;
            v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)conflist, 0LL);
            *(_QWORD *)(v17 + 16) = v43;
            v40 = (UnityEngine_GameObject_o **)(v17 + 16);
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)v43, v44, v45);
          }
          openCollect = this->fields.openCollect;
          if ( openCollect )
          {
            svtId = openCollect->fields.svtId;
            svtLimit = openCollect->fields.svtLimit;
            bondsFigure = this->fields.bondsFigure;
            v50 = *v40;
            v51 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(
              v51,
              (Il2CppObject *)v17,
              Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__,
              0LL);
            if ( bondsFigure )
            {
              BattleResultBondsFigureComponent__SetupFigure(bondsFigure, v50, svtId, svtLimit, 7, 0, 51, v51, v52);
              return;
            }
          }
        }
      }
LABEL_68:
      sub_1B8880C(conflist, v5);
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
      v16 = &StringLiteral_3580/*"CLOSE"*/;
      goto LABEL_27;
    }
    goto LABEL_68;
  }
  if ( !conflist )
    goto LABEL_68;
  if ( this->fields.isMultiDeck )
    v16 = &StringLiteral_3583/*"CLOSE_BOND_UP_ROOT"*/;
  else
    v16 = &StringLiteral_5489/*"END_PROC"*/;
LABEL_27:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)conflist, (System_String_o *)*v16, 0LL);
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

  if ( (byte_4A5E29C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattleResultBondsComponent__checkShow_b__67_0__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_4A5E29C = 1;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
        v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(v6, (Il2CppObject *)this, Method_BattleResultBondsComponent__checkShow_b__67_0__, 0LL);
        if ( Instance )
        {
          SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v6, 0LL);
          return;
        }
        goto LABEL_23;
      }
      parentComp = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
    sub_1B8880C(parentComp, method);
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

  if ( (byte_4A5E29D & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleResultBondsComponent_closeBondUp__);
    sub_1B885B0(&Method_BattleResultBondsComponent_endCloseBondUp__);
    sub_1B885B0(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIUnityRenderer__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
    byte_4A5E29D = 1;
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
                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
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
    v8 = (_QWORD *)sub_1B885C8(Method_BattleResultBondsComponent_closeBondUp__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (effectUIList = parentComp->fields.obj_fronttouch) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectUIList, 0, 0LL),
        (effectUIList = this->fields.bondsFigure) == 0LL)
    || (BattleResultBondsFigureComponent__DestroyFigure((BattleResultBondsFigureComponent_o *)effectUIList, v3),
        confwindow = this->fields.confwindow,
        v12 = (BattleWindowComponent_EndCall_o *)sub_1B887FC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v12,
          (Il2CppObject *)this,
          Method_BattleResultBondsComponent_endCloseBondUp__,
          0LL),
        !confwindow) )
  {
LABEL_19:
    sub_1B8880C(effectUIList, v3);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))confwindow->klass->vtable._12_Close.method)(
    confwindow,
    v12,
    confwindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultBondsComponent__endClose(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  const MethodInfo *v5; // x1
  ServantFaceIconComponent_o *BondsIconArray; // x0
  __int64 v7; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  ServantFaceIconComponent_o *v9; // x20
  int v10; // w21
  int v11; // w22
  __int64 v12; // x8

  if ( (byte_4A5E2A0 & 1) == 0 )
  {
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5E2A0 = 1;
  }
  this->fields.resultAssetData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resultAssetData, 0, v2, v3);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0LL) )
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
        ServantFaceIconComponent__ClearFaceAtlas(BondsIconArray, 0LL);
        if ( v10 == v11 )
          goto LABEL_14;
        if ( (unsigned int)++v11 >= LODWORD(v9->fields.m_CancellationTokenSource) )
          sub_1B88814(BondsIconArray, v7);
      }
LABEL_17:
      sub_1B8880C(BondsIconArray, v7);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultBondsComponent__endCloseBondUp(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A5E29E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5E29E = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
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
  int v11; // w28
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
  int v23; // w20
  bool v24; // w23
  System_String_o *v25; // x0
  const MethodInfo *v26; // x5
  struct BattleResultBondsIconComponent_o *v27; // x8
  System_String_o *v28; // x0
  const MethodInfo *v29; // x5
  System_Collections_Generic_List_object__o *v30; // x22
  struct BattleFriendshipRewardInfo_array *rewardInfos; // x20
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x23
  int v34; // w21
  int CONF_SERVANT_COIN_PLUS_HEIGHT; // w25
  struct BattleResultBondsIconComponent_o *v36; // x8
  BattleFriendshipRewardInfo_o *v37; // x24
  GiftEntity_o *v38; // x25
  Il2CppObject *v39; // x0
  System_String_o *v40; // x26
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  Il2CppObject *v44; // x0
  Il2CppObject *v45; // x0
  ServantEntity_o *v46; // x26
  Il2CppObject *Master_object; // x27
  int32_t v48; // w1
  System_String_o *v49; // x0
  const MethodInfo *v50; // x5
  bool v51; // w26
  Il2CppObject *Name; // x26
  System_String_o *v53; // x0
  System_String_o *v54; // x27
  int32_t IconImageId; // w0
  const MethodInfo *v56; // x5
  BattleResultBondsComponent_c *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  System_Object_array *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  int v67; // w20
  UnityEngine_Transform_o *confRoot; // x21
  unsigned int localPosition; // s0
  int v70; // w8
  float v71; // s1
  int v72; // w20
  float v73; // s1
  int v74; // s2
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *rankupConfLabel; // x21
  struct BattleWindowComponent_o *confwindow; // x20
  BattleWindowComponent_EndCall_o *v78; // x21
  System_Text_StringBuilder_o *v79; // [xsp+8h] [xbp-C8h]
  int32_t key; // [xsp+14h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+18h] [xbp-B8h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+30h] [xbp-A0h] BYREF
  System_String_o *countText; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+40h] [xbp-90h] BYREF
  System_String_o *nameText; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4A5E29A & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleResultBondsComponent_endMoveFigure__);
    sub_1B885B0(&Method_BattleResultBondsComponent_openedBondUp__);
    sub_1B885B0(&BattleResultBondsComponent_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&StringLiteral_11086/*"RESULT_BOUNDS_OPENQUEST"*/);
    sub_1B885B0(&StringLiteral_11089/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/);
    sub_1B885B0(&StringLiteral_11088/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/);
    sub_1B885B0(&StringLiteral_11085/*"RESULT_BOUNDS_GET_COIN_NAME"*/);
    sub_1B885B0(&StringLiteral_11083/*"RESULT_BOUNDS_GETVOICE"*/);
    sub_1B885B0(&StringLiteral_25017/*"{0} {1}"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_11084/*"RESULT_BOUNDS_GET_COIN_COUNT"*/);
    byte_4A5E29A = 1;
  }
  memset(&v84, 0, sizeof(v84));
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  v3 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0LL);
  v4 = Method_BattleResultBondsComponent_endMoveFigure__;
  if ( (*((_BYTE *)Method_BattleResultBondsComponent_endMoveFigure__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B885C8(Method_BattleResultBondsComponent_endMoveFigure__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 6, 0LL);
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
  lvComp = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !lvComp )
    goto LABEL_113;
  v79 = v3;
  lvComp = (__int64)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                      (clsQuestCheck_o *)lvComp,
                      svtId,
                      friendshipRank,
                      8,
                      0LL);
  if ( lvComp )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v81,
      (System_Collections_Generic_List_object__o *)lvComp,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    v11 = 0;
    v84 = v81;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v84,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
    {
      current = v84.fields._current;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11086/*"RESULT_BOUNDS_OPENQUEST"*/, 0LL);
      if ( !current )
        sub_1B8880C(v13, v14);
      v15 = v13;
      QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
      v17 = System_String__Format(v15, QuestName, 0LL);
      BattleResultBondsComponent__addConfObject(this, v17, (float)v11 * 22.0, -1, 0, 0, v18);
      v11 += 3;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v84,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  }
  else
  {
    v11 = 0;
  }
  v19 = this->fields.openCollect;
  if ( !v19 )
    goto LABEL_113;
  svtLimit = v19->fields.svtLimit;
  lvComp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lvComp )
    goto LABEL_113;
  lvComp = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)lvComp,
                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
    v22 = &StringLiteral_11089/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/;
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
  lvComp = ServantCommentManager__IsOpenByServantFriendShip_40482932(
             svtId,
             friendshipRank,
             ServantLimitCountSealAfter,
             0LL);
  if ( (lvComp & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = &StringLiteral_11088/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/;
    v24 = 0;
    v23 = 2;
    goto LABEL_32;
  }
LABEL_33:
  v27 = this->fields.openCollect;
  if ( !v27 )
    goto LABEL_113;
  if ( ServantVoiceMaster__isOpenByServantFriendShip(svtId, v27->fields.maxLimitCount, friendshipRank, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_11083/*"RESULT_BOUNDS_GETVOICE"*/, 0LL);
    BattleResultBondsComponent__addConfObject(this, v28, (float)v11 * 22.0, -1, 0, 0, v29);
    v11 += 2;
  }
  if ( this->fields.rewardInfos )
  {
    v30 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v30,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
    rewardInfos = this->fields.rewardInfos;
    if ( !rewardInfos )
      goto LABEL_113;
    max_length = rewardInfos->max_length;
    if ( max_length < 1 )
    {
      CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
      if ( !v30 )
        goto LABEL_113;
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
          sub_1B88814(lvComp, v7);
        v36 = this->fields.openCollect;
        if ( !v36 )
          goto LABEL_113;
        v37 = rewardInfos->m_Items[v34];
        if ( !v37 )
          goto LABEL_113;
        if ( v36->fields.svtId == v37->fields.targetSvtId )
        {
          lvComp = (__int64)BattleFriendshipRewardInfo__getGiftEntity(v37, 0LL);
          if ( !lvComp )
            goto LABEL_113;
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
              goto LABEL_113;
            v39 = DataMasterBase_object__object__int___GetEntity(
                    v33,
                    v38->fields.objectId,
                    (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( v39 && LODWORD(v39[3].klass) == 29 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v40 = LocalizationManager__Get((System_String_o *)StringLiteral_11084/*"RESULT_BOUNDS_GET_COIN_COUNT"*/, 0LL);
              LODWORD(v81.fields._list) = v38->fields.num;
              v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81, v41, v42, v43);
              countText = System_String__Format(v40, v44, 0LL);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !lvComp )
                goto LABEL_113;
              v45 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)lvComp,
                      key,
                      (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( v45 )
              {
                v46 = (ServantEntity_o *)v45;
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
                  lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
                    v48 = -1;
                  else
                    v48 = lvComp;
                }
                else
                {
                  v48 = -1;
                }
                Name = (Il2CppObject *)ServantEntity__getName(v46, v48, -1, 0LL);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v53 = LocalizationManager__Get((System_String_o *)StringLiteral_11085/*"RESULT_BOUNDS_GET_COIN_NAME"*/, 0LL);
                nameText = System_String__Format_61721404(v53, (Il2CppObject *)nameText, Name, 0LL);
              }
              v51 = 1;
            }
            else
            {
              v51 = 0;
            }
            v54 = System_String__Format_61721404(
                    (System_String_o *)StringLiteral_25017/*"{0} {1}"*/,
                    (Il2CppObject *)nameText,
                    (Il2CppObject *)countText,
                    0LL);
            IconImageId = GiftEntity__getIconImageId(v38, 0LL);
            BattleResultBondsComponent__addConfObject(this, v54, (float)v11 * 22.0, IconImageId, v51, 0, v56);
          }
          else
          {
            v49 = System_String__Format_61721404(
                    (System_String_o *)StringLiteral_25017/*"{0} {1}"*/,
                    (Il2CppObject *)nameText,
                    (Il2CppObject *)countText,
                    0LL);
            BattleResultBondsComponent__addConfObject(this, v49, (float)v11 * 22.0, -1, 0, 0, v50);
          }
          v57 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v57 = BattleResultBondsComponent_TypeInfo;
          }
          v11 += 2;
          CONF_SERVANT_COIN_PLUS_HEIGHT = v57->static_fields->CONF_SERVANT_COIN_PLUS_HEIGHT;
          lvComp = BattleFriendshipRewardInfo__isShow(v37, 0LL);
          if ( (lvComp & 1) != 0 )
          {
            if ( !v30 )
              goto LABEL_113;
            items = v30->fields._items;
            v61 = Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__;
            ++v30->fields._version;
            if ( !items )
              goto LABEL_113;
            size = v30->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v30,
                (Il2CppObject *)v37,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
            }
            else
            {
              v63 = &items->obj.klass + size;
              v30->fields._size = size + 1;
              v63[4] = (Il2CppClass *)v37;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v63 + 4), (int32_t)v37, v58, v59);
            }
          }
        }
        max_length = rewardInfos->max_length;
        ++v34;
      }
      while ( v34 < max_length );
      if ( !v30 )
LABEL_113:
        sub_1B8880C(lvComp, v7);
    }
    v64 = System_Collections_Generic_List_object___ToArray(
            v30,
            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
    this->fields.showList = (struct BattleFriendshipRewardInfo_array *)v64;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.showList, (int32_t)v64, v65, v66);
    this->fields.showIndex = 0;
  }
  else
  {
    CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
  }
  lvComp = (__int64)this->fields.confSprite;
  if ( v11 )
    v67 = v11;
  else
    v67 = 1;
  if ( !lvComp )
    goto LABEL_113;
  UIWidget__set_height((UIWidget_o *)lvComp, CONF_SERVANT_COIN_PLUS_HEIGHT + 22 * v67 + 120, 0LL);
  confRoot = this->fields.confRoot;
  if ( !confRoot )
    goto LABEL_113;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.confRoot, 0LL);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT >= 0 )
    v70 = CONF_SERVANT_COIN_PLUS_HEIGHT;
  else
    v70 = CONF_SERVANT_COIN_PLUS_HEIGHT + 1;
  v71 = (float)v67;
  v72 = v70 >> 1;
  v73 = (float)(v71 * 11.0) + (float)(v70 >> 1);
  v74 = 0;
  UnityEngine_Transform__set_localPosition(confRoot, *(UnityEngine_Vector3_o *)&localPosition, 0LL);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT )
  {
    lvComp = (__int64)this->fields.confwindow;
    if ( !lvComp )
      goto LABEL_113;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lvComp, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v72, 0LL);
    lvComp = (__int64)this->fields.confwindow;
    if ( !lvComp )
      goto LABEL_113;
    lvComp = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)lvComp + 424LL))(
               lvComp,
               *(_QWORD *)(*(_QWORD *)lvComp + 432LL));
  }
  if ( !v79 )
    goto LABEL_113;
  rankupConfLabel = this->fields.rankupConfLabel;
  lvComp = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v79->klass->vtable._3_ToString.method)(
             v79,
             v79->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !rankupConfLabel )
    goto LABEL_113;
  UILabel__set_text(rankupConfLabel, (System_String_o *)lvComp, 0LL);
  confwindow = this->fields.confwindow;
  v78 = (BattleWindowComponent_EndCall_o *)sub_1B887FC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v78, (Il2CppObject *)this, Method_BattleResultBondsComponent_openedBondUp__, 0LL);
  if ( !confwindow )
    goto LABEL_113;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))confwindow->klass->vtable._10_Open.method)(
    confwindow,
    v78,
    confwindow->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattleResultBondsComponent__finishUpdateValue(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v4; // x1
  void *BondsIconArray; // x0
  const MethodInfo *v6; // x1
  int v7; // w8
  _DWORD *v8; // x20
  unsigned int v9; // w21
  char *v10; // x22
  void **v11; // x22
  void *v12; // t1
  SePlayer_o *MeterSePlayer; // x0

  if ( (byte_4A5E295 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9239/*"NEXT"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5E295 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_60355704(gameObject, 0LL);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v4);
  if ( !BondsIconArray )
    goto LABEL_18;
  v7 = *((_DWORD *)BondsIconArray + 6);
  v8 = BondsIconArray;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v7 )
        goto LABEL_17;
      v10 = (char *)&v8[2 * v9];
      v12 = (void *)*((_QWORD *)v10 + 4);
      v11 = (void **)(v10 + 32);
      BondsIconArray = v12;
      if ( !v12 )
        break;
      BondsIconArray = (void *)BattleResultBondsIconComponent__changeGauge(
                                 (BattleResultBondsIconComponent_o *)BondsIconArray,
                                 1.0,
                                 v6);
      if ( v9 >= v8[6] )
LABEL_17:
        sub_1B88814(BondsIconArray, v6);
      BondsIconArray = *v11;
      if ( !*v11 )
        break;
      BattleResultBondsIconComponent__LayoutFriendshipValue((BattleResultBondsIconComponent_o *)BondsIconArray, v6);
      v7 = v8[6];
      if ( (int)++v9 >= v7 )
        goto LABEL_13;
    }
LABEL_18:
    sub_1B8880C(BondsIconArray, v6);
  }
LABEL_13:
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  BondsIconArray = this->fields.myFsm;
  this->fields.bondsCountUp = 0;
  if ( !BondsIconArray )
    goto LABEL_18;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_9239/*"NEXT"*/, 0LL);
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
        sub_1B88814(this, collects);
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
    sub_1B8880C(this, collects);
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
    sub_1B8880C(this, deck);
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0LL;
  v6 = 0;
  while ( 1 )
  {
    if ( max_length == v6 )
      sub_1B88814(this, deck);
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
    sub_1B8880C(this, method);
  return (signed int)oldCollections->max_length > 1;
}


void __fastcall BattleResultBondsComponent__openedBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0
  struct BattleResultComponent_o *v4; // x8

  if ( (byte_4A5E29B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5484/*"END_OPEN"*/);
    byte_4A5E29B = 1;
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
    sub_1B8880C(parentComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)parentComp, (System_String_o *)StringLiteral_5484/*"END_OPEN"*/, 0LL);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5E2A7 & 1) == 0 )
  {
    sub_1B885B0(&BattleResultBondsComponent___c_TypeInfo);
    byte_4A5E2A7 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattleResultBondsComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleResultBondsComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultBondsComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)BattleResultBondsComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return col->fields.isUse;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_0(
        BattleResultBondsComponent___c_o *this,
        QuestRewardInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.type == 7 && x->fields.isNew;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_1(
        BattleResultBondsComponent___c_o *this,
        GetSvts_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
  int32_t v9; // w2
  int32_t v10; // w3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v11; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  int32_t v15; // w2
  int32_t v16; // w3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  int32_t v23; // w2
  int32_t v24; // w3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v25; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int32_t v31; // w2
  int32_t v32; // w3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v33; // x22
  int32_t v34; // w2
  int32_t v35; // w3
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v36; // x8
  int32_t v37; // w2
  int32_t v38; // w3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v39; // x22
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w2
  int32_t v43; // w3
  System_Collections_Hashtable_o *v44; // x0
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v45; // x8
  struct BattleResultBondsComponent_o *v46; // x8
  const MethodInfo *v47; // x2
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v48; // x8
  struct BattleResultBondsIconComponent_array *bondsIcons; // x9
  __int64 i; // x10
  __int64 v51; // x0
  char v52[4]; // [xsp+4h] [xbp-3Ch] BYREF
  int v53; // [xsp+8h] [xbp-38h] BYREF
  int v54; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4A5E2A8 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_24743/*"x"*/);
    sub_1B885B0(&StringLiteral_9623/*"OPEN"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22275/*"oncompletetarget"*/);
    sub_1B885B0(&StringLiteral_19012/*"endMoveFigure"*/);
    sub_1B885B0(&StringLiteral_20832/*"islocal"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B885B0(&iTween_TypeInfo);
    byte_4A5E2A8 = 1;
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
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B88658(object___TypeInfo, 10LL);
  if ( !this )
    goto LABEL_69;
  v11 = this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_24743/*"x"*/;
  if ( StringLiteral_24743/*"x"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B886EC(
                                                                   StringLiteral_24743/*"x"*/,
                                                                   v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_24743/*"x"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( !LODWORD(v11->fields.CS___8__locals1) )
    goto LABEL_70;
  v11[1].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)method;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[1], (int32_t)method, v9, v10);
  v54 = -1007026176;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v54, v12, v13, v14);
  v17 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B886EC(this, v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v11->fields.CS___8__locals1) <= 1 )
    goto LABEL_70;
  v11[1].monitor = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[1].monitor, (int32_t)v17, v15, v16);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_23929/*"time"*/;
  if ( StringLiteral_23929/*"time"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B886EC(
                                                                   StringLiteral_23929/*"time"*/,
                                                                   v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_23929/*"time"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v11->fields.CS___8__locals1) <= 2 )
    goto LABEL_70;
  v11[1].fields.parent = (struct UnityEngine_GameObject_o *)method;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[1].fields, (int32_t)method, v18, v19);
  v53 = 1061997773;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v53, v20, v21, v22);
  v25 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B886EC(this, v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v11->fields.CS___8__locals1) <= 3 )
    goto LABEL_70;
  v11[1].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v25;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[1].fields.CS___8__locals1, (int32_t)v25, v23, v24);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_20832/*"islocal"*/;
  if ( StringLiteral_20832/*"islocal"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B886EC(
                                                                   StringLiteral_20832/*"islocal"*/,
                                                                   v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_20832/*"islocal"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v11->fields.CS___8__locals1) <= 4 )
    goto LABEL_70;
  v11[2].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)method;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[2], (int32_t)method, v26, v27);
  v52[0] = 1;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(bool_TypeInfo, v52, v28, v29, v30);
  v33 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B886EC(this, v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v11->fields.CS___8__locals1) <= 5 )
    goto LABEL_70;
  v11[2].monitor = v33;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[2].monitor, (int32_t)v33, v31, v32);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22275/*"oncompletetarget"*/;
  if ( StringLiteral_22275/*"oncompletetarget"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B886EC(
                                                                   StringLiteral_22275/*"oncompletetarget"*/,
                                                                   v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_22275/*"oncompletetarget"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v11->fields.CS___8__locals1) <= 6 )
    goto LABEL_70;
  v11[2].fields.parent = (struct UnityEngine_GameObject_o *)method;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[2].fields, (int32_t)method, v34, v35);
  v36 = v2->fields.CS___8__locals1;
  if ( !v36 || (this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v36->fields.__4__this) == 0LL )
LABEL_69:
    sub_1B8880C(this, method);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
  v39 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B886EC(this, v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v11->fields.CS___8__locals1) <= 7 )
    goto LABEL_70;
  v11[2].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v39;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[2].fields.CS___8__locals1, (int32_t)v39, v37, v38);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22273/*"oncomplete"*/;
  if ( StringLiteral_22273/*"oncomplete"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B886EC(
                                                                   StringLiteral_22273/*"oncomplete"*/,
                                                                   v11->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_22273/*"oncomplete"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v11->fields.CS___8__locals1) <= 8 )
    goto LABEL_70;
  v11[3].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)method;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[3], (int32_t)method, v40, v41);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_19012/*"endMoveFigure"*/;
  if ( !StringLiteral_19012/*"endMoveFigure"*/ )
  {
    method = 0LL;
    goto LABEL_57;
  }
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B886EC(
                                                                 StringLiteral_19012/*"endMoveFigure"*/,
                                                                 v11->klass->_1.element_class);
  if ( !this )
  {
LABEL_71:
    v51 = sub_1B88830(this);
    sub_1B886D8(v51, 0LL);
  }
  method = (const MethodInfo *)StringLiteral_19012/*"endMoveFigure"*/;
LABEL_57:
  if ( LODWORD(v11->fields.CS___8__locals1) <= 9 )
    goto LABEL_70;
  v11[3].monitor = (void *)method;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[3].monitor, (int32_t)method, v42, v43);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v44 = iTween__Hash((System_Object_array *)v11, 0LL);
  iTween__MoveFrom_60246836(parent, v44, 0LL);
LABEL_61:
  v45 = v2->fields.CS___8__locals1;
  if ( !v45 )
    goto LABEL_69;
  v46 = v45->fields.__4__this;
  if ( !v46 )
    goto LABEL_69;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v46->fields.myFsm;
  v46->fields.openBoundsFlg = 1;
  if ( !this )
    goto LABEL_69;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9623/*"OPEN"*/, 0LL);
  v48 = v2->fields.CS___8__locals1;
  if ( !v48 )
    goto LABEL_69;
  bondsIcons = v48->fields.bondsIcons;
  if ( !bondsIcons )
    goto LABEL_69;
  i = v48->fields.i;
  if ( (unsigned int)i >= bondsIcons->max_length )
LABEL_70:
    sub_1B88814(this, method);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v48->fields.__4__this;
  if ( !this )
    goto LABEL_69;
  BattleResultBondsComponent__CheckFormalJoin((BattleResultBondsComponent_o *)this, bondsIcons->m_Items[i], v47);
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

  if ( (byte_4A5E2A9 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E2A9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CommonUI__CreateServantCoinConfirmDialog((CommonUI_o *)Instance, 1, this->fields.coin, 0LL, 0LL);
}