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

  if ( (byte_4B1FB82 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleResultBondsComponent_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_7032/*"GetNewSvt"*/, v4);
    sub_1BCAFF8(&StringLiteral_7019/*"GetExistSvt"*/, v5);
    byte_4B1FB82 = 1;
  }
  static_fields = BattleResultBondsComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SVT_GAP_5 = 0x4316000043320000LL;
  *(_QWORD *)&static_fields->CONF_LABEL_MAX_WIDTH = 0x12000001D0LL;
  v7 = StringLiteral_7032/*"GetNewSvt"*/;
  static_fields->GET_NEW_SVT_KEY = (struct System_String_o *)StringLiteral_7032/*"GetNewSvt"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->GET_NEW_SVT_KEY, v7, v2, v3);
  v8 = StringLiteral_7019/*"GetExistSvt"*/;
  v9 = BattleResultBondsComponent_TypeInfo->static_fields;
  v9->GET_EXIST_SVT_KEY = (struct System_String_o *)StringLiteral_7019/*"GetExistSvt"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v9->GET_EXIST_SVT_KEY, v8, v10, v11);
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
  const MethodInfo *v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4B1FB81 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleResultBondsFigureComponent_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo, v5);
    sub_1BCAFF8(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    byte_4B1FB81 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.conflist = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.conflist, (int32_t)v7, v8, v9);
  this->fields.buddyPointInfoWindowHeight = 366;
  this->fields.tempSaveTimeScale = 1.0;
  v10 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
  this->fields.bondsList = (struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *)v10;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.bondsList, (int32_t)v10, v11, v12);
  v13 = (BattleResultBondsFigureComponent_o *)sub_1BCB244(BattleResultBondsFigureComponent_TypeInfo);
  BattleResultBondsFigureComponent___ctor(v13, v14);
  this->fields.bondsFigure = v13;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.bondsFigure, (int32_t)v13, v15, v16);
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
  __int64 v23; // x2
  struct GetSvts_array *getJoinSvtList; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x21
  __int64 v26; // x26
  int max_length; // w9
  GetSvts_o *v28; // x8
  UserServantEntity_o *v29; // x24
  EventServantEntity_o *EventServant; // x22
  BattleResultBondsComponent___c_c *v31; // x0
  System_Action_o *_9__62_0; // x23
  Il2CppObject *v33; // x25
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  Il2CppObject *Master_object; // x25
  __int64 v38; // x24
  __int64 v39; // x23
  __int64 v40; // x25
  Il2CppObject *v41; // x8
  const MethodInfo *v42; // x3
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_String_o *v45; // x24
  Il2CppObject *v46; // x25
  __int64 v47; // x0
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4B1FB73 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, collect);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMaster_SvtCoinMaster___, v6);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_1BCAFF8(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v9);
    sub_1BCAFF8(&GetSvtCoin___TypeInfo, v10);
    sub_1BCAFF8(&GetSvtCoin_TypeInfo, v11);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v12);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1BCAFF8(&Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__, v15);
    sub_1BCAFF8(&Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__, v16);
    sub_1BCAFF8(&BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo, v17);
    sub_1BCAFF8(&BattleResultBondsComponent___c_TypeInfo, v18);
    sub_1BCAFF8(&StringLiteral_12335/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, v19);
    sub_1BCAFF8(&StringLiteral_18453/*"dialogIgnoreTime"*/, v20);
    byte_4B1FB73 = 1;
  }
  entity = 0LL;
  if ( this->fields.getJoinSvtList && !this->fields.isWarboard )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___),
          (getJoinSvtList = this->fields.getJoinSvtList) == 0LL) )
    {
LABEL_45:
      sub_1BCB254(Instance, v22);
    }
    v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v26 = 0LL;
    while ( 1 )
    {
      max_length = getJoinSvtList->max_length;
      if ( (int)v26 >= max_length )
        break;
      if ( (unsigned int)v26 >= max_length )
        goto LABEL_46;
      v28 = getJoinSvtList->m_Items[v26];
      if ( !v28 )
        goto LABEL_45;
      if ( v28->fields.isNew )
      {
        UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_18453/*"dialogIgnoreTime"*/, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      else
      {
        if ( !v25 )
          goto LABEL_45;
        Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                      v25,
                                      v28->fields.userSvtId,
                                      (const MethodInfo_32CA35C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( Instance )
        {
          v29 = (UserServantEntity_o *)Instance;
          Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
          if ( !collect )
            goto LABEL_45;
          if ( (_DWORD)Instance == collect->fields.svtId )
          {
            EventServant = UserServantEntity__getEventServant(v29, 0LL);
            if ( EventServant
              || (Instance = (DataManager_o *)UserServantEntity__getEventServantIgnoreEnd(v29, 0LL),
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
                _9__62_0 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
                System_Action___ctor(
                  _9__62_0,
                  v33,
                  Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__,
                  0LL);
                static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
                static_fields->__9__62_0 = _9__62_0;
                sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__62_0, (int32_t)_9__62_0, v35, v36);
              }
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SvtCoinMaster___);
              Instance = (DataManager_o *)UserServantEntity__getSvtId(v29, 0LL);
              if ( !Master_object )
                goto LABEL_45;
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            &entity,
                                            (int32_t)Instance,
                                            (const MethodInfo_32C7E4C *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_45;
                if ( SHIDWORD(entity[1].klass) >= 1 )
                {
                  v38 = sub_1BCB244(BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v38, 0LL);
                  v39 = sub_1BCB0A0(GetSvtCoin___TypeInfo, 1LL);
                  v40 = sub_1BCB244(GetSvtCoin_TypeInfo);
                  GetSvtCoin___ctor((GetSvtCoin_o *)v40, 0LL);
                  v41 = entity;
                  if ( !entity )
                    goto LABEL_45;
                  if ( !v40 )
                    goto LABEL_45;
                  *(_DWORD *)(v40 + 16) = entity[1].klass;
                  *(int32x2_t *)(v40 + 20) = vrev64_s32(*(int32x2_t *)((char *)&v41[1].klass + 4));
                  if ( !v39 )
                    goto LABEL_45;
                  Instance = (DataManager_o *)sub_1BCB134(v40, *(_QWORD *)(*(_QWORD *)v39 + 64LL));
                  if ( !Instance )
                  {
                    v47 = sub_1BCB278(0LL);
                    sub_1BCB120(v47, 0LL);
                  }
                  if ( !*(_DWORD *)(v39 + 24) )
LABEL_46:
                    sub_1BCB25C(Instance, v22, v23);
                  *(_QWORD *)(v39 + 32) = v40;
                  sub_1BCAF9C((CGThumbnailListItem_o *)(v39 + 32), v40, v23, v42);
                  if ( !v38 )
                    goto LABEL_45;
                  *(_QWORD *)(v38 + 16) = v39;
                  sub_1BCAF9C((CGThumbnailListItem_o *)(v38 + 16), v39, v43, v44);
                  _9__62_0 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__62_0,
                    (Il2CppObject *)v38,
                    Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__,
                    0LL);
                }
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v45 = LocalizationManager__Get((System_String_o *)StringLiteral_12335/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0LL);
              v46 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                0,
                0LL);
            }
          }
        }
      }
      getJoinSvtList = this->fields.getJoinSvtList;
      ++v26;
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

  if ( (byte_4B1FB7B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleResultBondsComponent_endClose__, method);
    sub_1BCAFF8(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4B1FB7B = 1;
  }
  if ( this->fields.isMultiDeck )
    multiDeckWindow = this->fields.multiDeckWindow;
  else
    multiDeckWindow = this->fields.window;
  v5 = (BattleWindowComponent_EndCall_o *)sub_1BCB244(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v5, (Il2CppObject *)this, Method_BattleResultBondsComponent_endClose__, 0LL);
  if ( !multiDeckWindow )
    sub_1BCB254(v6, v7);
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

  if ( (byte_4B1FB80 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_5411/*"END_PROC"*/, method);
    byte_4B1FB80 = 1;
  }
  upRoot = this->fields.upRoot;
  if ( !upRoot
    || (UnityEngine_GameObject__SetActive(upRoot, 0, 0LL),
        (upRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BCB254(upRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)upRoot, (System_String_o *)StringLiteral_5411/*"END_PROC"*/, 0LL);
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
  Il2CppObject *Object_object__50315216; // x21
  BattleResultBondsComponent_o *v14; // x21
  BattleResultBondsComponent_o *v15; // x22
  BattleResultBondsComponent_o *v16; // x22
  BattleResultBondsComponent_o *v17; // x22
  __int64 v18; // x2
  int m_CancellationTokenSource; // w8
  BattleResultBondsComponent_o *v20; // x21
  unsigned int v21; // w22

  v8 = this;
  if ( (byte_4B1FB75 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AssetData_GetObject_GameObject____76915336, data);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__, v10);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    this = (BattleResultBondsComponent_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v12);
    byte_4B1FB75 = 1;
  }
  if ( !data )
    goto LABEL_23;
  Object_object__50315216 = AssetData__GetObject_object__50315216(
                              data,
                              effectName,
                              (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultBondsComponent_o *)UnityEngine_Object__Instantiate_object_(
                                           Object_object__50315216,
                                           (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( !byte_4B16191 )
  {
    this = (BattleResultBondsComponent_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, data);
    byte_4B16191 = 1;
  }
  if ( !v16 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v16,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v14, 0LL);
  v17 = this;
  if ( !byte_4B16196 )
  {
    this = (BattleResultBondsComponent_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, data);
    byte_4B16196 = 1;
  }
  if ( !v17 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v17,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50787124(
                                           (UnityEngine_GameObject_o *)v14,
                                           (const MethodInfo_306F334 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !this )
    goto LABEL_23;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v20 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= m_CancellationTokenSource )
        sub_1BCB25C(this, data, v18);
      this = (BattleResultBondsComponent_o *)*((_QWORD *)&v20->fields.parentComp + (int)v21);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0LL);
      m_CancellationTokenSource = (int)v20->fields.m_CancellationTokenSource;
      if ( (int)++v21 >= m_CancellationTokenSource )
        goto LABEL_21;
    }
LABEL_23:
    sub_1BCB254(this, data);
  }
LABEL_21:
  this = (BattleResultBondsComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v20,
    (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void __fastcall BattleResultBondsComponent__DeleteGetJoinSvtData(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleResultBondsComponent_c *v2; // x0

  if ( (byte_4B1FB6A & 1) == 0 )
  {
    sub_1BCAFF8(&BattleResultBondsComponent_TypeInfo, v1);
    byte_4B1FB6A = 1;
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
  const MethodInfo *v7; // x1
  __int64 v8; // x2
  int v9; // w8
  _DWORD *v10; // x20
  unsigned int v11; // w21
  SePlayer_o *MeterSePlayer; // x0

  if ( (byte_4B1FB71 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_9193/*"NEXT"*/, method);
    sub_1BCAFF8(&iTween_TypeInfo, v3);
    byte_4B1FB71 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_62198328(gameObject, 0LL);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v5);
  if ( !BondsIconArray )
    goto LABEL_16;
  v9 = BondsIconArray[6];
  v10 = BondsIconArray;
  if ( v9 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= v9 )
        sub_1BCB25C(BondsIconArray, v7, v8);
      BondsIconArray = *(_DWORD **)&v10[2 * v11 + 8];
      if ( !BondsIconArray )
        break;
      BattleResultBondsIconComponent__FinishUpdateValue((BattleResultBondsIconComponent_o *)BondsIconArray, v7);
      v9 = v10[6];
      if ( (int)++v11 >= v9 )
        goto LABEL_11;
    }
LABEL_16:
    sub_1BCB254(BondsIconArray, v7);
  }
LABEL_11:
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  BondsIconArray = this->fields.myFsm;
  this->fields.bondsCountUp = 0;
  if ( !BondsIconArray )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_9193/*"NEXT"*/, 0LL);
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
  const MethodInfo *v14; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  System_Object_array *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1FB7D & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__,
      method);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__,
      v3);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__,
      v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v9);
    byte_4B1FB7D = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( this->fields.isMultiDeck )
  {
    p_bondsIconArray = (CGThumbnailListItem_o *)&this->fields.bondsIconArray;
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.bondsIconArray, 0LL) )
    {
      v11 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v11,
        (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
      bondsList = (System_Collections_Generic_List_object__o *)this->fields.bondsList;
      if ( !bondsList )
        goto LABEL_17;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v20,
        bondsList,
        (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v20,
                (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
      {
        if ( !v20.fields._current )
          sub_1BCB254(0LL, v14);
        BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                          (BattleResultBondsDeckPerWaveComponent_o *)v20.fields._current,
                                                                          v14);
        if ( !v11 )
          sub_1BCB254(BondsIconArray, BondsIconArray);
        System_Collections_Generic_List_object___AddRange(
          v11,
          BondsIconArray,
          (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v20,
        (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
      if ( !v11 )
LABEL_17:
        sub_1BCB254(bondsList, v12);
      v16 = System_Collections_Generic_List_object___ToArray(
              v11,
              (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
      p_bondsIconArray->klass = (CGThumbnailListItem_c *)v16;
      sub_1BCAF9C(p_bondsIconArray, (int32_t)v16, v17, v18);
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

  if ( (byte_4B1FB6B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__, method);
    sub_1BCAFF8(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    byte_4B1FB6B = 1;
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
  v6 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v6;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.effectUIList, (int32_t)v6, v7, v8);
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
    sub_1BCB254(window, method);
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
  if ( (byte_4B1FB6C & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, oldCollects);
    byte_4B1FB6C = 1;
  }
  this->fields.oldCollections = oldCollects;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.oldCollections,
    (int32_t)oldCollects,
    (int32_t)inRewardInfos,
    (const MethodInfo *)resultAsset);
  this->fields.rewardInfos = inRewardInfos;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.rewardInfos, (int32_t)inRewardInfos, v15, v16);
  this->fields.resultAssetData = resultAsset;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.resultAssetData, (int32_t)resultAsset, v17, v18);
  this->fields.getJoinSvtList = getJoinSvts;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.getJoinSvtList, (int32_t)getJoinSvts, v19, v20);
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
  const MethodInfo *v30; // [xsp+0h] [xbp-70h]
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  v11 = targetIndex;
  v12 = this;
  if ( (byte_4B1FB7E & 1) == 0 )
  {
    sub_1BCAFF8(&BattleResultBondsComponent_TypeInfo, *(_QWORD *)&targetIndex);
    this = (BattleResultBondsComponent_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v13);
    byte_4B1FB7E = 1;
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
        v30);
      v16 = v12->fields.collects;
      if ( !v16 )
        goto LABEL_49;
      if ( v11 >= v16->max_length )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v16->m_Items[v11];
      if ( !this )
        goto LABEL_49;
      BattleResultBondsIconComponent__SetBuddyPointInfo((BattleResultBondsIconComponent_o *)this, 0LL, 0, v15);
      v17 = v12->fields.collects;
      if ( !v17 )
        goto LABEL_49;
      if ( v11 >= v17->max_length )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v17->m_Items[v11];
      if ( !this )
        goto LABEL_49;
      this = (BattleResultBondsComponent_o *)BattleResultBondsIconComponent__ChangeGauge(
                                               (BattleResultBondsIconComponent_o *)this,
                                               0.0,
                                               *(const MethodInfo **)&targetIndex);
      v18 = v12->fields.collects;
      if ( !v18 )
        goto LABEL_49;
      if ( v11 >= v18->max_length )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v18->m_Items[v11];
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
  v20 = *(float *)&bgFrame->klass;
  if ( !isNoFollower )
  {
    v21 = v12->fields.collects;
    if ( !v21 )
      goto LABEL_49;
    if ( v21->max_length <= cnt )
LABEL_50:
      sub_1BCB25C(this, *(_QWORD *)&targetIndex, *(_QWORD *)&cnt);
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
      v26 = v12->fields.collects;
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
    v29 = (UnityEngine_Object_o *)v12->fields.bgFrame;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
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
      || (v31.fields.x = 0.0,
          v31.fields.y = 13.0,
          v31.fields.z = 0.0,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v31, 0LL),
          (this = (BattleResultBondsComponent_o *)v12->fields.window) == 0LL) )
    {
LABEL_49:
      sub_1BCB254(this, *(_QWORD *)&targetIndex);
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

  if ( (byte_4B1FB6F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Any_BattleResultBondsIconComponent___, method);
    sub_1BCAFF8(&Method_BattleResultBondsComponent_OpenEnd__, v3);
    sub_1BCAFF8(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1BCAFF8(&System_Func_BattleResultBondsIconComponent__bool__TypeInfo, v5);
    sub_1BCAFF8(&Method_BattleResultBondsComponent___c__Open_b__53_0__, v6);
    sub_1BCAFF8(&BattleResultBondsComponent___c_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_5406/*"END_OPEN"*/, v8);
    sub_1BCAFF8(&StringLiteral_12133/*"SKIP"*/, v9);
    byte_4B1FB6F = 1;
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
    _9__53_0 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_BattleResultBondsIconComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__53_0, v14, Method_BattleResultBondsComponent___c__Open_b__53_0__, 0LL);
    static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Func_BattleResultBondsIconComponent__bool__o *)_9__53_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v16, v17);
  }
  if ( BasicHelper__Any_object__50347976(
         v12,
         (System_Func_T__bool__o *)_9__53_0,
         (const MethodInfo_3003FC8 *)Method_BasicHelper_Any_BattleResultBondsIconComponent___) )
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
      v23 = (BattleWindowComponent_EndCall_o *)sub_1BCB244(BattleWindowComponent_EndCall_TypeInfo);
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
          v22 = &StringLiteral_5406/*"END_OPEN"*/;
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    sub_1BCB254(gameObject, v18);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !gameObject )
    goto LABEL_20;
  v22 = &StringLiteral_12133/*"SKIP"*/;
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
  const MethodInfo *v16; // x1
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  System_Object_array *v19; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  const MethodInfo *v23; // x3
  BattleResultBondsIconComponent_array *v24; // x22
  const MethodInfo *v25; // x3
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  const MethodInfo *v29; // x3
  BattleResultBondsIconComponent_array *v30; // x22
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  const MethodInfo *v39; // x3
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
  const MethodInfo *v51; // x3
  __int64 v52; // x0
  int v53; // [xsp+Ch] [xbp-44h] BYREF
  int v54; // [xsp+18h] [xbp-38h] BYREF
  int v55; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4B1FB70 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleResultBondsComponent_OpenEnd__, method);
    sub_1BCAFF8(&object___TypeInfo, v3);
    sub_1BCAFF8(&SeManager_TypeInfo, v4);
    sub_1BCAFF8(&float_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_19518/*"from"*/, v6);
    sub_1BCAFF8(&StringLiteral_23855/*"time"*/, v7);
    sub_1BCAFF8(&StringLiteral_22237/*"onupdate"*/, v8);
    sub_1BCAFF8(&StringLiteral_15078/*"UpdateValue"*/, v9);
    sub_1BCAFF8(&StringLiteral_23894/*"to"*/, v10);
    sub_1BCAFF8(&StringLiteral_22229/*"oncomplete"*/, v11);
    sub_1BCAFF8(&StringLiteral_6682/*"FinishUpdateValue"*/, v12);
    sub_1BCAFF8(&iTween_TypeInfo, v13);
    byte_4B1FB70 = 1;
  }
  if ( !this->fields.bondsCountUp )
    return;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1BCB0A0(object___TypeInfo, 10LL);
  if ( !BondsIconArray )
LABEL_65:
    sub_1BCB254(BondsIconArray, v16);
  v19 = (System_Object_array *)BondsIconArray;
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_19518/*"from"*/;
  if ( StringLiteral_19518/*"from"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1BCB134(
                                                               StringLiteral_19518/*"from"*/,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = (const MethodInfo *)StringLiteral_19518/*"from"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v19->max_length )
    goto LABEL_64;
  v19->m_Items[0] = (Il2CppObject *)v16;
  sub_1BCAF9C((CGThumbnailListItem_o *)v19->m_Items, (int32_t)v16, v17, v18);
  v55 = 0;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v55, v20, v21, v22);
  v24 = BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1BCB134(
                                                               BondsIconArray,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
  }
  if ( v19->max_length <= 1 )
    goto LABEL_64;
  v19->m_Items[1] = &v24->obj;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v19->m_Items[1], (int32_t)v24, v17, v23);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_23894/*"to"*/;
  if ( StringLiteral_23894/*"to"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1BCB134(
                                                               StringLiteral_23894/*"to"*/,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = (const MethodInfo *)StringLiteral_23894/*"to"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v19->max_length <= 2 )
    goto LABEL_64;
  v19->m_Items[2] = (Il2CppObject *)v16;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v19->m_Items[2], (int32_t)v16, v17, v25);
  v54 = 1065353216;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v54, v26, v27, v28);
  v30 = BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1BCB134(
                                                               BondsIconArray,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
  }
  if ( v19->max_length <= 3 )
    goto LABEL_64;
  v19->m_Items[3] = &v30->obj;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v19->m_Items[3], (int32_t)v30, v17, v29);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22237/*"onupdate"*/;
  if ( StringLiteral_22237/*"onupdate"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1BCB134(
                                                               StringLiteral_22237/*"onupdate"*/,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = (const MethodInfo *)StringLiteral_22237/*"onupdate"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v19->max_length <= 4 )
    goto LABEL_64;
  v19->m_Items[4] = (Il2CppObject *)v16;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v19->m_Items[4], (int32_t)v16, v17, v31);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_15078/*"UpdateValue"*/;
  if ( StringLiteral_15078/*"UpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1BCB134(
                                                               StringLiteral_15078/*"UpdateValue"*/,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = (const MethodInfo *)StringLiteral_15078/*"UpdateValue"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v19->max_length <= 5 )
    goto LABEL_64;
  v19->m_Items[5] = (Il2CppObject *)v16;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v19->m_Items[5], (int32_t)v16, v17, v32);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22229/*"oncomplete"*/;
  if ( StringLiteral_22229/*"oncomplete"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1BCB134(
                                                               StringLiteral_22229/*"oncomplete"*/,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = (const MethodInfo *)StringLiteral_22229/*"oncomplete"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v19->max_length <= 6 )
    goto LABEL_64;
  v19->m_Items[6] = (Il2CppObject *)v16;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v19->m_Items[6], (int32_t)v16, v17, v33);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_6682/*"FinishUpdateValue"*/;
  if ( StringLiteral_6682/*"FinishUpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1BCB134(
                                                               StringLiteral_6682/*"FinishUpdateValue"*/,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = (const MethodInfo *)StringLiteral_6682/*"FinishUpdateValue"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v19->max_length <= 7 )
    goto LABEL_64;
  v19->m_Items[7] = (Il2CppObject *)v16;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v19->m_Items[7], (int32_t)v16, v17, v34);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_23855/*"time"*/;
  if ( StringLiteral_23855/*"time"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1BCB134(
                                                               StringLiteral_23855/*"time"*/,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = (const MethodInfo *)StringLiteral_23855/*"time"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v19->max_length <= 8 )
    goto LABEL_64;
  v19->m_Items[8] = (Il2CppObject *)v16;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v19->m_Items[8], (int32_t)v16, v17, v35);
  v53 = 1072064102;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v53, v36, v37, v38);
  v40 = BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1BCB134(
                                                               BondsIconArray,
                                                               v19->obj.klass->_1.element_class);
    if ( !BondsIconArray )
    {
LABEL_66:
      v52 = sub_1BCB278(BondsIconArray);
      sub_1BCB120(v52, 0LL);
    }
  }
  if ( v19->max_length <= 9 )
    goto LABEL_64;
  v19->m_Items[9] = &v40->obj;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v19->m_Items[9], (int32_t)v40, v17, v39);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v41 = iTween__Hash(v19, 0LL);
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
      BattleResultBondsIconComponent__StartUpdateBuddyPoint((BattleResultBondsIconComponent_o *)BondsIconArray, v16);
      max_length = v44->max_length;
      if ( (int)++v45 >= max_length )
        goto LABEL_57;
    }
LABEL_64:
    sub_1BCB25C(BondsIconArray, v16, v17);
  }
LABEL_57:
  if ( this->fields.updateFlg )
  {
    v46 = Method_BattleResultBondsComponent_OpenEnd__;
    if ( (*((_BYTE *)Method_BattleResultBondsComponent_OpenEnd__ + 83) & 2) != 0 )
      v46 = (_QWORD *)sub_1BCB010(Method_BattleResultBondsComponent_OpenEnd__);
    v47 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v46, v46[4]);
    if ( !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    CommonSeName = SeManager__GetCommonSeName(15, 0LL);
    v49 = OverwriteAssetSoundName__PlaySe(v47, CommonSeName, 0, 0LL);
    this->fields.MeterSePlayer = v49;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.MeterSePlayer, (int32_t)v49, v50, v51);
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
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_4B1FB6D & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__,
      battleData);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__,
      v19);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__,
      v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__, v21);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__, v22);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__, v23);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__, v24);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v25);
    byte_4B1FB6D = 1;
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
        sub_1BCB25C(bondsList, v27, v28);
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
  v36 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  bondsList = (System_Collections_Generic_List_object__o *)this->fields.bondsList;
  if ( !bondsList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    bondsList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
  {
    if ( !v43.fields._current )
      sub_1BCB254(0LL, v37);
    BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                      (BattleResultBondsDeckPerWaveComponent_o *)v43.fields._current,
                                                                      v37);
    if ( !v36 )
      sub_1BCB254(BondsIconArray, BondsIconArray);
    System_Collections_Generic_List_object___AddRange(
      v36,
      BondsIconArray,
      (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
  if ( !v36 )
LABEL_21:
    sub_1BCB254(bondsList, v27);
  v39 = System_Collections_Generic_List_object___ToArray(
          v36,
          (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
  this->fields.bondsIconArray = (struct BattleResultBondsIconComponent_array *)v39;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.bondsIconArray, (int32_t)v39, v40, v41);
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
  const MethodInfo *userSvtId; // x1
  Il2CppObject *v51; // x25
  BattleResultBondsComponent_o *v52; // x19
  Il2CppObject *v53; // x29
  struct BattleResultBondsDeckPerWaveComponent_o *multiBondsPrefab; // x19
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *v56; // x1
  UnityEngine_Object_o *v57; // x9
  __int64 v58; // x2
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x6
  System_Collections_Generic_IEnumerable_TSource__o *rewardInfos; // x21
  BattleResultBondsComponent___c_c *v62; // x0
  System_Func_object__bool__o *_9__49_0; // x19
  Il2CppObject *v64; // x20
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x0
  System_Collections_Generic_List_TSource__o *v69; // x0
  System_Collections_Generic_List_object__o *v70; // x21
  BattleResultBondsComponent_c *v71; // x0
  BattleResultBondsComponent_c *v72; // x0
  Il2CppObject *String_70094888; // x19
  System_Collections_Generic_IEnumerable_T__o *v74; // x0
  BattleResultBondsComponent_c *v75; // x0
  System_String_o *GET_NEW_SVT_KEY; // x20
  System_Object_array *v77; // x19
  System_String_o *v78; // x0
  BattleResultBondsComponent___c_c *v79; // x0
  System_Collections_Generic_IEnumerable_TSource__o *getJoinSvts; // x21
  System_Func_object__bool__o *_9__49_1; // x19
  Il2CppObject *v82; // x20
  struct BattleResultBondsComponent___c_StaticFields *v83; // x0
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x0
  System_Collections_Generic_List_TSource__o *v87; // x0
  System_Collections_Generic_List_object__o *v88; // x21
  BattleResultBondsComponent_c *v89; // x0
  BattleResultBondsComponent_c *v90; // x0
  Il2CppObject *v91; // x19
  System_Collections_Generic_IEnumerable_T__o *v92; // x0
  BattleResultBondsComponent_c *v93; // x0
  System_String_o *GET_EXIST_SVT_KEY; // x20
  System_Object_array *v95; // x19
  System_String_o *v96; // x0
  struct BattleDeckServantData_array *svts; // x22
  int max_length; // w8
  unsigned int v99; // w21
  int32_t v100; // w20
  BattleDeckServantData_o *v101; // x26
  Il2CppObject *v102; // x28
  UserServantEntity_o *v103; // x24
  BattleResultBondsComponent_o *SvtId; // x0
  const MethodInfo *v105; // x3
  Il2CppObject *v106; // x27
  Il2CppObject *Entity; // x22
  int32_t IconLimitCount; // w25
  signed int v109; // w8
  int32_t v110; // w29
  unsigned int v111; // w19
  BattleUserServantData_o *v112; // x20
  __int128 v113; // q0
  const MethodInfo *v114; // x5
  int32_t afterLimitCount; // w26
  BattleResultBondsIconComponent_o *v116; // x19
  int32_t v117; // w0
  int afterIconLimitCount; // w8
  bool v119; // zf
  bool v120; // zf
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x19
  BattleBuddyPointInfo_o *v122; // x20
  System_Func_object__bool__o *v123; // x20
  BattleResultBondsIconComponent_o *v124; // x28
  struct BattleResultBondsIconComponent_array *v125; // x8
  const MethodInfo *v126; // x3
  const MethodInfo *v127; // x2
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  bool v129; // w19
  const MethodInfo *v130; // x2
  const MethodInfo *v131; // x1
  bool v132; // w8
  bool updateFlg; // w19
  bool v134; // w8
  const MethodInfo *v135; // x1
  struct BattleResultBondsIconComponent_array *v136; // x8
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  __int64 v139; // x8
  _QWORD *v140; // x9
  __int64 v141; // x10
  __int64 v142; // x8
  const MethodInfo *v143; // [xsp+0h] [xbp-120h]
  int32_t cnt; // [xsp+14h] [xbp-10Ch]
  ServantLimitImageMaster_o *svtLimitImageMaster; // [xsp+18h] [xbp-108h]
  UserServantCollectionMaster_o *MasterData_object; // [xsp+28h] [xbp-F8h]
  BattleResultBondsDeckPerWaveComponent_o *Object_object; // [xsp+30h] [xbp-F0h]
  UnityEngine_Object_o *x; // [xsp+38h] [xbp-E8h]
  Il2CppObject *v150; // [xsp+40h] [xbp-E0h]
  struct BattleDeckServantData_array *v151; // [xsp+48h] [xbp-D8h]
  int32_t Type; // [xsp+5Ch] [xbp-C4h]
  UserServantCollectionEntity_o *userSvtCol; // [xsp+68h] [xbp-B8h]
  il2cpp_array_size_t v156; // [xsp+74h] [xbp-ACh]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v158; // [xsp+80h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v159; // [xsp+A0h] [xbp-80h]

  if ( (byte_4B1FB6E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___, myDeck);
    sub_1BCAFF8(&Method_BasicHelper_Find_BattleBuddyPointInfo___, v14);
    sub_1BCAFF8(&BattleResultBondsComponent_TypeInfo, v15);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v17);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, v18);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v19);
    sub_1BCAFF8(&DataManager_TypeInfo, v20);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v22);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_GetSvts___, v23);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_QuestRewardInfo___, v24);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_GetSvts___, v25);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_QuestRewardInfo___, v26);
    sub_1BCAFF8(&System_Func_GetSvts__bool__TypeInfo, v27);
    sub_1BCAFF8(&System_Func_BattleBuddyPointInfo__bool__TypeInfo, v28);
    sub_1BCAFF8(&System_Func_QuestRewardInfo__bool__TypeInfo, v29);
    sub_1BCAFF8(&Method_JsonManager_DeserializeArray_GetSvts___, v30);
    sub_1BCAFF8(&Method_JsonManager_DeserializeArray_QuestRewardInfo___, v31);
    sub_1BCAFF8(&JsonManager_TypeInfo, v32);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__, v33);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GetSvts__AddRange__, v34);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__, v35);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GetSvts__ToArray__, v36);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__, v37);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GetSvts__get_Count__, v38);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__, v39);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v40);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v41);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42);
    sub_1BCAFF8(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__, v43);
    sub_1BCAFF8(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__, v44);
    sub_1BCAFF8(&Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__, v45);
    sub_1BCAFF8(&BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo, v46);
    sub_1BCAFF8(&BattleResultBondsComponent___c_TypeInfo, v47);
    byte_4B1FB6E = 1;
  }
  Type = Follower__getType(followerType, 0LL);
  if ( Type )
    v48 = 5;
  else
    v48 = 6;
  cnt = v48;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_149;
  MasterData_object = (UserServantCollectionMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_149;
  v51 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_149;
  v52 = this;
  v53 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( this->fields.isMultiDeck )
  {
    Instance = (int64_t)this->fields.multiBondsRoot;
    if ( !Instance )
      goto LABEL_149;
    multiBondsPrefab = this->fields.multiBondsPrefab;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    v56 = (Il2CppObject *)multiBondsPrefab;
    v52 = this;
    Object_object = (BattleResultBondsDeckPerWaveComponent_o *)BaseMonoBehaviour__createObject_object_(
                                                                 (BaseMonoBehaviour_o *)this,
                                                                 v56,
                                                                 transform,
                                                                 0LL,
                                                                 (const MethodInfo_30037F4 *)Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    if ( this->fields.isMultiDeck )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      svtLimitImageMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
      goto LABEL_149;
    Instance = BattleData__IsWarBoard((BattleData_o *)x, 0LL);
    v52->fields.isWarboard = Instance & 1;
    if ( (Instance & 1) != 0 )
    {
      if ( !battleResult )
        goto LABEL_149;
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
        _9__49_0 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_QuestRewardInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__49_0,
          v64,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__,
          0LL);
        static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
        static_fields->__9__49_0 = (struct System_Func_QuestRewardInfo__bool__o *)_9__49_0;
        sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v66, v67);
      }
      v68 = System_Linq_Enumerable__Where_object_(
              rewardInfos,
              (System_Func_TSource__bool__o *)_9__49_0,
              (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
      v69 = System_Linq_Enumerable__ToList_object_(
              v68,
              (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
      if ( v69 )
      {
        v70 = (System_Collections_Generic_List_object__o *)v69;
        if ( v69->fields._size >= 1 )
        {
          v71 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v71 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v71->static_fields->GET_NEW_SVT_KEY, 0LL) )
          {
            v72 = BattleResultBondsComponent_TypeInfo;
            if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v72 = BattleResultBondsComponent_TypeInfo;
            }
            String_70094888 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70094888(
                                                v72->static_fields->GET_NEW_SVT_KEY,
                                                0LL);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v74 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_object_(
                                                                   String_70094888,
                                                                   (const MethodInfo_3086694 *)Method_JsonManager_DeserializeArray_QuestRewardInfo___);
            System_Collections_Generic_List_object___AddRange(
              v70,
              v74,
              (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
          }
          v75 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v75 = BattleResultBondsComponent_TypeInfo;
          }
          GET_NEW_SVT_KEY = v75->static_fields->GET_NEW_SVT_KEY;
          v77 = System_Collections_Generic_List_object___ToArray(
                  v70,
                  (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v78 = JsonManager__toJson(&v77->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_NEW_SVT_KEY, v78, 0LL);
        }
      }
      v79 = BattleResultBondsComponent___c_TypeInfo;
      getJoinSvts = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.getJoinSvts;
      if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v79 = BattleResultBondsComponent___c_TypeInfo;
      }
      _9__49_1 = (System_Func_object__bool__o *)v79->static_fields->__9__49_1;
      if ( !_9__49_1 )
      {
        if ( !v79->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v79);
          v79 = BattleResultBondsComponent___c_TypeInfo;
        }
        v82 = (Il2CppObject *)v79->static_fields->__9;
        _9__49_1 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_GetSvts__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__49_1,
          v82,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__,
          0LL);
        v83 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        v83->__9__49_1 = (struct System_Func_GetSvts__bool__o *)_9__49_1;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v83->__9__49_1, (int32_t)_9__49_1, v84, v85);
      }
      v86 = System_Linq_Enumerable__Where_object_(
              getJoinSvts,
              (System_Func_TSource__bool__o *)_9__49_1,
              (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_GetSvts___);
      v87 = System_Linq_Enumerable__ToList_object_(
              v86,
              (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_GetSvts___);
      if ( v87 )
      {
        v88 = (System_Collections_Generic_List_object__o *)v87;
        if ( v87->fields._size >= 1 )
        {
          v89 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v89 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v89->static_fields->GET_EXIST_SVT_KEY, 0LL) )
          {
            v90 = BattleResultBondsComponent_TypeInfo;
            if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v90 = BattleResultBondsComponent_TypeInfo;
            }
            v91 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70094888(
                                    v90->static_fields->GET_EXIST_SVT_KEY,
                                    0LL);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v92 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_object_(
                                                                   v91,
                                                                   (const MethodInfo_3086694 *)Method_JsonManager_DeserializeArray_GetSvts___);
            System_Collections_Generic_List_object___AddRange(
              v88,
              v92,
              (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_GetSvts__AddRange__);
          }
          v93 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v93 = BattleResultBondsComponent_TypeInfo;
          }
          GET_EXIST_SVT_KEY = v93->static_fields->GET_EXIST_SVT_KEY;
          v95 = System_Collections_Generic_List_object___ToArray(
                  v88,
                  (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_GetSvts__ToArray__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v96 = JsonManager__toJson(&v95->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_EXIST_SVT_KEY, v96, 0LL);
        }
      }
      UnityEngine_PlayerPrefs__Save(0LL);
      v52 = this;
    }
  }
  if ( !myDeck )
    goto LABEL_149;
  svts = myDeck->fields.svts;
  if ( !svts )
    goto LABEL_149;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v99 = 0;
    v100 = 0;
    v150 = v51;
    v151 = myDeck->fields.svts;
    while ( 1 )
    {
      if ( v99 >= max_length )
LABEL_150:
        sub_1BCB25C(Instance, userSvtId, v58);
      v101 = svts->m_Items[v99];
      v102 = (Il2CppObject *)sub_1BCB244(BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo);
      System_Object___ctor(v102, 0LL);
      if ( !v101 || !v102 )
        goto LABEL_149;
      userSvtId = (const MethodInfo *)v101->fields.userSvtId;
      v102[1].klass = (Il2CppClass *)userSvtId;
      if ( (__int64)userSvtId < 1 )
      {
        Instance = (int64_t)x;
        if ( !x )
          goto LABEL_149;
        Instance = BattleData__IsInterruptionQuest((BattleData_o *)x, 0LL);
        if ( (Instance & 1) == 0 )
          goto LABEL_135;
        if ( v52->fields.isMultiDeck )
        {
          Instance = (int64_t)Object_object;
          if ( !Object_object )
            goto LABEL_149;
          Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, userSvtId);
          v116 = (BattleResultBondsIconComponent_o *)Instance;
          if ( !Instance )
            goto LABEL_149;
        }
        else
        {
          v136 = v52->fields.collects;
          if ( !v136 )
            goto LABEL_149;
          if ( v100 >= v136->max_length )
            goto LABEL_150;
          v116 = v136->m_Items[v100];
          if ( !v116 )
            goto LABEL_149;
        }
        BattleResultBondsIconComponent__setServantData(v116, 0LL, 0LL, 0, 0, 0, 0, 0, v143);
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v116, 0LL);
        if ( !Instance )
          goto LABEL_149;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        v52 = this;
      }
      else
      {
        if ( !v51 )
          goto LABEL_149;
        Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v51,
                              (int64_t)userSvtId,
                              (const MethodInfo_32CA35C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !Instance )
          goto LABEL_149;
        v103 = (UserServantEntity_o *)Instance;
        v156 = v100;
        SvtId = (BattleResultBondsComponent_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
        userSvtCol = BattleResultBondsComponent__getServantCollection(SvtId, oldCollects, (int32_t)SvtId, v105);
        Instance = UserServantEntity__getSvtId(v103, 0LL);
        if ( !v53 )
          goto LABEL_149;
        v106 = v53;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v53,
                   Instance,
                   (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        IconLimitCount = UserServantEntity__getIconLimitCount(v103, 0, 0LL);
        Instance = UserServantEntity__getDispLimitCount(v103, 0, 0LL);
        if ( !usrSvts )
          goto LABEL_149;
        v109 = usrSvts->max_length;
        v110 = Instance;
        if ( v109 < 1 )
        {
LABEL_86:
          afterLimitCount = -1;
        }
        else
        {
          v111 = 0;
          while ( 1 )
          {
            if ( v111 >= v109 )
              goto LABEL_150;
            v112 = usrSvts->m_Items[v111];
            if ( !v112 )
              goto LABEL_149;
            v113 = *(_OWORD *)&v112->fields.id.fields.fakeValue;
            *(_OWORD *)&v159.fields.currentCryptoKey = *(_OWORD *)&v112->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v159.fields.fakeValue = v113;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v158 = v159;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v158, 0LL);
            if ( (Il2CppClass *)Instance == v102[1].klass )
              break;
            v109 = usrSvts->max_length;
            if ( (int)++v111 >= v109 )
              goto LABEL_86;
          }
          if ( this->fields.isMultiDeck )
            BattleResultBondsComponent__UpdateAfterLimitCount(
              (BattleResultBondsComponent_o *)Instance,
              (BattleData_o *)x,
              v112,
              v101,
              svtLimitImageMaster,
              v114);
          v117 = UserServantEntity__getIconLimitCount((UserServantEntity_o *)v112, 0, 0LL);
          afterIconLimitCount = v112->fields.afterIconLimitCount;
          v119 = afterIconLimitCount < 0 || v117 == afterIconLimitCount;
          IconLimitCount = v119 ? v117 : v112->fields.afterIconLimitCount;
          Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v112, 0, 0LL);
          afterLimitCount = v112->fields.afterLimitCount;
          v120 = afterLimitCount < 0 || (_DWORD)Instance == afterLimitCount;
          v110 = v120 ? Instance : v112->fields.afterLimitCount;
        }
        if ( !battleResult )
          goto LABEL_149;
        buddyPointInfos = battleResult->fields.buddyPointInfos;
        if ( buddyPointInfos )
        {
          v122 = 0LL;
          if ( *(_QWORD *)&buddyPointInfos->max_length && !isHideBuddyPointResult )
          {
            v123 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_BattleBuddyPointInfo__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v123,
              v102,
              Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__,
              0LL);
            Instance = (int64_t)BasicHelper__Find_object_(
                                  (System_Object_array *)buddyPointInfos,
                                  (System_Func_T__bool__o *)v123,
                                  (const MethodInfo_3004AE8 *)Method_BasicHelper_Find_BattleBuddyPointInfo___);
            v122 = (BattleBuddyPointInfo_o *)Instance;
          }
        }
        else
        {
          v122 = 0LL;
        }
        if ( this->fields.isMultiDeck )
        {
          Instance = (int64_t)Object_object;
          if ( !Object_object )
            goto LABEL_149;
          Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, userSvtId);
          v124 = (BattleResultBondsIconComponent_o *)Instance;
          if ( !Instance )
            goto LABEL_149;
        }
        else
        {
          v125 = this->fields.collects;
          if ( !v125 )
            goto LABEL_149;
          if ( v156 >= v125->max_length )
            goto LABEL_150;
          v124 = v125->m_Items[v156];
          if ( !v124 )
            goto LABEL_149;
        }
        BattleResultBondsIconComponent__setServantData(
          v124,
          userSvtCol,
          v103,
          IconLimitCount,
          v110,
          this->fields.baseFriendshipExp,
          Type == 0,
          afterLimitCount,
          v143);
        BattleResultBondsIconComponent__SetBuddyPointInfo(v124, v122, battleResult->fields.eventId, v126);
        if ( !Entity )
          goto LABEL_149;
        v51 = v150;
        v53 = v106;
        if ( ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Entity, 0LL)
          && !UserServantEntity__IsAddFriendShipHeroine(v103, 0LL) )
        {
          updateFlg = this->fields.updateFlg;
          v134 = updateFlg | BattleResultBondsIconComponent__setNextServantData(v124, userSvtCol, v127);
          v52 = this;
          v100 = v156;
          svts = v151;
          this->fields.updateFlg = v134;
          v124->fields.isNoFriendship = 1;
        }
        else
        {
          Instance = (int64_t)MasterData_object;
          v100 = v156;
          svts = v151;
          if ( !MasterData_object )
            goto LABEL_149;
          EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                               MasterData_object,
                               v124->fields.userId,
                               v124->fields.svtId,
                               0LL);
          v129 = this->fields.updateFlg;
          v132 = v129 | BattleResultBondsIconComponent__setNextServantData(v124, EntityDefinitely, v130);
          v52 = this;
          this->fields.updateFlg = v132;
        }
        BattleResultBondsIconComponent__ChangeGauge(v124, 0.0, v131);
        BattleResultBondsIconComponent__InitBuddyPointInfo(v124, v135);
        if ( v52->fields.isMultiDeck )
        {
          Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v124, 0LL);
          if ( !Instance )
            goto LABEL_149;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        }
      }
      ++v100;
LABEL_135:
      max_length = svts->max_length;
      if ( (int)++v99 >= max_length )
        goto LABEL_138;
    }
  }
  v100 = 0;
LABEL_138:
  if ( !v52->fields.isMultiDeck )
  {
    BattleResultBondsComponent__NormalBondsInit(v52, v100, cnt, Type == 0, battleResult, isHideBuddyPointResult, v60);
    return;
  }
  if ( !Object_object )
    goto LABEL_149;
  BattleResultBondsDeckPerWaveComponent__SetWaveCount(Object_object, currentWave, maxWave, v59);
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object_object, 0LL);
  if ( !Instance )
    goto LABEL_149;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)Object_object->fields.iconRoot;
  if ( !Instance
    || ((*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
          Instance,
          *(_QWORD *)(*(_QWORD *)Instance + 448LL)),
        (Instance = (int64_t)v52->fields.multiBondsRoot) == 0)
    || ((*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
          Instance,
          *(_QWORD *)(*(_QWORD *)Instance + 448LL)),
        (Instance = (int64_t)v52->fields.bondsList) == 0)
    || (v139 = *(_QWORD *)(Instance + 16),
        v140 = Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__,
        ++*(_DWORD *)(Instance + 28),
        !v139) )
  {
LABEL_149:
    sub_1BCB254(Instance, userSvtId);
  }
  v141 = *(int *)(Instance + 24);
  if ( (unsigned int)v141 >= *(_DWORD *)(v139 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)Object_object,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
  }
  else
  {
    v142 = v139 + 8 * v141;
    *(_DWORD *)(Instance + 24) = v141 + 1;
    *(_QWORD *)(v142 + 32) = Object_object;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v142 + 32), (int32_t)Object_object, v137, v138);
  }
}


void __fastcall BattleResultBondsComponent__SkipUpdateValue(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
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
        sub_1BCB25C(BondsIconArray, v4, v5);
      BondsIconArray = (BattleResultBondsIconComponent_array *)v7->m_Items[v8];
      if ( !BondsIconArray )
        break;
      BattleResultBondsIconComponent__FinishBuddyPointInfoUpdate((BattleResultBondsIconComponent_o *)BondsIconArray, v4);
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_7;
    }
LABEL_9:
    sub_1BCB254(BondsIconArray, v4);
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

  if ( (byte_4B1FB7F & 1) == 0 )
  {
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, battleData);
    this = (BattleResultBondsComponent_o *)sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_4B1FB7F = 1;
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
  if ( Follower__IsNpc(Type, 0LL) || SLODWORD(deckSvtData->fields.dropInfos) > 0 )
    return;
  v15 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v15;
  *(_QWORD *)&v27.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v27, 0LL);
  this = (BattleResultBondsComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                           userSvtData->fields.limitCount,
                                           0LL);
  if ( !svtLimitImageMaster )
LABEL_26:
    sub_1BCB254(this, battleData);
  if ( ServantLimitImageMaster__IsServantLimitCountSeal(svtLimitImageMaster, v16, (int32_t)this, 0LL) )
  {
    v18 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v28.fields.currentCryptoKey = v18;
    *(_QWORD *)&v28.fields.fakeValue = v17;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v28, 0LL);
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
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v29, 0LL);
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
        sub_1BCB25C(BondsIconArray, v5, v6);
      BondsIconArray = (BattleResultBondsIconComponent_array *)v8->m_Items[v9];
      if ( !BondsIconArray )
        break;
      BondsIconArray = (BattleResultBondsIconComponent_array *)BattleResultBondsIconComponent__ChangeGauge(
                                                                 (BattleResultBondsIconComponent_o *)BondsIconArray,
                                                                 val,
                                                                 v5);
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_9:
    sub_1BCB254(BondsIconArray, v5);
  }
}


void __fastcall BattleResultBondsComponent___checkShow_b__67_0(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  struct BattleFriendshipRewardInfo_array *showList; // x8
  __int64 showIndex; // x9
  BattleResultBondsComponent_o *v6; // x19
  BattleFriendshipRewardInfo_o *v7; // x8
  struct BattleResultComponent_o *parentComp; // x8
  struct BattleResultComponent_o *v9; // x8

  showList = this->fields.showList;
  if ( !showList )
    goto LABEL_16;
  showIndex = this->fields.showIndex;
  v6 = this;
  if ( (unsigned int)showIndex >= showList->max_length )
    sub_1BCB25C(this, method, v2);
  v7 = showList->m_Items[showIndex];
  if ( !v7 )
    goto LABEL_16;
  this = (BattleResultBondsComponent_o *)this->fields.parentComp;
  if ( !this )
    goto LABEL_16;
  BattleResultComponent__showServantRewardAction(
    (BattleResultComponent_o *)this,
    v7->fields.userSvtId,
    v7->fields.type,
    v3);
  parentComp = v6->fields.parentComp;
  ++v6->fields.showIndex;
  if ( !parentComp )
    goto LABEL_16;
  this = (BattleResultBondsComponent_o *)parentComp->fields.obj_fronttouch;
  if ( !this )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v9 = v6->fields.parentComp;
  if ( !v9 )
    goto LABEL_16;
  this = (BattleResultBondsComponent_o *)v9->fields.obj_basebg;
  if ( !this )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( v6->fields.isMultiDeck )
  {
    this = (BattleResultBondsComponent_o *)v6->fields.multiDeckWindow;
    if ( !this )
      goto LABEL_16;
  }
  else
  {
    this = (BattleResultBondsComponent_o *)v6->fields.window;
    if ( !this )
      goto LABEL_16;
  }
  this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (BattleResultBondsComponent_o *)v6->fields.upRoot) == 0LL) )
  {
LABEL_16:
    sub_1BCB254(this, method);
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
        int32_t type,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_GameObject_o *Object; // x0
  __int64 v22; // x1
  UnityEngine_GameObject_o *v23; // x20
  Il2CppObject *ComponentInChildren_object; // x23
  BattleResultBondsComponent_c *v25; // x0
  Il2CppObject *v26; // x25
  bool v27; // w0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x4
  UISprite_o *v31; // x0
  int32_t v32; // w1
  UnityEngine_Transform_o *transform; // x21
  float v34; // s8
  float y; // s9
  int v36; // s2
  float v37; // s0
  float v38; // s1
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 klass_low; // x10
  __int64 v42; // x8
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1FB74 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, text);
    sub_1BCAFF8(&BattleResultBondsComponent_TypeInfo, v15);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___, v16);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__Add__, v18);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v19);
    sub_1BCAFF8(&StringLiteral_17127/*"bit_reward_shine02"*/, v20);
    byte_4B1FB74 = 1;
  }
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             this->fields.confPrefab,
             this->fields.confRoot,
             0LL,
             0LL);
  if ( !Object )
    goto LABEL_42;
  v23 = Object;
  Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Object, 0LL);
  if ( !Object )
    goto LABEL_42;
  v43.fields.y = -112.0 - posY;
  v43.fields.x = 0.0;
  v43.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v43, 0LL);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 v23,
                                 (const MethodInfo_306E974 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                         (UnityEngine_Object_o *)ComponentInChildren_object,
                                         0LL,
                                         0LL);
  if ( ((unsigned __int8)Object & 1) != 0 )
  {
    if ( !ComponentInChildren_object )
      goto LABEL_42;
    if ( type == 18 || isCoin )
    {
      UILabel__set_overflowMethod((UILabel_o *)ComponentInChildren_object, 2, 0LL);
      UILabel__set_text((UILabel_o *)ComponentInChildren_object, text, 0LL);
      v25 = BattleResultBondsComponent_TypeInfo;
      if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
        v25 = BattleResultBondsComponent_TypeInfo;
      }
      UILabel__SetCondensedScale(
        (UILabel_o *)ComponentInChildren_object,
        v25->static_fields->CONF_LABEL_MAX_WIDTH - 36,
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
  v26 = UnityEngine_GameObject__GetComponentInChildren_object_(
          v23,
          (const MethodInfo_306E974 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v27 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0LL, 0LL);
  if ( (iconImageId & 0x80000000) == 0 && v27 )
  {
    if ( type == 18 )
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v32 = 9;
      v31 = (UISprite_o *)v26;
    }
    else
    {
      if ( type != 2 )
      {
LABEL_31:
        BattleResultBondsComponent__CreateRewardEffect(
          this,
          this->fields.resultAssetData,
          (UISprite_o *)v26,
          (System_String_o *)StringLiteral_17127/*"bit_reward_shine02"*/,
          v30);
        if ( ComponentInChildren_object )
        {
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ComponentInChildren_object, 0LL);
          Object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)ComponentInChildren_object,
                                                 0LL);
          if ( Object )
          {
            LODWORD(v34) = (unsigned int)UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)Object,
                                           0LL);
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
                *(UnityEngine_Vector3_o *)(&v36 - 2) = UnityEngine_Transform__get_localPosition(
                                                         (UnityEngine_Transform_o *)Object,
                                                         0LL);
                if ( transform )
                {
                  v37 = v34 + 36.0;
                  v38 = y;
                  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v36 - 2), 0LL);
                  goto LABEL_37;
                }
              }
            }
          }
        }
LABEL_42:
        sub_1BCB254(Object, v22);
      }
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v31 = (UISprite_o *)v26;
      v32 = iconImageId;
      if ( isCoin )
      {
        AtlasManager__SetCoin((UISprite_o *)v26, iconImageId, 0LL);
        goto LABEL_31;
      }
    }
    AtlasManager__SetItem(v31, v32, 0LL);
    goto LABEL_31;
  }
LABEL_37:
  Object = (UnityEngine_GameObject_o *)this->fields.conflist;
  if ( !Object )
    goto LABEL_42;
  v39 = *(_QWORD *)&Object->fields.m_CachedPtr;
  v40 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(Object[1].klass);
  if ( !v39 )
    goto LABEL_42;
  klass_low = SLODWORD(Object[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v39 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Object,
      (Il2CppObject *)v23,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = v39 + 8 * klass_low;
    LODWORD(Object[1].klass) = klass_low + 1;
    *(_QWORD *)(v42 + 32) = v23;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v42 + 32), (int32_t)v23, v28, v29);
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
  System_Collections_Generic_List_object__o *conflist; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x1
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x2
  int32_t colIndex; // w8
  __int64 v29; // x9
  int32_t v30; // w10
  __int64 v31; // x11
  __int64 *v32; // x8
  __int64 v33; // x20
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 *v36; // x21
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_GameObject__o *v38; // x8
  int32_t size; // w2
  int v40; // w9
  UnityEngine_Object_o *levelUpSimpleAnim; // x22
  System_Collections_Generic_List_object__c *klass; // x8
  System_Collections_Generic_List_object__o *v43; // x22
  __int64 v44; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v46; // x0
  UnityEngine_Object_o *levelUpAnim; // x22
  __int64 v48; // x2
  const MethodInfo *v49; // x3
  __int64 v50; // x9
  __int64 v51; // x8
  __int64 v52; // x9
  struct BattleResultBondsIconComponent_o *v53; // x1
  UnityEngine_Object_o *figureMoveRoot; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o **v56; // x21
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  UnityEngine_GameObject_o *v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t svtId; // w22
  int32_t svtLimit; // w23
  BattleResultBondsFigureComponent_o *bondsFigure; // x19
  UnityEngine_GameObject_o *v66; // x21
  System_Action_o *v67; // x24
  const MethodInfo *v68; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1FB72 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__Clear__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    sub_1BCAFF8(&SimpleAnimation_State_TypeInfo, v10);
    sub_1BCAFF8(&BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo, v11);
    sub_1BCAFF8(&Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__, v12);
    sub_1BCAFF8(&BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo, v13);
    sub_1BCAFF8(&StringLiteral_17111/*"bit_result_levelup01"*/, v14);
    sub_1BCAFF8(&StringLiteral_3462/*"CLOSE"*/, v15);
    sub_1BCAFF8(&StringLiteral_5411/*"END_PROC"*/, v16);
    sub_1BCAFF8(&StringLiteral_3465/*"CLOSE_BOND_UP_ROOT"*/, v17);
    byte_4B1FB72 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  v18 = sub_1BCB244(BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_68;
  *(_QWORD *)(v18 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 16), (int32_t)this, v21, v22);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v23);
  *(_QWORD *)(v18 + 24) = BondsIconArray;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 24), (int32_t)BondsIconArray, v25, v26);
  colIndex = this->fields.colIndex;
  v29 = *(_QWORD *)(v18 + 24);
  *(_DWORD *)(v18 + 32) = colIndex;
  if ( !v29 )
    goto LABEL_68;
  v30 = *(_DWORD *)(v29 + 24);
  if ( colIndex >= v30 )
    goto LABEL_12;
  do
  {
    if ( colIndex >= (unsigned int)v30 )
    {
      this->fields.colIndex = colIndex;
      sub_1BCB25C(conflist, v20, v27);
    }
    v31 = *(_QWORD *)(v29 + 8LL * colIndex + 32);
    if ( !v31 )
    {
      this->fields.colIndex = colIndex;
      sub_1BCB254(conflist, v20);
    }
    if ( *(_BYTE *)(v31 + 128) && *(_DWORD *)(v31 + 176) != *(_DWORD *)(v31 + 184) )
    {
      this->fields.colIndex = colIndex;
      v33 = sub_1BCB244(BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v33, 0LL);
      if ( !v33 )
        goto LABEL_68;
      *(_QWORD *)(v33 + 24) = v18;
      v36 = (__int64 *)(v33 + 24);
      sub_1BCAF9C((CGThumbnailListItem_o *)(v33 + 24), v18, v34, v35);
      conflist = (System_Collections_Generic_List_object__o *)this->fields.conflist;
      if ( !conflist )
        goto LABEL_68;
      if ( conflist->fields._size >= 1 )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v69,
          conflist,
          (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
        v70 = v69;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v70,
                  (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
        {
          current = v70.fields._current;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_70136076((UnityEngine_Object_o *)current, 0LL);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v70,
          (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
        v38 = this->fields.conflist;
        if ( !v38 )
          goto LABEL_68;
        size = v38->fields._size;
        v40 = v38->fields._version + 1;
        v38->fields._size = 0;
        v38->fields._version = v40;
        if ( size >= 1 )
          System_Array__Clear((System_Array_o *)v38->fields._items, 0, size, 0LL);
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
                                                                  (System_String_o *)StringLiteral_17111/*"bit_result_levelup01"*/,
                                                                  0LL);
        if ( !conflist )
          goto LABEL_68;
        klass = conflist->klass;
        v43 = conflist;
        v44 = *(unsigned __int16 *)(&conflist->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&conflist->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v44;
            p_offset += 2;
            if ( !v44 )
              goto LABEL_41;
          }
          v46 = (__int64)(&klass->vtable._4_unknown.method + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_41:
          v46 = sub_1C1B560(conflist, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(System_Collections_Generic_List_object__o *, _QWORD, float))v46)(
          v43,
          *(_QWORD *)(v46 + 8),
          0.0);
        conflist = (System_Collections_Generic_List_object__o *)this->fields.levelUpSimpleAnim;
        if ( !conflist )
          goto LABEL_68;
        conflist = (System_Collections_Generic_List_object__o *)SimpleAnimation__Play_65395744(
                                                                  (SimpleAnimation_o *)conflist,
                                                                  (System_String_o *)StringLiteral_17111/*"bit_result_levelup01"*/,
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
                                                                    (System_String_o *)StringLiteral_17111/*"bit_result_levelup01"*/,
                                                                    0LL);
          if ( !conflist )
            goto LABEL_68;
          UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)conflist, 0.0, 0LL);
          conflist = (System_Collections_Generic_List_object__o *)this->fields.levelUpAnim;
          if ( !conflist )
            goto LABEL_68;
          conflist = (System_Collections_Generic_List_object__o *)UnityEngine_Animation__Play_69881360(
                                                                    (UnityEngine_Animation_o *)conflist,
                                                                    (System_String_o *)StringLiteral_17111/*"bit_result_levelup01"*/,
                                                                    0LL);
        }
      }
      v50 = *v36;
      if ( *v36 )
      {
        v51 = *(_QWORD *)(v50 + 24);
        if ( v51 )
        {
          v52 = *(int *)(v50 + 32);
          if ( (unsigned int)v52 >= *(_DWORD *)(v51 + 24) )
            sub_1BCB25C(conflist, v20, v48);
          v53 = *(struct BattleResultBondsIconComponent_o **)(v51 + 8 * v52 + 32);
          this->fields.openCollect = v53;
          sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.openCollect, (int32_t)v53, v48, v49);
          figureMoveRoot = (UnityEngine_Object_o *)this->fields.figureMoveRoot;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(figureMoveRoot, 0LL, 0LL) )
          {
            conflist = (System_Collections_Generic_List_object__o *)this->fields.figureMoveRoot;
            if ( !conflist )
              goto LABEL_68;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)conflist, 0LL);
            *(_QWORD *)(v33 + 16) = gameObject;
            v56 = (UnityEngine_GameObject_o **)(v33 + 16);
            sub_1BCAF9C((CGThumbnailListItem_o *)(v33 + 16), (int32_t)gameObject, v57, v58);
            conflist = *(System_Collections_Generic_List_object__o **)(v33 + 16);
            if ( !conflist )
              goto LABEL_68;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)conflist, 0, 0LL);
          }
          else
          {
            conflist = (System_Collections_Generic_List_object__o *)this->fields.figureRoot;
            if ( !conflist )
              goto LABEL_68;
            v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)conflist, 0LL);
            *(_QWORD *)(v33 + 16) = v59;
            v56 = (UnityEngine_GameObject_o **)(v33 + 16);
            sub_1BCAF9C((CGThumbnailListItem_o *)(v33 + 16), (int32_t)v59, v60, v61);
          }
          openCollect = this->fields.openCollect;
          if ( openCollect )
          {
            svtId = openCollect->fields.svtId;
            svtLimit = openCollect->fields.svtLimit;
            bondsFigure = this->fields.bondsFigure;
            v66 = *v56;
            v67 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
            System_Action___ctor(
              v67,
              (Il2CppObject *)v33,
              Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__,
              0LL);
            if ( bondsFigure )
            {
              BattleResultBondsFigureComponent__SetupFigure(bondsFigure, v66, svtId, svtLimit, 7, 0, 51, v67, v68);
              return;
            }
          }
        }
      }
LABEL_68:
      sub_1BCB254(conflist, v20);
    }
    *(_DWORD *)(v18 + 32) = ++colIndex;
  }
  while ( colIndex < v30 );
  this->fields.colIndex = colIndex - 1;
LABEL_12:
  conflist = (System_Collections_Generic_List_object__o *)this->fields.myFsm;
  if ( !this->fields.openBoundsFlg )
  {
    if ( conflist )
    {
      v32 = &StringLiteral_3462/*"CLOSE"*/;
      goto LABEL_27;
    }
    goto LABEL_68;
  }
  if ( !conflist )
    goto LABEL_68;
  if ( this->fields.isMultiDeck )
    v32 = &StringLiteral_3465/*"CLOSE_BOND_UP_ROOT"*/;
  else
    v32 = &StringLiteral_5411/*"END_PROC"*/;
LABEL_27:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)conflist, (System_String_o *)*v32, 0LL);
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
  struct BattleResultComponent_o *v10; // x8
  struct BattleResultComponent_o *v11; // x8
  const MethodInfo *v12; // x3

  if ( (byte_4B1FB78 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_BattleResultBondsComponent__checkShow_b__67_0__, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v4);
    byte_4B1FB78 = 1;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
        v8 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleResultBondsComponent__checkShow_b__67_0__, 0LL);
        if ( Instance )
        {
          SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v8, 0LL);
          return;
        }
        goto LABEL_23;
      }
      parentComp = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      if ( !parentComp )
        goto LABEL_23;
      SummonAssetManager__UnloadSummonAssets(parentComp, 0LL);
    }
  }
  parentComp = (SummonAssetManager_o *)this->fields.parentComp;
  if ( !parentComp )
    goto LABEL_23;
  BattleResultComponent__ResetPlayScreenTouch((BattleResultComponent_o *)parentComp, method);
  v10 = this->fields.parentComp;
  if ( !v10 )
    goto LABEL_23;
  parentComp = (SummonAssetManager_o *)v10->fields.obj_fronttouch;
  if ( !parentComp )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)parentComp, 1, 0LL);
  v11 = this->fields.parentComp;
  if ( !v11 )
    goto LABEL_23;
  parentComp = (SummonAssetManager_o *)v11->fields.obj_basebg;
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
    sub_1BCB254(parentComp, method);
  }
  BattleResultComponent__showServantRewardAction((BattleResultComponent_o *)parentComp, 0LL, 1, v12);
}


void __fastcall BattleResultBondsComponent__closeBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  void *effectUIList; // x0
  int32_t v10; // w20
  int32_t v11; // w2
  int v12; // w8
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  struct BattleResultComponent_o *parentComp; // x8
  struct BattleWindowComponent_o *confwindow; // x20
  BattleWindowComponent_EndCall_o *v17; // x21

  if ( (byte_4B1FB79 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleResultBondsComponent_closeBondUp__, method);
    sub_1BCAFF8(&Method_BattleResultBondsComponent_endCloseBondUp__, v3);
    sub_1BCAFF8(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIUnityRenderer__Clear__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__, v7);
    byte_4B1FB79 = 1;
  }
  UnityEngine_Time__set_timeScale(this->fields.tempSaveTimeScale, 0LL);
  effectUIList = this->fields.effectUIList;
  if ( !effectUIList )
    goto LABEL_19;
  if ( *((int *)effectUIList + 6) >= 1 )
  {
    v10 = 0;
    do
    {
      effectUIList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)effectUIList,
                       v10,
                       (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
      if ( !effectUIList )
        goto LABEL_19;
      effectUIList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectUIList, 0LL);
      if ( !effectUIList )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectUIList, 0, 0LL);
      effectUIList = this->fields.effectUIList;
      if ( !effectUIList )
        goto LABEL_19;
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
    v13 = (_QWORD *)sub_1BCB010(Method_BattleResultBondsComponent_closeBondUp__);
  v14 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (effectUIList = parentComp->fields.obj_fronttouch) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectUIList, 0, 0LL),
        (effectUIList = this->fields.bondsFigure) == 0LL)
    || (BattleResultBondsFigureComponent__DestroyFigure((BattleResultBondsFigureComponent_o *)effectUIList, v8),
        confwindow = this->fields.confwindow,
        v17 = (BattleWindowComponent_EndCall_o *)sub_1BCB244(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v17,
          (Il2CppObject *)this,
          Method_BattleResultBondsComponent_endCloseBondUp__,
          0LL),
        !confwindow) )
  {
LABEL_19:
    sub_1BCB254(effectUIList, v8);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))confwindow->klass->vtable._12_Close.method)(
    confwindow,
    v17,
    confwindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultBondsComponent__endClose(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  ServantFaceIconComponent_o *BondsIconArray; // x0
  __int64 v8; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  ServantFaceIconComponent_o *v10; // x20
  int v11; // w21
  int v12; // w22
  __int64 v13; // x8
  __int64 v14; // x2

  if ( (byte_4B1FB7C & 1) == 0 )
  {
    sub_1BCAFF8(&OptionManager_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_5411/*"END_PROC"*/, v5);
    byte_4B1FB7C = 1;
  }
  this->fields.resultAssetData = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.resultAssetData, 0, v2, v3);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    BondsIconArray = (ServantFaceIconComponent_o *)BattleResultBondsComponent__GetBondsIconArray(this, v6);
    if ( !BondsIconArray )
      goto LABEL_17;
    m_CancellationTokenSource = BondsIconArray->fields.m_CancellationTokenSource;
    v10 = BondsIconArray;
    v11 = (_DWORD)m_CancellationTokenSource - 1;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        v13 = *((_QWORD *)&v10->fields.backSprite + v12);
        if ( !v13 )
          break;
        BondsIconArray = *(ServantFaceIconComponent_o **)(v13 + 48);
        if ( !BondsIconArray )
          break;
        ServantFaceIconComponent__ClearFaceAtlas(BondsIconArray, 0LL);
        if ( v11 == v12 )
          goto LABEL_14;
        if ( (unsigned int)++v12 >= LODWORD(v10->fields.m_CancellationTokenSource) )
          sub_1BCB25C(BondsIconArray, v8, v14);
      }
LABEL_17:
      sub_1BCB254(BondsIconArray, v8);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_5411/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultBondsComponent__endCloseBondUp(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B1FB7A & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_5411/*"END_PROC"*/, method);
    byte_4B1FB7A = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCB254(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5411/*"END_PROC"*/, 0LL);
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
  __int64 v37; // x1
  System_Text_StringBuilder_o *v38; // x21
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  __int64 lvComp; // x0
  __int64 v42; // x1
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t friendshipRank; // w22
  int32_t svtId; // w25
  int v46; // w29
  Il2CppObject *current; // x23
  System_String_o *v48; // x0
  __int64 v49; // x1
  System_String_o *v50; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v52; // x1
  const MethodInfo *v53; // x6
  struct BattleResultBondsIconComponent_o *v54; // x8
  int32_t svtLimit; // w23
  int32_t ServantLimitCountSealAfter; // w23
  __int64 *v57; // x8
  int v58; // w21
  bool v59; // w23
  System_String_o *v60; // x0
  const MethodInfo *v61; // x6
  struct BattleResultBondsIconComponent_o *v62; // x8
  System_String_o *v63; // x0
  const MethodInfo *v64; // x6
  System_Collections_Generic_List_object__o *v65; // x22
  __int64 v66; // x2
  struct BattleFriendshipRewardInfo_array *rewardInfos; // x24
  int max_length; // w8
  int v69; // w21
  int CONF_SERVANT_COIN_PLUS_HEIGHT; // w26
  struct BattleResultBondsIconComponent_o *v71; // x8
  BattleFriendshipRewardInfo_o *v72; // x25
  GiftEntity_o *v73; // x26
  int32_t type; // w8
  Il2CppObject *v75; // x0
  System_String_o *v76; // x27
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  Il2CppObject *v80; // x0
  Il2CppObject *v81; // x0
  ServantEntity_o *v82; // x27
  Il2CppObject *Master_object; // x28
  int32_t v84; // w1
  System_String_o *v85; // x0
  const MethodInfo *v86; // x6
  int32_t v87; // w5
  System_String_o *v88; // x1
  float v89; // s0
  int32_t objectId; // w2
  System_String_o *v91; // x0
  bool v92; // w27
  Il2CppObject *Name; // x27
  System_String_o *v94; // x0
  System_String_o *v95; // x28
  int32_t IconImageId; // w0
  const MethodInfo *v97; // x6
  BattleResultBondsComponent_c *v98; // x0
  const MethodInfo *v99; // x3
  struct System_Object_array *items; // x8
  _QWORD *v101; // x9
  __int64 size; // x10
  Il2CppClass **v103; // x0
  System_Object_array *v104; // x0
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  int v107; // w20
  UnityEngine_Transform_o *confRoot; // x21
  unsigned int localPosition; // s0
  int v110; // w8
  float v111; // s1
  int v112; // w20
  float v113; // s1
  int v114; // s2
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *rankupConfLabel; // x21
  struct BattleWindowComponent_o *confwindow; // x20
  BattleWindowComponent_EndCall_o *v118; // x21
  int32_t key; // [xsp+4h] [xbp-CCh]
  System_Text_StringBuilder_o *v120; // [xsp+8h] [xbp-C8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v121; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_object__o v122; // [xsp+18h] [xbp-B8h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+30h] [xbp-A0h] BYREF
  System_String_o *countText; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v125; // [xsp+40h] [xbp-90h] BYREF
  System_String_o *nameText; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4B1FB76 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleResultBondsComponent_endMoveFigure__, method);
    sub_1BCAFF8(&Method_BattleResultBondsComponent_openedBondUp__, v3);
    sub_1BCAFF8(&BattleResultBondsComponent_TypeInfo, v4);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_1BCAFF8(&DataManager_TypeInfo, v10);
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v11);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1BCAFF8(&BattleWindowComponent_EndCall_TypeInfo, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v16);
    sub_1BCAFF8(&int_TypeInfo, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__, v21);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo, v22);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v23);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v24);
    sub_1BCAFF8(&ServantCommentManager_TypeInfo, v25);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1BCAFF8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v27);
    sub_1BCAFF8(&System_Text_StringBuilder_TypeInfo, v28);
    sub_1BCAFF8(&StringLiteral_11015/*"RESULT_BOUNDS_OPENQUEST"*/, v29);
    sub_1BCAFF8(&StringLiteral_113/*" "*/, v30);
    sub_1BCAFF8(&StringLiteral_11018/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/, v31);
    sub_1BCAFF8(&StringLiteral_11017/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, v32);
    sub_1BCAFF8(&StringLiteral_11013/*"RESULT_BOUNDS_GET_COIN_NAME"*/, v33);
    sub_1BCAFF8(&StringLiteral_11010/*"RESULT_BOUNDS_GETVOICE"*/, v34);
    sub_1BCAFF8(&StringLiteral_24914/*"{0} {1}"*/, v35);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v36);
    sub_1BCAFF8(&StringLiteral_11012/*"RESULT_BOUNDS_GET_COIN_COUNT"*/, v37);
    byte_4B1FB76 = 1;
  }
  memset(&v125, 0, sizeof(v125));
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  v38 = (System_Text_StringBuilder_o *)sub_1BCB244(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v38, 0LL);
  v39 = Method_BattleResultBondsComponent_endMoveFigure__;
  if ( (*((_BYTE *)Method_BattleResultBondsComponent_endMoveFigure__ + 83) & 2) != 0 )
    v39 = (_QWORD *)sub_1BCB010(Method_BattleResultBondsComponent_endMoveFigure__);
  v40 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v39, v39[4]);
  OverwriteAssetSoundName__PlaySystemSe(v40, 6, 0, 0LL);
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
    0LL);
  lvComp = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !lvComp )
    goto LABEL_120;
  v120 = v38;
  lvComp = (__int64)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                      (clsQuestCheck_o *)lvComp,
                      svtId,
                      friendshipRank,
                      8,
                      0LL);
  if ( lvComp )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v122,
      (System_Collections_Generic_List_object__o *)lvComp,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    v46 = 0;
    v125 = v122;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v125,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
    {
      current = v125.fields._current;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v48 = LocalizationManager__Get((System_String_o *)StringLiteral_11015/*"RESULT_BOUNDS_OPENQUEST"*/, 0LL);
      if ( !current )
        sub_1BCB254(v48, v49);
      v50 = v48;
      QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
      v52 = System_String__Format(v50, QuestName, 0LL);
      BattleResultBondsComponent__addConfObject(this, v52, (float)v46 * 22.0, -1, 0, 0, 1, v53);
      v46 += 3;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v125,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  }
  else
  {
    v46 = 0;
  }
  v54 = this->fields.openCollect;
  if ( !v54 )
    goto LABEL_120;
  svtLimit = v54->fields.svtLimit;
  lvComp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lvComp )
    goto LABEL_120;
  lvComp = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)lvComp,
                      (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !lvComp )
    goto LABEL_120;
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
    v57 = &StringLiteral_11018/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/;
    v58 = 4;
    v59 = 1;
  }
  else
  {
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    lvComp = ServantCommentManager__IsOpenByServantFriendShip_42605712(
               svtId,
               friendshipRank,
               ServantLimitCountSealAfter,
               0LL);
    if ( (lvComp & 1) == 0 )
      goto LABEL_33;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v57 = &StringLiteral_11017/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/;
    v59 = 0;
    v58 = 2;
  }
  v60 = LocalizationManager__Get((System_String_o *)*v57, 0LL);
  BattleResultBondsComponent__addConfObject(this, v60, (float)v46 * 22.0, -1, 0, v59, 1, v61);
  v46 += v58;
LABEL_33:
  v62 = this->fields.openCollect;
  if ( !v62 )
    goto LABEL_120;
  if ( ServantVoiceMaster__isOpenByServantFriendShip(svtId, v62->fields.maxLimitCount, friendshipRank, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v63 = LocalizationManager__Get((System_String_o *)StringLiteral_11010/*"RESULT_BOUNDS_GETVOICE"*/, 0LL);
    BattleResultBondsComponent__addConfObject(this, v63, (float)v46 * 22.0, -1, 0, 0, 1, v64);
    v46 += 2;
  }
  if ( !this->fields.rewardInfos )
  {
    CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
    goto LABEL_104;
  }
  v65 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v65,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ItemMaster___);
  rewardInfos = this->fields.rewardInfos;
  if ( !rewardInfos )
    goto LABEL_120;
  max_length = rewardInfos->max_length;
  if ( max_length < 1 )
  {
    CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
    if ( !v65 )
      goto LABEL_120;
    goto LABEL_103;
  }
  v121 = (DataMasterBase_TMaster__TEntity__PKType__o *)lvComp;
  key = svtId;
  v69 = 0;
  CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
  do
  {
    if ( v69 >= (unsigned int)max_length )
      sub_1BCB25C(lvComp, v42, v66);
    v71 = this->fields.openCollect;
    if ( !v71 )
      goto LABEL_120;
    v72 = rewardInfos->m_Items[v69];
    if ( !v72 )
      goto LABEL_120;
    if ( v71->fields.svtId == v72->fields.targetSvtId )
    {
      lvComp = (__int64)BattleFriendshipRewardInfo__getGiftEntity(v72, 0LL);
      if ( !lvComp )
        goto LABEL_120;
      v73 = (GiftEntity_o *)lvComp;
      GiftEntity__GetInfo((GiftEntity_o *)lvComp, &nameText, &countText, 0LL);
      if ( GiftEntity__isQp(v73, 0LL) )
      {
        nameText = countText;
        countText = (System_String_o *)StringLiteral_1/*""*/;
      }
      type = v73->fields.type;
      if ( type == 1 )
      {
        v85 = System_String__Concat_62488672(nameText, (System_String_o *)StringLiteral_113/*" "*/, countText, 0LL);
        v87 = v73->fields.type;
        v88 = v85;
        v89 = (float)v46 * 22.0;
        objectId = -1;
      }
      else
      {
        if ( type == 2 )
        {
          lvComp = (__int64)v121;
          if ( !v121 )
            goto LABEL_120;
          v75 = DataMasterBase_object__object__int___GetEntity(
                  v121,
                  v73->fields.objectId,
                  (const MethodInfo_32C7E00 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( v75 && LODWORD(v75[3].klass) == 29 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v76 = LocalizationManager__Get((System_String_o *)StringLiteral_11012/*"RESULT_BOUNDS_GET_COIN_COUNT"*/, 0LL);
            LODWORD(v122.fields._list) = v73->fields.num;
            v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v122, v77, v78, v79);
            countText = System_String__Format(v76, v80, 0LL);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
            if ( !lvComp )
              goto LABEL_120;
            v81 = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)lvComp,
                    key,
                    (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( v81 )
            {
              v82 = (ServantEntity_o *)v81;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4B165D1 )
              {
                sub_1BCAFF8(&NetworkManager_TypeInfo, v42);
                byte_4B165D1 = 1;
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
                     0LL) )
              {
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                if ( !entity )
                  goto LABEL_120;
                if ( !lvComp )
                  goto LABEL_120;
                lvComp = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                           (ServantLimitImageMaster_o *)lvComp,
                           key,
                           entity->fields.maxLimitCount,
                           0LL);
                if ( !entity )
                  goto LABEL_120;
                if ( (_DWORD)lvComp == entity->fields.maxLimitCount )
                  v84 = -1;
                else
                  v84 = lvComp;
              }
              else
              {
                v84 = -1;
              }
              Name = (Il2CppObject *)ServantEntity__getName(v82, v84, -1, 0, 0LL);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v94 = LocalizationManager__Get((System_String_o *)StringLiteral_11013/*"RESULT_BOUNDS_GET_COIN_NAME"*/, 0LL);
              nameText = System_String__Format_62491716(v94, (Il2CppObject *)nameText, Name, 0LL);
            }
            v92 = 1;
          }
          else
          {
            v92 = 0;
          }
          v95 = System_String__Format_62491716(
                  (System_String_o *)StringLiteral_24914/*"{0} {1}"*/,
                  (Il2CppObject *)nameText,
                  (Il2CppObject *)countText,
                  0LL);
          IconImageId = GiftEntity__getIconImageId(v73, 0LL);
          BattleResultBondsComponent__addConfObject(
            this,
            v95,
            (float)v46 * 22.0,
            IconImageId,
            v92,
            0,
            v73->fields.type,
            v97);
          goto LABEL_90;
        }
        v91 = System_String__Format_62491716(
                (System_String_o *)StringLiteral_24914/*"{0} {1}"*/,
                (Il2CppObject *)nameText,
                (Il2CppObject *)countText,
                0LL);
        v87 = v73->fields.type;
        objectId = v73->fields.objectId;
        v88 = v91;
        v89 = (float)v46 * 22.0;
      }
      BattleResultBondsComponent__addConfObject(this, v88, v89, objectId, 0, 0, v87, v86);
LABEL_90:
      v98 = BattleResultBondsComponent_TypeInfo;
      if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
        v98 = BattleResultBondsComponent_TypeInfo;
      }
      v46 += 2;
      CONF_SERVANT_COIN_PLUS_HEIGHT = v98->static_fields->CONF_SERVANT_COIN_PLUS_HEIGHT;
      lvComp = BattleFriendshipRewardInfo__isShow(v72, 0LL);
      if ( (lvComp & 1) != 0 )
      {
        if ( !v65 )
          goto LABEL_120;
        items = v65->fields._items;
        v101 = Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__;
        ++v65->fields._version;
        if ( !items )
          goto LABEL_120;
        size = v65->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v65,
            (Il2CppObject *)v72,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
        }
        else
        {
          v103 = &items->obj.klass + size;
          v65->fields._size = size + 1;
          v103[4] = (Il2CppClass *)v72;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v103 + 4), (int32_t)v72, v66, v99);
        }
      }
    }
    max_length = rewardInfos->max_length;
    ++v69;
  }
  while ( v69 < max_length );
  if ( !v65 )
    goto LABEL_120;
LABEL_103:
  v104 = System_Collections_Generic_List_object___ToArray(
           v65,
           (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
  this->fields.showList = (struct BattleFriendshipRewardInfo_array *)v104;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.showList, (int32_t)v104, v105, v106);
  this->fields.showIndex = 0;
LABEL_104:
  lvComp = (__int64)this->fields.confSprite;
  if ( v46 )
    v107 = v46;
  else
    v107 = 1;
  if ( !lvComp )
    goto LABEL_120;
  UIWidget__set_height((UIWidget_o *)lvComp, CONF_SERVANT_COIN_PLUS_HEIGHT + 22 * v107 + 120, 0LL);
  confRoot = this->fields.confRoot;
  if ( !confRoot )
    goto LABEL_120;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.confRoot, 0LL);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT >= 0 )
    v110 = CONF_SERVANT_COIN_PLUS_HEIGHT;
  else
    v110 = CONF_SERVANT_COIN_PLUS_HEIGHT + 1;
  v111 = (float)v107;
  v112 = v110 >> 1;
  v113 = (float)(v111 * 11.0) + (float)(v110 >> 1);
  v114 = 0;
  UnityEngine_Transform__set_localPosition(confRoot, *(UnityEngine_Vector3_o *)&localPosition, 0LL);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT )
  {
    lvComp = (__int64)this->fields.confwindow;
    if ( lvComp )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lvComp, 0LL);
      GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v112, 0LL);
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
    sub_1BCB254(lvComp, v42);
  }
LABEL_116:
  if ( !v120 )
    goto LABEL_120;
  rankupConfLabel = this->fields.rankupConfLabel;
  lvComp = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v120->klass->vtable._3_ToString.method)(
             v120,
             v120->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !rankupConfLabel )
    goto LABEL_120;
  UILabel__set_text(rankupConfLabel, (System_String_o *)lvComp, 0LL);
  confwindow = this->fields.confwindow;
  v118 = (BattleWindowComponent_EndCall_o *)sub_1BCB244(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v118,
    (Il2CppObject *)this,
    Method_BattleResultBondsComponent_openedBondUp__,
    0LL);
  if ( !confwindow )
    goto LABEL_120;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))confwindow->klass->vtable._10_Open.method)(
    confwindow,
    v118,
    confwindow->klass->vtable._11_CompOpen.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
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
        sub_1BCB25C(this, collects, *(_QWORD *)&svtId);
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
    sub_1BCB254(this, collects);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCB254(this, deck);
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0LL;
  v6 = 0;
  while ( 1 )
  {
    if ( max_length == v6 )
      sub_1BCB25C(this, deck, *(_QWORD *)&index);
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
    sub_1BCB254(this, method);
  return (signed int)oldCollections->max_length > 1;
}


void __fastcall BattleResultBondsComponent__openedBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0
  struct BattleResultComponent_o *v4; // x8

  if ( (byte_4B1FB77 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_5406/*"END_OPEN"*/, method);
    byte_4B1FB77 = 1;
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
    sub_1BCB254(parentComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)parentComp, (System_String_o *)StringLiteral_5406/*"END_OPEN"*/, 0LL);
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

  if ( (byte_4B1FB83 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleResultBondsComponent___c_TypeInfo, v1);
    byte_4B1FB83 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(BattleResultBondsComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleResultBondsComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultBondsComponent___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)BattleResultBondsComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BCB254(this, 0LL);
  return col->fields.isUse;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_0(
        BattleResultBondsComponent___c_o *this,
        QuestRewardInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.type == 7 && x->fields.isNew;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_1(
        BattleResultBondsComponent___c_o *this,
        GetSvts_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
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
    sub_1BCB254(this, 0LL);
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
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v22; // x21
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  const MethodInfo *v26; // x3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v27; // x22
  const MethodInfo *v28; // x3
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  const MethodInfo *v32; // x3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v33; // x22
  const MethodInfo *v34; // x3
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  const MethodInfo *v38; // x3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v39; // x22
  const MethodInfo *v40; // x3
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v41; // x8
  const MethodInfo *v42; // x3
  BattleResultBondsComponent___c__DisplayClass61_1_o *v43; // x22
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x3
  System_Collections_Hashtable_o *v46; // x0
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v47; // x8
  struct BattleResultBondsComponent_o *v48; // x8
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v49; // x8
  struct BattleResultBondsIconComponent_array *bondsIcons; // x9
  __int64 i; // x10
  __int64 v52; // x0
  char v53[4]; // [xsp+4h] [xbp-3Ch] BYREF
  int v54; // [xsp+8h] [xbp-38h] BYREF
  int v55; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4B1FB84 & 1) == 0 )
  {
    sub_1BCAFF8(&bool_TypeInfo, method);
    sub_1BCAFF8(&object___TypeInfo, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    sub_1BCAFF8(&float_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_24645/*"x"*/, v6);
    sub_1BCAFF8(&StringLiteral_9553/*"OPEN"*/, v7);
    sub_1BCAFF8(&StringLiteral_23855/*"time"*/, v8);
    sub_1BCAFF8(&StringLiteral_22231/*"oncompletetarget"*/, v9);
    sub_1BCAFF8(&StringLiteral_18854/*"endMoveFigure"*/, v10);
    sub_1BCAFF8(&StringLiteral_20782/*"islocal"*/, v11);
    sub_1BCAFF8(&StringLiteral_22229/*"oncomplete"*/, v12);
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1BCAFF8(&iTween_TypeInfo, v13);
    byte_4B1FB84 = 1;
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
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1BCB0A0(object___TypeInfo, 10LL);
  if ( !this )
    goto LABEL_69;
  v22 = this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_24645/*"x"*/;
  if ( StringLiteral_24645/*"x"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1BCB134(
                                                                   StringLiteral_24645/*"x"*/,
                                                                   v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_24645/*"x"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( !LODWORD(v22->fields.CS___8__locals1) )
    goto LABEL_70;
  v22[1].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)method;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v22[1], (int32_t)method, (int32_t)v20, v21);
  v55 = -1007026176;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v55, v23, v24, v25);
  v27 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1BCB134(this, v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v22->fields.CS___8__locals1) <= 1 )
    goto LABEL_70;
  v22[1].monitor = v27;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v22[1].monitor, (int32_t)v27, (int32_t)v20, v26);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_23855/*"time"*/;
  if ( StringLiteral_23855/*"time"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1BCB134(
                                                                   StringLiteral_23855/*"time"*/,
                                                                   v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_23855/*"time"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v22->fields.CS___8__locals1) <= 2 )
    goto LABEL_70;
  v22[1].fields.parent = (struct UnityEngine_GameObject_o *)method;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v22[1].fields, (int32_t)method, (int32_t)v20, v28);
  v54 = 1061997773;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v54, v29, v30, v31);
  v33 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1BCB134(this, v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v22->fields.CS___8__locals1) <= 3 )
    goto LABEL_70;
  v22[1].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v33;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v22[1].fields.CS___8__locals1, (int32_t)v33, (int32_t)v20, v32);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_20782/*"islocal"*/;
  if ( StringLiteral_20782/*"islocal"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1BCB134(
                                                                   StringLiteral_20782/*"islocal"*/,
                                                                   v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_20782/*"islocal"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v22->fields.CS___8__locals1) <= 4 )
    goto LABEL_70;
  v22[2].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)method;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v22[2], (int32_t)method, (int32_t)v20, v34);
  v53[0] = 1;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(bool_TypeInfo, v53, v35, v36, v37);
  v39 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1BCB134(this, v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v22->fields.CS___8__locals1) <= 5 )
    goto LABEL_70;
  v22[2].monitor = v39;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v22[2].monitor, (int32_t)v39, (int32_t)v20, v38);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22231/*"oncompletetarget"*/;
  if ( StringLiteral_22231/*"oncompletetarget"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1BCB134(
                                                                   StringLiteral_22231/*"oncompletetarget"*/,
                                                                   v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_22231/*"oncompletetarget"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v22->fields.CS___8__locals1) <= 6 )
    goto LABEL_70;
  v22[2].fields.parent = (struct UnityEngine_GameObject_o *)method;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v22[2].fields, (int32_t)method, (int32_t)v20, v40);
  v41 = v2->fields.CS___8__locals1;
  if ( !v41 || (this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v41->fields.__4__this) == 0LL )
LABEL_69:
    sub_1BCB254(this, method);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
  v43 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1BCB134(this, v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v22->fields.CS___8__locals1) <= 7 )
    goto LABEL_70;
  v22[2].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v43;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v22[2].fields.CS___8__locals1, (int32_t)v43, (int32_t)v20, v42);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22229/*"oncomplete"*/;
  if ( StringLiteral_22229/*"oncomplete"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1BCB134(
                                                                   StringLiteral_22229/*"oncomplete"*/,
                                                                   v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_22229/*"oncomplete"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v22->fields.CS___8__locals1) <= 8 )
    goto LABEL_70;
  v22[3].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)method;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v22[3], (int32_t)method, (int32_t)v20, v44);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_18854/*"endMoveFigure"*/;
  if ( !StringLiteral_18854/*"endMoveFigure"*/ )
  {
    method = 0LL;
    goto LABEL_57;
  }
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1BCB134(
                                                                 StringLiteral_18854/*"endMoveFigure"*/,
                                                                 v22->klass->_1.element_class);
  if ( !this )
  {
LABEL_71:
    v52 = sub_1BCB278(this);
    sub_1BCB120(v52, 0LL);
  }
  method = (const MethodInfo *)StringLiteral_18854/*"endMoveFigure"*/;
LABEL_57:
  if ( LODWORD(v22->fields.CS___8__locals1) <= 9 )
    goto LABEL_70;
  v22[3].monitor = (void *)method;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v22[3].monitor, (int32_t)method, (int32_t)v20, v45);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v46 = iTween__Hash((System_Object_array *)v22, 0LL);
  iTween__MoveFrom_62089460(parent, v46, 0LL);
LABEL_61:
  v47 = v2->fields.CS___8__locals1;
  if ( !v47 )
    goto LABEL_69;
  v48 = v47->fields.__4__this;
  if ( !v48 )
    goto LABEL_69;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v48->fields.myFsm;
  v48->fields.openBoundsFlg = 1;
  if ( !this )
    goto LABEL_69;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9553/*"OPEN"*/, 0LL);
  v49 = v2->fields.CS___8__locals1;
  if ( !v49 )
    goto LABEL_69;
  bondsIcons = v49->fields.bondsIcons;
  if ( !bondsIcons )
    goto LABEL_69;
  i = v49->fields.i;
  if ( (unsigned int)i >= bondsIcons->max_length )
LABEL_70:
    sub_1BCB25C(this, method, v20);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v49->fields.__4__this;
  if ( !this )
    goto LABEL_69;
  BattleResultBondsComponent__CheckFormalJoin((BattleResultBondsComponent_o *)this, bondsIcons->m_Items[i], v20);
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

  if ( (byte_4B1FB85 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B1FB85 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
  CommonUI__CreateServantCoinConfirmDialog((CommonUI_o *)Instance, 1, this->fields.coin, 0LL, 0LL);
}