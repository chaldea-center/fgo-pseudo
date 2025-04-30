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

  if ( (byte_4A519F8 & 1) == 0 )
  {
    sub_1B863B8(&BattleResultBondsComponent_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_6982/*"GetNewSvt"*/, v4);
    sub_1B863B8(&StringLiteral_6969/*"GetExistSvt"*/, v5);
    byte_4A519F8 = 1;
  }
  static_fields = BattleResultBondsComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SVT_GAP_5 = 0x4316000043320000LL;
  *(_QWORD *)&static_fields->CONF_LABEL_MAX_WIDTH = 0x12000001D0LL;
  v7 = StringLiteral_6982/*"GetNewSvt"*/;
  static_fields->GET_NEW_SVT_KEY = (struct System_String_o *)StringLiteral_6982/*"GetNewSvt"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->GET_NEW_SVT_KEY, v7, v2, v3);
  v8 = StringLiteral_6969/*"GetExistSvt"*/;
  v9 = BattleResultBondsComponent_TypeInfo->static_fields;
  v9->GET_EXIST_SVT_KEY = (struct System_String_o *)StringLiteral_6969/*"GetExistSvt"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v9->GET_EXIST_SVT_KEY, v8, v10, v11);
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

  if ( (byte_4A519F7 & 1) == 0 )
  {
    sub_1B863B8(&BattleResultBondsFigureComponent_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_1B863B8(&System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo, v5);
    sub_1B863B8(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    byte_4A519F7 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.conflist = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.conflist, (int32_t)v7, v8, v9);
  this->fields.buddyPointInfoWindowHeight = 366;
  this->fields.tempSaveTimeScale = 1.0;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
  this->fields.bondsList = (struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *)v10;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.bondsList, (int32_t)v10, v11, v12);
  v13 = (BattleResultBondsFigureComponent_o *)sub_1B86604(BattleResultBondsFigureComponent_TypeInfo);
  BattleResultBondsFigureComponent___ctor(v13, 0LL);
  this->fields.bondsFigure = v13;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.bondsFigure, (int32_t)v13, v14, v15);
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

  if ( (byte_4A519E9 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, collect);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1B863B8(&Method_DataManager_GetMaster_SvtCoinMaster___, v6);
    sub_1B863B8(&DataManager_TypeInfo, v7);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_1B863B8(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v9);
    sub_1B863B8(&GetSvtCoin___TypeInfo, v10);
    sub_1B863B8(&GetSvtCoin_TypeInfo, v11);
    sub_1B863B8(&LocalizationManager_TypeInfo, v12);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B863B8(&Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__, v15);
    sub_1B863B8(&Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__, v16);
    sub_1B863B8(&BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo, v17);
    sub_1B863B8(&BattleResultBondsComponent___c_TypeInfo, v18);
    sub_1B863B8(&StringLiteral_12219/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, v19);
    sub_1B863B8(&StringLiteral_18384/*"dialogIgnoreTime"*/, v20);
    byte_4A519E9 = 1;
  }
  entity = 0LL;
  if ( this->fields.getJoinSvtList && !this->fields.isWarboard )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___),
          (getJoinSvtList = this->fields.getJoinSvtList) == 0LL) )
    {
LABEL_45:
      sub_1B86614(Instance, v22);
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
        UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_18384/*"dialogIgnoreTime"*/, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      else
      {
        if ( !v24 )
          goto LABEL_45;
        Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                      v24,
                                      v27->fields.userSvtId,
                                      (const MethodInfo_32167DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
                _9__62_0 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
                System_Action___ctor(
                  _9__62_0,
                  v32,
                  Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__,
                  0LL);
                static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
                static_fields->__9__62_0 = _9__62_0;
                sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__62_0, (int32_t)_9__62_0, v34, v35);
              }
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_SvtCoinMaster___);
              Instance = (DataManager_o *)UserServantEntity__getSvtId(v28, 0LL);
              if ( !Master_object )
                goto LABEL_45;
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            &entity,
                                            (int32_t)Instance,
                                            (const MethodInfo_32142CC *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_45;
                if ( SHIDWORD(entity[1].klass) >= 1 )
                {
                  v37 = sub_1B86604(BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo);
                  BattleResultBondsComponent___c__DisplayClass62_0___ctor(
                    (BattleResultBondsComponent___c__DisplayClass62_0_o *)v37,
                    0LL);
                  v38 = sub_1B86460(GetSvtCoin___TypeInfo, 1LL);
                  v39 = sub_1B86604(GetSvtCoin_TypeInfo);
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
                  Instance = (DataManager_o *)sub_1B864F4(v39, *(_QWORD *)(*(_QWORD *)v38 + 64LL));
                  if ( !Instance )
                  {
                    v47 = sub_1B86638(0LL);
                    sub_1B864E0(v47, 0LL);
                  }
                  if ( !*(_DWORD *)(v38 + 24) )
LABEL_46:
                    sub_1B8661C(Instance, v22);
                  *(_QWORD *)(v38 + 32) = v39;
                  sub_1B8635C((CGThumbnailListItem_o *)(v38 + 32), v39, v41, v42);
                  if ( !v37 )
                    goto LABEL_45;
                  *(_QWORD *)(v37 + 16) = v38;
                  sub_1B8635C((CGThumbnailListItem_o *)(v37 + 16), v38, v43, v44);
                  _9__62_0 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__62_0,
                    (Il2CppObject *)v37,
                    Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__,
                    0LL);
                }
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v45 = LocalizationManager__Get((System_String_o *)StringLiteral_12219/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0LL);
              v46 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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

  if ( (byte_4A519F1 & 1) == 0 )
  {
    sub_1B863B8(&Method_BattleResultBondsComponent_endClose__, method);
    sub_1B863B8(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4A519F1 = 1;
  }
  if ( this->fields.isMultiDeck )
    multiDeckWindow = this->fields.multiDeckWindow;
  else
    multiDeckWindow = this->fields.window;
  v5 = (BattleWindowComponent_EndCall_o *)sub_1B86604(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v5, (Il2CppObject *)this, Method_BattleResultBondsComponent_endClose__, 0LL);
  if ( !multiDeckWindow )
    sub_1B86614(v6, v7);
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

  if ( (byte_4A519F6 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_5419/*"END_PROC"*/, method);
    byte_4A519F6 = 1;
  }
  upRoot = this->fields.upRoot;
  if ( !upRoot
    || (UnityEngine_GameObject__SetActive(upRoot, 0, 0LL),
        (upRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B86614(upRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)upRoot, (System_String_o *)StringLiteral_5419/*"END_PROC"*/, 0LL);
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
  Il2CppObject *Object_object__49610244; // x21
  BattleResultBondsComponent_o *v14; // x21
  BattleResultBondsComponent_o *v15; // x22
  BattleResultBondsComponent_o *v16; // x22
  BattleResultBondsComponent_o *v17; // x22
  int m_CancellationTokenSource; // w8
  BattleResultBondsComponent_o *v19; // x21
  unsigned int v20; // w22

  v8 = this;
  if ( (byte_4A519EB & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, data);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__, v10);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    this = (BattleResultBondsComponent_o *)sub_1B863B8(&UnityEngine_Object_TypeInfo, v12);
    byte_4A519EB = 1;
  }
  if ( !data )
    goto LABEL_23;
  Object_object__49610244 = AssetData__GetObject_object__49610244(
                              data,
                              effectName,
                              (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultBondsComponent_o *)UnityEngine_Object__Instantiate_object_(
                                           Object_object__49610244,
                                           (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( !byte_4A487E1 )
  {
    this = (BattleResultBondsComponent_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, data);
    byte_4A487E1 = 1;
  }
  if ( !v16 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v16,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v14, 0LL);
  v17 = this;
  if ( !byte_4A487E6 )
  {
    this = (BattleResultBondsComponent_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, data);
    byte_4A487E6 = 1;
  }
  if ( !v17 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v17,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50076180(
                                           (UnityEngine_GameObject_o *)v14,
                                           (const MethodInfo_2FC1A14 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
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
        sub_1B8661C(this, data);
      this = (BattleResultBondsComponent_o *)*((_QWORD *)&v19->fields.parentComp + (int)v20);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0LL);
      m_CancellationTokenSource = (int)v19->fields.m_CancellationTokenSource;
      if ( (int)++v20 >= m_CancellationTokenSource )
        goto LABEL_21;
    }
LABEL_23:
    sub_1B86614(this, data);
  }
LABEL_21:
  this = (BattleResultBondsComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v19,
    (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void __fastcall BattleResultBondsComponent__DeleteGetJoinSvtData(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleResultBondsComponent_c *v2; // x0

  if ( (byte_4A519E0 & 1) == 0 )
  {
    sub_1B863B8(&BattleResultBondsComponent_TypeInfo, v1);
    byte_4A519E0 = 1;
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

  if ( (byte_4A519E7 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_9116/*"NEXT"*/, method);
    sub_1B863B8(&iTween_TypeInfo, v3);
    byte_4A519E7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_61393080(gameObject, 0LL);
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
        sub_1B8661C(BondsIconArray, v7);
      BondsIconArray = *(_DWORD **)&v9[2 * v10 + 8];
      if ( !BondsIconArray )
        break;
      BattleResultBondsIconComponent__FinishUpdateValue((BattleResultBondsIconComponent_o *)BondsIconArray, 0LL);
      v8 = v9[6];
      if ( (int)++v10 >= v8 )
        goto LABEL_11;
    }
LABEL_16:
    sub_1B86614(BondsIconArray, v7);
  }
LABEL_11:
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  BondsIconArray = this->fields.myFsm;
  this->fields.bondsCountUp = 0;
  if ( !BondsIconArray )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_9116/*"NEXT"*/, 0LL);
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

  if ( (byte_4A519F3 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__,
      method);
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__,
      v3);
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__,
      v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v9);
    byte_4A519F3 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( this->fields.isMultiDeck )
  {
    p_bondsIconArray = (CGThumbnailListItem_o *)&this->fields.bondsIconArray;
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.bondsIconArray, 0LL) )
    {
      v11 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v11,
        (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
      bondsList = (System_Collections_Generic_List_object__o *)this->fields.bondsList;
      if ( !bondsList )
        goto LABEL_17;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v20,
        bondsList,
        (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v20,
                (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
      {
        if ( !v20.fields._current )
          sub_1B86614(0LL, v14);
        BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                          (BattleResultBondsDeckPerWaveComponent_o *)v20.fields._current,
                                                                          0LL);
        if ( !v11 )
          sub_1B86614(BondsIconArray, BondsIconArray);
        System_Collections_Generic_List_object___AddRange(
          v11,
          BondsIconArray,
          (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v20,
        (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
      if ( !v11 )
LABEL_17:
        sub_1B86614(bondsList, v12);
      v16 = System_Collections_Generic_List_object___ToArray(
              v11,
              (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
      p_bondsIconArray->klass = (CGThumbnailListItem_c *)v16;
      sub_1B8635C(p_bondsIconArray, (int32_t)v16, v17, v18);
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

  if ( (byte_4A519E1 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__, method);
    sub_1B863B8(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo, v3);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v4);
    byte_4A519E1 = 1;
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
  v6 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v6;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.effectUIList, (int32_t)v6, v7, v8);
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
    sub_1B86614(window, method);
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
  if ( (byte_4A519E2 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, oldCollects);
    byte_4A519E2 = 1;
  }
  this->fields.oldCollections = oldCollects;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.oldCollections,
    (int32_t)oldCollects,
    (int32_t)inRewardInfos,
    (const MethodInfo *)resultAsset);
  this->fields.rewardInfos = inRewardInfos;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.rewardInfos, (int32_t)inRewardInfos, v15, v16);
  this->fields.resultAssetData = resultAsset;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resultAssetData, (int32_t)resultAsset, v17, v18);
  this->fields.getJoinSvtList = getJoinSvts;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.getJoinSvtList, (int32_t)getJoinSvts, v19, v20);
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
  if ( (byte_4A519F4 & 1) == 0 )
  {
    sub_1B863B8(&BattleResultBondsComponent_TypeInfo, *(_QWORD *)&targetIndex);
    this = (BattleResultBondsComponent_o *)sub_1B863B8(&UnityEngine_Object_TypeInfo, v13);
    byte_4A519F4 = 1;
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
        0,
        0,
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
      sub_1B8661C(this, *(_QWORD *)&targetIndex);
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
      sub_1B86614(this, *(_QWORD *)&targetIndex);
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

  if ( (byte_4A519E5 & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_Any_BattleResultBondsIconComponent___, method);
    sub_1B863B8(&Method_BattleResultBondsComponent_OpenEnd__, v3);
    sub_1B863B8(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1B863B8(&System_Func_BattleResultBondsIconComponent__bool__TypeInfo, v5);
    sub_1B863B8(&Method_BattleResultBondsComponent___c__Open_b__53_0__, v6);
    sub_1B863B8(&BattleResultBondsComponent___c_TypeInfo, v7);
    sub_1B863B8(&StringLiteral_5414/*"END_OPEN"*/, v8);
    sub_1B863B8(&StringLiteral_12025/*"SKIP"*/, v9);
    byte_4A519E5 = 1;
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
    _9__53_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_BattleResultBondsIconComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__53_0, v14, Method_BattleResultBondsComponent___c__Open_b__53_0__, 0LL);
    static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Func_BattleResultBondsIconComponent__bool__o *)_9__53_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v16, v17);
  }
  if ( BasicHelper__Any_object__49642848(
         v12,
         (System_Func_T__bool__o *)_9__53_0,
         (const MethodInfo_2F57D60 *)Method_BasicHelper_Any_BattleResultBondsIconComponent___) )
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
      v23 = (BattleWindowComponent_EndCall_o *)sub_1B86604(BattleWindowComponent_EndCall_TypeInfo);
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
          v22 = &StringLiteral_5414/*"END_OPEN"*/;
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    sub_1B86614(gameObject, v18);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !gameObject )
    goto LABEL_20;
  v22 = &StringLiteral_12025/*"SKIP"*/;
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

  if ( (byte_4A519E6 & 1) == 0 )
  {
    sub_1B863B8(&Method_BattleResultBondsComponent_OpenEnd__, method);
    sub_1B863B8(&object___TypeInfo, v3);
    sub_1B863B8(&SeManager_TypeInfo, v4);
    sub_1B863B8(&float_TypeInfo, v5);
    sub_1B863B8(&StringLiteral_19437/*"from"*/, v6);
    sub_1B863B8(&StringLiteral_23770/*"time"*/, v7);
    sub_1B863B8(&StringLiteral_22117/*"onupdate"*/, v8);
    sub_1B863B8(&StringLiteral_14970/*"UpdateValue"*/, v9);
    sub_1B863B8(&StringLiteral_23809/*"to"*/, v10);
    sub_1B863B8(&StringLiteral_22109/*"oncomplete"*/, v11);
    sub_1B863B8(&StringLiteral_6664/*"FinishUpdateValue"*/, v12);
    sub_1B863B8(&iTween_TypeInfo, v13);
    byte_4A519E6 = 1;
  }
  if ( !this->fields.bondsCountUp )
    return;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B86460(object___TypeInfo, 10LL);
  if ( !BondsIconArray )
LABEL_65:
    sub_1B86614(BondsIconArray, v16);
  v19 = (System_Object_array *)BondsIconArray;
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_19437/*"from"*/;
  if ( StringLiteral_19437/*"from"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B864F4(
                                                               StringLiteral_19437/*"from"*/,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = StringLiteral_19437/*"from"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v19->max_length )
    goto LABEL_64;
  v19->m_Items[0] = (Il2CppObject *)v16;
  sub_1B8635C((CGThumbnailListItem_o *)v19->m_Items, v16, v17, v18);
  v64 = 0;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v64, v20, v21, v22);
  v25 = BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B864F4(
                                                               BondsIconArray,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
  }
  if ( v19->max_length <= 1 )
    goto LABEL_64;
  v19->m_Items[1] = &v25->obj;
  sub_1B8635C((CGThumbnailListItem_o *)&v19->m_Items[1], (int32_t)v25, v23, v24);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_23809/*"to"*/;
  if ( StringLiteral_23809/*"to"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B864F4(
                                                               StringLiteral_23809/*"to"*/,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = StringLiteral_23809/*"to"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v19->max_length <= 2 )
    goto LABEL_64;
  v19->m_Items[2] = (Il2CppObject *)v16;
  sub_1B8635C((CGThumbnailListItem_o *)&v19->m_Items[2], v16, v26, v27);
  v63 = 1065353216;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v63, v28, v29, v30);
  v33 = BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B864F4(
                                                               BondsIconArray,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
  }
  if ( v19->max_length <= 3 )
    goto LABEL_64;
  v19->m_Items[3] = &v33->obj;
  sub_1B8635C((CGThumbnailListItem_o *)&v19->m_Items[3], (int32_t)v33, v31, v32);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22117/*"onupdate"*/;
  if ( StringLiteral_22117/*"onupdate"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B864F4(
                                                               StringLiteral_22117/*"onupdate"*/,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = StringLiteral_22117/*"onupdate"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v19->max_length <= 4 )
    goto LABEL_64;
  v19->m_Items[4] = (Il2CppObject *)v16;
  sub_1B8635C((CGThumbnailListItem_o *)&v19->m_Items[4], v16, v34, v35);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_14970/*"UpdateValue"*/;
  if ( StringLiteral_14970/*"UpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B864F4(
                                                               StringLiteral_14970/*"UpdateValue"*/,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = StringLiteral_14970/*"UpdateValue"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v19->max_length <= 5 )
    goto LABEL_64;
  v19->m_Items[5] = (Il2CppObject *)v16;
  sub_1B8635C((CGThumbnailListItem_o *)&v19->m_Items[5], v16, v36, v37);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22109/*"oncomplete"*/;
  if ( StringLiteral_22109/*"oncomplete"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B864F4(
                                                               StringLiteral_22109/*"oncomplete"*/,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = StringLiteral_22109/*"oncomplete"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v19->max_length <= 6 )
    goto LABEL_64;
  v19->m_Items[6] = (Il2CppObject *)v16;
  sub_1B8635C((CGThumbnailListItem_o *)&v19->m_Items[6], v16, v38, v39);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_6664/*"FinishUpdateValue"*/;
  if ( StringLiteral_6664/*"FinishUpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B864F4(
                                                               StringLiteral_6664/*"FinishUpdateValue"*/,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = StringLiteral_6664/*"FinishUpdateValue"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v19->max_length <= 7 )
    goto LABEL_64;
  v19->m_Items[7] = (Il2CppObject *)v16;
  sub_1B8635C((CGThumbnailListItem_o *)&v19->m_Items[7], v16, v40, v41);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_23770/*"time"*/;
  if ( StringLiteral_23770/*"time"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B864F4(
                                                               StringLiteral_23770/*"time"*/,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = StringLiteral_23770/*"time"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v19->max_length <= 8 )
    goto LABEL_64;
  v19->m_Items[8] = (Il2CppObject *)v16;
  sub_1B8635C((CGThumbnailListItem_o *)&v19->m_Items[8], v16, v42, v43);
  v62 = 1072064102;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v62, v44, v45, v46);
  v49 = BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1B864F4(
                                                               BondsIconArray,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
    {
LABEL_66:
      v61 = sub_1B86638(BondsIconArray);
      sub_1B864E0(v61, 0LL);
    }
  }
  if ( v19->max_length <= 9 )
    goto LABEL_64;
  v19->m_Items[9] = &v49->obj;
  sub_1B8635C((CGThumbnailListItem_o *)&v19->m_Items[9], (int32_t)v49, v47, v48);
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
    sub_1B8661C(BondsIconArray, v16);
  }
LABEL_57:
  if ( this->fields.updateFlg )
  {
    v55 = Method_BattleResultBondsComponent_OpenEnd__;
    if ( (*((_BYTE *)Method_BattleResultBondsComponent_OpenEnd__ + 83) & 2) != 0 )
      v55 = (_QWORD *)sub_1B863D0(Method_BattleResultBondsComponent_OpenEnd__);
    v56 = (System_Reflection_MethodBase_o *)sub_1B8639C(v55, v55[4]);
    if ( !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    CommonSeName = SeManager__GetCommonSeName(15, 0LL);
    v58 = OverwriteAssetSoundName__PlaySe(v56, CommonSeName, 0, 0LL);
    this->fields.MeterSePlayer = v58;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.MeterSePlayer, (int32_t)v58, v59, v60);
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

  if ( (byte_4A519E3 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__,
      battleData);
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__,
      v19);
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__,
      v20);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__, v21);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__, v22);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__, v23);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__, v24);
    sub_1B863B8(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v25);
    byte_4A519E3 = 1;
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
        sub_1B8661C(bondsList, v27);
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
  v35 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  bondsList = (System_Collections_Generic_List_object__o *)this->fields.bondsList;
  if ( !bondsList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    bondsList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
  {
    if ( !v42.fields._current )
      sub_1B86614(0LL, v36);
    BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                      (BattleResultBondsDeckPerWaveComponent_o *)v42.fields._current,
                                                                      0LL);
    if ( !v35 )
      sub_1B86614(BondsIconArray, BondsIconArray);
    System_Collections_Generic_List_object___AddRange(
      v35,
      BondsIconArray,
      (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
  if ( !v35 )
LABEL_21:
    sub_1B86614(bondsList, v27);
  v38 = System_Collections_Generic_List_object___ToArray(
          v35,
          (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
  this->fields.bondsIconArray = (struct BattleResultBondsIconComponent_array *)v38;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.bondsIconArray, (int32_t)v38, v39, v40);
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
  int64_t userSvtId; // x1
  Il2CppObject *v51; // x27
  BattleResultBondsComponent_o *v52; // x19
  Il2CppObject *v53; // x29
  struct BattleResultBondsDeckPerWaveComponent_o *multiBondsPrefab; // x19
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *v56; // x1
  UnityEngine_Object_o *v57; // x9
  const MethodInfo *v58; // x6
  System_Collections_Generic_IEnumerable_TSource__o *rewardInfos; // x20
  BattleResultBondsComponent___c_c *v60; // x0
  System_Func_object__bool__o *_9__49_0; // x19
  Il2CppObject *v62; // x21
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  System_Collections_Generic_List_TSource__o *v67; // x0
  System_Collections_Generic_List_object__o *v68; // x21
  BattleResultBondsComponent_c *v69; // x0
  BattleResultBondsComponent_c *v70; // x0
  Il2CppObject *String_69314580; // x19
  System_Collections_Generic_IEnumerable_T__o *v72; // x0
  BattleResultBondsComponent_c *v73; // x0
  System_String_o *GET_NEW_SVT_KEY; // x20
  System_Object_array *v75; // x19
  System_String_o *v76; // x0
  BattleResultBondsComponent___c_c *v77; // x0
  System_Collections_Generic_IEnumerable_TSource__o *getJoinSvts; // x20
  System_Func_object__bool__o *_9__49_1; // x19
  Il2CppObject *v80; // x21
  struct BattleResultBondsComponent___c_StaticFields *v81; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x0
  System_Collections_Generic_List_TSource__o *v85; // x0
  System_Collections_Generic_List_object__o *v86; // x21
  BattleResultBondsComponent_c *v87; // x0
  BattleResultBondsComponent_c *v88; // x0
  Il2CppObject *v89; // x19
  System_Collections_Generic_IEnumerable_T__o *v90; // x0
  BattleResultBondsComponent_c *v91; // x0
  System_String_o *GET_EXIST_SVT_KEY; // x20
  System_Object_array *v93; // x19
  System_String_o *v94; // x0
  struct BattleDeckServantData_array *svts; // x22
  int max_length; // w8
  unsigned int v97; // w21
  int32_t v98; // w20
  BattleDeckServantData_o *v99; // x25
  BattleResultBondsComponent___c__DisplayClass49_0_o *v100; // x28
  UserServantEntity_o *v101; // x24
  BattleResultBondsComponent_o *SvtId; // x0
  const MethodInfo *v103; // x3
  Il2CppObject *v104; // x26
  Il2CppObject *Entity; // x22
  int32_t IconLimitCount; // w27
  signed int v107; // w8
  int32_t v108; // w29
  unsigned int v109; // w19
  BattleUserServantData_o *v110; // x20
  __int128 v111; // q0
  const MethodInfo *v112; // x5
  int32_t afterLimitCount; // w25
  BattleResultBondsIconComponent_o *v114; // x19
  int32_t v115; // w0
  int afterIconLimitCount; // w8
  bool v117; // zf
  bool v118; // zf
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x19
  BattleBuddyPointInfo_o *v120; // x20
  System_Func_object__bool__o *v121; // x20
  BattleResultBondsIconComponent_o *v122; // x28
  struct BattleResultBondsIconComponent_array *v123; // x8
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  bool v125; // w19
  bool v126; // w8
  bool updateFlg; // w19
  bool v128; // w8
  struct BattleResultBondsIconComponent_array *v129; // x8
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  __int64 v132; // x8
  _QWORD *v133; // x9
  __int64 v134; // x10
  __int64 v135; // x8
  int32_t cnt; // [xsp+14h] [xbp-10Ch]
  ServantLimitImageMaster_o *svtLimitImageMaster; // [xsp+18h] [xbp-108h]
  UserServantCollectionMaster_o *MasterData_object; // [xsp+28h] [xbp-F8h]
  BattleResultBondsDeckPerWaveComponent_o *Object_object; // [xsp+30h] [xbp-F0h]
  UnityEngine_Object_o *x; // [xsp+38h] [xbp-E8h]
  Il2CppObject *v142; // [xsp+40h] [xbp-E0h]
  struct BattleDeckServantData_array *v143; // [xsp+48h] [xbp-D8h]
  int32_t Type; // [xsp+5Ch] [xbp-C4h]
  UserServantCollectionEntity_o *userSvtCol; // [xsp+68h] [xbp-B8h]
  il2cpp_array_size_t v148; // [xsp+74h] [xbp-ACh]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v150; // [xsp+80h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v151; // [xsp+A0h] [xbp-80h]

  if ( (byte_4A519E4 & 1) == 0 )
  {
    sub_1B863B8(&Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___, myDeck);
    sub_1B863B8(&Method_BasicHelper_Find_BattleBuddyPointInfo___, v14);
    sub_1B863B8(&BattleResultBondsComponent_TypeInfo, v15);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v17);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantMaster___, v18);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v19);
    sub_1B863B8(&DataManager_TypeInfo, v20);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v22);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_GetSvts___, v23);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_QuestRewardInfo___, v24);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_GetSvts___, v25);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_QuestRewardInfo___, v26);
    sub_1B863B8(&System_Func_GetSvts__bool__TypeInfo, v27);
    sub_1B863B8(&System_Func_BattleBuddyPointInfo__bool__TypeInfo, v28);
    sub_1B863B8(&System_Func_QuestRewardInfo__bool__TypeInfo, v29);
    sub_1B863B8(&Method_JsonManager_DeserializeArray_GetSvts___, v30);
    sub_1B863B8(&Method_JsonManager_DeserializeArray_QuestRewardInfo___, v31);
    sub_1B863B8(&JsonManager_TypeInfo, v32);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__, v33);
    sub_1B863B8(&Method_System_Collections_Generic_List_GetSvts__AddRange__, v34);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__, v35);
    sub_1B863B8(&Method_System_Collections_Generic_List_GetSvts__ToArray__, v36);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__, v37);
    sub_1B863B8(&Method_System_Collections_Generic_List_GetSvts__get_Count__, v38);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__, v39);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v40);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v41);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42);
    sub_1B863B8(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__, v43);
    sub_1B863B8(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__, v44);
    sub_1B863B8(&Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__, v45);
    sub_1B863B8(&BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo, v46);
    sub_1B863B8(&BattleResultBondsComponent___c_TypeInfo, v47);
    byte_4A519E4 = 1;
  }
  Type = Follower__getType(followerType, 0LL);
  if ( Type )
    v48 = 5;
  else
    v48 = 6;
  cnt = v48;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  MasterData_object = (UserServantCollectionMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  v51 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  v52 = this;
  v53 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( this->fields.isMultiDeck )
  {
    Instance = (int64_t)this->fields.multiBondsRoot;
    if ( !Instance )
      goto LABEL_148;
    multiBondsPrefab = this->fields.multiBondsPrefab;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    v56 = (Il2CppObject *)multiBondsPrefab;
    v52 = this;
    Object_object = (BattleResultBondsDeckPerWaveComponent_o *)BaseMonoBehaviour__createObject_object_(
                                                                 (BaseMonoBehaviour_o *)this,
                                                                 v56,
                                                                 transform,
                                                                 0LL,
                                                                 (const MethodInfo_2F57628 *)Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    if ( this->fields.isMultiDeck )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      svtLimitImageMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      goto LABEL_17;
    }
  }
  else
  {
    Object_object = 0LL;
  }
  svtLimitImageMaster = 0LL;
LABEL_17:
  v57 = x;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v57 = x;
  }
  Instance = UnityEngine_Object__op_Inequality(v57, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)x;
    if ( !x )
      goto LABEL_148;
    Instance = BattleData__IsWarBoard((BattleData_o *)x, 0LL);
    v52->fields.isWarboard = Instance & 1;
    if ( (Instance & 1) != 0 )
    {
      if ( !battleResult )
        goto LABEL_148;
      rewardInfos = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.rewardInfos;
      v60 = BattleResultBondsComponent___c_TypeInfo;
      if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v60 = BattleResultBondsComponent___c_TypeInfo;
      }
      _9__49_0 = (System_Func_object__bool__o *)v60->static_fields->__9__49_0;
      if ( !_9__49_0 )
      {
        if ( !v60->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v60);
          v60 = BattleResultBondsComponent___c_TypeInfo;
        }
        v62 = (Il2CppObject *)v60->static_fields->__9;
        _9__49_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_QuestRewardInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__49_0,
          v62,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__,
          0LL);
        static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
        static_fields->__9__49_0 = (struct System_Func_QuestRewardInfo__bool__o *)_9__49_0;
        sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v64, v65);
      }
      v66 = System_Linq_Enumerable__Where_object_(
              rewardInfos,
              (System_Func_TSource__bool__o *)_9__49_0,
              (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
      v67 = System_Linq_Enumerable__ToList_object_(
              v66,
              (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
      if ( v67 )
      {
        v68 = (System_Collections_Generic_List_object__o *)v67;
        if ( v67->fields._size >= 1 )
        {
          v69 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v69 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v69->static_fields->GET_NEW_SVT_KEY, 0LL) )
          {
            v70 = BattleResultBondsComponent_TypeInfo;
            if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v70 = BattleResultBondsComponent_TypeInfo;
            }
            String_69314580 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69314580(
                                                v70->static_fields->GET_NEW_SVT_KEY,
                                                0LL);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v72 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_object_(
                                                                   String_69314580,
                                                                   (const MethodInfo_2FD883C *)Method_JsonManager_DeserializeArray_QuestRewardInfo___);
            System_Collections_Generic_List_object___AddRange(
              v68,
              v72,
              (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
          }
          v73 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v73 = BattleResultBondsComponent_TypeInfo;
          }
          GET_NEW_SVT_KEY = v73->static_fields->GET_NEW_SVT_KEY;
          v75 = System_Collections_Generic_List_object___ToArray(
                  v68,
                  (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v76 = JsonManager__toJson(&v75->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_NEW_SVT_KEY, v76, 0LL);
        }
      }
      v77 = BattleResultBondsComponent___c_TypeInfo;
      getJoinSvts = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.getJoinSvts;
      if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v77 = BattleResultBondsComponent___c_TypeInfo;
      }
      _9__49_1 = (System_Func_object__bool__o *)v77->static_fields->__9__49_1;
      if ( !_9__49_1 )
      {
        if ( !v77->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v77);
          v77 = BattleResultBondsComponent___c_TypeInfo;
        }
        v80 = (Il2CppObject *)v77->static_fields->__9;
        _9__49_1 = (System_Func_object__bool__o *)sub_1B86604(System_Func_GetSvts__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__49_1,
          v80,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__,
          0LL);
        v81 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        v81->__9__49_1 = (struct System_Func_GetSvts__bool__o *)_9__49_1;
        sub_1B8635C((CGThumbnailListItem_o *)&v81->__9__49_1, (int32_t)_9__49_1, v82, v83);
      }
      v84 = System_Linq_Enumerable__Where_object_(
              getJoinSvts,
              (System_Func_TSource__bool__o *)_9__49_1,
              (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_GetSvts___);
      v85 = System_Linq_Enumerable__ToList_object_(
              v84,
              (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_GetSvts___);
      if ( v85 )
      {
        v86 = (System_Collections_Generic_List_object__o *)v85;
        if ( v85->fields._size >= 1 )
        {
          v87 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v87 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v87->static_fields->GET_EXIST_SVT_KEY, 0LL) )
          {
            v88 = BattleResultBondsComponent_TypeInfo;
            if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v88 = BattleResultBondsComponent_TypeInfo;
            }
            v89 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69314580(
                                    v88->static_fields->GET_EXIST_SVT_KEY,
                                    0LL);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v90 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_object_(
                                                                   v89,
                                                                   (const MethodInfo_2FD883C *)Method_JsonManager_DeserializeArray_GetSvts___);
            System_Collections_Generic_List_object___AddRange(
              v86,
              v90,
              (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_GetSvts__AddRange__);
          }
          v91 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v91 = BattleResultBondsComponent_TypeInfo;
          }
          GET_EXIST_SVT_KEY = v91->static_fields->GET_EXIST_SVT_KEY;
          v93 = System_Collections_Generic_List_object___ToArray(
                  v86,
                  (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_GetSvts__ToArray__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v94 = JsonManager__toJson(&v93->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_EXIST_SVT_KEY, v94, 0LL);
        }
      }
      UnityEngine_PlayerPrefs__Save(0LL);
      v52 = this;
    }
  }
  if ( !myDeck )
    goto LABEL_148;
  svts = myDeck->fields.svts;
  if ( !svts )
    goto LABEL_148;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v97 = 0;
    v98 = 0;
    v142 = v51;
    v143 = myDeck->fields.svts;
    while ( 1 )
    {
      if ( v97 >= max_length )
LABEL_149:
        sub_1B8661C(Instance, userSvtId);
      v99 = svts->m_Items[v97];
      v100 = (BattleResultBondsComponent___c__DisplayClass49_0_o *)sub_1B86604(BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo);
      BattleResultBondsComponent___c__DisplayClass49_0___ctor(v100, 0LL);
      if ( !v99 || !v100 )
        goto LABEL_148;
      userSvtId = v99->fields.userSvtId;
      v100->fields.userSvtId = userSvtId;
      if ( userSvtId < 1 )
      {
        Instance = (int64_t)x;
        if ( !x )
          goto LABEL_148;
        Instance = BattleData__IsInterruptionQuest((BattleData_o *)x, 0LL);
        if ( (Instance & 1) == 0 )
          goto LABEL_135;
        if ( v52->fields.isMultiDeck )
        {
          Instance = (int64_t)Object_object;
          if ( !Object_object )
            goto LABEL_148;
          Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, 0LL);
          v114 = (BattleResultBondsIconComponent_o *)Instance;
          if ( !Instance )
            goto LABEL_148;
        }
        else
        {
          v129 = v52->fields.collects;
          if ( !v129 )
            goto LABEL_148;
          if ( v98 >= v129->max_length )
            goto LABEL_149;
          v114 = v129->m_Items[v98];
          if ( !v114 )
            goto LABEL_148;
        }
        BattleResultBondsIconComponent__setServantData(v114, 0LL, 0LL, 0, 0, 0, 0, 0, 0LL);
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v114, 0LL);
        if ( !Instance )
          goto LABEL_148;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        v52 = this;
      }
      else
      {
        if ( !v51 )
          goto LABEL_148;
        Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v51,
                              userSvtId,
                              (const MethodInfo_32167DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !Instance )
          goto LABEL_148;
        v101 = (UserServantEntity_o *)Instance;
        v148 = v98;
        SvtId = (BattleResultBondsComponent_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
        userSvtCol = BattleResultBondsComponent__getServantCollection(SvtId, oldCollects, (int32_t)SvtId, v103);
        Instance = UserServantEntity__getSvtId(v101, 0LL);
        if ( !v53 )
          goto LABEL_148;
        v104 = v53;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v53,
                   Instance,
                   (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        IconLimitCount = UserServantEntity__getIconLimitCount(v101, 0, 0LL);
        Instance = UserServantEntity__getDispLimitCount(v101, 0, 0LL);
        if ( !usrSvts )
          goto LABEL_148;
        v107 = usrSvts->max_length;
        v108 = Instance;
        if ( v107 < 1 )
        {
LABEL_86:
          afterLimitCount = -1;
        }
        else
        {
          v109 = 0;
          while ( 1 )
          {
            if ( v109 >= v107 )
              goto LABEL_149;
            v110 = usrSvts->m_Items[v109];
            if ( !v110 )
              goto LABEL_148;
            v111 = *(_OWORD *)&v110->fields.id.fields.fakeValue;
            *(_OWORD *)&v151.fields.currentCryptoKey = *(_OWORD *)&v110->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v151.fields.fakeValue = v111;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v150 = v151;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v150, 0LL);
            if ( Instance == v100->fields.userSvtId )
              break;
            v107 = usrSvts->max_length;
            if ( (int)++v109 >= v107 )
              goto LABEL_86;
          }
          if ( this->fields.isMultiDeck )
            BattleResultBondsComponent__UpdateAfterLimitCount(
              (BattleResultBondsComponent_o *)Instance,
              (BattleData_o *)x,
              v110,
              v99,
              svtLimitImageMaster,
              v112);
          v115 = UserServantEntity__getIconLimitCount((UserServantEntity_o *)v110, 0, 0LL);
          afterIconLimitCount = v110->fields.afterIconLimitCount;
          v117 = afterIconLimitCount < 0 || v115 == afterIconLimitCount;
          IconLimitCount = v117 ? v115 : v110->fields.afterIconLimitCount;
          Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v110, 0, 0LL);
          afterLimitCount = v110->fields.afterLimitCount;
          v118 = afterLimitCount < 0 || (_DWORD)Instance == afterLimitCount;
          v108 = v118 ? Instance : v110->fields.afterLimitCount;
        }
        if ( !battleResult )
          goto LABEL_148;
        buddyPointInfos = battleResult->fields.buddyPointInfos;
        if ( buddyPointInfos )
        {
          v120 = 0LL;
          if ( *(_QWORD *)&buddyPointInfos->max_length && !isHideBuddyPointResult )
          {
            v121 = (System_Func_object__bool__o *)sub_1B86604(System_Func_BattleBuddyPointInfo__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v121,
              (Il2CppObject *)v100,
              Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__,
              0LL);
            Instance = (int64_t)BasicHelper__Find_object_(
                                  (System_Object_array *)buddyPointInfos,
                                  (System_Func_T__bool__o *)v121,
                                  (const MethodInfo_2F58880 *)Method_BasicHelper_Find_BattleBuddyPointInfo___);
            v120 = (BattleBuddyPointInfo_o *)Instance;
          }
        }
        else
        {
          v120 = 0LL;
        }
        if ( this->fields.isMultiDeck )
        {
          Instance = (int64_t)Object_object;
          if ( !Object_object )
            goto LABEL_148;
          Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, 0LL);
          v122 = (BattleResultBondsIconComponent_o *)Instance;
          if ( !Instance )
            goto LABEL_148;
        }
        else
        {
          v123 = this->fields.collects;
          if ( !v123 )
            goto LABEL_148;
          if ( v148 >= v123->max_length )
            goto LABEL_149;
          v122 = v123->m_Items[v148];
          if ( !v122 )
            goto LABEL_148;
        }
        BattleResultBondsIconComponent__setServantData(
          v122,
          userSvtCol,
          v101,
          IconLimitCount,
          v108,
          this->fields.baseFriendshipExp,
          Type == 0,
          afterLimitCount,
          0LL);
        BattleResultBondsIconComponent__SetBuddyPointInfo(v122, v120, battleResult->fields.eventId, 0LL);
        if ( !Entity )
          goto LABEL_148;
        v51 = v142;
        v53 = v104;
        if ( ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Entity, 0LL)
          && !UserServantEntity__IsAddFriendShipHeroine(v101, 0LL) )
        {
          updateFlg = this->fields.updateFlg;
          v128 = updateFlg | BattleResultBondsIconComponent__setNextServantData(v122, userSvtCol, 0LL);
          v52 = this;
          this->fields.updateFlg = v128;
          BattleResultBondsIconComponent__SetIsNoFriendship(v122, 0LL);
          v98 = v148;
          svts = v143;
        }
        else
        {
          Instance = (int64_t)MasterData_object;
          v98 = v148;
          svts = v143;
          if ( !MasterData_object )
            goto LABEL_148;
          EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                               MasterData_object,
                               v122->fields.userId,
                               v122->fields.svtId,
                               0LL);
          v125 = this->fields.updateFlg;
          v126 = v125 | BattleResultBondsIconComponent__setNextServantData(v122, EntityDefinitely, 0LL);
          v52 = this;
          this->fields.updateFlg = v126;
        }
        BattleResultBondsIconComponent__ChangeGauge(v122, 0.0, 0LL);
        BattleResultBondsIconComponent__InitBuddyPointInfo(v122, 0LL);
        if ( v52->fields.isMultiDeck )
        {
          Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v122, 0LL);
          if ( !Instance )
            goto LABEL_148;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        }
      }
      ++v98;
LABEL_135:
      max_length = svts->max_length;
      if ( (int)++v97 >= max_length )
        goto LABEL_138;
    }
  }
  v98 = 0;
LABEL_138:
  if ( !v52->fields.isMultiDeck )
  {
    BattleResultBondsComponent__NormalBondsInit(v52, v98, cnt, Type == 0, battleResult, isHideBuddyPointResult, v58);
    return;
  }
  if ( !Object_object )
    goto LABEL_148;
  BattleResultBondsDeckPerWaveComponent__SetWaveCount(Object_object, currentWave, maxWave, 0LL);
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object_object, 0LL);
  if ( !Instance )
    goto LABEL_148;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  BattleResultBondsDeckPerWaveComponent__RepositionIcons(Object_object, 0LL);
  Instance = (int64_t)v52->fields.multiBondsRoot;
  if ( !Instance
    || ((*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
          Instance,
          *(_QWORD *)(*(_QWORD *)Instance + 448LL)),
        (Instance = (int64_t)v52->fields.bondsList) == 0)
    || (v132 = *(_QWORD *)(Instance + 16),
        v133 = Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__,
        ++*(_DWORD *)(Instance + 28),
        !v132) )
  {
LABEL_148:
    sub_1B86614(Instance, userSvtId);
  }
  v134 = *(int *)(Instance + 24);
  if ( (unsigned int)v134 >= *(_DWORD *)(v132 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)Object_object,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
  }
  else
  {
    v135 = v132 + 8 * v134;
    *(_DWORD *)(Instance + 24) = v134 + 1;
    *(_QWORD *)(v135 + 32) = Object_object;
    sub_1B8635C((CGThumbnailListItem_o *)(v135 + 32), (int32_t)Object_object, v130, v131);
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
        sub_1B8661C(BondsIconArray, v4);
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
    sub_1B86614(BondsIconArray, v4);
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

  if ( (byte_4A519F5 & 1) == 0 )
  {
    sub_1B863B8(&ImageLimitCount_TypeInfo, battleData);
    this = (BattleResultBondsComponent_o *)sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_4A519F5 = 1;
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
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v27, 0LL);
  this = (BattleResultBondsComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                           userSvtData->fields.limitCount,
                                           0LL);
  if ( !svtLimitImageMaster )
LABEL_26:
    sub_1B86614(this, battleData);
  if ( ServantLimitImageMaster__IsServantLimitCountSeal(svtLimitImageMaster, v16, (int32_t)this, 0LL) )
  {
    v18 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v28.fields.currentCryptoKey = v18;
    *(_QWORD *)&v28.fields.fakeValue = v17;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v28, 0LL);
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
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v29, 0LL);
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
        sub_1B8661C(BondsIconArray, v5);
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
    sub_1B86614(BondsIconArray, v5);
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
    sub_1B8661C(this, method);
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
    sub_1B86614(this, method);
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

  if ( (byte_4A519EA & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, text);
    sub_1B863B8(&BattleResultBondsComponent_TypeInfo, v13);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___, v14);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__Add__, v16);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v17);
    sub_1B863B8(&StringLiteral_17057/*"bit_reward_shine02"*/, v18);
    byte_4A519EA = 1;
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
                                 (const MethodInfo_2FC1054 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
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
          (const MethodInfo_2FC1054 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
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
      (System_String_o *)StringLiteral_17057/*"bit_reward_shine02"*/,
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
    sub_1B86614(Object, v20);
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
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = v35 + 8 * klass_low;
    LODWORD(Object[1].klass) = klass_low + 1;
    *(_QWORD *)(v38 + 32) = v21;
    sub_1B8635C((CGThumbnailListItem_o *)(v38 + 32), (int32_t)v21, v26, v27);
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

  if ( (byte_4A519E8 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__Clear__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B863B8(&SimpleAnimation_State_TypeInfo, v10);
    sub_1B863B8(&BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo, v11);
    sub_1B863B8(&Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__, v12);
    sub_1B863B8(&BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo, v13);
    sub_1B863B8(&StringLiteral_17041/*"bit_result_levelup01"*/, v14);
    sub_1B863B8(&StringLiteral_3495/*"CLOSE"*/, v15);
    sub_1B863B8(&StringLiteral_5419/*"END_PROC"*/, v16);
    sub_1B863B8(&StringLiteral_3498/*"CLOSE_BOND_UP_ROOT"*/, v17);
    byte_4A519E8 = 1;
  }
  memset(&v67, 0, sizeof(v67));
  v18 = sub_1B86604(BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo);
  BattleResultBondsComponent___c__DisplayClass61_0___ctor(
    (BattleResultBondsComponent___c__DisplayClass61_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_10;
  *(_QWORD *)(v18 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v18 + 16), (int32_t)this, v21, v22);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v23);
  *(_QWORD *)(v18 + 24) = BondsIconArray;
  sub_1B8635C((CGThumbnailListItem_o *)(v18 + 24), (int32_t)BondsIconArray, v25, v26);
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
          v30 = &StringLiteral_3498/*"CLOSE_BOND_UP_ROOT"*/;
        else
          v30 = &StringLiteral_5419/*"END_PROC"*/;
      }
      else
      {
        if ( !myFsm )
          goto LABEL_10;
        v30 = &StringLiteral_3495/*"CLOSE"*/;
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
  v31 = sub_1B86604(BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo);
  BattleResultBondsComponent___c__DisplayClass61_1___ctor(
    (BattleResultBondsComponent___c__DisplayClass61_1_o *)v31,
    0LL);
  if ( !v31 )
    goto LABEL_10;
  *(_QWORD *)(v31 + 24) = v18;
  v34 = (__int64 *)(v31 + 24);
  sub_1B8635C((CGThumbnailListItem_o *)(v31 + 24), v18, v32, v33);
  myFsm = (PlayMakerFSM_o *)this->fields.conflist;
  if ( !myFsm )
    goto LABEL_10;
  if ( SLODWORD(myFsm->fields.m_CancellationTokenSource) < 1 )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v66,
    (System_Collections_Generic_List_object__o *)myFsm,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v67 = v66;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v67,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v67.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69356292((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v67,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
                                  (System_String_o *)StringLiteral_17041/*"bit_result_levelup01"*/,
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
          v44 = sub_1BD6B4C(myFsm, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(PlayMakerFSM_o *, _QWORD, float))v44)(v41, *(_QWORD *)(v44 + 8), 0.0);
        myFsm = (PlayMakerFSM_o *)this->fields.levelUpSimpleAnim;
        if ( myFsm )
        {
          myFsm = (PlayMakerFSM_o *)SimpleAnimation__Play_64595412(
                                      (SimpleAnimation_o *)myFsm,
                                      (System_String_o *)StringLiteral_17041/*"bit_result_levelup01"*/,
                                      0LL);
          goto LABEL_51;
        }
      }
    }
LABEL_10:
    sub_1B86614(myFsm, v20);
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
                                (System_String_o *)StringLiteral_17041/*"bit_result_levelup01"*/,
                                0LL);
    if ( !myFsm )
      goto LABEL_10;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)myFsm, 0.0, 0LL);
    myFsm = (PlayMakerFSM_o *)this->fields.levelUpAnim;
    if ( !myFsm )
      goto LABEL_10;
    myFsm = (PlayMakerFSM_o *)UnityEngine_Animation__Play_69099832(
                                (UnityEngine_Animation_o *)myFsm,
                                (System_String_o *)StringLiteral_17041/*"bit_result_levelup01"*/,
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
    sub_1B8661C(myFsm, v20);
  v51 = *(struct BattleResultBondsIconComponent_o **)(v49 + 8 * v50 + 32);
  this->fields.openCollect = v51;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.openCollect, (int32_t)v51, v46, v47);
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
    sub_1B8635C((CGThumbnailListItem_o *)(v31 + 16), (int32_t)gameObject, v55, v56);
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
    sub_1B8635C((CGThumbnailListItem_o *)(v31 + 16), (int32_t)v57, v58, v59);
  }
  openCollect = this->fields.openCollect;
  if ( !openCollect )
    goto LABEL_10;
  svtId = openCollect->fields.svtId;
  svtLimit = openCollect->fields.svtLimit;
  bondsFigure = this->fields.bondsFigure;
  v64 = *v54;
  v65 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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

  if ( (byte_4A519EE & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_BattleResultBondsComponent__checkShow_b__67_0__, v3);
    sub_1B863B8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v4);
    byte_4A519EE = 1;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
        v8 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleResultBondsComponent__checkShow_b__67_0__, 0LL);
        if ( Instance )
        {
          SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v8, 0LL);
          return;
        }
        goto LABEL_21;
      }
      parentComp = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
    sub_1B86614(parentComp, method);
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

  if ( (byte_4A519EF & 1) == 0 )
  {
    sub_1B863B8(&Method_BattleResultBondsComponent_closeBondUp__, method);
    sub_1B863B8(&Method_BattleResultBondsComponent_endCloseBondUp__, v3);
    sub_1B863B8(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_UIUnityRenderer__Clear__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__, v7);
    byte_4A519EF = 1;
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
                       (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
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
    v13 = (_QWORD *)sub_1B863D0(Method_BattleResultBondsComponent_closeBondUp__);
  v14 = (System_Reflection_MethodBase_o *)sub_1B8639C(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
  effectUIList = this->fields.parentComp;
  if ( !effectUIList
    || (BattleResultComponent__setTouch((BattleResultComponent_o *)effectUIList, 0, 0LL),
        (effectUIList = this->fields.bondsFigure) == 0LL)
    || (BattleResultBondsFigureComponent__DestroyFigure((BattleResultBondsFigureComponent_o *)effectUIList, 0LL),
        confwindow = this->fields.confwindow,
        v16 = (BattleWindowComponent_EndCall_o *)sub_1B86604(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v16,
          (Il2CppObject *)this,
          Method_BattleResultBondsComponent_endCloseBondUp__,
          0LL),
        !confwindow) )
  {
LABEL_18:
    sub_1B86614(effectUIList, v8);
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

  if ( (byte_4A519F2 & 1) == 0 )
  {
    sub_1B863B8(&OptionManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_5419/*"END_PROC"*/, v5);
    byte_4A519F2 = 1;
  }
  this->fields.resultAssetData = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resultAssetData, 0, v2, v3);
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
          sub_1B8661C(v13, v8);
      }
LABEL_16:
      sub_1B86614(BondsIconArray, v8);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_5419/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultBondsComponent__endCloseBondUp(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A519F0 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_5419/*"END_PROC"*/, method);
    byte_4A519F0 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B86614(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5419/*"END_PROC"*/, 0LL);
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

  if ( (byte_4A519EC & 1) == 0 )
  {
    sub_1B863B8(&Method_BattleResultBondsComponent_endMoveFigure__, method);
    sub_1B863B8(&Method_BattleResultBondsComponent_openedBondUp__, v3);
    sub_1B863B8(&BattleResultBondsComponent_TypeInfo, v4);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_1B863B8(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_1B863B8(&DataManager_TypeInfo, v10);
    sub_1B863B8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v11);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B863B8(&BattleWindowComponent_EndCall_TypeInfo, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v16);
    sub_1B863B8(&int_TypeInfo, v17);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__, v18);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v19);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__, v20);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__, v21);
    sub_1B863B8(&System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo, v22);
    sub_1B863B8(&LocalizationManager_TypeInfo, v23);
    sub_1B863B8(&NetworkManager_TypeInfo, v24);
    sub_1B863B8(&ServantCommentManager_TypeInfo, v25);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1B863B8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v27);
    sub_1B863B8(&System_Text_StringBuilder_TypeInfo, v28);
    sub_1B863B8(&StringLiteral_10932/*"RESULT_BOUNDS_OPENQUEST"*/, v29);
    sub_1B863B8(&StringLiteral_10935/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/, v30);
    sub_1B863B8(&StringLiteral_10934/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, v31);
    sub_1B863B8(&StringLiteral_10930/*"RESULT_BOUNDS_GET_COIN_NAME"*/, v32);
    sub_1B863B8(&StringLiteral_10928/*"RESULT_BOUNDS_GETVOICE"*/, v33);
    sub_1B863B8(&StringLiteral_24852/*"{0} {1}"*/, v34);
    sub_1B863B8(&StringLiteral_1/*""*/, v35);
    sub_1B863B8(&StringLiteral_10929/*"RESULT_BOUNDS_GET_COIN_COUNT"*/, v36);
    byte_4A519EC = 1;
  }
  memset(&v118, 0, sizeof(v118));
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  v37 = (System_Text_StringBuilder_o *)sub_1B86604(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v37, 0LL);
  v38 = Method_BattleResultBondsComponent_endMoveFigure__;
  if ( (*((_BYTE *)Method_BattleResultBondsComponent_endMoveFigure__ + 83) & 2) != 0 )
    v38 = (_QWORD *)sub_1B863D0(Method_BattleResultBondsComponent_endMoveFigure__);
  v39 = (System_Reflection_MethodBase_o *)sub_1B8639C(v38, v38[4]);
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
  lvComp = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    v45 = 0;
    v118 = v115;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v118,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
    {
      current = v118.fields._current;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v47 = LocalizationManager__Get((System_String_o *)StringLiteral_10932/*"RESULT_BOUNDS_OPENQUEST"*/, 0LL);
      if ( !current )
        sub_1B86614(v47, v48);
      v49 = v47;
      QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
      v51 = System_String__Format(v49, QuestName, 0LL);
      BattleResultBondsComponent__addConfObject(this, v51, (float)v45 * 22.0, -1, 0, 0, v52);
      v45 += 3;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v118,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  }
  else
  {
    v45 = 0;
  }
  v53 = this->fields.openCollect;
  if ( !v53 )
    goto LABEL_117;
  svtLimit = v53->fields.svtLimit;
  lvComp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lvComp )
    goto LABEL_117;
  lvComp = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)lvComp,
                      (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
    v56 = &StringLiteral_10935/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/;
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
  lvComp = ServantCommentManager__IsOpenByServantFriendShip_41534832(
             svtId,
             friendshipRank,
             ServantLimitCountSealAfter,
             0LL);
  if ( (lvComp & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v56 = &StringLiteral_10934/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/;
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
    v62 = LocalizationManager__Get((System_String_o *)StringLiteral_10928/*"RESULT_BOUNDS_GETVOICE"*/, 0LL);
    BattleResultBondsComponent__addConfObject(this, v62, (float)v45 * 22.0, -1, 0, 0, v63);
    v45 += 2;
  }
  if ( this->fields.rewardInfos )
  {
    v64 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v64,
      (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ItemMaster___);
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
          sub_1B8661C(lvComp, v41);
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
                    (const MethodInfo_3214280 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( v73 && LODWORD(v73[3].klass) == 29 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v74 = LocalizationManager__Get((System_String_o *)StringLiteral_10929/*"RESULT_BOUNDS_GET_COIN_COUNT"*/, 0LL);
              LODWORD(v115.fields._list) = v72->fields.num;
              v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v115, v75, v76, v77);
              countText = System_String__Format(v74, v78, 0LL);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !lvComp )
                goto LABEL_117;
              v79 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)lvComp,
                      key,
                      (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( v79 )
              {
                v112 = (ServantEntity_o *)v79;
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                if ( !byte_4A48C25 )
                {
                  sub_1B863B8(&NetworkManager_TypeInfo, v41);
                  byte_4A48C25 = 1;
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
                  lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
                v86 = LocalizationManager__Get((System_String_o *)StringLiteral_10930/*"RESULT_BOUNDS_GET_COIN_NAME"*/, 0LL);
                nameText = System_String__Format_61686468(v86, (Il2CppObject *)nameText, Name, 0LL);
              }
              v84 = 1;
            }
            else
            {
              v84 = 0;
            }
            v87 = System_String__Format_61686468(
                    (System_String_o *)StringLiteral_24852/*"{0} {1}"*/,
                    (Il2CppObject *)nameText,
                    (Il2CppObject *)countText,
                    0LL);
            IconImageId = GiftEntity__getIconImageId(v72, 0LL);
            BattleResultBondsComponent__addConfObject(this, v87, (float)v45 * 22.0, IconImageId, v84, 0, v89);
          }
          else
          {
            v82 = System_String__Format_61686468(
                    (System_String_o *)StringLiteral_24852/*"{0} {1}"*/,
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
                *(const MethodInfo_35FC958 **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
            }
            else
            {
              v96 = &items->obj.klass + size;
              v64->fields._size = size + 1;
              v96[4] = (Il2CppClass *)v71;
              sub_1B8635C((CGThumbnailListItem_o *)(v96 + 4), (int32_t)v71, v91, v92);
            }
          }
        }
        max_length = rewardInfos->max_length;
        ++v68;
      }
      while ( v68 < max_length );
      if ( !v64 )
LABEL_117:
        sub_1B86614(lvComp, v41);
    }
    v97 = System_Collections_Generic_List_object___ToArray(
            v64,
            (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
    this->fields.showList = (struct BattleFriendshipRewardInfo_array *)v97;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.showList, (int32_t)v97, v98, v99);
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
  v111 = (BattleWindowComponent_EndCall_o *)sub_1B86604(BattleWindowComponent_EndCall_TypeInfo);
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
        sub_1B8661C(this, collects);
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
    sub_1B86614(this, collects);
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
    sub_1B86614(this, deck);
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0LL;
  v6 = 0;
  while ( 1 )
  {
    if ( max_length == v6 )
      sub_1B8661C(this, deck);
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
    sub_1B86614(this, method);
  return (signed int)oldCollections->max_length > 1;
}


void __fastcall BattleResultBondsComponent__openedBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0

  if ( (byte_4A519ED & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_5414/*"END_OPEN"*/, method);
    byte_4A519ED = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__ResetPlayScreenTouch(parentComp, 0LL), (parentComp = this->fields.parentComp) == 0LL)
    || (BattleResultComponent__setTouch(parentComp, 1, 0LL),
        parentComp = (BattleResultComponent_o *)this->fields.myFsm,
        ++this->fields.colIndex,
        !parentComp) )
  {
    sub_1B86614(parentComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)parentComp, (System_String_o *)StringLiteral_5414/*"END_OPEN"*/, 0LL);
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

  if ( (byte_4A519F9 & 1) == 0 )
  {
    sub_1B863B8(&BattleResultBondsComponent___c_TypeInfo, v1);
    byte_4A519F9 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(BattleResultBondsComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleResultBondsComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultBondsComponent___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)BattleResultBondsComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B86614(this, 0LL);
  return col->fields.isUse;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_0(
        BattleResultBondsComponent___c_o *this,
        QuestRewardInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.type == 7 && x->fields.isNew;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_1(
        BattleResultBondsComponent___c_o *this,
        GetSvts_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
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
    sub_1B86614(this, 0LL);
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
  if ( (byte_4A519FA & 1) == 0 )
  {
    sub_1B863B8(&bool_TypeInfo, method);
    sub_1B863B8(&object___TypeInfo, v3);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B863B8(&float_TypeInfo, v5);
    sub_1B863B8(&StringLiteral_24581/*"x"*/, v6);
    sub_1B863B8(&StringLiteral_9477/*"OPEN"*/, v7);
    sub_1B863B8(&StringLiteral_23770/*"time"*/, v8);
    sub_1B863B8(&StringLiteral_22111/*"oncompletetarget"*/, v9);
    sub_1B863B8(&StringLiteral_18784/*"endMoveFigure"*/, v10);
    sub_1B863B8(&StringLiteral_20652/*"islocal"*/, v11);
    sub_1B863B8(&StringLiteral_22109/*"oncomplete"*/, v12);
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B863B8(&iTween_TypeInfo, v13);
    byte_4A519FA = 1;
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
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B86460(object___TypeInfo, 10LL);
  if ( !this )
    goto LABEL_69;
  v22 = this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_24581/*"x"*/;
  if ( StringLiteral_24581/*"x"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B864F4(
                                                                   StringLiteral_24581/*"x"*/,
                                                                   v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_24581/*"x"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( !LODWORD(v22->fields.CS___8__locals1) )
    goto LABEL_70;
  v22[1].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)method;
  sub_1B8635C((CGThumbnailListItem_o *)&v22[1], (int32_t)method, v20, v21);
  v64 = -1007026176;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v64, v23, v24, v25);
  v28 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B864F4(this, v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v22->fields.CS___8__locals1) <= 1 )
    goto LABEL_70;
  v22[1].monitor = v28;
  sub_1B8635C((CGThumbnailListItem_o *)&v22[1].monitor, (int32_t)v28, v26, v27);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_23770/*"time"*/;
  if ( StringLiteral_23770/*"time"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B864F4(
                                                                   StringLiteral_23770/*"time"*/,
                                                                   v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_23770/*"time"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v22->fields.CS___8__locals1) <= 2 )
    goto LABEL_70;
  v22[1].fields.parent = (struct UnityEngine_GameObject_o *)method;
  sub_1B8635C((CGThumbnailListItem_o *)&v22[1].fields, (int32_t)method, v29, v30);
  v63 = 1061997773;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v63, v31, v32, v33);
  v36 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B864F4(this, v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v22->fields.CS___8__locals1) <= 3 )
    goto LABEL_70;
  v22[1].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v36;
  sub_1B8635C((CGThumbnailListItem_o *)&v22[1].fields.CS___8__locals1, (int32_t)v36, v34, v35);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_20652/*"islocal"*/;
  if ( StringLiteral_20652/*"islocal"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B864F4(
                                                                   StringLiteral_20652/*"islocal"*/,
                                                                   v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_20652/*"islocal"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v22->fields.CS___8__locals1) <= 4 )
    goto LABEL_70;
  v22[2].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)method;
  sub_1B8635C((CGThumbnailListItem_o *)&v22[2], (int32_t)method, v37, v38);
  v62[0] = 1;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(bool_TypeInfo, v62, v39, v40, v41);
  v44 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B864F4(this, v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v22->fields.CS___8__locals1) <= 5 )
    goto LABEL_70;
  v22[2].monitor = v44;
  sub_1B8635C((CGThumbnailListItem_o *)&v22[2].monitor, (int32_t)v44, v42, v43);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22111/*"oncompletetarget"*/;
  if ( StringLiteral_22111/*"oncompletetarget"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B864F4(
                                                                   StringLiteral_22111/*"oncompletetarget"*/,
                                                                   v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_22111/*"oncompletetarget"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v22->fields.CS___8__locals1) <= 6 )
    goto LABEL_70;
  v22[2].fields.parent = (struct UnityEngine_GameObject_o *)method;
  sub_1B8635C((CGThumbnailListItem_o *)&v22[2].fields, (int32_t)method, v45, v46);
  v47 = v2->fields.CS___8__locals1;
  if ( !v47 || (this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v47->fields.__4__this) == 0LL )
LABEL_69:
    sub_1B86614(this, method);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
  v50 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B864F4(this, v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v22->fields.CS___8__locals1) <= 7 )
    goto LABEL_70;
  v22[2].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v50;
  sub_1B8635C((CGThumbnailListItem_o *)&v22[2].fields.CS___8__locals1, (int32_t)v50, v48, v49);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22109/*"oncomplete"*/;
  if ( StringLiteral_22109/*"oncomplete"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B864F4(
                                                                   StringLiteral_22109/*"oncomplete"*/,
                                                                   v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_22109/*"oncomplete"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v22->fields.CS___8__locals1) <= 8 )
    goto LABEL_70;
  v22[3].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)method;
  sub_1B8635C((CGThumbnailListItem_o *)&v22[3], (int32_t)method, v51, v52);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_18784/*"endMoveFigure"*/;
  if ( !StringLiteral_18784/*"endMoveFigure"*/ )
  {
    method = 0LL;
    goto LABEL_57;
  }
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1B864F4(
                                                                 StringLiteral_18784/*"endMoveFigure"*/,
                                                                 v22->klass->_1.element_class);
  if ( !this )
  {
LABEL_71:
    v61 = sub_1B86638(this);
    sub_1B864E0(v61, 0LL);
  }
  method = (const MethodInfo *)StringLiteral_18784/*"endMoveFigure"*/;
LABEL_57:
  if ( LODWORD(v22->fields.CS___8__locals1) <= 9 )
    goto LABEL_70;
  v22[3].monitor = (void *)method;
  sub_1B8635C((CGThumbnailListItem_o *)&v22[3].monitor, (int32_t)method, v53, v54);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v55 = iTween__Hash((System_Object_array *)v22, 0LL);
  iTween__MoveFrom_61284212(parent, v55, 0LL);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9477/*"OPEN"*/, 0LL);
  v58 = v2->fields.CS___8__locals1;
  if ( !v58 )
    goto LABEL_69;
  bondsIcons = v58->fields.bondsIcons;
  if ( !bondsIcons )
    goto LABEL_69;
  i = v58->fields.i;
  if ( (unsigned int)i >= bondsIcons->max_length )
LABEL_70:
    sub_1B8661C(this, method);
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

  if ( (byte_4A519FB & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A519FB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v4);
  CommonUI__CreateServantCoinConfirmDialog((CommonUI_o *)Instance, 1, this->fields.coin, 0LL, 0LL);
}